// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14337e0c2 FUN_14337e0c2 body=89 status=ok
// SIG undefined FUN_14337e0c2(void)

void FUN_14337e0c2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(longlong *)(param_1[0x15] + 0x5a8) != 0) {
    FUN_147829b64();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014337e10a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14337e150 FUN_14337e150 body=12 status=ok
// SIG undefined FUN_14337e150(void)

void FUN_14337e150(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014337e159. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14337e15c FUN_14337e15c body=29 status=ok
// SIG undefined FUN_14337e15c(void)

undefined8 FUN_14337e15c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14337e17a FUN_14337e17a body=282 status=ok
// SIG undefined FUN_14337e17a(void)

undefined8 * FUN_14337e17a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14337cc4b);
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



// FUNCTION 14337e316 FUN_14337e316 body=12 status=ok
// SIG undefined FUN_14337e316(void)

void FUN_14337e316(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014337e31f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14337e322 FUN_14337e322 body=29 status=ok
// SIG undefined FUN_14337e322(void)

undefined8 FUN_14337e322(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14337e340 FUN_14337e340 body=282 status=ok
// SIG undefined FUN_14337e340(void)

undefined8 * FUN_14337e340(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14337cc4b);
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



// FUNCTION 14337e4a2 FUN_14337e4a2 body=379 status=ok
// SIG undefined FUN_14337e4a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14337e4a2(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = &PTR_FUN_14a5a5e50;
  local_58 = 1;
  local_68 = 0;
  FUN_14282b410(L"/Script/MRMesh",&PTR_FUN_14a5a5e70,1,0);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cabcf34);
  if (cVar1 == '\0') {
    _DAT_14cabcf34 = 0;
    uRam000000014cabcf3c = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  FUN_14282b410(L"/Script/MRMesh",&PTR_FUN_14a5a7880,2,0);
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  local_68 = local_68 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cabcfd0,L"r.MrMesh.BrickCullingDebugState",&local_48,
                L"MR Mesh brick culling debug state: 0=off, 1=on, 2=paused");
  atexit(FUN_14337b209);
  local_48 = 0x800000014a5a7982;
  local_34 = 6;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146368d2c(&local_48);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/MRMesh",&PTR_FUN_14a5a81a0,1,&PTR_FUN_14a5a8170);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14337e620 FUN_14337e620 body=57 status=ok
// SIG undefined FUN_14337e620(void)

void FUN_14337e620(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd0c0 == 0) {
    uVar1 = FUN_1463690f5();
    DAT_14cabd0c0 = FUN_14171c317(FUN_146369124,uVar1,L"EMoviePlaybackType");
  }
  return;
}



// FUNCTION 14337e659 FUN_14337e659 body=59 status=ok
// SIG undefined FUN_14337e659(void)

void FUN_14337e659(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cabd110;
  if (DAT_14cabd110 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cabd110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014337e689. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14337e694 FUN_14337e694 body=6485 status=ok
// SIG undefined FUN_14337e694(void)

void FUN_14337e694(longlong param_1,code *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  undefined1 auStack_1028 [32];
  code **local_1008;
  longlong local_ff8;
  undefined8 local_ff0;
  undefined1 local_fe1;
  undefined1 local_fe0 [8];
  longlong *local_fd8;
  undefined8 local_fc1;
  longlong *local_fb8;
  undefined1 local_fa1;
  undefined8 local_fa0;
  longlong *local_f98;
  undefined1 local_f81;
  undefined8 local_f80;
  undefined8 local_f78;
  undefined1 local_f70;
  undefined8 *local_f68;
  ulonglong uStack_f60;
  undefined8 local_f58;
  longlong *local_f50;
  undefined8 local_f48;
  longlong *local_f40;
  undefined8 local_f38;
  longlong *local_f30;
  undefined1 local_f21;
  undefined1 local_f20 [8];
  longlong *local_f18;
  undefined1 local_f01;
  undefined8 local_f00;
  longlong *local_ef8;
  undefined8 local_ee8;
  longlong *local_ee0;
  undefined8 local_ed8;
  longlong *local_ed0;
  undefined8 local_ec8;
  longlong *local_ec0;
  undefined8 local_eb8;
  longlong *local_eb0;
  undefined8 local_ea8;
  longlong *local_ea0;
  longlong local_e98;
  longlong *local_e90;
  undefined8 local_e88;
  longlong *plStack_e80;
  undefined1 local_e78;
  undefined8 *local_e70;
  ulonglong uStack_e68;
  undefined8 *local_e58 [2];
  longlong *local_e48;
  undefined8 *local_e28;
  int local_e20;
  char local_e14;
  char local_e0c;
  char local_e04;
  undefined8 *local_e00 [2];
  longlong *local_df0;
  undefined8 *local_dd0;
  int local_dc8;
  undefined4 local_dc0;
  char local_dbc;
  undefined4 local_db8;
  char local_db4;
  char local_dac;
  code *local_da8;
  int local_da0;
  undefined ***local_d98;
  undefined **local_d88;
  longlong local_d80;
  double local_c00;
  double local_bf8;
  undefined8 local_be8;
  undefined8 uStack_be0;
  undefined1 local_bd8;
  undefined8 *local_bd0;
  int local_bc8;
  undefined8 local_b80;
  undefined1 local_b78;
  undefined8 *local_b70;
  int local_b68;
  undefined1 local_a70 [448];
  undefined8 local_8b0;
  longlong *local_8a8;
  undefined8 local_8a0;
  longlong *local_898;
  undefined1 local_6cf;
  undefined8 local_690;
  float local_688;
  float fStack_684;
  undefined8 local_4b8;
  longlong *local_4b0;
  undefined1 local_3e8 [424];
  longlong local_240;
  undefined4 local_238;
  undefined1 local_230 [424];
  code *local_88;
  int local_80;
  code *local_78;
  int local_70;
  code *local_68;
  int local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1028;
  if (*(char *)(param_1 + 0x1c8) != '\0') goto LAB_14337e6c5;
  local_ff8 = param_1 + -0x10;
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar22 + 0xc60);
  lVar21 = local_ff8;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        bVar25 = DVar9 == DVar10;
      }
      else {
        bVar25 = iVar8 == 0x10;
      }
      lVar21 = local_ff8;
      if (!bVar25) goto LAB_14337fab6;
    }
LAB_14337e758:
    FUN_145965062(lVar21,0);
  }
  else {
    if (iVar8 == 0x10) goto LAB_14337e758;
LAB_14337fab6:
    lVar21 = local_ff8;
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar22 + 0xc60), iVar8 == 2))
      goto LAB_14337e758;
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14337e758;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar16 = (uint *)*puVar3;
      if (puVar16 != (uint *)0x0) goto LAB_14337fb9b;
      do {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_14338221d);
        }
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar15 = *(undefined4 **)(lVar22 + 0x310);
        *(undefined8 *)(lVar22 + 0x310) = 0;
        if (puVar15 == (undefined4 *)0x0) {
          puVar15 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar15 = 0xffffffff;
        *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar3 = puVar15;
        FUN_140217a48(puVar3);
        puVar16 = (uint *)*puVar3;
LAB_14337fb9b:
        uVar23 = *(longlong *)(puVar16 + 0x10) + 7;
        uVar17 = puVar16[0x12];
        while( true ) {
          puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
          if (puVar24 + 0x16 <= puVar16 + 0x4000) {
            *(undefined8 **)(puVar16 + 0x10) = puVar24 + 0x16;
            puVar16[0x12] = uVar17 + 1;
            iVar8 = 0;
            FUN_1447247dc(puVar24,0);
            *puVar24 = &PTR_FUN_14a5a9e18;
            puVar24[0x15] = lVar21;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar17 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
                uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
                iVar8 = 0;
              }
              else {
                uVar23 = 2;
              }
            }
            else {
              iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                      *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar23 = 5;
            }
            if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
            }
            puVar24[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar24[9] = puVar24;
            puVar24[10] = puVar24;
            lVar22 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar22 == 0) {
              uVar7 = 1;
              if ((char)uVar23 != '\x06') {
                uVar7 = uVar23;
              }
              uVar23 = uVar7;
              uVar12 = 0;
            }
            else {
              if ((char)uVar23 == '\x06') {
                uVar23 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
              }
              uVar12 = *(undefined8 *)(lVar22 + 0x30);
            }
            puVar24[0xf] = uVar12;
            puVar24[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar24 + 0x1c) = iVar8;
            if (puVar24 == (undefined8 *)0x0) {
              local_da8 = (code *)CONCAT71(local_da8._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
              UNLOCK();
              local_da8 = (code *)CONCAT71(local_da8._1_7_,1);
              FUN_1447439e4(puVar24);
              LOCK();
              piVar1 = (int *)(puVar24 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar24)(puVar24,1);
              }
            }
            goto LAB_14337e762;
          }
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
          LOCK();
          uVar4 = *puVar16;
          *puVar16 = *puVar16 + uVar17 + 1;
          UNLOCK();
          if ((uVar4 ^ uVar17) != 0xffffffff) break;
          puVar16 = (uint *)*puVar3;
          *puVar16 = 0xffffffff;
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar3 = puVar16;
          uVar23 = (longlong)puVar16 + 0x5f;
          uVar17 = 0;
        }
      } while( true );
    }
    local_1008 = &local_da8;
    local_d98 = (undefined ***)0x0;
    local_d88 = &PTR_LAB_14a5a9dc0;
    local_da8 = (code *)&LAB_14338268c;
    local_d80 = lVar21;
    FUN_14005a792(&DAT_14ca9a440,L"RegisterMoviePlayerTickable",&DAT_14cabd174);
    if (local_da8 != (code *)0x0) {
      pppuVar19 = local_d98;
      if (local_d98 == (undefined ***)0x0) {
        pppuVar19 = &local_d88;
      }
      (*(code *)(*pppuVar19)[2])();
    }
  }
LAB_14337e762:
  *(undefined1 *)(param_1 + 0x1c8) = 1;
  local_da8 = FUN_1411f31c0;
  local_da0 = 0;
  FUN_145914baa(&DAT_14c964278,&local_690,lVar21,&local_da8);
  local_da8 = (code *)&LAB_145725122;
  local_da0 = 0x10;
  FUN_1456f2aea(&DAT_14c8673d8,&local_690,lVar21,&local_da8);
  FUN_142855ca4();
  lVar22 = *param_3;
  if (lVar22 == 0) {
    thunk_FUN_16260e056(&local_e98);
  }
  else {
    local_e90 = (longlong *)param_3[1];
    local_e98 = lVar22;
    if (local_e90 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e90 + 1) = (int)local_e90[1] + 1;
      UNLOCK();
    }
  }
  FUN_140761ace(&local_da8);
  FUN_140c2d2b0(local_e98,&local_690);
  local_bf8 = (double)(fStack_684 - local_690._4_4_);
  local_c00 = (double)(local_688 - (float)local_690);
  local_1008 = (code **)local_230;
  FUN_140763374(&local_690,"SVirtualWindow",
                ".\\Runtime/MoviePlayer/Private/DefaultGameMoviePlayer.cpp",0x106);
  FUN_140761c10(&local_690,&local_8a0,&local_da8);
  plVar11 = local_898;
  lVar22 = local_ff8;
  if (local_898 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x70) = local_8a0;
    plVar18 = *(longlong **)(param_1 + 0x78);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
LAB_14337e91b:
      LOCK();
      plVar11 = plVar18 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x00014337e902:
        if (iVar8 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_898 + 1) = (int)local_898[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x70) = local_8a0;
    plVar18 = *(longlong **)(param_1 + 0x78);
    if (local_898 == plVar18) {
      LOCK();
      plVar18 = local_898 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_898)(local_898);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        lVar22 = local_ff8;
        plVar18 = plVar11;
        goto joined_r0x00014337e902;
      }
    }
    else {
      *(longlong **)(param_1 + 0x78) = local_898;
      if (plVar18 != (longlong *)0x0) goto LAB_14337e91b;
    }
  }
  if (local_898 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_898 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_898)(local_898);
      LOCK();
      piVar1 = (int *)((longlong)local_898 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_898 + 0x10))(local_898);
      }
    }
  }
  plVar11 = (longlong *)CONCAT44(fStack_684,local_688);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_140a4ff8c(&local_da8);
  local_da8 = param_2;
  plVar11 = (longlong *)FUN_14001cc68(0x50,0x10);
  FUN_1461a5a54(plVar11,&local_e98,param_1 + 0x70,&local_da8);
  if (plVar11 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1f8) = 0x10;
    plVar18 = *(longlong **)(param_1 + 0x200);
    if (plVar18 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x200) = 0;
LAB_14337ea44:
      LOCK();
      plVar13 = plVar18 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar1 = (int *)((longlong)plVar18 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
      if (plVar11 != (longlong *)0x0) goto LAB_14337ea68;
    }
  }
  else {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x1f8) = plVar11 + 2;
    plVar18 = *(longlong **)(param_1 + 0x200);
    if (plVar11 == plVar18) {
      LOCK();
      plVar18 = plVar11 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    else {
      *(longlong **)(param_1 + 0x200) = plVar11;
      if (plVar18 != (longlong *)0x0) goto LAB_14337ea44;
    }
LAB_14337ea68:
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_146369154(local_230);
  local_690 = FUN_147829dd0;
  local_688 = 0.0;
  FUN_14636958c(&local_da8,lVar22);
  iVar8 = local_da0;
  pcVar6 = local_da8;
  local_da8 = (code *)0x0;
  local_da0 = 0;
  if (local_70 == 0) {
LAB_14337eae2:
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_78 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
    goto LAB_14337eae2;
  }
  local_78 = pcVar6;
  local_70 = iVar8;
  if (local_da0 == 0) {
LAB_14337eb45:
    if (local_da8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_da8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_da8)(local_da8,0);
    FUN_1446efa72(&local_da8,0,0,0x10);
    local_da0 = 0;
    goto LAB_14337eb45;
  }
  local_690 = FUN_147829e50;
  local_688 = 0.0;
  FUN_1463697ae(&local_da8,lVar22);
  iVar8 = local_da0;
  pcVar6 = local_da8;
  local_da8 = (code *)0x0;
  local_da0 = 0;
  if (local_80 == 0) {
LAB_14337eb99:
    if (local_88 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_88 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_88)(local_88,0);
    FUN_1446efa72(&local_88,0,0,0x10);
    local_80 = 0;
    goto LAB_14337eb99;
  }
  local_88 = pcVar6;
  local_80 = iVar8;
  if (local_da0 == 0) {
LAB_14337ebfc:
    if (local_da8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_da8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_da8)(local_da8,0);
    FUN_1446efa72(&local_da8,0,0,0x10);
    local_da0 = 0;
    goto LAB_14337ebfc;
  }
  local_690 = FUN_147829ed0;
  local_688 = 0.0;
  FUN_1463699d0(&local_da8,lVar22);
  iVar8 = local_da0;
  pcVar6 = local_da8;
  local_da8 = (code *)0x0;
  local_da0 = 0;
  if (local_60 == 0) {
LAB_14337ec50:
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_68 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_68)(local_68,0);
    FUN_1446efa72(&local_68,0,0,0x10);
    local_60 = 0;
    goto LAB_14337ec50;
  }
  local_68 = pcVar6;
  local_60 = iVar8;
  if (local_da0 == 0) {
LAB_14337ecb3:
    if (local_da8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_da8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_da8)(local_da8,0);
    FUN_1446efa72(&local_da8,0,0,0x10);
    local_da0 = 0;
    goto LAB_14337ecb3;
  }
  FUN_140a504fe(local_3e8);
  FUN_140a4fdf2(local_e00,0);
  local_dc0 = 2;
  local_dbc = '\x01';
  local_db8 = 2;
  local_db4 = '\x01';
  FUN_140a53a96(&local_690);
  local_da8 = FUN_1407323a8;
  local_da0 = 0;
  FUN_14607cb4a(&local_690,lVar22,&local_da8);
  local_da8 = FUN_1407323f6;
  local_da0 = 0;
  FUN_1463691b6(&local_690,lVar22,&local_da8);
  FUN_145aad25c(&local_8a0);
  local_6cf = 0;
  local_da8 = (code *)&LAB_14078f89c;
  local_da0 = 0;
  FUN_1461d3718(&local_8a0,lVar22,&local_da8);
  local_1008 = (code **)&local_f01;
  FUN_145aad862(&local_f00,"SViewport",".\\Runtime/MoviePlayer/Private/DefaultGameMoviePlayer.cpp",
                0x119);
  plVar11 = local_ef8;
  local_ff0 = local_f00;
  if (local_ef8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ef8 + 1) = (int)local_ef8[1] + 1;
    UNLOCK();
  }
  FUN_145aaccd2(&local_f00,&local_ee8,&local_8a0);
  plVar13 = local_4b0;
  plVar18 = local_ee0;
  if (local_ee0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ee0 + 1) = (int)local_ee0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_ee0 + 1) = (int)local_ee0[1] + 1;
    UNLOCK();
  }
  local_4b8 = local_ee8;
  local_4b0 = local_ee0;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar13 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  local_1008 = (code **)&local_f21;
  FUN_140a53d66(local_f20,&DAT_149efe19f,".\\Runtime/MoviePlayer/Private/DefaultGameMoviePlayer.cpp"
                ,0x115);
  FUN_140a50bf4(local_f20,&local_ed8,&local_690);
  local_ec8 = local_ed8;
  local_ec0 = local_ed0;
  if (local_ed0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_ed0 + 1) = (int)local_ed0[1] + 1;
    UNLOCK();
  }
  uVar12 = FUN_140a4fd40(local_e00,&local_ec8);
  uVar12 = FUN_140a5058c(local_3e8,uVar12);
  FUN_140a4fdf2(local_e58,0);
  FUN_145ab0522(local_a70);
  FUN_140a562d0(&local_da8);
  plVar13 = (longlong *)FUN_140a2b044(&DAT_14c96b348);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = DAT_14c96b350;
  }
  FUN_1446f470e(&local_f80,L"NoBorder",1);
  local_f78 = (**(code **)(*plVar13 + 0x50))(plVar13,local_f80,0,0);
  local_f70 = 1;
  local_b78 = 1;
  local_f68 = (undefined8 *)0x0;
  uStack_f60 = 0;
  local_b80 = local_f78;
  if (local_b68 == 0) {
LAB_14337ef7a:
    if (local_b70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_b70 != (undefined8 *)0x0) {
    (**(code **)*local_b70)(local_b70,0);
    FUN_1446efa72(&local_b70,0,0,0x10);
    local_b68 = 0;
    goto LAB_14337ef7a;
  }
  local_b70 = (undefined8 *)0x0;
  local_b68 = 0;
  if ((int)uStack_f60 == 0) {
LAB_14337efe5:
    if (local_f68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_f68 != (undefined8 *)0x0) {
    (**(code **)*local_f68)(local_f68,0);
    FUN_1446efa72(&local_f68,0,0,0x10);
    uStack_f60 = uStack_f60 & 0xffffffff00000000;
    goto LAB_14337efe5;
  }
  local_e88 = 0;
  plStack_e80 = (longlong *)0x0;
  local_e78 = 1;
  local_be8 = 0;
  uStack_be0 = 0;
  local_bd8 = 1;
  local_e70 = (undefined8 *)0x0;
  uStack_e68 = 0;
  if (local_bc8 == 0) {
LAB_14337f027:
    if (local_bd0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_bd0 != (undefined8 *)0x0) {
    (**(code **)*local_bd0)(local_bd0,0);
    FUN_1446efa72(&local_bd0,0,0,0x10);
    local_bc8 = 0;
    goto LAB_14337f027;
  }
  local_bd0 = (undefined8 *)0x0;
  local_bc8 = 0;
  if ((int)uStack_e68 == 0) {
LAB_14337f092:
    if (local_e70 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e70 != (undefined8 *)0x0) {
    (**(code **)*local_e70)(local_e70,0);
    FUN_1446efa72(&local_e70,0,0,0x10);
    uStack_e68 = uStack_e68 & 0xffffffff00000000;
    goto LAB_14337f092;
  }
  local_1008 = (code **)&local_f81;
  FUN_140a55c32(&local_e88,"SBorder",".\\Runtime/MoviePlayer/Private/DefaultGameMoviePlayer.cpp",
                0x122);
  if (plStack_e80 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_e80 + 1) = (int)plStack_e80[1] + 1;
    UNLOCK();
  }
  plVar13 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = local_e88;
  *(longlong **)(param_1 + 0x68) = plStack_e80;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar13 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  FUN_140a530e4(&local_e88,&local_f58,&local_da8);
  plVar5 = local_8a8;
  plVar13 = local_f50;
  if (local_f50 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f50 + 1) = (int)local_f50[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_f50 + 1) = (int)local_f50[1] + 1;
    UNLOCK();
  }
  local_8b0 = local_f58;
  local_8a8 = local_f50;
  if (plVar5 != (longlong *)0x0) {
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
  local_1008 = (code **)&local_fa1;
  FUN_145ab0e62(&local_fa0,"SDPIScaler",".\\Runtime/MoviePlayer/Private/DefaultGameMoviePlayer.cpp",
                0x120);
  if (local_f98 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f98 + 1) = (int)local_f98[1] + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0x210);
  *(undefined8 *)(param_1 + 0x208) = local_fa0;
  *(longlong **)(param_1 + 0x210) = local_f98;
  if (plVar5 != (longlong *)0x0) {
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
  FUN_145aaff4c(&local_fa0,&local_f48,local_a70);
  local_f38 = local_f48;
  local_f30 = local_f40;
  if (local_f40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_f40 + 1) = (int)local_f40[1] + 1;
    UNLOCK();
  }
  uVar14 = FUN_140a4fd40(local_e58,&local_f38);
  uVar12 = FUN_140a5058c(uVar12,uVar14);
  local_1008 = (code **)&local_fc1;
  FUN_140a536a8((longlong)&local_fc1 + 1,"SOverlay",
                ".\\Runtime/MoviePlayer/Private/DefaultGameMoviePlayer.cpp",0x110);
  FUN_140a4ff16((longlong)&local_fc1 + 1,&local_eb8,uVar12);
  plVar2 = local_50;
  plVar5 = local_eb0;
  if (local_eb0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_eb0 + 1) = (int)local_eb0[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_eb0 + 1) = (int)local_eb0[1] + 1;
    UNLOCK();
  }
  local_58 = local_eb8;
  local_50 = local_eb0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar2 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  FUN_1461d0668(local_fe0,&local_fe1);
  FUN_1460364d8(local_fe0,&local_ea8,local_230);
  plVar2 = local_ea0;
  if (local_ea0 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x50) = local_ea8;
    plVar20 = *(longlong **)(param_1 + 0x58);
    if (plVar20 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x58) = 0;
LAB_14337f36e:
      LOCK();
      plVar2 = plVar20 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar1 = (int *)((longlong)plVar20 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x00014337f361:
        if (iVar8 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_ea0 + 1) = (int)local_ea0[1] + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x50) = local_ea8;
    plVar20 = *(longlong **)(param_1 + 0x58);
    if (local_ea0 == plVar20) {
      LOCK();
      plVar20 = local_ea0 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*local_ea0)(local_ea0);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar20 = plVar2;
        goto joined_r0x00014337f361;
      }
    }
    else {
      *(longlong **)(param_1 + 0x58) = local_ea0;
      if (plVar20 != (longlong *)0x0) goto LAB_14337f36e;
    }
  }
  if (local_ea0 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_ea0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_ea0)(local_ea0);
      LOCK();
      piVar1 = (int *)((longlong)local_ea0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ea0 + 0x10))(local_ea0);
      }
    }
  }
  if (local_fd8 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_fd8 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_fd8)(local_fd8);
      LOCK();
      piVar1 = (int *)((longlong)local_fd8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_fd8 + 0x10))(local_fd8);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
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
  if (local_eb0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_eb0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_eb0)(local_eb0);
      LOCK();
      piVar1 = (int *)((longlong)local_eb0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_eb0 + 0x10))(local_eb0);
      }
    }
  }
  lVar22 = local_ff8;
  if (local_fb8 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_fb8 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_fb8)(local_fb8);
      LOCK();
      piVar1 = (int *)((longlong)local_fb8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_fb8 + 0x10))(local_fb8);
      }
    }
  }
  plVar5 = local_f30;
  if (local_f30 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_f30 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_f30)(local_f30);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_f40 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f40 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_f40)(local_f40);
      LOCK();
      piVar1 = (int *)((longlong)local_f40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f40 + 0x10))(local_f40);
      }
    }
  }
  if (local_f98 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_f98 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_f98)(local_f98);
      LOCK();
      piVar1 = (int *)((longlong)local_f98 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f98 + 0x10))(local_f98);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar13 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  if (local_f50 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_f50 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_f50)(local_f50);
      LOCK();
      piVar1 = (int *)((longlong)local_f50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f50 + 0x10))(local_f50);
      }
    }
  }
  plVar13 = plStack_e80;
  if (plStack_e80 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_e80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_e80)(plStack_e80);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  FUN_140a59028(&local_da8);
  FUN_145aafefe(local_a70);
  if (local_e04 == '\x01') {
    local_e04 = '\0';
  }
  if (local_e0c == '\x01') {
    local_e0c = '\0';
  }
  if (local_e14 == '\x01') {
    local_e14 = '\0';
  }
  if (local_e20 == 0) {
LAB_14337f5d6:
    if (local_e28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e28 != (undefined8 *)0x0) {
    (**(code **)*local_e28)(local_e28,0);
    FUN_1446efa72(&local_e28,0,0,0x10);
    local_e20 = 0;
    goto LAB_14337f5d6;
  }
  if (local_e48 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_e48 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_e48)(local_e48);
      LOCK();
      piVar1 = (int *)((longlong)local_e48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e48 + 0x10))(local_e48);
      }
    }
  }
  if (local_e58[0] != (undefined8 *)0x0) {
    (**(code **)*local_e58[0])(local_e58[0],1);
  }
  plVar13 = local_ec0;
  if (local_ec0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_ec0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_ec0)(local_ec0);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (local_ed0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_ed0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_ed0)(local_ed0);
      LOCK();
      piVar1 = (int *)((longlong)local_ed0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ed0 + 0x10))(local_ed0);
      }
    }
  }
  if (local_f18 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_f18 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_f18)(local_f18);
      LOCK();
      piVar1 = (int *)((longlong)local_f18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_f18 + 0x10))(local_f18);
      }
    }
  }
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar18 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if (local_ee0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_ee0 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_ee0)(local_ee0);
      LOCK();
      piVar1 = (int *)((longlong)local_ee0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ee0 + 0x10))(local_ee0);
      }
    }
  }
  if (local_ef8 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_ef8 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_ef8)(local_ef8);
      LOCK();
      piVar1 = (int *)((longlong)local_ef8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_ef8 + 0x10))(local_ef8);
      }
    }
  }
  FUN_145aad09e(&local_8a0);
  FUN_140a5660c(&local_690);
  if (local_dac == '\x01') {
    local_dac = '\0';
  }
  if (local_db4 == '\x01') {
    local_db4 = '\0';
  }
  if (local_dbc == '\x01') {
    local_dbc = '\0';
  }
  if (local_dc8 == 0) {
LAB_14337f789:
    if (local_dd0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_dd0 != (undefined8 *)0x0) {
    (**(code **)*local_dd0)(local_dd0,0);
    FUN_1446efa72(&local_dd0,0,0,0x10);
    local_dc8 = 0;
    goto LAB_14337f789;
  }
  if (local_df0 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_df0 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_df0)(local_df0);
      LOCK();
      piVar1 = (int *)((longlong)local_df0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_df0 + 0x10))(local_df0);
      }
    }
  }
  if (local_e00[0] != (undefined8 *)0x0) {
    (**(code **)*local_e00[0])(local_e00[0],1);
  }
  FUN_140a54e77(local_240,local_238);
  if (local_240 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(local_3e8);
  FUN_14636926c(local_230);
  *(undefined8 *)(param_1 + 0x80) = local_ff0;
  plVar18 = *(longlong **)(param_1 + 0x88);
  if (plVar18 != plVar11) {
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      plVar18 = *(longlong **)(param_1 + 0x88);
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x88) = plVar11;
  }
  plVar13 = local_e90;
  *(longlong *)(param_1 + 0x40) = local_e98;
  plVar18 = *(longlong **)(param_1 + 0x48);
  if (plVar18 != local_e90) {
    if (local_e90 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)local_e90 + 0xc) = *(int *)((longlong)local_e90 + 0xc) + 1;
      UNLOCK();
      plVar18 = *(longlong **)(param_1 + 0x48);
    }
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))();
      }
    }
    *(longlong **)(param_1 + 0x48) = plVar13;
  }
  local_da8 = (code *)&LAB_14596504a;
  local_da0 = 0;
  FUN_145d5a1f0(local_e98 + 0x588,&local_690,lVar22);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  plVar11 = local_e90;
  if (local_e90 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_e90 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_e90)(local_e90);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
LAB_14337e6c5:
  plVar11 = (longlong *)param_3[1];
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1028) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14337ffea FUN_14337ffea body=142 status=ok
// SIG undefined FUN_14337ffea(void)

void FUN_14337ffea(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = DAT_14cb0d2b0;
  if (DAT_14cb0d2b0 != 0) {
    lVar4 = FUN_1413f862e();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) goto LAB_143380021;
  }
  lVar5 = 0;
LAB_143380021:
  lVar4 = *(longlong *)(param_1 + 0x40);
  if ((((lVar4 != 0) && (lVar2 = *(longlong *)(param_1 + 0x48), lVar2 != 0)) && (lVar5 != 0)) &&
     (0 < *(int *)(lVar2 + 8))) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(lVar5 + 0x1368);
    *(longlong *)(lVar5 + 0x1360) = lVar4;
    *(longlong *)(lVar5 + 0x1368) = lVar2;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014338006c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 143380078 FUN_143380078 body=69 status=ok
// SIG undefined FUN_143380078(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143380078(void)

{
  _DAT_14cabd118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433800ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd120,1);
  return;
}



// FUNCTION 1433800be FUN_1433800be body=4886 status=ok
// SIG undefined FUN_1433800be(void)

void FUN_1433800be(longlong *param_1,char param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  float fVar4;
  uint uVar5;
  byte bVar6;
  longlong *plVar7;
  bool bVar8;
  double dVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  DWORD DVar14;
  DWORD DVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined1 uVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_1a8 [32];
  LARGE_INTEGER *local_188;
  undefined1 local_180;
  undefined1 local_16a;
  byte local_169;
  ulonglong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 *local_150;
  longlong *local_148;
  longlong local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  longlong local_120;
  undefined **local_118;
  longlong *local_110;
  undefined1 local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong local_f0;
  code *local_e8;
  undefined4 local_e0;
  LARGE_INTEGER local_d8;
  ulonglong uStack_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined2 uStack_b0;
  undefined1 uStack_ae;
  undefined5 uStack_ad;
  float local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar26 = (undefined1)param_1[0x47];
  *(undefined1 *)(param_1 + 0x47) = 1;
  fVar4 = *(float *)(param_1 + 0x19);
  cVar10 = (**(code **)(*param_1 + 0x70))();
  if ((cVar10 == '\0') || (cVar10 = (**(code **)(*param_1 + 0x68))(param_1), cVar10 == '\0')) {
    plVar17 = DAT_14cb0d2b0;
    if (DAT_14cb0d2b0 != (longlong *)0x0) {
      lVar16 = FUN_1413f862e();
      lVar24 = plVar17[2];
      if (((*(int *)(lVar16 + 0x38) <= *(int *)(lVar24 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
           lVar16 + 0x30)) && (DAT_14c872bd8 == '\0')) {
        FUN_1434e4d8a(plVar17);
      }
    }
    goto LAB_14338068f;
  }
  if (param_1[0x12] != 0) {
    FUN_1414bd24a();
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
    lVar24 = param_1[0x12];
    if (lVar24 != 0) {
      FUN_145b00c68(lVar24);
      FUN_1400020a8(lVar24);
    }
    param_1[0x12] = 0;
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x3a));
  }
  if (fVar4 < 0.0) {
    LOCK();
    *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
    UNLOCK();
  }
  plVar17 = (longlong *)param_1[9];
  if (plVar17 != (longlong *)0x0) {
    iVar12 = (int)plVar17[1];
    do {
      if (iVar12 == 0) goto LAB_1433801f7;
      LOCK();
      iVar22 = (int)plVar17[1];
      bVar28 = iVar12 == iVar22;
      if (bVar28) {
        *(int *)(plVar17 + 1) = iVar12 + 1;
        iVar22 = iVar12;
      }
      iVar12 = iVar22;
      UNLOCK();
    } while (!bVar28);
    lVar24 = param_1[8];
    if (lVar24 != 0) {
      local_f8 = param_1[10];
      local_f0 = param_1[0xb];
      if (local_f0 != 0) {
        LOCK();
        *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
        UNLOCK();
      }
      FUN_140763be6(lVar24,&local_f8);
    }
    LOCK();
    plVar7 = plVar17 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar3 = (int *)((longlong)plVar17 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
LAB_1433801f7:
  lVar16 = DAT_14cabd128;
  lVar24 = DAT_14c98e618;
  local_169 = *(byte *)((longlong)param_1 + 0xcc);
  bVar6 = *(byte *)((longlong)param_1 + 0xce);
  local_16a = uVar26;
  local_110 = param_1;
  if (DAT_14cabd130 == '\x01') {
    iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar12 == 0x40000002) {
      uVar18 = 0;
    }
    else {
      bVar28 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
        if (iVar12 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          bVar28 = DVar14 == DVar15;
        }
        else {
          bVar28 = false;
        }
      }
      uVar18 = (ulonglong)(bVar28 ^ 1);
    }
    local_118 = &PTR_FUN_14a5a9840;
    local_108 = 0;
    if (*(char *)(lVar16 + uVar18) != '\x01') goto LAB_143380358;
    local_180 = 0;
    local_188 = (LARGE_INTEGER *)0xffffffffffffffff;
    local_100 = FUN_1411b1052(&local_118,L"GBXMovieStreamerTicker",0,0);
  }
  else {
LAB_143380358:
    local_108 = 0;
    local_118 = &PTR_FUN_14a5a9840;
    local_100 = 0;
  }
  local_160 = param_1 + -2;
  if (DAT_14c872bd8 == '\0') {
    plVar17 = param_1 + 10;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar16 + 0x308);
    local_150 = (undefined8 *)(lVar16 + 0x310);
    local_140 = 0x527800b400;
    piVar3 = (int *)(lVar16 + 0xc60);
    local_148 = (longlong *)(lVar16 + 0x2b8);
    local_158 = plVar17;
    do {
      if (bVar6 == 0) {
        if ((((*(byte *)((longlong)param_1 + 0xa2) & 1) == 0) && (fVar4 < 0.0)) &&
           (bVar11 = local_169, (int)param_1[0x13] == 0)) goto joined_r0x00014338077f;
LAB_143380781:
        if ((fVar4 < 0.0) ||
           (QueryPerformanceCounter(&local_d8),
           (double)*(float *)(param_1 + 0x19) <=
           ((double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0) - (double)param_1[0x38])) break;
      }
      else {
        bVar11 = *(byte *)((longlong)param_1 + 0xa2) & 1;
joined_r0x00014338077f:
        if (bVar11 != 0) goto LAB_143380781;
      }
      if (*plVar17 != 0) {
        FUN_14287b7b4(*plVar17,&local_d8);
        if (local_d8.s.LowPart._1_1_ == '\0') {
          FUN_145cd1400(lVar24,plVar17,2);
        }
      }
      if ((((longlong *)param_1[6] != (longlong *)0x0) &&
          (*(char *)((longlong)param_1 + 0xd1) == '\x02')) &&
         (bVar11 = (**(code **)(*(longlong *)param_1[6] + 0x38))(), ((~bVar11 | bVar6) & 1) == 0))
      break;
      if (DAT_14c98e618 != 0) {
        if (((param_1[8] == 0) || (param_1[9] == 0)) ||
           ((*(int *)(param_1[9] + 8) < 1 || ((*(byte *)((longlong)param_1 + 0xa3) & 1) != 0)))) {
          if ((longlong *)param_1[6] != (longlong *)0x0) {
            (**(code **)(*(longlong *)param_1[6] + 0x10))();
          }
          break;
        }
        FUN_1400e427a(1);
        FUN_1428f37b6(lVar24);
        FUN_1449ad830(lVar24);
        lVar16 = DAT_14cabd128;
        if (DAT_14cabd130 == '\x01') {
          iVar12 = *piVar3;
          if (iVar12 == 0x40000002) {
            uVar18 = 0;
          }
          else {
            bVar28 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
              if (iVar12 == 1) {
                DVar14 = FUN_140ad26c0();
                DVar15 = GetCurrentThreadId();
                bVar28 = DVar14 == DVar15;
                plVar17 = local_158;
              }
              else {
                bVar28 = false;
              }
            }
            uVar18 = (ulonglong)(bVar28 ^ 1);
          }
          dVar9 = DAT_14c759090;
          if (*(char *)(lVar16 + uVar18) != '\x01') goto LAB_1433808bd;
        }
        else {
LAB_1433808bd:
          dVar9 = (double)(float)(*(double *)(lVar24 + 0x3e0) - *(double *)(lVar24 + 1000));
        }
        if ((longlong *)param_1[6] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[6] + 0x70))();
        }
        fVar29 = (float)dVar9;
        if ((DAT_14cb0d2b0 != (longlong *)0x0 && param_2 == '\x01') &&
           ((char)param_1[0x1a] == '\x01')) {
          (**(code **)(*DAT_14cb0d2b0 + 0x2e8))();
          (**(code **)(*DAT_14cb0d2b0 + 0x2e0))(DAT_14cb0d2b0,fVar29,0);
          DAT_14c872be0 = DAT_14c872be0 + 1;
          (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
          uVar19 = FUN_1401cb356();
          FUN_142746dae(uVar19,(float)DAT_14c759090);
          FUN_14375756c(DAT_14cb0d2b0);
        }
        if ((longlong *)param_1[6] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[6] + 0x78))();
        }
        lVar16 = DAT_14cabd128;
        iVar12 = *piVar3;
        if (DAT_14cabd130 == '\x01') {
          if (iVar12 == 0x40000002) {
            uVar18 = 0;
          }
          else {
            bVar28 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
              if (iVar12 == 1) {
                DVar14 = FUN_140ad26c0();
                DVar15 = GetCurrentThreadId();
                bVar28 = DVar14 == DVar15;
                plVar17 = local_158;
              }
              else {
                bVar28 = false;
              }
            }
            uVar18 = (ulonglong)(bVar28 ^ 1);
          }
          if (*(char *)(lVar16 + uVar18) == '\0') {
            iVar12 = *piVar3;
            goto LAB_1433809ba;
          }
        }
        else {
LAB_1433809ba:
          if (DAT_14c86a9fc == 0) {
            if (iVar12 != 2) {
              if (iVar12 != 1) goto LAB_1433809c3;
              DVar14 = FUN_140ad26c0();
              DVar15 = GetCurrentThreadId();
              if (DVar14 == DVar15) goto LAB_1433809c8;
              goto LAB_143380a12;
            }
LAB_1433809c8:
            DAT_14c7590b0 = DAT_14c7590b0 + 1;
            (**(code **)(*param_1 + 0x128))(param_1,fVar29);
          }
          else {
LAB_1433809c3:
            if (iVar12 == 0x10) goto LAB_1433809c8;
LAB_143380a12:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (*piVar3 == 2)) goto LAB_1433809c8;
              if (*piVar3 == 1) {
                DVar14 = FUN_140ad26c0();
                DVar15 = GetCurrentThreadId();
                if (DVar14 == DVar15) goto LAB_1433809c8;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar21 = (uint *)*puVar2;
              if (puVar21 != (uint *)0x0) goto LAB_143380be9;
              do {
                puVar25 = local_150;
                uVar13 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar13 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar13 | 1;
                  __tlregdtor(&LAB_14338221d);
                }
                puVar20 = (undefined4 *)*puVar25;
                *puVar25 = 0;
                if (puVar20 == (undefined4 *)0x0) {
                  puVar20 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar20 = 0xffffffff;
                *(undefined4 **)(puVar20 + 0x10) = puVar20 + 0x16;
                puVar20[0x12] = 0;
                *puVar2 = puVar20;
                FUN_140217a48(puVar2);
                puVar21 = (uint *)*puVar2;
LAB_143380be9:
                uVar18 = *(longlong *)(puVar21 + 0x10) + 7;
                uVar13 = puVar21[0x12];
                while( true ) {
                  puVar25 = (undefined8 *)(uVar18 & 0xfffffffffffffff8);
                  if (puVar25 + 0x17 <= puVar21 + 0x4000) {
                    *(undefined8 **)(puVar21 + 0x10) = puVar25 + 0x17;
                    puVar21[0x12] = uVar13 + 1;
                    FUN_1447247dc(puVar25,0);
                    *puVar25 = &PTR_FUN_14a5aa4a0;
                    puVar25[0x15] = local_160;
                    *(float *)(puVar25 + 0x16) = fVar29;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar13 = DAT_14c7585c8 >> 10 & 3;
                      uVar18 = 0;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                        bVar11 = (&DAT_149e38edc)[uVar13];
                      }
                      else {
                        bVar11 = 2;
                      }
                    }
                    else {
                      uVar18 = (ulonglong)
                               ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
                      bVar11 = 5;
                    }
                    if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
                      local_168 = uVar18;
                      (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
                      uVar18 = local_168;
                    }
                    puVar25[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar25[9] = puVar25;
                    puVar25[10] = puVar25;
                    lVar16 = *local_148;
                    if (lVar16 == 0) {
                      if (bVar11 == 6) {
                        bVar11 = 1;
                      }
                      uVar19 = 0;
                    }
                    else {
                      if (bVar11 == 6) {
                        bVar11 = (byte)((ulonglong)*(undefined8 *)(lVar16 + 0x38) >> 0x3b);
                      }
                      uVar19 = *(undefined8 *)(lVar16 + 0x30);
                    }
                    puVar25[0xf] = uVar19;
                    puVar25[0x10] =
                         ((ulonglong)(bVar11 & 7) << 0x3b) + local_140 | 0xc000000000000000;
                    *(int *)((longlong)puVar25 + 0x1c) = (int)uVar18;
                    if (puVar25 == (undefined8 *)0x0) {
                      local_d8.s.LowPart._0_1_ = 1;
                      FUN_1447439e4(0,&local_d8);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
                      UNLOCK();
                      local_d8.s.LowPart._0_1_ = 1;
                      FUN_1447439e4(puVar25,&local_d8);
                      LOCK();
                      piVar1 = (int *)(puVar25 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*puVar25)(puVar25,1);
                      }
                    }
                    goto LAB_143380ad1;
                  }
                  *(uint **)(puVar21 + 0x10) = puVar21 + 0x4000;
                  LOCK();
                  uVar5 = *puVar21;
                  *puVar21 = *puVar21 + uVar13 + 1;
                  UNLOCK();
                  if ((uVar5 ^ uVar13) != 0xffffffff) break;
                  puVar21 = (uint *)*puVar2;
                  *puVar21 = 0xffffffff;
                  *(uint **)(puVar21 + 0x10) = puVar21 + 0x16;
                  puVar21[0x12] = 0;
                  *puVar2 = puVar21;
                  uVar18 = (longlong)puVar21 + 0x5f;
                  uVar13 = 0;
                }
              } while( true );
            }
            local_c8 = (longlong *)0x0;
            local_b8 = 0x4a5aa480;
            uStack_b4 = 1;
            uStack_b2 = 0;
            uStack_b0 = SUB82(local_160,0);
            uStack_ae = (undefined1)((ulonglong)local_160 >> 0x10);
            uStack_ad = (undefined5)((ulonglong)local_160 >> 0x18);
            local_d8.QuadPart = (LONGLONG)&LAB_143382a36;
            local_188 = &local_d8;
            local_a8 = fVar29;
            FUN_14005a792(&DAT_14ca9a440,L"BeginLoadingMovieFrameAndTickMovieStreamer",
                          &DAT_14cabd17c);
            if ((undefined8 *)local_d8.QuadPart != (undefined8 *)0x0) {
              plVar17 = local_c8;
              if (local_c8 == (longlong *)0x0) {
                plVar17 = (longlong *)&local_b8;
              }
              (**(code **)(*plVar17 + 0x10))();
            }
          }
LAB_143380ad1:
          plVar17 = *(longlong **)(lVar24 + 0x20);
          lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*plVar17 + 0x160))(plVar17);
          EnterCriticalSection(lpCriticalSection);
          FUN_1405d28f8(lVar24,7);
          (**(code **)(*plVar17 + 200))(plVar17);
          if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
            LeaveCriticalSection(lpCriticalSection);
          }
          iVar12 = *piVar3;
          if (DAT_14c86a9fc == 0) {
            if (iVar12 != 2) {
              if (iVar12 != 1) goto LAB_143380b23;
              DVar14 = FUN_140ad26c0();
              DVar15 = GetCurrentThreadId();
              if (DVar14 == DVar15) goto LAB_143380b2c;
              goto LAB_143380e75;
            }
LAB_143380b2c:
            (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
            local_d8.QuadPart = 0;
            uStack_d0 = uStack_d0 & 0xffffffff00000000;
            FUN_14007658c(&DAT_14ca850c8,&local_d8);
          }
          else {
LAB_143380b23:
            if (iVar12 == 0x10) goto LAB_143380b2c;
LAB_143380e75:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (*piVar3 == 2)) goto LAB_143380b2c;
              if (*piVar3 == 1) {
                DVar14 = FUN_140ad26c0();
                DVar15 = GetCurrentThreadId();
                if (DVar14 == DVar15) goto LAB_143380b2c;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar21 = (uint *)*puVar2;
              if (puVar21 != (uint *)0x0) goto LAB_143380fed;
              do {
                puVar25 = local_150;
                uVar13 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar13 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar13 | 1;
                  __tlregdtor(&LAB_14338221d);
                }
                puVar20 = (undefined4 *)*puVar25;
                *puVar25 = 0;
                if (puVar20 == (undefined4 *)0x0) {
                  puVar20 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar20 = 0xffffffff;
                *(undefined4 **)(puVar20 + 0x10) = puVar20 + 0x16;
                puVar20[0x12] = 0;
                *puVar2 = puVar20;
                FUN_140217a48(puVar2);
                puVar21 = (uint *)*puVar2;
LAB_143380fed:
                uVar18 = *(longlong *)(puVar21 + 0x10) + 7;
                uVar13 = puVar21[0x12];
                while( true ) {
                  puVar25 = (undefined8 *)(uVar18 & 0xfffffffffffffff8);
                  if (puVar25 + 0x16 <= puVar21 + 0x4000) {
                    *(undefined8 **)(puVar21 + 0x10) = puVar25 + 0x16;
                    puVar21[0x12] = uVar13 + 1;
                    FUN_1447247dc(puVar25,0);
                    *puVar25 = &PTR_FUN_14a5aa4b0;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar13 = DAT_14c7585c8 >> 10 & 3;
                      uVar18 = 0;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
                        bVar11 = (&DAT_149e38edc)[uVar13];
                      }
                      else {
                        bVar11 = 2;
                      }
                    }
                    else {
                      uVar18 = (ulonglong)
                               ((DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4));
                      bVar11 = 5;
                    }
                    if (*(code **)(puVar25[0xe] + 0x18) != FUN_144713626) {
                      local_168 = uVar18;
                      (**(code **)(puVar25[0xe] + 0x18))(puVar25 + 0xe,puVar25 + 9);
                      uVar18 = local_168;
                    }
                    puVar25[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar25[9] = puVar25;
                    puVar25[10] = puVar25;
                    lVar16 = *local_148;
                    if (lVar16 == 0) {
                      if (bVar11 == 6) {
                        bVar11 = 1;
                      }
                      uVar19 = 0;
                    }
                    else {
                      if (bVar11 == 6) {
                        bVar11 = (byte)((ulonglong)*(undefined8 *)(lVar16 + 0x38) >> 0x3b);
                      }
                      uVar19 = *(undefined8 *)(lVar16 + 0x30);
                    }
                    puVar25[0xf] = uVar19;
                    puVar25[0x10] =
                         ((ulonglong)(bVar11 & 7) << 0x3b) + local_140 | 0xc000000000000000;
                    *(int *)((longlong)puVar25 + 0x1c) = (int)uVar18;
                    if (puVar25 == (undefined8 *)0x0) {
                      local_d8.s.LowPart._0_1_ = 1;
                      FUN_1447439e4(0,&local_d8);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar25 + 1) = *(int *)(puVar25 + 1) + 1;
                      UNLOCK();
                      local_d8.s.LowPart._0_1_ = 1;
                      FUN_1447439e4(puVar25,&local_d8);
                      LOCK();
                      piVar1 = (int *)(puVar25 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*puVar25)(puVar25,1);
                      }
                    }
                    goto LAB_143380f35;
                  }
                  *(uint **)(puVar21 + 0x10) = puVar21 + 0x4000;
                  LOCK();
                  uVar5 = *puVar21;
                  *puVar21 = *puVar21 + uVar13 + 1;
                  UNLOCK();
                  if ((uVar5 ^ uVar13) != 0xffffffff) break;
                  puVar21 = (uint *)*puVar2;
                  *puVar21 = 0xffffffff;
                  *(uint **)(puVar21 + 0x10) = puVar21 + 0x16;
                  puVar21[0x12] = 0;
                  *puVar2 = puVar21;
                  uVar18 = (longlong)puVar21 + 0x5f;
                  uVar13 = 0;
                }
              } while( true );
            }
            local_c8 = (longlong *)0x0;
            local_b8 = 0x4a2b3190;
            uStack_b4 = 1;
            uStack_b2 = 0;
            uStack_b0 = 0x2c0a;
            uStack_ae = 0x38;
            uStack_ad = 0x143;
            local_d8.QuadPart = (LONGLONG)&LAB_142ea45a2;
            local_188 = &local_d8;
            FUN_14005a792(&DAT_14ca9a440,L"FinishLoadingMovieFrame");
            if ((undefined8 *)local_d8.QuadPart != (undefined8 *)0x0) {
              plVar17 = local_c8;
              if (local_c8 == (longlong *)0x0) {
                plVar17 = (longlong *)&local_b8;
              }
              (**(code **)(*plVar17 + 0x10))();
            }
          }
LAB_143380f35:
          FUN_14080c2b4();
          plVar17 = local_158;
        }
        uVar19 = (**(code **)(*param_1 + 0xa0))(param_1);
        FUN_14485dd80(uVar19,fVar29);
        if ((longlong *)param_1[6] != (longlong *)0x0) {
          (**(code **)(*(longlong *)param_1[6] + 0x80))();
        }
      }
    } while (DAT_14c872bd8 != '\x01');
  }
  lVar16 = param_1[0xe];
  if (lVar16 != 0) {
    local_128 = DAT_14c98dec8;
    local_120 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    FUN_140763be6(lVar16,&local_128);
  }
  plVar17 = (longlong *)param_1[0xc];
  if (plVar17 != (longlong *)0x0) {
    local_138 = DAT_14c98dec8;
    local_130 = DAT_14c98ded0;
    if (DAT_14c98ded0 != 0) {
      LOCK();
      *(int *)(DAT_14c98ded0 + 8) = *(int *)(DAT_14c98ded0 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*plVar17 + 0x240))(plVar17,&local_138);
  }
  LOCK();
  *(undefined4 *)((longlong)param_1 + 0x9c) = 1;
  UNLOCK();
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (param_1[0x45] != 0) {
    FUN_14480f766(&DAT_14c868758);
  }
  param_1[0x45] = 0;
  if ((((DAT_14cb0d2b0 != (longlong *)0x0) && ((longlong *)DAT_14cb0d2b0[0x1fc] != (longlong *)0x0))
      && (plVar17 = (longlong *)(**(code **)(*(longlong *)DAT_14cb0d2b0[0x1fc] + 0x148))(),
         plVar17 != (longlong *)0x0)) && (param_1[0x12] == 0)) {
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x13) = 1;
  UNLOCK();
  FUN_14080c2b4();
  if ((((longlong *)param_1[6] != (longlong *)0x0) &&
      ((**(code **)(*(longlong *)param_1[6] + 0x10))(), param_1[6] != 0)) &&
     ((param_1[0x46] == 0 && (lVar24 = *(longlong *)(lVar24 + 0x20), lVar24 != 0)))) {
    local_e8 = FUN_1458d31e8;
    local_e0 = 0;
    FUN_146369d2c(&local_d8,local_160);
    FUN_14574cc30(lVar24 + 0x18,&local_e8,&local_d8);
    if ((int)uStack_d0 == 0) {
LAB_14338052e:
      if ((undefined8 *)local_d8.QuadPart != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if ((undefined8 *)local_d8.QuadPart != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)local_d8)(local_d8.QuadPart,0);
      FUN_1446efa72(&local_d8,0,0,0x10);
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      goto LAB_14338052e;
    }
    param_1[0x46] = (longlong)local_e8;
  }
  DAT_14cabd130 = '\0';
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_d8.QuadPart = 0;
  uStack_d0 = 0;
  local_b8 = 0xbf800000;
  uStack_b4 = 0x101;
  uStack_ae = 0;
  uStack_b2 = 0;
  uStack_b0 = 0;
  FUN_1463692d2(param_1 + 0x15,&local_d8);
  FUN_14619aa88(&local_d8);
  *(undefined1 *)((longlong)param_1 + 0xa1) = 0;
  plVar17 = (longlong *)(**(code **)(*param_1 + 0xa8))(param_1);
  iVar12 = *(int *)((longlong)plVar17 + 0x14);
  *(int *)((longlong)plVar17 + 0x14) = iVar12 + 1;
  uVar18 = (ulonglong)(int)plVar17[1];
  if ((longlong)uVar18 < 1) {
    *(int *)((longlong)plVar17 + 0x14) = iVar12;
  }
  else {
    bVar28 = false;
    do {
      lVar24 = uVar18 * 0x10 + -8;
      uVar27 = uVar18;
      while (((*(int *)(*plVar17 + lVar24) != 0 &&
              (plVar7 = *(longlong **)(*plVar17 + -8 + lVar24), plVar7 != (longlong *)0x0)) &&
             (cVar10 = (**(code **)(*plVar7 + 0x60))(), cVar10 != '\0'))) {
        lVar24 = lVar24 + -0x10;
        bVar8 = uVar27 < 2;
        uVar27 = uVar27 - 1;
        if (bVar8) {
          iVar12 = *(int *)((longlong)plVar17 + 0x14) + -1;
          *(int *)((longlong)plVar17 + 0x14) = iVar12;
          if (bVar28) goto LAB_143380615;
          goto LAB_14338067d;
        }
      }
      uVar18 = uVar27 - 1;
      bVar28 = true;
    } while (1 < uVar27);
    iVar12 = *(int *)((longlong)plVar17 + 0x14) + -1;
    *(int *)((longlong)plVar17 + 0x14) = iVar12;
LAB_143380615:
    if (iVar12 < 1) {
      iVar12 = (int)plVar17[1];
      iVar22 = iVar12;
      if (0 < iVar12) {
        iVar23 = 0;
        do {
          if (((*(int *)(*plVar17 + 8 + (longlong)iVar23 * 0x10) == 0) ||
              (plVar7 = *(longlong **)(*plVar17 + (longlong)iVar23 * 0x10),
              plVar7 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar7 + 0x28))(), cVar10 != '\0')) {
            FUN_14005b288(plVar17,iVar23);
            FUN_14005b248(plVar17);
          }
          else {
            iVar23 = iVar23 + 1;
          }
          iVar22 = (int)plVar17[1];
        } while (iVar23 < iVar22);
      }
      iVar23 = 2;
      if (2 < iVar22 * 2) {
        iVar23 = iVar22 * 2;
      }
      *(int *)(plVar17 + 2) = iVar23;
      if ((iVar23 < iVar12) && (*(int *)((longlong)plVar17 + 0xc) != iVar22)) {
        FUN_14045812c(plVar17);
      }
    }
  }
LAB_14338067d:
  FUN_1463693d2(&local_118);
  uVar26 = local_16a;
LAB_14338068f:
  *(undefined1 *)(param_1 + 0x47) = uVar26;
  if ((local_90 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433813fc FUN_1433813fc body=77 status=ok
// SIG undefined FUN_1433813fc(void)

void FUN_1433813fc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0x1c1) == '\x01') {
    plVar1 = (longlong *)(param_1 + -8);
    cVar2 = (**(code **)(*(longlong *)(param_1 + -8) + 0x70))(plVar1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*plVar1 + 0x68))(plVar1);
      if (cVar2 != '\0') {
        (**(code **)(*plVar1 + 0x58))(plVar1,0);
      }
    }
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  return;
}



// FUNCTION 143381476 FUN_143381476 body=120 status=ok
// SIG undefined FUN_143381476(void)

void FUN_143381476(void)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar4 = DAT_14cabd158;
  if (((DAT_14c846b14 == '\x01') && (((DAT_14c872bf0 ^ 1) & DAT_14ca9a35c) == 1)) &&
     (DAT_14ca84e78 != '\x01')) {
    if (DAT_14cabd108 != 0) {
      lVar4 = DAT_14cabd108 + 0x10;
      goto LAB_1433814a7;
    }
  }
  else {
LAB_1433814a7:
    if (lVar4 != 0) {
      return;
    }
  }
  if ((((DAT_14c872bf0 & 1) == 0) && ((DAT_14ca9a35c & 1) != 0)) && (DAT_14ca84e78 != '\x01')) {
    FUN_1460d1b56();
    return;
  }
  lVar4 = FUN_14001cc68(0x100,0x10);
  FUN_14782ae04(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a5a9b20;
  plVar5[2] = lVar4;
  if ((lVar4 == 0) ||
     (((*(longlong *)(lVar4 + 8) != 0 && (*(longlong *)(lVar4 + 0x10) != 0)) &&
      (0 < *(int *)(*(longlong *)(lVar4 + 0x10) + 8))))) goto LAB_14782aa07;
  if (plVar5 == (longlong *)0x0) {
    *(longlong *)(lVar4 + 8) = lVar4;
    plVar6 = *(longlong **)(lVar4 + 0x10);
    if (plVar6 == (longlong *)0x0) goto LAB_14782aa07;
LAB_14782a9be:
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
    *(longlong **)(lVar4 + 0x10) = plVar5;
    if (plVar5 == (longlong *)0x0) goto LAB_14782aa07;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong *)(lVar4 + 8) = lVar4;
    if (*(longlong **)(lVar4 + 0x10) != plVar5) {
      LOCK();
      *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (plVar6 != (longlong *)0x0) goto LAB_14782a9be;
      *(longlong **)(lVar4 + 0x10) = plVar5;
    }
  }
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
LAB_14782aa07:
  plVar6 = DAT_14cabd160;
  DAT_14cabd158 = lVar4;
  if (plVar5 == DAT_14cabd160) {
    if (plVar5 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
    plVar6 = plVar5;
  }
  else {
    if (DAT_14cabd160 == (longlong *)0x0) {
      DAT_14cabd160 = plVar5;
      return;
    }
    LOCK();
    plVar2 = DAT_14cabd160 + 1;
    DAT_14cabd160 = plVar5;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar3 = *piVar1;
    UNLOCK();
  }
  if (iVar3 != 0) {
    return;
  }
  (**(code **)(*plVar6 + 0x10))(plVar6);
  return;
}



// FUNCTION 1433814ee FUN_1433814ee body=220 status=ok
// SIG undefined FUN_1433814ee(void)

void FUN_1433814ee(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = DAT_14cabd160;
  plVar4 = DAT_14cabd110;
  lVar3 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     (DAT_14ca84e78 != '\x01')) {
    if (DAT_14cabd108 == 0) {
      return;
    }
    lVar3 = DAT_14cabd108 + 0x10;
  }
  if (lVar3 != 0) {
    if (((DAT_14c872bf0 == '\0') && ((DAT_14ca9a35c & 1) != 0)) && (DAT_14ca84e78 != '\x01')) {
      DAT_14cabd108 = 0;
      if (DAT_14cabd110 == (longlong *)0x0) {
        DAT_14cabd108 = 0;
        return;
      }
      DAT_14cabd110 = (longlong *)0x0;
    }
    else {
      DAT_14cabd158 = 0;
      if (DAT_14cabd160 == (longlong *)0x0) {
        DAT_14cabd158 = 0;
        return;
      }
      DAT_14cabd160 = (longlong *)0x0;
      plVar4 = plVar1;
    }
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
                    /* WARNING: Could not recover jumptable at 0x0001433815ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1433815ca FUN_1433815ca body=59 status=ok
// SIG undefined FUN_1433815ca(void)

void FUN_1433815ca(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cabd160;
  if (DAT_14cabd160 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cabd160 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433815fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143381616 FUN_143381616 body=3073 status=ok
// SIG undefined FUN_143381616(void)

undefined8 FUN_143381616(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int *piVar4;
  undefined8 *puVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  longlong lVar9;
  code *pcVar10;
  char cVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  longlong lVar18;
  undefined ***pppuVar19;
  int iVar20;
  longlong *plVar21;
  longlong *plVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  bool bVar25;
  float fVar26;
  undefined1 auStack_f8 [32];
  undefined8 **local_d8;
  undefined8 *local_d0;
  int local_c4;
  undefined8 *local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  longlong *local_a0;
  undefined ***local_98;
  undefined **local_88;
  code *local_80;
  float local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar9 + 0xc60) == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  piVar4 = (int *)(lVar9 + 0xc60);
  LOCK();
  uVar12 = DAT_14c844204 >> 3;
  DAT_14c844204 = DAT_14c844204 | 8;
  UNLOCK();
  if ((uVar12 & 1) != 0) {
    LOCK();
    DAT_14c844204 = 0;
    UNLOCK();
  }
  iVar20 = *piVar4;
  *piVar4 = 8;
  plVar2 = DAT_14c98e618;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar5 = (undefined8 *)(lVar9 + 0x308);
    local_c0 = (undefined8 *)(lVar9 + 0x310);
    local_b0 = 0x527800b400;
    local_b8 = (longlong *)(lVar9 + 0x2b8);
    plVar22 = (longlong *)0x0;
    local_d0 = (undefined8 *)0x0;
    local_c4 = iVar20;
    do {
      if (((*(longlong *)(param_1 + 8) == 0) || (DAT_14ca83900 == (longlong *)0x0)) ||
         (cVar11 = (**(code **)(*DAT_14ca83900 + 0x390))(), cVar11 != '\0')) break;
      if (plVar2[4] != 0) {
        dVar7 = (double)plVar2[0x7c];
        dVar8 = (double)plVar2[0x7d];
        puVar24 = local_d0;
        if (local_d0 == (undefined8 *)0x0) {
          (**(code **)(*plVar2 + 0x30))(plVar2,&local_a8);
          plVar1 = local_a0;
          puVar24 = local_a8;
          local_a8 = (undefined8 *)0x0;
          plVar21 = plVar22;
          if (local_a0 == plVar22) {
LAB_1433817bb:
            plVar22 = local_a0;
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_a0 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar3 = (int *)((longlong)plVar22 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
            }
          }
          else {
            local_a0 = (longlong *)0x0;
            plVar21 = plVar1;
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar22 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar3 = (int *)((longlong)plVar22 + 0xc);
                *piVar3 = *piVar3 + -1;
                UNLOCK();
                if (*piVar3 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
              goto LAB_1433817bb;
            }
          }
          plVar22 = plVar21;
          if (puVar24 == (undefined8 *)0x0) {
            puVar24 = (undefined8 *)0x0;
          }
          else {
            local_a8 = (undefined8 *)0x0;
            local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
            FUN_1446efa72(&local_a8,0,2,0x10);
            local_a0 = (longlong *)CONCAT44(local_a0._4_4_,2);
            *local_a8 = &PTR_LAB_149f02f40;
            LOCK();
            UNLOCK();
            lVar18 = DAT_14c758608 + 1;
            lVar9 = DAT_14c758608 + 1;
            if (lVar18 == 0) {
              LOCK();
              UNLOCK();
              lVar18 = DAT_14c758608 + 2;
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            local_a8[2] = lVar18;
            *local_a8 = &PTR_FUN_14a5a98a0;
            local_a8[3] = &DAT_14782ab9e;
            FUN_145ae452c(puVar24 + 0xb6,&local_a8);
            if ((int)local_a0 != 0) {
              if (local_a8 == (undefined8 *)0x0) goto LAB_1433817ec;
              (**(code **)*local_a8)(local_a8,0);
              FUN_1446efa72(&local_a8,0,0,0x10);
              local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
            }
            if (local_a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
        }
LAB_1433817ec:
        fVar26 = (float)(dVar7 - dVar8);
        pcVar10 = *(code **)(param_1 + 8);
        iVar20 = *piVar4;
        local_d0 = puVar24;
        if (DAT_14c86a9fc == 0) {
          if (iVar20 != 2) {
            if (iVar20 != 1) goto LAB_14338180a;
            DVar13 = FUN_140ad26c0();
            DVar14 = GetCurrentThreadId();
            if (DVar13 == DVar14) goto LAB_143381813;
            goto LAB_143381926;
          }
LAB_143381813:
          if (pcVar10 != (code *)0x0) {
            (**(code **)(*(longlong *)pcVar10 + 0x128))(pcVar10,fVar26);
          }
        }
        else {
LAB_14338180a:
          if (iVar20 == 0x10) goto LAB_143381813;
LAB_143381926:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (*piVar4 == 2)) goto LAB_143381813;
            if (*piVar4 == 1) {
              DVar13 = FUN_140ad26c0();
              DVar14 = GetCurrentThreadId();
              if (DVar13 == DVar14) goto LAB_143381813;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar17 = (uint *)*puVar5;
            if (puVar17 != (uint *)0x0) goto LAB_143381ac3;
            do {
              puVar24 = local_c0;
              uVar12 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar12 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar12 | 1;
                __tlregdtor(&LAB_14338221d);
              }
              puVar16 = (undefined4 *)*puVar24;
              *puVar24 = 0;
              if (puVar16 == (undefined4 *)0x0) {
                puVar16 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar16 = 0xffffffff;
              *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar5 = puVar16;
              FUN_140217a48(puVar5);
              puVar17 = (uint *)*puVar5;
LAB_143381ac3:
              uVar23 = *(longlong *)(puVar17 + 0x10) + 7;
              uVar12 = puVar17[0x12];
              while( true ) {
                puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
                if (puVar24 + 0x17 <= puVar17 + 0x4000) {
                  *(undefined8 **)(puVar17 + 0x10) = puVar24 + 0x17;
                  puVar17[0x12] = uVar12 + 1;
                  FUN_1447247dc(puVar24,0);
                  *puVar24 = &PTR_FUN_14a5a9988;
                  puVar24[0x15] = pcVar10;
                  *(float *)(puVar24 + 0x16) = fVar26;
                  if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                    uVar12 = DAT_14c7585c8 >> 10 & 3;
                    iVar20 = 0;
                    if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
                      uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
                      iVar20 = 0;
                    }
                    else {
                      uVar23 = 2;
                    }
                  }
                  else {
                    iVar20 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                             *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                    uVar23 = 5;
                  }
                  if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
                  }
                  puVar24[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar24[9] = puVar24;
                  puVar24[10] = puVar24;
                  lVar9 = *local_b8;
                  if (lVar9 == 0) {
                    if ((char)uVar23 == '\x06') {
                      uVar23 = 1;
                    }
                    uVar15 = 0;
                  }
                  else {
                    if ((char)uVar23 == '\x06') {
                      uVar23 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
                    }
                    uVar15 = *(undefined8 *)(lVar9 + 0x30);
                  }
                  puVar24[0xf] = uVar15;
                  puVar24[0x10] = (uVar23 << 0x3b) + local_b0 | 0xc000000000000000;
                  *(int *)((longlong)puVar24 + 0x1c) = iVar20;
                  if (puVar24 == (undefined8 *)0x0) {
                    local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,1);
                    FUN_1447439e4(0,&local_a8);
                  }
                  else {
                    LOCK();
                    *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                    UNLOCK();
                    local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,1);
                    FUN_1447439e4(puVar24,&local_a8);
                    LOCK();
                    piVar3 = (int *)(puVar24 + 1);
                    *piVar3 = *piVar3 + -1;
                    UNLOCK();
                    if (*piVar3 == 0) {
                      (**(code **)*puVar24)(puVar24,1);
                    }
                  }
                  goto LAB_1433819d1;
                }
                *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
                LOCK();
                uVar6 = *puVar17;
                *puVar17 = *puVar17 + uVar12 + 1;
                UNLOCK();
                if ((uVar6 ^ uVar12) != 0xffffffff) break;
                puVar17 = (uint *)*puVar5;
                *puVar17 = 0xffffffff;
                *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
                puVar17[0x12] = 0;
                *puVar5 = puVar17;
                uVar23 = (longlong)puVar17 + 0x5f;
                uVar12 = 0;
              }
            } while( true );
          }
          local_98 = (undefined ***)0x0;
          local_88 = &PTR_LAB_14a5a9910;
          local_a8 = (undefined8 *)&LAB_140681f60;
          local_d8 = &local_a8;
          local_80 = pcVar10;
          local_78 = fVar26;
          FUN_14005a792(&DAT_14ca9a440,L"BeginLoadingMovieFrameAndTickMovieStreamer",&DAT_14cabd168)
          ;
          if (local_a8 != (undefined8 *)0x0) {
            pppuVar19 = local_98;
            if (local_98 == (undefined ***)0x0) {
              pppuVar19 = &local_88;
            }
            (*(code *)(*pppuVar19)[2])();
          }
        }
LAB_1433819d1:
        FUN_1405d28f8(plVar2,7);
        iVar20 = *piVar4;
        if (DAT_14c86a9fc == 0) {
          if (iVar20 != 2) {
            if (iVar20 == 1) {
              DVar13 = FUN_140ad26c0();
              DVar14 = GetCurrentThreadId();
              bVar25 = DVar13 == DVar14;
              goto LAB_1433819ef;
            }
            if (iVar20 == 0x10) goto LAB_1433819fa;
            goto LAB_143381dbe;
          }
        }
        else {
          bVar25 = iVar20 == 0x10;
LAB_1433819ef:
          if (!bVar25) {
LAB_143381dbe:
            if (DAT_14ca9a438 == '\0') {
              if ((DAT_14c86a9f8 != '\x01') || (*piVar4 == 2)) goto LAB_1433819fa;
              if (*piVar4 == 1) {
                DVar13 = FUN_140ad26c0();
                DVar14 = GetCurrentThreadId();
                if (DVar13 == DVar14) goto LAB_1433819fa;
              }
            }
            if (DAT_14ca9a43c == 0) {
              puVar17 = (uint *)*puVar5;
              if (puVar17 != (uint *)0x0) goto LAB_143381ee0;
              do {
                puVar24 = local_c0;
                uVar12 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar12 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar12 | 1;
                  __tlregdtor(&LAB_14338221d);
                }
                puVar16 = (undefined4 *)*puVar24;
                *puVar24 = 0;
                if (puVar16 == (undefined4 *)0x0) {
                  puVar16 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar16 = 0xffffffff;
                *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
                puVar16[0x12] = 0;
                *puVar5 = puVar16;
                FUN_140217a48(puVar5);
                puVar17 = (uint *)*puVar5;
LAB_143381ee0:
                uVar23 = *(longlong *)(puVar17 + 0x10) + 7;
                uVar12 = puVar17[0x12];
                while( true ) {
                  puVar24 = (undefined8 *)(uVar23 & 0xfffffffffffffff8);
                  if (puVar24 + 0x16 <= puVar17 + 0x4000) {
                    *(undefined8 **)(puVar17 + 0x10) = puVar24 + 0x16;
                    puVar17[0x12] = uVar12 + 1;
                    FUN_1447247dc(puVar24,0);
                    *puVar24 = &PTR_FUN_14a5a99c8;
                    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                      uVar12 = DAT_14c7585c8 >> 10 & 3;
                      iVar20 = 0;
                      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
                        uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
                        iVar20 = 0;
                      }
                      else {
                        uVar23 = 2;
                      }
                    }
                    else {
                      iVar20 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                      uVar23 = 5;
                    }
                    if (*(code **)(puVar24[0xe] + 0x18) != FUN_144713626) {
                      (**(code **)(puVar24[0xe] + 0x18))(puVar24 + 0xe,puVar24 + 9);
                    }
                    puVar24[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar24[9] = puVar24;
                    puVar24[10] = puVar24;
                    lVar9 = *local_b8;
                    if (lVar9 == 0) {
                      if ((char)uVar23 == '\x06') {
                        uVar23 = 1;
                      }
                      uVar15 = 0;
                    }
                    else {
                      if ((char)uVar23 == '\x06') {
                        uVar23 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
                      }
                      uVar15 = *(undefined8 *)(lVar9 + 0x30);
                    }
                    puVar24[0xf] = uVar15;
                    puVar24[0x10] = (uVar23 << 0x3b) + local_b0 | 0xc000000000000000;
                    *(int *)((longlong)puVar24 + 0x1c) = iVar20;
                    if (puVar24 == (undefined8 *)0x0) {
                      local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,1);
                      FUN_1447439e4(0,&local_a8);
                    }
                    else {
                      LOCK();
                      *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
                      UNLOCK();
                      local_a8 = (undefined8 *)CONCAT71(local_a8._1_7_,1);
                      FUN_1447439e4(puVar24,&local_a8);
                      LOCK();
                      piVar3 = (int *)(puVar24 + 1);
                      *piVar3 = *piVar3 + -1;
                      UNLOCK();
                      if (*piVar3 == 0) {
                        (**(code **)*puVar24)(puVar24,1);
                      }
                    }
                    goto LAB_143381e5e;
                  }
                  *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
                  LOCK();
                  uVar6 = *puVar17;
                  *puVar17 = *puVar17 + uVar12 + 1;
                  UNLOCK();
                  if ((uVar6 ^ uVar12) != 0xffffffff) break;
                  puVar17 = (uint *)*puVar5;
                  *puVar17 = 0xffffffff;
                  *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
                  puVar17[0x12] = 0;
                  *puVar5 = puVar17;
                  uVar23 = (longlong)puVar17 + 0x5f;
                  uVar12 = 0;
                }
              } while( true );
            }
            local_98 = (undefined ***)0x0;
            local_88 = &PTR_LAB_14a2b3190;
            local_80 = FUN_1417ac5da;
            local_a8 = (undefined8 *)&LAB_142ea45a2;
            local_d8 = &local_a8;
            FUN_14005a792(&DAT_14ca9a440,L"FinishLoadingMovieFrame",&DAT_14cabd16c);
            if (local_a8 != (undefined8 *)0x0) {
              pppuVar19 = local_98;
              if (local_98 == (undefined ***)0x0) {
                pppuVar19 = &local_88;
              }
              (*(code *)(*pppuVar19)[2])();
            }
            goto LAB_143381e5e;
          }
        }
LAB_1433819fa:
        (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
        local_a8 = (undefined8 *)0x0;
        local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
        FUN_14007658c(&DAT_14ca850c8,&local_a8,7);
        local_a8 = (undefined8 *)0x0;
        local_a0 = (longlong *)((ulonglong)local_a0 & 0xffffffff00000000);
        FUN_14007658c(&DAT_14ca850c8,&local_a8,5);
      }
LAB_143381e5e:
    } while ((*(byte *)(param_1 + 0x10) & 1) == 0);
    iVar20 = local_c4;
    if (plVar22 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar22 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar3 = (int *)((longlong)plVar22 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
  }
  *piVar4 = iVar20;
  LOCK();
  DAT_14c844204 = DAT_14c844204 & 0xfffffff7;
  UNLOCK();
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143382244 FUN_143382244 body=282 status=ok
// SIG undefined FUN_143382244(void)

undefined8 * FUN_143382244(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338221d);
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



// FUNCTION 14338235e FUN_14338235e body=92 status=ok
// SIG undefined FUN_14338235e(void)

ulonglong FUN_14338235e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = (ulonglong)DAT_14c7585c8;
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x128))(plVar2,*(undefined4 *)(param_1 + 0x16));
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433823b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1433823ba FUN_1433823ba body=282 status=ok
// SIG undefined FUN_1433823ba(void)

undefined8 * FUN_1433823ba(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338221d);
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



// FUNCTION 1433824ea FUN_1433824ea body=12 status=ok
// SIG undefined FUN_1433824ea(void)

void FUN_1433824ea(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433824f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433824f6 FUN_1433824f6 body=29 status=ok
// SIG undefined FUN_1433824f6(void)

undefined8 FUN_1433824f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143382514 FUN_143382514 body=282 status=ok
// SIG undefined FUN_143382514(void)

undefined8 * FUN_143382514(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338221d);
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



// FUNCTION 14338262e FUN_14338262e body=94 status=ok
// SIG undefined FUN_14338262e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14338262e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_141220b8a(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_141220b8a(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014338266a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1433826a0 FUN_1433826a0 body=12 status=ok
// SIG undefined FUN_1433826a0(void)

void FUN_1433826a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001433826a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433826ac FUN_1433826ac body=29 status=ok
// SIG undefined FUN_1433826ac(void)

undefined8 FUN_1433826ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433826ca FUN_1433826ca body=282 status=ok
// SIG undefined FUN_1433826ca(void)

undefined8 * FUN_1433826ca(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338221d);
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



// FUNCTION 1433827e4 FUN_1433827e4 body=98 status=ok
// SIG undefined FUN_1433827e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433827e4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_145965062(_DAT_000000a8,0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_145965062(param_1[0x15],0);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014338283c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143382894 FUN_143382894 body=12 status=ok
// SIG undefined FUN_143382894(void)

void FUN_143382894(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338289d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433828a0 FUN_1433828a0 body=29 status=ok
// SIG undefined FUN_1433828a0(void)

undefined8 FUN_1433828a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433828be FUN_1433828be body=282 status=ok
// SIG undefined FUN_1433828be(void)

undefined8 * FUN_1433828be(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338221d);
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



// FUNCTION 1433829d8 FUN_1433829d8 body=94 status=ok
// SIG undefined FUN_1433829d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433829d8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_141220b8a(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_141220b8a(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143382a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143382a64 FUN_143382a64 body=12 status=ok
// SIG undefined FUN_143382a64(void)

void FUN_143382a64(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143382a6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143382a70 FUN_143382a70 body=29 status=ok
// SIG undefined FUN_143382a70(void)

undefined8 FUN_143382a70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143382a8e FUN_143382a8e body=282 status=ok
// SIG undefined FUN_143382a8e(void)

undefined8 * FUN_143382a8e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338221d);
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



// FUNCTION 143382ba8 FUN_143382ba8 body=98 status=ok
// SIG undefined FUN_143382ba8(void)

void FUN_143382ba8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  DAT_14c7590b0 = DAT_14c7590b0 + 1;
  (**(code **)(*(longlong *)(param_1[0x15] + 0x10) + 0x128))
            (param_1[0x15] + 0x10,*(undefined4 *)(param_1 + 0x16));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143382c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 143382c0a FUN_143382c0a body=103 status=ok
// SIG undefined FUN_143382c0a(void)

void FUN_143382c0a(void)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
  local_18 = 0;
  local_10 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_18,7);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143382c72 FUN_143382c72 body=282 status=ok
// SIG undefined FUN_143382c72(void)

undefined8 * FUN_143382c72(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338221d);
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



// FUNCTION 143382d8c FUN_143382d8c body=213 status=ok
// SIG undefined FUN_143382d8c(void)

void FUN_143382d8c(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,7);
  }
  else {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
    (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
    local_28 = 0;
    local_20 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_28,7);
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143382e76 FUN_143382e76 body=76 status=ok
// SIG undefined FUN_143382e76(void)

void FUN_143382e76(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*(longlong *)(DAT_14c98e618 + 0x20) != 0) {
    lVar1 = *param_1;
    if (*(longlong *)(lVar1 + 0x240) != 0) {
      FUN_14480f766(*(longlong *)(DAT_14c98e618 + 0x20) + 0x18);
    }
    plVar2 = *(longlong **)(lVar1 + 0x40);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143382eb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x40))();
      return;
    }
  }
  return;
}



// FUNCTION 143382ed8 FUN_143382ed8 body=29 status=ok
// SIG undefined FUN_143382ed8(void)

undefined8 FUN_143382ed8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143382ef6 FUN_143382ef6 body=110 status=ok
// SIG undefined FUN_143382ef6(void)

undefined1 * FUN_143382ef6(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  
  plVar2 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     ((DAT_14ca84e78 != '\x01' && (plVar2 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0))
     )) {
    plVar2 = (longlong *)0x0;
  }
  cVar1 = (**(code **)(*plVar2 + 0x60))();
  puVar3 = &DAT_14c96b238;
  if (cVar1 != '\0') {
    puVar3 = &DAT_14c96b1e1;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 143382f64 FUN_143382f64 body=110 status=ok
// SIG undefined FUN_143382f64(void)

undefined1 * FUN_143382f64(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 *puVar3;
  
  plVar2 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     ((DAT_14ca84e78 != '\x01' && (plVar2 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0))
     )) {
    plVar2 = (longlong *)0x0;
  }
  cVar1 = (**(code **)(*plVar2 + 0x60))();
  puVar3 = &DAT_14c96b1e1;
  if (cVar1 != '\0') {
    puVar3 = &DAT_14c96b238;
  }
  *param_2 = *puVar3;
  return param_2;
}



// FUNCTION 143382fd2 FUN_143382fd2 body=415 status=ok
// SIG undefined FUN_143382fd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143382fd2(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14098d3d2(FUN_14337e620,L"/Script/MoviePlayer",L"EMoviePlaybackType",&DAT_14cabd0b8);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cabd0e8);
  if (cVar1 == '\0') {
    _DAT_14cabd0e8 = 0;
    uRam000000014cabd0f0 = 0;
  }
  if (local_48 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_48 = "UnixSocketPath";
  local_40 = 0xe;
  local_3c = 0;
  uVar2 = FUN_14001a6c0(&local_48,1);
  _DAT_14cabd0f8 = (ulonglong)uVar2;
  DAT_14cabd108 = 0;
  DAT_14cabd110 = 0;
  atexit(FUN_14337e659);
  local_48 = (char *)((ulonglong)local_48 & 0xffffffffffffff00);
  local_68 = CONCAT44(local_68._4_4_,4);
  FUN_140bd5914(&DAT_14cabd118,L"gbx.movie.UseExperimentalTickerThread",&local_48,
                L"Set to true to use an experimental thread for ticking loading movies.");
  atexit(FUN_143380078);
  local_48 = (char *)0x800000014a5a926e;
  local_34 = 0xb;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14171c728(&DAT_14cabd131,&local_48);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_14282b410(L"/Script/MoviePlayer",&PTR_FUN_14a5a97c0,1,0);
  DAT_14cabd150 = 0;
  DAT_14cabd158 = 0;
  DAT_14cabd160 = 0;
  atexit(FUN_1433815ca);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143383174 FUN_143383174 body=69 status=ok
// SIG undefined FUN_143383174(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143383174(void)

{
  _DAT_14cabd188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001433831b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd190,1);
  return;
}



// FUNCTION 1433831ba FUN_1433831ba body=3823 status=ok
// SIG undefined FUN_1433831ba(void)

/* WARNING: Removing unreachable block (ram,0x000143383b98) */
/* WARNING: Removing unreachable block (ram,0x000143383ba2) */
/* WARNING: Removing unreachable block (ram,0x000143383bb4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433831ba(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined4 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined ***pppuVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  undefined1 auStack_5e8 [32];
  undefined1 **local_5c8;
  uint local_5c0;
  undefined4 local_5b8;
  longlong local_5a8;
  longlong *local_5a0;
  longlong local_598;
  undefined8 local_590;
  longlong local_588;
  undefined8 local_579;
  longlong *local_570;
  undefined1 local_559;
  undefined1 local_558 [8];
  longlong *local_550;
  undefined8 local_540;
  longlong *local_538;
  undefined8 local_530;
  longlong *local_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined1 local_510;
  undefined8 *local_508;
  ulonglong uStack_500;
  undefined8 local_4f8;
  longlong *local_4f0;
  undefined8 local_4e8;
  longlong *local_4e0;
  undefined1 *local_4d8;
  longlong *local_4d0;
  undefined ***local_4c8;
  undefined **local_4b8;
  longlong *local_4b0;
  int local_318;
  int iStack_314;
  longlong *local_310;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0;
  undefined8 *local_2e8;
  int local_2e0;
  undefined4 local_2d8;
  undefined1 local_2d4;
  undefined4 local_2d0;
  undefined1 local_2cc;
  undefined8 local_258;
  longlong lStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined2 local_234;
  undefined4 local_232;
  undefined1 local_22e;
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_87;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  if ((DAT_14c872bf0 != '\0') || ((DAT_14ca9a35c & 1) == 0)) goto LAB_143383263;
  plVar15 = DAT_14cabd158;
  if ((DAT_14c846b14 == '\x01') &&
     ((DAT_14ca84e78 != '\x01' && (plVar15 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)
      ))) {
    plVar15 = (longlong *)0x0;
  }
  cVar7 = (**(code **)(*plVar15 + 0x40))();
  if (cVar7 == '\0') goto LAB_143383263;
  plVar15 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     ((DAT_14ca84e78 != '\x01' && (plVar15 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)
      ))) {
    plVar15 = (longlong *)0x0;
  }
  cVar7 = (**(code **)(*plVar15 + 0x68))();
  if (cVar7 != '\0') goto LAB_143383263;
  FUN_145aad25c(&local_258);
  local_87 = 0;
  local_5c8 = (undefined1 **)local_558;
  FUN_145aad862(&local_4d8,"SViewport",
                ".\\Runtime/StreamingPauseRendering/Private/StreamingPauseRendering.cpp",0x6a);
  FUN_145aaccd2(&local_4d8,&local_318,&local_258);
  plVar15 = local_310;
  if (local_310 == (longlong *)0x0) {
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(iStack_314,local_318);
    plVar16 = *(longlong **)(param_1 + 0x20);
    if (plVar16 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
LAB_14338336c:
      LOCK();
      plVar15 = plVar16 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
joined_r0x00014338335f:
        if (iVar8 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_310 + 1) = (int)local_310[1] + 1;
    UNLOCK();
    *(ulonglong *)(param_1 + 0x18) = CONCAT44(iStack_314,local_318);
    plVar16 = *(longlong **)(param_1 + 0x20);
    if (local_310 == plVar16) {
      LOCK();
      plVar16 = local_310 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*local_310)(local_310);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar8 = *piVar1;
        UNLOCK();
        plVar16 = plVar15;
        goto joined_r0x00014338335f;
      }
    }
    else {
      *(longlong **)(param_1 + 0x20) = local_310;
      if (plVar16 != (longlong *)0x0) goto LAB_14338336c;
    }
  }
  puVar23 = (undefined8 *)(param_1 + 0x18);
  if (local_310 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_310 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_310)(local_310);
      LOCK();
      piVar1 = (int *)((longlong)local_310 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_310 + 0x10))(local_310);
      }
    }
  }
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
  FUN_145aad09e(&local_258);
  uVar14 = *puVar23;
  FUN_1407679b0(&local_258);
  FUN_145aafb3e(&local_318);
  local_2d0 = 3;
  local_2cc = 1;
  local_2d8 = 3;
  local_2d4 = 1;
  local_520 = 0x4120000041200000;
  uStack_518 = 0x4120000041200000;
  local_510 = 1;
  local_2f0 = 1;
  local_300 = 0x4120000041200000;
  uStack_2f8 = 0x4120000041200000;
  local_508 = (undefined8 *)0x0;
  uStack_500 = 0;
  if (local_2e0 == 0) {
LAB_14338345f:
    if (local_2e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_2e8 != (undefined8 *)0x0) {
    (**(code **)*local_2e8)(local_2e8,0);
    FUN_1446efa72(&local_2e8,0,0,0x10);
    local_2e0 = 0;
    goto LAB_14338345f;
  }
  local_2e8 = (undefined8 *)0x0;
  local_2e0 = 0;
  if ((int)uStack_500 == 0) {
LAB_1433834cb:
    if (local_508 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_508 != (undefined8 *)0x0) {
    (**(code **)*local_508)(local_508,0);
    FUN_1446efa72(&local_508,0,0,0x10);
    uStack_500 = uStack_500 & 0xffffffff00000000;
    goto LAB_1433834cb;
  }
  FUN_147755e32(&local_4d8);
  local_5c8 = (undefined1 **)&local_559;
  FUN_147775148(local_558,"SThrobber",
                ".\\Runtime/StreamingPauseRendering/Private/StreamingPauseRendering.cpp",0x75);
  FUN_147755ed2(local_558,&local_540,&local_4d8);
  local_530 = local_540;
  local_528 = local_538;
  if (local_538 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_538 + 1) = (int)local_538[1] + 1;
    UNLOCK();
  }
  uVar11 = FUN_145aaf878(&local_318,&local_530);
  uVar11 = FUN_145aaf822(&local_258,uVar11);
  local_5c8 = (undefined1 **)&local_579;
  FUN_14076837c((longlong)&local_579 + 1,"SVerticalBox",
                ".\\Runtime/StreamingPauseRendering/Private/StreamingPauseRendering.cpp",0x6f);
  FUN_14076784c((longlong)&local_579 + 1,&local_4f8,uVar11);
  local_4e8 = local_4f8;
  local_4e0 = local_4f0;
  if (local_4f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_4f0 + 1) = (int)local_4f0[1] + 1;
    UNLOCK();
  }
  FUN_146ad748c(uVar14,&local_4e8);
  if (local_4f0 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_4f0 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_4f0)(local_4f0);
      LOCK();
      piVar1 = (int *)((longlong)local_4f0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_4f0 + 0x10))(local_4f0);
      }
    }
  }
  if (local_570 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_570 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
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
  plVar15 = local_528;
  if (local_528 != (longlong *)0x0) {
    LOCK();
    plVar16 = local_528 + 1;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)*plVar16 == 0) {
      (**(code **)*local_528)(local_528);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (local_538 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_538 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_538)(local_538);
      LOCK();
      piVar1 = (int *)((longlong)local_538 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_538 + 0x10))(local_538);
      }
    }
  }
  if (local_550 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_550 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_550)(local_550);
      LOCK();
      piVar1 = (int *)((longlong)local_550 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_550 + 0x10))(local_550);
      }
    }
  }
  FUN_140a4ff8c(&local_4d8);
  FUN_140767f30(&local_318);
  FUN_141492598(local_b0,local_a8);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  FUN_140a4ff8c(&local_258);
  (**(code **)(*param_2 + 0x28))(param_2,&local_318);
  if (*DAT_14cabd198 != 0) {
    if (*(longlong *)(DAT_14cb0d2b0 + 0xfd0) == 0) {
      cVar7 = '\0';
    }
    else {
      cVar7 = (**(code **)(*param_2 + 0x1d8))(param_2);
    }
    if (((cVar7 == '\0') && (0 < local_318)) && (0 < iStack_314)) {
      plVar15 = (longlong *)param_2[6];
      lVar12 = FUN_14001cc68(0x330,0x10);
      local_590 = *puVar23;
      local_588 = *(longlong *)(param_1 + 0x20);
      if (local_588 != 0) {
        LOCK();
        *(int *)(local_588 + 8) = *(int *)(local_588 + 8) + 1;
        UNLOCK();
      }
      FUN_145f95330(lVar12,plVar15,&local_590);
      plVar13 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar13[1] = (longlong)&DAT_100000001;
      *plVar13 = (longlong)&PTR_FUN_14a5449d0;
      plVar13[2] = lVar12;
      *(longlong *)(param_1 + 8) = lVar12;
      plVar16 = *(longlong **)(param_1 + 0x10);
      if (plVar13 == plVar16) {
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar13 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar1 = (int *)((longlong)plVar13 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x000143383825:
            if (iVar8 == 0) {
              (**(code **)(*plVar13 + 0x10))(plVar13);
            }
          }
        }
      }
      else {
        *(longlong **)(param_1 + 0x10) = plVar13;
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar16 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
            plVar13 = plVar16;
            goto joined_r0x000143383825;
          }
        }
      }
      local_5c8 = (undefined1 **)((ulonglong)local_5c8 & 0xffffffff00000000);
      local_5c0 = local_5c0 & 0xffffff00;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x1e8))
                (*(longlong *)(param_1 + 8) + 8,0,local_318,iStack_314);
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x178))
                (*(longlong *)(param_1 + 8) + 8,0);
      lVar12 = (**(code **)(*plVar15 + 0x30))(plVar15);
      bVar4 = *(byte *)(lVar12 + 0x150);
      uVar14 = (**(code **)(*plVar15 + 0x30))(plVar15);
      lVar12 = *(longlong *)(param_1 + 8) + 8;
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar12 = 0;
      }
      local_5c0 = 0;
      local_5c8 = (undefined1 **)CONCAT44(local_5c8._4_4_,(uint)bVar4);
      local_5b8 = 0x3f800000;
      FUN_1401fac16(&local_258,lVar12,0,uVar14);
      lVar12 = *(longlong *)(param_1 + 8) + 8;
      if (*(longlong *)(param_1 + 8) == 0) {
        lVar12 = 0;
      }
      (**(code **)(*plVar15 + 0x20))(plVar15,lVar12,&local_258);
      FUN_14376e4da(&local_258,0);
      plVar15 = (longlong *)(*(longlong *)(param_1 + 8) + 8);
      if (*(longlong *)(param_1 + 8) == 0) {
        plVar15 = (longlong *)0x0;
      }
      lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar8 = *(int *)(lVar12 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar8 != 2) {
          if (iVar8 != 1) goto LAB_143383920;
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143383929;
          goto LAB_143383c63;
        }
LAB_143383929:
        (**(code **)(*plVar15 + 400))(plVar15,&DAT_14ca85100,0,0);
      }
      else {
LAB_143383920:
        if (iVar8 == 0x10) goto LAB_143383929;
LAB_143383c63:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar12 + 0xc60), iVar8 == 2))
          goto LAB_143383929;
          if (iVar8 == 1) {
            DVar9 = FUN_140ad26c0();
            DVar10 = GetCurrentThreadId();
            if (DVar9 == DVar10) goto LAB_143383929;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar18 = (uint *)*puVar2;
          if (puVar18 != (uint *)0x0) goto LAB_143383d41;
          do {
            uVar19 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar19 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar19 | 1;
              __tlregdtor(&LAB_14338425f);
            }
            lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar17 = *(undefined4 **)(lVar12 + 0x310);
            *(undefined8 *)(lVar12 + 0x310) = 0;
            if (puVar17 == (undefined4 *)0x0) {
              puVar17 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar17 = 0xffffffff;
            *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
            puVar17[0x12] = 0;
            *puVar2 = puVar17;
            FUN_140217a48(puVar2);
            puVar18 = (uint *)*puVar2;
LAB_143383d41:
            uVar21 = *(longlong *)(puVar18 + 0x10) + 7;
            uVar19 = puVar18[0x12];
            while( true ) {
              puVar22 = (undefined8 *)(uVar21 & 0xfffffffffffffff8);
              if (puVar22 + 0x16 <= puVar18 + 0x4000) {
                *(undefined8 **)(puVar18 + 0x10) = puVar22 + 0x16;
                puVar18[0x12] = uVar19 + 1;
                iVar8 = 0;
                FUN_1447247dc(puVar22,0);
                *puVar22 = &PTR_FUN_14a5aaf68;
                puVar22[0x15] = plVar15;
                if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                  uVar19 = DAT_14c7585c8 >> 10 & 3;
                  if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar19 < 2) {
                    uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar19];
                    iVar8 = 0;
                  }
                  else {
                    uVar21 = 2;
                  }
                }
                else {
                  iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                          *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                  uVar21 = 5;
                }
                if (*(code **)(puVar22[0xe] + 0x18) != FUN_144713626) {
                  (**(code **)(puVar22[0xe] + 0x18))(puVar22 + 0xe,puVar22 + 9);
                }
                puVar22[0xe] = LowLevelTasks::
                               TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                               TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                               ::vftable;
                puVar22[9] = puVar22;
                puVar22[10] = puVar22;
                lVar12 = *(longlong *)
                          (*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x2b8);
                if (lVar12 == 0) {
                  uVar5 = 1;
                  if ((char)uVar21 != '\x06') {
                    uVar5 = uVar21;
                  }
                  uVar21 = uVar5;
                  uVar14 = 0;
                }
                else {
                  if ((char)uVar21 == '\x06') {
                    uVar21 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
                  }
                  uVar14 = *(undefined8 *)(lVar12 + 0x30);
                }
                puVar22[0xf] = uVar14;
                puVar22[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
                *(int *)((longlong)puVar22 + 0x1c) = iVar8;
                if (puVar22 == (undefined8 *)0x0) {
                  local_4d8 = (undefined1 *)CONCAT71(local_4d8._1_7_,1);
                  FUN_1447439e4(0);
                }
                else {
                  LOCK();
                  *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
                  UNLOCK();
                  local_4d8 = (undefined1 *)CONCAT71(local_4d8._1_7_,1);
                  FUN_1447439e4(puVar22);
                  LOCK();
                  piVar1 = (int *)(puVar22 + 1);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)*puVar22)(puVar22,1);
                  }
                }
                goto LAB_143383942;
              }
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
              LOCK();
              uVar3 = *puVar18;
              *puVar18 = *puVar18 + uVar19 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar19) != 0xffffffff) break;
              puVar18 = (uint *)*puVar2;
              *puVar18 = 0xffffffff;
              *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
              puVar18[0x12] = 0;
              *puVar2 = puVar18;
              uVar21 = (longlong)puVar18 + 0x5f;
              uVar19 = 0;
            }
          } while( true );
        }
        local_4c8 = (undefined ***)0x0;
        local_4b8 = &PTR_LAB_14a5aaf20;
        local_4d8 = &LAB_143384216;
        local_5c8 = &local_4d8;
        local_4b0 = plVar15;
        FUN_14005a792(&DAT_14ca9a440,L"EndDrawingCommand",&DAT_14cabd1a0);
        if (local_4d8 != (undefined1 *)0x0) {
          pppuVar20 = local_4c8;
          if (local_4c8 == (undefined ***)0x0) {
            pppuVar20 = &local_4b8;
          }
          (*(code *)(*pppuVar20)[2])();
        }
      }
LAB_143383942:
      lVar12 = FUN_14001cc68(0x18,0x10);
      plVar15 = (longlong *)
                (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 8) + 0x10))
                          (*(longlong *)(param_1 + 8) + 8);
      local_598 = *plVar15;
      if (local_598 != 0) {
        LOCK();
        *(int *)(local_598 + 8) = *(int *)(local_598 + 8) + 1;
        UNLOCK();
      }
      FUN_14782dec6(lVar12,&local_598,CONCAT44(iStack_314,local_318));
      plVar16 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar16[1] = (longlong)&DAT_100000001;
      *plVar16 = (longlong)&PTR_FUN_14a5aaf80;
      plVar16[2] = lVar12;
      *(longlong *)(param_1 + 0x28) = lVar12;
      plVar15 = *(longlong **)(param_1 + 0x30);
      if (plVar16 == plVar15) {
        if (plVar16 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar16 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
joined_r0x0001433839f8:
            if (iVar8 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
          goto LAB_143383a03;
        }
      }
      else {
        *(longlong **)(param_1 + 0x30) = plVar16;
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar16 = plVar15 + 1;
          *(int *)plVar16 = (int)*plVar16 + -1;
          UNLOCK();
          if ((int)*plVar16 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar8 = *piVar1;
            UNLOCK();
            plVar16 = plVar15;
            goto joined_r0x0001433839f8;
          }
        }
LAB_143383a03:
        lVar12 = *(longlong *)(param_1 + 0x28);
        plVar15 = *(longlong **)(param_1 + 0x30);
      }
      uVar14 = *puVar23;
      local_5a8 = lVar12;
      if (plVar15 == (longlong *)0x0) {
        local_5a0 = (longlong *)0x0;
        FUN_1456f2bd8(uVar14);
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        local_5a0 = plVar15;
        FUN_1456f2bd8(uVar14);
        LOCK();
        plVar16 = plVar15 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
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
      FUN_14010ad76(&local_258);
    }
  }
  local_248 = 0;
  uStack_240 = 0;
  lStack_250 = 0;
  local_238 = 0xbf800000;
  local_232 = 0;
  local_22e = 0;
  local_234 = 0x101;
  local_258 = *puVar23;
  lVar12 = *(longlong *)(param_1 + 0x20);
  lVar6 = lStack_250;
  if (lVar12 != 0) {
    LOCK();
    *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
    UNLOCK();
    lVar6 = lVar12;
    if (lVar12 == 0) {
      LOCK();
      _DAT_00000008 = _DAT_00000008 + -1;
      UNLOCK();
      lVar6 = lStack_250;
      if (_DAT_00000008 == 0) {
        (*(code *)*_DAT_00000000)(0);
        LOCK();
        _DAT_0000000c = _DAT_0000000c + -1;
        UNLOCK();
        lVar6 = lStack_250;
        if (_DAT_0000000c == 0) {
          (*(code *)_DAT_00000000[2])(0);
          lVar6 = lStack_250;
        }
      }
    }
  }
  lStack_250 = lVar6;
  plVar15 = DAT_14cabd158;
  if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
     ((DAT_14ca84e78 != '\x01' && (plVar15 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)
      ))) {
    plVar15 = (longlong *)0x0;
  }
  (**(code **)(*plVar15 + 0x20))(plVar15,&local_258);
  plVar15 = DAT_14cabd158;
  if (((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) &&
     (((DAT_14ca9a35c & 1) != 0 &&
      ((DAT_14ca84e78 != '\x01' &&
       (plVar15 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))))) {
    plVar15 = (longlong *)0x0;
  }
  (**(code **)(*plVar15 + 0x48))();
  *(undefined1 *)(param_1 + 0x58) = 1;
  FUN_14619aa88(&local_258);
LAB_143383263:
  if ((local_48 ^ (ulonglong)auStack_5e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433840aa FUN_1433840aa body=275 status=ok
// SIG undefined FUN_1433840aa(void)

void FUN_1433840aa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x58) == '\x01') {
    plVar3 = DAT_14cabd158;
    if ((((DAT_14c846b14 == '\x01') && (DAT_14c872bf0 == '\0')) && ((DAT_14ca9a35c & 1) != 0)) &&
       ((DAT_14ca84e78 != '\x01' &&
        (plVar3 = (longlong *)(DAT_14cabd108 + 0x10), DAT_14cabd108 == 0)))) {
      plVar3 = (longlong *)0x0;
    }
    (**(code **)(*plVar3 + 0x58))(plVar3,0);
    *(undefined8 *)(param_1 + 0x18) = 0;
    plVar3 = *(longlong **)(param_1 + 0x20);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
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
    *(undefined8 *)(param_1 + 8) = 0;
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
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
    *(undefined8 *)(param_1 + 0x28) = 0;
    plVar3 = *(longlong **)(param_1 + 0x30);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
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
    FUN_14080c2b4();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  return;
}



// FUNCTION 1433841e8 FUN_1433841e8 body=45 status=ok
// SIG undefined FUN_1433841e8(void)

longlong FUN_1433841e8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145c78d28(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143384236 FUN_143384236 body=12 status=ok
// SIG undefined FUN_143384236(void)

void FUN_143384236(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338423f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143384242 FUN_143384242 body=29 status=ok
// SIG undefined FUN_143384242(void)

undefined8 FUN_143384242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143384286 FUN_143384286 body=282 status=ok
// SIG undefined FUN_143384286(void)

undefined8 * FUN_143384286(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338425f);
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



// FUNCTION 1433843a0 FUN_1433843a0 body=132 status=ok
// SIG undefined FUN_1433843a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1433843a0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014338441a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 400))(_DAT_000000a8,&DAT_14ca85100,0,0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 400))((longlong *)param_1[0x15],&DAT_14ca85100,0,0);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001433843ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143384424 FUN_143384424 body=159 status=ok
// SIG undefined FUN_143384424(void)

void FUN_143384424(void)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0x800000014a5aa9a8;
  local_14 = 0x17;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146369ed8(&local_28);
  local_28 = CONCAT44(local_28._4_4_,1);
  local_38 = 0x20;
  FUN_14078dbce(&DAT_14cabd188,L"r.RenderLastFrameInStreamingPause",&local_28,
                L"If 1 the previous frame is displayed during streaming pause. If zero the screen is left black."
               );
  atexit(FUN_143383174);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433844d0 FUN_1433844d0 body=39 status=ok
// SIG undefined FUN_1433844d0(void)

longlong FUN_1433844d0(longlong param_1,int param_2)

{
  FUN_1401c04d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 1433844f7 FUN_1433844f7 body=59 status=ok
// SIG undefined FUN_1433844f7(void)

void FUN_1433844f7(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cabd210;
  if (DAT_14cabd210 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cabd210 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143384527. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143384532 FUN_143384532 body=225 status=ok
// SIG undefined FUN_143384532(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143384532(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  _DAT_14cabd1b8 = 0xffffffff;
  _DAT_14cabd1bc = 0x105;
  DAT_14cabd1be = 0;
  _DAT_14cabd1c0 = 0;
  uRam000000014cabd1c8 = 0;
  _DAT_14cabd1d0 = 0;
  _DAT_14cabd1d8 = 0xc7efffffe0000000;
  _DAT_14cabd1e0 = 0;
  uRam000000014cabd1e8 = 0;
  DAT_14cabd1ef = 0;
  uRam000000014cabd1f0 = 0;
  _DAT_14cabd1f8 = 0;
  _DAT_14cabd1a8 = &PTR_LAB_14a5ab180;
  _DAT_14cabd1b0 = &PTR_FUN_14a5ab1b0;
  atexit((_func_5014 *)&LAB_1433844c4);
  local_28 = 0x800000014a5ab158;
  local_14 = 0x11;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146369ff8(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384614 FUN_143384614 body=185 status=ok
// SIG undefined FUN_143384614(void)

longlong * FUN_143384614(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143385622(&local_28);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 5;
  *param_1 = local_28;
  local_28 = 0;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,L".demo",5);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1433846cf FUN_1433846cf body=227 status=ok
// SIG undefined FUN_1433846cf(void)

undefined8 FUN_1433846cf(undefined8 param_1)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined4 uVar2;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined4 local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143385710(&local_58);
  _Str = L"";
  if (local_50 != 0) {
    _Str = local_58;
  }
  FUN_143384b39(&local_68);
  local_48 = L"";
  if (local_60 != 0) {
    local_48 = local_68;
  }
  uVar2 = 0;
  local_40 = 0;
  if (local_48 != (wchar_t *)0x0) {
    sVar1 = wcslen(local_48);
    local_40 = (int)sVar1;
  }
  local_38 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar1 = wcslen(_Str);
    uVar2 = (int)sVar1;
  }
  local_30 = uVar2;
  FUN_140bee87a(param_1,&local_48,2);
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433847b3 FUN_1433847b3 body=265 status=ok
// SIG undefined FUN_1433847b3(void)

undefined8 * FUN_1433847b3(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14a5ab550;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x25) = 0;
  FUN_143385a41(&local_40);
  plVar1 = (longlong *)FUN_14054d1d4();
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  plVar1 = (longlong *)(**(code **)(*plVar1 + 0x18))(plVar1,puVar3,0);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x30))(plVar1);
    if (lVar2 != 0) {
      local_58 = 0;
      uStack_50 = 0;
      FUN_14021219d(plVar1,&local_58);
      local_28 = (int)uStack_50 + -1;
      if ((int)uStack_50 == 0) {
        local_28 = 0;
      }
      local_30 = local_58;
      FUN_14279eb63(param_1);
      *(undefined1 *)((longlong)param_1 + 0x2c) = 1;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    (**(code **)*plVar1)(plVar1,1);
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1433848bd FUN_1433848bd body=199 status=ok
// SIG undefined FUN_1433848bd(void)

void FUN_1433848bd(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_14054d1d4();
  FUN_143385a41(&local_38,param_1);
  puVar3 = local_38;
  if (local_30 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,puVar3,0);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)(*param_2 + 8))(param_2,&local_38,1);
    FUN_14021219d(puVar2,&local_38);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143384985 FUN_143384985 body=185 status=ok
// SIG undefined FUN_143384985(void)

longlong * FUN_143384985(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143385622(&local_28);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 6;
  *param_1 = local_28;
  local_28 = 0;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,L".final",6);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 143384a40 FUN_143384a40 body=248 status=ok
// SIG undefined FUN_143384a40(void)

void FUN_143384a40(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined **local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 6;
  local_30 = &PTR_FUN_14a5ab5f0;
  cVar1 = FUN_14782fffe(param_2);
  if (cVar1 != '\0') goto LAB_143384afb;
  FUN_1433846cf(&local_40,param_2);
  plVar2 = (longlong *)FUN_14054d1d4();
  puVar3 = local_40;
  if (local_38 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,puVar3);
  uVar4 = 2;
  if (cVar1 == '\0') {
LAB_143384ae8:
    local_28 = uVar4;
  }
  else {
    plVar2 = (longlong *)FUN_14054d1d4();
    puVar3 = local_40;
    if (local_38 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar4 = 0;
    cVar1 = (**(code **)(*plVar2 + 0x60))(plVar2,puVar3,0,1);
    if (cVar1 != '\0') goto LAB_143384ae8;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143384afb:
  plVar2 = (longlong *)*param_3;
  if (plVar2 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_30);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143384b39 FUN_143384b39 body=137 status=ok
// SIG undefined FUN_143384b39(void)

undefined8 FUN_143384b39(undefined8 param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined4 local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14047ac8c();
  if (*(int *)(puVar1 + 1) == 0) {
    local_38 = L"";
  }
  else {
    local_38 = (wchar_t *)*puVar1;
  }
  if (local_38 == (wchar_t *)0x0) {
    local_30 = 0;
  }
  else {
    sVar2 = wcslen(local_38);
    local_30 = (int)sVar2;
  }
  local_28 = L"Demos/";
  local_20 = 6;
  FUN_140bee87a(param_1,&local_38,2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384bc8 FUN_143384bc8 body=131 status=ok
// SIG undefined FUN_143384bc8(void)

void FUN_143384bc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined4 local_40;
  undefined **local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &PTR_FUN_14a5ab610;
  local_38 = &PTR_FUN_14a5ab620;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = 1;
  if (*(int *)(param_3 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x58))(0,&local_48);
  local_48 = &PTR_FUN_14a5ab610;
  FUN_147831144(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384c4c FUN_143384c4c body=123 status=ok
// SIG undefined FUN_143384c4c(void)

void FUN_143384c4c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_14a5ab6b0;
  local_28 = 0;
  uStack_20 = 0;
  local_30 = 1;
  if (*(int *)(param_3 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x58))(0,&local_38);
  local_38 = &PTR_FUN_14a5ab6b0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384cc8 FUN_143384cc8 body=117 status=ok
// SIG undefined FUN_143384cc8(void)

void FUN_143384cc8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14a5ab6b8;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_38 = 1;
  if (*(int *)(param_3 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x58))(0,&local_40);
  FUN_1478304b0(&local_40);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384d3e FUN_143384d3e body=117 status=ok
// SIG undefined FUN_143384d3e(void)

void FUN_143384d3e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14a5ab6c0;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_38 = 1;
  if (*(int *)(param_3 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*param_3;
  }
  (**(code **)(*plVar1 + 0x58))(0,&local_40);
  FUN_14783052c(&local_40);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384db4 FUN_143384db4 body=91 status=ok
// SIG undefined FUN_143384db4(void)

void FUN_143384db4(void)

{
  longlong *plVar1;
  undefined8 *in_R9;
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &PTR_FUN_14a5ab6d0;
  local_10 = 1;
  if (*(int *)(in_R9 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*in_R9;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384e10 FUN_143384e10 body=91 status=ok
// SIG undefined FUN_143384e10(void)

void FUN_143384e10(void)

{
  longlong *plVar1;
  undefined8 *in_R9;
  undefined1 auStack_38 [32];
  undefined **local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = &PTR_FUN_14a5ab6d0;
  local_10 = 1;
  if (*(int *)(in_R9 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*in_R9;
  }
  (**(code **)(*plVar1 + 0x58))(plVar1,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384e6c FUN_143384e6c body=117 status=ok
// SIG undefined FUN_143384e6c(void)

void FUN_143384e6c(void)

{
  longlong *plVar1;
  undefined8 *in_R9;
  undefined1 auStack_68 [40];
  undefined **local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14a5ab608;
  local_30 = 0;
  uStack_28 = 0;
  local_20 = 0;
  uStack_18 = 0;
  local_38 = 1;
  if (*(int *)(in_R9 + 1) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = (longlong *)*in_R9;
  }
  (**(code **)(*plVar1 + 0x58))(0,&local_40);
  FUN_14783040a(&local_40);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143384ee2 FUN_143384ee2 body=212 status=ok
// SIG undefined FUN_143384ee2(void)

longlong FUN_143384ee2(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 == 0) {
    FUN_140002266(local_30,L"checkpoint%d",*(undefined4 *)(param_1 + 0x48));
    plVar2 = (longlong *)FUN_14054d1d4();
    FUN_143384fb7(&local_40,param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
    puVar5 = local_40;
    if (local_38 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,puVar5,0);
    puVar1 = *(undefined8 **)(param_1 + 0x28);
    if ((puVar1 != puVar3) &&
       (*(undefined8 **)(param_1 + 0x28) = puVar3, puVar1 != (undefined8 *)0x0)) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    lVar4 = *(longlong *)(param_1 + 0x28);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 143384fb7 FUN_143384fb7 body=268 status=ok
// SIG undefined FUN_143384fb7(void)

undefined8 FUN_143384fb7(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  wchar_t *_Str;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140002266(&local_78,L"checkpoint%d");
  _Str = L"";
  if (local_70 != 0) {
    _Str = local_78;
  }
  FUN_1433846cf(&local_88,param_2);
  local_68 = L"";
  if (local_80 != 0) {
    local_68 = local_88;
  }
  uVar2 = 0;
  local_60 = 0;
  if (local_68 != (wchar_t *)0x0) {
    sVar1 = wcslen(local_68);
    local_60 = (int)sVar1;
  }
  local_58 = L"checkpoints";
  local_50 = 0xb;
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar1 = wcslen(_Str);
    uVar2 = (int)sVar1;
  }
  local_40 = uVar2;
  FUN_140bee87a(param_1,&local_68,3);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433850c4 FUN_1433850c4 body=361 status=ok
// SIG undefined FUN_1433850c4(void)

void FUN_1433850c4(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = *(undefined8 **)(param_1 + 0x28);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    (**(code **)*puVar2)(puVar2,1);
  }
  plVar1 = (longlong *)FUN_14054d1d4();
  FUN_14338522e(&local_58,param_1 + 0x38,*(undefined4 *)(param_1 + 0x48));
  ppuVar4 = local_58;
  if ((int)local_50 == 0) {
    ppuVar4 = (undefined **)&DAT_149dfb77a;
  }
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x20))(plVar1,ppuVar4,0);
  if (local_58 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (puVar2 == (undefined8 *)0x0) {
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  }
  else {
    local_58 = &PTR_FUN_14a5ab700;
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    FUN_14020fad6(&local_50,L"checkpoint");
    uVar3 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))();
    FUN_140002266(&local_68,L"%lld",uVar3);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    local_30 = CONCAT44(param_2,param_2);
    FUN_14683a1b2(&local_58,&local_68,1);
    FUN_14021219d(puVar2,&local_68);
    if (CONCAT44(uStack_64,local_68) != 0) {
      FUN_1400020a8();
    }
    FUN_1478306a0(&local_58);
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14338522e FUN_14338522e body=268 status=ok
// SIG undefined FUN_14338522e(void)

undefined8 FUN_14338522e(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined4 uVar2;
  wchar_t *_Str;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140002266(&local_78,L"event%d");
  _Str = L"";
  if (local_70 != 0) {
    _Str = local_78;
  }
  FUN_1433846cf(&local_88,param_2);
  local_68 = L"";
  if (local_80 != 0) {
    local_68 = local_88;
  }
  uVar2 = 0;
  local_60 = 0;
  if (local_68 != (wchar_t *)0x0) {
    sVar1 = wcslen(local_68);
    local_60 = (int)sVar1;
  }
  local_58 = L"events";
  local_50 = 6;
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar1 = wcslen(_Str);
    uVar2 = (int)sVar1;
  }
  local_40 = uVar2;
  FUN_140bee87a(param_1,&local_68,3);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338533c FUN_14338533c body=737 status=ok
// SIG undefined FUN_14338533c(void)

void FUN_14338533c(longlong param_1,int param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  wchar_t *_Str;
  undefined2 *puVar5;
  undefined1 auStack_108 [32];
  undefined **local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  wchar_t *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined **local_80;
  undefined4 local_78;
  longlong local_70;
  undefined4 local_68;
  int iStack_64;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 6;
  local_80 = &PTR_FUN_14a5ab730;
  local_70 = -1;
  local_68 = 0xfffffffe;
  iStack_64 = -2;
  if (param_2 == -1) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x90,0x10);
    FUN_144869430(puVar2);
    *puVar2 = &PTR_FUN_14a5ab740;
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if ((puVar3 != puVar2) &&
       (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x1a0))(*(longlong **)(param_1 + 0x20),0);
    local_70 = (longlong)param_4;
    local_78 = 0;
    local_68 = 0xffffffff;
    iStack_64 = -1;
  }
  else {
    FUN_143384fb7(&local_90,param_1 + 0x38,param_2);
    plVar1 = (longlong *)FUN_14054d1d4();
    puVar5 = local_90;
    if (local_88 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,puVar5,0);
    puVar3 = *(undefined8 **)(param_1 + 0x28);
    if ((puVar3 != puVar2) &&
       (*(undefined8 **)(param_1 + 0x28) = puVar2, puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
      puVar2 = *(undefined8 **)(param_1 + 0x28);
    }
    if (puVar2 != (undefined8 *)0x0) {
      local_70 = (longlong)param_4;
      local_78 = 0;
      iStack_64 = param_2;
      FUN_14338522e(&local_a0,param_1 + 0x38,param_2);
      plVar1 = (longlong *)FUN_14054d1d4();
      puVar5 = local_a0;
      if (local_98 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x18))(plVar1,puVar5,0);
      if (puVar3 != (undefined8 *)0x0) {
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_14021219d(puVar3,&local_b8);
        local_e8 = &PTR_FUN_14a5ab700;
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = (wchar_t *)0x0;
        uStack_c8 = 0;
        local_c0 = 0;
        local_58 = (int)uStack_b0 + -1;
        if ((int)uStack_b0 == 0) {
          local_58 = 0;
        }
        local_60 = local_b8;
        FUN_14279eb63(&local_e8);
        local_68 = (undefined4)local_c0;
        FUN_14782fe0c(param_1);
        plVar1 = *(longlong **)(param_1 + 0x20);
        _Str = local_d0;
        if ((int)uStack_c8 == 0) {
          _Str = L"";
        }
        lVar4 = _wtoi64(_Str);
        (**(code **)(*plVar1 + 0x1a0))(plVar1,lVar4);
        FUN_1478306a0(&local_e8);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        (**(code **)*puVar3)(puVar3,1);
      }
      if (local_a0 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_80);
  }
  if ((local_50 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143385622 FUN_143385622 body=237 status=ok
// SIG undefined FUN_143385622(void)

undefined8 FUN_143385622(undefined8 param_1,undefined8 param_2)

{
  size_t sVar1;
  wchar_t *_Str;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  int local_70;
  wchar_t *local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_143385710(&local_68);
  _Str = L"";
  if (local_60 != 0) {
    _Str = local_68;
  }
  FUN_1433846cf(&local_78,param_2);
  local_58 = L"";
  if (local_70 != 0) {
    local_58 = local_78;
  }
  uVar2 = 0;
  local_50 = 0;
  if (local_58 != (wchar_t *)0x0) {
    sVar1 = wcslen(local_58);
    local_50 = (int)sVar1;
  }
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar1 = wcslen(_Str);
    uVar2 = (int)sVar1;
  }
  local_40 = uVar2;
  FUN_140bee87a(param_1,&local_58,2);
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143385710 FUN_143385710 body=816 status=ok
// SIG undefined FUN_143385710(void)

undefined8 * FUN_143385710(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  WORD WVar3;
  WORD WVar4;
  WORD WVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  uint local_78;
  uint local_68;
  uint local_64;
  undefined1 local_60 [8];
  _SYSTEMTIME local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  GetLocalTime(&local_58);
  uVar6 = local_58._8_4_;
  WVar5 = local_58.wDay;
  WVar4 = local_58.wMonth;
  WVar3 = local_58.wYear;
  uVar2 = (uint)local_58._8_4_ >> 0x10;
  local_68 = (uint)local_58.wSecond;
  local_64 = (uint)local_58.wMilliseconds;
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_1402160b8(local_60);
  FUN_14047ad2e(local_60,&local_58,L"%Y.%m.%d-%H.%M.%S");
  if (local_58._8_4_ == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)
             CONCAT26(local_58.wDay,
                      CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)));
  }
  FUN_1448097c4(param_1,&DAT_14a5ab512,puVar7,1);
  if (CONCAT26(local_58.wDay,CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)))
      != 0) {
    FUN_1400020a8();
  }
  local_78 = (uint)WVar3;
  FUN_140002266(&local_58,L"%i-%i-%i",WVar4,WVar5);
  if (local_58._8_4_ == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)
             CONCAT26(local_58.wDay,
                      CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)));
  }
  FUN_1448097c4(param_1,&DAT_149e063bc,puVar7,1);
  if (CONCAT26(local_58.wDay,CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)))
      != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_58,&DAT_149e25cfc,
                (uVar2 * 0x3c + (uVar6 & 0xffff) * 0xe10 + local_68) * 1000 + local_64);
  if (local_58._8_4_ == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)
             CONCAT26(local_58.wDay,
                      CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)));
  }
  FUN_1448097c4(param_1,&DAT_14a5ab52c,puVar7,1);
  if (CONCAT26(local_58.wDay,CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)))
      != 0) {
    FUN_1400020a8();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868710) {
    FUN_144b3d300(&DAT_14c868710);
    if (DAT_14c868710 == -1) {
      FUN_145c3c252(&DAT_14c8686c8);
      DAT_14c868708 = &DAT_14c8686c8;
      atexit(thunk_FUN_14626bbac);
      _Init_thread_footer(&DAT_14c868710);
    }
  }
  FUN_140002266(&local_58,&DAT_149e25cfc,*(uint *)(DAT_14c868708 + 4) & 0x7fffffff);
  if (local_58._8_4_ == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)
             CONCAT26(local_58.wDay,
                      CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)));
  }
  FUN_1448097c4(param_1,&DAT_14a5ab532,puVar7,1);
  if (CONCAT26(local_58.wDay,CONCAT24(local_58.wDayOfWeek,CONCAT22(local_58.wMonth,local_58.wYear)))
      != 0) {
    FUN_1400020a8();
  }
  FUN_1448097c4(param_1,&DAT_149e01f64,&DAT_149e01f60,1);
  FUN_1448097c4(param_1,&DAT_149e065c6,&DAT_149e01f60,1);
  FUN_1448097c4(param_1,&DAT_149e0635c,&DAT_149e01f60,1);
  FUN_1448097c4(param_1,&DAT_149e001d8,&DAT_149e01f60,1);
  FUN_1448097c4(param_1,&DAT_149e1dd00,&DAT_149e01f60,1);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143385a41 FUN_143385a41 body=185 status=ok
// SIG undefined FUN_143385a41(void)

longlong * FUN_143385a41(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_143385622(&local_28);
  iVar1 = (int)local_20;
  iVar3 = ((int)local_20 == 0) + 0xb;
  *param_1 = local_28;
  local_28 = 0;
  *(int *)(param_1 + 1) = (int)local_20;
  iVar2 = local_20._4_4_;
  *(int *)((longlong)param_1 + 0xc) = local_20._4_4_;
  local_20 = 0;
  iVar4 = iVar3 + iVar1;
  if (iVar4 < iVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  if (-1 < iVar4) {
    if (iVar2 < iVar4) {
      FUN_1446f8c06(param_1);
    }
    FUN_1400020e8(param_1,L".replayinfo",0xb);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return param_1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 143385afc FUN_143385afc body=102 status=ok
// SIG undefined FUN_143385afc(void)

void FUN_143385afc(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014a5ab4d0;
  local_14 = 0x1a;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14636a118(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143385b64 FUN_143385b64 body=57 status=ok
// SIG undefined FUN_143385b64(void)

void FUN_143385b64(void)

{
  undefined8 uVar1;
  
  if (DAT_14cabd240 == 0) {
    uVar1 = FUN_14636a237();
    DAT_14cabd240 = FUN_14171c317(FUN_14636a266,uVar1,L"ELocalFileReplayResult");
  }
  return;
}



// FUNCTION 143385b9d FUN_143385b9d body=69 status=ok
// SIG undefined FUN_143385b9d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143385b9d(void)

{
  _DAT_14cabd250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143385bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd258,1);
  return;
}



// FUNCTION 143385be2 FUN_143385be2 body=69 status=ok
// SIG undefined FUN_143385be2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143385be2(void)

{
  _DAT_14cabd268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143385c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd270,1);
  return;
}



// FUNCTION 143385c27 FUN_143385c27 body=69 status=ok
// SIG undefined FUN_143385c27(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143385c27(void)

{
  _DAT_14cabd280 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143385c69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd288,1);
  return;
}



// FUNCTION 143385c6c FUN_143385c6c body=69 status=ok
// SIG undefined FUN_143385c6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143385c6c(void)

{
  _DAT_14cabd298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143385cae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd2a0,1);
  return;
}



// FUNCTION 143385cb1 FUN_143385cb1 body=69 status=ok
// SIG undefined FUN_143385cb1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143385cb1(void)

{
  _DAT_14cabd2b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143385cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd2b8,1);
  return;
}



// FUNCTION 143385cf6 FUN_143385cf6 body=69 status=ok
// SIG undefined FUN_143385cf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143385cf6(void)

{
  _DAT_14cabd2c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143385d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd2d0,1);
  return;
}



// FUNCTION 143385d3b FUN_143385d3b body=69 status=ok
// SIG undefined FUN_143385d3b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143385d3b(void)

{
  _DAT_14cabd2e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143385d7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cabd2e8,1);
  return;
}



// FUNCTION 143385d80 FUN_143385d80 body=49 status=ok
// SIG undefined FUN_143385d80(void)

void FUN_143385d80(void)

{
  FUN_144760e21(DAT_14cabd2f8,DAT_14cabd300);
  if (DAT_14cabd2f8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143385dbe FUN_143385dbe body=196 status=ok
// SIG undefined FUN_143385dbe(void)

void FUN_143385dbe(longlong param_1,void *param_2,size_t param_3)

{
  int iVar1;
  uint uVar2;
  void *_Dst;
  void *_Src;
  longlong lVar3;
  
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    lVar3 = *(longlong *)(param_1 + 0xa8);
    uVar2 = ((int)param_3 - iVar1) + (int)lVar3;
    if (0 < (int)uVar2) {
      *(uint *)(param_1 + 0x98) = iVar1 + uVar2;
      if ((uint)(*(int *)(param_1 + 0x9c) - iVar1) < uVar2) {
        FUN_1447403be((longlong *)(param_1 + 0x90));
        lVar3 = *(longlong *)(param_1 + 0xa8);
      }
    }
    _Dst = (void *)(lVar3 + *(longlong *)(param_1 + 0x90));
    _Src = param_2;
  }
  else {
    if (((longlong)param_3 < 0) ||
       ((longlong)*(int *)(param_1 + 0x98) < (longlong)(*(longlong *)(param_1 + 0xa8) + param_3))) {
      FUN_14572541c(param_1);
      return;
    }
    _Src = (void *)(*(longlong *)(param_1 + 0xa8) + *(longlong *)(param_1 + 0x90));
    _Dst = param_2;
  }
  memcpy(_Dst,_Src,param_3);
  lVar3 = param_3 + *(longlong *)(param_1 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar3;
  *(int *)(param_1 + 0xa0) = (int)lVar3;
  return;
}



// FUNCTION 143385e82 FUN_143385e82 body=175 status=ok
// SIG undefined FUN_143385e82(void)

undefined4 FUN_143385e82(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147832516(param_1,local_40,param_2);
  (**(code **)(*param_1 + 0x1f8))(param_1,&local_30,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1478325ca(param_1,local_30,param_3);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143385f32 FUN_143385f32 body=4798 status=ok
// SIG undefined FUN_143385f32(void)

ulonglong FUN_143385f32(longlong *param_1,longlong *param_2,undefined4 *param_3,uint *param_4)

{
  void **ppvVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  void *_Src;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  longlong lVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined1 *puVar17;
  uint *puVar18;
  int *piVar19;
  undefined4 *puVar20;
  longlong lVar21;
  undefined2 *puVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  int iVar28;
  longlong *plVar29;
  bool bVar30;
  undefined1 auStack_2c8 [32];
  longlong local_2a8;
  longlong *local_2a0;
  undefined4 *local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  uint local_278;
  int local_274;
  undefined8 local_270;
  undefined8 local_268;
  longlong local_260;
  int local_258;
  undefined4 local_254;
  uint local_250;
  int local_24c;
  void *local_248;
  ulonglong uStack_240;
  undefined8 local_228;
  undefined4 local_220;
  undefined8 local_21c;
  int local_214;
  undefined1 local_210 [8];
  undefined1 *local_208;
  int local_200;
  undefined **local_1f8;
  longlong *plStack_1f0;
  undefined ***local_1e8;
  undefined ****ppppuStack_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  local_1f8 = (undefined **)0x0;
  uVar24 = 0;
  plStack_1f0 = (longlong *)((ulonglong)plStack_1f0 & 0xffffffff00000000);
  local_1e8 = (undefined ***)0x0;
  ppppuStack_1e0 = (undefined ****)0x0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  uStack_1b8 = 0;
  local_1b0 = 0xffffffff;
  local_1a8 = 0;
  plStack_1a0 = (longlong *)0x0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  lStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0;
  FUN_14783264c(param_3,&local_1f8);
  FUN_147832492(&local_1f8);
  lVar14 = (**(code **)(*param_2 + 0x30))(param_2);
  if (lVar14 == 0) goto LAB_143386b6a;
  puVar6 = (ulonglong *)param_2[1];
  piVar16 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar16) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24c,4);
    }
    else {
      FUN_14572512c(param_2,&local_24c);
    }
  }
  else {
    local_24c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar16;
  }
  puVar6 = (ulonglong *)param_2[1];
  puVar18 = (uint *)*puVar6 + 1;
  if ((uint *)puVar6[1] < puVar18) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_250,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    local_250 = *(uint *)*puVar6;
    *puVar6 = (ulonglong)puVar18;
  }
  if (local_24c == 0x1ca2e27f) {
    local_248 = (void *)0x0;
    uStack_240 = 0;
    if (local_250 < 7) {
      FUN_1446f470e(&local_268,L"LocalFileReplay",1);
      FUN_1414dd3d2(param_2,&DAT_14a5ac19c,local_250,local_268);
      FUN_1446f470e(&local_270,L"LocalFileReplay",1);
      FUN_1459476e6(&local_248,&DAT_14a5ac19c,local_250,local_270);
    }
    else {
      ppppuStack_1e0 = &local_1e8;
      local_1f8 = &PTR_FUN_149e37810;
      plStack_1f0 = param_2;
      local_1e8 = &local_1f8;
      FUN_14682568e(&local_248,ppppuStack_1e0,3);
      FUN_1468254f0(&local_260,&local_248,L"LocalFileReplay");
      if ((longlong)local_258 != 0) {
        lVar14 = 0;
        do {
          iVar9 = *(int *)(local_260 + lVar14);
          if ((iVar9 == 0) || (iVar9 == 3)) {
LAB_1433871b2:
            FUN_14572541c(param_2);
            if (local_260 != 0) {
              FUN_1400020a8();
            }
            uVar24 = 0;
            goto LAB_143386b51;
          }
          if (iVar9 == 1) {
            FUN_140191ac2(&local_1f8);
            goto LAB_1433871b2;
          }
          lVar14 = lVar14 + 0x10;
        } while ((longlong)local_258 * 0x10 != lVar14);
      }
      (**(code **)(*param_2 + 0x60))(param_2,&local_248);
      if (local_260 != 0) {
        FUN_1400020a8();
      }
    }
    _Src = local_248;
    *param_4 = local_250;
    ppvVar1 = (void **)(param_4 + 6);
    if (ppvVar1 != &local_248) {
      uVar27 = (uint)uStack_240;
      lVar14 = (longlong)(int)(uint)uStack_240;
      param_4[8] = (uint)uStack_240;
      if ((uint)uStack_240 == 0 && param_4[9] == 0) {
        param_4[9] = 0;
      }
      else {
        FUN_1401254a2(ppvVar1,uStack_240 & 0xffffffff);
        if (uVar27 != 0) {
          memcpy(*ppvVar1,_Src,lVar14 * 0x28);
        }
      }
    }
    puVar23 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar23 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
      }
      else {
        FUN_14572512c(param_2,param_3);
      }
    }
    else {
      *param_3 = *puVar23;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar23 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar23 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3 + 1,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_3[1] = *puVar23;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar23 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar23 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_3 + 2,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_3[2] = *puVar23;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    lVar14 = DAT_14cabd2f0;
    local_1f8 = (undefined **)0x0;
    plStack_1f0 = (longlong *)0x0;
    iVar9 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar9 == 0x40000002) {
      uVar24 = 0;
    }
    else {
      bVar30 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar9 != 2)) {
        if (iVar9 == 1) {
          DVar12 = FUN_140ad26c0();
          DVar13 = GetCurrentThreadId();
          bVar30 = DVar12 == DVar13;
        }
        else {
          bVar30 = false;
        }
      }
      uVar24 = (ulonglong)(bVar30 ^ 1);
    }
    lVar26 = param_2[7];
    param_2[7] = (longlong)*(int *)(lVar14 + uVar24 * 4);
    FUN_14021219d(param_2);
    param_2[7] = lVar26;
    uVar24 = 0;
    if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
      uVar25 = (ulonglong)((int)plStack_1f0 - 1);
      if ((int)plStack_1f0 == 0) {
        uVar25 = uVar24;
      }
      FUN_1402980a2(param_4 + 2,local_1f8,uVar25);
      puVar18 = param_4;
      if ((longlong)(int)param_4[8] != 0) {
        piVar16 = *(int **)(param_4 + 6);
        lVar14 = (longlong)(int)param_4[8] * 0x28;
        do {
          if ((((*piVar16 == -0x6a5b0fc2) && (piVar16[1] == 0x7e0b49e4)) &&
              (piVar16[2] == -0x45bc2caa)) && (piVar16[3] == -0x6b007827)) {
            puVar18 = (uint *)(piVar16 + 4);
            if (piVar16 == (int *)0x0) {
              puVar18 = param_4;
            }
            break;
          }
          piVar16 = piVar16 + 10;
          lVar14 = lVar14 + -0x28;
        } while (lVar14 != 0);
      }
      if (0 < (int)*puVar18) {
        FUN_1462682d6(&local_1f8,&local_260);
        if ((longlong *)(param_3 + 4) == &local_260) {
          if (local_260 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*(longlong *)(param_3 + 4) != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_3 + 4) = local_260;
          local_260 = 0;
          param_3[6] = local_258;
          param_3[7] = local_254;
        }
      }
      puVar6 = (ulonglong *)param_2[1];
      puVar23 = (undefined4 *)*puVar6 + 1;
      if ((undefined4 *)puVar6[1] < puVar23) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_260,4);
        }
        else {
          FUN_14572512c(param_2,&local_260);
        }
      }
      else {
        local_260 = CONCAT44(local_260._4_4_,*(undefined4 *)*puVar6);
        *puVar6 = (ulonglong)puVar23;
      }
      *(bool *)(param_3 + 0xc) = (int)local_260 != 0;
      piVar16 = *(int **)(param_4 + 6);
      uVar27 = param_4[8];
      lVar14 = (longlong)(int)uVar27;
      puVar18 = param_4;
      if (lVar14 != 0) {
        lVar26 = lVar14 * 0x28;
        piVar19 = piVar16;
        do {
          if (((*piVar19 == -0x6a5b0fc2) && (piVar19[1] == 0x7e0b49e4)) &&
             ((piVar19[2] == -0x45bc2caa && (piVar19[3] == -0x6b007827)))) {
            puVar18 = (uint *)(piVar19 + 4);
            if (piVar19 == (int *)0x0) {
              puVar18 = param_4;
            }
            break;
          }
          piVar19 = piVar19 + 10;
          lVar26 = lVar26 + -0x28;
        } while (lVar26 != 0);
      }
      if (2 < (int)*puVar18) {
        FUN_1408383eb(param_2,param_3 + 8);
        piVar16 = *(int **)(param_4 + 6);
        uVar27 = param_4[8];
        lVar14 = (longlong)(int)uVar27;
      }
      puVar18 = param_4;
      if (uVar27 != 0) {
        lVar26 = lVar14 * 0x28;
        piVar19 = piVar16;
        do {
          if (((*piVar19 == -0x6a5b0fc2) && (piVar19[1] == 0x7e0b49e4)) &&
             ((piVar19[2] == -0x45bc2caa && (piVar19[3] == -0x6b007827)))) {
            puVar18 = (uint *)(piVar19 + 4);
            if (piVar19 == (int *)0x0) {
              puVar18 = param_4;
            }
            break;
          }
          piVar19 = piVar19 + 10;
          lVar26 = lVar26 + -0x28;
        } while (lVar26 != 0);
      }
      if (1 < (int)*puVar18) {
        puVar6 = (ulonglong *)param_2[1];
        piVar16 = (int *)*puVar6 + 1;
        if ((int *)puVar6[1] < piVar16) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_274,4);
          }
          else {
            FUN_14572512c(param_2,&local_274);
          }
        }
        else {
          local_274 = *(int *)*puVar6;
          *puVar6 = (ulonglong)piVar16;
        }
        *(bool *)((longlong)param_3 + 0x32) = local_274 != 0;
        piVar16 = *(int **)(param_4 + 6);
        uVar27 = param_4[8];
        lVar14 = (longlong)(int)uVar27;
      }
      puVar18 = param_4;
      if (uVar27 != 0) {
        lVar14 = lVar14 * 0x28;
        do {
          if ((((*piVar16 == -0x6a5b0fc2) && (piVar16[1] == 0x7e0b49e4)) &&
              (piVar16[2] == -0x45bc2caa)) && (piVar16[3] == -0x6b007827)) {
            puVar18 = (uint *)(piVar16 + 4);
            if (piVar16 == (int *)0x0) {
              puVar18 = param_4;
            }
            break;
          }
          piVar16 = piVar16 + 10;
          lVar14 = lVar14 + -0x28;
        } while (lVar14 != 0);
      }
      if ((int)*puVar18 < 6) {
LAB_14338657c:
        if (((*(char *)(param_3 + 0xc) != '\0') || (*(char *)((longlong)param_3 + 0x33) != '\x01'))
           || (param_3[0x10] != 0)) {
          local_2a8 = (**(code **)(*param_2 + 0x30))(param_2);
          cVar8 = (**(code **)(*param_2 + 0x38))(param_2);
          uVar24 = 1;
          if (cVar8 == '\0') {
            local_280 = (longlong *)(param_3 + 0x14);
            local_290 = (longlong *)(param_3 + 0x1c);
            local_298 = param_3 + 0x20;
            local_2a0 = (longlong *)(param_3 + 0x18);
            local_288 = param_1;
            do {
              uVar15 = (**(code **)(*param_2 + 0x28))(param_2);
              puVar6 = (ulonglong *)param_2[1];
              piVar16 = (int *)*puVar6 + 1;
              if ((int *)puVar6[1] < piVar16) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))(param_2,&local_274,4);
                }
                else {
                  FUN_14572512c(param_2,&local_274);
                }
              }
              else {
                local_274 = *(int *)*puVar6;
                *puVar6 = (ulonglong)piVar16;
              }
              plVar29 = local_280;
              iVar9 = FUN_14783278a(local_280);
              lVar14 = *plVar29;
              puVar23 = (undefined4 *)(lVar14 + 4 + (longlong)iVar9 * 0x18);
              puVar23[-1] = local_274;
              puVar7 = *(undefined4 **)param_2[1];
              if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
                if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                  (**(code **)(*param_2 + 0x170))(param_2,puVar23,4);
                }
                else {
                  FUN_14572512c(param_2);
                }
              }
              else {
                *puVar23 = *puVar7;
                *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
              }
              lVar14 = lVar14 + (longlong)iVar9 * 0x18;
              *(undefined8 *)(lVar14 + 8) = uVar15;
              lVar26 = (**(code **)(*param_2 + 0x28))(param_2);
              *(longlong *)(lVar14 + 0x10) = lVar26;
              if (((longlong)*(int *)(lVar14 + 4) < 0) ||
                 (local_2a8 < lVar26 + *(int *)(lVar14 + 4))) goto LAB_14338709c;
              switch(local_274) {
              case 0:
                if (param_3[0x12] != -1) goto LAB_14338709c;
                param_3[0x12] = iVar9;
                break;
              case 1:
                iVar28 = FUN_147832802(local_298);
                plVar29 = local_288;
                lVar14 = *(longlong *)(param_3 + 0x20);
                lVar26 = (longlong)iVar28;
                *(int *)(lVar14 + lVar26 * 0x28) = iVar9;
                *(undefined8 *)(lVar14 + 0x20 + lVar26 * 0x28) = *(undefined8 *)(param_3 + 10);
                puVar18 = param_4;
                if ((longlong)(int)param_4[8] != 0) {
                  piVar16 = *(int **)(param_4 + 6);
                  lVar21 = (longlong)(int)param_4[8] * 0x28;
                  do {
                    if ((((*piVar16 == -0x6a5b0fc2) && (piVar16[1] == 0x7e0b49e4)) &&
                        (piVar16[2] == -0x45bc2caa)) && (piVar16[3] == -0x6b007827)) {
                      puVar18 = (uint *)(piVar16 + 4);
                      if (piVar16 == (int *)0x0) {
                        puVar18 = param_4;
                      }
                      break;
                    }
                    piVar16 = piVar16 + 10;
                    lVar21 = lVar21 + -0x28;
                  } while (lVar21 != 0);
                }
                lVar14 = lVar14 + lVar26 * 0x28;
                if ((int)*puVar18 < 4) {
                  *(undefined4 *)(lVar14 + 0xc) = *puVar23;
                }
                else {
                  puVar7 = *(undefined4 **)param_2[1];
                  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
                    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(lVar14 + 4),4);
                    }
                    else {
                      FUN_14572512c(param_2);
                    }
                  }
                  else {
                    *(undefined4 *)(lVar14 + 4) = *puVar7;
                    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
                  }
                  puVar7 = *(undefined4 **)param_2[1];
                  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
                    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(lVar14 + 8),4);
                    }
                    else {
                      FUN_14572512c(param_2);
                    }
                  }
                  else {
                    *(undefined4 *)(lVar14 + 8) = *puVar7;
                    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
                  }
                  puVar7 = *(undefined4 **)param_2[1];
                  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
                    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(lVar14 + 0xc),4);
                    }
                    else {
                      FUN_14572512c(param_2);
                    }
                  }
                  else {
                    *(undefined4 *)(lVar14 + 0xc) = *puVar7;
                    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
                  }
                }
                puVar18 = param_4;
                if ((longlong)(int)param_4[8] != 0) {
                  piVar16 = *(int **)(param_4 + 6);
                  lVar26 = (longlong)(int)param_4[8] * 0x28;
                  do {
                    if (((*piVar16 == -0x6a5b0fc2) && (piVar16[1] == 0x7e0b49e4)) &&
                       ((piVar16[2] == -0x45bc2caa && (piVar16[3] == -0x6b007827)))) {
                      puVar18 = (uint *)(piVar16 + 4);
                      if (piVar16 == (int *)0x0) {
                        puVar18 = param_4;
                      }
                      break;
                    }
                    piVar16 = piVar16 + 10;
                    lVar26 = lVar26 + -0x28;
                  } while (lVar26 != 0);
                }
                if ((int)*puVar18 < 6) {
                  uVar15 = (**(code **)(*param_2 + 0x28))(param_2);
                  *(undefined8 *)(lVar14 + 0x18) = uVar15;
                  if (*(char *)((longlong)param_3 + 0x32) == '\x01') {
                    uVar10 = (**(code **)(*plVar29 + 0x218))(plVar29);
                  }
                  else {
                    uVar10 = *(undefined4 *)(lVar14 + 0xc);
                  }
                  *(undefined4 *)(lVar14 + 0x10) = uVar10;
                }
                else {
                  puVar7 = *(undefined4 **)param_2[1];
                  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
                    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(lVar14 + 0x10),4);
                    }
                    else {
                      FUN_14572512c(param_2);
                    }
                  }
                  else {
                    *(undefined4 *)(lVar14 + 0x10) = *puVar7;
                    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
                  }
                  uVar15 = (**(code **)(*param_2 + 0x28))(param_2);
                  *(undefined8 *)(lVar14 + 0x18) = uVar15;
                }
                if ((((longlong)*(int *)(lVar14 + 0xc) < 0) ||
                    (local_2a8 < (longlong)*(int *)(lVar14 + 0xc) + *(longlong *)(lVar14 + 0x18)))
                   || ((longlong)*(int *)(lVar14 + 0x10) < 0)) goto LAB_14338709c;
                *(longlong *)(param_3 + 10) =
                     *(longlong *)(param_3 + 10) + (longlong)*(int *)(lVar14 + 0x10);
                break;
              case 2:
                plVar29 = local_2a0;
                goto LAB_1433867c3;
              case 3:
                plVar29 = local_290;
LAB_1433867c3:
                iVar28 = FUN_1478327c6(plVar29);
                lVar14 = *plVar29;
                puVar23 = (undefined4 *)((longlong)iVar28 * 0x50);
                *(int *)(lVar14 + (longlong)puVar23) = iVar9;
                FUN_14021219d(param_2);
                FUN_14021219d(param_2,(longlong)puVar23 + lVar14 + 0x18);
                FUN_14021219d(param_2,(longlong)puVar23 + lVar14 + 0x28);
                puVar20 = (undefined4 *)((longlong)puVar23 + lVar14 + 0x38);
                puVar7 = *(undefined4 **)param_2[1];
                if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar7 + 1) {
                  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_2 + 0x170))(param_2,puVar20,4);
                  }
                  else {
                    FUN_14572512c(param_2);
                  }
                }
                else {
                  *puVar20 = *puVar7;
                  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
                }
                puVar7 = (undefined4 *)((longlong)puVar23 + lVar14 + 0x3c);
                puVar20 = *(undefined4 **)param_2[1];
                if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar20 + 1) {
                  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
                  }
                  else {
                    FUN_14572512c(param_2);
                  }
                }
                else {
                  *puVar7 = *puVar20;
                  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
                }
                puVar7 = (undefined4 *)((longlong)puVar23 + lVar14 + 0x40);
                puVar20 = *(undefined4 **)param_2[1];
                if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar20 + 1) {
                  if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    (**(code **)(*param_2 + 0x170))(param_2,puVar7,4);
                  }
                  else {
                    FUN_14572512c(param_2);
                  }
                }
                else {
                  *puVar7 = *puVar20;
                  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
                }
                lVar26 = (**(code **)(*param_2 + 0x28))(param_2);
                *(longlong *)((longlong)puVar23 + lVar14 + 0x48) = lVar26;
                lVar14 = (longlong)*(int *)((longlong)puVar23 + lVar14 + 0x40);
                if ((lVar14 < 0) || (local_2a8 < lVar26 + lVar14)) goto LAB_14338709c;
              }
              if ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0) goto LAB_1433870a4;
              (**(code **)(*param_2 + 0x1a0))(param_2);
              cVar8 = (**(code **)(*param_2 + 0x38))(param_2);
            } while (cVar8 == '\0');
            uVar24 = CONCAT71((int7)((ulonglong)puVar23 >> 8),1);
          }
          goto LAB_143386b3f;
        }
      }
      else {
        puVar6 = (ulonglong *)param_2[1];
        piVar16 = (int *)*puVar6 + 1;
        if ((int *)puVar6[1] < piVar16) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_274,4);
          }
          else {
            FUN_14572512c(param_2,&local_274);
          }
        }
        else {
          local_274 = *(int *)*puVar6;
          *puVar6 = (ulonglong)piVar16;
        }
        *(bool *)((longlong)param_3 + 0x33) = local_274 != 0;
        uVar15 = (**(code **)(*param_2 + 0x28))(param_2);
        puVar6 = (ulonglong *)param_2[1];
        puVar18 = (uint *)*puVar6 + 1;
        if ((uint *)puVar6[1] < puVar18) {
          if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
            (**(code **)(*param_2 + 0x170))(param_2,&local_278,4);
          }
          else {
            FUN_14572512c(param_2);
          }
        }
        else {
          local_278 = *(uint *)*puVar6;
          *puVar6 = (ulonglong)puVar18;
        }
        if (local_278 < 0x1001) {
          (**(code **)(*param_2 + 0x1a0))(param_2,uVar15);
          FUN_140077068(param_2);
          goto LAB_14338657c;
        }
      }
LAB_14338709c:
      FUN_14572541c(param_2);
LAB_1433870a4:
      uVar24 = 0;
    }
LAB_143386b3f:
    if (local_1f8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
LAB_143386b51:
    if (local_248 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar24 == '\0') {
LAB_143386b68:
      uVar24 = 0;
      goto LAB_143386b6a;
    }
  }
  if ((longlong)(int)param_4[8] != 0) {
    piVar16 = *(int **)(param_4 + 6);
    lVar14 = (longlong)(int)param_4[8] * 0x28;
    do {
      if ((((*piVar16 == -0x6a5b0fc2) && (piVar16[1] == 0x7e0b49e4)) && (piVar16[2] == -0x45bc2caa))
         && (piVar16[3] == -0x6b007827)) {
        if (piVar16 != (int *)0x0) {
          param_4 = (uint *)(piVar16 + 4);
        }
        break;
      }
      piVar16 = piVar16 + 10;
      lVar14 = lVar14 + -0x28;
    } while (lVar14 != 0);
  }
  if ((int)*param_4 < 4) {
    iVar9 = param_3[0x22];
    if (0 < iVar9) {
      lVar14 = 0x38;
      lVar26 = 0;
      lVar21 = 0;
      do {
        uVar10 = 0;
        if ((lVar26 != 0) && (lVar21 <= (int)param_3[0x1a])) {
          uVar10 = *(undefined4 *)(*(longlong *)(param_3 + 0x18) + -0x18 + lVar26 * 2);
        }
        *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 4 + lVar26) = uVar10;
        puVar23 = (undefined4 *)(*(longlong *)(param_3 + 0x18) + lVar14);
        if ((int)param_3[0x1a] <= lVar21) {
          puVar23 = param_3;
        }
        *(undefined4 *)(*(longlong *)(param_3 + 0x20) + 8 + lVar26) = *puVar23;
        lVar21 = lVar21 + 1;
        iVar9 = param_3[0x22];
        lVar26 = lVar26 + 0x28;
        lVar14 = lVar14 + 0x50;
      } while (lVar21 < iVar9);
    }
  }
  else {
    iVar9 = param_3[0x22];
  }
  if (iVar9 != 0) {
    piVar16 = *(int **)(param_3 + 0x20);
    piVar19 = piVar16;
    do {
      uVar27 = piVar19[2];
      uVar11 = piVar19[1];
      lVar14 = 0;
      do {
        if ((*piVar19 != *(int *)((longlong)piVar16 + lVar14)) && (uVar11 <= uVar27)) {
          uVar4 = *(uint *)((longlong)piVar16 + lVar14 + 4);
          uVar24 = (ulonglong)uVar4;
          uVar5 = *(uint *)((longlong)piVar16 + lVar14 + 8);
          if (uVar4 <= uVar5) {
            if (uVar27 < uVar5) {
              uVar5 = uVar27;
            }
            if (uVar4 <= uVar11) {
              uVar24 = (ulonglong)uVar11;
            }
            if ((uint)uVar24 < uVar5) {
              FUN_14572541c(param_2);
              goto LAB_143386b68;
            }
          }
        }
        lVar14 = lVar14 + 0x28;
      } while ((longlong)iVar9 * 0x28 != lVar14);
      piVar19 = piVar19 + 10;
    } while (piVar19 != piVar16 + (longlong)iVar9 * 10);
  }
  local_228 = 0;
  local_220 = 0;
  local_248 = (void *)0x0;
  uStack_240 = 0;
  local_21c = 0xffffffff00000080;
  local_214 = 0;
  local_208 = (undefined1 *)0x0;
  local_200 = 0;
  if ((longlong)(int)param_3[0x1a] != 0) {
    lVar14 = *(longlong *)(param_3 + 0x18);
    local_2a8 = (longlong)(int)param_3[0x1a] * 0x50 + lVar14;
    do {
      plVar29 = (longlong *)(lVar14 + 8);
      iVar9 = *(int *)(lVar14 + 0x10);
      iVar28 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar28 = 0;
      }
      uVar27 = 0;
      if (0 < iVar28) {
        puVar22 = &DAT_149dfb77a;
        if (iVar9 != 0) {
          puVar22 = (undefined2 *)*plVar29;
        }
        lVar26 = 0;
        uVar27 = 0;
        do {
          uVar11 = ((uint)(ushort)puVar22[lVar26] +
                   (uint)(0x19 < (ushort)puVar22[lVar26] - 0x61) * 0x20) - 0x20;
          uVar27 = uVar27 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar27 ^ uVar11) & 0xff) * 4);
          uVar27 = uVar27 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar27 & 0xff ^ uVar11 >> 8 & 0xff) * 4);
          lVar26 = lVar26 + 1;
        } while (iVar28 != (int)lVar26);
      }
      if ((uint)uStack_240 != local_214) {
        puVar17 = local_208;
        if (local_208 == (undefined1 *)0x0) {
          puVar17 = local_210;
        }
        iVar28 = *(int *)(puVar17 + (ulonglong)(local_200 - 1U & uVar27) * 4);
        if (iVar28 != -1) {
LAB_143386f81:
          lVar26 = (longlong)iVar28;
          iVar28 = *(int *)((longlong)local_248 + lVar26 * 0x18 + 8);
          if (iVar28 == iVar9) {
            if (1 < iVar9) {
              uVar24 = 0;
              do {
                uVar2 = *(ushort *)(*(longlong *)((longlong)local_248 + lVar26 * 0x18) + uVar24);
                uVar3 = *(ushort *)(*plVar29 + uVar24);
                if (uVar2 == uVar3) {
                  if (uVar2 == 0) break;
                }
                else {
                  if (0x7f < (uVar3 | uVar2)) {
                    iVar28 = (uint)uVar2 - (uint)uVar3;
                    goto LAB_143387007;
                  }
                  if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                  goto code_r0x000143387004;
                }
                uVar24 = uVar24 + 2;
              } while( true );
            }
            goto LAB_14338703f;
          }
          if (iVar28 + iVar9 == 1) goto LAB_14338703f;
          goto LAB_143386f9d;
        }
      }
LAB_143387013:
      FUN_14482b35e(&local_248,&local_1f8,plVar29,0);
      lVar14 = lVar14 + 0x50;
    } while (lVar14 != local_2a8);
  }
  *(bool *)((longlong)param_3 + 0x31) =
       (int)param_3[0x12] < (int)param_3[0x16] && -1 < (int)param_3[0x12];
  FUN_144869430(&local_1f8);
  local_1f8 = &PTR_FUN_149e8ed80;
  local_168 = 0;
  uStack_160 = 0;
  uStack_1d0 = uStack_1d0 & 0xffffffffd7ffffff | 0x8000000;
  FUN_147831d98(param_3,&local_1f8);
  plVar29 = plStack_1a0;
  uVar24 = CONCAT71((int7)(uVar24 >> 8),
                    (*(byte *)((longlong)param_2 + 0x29) & 2) == 0 &
                    *(byte *)((longlong)param_3 + 0x31));
  local_1f8 = &PTR__purecall_149e35f70;
  if (plStack_1a0 != (longlong *)0x0) {
    if (*plStack_1a0 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar29);
  }
  lVar14 = lStack_180;
  if (lStack_180 != 0) {
    if (*(longlong *)(lStack_180 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar14);
  }
LAB_143387049:
  local_200 = 0;
  if (local_208 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_248);
LAB_143386b6a:
  if ((local_60 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24 & 0xffffffff;
code_r0x000143387004:
  iVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_143387007:
  if (iVar28 == 0) {
LAB_14338703f:
    FUN_14572541c(param_2);
    uVar24 = 0;
    goto LAB_143387049;
  }
LAB_143386f9d:
  iVar28 = *(int *)((longlong)local_248 + lVar26 * 0x18 + 0x10);
  if (iVar28 == -1) goto LAB_143387013;
  goto LAB_143386f81;
}



// FUNCTION 1433871f2 FUN_1433871f2 body=175 status=ok
// SIG undefined FUN_1433871f2(void)

undefined4 FUN_1433871f2(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147832516(param_1,local_40,param_2);
  (**(code **)(*param_1 + 0x200))(param_1,&local_30,local_40);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (local_30 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14783283e(param_1,local_30,param_3);
  }
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
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433872a2 FUN_1433872a2 body=1962 status=ok
// SIG undefined FUN_1433872a2(void)

ulonglong FUN_1433872a2(longlong *param_1,longlong *param_2,undefined4 *param_3,int *param_4)

{
  uint *puVar1;
  wchar_t wVar2;
  ushort uVar3;
  ulonglong *puVar4;
  undefined4 *puVar5;
  void *_Src;
  byte bVar6;
  int *piVar7;
  wchar_t *pwVar8;
  size_t sVar9;
  ushort *puVar10;
  int *piVar11;
  int iVar12;
  longlong lVar13;
  ushort *puVar14;
  uint uVar15;
  ulonglong uVar16;
  int *piVar17;
  undefined8 unaff_RBP;
  longlong lVar18;
  wchar_t *_Str;
  undefined1 auStack_238 [44];
  uint local_20c;
  uint local_208;
  undefined4 uStack_204;
  wchar_t *local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1dc;
  undefined **local_1d8;
  longlong *plStack_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  longlong local_158;
  undefined8 local_150;
  undefined4 local_148;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_238;
  piVar11 = param_4;
  if ((longlong)param_4[8] != 0) {
    piVar7 = *(int **)(param_4 + 6);
    lVar13 = (longlong)param_4[8] * 0x28;
    do {
      if ((((*piVar7 == -0x6a5b0fc2) && (piVar7[1] == 0x7e0b49e4)) && (piVar7[2] == -0x45bc2caa)) &&
         (piVar7[3] == -0x6b007827)) {
        piVar11 = piVar7 + 4;
        if (piVar7 == (int *)0x0) {
          piVar11 = param_4;
        }
        break;
      }
      piVar7 = piVar7 + 10;
      lVar13 = lVar13 + -0x28;
    } while (lVar13 != 0);
  }
  if (*piVar11 < 1) {
    uVar16 = 0;
    goto LAB_14338732d;
  }
  (**(code **)(*param_2 + 0x1a0))(param_2,0);
  local_1dc = 0x1ca2e27f;
  puVar4 = (ulonglong *)param_2[1];
  puVar5 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar5) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1dc,4);
    }
    else {
      FUN_14572512c(param_2,&local_1dc);
    }
  }
  else {
    local_1dc = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar5;
  }
  piVar11 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar11 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_4,4);
    }
    else {
      FUN_14572512c(param_2,param_4);
    }
  }
  else {
    *param_4 = *piVar11;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar11 = param_4;
  if ((longlong)param_4[8] != 0) {
    piVar7 = *(int **)(param_4 + 6);
    lVar13 = (longlong)param_4[8] * 0x28;
    do {
      if (((*piVar7 == -0x6a5b0fc2) && (piVar7[1] == 0x7e0b49e4)) &&
         ((piVar7[2] == -0x45bc2caa && (piVar7[3] == -0x6b007827)))) {
        piVar11 = piVar7 + 4;
        if (piVar7 == (int *)0x0) {
          piVar11 = param_4;
        }
        break;
      }
      piVar7 = piVar7 + 10;
      lVar13 = lVar13 + -0x28;
    } while (lVar13 != 0);
  }
  if (6 < *piVar11) {
    local_1c0 = &local_1c8;
    local_1d8 = &PTR_FUN_149e37810;
    local_1c8 = &local_1d8;
    plStack_1d0 = param_2;
    FUN_14682568e(param_4 + 6,local_1c0,3);
    (**(code **)(*param_2 + 0x60))(param_2,param_4 + 6);
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3,4);
    }
    else {
      FUN_14572512c(param_2,param_3);
    }
  }
  else {
    *param_3 = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3 + 1,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_3[1] = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar5 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_3 + 2,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_3[2] = *puVar5;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_1f8 = (wchar_t *)0x0;
  uStack_1f0 = 0;
  FUN_1478328c0(param_1,param_3 + 4);
  lVar13 = (longlong)param_4[8];
  uVar16 = 0;
  piVar11 = param_4;
  if (lVar13 != 0) {
    piVar7 = *(int **)(param_4 + 6);
    uVar16 = lVar13 * 8;
    lVar13 = lVar13 * 0x28;
    do {
      if (((*piVar7 == -0x6a5b0fc2) && (piVar7[1] == 0x7e0b49e4)) &&
         ((piVar7[2] == -0x45bc2caa && (piVar7[3] == -0x6b007827)))) {
        piVar11 = piVar7 + 4;
        if (piVar7 == (int *)0x0) {
          piVar11 = param_4;
        }
        break;
      }
      piVar7 = piVar7 + 10;
      lVar13 = lVar13 + -0x28;
    } while (lVar13 != 0);
  }
  if (*piVar11 < 5) {
    pwVar8 = local_1f8;
    _Str = local_1f8;
    if ((int)uStack_1f0 == 0) {
      pwVar8 = L"";
      _Str = L"";
    }
    do {
      wVar2 = *pwVar8;
      pwVar8 = pwVar8 + 1;
    } while (0xff80 < (ushort)(wVar2 + L'ﾀ'));
    if (wVar2 == L'\0') {
      iVar12 = param_4[4];
      puVar10 = *(ushort **)(param_4 + 2);
LAB_143387688:
      puVar14 = &DAT_149dfb77a;
      if (iVar12 != 0) {
        puVar14 = puVar10;
      }
      do {
        uVar3 = *puVar14;
        uVar15 = uVar3 - 0x80;
        uVar16 = (ulonglong)uVar15;
        puVar14 = puVar14 + 1;
      } while (0xff80 < (ushort)uVar15);
      if (uVar3 != 0) goto LAB_1433876ae;
      FUN_14021219d(param_2,&local_1f8);
    }
    else {
      iVar12 = param_4[4];
      puVar10 = *(ushort **)(param_4 + 2);
      puVar14 = &DAT_149dfb77a;
      if (iVar12 != 0) {
        puVar14 = puVar10;
      }
      do {
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
      } while (0xff80 < (ushort)(uVar3 - 0x80));
      if (uVar3 != 0) goto LAB_143387688;
      local_158 = 0;
      if (_Str == (wchar_t *)0x0) {
        local_150 = 0;
        local_148 = 0;
      }
      else {
        sVar9 = wcslen(_Str);
        FUN_1449b853c(&local_1d8,_Str,sVar9 & 0xffffffff,1);
      }
      FUN_1400b22c2(&local_208,local_150);
      if (local_158 != 0) {
        FUN_1400020a8();
      }
      FUN_14021219d(param_2,&local_208);
      if (CONCAT44(uStack_204,local_208) != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
LAB_1433876ae:
    bVar6 = *(byte *)(param_2 + 5);
    (**(code **)(*param_2 + 0xe8))(param_2,CONCAT71((int7)(uVar16 >> 8),1));
    FUN_14021219d(param_2,&local_1f8);
    (**(code **)(*param_2 + 0xe8))
              (param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar6 >> 7) & 0xffffffff);
  }
  local_208 = (uint)*(byte *)(param_3 + 0xc);
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_208,4);
    }
    else {
      FUN_14572512c(param_2,&local_208);
    }
  }
  else {
    local_208 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  piVar11 = *(int **)(param_4 + 6);
  iVar12 = param_4[8];
  lVar13 = (longlong)iVar12;
  piVar7 = param_4;
  if (lVar13 != 0) {
    lVar18 = lVar13 * 0x28;
    piVar17 = piVar11;
    do {
      if ((((*piVar17 == -0x6a5b0fc2) && (piVar17[1] == 0x7e0b49e4)) && (piVar17[2] == -0x45bc2caa))
         && (piVar17[3] == -0x6b007827)) {
        piVar7 = piVar17 + 4;
        if (piVar17 == (int *)0x0) {
          piVar7 = param_4;
        }
        break;
      }
      piVar17 = piVar17 + 10;
      lVar18 = lVar18 + -0x28;
    } while (lVar18 != 0);
  }
  if (2 < *piVar7) {
    FUN_1408383eb(param_2,param_3 + 8);
    piVar11 = *(int **)(param_4 + 6);
    iVar12 = param_4[8];
    lVar13 = (longlong)iVar12;
  }
  piVar7 = param_4;
  if (iVar12 != 0) {
    lVar18 = lVar13 * 0x28;
    piVar17 = piVar11;
    do {
      if (((*piVar17 == -0x6a5b0fc2) && (piVar17[1] == 0x7e0b49e4)) &&
         ((piVar17[2] == -0x45bc2caa && (piVar17[3] == -0x6b007827)))) {
        piVar7 = piVar17 + 4;
        if (piVar17 == (int *)0x0) {
          piVar7 = param_4;
        }
        break;
      }
      piVar17 = piVar17 + 10;
      lVar18 = lVar18 + -0x28;
    } while (lVar18 != 0);
  }
  if (1 < *piVar7) {
    bVar6 = (**(code **)(*param_1 + 0x1c0))(param_1);
    local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,(uint)bVar6);
    puVar4 = (ulonglong *)param_2[1];
    if (puVar4[1] < *puVar4 + 4) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1d8,4);
      }
      else {
        FUN_14572512c(param_2,&local_1d8);
      }
    }
    else {
      *puVar4 = *puVar4 + 4;
    }
    piVar11 = *(int **)(param_4 + 6);
    iVar12 = param_4[8];
    lVar13 = (longlong)iVar12;
  }
  if (iVar12 != 0) {
    lVar13 = lVar13 * 0x28;
    do {
      if (((*piVar11 == -0x6a5b0fc2) && (piVar11[1] == 0x7e0b49e4)) &&
         ((piVar11[2] == -0x45bc2caa && (piVar11[3] == -0x6b007827)))) {
        if (piVar11 != (int *)0x0) {
          param_4 = piVar11 + 4;
        }
        break;
      }
      piVar11 = piVar11 + 10;
      lVar13 = lVar13 + -0x28;
    } while (lVar13 != 0);
  }
  if (5 < *param_4) {
    bVar6 = (**(code **)(*param_1 + 0x1d8))(param_1);
    local_20c = (uint)bVar6;
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_20c,4);
      }
      else {
        FUN_14572512c();
      }
    }
    else {
      local_20c = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    local_1d8 = (undefined **)0x0;
    plStack_1d0 = (longlong *)0x0;
    if (*(char *)(param_3 + 0xc) == '\x01') {
      uVar15 = param_3[0x10];
      plStack_1d0 = (longlong *)(ulonglong)uVar15;
      if ((longlong)(int)uVar15 != 0) {
        FUN_1447403be(&local_1d8);
      }
      memset(local_1d8,0,(longlong)(int)uVar15);
    }
    else if (&local_1d8 != (undefined ***)(param_3 + 0xe)) {
      uVar15 = param_3[0x10];
      _Src = *(void **)(param_3 + 0xe);
      plStack_1d0 = (longlong *)(ulonglong)uVar15;
      if ((longlong)(int)uVar15 != 0) {
        FUN_1447a127e(&local_1d8,uVar15,0);
        memcpy(local_1d8,_Src,(longlong)(int)uVar15);
      }
    }
    FUN_140077068(param_2,&local_1d8);
    if (local_1d8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  uVar16 = CONCAT71((int7)((ulonglong)param_2 >> 8),(*(byte *)((longlong)param_2 + 0x29) & 2) == 0);
  if (local_1f8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
LAB_14338732d:
  if ((local_40 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 143387a4e FUN_143387a4e body=1472 status=ok
// SIG undefined FUN_143387a4e(void)

void FUN_143387a4e(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  void *pvVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  byte bVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  longlong *local_168;
  int local_160 [24];
  void *local_100;
  undefined8 local_f8;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined8 *local_e0;
  int local_d8;
  undefined **local_d0;
  undefined4 local_c8;
  byte local_c0;
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_c8 = 6;
  local_d0 = &PTR_FUN_14a5ab538;
  local_c0 = *(byte *)(param_2 + 0x58);
  if (((char)param_1[0x77] == '\0') && (param_1[0x33] == 0)) {
    if ((1 < *(int *)(param_2 + 8)) || (local_c0 != 0)) {
      bVar3 = local_c0 ^ 1;
      if (*(int *)(param_2 + 8) < 2) {
        bVar3 = 0;
      }
      bVar7 = (bVar3 == 0) << 2;
      *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfa | bVar7 | bVar3;
      *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
      *(byte *)(param_1 + 0x3a) = *(byte *)(param_1 + 0x3a) & 0xfa | bVar3 | bVar7;
      *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) & 0xfa | bVar3 | bVar7;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x2a] = 0;
      param_1[0x2b] = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      local_e8 = param_1;
      if (*(char *)(param_2 + 0x58) == '\0') {
        *(undefined1 *)(param_1 + 0x77) = 2;
        local_e0 = (undefined8 *)0x0;
        local_d8 = 0;
        FUN_1478367a6(&local_e0,param_3);
        local_78[0] = (code *)0x0;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_FUN_14a5acd90;
        local_50 = local_e8;
        local_48 = 0;
        local_40 = 0;
        FUN_1478367a6(&local_48,&local_e0);
        local_78[0] = FUN_14338b546;
        local_168 = param_1;
        FUN_147832994(local_160,param_2);
        local_b8[0] = (code *)0x0;
        plVar5 = (longlong *)FUN_14001cc68(0x70,8);
        *plVar5 = (longlong)&PTR_FUN_14a5acd70;
        plVar5[1] = (longlong)local_168;
        local_a8 = plVar5;
        FUN_147832994(plVar5 + 2,local_160);
        if (plVar5 != (longlong *)&DAT_fffffffffffffff8) {
          local_b8[0] = FUN_14338b394;
        }
        FUN_14783682a(param_1,5,local_b8,local_78);
        if (local_b8[0] != (code *)0x0) {
          plVar5 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar5 = local_98;
          }
          (**(code **)(*plVar5 + 0x10))();
        }
        FUN_147835db2(local_160);
        if (local_78[0] != (code *)0x0) {
          pppuVar6 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar6 = &local_58;
          }
          (*(code *)(*pppuVar6)[2])();
        }
        if (local_d8 != 0) {
          if (local_e0 == (undefined8 *)0x0) goto LAB_143387ae9;
          (**(code **)*local_e0)(local_e0,0);
          FUN_1446efa72(&local_e0,0,0,0x10);
          local_d8 = 0;
        }
        if (local_e0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_143387ae9;
      }
      *(undefined1 *)(param_1 + 0x77) = 1;
      local_168 = (longlong *)0x0;
      local_160[0] = (int)param_1[0x7b];
      lVar8 = (longlong)local_160[0];
      pvVar2 = (void *)param_1[0x7a];
      if (lVar8 == 0) {
        local_160[1] = 0;
      }
      else {
        FUN_1446dd670(&local_168,local_160[0],0);
        memcpy(local_168,pvVar2,lVar8 * 2);
      }
      FUN_143388010(local_f0,&local_168);
      if (local_168 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      if (*(int *)((longlong)param_1 + 0x104) < 0) {
        FUN_144893a1c(param_1 + 0x1f,0);
      }
      cVar4 = (**(code **)(*param_1 + 0x1d8))(param_1);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x1e0))(param_1,param_1 + 0x1f);
      }
      local_e0 = (undefined8 *)0x0;
      local_d8 = 0;
      FUN_1478367a6(&local_e0,param_3);
      local_78[0] = (code *)0x0;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_FUN_14a5ace10;
      local_50 = local_e8;
      local_48 = 0;
      local_40 = 0;
      FUN_1478367a6(&local_48,&local_e0);
      local_78[0] = FUN_14338bfe4;
      local_168 = param_1;
      FUN_147832994(local_160,param_2);
      local_100 = (void *)0x0;
      uVar1 = *(uint *)(param_1 + 0x20);
      pvVar2 = (void *)param_1[0x1f];
      local_f8 = CONCAT44(local_f8._4_4_,uVar1);
      if ((longlong)(int)uVar1 == 0) {
        local_f8 = (ulonglong)uVar1;
      }
      else {
        FUN_1447a127e(&local_100,uVar1,0);
        memcpy(local_100,pvVar2,(longlong)(int)uVar1);
      }
      local_b8[0] = (code *)0x0;
      plVar5 = (longlong *)FUN_14001cc68(0x80,8);
      *plVar5 = (longlong)&PTR_FUN_14a5acdf0;
      plVar5[1] = (longlong)local_168;
      local_a8 = plVar5;
      FUN_147832994(plVar5 + 2,local_160);
      plVar5[0xe] = (longlong)local_100;
      local_100 = (void *)0x0;
      *(undefined4 *)(plVar5 + 0xf) = (undefined4)local_f8;
      *(undefined4 *)((longlong)plVar5 + 0x7c) = local_f8._4_4_;
      local_f8 = 0;
      if (plVar5 != (longlong *)&DAT_fffffffffffffff8) {
        local_b8[0] = FUN_14338b7d8;
      }
      FUN_14783682a(param_1,0,local_b8,local_78);
      if (local_b8[0] != (code *)0x0) {
        plVar5 = local_a8;
        if (local_a8 == (longlong *)0x0) {
          plVar5 = local_98;
        }
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_100 != (void *)0x0) {
        FUN_1400020a8();
      }
      FUN_147835db2(local_160);
      if (local_78[0] != (code *)0x0) {
        pppuVar6 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar6 = &local_58;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      if (local_d8 == 0) {
LAB_143387fea:
        if (local_e0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_e0 != (undefined8 *)0x0) {
        (**(code **)*local_e0)(local_e0,0);
        FUN_1446efa72(&local_e0,0,0,0x10);
        local_d8 = 0;
        goto LAB_143387fea;
      }
      (**(code **)(*param_1 + 0xe8))(param_1);
      goto LAB_143387ae9;
    }
    local_c8 = 2;
  }
  plVar5 = (longlong *)*param_3;
  if (plVar5 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar5 + 0x60))(plVar5,&local_d0);
  }
LAB_143387ae9:
  if ((local_38 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143388010 FUN_143388010 body=213 status=ok
// SIG undefined FUN_143388010(void)

ulonglong FUN_143388010(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  ulonglong unaff_RBX;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  local_30 = 0;
  cVar1 = FUN_145b0052c(param_2);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_2 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_2;
    }
    cVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,puVar3);
    if (cVar1 == '\0') {
      if (*(int *)(param_2 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_2;
      }
      cVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,puVar3,1);
      if (cVar1 != '\0') {
        unaff_RBX = 0;
        local_28 = 0;
        local_30 = 0;
        cVar1 = FUN_145b0052c(param_2);
        if (cVar1 == '\0') goto LAB_1433880a1;
        goto LAB_14338804a;
      }
    }
    unaff_RBX = 0;
  }
  else {
LAB_14338804a:
    *param_1 = local_30;
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
LAB_1433880a1:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1433880e6 FUN_1433880e6 body=558 status=ok
// SIG undefined FUN_1433880e6(void)

void FUN_1433880e6(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined *local_80;
  undefined4 local_78;
  code *local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = (longlong)*(int *)(param_1 + 400);
  if (lVar2 != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar4) + 0x18) == 5)
      goto LAB_1433881ae;
      lVar4 = lVar4 + 0x10;
    } while (lVar2 << 4 != lVar4);
  }
  lVar4 = *(longlong *)(param_1 + 0x198);
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) != 5)) {
    if (*(int *)(param_1 + 400) != 0) {
      lVar5 = 0;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar5) + 0x18) == 0)
        goto LAB_1433881ae;
        lVar5 = lVar5 + 0x10;
      } while (lVar2 * 0x10 != lVar5);
    }
    if ((lVar4 == 0) || (*(int *)(lVar4 + 0x18) != 0)) {
      if ((*(char *)(param_1 + 0x3b8) != '\0') && (*(char *)(param_1 + 0x178) == '\0')) {
        *(undefined1 *)(param_1 + 0x178) = 1;
        if (*(char *)(param_1 + 0x3b8) == '\x01') {
          uVar1 = *(undefined4 *)(param_1 + 0xc0);
          FUN_14338832a(param_1,uVar1);
          local_58 = (undefined ***)0x0;
          local_48 = &PTR_LAB_14a5acef0;
          local_68 = (code *)&LAB_14338c66e;
          local_98 = (undefined ***)0x0;
          local_88 = &PTR_LAB_14a5aced0;
          local_a8[0] = FUN_14338c592;
          local_80 = (undefined *)param_1;
          local_78 = uVar1;
          local_40 = param_1;
          FUN_147832bcc(param_1,4,local_a8);
          if (local_a8[0] != (code *)0x0) {
            pppuVar3 = local_98;
            if (local_98 == (undefined ***)0x0) {
              pppuVar3 = &local_88;
            }
            (*(code *)(*pppuVar3)[2])();
          }
          if (local_68 != (code *)0x0) {
            pppuVar3 = local_58;
            if (local_58 == (undefined ***)0x0) {
              pppuVar3 = &local_48;
            }
            (*(code *)(*pppuVar3)[2])();
          }
        }
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a5acf10;
        local_68 = FUN_14338c6ce;
        local_98 = (undefined ***)0x0;
        local_88 = &PTR_LAB_149e01e20;
        local_80 = &DAT_14338c6cc;
        local_a8[0] = FUN_140d11fbe;
        local_40 = param_1;
        FUN_147832d50(param_1,0xe,local_a8);
        if (local_a8[0] != (code *)0x0) {
          pppuVar3 = local_98;
          if (local_98 == (undefined ***)0x0) {
            pppuVar3 = &local_88;
          }
          (*(code *)(*pppuVar3)[2])();
        }
        if (local_68 != (code *)0x0) {
          pppuVar3 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar3 = &local_48;
          }
          (*(code *)(*pppuVar3)[2])();
        }
      }
      if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_1433881ae:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
}



// FUNCTION 14338832a FUN_14338832a body=544 status=ok
// SIG undefined FUN_14338832a(void)

void FUN_14338832a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined ***pppuVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  longlong *local_b8;
  longlong local_a8 [4];
  LARGE_INTEGER local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    lVar7 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar7) + 0x18) == 1)
      goto LAB_14338839b;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(param_1 + 400) * 0x10 != lVar7);
  }
  if (((*(longlong *)(param_1 + 0x198) == 0) ||
      (*(int *)(*(longlong *)(param_1 + 0x198) + 0x18) != 1)) &&
     (iVar1 = *(int *)(param_1 + 0x2f0), iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x154) = param_2;
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = *(undefined4 *)(param_1 + 0x150);
    *(undefined4 *)(param_1 + 0x150) = param_2;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14a5ad5d0;
    local_88[0].QuadPart = (LONGLONG)FUN_143392254;
    lVar7 = *(longlong *)(param_1 + 0x2e8);
    uVar4 = *(undefined4 *)(param_1 + 0x2f4);
    *(undefined8 *)(param_1 + 0x2e8) = 0;
    *(undefined8 *)(param_1 + 0x2f0) = 0;
    local_c8[0] = (code *)0x0;
    local_60 = param_1;
    local_b8 = (longlong *)FUN_14001cc68(0x30,8);
    *local_b8 = (longlong)&PTR_FUN_14a5ad5b0;
    local_b8[1] = param_1;
    *(undefined4 *)(local_b8 + 2) = uVar3;
    *(undefined4 *)((longlong)local_b8 + 0x14) = param_2;
    *(undefined4 *)(local_b8 + 3) = uVar2;
    local_b8[4] = lVar7;
    *(int *)(local_b8 + 5) = iVar1;
    *(undefined4 *)((longlong)local_b8 + 0x2c) = uVar4;
    if (local_b8 + 1 != (longlong *)0x0) {
      local_c8[0] = FUN_143391b72;
    }
    FUN_147832bcc(param_1,3,local_c8,local_88);
    if (local_c8[0] != (code *)0x0) {
      plVar5 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar5 = local_a8;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if ((code *)local_88[0].QuadPart != (code *)0x0) {
      pppuVar6 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar6 = &local_68;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    *(undefined4 *)(param_1 + 0x2f0) = 0;
    if (*(int *)(param_1 + 0x2f4) < 0) {
      FUN_144893a1c(param_1 + 0x2e8,0);
    }
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined1 *)(param_1 + 0x2fc) = 0;
    *(undefined8 *)(param_1 + 0x300) = 0;
    *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_1 + 0x154);
    *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) + 1;
    QueryPerformanceCounter(local_88);
    *(double *)(param_1 + 0x168) = (double)local_88[0].QuadPart * DAT_14c83f420 + 16777216.0;
  }
LAB_14338839b:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338854c FUN_14338854c body=121 status=ok
// SIG undefined FUN_14338854c(void)

void FUN_14338854c(void)

{
  longlong *plVar1;
  longlong *in_R9;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_14a5ab608;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = 1;
  plVar1 = (longlong *)*in_R9;
  if (plVar1 != (longlong *)0x0 && (int)in_R9[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  }
  FUN_14783040a(&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433885c8 FUN_1433885c8 body=156 status=ok
// SIG undefined FUN_1433885c8(void)

void FUN_1433885c8(longlong *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((char)param_1[0x77] == '\x01') {
    FUN_140056680(local_48,&DAT_149dfb77a);
    local_50 = param_5;
    local_58 = param_4;
    (**(code **)(*param_1 + 0x90))(param_1,local_48,param_2,param_3);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143388666 FUN_143388666 body=961 status=ok
// SIG undefined FUN_143388666(void)

void FUN_143388666(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  void *pvVar1;
  longlong *plVar2;
  undefined ***pppuVar3;
  size_t sVar4;
  longlong lVar5;
  undefined1 auStack_128 [32];
  longlong local_108;
  void *local_100;
  int local_f8;
  undefined4 local_f4;
  void *local_f0;
  int local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  code *local_b8 [2];
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x3b8) == '\x01') {
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad110;
    local_78[0] = FUN_14338e8c8;
    local_100 = (void *)0x0;
    local_f8 = *(int *)(param_2 + 1);
    lVar5 = (longlong)local_f8;
    pvVar1 = (void *)*param_2;
    local_108 = param_1;
    local_50 = param_1;
    if (lVar5 == 0) {
      local_f4 = 0;
    }
    else {
      FUN_1446dd670(&local_100,local_f8,0);
      memcpy(local_100,pvVar1,lVar5 * 2);
    }
    local_f0 = (void *)0x0;
    local_e8 = *(int *)(param_4 + 1);
    lVar5 = (longlong)local_e8;
    pvVar1 = (void *)*param_4;
    if (lVar5 == 0) {
      local_e4 = 0;
    }
    else {
      FUN_1446dd670(&local_f0,local_e8,0);
      memcpy(local_f0,pvVar1,lVar5 * 2);
    }
    local_d8 = (void *)0x0;
    local_d0 = *(int *)(param_5 + 1);
    lVar5 = (longlong)local_d0;
    pvVar1 = (void *)*param_5;
    local_e0 = param_3;
    if (lVar5 == 0) {
      local_cc = 0;
    }
    else {
      FUN_1446dd670(&local_d8,local_d0,0);
      memcpy(local_d8,pvVar1,lVar5 * 2);
    }
    local_c8 = (void *)0x0;
    local_c0 = *(int *)(param_6 + 1);
    sVar4 = (size_t)local_c0;
    pvVar1 = (void *)*param_6;
    if (sVar4 == 0) {
      local_bc = 0;
    }
    else {
      FUN_1447a127e(&local_c8,local_c0,0);
      memcpy(local_c8,pvVar1,sVar4);
    }
    local_b8[0] = (code *)0x0;
    plVar2 = (longlong *)FUN_14001cc68(0x58,8);
    pvVar1 = local_100;
    *plVar2 = (longlong)&PTR_FUN_14a5ad0f0;
    plVar2[1] = local_108;
    plVar2[2] = 0;
    lVar5 = (longlong)local_f8;
    *(int *)(plVar2 + 3) = local_f8;
    local_a8 = plVar2;
    if (lVar5 == 0) {
      *(undefined4 *)((longlong)plVar2 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(plVar2 + 2,local_f8,0);
      memcpy((void *)plVar2[2],pvVar1,lVar5 * 2);
    }
    pvVar1 = local_f0;
    plVar2[4] = 0;
    lVar5 = (longlong)local_e8;
    *(int *)(plVar2 + 5) = local_e8;
    if (lVar5 == 0) {
      *(undefined4 *)((longlong)plVar2 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(plVar2 + 4,local_e8,0);
      memcpy((void *)plVar2[4],pvVar1,lVar5 * 2);
    }
    pvVar1 = local_d8;
    *(undefined4 *)(plVar2 + 6) = local_e0;
    plVar2[7] = 0;
    lVar5 = (longlong)local_d0;
    *(int *)(plVar2 + 8) = local_d0;
    if (lVar5 == 0) {
      *(undefined4 *)((longlong)plVar2 + 0x44) = 0;
    }
    else {
      FUN_1446dd670(plVar2 + 7,local_d0,0);
      memcpy((void *)plVar2[7],pvVar1,lVar5 * 2);
    }
    pvVar1 = local_c8;
    plVar2[9] = 0;
    sVar4 = (size_t)local_c0;
    *(int *)(plVar2 + 10) = local_c0;
    if (sVar4 == 0) {
      *(undefined4 *)((longlong)plVar2 + 0x54) = 0;
    }
    else {
      FUN_1447a127e(plVar2 + 9,local_c0,0);
      memcpy((void *)plVar2[9],pvVar1,sVar4);
    }
    if (plVar2 != (longlong *)&DAT_fffffffffffffff8) {
      local_b8[0] = FUN_14338d8f8;
    }
    FUN_147832bcc(param_1,0xb,local_b8,local_78);
    if (local_b8[0] != (code *)0x0) {
      plVar2 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar2 = local_98;
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_f0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_100 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_78[0] != (code *)0x0) {
      pppuVar3 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar3 = &local_58;
      }
      (*(code *)(*pppuVar3)[2])();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143388a28 FUN_143388a28 body=121 status=ok
// SIG undefined FUN_143388a28(void)

void FUN_143388a28(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &PTR_FUN_14a5ab6c0;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = 1;
  plVar1 = (longlong *)*param_3;
  if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_38);
  }
  FUN_14783052c(&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143388aa2 FUN_143388aa2 body=41 status=ok
// SIG undefined FUN_143388aa2(void)

void FUN_143388aa2(longlong param_1)

{
  if (*(int *)(param_1 + 0x3a0) == 0) {
    return;
  }
  FUN_14338832a();
  FUN_1478345d0(param_1);
  return;
}



// FUNCTION 143388acc FUN_143388acc body=1111 status=ok
// SIG undefined FUN_143388acc(void)

void FUN_143388acc(undefined **param_1,uint param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  int local_c0;
  code *local_b8 [2];
  undefined ***local_a8;
  undefined **local_98;
  undefined **local_90;
  uint local_88;
  undefined **local_78;
  undefined8 local_70;
  undefined ***local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((longlong)*(int *)(param_1 + 0x32) != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1[0x31] + lVar4) + 0x18) == 10) goto LAB_143388b49;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x32) * 0x10 != lVar4);
  }
  if ((param_1[0x33] == (undefined *)0x0) || (*(int *)(param_1[0x33] + 0x18) != 10)) {
    if (param_2 == 0xffffffff) {
      local_d0 = (undefined8 *)0x0;
      local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
      local_d8 = param_1;
      FUN_14783c656(&local_d0,param_3);
      local_78 = (undefined **)0x0;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_FUN_14a5ad660;
      local_50 = local_d8;
      local_48 = 0;
      local_40 = 0;
      FUN_14783c656(&local_48,&local_d0);
      local_78 = (undefined **)FUN_143392c70;
      local_a8 = (undefined ***)0x0;
      local_98 = &PTR_LAB_149e01e20;
      local_90 = (undefined **)&DAT_143392c6e;
      local_b8[0] = FUN_140d11fbe;
      FUN_147832d50(param_1,10,local_b8,&local_78);
      if (local_b8[0] != (code *)0x0) {
        pppuVar2 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar2 = &local_98;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      if (local_78 != (undefined **)0x0) {
        pppuVar2 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar2 = &local_58;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      puVar3 = local_d0;
      if ((int)local_c8 != 0) {
        if (local_d0 == (undefined8 *)0x0) goto LAB_143388ba5;
        (**(code **)*local_d0)(local_d0,0);
        FUN_1446efa72(&local_d0,0,0,0x10);
        local_c8 = (undefined8 *)((ulonglong)local_c8 & 0xffffffff00000000);
        puVar3 = local_d0;
      }
    }
    else {
      if (((int)param_2 < 0) || (*(int *)(param_1 + 0x25) <= (int)param_2)) goto LAB_143388b49;
      local_90 = param_1;
      local_88 = param_2;
      if (param_4 == '\x01') {
        local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,param_2);
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        local_d8 = param_1;
        FUN_14783c656(&local_c8,param_3);
        local_78 = (undefined **)0x0;
        pppuVar2 = (undefined ***)FUN_14001cc68(0x28,8);
        *pppuVar2 = &PTR_FUN_14a5ad760;
        *(undefined4 *)(pppuVar2 + 2) = local_d0._0_4_;
        pppuVar2[1] = local_d8;
        pppuVar2[3] = (undefined **)0x0;
        *(undefined4 *)(pppuVar2 + 4) = 0;
        local_68 = pppuVar2;
        FUN_14783c656(pppuVar2 + 3,&local_c8);
        if (pppuVar2 != (undefined ***)&DAT_fffffffffffffff8) {
          local_78 = (undefined **)FUN_143393e40;
        }
        local_a8 = (undefined ***)0x0;
        local_98 = &PTR_LAB_14a5ad740;
        local_b8[0] = FUN_14339331e;
        FUN_14783cc16(param_1,local_b8,&local_78);
      }
      else {
        local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,param_2);
        local_c8 = (undefined8 *)0x0;
        local_c0 = 0;
        local_d8 = param_1;
        FUN_14783c656(&local_c8,param_3);
        local_78 = (undefined **)0x0;
        pppuVar2 = (undefined ***)FUN_14001cc68(0x28,8);
        *pppuVar2 = &PTR_FUN_14a5ad7e0;
        *(undefined4 *)(pppuVar2 + 2) = local_d0._0_4_;
        pppuVar2[1] = local_d8;
        pppuVar2[3] = (undefined **)0x0;
        *(undefined4 *)(pppuVar2 + 4) = 0;
        local_68 = pppuVar2;
        FUN_14783c656(pppuVar2 + 3,&local_c8);
        if (pppuVar2 != (undefined ***)&DAT_fffffffffffffff8) {
          local_78 = (undefined **)FUN_1433945a0;
        }
        local_a8 = (undefined ***)0x0;
        local_98 = &PTR_LAB_14a5ad7c0;
        local_b8[0] = FUN_1433941f6;
        FUN_14783476a(param_1,*(undefined4 *)(param_1[0x24] + (ulonglong)param_2 * 0x50),local_b8,
                      &local_78);
      }
      if (local_b8[0] != (code *)0x0) {
        pppuVar2 = local_a8;
        if (local_a8 == (undefined ***)0x0) {
          pppuVar2 = &local_98;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      if (local_78 != (undefined **)0x0) {
        pppuVar2 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar2 = &local_58;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      puVar3 = local_c8;
      if (local_c0 != 0) {
        if (local_c8 == (undefined8 *)0x0) goto LAB_143388ba5;
        (**(code **)*local_c8)(local_c8,0);
        FUN_1446efa72(&local_c8,0,0,0x10);
        local_c0 = 0;
        puVar3 = local_c8;
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_143388b49:
    local_70 = 6;
    local_78 = &PTR_FUN_14a5ab730;
    local_68 = (undefined ***)0xffffffffffffffff;
    local_60 = 0xfffffffefffffffe;
    plVar1 = (longlong *)*param_3;
    if (plVar1 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar1 + 0x60))(plVar1,&local_78);
    }
  }
LAB_143388ba5:
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143388f24 FUN_143388f24 body=316 status=ok
// SIG undefined FUN_143388f24(void)

void FUN_143388f24(longlong *param_1,uint param_2,longlong *param_3)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined1 auStack_58 [40];
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong)(int)param_1[0x32] != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1[0x31] + lVar4) + 0x18) == 10) goto LAB_143388f81;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)param_1[0x32] * 0x10 != lVar4);
  }
  if (((param_1[0x33] != 0) && (*(int *)(param_1[0x33] + 0x18) == 10)) || (param_1[0x30] != -1)) {
LAB_143388f81:
    local_28 = 6;
    local_30 = &PTR_FUN_14a5ab730;
    local_20 = 0xffffffffffffffff;
    local_18 = 0xfffffffefffffffe;
    plVar2 = (longlong *)*param_3;
    if (plVar2 != (longlong *)0x0 && (int)param_3[1] != 0) {
      (**(code **)(*plVar2 + 0x60))(plVar2,&local_30);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
  }
  uVar1 = *(uint *)(param_1 + 0x25);
  uVar3 = *(uint *)(param_1 + 0x18);
  if (param_2 < *(uint *)(param_1 + 0x18)) {
    uVar3 = param_2;
  }
  param_1[0x30] = (ulonglong)uVar3;
  if (0 < (int)uVar1) {
    uVar3 = uVar1 - 1;
    if (*(uint *)(param_1[0x24] + 0x38 + (ulonglong)uVar3 * 0x50) <= param_2) goto LAB_14338903d;
    puVar5 = (uint *)(param_1[0x24] + 0x38);
    lVar4 = 0;
    do {
      if (param_2 < *puVar5) {
        uVar3 = ~(uint)lVar4;
        goto LAB_14338903d;
      }
      lVar4 = lVar4 + -1;
      puVar5 = puVar5 + 0x14;
    } while (-lVar4 != (ulonglong)uVar1);
  }
  uVar3 = 0xffffffff;
LAB_14338903d:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014338905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x38))(param_1,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_58);
}



// FUNCTION 143389068 FUN_143389068 body=263 status=ok
// SIG undefined FUN_143389068(void)

ulonglong FUN_143389068(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  
  if ((*(longlong *)(param_1 + 0x198) == 0) && (0 < *(int *)(param_1 + 400))) {
    plVar3 = (longlong *)(param_1 + 0x188);
    uVar4 = *(undefined8 *)*plVar3;
    plVar5 = (longlong *)((undefined8 *)*plVar3)[1];
    if (plVar5 == (longlong *)0x0) {
      FUN_14783d836(plVar3);
      FUN_14783d898(plVar3);
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      FUN_14783d836(plVar3);
      FUN_14783d898(plVar3);
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    plVar3 = *(longlong **)(param_1 + 0x1a0);
    *(undefined8 *)(param_1 + 0x198) = uVar4;
    *(longlong **)(param_1 + 0x1a0) = plVar5;
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
    cVar6 = (**(code **)(**(longlong **)(param_1 + 0x198) + 8))();
    if (cVar6 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x198) + 0x10))();
      uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x198) + 0x18))();
      uVar7 = FUN_143389068(param_1);
      uVar8 = (ulonglong)uVar7;
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
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
  else {
    uVar8 = 0;
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 143389170 FUN_143389170 body=808 status=ok
// SIG undefined FUN_143389170(void)

void FUN_143389170(longlong param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined ***pppuVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong local_a0;
  int local_98;
  LARGE_INTEGER local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  int local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar8 = (longlong)*(int *)(param_1 + 400);
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar11) + 0x18) == 10)
      goto LAB_143389438;
      lVar11 = lVar11 + 0x10;
    } while (lVar8 << 4 != lVar11);
  }
  lVar11 = *(longlong *)(param_1 + 0x198);
  if ((lVar11 == 0) || (*(int *)(lVar11 + 0x18) != 10)) {
    if (*(int *)(param_1 + 400) != 0) {
      lVar12 = 0;
      do {
        if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + lVar12) + 0x18) == 7)
        goto LAB_143389438;
        lVar12 = lVar12 + 0x10;
      } while (lVar8 * 0x10 != lVar12);
    }
    if ((((lVar11 == 0) || (*(int *)(lVar11 + 0x18) != 7)) && (-1 < *(int *)(param_1 + 0x160))) &&
       (*(int *)(param_1 + 0x160) < *(int *)(param_1 + 0x148))) {
      if ((*(uint *)(param_1 + 0x17c) == 0) ||
         (*(uint *)(param_1 + 0x17c) <= *(uint *)(param_1 + 0x154))) {
        QueryPerformanceCounter(local_88);
        lVar11 = DAT_14cabd2d8;
        dVar4 = (double)local_88[0].QuadPart * DAT_14c83f420;
        dVar1 = *(double *)(param_1 + 0x168);
        lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar2 = *(int *)(lVar8 + 0xc60);
        if ((iVar2 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar2 == 2)))) {
          uVar9 = 0;
        }
        else if (iVar2 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar9 = (ulonglong)(DVar6 != DVar7);
        }
        else {
          uVar9 = 1;
        }
        lVar12 = DAT_14cabd2a8;
        if ((dVar4 + 16777216.0) - dVar1 < (double)*(float *)(lVar11 + uVar9 * 4))
        goto LAB_143389438;
        uVar5 = *(uint *)(param_1 + 0x154) - *(uint *)(param_1 + 0x150);
        if (*(uint *)(param_1 + 0x150) <= *(uint *)(param_1 + 0x154) && uVar5 != 0) {
          iVar2 = *(int *)(param_1 + 0x2f0);
          if (0 < iVar2) {
            lVar11 = *(longlong *)(param_1 + 0x300);
            fVar13 = (float)uVar5 / 1000.0;
            iVar3 = *(int *)(lVar8 + 0xc60);
            if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
              uVar9 = 0;
            }
            else if (iVar3 == 1) {
              DVar6 = FUN_140ad26c0();
              DVar7 = GetCurrentThreadId();
              uVar9 = (ulonglong)(DVar6 != DVar7);
            }
            else {
              uVar9 = 1;
            }
            if (*(float *)(lVar12 + uVar9 * 4) * 0.5 <
                fVar13 - ((float)lVar11 / (float)iVar2) * fVar13) goto LAB_143389438;
          }
        }
      }
      local_98 = *(int *)(param_1 + 0x160);
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14a5ada40;
      local_88[0].QuadPart = (LONGLONG)FUN_1433963ae;
      local_b8 = (undefined ***)0x0;
      local_a8 = &PTR_LAB_14a5ada20;
      local_c8[0] = FUN_143395fcc;
      local_a0 = param_1;
      local_60 = param_1;
      local_58 = local_98;
      FUN_147835228(param_1,*(undefined4 *)
                             (*(longlong *)(param_1 + 0x140) + (longlong)local_98 * 0x28),local_c8);
      if (local_c8[0] != (code *)0x0) {
        pppuVar10 = local_b8;
        if (local_b8 == (undefined ***)0x0) {
          pppuVar10 = &local_a8;
        }
        (*(code *)(*pppuVar10)[2])();
      }
      if ((code *)local_88[0].QuadPart != (code *)0x0) {
        pppuVar10 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar10 = &local_68;
        }
        (*(code *)(*pppuVar10)[2])();
      }
      QueryPerformanceCounter(local_88);
      *(double *)(param_1 + 0x168) = (double)local_88[0].QuadPart * DAT_14c83f420 + 16777216.0;
    }
  }
LAB_143389438:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338949a FUN_14338949a body=213 status=ok
// SIG undefined FUN_14338949a(void)

undefined8 * FUN_14338949a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  undefined **ppuVar6;
  
  if (*(char *)(param_1 + 0x3e0) == '\x01') {
    puVar4 = (undefined8 *)FUN_147834c0a(param_1,param_3);
    iVar1 = *(int *)(puVar4 + 1);
    ppuVar6 = &PTR_LAB_14a5ad800;
    if ((longlong)iVar1 < 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_14001cc68(0xb8,0x10);
      FUN_1460d8db6(uVar3,*puVar4,(longlong)iVar1,0,0);
    }
  }
  else {
    plVar2 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_3 + 1) == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    else {
      puVar5 = (undefined2 *)*param_3;
    }
    uVar3 = (**(code **)(*plVar2 + 0x18))(plVar2,puVar5,4);
    ppuVar6 = &PTR_FUN_149f02130;
  }
  *param_2 = uVar3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar4[1] = &DAT_100000001;
  *puVar4 = ppuVar6;
  puVar4[2] = uVar3;
  param_2[1] = puVar4;
  return param_2;
}



// FUNCTION 143389570 FUN_143389570 body=2175 status=ok
// SIG undefined FUN_143389570(void)

ulonglong FUN_143389570(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined7 uVar17;
  bool bVar18;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  longlong *local_130;
  longlong *local_128;
  ulonglong local_120;
  longlong *local_118;
  longlong *local_110;
  undefined2 *local_108;
  undefined8 local_100;
  longlong *local_f8;
  ulonglong uStack_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  longlong local_98 [2];
  longlong *local_88;
  int local_80;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar5 = FUN_1470868c8();
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar16 + 0xc60);
  if (((iVar13 != 0x40000002) && (iVar13 == 1)) && (DAT_14c86a9f8 != '\0')) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  FUN_14099d55c(DAT_14c9a02e0,local_98,0);
  plVar9 = (longlong *)FUN_14054d1d4();
  uVar17 = (undefined7)((ulonglong)param_2 >> 8);
  if (iVar5 < 1) {
    uVar10 = CONCAT71(uVar17,1);
    goto LAB_143389645;
  }
  local_a0 = 0;
  local_118 = param_2;
  cVar4 = FUN_143388010(&local_a0,param_1);
  lVar1 = DAT_14cabd2c0;
  uVar10 = CONCAT71(uVar17,1);
  if (cVar4 == '\0') goto LAB_143389645;
  iVar13 = *(int *)(lVar16 + 0xc60);
  local_130 = (longlong *)CONCAT44(local_130._4_4_,iVar5);
  if (iVar13 == 0x40000002) {
    uVar10 = 0;
  }
  else {
    bVar18 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar13 != 2)) {
      if (iVar13 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar18 = DVar7 == DVar8;
      }
      else {
        bVar18 = false;
      }
    }
    uVar10 = (ulonglong)(bVar18 ^ 1);
  }
  uVar12 = (ulonglong)*(int *)(lVar1 + uVar10 * 4);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_140056680(&local_d8,&DAT_149e060b2);
  FUN_1407ec8fc(&local_88,local_98,&local_d8);
  FUN_147834dbe(&local_c8,param_1,&local_88);
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_d8 = (longlong *)0x0;
  uStack_d0 = 0;
  iVar13 = (int)local_130;
  puVar14 = local_c8;
  if ((int)uStack_c0 == 0) {
    puVar14 = &DAT_149dfb77a;
  }
  local_138 = 0;
  (**(code **)(*plVar9 + 0x78))(plVar9,&local_d8,puVar14,1);
  iVar5 = (int)uStack_b0 + (int)uStack_d0;
  if (iVar5 < 0) {
LAB_143389dc0:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if ((int)uStack_b0._4_4_ < iVar5) {
    FUN_1433949ba(&local_b8);
  }
  local_110 = plVar9;
  if ((int)uStack_d0 == 0) {
    uVar10 = 0;
  }
  else {
    local_128 = local_d8 + (longlong)(int)uStack_d0 * 2;
    plVar9 = local_d8;
    local_120 = uVar12;
    do {
      plVar15 = local_110;
      local_88 = (longlong *)*param_1;
      local_80 = (int)param_1[1] + -1;
      if ((int)param_1[1] == 0) {
        local_80 = 0;
      }
      local_78 = *plVar9;
      local_70 = (int)plVar9[1] + -1;
      if ((int)plVar9[1] == 0) {
        local_70 = 0;
      }
      FUN_140bee87a(&local_e8,&local_88,2);
      puVar14 = &DAT_149dfb77a;
      if ((int)local_e0 != 0) {
        puVar14 = local_e8;
      }
      (**(code **)(*plVar15 + 0xd0))(plVar15,&local_88,puVar14);
      plVar15 = local_88;
      uVar10 = uStack_b0;
      puVar14 = local_e8;
      local_e8 = (undefined2 *)0x0;
      uVar2 = (int)local_e0;
      uVar3 = local_e0._4_4_;
      local_e0 = 0;
      lVar16 = (longlong)(int)uStack_b0;
      uVar6 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar6);
      if (uStack_b0._4_4_ < uVar6) {
        FUN_143394b08(&local_b8,uVar10 & 0xffffffff);
      }
      *(undefined2 **)(local_b8 + lVar16 * 0x18) = puVar14;
      *(undefined4 *)(local_b8 + 8 + lVar16 * 0x18) = uVar2;
      *(undefined4 *)(local_b8 + 0xc + lVar16 * 0x18) = uVar3;
      *(longlong **)(local_b8 + 0x10 + lVar16 * 0x18) = plVar15;
      if (local_e8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      plVar9 = plVar9 + 2;
    } while (plVar9 != local_128);
    uVar10 = uStack_d0 & 0xffffffff;
    uVar12 = local_120;
    iVar13 = (int)local_130;
  }
  plVar9 = local_110;
  FUN_1447a1747(local_d8,uVar10);
  if (local_d8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_143389df0(&local_b8);
  do {
    if (((int)uStack_b0 == 0) || (((int)uStack_b0 < iVar13 && (uVar12 <= local_a0)))) {
      uVar10 = CONCAT71((int7)((ulonglong)&local_b8 >> 8),1);
      if (uVar12 <= local_a0) goto LAB_143389d91;
      local_c8 = (undefined2 *)0x0;
      uStack_c0 = 0;
      local_128 = param_1;
      if ((longlong)(int)local_118[1] == 0) goto LAB_143389ca2;
      plVar15 = (longlong *)*local_118;
      local_130 = plVar15 + (longlong)(int)local_118[1] * 2;
      local_120 = uVar12;
      goto LAB_143389a26;
    }
    FUN_14338a360(&local_b8,&local_88);
    plVar15 = local_88;
    plVar11 = local_88;
    if (local_80 == 0) {
      plVar11 = (longlong *)&DAT_149dfb77a;
    }
    local_138 = 0;
    cVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,plVar11,1,1);
    if (cVar4 == '\0') {
      if (plVar15 != (longlong *)0x0) {
        FUN_1400020a8(plVar15);
      }
      break;
    }
    cVar4 = FUN_143388010(&local_a0,param_1);
    if (plVar15 != (longlong *)0x0) {
      FUN_1400020a8(plVar15);
    }
    iVar13 = (int)local_130;
  } while (cVar4 != '\0');
  uVar10 = 0;
  goto LAB_143389d91;
  while( true ) {
    local_118 = plVar15;
    if ((int)uStack_c0._4_4_ < iVar5) {
      FUN_1433949ba(&local_c8);
    }
    if ((int)uStack_f0 == 0) {
      uVar10 = 0;
    }
    else {
      plVar11 = local_f8 + (longlong)(int)uStack_f0 * 2;
      plVar15 = local_f8;
      do {
        local_88 = local_d8;
        local_80 = (int)uStack_d0 + -1;
        if ((int)uStack_d0 == 0) {
          local_80 = 0;
        }
        local_78 = *plVar15;
        local_70 = (int)plVar15[1] + -1;
        if ((int)plVar15[1] == 0) {
          local_70 = 0;
        }
        FUN_140bee87a(&local_108,&local_88,2);
        puVar14 = &DAT_149dfb77a;
        if ((int)local_100 != 0) {
          puVar14 = local_108;
        }
        (**(code **)(*plVar9 + 0xd0))(plVar9,&local_88,puVar14);
        plVar9 = local_88;
        uVar10 = uStack_c0;
        puVar14 = local_108;
        local_108 = (undefined2 *)0x0;
        uVar2 = (int)local_100;
        uVar3 = local_100._4_4_;
        local_100 = 0;
        lVar16 = (longlong)(int)uStack_c0;
        uVar6 = (int)uStack_c0 + 1;
        uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar6);
        if (uStack_c0._4_4_ < uVar6) {
          FUN_143394b08(&local_c8,uVar10 & 0xffffffff);
        }
        *(undefined2 **)(local_c8 + lVar16 * 0xc) = puVar14;
        *(undefined4 *)(local_c8 + lVar16 * 0xc + 4) = uVar2;
        *(undefined4 *)(local_c8 + lVar16 * 0xc + 6) = uVar3;
        *(longlong **)(local_c8 + lVar16 * 0xc + 8) = plVar9;
        if (local_108 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        plVar15 = plVar15 + 2;
        plVar9 = local_110;
      } while (plVar15 != plVar11);
      uVar10 = uStack_f0 & 0xffffffff;
      uVar12 = local_120;
    }
    FUN_1447a1747(local_f8,uVar10);
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar15 = local_118;
    plVar11 = local_130;
    if (local_e8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar15 = plVar15 + 2;
    if (plVar15 == plVar11) break;
LAB_143389a26:
    local_88 = (longlong *)*local_128;
    local_80 = (int)local_128[1] + -1;
    if ((int)local_128[1] == 0) {
      local_80 = 0;
    }
    local_78 = *plVar15;
    local_70 = (int)plVar15[1] + -1;
    if ((int)plVar15[1] == 0) {
      local_70 = 0;
    }
    FUN_140bee87a(&local_d8,&local_88,2);
    FUN_140056680(&local_88,&DAT_149e060b2);
    FUN_147834dbe(&local_e8,&local_d8,&local_88);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_f8 = (longlong *)0x0;
    uStack_f0 = 0;
    puVar14 = &DAT_149dfb77a;
    if ((int)local_e0 != 0) {
      puVar14 = local_e8;
    }
    local_138 = 0;
    (**(code **)(*plVar9 + 0x78))(plVar9,&local_f8,puVar14,1);
    iVar5 = (int)uStack_c0 + (int)uStack_f0;
    if (iVar5 < 0) goto LAB_143389dc0;
  }
LAB_143389ca2:
  FUN_143389df0(&local_c8);
  do {
    if (((int)uStack_c0 == 0) || (uVar12 <= local_a0)) {
      uVar10 = CONCAT71((int7)((ulonglong)&local_88 >> 8),uVar12 <= local_a0);
      goto LAB_143389d6b;
    }
    FUN_14338a360(&local_c8,&local_88);
    plVar15 = local_88;
    plVar11 = local_88;
    if (local_80 == 0) {
      plVar11 = (longlong *)&DAT_149dfb77a;
    }
    local_138 = 0;
    cVar4 = (**(code **)(*plVar9 + 0x30))(plVar9,plVar11,1,1);
    if (cVar4 == '\0') {
      if (plVar15 != (longlong *)0x0) {
        FUN_1400020a8(plVar15);
      }
      break;
    }
    cVar4 = FUN_143388010(&local_a0,local_128);
    if (plVar15 != (longlong *)0x0) {
      FUN_1400020a8(plVar15);
    }
  } while (cVar4 != '\0');
  uVar10 = 0;
LAB_143389d6b:
  FUN_14339498f(local_c8,uStack_c0 & 0xffffffff);
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143389d91:
  FUN_14339498f(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
LAB_143389645:
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 143389df0 FUN_143389df0 body=1390 status=ok
// SIG undefined FUN_143389df0(void)

void FUN_143389df0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_378;
  iVar17 = (int)param_1[1];
  if (1 < (longlong)iVar17) {
    lVar2 = *param_1;
    memset(local_348,0,0x2f0);
    local_350 = lVar2 + (longlong)iVar17 * 0x18 + -0x18;
    local_358 = lVar2;
    fVar25 = logf((float)iVar17);
    local_348[0] = (int)(longlong)(fVar25 + fVar25);
    plVar8 = &local_358;
    do {
      puVar13 = (undefined8 *)*plVar8;
      puVar12 = (undefined8 *)plVar8[1];
      iVar17 = (int)plVar8[2];
      iVar23 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar13) >> 3) * -0x55555555;
      uVar18 = iVar23 + 1;
      puVar10 = puVar13;
      puVar9 = puVar13;
      puVar15 = puVar12;
      if (iVar17 != 0) {
LAB_143389e9a:
        if (8 < (int)uVar18) {
          uVar14 = (ulonglong)(uVar18 >> 1);
          uVar3 = puVar10[uVar14 * 3 + 2];
          uVar4 = puVar10[uVar14 * 3];
          uVar5 = (puVar10 + uVar14 * 3)[1];
          puVar10[uVar14 * 3 + 2] = puVar10[2];
          uVar6 = puVar10[1];
          puVar10[uVar14 * 3] = *puVar10;
          (puVar10 + uVar14 * 3)[1] = uVar6;
          puVar10[2] = uVar3;
          *puVar10 = uVar4;
          puVar10[1] = uVar5;
          puVar20 = puVar15 + 3;
          puVar9 = puVar10;
          do {
            puVar7 = puVar9 + 3;
            puVar16 = puVar9 + 3;
            do {
              puVar9 = puVar16;
              puVar22 = puVar7;
              if (puVar15 < puVar9) break;
              puVar7 = puVar22 + 3;
              puVar16 = puVar9 + 3;
            } while ((longlong)puVar10[2] <= (longlong)puVar9[2]);
            puVar7 = puVar20 + -6;
            do {
              puVar16 = puVar20;
              puVar21 = puVar7;
              puVar20 = puVar16 + -3;
              if (puVar20 <= puVar10) break;
              puVar7 = puVar21 + -3;
            } while ((longlong)puVar16[-1] <= (longlong)puVar10[2]);
            if (puVar20 < puVar9) goto LAB_143389f8d;
            uVar3 = puVar9[2];
            uVar4 = *puVar9;
            uVar5 = puVar9[1];
            puVar9[2] = puVar16[-1];
            uVar6 = puVar16[-2];
            *puVar9 = *puVar20;
            puVar9[1] = uVar6;
            puVar16[-1] = uVar3;
            *puVar20 = uVar4;
            puVar16[-2] = uVar5;
          } while( true );
        }
        for (; puVar12 = puVar10, puVar13 = puVar10, puVar10 < puVar15; puVar15 = puVar15 + -3) {
          while (puVar9 = puVar12, puVar13 = puVar13 + 3, puVar13 <= puVar15) {
            puVar12 = puVar13;
            if ((longlong)puVar9[2] <= (longlong)puVar13[2]) {
              puVar12 = puVar9;
            }
          }
          local_48 = puVar9[2];
          local_58 = *puVar9;
          uStack_50 = puVar9[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          puVar9[2] = puVar15[2];
          uVar3 = puVar15[1];
          *puVar9 = *puVar15;
          puVar9[1] = uVar3;
          puVar15[2] = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          *(undefined4 *)puVar15 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
        }
        goto LAB_14338a325;
      }
LAB_14338a05e:
      if (uVar18 != 0) {
        iVar17 = (iVar23 - (iVar23 + -1 >> 0x1f)) + -1 >> 1;
        iVar23 = iVar17;
joined_r0x00014338a085:
        do {
          iVar19 = iVar17 * 2 + 1;
          if (iVar19 < (int)uVar18) {
            iVar11 = iVar17 * 2 + 2;
            if ((iVar11 < (int)uVar18) &&
               ((longlong)puVar9[(longlong)iVar11 * 3 + 2] <=
                (longlong)puVar9[(longlong)iVar19 * 3 + 2])) {
              iVar19 = iVar11;
            }
            if ((longlong)puVar9[(longlong)iVar19 * 3 + 2] <
                (longlong)puVar9[(longlong)iVar17 * 3 + 2]) {
              puVar15 = puVar9 + (longlong)iVar17 * 3;
              puVar13 = puVar9 + (longlong)iVar19 * 3;
              local_48 = puVar15[2];
              local_58 = *puVar15;
              uStack_50 = puVar15[1];
              uVar4 = local_58;
              uVar5 = uStack_50;
              puVar15[2] = puVar13[2];
              uVar3 = puVar13[1];
              *puVar15 = *puVar13;
              puVar15[1] = uVar3;
              puVar13[2] = local_48;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar13 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar13 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar13 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar13 + 0xc) = uStack_50._4_4_;
              local_58 = uVar4;
              uStack_50 = uVar5;
              iVar17 = iVar19;
              goto joined_r0x00014338a085;
            }
          }
          bVar24 = iVar23 != 0;
          iVar17 = iVar23 + -1;
          iVar23 = iVar17;
        } while (bVar24);
        if (1 < (int)uVar18) {
          uVar14 = (ulonglong)uVar18 - 1;
          local_48 = puVar9[2];
          local_58 = *puVar9;
          uStack_50 = puVar9[1];
          uVar4 = local_58;
          uVar5 = uStack_50;
          puVar9[2] = puVar9[uVar14 * 3 + 2];
          uVar3 = (puVar9 + uVar14 * 3)[1];
          *puVar9 = puVar9[uVar14 * 3];
          puVar9[1] = uVar3;
          puVar9[uVar14 * 3 + 2] = local_48;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar15 = puVar9 + uVar14 * 3;
          *(undefined4 *)puVar15 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
          local_58 = uVar4;
          uStack_50 = uVar5;
          if (uVar18 != 2) {
            do {
              iVar17 = 0;
              iVar19 = 1;
              iVar23 = 0;
              do {
                iVar17 = iVar17 + 2;
                iVar11 = iVar19;
                if (((longlong)iVar17 < (longlong)uVar14) &&
                   ((longlong)puVar9[(longlong)iVar17 * 3 + 2] <=
                    (longlong)puVar9[(longlong)iVar19 * 3 + 2])) {
                  iVar11 = iVar17;
                }
                if ((longlong)puVar9[(longlong)iVar23 * 3 + 2] <=
                    (longlong)puVar9[(longlong)iVar11 * 3 + 2]) break;
                puVar15 = puVar9 + (longlong)iVar23 * 3;
                puVar13 = puVar9 + (longlong)iVar11 * 3;
                uVar3 = puVar15[2];
                uVar4 = *puVar15;
                uVar5 = puVar15[1];
                puVar15[2] = puVar13[2];
                uVar6 = puVar13[1];
                *puVar15 = *puVar13;
                puVar15[1] = uVar6;
                puVar13[2] = uVar3;
                *puVar13 = uVar4;
                puVar13[1] = uVar5;
                iVar17 = iVar11 * 2;
                iVar19 = iVar11 * 2 + 1;
                iVar23 = iVar11;
              } while ((longlong)iVar19 < (longlong)uVar14);
              uVar1 = uVar14 - 1;
              local_48 = puVar9[2];
              local_58 = *puVar9;
              uStack_50 = puVar9[1];
              uVar4 = local_58;
              uVar5 = uStack_50;
              puVar9[2] = puVar9[uVar1 * 3 + 2];
              uVar3 = (puVar9 + uVar1 * 3)[1];
              *puVar9 = puVar9[uVar1 * 3];
              puVar9[1] = uVar3;
              puVar9[uVar1 * 3 + 2] = local_48;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar15 = puVar9 + uVar1 * 3;
              *(undefined4 *)puVar15 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar15 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar15 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar15 + 0xc) = uStack_50._4_4_;
              bVar24 = 2 < uVar14;
              uVar14 = uVar1;
              local_58 = uVar4;
              uStack_50 = uVar5;
            } while (bVar24);
          }
        }
      }
LAB_14338a325:
      plVar8 = plVar8 + -3;
    } while (&local_358 <= plVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143389f8d:
  local_48 = puVar10[2];
  local_58 = *puVar10;
  uStack_50 = puVar10[1];
  uVar4 = local_58;
  uVar5 = uStack_50;
  puVar10[2] = puVar16[-1];
  uVar3 = puVar16[-2];
  *puVar10 = *puVar20;
  puVar10[1] = uVar3;
  puVar16[-1] = local_48;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar20 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar16 + -0x14) = local_58._4_4_;
  *(undefined4 *)(puVar16 + -2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar16 + -0xc) = uStack_50._4_4_;
  iVar17 = iVar17 + -1;
  puVar16 = puVar16 + -6;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if ((longlong)puVar21 - (longlong)puVar13 < (longlong)puVar12 - (longlong)puVar22) {
    if (puVar9 < puVar15) {
      *plVar8 = (longlong)puVar9;
      plVar8[1] = (longlong)puVar15;
      *(int *)(plVar8 + 2) = iVar17;
      plVar8 = plVar8 + 3;
    }
    puVar9 = puVar10;
    puVar12 = puVar21;
    if (puVar20 <= puVar10 + 3) goto LAB_14338a325;
  }
  else {
    if (puVar10 + 3 < puVar20) {
      *plVar8 = (longlong)puVar10;
      plVar8[1] = (longlong)puVar16;
      *(int *)(plVar8 + 2) = iVar17;
      plVar8 = plVar8 + 3;
    }
    puVar10 = puVar22;
    puVar16 = puVar15;
    puVar12 = puVar15;
    if (puVar15 <= puVar9) goto LAB_14338a325;
  }
  iVar23 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar10) >> 3) * -0x55555555;
  uVar18 = iVar23 + 1;
  puVar13 = puVar10;
  puVar10 = puVar9;
  puVar15 = puVar16;
  if (iVar17 == 0) goto LAB_14338a05e;
  goto LAB_143389e9a;
}



// FUNCTION 14338a360 FUN_14338a360 body=158 status=ok
// SIG undefined FUN_14338a360(void)

undefined8 * FUN_14338a360(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *param_1;
  lVar3 = (longlong)(int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x18 + lVar3 * 0x18);
  *(undefined8 *)(lVar1 + -0x18 + lVar3 * 0x18) = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + -0x10 + lVar3 * 0x18);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(lVar1 + -0xc + lVar3 * 0x18);
  *(undefined8 *)(lVar1 + -0x10 + lVar3 * 0x18) = 0;
  param_2[2] = *(undefined8 *)(lVar1 + -8 + lVar3 * 0x18);
  iVar4 = (int)param_1[1];
  lVar3 = (longlong)iVar4;
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + -0x18 + lVar3 * 0x18) != 0) {
    FUN_1400020a8();
    iVar2 = (int)param_1[1] - iVar4;
    if (iVar2 != 0) {
      memmove((void *)(lVar1 + lVar3 * 0x18 + -0x18),(void *)(lVar1 + lVar3 * 0x18),
              (longlong)iVar2 * 0x18);
      iVar4 = (int)param_1[1];
    }
  }
  *(int *)(param_1 + 1) = iVar4 + -1;
  return param_2;
}



// FUNCTION 14338a410 FUN_14338a410 body=97 status=ok
// SIG undefined FUN_14338a410(void)

void FUN_14338a410(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*param_2 != 0) && (*(longlong *)(param_1 + 0x198) != 0)) {
    *(undefined8 *)(param_1 + 0x198) = 0;
    plVar3 = *(longlong **)(param_1 + 0x1a0);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x1a0) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014338a466. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14338a472 FUN_14338a472 body=326 status=ok
// SIG undefined FUN_14338a472(void)

void FUN_14338a472(longlong param_1,int param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong *local_58;
  int local_4c;
  LARGE_INTEGER local_48;
  undefined8 **local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_4c = param_2;
  if ((((-1 < param_2) && (*(char *)(param_1 + 0xf1) != '\0')) &&
      (param_2 < *(int *)(param_1 + 0x118))) && (*(int *)(param_3 + 1) != 0)) {
    puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    QueryPerformanceCounter(&local_48);
    dVar5 = (double)local_48.QuadPart * DAT_14c83f420;
    *puVar4 = *param_3;
    *param_3 = 0;
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)((longlong)puVar4 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    puVar4[2] = dVar5 + 16777216.0;
    local_60 = puVar4;
    local_58 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_58[1] = (longlong)&DAT_100000001;
    *local_58 = (longlong)&PTR_FUN_14a5ad680;
    local_58[2] = (longlong)puVar4;
    local_48.QuadPart = (LONGLONG)&local_4c;
    local_40 = &local_60;
    FUN_14783c6da(param_1 + 0x20,local_34,&local_48);
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
    FUN_1478353bc(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338a5ba FUN_14338a5ba body=1159 status=ok
// SIG undefined FUN_14338a5ba(void)

void FUN_14338a5ba(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338a5e5:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5adaa0;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = FUN_1433967c4;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338a5e5;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5adaa0;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = FUN_1433967c4;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338a732;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338a732:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_143396980;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5adae0;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (code *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14338aa42 FUN_14338aa42 body=136 status=ok
// SIG undefined FUN_14338aa42(void)

void FUN_14338aa42(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x10);
  if (0 < (longlong)uVar5) {
    plVar4 = (longlong *)(param_1 + 8);
    lVar3 = uVar5 << 4;
    do {
      FUN_1478348fe(*(undefined8 *)(*plVar4 + -0x10 + lVar3));
      lVar1 = *(longlong *)(*plVar4 + -8 + lVar3);
      if ((((lVar1 != 0) && (*(int *)(lVar1 + 8) == 1)) &&
          (lVar1 = *(longlong *)(*plVar4 + -0x10 + lVar3), *(longlong *)(lVar1 + 0x198) == 0)) &&
         (*(int *)(lVar1 + 400) < 1)) {
        FUN_14783f6ae(plVar4,(int)uVar5 + -1);
        FUN_14783f724(plVar4);
      }
      lVar3 = lVar3 + -0x10;
      bVar2 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 14338aaca FUN_14338aaca body=762 status=ok
// SIG undefined FUN_14338aaca(void)

void FUN_14338aaca(longlong param_1)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  double local_c8;
  char local_b9;
  LARGE_INTEGER local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b9 = '\x01';
  local_d8 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"LocalFileNetworkReplayStreamingFactory",L"bFlushStreamersOnShutdown"
                ,&local_b9);
  if (local_b9 == '\x01') {
    local_c8 = -1.0;
    local_d8 = &DAT_14c872ce8;
    FUN_14612afb8(DAT_14c872ce0,L"LocalFileNetworkReplayStreamingFactory",L"MaxFlushTimeSeconds");
    QueryPerformanceCounter(&local_b8);
    dVar5 = local_c8;
    if ((longlong)*(int *)(param_1 + 0x18) != 0) {
      dVar2 = (double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0;
      plVar9 = *(longlong **)(param_1 + 0x10);
      plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x18) * 2;
      dVar4 = dVar2;
      do {
        while ((lVar10 = *plVar9, lVar10 != 0 &&
               ((*(longlong *)(lVar10 + 0x198) != 0 || (0 < *(int *)(lVar10 + 400)))))) {
          QueryPerformanceCounter(&local_b8);
          dVar3 = (double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0;
          if ((0.0 < dVar5) && (dVar5 < dVar3 - dVar2)) goto LAB_14338ab5c;
          (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,(float)(dVar3 - dVar4));
          if ((longlong)*(int *)(param_1 + 0x18) == 0) goto LAB_14338ab5c;
          lVar10 = 0;
          do {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar10);
            if ((lVar1 != 0) && ((*(longlong *)(lVar1 + 0x198) != 0 || (0 < *(int *)(lVar1 + 400))))
               ) {
              (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
              if (DAT_14c846b14 == '\x01') {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c83f0fc) &&
                   (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
                  uVar8 = FUN_14118da1c();
                  bVar6 = FUN_14054d46e(uVar8,L"nothreading");
                  DAT_14c83f0f8 = bVar6 ^ 1;
                  _Init_thread_footer(&DAT_14c83f0fc);
                }
                if (DAT_14c83f0f8 != 1) break;
              }
              FUN_14000f986(0x3dcccccd);
              break;
            }
            lVar10 = lVar10 + 0x10;
          } while ((longlong)*(int *)(param_1 + 0x18) * 0x10 != lVar10);
          plVar9 = *(longlong **)(param_1 + 0x10);
          plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x18) * 2;
          dVar4 = dVar3;
          if ((longlong)*(int *)(param_1 + 0x18) == 0) goto LAB_14338ab5c;
        }
        plVar9 = plVar9 + 2;
      } while (plVar9 != plVar7);
    }
  }
LAB_14338ab5c:
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14338adca FUN_14338adca body=1159 status=ok
// SIG undefined FUN_14338adca(void)

void FUN_14338adca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338adf5:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5acd30;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_147836fbe;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338adf5;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5acd30;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_147836fbe;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338af42;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338af42:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_147836eec;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5acd10;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14338b27a FUN_14338b27a body=282 status=ok
// SIG undefined FUN_14338b27a(void)

undefined8 * FUN_14338b27a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14338b252);
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



// FUNCTION 14338b394 FUN_14338b394 body=266 status=ok
// SIG undefined FUN_14338b394(void)

void FUN_14338b394(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  char cVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  plVar1 = (longlong *)(lVar3 + 0x3c0);
  if (plVar1 != param_1 + 1) {
    iVar2 = (int)param_1[2];
    _Src = (void *)param_1[1];
    *(int *)(lVar3 + 0x3c8) = iVar2;
    if (iVar2 == 0 && *(int *)(lVar3 + 0x3cc) == 0) {
      *(undefined4 *)(lVar3 + 0x3cc) = 0;
    }
    else {
      FUN_1446dd670(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,_Src,(longlong)iVar2 * 2);
      }
    }
  }
  FUN_147832516(lVar3,&local_48,param_1 + 1);
  *(undefined1 *)(param_2 + 0x10) = 0;
  plVar5 = (longlong *)FUN_14054d1d4();
  puVar6 = local_48;
  if (local_40 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  cVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,puVar6);
  if (cVar4 == '\0') {
    *(undefined4 *)(param_2 + 8) = 2;
  }
  else {
    FUN_143385e82(lVar3,plVar1,lVar3 + 0x438);
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14338b4a0 FUN_14338b4a0 body=78 status=ok
// SIG undefined FUN_14338b4a0(void)

undefined8 * FUN_14338b4a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a5acd70;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  FUN_147832994(puVar1 + 2,param_1 + 0x10);
  return puVar1 + 1;
}



// FUNCTION 14338b4f4 FUN_14338b4f4 body=29 status=ok
// SIG undefined FUN_14338b4f4(void)

void FUN_14338b4f4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14338b512 FUN_14338b512 body=52 status=ok
// SIG undefined FUN_14338b512(void)

undefined8 * FUN_14338b512(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5acd70;
  FUN_147835db2(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338b546 FUN_14338b546 body=340 status=ok
// SIG undefined FUN_14338b546(void)

void FUN_14338b546(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_2 + 8) != 2) {
    plVar1 = (longlong *)*param_1;
    FUN_1478356ac(plVar1,plVar1 + 0x87,1);
    if (*(char *)((longlong)plVar1 + 0xf1) != '\0') {
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      (**(code **)(*plVar1 + 0xf0))(plVar1,&local_68);
      if ((int)uStack_60 == 0) {
LAB_14338b640:
        if (local_68 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_68 != (undefined8 *)0x0) {
        (**(code **)*local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        uStack_60 = uStack_60 & 0xffffffff00000000;
        goto LAB_14338b640;
      }
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a5acdd0;
      local_68 = (undefined8 *)&LAB_14338b778;
      local_40 = plVar1;
      FUN_147837228(plVar1,param_1 + 1,&local_68);
      if (local_68 != (undefined8 *)0x0) {
        pppuVar2 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar2 = &local_48;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      goto LAB_14338b57d;
    }
    *(undefined4 *)(param_2 + 8) = 3;
  }
  if (param_1[1] != 0 && (int)param_1[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_88);
  }
LAB_14338b57d:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338b6ae FUN_14338b6ae body=71 status=ok
// SIG undefined FUN_14338b6ae(void)

longlong FUN_14338b6ae(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5acd90;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_1478367a6(param_2 + 0x20,param_1 + 0x10);
  return param_2 + 0x18;
}



// FUNCTION 14338b6fc FUN_14338b6fc body=12 status=ok
// SIG undefined FUN_14338b6fc(void)

void FUN_14338b6fc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338b705. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338b708 FUN_14338b708 body=111 status=ok
// SIG undefined FUN_14338b708(void)

undefined8 * FUN_14338b708(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5acd90;
  plVar1 = param_1 + 2;
  if (*(int *)(param_1 + 3) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14338b759;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14338b759:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338b7ae FUN_14338b7ae body=12 status=ok
// SIG undefined FUN_14338b7ae(void)

void FUN_14338b7ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338b7b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338b7ba FUN_14338b7ba body=29 status=ok
// SIG undefined FUN_14338b7ba(void)

undefined8 FUN_14338b7ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338b7d8 FUN_14338b7d8 body=1808 status=ok
// SIG undefined FUN_14338b7d8(void)

void FUN_14338b7d8(longlong *param_1,longlong param_2)

{
  void *pvVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  longlong local_130;
  undefined2 *local_128;
  int local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  void *local_98;
  undefined8 uStack_90;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined2 *local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar14 = (longlong *)*param_1;
  local_80 = (void *)0x0;
  local_78 = (int)param_1[2];
  lVar11 = (longlong)local_78;
  pvVar1 = (void *)param_1[1];
  local_140 = param_1;
  if (lVar11 == 0) {
    local_74 = 0;
LAB_14338b868:
    local_130 = param_2;
    iVar4 = FUN_1470868c8();
    lVar11 = DAT_14c9a02f8;
    iVar12 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
      uVar9 = 0;
    }
    else if (iVar12 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      uVar9 = (ulonglong)(DVar5 != DVar6);
    }
    else {
      uVar9 = 1;
    }
    iVar12 = *(int *)(lVar11 + uVar9 * 4);
    FUN_14099d55c(DAT_14c9a02e0,&local_128,0);
    plVar7 = (longlong *)FUN_14054d1d4();
    if (iVar12 == 0) {
      local_98 = (void *)0x0;
      uStack_90 = 0;
      iVar12 = 1;
      local_138 = 0x2bca2875f4373fff;
      local_148 = plVar14;
      do {
        if (iVar4 < iVar12 && 0 < iVar4) break;
        puVar10 = &DAT_149dfb77a;
        if (local_120 != 0) {
          puVar10 = local_128;
        }
        FUN_140002266(&local_58,L"%s%i",puVar10,iVar12);
        FUN_147832516(plVar14,&local_68,&local_58);
        puVar10 = &DAT_149dfb77a;
        if (local_60 != 0) {
          puVar10 = local_68;
        }
        (**(code **)(*plVar7 + 0xd0))(plVar7,&local_70,puVar10);
        uVar2 = local_50;
        puVar10 = local_58;
        lVar11 = local_70;
        if (local_70 == 0) {
          lVar13 = (longlong)(int)local_50;
          uStack_90 = CONCAT44(uStack_90._4_4_,local_50);
          if (local_50 == 0 && uStack_90._4_4_ == 0) {
            uStack_90 = (ulonglong)local_50;
            plVar14 = local_148;
          }
          else {
            FUN_1446dd670(&local_98,local_50);
            plVar14 = local_148;
            if (uVar2 != 0) {
              memcpy(local_98,puVar10,lVar13 * 2);
              plVar14 = local_148;
            }
          }
        }
        else {
          if ((0 < iVar4) && (local_70 < local_138)) {
            lVar13 = (longlong)(int)local_50;
            uStack_90 = CONCAT44(uStack_90._4_4_,local_50);
            if (local_50 == 0 && uStack_90._4_4_ == 0) {
              uStack_90 = (ulonglong)local_50;
            }
            else {
              FUN_1446dd670(&local_98,local_50);
              if (uVar2 != 0) {
                memcpy(local_98,puVar10,lVar13 * 2);
              }
            }
            local_138 = local_70;
            plVar14 = local_148;
          }
          iVar12 = iVar12 + 1;
        }
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      } while (lVar11 != 0);
    }
    else {
      (**(code **)(*plVar14 + 0x210))(plVar14,&local_58);
      local_68 = (undefined2 *)0x0;
      local_60 = (int)plVar14[0x7b];
      lVar11 = (longlong)local_60;
      pvVar1 = (void *)plVar14[0x7a];
      if (lVar11 == 0) {
        local_5c = 0;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar1,lVar11 * 2);
      }
      cVar3 = FUN_143389570(&local_68,&local_58);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (cVar3 == '\0') {
        local_98 = (void *)0x0;
        uStack_90 = 0;
      }
      else {
        FUN_1402160b8(&local_70);
        FUN_14047ad2e(&local_70,&local_68,L"%Y.%m.%d-%H.%M.%S");
        FUN_1407ec8fc(&local_98,&local_128,&local_68);
        if (local_68 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_128 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    param_2 = local_130;
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
    }
    local_80 = local_98;
    local_78 = (int)uStack_90;
    local_74 = uStack_90._4_4_;
  }
  else {
    FUN_1446dd670(&local_80,local_78,0);
    memcpy(local_80,pvVar1,lVar11 * 2);
    if ((int)param_1[2] < 2) goto LAB_14338b868;
  }
  iVar12 = local_78 + -1;
  if (local_78 == 0) {
    iVar12 = 0;
  }
  FUN_1402980a2(plVar14 + 0x78,local_80,iVar12);
  FUN_147832516(plVar14,&local_58,&local_80);
  if (1 < local_78) {
    FUN_140056680(&local_128,L".replay");
    iVar12 = local_120 + -1;
    puVar10 = local_128;
    if (local_120 == 0) {
      iVar12 = 0;
      puVar10 = &DAT_149dfb77a;
    }
    cVar3 = FUN_144a38768(&local_58,puVar10,iVar12,1);
    if (local_128 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (cVar3 != '\0') {
      *(undefined1 *)(param_2 + 0x10) = 1;
      local_128 = (undefined2 *)0x0;
      local_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_e0 = 0xffffffff;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_143385e82(plVar14,&local_80);
      plVar8 = (longlong *)FUN_14054d1d4();
      plVar7 = local_140;
      puVar10 = local_58;
      if (local_50 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      local_158 = 0;
      (**(code **)(*plVar8 + 0x30))(plVar8,puVar10,0,0);
      *(int *)((longlong)plVar14 + 0x43c) = (int)plVar7[0xb];
      *(undefined4 *)(plVar14 + 0x88) = *(undefined4 *)((longlong)plVar7 + 0x5c);
      plVar8 = plVar14 + 0x89;
      if (plVar8 != plVar7 + 3) {
        iVar12 = (int)local_140[4];
        pvVar1 = (void *)local_140[3];
        *(int *)(plVar14 + 0x8a) = iVar12;
        if (iVar12 == 0 && *(int *)((longlong)plVar14 + 0x454) == 0) {
          *(undefined4 *)((longlong)plVar14 + 0x454) = 0;
        }
        else {
          FUN_1446dd670(plVar8,iVar12);
          if (iVar12 != 0) {
            memcpy((void *)*plVar8,pvVar1,(longlong)iVar12 * 2);
          }
        }
      }
      *(undefined1 *)(plVar14 + 0x8d) = 1;
      FUN_1402160b8(&local_68);
      plVar14[0x8b] = (longlong)local_68;
      plVar7 = plVar14 + 0x8e;
      if (plVar7 != local_140 + 0xd) {
        iVar12 = (int)local_140[0xe];
        pvVar1 = (void *)local_140[0xd];
        *(int *)(plVar14 + 0x8f) = iVar12;
        if (iVar12 == 0 && *(int *)((longlong)plVar14 + 0x47c) == 0) {
          *(undefined4 *)((longlong)plVar14 + 0x47c) = 0;
        }
        else {
          FUN_1447a127e(plVar7,iVar12);
          if (iVar12 != 0) {
            memcpy((void *)*plVar7,pvVar1,(longlong)iVar12);
          }
        }
      }
      cVar3 = FUN_1433871f2(plVar14,plVar14 + 0x78,plVar14 + 0x87);
      *(char *)((longlong)plVar14 + 0x469) = cVar3;
      if (cVar3 == '\0') {
        *(undefined4 *)(param_2 + 0xbc) = 10;
      }
      else {
        *(undefined4 *)(param_2 + 8) = 0;
      }
      FUN_147832492(&local_128);
      goto LAB_14338bcb5;
    }
  }
  *(undefined4 *)(param_2 + 0xbc) = 9;
LAB_14338bcb5:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338beea FUN_14338beea body=148 status=ok
// SIG undefined FUN_14338beea(void)

undefined8 * FUN_14338beea(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x80,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a5acdf0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  FUN_147832994(puVar2 + 2,param_1 + 0x10);
  puVar2[0xe] = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  _Src = *(void **)(param_1 + 0x70);
  *(int *)(puVar2 + 0xf) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x7c) = 0;
  }
  else {
    FUN_1447a127e(puVar2 + 0xe,iVar1,0);
    memcpy((void *)puVar2[0xe],_Src,(longlong)iVar1);
  }
  return puVar2 + 1;
}



// FUNCTION 14338bf84 FUN_14338bf84 body=29 status=ok
// SIG undefined FUN_14338bf84(void)

void FUN_14338bf84(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14338bfa2 FUN_14338bfa2 body=66 status=ok
// SIG undefined FUN_14338bfa2(void)

undefined8 * FUN_14338bfa2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5acdf0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_147835db2(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338bfe4 FUN_14338bfe4 body=91 status=ok
// SIG undefined FUN_14338bfe4(void)

void FUN_14338bfe4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_2 + 0xbc) == 0) {
    FUN_1478356ac(*param_1,*param_1 + 0x438,1);
  }
  plVar1 = (longlong *)param_1[1];
  if (plVar1 == (longlong *)0x0 || (int)param_1[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014338c025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,param_2);
  return;
}



// FUNCTION 14338c040 FUN_14338c040 body=71 status=ok
// SIG undefined FUN_14338c040(void)

longlong FUN_14338c040(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ace10;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_1478367a6(param_2 + 0x20,param_1 + 0x10);
  return param_2 + 0x18;
}



// FUNCTION 14338c08e FUN_14338c08e body=12 status=ok
// SIG undefined FUN_14338c08e(void)

void FUN_14338c08e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338c097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338c09a FUN_14338c09a body=111 status=ok
// SIG undefined FUN_14338c09a(void)

undefined8 * FUN_14338c09a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5ace10;
  plVar1 = param_1 + 2;
  if (*(int *)(param_1 + 3) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14338c0eb;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14338c0eb:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338c10a FUN_14338c10a body=1159 status=ok
// SIG undefined FUN_14338c10a(void)

void FUN_14338c10a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338c135:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ace90;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_147837834;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338c135;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ace90;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_147837834;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338c282;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338c282:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783776c;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ace70;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14338c592 FUN_14338c592 body=147 status=ok
// SIG undefined FUN_14338c592(void)

void FUN_14338c592(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_1;
  *(undefined1 *)(lVar2 + 0x468) = 0;
  *(int *)(lVar2 + 0x438) = (int)param_1[1];
  iVar1 = *(int *)(lVar2 + 0x100);
  _Src = *(void **)(lVar2 + 0xf8);
  *(int *)(lVar2 + 0x478) = iVar1;
  if (iVar1 == 0 && *(int *)(lVar2 + 0x47c) == 0) {
    *(undefined4 *)(lVar2 + 0x47c) = 0;
  }
  else {
    FUN_1447a127e((undefined8 *)(lVar2 + 0x470),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(lVar2 + 0x470),_Src,(longlong)iVar1);
    }
  }
  FUN_1433871f2(lVar2,lVar2 + 0x3c0,lVar2 + 0x438);
  return;
}



// FUNCTION 14338c644 FUN_14338c644 body=12 status=ok
// SIG undefined FUN_14338c644(void)

void FUN_14338c644(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338c64d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338c650 FUN_14338c650 body=29 status=ok
// SIG undefined FUN_14338c650(void)

undefined8 FUN_14338c650(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338c6a2 FUN_14338c6a2 body=12 status=ok
// SIG undefined FUN_14338c6a2(void)

void FUN_14338c6a2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338c6ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338c6ae FUN_14338c6ae body=29 status=ok
// SIG undefined FUN_14338c6ae(void)

undefined8 FUN_14338c6ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338c6ce FUN_14338c6ce body=302 status=ok
// SIG undefined FUN_14338c6ce(void)

void FUN_14338c6ce(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x178) = 0;
  *(byte *)(lVar1 + 0x280) = *(byte *)(lVar1 + 0x280) & 0xfa;
  if (*(int *)(lVar1 + 0x2f4) < 0) {
    *(undefined4 *)(lVar1 + 0x2f0) = 0;
    FUN_144893a1c(lVar1 + 0x2e8,0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x2f0) = 0;
  }
  *(undefined4 *)(lVar1 + 0x2f8) = 0;
  *(undefined1 *)(lVar1 + 0x2fc) = 0;
  *(undefined8 *)(lVar1 + 0x300) = 0;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  *(undefined4 *)(lVar1 + 0x160) = 0;
  *(undefined1 *)(lVar1 + 0x3b8) = 0;
  local_28 = *(longlong *)(lVar1 + 0x3c0);
  *(undefined8 *)(lVar1 + 0x3c0) = 0;
  local_20 = *(undefined4 *)(lVar1 + 0x3c8);
  local_1c = *(undefined4 *)(lVar1 + 0x3cc);
  *(undefined8 *)(lVar1 + 0x3c8) = 0;
  FUN_147832516(lVar1,local_38);
  *(undefined4 *)(lVar1 + 0x3c8) = 0;
  if (*(int *)(lVar1 + 0x3cc) != 0) {
    FUN_1446f8c06(lVar1 + 0x3c0,0);
  }
  FUN_140b9d292(&DAT_14cabd2f8,&local_28,local_38);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338c81c FUN_14338c81c body=12 status=ok
// SIG undefined FUN_14338c81c(void)

void FUN_14338c81c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338c825. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338c828 FUN_14338c828 body=29 status=ok
// SIG undefined FUN_14338c828(void)

undefined8 FUN_14338c828(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338c846 FUN_14338c846 body=1159 status=ok
// SIG undefined FUN_14338c846(void)

void FUN_14338c846(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338c871:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5acf90;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_147838146;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338c871;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5acf90;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_147838146;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338c9be;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338c9be:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_147838074;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5acf70;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14338ccce FUN_14338ccce body=343 status=ok
// SIG undefined FUN_14338ccce(void)

void FUN_14338ccce(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_1;
  bVar4 = FUN_147832f80(uVar2,param_1 + 1);
  lVar3 = DAT_14cabd290;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar9 = 0;
  }
  else if (iVar1 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar9 = 1;
  }
  if ((bVar4 & *(int *)(lVar3 + uVar9 * 4) == 0) != 0) goto LAB_14338cd57;
  FUN_147832516(uVar2,&local_48,param_1 + 1);
  plVar8 = (longlong *)FUN_14054d1d4();
  puVar10 = local_48;
  if (local_40 == 0) {
    puVar10 = &DAT_149dfb77a;
  }
  cVar5 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar10);
  uVar11 = 2;
  if (cVar5 == '\0') {
LAB_14338cdf0:
    *(undefined4 *)(param_2 + 8) = uVar11;
  }
  else {
    plVar8 = (longlong *)FUN_14054d1d4();
    puVar10 = local_48;
    if (local_40 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    local_58 = 0;
    uVar11 = 0;
    cVar5 = (**(code **)(*plVar8 + 0x30))(plVar8,puVar10,0,0);
    if (cVar5 != '\0') goto LAB_14338cdf0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14338cd57:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14338ce26 FUN_14338ce26 body=115 status=ok
// SIG undefined FUN_14338ce26(void)

longlong FUN_14338ce26(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5acff0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  return param_2 + 0x18;
}



// FUNCTION 14338cea0 FUN_14338cea0 body=12 status=ok
// SIG undefined FUN_14338cea0(void)

void FUN_14338cea0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338cea9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338ceac FUN_14338ceac body=57 status=ok
// SIG undefined FUN_14338ceac(void)

undefined8 * FUN_14338ceac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5acff0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338cee6 FUN_14338cee6 body=1159 status=ok
// SIG undefined FUN_14338cee6(void)

void FUN_14338cee6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338cf11:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad070;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_147838bb4;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338cf11;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad070;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_147838bb4;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338d05e;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338d05e:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_147838ae2;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad050;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14338d36e FUN_14338d36e body=1162 status=ok
// SIG undefined FUN_14338d36e(void)

void FUN_14338d36e(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  void *pvVar12;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  longlong *local_188;
  longlong local_180;
  longlong *local_178;
  longlong local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  longlong local_148 [3];
  undefined6 uStack_130;
  undefined2 uStack_12a;
  undefined4 uStack_128;
  undefined2 uStack_124;
  undefined8 uStack_122;
  undefined8 local_118;
  int local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  undefined8 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar2 = *param_1;
  local_178 = param_1;
  FUN_140056680();
  local_88 = (void *)0x0;
  uStack_80._0_4_ = *(int *)(lVar2 + 0x3d8);
  lVar11 = (longlong)(int)uStack_80;
  pvVar12 = *(void **)(lVar2 + 0x3d0);
  if (lVar11 == 0) {
    iVar6 = 0;
    iVar8 = 2;
    local_158 = (void *)0x0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_88,(int)uStack_80,0);
    memcpy(local_88,pvVar12,lVar11 * 2);
    iVar8 = ((int)uStack_80 == 0) + 1;
    local_158 = local_88;
    iVar6 = (int)uStack_80;
    iVar4 = uStack_80._4_4_;
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  uStack_150 = CONCAT44(iVar4,iVar6);
  iVar1 = iVar8 + iVar6;
  if (iVar1 < iVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar4 < iVar1) {
    FUN_1446f8c06(&local_158);
  }
  FUN_1400020e8(&local_158,&DAT_149e060b2,1);
  FUN_1401c7f3e(&local_70,&local_158,&local_118);
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  local_88 = (void *)0x0;
  uStack_80 = 0;
  plVar5 = (longlong *)FUN_14054d1d4();
  puVar9 = local_70;
  if (local_68 == 0) {
    puVar9 = (undefined8 *)&DAT_149dfb77a;
  }
  local_198 = 0;
  (**(code **)(*plVar5 + 0x78))(plVar5,&local_88,puVar9,1);
  if ((longlong)(int)uStack_80 == 0) {
    uVar7 = 0;
  }
  else {
    local_188 = (longlong *)(param_2 + 0x10);
    lVar11 = (longlong)(int)uStack_80 << 4;
    pvVar12 = local_88;
    local_180 = param_2;
    do {
      local_118 = 0;
      local_110 = 0;
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0xffffffff;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      FUN_140c50e9c(&local_158,pvVar12,1);
      cVar3 = FUN_143385e82(lVar2,&local_158,&local_118);
      if (local_158 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (((cVar3 != '\0') && (((int)local_178[3] == 0 || ((int)local_178[3] == local_118._4_4_))))
         && ((*(int *)((longlong)local_178 + 0x1c) == 0 ||
             (*(int *)((longlong)local_178 + 0x1c) == local_110)))) {
        uStack_128 = 0;
        uStack_124 = 0;
        uStack_122 = 0;
        local_148[2] = 0;
        uStack_130 = 0;
        uStack_12a = 0;
        local_148[0] = 0;
        local_148[1] = 0;
        local_158 = (void *)0x0;
        uStack_150 = 0;
        FUN_140c50e9c(&local_168,pvVar12,1);
        if (local_158 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_158 = (void *)CONCAT44(uStack_164,local_168);
        uStack_150 = CONCAT44(uStack_15c,iStack_160);
        uStack_122 = CONCAT26(CONCAT11(uStack_122._7_1_,(undefined1)local_e8),
                              CONCAT42(local_110,(undefined2)uStack_122));
        uStack_128 = (undefined4)local_118;
        iVar6 = (int)uStack_100 + -1;
        if ((int)uStack_100 == 0) {
          iVar6 = 0;
        }
        FUN_1402980a2(local_148,local_108,iVar6);
        uStack_130 = (undefined6)uStack_f0;
        uStack_12a = (undefined2)((ulonglong)uStack_f0 >> 0x30);
        local_148[2] = local_f8;
        if (local_f8 == 0) {
          plVar5 = (longlong *)FUN_14054d1d4();
          FUN_147832516(lVar2,&local_168,&local_158);
          puVar10 = &DAT_149dfb77a;
          if (iStack_160 != 0) {
            puVar10 = (undefined2 *)CONCAT44(uStack_164,local_168);
          }
          (**(code **)(*plVar5 + 0xd0))(plVar5,&local_170,puVar10);
          local_148[2] = local_170;
          if (CONCAT44(uStack_164,local_168) != 0) {
            FUN_1400020a8();
          }
        }
        iVar6 = *(int *)(local_180 + 0x18);
        *(uint *)(local_180 + 0x18) = iVar6 + 1U;
        if (*(uint *)(local_180 + 0x1c) < iVar6 + 1U) {
          FUN_147831962(local_188,iVar6);
        }
        FUN_1478318b2((longlong)iVar6 * 0x40 + *local_188,&local_158);
        if (local_148[0] != 0) {
          FUN_1400020a8();
        }
        if (local_158 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      FUN_147832492(&local_118);
      pvVar12 = (void *)((longlong)pvVar12 + 0x10);
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
    uVar7 = uStack_80 & 0xffffffff;
    param_2 = local_180;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  FUN_1447a1747(local_88,uVar7);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14338d7fa FUN_14338d7fa body=160 status=ok
// SIG undefined FUN_14338d7fa(void)

undefined8 * FUN_14338d7fa(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14a5ad0d0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  puVar2[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(puVar2 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 2,iVar1,0);
    memcpy((void *)puVar2[2],_Src,(longlong)iVar1 * 2);
  }
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  return puVar2 + 1;
}



// FUNCTION 14338d8a0 FUN_14338d8a0 body=29 status=ok
// SIG undefined FUN_14338d8a0(void)

void FUN_14338d8a0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14338d8be FUN_14338d8be body=57 status=ok
// SIG undefined FUN_14338d8be(void)

undefined8 * FUN_14338d8be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad0d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338d8f8 FUN_14338d8f8 body=3563 status=ok
// SIG undefined FUN_14338d8f8(void)

void FUN_14338d8f8(longlong *param_1,undefined4 *param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  ulonglong *puVar7;
  bool bVar8;
  longlong *plVar9;
  undefined **ppuVar10;
  uchar auVar11 [8];
  undefined4 uVar12;
  uchar auVar13 [8];
  undefined4 uVar14;
  char cVar15;
  undefined8 uVar16;
  undefined4 *puVar17;
  int *piVar18;
  longlong lVar19;
  size_t _Size;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined **local_200;
  longlong *local_1f0;
  int local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  void *local_1c0;
  undefined8 local_1b8;
  void *local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined **local_188;
  uchar auStack_180 [8];
  byte local_15e;
  longlong *local_130;
  longlong local_110;
  longlong local_f8;
  longlong *local_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8;
  undefined4 local_b0;
  void *local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  longlong *local_90;
  undefined **local_88;
  uchar auStack_80 [8];
  GUID local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  plVar5 = (longlong *)*param_1;
  local_88 = (undefined **)0x0;
  uVar3 = *(uint *)(param_1 + 2);
  pvVar6 = (void *)param_1[1];
  auStack_80[0] = (char)uVar3;
  auStack_80[1] = (char)(uVar3 >> 8);
  auStack_80[2] = (char)(uVar3 >> 0x10);
  auStack_80[3] = (char)(uVar3 >> 0x18);
  if ((longlong)(int)uVar3 == 0) {
    auStack_80[4] = '\0';
    auStack_80[5] = '\0';
    auStack_80[6] = '\0';
    auStack_80[7] = '\0';
    auStack_80[0] = (char)uVar3;
    auStack_80[1] = (char)(uVar3 >> 8);
    auStack_80[2] = (char)(uVar3 >> 0x10);
    auStack_80[3] = (char)(uVar3 >> 0x18);
LAB_14338d98a:
    local_78.Data1 = 0;
    local_78.Data2 = 0;
    local_78.Data3 = 0;
    local_78.Data4[0] = '\0';
    local_78.Data4[1] = '\0';
    local_78.Data4[2] = '\0';
    local_78.Data4[3] = '\0';
    local_78.Data4[4] = '\0';
    local_78.Data4[5] = '\0';
    local_78.Data4[6] = '\0';
    local_78.Data4[7] = '\0';
    CoCreateGuid(&local_78);
    local_188 = (undefined **)0x0;
    auStack_180[0] = '\0';
    auStack_180[1] = '\0';
    auStack_180[2] = '\0';
    auStack_180[3] = '\0';
    auStack_180[4] = '\0';
    auStack_180[5] = '\0';
    auStack_180[6] = '\0';
    auStack_180[7] = '\0';
    FUN_1407c869a(&local_78,&local_188,0);
    if (local_88 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    local_88 = local_188;
    auStack_80[0] = auStack_180[0];
    auStack_80[1] = auStack_180[1];
    auStack_80[2] = auStack_180[2];
    auStack_80[3] = auStack_180[3];
    auStack_80[4] = auStack_180[4];
    auStack_80[5] = auStack_180[5];
    auStack_80[6] = auStack_180[6];
    auStack_80[7] = auStack_180[7];
  }
  else {
    FUN_1446dd670(&local_88,uVar3,0);
    memcpy(local_88,pvVar6,(longlong)(int)uVar3 * 2);
    if ((int)auStack_80._0_4_ < 2) goto LAB_14338d98a;
  }
  iVar20 = (int)plVar5[0x79];
  lVar21 = (longlong)iVar20;
  local_78._0_8_ = (undefined **)0x0;
  pvVar6 = (void *)plVar5[0x78];
  local_78.Data4[0] = (char)iVar20;
  local_78.Data4[1] = (char)((uint)iVar20 >> 8);
  local_78.Data4[2] = (char)((uint)iVar20 >> 0x10);
  local_78.Data4[3] = (char)((uint)iVar20 >> 0x18);
  FUN_1446dd670(&local_78,(uint)(lVar21 == 0) + iVar20 + 1,0);
  if (lVar21 != 0) {
    memcpy((void *)local_78._0_8_,pvVar6,lVar21 * 2);
  }
  FUN_1400020e8(&local_78,&DAT_149e01f60,1);
  auVar13 = local_78.Data4;
  auVar11 = auStack_80;
  ppuVar10 = local_88;
  uVar12 = local_78.Data4._0_4_;
  if ((int)local_78.Data4._0_4_ < 2) {
    local_188 = (undefined **)0x0;
    lVar21 = (longlong)(int)auStack_80._0_4_;
    auStack_180[0] = auStack_80[0];
    auStack_180[1] = auStack_80[1];
    auStack_180[2] = auStack_80[2];
    auStack_180[3] = auStack_80[3];
    auStack_80 = auVar11;
    if (lVar21 == 0) {
      auStack_180 = (uchar  [8])((ulonglong)auVar11 & 0xffffffff);
    }
    else {
      FUN_1446dd670(&local_188,(ulonglong)auVar11 & 0xffffffff,0);
      memcpy(local_188,ppuVar10,lVar21 * 2);
    }
  }
  else {
    iVar20 = auStack_80._0_4_ + -1;
    if (auStack_80._0_4_ == 0) {
      iVar20 = 0;
    }
    local_188 = (undefined **)local_78._0_8_;
    uVar14 = local_78.Data4._4_4_;
    local_78._0_8_ = (undefined **)0x0;
    local_78.Data4[0] = '\0';
    local_78.Data4[1] = '\0';
    local_78.Data4[2] = '\0';
    local_78.Data4[3] = '\0';
    local_78.Data4[4] = '\0';
    local_78.Data4[5] = '\0';
    local_78.Data4[6] = '\0';
    local_78.Data4[7] = '\0';
    auVar11 = local_78.Data4;
    local_78.Data4[0] = auVar13[0];
    local_78.Data4[1] = auVar13[1];
    local_78.Data4[2] = auVar13[2];
    local_78.Data4[3] = auVar13[3];
    local_78.Data4[4] = auVar13[4];
    local_78.Data4[5] = auVar13[5];
    local_78.Data4[6] = auVar13[6];
    local_78.Data4[7] = auVar13[7];
    auStack_180[0] = local_78.Data4[0];
    auStack_180[1] = local_78.Data4[1];
    auStack_180[2] = local_78.Data4[2];
    auStack_180[3] = local_78.Data4[3];
    auStack_180[4] = local_78.Data4[4];
    auStack_180[5] = local_78.Data4[5];
    auStack_180[6] = local_78.Data4[6];
    auStack_180[7] = local_78.Data4[7];
    iVar24 = iVar20 + uVar12;
    local_78.Data4 = auVar11;
    if (iVar24 < (int)uVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar20);
    }
    if ((int)uVar14 < iVar24) {
      FUN_1446f8c06(&local_188);
    }
    FUN_1400020e8(&local_188,local_88,iVar20);
  }
  if (local_88 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  local_88 = local_188;
  auStack_80[0] = auStack_180[0];
  auStack_80[1] = auStack_180[1];
  auStack_80[2] = auStack_180[2];
  auStack_80[3] = auStack_180[3];
  auStack_80[4] = auStack_180[4];
  auStack_80[5] = auStack_180[5];
  auStack_80[6] = auStack_180[6];
  auStack_80[7] = auStack_180[7];
  local_188 = (undefined **)0x0;
  auStack_180 = (uchar  [8])0x0;
  if ((undefined **)local_78._0_8_ != (undefined **)0x0) {
    FUN_1400020a8();
  }
  FUN_147832516(plVar5,&local_188,plVar5 + 0x78);
  (**(code **)(*plVar5 + 0x200))(plVar5,&local_98,&local_188);
  if (local_188 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_98 == (longlong *)0x0) {
    *param_2 = 10;
    goto LAB_14338dcb4;
  }
  iVar20 = -1;
  if (0 < (longlong)(int)plVar5[0x96]) {
    lVar21 = plVar5[0x95];
    lVar19 = 0;
LAB_14338db8d:
    iVar20 = *(int *)(lVar21 + 0x10 + lVar19 * 0x50);
    if (iVar20 != auStack_80._0_4_) {
      if (iVar20 + auStack_80._0_4_ == 1) goto LAB_14338dc24;
      goto LAB_14338dc09;
    }
    if (1 < (int)auStack_80._0_4_) {
      lVar22 = 0;
      do {
        uVar1 = *(ushort *)(*(longlong *)(lVar19 * 0x50 + lVar21 + 8) + lVar22);
        uVar2 = *(ushort *)((longlong)local_88 + lVar22);
        if (uVar1 == uVar2) {
          if (uVar1 == 0) break;
        }
        else {
          if (0x7f < (uVar2 | uVar1)) {
            iVar20 = (uint)uVar1 - (uint)uVar2;
            goto LAB_14338dbfa;
          }
          if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto code_r0x00014338dbf7;
        }
        lVar22 = lVar22 + 2;
      } while( true );
    }
    goto LAB_14338dc24;
  }
LAB_14338dc26:
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  cVar15 = (**(code **)(*plVar5 + 0x1d8))(plVar5);
  if (cVar15 == '\0') {
    if (&local_a8 != (void **)(param_1 + 8)) {
      uVar3 = *(uint *)(param_1 + 9);
      pvVar6 = (void *)param_1[8];
      uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
      if (uVar3 == 0 && uStack_a0._4_4_ == 0) {
        uStack_a0 = (ulonglong)uVar3;
      }
      else {
        FUN_1447a127e(&local_a8,uVar3);
        if (uVar3 != 0) {
          memcpy(local_a8,pvVar6,(longlong)(int)uVar3);
        }
      }
    }
LAB_14338dd84:
    FUN_146866eea(&local_188);
    local_18c = 3;
    puVar17 = *(undefined4 **)auStack_180 + 1;
    if (*(undefined4 **)((longlong)auStack_180 + 8) < puVar17) {
      if ((local_15e & 2) == 0) {
        (*(code *)local_188[0x2e])(&local_188,&local_18c,4);
      }
      else {
        FUN_14572512c(&local_188,&local_18c);
      }
    }
    else {
      local_18c = **(undefined4 **)auStack_180;
      *(undefined4 **)auStack_180 = puVar17;
    }
    local_190 = 0;
    puVar17 = *(undefined4 **)auStack_180 + 1;
    local_1d8 = local_f8;
    if (*(undefined4 **)((longlong)auStack_180 + 8) < puVar17) {
      if ((local_15e & 2) == 0) {
        (*(code *)local_188[0x2e])(&local_188,&local_190,4);
      }
      else {
        FUN_14572512c(&local_188,&local_190);
      }
    }
    else {
      local_190 = **(undefined4 **)auStack_180;
      *(undefined4 **)auStack_180 = puVar17;
    }
    ppuVar10 = local_88;
    local_1e0 = local_f8;
    local_1a0 = (void *)0x0;
    lVar21 = (longlong)(int)auStack_80._0_4_;
    local_198 = CONCAT44(local_198._4_4_,auStack_80._0_4_);
    if (lVar21 == 0) {
      local_198 = (ulonglong)auStack_80 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_1a0,(ulonglong)auStack_80 & 0xffffffff,0);
      memcpy(local_1a0,ppuVar10,lVar21 * 2);
    }
    local_1f0 = plVar5 + 0x95;
    FUN_14021219d(&local_188,&local_1a0);
    local_1b0 = (void *)0x0;
    uVar3 = *(uint *)(param_1 + 4);
    pvVar6 = (void *)param_1[3];
    local_1a8 = CONCAT44(local_1a8._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      local_1a8 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_1b0,uVar3,0);
      memcpy(local_1b0,pvVar6,(longlong)(int)uVar3 * 2);
    }
    FUN_14021219d(&local_188,&local_1b0);
    local_1c0 = (void *)0x0;
    uVar3 = *(uint *)(param_1 + 7);
    pvVar6 = (void *)param_1[6];
    local_1b8 = CONCAT44(local_1b8._4_4_,uVar3);
    if ((longlong)(int)uVar3 == 0) {
      local_1b8 = (ulonglong)uVar3;
    }
    else {
      FUN_1446dd670(&local_1c0,uVar3,0);
      memcpy(local_1c0,pvVar6,(longlong)(int)uVar3 * 2);
    }
    FUN_14021219d(&local_188,&local_1c0);
    local_1c4 = (undefined4)param_1[5];
    puVar17 = *(undefined4 **)auStack_180 + 1;
    if (*(undefined4 **)((longlong)auStack_180 + 8) < puVar17) {
      if ((local_15e & 2) == 0) {
        (*(code *)local_188[0x2e])(&local_188,&local_1c4,4);
      }
      else {
        FUN_14572512c(&local_188,&local_1c4);
      }
    }
    else {
      local_1c4 = **(undefined4 **)auStack_180;
      *(undefined4 **)auStack_180 = puVar17;
    }
    local_1c8 = (undefined4)param_1[5];
    puVar17 = *(undefined4 **)auStack_180 + 1;
    if (*(undefined4 **)((longlong)auStack_180 + 8) < puVar17) {
      if ((local_15e & 2) == 0) {
        (*(code *)local_188[0x2e])(&local_188,&local_1c8,4);
      }
      else {
        FUN_14572512c(&local_188,&local_1c8);
      }
    }
    else {
      local_1c8 = **(undefined4 **)auStack_180;
      *(undefined4 **)auStack_180 = puVar17;
    }
    local_1cc = (int)uStack_a0;
    puVar17 = *(undefined4 **)auStack_180 + 1;
    if (*(undefined4 **)((longlong)auStack_180 + 8) < puVar17) {
      if ((local_15e & 2) == 0) {
        (*(code *)local_188[0x2e])(&local_188,&local_1cc,4);
      }
      else {
        FUN_14572512c(&local_188,&local_1cc);
      }
    }
    else {
      local_1cc = **(undefined4 **)auStack_180;
      *(undefined4 **)auStack_180 = puVar17;
    }
    pvVar6 = local_a8;
    lVar19 = local_f8;
    iVar4 = (int)uStack_a0;
    _Size = (size_t)(int)uStack_a0;
    lVar21 = _Size + local_f8;
    iVar24 = (int)local_f0[1];
    lVar22 = lVar21 - iVar24;
    if (lVar22 != 0 && iVar24 <= lVar21) {
      if (0x7ffffffe < lVar21) {
        local_1e4 = iVar20;
        FUN_1400021e4(local_e8,&local_78);
        local_200 = (undefined **)local_78._0_8_;
        if (local_78.Data4._0_4_ == 0) {
          local_200 = (undefined **)&DAT_149dfb77a;
        }
        local_208 = 0x7fffffff;
        FUN_140033559("Runtime\\Core\\Public\\Serialization/MemoryWriter.h",0x31,
                      L"TMemoryWriter with IndexSize=%d does not support data larger than %d bytes. Archive name: %s."
                      ,4);
        if ((undefined **)local_78._0_8_ != (undefined **)0x0) {
          FUN_1400020a8();
        }
        iVar24 = (int)local_f0[1];
        iVar20 = local_1e4;
      }
      uVar3 = (uint)lVar22;
      *(uint *)(local_f0 + 1) = iVar24 + uVar3;
      if ((uint)(*(int *)((longlong)local_f0 + 0xc) - iVar24) < uVar3) {
        FUN_1447403be();
      }
    }
    iVar24 = (int)local_f8;
    if (iVar4 != 0) {
      memcpy((void *)((longlong)iVar24 + *local_f0),pvVar6,_Size);
      local_f8 = _Size + local_f8;
      iVar24 = (int)local_f8;
    }
    plVar23 = local_98;
    iVar24 = iVar24 - (int)local_1e0;
    local_78.Data1 = iVar24;
    if (iVar20 == -1) {
      uVar16 = (**(code **)(*local_98 + 0x30))(local_98);
      (**(code **)(*plVar23 + 0x1a0))(plVar23,uVar16);
      bVar8 = true;
      plVar23 = local_1f0;
    }
    else {
      lVar21 = (longlong)iVar20 * 0x50;
      iVar4 = *(int *)(plVar5[0x91] + 4 + (longlong)*(int *)(plVar5[0x95] + lVar21) * 0x18);
      (**(code **)(*local_98 + 0x1a0))
                (local_98,*(undefined8 *)
                           (plVar5[0x91] + 8 + (longlong)*(int *)(plVar5[0x95] + lVar21) * 0x18));
      plVar23 = local_1f0;
      if (iVar4 < iVar24) {
        local_18c = 0xffffffff;
        puVar7 = (ulonglong *)local_98[1];
        puVar17 = (undefined4 *)*puVar7 + 1;
        if ((undefined4 *)puVar7[1] < puVar17) {
          if ((*(byte *)((longlong)local_98 + 0x2a) & 2) == 0) {
            (**(code **)(*local_98 + 0x170))(local_98,&local_18c,4);
          }
          else {
            FUN_14572512c(local_98,&local_18c);
          }
        }
        else {
          local_18c = *(undefined4 *)*puVar7;
          *puVar7 = (ulonglong)puVar17;
        }
        plVar9 = local_98;
        *(undefined4 *)(plVar5[0x91] + (longlong)*(int *)(plVar5[0x95] + lVar21) * 0x18) =
             0xffffffff;
        uVar16 = (**(code **)(*local_98 + 0x30))(local_98);
        (**(code **)(*plVar9 + 0x1a0))(plVar9,uVar16);
        bVar8 = true;
      }
      else {
        local_78.Data1 =
             *(undefined4 *)(plVar5[0x91] + 4 + (longlong)*(int *)(plVar5[0x95] + lVar21) * 0x18);
        bVar8 = false;
      }
    }
    local_f8 = local_1d8;
    puVar17 = *(undefined4 **)auStack_180 + 1;
    if (*(undefined4 **)((longlong)auStack_180 + 8) < puVar17) {
      if ((local_15e & 2) == 0) {
        (*(code *)local_188[0x2e])(&local_188,&local_78,4);
      }
      else {
        FUN_14572512c(&local_188,&local_78);
      }
    }
    else {
      local_78.Data1 = **(undefined4 **)auStack_180;
      *(undefined4 **)auStack_180 = puVar17;
    }
    lVar21 = (**(code **)(*local_98 + 0x28))();
    if (bVar8) {
      puVar17 = (undefined4 *)FUN_147838f46(plVar5 + 0x91);
      *puVar17 = local_18c;
      *(longlong *)(puVar17 + 2) = lVar21;
      *(longlong *)(puVar17 + 4) = local_1e0 + lVar21;
      puVar17[1] = local_78.Data1;
      piVar18 = (int *)FUN_147838f86(plVar23);
      *piVar18 = (int)plVar5[0x92] + -1;
      if ((void **)(piVar18 + 2) != &local_1a0) {
        if (*(longlong *)(piVar18 + 2) != 0) {
          FUN_1400020a8();
        }
        *(void **)(piVar18 + 2) = local_1a0;
        local_1a0 = (void *)0x0;
        piVar18[4] = (int)local_198;
        piVar18[5] = local_198._4_4_;
        local_198 = 0;
      }
      iVar20 = (int)plVar5[0x96] + -1;
      plVar23 = local_1f0;
    }
    lVar22 = *plVar23 + (longlong)iVar20 * 0x50;
    if ((void **)(*plVar23 + (longlong)iVar20 * 0x50 + 0x18) != &local_1b0) {
      if (*(longlong *)(lVar22 + 0x18) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar22 + 0x18) = local_1b0;
      local_1b0 = (void *)0x0;
      *(undefined4 *)(lVar22 + 0x20) = (undefined4)local_1a8;
      *(undefined4 *)(lVar22 + 0x24) = local_1a8._4_4_;
      local_1a8 = 0;
    }
    if ((void **)(lVar22 + 0x28) != &local_1c0) {
      if (*(longlong *)(lVar22 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(void **)(lVar22 + 0x28) = local_1c0;
      local_1c0 = (void *)0x0;
      *(undefined4 *)(lVar22 + 0x30) = (undefined4)local_1b8;
      *(undefined4 *)(lVar22 + 0x34) = local_1b8._4_4_;
      local_1b8 = 0;
    }
    *(undefined4 *)(lVar22 + 0x38) = local_1c4;
    *(undefined4 *)(lVar22 + 0x3c) = local_1c8;
    *(undefined4 *)(lVar22 + 0x40) = local_1cc;
    *(longlong *)(lVar22 + 0x48) = lVar21 + lVar19;
    (**(code **)(*local_98 + 0x170))(local_98,local_e0,(longlong)(int)local_f0[1]);
    plVar5 = local_90;
    local_98 = (longlong *)0x0;
    if (local_90 != (longlong *)0x0) {
      local_90 = (longlong *)0x0;
      LOCK();
      plVar23 = plVar5 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar18 = (int *)((longlong)plVar5 + 0xc);
        *piVar18 = *piVar18 + -1;
        UNLOCK();
        if (*piVar18 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_1c0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_1b0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_1a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    local_188 = &PTR__purecall_149e35f70;
    if (local_130 != (longlong *)0x0) {
      if (*local_130 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_130);
    }
    if (local_110 != 0) {
      if (*(longlong *)(local_110 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(local_110);
    }
  }
  else {
    local_b8 = plVar5[0x8e];
    local_b0 = (undefined4)plVar5[0x8f];
    local_c8 = param_1[8];
    local_c0 = (undefined4)param_1[9];
    cVar15 = (**(code **)(*plVar5 + 0x1e8))(plVar5,&local_c8,&local_a8);
    if (cVar15 != '\0') goto LAB_14338dd84;
    *param_2 = 7;
  }
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_14338dcb4:
  plVar5 = local_90;
  if (local_90 != (longlong *)0x0) {
    LOCK();
    plVar23 = local_90 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*local_90)(local_90);
      LOCK();
      piVar18 = (int *)((longlong)plVar5 + 0xc);
      *piVar18 = *piVar18 + -1;
      UNLOCK();
      if (*piVar18 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_88 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014338dbf7:
  iVar20 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_14338dbfa:
  if (iVar20 == 0) {
LAB_14338dc24:
    iVar20 = (int)lVar19;
    goto LAB_14338dc26;
  }
LAB_14338dc09:
  iVar20 = -1;
  lVar19 = lVar19 + 1;
  if (lVar19 == (int)plVar5[0x96]) goto LAB_14338dc26;
  goto LAB_14338db8d;
}



// FUNCTION 14338e6e4 FUN_14338e6e4 body=348 status=ok
// SIG undefined FUN_14338e6e4(void)

undefined8 * FUN_14338e6e4(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5ad0f0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  pvVar2 = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x20);
  *(int *)(puVar3 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 4,iVar1,0);
    memcpy((void *)puVar3[4],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_1 + 0x30);
  puVar3[7] = 0;
  iVar1 = *(int *)(param_1 + 0x40);
  pvVar2 = *(void **)(param_1 + 0x38);
  *(int *)(puVar3 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 7,iVar1,0);
    memcpy((void *)puVar3[7],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3[9] = 0;
  iVar1 = *(int *)(param_1 + 0x50);
  pvVar2 = *(void **)(param_1 + 0x48);
  *(int *)(puVar3 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
  }
  else {
    FUN_1447a127e(puVar3 + 9,iVar1,0);
    memcpy((void *)puVar3[9],pvVar2,(longlong)iVar1);
  }
  return puVar3 + 1;
}



// FUNCTION 14338e846 FUN_14338e846 body=29 status=ok
// SIG undefined FUN_14338e846(void)

void FUN_14338e846(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14338e864 FUN_14338e864 body=99 status=ok
// SIG undefined FUN_14338e864(void)

undefined8 * FUN_14338e864(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad0f0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
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



// FUNCTION 14338e8c8 FUN_14338e8c8 body=146 status=ok
// SIG undefined FUN_14338e8c8(void)

void FUN_14338e8c8(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_147838fc6(local_48);
  (**(code **)(*plVar1 + 0x178))(plVar1,local_48);
  FUN_147832b28(plVar1);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14338e98e FUN_14338e98e body=12 status=ok
// SIG undefined FUN_14338e98e(void)

void FUN_14338e98e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014338e997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14338e99a FUN_14338e99a body=29 status=ok
// SIG undefined FUN_14338e99a(void)

undefined8 FUN_14338e99a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14338e9b8 FUN_14338e9b8 body=1159 status=ok
// SIG undefined FUN_14338e9b8(void)

void FUN_14338e9b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338e9e3:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad190;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_1478397c4;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338e9e3;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad190;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_1478397c4;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338eb30;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338eb30:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_1478396f2;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad170;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14338ee40 FUN_14338ee40 body=889 status=ok
// SIG undefined FUN_14338ee40(void)

void FUN_14338ee40(longlong *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  ushort uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ushort uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_118 [40];
  longlong local_f0;
  undefined2 *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar14 = *param_1;
  local_58 = (void *)0x0;
  local_50 = (int)param_1[2];
  lVar15 = (longlong)local_50;
  pvVar2 = (void *)param_1[1];
  if (lVar15 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar2,lVar15 * 2);
    if (1 < local_50) goto LAB_14338eef1;
  }
  iVar5 = *(int *)(lVar14 + 0x3c8) + -1;
  if (*(int *)(lVar14 + 0x3c8) == 0) {
    iVar5 = 0;
  }
  FUN_1402980a2(&local_58,*(undefined8 *)(lVar14 + 0x3c0),iVar5);
LAB_14338eef1:
  FUN_147832516(lVar14,&local_e8,&local_58);
  plVar6 = (longlong *)FUN_14054d1d4();
  puVar8 = local_e8;
  if (local_e0 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  cVar4 = (**(code **)(*plVar6 + 0x48))(plVar6,puVar8);
  if (local_e8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(param_2 + 8) = 2;
  }
  else {
    local_e8 = (undefined2 *)0x0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0xffffffff;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    cVar4 = FUN_143385e82(lVar14,&local_58);
    if (cVar4 != '\0') {
      local_f0 = param_2;
      if ((longlong)(int)uStack_70 != 0) {
        lVar15 = (longlong)(int)uStack_70 * 0x50 + local_78;
        lVar14 = local_78;
        do {
          iVar5 = (int)param_1[4];
          if (iVar5 < 2) {
LAB_14338f08d:
            iVar5 = FUN_147839b56((longlong *)(param_2 + 0x18));
            lVar3 = *(longlong *)(param_2 + 0x18);
            lVar10 = lVar3 + (longlong)iVar5 * 0x40;
            if (lVar10 != lVar14) {
              iVar1 = *(int *)(lVar14 + 0x10);
              pvVar2 = *(void **)(lVar14 + 8);
              *(int *)(lVar10 + 0x10) = iVar1;
              if (iVar1 == 0 && *(int *)(lVar10 + 0x14) == 0) {
                *(undefined4 *)(lVar10 + 0x14) = 0;
              }
              else {
                puVar13 = (undefined8 *)(lVar3 + (longlong)iVar5 * 0x40 + 8);
                FUN_1446dd670(puVar13,iVar1);
                if (iVar1 != 0) {
                  memcpy((void *)*puVar13,pvVar2,(longlong)iVar1 * 2);
                }
              }
              iVar5 = *(int *)(lVar14 + 0x20);
              pvVar2 = *(void **)(lVar14 + 0x18);
              *(int *)(lVar10 + 0x20) = iVar5;
              if (iVar5 == 0 && *(int *)(lVar10 + 0x24) == 0) {
                *(undefined4 *)(lVar10 + 0x24) = 0;
              }
              else {
                FUN_1446dd670((undefined8 *)(lVar10 + 0x18),iVar5);
                if (iVar5 != 0) {
                  memcpy(*(void **)(lVar10 + 0x18),pvVar2,(longlong)iVar5 * 2);
                }
              }
              iVar5 = *(int *)(lVar14 + 0x30);
              pvVar2 = *(void **)(lVar14 + 0x28);
              *(int *)(lVar10 + 0x30) = iVar5;
              if (iVar5 == 0 && *(int *)(lVar10 + 0x34) == 0) {
                *(undefined4 *)(lVar10 + 0x34) = 0;
              }
              else {
                FUN_1446dd670((undefined8 *)(lVar10 + 0x28),iVar5);
                if (iVar5 != 0) {
                  memcpy(*(void **)(lVar10 + 0x28),pvVar2,(longlong)iVar5 * 2);
                }
              }
            }
            *(undefined4 *)(lVar10 + 0x38) = *(undefined4 *)(lVar14 + 0x38);
            *(undefined4 *)(lVar10 + 0x3c) = *(undefined4 *)(lVar14 + 0x3c);
          }
          else {
            if (*(int *)(lVar14 + 0x20) == iVar5) {
              lVar10 = 0;
              while( true ) {
                uVar7 = *(ushort *)(*(longlong *)(lVar14 + 0x18) + lVar10);
                uVar9 = (ulonglong)uVar7;
                uVar11 = *(ushort *)(param_1[3] + lVar10);
                if (uVar7 != uVar11) break;
                if (uVar7 == 0) goto LAB_14338f08d;
LAB_14338f04a:
                lVar10 = lVar10 + 2;
              }
              if ((uVar11 | uVar7) < 0x80) {
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
                uVar12 = (ulonglong)uVar11;
                uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar12];
                if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar12]) goto LAB_14338f04a;
              }
              if (uVar7 != uVar11) goto LAB_14338f192;
              goto LAB_14338f08d;
            }
            if (*(int *)(lVar14 + 0x20) + iVar5 == 1) goto LAB_14338f08d;
          }
LAB_14338f192:
          lVar14 = lVar14 + 0x50;
        } while (lVar14 != lVar15);
      }
      *(undefined4 *)(local_f0 + 8) = 0;
    }
    FUN_147832492(&local_e8);
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14338f1ba FUN_14338f1ba body=211 status=ok
// SIG undefined FUN_14338f1ba(void)

undefined8 * FUN_14338f1ba(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5ad1f0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  pvVar2 = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x20);
  *(int *)(puVar3 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 4,iVar1,0);
    memcpy((void *)puVar3[4],pvVar2,(longlong)iVar1 * 2);
  }
  return puVar3 + 1;
}



// FUNCTION 14338f294 FUN_14338f294 body=29 status=ok
// SIG undefined FUN_14338f294(void)

void FUN_14338f294(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14338f2b2 FUN_14338f2b2 body=71 status=ok
// SIG undefined FUN_14338f2b2(void)

undefined8 * FUN_14338f2b2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad1f0;
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



// FUNCTION 14338f2fa FUN_14338f2fa body=1159 status=ok
// SIG undefined FUN_14338f2fa(void)

void FUN_14338f2fa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338f325:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad270;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_14783a282;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338f325;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad270;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_14783a282;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338f472;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338f472:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783a1b0;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad250;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14338f782 FUN_14338f782 body=1219 status=ok
// SIG undefined FUN_14338f782(void)

void FUN_14338f782(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined2 *puVar12;
  ushort uVar13;
  int iVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  longlong *local_108;
  longlong *local_100;
  void *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  int local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  plVar3 = (longlong *)*param_1;
  local_58 = (void *)0x0;
  uVar2 = *(uint *)(param_1 + 2);
  _Src = (void *)param_1[1];
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
  if ((longlong)(int)uVar2 == 0) {
    uStack_50 = (ulonglong)uVar2;
LAB_14338f812:
    iVar8 = (int)plVar3[0x79] + -1;
    if ((int)plVar3[0x79] == 0) {
      iVar8 = 0;
    }
    FUN_1402980a2(&local_58,plVar3[0x78],iVar8);
    iVar8 = (int)param_1[4];
    if ((longlong)iVar8 != 0) {
      lVar11 = (longlong)iVar8 * 2;
      lVar9 = 0;
      do {
        if (*(short *)(param_1[3] + lVar9 * 2) == 0x5f) {
          iVar6 = (int)lVar9;
          if (iVar6 != -1) {
            iVar14 = iVar8 + -1;
            if (iVar8 == 0) {
              iVar14 = 0;
            }
            if (iVar6 < iVar14) {
              iVar14 = iVar6;
            }
            if (iVar14 < 1) {
              iVar14 = 0;
            }
            FUN_14006620a(&local_f8,param_1[3],iVar14);
            if (local_58 != (void *)0x0) {
              FUN_1400020a8();
            }
            uStack_50 = CONCAT44(uStack_ec,uStack_f0);
            local_58 = local_f8;
          }
          break;
        }
        lVar9 = lVar9 + 1;
        lVar11 = lVar11 + -2;
      } while (lVar11 != 0);
    }
  }
  else {
    FUN_1446dd670(&local_58,uVar2,0);
    memcpy(local_58,_Src,(longlong)(int)uVar2 * 2);
    if ((int)uStack_50 < 2) goto LAB_14338f812;
  }
  FUN_147832516(plVar3,&local_68,&local_58);
  plVar10 = (longlong *)FUN_14054d1d4();
  puVar12 = local_68;
  if (local_60 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  cVar5 = (**(code **)(*plVar10 + 0x48))(plVar10,puVar12);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_2 + 8) = 2;
    goto LAB_14338f8ef;
  }
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  cVar5 = FUN_143385e82(plVar3,&local_58);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_2 + 8) = 6;
  }
  else {
    (**(code **)(*plVar3 + 0x1f8))(plVar3,&local_108,&local_68);
    uVar7 = 6;
    if (local_108 == (longlong *)0x0) {
LAB_14338fbee:
      *(undefined4 *)(param_2 + 8) = uVar7;
    }
    else {
      if ((longlong)(int)uStack_80 != 0) {
        iVar8 = (int)param_1[4];
        lVar11 = local_88;
LAB_14338fa0a:
        if (*(int *)(lVar11 + 0x10) != iVar8) {
          if (*(int *)(lVar11 + 0x10) + iVar8 == 1) goto LAB_14338fa7e;
          goto LAB_14338fa70;
        }
        if (1 < iVar8) {
          lVar9 = 0;
          do {
            uVar15 = *(ushort *)(*(longlong *)(lVar11 + 8) + lVar9);
            uVar16 = (ulonglong)uVar15;
            uVar13 = *(ushort *)(param_1[3] + lVar9);
            if (uVar15 == uVar13) {
              if (uVar15 == 0) break;
            }
            else {
              if (0x7f < (uVar13 | uVar15)) goto LAB_14338fa5d;
              uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
              uVar17 = (ulonglong)uVar13;
              uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
              if ((&DAT_149e05da0)[uVar16] != (&DAT_149e05da0)[uVar17]) goto LAB_14338fa5d;
            }
            lVar9 = lVar9 + 2;
          } while( true );
        }
        goto LAB_14338fa7e;
      }
LAB_14338f9d6:
      bVar4 = false;
LAB_14338fbac:
      plVar3 = local_100;
      local_108 = (longlong *)0x0;
      if (local_100 != (longlong *)0x0) {
        local_100 = (longlong *)0x0;
        LOCK();
        plVar10 = plVar3 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      uVar7 = 8;
      if (!bVar4) goto LAB_14338fbee;
    }
    plVar3 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_100 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_100)(local_100);
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
  FUN_147832492(&local_f8);
LAB_14338f8ef:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14338fa5d:
  if (uVar15 != uVar13) {
LAB_14338fa70:
    lVar11 = lVar11 + 0x50;
    if (lVar11 == (longlong)(int)uStack_80 * 0x50 + local_88) goto LAB_14338f9d6;
    goto LAB_14338fa0a;
  }
LAB_14338fa7e:
  (**(code **)(*local_108 + 0x1a0))(local_108,*(undefined8 *)(lVar11 + 0x48));
  local_118 = 0;
  uStack_110 = (ulonglong)*(uint *)(lVar11 + 0x40);
  if (*(uint *)(lVar11 + 0x40) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1447403be(&local_118,0);
    iVar8 = (int)uStack_110;
  }
  (**(code **)(*local_108 + 0x170))(local_108,local_118,(longlong)iVar8);
  if (local_c8._3_1_ == '\x01') {
    cVar5 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
    if (cVar5 == '\0') {
      *(undefined4 *)(param_2 + 8) = 1;
      goto LAB_14338fb9b;
    }
    local_128 = 0;
    uStack_120 = 0;
    local_138 = local_c0;
    local_130 = (undefined4)uStack_b8;
    local_148 = local_118;
    local_140 = (int)uStack_110;
    cVar5 = (**(code **)(*plVar3 + 0x1f0))(plVar3);
    if (cVar5 == '\0') {
      *(undefined4 *)(param_2 + 8) = 9;
      if (local_128 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14338fb9b;
    }
    if (local_118 != 0) {
      FUN_1400020a8();
    }
    local_118 = local_128;
    uStack_110 = uStack_120;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if ((longlong *)(param_2 + 0x10) != &local_118) {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_2 + 0x10) = local_118;
    local_118 = 0;
    *(int *)(param_2 + 0x18) = (int)uStack_110;
    *(undefined4 *)(param_2 + 0x1c) = uStack_110._4_4_;
    uStack_110 = 0;
  }
LAB_14338fb9b:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  bVar4 = true;
  goto LAB_14338fbac;
}



// FUNCTION 14338fc46 FUN_14338fc46 body=211 status=ok
// SIG undefined FUN_14338fc46(void)

undefined8 * FUN_14338fc46(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5ad2d0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  pvVar2 = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x20);
  *(int *)(puVar3 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 4,iVar1,0);
    memcpy((void *)puVar3[4],pvVar2,(longlong)iVar1 * 2);
  }
  return puVar3 + 1;
}



// FUNCTION 14338fd20 FUN_14338fd20 body=29 status=ok
// SIG undefined FUN_14338fd20(void)

void FUN_14338fd20(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14338fd3e FUN_14338fd3e body=71 status=ok
// SIG undefined FUN_14338fd3e(void)

undefined8 * FUN_14338fd3e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad2d0;
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



// FUNCTION 14338fd86 FUN_14338fd86 body=1159 status=ok
// SIG undefined FUN_14338fd86(void)

void FUN_14338fd86(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_14338fdb1:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad350;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_14783acf0;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_14338fdb1;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad350;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_14783acf0;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14338fefe;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14338fefe:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783ac1e;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad330;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14339020e FUN_14339020e body=1485 status=ok
// SIG undefined FUN_14339020e(void)

void FUN_14339020e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  bool bVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ushort uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_1a8 [40];
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_148;
  ulonglong uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong *local_120;
  longlong *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  longlong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined2 *local_80;
  int local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar2 = (longlong *)*param_1;
  local_70 = (void *)0x0;
  local_68 = (int)param_1[2];
  lVar15 = (longlong)local_68;
  pvVar3 = (void *)param_1[1];
  if (lVar15 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,pvVar3,lVar15 * 2);
    if (1 < local_68) goto LAB_1433902c7;
  }
  iVar7 = (int)plVar2[0x79] + -1;
  if ((int)plVar2[0x79] == 0) {
    iVar7 = 0;
  }
  FUN_1402980a2(&local_70,plVar2[0x78],iVar7);
LAB_1433902c7:
  FUN_147832516(plVar2,&local_80,&local_70);
  plVar8 = (longlong *)FUN_14054d1d4();
  puVar9 = local_80;
  if (local_78 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  cVar5 = (**(code **)(*plVar8 + 0x48))(plVar8,puVar9);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_2 + 8) = 2;
  }
  else {
    local_110 = 0;
    local_108 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0xffffffff;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    cVar5 = FUN_143385e82(plVar2,&local_70);
    if (cVar5 == '\0') {
      *(undefined4 *)(param_2 + 8) = 6;
    }
    else {
      (**(code **)(*plVar2 + 0x1f8))(plVar2,&local_120,&local_80);
      if (local_120 == (longlong *)0x0) {
        *(undefined4 *)(param_2 + 8) = 6;
      }
      else {
        if ((longlong)(int)uStack_98 == 0) {
LAB_143390417:
          *(undefined4 *)(param_2 + 8) = 8;
        }
        else {
          lVar15 = (longlong)(int)uStack_98 * 0x50 + local_a0;
          local_170 = param_2 + 0x10;
          local_178 = param_2 + 0x20;
          bVar6 = false;
          lVar16 = local_a0;
          local_180 = lVar15;
          do {
            iVar7 = (int)param_1[4];
LAB_1433904ce:
            if (*(int *)(lVar16 + 0x20) == iVar7) {
              if (1 < iVar7) {
                lVar12 = 0;
                do {
                  uVar10 = *(ushort *)(*(longlong *)(lVar16 + 0x18) + lVar12);
                  uVar11 = (ulonglong)uVar10;
                  uVar13 = *(ushort *)(param_1[3] + lVar12);
                  if (uVar10 == uVar13) {
                    if (uVar10 == 0) break;
                  }
                  else {
                    if (0x7f < (uVar13 | uVar10)) goto LAB_143390525;
                    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                    uVar14 = (ulonglong)uVar13;
                    uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
                    if ((&DAT_149e05da0)[uVar11] != (&DAT_149e05da0)[uVar14]) goto LAB_143390525;
                  }
                  lVar12 = lVar12 + 2;
                } while( true );
              }
            }
            else if (*(int *)(lVar16 + 0x20) + iVar7 != 1) goto LAB_143390536;
LAB_143390544:
            (**(code **)(*local_120 + 0x1a0))(local_120,*(undefined8 *)(lVar16 + 0x48));
            *(undefined4 *)(param_2 + 8) = 0;
            lVar15 = FUN_147831326(local_170);
            if (lVar15 != lVar16) {
              iVar7 = *(int *)(lVar16 + 0x10);
              pvVar3 = *(void **)(lVar16 + 8);
              *(int *)(lVar15 + 0x10) = iVar7;
              if (iVar7 == 0 && *(int *)(lVar15 + 0x14) == 0) {
                *(undefined4 *)(lVar15 + 0x14) = 0;
              }
              else {
                FUN_1446dd670((undefined8 *)(lVar15 + 8),iVar7);
                if (iVar7 != 0) {
                  memcpy(*(void **)(lVar15 + 8),pvVar3,(longlong)iVar7 * 2);
                }
              }
              iVar7 = *(int *)(lVar16 + 0x20);
              pvVar3 = *(void **)(lVar16 + 0x18);
              *(int *)(lVar15 + 0x20) = iVar7;
              if (iVar7 == 0 && *(int *)(lVar15 + 0x24) == 0) {
                *(undefined4 *)(lVar15 + 0x24) = 0;
              }
              else {
                FUN_1446dd670((undefined8 *)(lVar15 + 0x18),iVar7);
                if (iVar7 != 0) {
                  memcpy(*(void **)(lVar15 + 0x18),pvVar3,(longlong)iVar7 * 2);
                }
              }
              iVar7 = *(int *)(lVar16 + 0x30);
              pvVar3 = *(void **)(lVar16 + 0x28);
              *(int *)(lVar15 + 0x30) = iVar7;
              if (iVar7 == 0 && *(int *)(lVar15 + 0x34) == 0) {
                *(undefined4 *)(lVar15 + 0x34) = 0;
              }
              else {
                FUN_1446dd670((undefined8 *)(lVar15 + 0x28),iVar7);
                if (iVar7 != 0) {
                  memcpy(*(void **)(lVar15 + 0x28),pvVar3,(longlong)iVar7 * 2);
                }
              }
            }
            *(undefined4 *)(lVar15 + 0x38) = *(undefined4 *)(lVar16 + 0x38);
            *(undefined4 *)(lVar15 + 0x3c) = *(undefined4 *)(lVar16 + 0x3c);
            local_138 = 0;
            uStack_130 = (ulonglong)*(uint *)(lVar16 + 0x40);
            if (*(uint *)(lVar16 + 0x40) == 0) {
              iVar7 = 0;
            }
            else {
              FUN_1447403be(&local_138,0);
              iVar7 = (int)uStack_130;
            }
            lVar15 = local_180;
            (**(code **)(*local_120 + 0x170))(local_120,local_138,(longlong)iVar7);
            if (local_e0._3_1_ == '\x01') {
              cVar5 = (**(code **)(*plVar2 + 0x1d8))(plVar2);
              if (cVar5 == '\0') {
                *(undefined4 *)(param_2 + 8) = 1;
              }
              else {
                local_148 = 0;
                uStack_140 = 0;
                local_158 = local_d8;
                local_150 = (undefined4)uStack_d0;
                local_168 = local_138;
                local_160 = (int)uStack_130;
                cVar5 = (**(code **)(*plVar2 + 0x1f0))(plVar2,&local_168,&local_148,&local_158);
                if (cVar5 != '\0') {
                  if (local_138 != 0) {
                    FUN_1400020a8();
                  }
                  local_138 = local_148;
                  uStack_130 = uStack_140;
                  goto LAB_143390723;
                }
                *(undefined4 *)(param_2 + 8) = 9;
                if (local_148 != 0) {
                  FUN_1400020a8();
                }
              }
              bVar4 = true;
            }
            else {
LAB_143390723:
              lVar12 = FUN_14783b082(local_178);
              *(undefined4 *)(lVar12 + 8) = 0;
              if ((longlong *)(lVar12 + 0x10) == &local_138) {
                bVar4 = false;
              }
              else {
                if (*(longlong *)(lVar12 + 0x10) != 0) {
                  FUN_1400020a8();
                }
                *(longlong *)(lVar12 + 0x10) = local_138;
                bVar4 = false;
                local_138 = 0;
                *(int *)(lVar12 + 0x18) = (int)uStack_130;
                *(undefined4 *)(lVar12 + 0x1c) = uStack_130._4_4_;
                uStack_130 = 0;
              }
            }
            if (local_138 != 0) {
              FUN_1400020a8();
            }
            lVar16 = lVar16 + 0x50;
            bVar6 = true;
          } while (!bVar4 && lVar16 != lVar15);
        }
LAB_14339041e:
        plVar2 = local_118;
        local_120 = (longlong *)0x0;
        if (local_118 != (longlong *)0x0) {
          local_118 = (longlong *)0x0;
          LOCK();
          plVar8 = plVar2 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      plVar2 = local_118;
      if (local_118 != (longlong *)0x0) {
        LOCK();
        plVar8 = local_118 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_118)(local_118);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
    FUN_147832492(&local_110);
  }
  if (local_80 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143390525:
  if (uVar10 == uVar13) goto LAB_143390544;
LAB_143390536:
  lVar16 = lVar16 + 0x50;
  if (lVar16 == lVar15) {
    if (bVar6) goto LAB_14339041e;
    goto LAB_143390417;
  }
  goto LAB_1433904ce;
}



// FUNCTION 1433907dc FUN_1433907dc body=211 status=ok
// SIG undefined FUN_1433907dc(void)

undefined8 * FUN_1433907dc(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5ad3b0;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  pvVar2 = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x20);
  *(int *)(puVar3 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 4,iVar1,0);
    memcpy((void *)puVar3[4],pvVar2,(longlong)iVar1 * 2);
  }
  return puVar3 + 1;
}



// FUNCTION 1433908b6 FUN_1433908b6 body=29 status=ok
// SIG undefined FUN_1433908b6(void)

void FUN_1433908b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433908d4 FUN_1433908d4 body=71 status=ok
// SIG undefined FUN_1433908d4(void)

undefined8 * FUN_1433908d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad3b0;
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



// FUNCTION 14339091c FUN_14339091c body=1159 status=ok
// SIG undefined FUN_14339091c(void)

void FUN_14339091c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_143390947:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad430;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_14783b84e;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_143390947;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad430;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_14783b84e;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_143390a94;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_143390a94:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783b77c;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad410;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 143390da4 FUN_143390da4 body=232 status=ok
// SIG undefined FUN_143390da4(void)

void FUN_143390da4(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_147832516(*param_1,&local_40,param_1 + 1);
  plVar4 = (longlong *)FUN_14054d1d4();
  puVar5 = local_40;
  if (local_38 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  cVar3 = (**(code **)(*plVar4 + 0x48))(plVar4,puVar5);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(param_2 + 8) = 2;
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0;
    puVar1 = (undefined8 *)(param_2 + 0x10);
    if (puVar1 != param_1 + 1) {
      iVar2 = *(int *)(param_1 + 2);
      _Src = (void *)param_1[1];
      *(int *)(param_2 + 0x18) = iVar2;
      if (iVar2 == 0 && *(int *)(param_2 + 0x1c) == 0) {
        *(undefined4 *)(param_2 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
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



// FUNCTION 143390e8e FUN_143390e8e body=115 status=ok
// SIG undefined FUN_143390e8e(void)

longlong FUN_143390e8e(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad490;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1 * 2);
  }
  return param_2 + 0x18;
}



// FUNCTION 143390f08 FUN_143390f08 body=12 status=ok
// SIG undefined FUN_143390f08(void)

void FUN_143390f08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143390f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143390f14 FUN_143390f14 body=57 status=ok
// SIG undefined FUN_143390f14(void)

undefined8 * FUN_143390f14(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad490;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143390f4e FUN_143390f4e body=1159 status=ok
// SIG undefined FUN_143390f4e(void)

void FUN_143390f4e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_143390f79:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad510;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_14783c284;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_143390f79;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad510;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_14783c284;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_1433910c6;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_1433910c6:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783c1b2;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad4f0;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 1433913d6 FUN_1433913d6 body=800 status=ok
// SIG undefined FUN_1433913d6(void)

void FUN_1433913d6(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  void *_Src;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  int *piVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined1 auStack_128 [32];
  longlong *local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  void *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  int local_68 [2];
  longlong local_60;
  int *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar4 = (longlong *)*param_1;
  FUN_147832516(plVar4,&local_40,param_1 + 1);
  plVar6 = (longlong *)FUN_14054d1d4();
  puVar9 = local_40;
  if (local_38 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  cVar5 = (**(code **)(*plVar6 + 0x48))(plVar6,puVar9);
  if (cVar5 == '\0') {
    *(undefined4 *)(param_2 + 8) = 2;
    goto LAB_143391447;
  }
  FUN_147831d16(local_68);
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = (void *)0x0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  (**(code **)(*plVar4 + 0x1f8))(plVar4,&local_108,&local_40);
  if ((local_108 == (longlong *)0x0) || (lVar7 = (**(code **)(*local_108 + 0x30))(), lVar7 < 1)) {
LAB_143391699:
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_100 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar10 = (int *)((longlong)local_100 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
  }
  else {
    piVar10 = local_68;
    cVar5 = FUN_143385f32(plVar4,local_108,&local_f8,piVar10);
    plVar6 = local_100;
    if (cVar5 == '\0') goto LAB_143391699;
    if ((longlong)local_48 != 0) {
      lVar7 = (longlong)local_48 * 0x28;
      piVar8 = local_50;
      do {
        if ((((*piVar8 == -0x6a5b0fc2) && (piVar8[1] == 0x7e0b49e4)) && (piVar8[2] == -0x45bc2caa))
           && (piVar8[3] == -0x6b007827)) {
          piVar10 = local_68;
          if (piVar8 != (int *)0x0) {
            piVar10 = piVar8 + 4;
          }
          break;
        }
        piVar8 = piVar8 + 10;
        lVar7 = lVar7 + -0x28;
      } while (lVar7 != 0);
    }
    iVar2 = *piVar10;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_100 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar10 = (int *)((longlong)plVar6 + 0xc);
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (*piVar10 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (0 < iVar2) {
      if (&local_e8 != (void **)(param_1 + 3)) {
        uVar3 = *(uint *)(param_1 + 4);
        _Src = (void *)param_1[3];
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar3);
        if (uVar3 == 0 && uStack_e0._4_4_ == 0) {
          uStack_e0 = (ulonglong)uVar3;
        }
        else {
          FUN_1446dd670(&local_e8,uVar3);
          if (uVar3 != 0) {
            memcpy(local_e8,_Src,(longlong)(int)uVar3 * 2);
          }
        }
      }
      (**(code **)(*plVar4 + 0x200))(plVar4,&local_108,&local_40);
      if (((local_108 == (longlong *)0x0) || (lVar7 = (**(code **)(*local_108 + 0x30))(), lVar7 < 1)
          ) || (cVar5 = FUN_1433872a2(plVar4,local_108,&local_f8,local_68), cVar5 == '\0'))
      goto LAB_143391699;
      if (local_100 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_100 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_100)(local_100);
          LOCK();
          piVar10 = (int *)((longlong)local_100 + 0xc);
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            (**(code **)(*local_100 + 0x10))(local_100);
          }
        }
      }
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  FUN_147832492(&local_f8);
  if (local_50 != (int *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
LAB_143391447:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1433916f8 FUN_1433916f8 body=211 status=ok
// SIG undefined FUN_1433916f8(void)

undefined8 * FUN_1433916f8(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5ad570;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  pvVar2 = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x20);
  *(int *)(puVar3 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 4,iVar1,0);
    memcpy((void *)puVar3[4],pvVar2,(longlong)iVar1 * 2);
  }
  return puVar3 + 1;
}



// FUNCTION 1433917d2 FUN_1433917d2 body=29 status=ok
// SIG undefined FUN_1433917d2(void)

void FUN_1433917d2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1433917f0 FUN_1433917f0 body=71 status=ok
// SIG undefined FUN_1433917f0(void)

undefined8 * FUN_1433917f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad570;
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



// FUNCTION 143391838 FUN_143391838 body=505 status=ok
// SIG undefined FUN_143391838(void)

void FUN_143391838(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined2 *puVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  ushort uVar10;
  ulonglong uVar11;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined2 *local_70;
  int local_68;
  longlong local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *param_1;
  FUN_147832516(uVar1,&local_40,param_1 + 1);
  plVar3 = (longlong *)FUN_14054d1d4();
  puVar4 = local_40;
  if (local_38 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  cVar2 = (**(code **)(*plVar3 + 0x48))(plVar3,puVar4);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_2 + 8) = 2;
    goto LAB_1433918a0;
  }
  FUN_147832516(uVar1,&local_50,param_1 + 3);
  FUN_140c50e9c(&local_60,&local_50,1);
  FUN_140056680(&local_70,L".replay");
  iVar7 = local_68 + -1;
  puVar4 = local_70;
  if (local_68 == 0) {
    puVar4 = &DAT_149dfb77a;
    iVar7 = 0;
  }
  FUN_140b127b8(&local_60,puVar4,iVar7,1);
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  iVar7 = *(int *)(param_1 + 4);
  if (iVar7 == local_58) {
    if (1 < iVar7) {
      lVar5 = 0;
      while( true ) {
        uVar8 = *(ushort *)(param_1[3] + lVar5);
        uVar9 = (ulonglong)uVar8;
        uVar10 = *(ushort *)(local_60 + lVar5);
        if (uVar8 != uVar10) break;
        if (uVar8 == 0) goto LAB_1433919be;
LAB_143391989:
        lVar5 = lVar5 + 2;
      }
      if ((uVar10 | uVar8) < 0x80) {
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar11]) goto LAB_143391989;
      }
      if (uVar8 != uVar10) goto LAB_143391a0b;
    }
LAB_1433919be:
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar4 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar4 = local_40;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar6 = local_50;
    }
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    cVar2 = (**(code **)(*plVar3 + 0x40))(plVar3,puVar6,puVar4,0);
    if (cVar2 != '\0') {
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  else if (local_58 + iVar7 == 1) goto LAB_1433919be;
LAB_143391a0b:
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1433918a0:
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143391a32 FUN_143391a32 body=211 status=ok
// SIG undefined FUN_143391a32(void)

undefined8 * FUN_143391a32(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar3;
  *puVar3 = &PTR_FUN_14a5ad590;
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  pvVar2 = *(void **)(param_1 + 0x10);
  *(int *)(puVar3 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 2,iVar1,0);
    memcpy((void *)puVar3[2],pvVar2,(longlong)iVar1 * 2);
  }
  puVar3[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  pvVar2 = *(void **)(param_1 + 0x20);
  *(int *)(puVar3 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 4,iVar1,0);
    memcpy((void *)puVar3[4],pvVar2,(longlong)iVar1 * 2);
  }
  return puVar3 + 1;
}



// FUNCTION 143391b0c FUN_143391b0c body=29 status=ok
// SIG undefined FUN_143391b0c(void)

void FUN_143391b0c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143391b2a FUN_143391b2a body=71 status=ok
// SIG undefined FUN_143391b2a(void)

undefined8 * FUN_143391b2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad590;
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



// FUNCTION 143391b72 FUN_143391b72 body=1522 status=ok
// SIG undefined FUN_143391b72(void)

void FUN_143391b72(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined1 auStack_e8 [40];
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  longlong lStack_80;
  int local_6c;
  longlong local_68;
  longlong lStack_60;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar3 = (longlong *)*param_1;
  FUN_147832516(plVar3,&local_68,plVar3 + 0x78);
  (**(code **)(*plVar3 + 0x200))(plVar3,&local_50,&local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_50;
  if (local_50 == (longlong *)0x0) {
    *param_2 = 10;
    goto LAB_143391de1;
  }
  uVar8 = (**(code **)(*local_50 + 0x30))(local_50);
  (**(code **)(*plVar2 + 0x1a0))(plVar2,uVar8);
  local_6c = (int)param_1[4];
  local_68 = 0;
  lStack_60 = 0;
  cVar6 = (**(code **)(*plVar3 + 0x1c0))(plVar3);
  if (cVar6 == '\0') {
    if (&local_68 != param_1 + 3) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_68 = param_1[3];
      param_1[3] = 0;
      lStack_60 = param_1[4];
      param_1[4] = 0;
    }
LAB_143391ca2:
    local_88 = 0;
    lStack_80 = 0;
    cVar6 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
    if (cVar6 == '\0') {
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      local_88 = local_68;
      local_68 = 0;
      iVar7 = (int)lStack_60;
      lStack_80 = lStack_60;
      lStack_60 = 0;
LAB_143391d50:
      if (0 < iVar7) {
        uVar8 = (**(code **)(*local_50 + 0x28))();
        local_ac = 1;
        puVar4 = (ulonglong *)local_50[1];
        puVar12 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar12) {
          if ((*(byte *)((longlong)local_50 + 0x2a) & 2) == 0) {
            (**(code **)(*local_50 + 0x170))(local_50,&local_ac,4);
          }
          else {
            FUN_14572512c(local_50,&local_ac);
          }
        }
        else {
          local_ac = *(undefined4 *)*puVar4;
          *puVar4 = (ulonglong)puVar12;
        }
        uVar9 = (**(code **)(*local_50 + 0x28))();
        local_b0 = 0;
        puVar4 = (ulonglong *)local_50[1];
        puVar12 = (undefined4 *)*puVar4 + 1;
        if ((undefined4 *)puVar4[1] < puVar12) {
          if ((*(byte *)((longlong)local_50 + 0x2a) & 2) == 0) {
            (**(code **)(*local_50 + 0x170))(local_50,&local_b0,4);
          }
          else {
            FUN_14572512c(local_50,&local_b0);
          }
        }
        else {
          local_b0 = *(undefined4 *)*puVar4;
          *puVar4 = (ulonglong)puVar12;
        }
        uVar10 = (**(code **)(*local_50 + 0x28))();
        local_b4 = (int)param_1[1];
        puVar4 = (ulonglong *)local_50[1];
        piVar13 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar13) {
          if ((*(byte *)((longlong)local_50 + 0x2a) & 2) == 0) {
            (**(code **)(*local_50 + 0x170))(local_50,&local_b4,4);
          }
          else {
            FUN_14572512c(local_50,&local_b4);
          }
        }
        else {
          local_b4 = *(int *)*puVar4;
          *puVar4 = (ulonglong)piVar13;
        }
        local_b8 = *(int *)((longlong)param_1 + 0xc);
        puVar4 = (ulonglong *)local_50[1];
        piVar13 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar13) {
          if ((*(byte *)((longlong)local_50 + 0x2a) & 2) == 0) {
            (**(code **)(*local_50 + 0x170))(local_50,&local_b8,4);
          }
          else {
            FUN_14572512c(local_50,&local_b8);
          }
        }
        else {
          local_b8 = *(int *)*puVar4;
          *puVar4 = (ulonglong)piVar13;
        }
        local_bc = (int)lStack_80;
        puVar4 = (ulonglong *)local_50[1];
        piVar13 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar13) {
          if ((*(byte *)((longlong)local_50 + 0x2a) & 2) == 0) {
            (**(code **)(*local_50 + 0x170))(local_50,&local_bc,4);
          }
          else {
            FUN_14572512c(local_50,&local_bc);
          }
        }
        else {
          local_bc = *(int *)*puVar4;
          *puVar4 = (ulonglong)piVar13;
        }
        puVar4 = (ulonglong *)local_50[1];
        piVar13 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar13) {
          if ((*(byte *)((longlong)local_50 + 0x2a) & 2) == 0) {
            (**(code **)(*local_50 + 0x170))(local_50,&local_6c,4);
          }
          else {
            FUN_14572512c(local_50,&local_6c);
          }
        }
        else {
          local_6c = *(int *)*puVar4;
          *puVar4 = (ulonglong)piVar13;
        }
        uVar11 = (**(code **)(*local_50 + 0x28))();
        (**(code **)(*local_50 + 0x170))(local_50,local_88,(longlong)(int)lStack_80);
        local_c0 = (**(code **)(*local_50 + 0x28))();
        local_c0 = local_c0 - (int)uVar10;
        (**(code **)(*local_50 + 0x1a0))(local_50,uVar9);
        puVar4 = (ulonglong *)local_50[1];
        piVar13 = (int *)*puVar4 + 1;
        if ((int *)puVar4[1] < piVar13) {
          if ((*(byte *)((longlong)local_50 + 0x2a) & 2) == 0) {
            (**(code **)(*local_50 + 0x170))(local_50,&local_c0,4);
          }
          else {
            FUN_14572512c(local_50,&local_c0);
          }
        }
        else {
          local_c0 = *(int *)*puVar4;
          *puVar4 = (ulonglong)piVar13;
        }
        puVar12 = (undefined4 *)FUN_147838f46(plVar3 + 0x91);
        *puVar12 = local_ac;
        *(undefined8 *)(puVar12 + 2) = uVar8;
        *(undefined8 *)(puVar12 + 4) = uVar10;
        puVar12[1] = local_c0;
        piVar13 = (int *)FUN_14783c616(plVar3 + 0x97);
        *piVar13 = (int)plVar3[0x92] + -1;
        piVar13[1] = local_b4;
        piVar13[2] = local_b8;
        piVar13[3] = local_bc;
        piVar13[4] = local_6c;
        *(undefined8 *)(piVar13 + 6) = uVar11;
        lVar5 = plVar3[0x8c];
        *(longlong *)(piVar13 + 8) = lVar5;
        plVar3[0x8c] = lVar5 + local_6c;
      }
      plVar2 = local_48;
      local_50 = (longlong *)0x0;
      if (local_48 != (longlong *)0x0) {
        local_48 = (longlong *)0x0;
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar13 = (int *)((longlong)plVar2 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      *(int *)(plVar3 + 0x87) = (int)param_1[2];
      FUN_1433871f2(plVar3,plVar3 + 0x78,plVar3 + 0x87);
    }
    else {
      local_98 = plVar3[0x8e];
      local_90 = (undefined4)plVar3[0x8f];
      local_a8 = local_68;
      local_a0 = (int)lStack_60;
      cVar6 = (**(code **)(*plVar3 + 0x1e8))(plVar3,&local_a8,&local_88);
      if (cVar6 != '\0') {
        iVar7 = (int)lStack_80;
        goto LAB_143391d50;
      }
      *param_2 = 7;
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    cVar6 = (**(code **)(*plVar3 + 0x1d0))(plVar3,param_1 + 3,&local_68);
    if (cVar6 != '\0') goto LAB_143391ca2;
    *param_2 = 8;
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_143391de1:
  plVar3 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_48 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar13 = (int *)((longlong)plVar3 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143392166 FUN_143392166 body=143 status=ok
// SIG undefined FUN_143392166(void)

undefined8 * FUN_143392166(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x30,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14a5ad5b0;
  *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
  *(undefined4 *)(puVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[4] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  _Src = *(void **)(param_1 + 0x20);
  *(int *)(puVar5 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x2c) = 0;
  }
  else {
    FUN_1447a127e(puVar5 + 4,iVar1,0);
    memcpy((void *)puVar5[4],_Src,(longlong)iVar1);
  }
  return puVar5 + 1;
}



// FUNCTION 1433921fc FUN_1433921fc body=29 status=ok
// SIG undefined FUN_1433921fc(void)

void FUN_1433921fc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14339221a FUN_14339221a body=57 status=ok
// SIG undefined FUN_14339221a(void)

undefined8 * FUN_14339221a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad5b0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143392254 FUN_143392254 body=146 status=ok
// SIG undefined FUN_143392254(void)

void FUN_143392254(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_147838fc6(local_48);
  (**(code **)(*plVar1 + 0x178))(plVar1,local_48);
  FUN_147832b28(plVar1);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339231a FUN_14339231a body=12 status=ok
// SIG undefined FUN_14339231a(void)

void FUN_14339231a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143392323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143392326 FUN_143392326 body=29 status=ok
// SIG undefined FUN_143392326(void)

undefined8 FUN_143392326(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143392344 FUN_143392344 body=1874 status=ok
// SIG undefined FUN_143392344(void)

void FUN_143392344(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  int *piVar13;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar3 = (longlong *)*param_1;
  lVar5 = plVar3[0x94];
  lVar6 = plVar3[0x98];
  FUN_147832516(plVar3,&local_68,plVar3 + 0x78);
  (**(code **)(*plVar3 + 0x200))(plVar3,&local_58,&local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  plVar2 = local_58;
  if (local_58 == (longlong *)0x0) {
    *param_2 = 10;
    goto LAB_1433925fa;
  }
  uVar9 = (**(code **)(*local_58 + 0x30))(local_58);
  (**(code **)(*plVar2 + 0x1a0))(plVar2,uVar9);
  local_68 = 0;
  lStack_60 = 0;
  cVar7 = (**(code **)(*plVar3 + 0x1c0))(plVar3);
  if (cVar7 == '\0') {
    if (&local_68 != param_1 + 2) {
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      local_68 = param_1[2];
      param_1[2] = 0;
      lStack_60 = param_1[3];
      param_1[3] = 0;
    }
LAB_143392479:
    local_78 = 0;
    lStack_70 = 0;
    cVar7 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
    if (cVar7 == '\0') {
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      local_78 = local_68;
      local_68 = 0;
      iVar8 = (int)lStack_60;
      lStack_70 = lStack_60;
      lStack_60 = 0;
    }
    else {
      local_88 = plVar3[0x8e];
      local_80 = (undefined4)plVar3[0x8f];
      local_98 = local_68;
      local_90 = (int)lStack_60;
      cVar7 = (**(code **)(*plVar3 + 0x1e8))(plVar3,&local_98,&local_78);
      if (cVar7 == '\0') {
        *param_2 = 7;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1433925e8;
      }
      iVar8 = (int)lStack_70;
    }
    if (0 < iVar8) {
      local_e8 = (**(code **)(*local_58 + 0x28))();
      local_9c = 2;
      puVar4 = (ulonglong *)local_58[1];
      puVar12 = (undefined4 *)*puVar4 + 1;
      if ((undefined4 *)puVar4[1] < puVar12) {
        if ((*(byte *)((longlong)local_58 + 0x2a) & 2) == 0) {
          (**(code **)(*local_58 + 0x170))(local_58,&local_9c,4);
        }
        else {
          FUN_14572512c(local_58,&local_9c);
        }
      }
      else {
        local_9c = *(undefined4 *)*puVar4;
        *puVar4 = (ulonglong)puVar12;
      }
      uVar9 = (**(code **)(*local_58 + 0x28))();
      local_a0 = 0;
      puVar4 = (ulonglong *)local_58[1];
      puVar12 = (undefined4 *)*puVar4 + 1;
      if ((undefined4 *)puVar4[1] < puVar12) {
        if ((*(byte *)((longlong)local_58 + 0x2a) & 2) == 0) {
          (**(code **)(*local_58 + 0x170))(local_58,&local_a0,4);
        }
        else {
          FUN_14572512c(local_58,&local_a0);
        }
      }
      else {
        local_a0 = *(undefined4 *)*puVar4;
        *puVar4 = (ulonglong)puVar12;
      }
      uVar10 = (**(code **)(*local_58 + 0x28))();
      FUN_140002266(&local_b0,L"checkpoint%ld",(int)lVar5);
      FUN_14021219d(local_58,&local_b0);
      FUN_140056680(&local_c0,L"checkpoint");
      FUN_14021219d(local_58,&local_c0);
      FUN_140002266(&local_d0,&DAT_14a5ad62c,(int)lVar6);
      FUN_14021219d(local_58,&local_d0);
      local_d4 = (int)param_1[1];
      puVar4 = (ulonglong *)local_58[1];
      piVar13 = (int *)*puVar4 + 1;
      if ((int *)puVar4[1] < piVar13) {
        if ((*(byte *)((longlong)local_58 + 0x2a) & 2) == 0) {
          (**(code **)(*local_58 + 0x170))(local_58,&local_d4,4);
        }
        else {
          FUN_14572512c(local_58,&local_d4);
        }
      }
      else {
        local_d4 = *(int *)*puVar4;
        *puVar4 = (ulonglong)piVar13;
      }
      local_d8 = (int)param_1[1];
      puVar4 = (ulonglong *)local_58[1];
      piVar13 = (int *)*puVar4 + 1;
      if ((int *)puVar4[1] < piVar13) {
        if ((*(byte *)((longlong)local_58 + 0x2a) & 2) == 0) {
          (**(code **)(*local_58 + 0x170))(local_58,&local_d8,4);
        }
        else {
          FUN_14572512c(local_58,&local_d8);
        }
      }
      else {
        local_d8 = *(int *)*puVar4;
        *puVar4 = (ulonglong)piVar13;
      }
      local_dc = (int)lStack_70;
      puVar4 = (ulonglong *)local_58[1];
      piVar13 = (int *)*puVar4 + 1;
      if ((int *)puVar4[1] < piVar13) {
        if ((*(byte *)((longlong)local_58 + 0x2a) & 2) == 0) {
          (**(code **)(*local_58 + 0x170))(local_58,&local_dc,4);
        }
        else {
          FUN_14572512c(local_58,&local_dc);
        }
      }
      else {
        local_dc = *(int *)*puVar4;
        *puVar4 = (ulonglong)piVar13;
      }
      uVar11 = (**(code **)(*local_58 + 0x28))();
      (**(code **)(*local_58 + 0x170))(local_58,local_78,(longlong)(int)lStack_70);
      local_e0 = (**(code **)(*local_58 + 0x28))();
      local_e0 = local_e0 - (int)uVar10;
      (**(code **)(*local_58 + 0x1a0))(local_58,uVar9);
      puVar4 = (ulonglong *)local_58[1];
      piVar13 = (int *)*puVar4 + 1;
      if ((int *)puVar4[1] < piVar13) {
        if ((*(byte *)((longlong)local_58 + 0x2a) & 2) == 0) {
          (**(code **)(*local_58 + 0x170))(local_58,&local_e0,4);
        }
        else {
          FUN_14572512c(local_58,&local_e0);
        }
      }
      else {
        local_e0 = *(int *)*puVar4;
        *puVar4 = (ulonglong)piVar13;
      }
      puVar12 = (undefined4 *)FUN_147838f46(plVar3 + 0x91);
      *puVar12 = local_9c;
      *(undefined8 *)(puVar12 + 2) = local_e8;
      *(undefined8 *)(puVar12 + 4) = uVar10;
      puVar12[1] = local_e0;
      piVar13 = (int *)FUN_147838f86(plVar3 + 0x93);
      *piVar13 = (int)plVar3[0x92] + -1;
      if ((longlong *)(piVar13 + 2) != &local_b0) {
        if (*(longlong *)(piVar13 + 2) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(piVar13 + 2) = local_b0;
        local_b0 = 0;
        piVar13[4] = (int)local_a8;
        piVar13[5] = local_a8._4_4_;
        local_a8 = 0;
      }
      if ((longlong *)(piVar13 + 6) != &local_c0) {
        if (*(longlong *)(piVar13 + 6) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(piVar13 + 6) = local_c0;
        local_c0 = 0;
        piVar13[8] = (int)local_b8;
        piVar13[9] = local_b8._4_4_;
        local_b8 = 0;
      }
      if ((longlong *)(piVar13 + 10) != &local_d0) {
        if (*(longlong *)(piVar13 + 10) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(piVar13 + 10) = local_d0;
        local_d0 = 0;
        piVar13[0xc] = (int)local_c8;
        piVar13[0xd] = local_c8._4_4_;
        local_c8 = 0;
      }
      piVar13[0xe] = local_d4;
      piVar13[0xf] = local_d8;
      piVar13[0x10] = local_dc;
      *(undefined8 *)(piVar13 + 0x12) = uVar11;
      if (local_d0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0 != 0) {
        FUN_1400020a8();
      }
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
    }
    plVar2 = local_50;
    local_58 = (longlong *)0x0;
    if (local_50 != (longlong *)0x0) {
      local_50 = (longlong *)0x0;
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar13 = (int *)((longlong)plVar2 + 0xc);
        *piVar13 = *piVar13 + -1;
        UNLOCK();
        if (*piVar13 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(plVar3 + 0x87) = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1433871f2(plVar3,plVar3 + 0x78,plVar3 + 0x87);
  }
  else {
    cVar7 = (**(code **)(*plVar3 + 0x1d0))(plVar3,param_1 + 2,&local_68);
    if (cVar7 != '\0') goto LAB_143392479;
    *param_2 = 8;
LAB_1433925e8:
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1433925fa:
  plVar3 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_50 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar13 = (int *)((longlong)plVar3 + 0xc);
      *piVar13 = *piVar13 + -1;
      UNLOCK();
      if (*piVar13 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143392a98 FUN_143392a98 body=136 status=ok
// SIG undefined FUN_143392a98(void)

undefined8 * FUN_143392a98(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar5;
  *puVar5 = &PTR_FUN_14a5ad5f0;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)puVar5 + 0xc) = uVar2;
  *(undefined4 *)(puVar5 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar5 + 0x14) = uVar4;
  puVar5[3] = 0;
  iVar1 = *(int *)(param_1 + 0x20);
  _Src = *(void **)(param_1 + 0x18);
  *(int *)(puVar5 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x24) = 0;
  }
  else {
    FUN_1447a127e(puVar5 + 3,iVar1,0);
    memcpy((void *)puVar5[3],_Src,(longlong)iVar1);
  }
  return puVar5 + 1;
}



// FUNCTION 143392b26 FUN_143392b26 body=29 status=ok
// SIG undefined FUN_143392b26(void)

void FUN_143392b26(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143392b44 FUN_143392b44 body=57 status=ok
// SIG undefined FUN_143392b44(void)

undefined8 * FUN_143392b44(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad5f0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143392b7e FUN_143392b7e body=146 status=ok
// SIG undefined FUN_143392b7e(void)

void FUN_143392b7e(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_147838fc6(local_48);
  (**(code **)(*plVar1 + 0x178))(plVar1,local_48);
  FUN_147832b28(plVar1);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143392c44 FUN_143392c44 body=12 status=ok
// SIG undefined FUN_143392c44(void)

void FUN_143392c44(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143392c4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143392c50 FUN_143392c50 body=29 status=ok
// SIG undefined FUN_143392c50(void)

undefined8 FUN_143392c50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143392c70 FUN_143392c70 body=347 status=ok
// SIG undefined FUN_143392c70(void)

void FUN_143392c70(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 auStack_58 [32];
  undefined **local_38;
  undefined4 local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)*param_1;
  if (*(int *)((longlong)plVar1 + 0x3a4) < 0) {
    *(undefined4 *)(plVar1 + 0x74) = 0;
    FUN_144893a1c(plVar1 + 0x73,0);
  }
  else {
    *(undefined4 *)(plVar1 + 0x74) = 0;
  }
  *(undefined4 *)(plVar1 + 0x75) = 0;
  *(undefined1 *)((longlong)plVar1 + 0x3ac) = 0;
  plVar1[0x76] = 0;
  cVar3 = (**(code **)(*plVar1 + 0x78))(plVar1,0,(int)plVar1[0x30]);
  if (cVar3 == '\0') {
    if (*(int *)((longlong)plVar1 + 0x2f4) < 0) {
      *(undefined4 *)(plVar1 + 0x5e) = 0;
      FUN_144893a1c(plVar1 + 0x5d,0);
    }
    else {
      *(undefined4 *)(plVar1 + 0x5e) = 0;
    }
    plVar1[0x2d] = 0;
    plVar1[0x2a] = 0;
    plVar1[0x2b] = 0;
    *(undefined4 *)(plVar1 + 0x2c) = 0;
    (**(code **)(*plVar1 + 0x70))(plVar1,0,(int)plVar1[0x30]);
  }
  plVar1[0x60] = 0;
  *(undefined1 *)((longlong)plVar1 + 0x2fc) = 0;
  local_38 = &PTR_FUN_14a5ab730;
  local_28 = plVar1[0x30];
  local_30 = 0;
  local_20 = 0xffffffffffffffff;
  plVar2 = (longlong *)param_1[1];
  if (plVar2 != (longlong *)0x0 && (int)param_1[2] != 0) {
    (**(code **)(*plVar2 + 0x60))(plVar2,&local_38);
  }
  plVar1[0x30] = -1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143392dcc FUN_143392dcc body=71 status=ok
// SIG undefined FUN_143392dcc(void)

longlong FUN_143392dcc(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad660;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_14783c656(param_2 + 0x20,param_1 + 0x10);
  return param_2 + 0x18;
}



// FUNCTION 143392e1a FUN_143392e1a body=12 status=ok
// SIG undefined FUN_143392e1a(void)

void FUN_143392e1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143392e23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143392e26 FUN_143392e26 body=111 status=ok
// SIG undefined FUN_143392e26(void)

undefined8 * FUN_143392e26(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5ad660;
  plVar1 = param_1 + 2;
  if (*(int *)(param_1 + 3) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143392e77;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143392e77:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143392e96 FUN_143392e96 body=1159 status=ok
// SIG undefined FUN_143392e96(void)

void FUN_143392e96(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_143392ec1:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad700;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_14783d212;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_143392ec1;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad700;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_14783d212;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_14339300e;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_14339300e:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783d140;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad6e0;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 14339331e FUN_14339331e body=2776 status=ok
// SIG undefined FUN_14339331e(void)

void FUN_14339331e(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  bool bVar7;
  void *_Src;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  size_t _Size;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  uint *local_1d0;
  longlong *local_1c8;
  longlong *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  longlong *local_1a8;
  undefined4 local_19c;
  void *local_198;
  longlong lStack_190;
  void *local_188;
  undefined4 local_180;
  longlong local_178;
  undefined4 local_170;
  void *local_168;
  longlong lStack_160;
  undefined **local_158;
  ulonglong *local_150;
  byte local_130;
  byte local_12e;
  longlong *local_100;
  longlong local_e0;
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  uint local_ac;
  void *local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  longlong *local_90;
  longlong local_88 [2];
  undefined1 local_74 [4];
  uint *local_70;
  undefined8 **local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  plVar6 = (longlong *)*param_1;
  if ((char)plVar6[0x2f] == '\0') {
    plVar3 = (longlong *)(param_2 + 0xb0);
    *(undefined4 *)(param_2 + 0xb8) = 0;
    if (*(int *)(param_2 + 0xbc) != 0) {
      FUN_144893a1c(plVar3,0);
    }
    FUN_147832516(plVar6,local_88,plVar6 + 0x78);
    (**(code **)(*plVar6 + 0x1f8))(plVar6,&local_98,local_88);
    if (local_98 != (longlong *)0x0) {
      local_a8 = (void *)0x0;
      uStack_a0 = 0;
      local_ac = 0;
      if (-1 < (int)param_1[1]) {
        plVar15 = plVar6 + 0xe;
        local_1c0 = plVar6 + 0x15;
        local_1b8 = &local_b8;
        local_1c8 = plVar15;
LAB_143393450:
        if ((int)plVar6[0xf] != *(int *)((longlong)plVar6 + 0xa4)) {
          plVar11 = (longlong *)plVar6[0x16];
          if ((longlong *)plVar6[0x16] == (longlong *)0x0) {
            plVar11 = local_1c0;
          }
          iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar6[0x17] - 1U & local_ac) * 4);
          if (iVar12 != -1) {
            do {
              if (*(uint *)(*plVar15 + (longlong)iVar12 * 0x20) == local_ac) {
                memset(&local_158,0,0x90);
                FUN_144869430(&local_158);
                local_c8 = 0;
                local_158 = &PTR_FUN_149e1e590;
                local_b8 = 0;
                local_130 = local_130 | 4;
                local_c0 = plVar3;
                FUN_1449c2eca(&local_158,1);
                local_c8 = (longlong)*(int *)(param_2 + 0xb8);
                local_158 = &PTR_FUN_149e1e330;
                lVar14 = 0;
                if ((int)plVar6[0xf] == *(int *)((longlong)plVar6 + 0xa4)) goto LAB_14339378e;
                plVar11 = (longlong *)plVar6[0x16];
                if ((longlong *)plVar6[0x16] == (longlong *)0x0) {
                  plVar11 = local_1c0;
                }
                iVar12 = *(int *)((longlong)plVar11 +
                                 (ulonglong)((int)plVar6[0x17] - 1U & local_ac) * 4);
                if (iVar12 == -1) goto LAB_14339378b;
                goto LAB_143393770;
              }
              iVar12 = *(int *)((longlong)iVar12 * 0x20 + *plVar15 + 0x18);
            } while (iVar12 != -1);
          }
        }
        (**(code **)(*local_98 + 0x1a0))();
        lVar14 = uStack_a0;
        uVar9 = uStack_a0._4_4_;
        iVar12 = 0;
        uStack_a0 = (ulonglong)uStack_a0._4_4_ << 0x20;
        if (lVar14 < 0) {
          FUN_144893a1c(&local_a8,0);
          iVar12 = (int)uStack_a0;
          uVar9 = uStack_a0._4_4_;
        }
        uVar5 = *(uint *)(plVar6[0x93] + 0x40 + (longlong)(int)local_ac * 0x50);
        iVar13 = uVar5 + iVar12;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar13);
        if (uVar9 - iVar12 < uVar5) {
          FUN_1447403be(&local_a8);
          iVar13 = (int)uStack_a0;
        }
        (**(code **)(*local_98 + 0x170))(local_98,local_a8,(longlong)iVar13);
        local_168 = (void *)0x0;
        lStack_160 = 0;
        if (*(char *)((longlong)plVar6 + 0x46b) == '\x01') {
          cVar8 = (**(code **)(*plVar6 + 0x1d8))(plVar6);
          if (cVar8 != '\0') {
            local_178 = plVar6[0x8e];
            local_170 = (undefined4)plVar6[0x8f];
            local_188 = local_a8;
            local_180 = (int)uStack_a0;
            cVar8 = (**(code **)(*plVar6 + 0x1f0))(plVar6,&local_188,&local_168,&local_178);
            if (cVar8 != '\0') goto LAB_143393609;
          }
          *(undefined4 *)(param_2 + 0xb8) = 0;
          bVar7 = true;
          if (*(int *)(param_2 + 0xbc) != 0) {
            FUN_144893a1c(plVar3,0);
          }
        }
        else {
          local_168 = local_a8;
          lStack_160 = uStack_a0;
          local_a8 = (void *)0x0;
          uStack_a0 = 0;
LAB_143393609:
          local_198 = (void *)0x0;
          lStack_190 = 0;
          if (*(char *)((longlong)plVar6 + 0x46a) == '\x01') {
            cVar8 = (**(code **)(*plVar6 + 0x1c0))(plVar6);
            if ((cVar8 != '\0') &&
               (cVar8 = (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_168,&local_198), cVar8 != '\0')
               ) goto LAB_143393926;
            *(undefined4 *)(param_2 + 0xb8) = 0;
            bVar7 = true;
            if (*(int *)(param_2 + 0xbc) != 0) {
              FUN_144893a1c(plVar3,0);
            }
          }
          else {
            local_198 = local_168;
            lStack_190 = lStack_160;
            local_168 = (void *)0x0;
            lStack_160 = 0;
LAB_143393926:
            memset(&local_158,0,0x90);
            FUN_144869430(&local_158);
            local_c8 = 0;
            local_158 = &PTR_FUN_149e1e590;
            local_b8 = 0;
            local_130 = local_130 | 4;
            local_c0 = plVar3;
            FUN_1449c2eca(&local_158,1);
            local_c8 = (longlong)*(int *)(param_2 + 0xb8);
            local_158 = &PTR_FUN_149e1e330;
            local_19c = (uint)lStack_190;
            puVar1 = (undefined4 *)*local_150 + 1;
            if ((undefined4 *)local_150[1] < puVar1) {
              if ((local_12e & 2) == 0) {
                iVar12 = (int)local_c0[1];
                lVar14 = (local_c8 - iVar12) + 4;
                if (0 < lVar14) {
                  if (0x7ffffffa < *(int *)(param_2 + 0xb8)) {
                    FUN_1400021e4(local_1b8,&local_70);
                    local_1d0 = (uint *)&DAT_149dfb77a;
                    if ((int)local_68 != 0) {
                      local_1d0 = local_70;
                    }
                    local_1d8 = 0x7fffffff;
                    FUN_140033559("Runtime\\Core\\Public\\Serialization/MemoryWriter.h",0x31,
                                  L"TMemoryWriter with IndexSize=%d does not support data larger than %d bytes. Archive name: %s."
                                  ,4);
                    if (local_70 != (uint *)0x0) {
                      FUN_1400020a8();
                    }
                    iVar12 = (int)local_c0[1];
                  }
                  uVar9 = (uint)lVar14;
                  *(uint *)(local_c0 + 1) = iVar12 + uVar9;
                  if ((uint)(*(int *)((longlong)local_c0 + 0xc) - iVar12) < uVar9) {
                    FUN_1447403be();
                  }
                }
                *(undefined4 *)(*local_c0 + (longlong)(int)local_c8) = local_19c;
                local_c8 = local_c8 + 4;
              }
              else {
                FUN_14572512c(&local_158,&local_19c);
              }
            }
            else {
              local_19c = *(undefined4 *)*local_150;
              *local_150 = (ulonglong)puVar1;
            }
            _Size = (size_t)(int)(uint)lStack_190;
            iVar12 = 0;
            if (_Size != 0) {
              iVar12 = *(int *)(param_2 + 0xb8);
              *(uint *)(param_2 + 0xb8) = iVar12 + (uint)lStack_190;
              if ((uint)(*(int *)(param_2 + 0xbc) - iVar12) < (uint)lStack_190) {
                FUN_1447403be(plVar3,iVar12);
              }
              memcpy((void *)((longlong)iVar12 + *plVar3),local_198,_Size);
              iVar12 = (uint)lStack_190;
            }
            puVar10 = (undefined8 *)FUN_14001cc68(0x18,0x10);
            _Src = local_198;
            *puVar10 = 0;
            *(int *)(puVar10 + 1) = iVar12;
            if (iVar12 == 0) {
              *(undefined4 *)((longlong)puVar10 + 0xc) = 0;
            }
            else {
              FUN_1447a127e(puVar10,iVar12,0);
              memcpy((void *)*puVar10,_Src,(longlong)iVar12);
            }
            puVar10[2] = 0;
            local_1b0 = puVar10;
            local_1a8 = (longlong *)FUN_14001cc68(0x18,0x10);
            plVar15 = local_1c8;
            local_1a8[1] = (longlong)&DAT_100000001;
            *local_1a8 = (longlong)&PTR_FUN_14a5ad680;
            local_1a8[2] = (longlong)puVar10;
            local_70 = &local_ac;
            local_68 = &local_1b0;
            FUN_14783c6da(local_1c8,local_74,&local_70);
            plVar11 = local_1a8;
            if (local_1a8 != (longlong *)0x0) {
              LOCK();
              plVar4 = local_1a8 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 == 0) {
                (**(code **)*local_1a8)(local_1a8);
                LOCK();
                piVar2 = (int *)((longlong)plVar11 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar11 + 0x10))(plVar11);
                }
              }
            }
            plVar11 = local_100;
            local_158 = &PTR__purecall_149e35f70;
            if (local_100 != (longlong *)0x0) {
              if (*local_100 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(plVar11);
            }
            lVar14 = local_e0;
            if (local_e0 != 0) {
              if (*(longlong *)(local_e0 + 0x40) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(lVar14);
              plVar15 = local_1c8;
            }
            bVar7 = false;
          }
          if (local_198 != (void *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_168 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (!bVar7) goto LAB_143393692;
        goto LAB_143393da0;
      }
LAB_143393d5e:
      plVar6 = local_90;
      local_98 = (longlong *)0x0;
      if (local_90 != (longlong *)0x0) {
        local_90 = (longlong *)0x0;
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
LAB_143393da0:
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    plVar6 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_90 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_88[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar12 = *(int *)(lVar14 + 0x18), iVar12 != -1) {
LAB_143393770:
    lVar14 = *plVar15 + (longlong)iVar12 * 0x20;
    if (*(uint *)(*plVar15 + (longlong)iVar12 * 0x20) == local_ac) goto LAB_14339378e;
  }
LAB_14339378b:
  lVar14 = 0;
LAB_14339378e:
  local_168 = (void *)CONCAT44(local_168._4_4_,*(undefined4 *)(*(longlong *)(lVar14 + 8) + 8));
  puVar1 = (undefined4 *)*local_150 + 1;
  if ((undefined4 *)local_150[1] < puVar1) {
    if ((local_12e & 2) == 0) {
      iVar12 = (int)local_c0[1];
      lVar14 = (local_c8 - iVar12) + 4;
      if (0 < lVar14) {
        if (0x7ffffffa < *(int *)(param_2 + 0xb8)) {
          FUN_1400021e4(local_1b8,&local_70);
          local_1d0 = (uint *)&DAT_149dfb77a;
          if ((int)local_68 != 0) {
            local_1d0 = local_70;
          }
          local_1d8 = 0x7fffffff;
          FUN_140033559("Runtime\\Core\\Public\\Serialization/MemoryWriter.h",0x31,
                        L"TMemoryWriter with IndexSize=%d does not support data larger than %d bytes. Archive name: %s."
                        ,4);
          if (local_70 != (uint *)0x0) {
            FUN_1400020a8();
          }
          iVar12 = (int)local_c0[1];
          plVar15 = local_1c8;
        }
        uVar9 = (uint)lVar14;
        *(uint *)(local_c0 + 1) = iVar12 + uVar9;
        if ((uint)(*(int *)((longlong)local_c0 + 0xc) - iVar12) < uVar9) {
          FUN_1447403be();
        }
      }
      *(undefined4 *)(*local_c0 + (longlong)(int)local_c8) = local_168._0_4_;
      local_c8 = local_c8 + 4;
    }
    else {
      FUN_14572512c(&local_158);
    }
  }
  else {
    local_168 = (void *)CONCAT44(local_168._4_4_,*(undefined4 *)*local_150);
    *local_150 = (ulonglong)puVar1;
  }
  if ((int)plVar6[0xf] != *(int *)((longlong)plVar6 + 0xa4)) {
    plVar11 = (longlong *)plVar6[0x16];
    if ((longlong *)plVar6[0x16] == (longlong *)0x0) {
      plVar11 = local_1c0;
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar6[0x17] - 1U & local_ac) * 4);
    if (iVar12 != -1) {
      do {
        lVar14 = *plVar15 + (longlong)iVar12 * 0x20;
        if (*(uint *)(*plVar15 + (longlong)iVar12 * 0x20) == local_ac) goto LAB_143393882;
        iVar12 = *(int *)(lVar14 + 0x18);
      } while (iVar12 != -1);
    }
  }
  lVar14 = 0;
LAB_143393882:
  puVar10 = *(undefined8 **)(lVar14 + 8);
  uVar9 = *(uint *)(puVar10 + 1);
  if ((longlong)(int)uVar9 != 0) {
    iVar12 = *(int *)(param_2 + 0xb8);
    *(uint *)(param_2 + 0xb8) = iVar12 + uVar9;
    if ((uint)(*(int *)(param_2 + 0xbc) - iVar12) < uVar9) {
      FUN_1447403be(plVar3,iVar12);
    }
    memcpy((void *)((longlong)iVar12 + *plVar3),(void *)*puVar10,(longlong)(int)uVar9);
  }
  plVar11 = local_100;
  plVar15 = local_1c8;
  local_158 = &PTR__purecall_149e35f70;
  if (local_100 != (longlong *)0x0) {
    if (*local_100 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar11);
  }
  lVar14 = local_e0;
  if (local_e0 != 0) {
    if (*(longlong *)(local_e0 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar14);
  }
LAB_143393692:
  uVar9 = local_ac + 1;
  bVar7 = (int)param_1[1] <= (int)local_ac;
  local_ac = uVar9;
  if (bVar7) goto LAB_143393d5e;
  goto LAB_143393450;
}



// FUNCTION 143393e16 FUN_143393e16 body=12 status=ok
// SIG undefined FUN_143393e16(void)

void FUN_143393e16(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143393e1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143393e22 FUN_143393e22 body=29 status=ok
// SIG undefined FUN_143393e22(void)

undefined8 FUN_143393e22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143393e40 FUN_143393e40 body=701 status=ok
// SIG undefined FUN_143393e40(void)

void FUN_143393e40(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  wchar_t *_Str;
  
  plVar2 = (longlong *)*param_1;
  if (((char)plVar2[0x2f] == '\x01') || (*(int *)(param_2 + 0xb8) == 0)) {
    plVar3 = (longlong *)param_1[2];
    if (plVar3 != (longlong *)0x0 && (int)param_1[3] != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
    }
  }
  else {
    if (plVar2 + 0x73 != (longlong *)(param_2 + 0xb0)) {
      if (plVar2[0x73] != 0) {
        FUN_1400020a8();
      }
      plVar2[0x73] = *(longlong *)(param_2 + 0xb0);
      *(undefined8 *)(param_2 + 0xb0) = 0;
      *(undefined4 *)(plVar2 + 0x74) = *(undefined4 *)(param_2 + 0xb8);
      *(undefined4 *)((longlong)plVar2 + 0x3a4) = *(undefined4 *)(param_2 + 0xbc);
      *(undefined8 *)(param_2 + 0xb8) = 0;
    }
    plVar2[0x76] = 0;
    cVar4 = (**(code **)(*plVar2 + 0x78))
                      (plVar2,*(undefined4 *)
                               (plVar2[0x24] + 0x38 + (longlong)(int)param_1[1] * 0x50),
                       (int)plVar2[0x30]);
    lVar6 = (longlong)(int)param_1[1] * 0x50;
    if (*(int *)(plVar2[0x24] + 0x30 + lVar6) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(plVar2[0x24] + lVar6 + 0x28);
    }
    plVar3 = plVar2 + 0x30;
    uVar5 = _wtoi(_Str);
    if ((-1 < (int)uVar5) && ((int)uVar5 < (int)plVar2[0x29])) {
      if (cVar4 == '\0') {
        if (*(int *)((longlong)plVar2 + 0x2f4) < 0) {
          *(undefined4 *)(plVar2 + 0x5e) = 0;
          FUN_144893a1c(plVar2 + 0x5d,0);
        }
        else {
          *(undefined4 *)(plVar2 + 0x5e) = 0;
        }
        *(undefined4 *)(plVar2 + 0x5f) = 0;
        *(undefined1 *)((longlong)plVar2 + 0x2fc) = 0;
        plVar2[0x60] = 0;
        *(undefined4 *)((longlong)plVar2 + 0x17c) = 0;
        plVar2[0x2b] = *(longlong *)(plVar2[0x28] + 0x20 + (ulonglong)uVar5 * 0x28);
        plVar2[0x2a] = 0;
        *(uint *)(plVar2 + 0x2c) = uVar5;
        plVar2[0x2d] = 0;
      }
      else {
        plVar2[0x60] = *(longlong *)(plVar2[0x28] + 0x20 + (ulonglong)uVar5 * 0x28) - plVar2[0x2b];
        *(undefined1 *)((longlong)plVar2 + 0x2fc) = 0;
      }
      if (-1 < *plVar3) {
        if (cVar4 == '\0' && (int)plVar2[0x29] <= (int)plVar2[0x2c]) {
          uVar1 = *(undefined4 *)(plVar2[0x24] + 0x38 + (longlong)(int)param_1[1] * 0x50);
          plVar2[0x2a] = CONCAT44(uVar1,uVar1);
          lVar6 = -1;
        }
        else {
          (**(code **)(*plVar2 + 0x70))
                    (plVar2,*(undefined4 *)(plVar2[0x24] + 0x38 + (longlong)(int)param_1[1] * 0x50))
          ;
          lVar6 = plVar2[0x30] -
                  (ulonglong)*(uint *)(plVar2[0x24] + 0x38 + (longlong)(int)param_1[1] * 0x50);
        }
        *plVar3 = lVar6;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(longlong *)(param_2 + 0x10) = *plVar3;
    }
    plVar3 = (longlong *)param_1[2];
    if (plVar3 != (longlong *)0x0 && (int)param_1[3] != 0) {
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
    }
  }
  plVar2[0x30] = -1;
  return;
}



// FUNCTION 1433940fe FUN_1433940fe body=99 status=ok
// SIG undefined FUN_1433940fe(void)

undefined8 * FUN_1433940fe(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a5ad760;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14783c656(puVar1 + 3,param_1 + 0x18);
  return puVar1 + 1;
}



// FUNCTION 143394168 FUN_143394168 body=29 status=ok
// SIG undefined FUN_143394168(void)

void FUN_143394168(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143394186 FUN_143394186 body=111 status=ok
// SIG undefined FUN_143394186(void)

undefined8 * FUN_143394186(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5ad760;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1433941d7;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1433941d7:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433941f6 FUN_1433941f6 body=865 status=ok
// SIG undefined FUN_1433941f6(void)

void FUN_1433941f6(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  longlong *local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)*param_1;
  if ((char)plVar5[0x2f] != '\0') goto LAB_143394222;
  plVar2 = (longlong *)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0xb8) = 0;
  if (*(int *)(param_2 + 0xbc) != 0) {
    FUN_144893a1c(plVar2,0);
  }
  FUN_147832516(plVar5,local_50,plVar5 + 0x78);
  (**(code **)(*plVar5 + 0x1f8))(plVar5,&local_60,local_50);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x1a0))
              (local_60,*(undefined8 *)(plVar5[0x93] + 0x48 + (longlong)(int)param_1[1] * 0x50));
    uVar3 = *(uint *)(plVar5[0x93] + 0x40 + (longlong)(int)param_1[1] * 0x50);
    iVar4 = *(int *)(param_2 + 0xb8);
    iVar7 = iVar4 + uVar3;
    *(int *)(param_2 + 0xb8) = iVar7;
    if ((uint)(*(int *)(param_2 + 0xbc) - iVar4) < uVar3) {
      FUN_1447403be(plVar2);
      iVar7 = *(int *)(param_2 + 0xb8);
    }
    (**(code **)(*local_60 + 0x170))(local_60,*plVar2,(longlong)iVar7);
    if (*(char *)((longlong)plVar5 + 0x46b) == '\x01') {
      cVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5);
      if (cVar6 != '\0') {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = plVar5[0x8e];
        local_80 = (undefined4)plVar5[0x8f];
        local_98 = *(undefined8 *)(param_2 + 0xb0);
        local_90 = *(undefined4 *)(param_2 + 0xb8);
        cVar6 = (**(code **)(*plVar5 + 0x1f0))(plVar5,&local_98,&local_78);
        if (cVar6 == '\0') {
          *(undefined4 *)(param_2 + 0xb8) = 0;
          if (*(int *)(param_2 + 0xbc) != 0) {
            FUN_144893a1c(plVar2,0);
          }
        }
        else if (plVar2 != &local_78) {
          if (*plVar2 != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0xb0) = local_78;
          local_78 = 0;
          *(undefined4 *)(param_2 + 0xb8) = (undefined4)uStack_70;
          *(undefined4 *)(param_2 + 0xbc) = uStack_70._4_4_;
          uStack_70 = 0;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (cVar6 == '\0') goto LAB_143394519;
        goto LAB_143394410;
      }
LAB_143394491:
      *(undefined4 *)(param_2 + 0xb8) = 0;
      if (*(int *)(param_2 + 0xbc) != 0) {
        FUN_144893a1c(plVar2,0);
      }
    }
    else {
LAB_143394410:
      if (*(char *)((longlong)plVar5 + 0x46a) == '\x01') {
        cVar6 = (**(code **)(*plVar5 + 0x1c0))(plVar5);
        if (cVar6 == '\0') goto LAB_143394491;
        local_78 = 0;
        uStack_70 = 0;
        cVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,plVar2,&local_78);
        if (cVar6 == '\0') {
          *(undefined4 *)(param_2 + 0xb8) = 0;
          if (*(int *)(param_2 + 0xbc) != 0) {
            FUN_144893a1c(plVar2,0);
          }
        }
        else if (plVar2 != &local_78) {
          if (*plVar2 != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(param_2 + 0xb0) = local_78;
          local_78 = 0;
          *(undefined4 *)(param_2 + 0xb8) = (undefined4)uStack_70;
          *(undefined4 *)(param_2 + 0xbc) = uStack_70._4_4_;
          uStack_70 = 0;
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (cVar6 == '\0') goto LAB_143394519;
      }
      plVar5 = local_58;
      local_60 = (longlong *)0x0;
      if (local_58 != (longlong *)0x0) {
        local_58 = (longlong *)0x0;
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
  }
LAB_143394519:
  plVar5 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_58 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
LAB_143394222:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143394576 FUN_143394576 body=12 status=ok
// SIG undefined FUN_143394576(void)

void FUN_143394576(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014339457f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143394582 FUN_143394582 body=29 status=ok
// SIG undefined FUN_143394582(void)

undefined8 FUN_143394582(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433945a0 FUN_1433945a0 body=758 status=ok
// SIG undefined FUN_1433945a0(void)

void FUN_1433945a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  void *_Src;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  wchar_t *_Str;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = (longlong *)*param_1;
  if ((char)plVar4[0x2f] != '\x01') {
    iVar2 = *(int *)(param_2 + 0xb8);
    if ((longlong)iVar2 != 0) {
      uVar3 = *(undefined4 *)(plVar4[0x24] + (longlong)(int)param_1[1] * 0x50);
      local_58 = (void *)0x0;
      _Src = *(void **)(param_2 + 0xb0);
      local_50 = iVar2;
      FUN_1447a127e(&local_58,iVar2,0);
      memcpy(local_58,_Src,(longlong)iVar2);
      FUN_14338a472(plVar4,uVar3,&local_58);
      if (local_58 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (plVar4 + 0x73 != (longlong *)(param_2 + 0xb0)) {
        if (plVar4[0x73] != 0) {
          FUN_1400020a8();
        }
        plVar4[0x73] = *(longlong *)(param_2 + 0xb0);
        *(undefined8 *)(param_2 + 0xb0) = 0;
        *(undefined4 *)(plVar4 + 0x74) = *(undefined4 *)(param_2 + 0xb8);
        *(undefined4 *)((longlong)plVar4 + 0x3a4) = *(undefined4 *)(param_2 + 0xbc);
        *(undefined8 *)(param_2 + 0xb8) = 0;
      }
      plVar4[0x76] = 0;
      lVar8 = (longlong)(int)param_1[1] * 0x50;
      lVar1 = plVar4[0x24] + lVar8;
      if (*(int *)(plVar4[0x24] + 0x30 + lVar8) == 0) {
        _Str = L"";
      }
      else {
        _Str = *(wchar_t **)(lVar1 + 0x28);
      }
      uVar7 = _wtoi(_Str);
      if (((int)uVar7 < 0) || ((int)plVar4[0x29] <= (int)uVar7)) {
        if (-1 < plVar4[0x30]) {
          plVar4[0x2a] = CONCAT44(*(undefined4 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 0x38));
          plVar4[0x30] = -1;
        }
      }
      else {
        cVar6 = (**(code **)(*plVar4 + 0x78))
                          (plVar4,*(undefined4 *)(lVar1 + 0x38),(int)plVar4[0x30]);
        if (cVar6 == '\0') {
          if (*(int *)((longlong)plVar4 + 0x2f4) < 0) {
            *(undefined4 *)(plVar4 + 0x5e) = 0;
            FUN_144893a1c(plVar4 + 0x5d,0);
          }
          else {
            *(undefined4 *)(plVar4 + 0x5e) = 0;
          }
          *(undefined4 *)(plVar4 + 0x5f) = 0;
          *(undefined1 *)((longlong)plVar4 + 0x2fc) = 0;
          plVar4[0x60] = 0;
          *(undefined4 *)((longlong)plVar4 + 0x17c) = 0;
          plVar4[0x2b] = *(longlong *)(plVar4[0x28] + 0x20 + (ulonglong)uVar7 * 0x28);
          plVar4[0x2a] = 0;
          *(uint *)(plVar4 + 0x2c) = uVar7;
          plVar4[0x2d] = 0;
        }
        else {
          plVar4[0x60] = *(longlong *)(plVar4[0x28] + 0x20 + (ulonglong)uVar7 * 0x28) - plVar4[0x2b]
          ;
          *(undefined1 *)((longlong)plVar4 + 0x2fc) = 0;
        }
      }
      if (-1 < plVar4[0x30]) {
        (**(code **)(*plVar4 + 0x70))(plVar4,*(undefined4 *)(lVar1 + 0x38));
        plVar4[0x30] = plVar4[0x30] - (ulonglong)*(uint *)(lVar1 + 0x38);
      }
      *(undefined4 *)(param_2 + 8) = 0;
      *(longlong *)(param_2 + 0x10) = plVar4[0x30];
      *(int *)(param_2 + 0x1c) = (int)param_1[1];
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(lVar1 + 0x38);
      plVar5 = (longlong *)param_1[2];
      if (plVar5 != (longlong *)0x0 && (int)param_1[3] != 0) {
        (**(code **)(*plVar5 + 0x60))(plVar5,param_2);
      }
      goto LAB_1433946f6;
    }
  }
  plVar5 = (longlong *)param_1[2];
  if (plVar5 != (longlong *)0x0 && (int)param_1[3] != 0) {
    (**(code **)(*plVar5 + 0x60))(plVar5,param_2);
  }
LAB_1433946f6:
  plVar4[0x30] = -1;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143394898 FUN_143394898 body=99 status=ok
// SIG undefined FUN_143394898(void)

undefined8 * FUN_143394898(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14a5ad7e0;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_14783c656(puVar1 + 3,param_1 + 0x18);
  return puVar1 + 1;
}



// FUNCTION 143394902 FUN_143394902 body=29 status=ok
// SIG undefined FUN_143394902(void)

void FUN_143394902(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143394920 FUN_143394920 body=111 status=ok
// SIG undefined FUN_143394920(void)

undefined8 * FUN_143394920(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5ad7e0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143394971;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143394971:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14339498f FUN_14339498f body=43 status=ok
// SIG undefined FUN_14339498f(void)

void FUN_14339498f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1433949ba FUN_1433949ba body=333 status=ok
// SIG undefined FUN_1433949ba(void)

void FUN_1433949ba(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          if ((uVar3 & 0x1ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar3 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_143394a23;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar3 & 0x1ffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_143394a23:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 143394b08 FUN_143394b08 body=363 status=ok
// SIG undefined FUN_143394b08(void)

void FUN_143394b08(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_143394b9e;
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
LAB_143394b9e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 143394c74 FUN_143394c74 body=1159 status=ok
// SIG undefined FUN_143394c74(void)

void FUN_143394c74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_143394c9f:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad880;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_14783e67c;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_143394c9f;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad880;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_14783e67c;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_143394dec;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_143394dec:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783e5aa;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad860;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 1433950fc FUN_1433950fc body=338 status=ok
// SIG undefined FUN_1433950fc(void)

void FUN_1433950fc(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = (longlong *)*param_1;
  FUN_147832516(plVar5,local_40,plVar5 + 0x78);
  (**(code **)(*plVar5 + 0x1f8))(plVar5,&local_50,local_40);
  if (local_50 != (longlong *)0x0) {
    uVar3 = *(uint *)(param_1 + 1);
    iVar4 = *(int *)(param_2 + 0xa8);
    *(uint *)(param_2 + 0xa8) = iVar4 + uVar3;
    if ((uint)(*(int *)(param_2 + 0xac) - iVar4) < uVar3) {
      FUN_1447403be(param_2 + 0xa0);
    }
    (**(code **)(*local_50 + 0x1a0))(local_50,param_1[2]);
    (**(code **)(*local_50 + 0x170))
              (local_50,*(undefined8 *)(param_2 + 0xa0),(longlong)*(int *)(param_2 + 0xa8));
    plVar5 = local_48;
    *(undefined4 *)(param_2 + 8) = 0;
    local_50 = (longlong *)0x0;
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)0x0;
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
  plVar5 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143395276 FUN_143395276 body=12 status=ok
// SIG undefined FUN_143395276(void)

void FUN_143395276(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014339527f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143395282 FUN_143395282 body=29 status=ok
// SIG undefined FUN_143395282(void)

undefined8 FUN_143395282(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1433952a0 FUN_1433952a0 body=166 status=ok
// SIG undefined FUN_1433952a0(void)

void FUN_1433952a0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  if (lVar1 + 0x238 != param_2 + 0xa0) {
    if (*(longlong *)(lVar1 + 0x238) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0x238) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    *(undefined4 *)(lVar1 + 0x240) = *(undefined4 *)(param_2 + 0xa8);
    *(undefined4 *)(lVar1 + 0x244) = *(undefined4 *)(param_2 + 0xac);
    *(undefined8 *)(param_2 + 0xa8) = 0;
  }
  *(undefined8 *)(lVar1 + 0x250) = 0;
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0 || (int)param_1[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000143395343. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
  return;
}



// FUNCTION 143395346 FUN_143395346 body=71 status=ok
// SIG undefined FUN_143395346(void)

longlong FUN_143395346(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad8e0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
  FUN_14783df50(param_2 + 0x20,param_1 + 0x10);
  return param_2 + 0x18;
}



// FUNCTION 143395394 FUN_143395394 body=12 status=ok
// SIG undefined FUN_143395394(void)

void FUN_143395394(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014339539d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1433953a0 FUN_1433953a0 body=111 status=ok
// SIG undefined FUN_1433953a0(void)

undefined8 * FUN_1433953a0(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a5ad8e0;
  plVar1 = param_1 + 2;
  if (*(int *)(param_1 + 3) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1433953f1;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1433953f1:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143395410 FUN_143395410 body=952 status=ok
// SIG undefined FUN_143395410(void)

void FUN_143395410(longlong *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  undefined1 auStack_f8 [36];
  undefined4 local_d4;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar4 = (longlong *)*param_1;
  FUN_147832516(plVar4,&local_d0,plVar4 + 0x78);
  (**(code **)(*plVar4 + 0x200))(plVar4,&local_40,&local_d0);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if (local_40 == (longlong *)0x0) {
    *param_2 = 10;
  }
  else {
    lVar10 = (longlong)(int)plVar4[0x90];
    if (lVar10 == -1) {
      local_d0 = 0;
      local_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0xffffffff;
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      cVar7 = FUN_143385e82(plVar4,plVar4 + 0x78);
      plVar3 = local_40;
      if (cVar7 != '\0') {
        *param_2 = 1;
        FUN_147832492(&local_d0);
        goto LAB_143395674;
      }
      uVar11 = (**(code **)(*local_40 + 0x30))(local_40);
      (**(code **)(*plVar3 + 0x1a0))(plVar3,uVar11);
      FUN_147832492(&local_d0);
    }
    else {
      iVar8 = *(int *)(plVar4[0x91] + 4 + lVar10 * 0x18);
      (**(code **)(*local_40 + 0x1a0))(local_40,*(undefined8 *)(plVar4[0x91] + 8 + lVar10 * 0x18));
      if ((int)param_1[2] != iVar8) {
        local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
        puVar5 = (ulonglong *)local_40[1];
        puVar12 = (undefined4 *)*puVar5 + 1;
        if ((undefined4 *)puVar5[1] < puVar12) {
          if ((*(byte *)((longlong)local_40 + 0x2a) & 2) == 0) {
            (**(code **)(*local_40 + 0x170))(local_40,&local_d0,4);
          }
          else {
            FUN_14572512c(local_40,&local_d0);
          }
        }
        else {
          local_d0 = CONCAT44(local_d0._4_4_,*(undefined4 *)*puVar5);
          *puVar5 = (ulonglong)puVar12;
        }
        plVar3 = local_40;
        uVar11 = (**(code **)(*local_40 + 0x30))(local_40);
        (**(code **)(*plVar3 + 0x1a0))(plVar3,uVar11);
        *(undefined4 *)(plVar4[0x91] + (longlong)(int)plVar4[0x90] * 0x18) = (undefined4)local_d0;
        *(undefined4 *)(plVar4 + 0x90) = 0xffffffff;
      }
    }
    iVar8 = (**(code **)(*local_40 + 0x28))();
    uVar6 = local_d0 >> 0x20;
    local_d0 = local_d0 & 0xffffffff00000000;
    puVar5 = (ulonglong *)local_40[1];
    puVar12 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar12) {
      if ((*(byte *)((longlong)local_40 + 0x2a) & 2) == 0) {
        (**(code **)(*local_40 + 0x170))(local_40,&local_d0,4);
      }
      else {
        FUN_14572512c(local_40,&local_d0);
      }
    }
    else {
      local_d0 = CONCAT44((int)uVar6,*(undefined4 *)*puVar5);
      *puVar5 = (ulonglong)puVar12;
    }
    local_d4 = (undefined4)param_1[2];
    puVar5 = (ulonglong *)local_40[1];
    puVar12 = (undefined4 *)*puVar5 + 1;
    if ((undefined4 *)puVar5[1] < puVar12) {
      if ((*(byte *)((longlong)local_40 + 0x2a) & 2) == 0) {
        (**(code **)(*local_40 + 0x170))(local_40,&local_d4,4);
      }
      else {
        FUN_14572512c(local_40,&local_d4);
      }
    }
    else {
      local_d4 = *(undefined4 *)*puVar5;
      *puVar5 = (ulonglong)puVar12;
    }
    iVar9 = (**(code **)(*local_40 + 0x28))();
    (**(code **)(*local_40 + 0x170))(local_40,param_1[1],(longlong)(int)param_1[2]);
    plVar3 = local_38;
    local_40 = (longlong *)0x0;
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)0x0;
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
    if ((int)plVar4[0x90] == -1) {
      puVar12 = (undefined4 *)FUN_147838f46(plVar4 + 0x91);
      *puVar12 = (undefined4)local_d0;
      *(longlong *)(puVar12 + 2) = (longlong)iVar8;
      *(longlong *)(puVar12 + 4) = (longlong)iVar9;
      puVar12[1] = local_d4;
      *(int *)(plVar4 + 0x90) = (int)plVar4[0x92] + -1;
    }
  }
LAB_143395674:
  plVar4 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_38 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1433957ca FUN_1433957ca body=112 status=ok
// SIG undefined FUN_1433957ca(void)

longlong FUN_1433957ca(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14a5ad900;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x18);
  _Src = *(void **)(param_1 + 0x10);
  *(int *)(param_2 + 0x28) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 0;
  }
  else {
    FUN_1447a127e((undefined8 *)(param_2 + 0x20),iVar1,0);
    memcpy(*(void **)(param_2 + 0x20),_Src,(longlong)iVar1);
  }
  return param_2 + 0x18;
}



// FUNCTION 143395840 FUN_143395840 body=12 status=ok
// SIG undefined FUN_143395840(void)

void FUN_143395840(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143395849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14339584c FUN_14339584c body=57 status=ok
// SIG undefined FUN_14339584c(void)

undefined8 * FUN_14339584c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a5ad900;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143395886 FUN_143395886 body=146 status=ok
// SIG undefined FUN_143395886(void)

void FUN_143395886(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [24];
  longlong local_30;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_147838fc6(local_48);
  (**(code **)(*plVar1 + 0x178))(plVar1,local_48);
  FUN_147832b28(plVar1);
  if (local_20 != 0) {
    (**(code **)(local_20 + -0x10))(local_20 + -0x10);
  }
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14339594c FUN_14339594c body=12 status=ok
// SIG undefined FUN_14339594c(void)

void FUN_14339594c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143395955. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143395958 FUN_143395958 body=29 status=ok
// SIG undefined FUN_143395958(void)

undefined8 FUN_143395958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143395978 FUN_143395978 body=386 status=ok
// SIG undefined FUN_143395978(void)

void FUN_143395978(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  LARGE_INTEGER local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  if (((1 < *(int *)(lVar2 + 0x3c8)) && (iVar1 = *(int *)(lVar2 + 0x240), iVar1 != 0)) &&
     (*(char *)(lVar2 + 0x3b8) != '\0')) {
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a5ad920;
    local_68[0].QuadPart = (LONGLONG)FUN_143395886;
    local_78 = *(undefined8 *)(lVar2 + 0x238);
    local_6c = *(undefined4 *)(lVar2 + 0x244);
    *(undefined8 *)(lVar2 + 0x238) = 0;
    *(undefined8 *)(lVar2 + 0x240) = 0;
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_FUN_14a5ad900;
    local_a8[0] = FUN_143395410;
    local_80 = lVar2;
    local_70 = iVar1;
    local_40 = lVar2;
    FUN_147832bcc(lVar2,2,local_a8);
    if (local_a8[0] != (code *)0x0) {
      pppuVar3 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar3 = &local_88;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    if ((code *)local_68[0].QuadPart != (code *)0x0) {
      pppuVar3 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar3 = &local_48;
      }
      (*(code *)(*pppuVar3)[2])();
    }
    *(undefined4 *)(lVar2 + 0x240) = 0;
    if (*(int *)(lVar2 + 0x244) < 0) {
      FUN_144893a1c(lVar2 + 0x238,0);
    }
    *(undefined4 *)(lVar2 + 0x248) = 0;
    *(undefined1 *)(lVar2 + 0x24c) = 0;
    *(undefined8 *)(lVar2 + 0x250) = 0;
    QueryPerformanceCounter(local_68);
    *(double *)(lVar2 + 0x168) = (double)local_68[0].QuadPart * DAT_14c83f420 + 16777216.0;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143395b1a FUN_143395b1a body=12 status=ok
// SIG undefined FUN_143395b1a(void)

void FUN_143395b1a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143395b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143395b26 FUN_143395b26 body=29 status=ok
// SIG undefined FUN_143395b26(void)

undefined8 FUN_143395b26(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143395b44 FUN_143395b44 body=1159 status=ok
// SIG undefined FUN_143395b44(void)

void FUN_143395b44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined ***pppuVar16;
  bool bVar17;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined1 local_88;
  undefined1 local_79;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong *plStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar15 = *(longlong **)(param_1 + 0x28);
  if (plVar15 == (longlong *)0x0) {
LAB_143395b6f:
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad9e0;
    local_50 = 0;
    plStack_48 = (longlong *)0x0;
    local_78[0] = &LAB_14783ef68;
    FUN_14170b918(&local_98,local_78);
    bVar17 = true;
    plVar15 = (longlong *)0x0;
    uVar11 = 0;
  }
  else {
    iVar8 = (int)plVar15[1];
    do {
      if (iVar8 == 0) goto LAB_143395b6f;
      LOCK();
      iVar7 = (int)plVar15[1];
      bVar17 = iVar8 == iVar7;
      if (bVar17) {
        *(int *)(plVar15 + 1) = iVar8 + 1;
        iVar7 = iVar8;
      }
      iVar8 = iVar7;
      UNLOCK();
    } while (!bVar17);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    bVar17 = false;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14a5ad9e0;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    local_78[0] = &LAB_14783ef68;
    local_50 = uVar11;
    plStack_48 = plVar15;
    FUN_14170b918(&local_98,local_78);
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_88 = 0;
  puVar4 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar10 = (uint *)*puVar4;
  if (puVar10 != (uint *)0x0) goto LAB_143395cbc;
  do {
    uVar12 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar12 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar12 | 1;
      __tlregdtor(&LAB_14338b252);
    }
    lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar9 = *(undefined4 **)(lVar6 + 0x310);
    *(undefined8 *)(lVar6 + 0x310) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar9 = 0xffffffff;
    *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
    puVar9[0x12] = 0;
    *puVar4 = puVar9;
    FUN_140217a48(puVar4);
    puVar10 = (uint *)*puVar4;
LAB_143395cbc:
    uVar13 = *(longlong *)(puVar10 + 0x10) + 0xf;
    uVar12 = puVar10[0x12];
    while( true ) {
      puVar14 = (undefined8 *)(uVar13 & 0xfffffffffffffff0);
      if (puVar14 + 0x22 <= puVar10 + 0x4000) {
        *(undefined8 **)(puVar10 + 0x10) = puVar14 + 0x22;
        puVar10[0x12] = uVar12 + 1;
        FUN_1447247dc(puVar14,0);
        *puVar14 = &PTR_FUN_14a5acd00;
        if (!bVar17) {
          LOCK();
          *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
          UNLOCK();
        }
        puVar14[0x16] = FUN_14783ee96;
        puVar14[0x18] = 0;
        puVar14[0x1a] = &PTR_LAB_14a5ad9c0;
        puVar14[0x1b] = uVar11;
        puVar14[0x1c] = plVar15;
        puVar14[0x1e] = local_98;
        puVar14[0x1f] = plStack_90;
        local_98 = 0;
        plStack_90 = (longlong *)0x0;
        *(undefined1 *)(puVar14 + 0x20) = 0;
        if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
        }
        puVar14[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar14[9] = puVar14;
        puVar14[10] = puVar14;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar14[0xf] = uVar11;
        puVar14[0x10] = 0xd80000527800b400;
        *(undefined4 *)((longlong)puVar14 + 0x1c) = 0;
        if (puVar14 == (undefined8 *)0x0) {
          local_79 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
          local_79 = 1;
          FUN_1447439e4(puVar14);
          LOCK();
          piVar2 = (int *)(puVar14 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        plVar1 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_90 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar2 = (int *)((longlong)plVar1 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
        }
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar16 = &local_58;
          if (local_68 != (undefined ***)0x0) {
            pppuVar16 = local_68;
          }
          (*(code *)(*pppuVar16)[2])(pppuVar16);
        }
        if (!bVar17) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
        if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar5 = *puVar10;
      *puVar10 = *puVar10 + uVar12 + 1;
      UNLOCK();
      if ((uVar5 ^ uVar12) != 0xffffffff) break;
      puVar10 = (uint *)*puVar4;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar4 = puVar10;
      uVar13 = (longlong)puVar10 + 0x67;
      uVar12 = 0;
    }
  } while( true );
}



// FUNCTION 143395fcc FUN_143395fcc body=921 status=ok
// SIG undefined FUN_143395fcc(void)

void FUN_143395fcc(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  longlong *local_58;
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)*param_1;
  plVar2 = (longlong *)(param_2 + 0xa0);
  *(undefined4 *)(param_2 + 0xa8) = 0;
  if (*(int *)(param_2 + 0xac) != 0) {
    FUN_144893a1c(plVar2,0);
  }
  FUN_147832516(plVar5,local_50,plVar5 + 0x78);
  (**(code **)(*plVar5 + 0x1f8))(plVar5,&local_60,local_50);
  if (local_60 == (longlong *)0x0) goto LAB_143396307;
  (**(code **)(*local_60 + 0x1a0))
            (local_60,*(undefined8 *)(plVar5[0x97] + 0x18 + (longlong)(int)param_1[1] * 0x28));
  uVar3 = *(uint *)(plVar5[0x97] + 0xc + (longlong)(int)param_1[1] * 0x28);
  iVar4 = *(int *)(param_2 + 0xa8);
  iVar7 = iVar4 + uVar3;
  *(int *)(param_2 + 0xa8) = iVar7;
  if ((uint)(*(int *)(param_2 + 0xac) - iVar4) < uVar3) {
    FUN_1447403be(plVar2);
    iVar7 = *(int *)(param_2 + 0xa8);
  }
  (**(code **)(*local_60 + 0x170))(local_60,*plVar2,(longlong)iVar7);
  if (*(char *)((longlong)plVar5 + 0x46b) == '\x01') {
    cVar6 = (**(code **)(*plVar5 + 0x1d8))(plVar5);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_2 + 0xa8) = 0;
      if (*(int *)(param_2 + 0xac) != 0) {
        FUN_144893a1c(plVar2,0);
      }
      *(undefined4 *)(param_2 + 0xb4) = 6;
      goto LAB_143396307;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = plVar5[0x8e];
    local_80 = (undefined4)plVar5[0x8f];
    local_98 = *(undefined8 *)(param_2 + 0xa0);
    local_90 = *(undefined4 *)(param_2 + 0xa8);
    cVar6 = (**(code **)(*plVar5 + 0x1f0))(plVar5,&local_98,&local_78);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_2 + 0xa8) = 0;
      if (*(int *)(param_2 + 0xac) != 0) {
        FUN_144893a1c(plVar2,0);
      }
      *(undefined4 *)(param_2 + 0xb4) = 5;
    }
    else if (plVar2 != &local_78) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0xa0) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0xa8) = (undefined4)uStack_70;
      *(undefined4 *)(param_2 + 0xac) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (cVar6 == '\0') goto LAB_143396307;
  }
  if (*(char *)((longlong)plVar5 + 0x46a) == '\x01') {
    cVar6 = (**(code **)(*plVar5 + 0x1c0))(plVar5);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_2 + 0xa8) = 0;
      if (*(int *)(param_2 + 0xac) != 0) {
        FUN_144893a1c(plVar2,0);
      }
      *(undefined4 *)(param_2 + 0xb4) = 4;
      goto LAB_143396307;
    }
    local_78 = 0;
    uStack_70 = 0;
    cVar6 = (**(code **)(*plVar5 + 0x1c8))(plVar5,plVar2,&local_78);
    if (cVar6 == '\0') {
      *(undefined4 *)(param_2 + 0xa8) = 0;
      if (*(int *)(param_2 + 0xac) != 0) {
        FUN_144893a1c(plVar2,0);
      }
      *(undefined4 *)(param_2 + 0xb4) = 3;
    }
    else if (plVar2 != &local_78) {
      if (*plVar2 != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_2 + 0xa0) = local_78;
      local_78 = 0;
      *(undefined4 *)(param_2 + 0xa8) = (undefined4)uStack_70;
      *(undefined4 *)(param_2 + 0xac) = uStack_70._4_4_;
      uStack_70 = 0;
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (cVar6 == '\0') goto LAB_143396307;
  }
  plVar2 = local_58;
  local_60 = (longlong *)0x0;
  if (local_58 != (longlong *)0x0) {
    local_58 = (longlong *)0x0;
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_143396307:
  plVar2 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_58 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143396384 FUN_143396384 body=12 status=ok
// SIG undefined FUN_143396384(void)

void FUN_143396384(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014339638d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143396390 FUN_143396390 body=29 status=ok
// SIG undefined FUN_143396390(void)

undefined8 FUN_143396390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


