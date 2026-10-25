// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1404609f2 FUN_1404609f2 body=1252 status=ok
// SIG undefined FUN_1404609f2(void)

undefined1 *
FUN_1404609f2(undefined1 *param_1,char param_2,undefined8 *param_3,longlong param_4,
             undefined8 param_5)

{
  ulonglong *puVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined **local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined1 local_70;
  longlong local_60;
  undefined8 local_58;
  undefined *local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == '\0') {
    *param_1 = 0;
    param_1[1] = param_4 != 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 **)(param_1 + 0x10) = param_3;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    FUN_140e8e738(&local_50);
    iVar3 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_50);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8338a0) {
      FUN_144b3d300(&DAT_14c8338a0);
      if (DAT_14c8338a0 == -1) {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
    }
    (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
    param_1[1] = param_4 != 0;
    *param_1 = 0 < iVar3;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 **)(param_1 + 0x10) = param_3;
    if (0 < iVar3) {
      FUN_140056680(&local_60,param_5);
      FUN_140069376(param_3);
      puVar1 = param_3 + 0xe;
      puVar5 = (undefined8 *)(param_3[0xe] + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x39;
      if ((undefined8 *)param_3[0xf] < puVar4) {
        FUN_140023dd8(puVar1,0x1d0);
        puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar4 = puVar5 + 0x39;
      }
      *puVar1 = (ulonglong)puVar4;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9e1d98) {
        FUN_144b3d300(&DAT_14c9e1d98);
        if (DAT_14c9e1d98 == -1) {
          FUN_14596f92a(&local_50);
          local_70 = 0;
          local_80 = 0;
          local_a0 = "Unknown";
          local_b0 = 0;
          uStack_a8 = 0;
          local_b8 = L"FEmptyShaderParameters";
          local_78 = 0;
          local_90 = 0x10;
          local_98 = 0x7a6;
          local_88 = &local_50;
          FUN_140b49562(&DAT_14c9e1d18,0,1);
          if (local_50 != (undefined *)0x0) {
            FUN_1400020a8();
          }
          atexit((_func_5014 *)&LAB_1432151c6);
          _Init_thread_footer(&DAT_14c9e1d98);
        }
      }
      local_50 = &DAT_14ca95bb0;
      local_48 = DAT_14c9e1d60;
      if (DAT_14c9e1d60 != 0) {
        LOCK();
        *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
        UNLOCK();
      }
      local_40 = &DAT_14c9e1d18;
      local_b8 = (wchar_t *)((ulonglong)local_b8 & 0xffffffffffffff00);
      FUN_140068f1a(puVar5);
      *puVar5 = &PTR_FUN_14a38b5a0;
      puVar5[0x37] = local_60;
      local_60 = 0;
      *(undefined4 *)(puVar5 + 0x38) = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar5 + 0x1c4) = local_58._4_4_;
      local_58 = 0;
      *puVar5 = &PTR_FUN_14a38b580;
      iVar3 = *(int *)(param_3 + 0x2e);
      *(uint *)(param_3 + 0x2e) = iVar3 + 1U;
      if (*(uint *)((longlong)param_3 + 0x174) < iVar3 + 1U) {
        FUN_14470e57a(param_3 + 0x2d,iVar3);
      }
      *(undefined8 **)(param_3[0x2d] + (longlong)iVar3 * 8) = puVar5;
      iVar3 = *(int *)(param_3 + 0x2e) + -1;
      *(int *)((longlong)puVar5 + 0x2c) = iVar3;
      *(byte *)(puVar5 + 7) = *(byte *)(puVar5 + 7) | 8;
      uVar2 = *(ushort *)(puVar5 + 5);
      *(int *)(puVar5 + 9) = iVar3;
      *(int *)((longlong)puVar5 + 0x4c) = iVar3;
      iVar3 = *(int *)(puVar5 + 0x1a);
      *(uint *)(puVar5 + 0x1a) = iVar3 + 1U;
      if (*(uint *)((longlong)puVar5 + 0xd4) < iVar3 + 1U) {
        FUN_14742e1f0(puVar5 + 0x18,iVar3);
      }
      puVar4 = puVar5 + 0x18;
      if ((undefined8 *)puVar5[0x19] != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)puVar5[0x19];
      }
      puVar4[iVar3] = puVar5;
      iVar3 = *(int *)(puVar5 + 0x1d);
      *(uint *)(puVar5 + 0x1d) = iVar3 + 1U;
      if (*(uint *)((longlong)puVar5 + 0xec) < iVar3 + 1U) {
        FUN_14742e1f0(puVar5 + 0x1b,iVar3);
      }
      puVar4 = puVar5 + 0x1b;
      if ((undefined8 *)puVar5[0x1c] != (undefined8 *)0x0) {
        puVar4 = (undefined8 *)puVar5[0x1c];
      }
      puVar4[iVar3] = puVar5;
      *(uint *)(param_3 + 0x2a) = *(int *)(param_3 + 0x2a) + (uint)((uVar2 >> 2 & 1) != 0);
      *(int *)((longlong)param_3 + 0x154) = *(int *)((longlong)param_3 + 0x154) + (uVar2 & 1);
      *(undefined4 *)((longlong)puVar5 + 0x1ac) = *(undefined4 *)(param_3[3] + 0x17c);
      puVar5[0x36] = *param_3;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140460ed8 FUN_140460ed8 body=121 status=ok
// SIG undefined FUN_140460ed8(void)

void FUN_140460ed8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14480c2ea(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1401f5dc4(param_1 + 0x10,0);
  return;
}



// FUNCTION 140460f52 FUN_140460f52 body=1923 status=ok
// SIG undefined FUN_140460f52(void)

void FUN_140460f52(char *param_1)

{
  ulonglong *puVar1;
  int *piVar2;
  uint uVar3;
  ushort uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined1 auStack_e8 [32];
  undefined1 **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 **local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined1 *local_78;
  longlong local_70;
  undefined ***local_68;
  undefined **local_58;
  code *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_1 != '\x01') goto LAB_14046120f;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (puVar5 != (undefined8 *)0x0) {
    FUN_140069376(puVar5);
    puVar1 = puVar5 + 0xe;
    puVar19 = (undefined8 *)(puVar5[0xe] + 7 & 0xfffffffffffffff8);
    puVar18 = puVar19 + 0x38;
    if ((undefined8 *)puVar5[0xf] < puVar18) {
      FUN_140023dd8(puVar1,0x1c8);
      puVar19 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar19 + 0x38;
    }
    *puVar1 = (ulonglong)puVar18;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
      FUN_14596f92a(&local_78);
      local_80 = 0;
      local_90 = 0;
      local_b0 = "Unknown";
      local_c0 = 0;
      uStack_b8 = 0;
      local_c8 = (undefined1 **)0x14a236994;
      local_88 = 0;
      local_a0 = 0x10;
      local_a8 = 0x7a6;
      local_98 = &local_78;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_78 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1432151c6);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
    local_78 = &DAT_14ca95bc0;
    local_70 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_68 = (undefined ***)&DAT_14c9e1d18;
    local_c8 = (undefined1 **)((ulonglong)local_c8 & 0xffffffffffffff00);
    FUN_140068f1a(puVar19);
    *puVar19 = &PTR_FUN_14a38b5c0;
    iVar8 = *(int *)(puVar5 + 0x2e);
    *(uint *)(puVar5 + 0x2e) = iVar8 + 1U;
    if (*(uint *)((longlong)puVar5 + 0x174) < iVar8 + 1U) {
      FUN_14470e57a(puVar5 + 0x2d,iVar8);
    }
    *(undefined8 **)(puVar5[0x2d] + (longlong)iVar8 * 8) = puVar19;
    iVar8 = *(int *)(puVar5 + 0x2e) + -1;
    *(int *)((longlong)puVar19 + 0x2c) = iVar8;
    *(byte *)(puVar19 + 7) = *(byte *)(puVar19 + 7) | 8;
    uVar4 = *(ushort *)(puVar19 + 5);
    *(int *)(puVar19 + 9) = iVar8;
    *(int *)((longlong)puVar19 + 0x4c) = iVar8;
    iVar8 = *(int *)(puVar19 + 0x1a);
    *(uint *)(puVar19 + 0x1a) = iVar8 + 1U;
    if (*(uint *)((longlong)puVar19 + 0xd4) < iVar8 + 1U) {
      FUN_14742e1f0(puVar19 + 0x18,iVar8);
    }
    puVar18 = puVar19 + 0x18;
    if ((undefined8 *)puVar19[0x19] != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)puVar19[0x19];
    }
    puVar18[iVar8] = puVar19;
    iVar8 = *(int *)(puVar19 + 0x1d);
    *(uint *)(puVar19 + 0x1d) = iVar8 + 1U;
    if (*(uint *)((longlong)puVar19 + 0xec) < iVar8 + 1U) {
      FUN_14742e1f0(puVar19 + 0x1b,iVar8);
    }
    puVar18 = puVar19 + 0x1b;
    if ((undefined8 *)puVar19[0x1c] != (undefined8 *)0x0) {
      puVar18 = (undefined8 *)puVar19[0x1c];
    }
    puVar18[iVar8] = puVar19;
    *(uint *)(puVar5 + 0x2a) = *(int *)(puVar5 + 0x2a) + (uint)((uVar4 >> 2 & 1) != 0);
    *(int *)((longlong)puVar5 + 0x154) = *(int *)((longlong)puVar5 + 0x154) + (uVar4 & 1);
    *(undefined4 *)((longlong)puVar19 + 0x1ac) = *(undefined4 *)(puVar5[3] + 0x17c);
    puVar19[0x36] = *puVar5;
    goto LAB_14046120f;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_147381ad4();
    goto LAB_140461567;
  }
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar6 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_14046115d;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_140461551;
      goto LAB_140461166;
    }
  }
  else {
LAB_14046115d:
    if (iVar8 != 0x10) {
LAB_140461166:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar6 + 0xc60), iVar8 == 2))
        goto LAB_140461551;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_140461551;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar5 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar5;
        if (puVar12 != (uint *)0x0) goto LAB_1404612ef;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_1432149cc);
          }
          lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar6 + 0x310);
          *(undefined8 *)(lVar6 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar5 = puVar11;
          FUN_140217a48(puVar5);
          puVar12 = (uint *)*puVar5;
LAB_1404612ef:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x16);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar5;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar5 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x16);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14046136f;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14046136f:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a38b600;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_78 = (undefined1 *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78 = (undefined1 *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar2 = (int *)(puVar18 + 1);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_c8 = &local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14a2b3190;
        local_50 = FUN_14321568c;
        local_78 = &LAB_142ea45a2;
        FUN_14005a792(&DAT_14ca9a440,L"EndCaptureCommand",&DAT_14ca960cc);
        if (local_78 != (undefined1 *)0x0) {
          pppuVar15 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar15 = &local_58;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
LAB_14046120f:
      if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
LAB_140461551:
  FUN_147381ad4();
LAB_140461567:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_e8);
}



// FUNCTION 1404616ef FUN_1404616ef body=40570 status=ok
// SIG undefined FUN_1404616ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404616ef(longlong param_1,longlong param_2,longlong *param_3,uint param_4,byte param_5,
                  char param_6,byte param_7,longlong *param_8,undefined4 param_9,undefined4 param_10
                  ,longlong *param_11,double *param_12,longlong param_13,undefined4 param_14,
                  undefined4 param_15,longlong *param_16,double *param_17,longlong param_18,
                  undefined4 param_19,undefined4 param_20,longlong *param_21,double *param_22,
                  double *param_23,longlong param_24,double *param_25,byte param_26,byte param_27,
                  uint *param_28)

{
  ulonglong *puVar1;
  double dVar2;
  ushort uVar3;
  code *pcVar4;
  undefined1 uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined *puVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  double dVar20;
  double *pdVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  int *piVar26;
  uint uVar27;
  undefined4 uVar28;
  ulonglong uVar29;
  undefined ***pppuVar31;
  int iVar32;
  double *pdVar33;
  undefined8 *puVar34;
  byte bVar35;
  uint uVar36;
  undefined **ppuVar37;
  undefined4 *puVar38;
  int iVar39;
  undefined7 uVar40;
  longlong lVar41;
  undefined8 *puVar42;
  undefined **ppuVar43;
  ulonglong uVar44;
  undefined8 *puVar45;
  bool bVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar51;
  double dVar52;
  undefined1 auVar50 [16];
  int iVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  longlong lVar59;
  double dVar61;
  double dVar62;
  undefined1 auVar60 [16];
  double dVar63;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  longlong lVar69;
  longlong lVar70;
  undefined1 auVar71 [16];
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  double dVar76;
  double dVar77;
  double dVar81;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  double dVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auStack_988 [32];
  undefined8 local_968;
  undefined1 local_960 [16];
  char *local_950;
  code *local_948;
  code *local_940;
  undefined ***local_938;
  undefined1 *local_930;
  undefined1 *local_928;
  undefined1 *local_920;
  undefined4 local_918;
  undefined8 local_910;
  longlong local_900;
  ulonglong *local_8f8;
  ulonglong local_8f0;
  ulonglong local_8e8;
  longlong *local_8e0;
  ulonglong local_8d8;
  ulonglong local_8d0;
  undefined8 *local_8c8;
  undefined8 *local_8c0;
  double local_8b8;
  undefined *local_8b0;
  ulonglong local_8a8;
  ulonglong local_8a0;
  undefined *local_898;
  undefined8 *local_890;
  undefined4 local_884;
  undefined **local_880;
  byte local_873;
  undefined1 local_872;
  byte local_871;
  undefined **local_870;
  undefined **local_868;
  double dStack_860;
  undefined8 local_858;
  undefined8 local_850;
  longlong *local_848;
  uint local_840;
  uint local_83c;
  undefined8 local_838;
  undefined8 uStack_830;
  longlong *local_820;
  ulonglong local_818;
  ulonglong local_810;
  float local_808;
  undefined4 uStack_804;
  double dStack_800;
  undefined ***local_7f0;
  ulonglong local_7e8;
  undefined4 local_7e0;
  uint local_7dc;
  uint local_7d8;
  undefined4 local_7d4;
  longlong *local_7d0;
  longlong local_7c8;
  longlong local_7c0;
  longlong local_7b8;
  undefined8 local_7b0;
  wchar_t *local_7a8;
  undefined8 *local_7a0;
  undefined8 local_798;
  undefined1 local_789;
  int local_788 [32];
  undefined1 local_708 [16];
  double local_6f8;
  longlong lStack_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  double local_6d8;
  undefined8 uStack_6d0;
  double local_6c8;
  double dStack_6c0;
  double local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  double local_688;
  double local_680;
  double local_678;
  longlong local_668 [16];
  double local_5e8 [6];
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  double local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  double local_578;
  undefined8 local_570;
  undefined8 local_568;
  ulonglong local_560;
  undefined1 local_540;
  undefined1 local_4b8;
  undefined8 local_4a8 [16];
  undefined1 local_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  ulonglong local_3f8;
  undefined8 *local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined4 local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined1 *puStack_3b8;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined1 *puStack_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_32c;
  undefined4 local_324;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 uStack_2a0;
  undefined7 uStack_29f;
  undefined1 uStack_298;
  undefined8 uStack_297;
  undefined1 local_28f;
  undefined8 local_28c;
  undefined1 *local_284;
  undefined4 local_27c;
  undefined4 local_278;
  undefined1 local_274;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined1 uStack_248;
  undefined7 local_247;
  undefined1 uStack_240;
  undefined8 uStack_23f;
  undefined8 uStack_230;
  undefined3 uStack_228;
  undefined5 local_225;
  undefined3 uStack_220;
  undefined8 uStack_21d;
  undefined1 local_200 [72];
  longlong local_1b8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  byte local_17c;
  undefined **local_178;
  longlong lStack_170;
  undefined *local_168;
  undefined8 local_160;
  int local_158;
  int local_154;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  ulonglong local_f0;
  undefined6 uVar30;
  longlong lVar64;
  longlong lVar68;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_988;
  local_668[2] = 0;
  local_668[3] = 0x8000000000;
  FUN_1401b5a8c(&local_688,0);
  FUN_14031f39e(local_200,0,param_2,&local_688);
  if (local_668[2] != 0) {
    FUN_1400020a8();
  }
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  local_17c = local_17c | 0x10;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar42 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar42 + 0x6b;
  local_900 = param_1;
  local_8f8 = puVar1;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x368);
    puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar42 + 0x6b;
  }
  lVar17 = local_900;
  *(undefined8 **)(local_900 + 0x70) = puVar9;
  *puVar42 = &PTR_FUN_14a2e9980;
  local_840 = param_4;
  FUN_14031f528(&local_688,local_200);
  FUN_1448ee4fa(puVar42 + 1,&local_688);
  FUN_14475059c(&local_688);
  local_848 = (longlong *)(lVar17 + 0x98);
  iVar22 = *(int *)(lVar17 + 0xa0);
  *(uint *)(lVar17 + 0xa0) = iVar22 + 1U;
  if (*(uint *)(lVar17 + 0xa4) < iVar22 + 1U) {
    FUN_1448cfae8(local_848,iVar22);
  }
  *(undefined8 **)(*(longlong *)(local_900 + 0x98) + (longlong)iVar22 * 8) = puVar42;
  puVar42[0x30] = param_3;
  plVar16 = &DAT_14c846400;
  plVar12 = local_668;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *plVar12 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar12 = plVar12 + 1;
  }
  pdVar21 = (double *)&DAT_14c846400;
  pdVar33 = local_5e8;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar33 = *pdVar21;
    pdVar21 = pdVar21 + 1;
    pdVar33 = pdVar33 + 1;
  }
  local_540 = 0;
  local_4b8 = 0;
  local_418 = DAT_14c8464e0;
  uStack_410 = DAT_14c8464e8;
  local_408 = DAT_14c8464f0;
  local_3e8 = 0;
  uStack_3e0 = 0;
  local_3d8 = 0xffffffff;
  local_3d0 = 0;
  uStack_3c8 = 0;
  local_3c0 = 0;
  puStack_3b8 = (undefined1 *)0x0;
  local_3b0 = (undefined1 *)0x0;
  local_3a8 = &DAT_3f8000003f800000;
  puStack_3a0 = &DAT_3f8000003f800000;
  local_398 = 0xffffffff00000000;
  local_390 = 0x42c80000;
  local_338 = 0;
  local_330 = 0;
  local_358 = 0;
  uStack_350 = 0;
  local_368 = 0;
  uStack_360 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_388 = 0;
  uStack_380 = 0;
  local_32c = 0xffffffff00000080;
  local_324 = 0;
  local_318 = 0;
  local_310 = 0;
  local_308 = 0;
  local_300 = 0xffffffff00000000;
  local_2e8 = 0;
  local_2e0 = 0x8000000000;
  uStack_2d8 = 0xffffffff;
  local_2c8 = 0;
  local_2c0 = 0;
  local_2b8 = 0xffffffffffffffff;
  local_2b0 = 0xbf8000003f800000;
  local_2a8 = 0;
  uStack_2a0 = 0;
  uStack_29f = 0;
  uStack_298 = 0;
  uStack_297 = 0;
  local_28f = 1;
  local_28c = 0x42b4000042b40000;
  local_27c = 0;
  local_284 = &DAT_3f8000003f800000;
  local_274 = 0;
  local_278 = 0;
  local_270 = 0x3f800000bf800000;
  local_268 = 0x3f800000;
  uStack_240 = 0;
  uStack_23f = 0;
  uStack_250 = 0;
  uStack_248 = 0;
  local_247 = 0;
  local_260 = 0;
  uStack_258 = 0;
  uStack_220 = 0;
  uStack_21d = 0;
  uStack_230 = 0;
  uStack_228 = 0;
  local_225 = 0;
  puVar9 = &DAT_14c846400;
  puVar34 = local_4a8;
  for (lVar17 = 0x10; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar34 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar34 = puVar34 + 1;
  }
  local_428 = 1;
  local_810 = (ulonglong)
              (longlong)ROUND((param_12[3] - param_12[1]) + (param_12[3] - param_12[1]) + 0.5) >> 1;
  local_818 = (ulonglong)
              (longlong)ROUND((param_12[2] - *param_12) + (param_12[2] - *param_12) + 0.5) >> 1;
  local_7e8 = local_818 & 0xffffffff | local_810 << 0x20;
  local_568 = 0;
  local_400 = 0;
  local_850 = *param_25;
  local_880 = (undefined **)param_25[1];
  local_8b8 = param_25[3];
  local_858 = param_25[2];
  dVar2 = *param_23;
  dVar49 = param_23[1];
  dVar85 = param_23[2];
  local_868 = (undefined **)param_23[8];
  dStack_860 = param_23[9];
  dVar63 = param_23[10];
  dStack_800 = param_23[0xb];
  dVar47 = (local_850 + local_858) * 0.5 * (double)local_868;
  dVar51 = ((double)local_880 + local_8b8) * 0.5 * dStack_860;
  dVar62 = dVar63 * 0.0;
  dVar48 = dVar51 * dVar2 - dVar49 * dVar47;
  dVar52 = dVar62 * dVar49 - dVar85 * dVar51;
  dVar55 = dVar62 * dVar2;
  dVar76 = dVar47 * dVar85 - dVar55;
  dVar52 = dVar52 + dVar52;
  dVar76 = dVar76 + dVar76;
  dVar20 = param_23[3];
  dVar56 = param_23[3];
  dVar48 = dVar48 + dVar48;
  local_838 = 0;
  uStack_830 = 0x3ff0000000000000;
  dVar77 = dVar2 * 0.0 - dVar49 * 0.0;
  dVar81 = dVar49 * 1.0 - dVar85 * 0.0;
  dVar54 = dVar85 * 0.0 - dVar2 * 1.0;
  dVar81 = dVar81 + dVar81;
  dVar54 = dVar54 + dVar54;
  dVar77 = dVar77 + dVar77;
  uStack_804 = (undefined4)((ulonglong)dVar63 >> 0x20);
  _local_808 = CONCAT44(uStack_804,(float)dVar63);
  dVar63 = (double)(float)dVar63;
  local_678 = (dVar77 * dVar20 + 1.0 + (dVar54 * dVar2 - dVar81 * dVar49)) * dVar63 +
              dVar48 * dVar20 + dVar62 + (dVar76 * dVar2 - dVar52 * dVar49) + param_23[6];
  local_688 = ((dVar77 * dVar49 - dVar54 * dVar85) + dVar20 * dVar81 + 0.0) * dVar63 +
              (dVar48 * dVar49 - dVar76 * dVar85) + dVar20 * dVar52 + dVar47 + param_23[4];
  local_680 = (dVar85 * dVar52 - dVar2 * dVar48) + dVar56 * dVar76 + dVar51 + param_23[5] +
              ((dVar85 * dVar81 - dVar2 * dVar77) + dVar56 * dVar54 + 0.0) * dVar63;
  dVar48 = (double)local_868 * 1.0;
  dVar52 = dStack_860 * 0.0;
  dVar47 = dVar52 * dVar2 - dVar48 * dVar49;
  dVar51 = dVar62 * dVar49 - dVar52 * dVar85;
  dVar76 = dVar48 * dVar85 - dVar55;
  dVar51 = dVar51 + dVar51;
  dVar76 = dVar76 + dVar76;
  dVar47 = dVar47 + dVar47;
  dVar77 = dVar47 * dVar20 + dVar62 + (dVar76 * dVar2 - dVar51 * dVar49);
  dVar63 = (dVar47 * dVar49 - dVar76 * dVar85) + dVar20 * dVar51 + dVar48;
  dVar54 = (dVar85 * dVar51 - dVar2 * dVar47) + dVar56 * dVar76 + dVar52;
  dVar81 = (double)local_868 * 0.0;
  dVar61 = dStack_860 * 1.0;
  dVar47 = dVar61 * dVar2 - dVar81 * dVar49;
  dVar51 = dVar62 * dVar49 - dVar61 * dVar85;
  dVar55 = dVar81 * dVar85 - dVar55;
  dVar51 = dVar51 + dVar51;
  dVar55 = dVar55 + dVar55;
  dVar47 = dVar47 + dVar47;
  dVar52 = -dVar2;
  dVar76 = -dVar49;
  dVar48 = dVar76 - dVar49;
  auVar87._0_8_ = dVar20 * dVar51 + dVar81;
  auVar87._8_8_ = dVar56 * dVar55 + dVar61;
  dVar81 = dVar47 * dVar20 + dVar62 + (dVar55 * dVar2 - dVar51 * dVar49);
  dVar55 = (dVar47 * dVar49 - dVar55 * dVar85) + auVar87._0_8_;
  dVar62 = (dVar85 * dVar51 - dVar2 * dVar47) + auVar87._8_8_;
  dVar85 = dVar85 * -1.0;
  auVar86._8_8_ = param_23[3] * 1.0;
  dVar20 = dVar85 + dVar85;
  dVar56 = (dVar52 - dVar2) * dVar52;
  uStack_6e0 = 1.0 - (dVar85 * dVar20 + dVar56);
  local_6b8 = 1.0 - (dVar56 + dVar48 * dVar76);
  auVar86._0_8_ = auVar86._8_8_;
  dStack_6c0 = (dVar52 - dVar2) * auVar86._8_8_;
  dVar56 = dVar48 * dVar52 + dVar20 * auVar86._8_8_;
  local_6d8 = dVar20 * dVar76 + dStack_6c0;
  local_6e8 = dVar48 * dVar52 - dVar20 * auVar86._8_8_;
  dStack_6c0 = dVar20 * dVar76 - dStack_6c0;
  local_6c8 = dVar48 * auVar86._8_8_ + dVar52 * dVar20;
  local_6f8 = dVar52 * dVar20 - dVar48 * auVar86._8_8_;
  local_708._8_4_ = SUB84(dVar56,0);
  local_708._0_8_ = 1.0 - (dVar85 * dVar20 + dVar48 * dVar76);
  local_708._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
  lStack_6f0 = 0;
  uStack_6d0 = 0;
  uStack_6b0 = 0;
  fVar73 = (float)((local_858 - local_850) * 0.5 *
                  SQRT(dVar77 * dVar77 + dVar63 * dVar63 + dVar54 * dVar54));
  local_6a8 = 0;
  uStack_6a0 = 0;
  local_698 = 0;
  uStack_690 = 0x3ff0000000000000;
  fVar74 = (float)((local_8b8 - (double)local_880) * 0.5 *
                  SQRT(dVar81 * dVar81 + dVar55 * dVar55 + dVar62 * dVar62));
  local_788[0] = 0;
  local_788[1] = 0x3ff00000;
  local_788[2] = 0;
  local_788[3] = 0;
  local_788[4] = 0;
  local_788[5] = 0;
  local_788[6] = 0;
  local_788[7] = 0;
  local_788[8] = 0;
  local_788[9] = 0;
  local_788[10] = 0;
  local_788[0xb] = -0x40100000;
  local_788[0xc] = 0;
  local_788[0xd] = 0;
  local_788[0xe] = 0;
  local_788[0xf] = 0;
  local_788[0x10] = 0;
  local_788[0x11] = 0;
  local_788[0x12] = 0;
  local_788[0x13] = 0;
  local_788[0x14] = 0;
  local_788[0x15] = -0x40100000;
  local_788[0x16] = 0;
  local_788[0x17] = 0;
  local_788[0x18] = 0;
  local_788[0x19] = 0;
  local_788[0x1a] = 0;
  local_788[0x1b] = 0;
  local_788[0x1c] = 0;
  local_788[0x1d] = 0;
  local_788[0x1e] = 0;
  local_788[0x1f] = 0x3ff00000;
  local_820 = param_3;
  local_560 = local_7e8;
  local_3f8 = local_7e8;
  local_3f0 = puVar42 + 1;
  FUN_1447fea8d(&local_178);
  lVar17 = local_900;
  pppuVar31 = &local_178;
  plVar16 = local_668;
  for (lVar18 = 0x10; lVar18 != 0; lVar18 = lVar18 + -1) {
    *plVar16 = (longlong)*pppuVar31;
    pppuVar31 = pppuVar31 + 1;
    plVar16 = plVar16 + 1;
  }
  local_5e8[5] = 1.0 / (double)fVar74;
  if ((fVar74 == 0.0) && (!NAN(fVar74))) {
    local_5e8[5] = 1.0;
  }
  local_578 = (double)(1.0 / local_808) * 0.0 + 1.0;
  local_598 = -(double)(1.0 / local_808);
  local_5e8[0] = 1.0 / (double)fVar73;
  if ((fVar73 == 0.0) && (!NAN(fVar73))) {
    local_5e8[0] = 1.0;
  }
  local_5e8[1] = 0.0;
  local_5e8[2] = 0.0;
  local_5e8[3] = 0.0;
  local_5e8[4] = 0.0;
  local_5b8 = 0;
  uStack_5b0 = 0;
  local_5a8 = 0;
  uStack_5a0 = 0;
  local_590 = 0;
  uStack_588 = 0;
  local_580 = 0;
  local_570 = 0x3ff0000000000000;
  dVar20 = *(double *)(param_24 + 0x10);
  fVar72 = (float)(*(double *)(param_24 + 0x28) - dVar20);
  uStack_3c8 = 0;
  local_3c0 = 0x3f80000000000000;
  puStack_3b8 = &DAT_3f8000003f800000;
  local_3b0 = &DAT_3f8000003f800000;
  puVar34 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar34 + 0x2784;
  if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
    puVar9 = (undefined8 *)FUN_14001cc68(0x20000,0);
    *(undefined4 *)(puVar9 + 1) = 0x1fff0;
    *puVar9 = *(undefined8 *)(lVar17 + 0x80);
    *(undefined8 **)(lVar17 + 0x80) = puVar9;
    *(undefined8 **)(lVar17 + 0x78) = puVar9 + 0x4000;
    puVar34 = (undefined8 *)((longlong)puVar9 + 0x1fU & 0xfffffffffffffff0);
    puVar9 = puVar34 + 0x2784;
  }
  if (fVar72 <= 1.0) {
    fVar72 = 1.0;
  }
  *(undefined8 **)(lVar17 + 0x70) = puVar9;
  *puVar34 = &PTR_FUN_14a2e9988;
  local_880 = (undefined **)(puVar34 + 2);
  FUN_144806294(local_880,&local_688);
  iVar22 = *(int *)(lVar17 + 0xa0);
  *(uint *)(lVar17 + 0xa0) = iVar22 + 1U;
  if (*(uint *)(lVar17 + 0xa4) < iVar22 + 1U) {
    FUN_1448cfae8(local_848,iVar22);
  }
  fVar82 = (float)(int)local_810;
  auVar79._4_12_ = auVar86._4_12_;
  auVar79._0_4_ = (float)(int)local_818;
  _local_808 = CONCAT44(uStack_804,(uint)param_27);
  *(undefined8 **)(*local_848 + (longlong)iVar22 * 8) = puVar34;
  iVar22 = *(int *)(puVar42 + 3);
  *(uint *)(puVar42 + 3) = iVar22 + 1U;
  if (*(uint *)((longlong)puVar42 + 0x1c) < iVar22 + 1U) {
    FUN_144928a2e(puVar42 + 2,iVar22);
  }
  fVar75 = (float)(int)local_808;
  *(undefined ***)(puVar42[2] + (longlong)iVar22 * 8) = local_880;
  *(undefined1 *)((longlong)puVar34 + 0x23fd) = 1;
  puVar34[0x621] = puVar34[0x9f];
  puVar34[0x622] = puVar34[0xa0];
  uVar10 = FUN_14001cc68(0x1960,0x10);
  FUN_1448e6882(uVar10);
  lVar17 = puVar34[0x624];
  puVar34[0x624] = uVar10;
  if (lVar17 != 0) {
    FUN_1400020a8();
    uVar10 = puVar34[0x624];
  }
  local_960._0_8_ = uVar10;
  local_968 = (wchar_t *)((ulonglong)local_968._4_4_ << 0x20);
  FUN_1401ee8d8(local_880,puVar34 + 0xa2,puVar34 + 0x24bc,0);
  lVar17 = puVar34[0x624];
  *(float *)(lVar17 + 0x1280) = (float)param_26;
  *(float *)(lVar17 + 0x1284) = fVar75;
  *(float *)(lVar17 + 0x1288) = fVar73 / auVar79._0_4_;
  *(float *)(lVar17 + 0x128c) = fVar74 / fVar82;
  lVar17 = puVar34[0x624];
  *(float *)(lVar17 + 0x1290) = 1.0 / fVar72;
  *(float *)(lVar17 + 0x1294) = (float)(-dVar20 / (double)fVar72);
  if (*(char *)(DAT_14ca6dc60 + 1) == '\x01') {
    uVar8 = 0xd;
    if (param_26 < 0xd) {
      uVar8 = (uint)param_26;
    }
    uVar8 = *(uint *)(&DAT_14a335530 + (ulonglong)uVar8 * 4);
    param_28 = (uint *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar8 >> 0xe & 0x3fc));
    puVar19 = &DAT_14c758c60 + (uVar8 >> 8 & 0xff);
    puVar23 = &DAT_14c758c60 + (uVar8 & 0xff);
    fVar73 = (float)(uVar8 >> 0x18) * 0.003921569;
  }
  else {
    puVar19 = param_28 + 1;
    puVar23 = param_28 + 2;
    fVar73 = (float)param_28[3];
  }
  uVar8 = *puVar23;
  uVar36 = *puVar19;
  auVar58 = ZEXT416(uVar36);
  auVar60 = ZEXT416(*param_28);
  lVar17 = puVar34[0x624];
  *(uint *)(lVar17 + 0x12a0) = *param_28;
  *(uint *)(lVar17 + 0x12a4) = uVar36;
  *(uint *)(lVar17 + 0x12a8) = uVar8;
  *(float *)(lVar17 + 0x12ac) = fVar73;
  local_83c = (uint)param_26;
  FUN_1401ee234(&local_178,puVar34[0x624],1,1);
  pppuVar31 = (undefined ***)(puVar34 + 5);
  if (pppuVar31 == &local_178) {
LAB_1404625d1:
    ppuVar43 = local_178;
    if (local_178 != (undefined **)0x0) {
      LOCK();
      ppuVar37 = local_178 + 1;
      puVar14 = *ppuVar37;
      *(uint *)ppuVar37 = *(uint *)ppuVar37 - 1;
      UNLOCK();
      if (((ulonglong)puVar14 & 0x3fffffff) == 1) {
        ppuVar37 = local_178 + 1;
        LOCK();
        uVar8 = *(uint *)ppuVar37;
        *(uint *)ppuVar37 = *(uint *)ppuVar37 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)((longlong)local_178 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = (longlong)ppuVar43;
          plVar16 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar16;
              LOCK();
              bVar46 = plVar16 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar46) {
                plVar16 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar46);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar46 = plVar12 != DAT_14ca843c8;
              plVar16 = plVar11;
              if (bVar46) {
                plVar12 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar46);
          }
        }
      }
    }
  }
  else {
    ppuVar43 = *pppuVar31;
    *pppuVar31 = local_178;
    local_178 = (undefined **)0x0;
    if (ppuVar43 != (undefined **)0x0) {
      LOCK();
      ppuVar37 = ppuVar43 + 1;
      puVar14 = *ppuVar37;
      *(uint *)ppuVar37 = *(uint *)ppuVar37 - 1;
      UNLOCK();
      if (((ulonglong)puVar14 & 0x3fffffff) == 1) {
        ppuVar37 = ppuVar43 + 1;
        LOCK();
        uVar8 = *(uint *)ppuVar37;
        *(uint *)ppuVar37 = *(uint *)ppuVar37 | 0x40000000;
        UNLOCK();
        if ((uVar8 >> 0x1e & 1) == 0) {
          bVar7 = *(byte *)((longlong)ppuVar43 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = (longlong)ppuVar43;
          plVar16 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar7 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar16;
              LOCK();
              bVar46 = plVar16 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar46) {
                plVar16 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar46);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar46 = plVar12 != DAT_14ca843c8;
              plVar16 = plVar11;
              if (bVar46) {
                plVar12 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar46);
          }
        }
      }
      goto LAB_1404625d1;
    }
  }
  local_708[4] = param_5;
  local_708._0_4_ = *(undefined4 *)(param_2 + 8);
  local_708._8_8_ = local_7e8;
  local_6f8 = (double)((ulonglong)local_6f8 & 0xffffffffffffff00);
  lStack_6f0 = 0;
  local_6e8 = 0.0;
  uStack_6e0 = (double)((ulonglong)uStack_6e0 & 0xffffffffffff0000);
  if (param_8 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
    lVar17 = (**(code **)(*param_8 + 8))(param_8);
    uVar5 = *(undefined1 *)(lVar17 + 0x33);
  }
  local_6f8 = (double)CONCAT71(local_6f8._1_7_,uVar5);
  local_7f0 = pppuVar31;
  if (param_11 != (longlong *)0x0) {
    (**(code **)(*param_11 + 0x30))(param_11);
  }
  uVar25 = (ulonglong)local_6e8;
  lVar17 = (longlong)(int)local_6e8;
  uVar8 = (int)local_6e8 + 1;
  local_6e8 = (double)CONCAT44(local_6e8._4_4_,uVar8);
  if (local_6e8._4_4_ < uVar8) {
    FUN_1402afe12(&lStack_6f0,uVar25 & 0xffffffff);
  }
  *(longlong **)(lStack_6f0 + lVar17 * 8) = param_11;
  if (param_16 != (longlong *)0x0) {
    (**(code **)(*param_16 + 0x30))(param_16);
  }
  uVar25 = (ulonglong)local_6e8;
  lVar17 = (longlong)(int)local_6e8;
  uVar8 = (int)local_6e8 + 1;
  local_6e8 = (double)CONCAT44(local_6e8._4_4_,uVar8);
  if (local_6e8._4_4_ < uVar8) {
    FUN_1402afe12(&lStack_6f0,uVar25 & 0xffffffff);
  }
  *(longlong **)(lStack_6f0 + lVar17 * 8) = param_16;
  if (param_21 != (longlong *)0x0) {
    (**(code **)(*param_21 + 0x30))(param_21);
  }
  uVar25 = (ulonglong)local_6e8;
  lVar17 = (longlong)(int)local_6e8;
  uVar8 = (int)local_6e8 + 1;
  local_6e8 = (double)CONCAT44(local_6e8._4_4_,uVar8);
  if (local_6e8._4_4_ < uVar8) {
    FUN_1402afe12(&lStack_6f0,uVar25 & 0xffffffff);
  }
  puVar1 = local_8f8;
  lVar18 = local_900;
  *(longlong **)(lStack_6f0 + lVar17 * 8) = param_21;
  uStack_6e0._0_2_ = CONCAT11(param_7,param_6);
  bVar7 = local_6f8._0_1_;
  local_868 = (undefined **)((ulonglong)local_6f8 & 0xff);
  bVar46 = false;
  uVar8 = (uint)param_7;
  if (local_868 == (undefined **)0x0) {
    uVar8 = 0;
  }
  local_838 = CONCAT44(local_838._4_4_,uVar8);
  if (*(int *)((longlong)&DAT_14c87341c + (ulonglong)((uint)local_6f8._0_1_ * 0x30)) == 4) {
    bVar46 = *(int *)((longlong)&DAT_14c873420 + (ulonglong)((uint)local_6f8._0_1_ * 0x30)) == 4;
  }
  if (local_6f8._0_1_ == 0) {
    local_858 = (double)((ulonglong)local_858._4_4_ << 0x20);
LAB_1404627fb:
    local_850 = (double)((ulonglong)local_850._4_4_ << 0x20);
  }
  else {
    uVar25 = CONCAT71((int7)((ulonglong)param_8 >> 8),param_7) & 0xffffffff;
    local_858 = (double)CONCAT44(local_858._4_4_,
                                 (int)CONCAT71((int7)(uVar25 >> 8),((byte)uVar25 ^ 1) & bVar46));
    if ((((param_7 & 1) != 0 || bVar46 != false) || (5 < local_708[4])) ||
       ((0x3aU >> (local_708[4] & 0x1f) & 1) == 0)) goto LAB_1404627fb;
    local_850 = (double)CONCAT44(local_850._4_4_,1);
  }
  if ((bVar46 == false) || (DAT_14ca84e27 != '\x01')) {
    local_884 = 0;
  }
  else {
    local_884 = (undefined4)
                CONCAT71((int7)((ulonglong)DAT_14ca6dc90 >> 8),*(int *)(DAT_14ca6dc90 + 4) != 0);
  }
  ppuVar43 = (undefined **)0x6000009;
  if (param_6 != '\0') {
    ppuVar43 = (undefined **)&DAT_00000009;
  }
  bVar35 = 0x44;
  if (*(longlong *)(&DAT_14ca814b0 + (ulonglong)DAT_14ca85550 * 0x3c) == DAT_14ca81490) {
    bVar35 = 0x22;
  }
  iVar22 = local_708._8_4_;
  iVar24 = local_708._12_4_;
  local_870 = ppuVar43;
  if (local_708[4] == 5) {
    if (local_6f8._0_1_ == 0) {
      uVar25 = 0;
      local_8b8 = 0.0;
      uVar29 = 0;
    }
    else {
      local_178 = (undefined **)((ulonglong)ppuVar43 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_154 = iVar22;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (iVar24 < DAT_14ca84e40) {
        iVar22 = iVar24;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      uVar25 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar29 = uVar25 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar29) {
        FUN_140023dd8(local_8f8,0x128);
        uVar25 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar29 = uVar25 + 0x120;
      }
      local_8d0 = lVar18 + 0x178;
      *(ulonglong *)(lVar18 + 0x70) = uVar29;
      FUN_1456bbb8c(uVar25,L"RenderTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_8d0,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(lVar18 + 0x178) + (longlong)iVar22 * 8) = uVar25;
      *(int *)(uVar25 + 0x9c) = *(int *)(lVar18 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83aa8;
      local_168 = puRam000000014ca83ab0;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83ab8);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      uVar44 = *(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar29 = uVar44 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(lVar18 + 0x78) < uVar29) {
        FUN_140023dd8(local_8f8,0x128);
        uVar44 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar29 = uVar44 + 0x120;
      }
      *(ulonglong *)(lVar18 + 0x70) = uVar29;
      FUN_1456bbb8c(uVar44,L"RenderTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_8d0,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(lVar18 + 0x178) + (longlong)iVar22 * 8) = uVar44;
      *(int *)(uVar44 + 0x9c) = *(int *)(lVar18 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83aa8;
      local_168 = puRam000000014ca83ab0;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83ab8);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      uVar29 = *(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar13 = uVar29 + 0x120;
      local_8b8 = (double)uVar44;
      local_178 = ppuVar43;
      if (*(ulonglong *)(lVar18 + 0x78) < uVar13) {
        FUN_140023dd8(local_8f8,0x128);
        uVar29 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar13 = uVar29 + 0x120;
      }
      *(ulonglong *)(lVar18 + 0x70) = uVar13;
      FUN_1456bbb8c(uVar29,L"RenderTexture2",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_8d0,iVar22);
      }
      *(ulonglong *)(*(longlong *)(lVar18 + 0x178) + (longlong)iVar22 * 8) = uVar29;
      *(int *)(uVar29 + 0x9c) = *(int *)(lVar18 + 0x180) + -1;
    }
    puVar1 = local_8f8;
    local_8d0 = uVar25;
    local_8a0 = uVar29;
    if ((char)local_858 == '\0') {
      local_8c8 = (undefined8 *)0x0;
      local_8c0 = (undefined8 *)0x0;
      ppuVar37 = (undefined **)0x0;
      local_8d8 = 0;
      local_8b0 = (undefined *)0x0;
      local_8f0 = uVar25;
    }
    else {
      if ((char)local_884 == '\0') {
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8f0 = *(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8f0 + 0x120;
        if (*(ulonglong *)(lVar18 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8f0 + 0x120;
        }
        lVar18 = local_900;
        lVar17 = local_900 + 0x178;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8f0,L"CompressTexture0",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
        *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8f0 + 0x94);
        local_8c8 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c8 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c8 + 9;
        }
        plVar16 = (longlong *)(local_900 + 0x198);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c8[1] = *(undefined8 *)(local_8f0 + 8);
        local_8c8[2] = 0;
        *(undefined1 *)(local_8c8 + 3) = 0;
        *(undefined8 *)((longlong)local_8c8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c8 + 5) = 0;
        *local_8c8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c8 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c8 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c8 + 0x35) = 0;
        *(undefined1 *)(local_8c8 + 7) = 0;
        local_8c8[8] = local_8f0;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        puVar1 = local_8f8;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c8;
        *(int *)((longlong)local_8c8 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8d8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8d8 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8d8 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8d8 + 0x120;
        }
        lVar18 = local_900;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8d8,L"CompressTexture1",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d8;
        *(int *)(local_8d8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8d8 + 0x94);
        local_8c0 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c0 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c0 + 9;
        }
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c0[1] = *(undefined8 *)(local_8d8 + 8);
        local_8c0[2] = 0;
        *(undefined1 *)(local_8c0 + 3) = 0;
        *(undefined8 *)((longlong)local_8c0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c0 + 5) = 0;
        *local_8c0 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c0 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c0 + 0x35) = 0;
        *(undefined1 *)(local_8c0 + 7) = 0;
        local_8c0[8] = local_8d8;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        puVar1 = local_8f8;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c0;
        *(int *)((longlong)local_8c0 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8b0 = (undefined *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = local_8b0 + 0x120;
        if (*(undefined **)(local_900 + 0x78) < puVar14) {
          FUN_140023dd8(local_8f8,0x128);
          local_8b0 = (undefined *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar14 = local_8b0 + 0x120;
        }
        lVar18 = local_900;
        *(undefined **)(local_900 + 0x70) = puVar14;
        FUN_1456bbb8c(local_8b0,L"CompressTexture2",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(undefined **)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8b0;
        *(int *)(local_8b0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = local_8b0[0x94];
        ppuVar37 = (undefined **)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        ppuVar43 = ppuVar37 + 9;
        if (*(undefined ***)(local_900 + 0x78) < ppuVar43) {
          FUN_140023dd8(local_8f8,0x50);
          ppuVar37 = (undefined **)(*puVar1 + 7 & 0xfffffffffffffff8);
          ppuVar43 = ppuVar37 + 9;
        }
        lVar18 = local_900;
        *(undefined ***)(local_900 + 0x70) = ppuVar43;
        ppuVar37[1] = *(undefined **)(local_8b0 + 8);
        ppuVar37[2] = (undefined *)0x0;
        *(undefined1 *)(ppuVar37 + 3) = 0;
        *(undefined8 *)((longlong)ppuVar37 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(ppuVar37 + 5) = 0;
        *ppuVar37 = (undefined *)&PTR_FUN_14a1fb948;
        *(undefined1 *)(ppuVar37 + 6) = uVar5;
        *(undefined4 *)((longlong)ppuVar37 + 0x31) = 0;
        *(undefined2 *)((longlong)ppuVar37 + 0x35) = 0;
        *(undefined1 *)(ppuVar37 + 7) = 0;
        ppuVar37[8] = local_8b0;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        bVar7 = (byte)local_868;
      }
      else {
        lVar17 = FUN_14473c272(lVar18,lStack_6f0,0);
        puVar1 = local_8f8;
        puVar42 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar42 + 9;
        if (*(undefined8 **)(lVar18 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar42 + 9;
        }
        plVar16 = (longlong *)(lVar18 + 0x198);
        *(undefined8 **)(lVar18 + 0x70) = puVar9;
        puVar42[1] = *(undefined8 *)(lVar17 + 8);
        puVar42[2] = 0;
        *(undefined1 *)(puVar42 + 3) = 0;
        *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar42 + 5) = 0;
        *puVar42 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar42 + 6) = 0x30;
        *(undefined1 *)(puVar42 + 7) = 0;
        *(undefined4 *)((longlong)puVar42 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar42 + 0x35) = 0;
        puVar42[8] = lVar17;
        iVar22 = *(int *)(lVar18 + 0x1a0);
        *(uint *)(lVar18 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        *(undefined8 **)(*(longlong *)(lVar18 + 0x198) + (longlong)iVar22 * 8) = puVar42;
        *(int *)((longlong)puVar42 + 0x1c) = *(int *)(lVar18 + 0x1a0) + -1;
        local_8c8 = puVar42;
        lVar17 = FUN_14473c272(lVar18,lStack_6f0 + 8,0);
        puVar1 = local_8f8;
        puVar42 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = puVar42 + 9;
        if (*(undefined8 **)(lVar18 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = puVar42 + 9;
        }
        *(undefined8 **)(lVar18 + 0x70) = puVar9;
        puVar42[1] = *(undefined8 *)(lVar17 + 8);
        puVar42[2] = 0;
        *(undefined1 *)(puVar42 + 3) = 0;
        *(undefined8 *)((longlong)puVar42 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar42 + 5) = 0;
        *puVar42 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar42 + 6) = 0x30;
        *(undefined1 *)(puVar42 + 7) = 0;
        *(undefined4 *)((longlong)puVar42 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar42 + 0x35) = 0;
        puVar42[8] = lVar17;
        iVar22 = *(int *)(lVar18 + 0x1a0);
        *(uint *)(lVar18 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        *(undefined8 **)(*(longlong *)(lVar18 + 0x198) + (longlong)iVar22 * 8) = puVar42;
        *(int *)((longlong)puVar42 + 0x1c) = *(int *)(lVar18 + 0x1a0) + -1;
        local_8c0 = puVar42;
        puVar14 = (undefined *)FUN_14473c272(lVar18,lStack_6f0 + 0x10,0);
        puVar1 = local_8f8;
        ppuVar37 = (undefined **)(*(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8);
        ppuVar43 = ppuVar37 + 9;
        if (*(undefined ***)(lVar18 + 0x78) < ppuVar43) {
          FUN_140023dd8(local_8f8,0x50);
          ppuVar37 = (undefined **)(*puVar1 + 7 & 0xfffffffffffffff8);
          ppuVar43 = ppuVar37 + 9;
        }
        *(undefined ***)(lVar18 + 0x70) = ppuVar43;
        ppuVar37[1] = *(undefined **)(puVar14 + 8);
        ppuVar37[2] = (undefined *)0x0;
        *(undefined1 *)(ppuVar37 + 3) = 0;
        *(undefined8 *)((longlong)ppuVar37 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(ppuVar37 + 5) = 0;
        *ppuVar37 = (undefined *)&PTR_FUN_14a1fb948;
        *(undefined1 *)(ppuVar37 + 6) = 0x30;
        local_8f0 = 0;
        *(undefined1 *)(ppuVar37 + 7) = 0;
        *(undefined4 *)((longlong)ppuVar37 + 0x31) = 0;
        *(undefined2 *)((longlong)ppuVar37 + 0x35) = 0;
        ppuVar37[8] = puVar14;
        iVar22 = *(int *)(lVar18 + 0x1a0);
        *(uint *)(lVar18 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        local_8f0 = 0;
        local_8d8 = 0;
        local_8b0 = (undefined *)0x0;
        bVar7 = (byte)local_868;
      }
      *(undefined ***)(*plVar16 + (longlong)iVar22 * 8) = ppuVar37;
      *(int *)((longlong)ppuVar37 + 0x1c) = *(int *)(lVar18 + 0x1a0) + -1;
    }
    puVar1 = local_8f8;
    if ((char)local_850 == '\0') {
      local_8e8 = 0;
      local_8a8 = 0;
      local_898 = (undefined *)0x0;
    }
    else {
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_178 = local_870;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8e8 + 0x120;
      }
      lVar18 = local_900;
      lVar17 = local_900 + 0x178;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_178 = local_870;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8a8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8a8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8a8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8a8 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8a8,L"CopyTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8a8;
      *(int *)(local_8a8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_178 = local_870;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_898 = (undefined *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = local_898 + 0x120;
      if (*(undefined **)(local_900 + 0x78) < puVar14) {
        FUN_140023dd8(local_8f8,0x128);
        local_898 = (undefined *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = local_898 + 0x120;
      }
      lVar18 = local_900;
      *(undefined **)(local_900 + 0x70) = puVar14;
      FUN_1456bbb8c(local_898,L"CopyTexture2",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      local_8b0 = local_898;
      *(undefined **)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_898;
      *(int *)(local_898 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8f0 = local_8e8;
      local_8d8 = local_8a8;
    }
    puVar1 = local_8f8;
    if ((char)local_838 == '\0') {
      local_8e0 = (longlong *)0x0;
      local_890 = (undefined8 *)0x0;
      dVar20 = local_8b8;
    }
    else {
      local_178 = (undefined **)((ulonglong)local_870 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8e8 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_900 + 0x178,iVar22);
      }
      local_8f0 = local_8e8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8e0 = (longlong *)0x0;
      local_890 = (undefined8 *)0x0;
      dVar20 = local_8b8;
    }
    goto switchD_1404645d0_caseD_5;
  }
  local_8d0 = 0;
  local_8a0 = 0;
  local_8e0 = (longlong *)0x0;
  local_890 = (undefined8 *)0x0;
  local_8c8 = (undefined8 *)0x0;
  local_8c0 = (undefined8 *)0x0;
  ppuVar37 = (undefined **)0x0;
  local_8e8 = 0;
  local_8a8 = 0;
  local_898 = (undefined *)0x0;
  local_8f0 = 0;
  local_8d8 = 0;
  local_8b0 = (undefined *)0x0;
  dVar20 = (double)0;
  switch(local_708[4]) {
  case 0:
    if (local_6f8._0_1_ == 0) {
      local_8d0 = 0;
    }
    else {
      local_178 = (undefined **)((ulonglong)ppuVar43 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_154 = iVar22;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (iVar24 < DAT_14ca84e40) {
        iVar22 = iVar24;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8d0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8d0 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8d0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8d0 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8d0,L"RenderTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_900 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d0;
      *(int *)(local_8d0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
    }
    puVar9 = local_148;
    puVar1 = local_8f8;
    lVar17 = local_900;
    if ((char)local_858 == '\0') {
      local_8e0 = (longlong *)0x0;
      local_8f0 = local_8d0;
    }
    else {
      if ((char)local_884 == '\0') {
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_178 = (undefined **)0x20000;
        local_148._0_4_ = (uint)bVar35 << 0x18;
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        local_148._6_2_ = SUB82(puVar9,6);
        local_148._0_6_ = CONCAT24(0xff00,(int)local_148);
        local_148 = (undefined8 *)CONCAT62(local_148._2_6_,0x101);
        local_158 = 0;
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8f0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8f0 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8f0 + 0x120;
        }
        lVar17 = local_900;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8f0,L"CompressTexture0",&local_178,0);
        iVar22 = *(int *)(lVar17 + 0x180);
        *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(local_900 + 0x178,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
        *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8f0 + 0x94);
        local_8e0 = (longlong *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        plVar16 = local_8e0 + 9;
        if (*(longlong **)(local_900 + 0x78) < plVar16) {
          FUN_140023dd8(local_8f8,0x50);
          local_8e0 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
          plVar16 = local_8e0 + 9;
        }
        plVar12 = (longlong *)(local_900 + 0x198);
        *(longlong **)(local_900 + 0x70) = plVar16;
        local_8e0[1] = *(longlong *)(local_8f0 + 8);
        local_8e0[2] = 0;
        *(undefined1 *)(local_8e0 + 3) = 0;
        *(undefined8 *)((longlong)local_8e0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8e0 + 5) = 0;
        *local_8e0 = (longlong)&PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8e0 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8e0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8e0 + 0x35) = 0;
        *(undefined1 *)(local_8e0 + 7) = 0;
        local_8e0[8] = local_8f0;
        piVar26 = (int *)(local_900 + 0x1a0);
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
        }
      }
      else {
        lVar18 = FUN_14473c272(local_900,lStack_6f0,0);
        puVar1 = local_8f8;
        local_8e0 = (longlong *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        plVar16 = local_8e0 + 9;
        if (*(longlong **)(lVar17 + 0x78) < plVar16) {
          FUN_140023dd8(local_8f8);
          local_8e0 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
          plVar16 = local_8e0 + 9;
        }
        plVar12 = (longlong *)(local_900 + 0x198);
        *(longlong **)(local_900 + 0x70) = plVar16;
        local_8e0[1] = *(longlong *)(lVar18 + 8);
        local_8e0[2] = 0;
        *(undefined1 *)(local_8e0 + 3) = 0;
        *(undefined8 *)((longlong)local_8e0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8e0 + 5) = 0;
        *local_8e0 = (longlong)&PTR_FUN_14a1fb948;
        *(byte *)(local_8e0 + 6) = bVar35;
        *(undefined4 *)((longlong)local_8e0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8e0 + 0x35) = 0;
        local_8f0 = 0;
        *(undefined1 *)(local_8e0 + 7) = 0;
        local_8e0[8] = lVar18;
        piVar26 = (int *)(local_900 + 0x1a0);
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
          local_8f0 = 0;
        }
      }
      *(longlong **)(*plVar12 + (longlong)iVar22 * 8) = local_8e0;
      *(int *)((longlong)local_8e0 + 0x1c) = *piVar26 + -1;
    }
    if ((char)local_838 != '\0') {
      local_178 = (undefined **)((ulonglong)local_870 | 0x10);
      goto LAB_14046a240;
    }
LAB_14046a3ab:
    local_8e8 = 0;
    goto LAB_14046a404;
  case 1:
    if (local_6f8._0_1_ == 0) {
      local_8d0 = 0;
      uVar25 = 0;
    }
    else {
      local_154 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_154 = iVar22;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (iVar24 < DAT_14ca84e40) {
        iVar22 = iVar24;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8d0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8d0 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8d0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8d0 + 0x120;
      }
      lVar18 = local_900;
      lVar17 = local_900 + 0x178;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8d0,L"RenderTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d0;
      *(int *)(local_8d0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      uVar25 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar29 = uVar25 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar29) {
        FUN_140023dd8(local_8f8,0x128);
        uVar25 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar29 = uVar25 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar29;
      FUN_1456bbb8c(uVar25,L"RenderTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = uVar25;
      *(int *)(uVar25 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
    }
    puVar1 = local_8f8;
    lVar17 = local_900;
    if ((char)local_858 == '\0') {
      local_8c8 = (undefined8 *)0x0;
      local_8f0 = local_8d0;
    }
    else {
      if ((char)local_884 == '\0') {
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8f0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar29 = local_8f0 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar29) {
          FUN_140023dd8(local_8f8,0x128);
          local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar29 = local_8f0 + 0x120;
        }
        lVar17 = local_900;
        *(ulonglong *)(local_900 + 0x70) = uVar29;
        FUN_1456bbb8c(local_8f0,L"CompressTexture0",&local_178,0);
        iVar22 = *(int *)(lVar17 + 0x180);
        *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(local_900 + 0x178,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
        *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8f0 + 0x94);
        local_8c8 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c8 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c8 + 9;
        }
        plVar16 = (longlong *)(local_900 + 0x198);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c8[1] = *(undefined8 *)(local_8f0 + 8);
        local_8c8[2] = 0;
        *(undefined1 *)(local_8c8 + 3) = 0;
        *(undefined8 *)((longlong)local_8c8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c8 + 5) = 0;
        *local_8c8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c8 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c8 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c8 + 0x35) = 0;
        *(undefined1 *)(local_8c8 + 7) = 0;
        local_8c8[8] = local_8f0;
        piVar26 = (int *)(local_900 + 0x1a0);
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
      }
      else {
        lVar18 = FUN_14473c272(local_900,lStack_6f0);
        puVar1 = local_8f8;
        local_8c8 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c8 + 9;
        if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c8 + 9;
        }
        plVar16 = (longlong *)(local_900 + 0x198);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c8[1] = *(undefined8 *)(lVar18 + 8);
        local_8c8[2] = 0;
        *(undefined1 *)(local_8c8 + 3) = 0;
        *(undefined8 *)((longlong)local_8c8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c8 + 5) = 0;
        *local_8c8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c8 + 6) = 0x30;
        *(undefined4 *)((longlong)local_8c8 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c8 + 0x35) = 0;
        local_8f0 = 0;
        *(undefined1 *)(local_8c8 + 7) = 0;
        local_8c8[8] = lVar18;
        piVar26 = (int *)(local_900 + 0x1a0);
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
          local_8f0 = 0;
        }
      }
      *(undefined8 **)(*plVar16 + (longlong)iVar22 * 8) = local_8c8;
      *(int *)((longlong)local_8c8 + 0x1c) = *piVar26 + -1;
    }
    puVar1 = local_8f8;
    if (((char)local_850 == '\0') && ((char)local_838 == '\0')) {
      local_8e8 = 0;
    }
    else {
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar29 = local_8e8 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar29) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar29 = local_8e8 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar29;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_900 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8f0 = local_8e8;
    }
    local_8e0 = (longlong *)0x0;
    local_8d8 = uVar25;
    goto LAB_14046a474;
  case 2:
    if (local_6f8._0_1_ == 0) {
      local_8d0 = 0;
      local_8b8 = 0.0;
    }
    else {
      bVar7 = 2;
      if (local_6f8._0_1_ == 0x24) {
        bVar7 = 0x24;
      }
      local_154 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_154 = iVar22;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (iVar24 < DAT_14ca84e40) {
        iVar22 = iVar24;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_148._0_4_ = (uint)bVar7 << 0x18;
      local_148._0_6_ = CONCAT24(0xff00,(int)local_148);
      local_148 = (undefined8 *)CONCAT62(local_148._2_6_,0x101);
      local_158 = 0;
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8d0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8d0 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8d0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8d0 + 0x120;
      }
      lVar18 = local_900;
      lVar17 = local_900 + 0x178;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8d0,L"RenderTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      uVar10 = local_148;
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d0;
      *(int *)(local_8d0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_178 = local_870;
      local_148._0_4_ = (uint)bVar7 << 0x18;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_148._6_2_ = SUB82(uVar10,6);
      local_148._0_6_ = CONCAT24(0xff00,(int)local_148);
      local_148 = (undefined8 *)CONCAT62(local_148._2_6_,0x101);
      local_158 = 0;
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8b8 = (double)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
      uVar25 = (longlong)local_8b8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8b8 = (double)(*puVar1 + 7 & 0xfffffffffffffff8);
        uVar25 = (longlong)local_8b8 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8b8,L"RenderTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      *(double *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8b8;
      *(int *)((longlong)local_8b8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
    }
    puVar9 = local_148;
    puVar1 = local_8f8;
    lVar17 = local_900;
    if ((char)local_858 == '\0') {
      local_8e0 = (longlong *)0x0;
      local_8c0 = (undefined8 *)0x0;
      local_8f0 = local_8d0;
      local_8d8 = (ulonglong)local_8b8;
    }
    else {
      if ((char)local_884 == '\0') {
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_178 = (undefined **)0x20000;
        local_148._0_4_ = (uint)bVar35 << 0x18;
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        local_148._6_2_ = SUB82(puVar9,6);
        local_148._0_6_ = CONCAT24(0xff00,(int)local_148);
        local_148 = (undefined8 *)CONCAT62(local_148._2_6_,0x101);
        local_158 = 0;
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8f0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8f0 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8f0 + 0x120;
        }
        lVar18 = local_900;
        lVar17 = local_900 + 0x178;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8f0,L"CompressTexture0",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
        *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8f0 + 0x94);
        local_8e0 = (longlong *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        plVar16 = local_8e0 + 9;
        if (*(longlong **)(local_900 + 0x78) < plVar16) {
          FUN_140023dd8(local_8f8,0x50);
          local_8e0 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
          plVar16 = local_8e0 + 9;
        }
        plVar12 = (longlong *)(local_900 + 0x198);
        *(longlong **)(local_900 + 0x70) = plVar16;
        local_8e0[1] = *(longlong *)(local_8f0 + 8);
        local_8e0[2] = 0;
        *(undefined1 *)(local_8e0 + 3) = 0;
        *(undefined8 *)((longlong)local_8e0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8e0 + 5) = 0;
        *local_8e0 = (longlong)&PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8e0 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8e0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8e0 + 0x35) = 0;
        *(undefined1 *)(local_8e0 + 7) = 0;
        local_8e0[8] = local_8f0;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
        }
        puVar1 = local_8f8;
        *(longlong **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8e0;
        *(int *)((longlong)local_8e0 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8d8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8d8 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8d8 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8d8 + 0x120;
        }
        lVar18 = local_900;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8d8,L"CompressTexture1",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d8;
        *(int *)(local_8d8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8d8 + 0x94);
        local_8c0 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c0 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c0 + 9;
        }
        piVar26 = (int *)(local_900 + 0x1a0);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c0[1] = *(undefined8 *)(local_8d8 + 8);
        local_8c0[2] = 0;
        *(undefined1 *)(local_8c0 + 3) = 0;
        *(undefined8 *)((longlong)local_8c0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c0 + 5) = 0;
        *local_8c0 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c0 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c0 + 0x35) = 0;
        *(undefined1 *)(local_8c0 + 7) = 0;
        local_8c0[8] = local_8d8;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
        }
      }
      else {
        lVar18 = FUN_14473c272(local_900,lStack_6f0);
        puVar1 = local_8f8;
        local_8e0 = (longlong *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        plVar16 = local_8e0 + 9;
        if (*(longlong **)(lVar17 + 0x78) < plVar16) {
          FUN_140023dd8(local_8f8,0x50);
          local_8e0 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
          plVar16 = local_8e0 + 9;
        }
        plVar12 = (longlong *)(local_900 + 0x198);
        *(longlong **)(local_900 + 0x70) = plVar16;
        local_8e0[1] = *(longlong *)(lVar18 + 8);
        local_8e0[2] = 0;
        *(undefined1 *)(local_8e0 + 3) = 0;
        *(undefined8 *)((longlong)local_8e0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8e0 + 5) = 0;
        *local_8e0 = (longlong)&PTR_FUN_14a1fb948;
        *(byte *)(local_8e0 + 6) = bVar35;
        *(undefined4 *)((longlong)local_8e0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8e0 + 0x35) = 0;
        *(undefined1 *)(local_8e0 + 7) = 0;
        local_8e0[8] = lVar18;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
        }
        lVar17 = local_900;
        *(longlong **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8e0;
        *(int *)((longlong)local_8e0 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        lVar18 = FUN_14473c272(local_900,lStack_6f0 + 8);
        puVar1 = local_8f8;
        local_8c0 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c0 + 9;
        if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c0 + 9;
        }
        piVar26 = (int *)(local_900 + 0x1a0);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c0[1] = *(undefined8 *)(lVar18 + 8);
        local_8c0[2] = 0;
        *(undefined1 *)(local_8c0 + 3) = 0;
        *(undefined8 *)((longlong)local_8c0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c0 + 5) = 0;
        *local_8c0 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c0 + 6) = 0x30;
        *(undefined4 *)((longlong)local_8c0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c0 + 0x35) = 0;
        local_8f0 = 0;
        *(undefined1 *)(local_8c0 + 7) = 0;
        local_8c0[8] = lVar18;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
        }
        local_8f0 = 0;
        local_8d8 = 0;
      }
      *(undefined8 **)(*plVar12 + (longlong)iVar22 * 8) = local_8c0;
      *(int *)((longlong)local_8c0 + 0x1c) = *piVar26 + -1;
    }
    puVar9 = local_148;
    puVar1 = local_8f8;
    if ((char)local_838 == '\0') {
      local_8e8 = 0;
    }
    else {
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      bVar7 = 2;
      if ((char)local_868 == '$') {
        bVar7 = 0x24;
      }
      local_178 = local_870;
      local_148._0_4_ = (uint)bVar7 << 0x18;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_148._6_2_ = SUB82(puVar9,6);
      local_148._0_6_ = CONCAT24(0xff00,(int)local_148);
      local_148 = (undefined8 *)CONCAT62(local_148._2_6_,0x101);
      local_158 = 0;
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8e8 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_900 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8f0 = local_8e8;
      local_8d8 = 0;
    }
    local_890 = (undefined8 *)0x0;
    local_898 = (undefined *)0x0;
    local_8a0 = 0;
    local_8a8 = 0;
    local_8c8 = (undefined8 *)0x0;
    local_8b0 = (undefined *)0x0;
    goto LAB_140469f92;
  case 3:
    if (local_6f8._0_1_ == 0) {
      local_8d0 = 0;
      local_8b8 = 0.0;
      local_8a0 = 0;
    }
    else {
      local_178 = (undefined **)((ulonglong)ppuVar43 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_154 = iVar22;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (iVar24 < DAT_14ca84e40) {
        iVar22 = iVar24;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8d0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8d0 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8d0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8d0 + 0x120;
      }
      lVar18 = local_900;
      lVar17 = local_900 + 0x178;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8d0,L"RenderTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d0;
      *(int *)(local_8d0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83aa8;
      local_168 = puRam000000014ca83ab0;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83ab8);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8b8 = (double)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
      uVar25 = (longlong)local_8b8 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8b8 = (double)(*puVar1 + 7 & 0xfffffffffffffff8);
        uVar25 = (longlong)local_8b8 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8b8,L"RenderTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(double *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8b8;
      *(int *)((longlong)local_8b8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83aa8;
      local_168 = puRam000000014ca83ab0;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83ab8);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8a0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8a0 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8a0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8a0 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8a0,L"RenderTexture2",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8a0;
      *(int *)(local_8a0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
    }
    puVar1 = local_8f8;
    lVar17 = local_900;
    if ((char)local_858 == '\0') {
      local_8c8 = (undefined8 *)0x0;
      local_8c0 = (undefined8 *)0x0;
      local_8f0 = local_8d0;
      local_8d8 = 0;
    }
    else {
      if ((char)local_884 == '\0') {
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8f0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8f0 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8f0 + 0x120;
        }
        lVar18 = local_900;
        lVar17 = local_900 + 0x178;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8f0,L"CompressTexture0",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
        *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8f0 + 0x94);
        local_8c8 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c8 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c8 + 9;
        }
        plVar16 = (longlong *)(local_900 + 0x198);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c8[1] = *(undefined8 *)(local_8f0 + 8);
        local_8c8[2] = 0;
        *(undefined1 *)(local_8c8 + 3) = 0;
        *(undefined8 *)((longlong)local_8c8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c8 + 5) = 0;
        *local_8c8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c8 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c8 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c8 + 0x35) = 0;
        *(undefined1 *)(local_8c8 + 7) = 0;
        local_8c8[8] = local_8f0;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        puVar1 = local_8f8;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c8;
        *(int *)((longlong)local_8c8 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8d8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8d8 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8d8 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8d8 + 0x120;
        }
        lVar18 = local_900;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8d8,L"CompressTexture1",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d8;
        *(int *)(local_8d8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8d8 + 0x94);
        local_8c0 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c0 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c0 + 9;
        }
        piVar26 = (int *)(local_900 + 0x1a0);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c0[1] = *(undefined8 *)(local_8d8 + 8);
        local_8c0[2] = 0;
        *(undefined1 *)(local_8c0 + 3) = 0;
        *(undefined8 *)((longlong)local_8c0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c0 + 5) = 0;
        *local_8c0 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c0 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c0 + 0x35) = 0;
        *(undefined1 *)(local_8c0 + 7) = 0;
        local_8c0[8] = local_8d8;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
      }
      else {
        lVar18 = FUN_14473c272(local_900,lStack_6f0);
        puVar1 = local_8f8;
        local_8c8 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c8 + 9;
        if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c8 + 9;
        }
        plVar16 = (longlong *)(local_900 + 0x198);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c8[1] = *(undefined8 *)(lVar18 + 8);
        local_8c8[2] = 0;
        *(undefined1 *)(local_8c8 + 3) = 0;
        *(undefined8 *)((longlong)local_8c8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c8 + 5) = 0;
        *local_8c8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c8 + 6) = 0x30;
        *(undefined4 *)((longlong)local_8c8 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c8 + 0x35) = 0;
        *(undefined1 *)(local_8c8 + 7) = 0;
        local_8c8[8] = lVar18;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        lVar17 = local_900;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c8;
        *(int *)((longlong)local_8c8 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        lVar18 = FUN_14473c272(local_900,lStack_6f0 + 8);
        puVar1 = local_8f8;
        local_8c0 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c0 + 9;
        if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c0 + 9;
        }
        piVar26 = (int *)(local_900 + 0x1a0);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c0[1] = *(undefined8 *)(lVar18 + 8);
        local_8c0[2] = 0;
        *(undefined1 *)(local_8c0 + 3) = 0;
        *(undefined8 *)((longlong)local_8c0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c0 + 5) = 0;
        *local_8c0 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c0 + 6) = 0x30;
        *(undefined4 *)((longlong)local_8c0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c0 + 0x35) = 0;
        local_8f0 = 0;
        *(undefined1 *)(local_8c0 + 7) = 0;
        local_8c0[8] = lVar18;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar16,iVar22);
        }
        local_8f0 = 0;
        local_8d8 = 0;
      }
      *(undefined8 **)(*plVar16 + (longlong)iVar22 * 8) = local_8c0;
      *(int *)((longlong)local_8c0 + 0x1c) = *piVar26 + -1;
    }
    puVar1 = local_8f8;
    if ((char)local_850 == '\0') {
      local_8e8 = 0;
      local_8a8 = 0;
    }
    else {
      local_178 = (undefined **)((ulonglong)ppuVar43 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8e8 + 0x120;
      }
      lVar18 = local_900;
      lVar17 = local_900 + 0x178;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8a8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8a8 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8a8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8a8 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8a8,L"CopyTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8a8;
      *(int *)(local_8a8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8f0 = local_8e8;
      local_8d8 = local_8a8;
    }
    puVar1 = local_8f8;
    if ((char)local_838 != '\0') {
      local_178 = (undefined **)((ulonglong)ppuVar43 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8e8 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_900 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8f0 = local_8e8;
    }
    local_890 = (undefined8 *)0x0;
    local_898 = (undefined *)0x0;
    local_8b0 = (undefined *)0x0;
    goto LAB_140469f8a;
  case 4:
    if (local_6f8._0_1_ == 0) {
      local_8d0 = 0;
      local_8b8 = 0.0;
      local_8a0 = 0;
    }
    else {
      local_178 = (undefined **)((ulonglong)ppuVar43 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_154 = iVar22;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (iVar24 < DAT_14ca84e40) {
        iVar22 = iVar24;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8d0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8d0 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8d0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8d0 + 0x120;
      }
      lVar18 = local_900;
      lVar17 = local_900 + 0x178;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8d0,L"RenderTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d0;
      *(int *)(local_8d0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83aa8;
      local_168 = puRam000000014ca83ab0;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83ab8);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8b8 = (double)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
      uVar25 = (longlong)local_8b8 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8b8 = (double)(*puVar1 + 7 & 0xfffffffffffffff8);
        uVar25 = (longlong)local_8b8 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8b8,L"RenderTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(double *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8b8;
      *(int *)((longlong)local_8b8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83aa8;
      local_168 = puRam000000014ca83ab0;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83ab8);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8a0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8a0 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8a0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8a0 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8a0,L"RenderTexture2",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8a0;
      *(int *)(local_8a0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
    }
    puVar1 = local_8f8;
    lVar17 = local_900;
    if ((char)local_858 == '\0') {
      local_890 = (undefined8 *)0x0;
      local_8c8 = (undefined8 *)0x0;
      local_8c0 = (undefined8 *)0x0;
      local_8f0 = local_8d0;
      local_8d8 = 0;
      local_8b0 = (undefined *)0x0;
    }
    else {
      if ((char)local_884 == '\0') {
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8f0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8f0 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8f0 + 0x120;
        }
        lVar18 = local_900;
        lVar17 = local_900 + 0x178;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8f0,L"CompressTexture0",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
        *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8f0 + 0x94);
        local_8c8 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c8 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c8 + 9;
        }
        local_8e0 = (longlong *)(local_900 + 0x198);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c8[1] = *(undefined8 *)(local_8f0 + 8);
        local_8c8[2] = 0;
        *(undefined1 *)(local_8c8 + 3) = 0;
        *(undefined8 *)((longlong)local_8c8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c8 + 5) = 0;
        *local_8c8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c8 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c8 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c8 + 0x35) = 0;
        *(undefined1 *)(local_8c8 + 7) = 0;
        local_8c8[8] = local_8f0;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_8e0,iVar22);
        }
        puVar1 = local_8f8;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c8;
        *(int *)((longlong)local_8c8 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        local_178 = (undefined **)0x20000;
        local_158 = 0;
        local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0030000101);
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8d8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8d8 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8d8 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8d8 + 0x120;
        }
        lVar18 = local_900;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8d8,L"CompressTexture1",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d8;
        *(int *)(local_8d8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8d8 + 0x94);
        local_8c0 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c0 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c0 + 9;
        }
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c0[1] = *(undefined8 *)(local_8d8 + 8);
        local_8c0[2] = 0;
        *(undefined1 *)(local_8c0 + 3) = 0;
        *(undefined8 *)((longlong)local_8c0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c0 + 5) = 0;
        *local_8c0 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c0 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8c0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c0 + 0x35) = 0;
        *(undefined1 *)(local_8c0 + 7) = 0;
        local_8c0[8] = local_8d8;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_8e0,iVar22);
        }
        uVar10 = local_148;
        puVar1 = local_8f8;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c0;
        *(int *)((longlong)local_8c0 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_178 = (undefined **)0x20000;
        local_148._0_4_ = (uint)bVar35 << 0x18;
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        local_148._6_2_ = SUB82(uVar10,6);
        local_148._0_6_ = CONCAT24(0xff00,(int)local_148);
        local_148 = (undefined8 *)CONCAT62(local_148._2_6_,0x101);
        local_158 = 0;
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8b0 = (undefined *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar14 = local_8b0 + 0x120;
        if (*(undefined **)(local_900 + 0x78) < puVar14) {
          FUN_140023dd8(local_8f8,0x128);
          local_8b0 = (undefined *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar14 = local_8b0 + 0x120;
        }
        lVar18 = local_900;
        *(undefined **)(local_900 + 0x70) = puVar14;
        FUN_1456bbb8c(local_8b0,L"CompressTexture2",&local_178,0);
        iVar22 = *(int *)(lVar18 + 0x180);
        *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(lVar17,iVar22);
        }
        puVar1 = local_8f8;
        *(undefined **)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8b0;
        *(int *)(local_8b0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = local_8b0[0x94];
        local_890 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_890 + 9;
        if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_890 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_890 + 9;
        }
        piVar26 = (int *)(local_900 + 0x1a0);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_890[1] = *(undefined8 *)(local_8b0 + 8);
        local_890[2] = 0;
        *(undefined1 *)(local_890 + 3) = 0;
        *(undefined8 *)((longlong)local_890 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_890 + 5) = 0;
        *local_890 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_890 + 6) = uVar5;
        *(undefined4 *)((longlong)local_890 + 0x31) = 0;
        *(undefined2 *)((longlong)local_890 + 0x35) = 0;
        *(undefined1 *)(local_890 + 7) = 0;
        local_890[8] = local_8b0;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_8e0,iVar22);
        }
      }
      else {
        lVar18 = FUN_14473c272(local_900,lStack_6f0);
        puVar1 = local_8f8;
        local_8c8 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c8 + 9;
        if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c8 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c8 + 9;
        }
        local_8e0 = (longlong *)(local_900 + 0x198);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c8[1] = *(undefined8 *)(lVar18 + 8);
        local_8c8[2] = 0;
        *(undefined1 *)(local_8c8 + 3) = 0;
        *(undefined8 *)((longlong)local_8c8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c8 + 5) = 0;
        *local_8c8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c8 + 6) = 0x30;
        *(undefined4 *)((longlong)local_8c8 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c8 + 0x35) = 0;
        *(undefined1 *)(local_8c8 + 7) = 0;
        local_8c8[8] = lVar18;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_8e0,iVar22);
        }
        lVar17 = local_900;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c8;
        *(int *)((longlong)local_8c8 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        lVar18 = FUN_14473c272(local_900,lStack_6f0 + 8);
        puVar1 = local_8f8;
        local_8c0 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_8c0 + 9;
        if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_8c0 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_8c0 + 9;
        }
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_8c0[1] = *(undefined8 *)(lVar18 + 8);
        local_8c0[2] = 0;
        *(undefined1 *)(local_8c0 + 3) = 0;
        *(undefined8 *)((longlong)local_8c0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8c0 + 5) = 0;
        *local_8c0 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8c0 + 6) = 0x30;
        *(undefined4 *)((longlong)local_8c0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8c0 + 0x35) = 0;
        *(undefined1 *)(local_8c0 + 7) = 0;
        local_8c0[8] = lVar18;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_8e0,iVar22);
        }
        lVar17 = local_900;
        *(undefined8 **)(*(longlong *)(local_900 + 0x198) + (longlong)iVar22 * 8) = local_8c0;
        *(int *)((longlong)local_8c0 + 0x1c) = *(int *)(local_900 + 0x1a0) + -1;
        lVar18 = FUN_14473c272(local_900,lStack_6f0 + 0x10);
        puVar1 = local_8f8;
        local_890 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar9 = local_890 + 9;
        if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
          FUN_140023dd8(local_8f8,0x50);
          local_890 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar9 = local_890 + 9;
        }
        piVar26 = (int *)(local_900 + 0x1a0);
        *(undefined8 **)(local_900 + 0x70) = puVar9;
        local_890[1] = *(undefined8 *)(lVar18 + 8);
        local_890[2] = 0;
        *(undefined1 *)(local_890 + 3) = 0;
        *(undefined8 *)((longlong)local_890 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_890 + 5) = 0;
        *local_890 = &PTR_FUN_14a1fb948;
        *(byte *)(local_890 + 6) = bVar35;
        *(undefined4 *)((longlong)local_890 + 0x31) = 0;
        *(undefined2 *)((longlong)local_890 + 0x35) = 0;
        local_8f0 = 0;
        *(undefined1 *)(local_890 + 7) = 0;
        local_890[8] = lVar18;
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(local_8e0,iVar22);
        }
        local_8f0 = 0;
        local_8d8 = 0;
        local_8b0 = (undefined *)0x0;
      }
      *(undefined8 **)(*local_8e0 + (longlong)iVar22 * 8) = local_890;
      *(int *)((longlong)local_890 + 0x1c) = *piVar26 + -1;
    }
    puVar1 = local_8f8;
    if ((char)local_850 == '\0') {
      local_8e8 = 0;
      local_8a8 = 0;
      local_898 = (undefined *)0x0;
    }
    else {
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8e8 + 0x120;
      }
      lVar18 = local_900;
      lVar17 = local_900 + 0x178;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8a8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8a8 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8a8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8a8 + 0x120;
      }
      lVar18 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8a8,L"CopyTexture1",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      puVar1 = local_8f8;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8a8;
      *(int *)(local_8a8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_898 = (undefined *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar14 = local_898 + 0x120;
      local_178 = ppuVar43;
      if (*(undefined **)(local_900 + 0x78) < puVar14) {
        FUN_140023dd8(local_8f8,0x128);
        local_898 = (undefined *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar14 = local_898 + 0x120;
      }
      lVar18 = local_900;
      *(undefined **)(local_900 + 0x70) = puVar14;
      FUN_1456bbb8c(local_898,L"CopyTexture2",&local_178,0);
      iVar22 = *(int *)(lVar18 + 0x180);
      *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar17,iVar22);
      }
      *(undefined **)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_898;
      *(int *)(local_898 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8f0 = local_8e8;
      local_8d8 = local_8a8;
      local_8b0 = local_898;
    }
    puVar1 = local_8f8;
    if ((char)local_838 != '\0') {
      local_178 = (undefined **)((ulonglong)ppuVar43 | 0x10);
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8e8 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_900 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
      *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      local_8f0 = local_8e8;
    }
LAB_140469f8a:
    local_8e0 = (longlong *)0x0;
LAB_140469f92:
    ppuVar37 = (undefined **)0x0;
    bVar7 = (byte)local_868;
    dVar20 = local_8b8;
    break;
  case 5:
    break;
  case 6:
    if (local_6f8._0_1_ == 0) {
      local_8b0 = (undefined *)0x0;
      local_8d8 = 0;
      local_8f0 = 0;
      local_898 = (undefined *)0x0;
      local_8a8 = 0;
      local_8e8 = 0;
      ppuVar37 = (undefined **)0x0;
      local_8c0 = (undefined8 *)0x0;
      local_8c8 = (undefined8 *)0x0;
      local_890 = (undefined8 *)0x0;
      local_8e0 = (longlong *)0x0;
      local_8a0 = 0;
      local_8b8 = 0.0;
      local_8d0 = 0;
      lVar17 = local_900;
      goto LAB_140463c9d;
    }
    local_154 = DAT_14ca84e40;
    if (iVar22 < DAT_14ca84e40) {
      local_154 = iVar22;
    }
    if (local_154 < 2) {
      local_154 = 1;
    }
    iVar22 = DAT_14ca84e40;
    if (iVar24 < DAT_14ca84e40) {
      iVar22 = iVar24;
    }
    lStack_170 = _DAT_14ca83a30;
    local_168 = _DAT_14ca83a38;
    local_158 = 0;
    local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0004000101);
    local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iVar22 < 2) {
      iVar22 = 1;
    }
    local_150 = (undefined **)CONCAT44(0x10001,iVar22);
    uVar29 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar25 = uVar29 + 0x120;
    local_178 = ppuVar43;
    if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
      FUN_140023dd8(local_8f8,0x128);
      uVar29 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar25 = uVar29 + 0x120;
    }
    *(ulonglong *)(lVar18 + 0x70) = uVar25;
    FUN_1456bbb8c(uVar29,L"RenderTexture0",&local_178,0);
    iVar22 = *(int *)(lVar18 + 0x180);
    *(uint *)(lVar18 + 0x180) = iVar22 + 1U;
    if (*(uint *)(lVar18 + 0x184) < iVar22 + 1U) {
      FUN_14472c0f6(lVar18 + 0x178,iVar22);
    }
    puVar1 = local_8f8;
    *(ulonglong *)(*(longlong *)(lVar18 + 0x178) + (longlong)iVar22 * 8) = uVar29;
    *(int *)(uVar29 + 0x9c) = *(int *)(lVar18 + 0x180) + -1;
    local_8d0 = uVar29;
    if (param_7 == 0) {
      local_8e8 = 0;
      local_8f0 = uVar29;
    }
    else {
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_154 = DAT_14ca84e40;
      if (local_708._8_4_ < DAT_14ca84e40) {
        local_154 = local_708._8_4_;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (local_708._12_4_ < DAT_14ca84e40) {
        iVar22 = local_708._12_4_;
      }
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8f0 = *(longlong *)(lVar18 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8f0 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(lVar18 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8f0 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8f0,L"CopyTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(lVar18 + 0x178,iVar22);
      }
      local_8e8 = local_8f0;
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
      *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
      lVar18 = local_900;
    }
    local_898 = (undefined *)0x0;
    local_8a8 = 0;
    local_8b0 = (undefined *)0x0;
    local_8d8 = 0;
    ppuVar37 = (undefined **)0x0;
    local_8c0 = (undefined8 *)0x0;
    local_8c8 = (undefined8 *)0x0;
    local_890 = (undefined8 *)0x0;
    local_8e0 = (longlong *)0x0;
    local_8a0 = 0;
    local_8b8 = 0.0;
    goto LAB_140462f3c;
  case 7:
    if (local_6f8._0_1_ == 0) {
      local_8d0 = 0;
    }
    else {
      local_154 = DAT_14ca84e40;
      if (iVar22 < DAT_14ca84e40) {
        local_154 = iVar22;
      }
      if (local_154 < 2) {
        local_154 = 1;
      }
      iVar22 = DAT_14ca84e40;
      if (iVar24 < DAT_14ca84e40) {
        iVar22 = iVar24;
      }
      lStack_170 = _DAT_14ca83a30;
      local_168 = _DAT_14ca83a38;
      local_158 = 0;
      local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0004000101);
      local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
      if (iVar22 < 2) {
        iVar22 = 1;
      }
      local_150 = (undefined **)CONCAT44(0x10001,iVar22);
      local_8d0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar25 = local_8d0 + 0x120;
      local_178 = ppuVar43;
      if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
        FUN_140023dd8(local_8f8,0x128);
        local_8d0 = *puVar1 + 7 & 0xfffffffffffffff8;
        uVar25 = local_8d0 + 0x120;
      }
      lVar17 = local_900;
      *(ulonglong *)(local_900 + 0x70) = uVar25;
      FUN_1456bbb8c(local_8d0,L"RenderTexture0",&local_178,0);
      iVar22 = *(int *)(lVar17 + 0x180);
      *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
      if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
        FUN_14472c0f6(local_900 + 0x178,iVar22);
      }
      *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8d0;
      *(int *)(local_8d0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
    }
    puVar9 = local_148;
    puVar1 = local_8f8;
    lVar17 = local_900;
    if ((char)local_858 == '\0') {
      local_8e0 = (longlong *)0x0;
      local_8f0 = local_8d0;
    }
    else {
      if ((char)local_884 == '\0') {
        iVar22 = local_708._8_4_;
        iVar24 = iVar22 + 3;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        lStack_170 = _DAT_14ca85088;
        local_168 = _DAT_14ca85090;
        iVar22 = local_708._12_4_ + 3;
        if (-1 < (longlong)local_708._8_8_) {
          iVar22 = local_708._12_4_;
        }
        local_178 = (undefined **)0x20000;
        local_148._0_4_ = (uint)bVar35 << 0x18;
        local_154 = iVar24 >> 2;
        if (DAT_14ca84e40 <= iVar24 >> 2) {
          local_154 = DAT_14ca84e40;
        }
        if (local_154 < 2) {
          local_154 = 1;
        }
        iVar24 = iVar22 >> 2;
        if (DAT_14ca84e40 <= iVar22 >> 2) {
          iVar24 = DAT_14ca84e40;
        }
        local_148._6_2_ = SUB82(puVar9,6);
        local_148._0_6_ = CONCAT24(0xff00,(int)local_148);
        local_148 = (undefined8 *)CONCAT62(local_148._2_6_,0x101);
        local_158 = 0;
        local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
        if (iVar24 < 2) {
          iVar24 = 1;
        }
        local_150 = (undefined **)CONCAT44(0x10001,iVar24);
        local_8f0 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
        uVar25 = local_8f0 + 0x120;
        if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
          FUN_140023dd8(local_8f8,0x128);
          local_8f0 = *puVar1 + 7 & 0xfffffffffffffff8;
          uVar25 = local_8f0 + 0x120;
        }
        lVar17 = local_900;
        *(ulonglong *)(local_900 + 0x70) = uVar25;
        FUN_1456bbb8c(local_8f0,L"CompressTexture0",&local_178,0);
        iVar22 = *(int *)(lVar17 + 0x180);
        *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
        if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
          FUN_14472c0f6(local_900 + 0x178,iVar22);
        }
        puVar1 = local_8f8;
        *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8f0;
        *(int *)(local_8f0 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
        uVar5 = *(undefined1 *)(local_8f0 + 0x94);
        local_8e0 = (longlong *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
        plVar16 = local_8e0 + 9;
        if (*(longlong **)(local_900 + 0x78) < plVar16) {
          FUN_140023dd8(local_8f8,0x50);
          local_8e0 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
          plVar16 = local_8e0 + 9;
        }
        plVar12 = (longlong *)(local_900 + 0x198);
        *(longlong **)(local_900 + 0x70) = plVar16;
        local_8e0[1] = *(longlong *)(local_8f0 + 8);
        local_8e0[2] = 0;
        *(undefined1 *)(local_8e0 + 3) = 0;
        *(undefined8 *)((longlong)local_8e0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8e0 + 5) = 0;
        *local_8e0 = (longlong)&PTR_FUN_14a1fb948;
        *(undefined1 *)(local_8e0 + 6) = uVar5;
        *(undefined4 *)((longlong)local_8e0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8e0 + 0x35) = 0;
        *(undefined1 *)(local_8e0 + 7) = 0;
        local_8e0[8] = local_8f0;
        piVar26 = (int *)(local_900 + 0x1a0);
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
        }
      }
      else {
        lVar18 = FUN_14473c272(local_900,lStack_6f0,0);
        puVar1 = local_8f8;
        local_8e0 = (longlong *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
        plVar16 = local_8e0 + 9;
        if (*(longlong **)(lVar17 + 0x78) < plVar16) {
          FUN_140023dd8(local_8f8);
          local_8e0 = (longlong *)(*puVar1 + 7 & 0xfffffffffffffff8);
          plVar16 = local_8e0 + 9;
        }
        plVar12 = (longlong *)(local_900 + 0x198);
        *(longlong **)(local_900 + 0x70) = plVar16;
        local_8e0[1] = *(longlong *)(lVar18 + 8);
        local_8e0[2] = 0;
        *(undefined1 *)(local_8e0 + 3) = 0;
        *(undefined8 *)((longlong)local_8e0 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(local_8e0 + 5) = 0;
        *local_8e0 = (longlong)&PTR_FUN_14a1fb948;
        *(byte *)(local_8e0 + 6) = bVar35;
        *(undefined4 *)((longlong)local_8e0 + 0x31) = 0;
        *(undefined2 *)((longlong)local_8e0 + 0x35) = 0;
        local_8f0 = 0;
        *(undefined1 *)(local_8e0 + 7) = 0;
        local_8e0[8] = lVar18;
        piVar26 = (int *)(local_900 + 0x1a0);
        iVar22 = *(int *)(local_900 + 0x1a0);
        *(uint *)(local_900 + 0x1a0) = iVar22 + 1U;
        if (*(uint *)(local_900 + 0x1a4) < iVar22 + 1U) {
          FUN_1447568fc(plVar12,iVar22);
          local_8f0 = 0;
        }
      }
      *(longlong **)(*plVar12 + (longlong)iVar22 * 8) = local_8e0;
      *(int *)((longlong)local_8e0 + 0x1c) = *piVar26 + -1;
    }
    if ((char)local_838 == '\0') goto LAB_14046a3ab;
    local_178 = local_870;
LAB_14046a240:
    puVar1 = local_8f8;
    local_154 = DAT_14ca84e40;
    if ((int)local_708._8_8_ < DAT_14ca84e40) {
      local_154 = (int)local_708._8_8_;
    }
    if (local_154 < 2) {
      local_154 = 1;
    }
    iVar24 = (int)((ulonglong)local_708._8_8_ >> 0x20);
    iVar22 = DAT_14ca84e40;
    if (iVar24 < DAT_14ca84e40) {
      iVar22 = iVar24;
    }
    local_158 = 0;
    local_148._6_2_ = (undefined2)((ulonglong)local_148 >> 0x30);
    local_148 = (undefined8 *)CONCAT26(local_148._6_2_,0xff0002000101);
    local_160 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    if (iVar22 < 2) {
      iVar22 = 1;
    }
    local_150 = (undefined **)CONCAT44(0x10001,iVar22);
    local_8e8 = *(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar25 = local_8e8 + 0x120;
    lStack_170 = _DAT_14ca83a30;
    local_168 = _DAT_14ca83a38;
    if (*(ulonglong *)(local_900 + 0x78) < uVar25) {
      FUN_140023dd8(local_8f8,0x128);
      local_8e8 = *puVar1 + 7 & 0xfffffffffffffff8;
      uVar25 = local_8e8 + 0x120;
    }
    lVar17 = local_900;
    *(ulonglong *)(local_900 + 0x70) = uVar25;
    FUN_1456bbb8c(local_8e8,L"CopyTexture0",&local_178,0);
    iVar22 = *(int *)(lVar17 + 0x180);
    *(uint *)(lVar17 + 0x180) = iVar22 + 1U;
    if (*(uint *)(lVar17 + 0x184) < iVar22 + 1U) {
      FUN_14472c0f6(local_900 + 0x178,iVar22);
    }
    *(ulonglong *)(*(longlong *)(local_900 + 0x178) + (longlong)iVar22 * 8) = local_8e8;
    *(int *)(local_8e8 + 0x9c) = *(int *)(local_900 + 0x180) + -1;
    local_8f0 = local_8e8;
LAB_14046a404:
    local_8c8 = (undefined8 *)0x0;
    local_8d8 = 0;
LAB_14046a474:
    local_890 = (undefined8 *)0x0;
    local_898 = (undefined *)0x0;
    local_8a0 = 0;
    local_8a8 = 0;
    local_8c0 = (undefined8 *)0x0;
    ppuVar37 = (undefined **)0x0;
    local_8b0 = (undefined *)0x0;
    bVar7 = (byte)local_868;
    dVar20 = (double)local_8d8;
    break;
  default:
    local_8a0 = 0;
    local_8e0 = (longlong *)0x0;
    local_890 = (undefined8 *)0x0;
    local_8c8 = (undefined8 *)0x0;
    local_8c0 = (undefined8 *)0x0;
    ppuVar37 = (undefined **)0x0;
    local_8e8 = 0;
    local_8a8 = 0;
    local_898 = (undefined *)0x0;
    local_8f0 = 0;
    local_8d8 = 0;
    local_8b0 = (undefined *)0x0;
    dVar20 = (double)0;
  }
switchD_1404645d0_caseD_5:
  lVar17 = local_900;
  lVar18 = local_900;
  local_8b8 = dVar20;
  if (bVar7 != 0) {
LAB_140462f3c:
    puVar1 = local_8f8;
    puVar42 = (undefined8 *)(*(longlong *)(lVar18 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar42 + 0x32;
    local_870 = ppuVar37;
    if (*(undefined8 **)(lVar18 + 0x78) < puVar9) {
      FUN_140023dd8(local_8f8,0x1a0);
      puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar42 + 0x32;
    }
    param_6 = param_6 * '\x02';
    *local_8f8 = (ulonglong)puVar9;
    *puVar42 = &PTR_FUN_14a337e88;
    puVar42[2] = 0;
    *(undefined1 *)(puVar42 + 3) = 1;
    puVar42[4] = 0;
    *(undefined1 *)(puVar42 + 5) = 1;
    puVar42[6] = 0;
    *(undefined4 *)(puVar42 + 7) = 4;
    puVar42[8] = 0;
    *(undefined4 *)(puVar42 + 9) = 8;
    puVar42[0xc] = 0;
    *(undefined1 *)(puVar42 + 0xd) = 1;
    puVar42[0xe] = 0;
    *(undefined1 *)(puVar42 + 0xf) = 1;
    puVar42[0x10] = 0;
    *(undefined1 *)(puVar42 + 0x11) = 1;
    lVar17 = 0xa2;
    do {
      puVar9 = (undefined8 *)((longlong)puVar42 + lVar17 + -0x12);
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)((longlong)puVar42 + lVar17 + -2) = 0xffff0000;
      lVar17 = lVar17 + 0x18;
    } while (lVar17 != 0x162);
    *(undefined4 *)((longlong)puVar42 + 0x164) = 0;
    puVar42[0x2a] = 0;
    puVar42[0x2b] = 0;
    *(undefined2 *)(puVar42 + 0x2c) = 0;
    *(undefined4 *)(puVar42 + 0x2d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar42 + 0x16c) = 0xffffffff;
    *(undefined4 *)(puVar42 + 0x2e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar42 + 0x174) = 0xffffffff;
    *(undefined4 *)(puVar42 + 0x2f) = 0;
    *(undefined2 *)((longlong)puVar42 + 0x17c) = 0;
    puVar42[0x30] = 0;
    iVar22 = *(int *)(local_900 + 0xa0);
    *(uint *)(local_900 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(local_900 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(local_848,iVar22);
    }
    lVar17 = local_900;
    *(undefined8 **)(*(longlong *)(local_900 + 0x98) + (longlong)iVar22 * 8) = puVar42;
    lVar18 = FUN_1447e4f80();
    cVar6 = *(char *)(lVar18 + 0x41);
    if (cVar6 == '\x03') {
      cVar6 = '\x02';
    }
    puVar42[2] = *local_7f0;
    *(char *)(puVar42 + 3) = cVar6;
    uVar10 = (**(code **)(*local_820 + 0x18))(local_820,lVar17);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca4b328) && (FUN_144b3d300(&DAT_14ca4b328), DAT_14ca4b328 == -1)) {
      DAT_14ca4b320 = FUN_145900d44();
      _Init_thread_footer(&DAT_14ca4b328);
    }
    puVar1 = local_8f8;
    cVar6 = '\x02';
    if (*(char *)(DAT_14ca4b320 + 0x41) != '\x03') {
      cVar6 = *(char *)(DAT_14ca4b320 + 0x41);
    }
    puVar42[4] = uVar10;
    *(char *)(puVar42 + 5) = cVar6;
    cVar6 = param_6;
    if (local_8d0 == 0) {
      cVar6 = '\0';
    }
    puVar42[0x12] = local_8d0;
    puVar42[0x13] = 0;
    *(char *)(puVar42 + 0x14) = cVar6;
    *(undefined1 *)((longlong)puVar42 + 0xa1) = 0;
    *(undefined2 *)((longlong)puVar42 + 0xa2) = 0xffff;
    cVar6 = param_6;
    if (local_8b8 == 0.0) {
      cVar6 = '\0';
    }
    *(undefined4 *)((longlong)puVar42 + 0xa4) = 0;
    puVar42[0x15] = local_8b8;
    puVar42[0x16] = 0;
    *(char *)(puVar42 + 0x17) = cVar6;
    *(undefined1 *)((longlong)puVar42 + 0xb9) = 0;
    *(undefined2 *)((longlong)puVar42 + 0xba) = 0xffff;
    *(undefined4 *)((longlong)puVar42 + 0xbc) = 0;
    if (local_8a0 == 0) {
      param_6 = '\0';
    }
    puVar42[0x18] = local_8a0;
    puVar42[0x19] = 0;
    *(char *)(puVar42 + 0x1a) = param_6;
    *(undefined1 *)((longlong)puVar42 + 0xd1) = 0;
    *(undefined2 *)((longlong)puVar42 + 0xd2) = 0xffff;
    *(undefined4 *)((longlong)puVar42 + 0xd4) = 0;
    local_7f0 = (undefined ***)puVar34[0x621];
    local_798 = puVar34[0x622];
    puVar45 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar45 + 0x32;
    if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
      FUN_140023dd8(local_8f8,0x1a0);
      puVar45 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar45 + 0x32;
    }
    *local_8f8 = (ulonglong)puVar9;
    *puVar45 = &PTR_FUN_14a337e88;
    local_868 = (undefined **)(puVar45 + 2);
    puVar45[2] = 0;
    *(undefined1 *)(puVar45 + 3) = 1;
    puVar45[4] = 0;
    *(undefined1 *)(puVar45 + 5) = 1;
    local_7a8 = (wchar_t *)(puVar45 + 6);
    puVar45[6] = 0;
    *(undefined4 *)(puVar45 + 7) = 4;
    puVar45[8] = 0;
    *(undefined4 *)(puVar45 + 9) = 8;
    puVar45[0xc] = 0;
    *(undefined1 *)(puVar45 + 0xd) = 1;
    puVar45[0xe] = 0;
    *(undefined1 *)(puVar45 + 0xf) = 1;
    puVar45[0x10] = 0;
    *(undefined1 *)(puVar45 + 0x11) = 1;
    lVar17 = 0xa2;
    do {
      *(undefined1 (*) [16])((longlong)puVar45 + lVar17 + -0x12) = (undefined1  [16])0x0;
      *(undefined4 *)((longlong)puVar45 + lVar17 + -2) = 0xffff0000;
      lVar17 = lVar17 + 0x18;
    } while (lVar17 != 0x162);
    *(undefined4 *)((longlong)puVar45 + 0x164) = 0;
    *(undefined1 (*) [16])(puVar45 + 0x2a) = (undefined1  [16])0x0;
    *(undefined2 *)(puVar45 + 0x2c) = 0;
    *(undefined4 *)(puVar45 + 0x2d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar45 + 0x16c) = 0xffffffff;
    *(undefined4 *)(puVar45 + 0x2e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar45 + 0x174) = 0xffffffff;
    *(undefined4 *)(puVar45 + 0x2f) = 0;
    *(undefined2 *)((longlong)puVar45 + 0x17c) = 0;
    puVar45[0x30] = 0;
    iVar22 = *(int *)(local_900 + 0xa0);
    *(uint *)(local_900 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(local_900 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(local_848,iVar22);
    }
    lVar17 = local_900;
    *(undefined8 **)(*(longlong *)(local_900 + 0x98) + (longlong)iVar22 * 8) = puVar45;
    memcpy(local_868,puVar42 + 2,0x180);
    puVar1 = local_8f8;
    puVar42 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar42 + 0x44;
    if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
      FUN_140023dd8(local_8f8,0x230);
      puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar42 + 0x44;
    }
    *(undefined8 **)(lVar17 + 0x70) = puVar9;
    *puVar42 = &PTR_FUN_14a22d010;
    local_820 = puVar42 + 2;
    uVar25 = 0;
    FUN_14008c534(local_820,local_880,0);
    uVar8 = local_840;
    iVar22 = *(int *)(lVar17 + 0xa0);
    *(uint *)(lVar17 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(lVar17 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(local_848,iVar22);
    }
    *(undefined8 **)(*local_848 + (longlong)iVar22 * 8) = puVar42;
    local_148 = puVar42 + 0x3d;
    local_158 = *(int *)(param_2 + 8);
    puVar38 = &DAT_14ca11f20;
    lStack_170 = CONCAT44(lStack_170._4_4_,(&DAT_14ca11f80)[(ulonglong)(2 < local_158) * 0x3a]);
    local_168 = (undefined *)CONCAT62(local_168._2_6_,0x1818);
    local_150 = local_880;
    local_140 = 0x3a;
    local_178 = &PTR_FUN_14a337000;
    local_138 = 0;
    local_128 = 0x11;
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    local_130 = DAT_14c9c0d98;
    local_100 = 0;
    iVar22 = *(int *)(param_2 + 0x3338);
    local_7a0 = puVar42;
    local_160 = param_2;
    if (0 < iVar22) {
      dVar20 = (double)puVar34[0x128];
      iVar24 = *(int *)(puVar34 + 0x622);
      iVar32 = *(int *)(puVar34 + 0x621);
      _local_808 = CONCAT44(uStack_804,(int)local_808 - local_83c);
      uVar29 = 0;
      auVar86 = pmovsxbq(auVar79,0x101);
      auVar87 = pmovsxbq(auVar87,0x404);
      do {
        bVar7 = *(byte *)(*(longlong *)(param_2 + 0x33e8) + uVar29);
        if (((bVar7 & 1) != 0) && ((bVar7 >> 1 & uVar8) != 0)) {
          uVar44 = (ulonglong)((uint)uVar29 & 0x3ff);
          lVar17 = **(longlong **)(*(longlong *)(param_2 + 0x3368) + (uVar29 >> 10 & 0x3fffff) * 8);
          dVar56 = *(double *)(lVar17 + 0x30 + uVar44 * 0x48);
          if (0 < *(int *)(puVar34 + 0x428)) {
            dVar49 = (double)(float)dVar56;
            dVar85 = (double)(float)dVar56;
            pdVar21 = (double *)(lVar17 + uVar44 * 0x48);
            dVar55 = *pdVar21;
            dVar48 = *pdVar21;
            pdVar21 = (double *)(lVar17 + 8 + uVar44 * 0x48);
            dVar52 = *pdVar21;
            dVar76 = *pdVar21;
            auVar58._8_8_ = (longlong)dVar76;
            auVar58._0_8_ = (longlong)dVar52;
            pdVar21 = (double *)(lVar17 + 0x10 + uVar44 * 0x48);
            dVar62 = *pdVar21;
            dVar2 = *pdVar21;
            auVar60._8_8_ = (longlong)dVar2;
            auVar60._0_8_ = (longlong)dVar62;
            pdVar21 = (double *)puVar34[0x426];
            if ((double *)puVar34[0x426] == (double *)0x0) {
              pdVar21 = (double *)(puVar34 + 0x406);
            }
            iVar22 = 0;
            do {
              auVar65._8_8_ =
                   -(ulonglong)
                    (dVar85 < (pdVar21[9] * dVar2 + pdVar21[5] * dVar76 + pdVar21[1] * dVar48) -
                              pdVar21[0xd]);
              auVar65._0_8_ =
                   -(ulonglong)
                    (dVar49 < (pdVar21[8] * dVar62 + pdVar21[4] * dVar52 + *pdVar21 * dVar55) -
                              pdVar21[0xc]);
              uVar36 = movmskpd((int)puVar38,auVar65);
              puVar38 = (undefined4 *)(ulonglong)uVar36;
              auVar66._8_8_ =
                   -(ulonglong)
                    (dVar85 < (pdVar21[0xb] * dVar2 + pdVar21[7] * dVar76 + pdVar21[3] * dVar48) -
                              pdVar21[0xf]);
              auVar66._0_8_ =
                   -(ulonglong)
                    (dVar49 < (pdVar21[10] * dVar62 + pdVar21[6] * dVar52 + pdVar21[2] * dVar55) -
                              pdVar21[0xe]);
              iVar39 = movmskpd((int)uVar25,auVar66);
              uVar36 = iVar39 << 2 | uVar36;
              uVar25 = (ulonglong)uVar36;
              if (uVar36 != 0) goto LAB_140463ab9;
              pdVar21 = pdVar21 + 0x10;
              iVar22 = iVar22 + 4;
            } while (iVar22 < *(int *)(puVar34 + 0x428));
          }
          uVar3 = *(ushort *)(*(longlong *)(param_2 + 0x33f8) + uVar29 * 2);
          if ((uVar3 >> 0xc & 1) == 0) {
            if ((int)(uint)(uVar3 >> 0xd) <= (int)local_808) {
LAB_1404636c4:
              lVar17 = *(longlong *)(*(longlong *)(param_2 + 0x3330) + uVar29 * 8);
              local_83c = *(uint *)(lVar17 + 0x15c);
              local_7d4 = *(undefined4 *)(lVar17 + 0x158);
              local_7d8 = *(uint *)(lVar17 + 0x204) & 0x7fffffff;
              pcVar4 = *(code **)(**(longlong **)(lVar17 + 8) + 0x1f8);
              if (pcVar4 == (code *)&LAB_144b0d290) {
                bVar7 = 0;
              }
              else if (pcVar4 == (code *)&LAB_143241b58) {
                bVar7 = *(byte *)((*(longlong **)(lVar17 + 8))[0x53] + 0x8f);
              }
              else {
                bVar7 = (*pcVar4)();
              }
              uVar8 = uVar3 & 0xf;
              if ((uVar3 & 0xf) < (uint)bVar7) {
                uVar8 = (uint)bVar7;
              }
              uVar36 = uVar3 >> 4 & 0xf;
              if (uVar36 < bVar7) {
                uVar36 = (uint)bVar7;
              }
              fVar73 = logf((float)((dVar56 + dVar56) * (double)(float)(1.0 / dVar20)));
              uVar27 = ((uVar3 >> 8 & 0xf) -
                       ((int)ROUND(fVar73 * 1.442695 + fVar73 * 1.442695 + -0.5) >> 1)) - 7;
              if ((int)uVar36 <= (int)uVar27) {
                uVar27 = uVar36;
              }
              if ((int)uVar27 < (int)uVar8) {
                uVar27 = uVar8;
              }
              uVar8 = local_840;
              if (0 < *(int *)(lVar17 + 0x48)) {
                lVar18 = 0;
                do {
                  bVar7 = *(byte *)(*(longlong *)(lVar17 + 0x30) + 0x16 + lVar18 * 0x18);
                  if ((bVar7 & 2) != 0) {
                    puVar9 = (undefined8 *)(*(longlong *)(lVar17 + 0x30) + lVar18 * 0x18);
                    iVar22 = -(uint)((*(byte *)((longlong)puVar9 + 0x14) & 0x10) != 0);
                    bVar35 = (byte)iVar22 | *(byte *)((longlong)puVar9 + 0x14) & 0xf;
                    puVar38 = (undefined4 *)(ulonglong)CONCAT31((int3)((uint)iVar22 >> 8),bVar35);
                    if ((uVar27 == (int)(char)bVar35) && ((bVar7 >> 2 & 7) == param_5)) {
                      if ((bVar7 & 0x20) != 0) {
                        uVar10 = *puVar9;
                        if (((uint)uVar10 >> 0x18 & 1) != 0) {
                          auVar50 = ZEXT216(*(ushort *)((longlong)puVar9 + 0x12));
                          auVar57._8_4_ = (uint)uVar10;
                          auVar57._0_8_ = uVar10;
                          auVar57._12_4_ = (int)((ulonglong)uVar10 >> 0x20);
                          lVar15 = 0x18;
                          auVar58 = pmovsxbq(auVar58,0x100);
                          auVar60 = pmovsxbq(auVar60,0x302);
                          do {
                            lVar41 = auVar58._0_8_;
                            lVar64 = auVar86._0_8_;
                            lVar68 = auVar86._8_8_;
                            auVar67._0_8_ = lVar64 << lVar41;
                            auVar67._8_8_ = lVar68 << lVar41;
                            lVar69 = auVar58._8_8_;
                            auVar78._0_8_ = lVar64 << lVar69;
                            auVar78._8_8_ = lVar68 << lVar69;
                            lVar70 = auVar60._8_8_;
                            auVar83._0_8_ = lVar64 << lVar70;
                            auVar83._8_8_ = lVar68 << lVar70;
                            lVar59 = auVar60._0_8_;
                            auVar71._0_8_ = lVar64 << lVar59;
                            auVar71._8_8_ = lVar68 << lVar59;
                            auVar79 = pblendw(auVar78,auVar67,0xf);
                            auVar58 = pblendw(auVar83,auVar71,0xf);
                            auVar80._0_8_ = -(ulonglong)(SUB168(auVar79 & auVar57,0) == 0);
                            auVar80._8_8_ = -(ulonglong)(SUB168(auVar79 & auVar57,8) == 0);
                            auVar84._0_8_ = -(ulonglong)(SUB168(auVar58 & auVar57,0) == 0);
                            auVar84._8_8_ = -(ulonglong)(SUB168(auVar58 & auVar57,8) == 0);
                            auVar79 = packssdw(auVar80,auVar84);
                            iVar22 = auVar50._4_4_;
                            iVar39 = auVar50._8_4_;
                            iVar53 = auVar50._12_4_;
                            auVar50._0_4_ = auVar50._0_4_ + auVar79._0_4_ + 1;
                            auVar50._4_4_ = iVar22 + auVar79._4_4_ + 1;
                            auVar50._8_4_ = iVar39 + auVar79._8_4_ + 1;
                            auVar50._12_4_ = iVar53 + auVar79._12_4_ + 1;
                            auVar58._0_8_ = lVar41 + auVar87._0_8_;
                            auVar58._8_8_ = lVar69 + auVar87._8_8_;
                            auVar60._0_8_ = lVar59 + auVar87._0_8_;
                            auVar60._8_8_ = lVar70 + auVar87._8_8_;
                            lVar15 = lVar15 + -4;
                          } while (lVar15 != 0);
                          auVar79 = phaddd(auVar50,auVar50);
                          auVar79 = phaddd(auVar79,auVar79);
                          lVar15 = (ulonglong)auVar79._0_4_ * 0x20;
                          puVar9 = (undefined8 *)(*(longlong *)(lVar17 + 0x20) + lVar15);
                          iVar22 = *(int *)(*(longlong *)(lVar17 + 0x20) + 0xc + lVar15);
                          lVar15 = (longlong)iVar22;
                          if (lVar15 < 0) {
                            lVar41 = (longlong)*(int *)(puVar9 + 1) * 0x120 +
                                     *(longlong *)(param_2 + 0x2188);
                          }
                          else {
                            lVar41 = lVar15 * 0x128 + *(longlong *)(param_2 + 0xb98);
                          }
                          local_7e0 = *(undefined4 *)(puVar9 + 2);
                          local_7b0 = *puVar9;
                          bVar7 = *(byte *)((longlong)puVar9 + 0x1c);
                          uVar40 = (undefined7)(uVar25 >> 8);
                          uVar8 = *(uint *)(puVar9 + 3);
                          plVar16 = (longlong *)local_7a0[0x3f];
                          local_7c8 = (longlong)(int)plVar16[1];
                          uVar36 = (int)plVar16[1] + 1;
                          *(uint *)(plVar16 + 1) = uVar36;
                          if (*(uint *)((longlong)plVar16 + 0xc) < uVar36) {
                            local_873 = bVar7;
                            local_7d0 = plVar16;
                            local_7c0 = lVar41;
                            local_7b8 = lVar15;
                            FUN_1448b96b0(plVar16,local_7c8);
                            iVar22 = (int)local_7b8;
                            plVar16 = local_7d0;
                            lVar41 = local_7c0;
                            bVar7 = local_873;
                          }
                          local_7dc = local_7dc & 0xffffffc0 | uVar8 & 0x3f;
                          puVar38 = (undefined4 *)(ulonglong)local_7dc;
                          local_871 = local_871 & 0xc0 | bVar7 & 0x3f;
                          uVar25 = CONCAT71(uVar40,local_872) & 0xfffffffffffffffc;
                          lVar15 = *plVar16;
                          *(longlong *)(lVar15 + local_7c8 * 0x48) = lVar41;
                          *(undefined8 *)(lVar15 + 8 + local_7c8 * 0x48) = local_7b0;
                          *(uint *)(lVar15 + 0x10 + local_7c8 * 0x48) = local_83c;
                          *(undefined4 *)(lVar15 + 0x14 + local_7c8 * 0x48) = local_7d4;
                          *(uint *)(lVar15 + 0x18 + local_7c8 * 0x48) = local_7d8;
                          *(undefined4 *)(lVar15 + 0x1c + local_7c8 * 0x48) = 0xffffffff;
                          *(int *)(lVar15 + 0x20 + local_7c8 * 0x48) = iVar22;
                          *(undefined8 *)(lVar15 + 0x28 + local_7c8 * 0x48) = 0;
                          *(undefined4 *)(lVar15 + 0x30 + local_7c8 * 0x48) = 0;
                          *(undefined4 *)(lVar15 + 0x34 + local_7c8 * 0x48) = local_7e0;
                          local_872 = (undefined1)uVar25;
                          *(undefined1 *)(lVar15 + 0x38 + local_7c8 * 0x48) = local_872;
                          *(uint *)(lVar15 + 0x3c + local_7c8 * 0x48) = local_7dc;
                          *(byte *)(lVar15 + 0x40 + local_7c8 * 0x48) = local_871;
                          uVar8 = local_840;
                          goto LAB_1404637ce;
                        }
                      }
                      uVar25 = *(ulonglong *)(*(longlong *)(param_2 + 0x3358) + uVar29 * 8);
                      local_968 = (wchar_t *)CONCAT44(local_968._4_4_,0xffffffff);
                      puVar38 = (undefined4 *)0xffffffffffffffff;
                      FUN_1449bdff6(&local_178,lVar18 * 0x100 + *(longlong *)(lVar17 + 0x40));
                    }
                  }
LAB_1404637ce:
                  lVar18 = lVar18 + 1;
                } while (lVar18 < *(int *)(lVar17 + 0x48));
              }
            }
          }
          else {
            dVar55 = (dVar56 + dVar56) * (double)((float)(iVar24 - iVar32) * (float)(1.0 / dVar20));
            if (1 << (byte)(uVar3 >> 0xd) <=
                (int)((ulonglong)(longlong)ROUND(dVar55 + dVar55 + -0.5) >> 1)) goto LAB_1404636c4;
          }
LAB_140463ab9:
          iVar22 = *(int *)(param_2 + 0x3338);
        }
        uVar29 = uVar29 + 1;
      } while ((longlong)uVar29 < (longlong)iVar22);
    }
    plVar16 = local_820;
    lVar17 = local_900;
    if (param_2 != 0) {
      local_968 = local_7a8;
      FUN_1401dddf8(local_820,local_900,local_880,param_2 + 0x3f08);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca71f30) && (FUN_144b3d300(&DAT_14ca71f30), DAT_14ca71f30 == -1)) {
      FUN_145dca932(&local_178);
      local_920 = (undefined1 *)((ulonglong)local_920 & 0xffffffffffffff00);
      local_930 = (undefined1 *)((ulonglong)local_930 & 0xffffffffffffff00);
      local_950 = "Unknown";
      local_960 = (undefined1  [16])0x0;
      local_968 = L"FParameters";
      local_928 = (undefined1 *)0x0;
      local_940 = (code *)CONCAT44(local_940._4_4_,0x180);
      local_948 = (code *)CONCAT44(local_948._4_4_,0x89);
      local_938 = &local_178;
      FUN_140b49562(&DAT_14ca71eb0,0,1);
      if (local_178 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143134bcb);
      _Init_thread_footer(&DAT_14ca71f30);
      plVar16 = local_820;
      lVar17 = local_900;
    }
    FUN_140069376(lVar17);
    puVar1 = local_8f8;
    puVar42 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar42 + 0x3b;
    if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
      FUN_140023dd8(local_8f8,0x1e0);
      puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar42 + 0x3b;
    }
    *local_8f8 = (ulonglong)puVar9;
    local_178 = local_868;
    lStack_170 = DAT_14ca71ef8;
    if (DAT_14ca71ef8 != 0) {
      LOCK();
      *(int *)(DAT_14ca71ef8 + 8) = *(int *)(DAT_14ca71ef8 + 8) + 1;
      UNLOCK();
    }
    local_168 = &DAT_14ca71eb0;
    local_968 = (wchar_t *)CONCAT71(local_968._1_7_,2);
    FUN_140068f1a(puVar42,local_788,&local_178,1);
    *puVar42 = &PTR_FUN_14a337e90;
    puVar42[0x37] = plVar16;
    puVar42[0x38] = local_868;
    puVar42[0x39] = local_7f0;
    puVar42[0x3a] = local_798;
    iVar22 = *(int *)(lVar17 + 0x170);
    *(uint *)(lVar17 + 0x170) = iVar22 + 1U;
    if (*(uint *)(lVar17 + 0x174) < iVar22 + 1U) {
      FUN_14470e57a(lVar17 + 0x168,iVar22);
    }
    *(undefined8 **)(*(longlong *)(lVar17 + 0x168) + (longlong)iVar22 * 8) = puVar42;
    *(int *)((longlong)puVar42 + 0x2c) = *(int *)(lVar17 + 0x170) + -1;
    FUN_140069100(lVar17,puVar42);
    ppuVar37 = local_870;
  }
LAB_140463c9d:
  puVar1 = local_8f8;
  if ((char)local_858 != '\0') {
    puVar42 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar42 + 0x16;
    if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
      FUN_140023dd8(local_8f8,0xc0);
      puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar42 + 0x16;
    }
    *(undefined8 **)(lVar17 + 0x70) = puVar9;
    *puVar42 = &PTR_FUN_14a337ea8;
    puVar42[8] = 0;
    *(undefined1 *)(puVar42 + 9) = 1;
    puVar42[10] = 0;
    puVar42[0xb] = 0;
    puVar42[0xc] = 0;
    puVar42[0xd] = 0;
    puVar42[0xe] = 0;
    puVar42[0xf] = 0;
    puVar42[0x10] = 0;
    puVar42[0x11] = 0;
    puVar42[0x12] = 0;
    puVar42[0x13] = 0;
    puVar42[0x14] = 0;
    puVar42[0x15] = 0;
    iVar22 = *(int *)(lVar17 + 0xa0);
    *(uint *)(lVar17 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(lVar17 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(local_848,iVar22);
    }
    uVar25 = local_8d0;
    *(undefined8 **)(*local_848 + (longlong)iVar22 * 8) = puVar42;
    puVar42[2] = 0;
    *(int *)(puVar42 + 3) = (int)local_818;
    *(int *)((longlong)puVar42 + 0x1c) = (int)local_810;
    if ((char)local_884 == '\0') {
      puVar42[4] = 0;
      puVar42[5] = 0;
      uVar29 = 0;
    }
    else {
      puVar42[4] = (longlong)(*param_12 * 0.25) & 0xffffffffU |
                   (longlong)(param_12[1] * 0.25) << 0x20;
      puVar42[5] = (longlong)(*param_17 * 0.25) & 0xffffffffU |
                   (longlong)(param_17[1] * 0.25) << 0x20;
      uVar29 = (longlong)(*param_22 * 0.25) & 0xffffffffU | (longlong)(param_22[1] * 0.25) << 0x20;
    }
    puVar42[6] = uVar29;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca6dd70) && (FUN_144b3d300(&DAT_14ca6dd70), DAT_14ca6dd70 == -1)) {
      FUN_146317d44();
      DAT_14ca6dd48 = &PTR_FUN_14a3372d0;
      FUN_146317f80();
      atexit(FUN_14312007d);
      _Init_thread_footer(&DAT_14ca6dd70);
    }
    local_880 = (undefined **)(puVar42 + 2);
    FUN_1415afa1c();
    cVar6 = '\x02';
    if (DAT_14ca6dcf1 != '\x03') {
      cVar6 = DAT_14ca6dcf1;
    }
    puVar42[8] = DAT_14ca6dd60;
    *(char *)(puVar42 + 9) = cVar6;
    puVar42[10] = uVar25;
    uVar10 = DAT_14c9c0d80;
    puVar42[0xb] = DAT_14c9c0d80;
    puVar42[0xc] = local_8b8;
    puVar42[0xd] = uVar10;
    puVar42[0xe] = local_8a0;
    puVar42[0xf] = uVar10;
    puVar42[0x10] = local_8e0;
    puVar42[0x11] = 0;
    puVar42[0x12] = local_890;
    puVar42[0x13] = local_8c8;
    puVar42[0x14] = local_8c0;
    puVar42[0x15] = ppuVar37;
    iVar22 = (int)local_810;
    iVar24 = iVar22 + 3;
    if (-1 < iVar22) {
      iVar24 = iVar22;
    }
    lVar18 = (longlong)*(int *)(param_2 + 8);
    iVar22 = (iVar24 >> 2) + 7;
    iVar24 = (iVar24 >> 2) + 0xe;
    if (-1 < iVar22) {
      iVar24 = iVar22;
    }
    iVar24 = iVar24 >> 3;
    iVar22 = (int)local_818;
    iVar32 = iVar22 + 3;
    if (-1 < iVar22) {
      iVar32 = iVar22;
    }
    iVar22 = (iVar32 >> 2) + 7;
    iVar32 = (iVar32 >> 2) + 0xe;
    if (-1 < iVar22) {
      iVar32 = iVar22;
    }
    iVar32 = iVar32 >> 3;
    if (param_5 == 5) {
      uVar10 = *(undefined8 *)
                (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar18 * 2) * 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca6f120) && (FUN_144b3d300(&DAT_14ca6f120), DAT_14ca6f120 == -1))
      {
        FUN_14607c626();
        local_920 = &LAB_14712ac08;
        local_928 = &LAB_14712ac0c;
        local_930 = &LAB_1473400e4;
        local_938 = (undefined ***)FUN_146316d0e;
        local_940 = FUN_1473400e8;
        local_948 = FUN_147340142;
        local_968 = L"/Engine/Private/VirtualTextureCompress.usf";
        local_910 = 0;
        local_918 = 0xe0;
        local_950 = (char *)CONCAT44(local_950._4_4_,1);
        local_960._8_4_ = 5;
        local_960._0_8_ = L"CompressBaseColorNormalSpecularMaskYCoCgCS";
        FUN_140db5666(&DAT_14ca6f078,0,&DAT_14ca6f010,
                      L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg >"
                     );
        _DAT_14ca6f078 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_14312024d);
        _Init_thread_footer(&DAT_14ca6f120);
      }
      FUN_1448e935e(uVar10,&local_178,&DAT_14ca6f078,0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca6f120) && (FUN_144b3d300(&DAT_14ca6f120), DAT_14ca6f120 == -1))
      {
        FUN_14607c626();
        local_920 = &LAB_14712ac08;
        local_928 = &LAB_14712ac0c;
        local_930 = &LAB_1473400e4;
        local_938 = (undefined ***)FUN_146316d0e;
        local_940 = FUN_1473400e8;
        local_948 = FUN_147340142;
        local_968 = L"/Engine/Private/VirtualTextureCompress.usf";
        local_910 = 0;
        local_918 = 0xe0;
        local_950 = (char *)CONCAT44(local_950._4_4_,1);
        local_960._8_4_ = 5;
        local_960._0_8_ = L"CompressBaseColorNormalSpecularMaskYCoCgCS";
        FUN_140db5666(&DAT_14ca6f078,0,&DAT_14ca6f010,
                      L"FShader_VirtualTextureCompress_CS< ERuntimeVirtualTextureMaterialType::BaseColor_Normal_Specular_Mask_YCoCg >"
                     );
        _DAT_14ca6f078 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_14312024d);
        _Init_thread_footer(&DAT_14ca6f120);
      }
      lVar18 = lStack_170;
      ppuVar43 = local_178;
      FUN_1415a9400();
      local_178 = (undefined **)0x0;
      lStack_170 = 0;
      FUN_1448f70da(ppuVar43,&DAT_14ca71b30,local_880,&local_178);
      FUN_140069376(local_900);
      puVar1 = local_8f8;
      uVar30 = (undefined6)((ulonglong)param_17 >> 0x10);
      uVar28 = (undefined4)CONCAT62(uVar30,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar28 = (undefined4)CONCAT62(uVar30,4);
      }
      puVar42 = (undefined8 *)(*(longlong *)(local_900 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar9 = puVar42 + 0x3d;
      if (*(undefined8 **)(local_900 + 0x78) < puVar9) {
        FUN_140023dd8(local_8f8,0x1f0);
        puVar42 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar9 = puVar42 + 0x3d;
      }
      *local_8f8 = (ulonglong)puVar9;
      local_178 = local_880;
      lStack_170 = DAT_14ca71b78;
      if (DAT_14ca71b78 != 0) {
        LOCK();
        *(int *)(DAT_14ca71b78 + 8) = *(int *)(DAT_14ca71b78 + 8) + 1;
        UNLOCK();
      }
      local_168 = &DAT_14ca71b30;
      local_968 = (wchar_t *)CONCAT71(local_968._1_7_,2);
      FUN_140068f1a(puVar42,local_788,&local_178,uVar28);
      lVar17 = local_900;
      *puVar42 = &PTR_FUN_14a337d50;
      puVar42[0x37] = &DAT_14ca71b30;
      puVar42[0x38] = local_880;
      puVar42[0x39] = ppuVar43;
      puVar42[0x3a] = lVar18;
      *(int *)(puVar42 + 0x3b) = iVar32;
      *(int *)((longlong)puVar42 + 0x1dc) = iVar24;
      *(undefined4 *)(puVar42 + 0x3c) = 1;
      iVar22 = *(int *)(local_900 + 0x170);
      *(uint *)(local_900 + 0x170) = iVar22 + 1U;
      if (*(uint *)(local_900 + 0x174) < iVar22 + 1U) {
        FUN_14470e57a(local_900 + 0x168,iVar22);
      }
      *(undefined8 **)(*(longlong *)(lVar17 + 0x168) + (longlong)iVar22 * 8) = puVar42;
      *(int *)((longlong)puVar42 + 0x2c) = *(int *)(lVar17 + 0x170) + -1;
      FUN_140069100(lVar17,puVar42);
    }
    else {
      switch(param_5) {
      case 0:
        uVar10 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar18 * 2) * 8);
        FUN_146082d08();
        FUN_1448e935e(uVar10,&local_178,&DAT_14ca6ebd8,0);
        FUN_146082d08();
        local_788[1] = iVar24;
        local_788[0] = iVar32;
        local_788[2] = 1;
        local_968 = (wchar_t *)local_788;
        FUN_1473441f3(lVar17,&local_789,&local_178,local_880);
        break;
      case 1:
        uVar10 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar18 * 2) * 8);
        FUN_1460836a0();
        FUN_1448e935e(uVar10,&local_178,&DAT_14ca6f1a0,0);
        FUN_1460836a0();
        local_788[1] = iVar24;
        local_788[0] = iVar32;
        local_788[2] = 1;
        local_968 = (wchar_t *)local_788;
        FUN_1473453c3(lVar17,&local_789,&local_178,local_880);
        break;
      case 2:
        uVar10 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar18 * 2) * 8);
        FUN_1460831d4();
        FUN_1448e935e(uVar10,&local_178,&DAT_14ca6ee28,0);
        FUN_1460831d4();
        local_788[1] = iVar24;
        local_788[0] = iVar32;
        local_788[2] = 1;
        local_968 = (wchar_t *)local_788;
        FUN_147344adb(lVar17,&local_789,&local_178,local_880);
        break;
      case 3:
        uVar10 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar18 * 2) * 8);
        FUN_146082f6e();
        FUN_1448e935e(uVar10,&local_178,&DAT_14ca6ed00,0);
        FUN_146082f6e();
        local_788[1] = iVar24;
        local_788[0] = iVar32;
        local_788[2] = 1;
        local_968 = (wchar_t *)local_788;
        FUN_147344667(lVar17,&local_789,&local_178,local_880);
        break;
      case 4:
        uVar10 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar18 * 2) * 8);
        FUN_14608343a();
        FUN_1448e935e(uVar10,&local_178,&DAT_14ca6ef50,0);
        FUN_14608343a();
        local_788[1] = iVar24;
        local_788[0] = iVar32;
        local_788[2] = 1;
        local_968 = (wchar_t *)local_788;
        FUN_147344f4f(lVar17,&local_789,&local_178,local_880);
        break;
      case 7:
        uVar10 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar18 * 2) * 8);
        FUN_146083906();
        FUN_1448e935e(uVar10,&local_178,&DAT_14ca6f2c8,0);
        FUN_146083906();
        local_788[1] = iVar24;
        local_788[0] = iVar32;
        local_788[2] = 1;
        local_968 = (wchar_t *)local_788;
        FUN_147345837(lVar17,&local_789,&local_178,local_880);
      }
    }
  }
  puVar1 = local_8f8;
  if (((char)local_850 != '\0') || ((char)local_838 != '\0')) {
    puVar42 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar9 = puVar42 + 0x2a;
    if (*(undefined8 **)(lVar17 + 0x78) < puVar9) {
      FUN_140023dd8(local_8f8,0x160);
      puVar42 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar9 = puVar42 + 0x2a;
    }
    *local_8f8 = (ulonglong)puVar9;
    *puVar42 = &PTR_FUN_14a337eb0;
    lVar18 = 0x22;
    do {
      puVar9 = (undefined8 *)((longlong)puVar42 + lVar18 + -0x12);
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined4 *)((longlong)puVar42 + lVar18 + -2) = 0xffff0000;
      lVar18 = lVar18 + 0x18;
    } while (lVar18 != 0xe2);
    *(undefined4 *)((longlong)puVar42 + 0xe4) = 0;
    puVar42[0x1a] = 0;
    puVar42[0x1b] = 0;
    *(undefined2 *)(puVar42 + 0x1c) = 0;
    *(undefined4 *)(puVar42 + 0x1d) = 0xffffffff;
    *(undefined4 *)((longlong)puVar42 + 0xec) = 0xffffffff;
    *(undefined4 *)(puVar42 + 0x1e) = 0xffffffff;
    *(undefined4 *)((longlong)puVar42 + 0xf4) = 0xffffffff;
    *(undefined4 *)(puVar42 + 0x1f) = 0;
    *(undefined2 *)((longlong)puVar42 + 0xfc) = 0;
    puVar42[0x20] = 0;
    puVar42[0x24] = 0;
    puVar42[0x25] = 0;
    puVar42[0x26] = 0;
    puVar42[0x27] = 0;
    puVar42[0x28] = 0;
    puVar42[0x29] = 0;
    iVar22 = *(int *)(lVar17 + 0xa0);
    *(uint *)(lVar17 + 0xa0) = iVar22 + 1U;
    if (*(uint *)(lVar17 + 0xa4) < iVar22 + 1U) {
      FUN_1448cfae8(local_848,iVar22);
    }
    *(undefined8 **)(*local_848 + (longlong)iVar22 * 8) = puVar42;
    puVar42[2] = local_8e8;
    puVar42[3] = 0;
    puVar42[4] = 0xffff0000;
    puVar42[5] = local_8a8;
    puVar42[6] = 0;
    puVar42[7] = 0xffff0000;
    puVar42[8] = local_898;
    puVar42[9] = 0;
    puVar42[10] = 0xffff0000;
    puVar42[0x22] = 0;
    *(int *)(puVar42 + 0x23) = (int)local_818;
    *(int *)((longlong)puVar42 + 0x11c) = (int)local_810;
    puVar42[0x24] = local_8d0;
    uVar10 = DAT_14c9c0d80;
    puVar42[0x25] = DAT_14c9c0d80;
    puVar42[0x26] = local_8b8;
    puVar42[0x27] = uVar10;
    puVar42[0x28] = local_8a0;
    puVar42[0x29] = uVar10;
    if ((char)local_850 == '\0') {
      local_968 = (wchar_t *)CONCAT71(local_968._1_7_,param_5);
      FUN_1473407ba(lVar17,*(undefined4 *)(param_2 + 8),puVar42 + 2,local_7e8);
    }
    else {
      local_968 = (wchar_t *)CONCAT71(local_968._1_7_,param_5);
      FUN_147340789(lVar17,*(undefined4 *)(param_2 + 8),puVar42 + 2,local_7e8);
    }
  }
  if ((param_8 != (longlong *)0x0) && (local_8f0 != 0)) {
    local_960._0_8_ = param_12;
    local_968 = (wchar_t *)CONCAT44(local_968._4_4_,param_10);
    FUN_143120835(lVar17,local_8f0,param_8,param_9);
  }
  puVar14 = local_8b0;
  if ((param_13 != 0) && (local_8d8 != 0)) {
    local_960._0_8_ = param_17;
    local_968 = (wchar_t *)CONCAT44(local_968._4_4_,param_15);
    FUN_143120835(lVar17,local_8d8,param_13,param_14);
  }
  if ((param_18 != 0) && (puVar14 != (undefined *)0x0)) {
    local_960._0_8_ = param_22;
    local_968 = (wchar_t *)CONCAT44(local_968._4_4_,param_20);
    FUN_143120835(lVar17,puVar14,param_18,param_19);
  }
  FUN_1447350ca(lStack_6f0,(ulonglong)local_6e8 & 0xffffffff);
  if (lStack_6f0 != 0) {
    FUN_1400020a8();
  }
  FUN_144891d70(&local_688);
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_988) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14046b56a FUN_14046b56a body=175 status=ok
// SIG undefined FUN_14046b56a(void)

void FUN_14046b56a(longlong *param_1,uint param_2,char param_3)

{
  void *_Dst;
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 200);
  lVar1 = *param_1 + (longlong)(int)param_2 * 200;
  *(undefined4 *)(lVar1 + 0xc0) = 0;
  if (*(longlong *)(lVar1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(lVar1 + 0x78);
  puVar2 = *(undefined8 **)((longlong)_Dst + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 200),(longlong)(int)(~param_2 + iVar3) * 200);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  if (param_3 == '\x01') {
    FUN_14046b61a(param_1);
    return;
  }
  return;
}



// FUNCTION 14046b61a FUN_14046b61a body=64 status=ok
// SIG undefined FUN_14046b61a(void)

void FUN_14046b61a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14046b65a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,200,8);
  }
  return;
}



// FUNCTION 14046b65a FUN_14046b65a body=329 status=ok
// SIG undefined FUN_14046b65a(void)

ulonglong FUN_14046b65a(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_3;
  if (((0x3fff < (ulonglong)((longlong)(int)(param_3 - param_2) * 200)) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
    }
    else {
      uVar3 = (ulonglong)param_2 * 200;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar3 + 0xf;
          if (param_2 < 0xa4) {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0xfffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar5 = 0x32;
              if (0x32 < bVar2) {
                uVar5 = (ulonglong)bVar2;
              }
              uVar6 = 0x32 - (ulonglong)bVar2;
              do {
                uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14046b6f5;
                lVar1 = uVar5 + 1 + uVar6;
                uVar6 = uVar6 - 1;
              } while (lVar1 != 0x33);
            }
            uVar3 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar3 = (ulonglong)DAT_14c841df8;
            }
            uVar3 = -uVar3 & ((uVar4 & 0xfffffffff0) + uVar3) - 1;
          }
        }
        else {
          uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
        }
      }
LAB_14046b6f5:
      uVar3 = uVar3 / 200;
    }
  }
  return uVar3;
}



// FUNCTION 14046b7ae FUN_14046b7ae body=24980 status=ok
// SIG undefined FUN_14046b7ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14046b7ae(float *param_1,undefined8 param_2,float param_3,undefined8 param_4,
                  longlong param_5,longlong param_6,longlong *param_7)

{
  double dVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar56;
  double dVar57;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar58;
  float fVar59;
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar60;
  float fVar61;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar77;
  double dVar78;
  float fVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  double dVar98;
  float fVar99;
  double dVar100;
  double dVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar106;
  float fVar107;
  undefined1 auVar105 [16];
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  undefined4 uVar117;
  double dVar118;
  undefined1 auVar116 [16];
  double dVar119;
  double dVar120;
  undefined1 auStack_5b8 [32];
  longlong local_598;
  longlong *local_590;
  undefined1 local_588 [8];
  undefined8 uStack_580;
  undefined1 local_578 [8];
  undefined8 uStack_570;
  undefined8 local_568;
  double dStack_560;
  float local_54c;
  undefined1 local_548 [8];
  undefined8 uStack_540;
  undefined1 local_538 [8];
  undefined8 uStack_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [8];
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined1 local_4d8 [8];
  undefined8 uStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [8];
  undefined8 uStack_4b0;
  undefined1 local_4a8 [8];
  undefined8 uStack_4a0;
  float local_48c;
  float local_488;
  float local_484;
  float local_480;
  float local_47c;
  float local_478;
  float local_474;
  float local_470;
  float local_46c;
  undefined1 local_468 [8];
  undefined8 uStack_460;
  double local_458;
  double dStack_450;
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  double local_418;
  double local_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  undefined1 local_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3d8 [8];
  float fStack_3d0;
  float fStack_3cc;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined1 local_388 [16];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  undefined8 uStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  longlong local_178;
  longlong lStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_5b8;
  local_178 = param_7[0xe];
  lStack_170 = param_7[0xf];
  local_3f8 = *(double *)(param_5 + 0xb48);
  local_3f0 = *(double *)(param_5 + 0xb50);
  dVar56 = *(double *)(param_5 + 0x4b0);
  dVar62 = *(double *)(param_5 + 0x4b8);
  dVar69 = *(double *)(param_5 + 0x4c0);
  dVar80 = *(double *)(param_5 + 0x4c8);
  dVar87 = *(double *)(param_5 + 0x4d0);
  dVar93 = *(double *)(param_5 + 0x4d8);
  dVar96 = *(double *)(param_5 + 0x4e0);
  dVar100 = *(double *)(param_5 + 0x4e8);
  dVar101 = *(double *)(param_5 + 0x4f0);
  dVar78 = *(double *)(param_5 + 0x4f8);
  local_46c = (float)local_3f0;
  dVar92 = (double)local_46c;
  dStack_560 = 0.0;
  local_470 = (float)local_3f8;
  local_458 = (double)local_470;
  dStack_450 = 0.0;
  local_400 = *(double *)(param_5 + 0xb58);
  dVar81 = *(double *)(param_5 + 0x500);
  dVar88 = *(double *)(param_5 + 0x508);
  local_474 = (float)local_400;
  local_308 = (double)local_474;
  uStack_300 = 0;
  dVar28 = *(double *)(param_5 + 0x510) * 0.0;
  dVar33 = *(double *)(param_5 + 0x518) * 0.0;
  dVar77 = dVar56 * 0.0 + dVar87 + dVar101 * 0.0 + dVar28;
  dVar63 = dVar62 * 0.0 + dVar93 + dVar78 * 0.0 + dVar33;
  auVar116._8_4_ = SUB84(dVar63,0);
  auVar116._0_8_ = dVar77;
  auVar116._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
  dVar71 = local_308 * dVar81 + dVar92 * dVar96 + local_458 * dVar69 + *(double *)(param_5 + 0x520);
  dVar63 = local_308 * dVar88 + dVar92 * dVar100 + local_458 * dVar80 + *(double *)(param_5 + 0x528)
  ;
  auVar76._8_4_ = SUB84(dVar63,0);
  auVar76._0_8_ = dVar71;
  auVar76._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
  dVar20 = *(double *)(param_5 + 0x520) * 0.0;
  dVar23 = *(double *)(param_5 + 0x528) * 0.0;
  dVar45 = dVar69 * 0.0 + dVar96 + dVar81 * 0.0 + dVar20;
  dVar63 = dVar80 * 0.0 + dVar100 + dVar88 * 0.0 + dVar23;
  auVar68._8_4_ = SUB84(dVar63,0);
  auVar68._0_8_ = dVar45;
  auVar68._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
  dVar63 = *(double *)(param_5 + 0x530);
  dVar30 = *(double *)(param_5 + 0x538);
  dVar64 = *(double *)(param_5 + 0x538);
  dVar34 = *(double *)(param_5 + 0x540);
  dVar46 = *(double *)(param_5 + 0x548);
  dVar57 = *(double *)(param_5 + 0x548);
  auVar48._0_8_ = -local_308;
  auVar48._8_8_ = 0x8000000000000000;
  auVar72 = blendpd(auVar48,_DAT_149935300,2);
  dVar119 = auVar72._0_8_;
  dVar120 = auVar72._8_8_;
  dVar47 = *(double *)(param_5 + 0x550);
  dVar58 = *(double *)(param_5 + 0x558);
  dVar35 = *(double *)(param_5 + 0x558);
  dVar1 = *(double *)(param_5 + 0x560);
  dVar21 = *(double *)(param_5 + 0x568);
  dVar29 = *(double *)(param_5 + 0x568);
  dVar118 = (dVar1 * 0.0 + dVar35 * 1.0 + dVar47 * 0.0) - dVar92 * dVar29;
  dVar44 = *(double *)(param_5 + 0x570);
  dVar70 = *(double *)(param_5 + 0x578);
  dVar83 = *(double *)(param_5 + 0x578);
  dVar84 = *(double *)(param_5 + 0x580);
  dVar94 = *(double *)(param_5 + 0x588);
  dVar91 = *(double *)(param_5 + 0x588);
  auVar65._8_8_ = dVar91 * dVar120 + dVar84 * 0.0 + dVar83 * 0.0 + dVar44 * 0.0;
  dVar90 = *(double *)(param_5 + 0x590);
  dVar95 = *(double *)(param_5 + 0x598);
  dVar97 = *(double *)(param_5 + 0x598);
  dVar98 = *(double *)(param_5 + 0x5a0);
  dVar22 = *(double *)(param_5 + 0x5a8);
  dVar24 = *(double *)(param_5 + 0x5a8);
  auVar72._8_8_ = (dVar98 * 0.0 + dVar97 * 1.0 + dVar90 * 0.0) - dVar92 * dVar24;
  auVar73._8_8_ = dVar120 * dVar24 + dVar98 * 0.0 + dVar97 * 0.0 + dVar90 * 0.0;
  auVar85 = insertps(ZEXT416((uint)(float)((dVar34 * 0.0 + dVar30 * 0.0 + dVar63 * 1.0) -
                                          local_458 * dVar46)),
                     ZEXT416((uint)(float)((dVar34 * 0.0 + dVar64 * 1.0 + dVar63 * 0.0) -
                                          dVar92 * dVar57)),0x10);
  auVar85 = insertps(auVar85,ZEXT416((uint)(float)(dVar46 * dVar119 +
                                                  dVar34 * 1.0 + dVar30 * 0.0 + dVar63 * 0.0)),0x20)
  ;
  auVar86 = insertps(auVar85,ZEXT416((uint)(float)(dVar57 * dVar120 +
                                                  dVar34 * 0.0 + dVar64 * 0.0 + dVar63 * 0.0)),0x30)
  ;
  auVar85 = insertps(ZEXT416((uint)(float)((dVar1 * 0.0 + dVar58 * 0.0 + dVar47 * 1.0) -
                                          local_458 * dVar21)),ZEXT416((uint)(float)dVar118),0x10);
  auVar85 = insertps(auVar85,ZEXT416((uint)(float)(dVar21 * dVar119 +
                                                  dVar1 * 1.0 + dVar58 * 0.0 + dVar47 * 0.0)),0x20);
  auVar48 = insertps(auVar85,ZEXT416((uint)(float)(dVar29 * dVar120 +
                                                  dVar1 * 0.0 + dVar35 * 0.0 + dVar47 * 0.0)),0x30);
  fVar27 = auVar48._0_4_;
  fVar109 = auVar48._12_4_;
  auVar65._0_8_ = auVar65._8_8_;
  auVar72._0_8_ = auVar72._8_8_;
  auVar73._0_8_ = auVar73._8_8_;
  auVar66._4_12_ = auVar65._4_12_;
  auVar66._0_4_ = (float)auVar65._8_8_;
  auVar85._4_12_ = auVar72._4_12_;
  auVar85._0_4_ = (float)auVar72._8_8_;
  auVar74._4_12_ = auVar73._4_12_;
  auVar74._0_4_ = (float)auVar73._8_8_;
  auVar72 = insertps(ZEXT416((uint)(float)((dVar84 * 0.0 + dVar70 * 0.0 + dVar44 * 1.0) -
                                          local_458 * dVar94)),
                     ZEXT416((uint)(float)((dVar84 * 0.0 + dVar83 * 1.0 + dVar44 * 0.0) -
                                          dVar92 * dVar91)),0x10);
  auVar72 = insertps(auVar72,ZEXT416((uint)(float)(dVar94 * dVar119 +
                                                  dVar84 * 1.0 + dVar70 * 0.0 + dVar44 * 0.0)),0x20)
  ;
  _local_3e8 = insertps(auVar72,auVar66,0x30);
  auVar72 = insertps(ZEXT416((uint)(float)((dVar98 * 0.0 + dVar95 * 0.0 + dVar90 * 1.0) -
                                          local_458 * dVar22)),auVar85,0x10);
  auVar72 = insertps(auVar72,ZEXT416((uint)(float)(dVar119 * dVar22 +
                                                  dVar98 * 1.0 + dVar95 * 0.0 + dVar90 * 0.0)),0x20)
  ;
  _local_3d8 = insertps(auVar72,auVar74,0x30);
  auVar72 = insertps(ZEXT416((uint)(float)*(double *)(param_5 + 0x330)),
                     ZEXT416((uint)(float)*(double *)(param_5 + 0x338)),0x10);
  auVar72 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x340)),0x20);
  local_228 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x348)),0x30);
  auVar72 = insertps(ZEXT416((uint)(float)*(double *)(param_5 + 0x350)),
                     ZEXT416((uint)(float)*(double *)(param_5 + 0x358)),0x10);
  auVar72 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x360)),0x20);
  local_238 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x368)),0x30);
  auVar72 = insertps(ZEXT416((uint)(float)*(double *)(param_5 + 0x370)),
                     ZEXT416((uint)(float)*(double *)(param_5 + 0x378)),0x10);
  auVar105._4_12_ = SUB1612(ZEXT816(0),4);
  auVar105._0_4_ = (float)*(double *)(param_5 + 0x390);
  auVar72 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x380)),0x20);
  local_248 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x388)),0x30);
  auVar72 = insertps(auVar105,ZEXT416((uint)(float)*(double *)(param_5 + 0x398)),0x10);
  auVar72 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x3a0)),0x20);
  local_258 = insertps(auVar72,ZEXT416((uint)(float)*(double *)(param_5 + 0x3a8)),0x30);
  fVar25 = (float)(dVar56 + dVar87 * 0.0 + dVar101 * 0.0 + dVar28);
  fVar9 = (float)(dVar62 + dVar93 * 0.0 + dVar78 * 0.0 + dVar33);
  fVar15 = local_228._0_4_;
  fVar16 = local_228._4_4_;
  fVar17 = local_228._8_4_;
  fVar18 = local_228._12_4_;
  fVar19 = local_238._0_4_;
  fVar61 = local_238._4_4_;
  fVar113 = local_238._8_4_;
  fVar114 = local_238._12_4_;
  fVar26 = (float)(dVar69 + dVar96 * 0.0 + dVar81 * 0.0 + dVar20);
  fVar11 = local_248._0_4_;
  fVar12 = local_248._4_4_;
  fVar13 = local_248._8_4_;
  fVar14 = local_248._12_4_;
  local_508._8_8_ = auVar116._8_8_;
  fVar10 = (float)dVar77;
  fVar59 = (float)(dVar80 + dVar100 * 0.0 + dVar88 * 0.0 + dVar23);
  fVar36 = (float)(double)local_508._8_8_;
  fVar104 = local_258._0_4_;
  fVar106 = local_258._4_4_;
  fVar107 = local_258._8_4_;
  fVar108 = local_258._12_4_;
  local_268 = fVar59 * fVar104 + fVar26 * fVar11 + fVar9 * fVar19 + fVar25 * fVar15;
  fStack_264 = fVar59 * fVar106 + fVar26 * fVar12 + fVar9 * fVar61 + fVar25 * fVar16;
  fStack_260 = fVar59 * fVar107 + fVar26 * fVar13 + fVar9 * fVar113 + fVar25 * fVar17;
  fStack_25c = fVar59 * fVar108 + fVar26 * fVar14 + fVar9 * fVar114 + fVar25 * fVar18;
  uStack_4f0 = auVar68._8_8_;
  fVar9 = (float)dVar45;
  fVar25 = (float)uStack_4f0;
  local_278 = fVar25 * fVar104 + fVar9 * fVar11 + fVar36 * fVar19 + fVar10 * fVar15;
  fStack_274 = fVar25 * fVar106 + fVar9 * fVar12 + fVar36 * fVar61 + fVar10 * fVar16;
  fStack_270 = fVar25 * fVar107 + fVar9 * fVar13 + fVar36 * fVar113 + fVar10 * fVar17;
  fStack_26c = fVar25 * fVar108 + fVar9 * fVar14 + fVar36 * fVar114 + fVar10 * fVar18;
  fVar9 = (float)(dVar56 * 0.0 + dVar87 * 0.0 + dVar101 + dVar28);
  fVar25 = (float)(dVar62 * 0.0 + dVar93 * 0.0 + dVar78 + dVar33);
  fVar36 = (float)(dVar69 * 0.0 + dVar96 * 0.0 + dVar81 + dVar20);
  fVar59 = (float)(dVar101 * local_308 + dVar87 * dVar92 + dVar56 * local_458 +
                  *(double *)(param_5 + 0x510));
  uStack_570 = auVar76._8_8_;
  fVar99 = (float)dVar71;
  fVar110 = (float)(dVar80 * 0.0 + dVar100 * 0.0 + dVar88 + dVar23);
  fVar79 = (float)(dVar78 * local_308 + dVar93 * dVar92 + dVar62 * local_458 +
                  *(double *)(param_5 + 0x518));
  fVar102 = (float)uStack_570;
  fVar115 = (float)*(double *)(param_5 + 0x430);
  fVar10 = (float)*(double *)(param_5 + 0x438);
  fVar103 = (float)*(double *)(param_5 + 0x440);
  fVar26 = (float)*(double *)(param_5 + 0x448);
  local_288 = fVar110 * fVar104 + fVar36 * fVar11 + fVar25 * fVar19 + fVar9 * fVar15;
  fStack_284 = fVar110 * fVar106 + fVar36 * fVar12 + fVar25 * fVar61 + fVar9 * fVar16;
  fStack_280 = fVar110 * fVar107 + fVar36 * fVar13 + fVar25 * fVar113 + fVar9 * fVar17;
  fStack_27c = fVar110 * fVar108 + fVar36 * fVar14 + fVar25 * fVar114 + fVar9 * fVar18;
  fVar111 = (float)*(double *)(param_5 + 0x450);
  fVar110 = (float)*(double *)(param_5 + 0x458);
  fVar112 = (float)*(double *)(param_5 + 0x460);
  fVar37 = (float)*(double *)(param_5 + 0x468);
  fVar38 = (float)*(double *)(param_5 + 0x470);
  fVar39 = (float)*(double *)(param_5 + 0x478);
  fVar40 = (float)*(double *)(param_5 + 0x480);
  fVar41 = (float)*(double *)(param_5 + 0x488);
  fVar42 = (float)*(double *)(param_5 + 0x490);
  local_2e8 = ZEXT416((uint)fVar42);
  fVar43 = (float)*(double *)(param_5 + 0x498);
  local_2d8 = ZEXT416((uint)fVar43);
  fVar60 = (float)*(double *)(param_5 + 0x4a0);
  local_2c8 = ZEXT416((uint)fVar60);
  local_298 = fVar102 * fVar104 + fVar99 * fVar11 + fVar79 * fVar19 + fVar59 * fVar15;
  fStack_294 = fVar102 * fVar106 + fVar99 * fVar12 + fVar79 * fVar61 + fVar59 * fVar16;
  fStack_290 = fVar102 * fVar107 + fVar99 * fVar13 + fVar79 * fVar113 + fVar59 * fVar17;
  fStack_28c = fVar102 * fVar108 + fVar99 * fVar14 + fVar79 * fVar114 + fVar59 * fVar18;
  fVar61 = (float)*(double *)(param_5 + 0x4a8);
  local_2b8 = ZEXT416((uint)fVar61);
  dVar63 = *(double *)(param_6 + 0x530);
  uVar117 = (undefined4)((ulonglong)dVar118 >> 0x20);
  auVar75._4_4_ = uVar117;
  auVar75._0_4_ = fVar115;
  auVar75._8_4_ = SUB84(dVar118,0);
  auVar75._12_4_ = uVar117;
  dVar64 = *(double *)(param_6 + 0x538);
  local_188 = ZEXT416((uint)(float)dVar64);
  auVar76 = insertps(auVar75,ZEXT416((uint)fVar10),0x10);
  dVar30 = *(double *)(param_6 + 0x540);
  local_198 = ZEXT416((uint)(float)dVar30);
  dVar34 = *(double *)(param_6 + 0x548);
  local_1a8 = ZEXT416((uint)(float)dVar34);
  local_468._0_4_ = auVar86._0_4_;
  local_468._4_4_ = auVar86._4_4_;
  uStack_460._0_4_ = auVar86._8_4_;
  uStack_460._4_4_ = auVar86._12_4_;
  dVar46 = *(double *)(param_6 + 0x550);
  dVar57 = *(double *)(param_6 + 0x558);
  local_1c8 = ZEXT416((uint)(float)dVar57);
  fVar113 = auVar48._4_4_;
  fVar114 = auVar48._8_4_;
  dVar47 = *(double *)(param_6 + 0x560);
  local_1d8 = ZEXT416((uint)(float)dVar47);
  dVar58 = *(double *)(param_6 + 0x568);
  local_1e8 = ZEXT416((uint)(float)dVar58);
  auVar76 = insertps(auVar76,ZEXT416((uint)fVar103),0x20);
  dVar35 = *(double *)(param_6 + 0x570);
  dVar1 = *(double *)(param_6 + 0x578);
  local_1f8 = ZEXT416((uint)(float)dVar1);
  dVar21 = *(double *)(param_6 + 0x580);
  local_208 = ZEXT416((uint)(float)dVar21);
  dVar29 = *(double *)(param_6 + 0x588);
  local_218 = ZEXT416((uint)(float)dVar29);
  local_2a8 = insertps(auVar76,ZEXT416((uint)fVar26),0x30);
  dVar44 = *(double *)(param_6 + 0x5a8);
  local_1b8 = ZEXT416((uint)(float)dVar44);
  fVar9 = (float)*(double *)(param_6 + 0x430);
  local_3c8 = ZEXT416((uint)fVar9);
  fVar25 = (float)*(double *)(param_6 + 0x438);
  local_3b8 = ZEXT416((uint)fVar25);
  local_4a8._4_4_ =
       fVar26 * (float)local_3d8._4_4_ +
       fVar103 * (float)local_3e8._4_4_ + fVar10 * fVar113 + fVar115 * (float)local_468._4_4_;
  local_4a8._0_4_ =
       fVar26 * (float)local_3d8._0_4_ +
       fVar103 * (float)local_3e8._0_4_ + fVar10 * fVar27 + fVar115 * (float)local_468._0_4_;
  uStack_4a0._0_4_ =
       fVar26 * fStack_3d0 + fVar103 * fStack_3e0 + fVar10 * fVar114 + fVar115 * (float)uStack_460;
  uStack_4a0._4_4_ =
       fVar26 * fStack_3cc + fVar103 * fStack_3dc + fVar10 * fVar109 + fVar115 * uStack_460._4_4_;
  fVar10 = (float)*(double *)(param_6 + 0x440);
  local_3a8 = ZEXT416((uint)fVar10);
  fVar26 = (float)*(double *)(param_6 + 0x448);
  auVar76 = insertps(ZEXT416((uint)fVar111),ZEXT416((uint)fVar110),0x10);
  fVar36 = (float)*(double *)(param_6 + 0x450);
  local_398 = ZEXT416((uint)fVar36);
  fVar59 = (float)*(double *)(param_6 + 0x458);
  local_388 = ZEXT416((uint)fVar59);
  fVar11 = (float)*(double *)(param_6 + 0x460);
  local_378 = ZEXT416((uint)fVar11);
  fVar12 = (float)*(double *)(param_6 + 0x468);
  fVar13 = (float)*(double *)(param_6 + 0x470);
  local_368 = ZEXT416((uint)fVar13);
  fVar14 = (float)*(double *)(param_6 + 0x478);
  local_358 = ZEXT416((uint)fVar14);
  auVar76 = insertps(auVar76,ZEXT416((uint)fVar112),0x20);
  fVar15 = (float)*(double *)(param_6 + 0x480);
  local_348 = ZEXT416((uint)fVar15);
  fVar79 = (float)*(double *)(param_6 + 0x488);
  dVar70 = *(double *)(param_6 + 0x590);
  fVar16 = (float)*(double *)(param_6 + 0x490);
  local_338 = ZEXT416((uint)fVar16);
  dVar83 = *(double *)(param_6 + 0x598);
  fVar17 = (float)*(double *)(param_6 + 0x498);
  local_328 = ZEXT416((uint)fVar17);
  dVar84 = *(double *)(param_6 + 0x5a0);
  fVar18 = (float)*(double *)(param_6 + 0x4a0);
  local_318 = ZEXT416((uint)fVar18);
  fVar19 = (float)*(double *)(param_6 + 0x4a8);
  local_408 = *(double *)(param_5 + 0xb30);
  local_410 = *(double *)(param_5 + 0xb38);
  local_478 = (float)(double)param_7[0x15];
  local_418 = *(double *)(param_5 + 0xb40);
  local_47c = (float)(double)param_7[0x14];
  param_1[0x2dc] = param_3;
  local_480 = (float)*(double *)(param_5 + 0x8b8);
  local_484 = (float)*(double *)(param_5 + 0x8c0);
  local_2f8 = insertps(auVar76,ZEXT416((uint)fVar37),0x30);
  local_488 = (float)*(double *)(param_5 + 0x8c8);
  local_48c = (float)*(double *)(param_5 + 0x8d0);
  dVar91 = *(double *)(param_5 + 0x8d8);
  local_4d8._4_4_ =
       fVar37 * (float)local_3d8._4_4_ +
       fVar112 * (float)local_3e8._4_4_ + fVar110 * fVar113 + fVar111 * (float)local_468._4_4_;
  local_4d8._0_4_ =
       fVar37 * (float)local_3d8._0_4_ +
       fVar112 * (float)local_3e8._0_4_ + fVar110 * fVar27 + fVar111 * (float)local_468._0_4_;
  uStack_4d0._0_4_ =
       fVar37 * fStack_3d0 + fVar112 * fStack_3e0 + fVar110 * fVar114 + fVar111 * (float)uStack_460;
  uStack_4d0._4_4_ =
       fVar37 * fStack_3cc + fVar112 * fStack_3dc + fVar110 * fVar109 + fVar111 * uStack_460._4_4_;
  dVar94 = *(double *)(param_5 + 0x8e0);
  dVar90 = *(double *)(param_5 + 0x8e8);
  auVar76 = insertps(ZEXT416((uint)fVar38),ZEXT416((uint)fVar39),0x10);
  dVar95 = *(double *)(param_5 + 0x8f0);
  dVar97 = *(double *)(param_5 + 0x8f8);
  dVar98 = *(double *)(param_5 + 0x900);
  dVar22 = *(double *)(param_5 + 0x908);
  dVar24 = *(double *)(param_5 + 0x910);
  dVar71 = *(double *)(param_5 + 0x918);
  auVar76 = insertps(auVar76,ZEXT416((uint)fVar40),0x20);
  dVar77 = *(double *)(param_5 + 0x920);
  dVar45 = *(double *)(param_5 + 0x928);
  param_1[0x40] = (float)*(double *)(param_5 + 0x8b0);
  param_1[0x41] = local_480;
  param_1[0x42] = local_484;
  param_1[0x43] = local_488;
  param_1[0x44] = local_48c;
  param_1[0x45] = (float)dVar91;
  param_1[0x46] = (float)dVar94;
  param_1[0x47] = (float)dVar90;
  param_1[0x48] = (float)dVar95;
  param_1[0x49] = (float)dVar97;
  param_1[0x4a] = (float)dVar98;
  param_1[0x4b] = (float)dVar22;
  param_1[0x4c] = (float)dVar24;
  param_1[0x4d] = (float)dVar71;
  param_1[0x4e] = (float)dVar77;
  param_1[0x4f] = (float)dVar45;
  local_428 = insertps(auVar76,ZEXT416((uint)fVar41),0x30);
  local_438 = ZEXT416((uint)(float)*(double *)(param_5 + 0x930));
  local_538._4_4_ =
       fVar41 * (float)local_3d8._4_4_ +
       fVar40 * (float)local_3e8._4_4_ + fVar39 * fVar113 + fVar38 * (float)local_468._4_4_;
  local_538._0_4_ =
       fVar41 * (float)local_3d8._0_4_ +
       fVar40 * (float)local_3e8._0_4_ + fVar39 * fVar27 + fVar38 * (float)local_468._0_4_;
  uStack_530._0_4_ =
       fVar41 * fStack_3d0 + fVar40 * fStack_3e0 + fVar39 * fVar114 + fVar38 * (float)uStack_460;
  uStack_530._4_4_ =
       fVar41 * fStack_3cc + fVar40 * fStack_3dc + fVar39 * fVar109 + fVar38 * uStack_460._4_4_;
  dVar91 = *(double *)(param_5 + 0x938);
  local_448 = ZEXT416((uint)(float)dVar91);
  local_54c = (float)*(double *)(param_5 + 0x940);
  dVar94 = *(double *)(param_5 + 0x948);
  dVar90 = *(double *)(param_5 + 0x950);
  auVar76 = insertps(local_2e8,local_2d8,0x10);
  dVar95 = *(double *)(param_5 + 0x958);
  dVar97 = *(double *)(param_5 + 0x960);
  dVar98 = *(double *)(param_5 + 0x968);
  dVar22 = *(double *)(param_5 + 0x970);
  auVar76 = insertps(auVar76,local_2c8,0x20);
  dVar24 = *(double *)(param_5 + 0x978);
  dVar71 = *(double *)(param_5 + 0x980);
  dVar77 = *(double *)(param_5 + 0x988);
  dVar45 = *(double *)(param_5 + 0x990);
  auVar116 = insertps(auVar76,local_2b8,0x30);
  dVar56 = *(double *)(param_5 + 0x998);
  dVar62 = *(double *)(param_5 + 0x9a0);
  dVar69 = *(double *)(param_5 + 0x9a8);
  *param_1 = (float)*(double *)(param_5 + 0x930);
  param_1[1] = (float)dVar91;
  param_1[2] = local_54c;
  param_1[3] = (float)dVar94;
  param_1[4] = (float)dVar90;
  param_1[5] = (float)dVar95;
  param_1[6] = (float)dVar97;
  param_1[7] = (float)dVar98;
  param_1[8] = (float)dVar22;
  param_1[9] = (float)dVar24;
  param_1[10] = (float)dVar71;
  param_1[0xb] = (float)dVar77;
  param_1[0xc] = (float)dVar45;
  param_1[0xd] = (float)dVar56;
  param_1[0xe] = (float)dVar62;
  param_1[0xf] = (float)dVar69;
  *(ulonglong *)(param_1 + 0x10) = CONCAT44(fStack_264,local_268);
  *(ulonglong *)(param_1 + 0x12) = CONCAT44(fStack_25c,fStack_260);
  *(ulonglong *)(param_1 + 0x14) = CONCAT44(fStack_274,local_278);
  *(ulonglong *)(param_1 + 0x16) = CONCAT44(fStack_26c,fStack_270);
  *(ulonglong *)(param_1 + 0x18) = CONCAT44(fStack_284,local_288);
  *(ulonglong *)(param_1 + 0x1a) = CONCAT44(fStack_27c,fStack_280);
  *(ulonglong *)(param_1 + 0x1c) = CONCAT44(fStack_294,local_298);
  *(ulonglong *)(param_1 + 0x1e) = CONCAT44(fStack_28c,fStack_290);
  *(undefined1 (*) [8])(param_1 + 0x20) = local_4a8;
  *(undefined8 *)(param_1 + 0x22) = uStack_4a0;
  *(undefined1 (*) [8])(param_1 + 0x24) = local_4d8;
  *(double *)(param_1 + 0x26) = uStack_4d0;
  *(undefined1 (*) [8])(param_1 + 0x28) = local_538;
  *(undefined8 *)(param_1 + 0x2a) = uStack_530;
  param_1[0x2c] =
       fVar61 * (float)local_3d8._0_4_ +
       fVar60 * (float)local_3e8._0_4_ + fVar43 * fVar27 + fVar42 * (float)local_468._0_4_;
  param_1[0x2d] =
       fVar61 * (float)local_3d8._4_4_ +
       fVar60 * (float)local_3e8._4_4_ + fVar43 * fVar113 + fVar42 * (float)local_468._4_4_;
  param_1[0x2e] =
       fVar61 * fStack_3d0 + fVar60 * fStack_3e0 + fVar43 * fVar114 + fVar42 * (float)uStack_460;
  param_1[0x2f] =
       fVar61 * fStack_3cc + fVar60 * fStack_3dc + fVar43 * fVar109 + fVar42 * uStack_460._4_4_;
  dVar91 = *(double *)(param_5 + 0x838);
  dVar94 = *(double *)(param_5 + 0x840);
  dVar90 = *(double *)(param_5 + 0x848);
  dVar95 = *(double *)(param_5 + 0x850);
  dVar97 = *(double *)(param_5 + 0x858);
  dVar98 = *(double *)(param_5 + 0x860);
  dVar22 = *(double *)(param_5 + 0x868);
  dVar24 = *(double *)(param_5 + 0x870);
  dVar71 = *(double *)(param_5 + 0x878);
  dVar77 = *(double *)(param_5 + 0x880);
  dVar45 = *(double *)(param_5 + 0x888);
  dVar56 = *(double *)(param_5 + 0x890);
  dVar62 = *(double *)(param_5 + 0x898);
  dVar69 = *(double *)(param_5 + 0x8a0);
  dVar80 = *(double *)(param_5 + 0x8a8);
  param_1[0x30] = (float)*(double *)(param_5 + 0x830);
  param_1[0x31] = (float)dVar91;
  param_1[0x32] = (float)dVar94;
  param_1[0x33] = (float)dVar90;
  param_1[0x34] = (float)dVar95;
  param_1[0x35] = (float)dVar97;
  param_1[0x36] = (float)dVar98;
  param_1[0x37] = (float)dVar22;
  param_1[0x38] = (float)dVar24;
  param_1[0x39] = (float)dVar71;
  param_1[0x3a] = (float)dVar77;
  param_1[0x3b] = (float)dVar45;
  param_1[0x3c] = (float)dVar56;
  param_1[0x3d] = (float)dVar62;
  param_1[0x3e] = (float)dVar69;
  param_1[0x3f] = (float)dVar80;
  dVar91 = *(double *)(param_5 + 0x738);
  dVar94 = *(double *)(param_5 + 0x740);
  dVar90 = *(double *)(param_5 + 0x748);
  dVar95 = *(double *)(param_5 + 0x750);
  dVar97 = *(double *)(param_5 + 0x758);
  dVar98 = *(double *)(param_5 + 0x760);
  dVar22 = *(double *)(param_5 + 0x768);
  dVar24 = *(double *)(param_5 + 0x770);
  dVar71 = *(double *)(param_5 + 0x778);
  dVar77 = *(double *)(param_5 + 0x780);
  dVar45 = *(double *)(param_5 + 0x788);
  dVar56 = *(double *)(param_5 + 0x790);
  dVar62 = *(double *)(param_5 + 0x798);
  dVar69 = *(double *)(param_5 + 0x7a0);
  dVar80 = *(double *)(param_5 + 0x7a8);
  param_1[0x50] = (float)*(double *)(param_5 + 0x730);
  param_1[0x51] = (float)dVar91;
  param_1[0x52] = (float)dVar94;
  param_1[0x53] = (float)dVar90;
  param_1[0x54] = (float)dVar95;
  param_1[0x55] = (float)dVar97;
  param_1[0x56] = (float)dVar98;
  param_1[0x57] = (float)dVar22;
  param_1[0x58] = (float)dVar24;
  param_1[0x59] = (float)dVar71;
  param_1[0x5a] = (float)dVar77;
  param_1[0x5b] = (float)dVar45;
  param_1[0x5c] = (float)dVar56;
  param_1[0x5d] = (float)dVar62;
  param_1[0x5e] = (float)dVar69;
  param_1[0x5f] = (float)dVar80;
  dVar91 = *(double *)(param_5 + 0x7b8);
  dVar94 = *(double *)(param_5 + 0x7c0);
  dVar90 = *(double *)(param_5 + 0x7c8);
  dVar95 = *(double *)(param_5 + 2000);
  dVar97 = *(double *)(param_5 + 0x7d8);
  dVar98 = *(double *)(param_5 + 0x7e0);
  dVar22 = *(double *)(param_5 + 0x7e8);
  dVar24 = *(double *)(param_5 + 0x7f0);
  dVar71 = *(double *)(param_5 + 0x7f8);
  dVar77 = *(double *)(param_5 + 0x800);
  dVar45 = *(double *)(param_5 + 0x808);
  dVar56 = *(double *)(param_5 + 0x810);
  dVar62 = *(double *)(param_5 + 0x818);
  dVar69 = *(double *)(param_5 + 0x820);
  dVar80 = *(double *)(param_5 + 0x828);
  param_1[0x60] = (float)*(double *)(param_5 + 0x7b0);
  param_1[0x61] = (float)dVar91;
  param_1[0x62] = (float)dVar94;
  param_1[99] = (float)dVar90;
  param_1[100] = (float)dVar95;
  param_1[0x65] = (float)dVar97;
  param_1[0x66] = (float)dVar98;
  param_1[0x67] = (float)dVar22;
  param_1[0x68] = (float)dVar24;
  param_1[0x69] = (float)dVar71;
  param_1[0x6a] = (float)dVar77;
  param_1[0x6b] = (float)dVar45;
  param_1[0x6c] = (float)dVar56;
  param_1[0x6d] = (float)dVar62;
  param_1[0x6e] = (float)dVar69;
  param_1[0x6f] = (float)dVar80;
  *(undefined8 *)(param_1 + 0x70) = local_228._0_8_;
  *(undefined8 *)(param_1 + 0x72) = local_228._8_8_;
  *(undefined8 *)(param_1 + 0x74) = local_238._0_8_;
  *(undefined8 *)(param_1 + 0x76) = local_238._8_8_;
  *(undefined8 *)(param_1 + 0x78) = local_248._0_8_;
  *(undefined8 *)(param_1 + 0x7a) = local_248._8_8_;
  *(undefined8 *)(param_1 + 0x7c) = local_258._0_8_;
  *(undefined8 *)(param_1 + 0x7e) = local_258._8_8_;
  dVar91 = *(double *)(param_5 + 0x3b8);
  dVar94 = *(double *)(param_5 + 0x3c0);
  dVar90 = *(double *)(param_5 + 0x3c8);
  dVar95 = *(double *)(param_5 + 0x3d0);
  dVar97 = *(double *)(param_5 + 0x3d8);
  dVar98 = *(double *)(param_5 + 0x3e0);
  dVar22 = *(double *)(param_5 + 1000);
  dVar24 = *(double *)(param_5 + 0x3f0);
  dVar71 = *(double *)(param_5 + 0x3f8);
  dVar77 = *(double *)(param_5 + 0x400);
  dVar45 = *(double *)(param_5 + 0x408);
  dVar56 = *(double *)(param_5 + 0x410);
  dVar62 = *(double *)(param_5 + 0x418);
  dVar69 = *(double *)(param_5 + 0x420);
  dVar80 = *(double *)(param_5 + 0x428);
  param_1[0x80] = (float)*(double *)(param_5 + 0x3b0);
  param_1[0x81] = (float)dVar91;
  param_1[0x82] = (float)dVar94;
  param_1[0x83] = (float)dVar90;
  param_1[0x84] = (float)dVar95;
  param_1[0x85] = (float)dVar97;
  param_1[0x86] = (float)dVar98;
  param_1[0x87] = (float)dVar22;
  param_1[0x88] = (float)dVar24;
  param_1[0x89] = (float)dVar71;
  param_1[0x8a] = (float)dVar77;
  param_1[0x8b] = (float)dVar45;
  param_1[0x8c] = (float)dVar56;
  param_1[0x8d] = (float)dVar62;
  param_1[0x8e] = (float)dVar69;
  param_1[0x8f] = (float)dVar80;
  *(undefined8 *)(param_1 + 0x90) = local_2a8._0_8_;
  *(undefined8 *)(param_1 + 0x92) = local_2a8._8_8_;
  *(undefined8 *)(param_1 + 0x94) = local_2f8._0_8_;
  *(undefined8 *)(param_1 + 0x96) = local_2f8._8_8_;
  *(undefined8 *)(param_1 + 0x98) = local_428._0_8_;
  *(undefined8 *)(param_1 + 0x9a) = local_428._8_8_;
  local_468 = auVar116._0_8_;
  uStack_460 = auVar116._8_8_;
  *(undefined1 (*) [8])(param_1 + 0x9c) = local_468;
  *(undefined8 *)(param_1 + 0x9e) = uStack_460;
  dVar91 = *(double *)(param_5 + 0x9b8);
  dVar94 = *(double *)(param_5 + 0x9c0);
  dVar90 = *(double *)(param_5 + 0x9c8);
  dVar95 = *(double *)(param_5 + 0x9d0);
  dVar97 = *(double *)(param_5 + 0x9d8);
  dVar98 = *(double *)(param_5 + 0x9e0);
  dVar22 = *(double *)(param_5 + 0x9e8);
  dVar24 = *(double *)(param_5 + 0x9f0);
  dVar71 = *(double *)(param_5 + 0x9f8);
  dVar77 = *(double *)(param_5 + 0xa00);
  dVar45 = *(double *)(param_5 + 0xa08);
  dVar56 = *(double *)(param_5 + 0xa10);
  dVar62 = *(double *)(param_5 + 0xa18);
  dVar69 = *(double *)(param_5 + 0xa20);
  dVar80 = *(double *)(param_5 + 0xa28);
  param_1[0xa0] = (float)*(double *)(param_5 + 0x9b0);
  param_1[0xa1] = (float)dVar91;
  param_1[0xa2] = (float)dVar94;
  param_1[0xa3] = (float)dVar90;
  param_1[0xa4] = (float)dVar95;
  param_1[0xa5] = (float)dVar97;
  param_1[0xa6] = (float)dVar98;
  param_1[0xa7] = (float)dVar22;
  param_1[0xa8] = (float)dVar24;
  param_1[0xa9] = (float)dVar71;
  param_1[0xaa] = (float)dVar77;
  param_1[0xab] = (float)dVar45;
  param_1[0xac] = (float)dVar56;
  param_1[0xad] = (float)dVar62;
  param_1[0xae] = (float)dVar69;
  param_1[0xaf] = (float)dVar80;
  dVar91 = *(double *)(param_5 + 0x880);
  dVar94 = *(double *)(param_5 + 0x860);
  param_1[0x194] = (float)*(double *)(param_5 + 0x840);
  param_1[0x195] = (float)dVar94;
  param_1[0x196] = (float)dVar91;
  dVar91 = *(double *)(param_5 + 0x878);
  dVar94 = *(double *)(param_5 + 0x858);
  param_1[0x198] = (float)*(double *)(param_5 + 0x838);
  param_1[0x199] = (float)dVar94;
  param_1[0x19a] = (float)dVar91;
  dVar91 = *(double *)(param_5 + 0x870);
  dVar94 = *(double *)(param_5 + 0x850);
  param_1[0x19c] = (float)*(double *)(param_5 + 0x830);
  param_1[0x19d] = (float)dVar94;
  param_1[0x19e] = (float)dVar91;
  dVar91 = *(double *)(param_5 + 0x6f8);
  dVar94 = *(double *)(param_5 + 0x6d8);
  param_1[0x1a0] = (float)*(double *)(param_5 + 0x6b8);
  param_1[0x1a1] = (float)dVar94;
  param_1[0x1a2] = (float)dVar91;
  dVar91 = *(double *)(param_5 + 0x6f0);
  dVar94 = *(double *)(param_5 + 0x6d0);
  param_1[0x1a4] = (float)*(double *)(param_5 + 0x6b0);
  param_1[0x1a5] = (float)dVar94;
  param_1[0x1a6] = (float)dVar91;
  lVar2 = param_7[0xd];
  *(longlong *)(param_1 + 0x1a8) = param_7[0xc];
  *(longlong *)(param_1 + 0x1aa) = lVar2;
  fVar37 = (float)((*(double *)(param_5 + 0x8c0) * 0.0 + *(double *)(param_5 + 0x8e0) * 0.0 +
                    *(double *)(param_5 + 0x900) * 0.0 + *(double *)(param_5 + 0x920)) -
                  *(double *)(param_5 + 0xb40));
  fVar27 = (float)((*(double *)(param_5 + 0x8f8) * 0.0 +
                    *(double *)(param_5 + 0x8d8) * 0.0 + *(double *)(param_5 + 0x8b8) * 0.0 +
                   *(double *)(param_5 + 0x918)) - *(double *)(param_5 + 0xb38));
  fVar110 = (float)((*(double *)(param_5 + 0x8f0) * 0.0 +
                     *(double *)(param_5 + 0x8d0) * 0.0 + *(double *)(param_5 + 0x8b0) * 0.0 +
                    *(double *)(param_5 + 0x910)) - *(double *)(param_5 + 0xb30));
  param_1[0x1b8] = fVar110;
  param_1[0x1b9] = fVar27;
  param_1[0x1ba] = fVar37;
  param_1[0x1bc] = fVar110 - fVar110;
  param_1[0x1bd] = fVar27 - fVar27;
  param_1[0x1be] = fVar37 - fVar37;
  param_1[400] = local_470;
  param_1[0x191] = local_46c;
  param_1[0x192] = local_474;
  param_1[0x1b0] = (float)(local_3f8 - local_458);
  param_1[0x1b1] = (float)(local_3f0 - dVar92);
  param_1[0x1b2] = (float)(local_400 - local_308);
  dVar91 = *(double *)(param_5 + 0xb58);
  dVar94 = *(double *)(param_5 + 0xb40);
  dVar90 = *(double *)(param_5 + 0xb50);
  dVar95 = *(double *)(param_5 + 0xb38);
  param_1[0x1b4] = (float)(*(double *)(param_5 + 0xb48) + *(double *)(param_5 + 0xb30));
  param_1[0x1b5] = (float)(dVar90 + dVar95);
  param_1[0x1b6] = (float)(dVar91 + dVar94);
  param_1[0x1c0] = (float)local_408;
  param_1[0x1c1] = (float)local_410;
  param_1[0x1c2] = (float)local_418;
  param_1[0x1c4] = (float)(local_408 - (double)(float)local_408);
  param_1[0x1c5] = (float)(local_410 - (double)(float)local_410);
  param_1[0x1c6] = (float)(local_418 - (double)(float)local_418);
  dVar91 = *(double *)(param_6 + 0x338);
  dVar94 = *(double *)(param_6 + 0x340);
  dVar90 = *(double *)(param_6 + 0x348);
  dVar95 = *(double *)(param_6 + 0x350);
  dVar97 = *(double *)(param_6 + 0x358);
  dVar98 = *(double *)(param_6 + 0x360);
  dVar22 = *(double *)(param_6 + 0x368);
  dVar24 = *(double *)(param_6 + 0x370);
  dVar71 = *(double *)(param_6 + 0x378);
  dVar77 = *(double *)(param_6 + 0x380);
  dVar45 = *(double *)(param_6 + 0x388);
  dVar56 = *(double *)(param_6 + 0x390);
  dVar62 = *(double *)(param_6 + 0x398);
  dVar69 = *(double *)(param_6 + 0x3a0);
  dVar80 = *(double *)(param_6 + 0x3a8);
  param_1[0x1c8] = (float)*(double *)(param_6 + 0x330);
  param_1[0x1c9] = (float)dVar91;
  param_1[0x1ca] = (float)dVar94;
  param_1[0x1cb] = (float)dVar90;
  param_1[0x1cc] = (float)dVar95;
  param_1[0x1cd] = (float)dVar97;
  param_1[0x1ce] = (float)dVar98;
  param_1[0x1cf] = (float)dVar22;
  param_1[0x1d0] = (float)dVar24;
  param_1[0x1d1] = (float)dVar71;
  param_1[0x1d2] = (float)dVar77;
  param_1[0x1d3] = (float)dVar45;
  param_1[0x1d4] = (float)dVar56;
  param_1[0x1d5] = (float)dVar62;
  param_1[0x1d6] = (float)dVar69;
  param_1[0x1d7] = (float)dVar80;
  auVar76 = insertps(local_3c8,fVar25,0x10);
  auVar76 = insertps(auVar76,fVar10,0x20);
  auVar76 = insertps(auVar76,fVar26,0x30);
  *(undefined1 (*) [16])(param_1 + 0x1d8) = auVar76;
  auVar76 = insertps(local_398,fVar59,0x10);
  auVar76 = insertps(auVar76,fVar11,0x20);
  auVar76 = insertps(auVar76,fVar12,0x30);
  *(undefined1 (*) [16])(param_1 + 0x1dc) = auVar76;
  auVar76 = insertps(local_368,fVar14,0x10);
  auVar76 = insertps(auVar76,fVar15,0x20);
  auVar76 = insertps(auVar76,fVar79,0x30);
  *(undefined1 (*) [16])(param_1 + 0x1e0) = auVar76;
  auVar76 = insertps(local_338,fVar17,0x10);
  auVar76 = insertps(auVar76,fVar18,0x20);
  auVar76 = insertps(auVar76,fVar19,0x30);
  *(undefined1 (*) [16])(param_1 + 0x1e4) = auVar76;
  dVar91 = *(double *)(param_6 + 0x938);
  local_4d8._0_4_ = (float)dVar91;
  dVar94 = *(double *)(param_6 + 0x940);
  local_4a8._0_4_ = (float)dVar94;
  dVar90 = *(double *)(param_6 + 0x948);
  stack0xfffffffffffffb9c = auVar116._4_12_;
  local_468._0_4_ = (float)dVar90;
  dVar95 = *(double *)(param_6 + 0x950);
  dVar97 = *(double *)(param_6 + 0x958);
  dVar98 = *(double *)(param_6 + 0x960);
  dVar22 = *(double *)(param_6 + 0x968);
  dVar24 = *(double *)(param_6 + 0x970);
  dVar71 = *(double *)(param_6 + 0x978);
  dVar77 = *(double *)(param_6 + 0x980);
  dVar45 = *(double *)(param_6 + 0x988);
  dVar56 = *(double *)(param_6 + 0x990);
  dVar62 = *(double *)(param_6 + 0x998);
  dVar69 = *(double *)(param_6 + 0x9a0);
  local_528 = dVar70 - local_458;
  dVar70 = *(double *)(param_6 + 0x9a8);
  local_4c8 = dVar84 - local_308;
  local_518 = dVar83 - dVar92;
  param_1[0x1e8] = (float)*(double *)(param_6 + 0x930);
  param_1[0x1e9] = (float)dVar91;
  param_1[0x1ea] = (float)dVar94;
  param_1[0x1eb] = (float)dVar90;
  param_1[0x1ec] = (float)dVar95;
  param_1[0x1ed] = (float)dVar97;
  param_1[0x1ee] = (float)dVar98;
  param_1[0x1ef] = (float)dVar22;
  param_1[0x1f0] = (float)dVar24;
  param_1[0x1f1] = (float)dVar71;
  param_1[0x1f2] = (float)dVar77;
  param_1[499] = (float)dVar45;
  param_1[500] = (float)dVar56;
  param_1[0x1f5] = (float)dVar62;
  param_1[0x1f6] = (float)dVar69;
  param_1[0x1f7] = (float)dVar70;
  if (2097151.0 <= local_528) {
    local_528 = 2097151.0;
  }
  if (2097151.0 <= local_518) {
    local_518 = 2097151.0;
  }
  if (2097151.0 <= local_4c8) {
    local_4c8 = 2097151.0;
  }
  dVar70 = *(double *)(param_6 + 0x838);
  local_538._0_4_ = (float)dVar70;
  dVar83 = *(double *)(param_6 + 0x840);
  if (local_528 <= -2097151.0) {
    local_528 = -2097151.0;
  }
  dVar84 = *(double *)(param_6 + 0x848);
  if (local_518 <= -2097151.0) {
    local_518 = -2097151.0;
  }
  dVar91 = *(double *)(param_6 + 0x850);
  if (local_4c8 <= -2097151.0) {
    local_4c8 = -2097151.0;
  }
  dVar94 = *(double *)(param_6 + 0x858);
  auVar76 = insertps(ZEXT416((uint)(float)dVar63),(float)dVar64,0x10);
  dVar63 = *(double *)(param_6 + 0x860);
  auVar76 = insertps(auVar76,(float)dVar30,0x20);
  dVar64 = *(double *)(param_6 + 0x868);
  _local_4f8 = insertps(auVar76,(float)dVar34,0x30);
  dVar30 = *(double *)(param_6 + 0x870);
  auVar76 = insertps(ZEXT416((uint)(float)dVar46),(float)dVar57,0x10);
  dVar34 = *(double *)(param_6 + 0x878);
  auVar76 = insertps(auVar76,(float)dVar47,0x20);
  dVar46 = *(double *)(param_6 + 0x880);
  local_508 = insertps(auVar76,(float)dVar58,0x30);
  dVar57 = *(double *)(param_6 + 0x888);
  auVar76 = insertps(ZEXT416((uint)(float)dVar35),(float)dVar1,0x10);
  dVar47 = *(double *)(param_6 + 0x890);
  auVar76 = insertps(auVar76,(float)dVar21,0x20);
  dVar58 = *(double *)(param_6 + 0x898);
  _local_4b8 = insertps(auVar76,(float)dVar29,0x30);
  dVar35 = *(double *)(param_6 + 0x8a0);
  dVar1 = *(double *)(param_6 + 0x8a8);
  param_1[0x1f8] = (float)*(double *)(param_6 + 0x830);
  param_1[0x1f9] = (float)dVar70;
  param_1[0x1fa] = (float)dVar83;
  param_1[0x1fb] = (float)dVar84;
  param_1[0x1fc] = (float)dVar91;
  param_1[0x1fd] = (float)dVar94;
  param_1[0x1fe] = (float)dVar63;
  param_1[0x1ff] = (float)dVar64;
  param_1[0x200] = (float)dVar30;
  param_1[0x201] = (float)dVar34;
  param_1[0x202] = (float)dVar46;
  param_1[0x203] = (float)dVar57;
  param_1[0x204] = (float)dVar47;
  param_1[0x205] = (float)dVar58;
  param_1[0x206] = (float)dVar35;
  param_1[0x207] = (float)dVar1;
  auVar76 = insertps(ZEXT416((uint)(float)local_528),ZEXT416((uint)(float)local_518),0x10);
  dVar63 = *(double *)(param_6 + 0x8b8);
  auVar76 = insertps(auVar76,ZEXT416((uint)(float)local_4c8),0x20);
  dVar64 = *(double *)(param_6 + 0x8c0);
  auVar76 = insertps(auVar76,(float)dVar44,0x30);
  dVar30 = *(double *)(param_6 + 0x8c8);
  local_4c8._0_4_ = (float)dVar30;
  dVar34 = *(double *)(param_6 + 0x8d0);
  dVar46 = *(double *)(param_6 + 0x8d8);
  dVar57 = *(double *)(param_6 + 0x8e0);
  fVar39 = local_508._0_4_;
  fVar40 = local_508._4_4_;
  fVar41 = local_508._8_4_;
  fVar42 = local_508._12_4_;
  dVar47 = *(double *)(param_6 + 0x8e8);
  dVar58 = *(double *)(param_6 + 0x8f0);
  dVar35 = *(double *)(param_6 + 0x8f8);
  dVar1 = *(double *)(param_6 + 0x900);
  dVar21 = *(double *)(param_6 + 0x908);
  dVar29 = *(double *)(param_6 + 0x910);
  fVar110 = auVar76._0_4_;
  fVar27 = auVar76._4_4_;
  fVar37 = auVar76._8_4_;
  fVar38 = auVar76._12_4_;
  dVar44 = *(double *)(param_6 + 0x918);
  local_4e8 = (double)CONCAT44(fVar26 * fVar27 +
                               fVar10 * (float)local_4b8._4_4_ +
                               fVar25 * fVar40 + fVar9 * (float)local_4f8._4_4_,
                               fVar26 * fVar110 +
                               fVar10 * (float)local_4b8._0_4_ +
                               fVar25 * fVar39 + fVar9 * (float)local_4f8._0_4_);
  uStack_4e0._0_4_ =
       fVar26 * fVar37 + fVar10 * (float)uStack_4b0 + fVar25 * fVar41 + fVar9 * (float)uStack_4f0;
  uStack_4e0._4_4_ =
       fVar26 * fVar38 + fVar10 * uStack_4b0._4_4_ + fVar25 * fVar42 + fVar9 * uStack_4f0._4_4_;
  dVar70 = *(double *)(param_6 + 0x920);
  dVar83 = *(double *)(param_6 + 0x928);
  param_1[0x208] = (float)*(double *)(param_6 + 0x8b0);
  param_1[0x209] = (float)dVar63;
  param_1[0x20a] = (float)dVar64;
  param_1[0x20b] = (float)dVar30;
  param_1[0x20c] = (float)dVar34;
  param_1[0x20d] = (float)dVar46;
  param_1[0x20e] = (float)dVar57;
  param_1[0x20f] = (float)dVar47;
  param_1[0x210] = (float)dVar58;
  param_1[0x211] = (float)dVar35;
  param_1[0x212] = (float)dVar1;
  param_1[0x213] = (float)dVar21;
  param_1[0x214] = (float)dVar29;
  param_1[0x215] = (float)dVar44;
  param_1[0x216] = (float)dVar70;
  param_1[0x217] = (float)dVar83;
  dVar63 = *(double *)(param_6 + 0x738);
  local_518._0_4_ = (float)dVar63;
  dVar64 = *(double *)(param_6 + 0x740);
  local_528._0_4_ = (float)dVar64;
  dVar30 = *(double *)(param_6 + 0x748);
  dVar34 = *(double *)(param_6 + 0x750);
  dVar46 = *(double *)(param_6 + 0x758);
  dVar57 = *(double *)(param_6 + 0x760);
  dVar47 = *(double *)(param_6 + 0x768);
  dVar58 = *(double *)(param_6 + 0x770);
  local_548._4_4_ =
       fVar12 * fVar27 +
       fVar11 * (float)local_4b8._4_4_ + fVar59 * fVar40 + fVar36 * (float)local_4f8._4_4_;
  local_548._0_4_ =
       fVar12 * fVar110 +
       fVar11 * (float)local_4b8._0_4_ + fVar59 * fVar39 + fVar36 * (float)local_4f8._0_4_;
  uStack_540._0_4_ =
       fVar12 * fVar37 + fVar11 * (float)uStack_4b0 + fVar59 * fVar41 + fVar36 * (float)uStack_4f0;
  uStack_540._4_4_ =
       fVar12 * fVar38 + fVar11 * uStack_4b0._4_4_ + fVar59 * fVar42 + fVar36 * uStack_4f0._4_4_;
  dVar35 = *(double *)(param_6 + 0x778);
  dVar1 = *(double *)(param_6 + 0x780);
  dVar21 = *(double *)(param_6 + 0x788);
  dVar29 = *(double *)(param_6 + 0x790);
  dVar44 = *(double *)(param_6 + 0x798);
  dVar70 = *(double *)(param_6 + 0x7a0);
  dVar83 = *(double *)(param_6 + 0x7a8);
  param_1[0x218] = (float)*(double *)(param_6 + 0x730);
  param_1[0x219] = (float)dVar63;
  param_1[0x21a] = (float)dVar64;
  param_1[0x21b] = (float)dVar30;
  param_1[0x21c] = (float)dVar34;
  param_1[0x21d] = (float)dVar46;
  param_1[0x21e] = (float)dVar57;
  param_1[0x21f] = (float)dVar47;
  param_1[0x220] = (float)dVar58;
  param_1[0x221] = (float)dVar35;
  param_1[0x222] = (float)dVar1;
  param_1[0x223] = (float)dVar21;
  param_1[0x224] = (float)dVar29;
  param_1[0x225] = (float)dVar44;
  param_1[0x226] = (float)dVar70;
  param_1[0x227] = (float)dVar83;
  local_568 = (double)CONCAT44((int)((ulonglong)dVar92 >> 0x20),(float)*(double *)(param_6 + 0x7b0))
  ;
  dVar63 = *(double *)(param_6 + 0x7b8);
  dVar64 = *(double *)(param_6 + 0x7c0);
  dVar30 = *(double *)(param_6 + 0x7c8);
  local_578._4_4_ =
       fVar79 * fVar27 +
       fVar15 * (float)local_4b8._4_4_ + fVar14 * fVar40 + fVar13 * (float)local_4f8._4_4_;
  local_578._0_4_ =
       fVar79 * fVar110 +
       fVar15 * (float)local_4b8._0_4_ + fVar14 * fVar39 + fVar13 * (float)local_4f8._0_4_;
  uStack_570._0_4_ =
       fVar79 * fVar37 + fVar15 * (float)uStack_4b0 + fVar14 * fVar41 + fVar13 * (float)uStack_4f0;
  uStack_570._4_4_ =
       fVar79 * fVar38 + fVar15 * uStack_4b0._4_4_ + fVar14 * fVar42 + fVar13 * uStack_4f0._4_4_;
  dVar34 = *(double *)(param_6 + 2000);
  dVar46 = *(double *)(param_6 + 0x7d8);
  dVar57 = *(double *)(param_6 + 0x7e0);
  dVar47 = *(double *)(param_6 + 0x7e8);
  dVar58 = *(double *)(param_6 + 0x7f0);
  dVar35 = *(double *)(param_6 + 0x7f8);
  dVar1 = *(double *)(param_6 + 0x800);
  dVar21 = *(double *)(param_6 + 0x808);
  dVar29 = *(double *)(param_6 + 0x810);
  dVar44 = *(double *)(param_6 + 0x818);
  dVar70 = *(double *)(param_6 + 0x820);
  local_588._4_4_ =
       fVar19 * fVar27 +
       fVar18 * (float)local_4b8._4_4_ + fVar17 * fVar40 + fVar16 * (float)local_4f8._4_4_;
  local_588._0_4_ =
       fVar19 * fVar110 +
       fVar18 * (float)local_4b8._0_4_ + fVar17 * fVar39 + fVar16 * (float)local_4f8._0_4_;
  uStack_580._0_4_ =
       fVar19 * fVar37 + fVar18 * (float)uStack_4b0 + fVar17 * fVar41 + fVar16 * (float)uStack_4f0;
  uStack_580._4_4_ =
       fVar19 * fVar38 + fVar18 * uStack_4b0._4_4_ + fVar17 * fVar42 + fVar16 * uStack_4f0._4_4_;
  dVar83 = *(double *)(param_6 + 0x828);
  param_1[0x228] = (float)*(double *)(param_6 + 0x7b0);
  param_1[0x229] = (float)dVar63;
  param_1[0x22a] = (float)dVar64;
  param_1[0x22b] = (float)dVar30;
  param_1[0x22c] = (float)dVar34;
  param_1[0x22d] = (float)dVar46;
  param_1[0x22e] = (float)dVar57;
  param_1[0x22f] = (float)dVar47;
  param_1[0x230] = (float)dVar58;
  param_1[0x231] = (float)dVar35;
  param_1[0x232] = (float)dVar1;
  param_1[0x233] = (float)dVar21;
  param_1[0x234] = (float)dVar29;
  param_1[0x235] = (float)dVar44;
  param_1[0x236] = (float)dVar70;
  param_1[0x237] = (float)dVar83;
  dVar63 = *(double *)(param_6 + 0xb48);
  dVar64 = *(double *)(param_6 + 0xb50);
  fVar9 = (float)dVar63;
  fVar10 = (float)dVar64;
  dVar30 = *(double *)(param_6 + 0xb58);
  fVar25 = (float)dVar30;
  param_1[0x23c] = fVar9;
  param_1[0x23d] = fVar10;
  param_1[0x23e] = fVar25;
  param_1[0x240] = (float)(dVar63 - (double)fVar9);
  param_1[0x241] = (float)(dVar64 - (double)fVar10);
  param_1[0x242] = (float)(dVar30 - (double)fVar25);
  *(undefined8 *)(param_1 + 0x244) = *(undefined8 *)(param_1 + 0x23c);
  param_1[0x246] = param_1[0x23e];
  *(undefined8 *)(param_1 + 0x248) = *(undefined8 *)(param_1 + 0x240);
  param_1[0x24a] = param_1[0x242];
  dVar63 = *(double *)(param_6 + 0xb58);
  dVar64 = *(double *)(param_6 + 0xb40);
  dVar30 = *(double *)(param_6 + 0xb50);
  dVar34 = *(double *)(param_6 + 0xb38);
  param_1[0x238] = (float)(*(double *)(param_6 + 0xb48) + *(double *)(param_6 + 0xb30));
  param_1[0x239] = (float)(dVar30 + dVar34);
  param_1[0x23a] = (float)(dVar63 + dVar64);
  dVar63 = *(double *)(param_6 + 0xb30);
  fVar9 = (float)dVar63;
  dVar64 = *(double *)(param_6 + 0xb38);
  fVar10 = (float)dVar64;
  dVar30 = *(double *)(param_6 + 0xb40);
  fVar25 = (float)dVar30;
  param_1[0x24c] = fVar9;
  param_1[0x24d] = fVar10;
  param_1[0x24e] = fVar25;
  param_1[0x250] = (float)(dVar63 - (double)fVar9);
  fVar9 = (float)(dVar30 - (double)fVar25);
  param_1[0x251] = (float)(dVar64 - (double)fVar10);
  param_1[0x252] = fVar9;
  *(double *)(param_1 + 0x270) = local_4e8;
  *(double *)(param_1 + 0x272) = uStack_4e0;
  *(undefined1 (*) [8])(param_1 + 0x274) = local_548;
  *(undefined8 *)(param_1 + 0x276) = uStack_540;
  *(undefined1 (*) [8])(param_1 + 0x278) = local_578;
  *(double *)(param_1 + 0x27a) = uStack_570;
  *(undefined1 (*) [8])(param_1 + 0x27c) = local_588;
  *(double *)(param_1 + 0x27e) = uStack_580;
  auVar86._0_8_ = *(double *)(param_5 + 0xb48) * 1.52587890625e-05 + 0.5;
  auVar86._8_8_ = 0;
  auVar76 = roundpd(ZEXT416((uint)fVar9),auVar86,1);
  dVar29 = auVar76._0_8_ * 65536.0;
  auVar49._0_8_ = *(double *)(param_5 + 0xb50) * 1.52587890625e-05 + 0.5;
  auVar49._8_8_ = 0;
  auVar116 = roundpd(auVar49,auVar49,1);
  auVar67._0_8_ = *(double *)(param_5 + 0xb58) * 1.52587890625e-05 + 0.5;
  dVar44 = auVar116._0_8_ * 65536.0;
  auVar67._8_8_ = 0;
  auVar68 = roundpd(auVar67,auVar67,1);
  dVar21 = auVar68._0_8_ * 65536.0;
  param_1[0x254] = (float)auVar76._0_8_;
  param_1[0x255] = (float)auVar116._0_8_;
  param_1[0x256] = (float)auVar68._0_8_;
  dVar63 = *(double *)(param_5 + 0xb58);
  dVar64 = *(double *)(param_5 + 0xb50);
  param_1[600] = (float)(*(double *)(param_5 + 0xb48) - dVar29);
  param_1[0x259] = (float)(dVar64 - dVar44);
  param_1[0x25a] = (float)(dVar63 - dVar21);
  dVar58 = *(double *)(param_5 + 0x8b8);
  dVar35 = *(double *)(param_5 + 0x8d8);
  dVar1 = *(double *)(param_5 + 0x8f8);
  dVar63 = *(double *)(param_5 + 0x900);
  dVar64 = *(double *)(param_5 + 0x8e0);
  dVar30 = *(double *)(param_5 + 0x8c0);
  dVar47 = *(double *)(param_5 + 0x918);
  dVar34 = *(double *)(param_5 + 0x920);
  dVar46 = *(double *)(param_5 + 0xb40);
  dVar57 = *(double *)(param_5 + 0xb38);
  param_1[0x25c] =
       (float)(((*(double *)(param_5 + 0x8f0) * 0.0 +
                 *(double *)(param_5 + 0x8d0) * 0.0 + *(double *)(param_5 + 0x8b0) * 0.0 +
                *(double *)(param_5 + 0x910)) - *(double *)(param_5 + 0xb30)) - dVar29);
  param_1[0x25d] = (float)(((dVar1 * 0.0 + dVar35 * 0.0 + dVar58 * 0.0 + dVar47) - dVar57) - dVar44)
  ;
  param_1[0x25e] =
       (float)(((dVar30 * 0.0 + dVar64 * 0.0 + dVar63 * 0.0 + dVar34) - dVar46) - dVar21);
  dVar63 = *(double *)(param_5 + 0xb40);
  dVar64 = *(double *)(param_5 + 0xb38);
  param_1[0x260] = (float)(*(double *)(param_5 + 0xb30) + dVar29);
  param_1[0x261] = (float)(dVar64 + dVar44);
  param_1[0x262] = (float)(dVar63 + dVar21);
  dVar63 = *(double *)(param_6 + 0xb58);
  dVar64 = *(double *)(param_6 + 0xb50);
  param_1[0x264] = (float)(*(double *)(param_6 + 0xb48) - dVar29);
  param_1[0x265] = (float)(dVar64 - dVar44);
  param_1[0x266] = (float)(dVar63 - dVar21);
  param_1[0x26a] = param_1[0x266];
  *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)(param_1 + 0x264);
  dVar63 = *(double *)(param_6 + 0xb40);
  dVar64 = *(double *)(param_6 + 0xb38);
  param_1[0x26c] = (float)(dVar29 + *(double *)(param_6 + 0xb30));
  param_1[0x26d] = (float)(dVar44 + dVar64);
  param_1[0x26e] = (float)(dVar21 + dVar63);
  dVar63 = (double)param_7[0xb];
  dVar64 = (double)param_7[8];
  dVar30 = (double)param_7[9];
  dVar34 = *(double *)(param_5 + 0xb38);
  dVar46 = *(double *)(param_5 + 0xb30);
  dVar57 = (double)param_7[10];
  dVar47 = *(double *)(param_5 + 0xb40);
  param_1[0x2b4] = (float)dVar64;
  param_1[0x2b5] = (float)dVar30;
  param_1[0x2b6] = (float)dVar57;
  param_1[0x2b7] =
       -(float)((dVar63 * dVar57 + dVar47) * dVar57 +
               (dVar63 * dVar64 + dVar46) * dVar64 + (dVar63 * dVar30 + dVar34) * dVar30);
  FUN_144a132c8(param_5,&local_168);
  param_1[0x2b8] = (float)(local_168 + local_168);
  param_1[0x2b9] = (float)(local_160 + local_160);
  FUN_144a132c8(param_6,&local_168);
  param_1[0x2ba] = (float)(local_168 + local_168);
  param_1[699] = (float)(local_160 + local_160);
  *(longlong *)(param_1 + 0x2e0) = local_178;
  *(longlong *)(param_1 + 0x2e2) = lStack_170;
  lVar2 = param_7[0x13];
  *(longlong *)(param_1 + 0x2e4) = param_7[0x12];
  *(longlong *)(param_1 + 0x2e6) = lVar2;
  lVar2 = param_7[0x11];
  *(longlong *)(param_1 + 0x2e8) = param_7[0x10];
  *(longlong *)(param_1 + 0x2ea) = lVar2;
  param_1[0x2ec] = local_47c;
  param_1[0x2ed] = local_478;
  dVar63 = *(double *)(param_5 + 0xb58);
  dVar64 = *(double *)(param_6 + 0xb58);
  dVar30 = *(double *)(param_5 + 0xb50);
  dVar34 = *(double *)(param_6 + 0xb50);
  param_1[0x2f4] = (float)(*(double *)(param_5 + 0xb48) - *(double *)(param_6 + 0xb48));
  param_1[0x2f5] = (float)(dVar30 - dVar34);
  param_1[0x2f6] = (float)(dVar63 - dVar64);
  if (*(char *)((longlong)param_7 + 0xd5) == '\0') {
    fVar9 = 1.0;
  }
  else {
    fVar9 = -1.0;
  }
  param_1[0x2f7] = fVar9;
  param_1[0x2f8] =
       (float)((*(double *)(param_5 + 0x3a8) - *(double *)(param_5 + 0x3a0)) /
              (*(double *)(param_5 + 0x380) - *(double *)(param_5 + 0x388)));
  fVar9 = 0.0;
  if (1.0 <= *(double *)(param_5 + 0x3a8)) {
    fVar9 = (float)((*(double *)(param_5 + 0x3a8) - *(double *)(param_5 + 0x3a0)) /
                    (*(double *)(param_5 + 0x380) - *(double *)(param_5 + 0x388)) -
                   *(double *)(param_5 + 0x480));
  }
  param_1[0x2f9] = fVar9;
  param_1[0x2ff] = 0.0;
  param_1[0x300] = 1.0;
  *(undefined1 **)(param_1 + 0x2da) = &DAT_3f8000003f800000;
  param_1[0x2dd] = *(float *)(param_5 + 0xb9c);
  param_1[0x458] = 0.0;
  fVar41 = (float)*(double *)(param_5 + 0xa30);
  fVar42 = (float)*(double *)(param_5 + 0xa38);
  fVar60 = (float)*(double *)(param_5 + 0xa40);
  fVar110 = (float)*(double *)(param_5 + 0xa48);
  fVar113 = (float)*(double *)(param_5 + 0xa50);
  fVar99 = (float)*(double *)(param_5 + 0xa58);
  fVar109 = (float)*(double *)(param_5 + 0xa60);
  fVar27 = (float)*(double *)(param_5 + 0xa68);
  fVar43 = (float)*(double *)(param_5 + 0xa70);
  fVar40 = (float)*(double *)(param_5 + 0xa78);
  fVar39 = (float)*(double *)(param_5 + 0xa80);
  fVar37 = (float)*(double *)(param_5 + 0xa88);
  fVar38 = (float)*(double *)(param_5 + 0xa90);
  fVar9 = param_1[0x20];
  fVar10 = param_1[0x21];
  fVar25 = param_1[0x22];
  fVar26 = param_1[0x23];
  fVar36 = param_1[0x24];
  fVar59 = param_1[0x25];
  fVar11 = param_1[0x26];
  fVar12 = param_1[0x27];
  fVar13 = param_1[0x28];
  fVar14 = param_1[0x29];
  fVar15 = param_1[0x2a];
  fVar79 = param_1[0x2b];
  fVar16 = param_1[0x2c];
  fVar17 = param_1[0x2d];
  fVar18 = param_1[0x2e];
  fVar19 = param_1[0x2f];
  fVar61 = (float)*(double *)(param_5 + 0xa98);
  fVar102 = (float)*(double *)(param_5 + 0xaa0);
  fVar114 = (float)*(double *)(param_5 + 0xaa8);
  param_1[0xc0] = fVar110 * fVar16 + fVar60 * fVar13 + fVar42 * fVar36 + fVar41 * fVar9;
  param_1[0xc1] = fVar110 * fVar17 + fVar60 * fVar14 + fVar42 * fVar59 + fVar41 * fVar10;
  param_1[0xc2] = fVar110 * fVar18 + fVar60 * fVar15 + fVar42 * fVar11 + fVar41 * fVar25;
  param_1[0xc3] = fVar110 * fVar19 + fVar60 * fVar79 + fVar42 * fVar12 + fVar41 * fVar26;
  param_1[0xc4] = fVar27 * fVar16 + fVar109 * fVar13 + fVar99 * fVar36 + fVar113 * fVar9;
  param_1[0xc5] = fVar27 * fVar17 + fVar109 * fVar14 + fVar99 * fVar59 + fVar113 * fVar10;
  param_1[0xc6] = fVar27 * fVar18 + fVar109 * fVar15 + fVar99 * fVar11 + fVar113 * fVar25;
  param_1[199] = fVar27 * fVar19 + fVar109 * fVar79 + fVar99 * fVar12 + fVar113 * fVar26;
  param_1[200] = fVar37 * fVar16 + fVar39 * fVar13 + fVar40 * fVar36 + fVar43 * fVar9;
  param_1[0xc9] = fVar37 * fVar17 + fVar39 * fVar14 + fVar40 * fVar59 + fVar43 * fVar10;
  param_1[0xca] = fVar37 * fVar18 + fVar39 * fVar15 + fVar40 * fVar11 + fVar43 * fVar25;
  param_1[0xcb] = fVar37 * fVar19 + fVar39 * fVar79 + fVar40 * fVar12 + fVar43 * fVar26;
  param_1[0xcc] = fVar114 * fVar16 + fVar102 * fVar13 + fVar61 * fVar36 + fVar38 * fVar9;
  param_1[0xcd] = fVar114 * fVar17 + fVar102 * fVar14 + fVar61 * fVar59 + fVar38 * fVar10;
  param_1[0xce] = fVar114 * fVar18 + fVar102 * fVar15 + fVar61 * fVar11 + fVar38 * fVar25;
  param_1[0xcf] = fVar114 * fVar19 + fVar102 * fVar79 + fVar61 * fVar12 + fVar38 * fVar26;
  dVar93 = *(double *)(param_5 + 0x9b0);
  dVar96 = *(double *)(param_5 + 0x9b8);
  dVar100 = *(double *)(param_5 + 0x9c0);
  dVar101 = *(double *)(param_5 + 0x9c8);
  dVar78 = *(double *)(param_5 + 0x9d0);
  dVar81 = *(double *)(param_5 + 0x9d8);
  dVar88 = *(double *)(param_5 + 0x9e0);
  dVar20 = *(double *)(param_5 + 0x9e8);
  dVar23 = *(double *)(param_5 + 0x9f0);
  dVar28 = *(double *)(param_5 + 0x9f8);
  dVar33 = *(double *)(param_5 + 0xa00);
  dVar119 = *(double *)(param_5 + 0xa08);
  dVar120 = *(double *)(param_5 + 0xa10);
  dVar92 = *(double *)(param_5 + 0xa18);
  dVar118 = *(double *)(param_5 + 0xa20);
  dVar82 = *(double *)(param_5 + 0xa28);
  dVar63 = *(double *)(param_5 + 0xa30);
  dVar64 = *(double *)(param_5 + 0xa30);
  dVar30 = *(double *)(param_5 + 0xa38);
  dVar34 = *(double *)(param_5 + 0xa38);
  dVar46 = *(double *)(param_5 + 0xa40);
  dVar57 = *(double *)(param_5 + 0xa40);
  dVar47 = *(double *)(param_5 + 0xa48);
  dVar58 = *(double *)(param_5 + 0xa48);
  dVar35 = *(double *)(param_5 + 0xa50);
  dVar1 = *(double *)(param_5 + 0xa50);
  dVar21 = *(double *)(param_5 + 0xa58);
  dVar29 = *(double *)(param_5 + 0xa58);
  dVar44 = *(double *)(param_5 + 0xa60);
  dVar70 = *(double *)(param_5 + 0xa60);
  dVar83 = *(double *)(param_5 + 0xa68);
  dVar84 = *(double *)(param_5 + 0xa68);
  dVar91 = *(double *)(param_5 + 0xa70);
  dVar94 = *(double *)(param_5 + 0xa70);
  dVar90 = *(double *)(param_5 + 0xa78);
  dVar95 = *(double *)(param_5 + 0xa78);
  dVar98 = *(double *)(param_5 + 0xa80);
  dVar97 = *(double *)(param_5 + 0xa80);
  dVar22 = *(double *)(param_5 + 0xa88);
  dVar24 = *(double *)(param_5 + 0xa88);
  dVar71 = *(double *)(param_5 + 0xa90);
  dVar77 = *(double *)(param_5 + 0xa90);
  dVar45 = *(double *)(param_5 + 0xa98);
  dVar56 = *(double *)(param_5 + 0xa98);
  dVar69 = *(double *)(param_5 + 0xaa0);
  dVar62 = *(double *)(param_5 + 0xaa0);
  dVar80 = *(double *)(param_5 + 0xaa8);
  dVar87 = *(double *)(param_5 + 0xaa8);
  param_1[0xd0] = (float)(dVar120 * dVar47 + dVar23 * dVar46 + dVar78 * dVar30 + dVar93 * dVar63);
  param_1[0xd1] = (float)(dVar92 * dVar58 + dVar28 * dVar57 + dVar81 * dVar34 + dVar96 * dVar64);
  param_1[0xd2] = (float)(dVar47 * dVar118 + dVar46 * dVar33 + dVar30 * dVar88 + dVar63 * dVar100);
  param_1[0xd3] = (float)(dVar58 * dVar82 + dVar57 * dVar119 + dVar34 * dVar20 + dVar64 * dVar101);
  param_1[0xd4] = (float)(dVar120 * dVar83 + dVar23 * dVar44 + dVar78 * dVar21 + dVar93 * dVar35);
  param_1[0xd5] = (float)(dVar92 * dVar84 + dVar28 * dVar70 + dVar81 * dVar29 + dVar96 * dVar1);
  param_1[0xd6] = (float)(dVar83 * dVar118 + dVar44 * dVar33 + dVar21 * dVar88 + dVar35 * dVar100);
  param_1[0xd7] = (float)(dVar84 * dVar82 + dVar70 * dVar119 + dVar29 * dVar20 + dVar1 * dVar101);
  param_1[0xd8] = (float)(dVar120 * dVar22 + dVar23 * dVar98 + dVar78 * dVar90 + dVar93 * dVar91);
  param_1[0xd9] = (float)(dVar92 * dVar24 + dVar28 * dVar97 + dVar81 * dVar95 + dVar96 * dVar94);
  param_1[0xda] = (float)(dVar22 * dVar118 + dVar98 * dVar33 + dVar90 * dVar88 + dVar91 * dVar100);
  param_1[0xdb] = (float)(dVar24 * dVar82 + dVar97 * dVar119 + dVar95 * dVar20 + dVar94 * dVar101);
  param_1[0xdc] = (float)(dVar120 * dVar80 + dVar23 * dVar69 + dVar78 * dVar45 + dVar93 * dVar71);
  param_1[0xdd] = (float)(dVar92 * dVar87 + dVar28 * dVar62 + dVar81 * dVar56 + dVar96 * dVar77);
  param_1[0xde] = (float)(dVar118 * dVar80 + dVar33 * dVar69 + dVar88 * dVar45 + dVar100 * dVar71);
  param_1[0xdf] = (float)(dVar82 * dVar87 + dVar119 * dVar62 + dVar20 * dVar56 + dVar101 * dVar77);
  dVar21 = *(double *)(param_5 + 0x9b0);
  dVar29 = *(double *)(param_5 + 0x9b8);
  dVar44 = *(double *)(param_5 + 0x9c0);
  dVar70 = *(double *)(param_5 + 0x9c8);
  dVar83 = *(double *)(param_5 + 0x9d0);
  dVar84 = *(double *)(param_5 + 0x9d8);
  dVar91 = *(double *)(param_5 + 0x9e0);
  dVar94 = *(double *)(param_5 + 0x9e8);
  dVar90 = *(double *)(param_5 + 0x9f0);
  dVar95 = *(double *)(param_5 + 0x9f8);
  dVar97 = *(double *)(param_5 + 0xa00);
  dVar98 = *(double *)(param_5 + 0xa08);
  dVar22 = *(double *)(param_5 + 0xa10);
  dVar24 = *(double *)(param_5 + 0xa18);
  dVar71 = *(double *)(param_5 + 0xa20);
  dVar77 = *(double *)(param_5 + 0xa28);
  dVar63 = *(double *)(param_5 + 0xa30);
  dVar64 = *(double *)(param_5 + 0xa30);
  dVar30 = *(double *)(param_5 + 0xa38);
  dVar34 = *(double *)(param_5 + 0xa38);
  dVar46 = *(double *)(param_5 + 0xa40);
  dVar57 = *(double *)(param_5 + 0xa40);
  dVar47 = *(double *)(param_5 + 0xa48);
  dVar58 = *(double *)(param_5 + 0xa48);
  dVar35 = dVar22 * dVar47 + dVar90 * dVar46 + dVar83 * dVar30 + dVar21 * dVar63;
  dVar1 = dVar24 * dVar58 + dVar95 * dVar57 + dVar84 * dVar34 + dVar29 * dVar64;
  dVar45 = dVar47 * dVar71 + dVar46 * dVar97 + dVar30 * dVar91 + dVar63 * dVar44;
  dVar56 = dVar58 * dVar77 + dVar57 * dVar98 + dVar34 * dVar94 + dVar64 * dVar70;
  dVar63 = *(double *)(param_5 + 0xa50);
  dVar64 = *(double *)(param_5 + 0xa50);
  dVar30 = *(double *)(param_5 + 0xa58);
  dVar34 = *(double *)(param_5 + 0xa58);
  dVar46 = *(double *)(param_5 + 0xa60);
  dVar57 = *(double *)(param_5 + 0xa60);
  dVar47 = *(double *)(param_5 + 0xa68);
  dVar58 = *(double *)(param_5 + 0xa68);
  dVar100 = dVar22 * dVar47 + dVar90 * dVar46 + dVar83 * dVar30 + dVar21 * dVar63;
  dVar101 = dVar24 * dVar58 + dVar95 * dVar57 + dVar84 * dVar34 + dVar29 * dVar64;
  dVar62 = dVar47 * dVar71 + dVar46 * dVar97 + dVar30 * dVar91 + dVar63 * dVar44;
  dVar69 = dVar58 * dVar77 + dVar57 * dVar98 + dVar34 * dVar94 + dVar64 * dVar70;
  dVar63 = *(double *)(param_5 + 0xa70);
  dVar64 = *(double *)(param_5 + 0xa70);
  dVar30 = *(double *)(param_5 + 0xa78);
  dVar34 = *(double *)(param_5 + 0xa78);
  dVar46 = *(double *)(param_5 + 0xa80);
  dVar57 = *(double *)(param_5 + 0xa80);
  dVar47 = *(double *)(param_5 + 0xa88);
  dVar58 = *(double *)(param_5 + 0xa88);
  dVar93 = dVar22 * dVar47 + dVar90 * dVar46 + dVar83 * dVar30 + dVar21 * dVar63;
  dVar96 = dVar24 * dVar58 + dVar95 * dVar57 + dVar84 * dVar34 + dVar29 * dVar64;
  dVar80 = dVar47 * dVar71 + dVar46 * dVar97 + dVar30 * dVar91 + dVar63 * dVar44;
  dVar87 = dVar58 * dVar77 + dVar57 * dVar98 + dVar34 * dVar94 + dVar64 * dVar70;
  dVar63 = *(double *)(param_5 + 0xa90);
  dVar64 = *(double *)(param_5 + 0xa90);
  dVar30 = *(double *)(param_5 + 0xa98);
  dVar34 = *(double *)(param_5 + 0xa98);
  dVar46 = *(double *)(param_5 + 0xaa0);
  dVar57 = *(double *)(param_5 + 0xaa0);
  dVar47 = *(double *)(param_5 + 0xaa8);
  dVar58 = *(double *)(param_5 + 0xaa8);
  dVar21 = dVar22 * dVar47 + dVar90 * dVar46 + dVar83 * dVar30 + dVar21 * dVar63;
  dVar29 = dVar24 * dVar58 + dVar95 * dVar57 + dVar84 * dVar34 + dVar29 * dVar64;
  dVar30 = dVar71 * dVar47 + dVar97 * dVar46 + dVar91 * dVar30 + dVar44 * dVar63;
  dVar34 = dVar77 * dVar58 + dVar98 * dVar57 + dVar94 * dVar34 + dVar70 * dVar64;
  dVar63 = *(double *)(param_5 + 0xb30);
  dVar64 = *(double *)(param_5 + 0xb38);
  local_578 = (undefined1  [8])-*(double *)(param_5 + 0xb40);
  uStack_570._0_4_ = 0;
  uStack_570._4_4_ = 0x3ff00000;
  param_1[0xe0] = (float)((dVar45 * 0.0 + dVar1 * 0.0 + dVar35 * 1.0) - dVar56 * dVar63);
  param_1[0xe1] = (float)((dVar45 * 0.0 + dVar1 * 1.0 + dVar35 * 0.0) - dVar56 * dVar64);
  param_1[0xe2] = (float)(dVar56 * (double)local_578 + dVar45 * 1.0 + dVar1 * 0.0 + dVar35 * 0.0);
  param_1[0xe3] = (float)(dVar56 * uStack_570 + dVar45 * 0.0 + dVar1 * 0.0 + dVar35 * 0.0);
  param_1[0xe4] = (float)((dVar62 * 0.0 + dVar101 * 0.0 + dVar100 * 1.0) - dVar69 * dVar63);
  param_1[0xe5] = (float)((dVar62 * 0.0 + dVar101 * 1.0 + dVar100 * 0.0) - dVar69 * dVar64);
  param_1[0xe6] = (float)(dVar69 * (double)local_578 + dVar62 * 1.0 + dVar101 * 0.0 + dVar100 * 0.0)
  ;
  param_1[0xe7] = (float)(dVar69 * uStack_570 + dVar62 * 0.0 + dVar101 * 0.0 + dVar100 * 0.0);
  param_1[0xe8] = (float)((dVar80 * 0.0 + dVar96 * 0.0 + dVar93 * 1.0) - dVar87 * dVar63);
  param_1[0xe9] = (float)((dVar80 * 0.0 + dVar96 * 1.0 + dVar93 * 0.0) - dVar87 * dVar64);
  param_1[0xea] = (float)((double)local_578 * dVar87 + dVar80 * 1.0 + dVar96 * 0.0 + dVar93 * 0.0);
  param_1[0xeb] = (float)(uStack_570 * dVar87 + dVar80 * 0.0 + dVar96 * 0.0 + dVar93 * 0.0);
  param_1[0xec] = (float)((dVar30 * 0.0 + dVar29 * 0.0 + dVar21 * 1.0) - dVar63 * dVar34);
  param_1[0xed] = (float)((dVar30 * 0.0 + dVar29 * 1.0 + dVar21 * 0.0) - dVar64 * dVar34);
  param_1[0xee] = (float)(dVar34 * (double)local_578 + dVar30 * 1.0 + dVar29 * 0.0 + dVar21 * 0.0);
  param_1[0xef] = (float)(dVar34 * uStack_570 + dVar30 * 0.0 + dVar29 * 0.0 + dVar21 * 0.0);
  dVar47 = *(double *)(param_5 + 0x930);
  dVar58 = *(double *)(param_5 + 0x938);
  dVar35 = *(double *)(param_5 + 0x940);
  dVar1 = *(double *)(param_5 + 0x948);
  dVar21 = *(double *)(param_5 + 0x950);
  dVar29 = *(double *)(param_5 + 0x958);
  dVar44 = *(double *)(param_5 + 0x960);
  dVar70 = *(double *)(param_5 + 0x968);
  dVar83 = *(double *)(param_5 + 0x970);
  dVar84 = *(double *)(param_5 + 0x978);
  dVar91 = *(double *)(param_5 + 0x980);
  dVar94 = *(double *)(param_5 + 0x988);
  dVar90 = *(double *)(param_5 + 0x990);
  dVar95 = *(double *)(param_5 + 0x998);
  dVar63 = *(double *)(param_5 + 0xb38);
  dVar64 = *(double *)(param_5 + 0xb38);
  dVar30 = *(double *)(param_5 + 0xb30);
  dVar34 = *(double *)(param_5 + 0xb30);
  dVar46 = *(double *)(param_5 + 0xb40);
  dVar57 = *(double *)(param_5 + 0xb40);
  dVar97 = *(double *)(param_5 + 0x9a0);
  dVar98 = *(double *)(param_5 + 0x9a8);
  dVar71 = dVar90 * 0.0;
  dVar77 = dVar95 * 0.0;
  dVar22 = dVar97 * 0.0;
  dVar24 = dVar98 * 0.0;
  param_1[0xf0] = (float)(dVar47 + dVar21 * 0.0 + dVar83 * 0.0 + dVar71);
  param_1[0xf1] = (float)(dVar58 + dVar29 * 0.0 + dVar84 * 0.0 + dVar77);
  param_1[0xf2] = (float)(dVar35 + dVar44 * 0.0 + dVar91 * 0.0 + dVar22);
  param_1[0xf3] = (float)(dVar1 + dVar70 * 0.0 + dVar94 * 0.0 + dVar24);
  param_1[0xf4] = (float)(dVar47 * 0.0 + dVar21 + dVar83 * 0.0 + dVar71);
  param_1[0xf5] = (float)(dVar58 * 0.0 + dVar29 + dVar84 * 0.0 + dVar77);
  param_1[0xf6] = (float)(dVar35 * 0.0 + dVar44 + dVar91 * 0.0 + dVar22);
  param_1[0xf7] = (float)(dVar1 * 0.0 + dVar70 + dVar94 * 0.0 + dVar24);
  param_1[0xf8] = (float)(dVar47 * 0.0 + dVar21 * 0.0 + dVar83 + dVar71);
  param_1[0xf9] = (float)(dVar58 * 0.0 + dVar29 * 0.0 + dVar84 + dVar77);
  param_1[0xfa] = (float)(dVar35 * 0.0 + dVar44 * 0.0 + dVar91 + dVar22);
  param_1[0xfb] = (float)(dVar1 * 0.0 + dVar70 * 0.0 + dVar94 + dVar24);
  param_1[0xfc] = (float)(dVar83 * dVar46 + dVar21 * dVar63 + dVar47 * dVar30 + dVar90);
  param_1[0xfd] = (float)(dVar84 * dVar57 + dVar29 * dVar64 + dVar58 * dVar34 + dVar95);
  param_1[0xfe] = (float)(dVar46 * dVar91 + dVar63 * dVar44 + dVar35 * dVar30 + dVar97);
  param_1[0xff] = (float)(dVar57 * dVar94 + dVar64 * dVar70 + dVar1 * dVar34 + dVar98);
  dVar93 = *(double *)(param_6 + 0x9b0);
  dVar96 = *(double *)(param_6 + 0x9b8);
  local_588 = *(undefined1 (*) [8])(param_6 + 0x9c0);
  uStack_580 = *(double *)(param_6 + 0x9c8);
  dVar100 = *(double *)(param_6 + 0x9d0);
  dVar101 = *(double *)(param_6 + 0x9d8);
  dVar78 = *(double *)(param_6 + 0x9e0);
  dVar81 = *(double *)(param_6 + 0x9e8);
  dVar88 = *(double *)(param_6 + 0x9f0);
  dVar20 = *(double *)(param_6 + 0x9f8);
  dVar23 = *(double *)(param_6 + 0xa00);
  dVar28 = *(double *)(param_6 + 0xa08);
  dVar33 = *(double *)(param_6 + 0xa10);
  dVar119 = *(double *)(param_6 + 0xa18);
  dVar120 = *(double *)(param_6 + 0xa20);
  dVar92 = *(double *)(param_6 + 0xa28);
  dVar63 = *(double *)(param_6 + 0xa30);
  dVar64 = *(double *)(param_6 + 0xa30);
  dVar30 = *(double *)(param_6 + 0xa38);
  dVar34 = *(double *)(param_6 + 0xa38);
  dVar46 = *(double *)(param_6 + 0xa40);
  dVar57 = *(double *)(param_6 + 0xa40);
  dVar47 = *(double *)(param_6 + 0xa48);
  dVar58 = *(double *)(param_6 + 0xa48);
  dVar35 = *(double *)(param_6 + 0xa50);
  dVar1 = *(double *)(param_6 + 0xa50);
  dVar21 = *(double *)(param_6 + 0xa58);
  dVar29 = *(double *)(param_6 + 0xa58);
  dVar70 = *(double *)(param_6 + 0xa60);
  dVar44 = *(double *)(param_6 + 0xa60);
  dVar83 = *(double *)(param_6 + 0xa68);
  dVar84 = *(double *)(param_6 + 0xa68);
  dVar91 = *(double *)(param_6 + 0xa70);
  dVar94 = *(double *)(param_6 + 0xa70);
  dVar90 = *(double *)(param_6 + 0xa78);
  dVar95 = *(double *)(param_6 + 0xa78);
  dVar97 = *(double *)(param_6 + 0xa80);
  dVar98 = *(double *)(param_6 + 0xa80);
  dVar24 = *(double *)(param_6 + 0xa88);
  dVar22 = *(double *)(param_6 + 0xa88);
  dVar71 = *(double *)(param_6 + 0xa90);
  dVar77 = *(double *)(param_6 + 0xa90);
  dVar45 = *(double *)(param_6 + 0xa98);
  dVar56 = *(double *)(param_6 + 0xa98);
  dVar62 = *(double *)(param_6 + 0xaa0);
  dVar69 = *(double *)(param_6 + 0xaa0);
  dVar87 = *(double *)(param_6 + 0xaa8);
  dVar80 = *(double *)(param_6 + 0xaa8);
  param_1[0x280] = (float)(dVar33 * dVar47 + dVar88 * dVar46 + dVar100 * dVar30 + dVar93 * dVar63);
  param_1[0x281] = (float)(dVar119 * dVar58 + dVar20 * dVar57 + dVar101 * dVar34 + dVar96 * dVar64);
  param_1[0x282] =
       (float)(dVar47 * dVar120 + dVar46 * dVar23 + dVar30 * dVar78 + dVar63 * (double)local_588);
  param_1[0x283] =
       (float)(dVar58 * dVar92 + dVar57 * dVar28 + dVar34 * dVar81 + dVar64 * uStack_580);
  param_1[0x284] = (float)(dVar33 * dVar83 + dVar88 * dVar70 + dVar100 * dVar21 + dVar93 * dVar35);
  param_1[0x285] = (float)(dVar119 * dVar84 + dVar20 * dVar44 + dVar101 * dVar29 + dVar96 * dVar1);
  param_1[0x286] =
       (float)(dVar83 * dVar120 + dVar70 * dVar23 + dVar21 * dVar78 + dVar35 * (double)local_588);
  param_1[0x287] = (float)(dVar84 * dVar92 + dVar44 * dVar28 + dVar29 * dVar81 + dVar1 * uStack_580)
  ;
  param_1[0x288] = (float)(dVar33 * dVar24 + dVar88 * dVar97 + dVar100 * dVar90 + dVar93 * dVar91);
  param_1[0x289] = (float)(dVar119 * dVar22 + dVar20 * dVar98 + dVar101 * dVar95 + dVar96 * dVar94);
  param_1[0x28a] =
       (float)(dVar24 * dVar120 + dVar97 * dVar23 + dVar90 * dVar78 + dVar91 * (double)local_588);
  param_1[0x28b] =
       (float)(dVar22 * dVar92 + dVar98 * dVar28 + dVar95 * dVar81 + dVar94 * uStack_580);
  param_1[0x28c] = (float)(dVar33 * dVar87 + dVar88 * dVar62 + dVar100 * dVar45 + dVar93 * dVar71);
  param_1[0x28d] = (float)(dVar119 * dVar80 + dVar20 * dVar69 + dVar101 * dVar56 + dVar96 * dVar77);
  param_1[0x28e] =
       (float)(dVar120 * dVar87 + dVar23 * dVar62 + dVar78 * dVar45 + (double)local_588 * dVar71);
  param_1[0x28f] =
       (float)(dVar92 * dVar80 + dVar28 * dVar69 + dVar81 * dVar56 + uStack_580 * dVar77);
  dVar35 = *(double *)(param_6 + 0xb40) - *(double *)(param_5 + 0xb40);
  dVar22 = *(double *)(param_6 + 0xb38) - *(double *)(param_5 + 0xb38);
  dVar24 = *(double *)(param_6 + 0xb30) - *(double *)(param_5 + 0xb30);
  FUN_1449818b4(param_5,&local_168);
  dVar70 = *(double *)(param_5 + 0x730);
  dVar63 = *(double *)(param_5 + 0x750);
  dVar83 = *(double *)(param_5 + 0x770);
  dVar64 = *(double *)(param_5 + 0x790);
  dVar84 = *(double *)(param_5 + 0x738);
  dVar30 = *(double *)(param_5 + 0x758);
  dVar91 = *(double *)(param_5 + 0x778);
  dVar34 = *(double *)(param_5 + 0x798);
  dVar94 = *(double *)(param_5 + 0x740);
  dVar46 = *(double *)(param_5 + 0x760);
  dVar90 = *(double *)(param_5 + 0x780);
  dVar57 = *(double *)(param_5 + 0x7a0);
  dVar95 = *(double *)(param_5 + 0x748);
  dVar47 = *(double *)(param_5 + 0x768);
  dVar97 = *(double *)(param_5 + 0x788);
  dVar58 = *(double *)(param_5 + 0x7a8);
  dVar1 = dVar95 * local_150 + dVar94 * local_158 + dVar84 * local_160 + dVar70 * local_168;
  dVar21 = dVar47 * local_150 + dVar46 * local_158 + dVar30 * local_160 + dVar63 * local_168;
  auVar4._8_4_ = SUB84(dVar21,0);
  auVar4._0_8_ = dVar1;
  auVar4._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  dVar87 = local_150 * dVar97 + local_158 * dVar90 + local_160 * dVar91 + local_168 * dVar83;
  dVar100 = local_150 * dVar58 + local_158 * dVar57 + local_160 * dVar34 + local_168 * dVar64;
  dVar21 = dVar95 * local_130 + dVar94 * local_138 + dVar84 * local_140 + dVar70 * local_148;
  dVar29 = dVar47 * local_130 + dVar46 * local_138 + dVar30 * local_140 + dVar63 * local_148;
  auVar5._8_4_ = SUB84(dVar29,0);
  auVar5._0_8_ = dVar21;
  auVar5._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  dVar93 = local_130 * dVar97 + local_138 * dVar90 + local_140 * dVar91 + local_148 * dVar83;
  dVar101 = local_130 * dVar58 + local_138 * dVar57 + local_140 * dVar34 + local_148 * dVar64;
  dVar29 = dVar95 * local_110 + dVar94 * local_118 + dVar84 * local_120 + dVar70 * local_128;
  dVar44 = dVar47 * local_110 + dVar46 * local_118 + dVar30 * local_120 + dVar63 * local_128;
  auVar6._8_4_ = SUB84(dVar44,0);
  auVar6._0_8_ = dVar29;
  auVar6._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  dVar96 = local_110 * dVar97 + local_118 * dVar90 + local_120 * dVar91 + local_128 * dVar83;
  dVar78 = local_110 * dVar58 + local_118 * dVar57 + local_120 * dVar34 + local_128 * dVar64;
  dVar28 = dVar95 * local_f0 + dVar94 * local_f8 + dVar84 * local_100 + dVar70 * local_108;
  dVar119 = dVar47 * local_f0 + dVar46 * local_f8 + dVar30 * local_100 + dVar63 * local_108;
  dVar56 = dVar97 * local_f0 + dVar90 * local_f8 + dVar91 * local_100 + dVar83 * local_108;
  dVar69 = dVar58 * local_f0 + dVar57 * local_f8 + dVar34 * local_100 + dVar64 * local_108;
  dVar30 = *(double *)(param_6 + 0x730);
  dVar34 = *(double *)(param_6 + 0x738);
  dVar44 = *(double *)(param_6 + 0x750);
  dVar70 = *(double *)(param_6 + 0x758);
  dVar83 = *(double *)(param_6 + 0x740);
  dVar84 = *(double *)(param_6 + 0x748);
  dVar91 = *(double *)(param_6 + 0x760);
  dVar94 = *(double *)(param_6 + 0x768);
  dVar90 = *(double *)(param_6 + 0x770);
  dVar95 = *(double *)(param_6 + 0x778);
  dVar97 = *(double *)(param_6 + 0x780);
  dVar98 = *(double *)(param_6 + 0x788);
  dVar33 = dVar90 * dVar35 + dVar44 * dVar22 + dVar30 * dVar24 + *(double *)(param_6 + 0x790);
  dVar120 = dVar95 * dVar35 + dVar70 * dVar22 + dVar34 * dVar24 + *(double *)(param_6 + 0x798);
  dVar46 = *(double *)(param_6 + 0x790) * 0.0;
  dVar57 = *(double *)(param_6 + 0x798) * 0.0;
  dVar63 = dVar35 * dVar97 + dVar22 * dVar91 + dVar24 * dVar83 + *(double *)(param_6 + 0x7a0);
  dVar64 = dVar35 * dVar98 + dVar22 * dVar94 + dVar24 * dVar84 + *(double *)(param_6 + 0x7a8);
  dVar62 = *(double *)(param_6 + 0x7a0) * 0.0;
  dVar80 = *(double *)(param_6 + 0x7a8) * 0.0;
  dVar47 = dVar30 + dVar44 * 0.0 + dVar90 * 0.0 + dVar46;
  dVar58 = dVar34 + dVar70 * 0.0 + dVar95 * 0.0 + dVar57;
  dVar81 = dVar30 * 0.0 + dVar44 + dVar90 * 0.0 + dVar46;
  dVar88 = dVar34 * 0.0 + dVar70 + dVar95 * 0.0 + dVar57;
  dVar46 = dVar30 * 0.0 + dVar44 * 0.0 + dVar90 + dVar46;
  dVar57 = dVar34 * 0.0 + dVar70 * 0.0 + dVar95 + dVar57;
  uVar8 = -(ulonglong)(*(double *)(param_6 + 0x3a8) < 1.0);
  dVar35 = *(double *)(param_6 + 0x370);
  dVar44 = *(double *)(param_6 + 0x378);
  dVar70 = *(double *)(param_6 + 0x398);
  dVar30 = dVar83 + dVar91 * 0.0 + dVar97 * 0.0 + dVar62;
  dVar34 = dVar84 + dVar94 * 0.0 + dVar98 * 0.0 + dVar80;
  dVar20 = dVar83 * 0.0 + dVar91 + dVar97 * 0.0 + dVar62;
  dVar23 = dVar84 * 0.0 + dVar94 + dVar98 * 0.0 + dVar80;
  dVar45 = (double)(~uVar8 & (ulonglong)*(double *)(param_6 + 0x390) | uVar8 & (ulonglong)dVar35) -
           *(double *)(param_6 + 0xb88);
  dVar62 = dVar83 * 0.0 + dVar91 * 0.0 + dVar97 + dVar62;
  dVar80 = dVar84 * 0.0 + dVar94 * 0.0 + dVar98 + dVar80;
  dVar83 = *(double *)(param_6 + 0x330);
  dVar84 = *(double *)(param_6 + 0x338);
  dVar91 = *(double *)*(undefined1 (*) [16])(param_6 + 0x340);
  dVar94 = *(double *)(param_6 + 0x348);
  _local_4a8 = *(undefined1 (*) [16])(param_6 + 0x340);
  dVar90 = *(double *)(param_6 + 0x350);
  dVar95 = *(double *)(param_6 + 0x358);
  dVar97 = *(double *)(param_6 + 0x360);
  dVar98 = *(double *)(param_6 + 0x368);
  dVar22 = *(double *)(param_6 + 0x380);
  dVar24 = *(double *)(param_6 + 0x388);
  dVar71 = *(double *)(param_6 + 0x3a0);
  dVar77 = *(double *)(param_6 + 0x3a8);
  if (1.0 <= *(double *)(param_6 + 0x3a8)) {
    dVar70 = dVar70 - *(double *)(param_6 + 0xb90);
  }
  else {
    dVar44 = dVar44 - *(double *)(param_6 + 0xb90);
    dVar35 = dVar45;
    dVar45 = *(double *)(param_6 + 0x390);
  }
  dVar92 = dVar34 * dVar45 + dVar30 * dVar35 + dVar58 * dVar90 + dVar83 * dVar47;
  dVar118 = dVar34 * dVar70 + dVar30 * dVar44 + dVar58 * dVar95 + dVar84 * dVar47;
  auVar7._8_4_ = SUB84(dVar118,0);
  auVar7._0_8_ = dVar92;
  auVar7._12_4_ = (int)((ulonglong)dVar118 >> 0x20);
  dVar118 = dVar34 * dVar71 + dVar30 * dVar22 + dVar58 * dVar97 + dVar47 * dVar91;
  dVar34 = dVar34 * dVar77 + dVar30 * dVar24 + dVar58 * dVar98 + dVar47 * dVar94;
  dVar82 = dVar23 * dVar45 + dVar20 * dVar35 + dVar88 * dVar90 + dVar83 * dVar81;
  dVar89 = dVar23 * dVar70 + dVar20 * dVar44 + dVar88 * dVar95 + dVar84 * dVar81;
  local_458 = dVar23 * dVar71 + dVar20 * dVar22 + dVar88 * dVar97 + dVar81 * dVar91;
  dStack_450 = dVar23 * dVar77 + dVar20 * dVar24 + dVar88 * dVar98 + dVar81 * dVar94;
  dVar47 = dVar80 * dVar45 + dVar62 * dVar35 + dVar57 * dVar90 + dVar83 * dVar46;
  dVar58 = dVar80 * dVar70 + dVar62 * dVar44 + dVar57 * dVar95 + dVar84 * dVar46;
  dVar81 = dVar80 * dVar71 + dVar62 * dVar22 + dVar57 * dVar97 + dVar46 * dVar91;
  dVar46 = dVar80 * dVar77 + dVar62 * dVar24 + dVar57 * dVar98 + dVar46 * dVar94;
  dVar57 = dVar45 * dVar64 + dVar35 * dVar63 + dVar90 * dVar120 + dVar83 * dVar33;
  dVar35 = dVar70 * dVar64 + dVar44 * dVar63 + dVar95 * dVar120 + dVar84 * dVar33;
  dVar30 = dVar64 * dVar71 + dVar63 * dVar22 + dVar120 * dVar97 + dVar33 * dVar91;
  dVar63 = dVar64 * dVar77 + dVar63 * dVar24 + dVar120 * dVar98 + dVar33 * dVar94;
  dStack_4c0 = auVar4._8_8_;
  uStack_4d0 = auVar7._8_8_;
  dStack_520 = auVar5._8_8_;
  dStack_510 = auVar6._8_8_;
  auVar3._8_4_ = SUB84(dVar63,0);
  auVar3._0_8_ = dVar30;
  auVar3._12_4_ = (int)((ulonglong)dVar63 >> 0x20);
  uStack_580 = auVar3._8_8_;
  param_1[0x290] =
       (float)(dVar100 * dVar57 + dVar87 * dVar47 + dStack_4c0 * dVar82 + dVar1 * dVar92);
  param_1[0x291] =
       (float)(dVar100 * dVar35 + dVar87 * dVar58 + dStack_4c0 * dVar89 + dVar1 * uStack_4d0);
  param_1[0x292] =
       (float)(dVar100 * dVar30 + dVar87 * dVar81 + dStack_4c0 * local_458 + dVar1 * dVar118);
  param_1[0x293] =
       (float)(dVar100 * dVar63 + dVar87 * dVar46 + dStack_4c0 * dStack_450 + dVar1 * dVar34);
  param_1[0x294] =
       (float)(dVar101 * dVar57 + dVar93 * dVar47 + dStack_520 * dVar82 + dVar21 * dVar92);
  param_1[0x295] =
       (float)(dVar101 * dVar35 + dVar93 * dVar58 + dStack_520 * dVar89 + dVar21 * uStack_4d0);
  param_1[0x296] =
       (float)(dVar101 * dVar30 + dVar93 * dVar81 + dStack_520 * local_458 + dVar21 * dVar118);
  param_1[0x297] =
       (float)(dVar101 * dVar63 + dVar93 * dVar46 + dStack_520 * dStack_450 + dVar21 * dVar34);
  param_1[0x298] =
       (float)(dVar78 * dVar57 + dVar96 * dVar47 + dStack_510 * dVar82 + dVar29 * dVar92);
  param_1[0x299] =
       (float)(dVar78 * dVar35 + dVar96 * dVar58 + dStack_510 * dVar89 + dVar29 * uStack_4d0);
  param_1[0x29a] =
       (float)(dVar78 * dVar30 + dVar96 * dVar81 + dStack_510 * local_458 + dVar29 * dVar118);
  param_1[0x29b] =
       (float)(dVar78 * dVar63 + dVar96 * dVar46 + dStack_510 * dStack_450 + dVar29 * dVar34);
  param_1[0x29c] = (float)(dVar57 * dVar69 + dVar47 * dVar56 + dVar82 * dVar119 + dVar92 * dVar28);
  param_1[0x29d] =
       (float)(dVar35 * dVar69 + dVar58 * dVar56 + dVar89 * dVar119 + uStack_4d0 * dVar28);
  param_1[0x29e] =
       (float)(dVar69 * dVar30 + dVar81 * dVar56 + dVar119 * local_458 + dVar118 * dVar28);
  param_1[0x29f] =
       (float)(dVar69 * uStack_580 + dVar46 * dVar56 + dVar119 * dStack_450 + dVar34 * dVar28);
  dVar91 = *(double *)(param_5 + 0x730);
  dVar63 = *(double *)(param_5 + 0x750);
  dVar94 = *(double *)(param_5 + 0x770);
  dVar64 = *(double *)(param_5 + 0x790);
  dVar90 = *(double *)(param_5 + 0x738);
  dVar30 = *(double *)(param_5 + 0x758);
  dVar95 = *(double *)(param_5 + 0x778);
  dVar34 = *(double *)(param_5 + 0x798);
  dVar97 = *(double *)(param_5 + 0x740);
  dVar46 = *(double *)(param_5 + 0x760);
  dVar98 = *(double *)(param_5 + 0x780);
  dVar57 = *(double *)(param_5 + 0x7a0);
  dVar22 = *(double *)(param_5 + 0x748);
  dVar47 = *(double *)(param_5 + 0x768);
  dVar24 = *(double *)(param_5 + 0x788);
  dVar58 = *(double *)(param_5 + 0x7a8);
  dVar35 = *(double *)(param_5 + 0x430);
  dVar1 = *(double *)(param_5 + 0x430);
  dVar29 = *(double *)(param_5 + 0x438);
  dVar21 = *(double *)(param_5 + 0x438);
  dVar70 = *(double *)(param_5 + 0x440);
  dVar44 = *(double *)(param_5 + 0x440);
  dVar84 = *(double *)(param_5 + 0x448);
  dVar83 = *(double *)(param_5 + 0x448);
  local_4c8 = dVar22 * dVar84 + dVar97 * dVar70 + dVar90 * dVar29 + dVar91 * dVar35;
  dStack_4c0 = dVar47 * dVar83 + dVar46 * dVar44 + dVar30 * dVar21 + dVar63 * dVar1;
  local_4b8 = (undefined1  [8])
              (dVar84 * dVar24 + dVar70 * dVar98 + dVar29 * dVar95 + dVar35 * dVar94);
  uStack_4b0 = dVar83 * dVar58 + dVar44 * dVar57 + dVar21 * dVar34 + dVar1 * dVar64;
  dVar1 = *(double *)(param_5 + 0x450);
  dVar35 = *(double *)(param_5 + 0x450);
  dVar29 = *(double *)(param_5 + 0x458);
  dVar21 = *(double *)(param_5 + 0x458);
  dVar70 = *(double *)(param_5 + 0x460);
  dVar44 = *(double *)(param_5 + 0x460);
  dVar83 = *(double *)(param_5 + 0x468);
  dVar84 = *(double *)(param_5 + 0x468);
  local_528 = dVar22 * dVar83 + dVar97 * dVar70 + dVar90 * dVar29 + dVar91 * dVar1;
  dStack_520 = dVar47 * dVar84 + dVar46 * dVar44 + dVar30 * dVar21 + dVar63 * dVar35;
  local_508._0_8_ = dVar83 * dVar24 + dVar70 * dVar98 + dVar29 * dVar95 + dVar1 * dVar94;
  local_508._8_8_ = dVar84 * dVar58 + dVar44 * dVar57 + dVar21 * dVar34 + dVar35 * dVar64;
  dVar35 = *(double *)(param_5 + 0x470);
  dVar1 = *(double *)(param_5 + 0x470);
  dVar29 = *(double *)(param_5 + 0x478);
  dVar21 = *(double *)(param_5 + 0x478);
  dVar70 = *(double *)(param_5 + 0x480);
  dVar44 = *(double *)(param_5 + 0x480);
  dVar84 = *(double *)(param_5 + 0x488);
  dVar83 = *(double *)(param_5 + 0x488);
  local_518 = dVar22 * dVar84 + dVar97 * dVar70 + dVar90 * dVar29 + dVar91 * dVar35;
  dStack_510 = dVar47 * dVar83 + dVar46 * dVar44 + dVar30 * dVar21 + dVar63 * dVar1;
  dVar71 = *(double *)(param_6 + 0xb38) - *(double *)(param_5 + 0xb38);
  local_4f8 = (undefined1  [8])
              (dVar84 * dVar24 + dVar70 * dVar98 + dVar29 * dVar95 + dVar35 * dVar94);
  uStack_4f0 = dVar83 * dVar58 + dVar44 * dVar57 + dVar21 * dVar34 + dVar1 * dVar64;
  dVar1 = *(double *)(param_5 + 0x490);
  dVar35 = *(double *)(param_5 + 0x490);
  dVar29 = *(double *)(param_5 + 0x498);
  dVar21 = *(double *)(param_5 + 0x498);
  dVar70 = *(double *)(param_5 + 0x4a0);
  dVar44 = *(double *)(param_5 + 0x4a0);
  dVar84 = *(double *)(param_5 + 0x4a8);
  dVar83 = *(double *)(param_5 + 0x4a8);
  local_568 = dVar22 * dVar84 + dVar97 * dVar70 + dVar90 * dVar29 + dVar91 * dVar1;
  dStack_560 = dVar47 * dVar83 + dVar46 * dVar44 + dVar30 * dVar21 + dVar63 * dVar35;
  local_4e8 = dVar24 * dVar84 + dVar98 * dVar70 + dVar95 * dVar29 + dVar94 * dVar1;
  uStack_4e0 = dVar58 * dVar83 + dVar57 * dVar44 + dVar34 * dVar21 + dVar64 * dVar35;
  dVar30 = *(double *)(param_6 + 0x730);
  dVar34 = *(double *)(param_6 + 0x738);
  dVar46 = *(double *)(param_6 + 0x750);
  dVar57 = *(double *)(param_6 + 0x758);
  dVar63 = *(double *)(param_6 + 0xb30) - *(double *)(param_5 + 0xb30);
  dVar1 = *(double *)(param_6 + 0x740);
  dVar21 = *(double *)(param_6 + 0x748);
  dVar29 = *(double *)(param_6 + 0x760);
  dVar44 = *(double *)(param_6 + 0x768);
  dVar64 = *(double *)(param_6 + 0xb40) - *(double *)(param_5 + 0xb40);
  dVar47 = *(double *)(param_6 + 0x770);
  dVar70 = *(double *)(param_6 + 0x778);
  dVar83 = *(double *)(param_6 + 0x780);
  dVar84 = *(double *)(param_6 + 0x788);
  dVar56 = dVar47 * dVar64 + dVar46 * dVar71 + dVar30 * dVar63 + *(double *)(param_6 + 0x790);
  dVar62 = dVar70 * dVar64 + dVar57 * dVar71 + dVar34 * dVar63 + *(double *)(param_6 + 0x798);
  dVar87 = *(double *)(param_6 + 0x790) * 0.0;
  dVar93 = *(double *)(param_6 + 0x798) * 0.0;
  dVar58 = dVar64 * dVar83 + dVar71 * dVar29 + dVar63 * dVar1 + *(double *)(param_6 + 0x7a0);
  dVar35 = dVar64 * dVar84 + dVar71 * dVar44 + dVar63 * dVar21 + *(double *)(param_6 + 0x7a8);
  dVar63 = *(double *)(param_6 + 0x7a0) * 0.0;
  dVar64 = *(double *)(param_6 + 0x7a8) * 0.0;
  dVar96 = dVar30 + dVar46 * 0.0 + dVar47 * 0.0 + dVar87;
  dVar100 = dVar34 + dVar57 * 0.0 + dVar70 * 0.0 + dVar93;
  dVar101 = dVar30 * 0.0 + dVar46 + dVar47 * 0.0 + dVar87;
  dVar78 = dVar34 * 0.0 + dVar57 + dVar70 * 0.0 + dVar93;
  dVar87 = dVar30 * 0.0 + dVar46 * 0.0 + dVar47 + dVar87;
  dVar93 = dVar34 * 0.0 + dVar57 * 0.0 + dVar70 + dVar93;
  dVar34 = dVar1 + dVar29 * 0.0 + dVar83 * 0.0 + dVar63;
  dVar47 = dVar21 + dVar44 * 0.0 + dVar84 * 0.0 + dVar64;
  dVar30 = dVar1 * 0.0 + dVar29 + dVar83 * 0.0 + dVar63;
  dVar46 = dVar21 * 0.0 + dVar44 + dVar84 * 0.0 + dVar64;
  dVar63 = dVar1 * 0.0 + dVar29 * 0.0 + dVar83 + dVar63;
  dVar64 = dVar21 * 0.0 + dVar44 * 0.0 + dVar84 + dVar64;
  dVar29 = *(double *)*(undefined1 (*) [16])(param_6 + 0x330);
  dVar44 = *(double *)(param_6 + 0x338);
  _local_4d8 = *(undefined1 (*) [16])(param_6 + 0x330);
  dVar70 = *(double *)(param_6 + 0x350);
  dVar83 = *(double *)(param_6 + 0x358);
  dVar84 = *(double *)(param_6 + 0x340);
  dVar91 = *(double *)(param_6 + 0x348);
  dVar94 = *(double *)*(undefined1 (*) [16])(param_6 + 0x360);
  dVar90 = *(double *)(param_6 + 0x368);
  _local_538 = *(undefined1 (*) [16])(param_6 + 0x360);
  dVar95 = *(double *)(param_6 + 0x370);
  dVar97 = *(double *)(param_6 + 0x378);
  dVar98 = *(double *)*(undefined1 (*) [16])(param_6 + 0x380);
  dVar22 = *(double *)(param_6 + 0x388);
  _local_578 = *(undefined1 (*) [16])(param_6 + 0x380);
  dVar24 = *(double *)(param_6 + 0x390);
  dVar71 = *(double *)(param_6 + 0x398);
  dVar69 = dVar47 * dVar24 + dVar34 * dVar95 + dVar100 * dVar70 + dVar29 * dVar96;
  dVar80 = dVar47 * dVar71 + dVar34 * dVar97 + dVar100 * dVar83 + dVar44 * dVar96;
  uStack_580 = dVar80;
  local_588 = (undefined1  [8])dVar69;
  dVar77 = *(double *)*(undefined1 (*) [16])(param_6 + 0x3a0);
  dVar45 = *(double *)(param_6 + 0x3a8);
  _local_548 = *(undefined1 (*) [16])(param_6 + 0x3a0);
  dVar57 = dVar47 * dVar77 + dVar34 * dVar98 + dVar100 * dVar94 + dVar96 * dVar84;
  dVar47 = dVar47 * dVar45 + dVar34 * dVar22 + dVar100 * dVar90 + dVar96 * dVar91;
  dVar1 = dVar46 * dVar24 + dVar30 * dVar95 + dVar78 * dVar70 + dVar29 * dVar101;
  dVar21 = dVar46 * dVar71 + dVar30 * dVar97 + dVar78 * dVar83 + dVar44 * dVar101;
  dVar34 = dVar46 * dVar77 + dVar30 * dVar98 + dVar78 * dVar94 + dVar101 * dVar84;
  dVar30 = dVar46 * dVar45 + dVar30 * dVar22 + dVar78 * dVar90 + dVar101 * dVar91;
  dVar96 = dVar64 * dVar24 + dVar63 * dVar95 + dVar93 * dVar70 + dVar29 * dVar87;
  dVar100 = dVar64 * dVar71 + dVar63 * dVar97 + dVar93 * dVar83 + dVar44 * dVar87;
  dVar46 = dVar64 * dVar77 + dVar63 * dVar98 + dVar93 * dVar94 + dVar87 * dVar84;
  dVar87 = dVar64 * dVar45 + dVar63 * dVar22 + dVar93 * dVar90 + dVar87 * dVar91;
  dVar29 = dVar24 * dVar35 + dVar95 * dVar58 + dVar70 * dVar62 + dVar29 * dVar56;
  dVar44 = dVar71 * dVar35 + dVar97 * dVar58 + dVar83 * dVar62 + dVar44 * dVar56;
  dVar63 = dVar35 * dVar77 + dVar58 * dVar98 + dVar62 * dVar94 + dVar56 * dVar84;
  dVar64 = dVar35 * dVar45 + dVar58 * dVar22 + dVar62 * dVar90 + dVar56 * dVar91;
  fVar9 = (float)(uStack_4b0 * dVar29 +
                 (double)local_4b8 * dVar96 + dStack_4c0 * dVar1 + local_4c8 * dVar69);
  local_588._0_4_ = fVar9;
  param_1[0x2a0] = fVar9;
  param_1[0x2a1] =
       (float)(uStack_4b0 * dVar44 +
              (double)local_4b8 * dVar100 + dStack_4c0 * dVar21 + local_4c8 * dVar80);
  param_1[0x2a2] =
       (float)(uStack_4b0 * dVar63 +
              (double)local_4b8 * dVar46 + dStack_4c0 * dVar34 + local_4c8 * dVar57);
  param_1[0x2a3] =
       (float)(uStack_4b0 * dVar64 +
              (double)local_4b8 * dVar87 + dStack_4c0 * dVar30 + local_4c8 * dVar47);
  param_1[0x2a4] =
       (float)((double)local_508._8_8_ * dVar29 +
              (double)local_508._0_8_ * dVar96 + dStack_520 * dVar1 + local_528 * dVar69);
  param_1[0x2a5] =
       (float)((double)local_508._8_8_ * dVar44 +
              (double)local_508._0_8_ * dVar100 + dStack_520 * dVar21 + local_528 * dVar80);
  param_1[0x2a6] =
       (float)((double)local_508._8_8_ * dVar63 +
              (double)local_508._0_8_ * dVar46 + dStack_520 * dVar34 + local_528 * dVar57);
  param_1[0x2a7] =
       (float)((double)local_508._8_8_ * dVar64 +
              (double)local_508._0_8_ * dVar87 + dStack_520 * dVar30 + local_528 * dVar47);
  param_1[0x2a8] =
       (float)(uStack_4f0 * dVar29 +
              (double)local_4f8 * dVar96 + dStack_510 * dVar1 + local_518 * dVar69);
  param_1[0x2a9] =
       (float)(uStack_4f0 * dVar44 +
              (double)local_4f8 * dVar100 + dStack_510 * dVar21 + local_518 * dVar80);
  param_1[0x2aa] =
       (float)(uStack_4f0 * dVar63 +
              (double)local_4f8 * dVar46 + dStack_510 * dVar34 + local_518 * dVar57);
  param_1[0x2ab] =
       (float)(uStack_4f0 * dVar64 +
              (double)local_4f8 * dVar87 + dStack_510 * dVar30 + local_518 * dVar47);
  param_1[0x2ac] =
       (float)(dVar29 * uStack_4e0 + dVar96 * local_4e8 + dVar1 * dStack_560 + dVar69 * local_568);
  param_1[0x2ad] =
       (float)(dVar44 * uStack_4e0 + dVar100 * local_4e8 + dVar21 * dStack_560 + dVar80 * local_568)
  ;
  param_1[0x2ae] =
       (float)(uStack_4e0 * dVar63 + dVar46 * local_4e8 + dStack_560 * dVar34 + dVar57 * local_568);
  param_1[0x2af] =
       (float)(uStack_4e0 * dVar64 + dVar87 * local_4e8 + dStack_560 * dVar30 + dVar47 * local_568);
  dVar63 = *(double *)(param_5 + 0xab8);
  dVar64 = *(double *)(param_5 + 0xac0);
  dVar30 = *(double *)(param_5 + 0xac8);
  dVar34 = *(double *)(param_5 + 0xad0);
  dVar46 = *(double *)(param_5 + 0xad8);
  dVar57 = *(double *)(param_5 + 0xae0);
  dVar47 = *(double *)(param_5 + 0xae8);
  dVar58 = *(double *)(param_5 + 0xaf0);
  dVar35 = *(double *)(param_5 + 0xaf8);
  dVar1 = *(double *)(param_5 + 0xb00);
  dVar21 = *(double *)(param_5 + 0xb08);
  dVar29 = *(double *)(param_5 + 0xb10);
  dVar44 = *(double *)(param_5 + 0xb18);
  dVar70 = *(double *)(param_5 + 0xb20);
  dVar83 = *(double *)(param_5 + 0xb28);
  param_1[0x100] = (float)*(double *)(param_5 + 0xab0);
  param_1[0x101] = (float)dVar63;
  param_1[0x102] = (float)dVar64;
  param_1[0x103] = (float)dVar30;
  param_1[0x104] = (float)dVar34;
  param_1[0x105] = (float)dVar46;
  param_1[0x106] = (float)dVar57;
  param_1[0x107] = (float)dVar47;
  param_1[0x108] = (float)dVar58;
  param_1[0x109] = (float)dVar35;
  param_1[0x10a] = (float)dVar1;
  param_1[0x10b] = (float)dVar21;
  param_1[0x10c] = (float)dVar29;
  param_1[0x10d] = (float)dVar44;
  param_1[0x10e] = (float)dVar70;
  param_1[0x10f] = (float)dVar83;
  dVar63 = *(double *)(param_6 + 0xab8);
  dVar64 = *(double *)(param_6 + 0xac0);
  dVar30 = *(double *)(param_6 + 0xac8);
  dVar34 = *(double *)(param_6 + 0xad0);
  dVar46 = *(double *)(param_6 + 0xad8);
  dVar57 = *(double *)(param_6 + 0xae0);
  dVar47 = *(double *)(param_6 + 0xae8);
  dVar58 = *(double *)(param_6 + 0xaf0);
  dVar35 = *(double *)(param_6 + 0xaf8);
  dVar1 = *(double *)(param_6 + 0xb00);
  dVar21 = *(double *)(param_6 + 0xb08);
  dVar29 = *(double *)(param_6 + 0xb10);
  dVar44 = *(double *)(param_6 + 0xb18);
  dVar70 = *(double *)(param_6 + 0xb20);
  dVar83 = *(double *)(param_6 + 0xb28);
  param_1[0x110] = (float)*(double *)(param_6 + 0xab0);
  param_1[0x111] = (float)dVar63;
  param_1[0x112] = (float)dVar64;
  param_1[0x113] = (float)dVar30;
  param_1[0x114] = (float)dVar34;
  param_1[0x115] = (float)dVar46;
  param_1[0x116] = (float)dVar57;
  param_1[0x117] = (float)dVar47;
  param_1[0x118] = (float)dVar58;
  param_1[0x119] = (float)dVar35;
  param_1[0x11a] = (float)dVar1;
  param_1[0x11b] = (float)dVar21;
  param_1[0x11c] = (float)dVar29;
  param_1[0x11d] = (float)dVar44;
  param_1[0x11e] = (float)dVar70;
  param_1[0x11f] = (float)dVar83;
  dVar63 = *(double *)(param_6 + 0xb90);
  dVar64 = *(double *)(param_6 + 0xb88);
  dVar30 = *(double *)(param_5 + 0xb90);
  param_1[0x2b0] = (float)*(double *)(param_5 + 0xb88);
  param_1[0x2b1] = (float)dVar30;
  param_1[0x2b2] = (float)dVar64;
  param_1[0x2b3] = (float)dVar63;
  param_1[0x307] = (float)(uint)((int)param_7[0x16] != 0);
  lVar2 = *param_7;
  if (lVar2 == 0) {
    fVar9 = 0.0;
  }
  else if ((*(byte *)(lVar2 + 0xd) & 0x80) == 0) {
    fVar9 = 1.0;
  }
  else {
    fVar9 = (float)(*(uint *)(lVar2 + 0x18) >> 1 & 1);
  }
  param_1[0x30a] = fVar9;
  param_1[0x2f2] = 0.0;
  auVar31._0_8_ = (double)param_7[4] - (double)*(float *)((longlong)param_7 + 0x2c);
  auVar31._8_8_ = 0;
  auVar76 = roundsd(ZEXT816(0),auVar31,9);
  dVar63 = auVar76._0_8_;
  auVar32._0_8_ = (auVar31._0_8_ - dVar63) * 2147483647.0;
  auVar32._8_8_ = 0;
  auVar76 = roundsd(ZEXT816(0),auVar32,9);
  dVar64 = auVar76._0_8_;
  if (2147483647.0 <= dVar63) {
    dVar63 = 2147483647.0;
  }
  if (dVar63 <= 0.0) {
    dVar63 = 0.0;
  }
  if (2147483647.0 <= dVar64) {
    dVar64 = 2147483647.0;
  }
  if (dVar64 <= 0.0) {
    dVar64 = 0.0;
  }
  *(ulonglong *)(param_1 + 0x2ee) = CONCAT44((int)dVar64,(int)dVar63);
  auVar50._0_8_ = (double)param_7[3] - (double)*(float *)(param_7 + 5);
  auVar50._8_8_ = 0;
  auVar76 = roundsd(ZEXT816(0),auVar50,9);
  dVar64 = auVar76._0_8_;
  auVar51._0_8_ = (auVar50._0_8_ - dVar64) * 2147483647.0;
  auVar51._8_8_ = 0;
  auVar76 = roundsd(auVar51,auVar51,9);
  dVar63 = auVar76._0_8_;
  if (2147483647.0 <= dVar64) {
    dVar64 = 2147483647.0;
  }
  if (dVar64 <= 0.0) {
    dVar64 = 0.0;
  }
  if (2147483647.0 <= dVar63) {
    dVar63 = 2147483647.0;
  }
  if (dVar63 <= 0.0) {
    dVar63 = 0.0;
  }
  *(ulonglong *)(param_1 + 0x2f0) = CONCAT44((int)dVar63,(int)dVar64);
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_7[4];
  auVar76 = roundsd(ZEXT816(0),auVar52,9);
  dVar64 = auVar76._0_8_;
  auVar53._0_8_ = ((double)param_7[4] - dVar64) * 2147483647.0;
  auVar53._8_8_ = 0;
  auVar76 = roundsd(auVar53,auVar53,9);
  dVar63 = auVar76._0_8_;
  if (2147483647.0 <= dVar64) {
    dVar64 = 2147483647.0;
  }
  if (dVar64 <= 0.0) {
    dVar64 = 0.0;
  }
  if (2147483647.0 <= dVar63) {
    dVar63 = 2147483647.0;
  }
  if (dVar63 <= 0.0) {
    dVar63 = 0.0;
  }
  *(ulonglong *)(param_1 + 0x2fa) = CONCAT44((int)dVar63,(int)dVar64);
  auVar54._8_8_ = 0;
  auVar54._0_8_ = param_7[3];
  auVar76 = roundsd(ZEXT816(0),auVar54,9);
  dVar64 = auVar76._0_8_;
  auVar55._0_8_ = ((double)param_7[3] - dVar64) * 2147483647.0;
  auVar55._8_8_ = 0;
  auVar76 = roundsd(auVar55,auVar55,9);
  dVar63 = auVar76._0_8_;
  if (2147483647.0 <= dVar64) {
    dVar64 = 2147483647.0;
  }
  if (dVar64 <= 0.0) {
    dVar64 = 0.0;
  }
  if (2147483647.0 <= dVar63) {
    dVar63 = 2147483647.0;
  }
  if (dVar63 <= 0.0) {
    dVar63 = 0.0;
  }
  *(ulonglong *)(param_1 + 0x2fc) = CONCAT44((int)dVar63,(int)dVar64);
  param_1[0x2fe] = *(float *)((longlong)param_7 + 0x2c);
  fVar9 = (float)rand();
  param_1[0x301] = fVar9;
  param_1[0x302] = *(float *)(param_7 + 0x18);
  param_1[0x303] = *(float *)(param_7 + 0x17);
  param_1[0x308] = (float)(uint)*(byte *)((longlong)param_7 + 0xd7);
  fVar9 = 1.0;
  if (*(char *)((longlong)param_7 + 0xd6) == '\0') {
    fVar9 = (float)(*(double *)(param_5 + 0x3a8) < 1.0 != *(double *)(param_6 + 0x3a8) < 1.0);
  }
  param_1[0x309] = fVar9;
  fVar9 = *(float *)(DAT_14cb03190 + 4);
  if (1.0 <= fVar9) {
    fVar9 = 1.0;
  }
  if (fVar9 <= 0.02) {
    fVar9 = 0.02;
  }
  param_1[0x4ad] = fVar9;
  dVar63 = *(double *)(param_5 + 0x208);
  dVar64 = *(double *)(param_5 + 0x210);
  dVar30 = *(double *)(param_5 + 0x218);
  dVar34 = *(double *)(param_5 + 0x220);
  dVar46 = *(double *)(param_5 + 0x228);
  dVar57 = *(double *)(param_5 + 0x230);
  dVar47 = *(double *)(param_5 + 0x238);
  dVar58 = *(double *)(param_5 + 0x240);
  dVar35 = *(double *)(param_5 + 0x248);
  dVar1 = *(double *)(param_5 + 0x250);
  dVar21 = *(double *)(param_5 + 600);
  dVar29 = *(double *)(param_5 + 0x260);
  dVar44 = *(double *)(param_5 + 0x268);
  dVar70 = *(double *)(param_5 + 0x270);
  dVar83 = *(double *)(param_5 + 0x278);
  param_1[0x130] = (float)*(double *)(param_5 + 0x200);
  param_1[0x131] = (float)dVar63;
  param_1[0x132] = (float)dVar64;
  param_1[0x133] = (float)dVar30;
  param_1[0x134] = (float)dVar34;
  param_1[0x135] = (float)dVar46;
  param_1[0x136] = (float)dVar57;
  param_1[0x137] = (float)dVar47;
  param_1[0x138] = (float)dVar58;
  param_1[0x139] = (float)dVar35;
  param_1[0x13a] = (float)dVar1;
  param_1[0x13b] = (float)dVar21;
  param_1[0x13c] = (float)dVar29;
  param_1[0x13d] = (float)dVar44;
  param_1[0x13e] = (float)dVar70;
  param_1[0x13f] = (float)dVar83;
  dVar63 = *(double *)(param_5 + 0x108);
  dVar64 = *(double *)(param_5 + 0x110);
  dVar30 = *(double *)(param_5 + 0x118);
  dVar34 = *(double *)(param_5 + 0x120);
  dVar46 = *(double *)(param_5 + 0x128);
  dVar57 = *(double *)(param_5 + 0x130);
  dVar47 = *(double *)(param_5 + 0x138);
  dVar58 = *(double *)(param_5 + 0x140);
  dVar35 = *(double *)(param_5 + 0x148);
  dVar1 = *(double *)(param_5 + 0x150);
  dVar21 = *(double *)(param_5 + 0x158);
  dVar29 = *(double *)(param_5 + 0x160);
  dVar44 = *(double *)(param_5 + 0x168);
  dVar70 = *(double *)(param_5 + 0x170);
  dVar83 = *(double *)(param_5 + 0x178);
  param_1[0x140] = (float)*(double *)(param_5 + 0x100);
  param_1[0x141] = (float)dVar63;
  param_1[0x142] = (float)dVar64;
  param_1[0x143] = (float)dVar30;
  param_1[0x144] = (float)dVar34;
  param_1[0x145] = (float)dVar46;
  param_1[0x146] = (float)dVar57;
  param_1[0x147] = (float)dVar47;
  param_1[0x148] = (float)dVar58;
  param_1[0x149] = (float)dVar35;
  param_1[0x14a] = (float)dVar1;
  param_1[0x14b] = (float)dVar21;
  param_1[0x14c] = (float)dVar29;
  param_1[0x14d] = (float)dVar44;
  param_1[0x14e] = (float)dVar70;
  param_1[0x14f] = (float)dVar83;
  dVar63 = *(double *)(param_5 + 0x188);
  dVar64 = *(double *)(param_5 + 400);
  dVar30 = *(double *)(param_5 + 0x198);
  dVar34 = *(double *)(param_5 + 0x1a0);
  dVar46 = *(double *)(param_5 + 0x1a8);
  dVar57 = *(double *)(param_5 + 0x1b0);
  dVar47 = *(double *)(param_5 + 0x1b8);
  dVar58 = *(double *)(param_5 + 0x1c0);
  dVar35 = *(double *)(param_5 + 0x1c8);
  dVar1 = *(double *)(param_5 + 0x1d0);
  dVar21 = *(double *)(param_5 + 0x1d8);
  dVar29 = *(double *)(param_5 + 0x1e0);
  dVar44 = *(double *)(param_5 + 0x1e8);
  dVar70 = *(double *)(param_5 + 0x1f0);
  dVar83 = *(double *)(param_5 + 0x1f8);
  param_1[0x150] = (float)*(double *)(param_5 + 0x180);
  param_1[0x151] = (float)dVar63;
  param_1[0x152] = (float)dVar64;
  param_1[0x153] = (float)dVar30;
  param_1[0x154] = (float)dVar34;
  param_1[0x155] = (float)dVar46;
  param_1[0x156] = (float)dVar57;
  param_1[0x157] = (float)dVar47;
  param_1[0x158] = (float)dVar58;
  param_1[0x159] = (float)dVar35;
  param_1[0x15a] = (float)dVar1;
  param_1[0x15b] = (float)dVar21;
  param_1[0x15c] = (float)dVar29;
  param_1[0x15d] = (float)dVar44;
  param_1[0x15e] = (float)dVar70;
  param_1[0x15f] = (float)dVar83;
  dVar63 = *(double *)(param_6 + 0x208);
  dVar64 = *(double *)(param_6 + 0x210);
  dVar30 = *(double *)(param_6 + 0x218);
  dVar34 = *(double *)(param_6 + 0x220);
  dVar46 = *(double *)(param_6 + 0x228);
  dVar57 = *(double *)(param_6 + 0x230);
  dVar47 = *(double *)(param_6 + 0x238);
  dVar58 = *(double *)(param_6 + 0x240);
  dVar35 = *(double *)(param_6 + 0x248);
  dVar1 = *(double *)(param_6 + 0x250);
  dVar21 = *(double *)(param_6 + 600);
  dVar29 = *(double *)(param_6 + 0x260);
  dVar44 = *(double *)(param_6 + 0x268);
  dVar70 = *(double *)(param_6 + 0x270);
  dVar83 = *(double *)(param_6 + 0x278);
  param_1[0x160] = (float)*(double *)(param_6 + 0x200);
  param_1[0x161] = (float)dVar63;
  param_1[0x162] = (float)dVar64;
  param_1[0x163] = (float)dVar30;
  param_1[0x164] = (float)dVar34;
  param_1[0x165] = (float)dVar46;
  param_1[0x166] = (float)dVar57;
  param_1[0x167] = (float)dVar47;
  param_1[0x168] = (float)dVar58;
  param_1[0x169] = (float)dVar35;
  param_1[0x16a] = (float)dVar1;
  param_1[0x16b] = (float)dVar21;
  param_1[0x16c] = (float)dVar29;
  param_1[0x16d] = (float)dVar44;
  param_1[0x16e] = (float)dVar70;
  param_1[0x16f] = (float)dVar83;
  dVar63 = *(double *)(param_6 + 0x108);
  dVar64 = *(double *)(param_6 + 0x110);
  dVar30 = *(double *)(param_6 + 0x118);
  dVar34 = *(double *)(param_6 + 0x120);
  dVar46 = *(double *)(param_6 + 0x128);
  dVar57 = *(double *)(param_6 + 0x130);
  dVar47 = *(double *)(param_6 + 0x138);
  dVar58 = *(double *)(param_6 + 0x140);
  dVar35 = *(double *)(param_6 + 0x148);
  dVar1 = *(double *)(param_6 + 0x150);
  dVar21 = *(double *)(param_6 + 0x158);
  dVar29 = *(double *)(param_6 + 0x160);
  dVar44 = *(double *)(param_6 + 0x168);
  dVar70 = *(double *)(param_6 + 0x170);
  dVar83 = *(double *)(param_6 + 0x178);
  param_1[0x170] = (float)*(double *)(param_6 + 0x100);
  param_1[0x171] = (float)dVar63;
  param_1[0x172] = (float)dVar64;
  param_1[0x173] = (float)dVar30;
  param_1[0x174] = (float)dVar34;
  param_1[0x175] = (float)dVar46;
  param_1[0x176] = (float)dVar57;
  param_1[0x177] = (float)dVar47;
  param_1[0x178] = (float)dVar58;
  param_1[0x179] = (float)dVar35;
  param_1[0x17a] = (float)dVar1;
  param_1[0x17b] = (float)dVar21;
  param_1[0x17c] = (float)dVar29;
  param_1[0x17d] = (float)dVar44;
  param_1[0x17e] = (float)dVar70;
  param_1[0x17f] = (float)dVar83;
  dVar63 = *(double *)(param_6 + 0x188);
  dVar64 = *(double *)(param_6 + 400);
  dVar30 = *(double *)(param_6 + 0x198);
  dVar34 = *(double *)(param_6 + 0x1a0);
  dVar46 = *(double *)(param_6 + 0x1a8);
  dVar57 = *(double *)(param_6 + 0x1b0);
  dVar47 = *(double *)(param_6 + 0x1b8);
  dVar58 = *(double *)(param_6 + 0x1c0);
  dVar35 = *(double *)(param_6 + 0x1c8);
  dVar1 = *(double *)(param_6 + 0x1d0);
  dVar21 = *(double *)(param_6 + 0x1d8);
  dVar29 = *(double *)(param_6 + 0x1e0);
  dVar44 = *(double *)(param_6 + 0x1e8);
  dVar70 = *(double *)(param_6 + 0x1f0);
  dVar83 = *(double *)(param_6 + 0x1f8);
  param_1[0x180] = (float)*(double *)(param_6 + 0x180);
  param_1[0x181] = (float)dVar63;
  param_1[0x182] = (float)dVar64;
  param_1[0x183] = (float)dVar30;
  param_1[0x184] = (float)dVar34;
  param_1[0x185] = (float)dVar46;
  param_1[0x186] = (float)dVar57;
  param_1[0x187] = (float)dVar47;
  param_1[0x188] = (float)dVar58;
  param_1[0x189] = (float)dVar35;
  param_1[0x18a] = (float)dVar1;
  param_1[0x18b] = (float)dVar21;
  param_1[0x18c] = (float)dVar29;
  param_1[0x18d] = (float)dVar44;
  param_1[0x18e] = (float)dVar70;
  param_1[399] = (float)dVar83;
  dVar21 = *(double *)(param_5 + 0x7b0);
  dVar29 = *(double *)(param_5 + 0x7b8);
  dVar44 = *(double *)(param_5 + 0x7c0);
  dVar70 = *(double *)(param_5 + 0x7c8);
  dVar83 = *(double *)(param_5 + 2000);
  dVar84 = *(double *)(param_5 + 0x7d8);
  dVar91 = *(double *)(param_5 + 0x7e0);
  dVar94 = *(double *)(param_5 + 0x7e8);
  dVar90 = *(double *)(param_5 + 0x7f0);
  dVar95 = *(double *)(param_5 + 0x7f8);
  dVar97 = *(double *)(param_5 + 0x800);
  dVar98 = *(double *)(param_5 + 0x808);
  dVar22 = *(double *)(param_5 + 0x810);
  dVar24 = *(double *)(param_5 + 0x818);
  dVar71 = *(double *)*(undefined1 (*) [16])(param_5 + 0x820);
  dVar77 = *(double *)(param_5 + 0x828);
  _local_588 = *(undefined1 (*) [16])(param_5 + 0x820);
  dVar64 = *(double *)(param_5 + 0x180);
  dVar63 = *(double *)(param_5 + 0x180);
  dVar34 = *(double *)(param_5 + 0x188);
  dVar30 = *(double *)(param_5 + 0x188);
  dVar46 = *(double *)(param_5 + 400);
  dVar57 = *(double *)(param_5 + 400);
  dVar58 = *(double *)(param_5 + 0x198);
  dVar47 = *(double *)(param_5 + 0x198);
  dVar93 = dVar22 * dVar58 + dVar90 * dVar46 + dVar83 * dVar34 + dVar21 * dVar64;
  dVar96 = dVar24 * dVar47 + dVar95 * dVar57 + dVar84 * dVar30 + dVar29 * dVar63;
  dVar62 = dVar58 * dVar71 + dVar46 * dVar97 + dVar34 * dVar91 + dVar64 * dVar44;
  dVar69 = dVar47 * dVar77 + dVar57 * dVar98 + dVar30 * dVar94 + dVar63 * dVar70;
  dVar64 = *(double *)(param_5 + 0x1a0);
  dVar63 = *(double *)(param_5 + 0x1a0);
  dVar34 = *(double *)(param_5 + 0x1a8);
  dVar30 = *(double *)(param_5 + 0x1a8);
  dVar46 = *(double *)(param_5 + 0x1b0);
  dVar57 = *(double *)(param_5 + 0x1b0);
  dVar47 = *(double *)(param_5 + 0x1b8);
  dVar58 = *(double *)(param_5 + 0x1b8);
  dVar35 = dVar22 * dVar47 + dVar90 * dVar46 + dVar83 * dVar34 + dVar21 * dVar64;
  dVar1 = dVar24 * dVar58 + dVar95 * dVar57 + dVar84 * dVar30 + dVar29 * dVar63;
  dVar45 = dVar47 * dVar71 + dVar46 * dVar97 + dVar34 * dVar91 + dVar64 * dVar44;
  dVar56 = dVar58 * dVar77 + dVar57 * dVar98 + dVar30 * dVar94 + dVar63 * dVar70;
  dVar63 = *(double *)(param_5 + 0x1c0);
  dVar64 = *(double *)(param_5 + 0x1c0);
  dVar34 = *(double *)(param_5 + 0x1c8);
  dVar30 = *(double *)(param_5 + 0x1c8);
  dVar57 = *(double *)(param_5 + 0x1d0);
  dVar46 = *(double *)(param_5 + 0x1d0);
  dVar47 = *(double *)(param_5 + 0x1d8);
  dVar58 = *(double *)(param_5 + 0x1d8);
  dVar100 = dVar22 * dVar47 + dVar90 * dVar57 + dVar83 * dVar34 + dVar21 * dVar63;
  dVar101 = dVar24 * dVar58 + dVar95 * dVar46 + dVar84 * dVar30 + dVar29 * dVar64;
  dVar80 = dVar47 * dVar71 + dVar57 * dVar97 + dVar34 * dVar91 + dVar63 * dVar44;
  dVar87 = dVar58 * dVar77 + dVar46 * dVar98 + dVar30 * dVar94 + dVar64 * dVar70;
  dVar64 = *(double *)(param_5 + 0x1e0);
  dVar63 = *(double *)(param_5 + 0x1e0);
  dVar30 = *(double *)(param_5 + 0x1e8);
  dVar34 = *(double *)(param_5 + 0x1e8);
  dVar57 = *(double *)(param_5 + 0x1f0);
  dVar46 = *(double *)(param_5 + 0x1f0);
  dVar58 = *(double *)(param_5 + 0x1f8);
  dVar47 = *(double *)(param_5 + 0x1f8);
  dVar83 = dVar22 * dVar58 + dVar90 * dVar57 + dVar83 * dVar30 + dVar21 * dVar64;
  dVar90 = dVar24 * dVar47 + dVar95 * dVar46 + dVar84 * dVar34 + dVar29 * dVar63;
  dVar22 = dVar71 * dVar58 + dVar97 * dVar57 + dVar91 * dVar30 + dVar44 * dVar64;
  dVar24 = dVar77 * dVar47 + dVar98 * dVar46 + dVar94 * dVar34 + dVar70 * dVar63;
  dVar46 = dVar35 * 0.0;
  dVar57 = dVar1 * 0.0;
  dVar71 = dVar45 * 0.0;
  dVar77 = dVar56 * 0.0;
  dVar94 = dVar93 * 0.0;
  dVar97 = dVar96 * 0.0;
  dVar21 = dVar62 * 0.0;
  dVar44 = dVar69 * 0.0;
  dVar95 = dVar94 + dVar46;
  dVar98 = dVar97 + dVar57;
  dVar29 = dVar21 + dVar71;
  dVar70 = dVar44 + dVar77;
  dVar64 = *(double *)(param_5 + 0x150);
  dVar63 = *(double *)(param_5 + 0x150);
  dVar84 = dVar83 * 0.0;
  dVar91 = dVar90 * 0.0;
  dVar47 = dVar22 * 0.0;
  dVar58 = dVar24 * 0.0;
  dVar34 = *(double *)(param_5 + 0x170);
  dVar30 = *(double *)(param_5 + 0x170);
  param_1[0x120] = (float)(dVar93 + dVar46 + dVar100 * 0.0 + dVar84);
  param_1[0x121] = (float)(dVar96 + dVar57 + dVar101 * 0.0 + dVar91);
  param_1[0x122] = (float)(dVar62 + dVar71 + dVar80 * 0.0 + dVar47);
  param_1[0x123] = (float)(dVar69 + dVar77 + dVar87 * 0.0 + dVar58);
  param_1[0x124] = (float)(dVar35 + dVar94 + dVar100 * 0.0 + dVar84);
  param_1[0x125] = (float)(dVar1 + dVar97 + dVar101 * 0.0 + dVar91);
  param_1[0x126] = (float)(dVar45 + dVar21 + dVar80 * 0.0 + dVar47);
  param_1[0x127] = (float)(dVar56 + dVar44 + dVar87 * 0.0 + dVar58);
  param_1[0x128] = (float)(dVar100 * dVar64 + dVar95 + dVar83);
  param_1[0x129] = (float)(dVar101 * dVar63 + dVar98 + dVar90);
  param_1[0x12a] = (float)(dVar64 * dVar80 + dVar29 + dVar22);
  param_1[299] = (float)(dVar63 * dVar87 + dVar70 + dVar24);
  param_1[300] = (float)(dVar100 * dVar34 + dVar95 + dVar84);
  param_1[0x12d] = (float)(dVar101 * dVar30 + dVar98 + dVar91);
  param_1[0x12e] = (float)(dVar80 * dVar34 + dVar29 + dVar47);
  param_1[0x12f] = (float)(dVar87 * dVar30 + dVar70 + dVar58);
  param_1[0x572] = 0.0;
  param_1[0x570] = *(float *)((longlong)param_7 + 0xc4);
  fVar9 = *(float *)(param_7 + 0x19) / -100.0 + 1.0;
  param_1[0x571] = fVar9 * fVar9;
  local_590 = param_7;
  local_598 = param_6;
  FUN_1449de3b2(param_1,param_2,param_4,param_5);
  if ((local_e0 ^ (ulonglong)auStack_5b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140471944 FUN_140471944 body=271 status=ok
// SIG undefined FUN_140471944(void)

char FUN_140471944(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0xe0);
  cVar2 = '\x02';
  if (((((plVar3 != (longlong *)0x0) && (*(int *)(param_1 + 0xdc) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
     ((*(int *)(lVar4 + 0x10) == *(int *)(param_1 + 0xdc) &&
      ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
    if (*(char *)(param_1 + 0xec) == '\0') {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(lVar4 + 0x144);
      FUN_140c175ce(lVar4,*(longlong *)(param_1 + 0x48) + 0x80,*(longlong *)(param_1 + 0x48) + 0x540
                   );
      FUN_140c17160(lVar4,&DAT_14cb94c28,*(longlong *)(param_1 + 0x48) + 0x540);
      *(undefined1 *)(param_1 + 0xec) = 1;
      plVar3 = *(longlong **)(param_1 + 0xe0);
    }
    lVar4 = (**(code **)(*plVar3 + 0x10))();
    cVar2 = FUN_140471a54(lVar4,0);
    if ((cVar2 != '\0') && (cVar2 = FUN_145753b2a(lVar4), cVar2 != '\0')) {
      return '\0';
    }
    cVar2 = '\x02' - (*(float *)(param_1 + 0xe8) <= *(float *)(lVar4 + 0x144) &&
                     *(float *)(lVar4 + 0x144) != *(float *)(param_1 + 0xe8));
  }
  return cVar2;
}



// FUNCTION 140471a54 FUN_140471a54 body=815 status=ok
// SIG undefined FUN_140471a54(void)

undefined8 FUN_140471a54(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  wchar_t *pwVar14;
  longlong *plVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x158) == *(int *)(param_1 + 0x184)) {
    if (param_2 == 0) goto LAB_140471bd1;
    pwVar14 = L"No Weapons Equipped";
  }
  else {
    if (*(longlong *)(param_1 + 0x40) == 0) {
LAB_140471d40:
      cVar4 = FUN_148a186be();
      if (cVar4 == '\0') {
        if (param_2 == 0) goto LAB_140471bd1;
        pwVar14 = L"Weapon ticket not available";
        goto LAB_140471c78;
      }
    }
    else if (((*(longlong *)(param_1 + 0x48) != 0) &&
             (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) &&
            (lVar7 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))(), lVar7 != 0)) {
      uVar9 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x40));
      FUN_140a702f6(&local_58,uVar9);
      if (local_50 != (longlong *)0x0) {
        iVar6 = (int)local_50[1];
        do {
          if (iVar6 == 0) {
            plVar15 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar10 = (int)local_50[1];
          bVar21 = iVar6 == iVar10;
          if (bVar21) {
            *(int *)(local_50 + 1) = iVar6 + 1;
            iVar10 = iVar6;
          }
          iVar6 = iVar10;
          UNLOCK();
          plVar15 = local_50;
        } while (!bVar21);
        LOCK();
        piVar1 = (int *)((longlong)local_50 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_50 + 0x10))();
        }
        if (plVar15 != (longlong *)0x0) {
          if (local_58 == 0) {
            cVar4 = '\x01';
          }
          else {
            cVar4 = FUN_140a70784(local_58,lVar7,*(undefined8 *)(param_1 + 0x40),0);
          }
          LOCK();
          plVar2 = plVar15 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar15)();
            LOCK();
            piVar1 = (int *)((longlong)plVar15 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar15 + 0x10))();
            }
          }
          if (cVar4 == '\0') goto LAB_140471d40;
        }
      }
    }
    iVar6 = *(int *)(param_1 + 0x178);
    if (iVar6 == 0) {
      uVar18 = 1;
      uVar20 = 0;
      iVar10 = 0;
      iVar16 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x170);
      if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x160);
      }
      uVar19 = *puVar8;
      if (uVar19 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        uVar20 = 0;
        uVar18 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar18 = uVar20;
        }
        iVar16 = 0;
        do {
          if (uVar18 == uVar20) goto LAB_140471bc8;
          iVar16 = iVar16 + 0x20;
          uVar19 = puVar8[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar19 == 0);
      }
      else {
        uVar20 = 0;
        iVar16 = 0;
      }
      uVar18 = (ulonglong)(-uVar19 & uVar19);
      uVar3 = uVar18 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar10 = (iVar16 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar10) {
        iVar10 = iVar6;
      }
    }
    if (iVar10 != iVar6) {
      uVar19 = 0xffffffff;
      iVar5 = iVar6;
      do {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 8 + (longlong)iVar10 * 0x20);
        if (lVar7 != 0) {
          cVar4 = FUN_140471d84(lVar7,param_2);
          uVar9 = 1;
          if (cVar4 != '\0') goto LAB_140471bd3;
          iVar5 = *(int *)(param_1 + 0x178);
        }
        uVar19 = uVar19 & ~(uint)uVar18;
        puVar8 = *(uint **)(param_1 + 0x170);
        if (*(uint **)(param_1 + 0x170) == (uint *)0x0) {
          puVar8 = (uint *)(param_1 + 0x160);
        }
        iVar10 = (int)uVar20;
        lVar7 = (longlong)iVar10;
        uVar11 = puVar8[lVar7] & uVar19;
        if (uVar11 == 0) {
          iVar12 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar12 = iVar5 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar10) {
            iVar13 = iVar10;
          }
          if (iVar10 < iVar12) {
            lVar17 = 0;
            do {
              uVar11 = puVar8[lVar7 + lVar17 + 1];
              if (uVar11 != 0) {
                uVar20 = (ulonglong)(iVar10 + (int)lVar17 + 1);
                uVar19 = 0xffffffff;
                goto LAB_140471b9f;
              }
              iVar16 = iVar16 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar13 - lVar7 != lVar17);
            uVar19 = 0xffffffff;
            iVar10 = iVar13;
          }
          uVar20 = (ulonglong)(iVar10 + 1);
          iVar10 = iVar5;
        }
        else {
LAB_140471b9f:
          uVar18 = (ulonglong)(-uVar11 & uVar11);
          uVar3 = uVar18 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar10 = (iVar16 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar10) {
            iVar10 = iVar5;
          }
        }
      } while (iVar10 != iVar6);
    }
LAB_140471bc8:
    if ((param_2 == 0) || (1 < *(int *)(param_2 + 8))) goto LAB_140471bd1;
    pwVar14 = L"No viable AIWeaponUseStates found!";
  }
LAB_140471c78:
  FUN_14020fad6(param_2,pwVar14);
LAB_140471bd1:
  uVar9 = 0;
LAB_140471bd3:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140471d84 FUN_140471d84 body=200 status=ok
// SIG undefined FUN_140471d84(void)

undefined8 FUN_140471d84(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  wchar_t *pwVar3;
  longlong *plVar4;
  
  if (*(char *)(param_1 + 0x560) == '\x01') {
    if (param_2 == 0) {
      return 0;
    }
    pwVar3 = L"Weapon Firing Disabled";
  }
  else if ((((*(int *)(param_1 + 0x1c) == 0) || (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0))
           || (DAT_14c9647dc <= (int)uVar1)) ||
          (((plVar4 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0x1c))) ||
           (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 ||
            (plVar4 = (longlong *)*plVar4, plVar4 == (longlong *)0x0)))))) {
    if (param_2 == 0) {
      return 0;
    }
    pwVar3 = L"No Weapon";
  }
  else if (*(longlong *)(param_1 + 0x500) == 0) {
    if (param_2 == 0) {
      return 0;
    }
    pwVar3 = L"No AI Weapon User State";
  }
  else {
    cVar2 = (**(code **)(*plVar4 + 0x810))(plVar4);
    if (cVar2 != '\0') {
      return 1;
    }
    if (param_2 == 0) {
      return 0;
    }
    pwVar3 = L"No Ammo";
  }
  FUN_14020fad6(param_2,pwVar3);
  return 0;
}



// FUNCTION 140471e4c FUN_140471e4c body=332 status=ok
// SIG undefined FUN_140471e4c(void)

void FUN_140471e4c(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + -0x38;
  FUN_1404722a0(lVar1);
  if (*(char *)(param_1 + 0x88) == '\x01') {
    FUN_1413f38e0(lVar1);
  }
  lVar1 = FUN_14047210e(lVar1);
  if (lVar1 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140940982;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146572ba2;
      local_48 = &LAB_148ca13ba;
      local_50 = &LAB_140e51436;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
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



// FUNCTION 140471fae FUN_140471fae body=326 status=ok
// SIG undefined FUN_140471fae(void)

void FUN_140471fae(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  float fVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar2 = *(byte *)(param_2 + 0xbd8);
  fVar8 = 0.0;
  if ((int)(uint)bVar2 < *(int *)(param_2 + 0xbf0)) {
    plVar3 = *(longlong **)
              (*(longlong *)(param_2 + 0xbe8) + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
    if (plVar3 != (longlong *)0x0) {
      fVar8 = (float)(**(code **)(*plVar3 + 0x308))();
    }
  }
  if (ABS(*(float *)(param_1 + 0xc4) - fVar8) <= 1e-08) {
LAB_140472026:
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar7 = FUN_1409715bc(param_1);
  cVar5 = FUN_14011bf50(uVar7);
  if (cVar5 == '\0') goto LAB_140472026;
  FUN_1403adc5e(&local_50,uVar7);
  lVar4 = *(longlong *)(local_50 + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 200));
  *(int *)(lVar4 + 0xc0) = *(int *)(lVar4 + 0xc0) + 1;
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
  if ((fVar8 != *(float *)(lVar4 + 0x60)) || (NAN(fVar8) || NAN(*(float *)(lVar4 + 0x60)))) {
    iVar6 = *(int *)(lVar4 + 100) + 1;
  }
  else {
    if (*(int *)(lVar4 + 100) != 0) goto LAB_1404720bc;
    iVar6 = 1;
  }
  *(float *)(lVar4 + 0x60) = fVar8;
  *(int *)(lVar4 + 100) = iVar6;
LAB_1404720bc:
  *(float *)(param_1 + 0xc4) = fVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 14047210e FUN_14047210e body=400 status=ok
// SIG undefined FUN_14047210e(void)

longlong FUN_14047210e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  lVar2 = *(longlong *)(param_1 + 0x20);
  if (lVar2 != 0) {
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar1 = (**(code **)(*(longlong *)(lVar2 + 0x3c20) + 0x18))(lVar2 + 0x3c20);
      if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 == 0)) {
        if (*(int *)(lVar2 + 0x6190) < 1) goto LAB_1404721f0;
        lVar2 = *(longlong *)(lVar2 + 0x6188);
      }
      else {
        lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x510) + 0x18))(lVar1 + 0x510);
        if (*(int *)(lVar2 + 0xa8) < 1) goto LAB_1404721f0;
        lVar2 = *(longlong *)(lVar2 + 0xa0);
      }
      lVar2 = *(longlong *)(lVar2 + 0x20);
      if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_1404721aa;
    }
  }
LAB_1404721f0:
  lVar2 = 0;
LAB_1404721aa:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404722a0 FUN_1404722a0 body=698 status=ok
// SIG undefined FUN_1404722a0(void)

void FUN_1404722a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  float fVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(int *)(param_1 + 0x94) == 0) || (uVar3 = *(uint *)(param_1 + 0x90), (int)uVar3 < 0)) ||
     (DAT_14c9647dc <= (int)uVar3)) goto LAB_140472306;
  puVar10 = (undefined8 *)
            ((ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
  if (((puVar10 == (undefined8 *)0x0) || (*(int *)(puVar10 + 2) != *(int *)(param_1 + 0x94))) ||
     ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)) goto LAB_140472306;
  if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
    uVar9 = *puVar10;
  }
  else {
    uVar9 = 0;
  }
  fVar11 = (float)FUN_140086a76(uVar9);
  if (*(int *)(param_1 + 0x94) == 0) {
LAB_140472510:
    lVar7 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x90);
    lVar7 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x94) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) goto LAB_140472510;
      lVar7 = *plVar8;
    }
  }
  iVar4 = *(int *)(lVar7 + 0xc4);
  if (1e-08 < ABS(*(float *)(param_1 + 0x98) - fVar11)) {
    uVar9 = FUN_1409715bc(param_1);
    cVar5 = FUN_14011bf50(uVar9);
    if (cVar5 == '\0') goto LAB_140472306;
    FUN_1403adc5e(&local_50,uVar9);
    lVar7 = *(longlong *)(local_50 + 0xa0);
    AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 200));
    plVar8 = local_48;
    *(int *)(lVar7 + 0xc0) = *(int *)(lVar7 + 0xc0) + 1;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if ((fVar11 != *(float *)(lVar7 + 0x68)) || (NAN(fVar11) || NAN(*(float *)(lVar7 + 0x68)))) {
      iVar6 = *(int *)(lVar7 + 0x6c) + 1;
LAB_1404724f0:
      *(float *)(lVar7 + 0x68) = fVar11;
      *(int *)(lVar7 + 0x6c) = iVar6;
    }
    else if (*(int *)(lVar7 + 0x6c) == 0) {
      iVar6 = 1;
      goto LAB_1404724f0;
    }
    *(float *)(param_1 + 0x98) = fVar11;
    ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 200));
  }
  if (*(int *)(param_1 + 0x9c) == iVar4) {
LAB_140472306:
    if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  uVar9 = FUN_1409715bc(param_1);
  cVar5 = FUN_14011bf50(uVar9);
  if (cVar5 == '\0') goto LAB_140472306;
  FUN_1403adc5e(&local_50,uVar9);
  lVar7 = *(longlong *)(local_50 + 0xa0);
  AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 200));
  *(int *)(lVar7 + 0xc0) = *(int *)(lVar7 + 0xc0) + 1;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_48 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if (iVar4 == *(int *)(lVar7 + 0xb8)) {
    if (*(int *)(lVar7 + 0xbc) != 0) goto LAB_14047245a;
    iVar6 = 1;
  }
  else {
    iVar6 = *(int *)(lVar7 + 0xbc) + 1;
  }
  *(int *)(lVar7 + 0xb8) = iVar4;
  *(int *)(lVar7 + 0xbc) = iVar6;
LAB_14047245a:
  *(int *)(param_1 + 0x9c) = iVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
}



// FUNCTION 140472574 FUN_140472574 body=118 status=ok
// SIG undefined FUN_140472574(void)

undefined8 FUN_140472574(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
    do {
      *(undefined2 *)(param_2 + -0x40) = *(undefined2 *)(param_3 + -0x40);
      *(undefined8 *)(param_2 + -0x48) = *(undefined8 *)(param_3 + -0x48);
      uVar1 = *(undefined4 *)(param_3 + -0x34);
      uVar2 = *(undefined4 *)(param_3 + -0x30);
      uVar3 = *(undefined4 *)(param_3 + -0x2c);
      uVar4 = *(undefined4 *)(param_3 + -0x28);
      uVar5 = *(undefined4 *)(param_3 + -0x24);
      uVar6 = *(undefined4 *)(param_3 + -0x20);
      uVar7 = *(undefined4 *)(param_3 + -0x1c);
      uVar8 = *(undefined4 *)(param_3 + -0x18);
      uVar9 = *(undefined4 *)(param_3 + -0x14);
      uVar10 = *(undefined4 *)(param_3 + -0x10);
      uVar11 = *(undefined4 *)(param_3 + -0xc);
      *(undefined4 *)(param_2 + -0x38) = *(undefined4 *)(param_3 + -0x38);
      *(undefined4 *)(param_2 + -0x34) = uVar1;
      *(undefined4 *)(param_2 + -0x30) = uVar2;
      *(undefined4 *)(param_2 + -0x2c) = uVar3;
      *(undefined4 *)(param_2 + -0x28) = uVar4;
      *(undefined4 *)(param_2 + -0x24) = uVar5;
      *(undefined4 *)(param_2 + -0x20) = uVar6;
      *(undefined4 *)(param_2 + -0x1c) = uVar7;
      *(undefined4 *)(param_2 + -0x18) = uVar8;
      *(undefined4 *)(param_2 + -0x14) = uVar9;
      *(undefined4 *)(param_2 + -0x10) = uVar10;
      *(undefined4 *)(param_2 + -0xc) = uVar11;
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_1404725ea(param_2,param_3);
      param_3 = param_3 + 0xe78;
      param_2 = param_2 + 0xe78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1404725ea FUN_1404725ea body=462 status=ok
// SIG undefined FUN_1404725ea(void)

longlong FUN_1404725ea(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  longlong lVar10;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_1404306dc(param_1 + 0x20,param_2 + 0x20);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar7;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_140430734(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 100) == '\x01') {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
      uVar9 = 1;
    }
    else {
      if (*(char *)(param_1 + 100) != '\x01') goto LAB_140472658;
      uVar9 = 0;
    }
    *(undefined1 *)(param_1 + 100) = uVar9;
  }
LAB_140472658:
  FUN_14043078c(param_1 + 0x68,param_2 + 0x68);
  FUN_1404307f4(param_1 + 0x100,param_2 + 0x100);
  FUN_140472e4a(param_1 + 0x130,param_2 + 0x130);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x140);
  lVar10 = 0x148;
  do {
    FUN_1404729c8(param_1 + lVar10,param_2 + lVar10);
    lVar10 = lVar10 + 0x1e8;
  } while (lVar10 != 0xad0);
  uVar3 = *(undefined8 *)(param_2 + 0xad0);
  uVar8 = *(undefined8 *)(param_2 + 0xad8);
  uVar5 = *(undefined4 *)(param_2 + 0xae4);
  uVar6 = *(undefined4 *)(param_2 + 0xae8);
  uVar7 = *(undefined4 *)(param_2 + 0xaec);
  *(undefined4 *)(param_1 + 0xae0) = *(undefined4 *)(param_2 + 0xae0);
  *(undefined4 *)(param_1 + 0xae4) = uVar5;
  *(undefined4 *)(param_1 + 0xae8) = uVar6;
  *(undefined4 *)(param_1 + 0xaec) = uVar7;
  *(undefined8 *)(param_1 + 0xad0) = uVar3;
  *(undefined8 *)(param_1 + 0xad8) = uVar8;
  *(undefined4 *)(param_1 + 0xaf0) = *(undefined4 *)(param_2 + 0xaf0);
  if (param_2 != param_1) {
    lVar10 = param_2 + 0xaf8;
    if (*(longlong *)(param_2 + 0xd98) != 0) {
      lVar10 = *(longlong *)(param_2 + 0xd98);
    }
    FUN_140472888(param_1 + 0xaf8,lVar10,*(undefined4 *)(param_2 + 0xda0),
                  *(undefined4 *)(param_1 + 0xda4));
  }
  FUN_1404727b8(param_1 + 0xda8,param_2 + 0xda8);
  FUN_1404727b8(param_1 + 0xdd8,param_2 + 0xdd8);
  uVar3 = *(undefined8 *)(param_2 + 0xe08);
  lVar10 = *(longlong *)(param_2 + 0xe10);
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xe10);
  *(undefined8 *)(param_1 + 0xe08) = uVar3;
  *(longlong *)(param_1 + 0xe10) = lVar10;
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
  uVar3 = *(undefined8 *)(param_2 + 0xe20);
  *(undefined8 *)(param_1 + 0xe18) = *(undefined8 *)(param_2 + 0xe18);
  *(undefined8 *)(param_1 + 0xe20) = uVar3;
  return param_1;
}



// FUNCTION 1404727b8 FUN_1404727b8 body=106 status=ok
// SIG undefined FUN_1404727b8(void)

void * FUN_1404727b8(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
    }
    else {
      FUN_140472822(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 140472822 FUN_140472822 body=101 status=ok
// SIG undefined FUN_140472822(void)

void FUN_140472822(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((param_2 != 0) && (iVar3 = 4, 4 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if ((int)param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1456c2f56(param_1,0,iVar3,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x2c) = param_3;
  return;
}



// FUNCTION 140472888 FUN_140472888 body=95 status=ok
// SIG undefined FUN_140472888(void)

void FUN_140472888(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  
  *(int *)(param_1 + 0x2a8) = param_3;
  if (param_4 != 0 || param_3 != 0) {
    FUN_140472950(param_1,param_3,param_4);
    lVar1 = *(longlong *)(param_1 + 0x2a0);
    if (*(longlong *)(param_1 + 0x2a0) == 0) {
      lVar1 = param_1;
    }
    FUN_1404728e7(lVar1,param_2,param_3);
    return;
  }
  *(undefined4 *)(param_1 + 0x2ac) = 4;
  return;
}



// FUNCTION 1404728e7 FUN_1404728e7 body=104 status=ok
// SIG undefined FUN_1404728e7(void)

void FUN_1404728e7(longlong param_1,longlong param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined1 *)(param_1 + -8) = *(undefined1 *)(param_2 + -8);
      FUN_140559f72(param_1,param_2);
      uVar1 = *(undefined4 *)(param_2 + 0x84);
      uVar2 = *(undefined4 *)(param_2 + 0x88);
      uVar3 = *(undefined4 *)(param_2 + 0x8c);
      uVar4 = *(undefined4 *)(param_2 + 0x90);
      uVar5 = *(undefined4 *)(param_2 + 0x94);
      uVar6 = *(undefined4 *)(param_2 + 0x98);
      uVar7 = *(undefined4 *)(param_2 + 0x9c);
      *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
      *(undefined4 *)(param_1 + 0x84) = uVar1;
      *(undefined4 *)(param_1 + 0x88) = uVar2;
      *(undefined4 *)(param_1 + 0x8c) = uVar3;
      *(undefined4 *)(param_1 + 0x90) = uVar4;
      *(undefined4 *)(param_1 + 0x94) = uVar5;
      *(undefined4 *)(param_1 + 0x98) = uVar6;
      *(undefined4 *)(param_1 + 0x9c) = uVar7;
      param_1 = param_1 + 0xa8;
      param_2 = param_2 + 0xa8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140472950 FUN_140472950 body=120 status=ok
// SIG undefined FUN_140472950(void)

void FUN_140472950(longlong param_1,uint param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((param_2 != 0) && (iVar4 = 4, 4 < param_2)) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 * 0xa8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_14055a22a(param_1,0,iVar4,0xa8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0x2ac) = param_3;
  return;
}



// FUNCTION 1404729c8 FUN_1404729c8 body=790 status=ok
// SIG undefined FUN_1404729c8(void)

longlong FUN_1404729c8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  longlong lVar13;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  lVar13 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x28);
    }
  }
  bVar12 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x28) = lVar13;
  lVar13 = *(longlong *)(param_2 + 0x30);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x30);
      bVar12 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x30) = lVar13;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  *(undefined1 *)(param_1 + 0x42) = *(undefined1 *)(param_2 + 0x42);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x7d) = *(undefined8 *)(param_2 + 0x7d);
  uVar1 = *(undefined4 *)(param_2 + 0x60);
  uVar2 = *(undefined4 *)(param_2 + 100);
  uVar3 = *(undefined4 *)(param_2 + 0x68);
  uVar4 = *(undefined4 *)(param_2 + 0x6c);
  uVar5 = *(undefined4 *)(param_2 + 0x74);
  uVar6 = *(undefined4 *)(param_2 + 0x78);
  uVar7 = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = uVar5;
  *(undefined4 *)(param_1 + 0x78) = uVar6;
  *(undefined4 *)(param_1 + 0x7c) = uVar7;
  *(undefined4 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(undefined4 *)(param_1 + 0x68) = uVar3;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_2 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  lVar13 = *(longlong *)(param_2 + 0xa0);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0xa0);
    }
  }
  *(longlong *)(param_1 + 0xa0) = lVar13;
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  uVar9 = *(undefined8 *)(param_2 + 0xb0);
  uVar10 = *(undefined8 *)(param_2 + 0xb8);
  uVar11 = *(undefined8 *)(param_2 + 0xc0);
  uVar1 = *(undefined4 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar5 = *(undefined4 *)(param_2 + 0xd6);
  uVar6 = *(undefined4 *)(param_2 + 0xda);
  uVar7 = *(undefined4 *)(param_2 + 0xde);
  *(undefined4 *)(param_1 + 0xd2) = *(undefined4 *)(param_2 + 0xd2);
  *(undefined4 *)(param_1 + 0xd6) = uVar5;
  *(undefined4 *)(param_1 + 0xda) = uVar6;
  *(undefined4 *)(param_1 + 0xde) = uVar7;
  *(undefined4 *)(param_1 + 200) = uVar1;
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0xd0) = uVar3;
  *(undefined4 *)(param_1 + 0xd4) = uVar4;
  *(undefined8 *)(param_1 + 0xb8) = uVar10;
  *(undefined8 *)(param_1 + 0xc0) = uVar11;
  *(undefined8 *)(param_1 + 0xa8) = uVar8;
  *(undefined8 *)(param_1 + 0xb0) = uVar9;
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0xf0);
  *(undefined2 *)(param_1 + 0xf8) = *(undefined2 *)(param_2 + 0xf8);
  uVar1 = *(undefined4 *)(param_2 + 0x104);
  uVar2 = *(undefined4 *)(param_2 + 0x108);
  uVar3 = *(undefined4 *)(param_2 + 0x10c);
  uVar4 = *(undefined4 *)(param_2 + 0x110);
  uVar5 = *(undefined4 *)(param_2 + 0x114);
  uVar6 = *(undefined4 *)(param_2 + 0x118);
  uVar7 = *(undefined4 *)(param_2 + 0x11c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_2 + 0x100);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x108) = uVar2;
  *(undefined4 *)(param_1 + 0x10c) = uVar3;
  *(undefined4 *)(param_1 + 0x110) = uVar4;
  *(undefined4 *)(param_1 + 0x114) = uVar5;
  *(undefined4 *)(param_1 + 0x118) = uVar6;
  *(undefined4 *)(param_1 + 0x11c) = uVar7;
  *(undefined8 *)(param_1 + 0x11d) = *(undefined8 *)(param_2 + 0x11d);
  FUN_140472d3c(param_1 + 0x128,param_2 + 0x128);
  FUN_140472cde(param_1 + 0x138,param_2 + 0x138);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x148);
  lVar13 = *(longlong *)(param_2 + 0x150);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x150);
    }
  }
  bVar12 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x150) = lVar13;
  uVar1 = *(undefined4 *)(param_2 + 0x158);
  uVar2 = *(undefined4 *)(param_2 + 0x15c);
  uVar3 = *(undefined4 *)(param_2 + 0x160);
  uVar4 = *(undefined4 *)(param_2 + 0x164);
  uVar5 = *(undefined4 *)(param_2 + 0x16c);
  uVar6 = *(undefined4 *)(param_2 + 0x170);
  uVar7 = *(undefined4 *)(param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x168);
  *(undefined4 *)(param_1 + 0x16c) = uVar5;
  *(undefined4 *)(param_1 + 0x170) = uVar6;
  *(undefined4 *)(param_1 + 0x174) = uVar7;
  *(undefined4 *)(param_1 + 0x158) = uVar1;
  *(undefined4 *)(param_1 + 0x15c) = uVar2;
  *(undefined4 *)(param_1 + 0x160) = uVar3;
  *(undefined4 *)(param_1 + 0x164) = uVar4;
  lVar13 = *(longlong *)(param_2 + 0x178);
  if ((bVar12 & 1) != 0) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x178);
    }
  }
  *(longlong *)(param_1 + 0x178) = lVar13;
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined2 *)(param_1 + 400) = *(undefined2 *)(param_2 + 400);
  uVar1 = *(undefined4 *)(param_2 + 0x19c);
  uVar2 = *(undefined4 *)(param_2 + 0x1a0);
  uVar3 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_2 + 0x198);
  *(undefined4 *)(param_1 + 0x19c) = uVar1;
  *(undefined4 *)(param_1 + 0x1a0) = uVar2;
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  *(undefined2 *)(param_1 + 0x1a8) = *(undefined2 *)(param_2 + 0x1a8);
  FUN_140472df2(param_1 + 0x1b0,param_2 + 0x1b0);
  FUN_140472d9a(param_1 + 0x1c0,param_2 + 0x1c0);
  *(undefined1 *)(param_1 + 0x1d0) = *(undefined1 *)(param_2 + 0x1d0);
  lVar13 = *(longlong *)(param_2 + 0x1d8);
  if (DAT_14c950c29 == 1) {
    if (lVar13 == 0) {
      lVar13 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar13 = *(longlong *)(param_2 + 0x1d8);
    }
  }
  *(longlong *)(param_1 + 0x1d8) = lVar13;
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  return param_1;
}



// FUNCTION 140472cde FUN_140472cde body=93 status=ok
// SIG undefined FUN_140472cde(void)

undefined8 * FUN_140472cde(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1448d844e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140276ede(param_1,iVar1);
      FUN_1448d848f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140472d3c FUN_140472d3c body=93 status=ok
// SIG undefined FUN_140472d3c(void)

undefined8 * FUN_140472d3c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140280a77(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474d0c00(param_1,iVar1);
      FUN_1474d0c6f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140472d9a FUN_140472d9a body=88 status=ok
// SIG undefined FUN_140472d9a(void)

undefined8 * FUN_140472d9a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14735390a(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 5);
      }
    }
  }
  return param_1;
}



// FUNCTION 140472df2 FUN_140472df2 body=88 status=ok
// SIG undefined FUN_140472df2(void)

undefined8 * FUN_140472df2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1408f8e5c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 140472e4a FUN_140472e4a body=306 status=ok
// SIG undefined FUN_140472e4a(void)

void FUN_140472e4a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140472ed3;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_140472eac:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_140472eac;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140472ed3;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140472ed3:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140472f7e FUN_140472f7e body=655 status=ok
// SIG undefined FUN_140472f7e(void)

undefined8 FUN_140472f7e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  code *local_70;
  undefined1 *local_68;
  undefined2 **local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined2 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 4) == 0) goto LAB_140472fb5;
    lVar4 = FUN_14479d2ce(param_3 + 2);
    if (lVar4 == 0) {
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
    }
    else {
      lVar4 = FUN_14479d2ce(param_3 + 2);
      local_40 = *(undefined8 *)(lVar4 + 0x18);
      FUN_1400021e4(&local_40,&local_58);
    }
    FUN_14021219d(param_2,&local_58);
  }
  else {
    local_58 = (undefined2 *)0x0;
    uStack_50 = 0;
    FUN_14021219d(param_2,&local_58);
    puVar7 = local_58;
    if ((int)uStack_50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    if (DAT_14c948fa0 == 0) {
      local_48 = &DAT_1427db2a2;
      lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar4;
      FUN_1446f470e(&local_40,L"ScriptStruct",1);
      local_68 = &LAB_1468915ce;
      local_70 = FUN_1427dc742;
      local_80 = L"Engine";
      local_78 = 199;
      local_88 = 0x10;
      local_90 = 0x10000020;
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,8);
      local_60 = &local_48;
      FUN_14574b4b2(lVar4);
      DAT_14c948fa0 = lVar4;
      uVar2 = FUN_1446f8646();
      lVar4 = DAT_14c948fa0;
      uVar3 = FUN_1449e2fb2();
      local_98 = L"ScriptStruct";
      FUN_14574b446(uVar3,lVar4,uVar2,L"/Script/CoreUObject");
    }
    local_98 = (wchar_t *)0x0;
    lVar4 = FUN_140277cc4(DAT_14c948fa0,puVar7,0,0);
    if (*param_3 != 0) {
      if (*(int *)((longlong)param_3 + 0x14) == 0) {
LAB_1404730d2:
        lVar5 = 0;
      }
      else {
        uVar1 = *(uint *)(param_3 + 2);
        lVar5 = 0;
        if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
          plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if ((plVar6 == (longlong *)0x0) ||
             (((int)plVar6[2] != *(int *)((longlong)param_3 + 0x14) ||
              ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))) goto LAB_1404730d2;
          lVar5 = *plVar6;
        }
      }
      if (lVar5 == lVar4) goto LAB_14047306e;
    }
    FUN_140005f6c(param_3,lVar4,0,0);
  }
LAB_14047306e:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140472fb5:
  if ((longlong *)*param_3 != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)*param_3 + 8))();
    FUN_14047320e(uVar2,param_2,*param_3,0);
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 14047320e FUN_14047320e body=659 status=ok
// SIG undefined FUN_14047320e(void)

void FUN_14047320e(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined **local_1d8;
  longlong *local_1d0;
  undefined ***local_1c8;
  undefined ****local_1c0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1d8 = &PTR_FUN_149e37810;
  local_1c8 = &local_1d8;
  uVar1 = *(uint *)(param_1 + 0x16);
  local_1d0 = param_2;
  local_1c0 = &local_1c8;
  if (((*(byte *)(param_2 + 5) & 5) == 0) || ((*(byte *)(param_2 + 5) & 0x20) != 0)) {
    bVar4 = (byte)(uVar1 >> 0xb) & 1;
    cVar6 = '\x01';
LAB_140473298:
    if (*(code **)(*param_2 + 0x198) != (code *)&DAT_1446f2e52) {
      (**(code **)(*param_2 + 0x198))(param_2,param_1);
    }
  }
  else {
    cVar6 = (char)((uVar1 & 0x20) >> 5);
    bVar4 = (byte)(uVar1 >> 0xb) & 1;
    if ((uVar1 & 0x820) != 0) goto LAB_140473298;
  }
  if (bVar4 != 0) {
    plVar2 = (longlong *)param_1[0x17];
    if ((*(code **)(*plVar2 + 8) == (code *)&LAB_1446f2e54) ||
       ((**(code **)(*plVar2 + 8))(plVar2,local_1e8), (local_1dc & 0x10) != 0)) {
      pcVar3 = *(code **)(*plVar2 + 0x28);
      if (pcVar3 == FUN_14483fc74) {
        cVar5 = FUN_14483fc74(plVar2,&local_1c8,param_3);
      }
      else if (pcVar3 == FUN_14483fe0e) {
        cVar5 = FUN_14483fe0e(plVar2,&local_1c8,param_3);
      }
      else {
        cVar5 = (*pcVar3)(plVar2,&local_1c8,param_3);
      }
    }
    else {
      cVar5 = (**(code **)(*plVar2 + 0x30))(plVar2,local_1c8[1],param_3);
    }
    if (cVar5 != '\0') goto LAB_140473307;
  }
  if (cVar6 == '\0') {
    local_1f8 = param_4;
    if (*(code **)(*param_1 + 0x2d0) == FUN_145705cf0) {
      if (((ulonglong)local_1c8[1][5] & 0x40) == 0) {
        FUN_140131bdc(param_1,&local_1c8,param_3,param_1);
      }
      else {
        FUN_14483d664(param_1,&local_1c8,param_3,param_1);
      }
    }
    else {
      local_1f0 = 0;
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_1c8,param_3,param_1);
    }
  }
  else if (((((*(byte *)((longlong)param_2 + 0x29) & 1) == 0) &&
            (*(int *)((longlong)param_2 + 0x34) != 0)) && ((*(byte *)(param_1 + 0x16) & 0x10) == 0))
          && ((*(byte *)((longlong)param_2 + 0x2c) & 1) == 0)) {
    local_1f8 = param_1;
    FUN_146891080(param_1,&local_1c8,param_3,param_4);
  }
  else {
    (**(code **)(*param_1 + 0x2c0))(param_1,&local_1c8,param_3);
  }
LAB_140473307:
  if ((*(byte *)((longlong)param_1 + 0xb2) & 4) != 0) {
    (**(code **)(*(longlong *)param_1[0x17] + 0x38))((longlong *)param_1[0x17],param_2,param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404734aa FUN_1404734aa body=213 status=ok
// SIG undefined FUN_1404734aa(void)

undefined8 *
FUN_1404734aa(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11)

{
  char cVar1;
  
  FUN_140473580(param_1,param_3,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  *param_1 = &PTR_FUN_14a1617f0;
  param_1[0xb] = &PTR_FUN_14a161818;
  cVar1 = FUN_140473682(DAT_14c9a0260,param_1 + 0xb,param_2,param_3,param_4,
                        *(undefined4 *)(param_1 + 0xf),param_1[0x10],param_8);
  if (cVar1 == '\0') {
    *(undefined1 *)((longlong)param_1 + 0xa4) = 0;
    FUN_14009bf40(param_1);
    *(undefined1 *)((longlong)param_1 + 0x51) = 1;
  }
  return param_1;
}



// FUNCTION 140473580 FUN_140473580 body=257 status=ok
// SIG undefined FUN_140473580(void)

undefined8 *
FUN_140473580(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,longlong param_7,undefined1 param_8,
             undefined8 param_9)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_149e064f0;
  param_1[2] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  *(bool *)((longlong)param_1 + 0x55) = param_7 != 0;
  if (param_3 != 0) {
    FUN_14274e1bc(param_1 + 2,param_3);
    lVar1 = -1;
    if ((*(byte *)((longlong)param_1 + 0x54) & 1) != 0) goto LAB_140473608;
  }
  lVar1 = param_7;
LAB_140473608:
  param_1[1] = lVar1;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *param_1 = &PTR_FUN_14a161750;
  param_1[0xb] = &PTR_FUN_14a161778;
  param_1[0xf] = param_4;
  param_1[0x10] = param_5;
  param_1[0x11] = 0;
  param_1[0x12] = param_9;
  param_1[0x13] = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_6;
  *(undefined2 *)((longlong)param_1 + 0xa4) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xa6) = param_8;
  return param_1;
}



// FUNCTION 140473682 FUN_140473682 body=2488 status=ok
// SIG undefined FUN_140473682(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140473682(ulonglong *param_1,ulonglong param_2,ulonglong param_3,code *param_4,
                       undefined8 param_5,ulonglong param_6,ulonglong param_7,undefined4 param_8)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  code *pcVar13;
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  ulonglong local_160;
  undefined4 local_158;
  undefined4 local_150;
  code **local_148;
  undefined4 local_134;
  LPCRITICAL_SECTION local_130;
  longlong local_128;
  ulonglong *local_120;
  short local_112;
  ulonglong uStack_110;
  int local_104;
  code *local_100;
  ulonglong **local_f8;
  code *local_f0;
  ulonglong **local_e8;
  ulonglong *local_e0;
  ulonglong *local_d8;
  ulonglong local_d0;
  longlong local_c8;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 1);
  EnterCriticalSection(lpCriticalSection);
  uStack_110 = param_3;
  local_100 = param_4;
  if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
    uVar6 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    puVar14 = param_1 + 0x12;
    if ((ulonglong *)param_1[0x13] != (ulonglong *)0x0) {
      puVar14 = (ulonglong *)param_1[0x13];
    }
    iVar11 = *(int *)((longlong)puVar14 +
                     (ulonglong)((int)param_1[0x14] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar11 != -1) {
      do {
        puVar14 = (ulonglong *)(param_1[0xb] + (longlong)iVar11 * 0x18);
        if (*puVar14 == param_3) {
          if (puVar14 != (ulonglong *)0x0) {
            puVar14 = puVar14 + 1;
            goto LAB_1404737bb;
          }
          break;
        }
        iVar11 = (int)puVar14[2];
      } while (iVar11 != -1);
    }
  }
  if (*(char *)(param_3 + 0x259) != '\0') {
    FUN_1400021e4(&local_100,&local_f0);
    pcVar13 = local_f0;
    if ((int)local_e8 == 0) {
      pcVar13 = (code *)&DAT_149dfb77a;
    }
    lVar9 = (**(code **)(*(longlong *)*param_1 + 0x178))((longlong *)*param_1,pcVar13);
    if (lVar9 == 0) {
      puVar14 = (ulonglong *)0x0;
    }
    else {
      local_168 = param_5;
      FUN_142b10230(&local_e0,param_3,lVar9,param_4);
      iVar11 = (int)param_1[0x16];
      *(uint *)(param_1 + 0x16) = iVar11 + 1U;
      if (*(uint *)((longlong)param_1 + 0xb4) < iVar11 + 1U) {
        FUN_14629f712(param_1 + 0x15,iVar11);
      }
      uVar16 = param_1[0x15];
      lVar9 = (longlong)iVar11 * 0x98;
      memcpy((void *)(uVar16 + lVar9),&local_e0,0x84);
      *(undefined8 *)(uVar16 + 0x88 + lVar9) = local_58;
      *(undefined8 *)(uVar16 + 0x90 + lVar9) = local_50;
      local_112 = (short)(int)param_1[0x16] + -1;
      local_d8 = (ulonglong *)&local_112;
      local_e0 = &uStack_110;
      FUN_145db17a6(param_1 + 0xb,&local_104,&local_e0);
      uVar16 = param_1[0xb];
      puVar14 = param_1 + 0x2b;
      lVar9 = (ulonglong)*(ushort *)(uVar16 + 8 + (longlong)local_104 * 0x18) * 0x98 + param_1[0x15]
      ;
      if ((int)param_1[0x2c] == 0) {
        *(undefined4 *)(param_1 + 0x2c) = 1;
        if (*(int *)((longlong)param_1 + 0x164) == 0) {
          FUN_14629f7a4(puVar14,0);
        }
        puVar3 = (undefined8 *)*puVar14;
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      if (DAT_14c9a0268 == '\0') {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar5 = FUN_14054d46e(&DAT_14c846b20,L"CachePerPak");
        if (cVar5 != '\0') {
          DAT_14c9a0000 = 1;
        }
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar5 = FUN_14054d46e(&DAT_14c846b20,L"NewTrimCache");
        if (cVar5 != '\0') {
          DAT_14c9a0018 = 1;
        }
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        FUN_141369f9a(&DAT_14c846b20,L"PakCacheMaxBlockMemory=",&DAT_14c75f5f8);
        DAT_14c9a0268 = '\x01';
      }
      lVar12 = *(longlong *)(lVar9 + 8);
      if ((*(char *)(lVar12 + 0x250) == '\x01') || (DAT_14c9a0000 != 0)) {
        iVar11 = (int)param_1[0x2c];
        *(int *)(lVar12 + 0x254) = iVar11;
        *(int *)(param_1 + 0x2c) = iVar11 + 1;
        if (*(int *)((longlong)param_1 + 0x164) == iVar11) {
          FUN_14629f7a4(puVar14,iVar11);
        }
        puVar3 = (undefined8 *)(*puVar14 + (longlong)iVar11 * 0x10);
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      else {
        *(undefined4 *)(lVar12 + 0x254) = 0;
      }
      pcVar13 = local_f0;
      if ((int)local_e8 == 0) {
        pcVar13 = (code *)&DAT_149dfb77a;
      }
      FUN_142b0a02c(&local_e0,pcVar13);
      puVar1 = local_d8;
      *(ulonglong **)(lVar9 + 0x88) = local_e0;
      local_e0 = (ulonglong *)0x0;
      puVar14 = *(ulonglong **)(lVar9 + 0x90);
      if (local_d8 == puVar14) {
LAB_140473f16:
        puVar14 = local_d8;
        if (local_d8 != (ulonglong *)0x0) {
          LOCK();
          puVar1 = local_d8 + 1;
          *(int *)puVar1 = (int)*puVar1 + -1;
          UNLOCK();
          if ((int)*puVar1 == 0) {
            (**(code **)*local_d8)(local_d8);
            LOCK();
            piVar2 = (int *)((longlong)puVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar14 + 0x10))(puVar14);
            }
          }
        }
      }
      else {
        local_d8 = (ulonglong *)0x0;
        *(ulonglong **)(lVar9 + 0x90) = puVar1;
        if (puVar14 != (ulonglong *)0x0) {
          LOCK();
          puVar1 = puVar14 + 1;
          *(int *)puVar1 = (int)*puVar1 + -1;
          UNLOCK();
          if ((int)*puVar1 == 0) {
            (**(code **)*puVar14)(puVar14);
            LOCK();
            piVar2 = (int *)((longlong)puVar14 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*puVar14 + 0x10))(puVar14);
            }
          }
          goto LAB_140473f16;
        }
      }
      puVar14 = (ulonglong *)(uVar16 + (longlong)local_104 * 0x18 + 8);
    }
    if (local_f0 != (code *)0x0) {
      FUN_1400020a8();
    }
LAB_1404737bb:
    if (puVar14 != (ulonglong *)0x0) {
      *(int *)(param_1 + 0x4f) = (int)param_1[0x4f] + 1;
      uVar16 = *puVar14;
      local_120 = param_1 + 0x17;
      iVar11 = (int)param_1[0x1a];
      local_130 = lpCriticalSection;
      if ((longlong)iVar11 == 0) {
        uVar6 = (uint)param_1[0x18];
        *(uint *)(param_1 + 0x18) = uVar6 + 1;
        if (*(uint *)((longlong)param_1 + 0xc4) < uVar6 + 1) {
          FUN_140b25198(local_120,uVar6);
        }
      }
      else {
        uVar6 = *(uint *)((param_1[0x19] - 4) + (longlong)iVar11 * 4);
        *(int *)(param_1 + 0x1a) = iVar11 + -1;
        FUN_14479f406(param_1 + 0x19);
      }
      uVar17 = param_1[0x17];
      lVar9 = (longlong)(int)uVar6 * 0x30;
      puVar3 = (undefined8 *)(uVar17 + 0x1c + lVar9);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3 = (undefined8 *)(uVar17 + 0x10 + lVar9);
      *puVar3 = 0;
      puVar3[1] = 0;
      *(undefined8 *)(uVar17 + lVar9) = 0;
      ((undefined8 *)(uVar17 + lVar9))[1] = 0;
      *(undefined4 *)(uVar17 + 0x2c + lVar9) = 1;
      uVar6 = uVar6 | (uint)param_1[0x1b];
      local_d8 = &uStack_110;
      uStack_110 = CONCAT44(uStack_110._4_4_,uVar6);
      lVar12 = (longlong)(int)(~*(uint *)((longlong)param_1 + 0xdc) & uVar6) * 0x30;
      lVar9 = param_1[0x17] + lVar12;
      puVar14 = (ulonglong *)(param_1[0x17] + lVar12);
      local_e0 = puVar14 + 3;
      *puVar14 = (ulonglong)(ushort)uVar16 << 0x30 | param_6;
      puVar14[1] = param_7;
      *(undefined4 *)(puVar14 + 5) = param_8;
      *(undefined4 *)((longlong)puVar14 + 0x2c) = 1;
      puVar14[2] = param_2;
      uVar16 = param_1[7];
      param_1[7] = uVar16 + 1;
      *local_e0 = uVar16;
      *(uint *)(puVar14 + 4) = uVar6;
      *(ulonglong *)(param_2 + 8) = *puVar14;
      *(ulonglong *)(param_2 + 0x10) = *local_e0;
      *(uint *)(param_2 + 0x18) = uVar6;
      FUN_1402eaea6(param_1 + 0x21,&local_f0,&local_e0,0);
      LOCK();
      *(int *)(param_1 + 10) = (int)param_1[10] + 1;
      UNLOCK();
      local_134 = (undefined4)uStack_110;
      uVar16 = *puVar14;
      puVar14 = (ulonglong *)((uVar16 >> 0x30) * 0x98 + param_1[0x15]);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9a0280) && (FUN_144b3d300(&DAT_14c9a0280), DAT_14c9a0280 == -1))
      {
        DAT_14c9a0270 = 0;
        _DAT_14c9a0278 = 0;
        atexit((_func_5014 *)&LAB_142b102ed);
        _Init_thread_footer(&DAT_14c9a0280);
      }
      uVar17 = uVar16 & 0xffffffff0000;
      uVar16 = (uVar16 & 0xffffffffffff) + *(longlong *)(lVar9 + 8) + 0xffff;
      lVar10 = (uVar16 | 0xffff) - uVar17;
      lVar12 = lVar10 + 0xffff;
      if (-1 < lVar10) {
        lVar12 = lVar10;
      }
      uVar6 = (uint)((ulonglong)lVar12 >> 0x10);
      uVar7 = uVar6 + 0x3f;
      uVar15 = uVar7 >> 6;
      iVar11 = 0;
      uVar8 = DAT_14c9a027c;
      local_128 = lVar9;
      if (_DAT_14c9a0278 < 0) {
        _DAT_14c9a0278 = (ulonglong)DAT_14c9a027c << 0x20;
        FUN_1448f21ac(&DAT_14c9a0270);
        iVar11 = DAT_14c9a0278;
        uVar8 = DAT_14c9a027c;
      }
      _DAT_14c9a0278 = CONCAT44(DAT_14c9a027c,iVar11 + uVar15);
      if (uVar8 - iVar11 < uVar15) {
        FUN_14479d316(&DAT_14c9a0270);
      }
      memset((void *)((longlong)iVar11 * 8 + DAT_14c9a0270),0,(ulonglong)(uVar15 * 8));
      lVar9 = local_128;
      if ((uVar7 & 0xffffffc0) != uVar6) {
        *(longlong *)(DAT_14c9a0270 + -8 + (ulonglong)uVar15 * 8) =
             -1L << ((byte)((ulonglong)lVar12 >> 0x10) & 0x3f);
      }
      lVar12 = (uVar16 & 0xffffffffffff0000) - 1;
      if ((int)puVar14[0x10] != 0) {
        *(undefined4 *)(local_128 + 0x2c) = 0;
        local_f0 = FUN_140272cda;
        local_150 = *(undefined4 *)((longlong)puVar14 + 0x24);
        local_158 = (undefined4)puVar14[4];
        local_160 = puVar14[3];
        local_148 = &local_f0;
        local_168 = 0;
        local_e8 = &local_e0;
        local_e0 = param_1;
        local_d8 = puVar14;
        local_d0 = uVar17;
        local_c8 = lVar12;
        FUN_1401706c6((int)puVar14[0x10],param_1 + 0x1c,uVar17,lVar12);
        if (0x3f < uVar7) {
          uVar16 = 0;
          do {
            if (*(longlong *)(DAT_14c9a0270 + uVar16 * 8) != -1) {
              *(undefined4 *)(lVar9 + 0x2c) = 1;
              break;
            }
            uVar16 = uVar16 + 1;
          } while (uVar15 + (uVar15 == 0) != uVar16);
        }
      }
      if ((*(int *)(lVar9 + 0x2c) == 1) && (*(int *)((longlong)puVar14 + 0x7c) != 0)) {
        *(undefined4 *)(lVar9 + 0x2c) = 2;
        local_148 = &local_100;
        local_100 = FUN_141736a0c;
        local_150 = *(undefined4 *)((longlong)puVar14 + 0x24);
        local_158 = (undefined4)puVar14[4];
        local_160 = puVar14[3];
        local_168 = 0;
        local_f8 = &local_e0;
        local_e0 = param_1;
        local_d8 = puVar14;
        local_d0 = uVar17;
        local_c8 = lVar12;
        FUN_1401706c6(*(undefined4 *)((longlong)puVar14 + 0x7c),param_1 + 0x1c,uVar17,lVar12);
        if (0x3f < uVar7) {
          uVar16 = 0;
          do {
            if (*(longlong *)(DAT_14c9a0270 + uVar16 * 8) != -1) {
              *(undefined4 *)(lVar9 + 0x2c) = 1;
              break;
            }
            uVar16 = uVar16 + 1;
          } while (uVar15 + (uVar15 == 0) != uVar16);
        }
      }
      uVar4 = local_134;
      local_168 = CONCAT44(local_168._4_4_,*(undefined4 *)((longlong)puVar14 + 0x24));
      FUN_140518537((longlong)puVar14 +
                    (longlong)*(int *)(lVar9 + 0x2c) * 4 +
                    (ulonglong)*(byte *)(lVar9 + 0x28) * 0xc + 0x34,local_120,local_134,
                    (int)puVar14[4]);
      lpCriticalSection = local_130;
      if (*(int *)(lVar9 + 0x2c) == 1) {
        cVar5 = FUN_144976b20(param_1);
        lpCriticalSection = local_130;
        if (cVar5 != '\0') {
          FUN_1449d54ce(param_1);
        }
      }
      else if (*(int *)(lVar9 + 0x2c) == 0) {
        FUN_142b0f498(param_1,uVar4);
      }
      FUN_14039dfac(param_1,0,0xffff);
      *(int *)(param_1 + 0x4f) = (int)param_1[0x4f] + -1;
      uVar16 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_140473c4e;
    }
  }
  uVar16 = 0;
LAB_140473c4e:
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 14047403c FUN_14047403c body=127 status=ok
// SIG undefined FUN_14047403c(void)

void FUN_14047403c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14474875a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1404740bc FUN_1404740bc body=135 status=ok
// SIG undefined FUN_1404740bc(void)

undefined8 * FUN_1404740bc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  ulonglong uVar2;
  
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = (ulonglong)iVar1;
  if (uVar2 == 2) {
    *param_1 = 0;
    uVar2 = (ulonglong)*(int *)(param_3 + 1);
    _Src = (void *)*param_3;
    *(int *)(param_1 + 1) = *(int *)(param_3 + 1);
    if (uVar2 == 0) goto LAB_14047413a;
  }
  else {
    if ((*(int *)(param_3 + 1) != 2) || (*(short *)*param_3 != 0x2f)) {
      FUN_140474144(param_1);
      return param_1;
    }
    *param_1 = 0;
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0) {
LAB_14047413a:
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
  }
  FUN_1446dd670(param_1,uVar2 & 0xffffffff,0);
  memcpy((void *)*param_1,_Src,uVar2 * 2);
  return param_1;
}



// FUNCTION 140474144 FUN_140474144 body=187 status=ok
// SIG undefined FUN_140474144(void)

undefined8 * FUN_140474144(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 2) {
    *param_1 = 0;
    iVar3 = *(int *)(param_3 + 1);
    pvVar2 = (void *)*param_3;
    *(int *)(param_1 + 1) = iVar3;
    if ((longlong)iVar3 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar3,0);
      memcpy((void *)*param_1,pvVar2,(longlong)iVar3 * 2);
    }
  }
  else {
    iVar3 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar3 = 0;
    }
    *param_1 = 0;
    pvVar2 = (void *)*param_2;
    *(uint *)(param_1 + 1) = uVar1;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3 + uVar1);
    }
    FUN_1446dd670(param_1,iVar3 + uVar1,0);
    memcpy((void *)*param_1,pvVar2,(ulonglong)uVar1 * 2);
    FUN_1400020e8(param_1,*param_3,iVar3);
  }
  return param_1;
}



// FUNCTION 140474200 FUN_140474200 body=1217 status=ok
// SIG undefined FUN_140474200(void)

double * FUN_140474200(longlong param_1,double *param_2)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  double *pdVar10;
  int iVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined1 auStack_148 [32];
  undefined1 local_128 [16];
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1404746c2();
  if (*(longlong *)(param_1 + 0x4210) != 0) {
    uVar9 = *(uint *)(param_1 + 0x47d8);
    if (((((ulonglong)uVar9 != 0) && (lVar2 = *(longlong *)(param_1 + 0x110), lVar2 != 0)) &&
        (*(longlong *)(param_1 + 0x4208) != 0)) &&
       (((&DAT_00001100)[param_1] == '\x01' && (*(char *)(param_1 + 0x1dc0) == '\0')))) {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x4210) + 0x904);
      local_128._8_8_ = 0;
      local_128._0_8_ = DAT_14c8464f0;
      fVar19 = fVar1;
      dVar18 = DAT_14c8464e0;
      dVar6 = DAT_14c8464e8;
      if (0 < (int)uVar9) {
        local_110 = *(double *)(lVar2 + 0x270);
        local_108 = *(double *)(lVar2 + 0x260);
        dStack_100 = *(double *)(lVar2 + 0x268);
        iVar11 = -uVar9;
        uVar12 = (ulonglong)uVar9;
        do {
          lVar2 = *(longlong *)(param_1 + 0x47d0);
          plVar3 = *(longlong **)(lVar2 + -8 + uVar12 * 8);
          if ((plVar3 == (longlong *)0x0) || ((*(uint *)(plVar3 + 1) >> 0x1e & 1) != 0)) {
LAB_140474547:
            uVar9 = *(uint *)(param_1 + 0x47d8);
            if (uVar12 != uVar9) {
              memmove((void *)(lVar2 + uVar12 * 8 + -8),(void *)(lVar2 + uVar12 * 8),
                      (longlong)(int)(iVar11 + uVar9) << 3);
              uVar9 = *(uint *)(param_1 + 0x47d8);
            }
            *(uint *)(param_1 + 0x47d8) = uVar9 - 1;
            FUN_145712f7e((longlong *)(param_1 + 0x47d0));
          }
          else {
            lVar4 = plVar3[0x39];
            if (lVar4 == 0) {
              pdVar10 = &DAT_14c8464e0;
              uVar15 = SUB84(DAT_14c8464f0,0);
              uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar15 = (undefined4)*(undefined8 *)(lVar4 + 0x270);
              uVar21 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x270) >> 0x20);
              pdVar10 = (double *)(lVar4 + 0x260);
            }
            dVar16 = local_108 - *pdVar10;
            dVar17 = dStack_100 - pdVar10[1];
            dVar14 = dVar16 * dVar16 + dVar17 * dVar17;
            fVar20 = (float)SQRT(dVar14);
            if (fVar20 <= fVar19) {
              fVar19 = fVar20;
            }
            if (fVar1 <= fVar20) goto LAB_140474547;
            (**(code **)(*plVar3 + 0x328))(plVar3,&local_f8);
            if (SQRT(local_f8 * local_f8 + local_f0 * local_f0) < 9.999999747378752e-05) {
              if ((dVar14 != 1.0) || (NAN(dVar14))) {
                dVar13 = DAT_14c8464f0;
                dVar7 = DAT_14c8464e0;
                dVar8 = DAT_14c8464e8;
                if (9.99999993922529e-09 <= dVar14) {
                  dVar14 = 1.0 / SQRT(dVar14);
                  dVar13 = 0.0;
                  dVar7 = dVar16 * dVar14;
                  dVar8 = dVar17 * dVar14;
                }
              }
              else {
                dVar14 = local_110 - (double)CONCAT44(uVar21,uVar15);
                dVar13 = (double)(-(ulonglong)(dVar14 == 0.0) & (ulonglong)dVar14);
                dVar7 = dVar16;
                dVar8 = dVar17;
              }
              dVar16 = 1.0 / (double)fVar1;
              dVar14 = (double)(fVar1 - fVar20);
              dVar18 = dVar18 + dVar7 * dVar14 * dVar16;
              dVar6 = dVar6 + dVar8 * dVar14 * dVar16;
              uVar15 = local_128._12_4_;
              local_128._8_4_ = local_128._8_4_;
              local_128._0_8_ = local_128._0_8_ + dVar13 * dVar14 * dVar16;
              local_128._12_4_ = uVar15;
            }
          }
          iVar11 = iVar11 + 1;
          bVar5 = 1 < uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar5);
      }
      dVar14 = *param_2;
      dVar16 = param_2[1];
      if (SQRT(dVar14 * dVar14 + dVar16 * dVar16) < 9.999999747378752e-05) {
        dVar17 = dVar18 * dVar18 + dVar6 * dVar6;
        if ((dVar17 != 1.0) || (NAN(dVar17))) {
          dVar13 = DAT_14c8464f0;
          dVar7 = DAT_14c8464e8;
          dVar8 = DAT_14c8464e0;
          if (9.99999993922529e-09 <= dVar17) {
            dVar13 = 0.0;
            dVar7 = dVar6 * (1.0 / SQRT(dVar17));
            dVar8 = dVar18 * (1.0 / SQRT(dVar17));
          }
        }
        else {
          dVar13 = (double)(-(ulonglong)((double)local_128._0_8_ == 0.0) & local_128._0_8_);
          dVar7 = dVar6;
          dVar8 = dVar18;
        }
        dVar18 = (double)(((fVar1 - fVar19) / fVar1) *
                         *(float *)(*(longlong *)(param_1 + 0x4210) + 0x900));
        *param_2 = dVar14 + dVar8 * dVar18;
        param_2[1] = dVar16 + dVar7 * dVar18;
        param_2[2] = dVar13 * dVar18 + param_2[2];
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404746c2 FUN_1404746c2 body=182 status=ok
// SIG undefined FUN_1404746c2(void)

double * FUN_1404746c2(longlong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (1.0 < dVar5) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar3 = dVar3 * dVar5;
    dVar2 = dVar2 * dVar5;
    dVar1 = dVar1 * dVar5;
  }
  fVar4 = (float)(**(code **)(*param_1 + 0x710))();
  dVar5 = (double)fVar4;
  *param_2 = dVar1 * dVar5;
  param_2[1] = dVar2 * dVar5;
  param_2[2] = dVar3 * dVar5;
  return param_2;
}



// FUNCTION 140474778 FUN_140474778 body=747 status=ok
// SIG undefined FUN_140474778(void)

void FUN_140474778(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [24];
  uint local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)((longlong)param_1 + 0x3bbc) == '\x01') {
    FUN_140476ad6(param_1 + 0x762,param_2);
  }
  FUN_140475eb4(param_1 + 0x778,param_2,param_1[0x86]);
  plVar1 = (longlong *)param_1[0x72];
  if (((((plVar1[0x86] == 0) || ((*(byte *)(plVar1 + 0x84) & 2) == 0)) ||
       (cVar2 = (**(code **)(*plVar1 + 0x6c8))(), cVar2 == '\0')) &&
      ((*(uint *)(param_1 + 0x5cb) & 0x300) == 0x100)) ||
     ((**(code **)(*param_1 + 0x740))(param_1,param_2),
     (*(byte *)((longlong)param_1 + 0x2e59) & 4) == 0)) goto LAB_140474814;
  if ((param_1[0x2e] != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar3 = FUN_14487fd02(param_1);
  if (iVar3 != 3) goto LAB_140474814;
  lVar5 = (**(code **)(*param_1 + 0x670))(param_1);
  dVar9 = ((*(double *)(lVar5 + 0x20) - (double)param_1[0x76d]) * 65536.0) / 360.0;
  dVar7 = ((*(double *)(lVar5 + 0x18) - (double)param_1[0x76c]) * 65536.0) / 360.0;
  dVar8 = (double)FUN_144719204(param_1[0x766],0x4076800000000000);
  dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                  (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
  if ((dVar8 != 0.0) || (NAN(dVar8))) {
LAB_140474a37:
    uVar4 = FUN_1404772ee(param_1 + 0x766);
    lVar5 = DAT_14c846500;
    param_1[0x766] = DAT_14c8464f8;
    param_1[0x767] = lVar5;
    param_1[0x768] = DAT_14c846508;
  }
  else {
    dVar8 = (double)FUN_144719204(param_1[0x767],0x4076800000000000);
    dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                    (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
    if ((dVar8 != 0.0) || (NAN(dVar8))) goto LAB_140474a37;
    dVar8 = (double)FUN_144719204(param_1[0x768]);
    dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                    (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
    uVar4 = 0;
    if ((dVar8 != 0.0) || (NAN(dVar8))) goto LAB_140474a37;
  }
  uVar6 = (**(code **)(*param_1 + 0x670))(param_1);
  FUN_140202030(local_70,uVar6,param_1);
  plVar1 = (longlong *)param_1[0x72];
  local_58 = ((uint)(longlong)ROUND(dVar9 + dVar9 + 0.5) & 0xfffffffe) << 0xf |
             (uint)((ulonglong)(longlong)ROUND(dVar7 + dVar7 + 0.5) >> 1) & 0xffff;
  local_54 = uVar4;
  uVar6 = FUN_14477b072(plVar1,DAT_14cbadd38);
  (**(code **)(*plVar1 + 0x248))(plVar1,uVar6,local_70);
  *(byte *)((longlong)param_1 + 0x2e59) = *(byte *)((longlong)param_1 + 0x2e59) & 0xfb;
LAB_140474814:
  if ((local_50 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140474a64 FUN_140474a64 body=452 status=ok
// SIG undefined FUN_140474a64(void)

void FUN_140474a64(longlong param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
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
  FUN_140474c3e();
  if (((*(longlong *)(param_1 + 0x39d8) != 0) && (*(longlong *)(param_1 + 0x390) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x390) + 0x3e0), lVar4 != 0)) {
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
    lVar8 = (longlong)*(int *)(DAT_14cba8288 + 0x38);
    if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + lVar8 * 8) ==
         DAT_14cba8288 + 0x30)) &&
       (puVar5 = *(undefined8 **)(lVar4 + 0x75e0), puVar5 != (undefined8 *)0x0)) {
      iVar7 = *(int *)(puVar5 + 1);
      do {
        if (iVar7 == 0) goto LAB_140474b34;
        LOCK();
        iVar2 = *(int *)(puVar5 + 1);
        bVar10 = iVar7 == iVar2;
        if (bVar10) {
          *(int *)(puVar5 + 1) = iVar7 + 1;
          iVar2 = iVar7;
        }
        iVar7 = iVar2;
        UNLOCK();
      } while (!bVar10);
      lVar4 = *(longlong *)(lVar4 + 0x75d8);
      if (lVar4 != 0) {
        cVar6 = FUN_140474c7c(lVar4);
        bVar3 = *(byte *)(*(longlong *)(param_1 + 0x39d8) + 0x14c);
        if (((bVar3 & 0x10) == 0) == (bool)cVar6) {
          uVar9 = CONCAT71((int7)((ulonglong)lVar8 >> 8),bVar3) & 0xffffffffffffff10;
          FUN_14414c2cc(lVar4,CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 4));
        }
      }
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5);
        LOCK();
        piVar1 = (int *)((longlong)puVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
LAB_140474b34:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140474c3e FUN_140474c3e body=62 status=ok
// SIG undefined FUN_140474c3e(void)

void FUN_140474c3e(longlong *param_1,undefined4 param_2)

{
  FUN_14047570a();
  FUN_140474cdc(param_1);
  (**(code **)(*param_1 + 0x8c0))(param_1);
  FUN_140474f42(param_1,param_2);
  return;
}



// FUNCTION 140474c7c FUN_140474c7c body=95 status=ok
// SIG undefined FUN_140474c7c(void)

ulonglong FUN_140474c7c(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x1fc) != 0) {
    uVar1 = *(uint *)(param_1 + 0x1f8);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140474cd4;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       ((((int)plVar3[2] == *(int *)(param_1 + 0x1fc) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)
         ) && (lVar2 = *plVar3, lVar2 != 0)))) {
      uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0x2e4)) ^ 1;
      goto LAB_140474cd4;
    }
  }
  uVar4 = 0;
LAB_140474cd4:
  return uVar4 & 0xffffffffffffff01;
}



// FUNCTION 140474cdc FUN_140474cdc body=613 status=ok
// SIG undefined FUN_140474cdc(void)

void FUN_140474cdc(longlong *param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined1 auStack_a98 [40];
  int local_a70;
  int local_a6c;
  undefined1 local_a68 [48];
  float local_a38;
  float local_9d4;
  undefined4 local_9d0;
  char local_9cc;
  undefined8 local_9c8;
  undefined4 local_9c0;
  undefined1 local_9b8 [2088];
  longlong local_190;
  longlong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 auStack_d8 [12];
  char local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a98;
  if (((param_1[0x72] == 0) || (FUN_14039bfee(param_1[0x72],&local_a6c,&local_a70), local_a6c == 0))
     || (local_a70 == 0)) goto LAB_140474e55;
  _Src = (void *)(**(code **)(*param_1 + 0x670))(param_1);
  memcpy(local_a68,_Src,0x98);
  local_9cc = *(char *)((longlong)_Src + 0x9c);
  if (local_9cc == '\x01') {
    local_9d0 = *(undefined4 *)((longlong)_Src + 0x98);
  }
  local_9c0 = *(undefined4 *)((longlong)_Src + 0xa8);
  local_9c8 = *(ulonglong *)((longlong)_Src + 0xa0);
  FUN_144903306(local_9b8,(longlong)_Src + 0xb0);
  local_f8 = *(undefined8 *)((longlong)_Src + 0x970);
  uStack_f0 = *(undefined8 *)((longlong)_Src + 0x978);
  local_e8 = *(undefined8 *)((longlong)_Src + 0x980);
  uStack_e0 = *(undefined8 *)((longlong)_Src + 0x988);
  local_78 = *(char *)((longlong)_Src + 0x9f0);
  if (local_78 == '\x01') {
    puVar3 = (undefined8 *)((longlong)_Src + 0x990);
    puVar4 = auStack_d8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  local_48 = *(undefined8 *)((longlong)_Src + 0xa20);
  local_68 = *(undefined4 *)((longlong)_Src + 0xa00);
  uStack_64 = *(undefined4 *)((longlong)_Src + 0xa04);
  uStack_60 = *(undefined4 *)((longlong)_Src + 0xa08);
  uStack_5c = *(undefined4 *)((longlong)_Src + 0xa0c);
  local_58 = *(undefined4 *)((longlong)_Src + 0xa10);
  uStack_54 = *(undefined4 *)((longlong)_Src + 0xa14);
  uStack_50 = *(undefined4 *)((longlong)_Src + 0xa18);
  uStack_4c = *(undefined4 *)((longlong)_Src + 0xa1c);
  if ((local_9c8 & 4) != 0) {
    iVar1 = FUN_140540672(param_1[0x72]);
    if (local_a70 < local_a6c) {
      if (((iVar1 != 2) && (iVar1 != 1)) && (local_9c8._4_1_ != '\x01')) {
LAB_140474f00:
        fVar5 = tanf(local_a38 * 0.5 * 0.017453292);
        fVar5 = atanf(fVar5 * local_9d4);
        local_a38 = fVar5 * 57.295776 + fVar5 * 57.295776;
      }
    }
    else if (iVar1 != 1) goto LAB_140474f00;
  }
  (**(code **)(*param_1 + 0x660))(param_1,local_a68);
  if (local_78 == '\x01') {
    local_78 = '\0';
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
LAB_140474e55:
  if ((local_38 ^ (ulonglong)auStack_a98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140474f42 FUN_140474f42 body=977 status=ok
// SIG undefined FUN_140474f42(void)

void FUN_140474f42(longlong param_1,float param_2)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong uVar3;
  float fVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  
  if ((*(byte *)(param_1 + 0x2e58) & 8) == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x3a58);
  puVar2 = (uint *)(param_1 + 0x3a68);
  iVar8 = *(int *)(&DAT_00003a80 + param_1);
  iVar5 = iVar8;
  if (iVar8 == 0) {
    uVar17 = 1;
    uVar10 = 0;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x3a78);
    if (*(uint **)(param_1 + 0x3a78) == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar12 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar12 = iVar8 + -1;
      }
      uVar10 = 0;
      uVar17 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar17 = uVar10;
      }
      iVar7 = 0;
      do {
        if (uVar17 == uVar10) goto LAB_140475127;
        iVar7 = iVar7 + 0x20;
        uVar11 = puVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar10 = 0;
      iVar7 = 0;
    }
    uVar17 = (ulonglong)(-uVar11 & uVar11);
    uVar3 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar12 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar8 <= iVar12) {
      iVar12 = iVar8;
    }
  }
  if (iVar12 != iVar8) {
    uVar11 = 0xffffffff;
    do {
      fVar4 = *(float *)(*plVar1 + 0x14 + (longlong)iVar12 * 0x3c);
      if (0.0 < fVar4) {
        lVar16 = *plVar1 + (longlong)iVar12 * 0x3c;
        fVar18 = *(float *)(lVar16 + 0x30) - param_2;
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        *(float *)(lVar16 + 0x30) = fVar18;
        *(float *)(lVar16 + 0x2c) =
             (*(float *)(lVar16 + 0x10) - *(float *)(lVar16 + 0xc)) * (1.0 - fVar18 / fVar4) +
             *(float *)(lVar16 + 0xc);
        iVar5 = *(int *)(&DAT_00003a80 + param_1);
      }
      uVar11 = uVar11 & ~(uint)uVar17;
      puVar6 = *(uint **)(param_1 + 0x3a78);
      if (*(uint **)(param_1 + 0x3a78) == (uint *)0x0) {
        puVar6 = puVar2;
      }
      iVar12 = (int)uVar10;
      lVar16 = (longlong)iVar12;
      uVar13 = puVar6[lVar16] & uVar11;
      if (uVar13 == 0) {
        iVar14 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar14 = iVar5 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar7 = iVar7 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar12) {
          iVar15 = iVar12;
        }
        if (iVar12 < iVar14) {
          lVar9 = 0;
          do {
            uVar13 = puVar6[lVar16 + lVar9 + 1];
            if (uVar13 != 0) {
              uVar10 = (ulonglong)(iVar12 + (int)lVar9 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1404750f4;
            }
            iVar7 = iVar7 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar15 - lVar16 != lVar9);
          uVar11 = 0xffffffff;
          lVar16 = (longlong)iVar15;
        }
        uVar10 = lVar16 + 1U & 0xffffffff;
        iVar12 = iVar5;
      }
      else {
LAB_1404750f4:
        uVar17 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar12 = (iVar7 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar12) {
          iVar12 = iVar5;
        }
      }
    } while (iVar12 != iVar8);
  }
LAB_140475127:
  if (iVar5 == 0) {
    uVar17 = 1;
    uVar10 = 0;
    iVar8 = 0;
    iVar12 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x3a78);
    if (*(uint **)(param_1 + 0x3a78) == (uint *)0x0) {
      puVar6 = puVar2;
    }
    uVar11 = *puVar6;
    if (uVar11 == 0) {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      uVar10 = 0;
      uVar17 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar17 = uVar10;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar10) goto LAB_140475258;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar10 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar11 & uVar11);
    uVar3 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar8) {
      iVar8 = iVar5;
    }
  }
  if (iVar8 < iVar5) {
    uVar11 = 0xffffffff;
    do {
      if ((*(char *)(*plVar1 + 0x29 + (longlong)iVar8 * 0x3c) == '\0') &&
         (*(float *)(*plVar1 + (longlong)iVar8 * 0x3c + 0x30) <= 0.0)) {
        FUN_14571301e(plVar1);
        iVar5 = *(int *)(&DAT_00003a80 + param_1);
      }
      uVar11 = uVar11 & ~(uint)uVar17;
      puVar6 = *(uint **)(param_1 + 0x3a78);
      if (*(uint **)(param_1 + 0x3a78) == (uint *)0x0) {
        puVar6 = puVar2;
      }
      iVar8 = (int)uVar10;
      lVar16 = (longlong)iVar8;
      uVar13 = puVar6[lVar16] & uVar11;
      if (uVar13 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar14 = iVar7;
        if (iVar7 < iVar8) {
          iVar14 = iVar8;
        }
        if (iVar7 <= iVar8) break;
        lVar9 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar13 = puVar6[lVar16 + lVar9 + 1];
          if (uVar13 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar14 - lVar16 == lVar9) goto LAB_140475258;
        }
        uVar10 = (ulonglong)(iVar8 + (int)lVar9 + 1);
        uVar11 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar13 & uVar13);
      uVar3 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar5);
  }
LAB_140475258:
  FUN_1404775ec(param_1);
  return;
}



// FUNCTION 140475314 FUN_140475314 body=1013 status=ok
// SIG undefined FUN_140475314(void)

void FUN_140475314(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined1 local_68 [24];
  code *local_50 [3];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = param_1[0x5dd];
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  lVar2 = param_1[0x86];
  if ((lVar2 != lVar6) && (param_1[0x5dd] != 0)) {
    if ((*(byte *)((longlong)param_1 + 0x2ef4) & 4) == 0) {
      uVar10 = CONCAT71((int7)((ulonglong)param_4 >> 8),*(byte *)((longlong)param_1 + 0x2ef4)) &
               0xffffffffffffff08;
      (**(code **)(*param_1 + 0x8c8))
                (param_1,param_1[0x5dd],0,CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 >> 3));
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x2ef4) & 2) == 0) goto LAB_140475408;
  lVar11 = param_1[0x86];
  if (lVar11 != 0) {
    cVar4 = (**(code **)(*param_1 + 0x880))(param_1);
    if ((cVar4 == '\0') && ((param_1[0x746] != 0 || ((int)param_1[0x747] != 0x7201)))) {
      cVar4 = FUN_14479439c(lVar11,0);
      if (cVar4 == '\0') {
LAB_1404753b8:
        bVar7 = *(byte *)(param_1[0x73b] + 0x14c) & 8;
        if (bVar7 == 0) {
          cVar4 = (**(code **)(*param_1 + 0x878))(param_1);
          if (cVar4 != '\0') {
            if (((*(byte *)(param_1[0x73b] + 0x14c) & 2) != 0) &&
               ((*(byte *)((longlong)param_1 + 0x2ef4) & 4) != 0)) goto LAB_140475503;
            goto LAB_1404753d0;
          }
          if (((*(byte *)(*(longlong *)(param_1[0x749] + 0x10) + 0x1c) & 0x40) == 0) ||
             (bVar8 = 1, (*(byte *)(param_1[0x73b] + 0x14c) & 6) != 0)) {
LAB_140475503:
            lVar11 = param_1[0x86];
            (**(code **)(*param_1 + 0x730))(param_1,local_68);
            local_b8 = 0;
            fVar12 = (float)FUN_1404773da(lVar11,local_68,4,local_50);
            bVar8 = 1;
            if ((0.0 <= fVar12) && (fVar12 <= *(float *)(param_1 + 0x5dc))) {
              if (((*(byte *)(param_1[0x73b] + 0x14c) & 2) != 0) &&
                 (*(char *)(*(longlong *)(param_1[0x749] + 0x10) + 0x1c) < '\0')) {
                FUN_1418733ae();
              }
              goto LAB_1404753d0;
            }
          }
        }
        else {
LAB_1404753d0:
          bVar8 = 0;
        }
        bVar1 = *(byte *)((longlong)param_1 + 0x2ef4);
        if (((lVar2 != lVar6) || (((bVar1 >> 2 ^ bVar8) & 1) != 0)) ||
           ((bool)(bVar7 >> 3) != ((bVar1 >> 3 & 1) != 0))) {
          *(byte *)((longlong)param_1 + 0x2ef4) = bVar1 & 0xf3 | bVar8 * '\x04' | bVar7;
          (**(code **)(*param_1 + 0x8c8))(param_1,param_1[0x86],bVar8,bVar7 != 0);
        }
      }
      else {
        lVar11 = *(longlong *)(lVar11 + 0x10);
        if (((lVar11 != 0) && (lVar5 = FUN_140086810(), lVar5 != 0)) &&
           ((*(byte *)(lVar5 + 0xd5) & 0x40) != 0)) {
          if (DAT_14c950d78 == 0) {
            local_80 = local_50;
            local_50[0] = FUN_1449e2820;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1468b50ee;
            local_90 = FUN_1427f23a3;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10004001;
            local_b0 = 8;
            local_b8 = CONCAT44(local_b8._4_4_,0x28);
            FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
          }
          if (DAT_14c950d78 != lVar5) {
            do {
              if (0 < (longlong)*(int *)(lVar11 + 0x1e0)) {
                lVar9 = 0;
                do {
                  lVar3 = *(longlong *)(*(longlong *)(lVar11 + 0x1d8) + lVar9);
                  if (((lVar3 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                      lVar5 + 0x30)) goto LAB_1404753b8;
                  lVar9 = lVar9 + 0x10;
                } while ((longlong)*(int *)(lVar11 + 0x1e0) * 0x10 != lVar9);
              }
              lVar11 = *(longlong *)(lVar11 + 0x40);
            } while (lVar11 != 0);
          }
        }
      }
    }
LAB_140475408:
    lVar6 = param_1[0x86];
    if (DAT_14c950c29 != 1) goto LAB_14047541c;
    if (lVar6 != 0) {
      FUN_1456cec3c();
      lVar6 = param_1[0x86];
      goto LAB_14047541c;
    }
  }
  lVar6 = 0;
LAB_14047541c:
  param_1[0x5dd] = lVar6;
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14047570a FUN_14047570a body=1619 status=ok
// SIG undefined FUN_14047570a(void)

void FUN_14047570a(longlong *param_1,float param_2)

{
  longlong *_Src;
  double dVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  float _X;
  float fVar8;
  float fVar9;
  undefined1 auStack_ab8 [32];
  undefined1 local_a98 [152];
  undefined4 local_a00;
  char local_9fc;
  longlong local_9f8;
  undefined4 local_9f0;
  undefined1 local_9e8 [2088];
  longlong local_1c0;
  longlong local_138;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108 [12];
  char local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_ab8;
  _Src = param_1 + 0x88;
  memcpy(local_a98,_Src,0x98);
  local_9fc = *(char *)((longlong)param_1 + 0x4dc);
  if (local_9fc == '\x01') {
    local_a00 = (undefined4)param_1[0x9b];
  }
  local_9f0 = (undefined4)param_1[0x9d];
  local_9f8 = param_1[0x9c];
  FUN_144903306(local_9e8,param_1 + 0x9e);
  local_128 = param_1[0x1b6];
  lStack_120 = param_1[0x1b7];
  local_118 = param_1[0x1b8];
  lStack_110 = param_1[0x1b9];
  local_a8 = (char)param_1[0x1c6];
  if (local_a8 == '\x01') {
    plVar6 = param_1 + 0x1ba;
    plVar7 = local_108;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar7 = *plVar6;
      plVar6 = plVar6 + 1;
      plVar7 = plVar7 + 1;
    }
  }
  local_78 = param_1[0x1cc];
  local_98 = (undefined4)param_1[0x1c8];
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0xe44);
  uStack_90 = (undefined4)param_1[0x1c9];
  uStack_8c = *(undefined4 *)((longlong)param_1 + 0xe4c);
  local_88 = (undefined4)param_1[0x1ca];
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0xe54);
  uStack_80 = (undefined4)param_1[0x1cb];
  uStack_7c = *(undefined4 *)((longlong)param_1 + 0xe5c);
  if ((*(byte *)(param_1 + 0x5cb) & 0x40) != 0) {
    lVar5 = FUN_1447210f0(param_1);
    dVar1 = (*(double *)(lVar5 + 0x6d0) - (double)*(float *)((longlong)param_1 + 0x424)) /
            (double)*(float *)(param_1 + 0x84);
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    fVar8 = (float)dVar1;
    dVar1 = (double)fVar8;
    param_1[0x7b] =
         (longlong)(((double)param_1[0x7e] - (double)param_1[0x81]) * dVar1 + (double)param_1[0x81])
    ;
    param_1[0x7c] =
         (longlong)(((double)param_1[0x7f] - (double)param_1[0x82]) * dVar1 + (double)param_1[0x82])
    ;
    param_1[0x7d] =
         (longlong)(((double)param_1[0x80] - (double)param_1[0x83]) * dVar1 + (double)param_1[0x83])
    ;
    if ((fVar8 == 1.0) && (!NAN(fVar8))) {
      *(byte *)(param_1 + 0x5cb) = *(byte *)(param_1 + 0x5cb) & 0xbf;
    }
  }
  plVar6 = param_1 + 0x86;
  plVar7 = param_1 + 0x1d0;
  if ((param_1[0x1d0] == 0) || ((*(byte *)(param_1 + 0x31c) & 1) == 0)) {
    FUN_14024f1da(plVar6,param_1[0x72]);
    (**(code **)(*param_1 + 0x770))(param_1,plVar6);
  }
  FUN_1447ff17a(local_a98,_Src);
  if (*plVar7 == 0) goto LAB_140475866;
  *(float *)(param_1 + 0x31a) = *(float *)(param_1 + 0x31a) - param_2;
  FUN_14024f1da(plVar7,param_1[0x72]);
  (**(code **)(*param_1 + 0x770))(param_1,plVar7);
  fVar8 = 0.0;
  if (*(float *)(param_1 + 0x31a) <= 0.0) {
    FUN_1457135fa(plVar6,plVar7);
    param_1[0x1d0] = 0;
    *(undefined4 *)(param_1 + 0x31a) = 0;
    FUN_1447ff17a(local_a98,param_1 + 0x1d2);
    FUN_1447f69b6(param_1 + 0x31d);
    goto LAB_140475866;
  }
  _X = (*(float *)((longlong)param_1 + 0x18d4) - *(float *)(param_1 + 0x31a)) /
       *(float *)((longlong)param_1 + 0x18d4);
  if ((char)param_1[0x31b] == '\x01') {
    fVar9 = _X * _X;
    fVar8 = _X * fVar9;
    fVar8 = (fVar9 * 3.0 - (fVar8 + fVar8)) +
            (fVar8 - fVar9) * 0.0 +
            (((fVar8 + fVar8) - fVar9 * 3.0) + 1.0) * 0.0 + ((fVar8 - (fVar9 + fVar9)) + _X) * 0.0;
    goto switchD_140475c9f_caseD_1;
  }
  switch((char)param_1[0x31b]) {
  case '\0':
    fVar8 = _X + 0.0;
    break;
  case '\x02':
    fVar8 = *(float *)((longlong)param_1 + 0x18dc);
    goto LAB_140475cca;
  case '\x03':
    fVar8 = 1.0 / *(float *)((longlong)param_1 + 0x18dc);
LAB_140475cca:
    fVar8 = powf(_X,fVar8);
    fVar8 = fVar8 + 0.0;
    break;
  case '\x04':
    if (0.5 <= _X) {
      fVar8 = powf(1.0 - (_X + _X + -1.0),*(float *)((longlong)param_1 + 0x18dc));
      fVar8 = (1.0 - fVar8) * 0.5 + 0.5;
    }
    else {
      fVar8 = powf(_X + _X,*(float *)((longlong)param_1 + 0x18dc));
      fVar8 = (fVar8 + 0.0) * 0.5;
    }
    fVar8 = fVar8 + 0.0;
    break;
  case '\x05':
    fVar8 = 1.0;
  }
switchD_140475c9f_caseD_1:
  FUN_1447ff17a(local_a98,_Src);
  FUN_145713074(local_a98,param_1 + 0x1d2);
  if (0.0 < fVar8 * *(float *)(param_1 + 0x1e7)) {
    FUN_14019e69a(param_1,param_1 + 0x1e8,fVar8 * *(float *)(param_1 + 0x1e7),1);
  }
LAB_140475866:
  uVar4 = *(uint *)(param_1 + 0x5cb);
  if ((uVar4 & 8) != 0) {
    if ((uVar4 >> 0xd & 1) != 0) {
      param_2 = *(float *)((longlong)param_1 + 0x2dfc) - param_2;
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      *(float *)((longlong)param_1 + 0x2dfc) = param_2;
      if (0.0 < *(float *)(param_1 + 0x5bf)) {
        *(float *)(param_1 + 0x7a) =
             (float)(((double)param_1[0x5be] - (double)param_1[0x5bd]) *
                     (double)(1.0 - param_2 / *(float *)(param_1 + 0x5bf)) + (double)param_1[0x5bd])
        ;
      }
      if (((uVar4 >> 0xc & 1) == 0) && (param_2 <= 0.0)) {
        (**(code **)(*param_1 + 0x810))(param_1);
        uVar4 = *(uint *)(param_1 + 0x5cb);
      }
    }
    if ((uVar4 & 0x10) != 0) {
      (**(code **)(*param_1 + 0x760))(param_1);
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x758))(param_1);
  if (cVar2 != '\0') {
    bVar3 = (**(code **)(*param_1 + 0x748))(param_1,local_a98);
    *(uint *)(param_1 + 0x5cb) =
         *(uint *)(param_1 + 0x5cb) & 0xfffff7ff |
         (uint)((byte)(*(uint *)(param_1 + 0x5cb) >> 0xb) & 1 | bVar3) << 0xb;
  }
  FUN_140475e1a(param_1,local_a98);
  if (local_a8 == '\x01') {
    local_a8 = '\0';
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_ab8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140475d62 FUN_140475d62 body=56 status=ok
// SIG undefined FUN_140475d62(void)

undefined8 FUN_140475d62(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140475d9a();
  plVar1 = (longlong *)*plVar1;
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140475d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_2,param_1);
  return uVar2;
}



// FUNCTION 140475d9a FUN_140475d9a body=126 status=ok
// SIG undefined FUN_140475d9a(void)

longlong FUN_140475d9a(void)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14cacf290 == 0) {
    lVar1 = FUN_14001cc68(0x10,0x10);
    FUN_14047855a(lVar1);
    DAT_14cacf290 = lVar1;
    FUN_14123f5ce(&DAT_14c8687e8,local_18,FUN_145dcb1f0);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14cacf290;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140475e1a FUN_140475e1a body=129 status=ok
// SIG undefined FUN_140475e1a(void)

void FUN_140475e1a(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_1 + 800);
  lVar2 = FUN_1447210f0();
  fVar4 = (float)*(double *)(lVar2 + 0x6d0);
  if ((fVar1 != fVar4) || (NAN(fVar1) || NAN(fVar4))) {
    uVar3 = (**(code **)(*param_1 + 0x670))(param_1);
    (**(code **)(*param_1 + 0x668))(param_1,uVar3);
    *(float *)(param_1 + 0x468) = fVar1;
  }
  (**(code **)(*param_1 + 0x660))(param_1,param_2);
  *(float *)(param_1 + 800) = fVar4;
  return;
}



// FUNCTION 140475eb4 FUN_140475eb4 body=3104 status=ok
// SIG undefined FUN_140475eb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140475eb4(float *param_1,float param_2,longlong *param_3)

{
  float *pfVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  double dVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  double *pdVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  float *pfVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong unaff_RBP;
  float fVar24;
  longlong lVar25;
  bool bVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  code *local_140;
  undefined1 *local_138;
  code **local_130;
  code *local_128;
  code *local_120;
  longlong *local_110;
  float local_104;
  float local_100;
  float local_fc;
  code *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_3 == (longlong *)0x0) goto LAB_140476268;
  lVar11 = FUN_140ad802e();
  if ((((((*(int *)(lVar11 + 0x3c) == 0) || (uVar10 = *(uint *)(lVar11 + 0x38), (int)uVar10 < 0)) ||
        (DAT_14c9647dc <= (int)uVar10)) ||
       ((plVar22 = (longlong *)
                   ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
        plVar22 == (longlong *)0x0 || ((int)plVar22[2] != *(int *)(lVar11 + 0x3c))))) ||
      ((*(uint *)(plVar22 + 1) & 0x10200000) != 0)) || (lVar12 = *plVar22, lVar12 == 0)) {
    if (*(longlong *)(lVar11 + 0x40) == 0) goto LAB_140476268;
    lVar12 = FUN_140007850(lVar11 + 0x40);
    cVar9 = (*(code *)PTR_FUN_14c758760)();
    lVar25 = DAT_14c9647c8;
    if ((lVar12 == 0) || (cVar9 == '\0')) {
      if (lVar12 == 0) {
        *(undefined8 *)(lVar11 + 0x38) = 0;
        goto LAB_140476268;
      }
      uVar10 = *(uint *)(lVar12 + 0xc);
      *(uint *)(lVar11 + 0x38) = uVar10;
      if ((int)uVar10 < DAT_14c9647dc) {
        lVar25 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
      }
      else {
        lVar25 = 0;
      }
      uVar10 = *(uint *)(lVar25 + 0x10);
      if (*(uint *)(lVar25 + 0x10) == 0) {
        LOCK();
        iVar4 = DAT_14c964868 + 1;
        UNLOCK();
        uVar23 = DAT_14c964868 + 1;
        unaff_RBP = (ulonglong)uVar23;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar4;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        unaff_RBP);
        }
        LOCK();
        uVar10 = *(uint *)(lVar25 + 0x10);
        bVar26 = uVar10 == 0;
        if (bVar26) {
          *(uint *)(lVar25 + 0x10) = uVar23;
          uVar10 = 0;
        }
        UNLOCK();
        if (bVar26) {
          uVar10 = uVar23;
        }
      }
LAB_140476006:
      *(uint *)(lVar11 + 0x3c) = uVar10;
    }
    else {
      uVar10 = *(uint *)(lVar12 + 0xc);
      if ((int)uVar10 < DAT_14c9647dc) {
        if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8) + 8 +
                      (ulonglong)(uVar10 & 0xffff) * 0x18) & 0x8400000) == 0) {
          *(uint *)(lVar11 + 0x38) = uVar10;
          lVar25 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(lVar25 + (ulonglong)(uVar10 >> 0x10) * 8);
LAB_140476a1b:
          uVar10 = *(uint *)(lVar25 + 0x10);
          if (*(uint *)(lVar25 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar23 = DAT_14c964868 + 1;
            unaff_RBP = (ulonglong)uVar23;
            bVar26 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar26) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,unaff_RBP);
            }
            LOCK();
            uVar10 = *(uint *)(lVar25 + 0x10);
            bVar26 = uVar10 == 0;
            if (bVar26) {
              *(uint *)(lVar25 + 0x10) = uVar23;
              uVar10 = 0;
            }
            UNLOCK();
            if (bVar26) {
              uVar10 = uVar23;
            }
          }
          goto LAB_140476006;
        }
      }
      else if ((_DAT_00000008 & 0x8400000) == 0) {
        *(uint *)(lVar11 + 0x38) = uVar10;
        lVar25 = 0;
        goto LAB_140476a1b;
      }
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1e & 1) != 0) goto LAB_140476268;
  }
  lVar11 = FUN_14143f28c();
  if ((((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8
         ) != lVar11 + 0x30)) || (*(int *)(lVar12 + 0x40) == 0)) || (*(int *)(lVar12 + 0x38) == 0))
  goto LAB_140476268;
  if (DAT_14cb94538 == 0) {
    local_130 = &local_f8;
    local_f8 = FUN_1449e2820;
    local_120 = FUN_14081d0ea;
    local_128 = FUN_1427b09ee;
    local_138 = &LAB_148a18249;
    local_140 = FUN_14657713c;
    local_148 = L"Engine";
    local_150 = 0;
    local_158 = 0x10004001;
    local_160 = 8;
    local_168 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
  }
  plVar22 = (longlong *)FUN_144718840(param_3,DAT_14cb94538);
  if ((plVar22 == (longlong *)0x0) ||
     (lVar11 = (**(code **)(*plVar22 + 0x10))(plVar22), *(int *)(lVar11 + 0xa8) < 1)) {
LAB_1404760e2:
    lVar11 = 0;
    lVar25 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0xa0) + 0x20);
    if ((DAT_14c950c29 == '\x01') && (lVar11 != 0)) {
      FUN_1456cec3c(lVar11);
    }
    else if (lVar11 == 0) goto LAB_1404760e2;
    uVar2 = *(undefined1 *)(lVar11 + 0xbd8);
    local_f8 = (code *)FUN_1414839c2();
    if ((local_f8 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_f8);
    }
    lVar25 = FUN_1448a09a2(lVar11,&local_f8,CONCAT71((int7)(unaff_RBP >> 8),uVar2) & 0xffffffff);
  }
  if (DAT_14cb6fd70 == 0) {
    local_130 = &local_f8;
    local_f8 = FUN_1449e2820;
    local_120 = FUN_14081d0ea;
    local_128 = FUN_1427b09ee;
    local_138 = &LAB_1487a9cc9;
    local_140 = FUN_1465433f8;
    local_148 = L"Engine";
    local_150 = 0;
    local_158 = 0x10004001;
    local_160 = 8;
    local_168 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
  }
  plVar22 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,DAT_14cb6fd70);
  if (plVar22 == (longlong *)0x0) {
LAB_140476268:
    *(undefined8 *)(param_1 + 6) = DAT_14c846508;
    fVar28 = DAT_14c846500._4_4_;
    fVar27 = (float)DAT_14c846500;
    fVar5 = DAT_14c8464f8._4_4_;
    param_1[2] = (float)DAT_14c8464f8;
    param_1[3] = fVar5;
    param_1[4] = fVar27;
    param_1[5] = fVar28;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_188);
  }
  if (DAT_14cb6fd70 == 0) {
    local_130 = &local_f8;
    local_f8 = FUN_1449e2820;
    local_120 = FUN_14081d0ea;
    local_128 = FUN_1427b09ee;
    local_138 = &LAB_1487a9cc9;
    local_140 = FUN_1465433f8;
    local_148 = L"Engine";
    local_150 = 0;
    local_158 = 0x10004001;
    local_160 = 8;
    local_168 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
  }
  plVar13 = (longlong *)FUN_144718840(plVar22);
  if (((plVar22 == plVar13) || (lVar25 == 0)) || (plVar13 == (longlong *)0x0)) goto LAB_140476268;
  lVar11 = FUN_1447210f0(lVar11);
  if (lVar11 == 0) goto LAB_14047673d;
  fVar27 = (float)FUN_140164dde();
  iVar4 = *(int *)(lVar12 + 0x38);
  fVar5 = *(float *)(lVar12 + 0x40);
  pfVar1 = param_1 + 8;
  if (fVar5 != param_1[0x1a]) {
    FUN_148a1e17e();
  }
  lVar11 = *(longlong *)(lVar25 + 0x40);
  if (param_1[0x20] == 0.0) {
LAB_14047676a:
    lVar19 = 0;
  }
  else {
    fVar28 = param_1[0x1f];
    lVar19 = 0;
    if ((-1 < (int)fVar28) && ((int)fVar28 < DAT_14c9647dc)) {
      plVar22 = (longlong *)
                ((ulonglong)(((uint)fVar28 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar28 >> 0x10) * 8));
      if ((plVar22 == (longlong *)0x0) ||
         ((*(float *)(plVar22 + 2) != param_1[0x20] || ((*(uint *)(plVar22 + 1) & 0x10200000) != 0))
         )) goto LAB_14047676a;
      lVar19 = *plVar22;
    }
  }
  if (lVar25 != lVar19) {
    fVar28 = *(float *)(lVar25 + 0xc);
    param_1[0x1f] = fVar28;
    if ((int)fVar28 < DAT_14c9647dc) {
      lVar25 = (ulonglong)(((uint)fVar28 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar28 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    fVar28 = *(float *)(lVar25 + 0x10);
    if (*(float *)(lVar25 + 0x10) == 0.0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      fVar24 = (float)(DAT_14c964868 + 1);
      bVar26 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar26) {
        local_110 = (longlong *)CONCAT44(local_110._4_4_,fVar24);
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      fVar24);
        fVar24 = local_110._0_4_;
      }
      LOCK();
      fVar28 = *(float *)(lVar25 + 0x10);
      bVar26 = fVar28 == 0.0;
      if (bVar26) {
        *(float *)(lVar25 + 0x10) = fVar24;
        fVar28 = 0.0;
      }
      UNLOCK();
      if (bVar26) {
        fVar28 = fVar24;
      }
    }
    param_1[0x20] = fVar28;
    param_1[0x1c] = 0.0;
    local_110 = plVar13;
    if ((int)fVar5 < 1) {
      fVar28 = 0.0;
    }
    else {
      fVar24 = 0.0;
      do {
        fVar28 = powf(*(float *)(lVar11 + 0x50),(float)(int)fVar24);
        fVar28 = fVar28 + param_1[0x1c];
        param_1[0x1c] = fVar28;
        fVar24 = (float)((int)fVar24 + 1);
      } while (fVar5 != fVar24);
    }
    param_1[0x1c] = 1.0 / fVar28;
    plVar13 = local_110;
  }
  fVar28 = 0.0;
  if ((0.0 < fVar27) || (0.0 < *param_1)) {
    if (1e-08 < param_1[0x1e]) {
      fVar28 = param_1[0x1d] / param_1[0x1e];
    }
    if (1.0 <= fVar28) {
      fVar28 = 1.0;
    }
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    fVar28 = 1.0 - fVar28;
    fVar28 = (3.0 - (fVar28 + fVar28)) * fVar28 * fVar28;
    cVar9 = (**(code **)(*plVar13 + 0x48))();
    if (cVar9 == '\0') {
      cVar9 = (**(code **)(*plVar13 + 0x48))();
      if ((1e-08 < fVar28) && (cVar9 == '\0')) goto LAB_1404763ce;
    }
    else if (1e-08 < fVar28) {
LAB_1404763ce:
      fVar24 = *(float *)(lVar11 + 0x54) * fVar28;
      if (0.0 < fVar24) {
        fVar32 = fVar27 - *param_1;
        if (1e-08 <= fVar32 * fVar32) {
          fVar24 = fVar24 * param_2;
          if (1.0 <= fVar24) {
            fVar24 = 1.0;
          }
          if (fVar24 <= 0.0) {
            fVar24 = 0.0;
          }
          fVar27 = *param_1 + fVar32 * fVar24;
        }
      }
      *param_1 = fVar27;
    }
    fVar27 = 0.0;
    if (0.0 <= param_1[0x1d] - param_2) {
      fVar27 = param_1[0x1d] - param_2;
    }
    param_1[0x1d] = fVar27;
    if ((int)fVar5 < 1) {
      plVar22 = (longlong *)0x0;
      dVar29 = 0.0;
    }
    else {
      pfVar18 = *(float **)(param_1 + 0x18);
      if (*(float **)(param_1 + 0x18) == (float *)0x0) {
        pfVar18 = pfVar1;
      }
      iVar6 = *(int *)(lVar12 + 0x38);
      local_fc = *(float *)(lVar11 + 0x50);
      dVar29 = 0.0;
      uVar20 = 0;
      fVar27 = 1.0;
      plVar22 = (longlong *)0x0;
      do {
        local_110 = plVar22;
        bVar3 = *(byte *)(pfVar18 + uVar20 * 2);
        uVar7 = (longlong)(int)(iVar4 + -1 + (uint)bVar3) % (longlong)iVar4;
        pdVar14 = (double *)&DAT_14c8463f0;
        iVar21 = (int)uVar7;
        if ((-1 < iVar21) && (pdVar14 = (double *)&DAT_14c8463f0, iVar21 < iVar6)) {
          pdVar14 = (double *)((uVar7 & 0xffffffff) * 0x10 + *(longlong *)(lVar12 + 0x30));
        }
        pdVar15 = (double *)&DAT_14c8463f0;
        if ((int)(uint)bVar3 < iVar6) {
          pdVar15 = (double *)((ulonglong)bVar3 * 0x10 + *(longlong *)(lVar12 + 0x30));
        }
        uVar7 = (longlong)(ulonglong)(bVar3 + 1) % (longlong)iVar4;
        pdVar16 = (double *)&DAT_14c8463f0;
        if ((int)uVar7 < iVar6) {
          pdVar16 = (double *)((uVar7 & 0xffffffff) * 0x10 + *(longlong *)(lVar12 + 0x30));
        }
        uVar7 = (longlong)(ulonglong)(bVar3 + 2) % (longlong)iVar4;
        pdVar17 = (double *)&DAT_14c8463f0;
        if ((int)uVar7 < iVar6) {
          pdVar17 = (double *)((uVar7 & 0xffffffff) * 0x10 + *(longlong *)(lVar12 + 0x30));
        }
        fVar24 = pfVar18[uVar20 * 2 + 1];
        fVar32 = fVar24 * fVar24;
        fVar33 = fVar24 * fVar32;
        dVar30 = (double)(((fVar33 + fVar33) - fVar32 * 3.0) + 1.0);
        dVar31 = (double)((fVar33 - (fVar32 + fVar32)) + fVar24);
        dVar8 = (double)(fVar32 * 3.0 - (fVar33 + fVar33));
        dVar29 = dVar29 + (pdVar16[1] * dVar8 +
                          (pdVar17[1] - pdVar15[1]) * (double)(fVar33 - fVar32) +
                          (pdVar16[1] - pdVar14[1]) * dVar31 + pdVar15[1] * dVar30) * (double)fVar27
        ;
        plVar22 = (longlong *)
                  ((double)local_110 +
                  (*pdVar16 * dVar8 +
                  (*pdVar17 - *pdVar15) * (double)(fVar33 - fVar32) +
                  (*pdVar16 - *pdVar14) * dVar31 + *pdVar15 * dVar30) * (double)fVar27);
        fVar27 = fVar27 * local_fc;
        uVar20 = uVar20 + 1;
      } while ((uint)fVar5 != uVar20);
    }
    *(double *)(param_1 + 2) =
         (double)*(float *)(lVar11 + 0x44) * dVar29 * (double)param_1[0x1c] * (double)*param_1;
    *(double *)(param_1 + 4) =
         (double)*(float *)(lVar11 + 0x40) * (double)plVar22 * (double)param_1[0x1c] *
         (double)*param_1;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    local_104 = fVar28;
    local_100 = param_2;
  }
  else {
    *(undefined8 *)(param_1 + 6) = DAT_14c846508;
    fVar24 = DAT_14c846500._4_4_;
    fVar28 = (float)DAT_14c846500;
    fVar27 = DAT_14c8464f8._4_4_;
    param_1[2] = (float)DAT_14c8464f8;
    param_1[3] = fVar27;
    param_1[4] = fVar28;
    param_1[5] = fVar24;
    fVar28 = 1.0;
  }
  if (0 < (int)fVar5) {
    fVar27 = *(float *)(lVar11 + 0x48);
    uVar20 = 0;
    do {
      pfVar18 = *(float **)(param_1 + 0x18);
      if (*(float **)(param_1 + 0x18) == (float *)0x0) {
        pfVar18 = pfVar1;
      }
      pfVar18[uVar20 * 2 + 1] = fVar27 * param_2 * fVar28 + pfVar18[uVar20 * 2 + 1];
      while( true ) {
        pfVar18 = *(float **)(param_1 + 0x18);
        if (*(float **)(param_1 + 0x18) == (float *)0x0) {
          pfVar18 = pfVar1;
        }
        pfVar18 = pfVar18 + uVar20 * 2 + 1;
        fVar24 = *pfVar18;
        if (fVar24 <= 1.0) break;
        *pfVar18 = fVar24 + -1.0;
        pfVar18 = *(float **)(param_1 + 0x18);
        if (*(float **)(param_1 + 0x18) == (float *)0x0) {
          pfVar18 = pfVar1;
        }
        *(char *)(pfVar18 + uVar20 * 2) =
             (char)((longlong)(ulonglong)(*(byte *)(pfVar18 + uVar20 * 2) + 1) % (longlong)iVar4);
      }
      if (fVar24 < 0.0) {
        *pfVar18 = 0.0;
      }
      fVar27 = fVar27 * *(float *)(lVar11 + 0x4c);
      uVar20 = uVar20 + 1;
    } while (uVar20 != (uint)fVar5);
  }
LAB_14047673d:
  if ((local_f0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140476ad6 FUN_140476ad6 body=1071 status=ok
// SIG undefined FUN_140476ad6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140476ad6(longlong param_1,float param_2)

{
  double *pdVar1;
  float fVar2;
  double dVar3;
  char cVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 0xac) == '\x01') {
    local_98 = *(undefined4 *)(param_1 + 0x98);
    pdVar1 = (double *)(param_1 + 0x68);
    FUN_140476f06(&local_88,(undefined8 *)(param_1 + 0x50),pdVar1);
    *(undefined8 *)(param_1 + 0x60) = local_78;
    *(undefined8 *)(param_1 + 0x50) = local_88;
    *(undefined8 *)(param_1 + 0x58) = uStack_80;
    cVar4 = *(char *)(param_1 + 0xae);
    if (cVar4 == '\0') {
      if (ABS(*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x68)) <=
          (double)*(float *)(param_1 + 0xa8)) {
        cVar4 = ABS(*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x70)) <=
                (double)*(float *)(param_1 + 0xa8);
      }
      else {
        cVar4 = false;
      }
      *(char *)(param_1 + 0xae) = cVar4;
    }
    if ((*(char *)(param_1 + 0xad) == '\x01') && (cVar4 != '\0')) {
      fVar10 = *(float *)(param_1 + 0xa4) + param_2;
      *(float *)(param_1 + 0xa4) = fVar10;
      fVar2 = *(float *)(param_1 + 0x9c);
      if (fVar2 <= fVar10) {
        *(double *)(param_1 + 0x78) = DAT_14c846508;
        dVar5 = DAT_14c846500;
        *pdVar1 = DAT_14c8464f8;
        *(double *)(param_1 + 0x70) = dVar5;
        *(undefined1 *)(param_1 + 0xad) = 0;
        FUN_1447f69b6(param_1 + 0x38);
      }
      else if ((0.0 <= fVar10) && (0.0 < fVar2)) {
        param_2 = param_2 / fVar2;
        if (1.0 <= param_2) {
          param_2 = 1.0;
        }
        dVar6 = DAT_14c846508 - *(double *)(param_1 + 0x78);
        dVar11 = DAT_14c846500 - *(double *)(param_1 + 0x70);
        dVar3 = DAT_14c8464f8 - *(double *)(param_1 + 0x68);
        dVar5 = (double)DAT_1499387d0;
        dVar17 = DAT_1499387d0._8_8_;
        auVar12._8_8_ = dVar11;
        auVar12._0_8_ = dVar3;
        auVar13 = divpd(auVar12,_DAT_1499387d0);
        auVar7._0_8_ = dVar6 / 360.0;
        auVar7._8_8_ = 0;
        auVar14 = roundpd(auVar13,auVar13,3);
        auVar13 = roundpd(auVar7,auVar7,3);
        auVar19._0_8_ = dVar6 - auVar13._0_8_ * dVar5;
        auVar19._8_8_ = 0.0 - auVar13._8_8_ * dVar17;
        dVar3 = dVar3 - auVar14._0_8_ * dVar5;
        dVar11 = dVar11 - auVar14._8_8_ * dVar17;
        auVar16._0_8_ = dVar3 + dVar5;
        auVar16._8_8_ = dVar11 + dVar17;
        auVar18._0_8_ = dVar5 + auVar19._0_8_;
        auVar18._8_8_ = dVar17 + auVar19._8_8_;
        auVar14._8_8_ = -(ulonglong)(0.0 <= dVar11);
        auVar14._0_8_ = -(ulonglong)(0.0 <= dVar3);
        auVar13._8_4_ = SUB84(dVar11,0);
        auVar13._0_8_ = dVar3;
        auVar13._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        auVar13 = blendvpd(auVar16,auVar13,auVar14);
        auVar8._8_8_ = -(ulonglong)(0.0 <= auVar19._8_8_);
        auVar8._0_8_ = -(ulonglong)(0.0 <= auVar19._0_8_);
        auVar7 = blendvpd(auVar18,auVar19,auVar8);
        auVar15._0_8_ = auVar13._0_8_ + -360.0;
        auVar15._8_8_ = auVar13._8_8_ + -360.0;
        auVar9._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
        auVar9._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
        auVar13 = blendvpd(auVar13,auVar15,auVar9);
        dVar17 = auVar7._0_8_;
        dVar5 = (double)param_2;
        *(double *)(param_1 + 0x68) = auVar13._0_8_ * dVar5 + *(double *)(param_1 + 0x68);
        *(double *)(param_1 + 0x70) = auVar13._8_8_ * dVar5 + *(double *)(param_1 + 0x70);
        *(double *)(param_1 + 0x78) =
             (double)(~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                     (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17)) * dVar5 +
             *(double *)(param_1 + 0x78);
      }
    }
    dVar5 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x50),0x4076800000000000);
    dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                    (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
    if ((dVar5 == 0.0) && (!NAN(dVar5))) {
      dVar5 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x58),0x4076800000000000);
      dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                      (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
      if ((dVar5 == 0.0) && (!NAN(dVar5))) {
        dVar5 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x60),0x4076800000000000);
        dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                        (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
        if ((dVar5 == 0.0) && (!NAN(dVar5))) {
          dVar5 = (double)FUN_144719204(*pdVar1,0x4076800000000000);
          dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                          (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
          if ((dVar5 == 0.0) && (!NAN(dVar5))) {
            dVar5 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x70),0x4076800000000000);
            dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                            (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
            if ((dVar5 == 0.0) && (!NAN(dVar5))) {
              dVar5 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x78),0x4076800000000000);
              dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                              (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
              if ((dVar5 == 0.0) && (!NAN(dVar5))) {
                *(undefined1 *)(param_1 + 0xac) = 0;
              }
            }
          }
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140476f06 FUN_140476f06 body=1000 status=ok
// SIG undefined FUN_140476f06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140476f06(undefined1 (*param_1) [16],double *param_2,double *param_3,float param_4,
                  float param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar7;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  
  auVar17 = _DAT_1499387d0;
  if ((param_4 != 0.0) || (NAN(param_4))) {
    dVar26 = *param_2;
    dVar7 = *param_3;
    if ((dVar26 == dVar7) && (!NAN(dVar26) && !NAN(dVar7))) {
      if ((param_2[1] == param_3[1]) && (!NAN(param_2[1]) && !NAN(param_3[1]))) {
        if ((param_2[2] == param_3[2]) && (!NAN(param_2[2]) && !NAN(param_3[2])))
        goto LAB_1404772ca;
      }
    }
    if (0.0 < param_5) {
      dVar1 = param_2[1];
      dVar21 = param_3[2] - param_2[2];
      dVar6 = param_3[1] - dVar1;
      dVar2 = (double)DAT_1499387d0;
      dVar3 = DAT_1499387d0._8_8_;
      auVar23._8_8_ = dVar6;
      auVar23._0_8_ = dVar7 - dVar26;
      auVar8 = divpd(auVar23,_DAT_1499387d0);
      auVar22._0_8_ = dVar21 / 360.0;
      auVar22._8_8_ = 0;
      auVar8 = roundpd(auVar8,auVar8,3);
      auVar23 = roundpd(auVar22,auVar22,3);
      auVar34._0_8_ = dVar21 - auVar23._0_8_ * dVar2;
      auVar34._8_8_ = 0.0 - auVar23._8_8_ * dVar3;
      auVar24._0_8_ = (dVar7 - dVar26) - auVar8._0_8_ * dVar2;
      auVar24._8_8_ = dVar6 - auVar8._8_8_ * dVar3;
      auVar31._0_8_ = auVar24._0_8_ + dVar2;
      auVar31._8_8_ = auVar24._8_8_ + dVar3;
      auVar33._0_8_ = auVar34._0_8_ + dVar2;
      auVar33._8_8_ = auVar34._8_8_ + dVar3;
      auVar32._8_8_ = -(ulonglong)(0.0 <= auVar24._8_8_);
      auVar32._0_8_ = -(ulonglong)(0.0 <= auVar24._0_8_);
      auVar8 = blendvpd(auVar31,auVar24,auVar32);
      auVar9._8_8_ = -(ulonglong)(0.0 <= auVar34._8_8_);
      auVar9._0_8_ = -(ulonglong)(0.0 <= auVar34._0_8_);
      auVar23 = blendvpd(auVar33,auVar34,auVar9);
      auVar37._0_8_ = auVar8._0_8_ + -360.0;
      auVar37._8_8_ = auVar8._8_8_ + -360.0;
      auVar39._0_8_ = auVar23._0_8_ + -360.0;
      auVar39._8_8_ = auVar23._8_8_ + 0.0;
      auVar10._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
      auVar10._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
      auVar32 = blendvpd(auVar8,auVar37,auVar10);
      auVar11._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
      auVar11._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
      auVar8 = blendvpd(auVar23,auVar39,auVar11);
      dVar21 = auVar8._0_8_;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = dVar21;
      auVar8 = divpd(auVar32,_DAT_1499387d0);
      auVar23 = divpd(auVar41,_DAT_1499387d0);
      auVar8 = roundpd(auVar8,auVar8,3);
      auVar23 = roundpd(auVar23,auVar23,3);
      dVar7 = auVar32._0_8_ - auVar8._0_8_ * dVar2;
      dVar6 = auVar32._8_8_ - auVar8._8_8_ * dVar3;
      auVar42._0_8_ = dVar21 - auVar23._0_8_ * dVar2;
      auVar42._8_8_ = 0.0 - auVar23._8_8_ * dVar3;
      auVar40._0_8_ = dVar7 + dVar2;
      auVar40._8_8_ = dVar6 + dVar3;
      auVar38._0_8_ = auVar42._0_8_ + dVar2;
      auVar38._8_8_ = auVar42._8_8_ + dVar3;
      auVar12._8_8_ = -(ulonglong)(0.0 <= dVar6);
      auVar12._0_8_ = -(ulonglong)(0.0 <= dVar7);
      auVar8._8_4_ = SUB84(dVar6,0);
      auVar8._0_8_ = dVar7;
      auVar8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      auVar23 = blendvpd(auVar40,auVar8,auVar12);
      auVar13._8_8_ = -(ulonglong)(0.0 <= auVar42._8_8_);
      auVar13._0_8_ = -(ulonglong)(0.0 <= auVar42._0_8_);
      auVar8 = blendvpd(auVar38,auVar42,auVar13);
      auVar43._0_8_ = auVar23._0_8_ + -360.0;
      auVar43._8_8_ = auVar23._8_8_ + -360.0;
      auVar35._0_8_ = auVar8._0_8_ + -360.0;
      auVar35._8_8_ = auVar8._8_8_ + -360.0;
      auVar14._8_8_ = -(ulonglong)(180.0 < auVar23._8_8_);
      auVar14._0_8_ = -(ulonglong)(180.0 < auVar23._0_8_);
      auVar23 = blendvpd(auVar23,auVar43,auVar14);
      auVar15._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
      auVar15._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
      auVar8 = blendvpd(auVar8,auVar35,auVar15);
      auVar36._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._8_8_));
      auVar36._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar23._0_8_));
      iVar4 = movmskpd((int)param_1,auVar36);
      auVar16._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar8._8_8_));
      auVar16._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar8._0_8_));
      uVar5 = movmskpd((int)param_2,auVar16);
      if ((uVar5 & 0x3fffffff) != 0 || iVar4 != 0) {
        param_4 = param_4 * param_5;
        if (1.0 <= param_4) {
          param_4 = 1.0;
        }
        if (param_4 <= 0.0) {
          param_4 = 0.0;
        }
        dVar7 = (double)param_4;
        dVar6 = param_2[2] + dVar21 * dVar7;
        *(double *)*param_1 = dVar26 + auVar32._0_8_ * dVar7;
        *(double *)(*param_1 + 8) = dVar1 + auVar32._8_8_ * dVar7;
        auVar8 = *param_1;
        auVar29._0_8_ = dVar6 / 360.0;
        auVar17 = divpd(auVar8,auVar17);
        auVar29._8_8_ = 0;
        auVar17 = roundpd(auVar17,auVar17,3);
        auVar23 = roundpd(auVar29,auVar29,3);
        auVar28._0_8_ = dVar6 - auVar23._0_8_ * dVar2;
        auVar28._8_8_ = 0.0 - auVar23._8_8_ * dVar3;
        dVar26 = auVar8._0_8_ - auVar17._0_8_ * dVar2;
        dVar7 = auVar8._8_8_ - auVar17._8_8_ * dVar3;
        auVar30._0_8_ = dVar26 + dVar2;
        auVar30._8_8_ = dVar7 + dVar3;
        auVar27._0_8_ = dVar2 + auVar28._0_8_;
        auVar27._8_8_ = dVar3 + auVar28._8_8_;
        auVar18._8_8_ = -(ulonglong)(0.0 <= dVar7);
        auVar18._0_8_ = -(ulonglong)(0.0 <= dVar26);
        auVar17._8_8_ = dVar7;
        auVar17._0_8_ = dVar26;
        auVar8 = blendvpd(auVar30,auVar17,auVar18);
        auVar19._8_8_ = -(ulonglong)(0.0 <= auVar28._8_8_);
        auVar19._0_8_ = -(ulonglong)(0.0 <= auVar28._0_8_);
        auVar17 = blendvpd(auVar27,auVar28,auVar19);
        auVar25._0_8_ = auVar8._0_8_ + -360.0;
        auVar25._8_8_ = auVar8._8_8_ + -360.0;
        auVar20._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
        auVar20._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
        auVar8 = blendvpd(auVar8,auVar25,auVar20);
        *param_1 = auVar8;
        dVar26 = auVar17._0_8_;
        *(ulonglong *)param_1[1] =
             ~-(ulonglong)(180.0 < dVar26) & (ulonglong)dVar26 |
             (ulonglong)(dVar26 + -360.0) & -(ulonglong)(180.0 < dVar26);
        return;
      }
    }
    *(double *)param_1[1] = param_3[2];
    dVar26 = *param_3;
    dVar7 = param_3[1];
  }
  else {
LAB_1404772ca:
    *(double *)param_1[1] = param_2[2];
    dVar26 = *param_2;
    dVar7 = param_2[1];
  }
  *(double *)*param_1 = dVar26;
  *(double *)(*param_1 + 8) = dVar7;
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
  return;
}



// FUNCTION 1404772ee FUN_1404772ee body=235 status=ok
// SIG undefined FUN_1404772ee(void)

uint FUN_1404772ee(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)FUN_144719204(*param_1,0x4076800000000000);
  dVar2 = ((double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                   (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0)) * 65536.0) / 360.0;
  dVar1 = (double)FUN_144719204(param_1[1],0x4076800000000000);
  dVar1 = ((double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                   (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0)) * 65536.0) / 360.0;
  return ((uint)(longlong)ROUND(dVar1 + dVar1 + 0.5) & 0xfffffffe) << 0xf |
         (uint)((ulonglong)(longlong)ROUND(dVar2 + dVar2 + 0.5) >> 1) & 0xffff;
}



// FUNCTION 1404773da FUN_1404773da body=498 status=ok
// SIG undefined FUN_1404773da(void)

undefined8
FUN_1404773da(undefined8 param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
             longlong *param_5)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined4 extraout_XMM0_Db;
  float _X;
  undefined4 uVar9;
  undefined1 auStack_198 [44];
  float local_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined1 local_150 [192];
  undefined1 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  param_4[2] = *(undefined8 *)(param_2 + 4);
  uVar9 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)param_4 = uVar9;
  *(undefined4 *)((longlong)param_4 + 4) = uVar2;
  *(undefined4 *)(param_4 + 1) = uVar3;
  *(undefined4 *)((longlong)param_4 + 0xc) = uVar4;
  local_90 = (undefined1 *)0x0;
  local_88 = 0x1800000000;
  FUN_14024dbd6(uVar9,local_150,0);
  if ((int)local_88 < 1) {
    _X = -1.0;
    uVar9 = 0;
  }
  else {
    _X = -1.0;
    lVar8 = 0;
    do {
      puVar7 = local_90;
      if (local_90 == (undefined1 *)0x0) {
        puVar7 = local_150;
      }
      plVar1 = *(longlong **)(puVar7 + lVar8 * 8);
      if ((((*(byte *)((longlong)plVar1 + 0x9c) & 1) != 0) &&
          (iVar6 = (**(code **)(*plVar1 + 0x570))(plVar1), iVar6 != 0)) &&
         (iVar6 = (**(code **)(*plVar1 + 0x578))(plVar1,param_3), iVar6 == 2)) {
        local_16c = -1.0;
        cVar5 = (**(code **)(*plVar1 + 0x7c0))(plVar1,param_2,&local_16c,&local_168);
        if ((cVar5 != '\0') && ((_X < 0.0 || (local_16c < _X)))) {
          param_4[2] = local_158;
          *param_4 = local_168;
          param_4[1] = uStack_160;
          if (param_5 != (longlong *)0x0) {
            *param_5 = (longlong)plVar1;
          }
          _X = local_16c;
          if (local_16c <= 0.0001) break;
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)local_88);
    uVar9 = 0;
    if (0.0 < _X) {
      if (_X < 0.0) {
        _X = sqrtf(_X);
        uVar9 = extraout_XMM0_Db;
      }
      else {
        _X = SQRT(_X);
      }
    }
  }
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT44(uVar9,_X);
}



// FUNCTION 1404775ec FUN_1404775ec body=1870 status=ok
// SIG undefined FUN_1404775ec(void)

void FUN_1404775ec(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  int iVar26;
  uint *puVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  longlong *plVar32;
  ulonglong uVar33;
  longlong *plVar34;
  uint uVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong *plVar39;
  ulonglong uVar40;
  undefined1 auStack_128 [39];
  byte local_101;
  int local_100;
  uint local_fc;
  ulonglong local_f8;
  longlong local_f0;
  uint local_e4;
  longlong *local_e0;
  ulonglong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  longlong local_88;
  undefined4 *puStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(byte *)(param_1 + 0x2e58) & 8) != 0) {
    plVar2 = (longlong *)(param_1 + 0x3a58);
    iVar24 = *(int *)(param_1 + 0x3a60);
    if (*(int *)(param_1 + 0x3a8c) < iVar24) {
      iVar28 = 0;
      if (*(int *)(param_1 + 0x3a8c) != 0) {
        local_68 = 0;
        uVar38 = 0;
        uStack_60 = 0;
        local_88 = 0;
        puStack_80 = (undefined4 *)0x0;
        uStack_5c = 0x80;
        uStack_58 = 0xffffffff;
        uStack_54 = 0;
        FUN_140478048();
        iVar24 = *(int *)(&DAT_00003a80 + param_1);
        if (iVar24 == 0) {
          uVar33 = 1;
          iVar28 = 0;
          iVar30 = 0;
        }
        else {
          puVar27 = *(uint **)(param_1 + 0x3a78);
          if (*(uint **)(param_1 + 0x3a78) == (uint *)0x0) {
            puVar27 = (uint *)(param_1 + 0x3a68);
          }
          uVar23 = *puVar27;
          if (uVar23 == 0) {
            iVar28 = iVar24 + 0x1e;
            if (-1 < iVar24 + -1) {
              iVar28 = iVar24 + -1;
            }
            uVar38 = 0;
            uVar33 = (ulonglong)(uint)(iVar28 >> 5);
            if (iVar28 >> 5 < 1) {
              uVar33 = uVar38;
            }
            iVar30 = 0;
            do {
              if (uVar33 == uVar38) goto LAB_140477ac7;
              iVar30 = iVar30 + 0x20;
              uVar23 = puVar27[uVar38 + 1];
              uVar38 = uVar38 + 1;
            } while (uVar23 == 0);
          }
          else {
            uVar38 = 0;
            iVar30 = 0;
          }
          uVar33 = (ulonglong)(-uVar23 & uVar23);
          uVar40 = uVar33 * 2 + 1;
          lVar37 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar37 == 0; lVar37 = lVar37 + -1) {
            }
          }
          iVar28 = (iVar30 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
          if (iVar24 <= iVar28) {
            iVar28 = iVar24;
          }
        }
        if (iVar28 < iVar24) {
          uVar23 = 0xffffffff;
          do {
            FUN_1404780c2(&local_88,&local_c8);
            lVar37 = *(longlong *)(param_1 + 0x3a58);
            lVar25 = (longlong)iVar28 * 0x3c;
            puVar3 = (undefined4 *)(lVar37 + lVar25);
            uVar7 = *puVar3;
            uVar8 = puVar3[1];
            uVar9 = puVar3[2];
            uVar10 = puVar3[3];
            puVar4 = (undefined8 *)(lVar37 + 0x10 + lVar25);
            uVar12 = *puVar4;
            uVar13 = puVar4[1];
            puVar4 = (undefined8 *)(lVar37 + 0x20 + lVar25);
            uVar14 = *puVar4;
            uVar15 = puVar4[1];
            puVar4 = (undefined8 *)(lVar37 + 0x2c + lVar25);
            uVar16 = puVar4[1];
            *(undefined8 *)(uStack_c0 + 0xb) = *puVar4;
            *(undefined8 *)(uStack_c0 + 0xd) = uVar16;
            *(undefined8 *)(uStack_c0 + 8) = uVar14;
            *(undefined8 *)(uStack_c0 + 10) = uVar15;
            *(undefined8 *)(uStack_c0 + 4) = uVar12;
            *(undefined8 *)(uStack_c0 + 6) = uVar13;
            *uStack_c0 = uVar7;
            uStack_c0[1] = uVar8;
            uStack_c0[2] = uVar9;
            uStack_c0[3] = uVar10;
            uVar23 = ~(uint)uVar33 & uVar23;
            puVar27 = *(uint **)(param_1 + 0x3a78);
            if (*(uint **)(param_1 + 0x3a78) == (uint *)0x0) {
              puVar27 = (uint *)(param_1 + 0x3a68);
            }
            iVar24 = *(int *)(&DAT_00003a80 + param_1);
            iVar28 = (int)uVar38;
            lVar37 = (longlong)iVar28;
            uVar31 = puVar27[lVar37] & uVar23;
            if (uVar31 == 0) {
              iVar29 = iVar24 + 0x1e;
              if (-1 < iVar24 + -1) {
                iVar29 = iVar24 + -1;
              }
              iVar29 = iVar29 >> 5;
              iVar26 = iVar29;
              if (iVar29 < iVar28) {
                iVar26 = iVar28;
              }
              if (iVar29 <= iVar28) break;
              lVar25 = 0;
              while( true ) {
                iVar30 = iVar30 + 0x20;
                uVar31 = puVar27[lVar37 + lVar25 + 1];
                if (uVar31 != 0) break;
                lVar25 = lVar25 + 1;
                if (iVar26 - lVar37 == lVar25) goto LAB_140477ac7;
              }
              uVar38 = (ulonglong)(iVar28 + (int)lVar25 + 1);
              uVar23 = 0xffffffff;
            }
            uVar33 = (ulonglong)(-uVar31 & uVar31);
            uVar40 = uVar33 * 2 + 1;
            lVar37 = 0x3f;
            if (uVar40 != 0) {
              for (; uVar40 >> lVar37 == 0; lVar37 = lVar37 + -1) {
              }
            }
            iVar28 = (iVar30 - ((uint)lVar37 ^ 0x3f)) + 0x3e;
          } while (iVar28 < iVar24);
        }
LAB_140477ac7:
        uStack_98 = (undefined4)*(undefined8 *)(param_1 + 0x3a88);
        uStack_94 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x3a88) >> 0x20);
        local_c8 = *plVar2;
        uStack_c0 = *(undefined4 **)(param_1 + 0x3a60);
        lVar37 = *(longlong *)(param_1 + 0x3a68);
        lVar25 = *(longlong *)(param_1 + 0x3a70);
        lStack_a8 = *(longlong *)(param_1 + 0x3a78);
        uStack_a0 = (undefined4)*(undefined8 *)(&DAT_00003a80 + param_1);
        local_9c = (undefined4)((ulonglong)*(undefined8 *)(&DAT_00003a80 + param_1) >> 0x20);
        *(ulonglong *)(param_1 + 0x3a88) = CONCAT44(uStack_54,uStack_58);
        *(longlong *)(param_1 + 0x3a78) = local_68;
        *(ulonglong *)(&DAT_00003a80 + param_1) = CONCAT44(uStack_5c,uStack_60);
        *(ulonglong *)(param_1 + 0x3a68) = CONCAT44(uStack_74,local_78);
        *(ulonglong *)(param_1 + 0x3a70) = CONCAT44(uStack_6c,uStack_70);
        *plVar2 = local_88;
        *(undefined4 **)(param_1 + 0x3a60) = puStack_80;
        local_b8._0_4_ = (undefined4)lVar37;
        local_b8._4_4_ = (undefined4)((ulonglong)lVar37 >> 0x20);
        uStack_b0._0_4_ = (undefined4)lVar25;
        uStack_b0._4_4_ = (undefined4)((ulonglong)lVar25 >> 0x20);
        uStack_60 = uStack_a0;
        uStack_5c = local_9c;
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        local_b8 = lVar37;
        uStack_b0 = lVar25;
        local_88 = local_c8;
        puStack_80 = uStack_c0;
        local_68 = lStack_a8;
        uStack_58 = uStack_98;
        uStack_54 = uStack_94;
        FUN_140478010();
        iVar24 = *(int *)(param_1 + 0x3a60);
        iVar28 = *(int *)(param_1 + 0x3a8c);
      }
      uVar23 = iVar24 - iVar28;
      if (uVar23 != 0 && iVar28 <= iVar24) {
        plVar5 = (longlong *)*plVar2;
        uVar38 = (ulonglong)uVar23;
        uVar33 = 0;
        plVar34 = plVar5;
        do {
          if ((uVar33 + 1 < uVar38) &&
             (*(byte *)(plVar34 + 1) < *(byte *)((longlong)plVar34 + 0x44))) {
            lVar37 = *plVar34;
            puVar3 = (undefined4 *)plVar34[1];
            local_b8 = plVar34[2];
            uStack_b0 = plVar34[3];
            lStack_a8 = plVar34[4];
            lVar25 = plVar34[5];
            lVar11 = *(longlong *)((longlong)plVar34 + 0x34);
            uStack_98 = (undefined4)((ulonglong)*(undefined8 *)((longlong)plVar34 + 0x2c) >> 0x20);
            uStack_94 = (undefined4)lVar11;
            uStack_90 = (undefined4)((ulonglong)lVar11 >> 0x20);
            uStack_a0 = (undefined4)lVar25;
            local_9c = (undefined4)((ulonglong)lVar25 >> 0x20);
            *(longlong *)((longlong)plVar34 + 0x2c) = plVar34[0xd];
            *(longlong *)((longlong)plVar34 + 0x34) = plVar34[0xe];
            plVar34[4] = *(longlong *)((longlong)plVar34 + 0x5c);
            plVar34[5] = *(longlong *)((longlong)plVar34 + 100);
            plVar34[2] = *(longlong *)((longlong)plVar34 + 0x4c);
            plVar34[3] = *(longlong *)((longlong)plVar34 + 0x54);
            *plVar34 = *(longlong *)((longlong)plVar34 + 0x3c);
            plVar34[1] = *(longlong *)((longlong)plVar34 + 0x44);
            local_c8._0_4_ = (undefined4)lVar37;
            local_c8._4_4_ = (undefined4)((ulonglong)lVar37 >> 0x20);
            uStack_c0._0_4_ = SUB84(puVar3,0);
            uStack_c0._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
            *(longlong *)((longlong)plVar34 + 0x5c) = lStack_a8;
            *(longlong *)((longlong)plVar34 + 100) = lVar25;
            plVar34[0xd] = CONCAT44(uStack_98,local_9c);
            plVar34[0xe] = lVar11;
            *(longlong *)((longlong)plVar34 + 0x4c) = local_b8;
            *(longlong *)((longlong)plVar34 + 0x54) = uStack_b0;
            *(undefined4 *)((longlong)plVar34 + 0x3c) = (undefined4)local_c8;
            *(undefined4 *)(plVar34 + 8) = local_c8._4_4_;
            *(undefined4 *)((longlong)plVar34 + 0x44) = (undefined4)uStack_c0;
            *(undefined4 *)(plVar34 + 9) = uStack_c0._4_4_;
            local_c8 = lVar37;
            uStack_c0 = puVar3;
          }
          uVar33 = uVar33 + 2;
          plVar34 = plVar34 + 0xf;
        } while (uVar33 < uVar38);
        if (2 < (int)uVar23) {
          uVar33 = 2;
          do {
            iVar24 = (int)uVar33;
            local_e4 = iVar24 * 2;
            local_d0 = (longlong)(int)local_e4;
            lVar37 = 0;
            do {
              local_fc = uVar23 - (int)lVar37;
              if ((int)local_e4 <= (int)local_fc) {
                local_fc = local_e4;
              }
              if ((iVar24 < (int)local_fc) && (0 < iVar24)) {
                local_f0 = lVar37 * 0x3c + (longlong)plVar5;
                iVar28 = 0;
                uVar40 = uVar33;
                while( true ) {
                  local_100 = (int)uVar40;
                  lVar25 = (longlong)local_100 * 0x3c + local_f0;
                  iVar30 = 0;
                  uVar31 = local_100 - iVar28;
                  if (uVar31 != 0 && iVar28 <= local_100) {
                    iVar30 = 0;
                    uVar36 = (ulonglong)uVar31;
                    do {
                      uVar36 = uVar36 >> 1;
                      iVar29 = (uint)uVar36 + iVar30;
                      if (*(byte *)(lVar25 + 8) <=
                          *(byte *)((longlong)iVar28 * 0x3c + local_f0 + 8 + (longlong)iVar29 * 0x3c
                                   )) {
                        iVar30 = iVar29 + (uVar31 & 1);
                      }
                      bVar6 = 1 < uVar31;
                      uVar31 = (uint)uVar36;
                    } while (bVar6);
                  }
                  iVar30 = iVar30 + iVar28;
                  local_d8 = uVar33;
                  if (local_100 - iVar30 == 0 || local_100 < iVar30) break;
                  if (local_fc - local_100 == 0 || (int)local_fc < local_100) {
                    iVar28 = 0;
                  }
                  else {
                    local_e0 = (longlong *)((longlong)iVar30 * 0x3c + local_f0);
                    local_101 = *(byte *)(local_e0 + 1);
                    local_f8 = 0;
                    uVar31 = local_fc - local_100;
                    do {
                      uVar35 = (int)local_f8 + (uVar31 >> 1);
                      if (local_101 < *(byte *)(lVar25 + 8 + (ulonglong)uVar35 * 0x3c)) {
                        local_f8 = (ulonglong)(uVar35 + (uVar31 & 1));
                      }
                      bVar6 = 1 < uVar31;
                      uVar31 = uVar31 >> 1;
                    } while (bVar6);
                    iVar28 = (int)local_f8;
                    uVar40 = (ulonglong)(uint)(local_100 + iVar28);
                    if (0 < iVar28) {
                      plVar32 = (longlong *)
                                ((longlong)(local_100 - iVar30) * 0x3c + (longlong)local_e0);
                      plVar34 = local_e0;
                      plVar39 = plVar32;
                      do {
                        while( true ) {
                          plVar1 = (longlong *)((longlong)plVar32 + 0x3c);
                          lVar25 = *plVar34;
                          puVar3 = (undefined4 *)plVar34[1];
                          local_b8 = plVar34[2];
                          uStack_b0 = plVar34[3];
                          lStack_a8 = plVar34[4];
                          lVar11 = plVar34[5];
                          uVar12 = *(undefined8 *)((longlong)plVar34 + 0x34);
                          uStack_98 = (undefined4)
                                      ((ulonglong)*(undefined8 *)((longlong)plVar34 + 0x2c) >> 0x20)
                          ;
                          uStack_94 = (undefined4)uVar12;
                          uStack_90 = (undefined4)((ulonglong)uVar12 >> 0x20);
                          uStack_a0 = (undefined4)lVar11;
                          local_9c = (undefined4)((ulonglong)lVar11 >> 0x20);
                          lVar17 = *plVar32;
                          lVar18 = plVar32[1];
                          lVar19 = plVar32[2];
                          lVar20 = plVar32[3];
                          lVar21 = plVar32[4];
                          lVar22 = plVar32[5];
                          uVar13 = *(undefined8 *)((longlong)plVar32 + 0x34);
                          *(undefined8 *)((longlong)plVar34 + 0x2c) =
                               *(undefined8 *)((longlong)plVar32 + 0x2c);
                          *(undefined8 *)((longlong)plVar34 + 0x34) = uVar13;
                          plVar34[4] = lVar21;
                          plVar34[5] = lVar22;
                          plVar34[2] = lVar19;
                          plVar34[3] = lVar20;
                          *plVar34 = lVar17;
                          plVar34[1] = lVar18;
                          plVar34 = (longlong *)((longlong)plVar34 + 0x3c);
                          local_c8._0_4_ = (undefined4)lVar25;
                          local_c8._4_4_ = (undefined4)((ulonglong)lVar25 >> 0x20);
                          uStack_c0._0_4_ = SUB84(puVar3,0);
                          uStack_c0._4_4_ = (undefined4)((ulonglong)puVar3 >> 0x20);
                          plVar32[4] = lStack_a8;
                          plVar32[5] = lVar11;
                          *(ulonglong *)((longlong)plVar32 + 0x2c) = CONCAT44(uStack_98,local_9c);
                          *(undefined8 *)((longlong)plVar32 + 0x34) = uVar12;
                          plVar32[2] = local_b8;
                          plVar32[3] = uStack_b0;
                          *(undefined4 *)plVar32 = (undefined4)local_c8;
                          *(undefined4 *)((longlong)plVar32 + 4) = local_c8._4_4_;
                          *(undefined4 *)(plVar32 + 1) = (undefined4)uStack_c0;
                          *(undefined4 *)((longlong)plVar32 + 0xc) = uStack_c0._4_4_;
                          if (plVar1 == (longlong *)
                                        ((longlong)((local_100 + iVar28) - iVar30) * 0x3c +
                                        (longlong)local_e0)) break;
                          plVar32 = plVar1;
                          if (plVar34 == plVar39) {
                            plVar39 = plVar1;
                          }
                        }
                        plVar32 = plVar39;
                        local_c8 = lVar25;
                        uStack_c0 = puVar3;
                      } while (plVar34 != plVar39);
                    }
                  }
                  if (((int)local_fc <= (int)uVar40) ||
                     (iVar28 = iVar30 + iVar28 + 1, (int)uVar40 <= iVar28)) break;
                }
              }
              lVar37 = lVar37 + local_d0;
            } while (lVar37 < (longlong)uVar38);
            uVar33 = (ulonglong)local_e4;
          } while ((int)local_e4 < (int)uVar23);
        }
      }
    }
    FUN_140477d5c(plVar2);
    if (*(int *)(param_1 + 0x3a60) == *(int *)(param_1 + 0x3a8c)) {
      *(byte *)(param_1 + 0x2e58) = *(byte *)(param_1 + 0x2e58) & 0xf7;
      *(undefined4 *)(param_1 + 0x3d0) = 0;
    }
    else {
      iVar24 = *(int *)(&DAT_00003a80 + param_1);
      if (iVar24 == 0) {
        iVar24 = 0;
      }
      else {
        puVar27 = (uint *)(param_1 + 0x3a68);
        if (*(uint **)(param_1 + 0x3a78) != (uint *)0x0) {
          puVar27 = *(uint **)(param_1 + 0x3a78);
        }
        uVar23 = *puVar27;
        if (uVar23 == 0) {
          iVar28 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar28 = iVar24 + -1;
          }
          uVar33 = 0;
          uVar38 = (ulonglong)(uint)(iVar28 >> 5);
          if (iVar28 >> 5 < 1) {
            uVar38 = uVar33;
          }
          iVar28 = 0x3e;
          do {
            if (uVar38 == uVar33) goto LAB_140477715;
            uVar23 = puVar27[uVar33 + 1];
            uVar33 = uVar33 + 1;
            iVar28 = iVar28 + 0x20;
          } while (uVar23 == 0);
        }
        else {
          iVar28 = 0x3e;
        }
        uVar38 = (ulonglong)(-uVar23 & uVar23) * 2 + 1;
        lVar37 = 0x3f;
        if (uVar38 != 0) {
          for (; uVar38 >> lVar37 == 0; lVar37 = lVar37 + -1) {
          }
        }
        iVar28 = iVar28 - ((uint)lVar37 ^ 0x3f);
        if (iVar28 < iVar24) {
          iVar24 = iVar28;
        }
      }
LAB_140477715:
      lVar37 = *(longlong *)(param_1 + 0x3a58);
      lVar25 = (longlong)iVar24 * 0x3c;
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(lVar37 + 0x2c + lVar25);
      puVar3 = (undefined4 *)(lVar37 + 0x18 + lVar25);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      *(undefined4 *)(param_1 + 0x3c0) = *puVar3;
      *(undefined4 *)(param_1 + 0x3c4) = uVar7;
      *(undefined4 *)(param_1 + 0x3c8) = uVar8;
      *(undefined4 *)(param_1 + 0x3cc) = uVar9;
      uVar23 = (uint)*(byte *)(lVar37 + 0x28 + lVar25);
      *(uint *)(param_1 + 0x2e58) = *(uint *)(param_1 + 0x2e58) & 0xffffffef | uVar23 << 4;
      if (uVar23 == 0) goto LAB_14047775f;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_128);
  }
LAB_14047775f:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140477d5c FUN_140477d5c body=691 status=ok
// SIG undefined FUN_140477d5c(void)

void FUN_140477d5c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_140477dc2;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_140477dc2:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x3c;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x38 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x34 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 140478010 FUN_140478010 body=55 status=ok
// SIG undefined FUN_140478010(void)

void FUN_140478010(longlong *param_1)

{
  FUN_140478048(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140478048 FUN_140478048 body=121 status=ok
// SIG undefined FUN_140478048(void)

void FUN_140478048(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1404782a4(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1404780c2 FUN_1404780c2 body=481 status=ok
// SIG undefined FUN_1404780c2(void)

int * FUN_1404780c2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
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
      FUN_1404783e8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x3c);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x3c) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x3c + *param_1;
  return param_2;
}



// FUNCTION 1404782a4 FUN_1404782a4 body=324 status=ok
// SIG undefined FUN_1404782a4(void)

void FUN_1404782a4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0;
  if (param_2 != 0) {
    uVar3 = (longlong)param_2 * 0x3c;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140478338;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140478338:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x3c)) {
      uVar5 = uVar3 / 0x3c & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x3c,4);
  }
  return;
}



// FUNCTION 1404783e8 FUN_1404783e8 body=369 status=ok
// SIG undefined FUN_1404783e8(void)

void FUN_1404783e8(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x3c;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14047846f;
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
LAB_14047846f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x3c)) {
    uVar7 = uVar5 / 0x3c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x3c,4);
  return;
}



// FUNCTION 14047855a FUN_14047855a body=454 status=ok
// SIG undefined FUN_14047855a(void)

longlong * FUN_14047855a(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
    FUN_1456d85e6(&DAT_14c8337f0);
    atexit((_func_5014 *)&LAB_142748837);
    _Init_thread_footer(&DAT_14c8338a0);
  }
  FUN_1463b0b86(&local_48);
  FUN_147991026(&DAT_14c8337f0,&local_40,local_48);
  if (0 < local_38) {
    lVar5 = 0;
    do {
      plVar4 = (longlong *)*param_1;
      if (plVar4 != (longlong *)0x0) goto LAB_140478688;
      plVar4 = *(longlong **)(local_40 + lVar5 * 8);
      (**(code **)(*plVar4 + 0x40))(plVar4,&local_58);
      plVar4 = local_50;
      if (&local_58 == param_1) {
LAB_140478650:
        plVar4 = local_50;
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_50 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_50)(local_50);
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
      else {
        *param_1 = local_58;
        local_58 = 0;
        plVar2 = (longlong *)param_1[1];
        if (local_50 == plVar2) goto LAB_140478650;
        local_50 = (longlong *)0x0;
        param_1[1] = (longlong)plVar4;
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar2 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
          goto LAB_140478650;
        }
      }
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < local_38);
  }
  plVar4 = (longlong *)*param_1;
  if (plVar4 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
LAB_140478688:
    uVar3 = (**(code **)(*plVar4 + 0x28))();
  }
  FUN_140635eb8(DAT_14cacf280,uVar3,0xd000000,0);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140478722 FUN_140478722 body=288 status=ok
// SIG undefined FUN_140478722(void)

undefined8 FUN_140478722(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14047883c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14047883c;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14047883c:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1404787eb;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1404787eb;
    }
  }
  uVar6 = 0;
LAB_1404787eb:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047885a FUN_14047885a body=92 status=ok
// SIG undefined FUN_14047885a(void)

void FUN_14047885a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (((*(byte *)(param_1 + 0x105) & 0x20) != 0) &&
     (lVar3 = *(longlong *)(param_1 + 0x188), lVar3 != 0)) {
    uVar1 = FUN_1409d6582();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x50))(plVar2);
      if (lVar3 != 0) {
        *(longlong *)(param_1 + 0x510) = lVar3 + 0x48;
      }
    }
  }
  FUN_1404788b6(param_1);
  return;
}



// FUNCTION 1404788b6 FUN_1404788b6 body=151 status=ok
// SIG undefined FUN_1404788b6(void)

void FUN_1404788b6(longlong param_1)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x510) == 0) {
    *(longlong *)(param_1 + 0x510) = *(longlong *)(param_1 + 0x80) + 0x620;
  }
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 == 0) {
      local_18 = 0;
      goto LAB_140478906;
    }
  }
  else {
    FUN_1456cec3c(param_1);
  }
  local_18 = param_1 + 0x30;
LAB_140478906:
  local_20 = param_1;
  FUN_14047894e(param_1 + 0x518);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047894e FUN_14047894e body=144 status=ok
// SIG undefined FUN_14047894e(void)

void FUN_14047894e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = param_1[1];
  }
  lVar2 = *param_2;
  lVar5 = 0;
  if (lVar2 != 0) {
    lVar5 = param_2[1];
  }
  if ((*param_1 == lVar2) && (lVar4 == lVar5)) {
    return;
  }
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  FUN_1404789de();
  if (*param_1 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)param_1[1];
  }
  uVar1 = (**(code **)(*plVar3 + 0x50))();
  FUN_140478a46(param_1,uVar1);
  return;
}



// FUNCTION 1404789de FUN_1404789de body=103 status=ok
// SIG undefined FUN_1404789de(void)

void FUN_1404789de(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (*param_1 == 0) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)param_1[1];
  }
  lVar1 = (**(code **)(*plVar2 + 0x48))();
  FUN_140478aca(param_1);
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xc9 | 4;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(lVar1 + 8);
  *(undefined4 *)(param_1 + 3) = 0x7f7fffff;
  lVar1 = DAT_14c8464e8;
  param_1[4] = DAT_14c8464e0;
  param_1[5] = lVar1;
  param_1[6] = DAT_14c8464f0;
  return;
}



// FUNCTION 140478a46 FUN_140478a46 body=131 status=ok
// SIG undefined FUN_140478a46(void)

void FUN_140478a46(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  bool bVar5;
  
  if (((*(byte *)(param_1 + 0x48) & 8) == 0) == (bool)param_2) {
    plVar3 = (longlong *)(param_1 + 0x50);
    if (param_2 == '\0') {
      bVar4 = 0;
      FUN_14082b712(plVar3,0);
    }
    else {
      bVar4 = 8;
      if (*(longlong *)(param_1 + 0x60) == 0) {
        *(longlong **)(param_1 + 0x68) = &DAT_14cb89c10;
        *(longlong *)(param_1 + 0x60) = param_1;
        lVar1 = DAT_14cb89c10;
        while( true ) {
          *(longlong *)(param_1 + 0x50) = lVar1;
          LOCK();
          lVar2 = **(longlong **)(param_1 + 0x68);
          bVar5 = lVar1 == lVar2;
          if (bVar5) {
            **(longlong **)(param_1 + 0x68) = (longlong)plVar3;
            lVar2 = lVar1;
          }
          UNLOCK();
          if (bVar5) break;
          *(longlong *)(param_1 + 0x50) = lVar2;
          lVar1 = **(longlong **)(param_1 + 0x68);
        }
        if (*plVar3 != 0) {
          *(longlong **)(*plVar3 + 8) = plVar3;
        }
      }
    }
    *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) & 0xf7 | bVar4;
  }
  return;
}



// FUNCTION 140478aca FUN_140478aca body=281 status=ok
// SIG undefined FUN_140478aca(void)

void FUN_140478aca(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[7] != 0) {
    FUN_140457ffc(param_1[7] + 0x130,*param_1);
    uVar5 = (**(code **)(*(longlong *)*param_1 + 0x180))();
    FUN_1409e0c66(&local_30,uVar5);
    if (local_28 != (longlong *)0x0) {
      iVar4 = (int)local_28[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_28[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_30 != 0) {
          FUN_1409e0d9e(local_30,param_1 + 7);
        }
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    param_1[7] = 0;
    plVar6 = (longlong *)param_1[8];
    if (plVar6 != (longlong *)0x0) {
      param_1[8] = 0;
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140478be4 FUN_140478be4 body=149 status=ok
// SIG undefined FUN_140478be4(void)

undefined8 FUN_140478be4(uint param_1)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca35ca8;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar6 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  iVar1 = *(int *)(lVar2 + uVar6 * 4);
  if (iVar1 < 1) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    uVar6 = CONCAT71((int7)(((ulonglong)param_1 & 0xffff) * 0x3c >> 8),
                     *(undefined1 *)(&DAT_14ca814c8 + ((ulonglong)param_1 & 0xffff) * 0xf)) &
            0xffffffffffffff04;
    uVar5 = CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 2);
  }
  else {
    uVar5 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
  }
  return uVar5;
}



// FUNCTION 140478c7a FUN_140478c7a body=97 status=ok
// SIG undefined FUN_140478c7a(void)

void FUN_140478c7a(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    iVar1 = *(int *)(param_4 + 0x10);
    lVar3 = (longlong)iVar1;
    *(uint *)(param_4 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_4 + 0x14) < iVar1 + 1U) {
      FUN_14742d27e((longlong *)(param_4 + 8),iVar1);
    }
    lVar2 = *(longlong *)(param_4 + 8);
    *(undefined8 *)(lVar2 + lVar3 * 0x18) = *(undefined8 *)(param_1 + 0x10);
    *(longlong *)(lVar2 + 8 + lVar3 * 0x18) = param_2;
    *(undefined1 *)(lVar2 + 0x10 + lVar3 * 0x18) = 0;
  }
  return;
}



// FUNCTION 140478cdb FUN_140478cdb body=260 status=ok
// SIG undefined FUN_140478cdb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140478cdb(char param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = &DAT_14c9c0ea0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9c2330) {
      FUN_144b3d300(&DAT_14c9c2330);
      if (DAT_14c9c2330 == -1) {
        _DAT_14c9c22e0 = DAT_14c9c30a0;
        _DAT_14c9c22e8 = DAT_14c9c30b8;
        _DAT_14c9c22f0 = DAT_14c9c30d0;
        _DAT_14c9c22f8 = DAT_14c9c30e8;
        _DAT_14c9c2300 = DAT_14c9c3100;
        _DAT_14c9c2308 = DAT_14c9c3118;
        _DAT_14c9c2310 = DAT_14c9c3130;
        _DAT_14c9c2318 = DAT_14c9c3148;
        _DAT_14c9c2320 = DAT_14c9c3160;
        _DAT_14c9c2328 = DAT_14c9c3178;
        _Init_thread_footer(&DAT_14c9c2330);
      }
    }
    puVar1 = (undefined8 *)(&DAT_14c9c22e0 + (ulonglong)param_2 * 8);
  }
  return *puVar1;
}



// FUNCTION 140478de0 FUN_140478de0 body=480 status=ok
// SIG undefined FUN_140478de0(void)

undefined8
FUN_140478de0(longlong *param_1,char param_2,ulonglong param_3,undefined4 param_4,
             undefined1 *param_5,undefined1 *param_6)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar6;
  undefined7 uVar8;
  undefined8 uVar7;
  code *pcVar5;
  
  *param_6 = 0;
  pcVar5 = *(code **)(*param_1 + 0x270);
  plVar6 = param_1;
  if (pcVar5 == (code *)&LAB_1447f82f4) {
    plVar6 = (longlong *)param_1[9];
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
      pcVar5 = *(code **)(*plVar6 + 0x408);
      if (pcVar5 != (code *)&LAB_14470b702) goto LAB_140478fa9;
      bVar2 = *(byte *)((longlong)plVar6 + 0x129);
      if (bVar2 == 1) {
        bVar2 = ~*(byte *)((longlong)plVar6 + 0x1d6) & 1;
      }
      uVar3 = (uint)bVar2;
    }
    else {
      pcVar5 = *(code **)(*plVar6 + 0x408);
      if (pcVar5 != (code *)&LAB_14497e176) goto LAB_140478fa9;
      uVar3 = (uint)*(byte *)(plVar6 + 0x2b);
    }
  }
  else {
LAB_140478fa9:
    uVar3 = (*pcVar5)(plVar6);
  }
  pcVar5 = *(code **)(*param_1 + 0x270);
  plVar6 = param_1;
  if (pcVar5 == (code *)&LAB_1447f82f4) {
    plVar6 = (longlong *)param_1[9];
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
      pcVar5 = *(code **)(*plVar6 + 0x408);
      if (pcVar5 != (code *)&LAB_14470b702) goto LAB_140478fb6;
      bVar2 = *(byte *)((longlong)plVar6 + 0x129);
      if (bVar2 == 1) {
        bVar2 = ~*(byte *)((longlong)plVar6 + 0x1d6) & 1;
      }
      uVar4 = (uint)bVar2;
    }
    else {
      pcVar5 = *(code **)(*plVar6 + 0x408);
      if (pcVar5 != (code *)&LAB_14497e176) goto LAB_140478fb6;
      uVar4 = (uint)*(byte *)(plVar6 + 0x2b);
    }
  }
  else {
LAB_140478fb6:
    uVar4 = (*pcVar5)(plVar6);
  }
  uVar8 = (undefined7)((param_3 & 0xffffffff) >> 8);
  if ((((char)(param_3 & 0xffffffff) == '\x01' && param_2 == '\0') && uVar3 == 0) &&
     (cVar1 = FUN_1447e4184(param_1,0,param_4), cVar1 != '\0')) {
    *param_5 = 1;
LAB_140478f5e:
    uVar7 = CONCAT71(uVar8,1);
  }
  else {
    if ((uVar4 < 2) || (cVar1 = (**(code **)(*param_1 + 0x50))(param_1), cVar1 != '\0')) {
      uVar8 = 0;
      cVar1 = FUN_1447e4184(param_1,0,param_4);
      if (cVar1 == '\0') {
        return 0;
      }
      cVar1 = (**(code **)(*param_1 + 0x50))(param_1);
      if (cVar1 == '\0' && param_2 == '\0') {
        *param_5 = 0;
        goto LAB_140478f5e;
      }
    }
    else {
      *param_6 = 1;
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 140478fc0 FUN_140478fc0 body=272 status=ok
// SIG undefined FUN_140478fc0(void)

void FUN_140478fc0(longlong *param_1,short *param_2,void *param_3)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  int iVar7;
  void *_Dst;
  ulonglong uVar8;
  
  uVar1 = param_2[2];
  if (uVar1 != 0) {
    lVar3 = *param_1;
    uVar8 = *(ulonglong *)(lVar3 + 0x30);
    uVar5 = lVar3 + 0x30 + ((longlong)uVar8 >> 0x18);
    if ((uVar8 & 1) == 0) {
      uVar5 = uVar8;
    }
    uVar8 = (ulonglong)*(uint *)(lVar3 + 0x38);
    if (0 < (int)*(uint *)(lVar3 + 0x38)) {
      iVar2 = *(int *)(lVar3 + 0x28);
      iVar7 = iVar2 + 0xe;
      if (-1 < iVar2 + 7) {
        iVar7 = iVar2 + 7;
      }
      _Dst = (void *)((ulonglong)
                      (uint)((iVar7 >> 3) +
                            (*(int *)(lVar3 + 8) + *(int *)(lVar3 + 0x18) + iVar2) * 8) + param_1[1]
                     );
      puVar6 = (ulonglong *)(uVar5 + 8);
      do {
        if (*param_2 == (short)puVar6[-1]) {
          uVar8 = *puVar6;
          uVar5 = ((longlong)uVar8 >> 0x18) + (longlong)puVar6;
          if ((uVar8 & 1) == 0) {
            uVar5 = uVar8;
          }
          if ((int)(uint)puVar6[1] < 1) {
            return;
          }
          uVar8 = 0;
          do {
            if (param_2[1] == *(short *)(uVar5 + uVar8 * 4)) {
              uVar4 = 0x40;
              if (uVar1 < 0x40) {
                uVar4 = uVar1;
              }
              memcpy(_Dst,param_3,(ulonglong)uVar4);
              memset((void *)((longlong)_Dst + (ulonglong)uVar4),0,
                     (longlong)
                     (int)((int)((uint)(ushort)param_2[2] - (uint)uVar4) >> 0x1f &
                          (uint)(ushort)param_2[2] - (uint)uVar4));
              return;
            }
            _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)(uVar5 + 2 + uVar8 * 4));
            uVar8 = uVar8 + 1;
          } while ((uint)puVar6[1] != uVar8);
          return;
        }
        _Dst = (void *)((longlong)_Dst + (ulonglong)*(ushort *)((longlong)puVar6 + -6));
        puVar6 = puVar6 + 3;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1404790d0 FUN_1404790d0 body=609 status=ok
// SIG undefined FUN_1404790d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404790d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  char cVar1;
  undefined1 auStack_1b8 [32];
  wchar_t *local_198;
  wchar_t *local_190;
  undefined4 local_188;
  undefined4 local_180;
  code *local_178;
  code *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined8 local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c0;
  undefined8 local_b8 [12];
  undefined4 auStack_58 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  memset(local_b8,0,0x90);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c49d0) {
    FUN_144b3d300(&DAT_14c9c49d0);
    if (DAT_14c9c49d0 == -1) {
      FUN_1456cbdfe();
      local_150 = &LAB_14712ac08;
      local_158 = &LAB_14712ac0c;
      local_160 = &LAB_14714d7d2;
      local_168 = FUN_14175f93a;
      local_170 = FUN_14714d7d6;
      local_178 = FUN_14714d7fe;
      local_190 = L"Main";
      local_198 = L"/Engine/Private/DepthOnlyVertexShader.usf";
      local_140 = 0;
      local_148 = 0x108;
      local_180 = 1;
      local_188 = 0;
      FUN_140db5666(&DAT_14c9c4928,2,&DAT_14c9c48c0,L"TDepthOnlyVS<false>");
      _DAT_14c9c4928 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcb454);
      _Init_thread_footer(&DAT_14c9c49d0);
    }
  }
  local_b8[DAT_14c9c4970] = &DAT_14c9c4928;
  auStack_58[DAT_14c9c4970] = 0;
  FUN_140479332();
  local_b8[DAT_14c9c5410] = &DAT_14c9c53c8;
  auStack_58[DAT_14c9c5410] = 0;
  local_c0 = &DAT_14c9c5538;
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  lStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  cVar1 = FUN_14007744c(param_1,&local_c0,param_2);
  if (cVar1 != '\0') {
    if (lStack_130 != 0) {
      *param_6 = lStack_130;
      param_6[1] = local_138;
    }
    if (local_128 != 0) {
      *param_4 = local_128;
      param_4[1] = local_138;
    }
    if (lStack_110 != 0) {
      *param_5 = lStack_110;
      param_5[1] = local_138;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140479332 FUN_140479332 body=284 status=ok
// SIG undefined FUN_140479332(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140479332(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c5470) {
    FUN_144b3d300(&DAT_14c9c5470);
    if (DAT_14c9c5470 == -1) {
      FUN_14571366e();
      FUN_140db5666(&DAT_14c9c53c8,2,&DAT_14c9c5360,L"FCustomColorPS",
                    L"/Engine/Private/DepthOnlyPixelShader.usf",L"Main",3,1,FUN_14714e55a,
                    FUN_14714e532,&LAB_142bcda02,&LAB_14714e52e,&LAB_14712ac0c,&LAB_14712ac08,0x118,
                    0);
      _DAT_14c9c53c8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142bcda2c);
      _Init_thread_footer(&DAT_14c9c5470);
    }
  }
  return &DAT_14c9c53c8;
}



// FUNCTION 14047944e FUN_14047944e body=247 status=ok
// SIG undefined FUN_14047944e(void)

void FUN_14047944e(longlong param_1)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 != 1) {
      return;
    }
    DVar2 = FUN_140ad26c0();
    DVar3 = GetCurrentThreadId();
    if (DVar2 != DVar3) {
      return;
    }
  }
  if (((((*(int *)(param_1 + 0x20) != 0) && (uVar1 = *(uint *)(param_1 + 0x1c), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x20))))) &&
     ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar6;
    }
    else {
      lVar5 = 0;
    }
    if ((*(longlong *)(lVar5 + 0x30) != 0) &&
       (lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + 0x360), lVar5 != 0)) {
      iVar4 = FUN_140ac16d8(param_1);
      uVar7 = FUN_143d2bfe0(param_1,0);
      if (iVar4 == 3) {
        FUN_143d3096c();
      }
      else {
        FUN_143d2f550(param_1,lVar5,uVar7);
      }
      FUN_143d2c0aa(param_1,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 140479546 FUN_140479546 body=1016 status=ok
// SIG undefined FUN_140479546(void)

void FUN_140479546(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  uint local_84;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar12 = *param_2;
    lVar9 = 0;
    do {
      lVar11 = *(longlong *)(lVar12 + lVar9);
      *(undefined8 *)(lVar11 + 8) = 0;
      *(undefined4 *)(lVar11 + 0x28) = 0xffffffff;
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar6 * 8 != lVar9);
  }
  iVar14 = (int)param_2[0xd];
  if (0 < iVar14) {
    lVar6 = 0;
    do {
      plVar8 = (longlong *)param_2[0xc];
      if ((longlong *)param_2[0xc] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      lVar12 = plVar8[lVar6 * 2 + 1];
      if ((longlong)(int)lVar12 != 0) {
        lVar9 = plVar8[lVar6 * 2];
        lVar11 = 0;
        do {
          lVar13 = *(longlong *)(lVar9 + lVar11);
          *(undefined8 *)(lVar13 + 8) = 0;
          *(undefined4 *)(lVar13 + 0x34) = 0xffffffff;
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)lVar12 * 8 != lVar11);
        iVar14 = (int)param_2[0xd];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar14);
  }
  iVar14 = *(int *)(param_1 + 0x144);
  if (iVar14 == 0x7fffffff) {
    iVar14 = 0;
  }
  *(int *)(param_1 + 0x144) = iVar14 + 1;
  local_80 = (longlong *)*param_2;
  lVar6 = param_2[1];
  uVar15 = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((int)param_2[0xd] < 1) {
    *(undefined4 *)(param_2 + 0x10) = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    lVar12 = 0;
    lVar9 = 0;
    do {
      plVar8 = (longlong *)param_2[0xc];
      if ((longlong *)param_2[0xc] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      *(undefined4 *)((longlong)plVar8 + lVar12 + 8) = 0;
      if (*(int *)((longlong)plVar8 + lVar12 + 0xc) < 0) {
        FUN_141729b26((longlong)plVar8 + lVar12,0);
      }
      lVar9 = lVar9 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar9 < (int)param_2[0xd]);
    iVar5 = (int)param_2[1];
    *(undefined4 *)(param_2 + 0x10) = 0;
    uVar15 = 0;
    local_58 = 0;
    uStack_50 = 0;
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 != 0) {
      uVar15 = FUN_1409669a6(&local_58);
    }
  }
  if ((int)lVar6 != 0) {
    plVar8 = local_80 + (int)lVar6;
    local_84 = *(uint *)(param_2 + 0x12) & 0x20;
    local_78 = param_1 + 0xb0;
    plVar10 = local_80;
    local_70 = plVar8;
    local_68 = param_1;
    local_60 = param_2;
    do {
      lVar6 = *plVar10;
      if ((*(int *)(lVar6 + 0x20) != iVar14) && ((*(byte *)(lVar6 + 0x2c) & 1) != 0)) {
        if (param_2 == (longlong *)0x0) {
          param_2 = (longlong *)FUN_140479aca(local_78);
          uVar15 = FUN_140479c9a(param_2 + 2,*(undefined4 *)(param_1 + 0x138),1);
        }
        local_90 = param_2;
        uVar15 = FUN_1404799cc(uVar15,lVar6,param_2);
        uVar3 = uStack_50;
        lVar12 = (longlong)(int)uStack_50;
        uVar4 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
        if (uStack_50._4_4_ < uVar4) {
          uVar15 = FUN_140479b38(&local_58,uVar3 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar12 * 8) = lVar6;
        *(int *)(lVar6 + 0x20) = iVar14;
        do {
          iVar5 = (int)uStack_50;
          do {
            if (iVar5 == 0) {
              *(undefined4 *)((longlong)local_90 + 0x84) =
                   *(undefined4 *)((longlong)local_60 + 0x84);
              uVar4 = *(uint *)(local_90 + 0x12);
              *(uint *)(local_90 + 0x12) = uVar4 | 3;
              uVar7 = *(uint *)(local_60 + 0x12) & 4;
              *(uint *)(local_90 + 0x12) = uVar4 & 0xfffffffb | 3 | uVar7;
              uVar2 = *(uint *)(local_60 + 0x12);
              *(uint *)(local_90 + 0x12) = uVar4 & 0xfffffff3 | 3 | uVar7 | uVar2 & 8;
              uVar4 = uVar4 & 0xffffffc3 | 3 | uVar7 | uVar2 & 8 |
                      *(uint *)(local_60 + 0x12) & 0x10 | local_84;
              *(uint *)(local_90 + 0x12) = uVar4;
              *(uint *)(local_90 + 0x12) = uVar4 & 0xffffffbf | *(uint *)(local_60 + 0x12) & 0x40;
              param_2 = (longlong *)0x0;
              plVar8 = local_70;
              param_1 = local_68;
              goto LAB_1404796e9;
            }
            lVar6 = *(longlong *)(local_58 + -8 + (longlong)iVar5 * 8);
            iVar5 = iVar5 + -1;
            uStack_50 = CONCAT44(uStack_50._4_4_,iVar5);
            iVar1 = *(int *)(lVar6 + 0x18);
          } while ((longlong)iVar1 == 0);
          lVar12 = *(longlong *)(lVar6 + 0x10);
          lVar9 = 0;
          do {
            lVar11 = *(longlong *)(lVar12 + lVar9);
            if (*(int *)(lVar11 + 0x20) != iVar14) {
              uVar15 = FUN_140479940(uVar15,lVar11,local_90);
              *(int *)(lVar11 + 0x20) = iVar14;
              lVar13 = *(longlong *)(lVar11 + 0x10);
              if (lVar6 == lVar13) {
                lVar13 = *(longlong *)(lVar11 + 0x18);
              }
              if (((lVar13 != 0) && ((*(byte *)(lVar13 + 0x2c) & 1) != 0)) &&
                 (*(int *)(lVar13 + 0x20) != iVar14)) {
                uVar15 = FUN_1404799cc(uVar15,lVar13,local_90);
                uVar3 = uStack_50;
                lVar11 = (longlong)(int)uStack_50;
                uVar4 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
                if (uStack_50._4_4_ < uVar4) {
                  uVar15 = FUN_140479b38(&local_58,uVar3 & 0xffffffff);
                }
                *(longlong *)(local_58 + lVar11 * 8) = lVar13;
                *(int *)(lVar13 + 0x20) = iVar14;
              }
            }
            lVar9 = lVar9 + 8;
          } while ((longlong)iVar1 * 8 != lVar9);
        } while( true );
      }
LAB_1404796e9:
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar8);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140479940 FUN_140479940 body=140 status=ok
// SIG undefined FUN_140479940(void)

void FUN_140479940(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_3 + 0x10;
  if (*(longlong *)(param_3 + 0x60) != 0) {
    lVar4 = *(longlong *)(param_3 + 0x60);
  }
  lVar3 = (longlong)*(int *)(param_2 + 0x30) * 0x10;
  iVar1 = *(int *)(lVar4 + 8 + lVar3);
  *(uint *)(lVar4 + 8 + lVar3) = iVar1 + 1U;
  if (*(uint *)(lVar4 + 0xc + lVar3) < iVar1 + 1U) {
    FUN_14082058a((longlong *)(lVar4 + lVar3),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar4 + lVar3) + (longlong)iVar1 * 8) = param_2;
  *(int *)(param_2 + 0x34) = iVar1;
  *(longlong *)(param_2 + 8) = param_3;
  uVar2 = *(uint *)(param_3 + 0x90);
  *(uint *)(param_3 + 0x90) = uVar2 | 1;
  *(int *)(param_3 + 0x80) = *(int *)(param_3 + 0x80) + 1;
  if (param_3 != 0) {
    *(uint *)(param_3 + 0x90) = uVar2 | 0x21;
  }
  return;
}



// FUNCTION 1404799cc FUN_1404799cc body=253 status=ok
// SIG undefined FUN_1404799cc(void)

void FUN_1404799cc(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  char cVar8;
  
  if (param_2 != (longlong *)0x0) {
    if ((*(byte *)((longlong)param_2 + 0x2c) & 1) != 0) {
      param_2[1] = (longlong)param_3;
      iVar2 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
        FUN_140479b38(param_3,iVar2);
      }
      *(longlong **)(*param_3 + (longlong)iVar2 * 8) = param_2;
      *(int *)(param_2 + 5) = iVar2;
      plVar7 = (longlong *)0x0;
      if (1 < *(byte *)(*param_2 + 0xc)) {
        plVar7 = (longlong *)*param_2;
      }
      lVar4 = *(longlong *)(*plVar7 + 0x500);
      lVar5 = (longlong)(int)plVar7[1] * 3;
      cVar8 = *(char *)(lVar4 + 1 + lVar5);
      cVar1 = *(char *)(lVar4 + 2 + lVar5);
      cVar6 = *(char *)((longlong)param_3 + 0x96);
      if (*(char *)((longlong)param_3 + 0x96) < cVar1) {
        cVar6 = cVar1;
      }
      cVar1 = *(char *)((longlong)param_3 + 0x95);
      if (*(char *)((longlong)param_3 + 0x95) < cVar8) {
        cVar1 = cVar8;
      }
      cVar8 = (char)*(undefined4 *)((longlong)param_3 + 0x94);
      if (cVar8 < *(char *)(lVar4 + lVar5)) {
        cVar8 = *(char *)(lVar4 + lVar5);
      }
      if (cVar8 < '\0') {
        cVar8 = -1;
      }
      if (cVar1 < '\0') {
        cVar1 = -1;
      }
      if (cVar6 < '\0') {
        cVar6 = -1;
      }
      *(char *)((longlong)param_3 + 0x94) = cVar8;
      *(char *)((longlong)param_3 + 0x95) = cVar1;
      *(char *)((longlong)param_3 + 0x96) = cVar6;
    }
    uVar3 = *(uint *)(param_3 + 0x12);
    *(uint *)(param_3 + 0x12) = uVar3 | 1;
    if (param_3 != (longlong *)0x0) {
      *(uint *)(param_3 + 0x12) = uVar3 | 0x21;
    }
  }
  return;
}



// FUNCTION 140479aca FUN_140479aca body=109 status=ok
// SIG undefined FUN_140479aca(void)

longlong FUN_140479aca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[3];
  if ((longlong)iVar1 == 0) {
    lVar2 = FUN_140479d34(param_1 + 4);
  }
  else {
    lVar2 = *(longlong *)(param_1[2] + -8 + (longlong)iVar1 * 8);
    *(int *)(param_1 + 3) = iVar1 + -1;
    *(byte *)(lVar2 + 0x90) = *(byte *)(lVar2 + 0x90) | 0xc;
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140731e0c(param_1,iVar1);
  }
  *(longlong *)(*param_1 + (longlong)iVar1 * 8) = lVar2;
  *(int *)(lVar2 + 0x7c) = iVar1;
  return lVar2;
}



// FUNCTION 140479b38 FUN_140479b38 body=353 status=ok
// SIG undefined FUN_140479b38(void)

void FUN_140479b38(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140479bbd;
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
LAB_140479bbd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140479c9a FUN_140479c9a body=154 status=ok
// SIG undefined FUN_140479c9a(void)

void FUN_140479c9a(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x58) = param_2;
    if ((uint)(*(int *)(param_1 + 0x5c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146db6b1e(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar2 = param_1;
    }
    memset((void *)((longlong)iVar1 * 0x10 + lVar2),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146db6c12(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146db6c7c(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140479d34 FUN_140479d34 body=457 status=ok
// SIG undefined FUN_140479d34(void)

void FUN_140479d34(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[3] == 0) {
    plVar5 = (longlong *)FUN_1457d04f6(param_1);
  }
  else {
    puVar6 = (undefined8 *)*param_1;
    if (*(int *)((longlong)puVar6 + 0x14) == 0) {
      if ((longlong)(int)param_1[1] < 1) {
        lVar7 = -1;
      }
      else {
        piVar8 = (int *)((longlong)puVar6 + 0x14);
        iVar11 = 0x7fffffff;
        uVar10 = 0xffffffff;
        uVar12 = 0;
        do {
          iVar1 = *piVar8;
          if (0 < iVar1 && iVar1 < iVar11) {
            uVar10 = uVar12 & 0xffffffff;
            iVar11 = iVar1;
          }
          uVar12 = uVar12 + 1;
          piVar8 = piVar8 + 8;
        } while ((longlong)(int)param_1[1] != uVar12);
        lVar7 = (longlong)(int)uVar10;
      }
      local_48 = *puVar6;
      uStack_40 = puVar6[1];
      local_38 = puVar6[2];
      uStack_30 = puVar6[3];
      uVar2 = puVar6[lVar7 * 4];
      uVar3 = (puVar6 + lVar7 * 4)[1];
      uVar4 = (puVar6 + lVar7 * 4 + 2)[1];
      puVar6[2] = puVar6[lVar7 * 4 + 2];
      puVar6[3] = uVar4;
      *puVar6 = uVar2;
      puVar6[1] = uVar3;
      puVar6[lVar7 * 4 + 2] = local_38;
      (puVar6 + lVar7 * 4 + 2)[1] = uStack_30;
      puVar6[lVar7 * 4] = local_48;
      (puVar6 + lVar7 * 4)[1] = uStack_40;
    }
    plVar5 = (longlong *)*param_1;
  }
  if ((longlong)*(int *)((longlong)plVar5 + 0x1c) == -1) {
    if ((int)plVar5[3] < (int)plVar5[2]) {
      puVar6 = (undefined8 *)plVar5[1];
      plVar5[1] = (longlong)(puVar6 + 0x14);
      *(undefined4 *)(puVar6 + 0x13) = 0xffffffff;
      *(byte *)((longlong)puVar6 + 0x9c) = *(byte *)((longlong)puVar6 + 0x9c) & 0xfe;
      *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + -1;
      *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
    }
    else {
      puVar6 = (undefined8 *)0x0;
    }
  }
  else {
    lVar7 = *plVar5;
    lVar9 = (longlong)*(int *)((longlong)plVar5 + 0x1c) * 0xa0;
    puVar6 = (undefined8 *)(lVar7 + lVar9);
    *(undefined4 *)((longlong)plVar5 + 0x1c) = *(undefined4 *)(lVar7 + 0x98 + lVar9);
    *(undefined4 *)(lVar7 + 0x98 + lVar9) = 0xffffffff;
    *(int *)((longlong)plVar5 + 0x14) = *(int *)((longlong)plVar5 + 0x14) + -1;
  }
  puVar6[0xc] = 0;
  puVar6[0xd] = 0x500000000;
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0xffffffffffffffff;
  puVar6[0x10] = 0;
  puVar6[0x11] = 0xffffffff00000000;
  *(undefined2 *)((longlong)puVar6 + 0x94) = 0xffff;
  *(undefined1 *)((longlong)puVar6 + 0x96) = 0xff;
  *(undefined4 *)(puVar6 + 0x12) = 0xc;
  *(byte *)((longlong)puVar6 + 0x9c) = *(byte *)((longlong)puVar6 + 0x9c) | 1;
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140479efe FUN_140479efe body=921 status=ok
// SIG undefined FUN_140479efe(void)

void FUN_140479efe(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined8 *_Src;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined4 local_230;
  undefined4 *local_228;
  undefined *local_220;
  undefined1 *local_218;
  undefined8 local_208;
  undefined8 local_200;
  undefined1 local_1f8 [184];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 *local_c8;
  undefined8 uStack_c0;
  undefined1 local_b0 [64];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (*(longlong *)(param_1 + 0x460) != 0) {
    *(undefined8 *)(param_1 + 0x460) = 0;
  }
  local_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  local_d8 = 2;
  lVar4 = *(longlong *)(param_1 + 0x1c8);
  if (lVar4 == 0) {
    local_e8 = DAT_14c8464f0;
    local_f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    local_f8 = *(undefined8 *)(lVar4 + 0x260);
    uStack_f0 = *(undefined8 *)(lVar4 + 0x268);
    local_e8 = *(undefined8 *)(lVar4 + 0x270);
  }
  local_d4 = param_2;
  uVar3 = FUN_1447210f0(param_1);
  local_218 = &DAT_14cad0f10;
  local_220 = &DAT_14cad0f68;
  local_228 = &local_d8;
  local_238 = &DAT_14c8463d0;
  local_230 = 1;
  cVar2 = FUN_14038e76e(uVar3,&local_c8,&local_f8,&local_f8);
  if (cVar2 != '\0') {
    local_70 = (undefined1 *)0x0;
    local_68 = 0x800000000;
    if ((longlong)(int)uStack_c0 != 0) {
      puVar7 = local_c8 + (longlong)(int)uStack_c0 * 0x20;
      _Src = local_c8;
      do {
        memcpy(local_1f8,_Src,0xb8);
        local_140 = _Src[0x17];
        local_138 = _Src[0x18];
        uStack_130 = _Src[0x19];
        local_128 = *(undefined4 *)(_Src + 0x1a);
        local_124 = *(undefined1 *)((longlong)_Src + 0xd4);
        local_100 = _Src[0x1f];
        local_120 = *(undefined4 *)(_Src + 0x1b);
        uStack_11c = *(undefined4 *)((longlong)_Src + 0xdc);
        uStack_118 = *(undefined4 *)(_Src + 0x1c);
        uStack_114 = *(undefined4 *)((longlong)_Src + 0xe4);
        local_110 = *(undefined4 *)(_Src + 0x1d);
        uStack_10c = *(undefined4 *)((longlong)_Src + 0xec);
        uStack_108 = *(undefined4 *)(_Src + 0x1e);
        uStack_104 = *(undefined4 *)((longlong)_Src + 0xf4);
        lVar4 = FUN_14485cccc(&local_140);
        uVar1 = local_68;
        if (lVar4 != 0) {
          puVar5 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar5 = local_b0;
          }
          lVar9 = (longlong)(int)local_68;
          if (lVar9 != 0) {
            lVar8 = 0;
            do {
              if (*(longlong *)(puVar5 + lVar8) == lVar4) goto LAB_14047a12b;
              lVar8 = lVar8 + 8;
            } while (lVar9 * 8 - lVar8 != 0);
          }
          uVar6 = (int)local_68 + 1;
          local_68 = CONCAT44(local_68._4_4_,uVar6);
          if (local_68._4_4_ < uVar6) {
            FUN_1457145b8(local_b0,uVar1 & 0xffffffff);
          }
          puVar5 = local_70;
          if (local_70 == (undefined1 *)0x0) {
            puVar5 = local_b0;
          }
          *(longlong *)(puVar5 + lVar9 * 8) = lVar4;
          FUN_14571423e(param_1,lVar4);
          if (*(char *)(param_1 + 0x459) != '\0') {
            if (local_70 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_14047a209;
          }
        }
LAB_14047a12b:
        _Src = _Src + 0x20;
      } while (_Src != puVar7);
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    FUN_140e259ca(*(longlong *)(param_1 + 0x390),param_2,1);
    FUN_14127091c(*(undefined8 *)(param_1 + 0x390),1);
    FUN_1449e3cec(*(undefined8 *)(param_1 + 0x390),1,1);
    FUN_14045627c(*(undefined8 *)(param_1 + 0x390),0,1);
    lVar4 = *(longlong *)(param_1 + 0x390);
    FUN_145714438(&local_200);
    FUN_145714324(lVar4 + 0x599,param_1,local_200);
    lVar4 = *(longlong *)(param_1 + 0x390);
    FUN_1457144f8(&local_208);
    FUN_1457143ae(lVar4 + 0x59a,param_1,local_208);
    FUN_140b506a4(*(undefined8 *)(param_1 + 0x390));
  }
LAB_14047a209:
  if (local_c8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047a298 FUN_14047a298 body=93 status=ok
// SIG undefined FUN_14047a298(void)

int FUN_14047a298(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)((longlong)param_1 + 0x6c);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    if (DAT_14ca955b8 == 0) {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = &PTR_LAB_14a38c150;
        FUN_1449b67f0(param_1 + 1);
        FUN_1400020a8(param_1);
      }
    }
    else {
      FUN_14047a2f6(&DAT_14ca955a8,param_1);
    }
  }
  return iVar2 + -1;
}



// FUNCTION 14047a2f6 FUN_14047a2f6 body=139 status=ok
// SIG undefined FUN_14047a2f6(void)

void FUN_14047a2f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined4 *)(param_2 + 0x68) = 0;
    plVar1 = (longlong *)(param_1 + 0x60);
    iVar2 = *(int *)(param_1 + 0x68);
    *(uint *)(param_1 + 0x68) = iVar2 + 1U;
    if (iVar2 + 1U <= *(uint *)(param_1 + 0x6c)) goto LAB_14047a338;
  }
  else {
    *(undefined4 *)(param_2 + 0x68) = 2;
    plVar1 = (longlong *)(param_1 + 0x50);
    iVar2 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar2 + 1U;
    if (iVar2 + 1U <= *(uint *)(param_1 + 0x5c)) goto LAB_14047a338;
  }
  FUN_14047a382(plVar1,iVar2);
LAB_14047a338:
  *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00014047a350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 14047a382 FUN_14047a382 body=353 status=ok
// SIG undefined FUN_14047a382(void)

void FUN_14047a382(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14047a407;
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
LAB_14047a407:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14047a4f6 FUN_14047a4f6 body=475 status=ok
// SIG undefined FUN_14047a4f6(void)

undefined8 FUN_14047a4f6(longlong param_1,float param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if ((0.0 < *(float *)(param_1 + 0x128)) &&
     (param_2 = *(float *)(param_1 + 0x128) - param_2, *(float *)(param_1 + 0x128) = param_2,
     param_2 <= 0.0)) {
    iVar2 = *(int *)(param_1 + 0x50);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar13 = 0;
      iVar4 = 0;
      iVar9 = 0;
    }
    else {
      puVar5 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x38);
      }
      uVar6 = *puVar5;
      if (uVar6 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar13 = 0;
        uVar14 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar14 = uVar13;
        }
        iVar9 = 0;
        do {
          if (uVar14 == uVar13) goto LAB_14047a67c;
          iVar9 = iVar9 + 0x20;
          uVar6 = puVar5[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar6 == 0);
      }
      else {
        uVar13 = 0;
        iVar9 = 0;
      }
      uVar14 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      uVar6 = 0xffffffff;
      do {
        FUN_14047a6d2(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 0xc)
                     );
        uVar6 = ~(uint)uVar14 & uVar6;
        puVar5 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar5 = (uint *)(param_1 + 0x38);
        }
        iVar3 = *(int *)(param_1 + 0x50);
        iVar4 = (int)uVar13;
        lVar11 = (longlong)iVar4;
        uVar10 = puVar5[lVar11] & uVar6;
        if (uVar10 == 0) {
          iVar7 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar7 = iVar3 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar9 = iVar9 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar4) {
            iVar8 = iVar4;
          }
          if (iVar4 < iVar7) {
            lVar12 = 0;
            do {
              uVar10 = puVar5[lVar11 + lVar12 + 1];
              if (uVar10 != 0) {
                uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
                uVar6 = 0xffffffff;
                goto LAB_14047a645;
              }
              iVar9 = iVar9 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar8 - lVar11 != lVar12);
            uVar6 = 0xffffffff;
            iVar4 = iVar8;
          }
          uVar13 = (ulonglong)(iVar4 + 1);
          iVar4 = iVar3;
        }
        else {
LAB_14047a645:
          uVar14 = (ulonglong)(-uVar10 & uVar10);
          uVar1 = uVar14 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar4) {
            iVar4 = iVar3;
          }
        }
      } while (iVar4 != iVar2);
    }
LAB_14047a67c:
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 300);
  }
  return 1;
}



// FUNCTION 14047a6d2 FUN_14047a6d2 body=443 status=ok
// SIG undefined FUN_14047a6d2(void)

void FUN_14047a6d2(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined ***pppuVar6;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_80;
  longlong *local_78;
  uint local_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_6c = param_2;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0xc) == param_2) {
          FUN_1447cbafe(param_1 + 0x130,local_68,&local_6c,0);
          if (((*(longlong *)(param_1 + 0x180) == 0) || (*(longlong *)(param_1 + 0x188) == 0)) ||
             (*(int *)(*(longlong *)(param_1 + 0x188) + 8) < 1)) {
            uVar4 = FUN_1401cb356();
            local_58 = (undefined ***)0x0;
            local_48 = &PTR_LAB_14b4f1f60;
            local_68[0] = FUN_143f42f5a;
            local_88 = local_68;
            local_40 = param_1;
            FUN_1401cbba4(uVar4,&local_80,L"FGbxPresence::UpdatePresence",0x3f800000);
            *(undefined8 *)(param_1 + 0x180) = local_80;
            local_80 = 0;
            plVar2 = *(longlong **)(param_1 + 0x188);
            *(longlong **)(param_1 + 0x188) = local_78;
            local_78 = (longlong *)0x0;
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))();
              }
              if (local_78 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)local_78 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_78 + 0x10))();
                }
              }
            }
            if (local_68[0] != (code *)0x0) {
              pppuVar6 = local_58;
              if (local_58 == (undefined ***)0x0) {
                pppuVar6 = &local_48;
              }
              (*(code *)(*pppuVar6)[2])();
            }
          }
          *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_1 + 300);
          break;
        }
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14047a88e FUN_14047a88e body=100 status=ok
// SIG undefined FUN_14047a88e(void)

void FUN_14047a88e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(param_1 + 0x48),0);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14047a8f2(param_1);
  return;
}



// FUNCTION 14047a8f2 FUN_14047a8f2 body=149 status=ok
// SIG undefined FUN_14047a8f2(void)

void FUN_14047a8f2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14047a987 FUN_14047a987 body=188 status=ok
// SIG undefined FUN_14047a987(void)

void FUN_14047a987(longlong *param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  if (param_3 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  uVar4 = param_3 + (iVar2 == 0);
  *(uint *)(param_1 + 1) = uVar4 + iVar2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar4) {
    FUN_144a2dbb8(param_1,iVar2);
  }
  lVar8 = *param_1;
  lVar3 = (longlong)(int)(iVar2 + -1 + (uint)(iVar2 == 0));
  lVar1 = lVar8 + lVar3 * 2;
  if ((int)param_3 < 1) {
    uVar5 = (ulonglong)(int)param_3;
    puVar6 = (undefined2 *)(lVar1 + uVar5 * 2);
    if (puVar6 != (undefined2 *)0x0) goto LAB_14047aa34;
  }
  else {
    uVar5 = (ulonglong)param_3;
    uVar7 = 0;
    do {
      *(short *)(lVar1 + uVar7 * 2) = (short)*(char *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
    puVar6 = (undefined2 *)(lVar1 + uVar5 * 2);
    if (puVar6 != (undefined2 *)0x0) goto LAB_14047aa34;
    lVar8 = *param_1;
    uVar7 = 0;
    do {
      *(short *)(lVar8 + lVar3 * 2 + uVar7 * 2) = (short)*(char *)(param_2 + uVar7);
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  puVar6 = (undefined2 *)(lVar8 + lVar3 * 2 + uVar5 * 2);
LAB_14047aa34:
  *puVar6 = 0;
  return;
}



// FUNCTION 14047aa44 FUN_14047aa44 body=363 status=ok
// SIG undefined FUN_14047aa44(void)

longlong * FUN_14047aa44(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined8 *)*param_1;
    *param_1 = *param_2;
    *param_2 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = (undefined8 *)param_1[1];
    param_1[1] = param_2[1];
    param_2[1] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = (undefined8 *)param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = (undefined8 *)param_1[3];
    param_1[3] = param_2[3];
    param_2[3] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = (undefined8 *)param_1[4];
    param_1[4] = param_2[4];
    param_2[4] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = (undefined8 *)param_1[5];
    param_1[5] = param_2[5];
    param_2[5] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    puVar2 = (undefined8 *)param_1[6];
    param_1[6] = param_2[6];
    param_2[6] = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 14047abb0 FUN_14047abb0 body=218 status=ok
// SIG undefined FUN_14047abb0(void)

undefined8 * FUN_14047abb0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_LAB_14a217b60;
  plVar1 = param_1 + 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 1;
  local_28 = param_2;
  (**(code **)(*DAT_14ca83900 + 0xb8))(DAT_14ca83900,&local_30);
  if (plVar1 != &local_30) {
    lVar4 = *plVar1;
    *plVar1 = local_30;
    local_30 = 0;
    if (lVar4 == 0) goto LAB_14047ac24;
    LOCK();
    puVar2 = (uint *)(lVar4 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_30 != 0) {
    LOCK();
    puVar2 = (uint *)(local_30 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_14047ac24:
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047ac8c FUN_14047ac8c body=161 status=ok
// SIG undefined FUN_14047ac8c(void)

longlong FUN_14047ac8c(void)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1401aee1c();
  if (*(char *)(lVar1 + 0x119) == '\0') {
    FUN_145715823(&local_28);
    if ((longlong *)(lVar1 + 0x48) == &local_28) {
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar1 + 0x48) = local_28;
      *(undefined4 *)(lVar1 + 0x50) = local_20;
      *(undefined4 *)(lVar1 + 0x54) = local_1c;
    }
    *(undefined1 *)(lVar1 + 0x119) = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1 + 0x48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047ad2e FUN_14047ad2e body=151 status=ok
// SIG undefined FUN_14047ad2e(void)

undefined8 FUN_14047ad2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_90;
  ulonglong *local_88;
  char local_80;
  undefined2 local_78 [48];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = local_78;
  local_80 = '\0';
  local_88 = &local_18;
  local_90 = local_98;
  FUN_1448fb8e4(param_1,param_3,&local_98);
  *local_90 = 0;
  FUN_140056680(param_2,local_98);
  if (local_80 == '\x01') {
    FUN_1400020a8(local_98);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047adc6 FUN_14047adc6 body=69 status=ok
// SIG undefined FUN_14047adc6(void)

bool FUN_14047adc6(undefined8 *param_1)

{
  int iVar1;
  bool bVar2;
  
  if (DAT_14ca19734 == 0) {
    bVar2 = false;
  }
  else if (DAT_14ca13100 == *(int *)(param_1 + 1)) {
    if (DAT_14ca13100 < 2) {
      return true;
    }
    iVar1 = FUN_144a80a00(DAT_14ca130f8,*param_1);
    bVar2 = iVar1 == 0;
  }
  else {
    bVar2 = *(int *)(param_1 + 1) + DAT_14ca13100 == 1;
  }
  return bVar2;
}



// FUNCTION 14047ae0c FUN_14047ae0c body=179 status=ok
// SIG undefined FUN_14047ae0c(void)

void FUN_14047ae0c(longlong param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x3c8))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x3c0) + (ulonglong)param_2 * 8);
    iVar2 = *(int *)(lVar3 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar4 = *(longlong *)(lVar3 + 0x20);
      lVar7 = 0;
      do {
        plVar5 = *(longlong **)(lVar4 + lVar7);
        if ((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 0xc) == param_2)) {
          (**(code **)(*plVar5 + 0x300))();
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar2 * 8 != lVar7);
    }
    *(undefined4 *)(lVar3 + 0x28) = 0;
    if (*(int *)(lVar3 + 0x2c) < 0) {
      FUN_1488ef02e(lVar3 + 0x20);
    }
    puVar6 = *(undefined8 **)(lVar3 + 0x68);
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar3 + 0x68) = 0;
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014047aea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar6)(puVar6,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14047aec0 FUN_14047aec0 body=282 status=ok
// SIG undefined FUN_14047aec0(void)

undefined8 * FUN_14047aec0(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_143ddd528);
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



// FUNCTION 14047afda FUN_14047afda body=146 status=ok
// SIG undefined FUN_14047afda(void)

longlong * FUN_14047afda(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14001cc68(0x88,0x10);
  FUN_14047b06c(lVar3,param_2);
  plVar4 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_149e44a40;
  plVar4[2] = lVar3;
  *param_1 = lVar3;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  return param_1;
}



// FUNCTION 14047b06c FUN_14047b06c body=387 status=ok
// SIG undefined FUN_14047b06c(void)

undefined8 * FUN_14047b06c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 **ppuVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 1;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_149e44780;
  param_1[0xe] = 0;
  iVar2 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 0xf) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
    param_1[0x10] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar2,0);
    memcpy((void *)param_1[0xe],_Src,(longlong)iVar2 * 2);
    iVar2 = *(int *)(param_1 + 0xf);
    param_1[0x10] = 0;
    if (1 < iVar2) {
      ppuVar1 = (undefined8 **)(param_1 + 0x10);
      uVar3 = param_1[0xe];
      puVar5 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
      FUN_144869430(puVar5);
      puVar5[0x12] = uVar3;
      puVar5[0x13] = 0;
      puVar5[0x14] = (ulonglong)(iVar2 - 1) * 2;
      *(undefined1 *)(puVar5 + 0x15) = 0;
      *(byte *)(puVar5 + 5) = *(byte *)(puVar5 + 5) | 1;
      *(byte *)((longlong)puVar5 + 0x29) = *(byte *)((longlong)puVar5 + 0x29) & 0xfe;
      *puVar5 = &PTR_FUN_149e447c0;
      local_40 = puVar5;
      if (ppuVar1 != &local_40) {
        puVar4 = *ppuVar1;
        *ppuVar1 = puVar5;
        local_40 = (undefined8 *)0x0;
        FUN_14047b1f0(ppuVar1,puVar4);
      }
      FUN_14047b1f0(&local_40,local_40);
      param_1[4] = *ppuVar1;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047b1f0 FUN_14047b1f0 body=146 status=ok
// SIG undefined FUN_14047b1f0(void)

void FUN_14047b1f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 == (undefined8 *)0x0) {
    return;
  }
  if (*(char *)(param_2 + 0x15) == '\x01') {
    FUN_1400020a8(param_2[0x12]);
    param_2[0x12] = 0;
  }
  *param_2 = &PTR__purecall_149e35f70;
  plVar1 = (longlong *)param_2[0xb];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  lVar2 = param_2[0xf];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14047b282 FUN_14047b282 body=269 status=ok
// SIG undefined FUN_14047b282(void)

ulonglong FUN_14047b282(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [48];
  longlong local_48;
  undefined8 uStack_40;
  longlong local_38;
  ulonglong uStack_30;
  longlong local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  plStack_20 = (longlong *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  cVar4 = FUN_14047b390();
  if ((cVar4 == '\0') || (local_28 == 0)) {
    uVar5 = 0;
  }
  else {
    if (plStack_20 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_20 + 1) = (int)plStack_20[1] + 1;
      UNLOCK();
    }
    plVar3 = (longlong *)param_2[1];
    *param_2 = local_28;
    param_2[1] = (longlong)plStack_20;
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
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
  }
  plVar3 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_14047c710(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047b390 FUN_14047b390 body=3377 status=ok
// SIG undefined FUN_14047b390(void)

undefined8 FUN_14047b390(longlong *param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  uint local_d4;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  longlong *local_98;
  longlong *plStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = (longlong *)0x0;
  plStack_90 = (longlong *)0x0;
  local_d4 = param_3;
  cVar6 = FUN_14047c1fc(param_1,&local_9c);
  local_e0 = 0;
  if (cVar6 == '\0') {
    plVar13 = (longlong *)0x0;
  }
  else {
    local_d0 = param_1 + 9;
    plVar13 = (longlong *)0x0;
    plVar15 = (longlong *)0x0;
    local_c8 = param_2;
    do {
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1);
      local_b0 = (void *)0x0;
      local_a8 = *(int *)(puVar8 + 1);
      lVar14 = (longlong)local_a8;
      pvVar3 = (void *)*puVar8;
      if (lVar14 == 0) {
        local_a4 = 0;
      }
      else {
        FUN_1446dd670(&local_b0,local_a8,0);
        memcpy(local_b0,pvVar3,lVar14 * 2);
      }
      plVar12 = plStack_90;
      local_98 = (longlong *)0x0;
      if (plStack_90 != (longlong *)0x0) {
        plStack_90 = (longlong *)0x0;
        LOCK();
        plVar10 = plVar12 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
      uVar5 = uStack_80;
      plVar12 = plVar13;
      switch(local_9c) {
      case 0:
        if (plVar15 != (longlong *)0x0) {
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          lVar14 = (longlong)(int)uStack_80;
          uVar7 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
          if (uStack_80._4_4_ < uVar7) {
            FUN_14047d758(&local_88,uVar5 & 0xffffffff);
          }
          *(longlong **)(local_88 + lVar14 * 0x10) = plVar15;
          *(longlong **)(local_88 + 8 + lVar14 * 0x10) = plVar13;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
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
        }
        plVar11 = (longlong *)FUN_14001cc68(0x48,0x10);
        plVar11[1] = (longlong)&DAT_100000001;
        *plVar11 = (longlong)&PTR_FUN_149e44f50;
        plVar11[2] = 0;
        plVar11[3] = 0;
        plVar11[4] = 0;
        plVar11[5] = 0;
        plVar11[6] = 0;
        plVar11[7] = 0;
        plVar11[8] = 0;
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        if (plVar11 == plVar13) {
          if (plVar13 == (longlong *)0x0) {
            plVar12 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar15 = plVar11 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar15 = plVar11;
              goto joined_r0x00014047c086;
            }
          }
        }
        else {
          plVar12 = plVar11;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar13 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar15 = plVar13;
              plVar13 = plVar11;
joined_r0x00014047c086:
              plVar12 = plVar13;
              if (iVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar11 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
        plVar15 = plVar11 + 2;
        *(int *)plVar15 = 6;
        FUN_1402980a2(plVar11 + 3,local_b0);
        plVar10 = (longlong *)FUN_14001cc68(0x60,0x10);
        plVar10[1] = (longlong)&DAT_100000001;
        *plVar10 = (longlong)&PTR_FUN_149e441a0;
        plVar10[6] = 0;
        plVar10[7] = 0;
        plVar10[8] = 0;
        plVar10[9] = 0;
        plVar10[2] = 0;
        plVar10[3] = 0;
        plVar10[4] = 0;
        plVar10[5] = 0;
        plVar10[10] = 0;
        plVar10[0xb] = 0;
        *(undefined4 *)((longlong)plVar10 + 0x3c) = 0x80;
        *(undefined4 *)(plVar10 + 8) = 0xffffffff;
        plVar13 = plVar12;
        if (plVar10 == (longlong *)0x0) {
          plVar11[7] = 0x10;
          plVar16 = (longlong *)plVar11[8];
          if (plVar16 != (longlong *)0x0) {
            plVar11[8] = 0;
LAB_14047be11:
            LOCK();
            plVar11 = plVar16 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar16)(plVar16);
              LOCK();
              piVar1 = (int *)((longlong)plVar16 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar16 + 0x10))(plVar16);
              }
            }
            if (plVar10 != (longlong *)0x0) goto LAB_14047b72b;
          }
        }
        else {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          plVar11[7] = (longlong)(plVar10 + 2);
          plVar16 = (longlong *)plVar11[8];
          if (plVar10 == plVar16) {
            LOCK();
            plVar11 = plVar10 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
          }
          else {
            plVar11[8] = (longlong)plVar10;
            if (plVar16 != (longlong *)0x0) goto LAB_14047be11;
          }
LAB_14047b72b:
          LOCK();
          plVar11 = plVar10 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar14 = *plVar10;
LAB_14047bdbf:
              (**(code **)(lVar14 + 0x10))(plVar10);
              plVar13 = plVar12;
            }
          }
        }
        break;
      case 1:
        if (0 < (int)uStack_80) {
          iVar2 = (int)plVar15[2] + -1;
          if ((int)plVar15[2] == 0) {
            iVar2 = 0;
          }
          FUN_1402980a2(&local_b0,plVar15[1],iVar2);
          plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&PTR_FUN_149e440d0;
          lVar14 = plVar15[5];
          lVar4 = plVar15[6];
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          local_98 = plVar11 + 2;
          plVar11[2] = (longlong)&PTR_FUN_149e440f0;
          plVar11[4] = lVar14;
          plVar11[5] = lVar4;
          *(undefined4 *)(plVar11 + 3) = 6;
          if (plVar11 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            goto LAB_14047b7d0;
          }
LAB_14047bede:
          plVar15 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            plStack_90 = (longlong *)0x0;
            goto LAB_14047bef5;
          }
LAB_14047b7f6:
          FUN_14047c50a(&local_88,&local_c0);
          plVar10 = local_b8;
          plVar15 = local_c0;
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
            UNLOCK();
          }
          if (local_b8 == plVar13) {
            if (plVar13 == (longlong *)0x0) {
              plVar12 = (longlong *)0x0;
            }
            else {
              LOCK();
              plVar13 = local_b8 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar2 = *piVar1;
                UNLOCK();
                plVar13 = plVar10;
                goto joined_r0x00014047c05d;
              }
            }
          }
          else {
            plVar12 = local_b8;
            if (plVar13 != (longlong *)0x0) {
              LOCK();
              plVar11 = plVar13 + 1;
              *(int *)plVar11 = (int)*plVar11 + -1;
              UNLOCK();
              if ((int)*plVar11 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar2 = *piVar1;
                UNLOCK();
                plVar12 = plVar10;
joined_r0x00014047c05d:
                if (iVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))();
                }
              }
            }
          }
          plVar10 = local_b8;
          plVar13 = plVar12;
          if (local_b8 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_b8 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*local_b8)(local_b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar14 = *plVar10;
                goto LAB_14047bdbf;
              }
            }
          }
        }
        break;
      case 2:
        if (plVar15 != (longlong *)0x0) {
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          lVar14 = (longlong)(int)uStack_80;
          uVar7 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar7);
          if (uStack_80._4_4_ < uVar7) {
            FUN_14047d758(&local_88,uVar5 & 0xffffffff);
          }
          *(longlong **)(local_88 + lVar14 * 0x10) = plVar15;
          *(longlong **)(local_88 + 8 + lVar14 * 0x10) = plVar13;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
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
        }
        plVar12 = (longlong *)FUN_14001cc68(0x48,0x10);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_149e44f50;
        plVar12[2] = 0;
        plVar12[3] = 0;
        plVar12[4] = 0;
        plVar12[5] = 0;
        plVar12[6] = 0;
        plVar12[7] = 0;
        plVar12[8] = 0;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        if (plVar12 == plVar13) {
          if (plVar13 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            LOCK();
            plVar15 = plVar12 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            plVar10 = plVar13;
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar15 = plVar12;
              goto joined_r0x00014047c0af;
            }
          }
        }
        else {
          plVar10 = plVar12;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar15 = plVar13 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              iVar2 = *piVar1;
              UNLOCK();
              plVar15 = plVar13;
              plVar13 = plVar12;
joined_r0x00014047c0af:
              plVar10 = plVar13;
              if (iVar2 == 0) {
                (**(code **)(*plVar15 + 0x10))();
              }
            }
          }
        }
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar12 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        plVar15 = plVar12 + 2;
        *(int *)plVar15 = 5;
        FUN_1402980a2(plVar12 + 3,local_b0);
        plVar13 = plVar10;
        break;
      case 3:
        if (0 < (int)uStack_80) {
          iVar2 = (int)plVar15[2] + -1;
          if ((int)plVar15[2] == 0) {
            iVar2 = 0;
          }
          FUN_1402980a2(&local_b0,plVar15[1],iVar2);
          plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
          plVar11[1] = (longlong)&DAT_100000001;
          *plVar11 = (longlong)&DAT_149e44000;
          plVar10 = plVar11 + 2;
          FUN_14047cd48(plVar10,plVar15 + 3);
          local_98 = plVar10;
          if (plVar11 == (longlong *)0x0) goto LAB_14047bede;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
LAB_14047b7d0:
          if (plVar11 == plStack_90) {
            LOCK();
            plVar15 = plVar11 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
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
            bVar17 = plStack_90 != (longlong *)0x0;
            plVar15 = plStack_90;
            plStack_90 = plVar11;
            if (bVar17) {
LAB_14047bef5:
              LOCK();
              plVar10 = plVar15 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar15 + 0x10))(plVar15);
                }
              }
              if (plVar11 == (longlong *)0x0) goto LAB_14047b7f6;
            }
          }
          LOCK();
          plVar15 = plVar11 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar1 = (int *)((longlong)plVar11 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          goto LAB_14047b7f6;
        }
        break;
      case 4:
        lVar14 = param_1[0xd];
        plVar12 = (longlong *)FUN_14001cc68(0x28,0x10);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_149e43f30;
        local_98 = plVar12 + 2;
        plVar12[2] = (longlong)&PTR_FUN_149e43f50;
        *(char *)(plVar12 + 4) = (char)lVar14;
        *(undefined4 *)(plVar12 + 3) = 4;
        goto LAB_14047b8b0;
      case 5:
        uVar9 = (**(code **)(*param_1 + 0x10))(param_1);
        plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_149e43e60;
        plVar10 = plVar12 + 2;
        FUN_14047c0ce(plVar10,uVar9);
LAB_14047b4e2:
        local_98 = plVar10;
        if (plVar12 == (longlong *)0x0) goto LAB_14047bd01;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        goto LAB_14047b4f4;
      case 6:
        if ((local_d4 & 1) != 0) {
          plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
          plVar12[1] = (longlong)&DAT_100000001;
          *plVar12 = (longlong)&PTR_LAB_149e44f70;
          plVar10 = plVar12 + 2;
          FUN_14684269a(plVar10,local_d0);
          goto LAB_14047b4e2;
        }
        lVar14 = param_1[0xb];
        plVar12 = (longlong *)FUN_14001cc68(0x28,0x10);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_149e43d90;
        local_98 = plVar12 + 2;
        plVar12[2] = (longlong)&PTR_FUN_149e43db0;
        plVar12[4] = lVar14;
        *(undefined4 *)(plVar12 + 3) = 3;
        goto LAB_14047b8b0;
      case 7:
        plVar12 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_149e43cb0;
        local_98 = plVar12 + 2;
        plVar12[2] = (longlong)&PTR_FUN_149e43cd0;
        *(undefined4 *)(plVar12 + 3) = 1;
LAB_14047b8b0:
        if (plVar12 == (longlong *)0x0) {
LAB_14047bd01:
          plVar10 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            plStack_90 = (longlong *)0x0;
LAB_14047bd18:
            LOCK();
            plVar11 = plVar10 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              (**(code **)*plVar10)(plVar10);
              LOCK();
              piVar1 = (int *)((longlong)plVar10 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar10 + 0x10))(plVar10);
              }
            }
            if (plVar12 != (longlong *)0x0) goto LAB_14047b510;
          }
        }
        else {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
LAB_14047b4f4:
          if (plVar12 == plStack_90) {
            LOCK();
            plVar10 = plVar12 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*plVar12)(plVar12);
              LOCK();
              piVar1 = (int *)((longlong)plVar12 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar12 + 0x10))(plVar12);
              }
            }
          }
          else {
            bVar17 = plStack_90 != (longlong *)0x0;
            plVar10 = plStack_90;
            plStack_90 = plVar12;
            if (bVar17) goto LAB_14047bd18;
          }
LAB_14047b510:
          LOCK();
          plVar10 = plVar12 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        break;
      case 8:
        if (local_b0 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_e0 = 0;
        goto LAB_14047bbd4;
      }
      if ((local_98 != (longlong *)0x0) && (plVar15 != (longlong *)0x0)) {
        if ((int)*plVar15 == 6) {
          FUN_14047c142(plVar15[5],&local_b0);
        }
        else {
          iVar2 = (int)plVar15[4];
          *(uint *)(plVar15 + 4) = iVar2 + 1U;
          if (*(uint *)((longlong)plVar15 + 0x24) < iVar2 + 1U) {
            FUN_14047d050(plVar15 + 3,iVar2);
          }
          lVar14 = plVar15[3];
          *(longlong **)(lVar14 + (longlong)iVar2 * 0x10) = local_98;
          *(longlong **)(lVar14 + 8 + (longlong)iVar2 * 0x10) = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_90 + 1) = (int)plStack_90[1] + 1;
            UNLOCK();
          }
        }
      }
      if (local_b0 != (void *)0x0) {
        FUN_1400020a8();
      }
      cVar6 = FUN_14047c1fc(param_1,&local_9c);
      plVar12 = local_c8;
    } while (cVar6 != '\0');
    local_e0 = 0;
    if ((plVar15 != (longlong *)0x0) && ((int)param_1[8] < 2)) {
      *(int *)local_c8 = (int)*plVar15;
      if (plVar15 != local_c8) {
        iVar2 = (int)plVar15[2];
        pvVar3 = (void *)plVar15[1];
        *(int *)(local_c8 + 2) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)local_c8 + 0x14) == 0) {
          *(int *)((longlong)local_c8 + 0x14) = 0;
        }
        else {
          plVar10 = local_c8 + 1;
          FUN_1446dd670(plVar10,iVar2);
          if (iVar2 != 0) {
            memcpy((void *)*plVar10,pvVar3,(longlong)iVar2 * 2);
          }
        }
      }
      FUN_14047d664(plVar12 + 3,plVar15 + 3);
      lVar14 = plVar15[5];
      lVar4 = plVar15[6];
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar15 = (longlong *)plVar12[6];
      plVar12[5] = lVar14;
      plVar12[6] = lVar4;
      local_e0 = CONCAT71((int7)((ulonglong)lVar14 >> 8),1);
      if (plVar15 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar15 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
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
  }
LAB_14047bbd4:
  plVar15 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar12 = plStack_90 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
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
  FUN_14047d616(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return local_e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047c0ce FUN_14047c0ce body=115 status=ok
// SIG undefined FUN_14047c0ce(void)

undefined8 * FUN_14047c0ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149e43e80;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 1) = 2;
  return param_1;
}



// FUNCTION 14047c142 FUN_14047c142 body=184 status=ok
// SIG undefined FUN_14047c142(void)

void FUN_14047c142(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void **local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (void *)0x0;
  local_50 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_50;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_48 = &local_58;
  local_40 = param_3;
  FUN_1449b9e04(param_1,local_34,&local_48,0);
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047c1fc FUN_14047c1fc body=468 status=ok
// SIG undefined FUN_14047c1fc(void)

ulonglong FUN_14047c1fc(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  wchar_t *pwVar5;
  ulonglong uVar6;
  undefined7 uVar7;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 0x40) < 2) {
    if (*(longlong **)(param_1 + 0x20) == (longlong *)0x0) {
      *param_2 = 8;
      pwVar5 = L"Null Stream";
    }
    else {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
      if (cVar4 == '\0') {
        if (*(char *)(param_1 + 0x69) == '\0') {
          *(undefined4 *)(param_1 + 0x30) = 0;
          if (*(int *)(param_1 + 0x34) != 0) {
            FUN_1446f8c06(param_1 + 0x28,0);
          }
          piVar1 = (int *)(param_1 + 0x18);
          do {
            if ((longlong)*(int *)(param_1 + 0x10) < 1) {
LAB_14047c2b9:
              cVar4 = FUN_14047d6c2(param_1,piVar1);
            }
            else {
              iVar2 = *(int *)(*(longlong *)(param_1 + 8) + -4 +
                              (longlong)*(int *)(param_1 + 0x10) * 4);
              if (iVar2 == 6) {
                cVar4 = FUN_14047c3e0(param_1,piVar1);
              }
              else {
                if (iVar2 != 5) goto LAB_14047c2b9;
                cVar4 = FUN_14047c9ce(param_1,piVar1);
              }
            }
            if (cVar4 == '\0') {
              bVar3 = false;
              break;
            }
            bVar3 = true;
          } while (*piVar1 == 0);
          *param_2 = *(int *)(&DAT_149e44af0 + (longlong)*(int *)(param_1 + 0x18) * 4);
          *(bool *)(param_1 + 0x69) = *(int *)(param_1 + 0x10) == 0;
          uVar7 = (undefined7)((ulonglong)param_2 >> 8);
          if ((bVar3) && (*param_2 != 8)) {
            uVar6 = CONCAT71(uVar7,1);
            if ((*(int *)(param_1 + 0x10) == 0) &&
               (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))(), cVar4 == '\0')) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
            }
          }
          else {
            *param_2 = 8;
            uVar6 = CONCAT71(uVar7,1);
            if (*(int *)(param_1 + 0x40) < 2) {
              FUN_140056680(local_30,L"Unknown Error Occurred");
              FUN_14684250c(param_1,local_30);
              if (local_30[0] != 0) {
                FUN_1400020a8();
              }
            }
          }
          goto LAB_14047c33f;
        }
        *param_2 = 8;
        pwVar5 = L"Unexpected additional input found.";
      }
      else {
        if (*(char *)(param_1 + 0x69) != '\0') goto LAB_14047c2b2;
        *param_2 = 8;
        pwVar5 = L"Improperly formatted.";
      }
    }
    FUN_140056680(local_30,pwVar5);
    FUN_14684250c(param_1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    uVar6 = CONCAT71((int7)((ulonglong)local_30 >> 8),1);
  }
  else {
    *param_2 = 8;
LAB_14047c2b2:
    uVar6 = 0;
  }
LAB_14047c33f:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14047c3e0 FUN_14047c3e0 body=278 status=ok
// SIG undefined FUN_14047c3e0(void)

undefined8 FUN_14047c3e0(longlong param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  *param_2 = 0;
  cVar2 = FUN_1449b96c2();
  if (cVar2 != '\0') {
    iVar3 = *param_2;
    if (iVar3 == 3) {
      uVar5 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
      goto LAB_14047c4a6;
    }
    if (iVar1 == 2) {
LAB_14047c445:
      if (iVar3 == 7) {
        uVar5 = 0;
        iVar1 = *(int *)(param_1 + 0x50) + -1;
        if (*(int *)(param_1 + 0x50) == 0) {
          iVar1 = 0;
        }
        FUN_1402980a2(param_1 + 0x28,*(undefined8 *)(param_1 + 0x48),iVar1);
        *param_2 = 0;
        cVar2 = FUN_1449b96c2(param_1,param_2);
        if (cVar2 == '\0') goto LAB_14047c4a6;
        if (*param_2 == 6) {
          *param_2 = 0;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
        }
        pwVar4 = L"Colon token expected, but not found.";
      }
      else {
        pwVar4 = L"String token expected, but not found.";
      }
    }
    else {
      if (iVar3 == 1) {
        *param_2 = 0;
        cVar2 = FUN_1449b96c2(param_1,param_2);
        if (cVar2 == '\0') goto LAB_14047c4fc;
        iVar3 = *param_2;
        goto LAB_14047c445;
      }
      pwVar4 = L"Comma token expected, but not found.";
    }
    FUN_140056680(local_30,pwVar4);
    FUN_14684250c(param_1,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_14047c4fc:
  uVar5 = 0;
LAB_14047c4a6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047c50a FUN_14047c50a body=93 status=ok
// SIG undefined FUN_14047c50a(void)

undefined8 * FUN_14047c50a(longlong *param_1,undefined8 *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  *param_2 = *(undefined8 *)(lVar1 + -0x10 + (longlong)iVar2 * 0x10);
  lVar1 = *(longlong *)(lVar1 + -8 + (longlong)iVar2 * 0x10);
  param_2[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    iVar2 = (int)param_1[1];
  }
  FUN_14047c954(param_1,iVar2 + -1);
  if (param_3 == '\x01') {
    FUN_14047c568(param_1);
  }
  return param_2;
}



// FUNCTION 14047c568 FUN_14047c568 body=64 status=ok
// SIG undefined FUN_14047c568(void)

void FUN_14047c568(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14047c5a8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 14047c5a8 FUN_14047c5a8 body=87 status=ok
// SIG undefined FUN_14047c5a8(void)

ulonglong FUN_14047c5a8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 14047c610 FUN_14047c610 body=64 status=ok
// SIG undefined FUN_14047c610(void)

void FUN_14047c610(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14047c650(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14047c650 FUN_14047c650 body=87 status=ok
// SIG undefined FUN_14047c650(void)

ulonglong FUN_14047c650(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if ((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) == 0) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14047c6a8 FUN_14047c6a8 body=104 status=ok
// SIG undefined FUN_14047c6a8(void)

void FUN_14047c6a8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x40);
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
  FUN_14047c710(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30));
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14047c710 FUN_14047c710 body=73 status=ok
// SIG undefined FUN_14047c710(void)

void FUN_14047c710(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14047c75a FUN_14047c75a body=67 status=ok
// SIG undefined FUN_14047c75a(void)

void FUN_14047c75a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149e440f0;
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x00014047c792. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14047c79e FUN_14047c79e body=46 status=ok
// SIG undefined FUN_14047c79e(void)

void FUN_14047c79e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14047c7cc(param_1 + 0x10);
  return;
}



// FUNCTION 14047c7cc FUN_14047c7cc body=55 status=ok
// SIG undefined FUN_14047c7cc(void)

void FUN_14047c7cc(longlong *param_1)

{
  FUN_14047cde4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14047c804 FUN_14047c804 body=137 status=ok
// SIG undefined FUN_14047c804(void)

void FUN_14047c804(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  int iVar10;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_14047c88e();
    if (iVar10 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x28);
      FUN_14683bfd0(puVar1);
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[5];
      uVar7 = param_3[6];
      uVar8 = param_3[7];
      puVar1[4] = param_3[4];
      puVar1[5] = uVar6;
      puVar1[6] = uVar7;
      puVar1[7] = uVar8;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14683bf46(param_1,*param_4,1);
      *param_4 = iVar10;
      uVar9 = 1;
      goto LAB_14047c838;
    }
  }
  uVar9 = 0;
LAB_14047c838:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar9;
  }
  return;
}



// FUNCTION 14047c88e FUN_14047c88e body=197 status=ok
// SIG undefined FUN_14047c88e(void)

int FUN_14047c88e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14047c8d0:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14047c92c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14047c92c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14047c8ea;
    }
  }
  return -1;
LAB_14047c92c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14047c8ea:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14047c8d0;
}



// FUNCTION 14047c954 FUN_14047c954 body=122 status=ok
// SIG undefined FUN_14047c954(void)

void FUN_14047c954(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 14047c9ce FUN_14047c9ce body=168 status=ok
// SIG undefined FUN_14047c9ce(void)

ulonglong FUN_14047c9ce(undefined8 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *param_2;
  *param_2 = 0;
  cVar2 = FUN_1449b96c2();
  if (cVar2 != '\0') {
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if ((*param_2 == 5) || (iVar1 == 4)) goto LAB_14047ca25;
    if (*param_2 == 1) {
      *param_2 = 0;
      cVar2 = FUN_1449b96c2(param_1,param_2);
      if (cVar2 != '\0') goto LAB_14047ca25;
    }
    else {
      FUN_140056680(local_38,L"Comma token expected, but not found.");
      FUN_14684250c(param_1,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar3 = 0;
LAB_14047ca25:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047ca78 FUN_14047ca78 body=719 status=ok
// SIG undefined FUN_14047ca78(void)

int * FUN_14047ca78(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_140549c28(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14047cc3e;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14047cc3e:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 14047cd48 FUN_14047cd48 body=110 status=ok
// SIG undefined FUN_14047cd48(void)

undefined8 * FUN_14047cd48(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_149e44020;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_14047d15e(param_1 + 2,iVar1,0);
    FUN_14047cdb6(param_1[2],uVar2,iVar1);
  }
  *(undefined4 *)(param_1 + 1) = 5;
  return param_1;
}



// FUNCTION 14047cdb6 FUN_14047cdb6 body=45 status=ok
// SIG undefined FUN_14047cdb6(void)

void FUN_14047cdb6(longlong param_1,longlong param_2,int param_3)

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



// FUNCTION 14047cde4 FUN_14047cde4 body=589 status=ok
// SIG undefined FUN_14047cde4(void)

void FUN_14047cde4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar7 = 0;
    iVar14 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar14 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar14 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_14047cf70;
        iVar14 = iVar14 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar14 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      lVar13 = *param_1;
      plVar6 = *(longlong **)(lVar13 + 0x18 + (longlong)iVar7 * 0x28);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar3 = (int *)((longlong)plVar6 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      if (*(longlong *)(lVar13 + (longlong)iVar7 * 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar13 = (longlong)iVar7;
      uVar8 = puVar11[lVar13] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar8 = puVar11[lVar13 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar13 == lVar12) goto LAB_14047cf70;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_14047cf70:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar8 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar8 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar8;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14047d032 FUN_14047d032 body=1 status=ok
// SIG undefined FUN_14047d032(void)

void FUN_14047d032(void)

{
  return;
}



// FUNCTION 14047d034 FUN_14047d034 body=1 status=ok
// SIG undefined FUN_14047d034(void)

void FUN_14047d034(void)

{
  return;
}



// FUNCTION 14047d036 FUN_14047d036 body=25 status=ok
// SIG undefined FUN_14047d036(void)

void FUN_14047d036(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_149e43e80;
  lVar1 = *(longlong *)(param_1 + 0x20);
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



// FUNCTION 14047d050 FUN_14047d050 body=269 status=ok
// SIG undefined FUN_14047d050(void)

void FUN_14047d050(longlong param_1,int param_2)

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



// FUNCTION 14047d15e FUN_14047d15e body=228 status=ok
// SIG undefined FUN_14047d15e(void)

void FUN_14047d15e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14047d242 FUN_14047d242 body=655 status=ok
// SIG undefined FUN_14047d242(void)

ulonglong FUN_14047d242(longlong param_1,ushort param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  ushort uVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  wchar_t *pwVar9;
  uint uVar10;
  bool bVar11;
  double dVar12;
  undefined1 auStack_98 [46];
  ushort local_6a;
  wchar_t *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
  if (cVar5 == '\0') {
    bVar3 = false;
    bVar8 = true;
    uVar10 = 0;
    do {
      uVar4 = param_2;
      if (!bVar8) {
        plVar1 = *(longlong **)(param_1 + 0x20);
        if (*(code **)(*plVar1 + 0x170) == FUN_1447395b8) {
          local_6a = *(ushort *)(plVar1[0x12] + plVar1[0x13]);
          plVar1[0x13] = plVar1[0x13] + 2;
        }
        else {
          (**(code **)(*plVar1 + 0x170))(plVar1,&local_6a,2);
        }
        if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x29) & 2) != 0) {
          pwVar9 = L"Stream I/O Error";
          goto LAB_14047d46c;
        }
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
        uVar4 = local_6a;
      }
      local_6a = uVar4;
      if ((9 < (ushort)(local_6a - 0x30)) &&
         ((0x3a < local_6a - 0x2b ||
          ((0x40000000400000dU >> ((ulonglong)(local_6a - 0x2b) & 0x3f) & 1) == 0)))) {
        plVar1 = *(longlong **)(param_1 + 0x20);
        lVar7 = (**(code **)(*plVar1 + 0x28))(plVar1);
        (**(code **)(*plVar1 + 0x1a0))(plVar1,lVar7 + -2);
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
LAB_14047d3c7:
        if ((bVar3) || (((1 < uVar10 - 2 && (uVar10 != 8)) && (uVar10 != 6)))) {
          if (param_2 == 0x2d) goto LAB_14047d491;
          pwVar9 = L"Poorly formed Json Number Token.";
          goto LAB_14047d46c;
        }
        iVar2 = (int)uStack_60 + -1;
        if ((int)uStack_60 == 0) {
          iVar2 = 0;
        }
        FUN_1402980a2(param_1 + 0x48,local_68,iVar2);
        pwVar9 = local_68;
        if ((int)uStack_60 == 0) {
          pwVar9 = L"";
        }
        dVar12 = wcstod(pwVar9,(wchar_t **)0x0);
        *(double *)(param_1 + 0x58) = dVar12;
        uVar6 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
        goto LAB_14047d421;
      }
      if (uVar10 != 3) {
                    /* WARNING: Could not recover jumptable at 0x00014047d372. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar6 = (*(code *)((longlong)&DAT_149e45180 + (longlong)(int)(&DAT_149e45180)[uVar10]))
                          ((code *)((longlong)&DAT_149e45180 +
                                   (longlong)(int)(&DAT_149e45180)[uVar10]));
        return uVar6;
      }
      uVar10 = 3;
      bVar8 = bVar3;
      if ((9 < (ushort)(local_6a - 0x30)) && (uVar10 = 4, local_6a != 0x2e)) {
        bVar11 = (local_6a & 0xffdf) == 0x45;
        uVar10 = bVar11 + 3 + (uint)bVar11;
        bVar8 = true;
        if (bVar11) {
          bVar8 = bVar3;
        }
      }
      bVar3 = bVar8;
      if (bVar3) goto LAB_14047d3c7;
      FUN_140002184(&local_68);
      cVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
      bVar8 = false;
    } while (cVar5 == '\0');
  }
  pwVar9 = L"Number Token Abruptly Ended.";
LAB_14047d46c:
  FUN_140056680(local_58,pwVar9);
  FUN_14684250c(param_1,local_58);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_14047d491:
  uVar6 = 0;
LAB_14047d421:
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 14047d616 FUN_14047d616 body=77 status=ok
// SIG undefined FUN_14047d616(void)

void FUN_14047d616(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14047d664 FUN_14047d664 body=93 status=ok
// SIG undefined FUN_14047d664(void)

undefined8 * FUN_14047d664(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14047c710(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14047d15e(param_1,iVar1);
      FUN_14047cdb6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14047d6c2 FUN_14047d6c2 body=148 status=ok
// SIG undefined FUN_14047d6c2(void)

undefined8 FUN_14047d6c2(undefined8 param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_14047d9c8();
  if (cVar1 != '\0') {
    *param_2 = 0;
    cVar1 = FUN_1449b96c2(param_1,param_2);
    if (cVar1 != '\0') {
      uVar2 = 1;
      if ((*param_2 == 2) || (*param_2 == 4)) goto LAB_14047d704;
      FUN_140056680(local_28,L"Open Curly or Square Brace token expected, but not found.");
      FUN_14684250c(param_1,local_28);
      if (local_28[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar2 = 0;
LAB_14047d704:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047d758 FUN_14047d758 body=269 status=ok
// SIG undefined FUN_14047d758(void)

void FUN_14047d758(longlong param_1,int param_2)

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



// FUNCTION 14047d866 FUN_14047d866 body=353 status=ok
// SIG undefined FUN_14047d866(void)

void FUN_14047d866(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14047d8eb;
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
LAB_14047d8eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 14047d9c8 FUN_14047d9c8 body=336 status=ok
// SIG undefined FUN_14047d9c8(void)

ulonglong FUN_14047d9c8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  ulonglong uVar4;
  undefined1 auStack_68 [46];
  ushort local_3a;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x38))();
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  do {
    if (cVar2 != '\0') {
LAB_14047da94:
      if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return uVar4 & 0xffffffff;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    plVar1 = *(longlong **)(param_1 + 0x20);
    if (*(code **)(*plVar1 + 0x170) == FUN_1447395b8) {
      local_3a = *(ushort *)(plVar1[0x12] + plVar1[0x13]);
      plVar1[0x13] = plVar1[0x13] + 2;
    }
    else {
      (**(code **)(*plVar1 + 0x170))(plVar1,&local_3a,2);
    }
    plVar1 = *(longlong **)(param_1 + 0x20);
    if ((*(byte *)((longlong)plVar1 + 0x29) & 2) != 0) {
      FUN_140056680(local_38,L"Stream I/O Error");
      FUN_14684250c(param_1,local_38);
      if (local_38[0] != 0) {
        FUN_1400020a8();
      }
      uVar4 = 0;
      goto LAB_14047da94;
    }
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    if (local_3a < 0xd) {
      if (local_3a != 9) {
        if (local_3a != 10) goto LAB_14047da78;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        *(undefined4 *)(param_1 + 100) = 0;
      }
    }
    else if ((local_3a != 0xd) && (local_3a != 0x20)) {
LAB_14047da78:
      lVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x1a0))(plVar1,lVar3 + -2);
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
      goto LAB_14047da94;
    }
    cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  } while( true );
}



// FUNCTION 14047db1a FUN_14047db1a body=1016 status=ok
// SIG undefined FUN_14047db1a(void)

undefined4 FUN_14047db1a(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  void *_Src;
  char cVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_2f8 [36];
  undefined4 local_2d4;
  longlong local_2d0;
  longlong *local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  undefined4 local_2b0;
  wchar_t *local_2a8;
  undefined4 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  uint uStack_290;
  wchar_t *local_288;
  undefined4 local_280;
  longlong local_278;
  int local_270;
  undefined4 local_26c;
  undefined8 local_268;
  ulonglong uStack_260;
  undefined4 local_258 [2];
  undefined1 local_250 [272];
  undefined1 local_140;
  undefined1 local_138;
  undefined7 local_134;
  undefined1 uStack_12d;
  undefined7 uStack_12c;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_288 = L"Contents";
  local_280 = 8;
  local_2c8 = param_1;
  local_2c0 = param_3;
  puVar8 = (undefined8 *)FUN_14571608c(param_2);
  local_278 = 0;
  iVar3 = *(int *)(puVar8 + 1);
  uVar9 = *puVar8;
  local_270 = iVar3;
  if (iVar3 == 0) {
    local_26c = 0;
    local_2d4 = (undefined4)CONCAT71((int7)((ulonglong)puVar8 >> 8),1);
  }
  else {
    FUN_14047d15e(&local_278,iVar3,0);
    uVar9 = FUN_14047cdb6(local_278,uVar9,iVar3);
    lVar10 = (longlong)local_270;
    local_2d4 = (undefined4)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    if (lVar10 != 0) {
      local_2d0 = local_278;
      lVar11 = 0;
      do {
        puVar8 = (undefined8 *)(**(code **)**(undefined8 **)(local_2d0 + lVar11))();
        uVar9 = *puVar8;
        plVar4 = (longlong *)puVar8[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_258[0] = 0;
        local_268 = (void *)0x0;
        uStack_260 = 0;
        memset(local_250,0,0x110);
        local_140 = 2;
        local_138 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_134 = 0;
        uStack_12d = 0;
        uStack_12c = 0;
        local_120 = 0;
        uStack_118 = 0;
        local_f4 = 0xffffffff00000080;
        local_ec = 0;
        local_e0 = 0;
        local_d8 = 0;
        local_b0 = 0;
        local_a8 = 0;
        local_d0 = 0;
        uStack_c8 = 0;
        local_a4 = 0xffffffff00000080;
        local_9c = 0;
        local_90 = 0;
        local_88 = 0;
        local_70 = 0;
        uStack_68 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_2a8 = L"File";
        local_2a0 = 4;
        FUN_14047df9c(uVar9,&local_298,&local_2a8);
        if (local_268 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_268 = (void *)CONCAT44(uStack_294,local_298);
        uStack_260 = (ulonglong)uStack_290;
        local_2b8 = L"Descriptor";
        local_2b0 = 10;
        puVar8 = (undefined8 *)FUN_14047df14(uVar9,&local_2b8);
        cVar7 = FUN_14047e3a8(local_258,*puVar8,local_2c0);
        plVar1 = local_2c8;
        if (cVar7 == '\0') {
          FUN_140a49b34(local_258);
          if (local_268 != (void *)0x0) {
            FUN_1400020a8();
          }
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
          local_2d4 = 0;
          break;
        }
        iVar3 = (int)local_2c8[1];
        *(uint *)(local_2c8 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)local_2c8 + 0xc) < iVar3 + 1U) {
          FUN_145715f16(local_2c8,iVar3);
        }
        _Src = local_268;
        lVar5 = *plVar1;
        lVar6 = (longlong)iVar3 * 0x208;
        puVar8 = (undefined8 *)(lVar5 + lVar6);
        *(undefined8 *)(lVar5 + lVar6) = 0;
        *(int *)(lVar5 + 8 + lVar6) = (int)uStack_260;
        if ((longlong)(int)uStack_260 == 0) {
          *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar8,uStack_260 & 0xffffffff,0);
          memcpy((void *)*puVar8,_Src,(longlong)(int)uStack_260 * 2);
        }
        FUN_140b8455e(puVar8 + 2);
        FUN_140a49b34(local_258);
        if (local_268 != (void *)0x0) {
          FUN_1400020a8();
        }
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
        lVar11 = lVar11 + 0x10;
      } while (lVar10 * 0x10 != lVar11);
    }
  }
  FUN_14047c710(local_278,local_270);
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_2d4;
}



// FUNCTION 14047df14 FUN_14047df14 body=135 status=ok
// SIG undefined FUN_14047df14(void)

undefined8 FUN_14047df14(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  FUN_14047e0ee(local_28,&local_38,&local_28,6);
  uVar3 = (**(code **)*local_38)();
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047df9c FUN_14047df9c body=136 status=ok
// SIG undefined FUN_14047df9c(void)

undefined8 FUN_14047df9c(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_14047e0ee(local_28,&local_38,&local_28,0);
  FUN_14047e026(local_38,param_2);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047e026 FUN_14047e026 body=107 status=ok
// SIG undefined FUN_14047e026(void)

undefined8 * FUN_14047e026(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_2 = 0;
  param_2[1] = 0;
  cVar1 = (**(code **)(*param_1 + 0x58))();
  if (cVar1 == '\0') {
    FUN_140056680(local_28,L"String");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047e092 FUN_14047e092 body=91 status=ok
// SIG undefined FUN_14047e092(void)

undefined8 FUN_14047e092(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if ((undefined8 *)(param_1 + 0x10) != param_2) {
    iVar1 = *(int *)(param_1 + 0x18);
    _Src = *(void **)(param_1 + 0x10);
    *(int *)(param_2 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
      }
    }
  }
  return 1;
}



// FUNCTION 14047e0ee FUN_14047e0ee body=344 status=ok
// SIG undefined FUN_14047e0ee(void)

longlong * FUN_14047e0ee(longlong *param_1,longlong *param_2,longlong *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  if ((int)param_3[1] < 1) {
    uVar7 = 0;
  }
  else {
    lVar9 = 0;
    uVar7 = 0;
    do {
      uVar3 = *(ushort *)(*param_3 + lVar9 * 2);
      uVar8 = ((uint)uVar3 + (uint)(0x19 < uVar3 - 0x61) * 0x20) - 0x20;
      uVar10 = (uint)(uVar7 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar7 ^ uVar8) & 0xff) * 4);
      uVar7 = (ulonglong)
              (uVar10 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar8 >> 8 & 0xff) * 4));
      lVar9 = lVar9 + 1;
    } while ((int)param_3[1] != (int)lVar9);
  }
  iVar5 = FUN_1449baa48(param_1,uVar7);
  if (iVar5 != -1) {
    lVar9 = *param_1 + (longlong)iVar5 * 0x28;
    if ((((longlong *)(lVar9 + 0x10) != (longlong *)0x0 && lVar9 != 0) &&
        (lVar4 = *(longlong *)(lVar9 + 0x10), lVar4 != 0)) &&
       ((param_4 == 0 || (*(int *)(lVar4 + 8) == param_4)))) {
      *param_2 = lVar4;
      lVar9 = *(longlong *)(lVar9 + 0x18);
      param_2[1] = lVar9;
      if (lVar9 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  plVar6 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e43cb0;
  plVar6[2] = (longlong)&PTR_FUN_149e43cd0;
  *(undefined4 *)(plVar6 + 3) = 1;
  *param_2 = (longlong)(plVar6 + 2);
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14047e246 FUN_14047e246 body=343 status=ok
// SIG undefined FUN_14047e246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14047e246(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  undefined *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (undefined *)0x0;
  cVar3 = (**(code **)(*param_1 + 0x80))();
  if (cVar3 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926c98) {
      FUN_144b3d300(&DAT_14c926c98);
      if (DAT_14c926c98 == -1) {
        plVar4 = (longlong *)FUN_14001cc68(0x60,0x10);
        plVar4[1] = (longlong)&DAT_100000001;
        *plVar4 = (longlong)&PTR_FUN_149e441a0;
        _DAT_14c926c88 = plVar4 + 2;
        plVar4[6] = 0;
        plVar4[7] = 0;
        plVar4[8] = 0;
        plVar4[9] = 0;
        plVar4[2] = 0;
        plVar4[3] = 0;
        plVar4[4] = 0;
        plVar4[5] = 0;
        plVar4[10] = 0;
        plVar4[0xb] = 0;
        *(undefined4 *)((longlong)plVar4 + 0x3c) = 0x80;
        *(undefined4 *)(plVar4 + 8) = 0xffffffff;
        DAT_14c926c90 = plVar4;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
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
        atexit(FUN_14279e895);
        _Init_thread_footer(&DAT_14c926c98);
      }
    }
    local_18 = &DAT_14c926c88;
    FUN_140056680(local_28,L"Object");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047e3a8 FUN_14047e3a8 body=5580 status=ok
// SIG undefined FUN_14047e3a8(void)

/* WARNING: Removing unreachable block (ram,0x00014047f217) */
/* WARNING: Removing unreachable block (ram,0x00014047f397) */

ulonglong FUN_14047e3a8(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  wchar_t *pwVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  wchar_t *pwVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  undefined1 auStack_458 [40];
  longlong *local_430;
  longlong local_428;
  longlong local_420;
  longlong local_418;
  wchar_t *local_410;
  undefined4 local_408;
  wchar_t *local_400;
  undefined4 local_3f8;
  wchar_t *local_3f0;
  undefined4 local_3e8;
  wchar_t *local_3e0;
  undefined4 local_3d8;
  wchar_t *local_3d0;
  undefined4 local_3c8;
  wchar_t *local_3c0;
  undefined4 local_3b8;
  wchar_t *local_3b0;
  undefined4 local_3a8;
  wchar_t *local_3a0;
  undefined4 local_398;
  wchar_t *local_390;
  undefined4 local_388;
  wchar_t *local_380;
  undefined4 local_378;
  wchar_t *local_370;
  undefined4 local_368;
  wchar_t *local_360;
  undefined4 local_358;
  wchar_t *local_350;
  undefined4 local_348;
  wchar_t *local_340;
  undefined4 local_338;
  wchar_t *local_330;
  undefined4 local_328;
  wchar_t *local_320;
  undefined4 local_318;
  undefined1 local_30c [4];
  char local_308;
  undefined7 uStack_307;
  longlong *local_2f8;
  longlong *local_2f0;
  longlong *local_2e8 [2];
  wchar_t *local_2d8;
  undefined4 local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8 [2];
  wchar_t *local_2a8;
  undefined4 local_2a0;
  wchar_t *local_298;
  undefined4 local_290;
  wchar_t *local_288;
  undefined4 local_280;
  wchar_t *local_278;
  undefined4 local_270;
  wchar_t *local_268;
  undefined4 local_260;
  wchar_t *local_258;
  undefined4 local_250;
  wchar_t *local_248;
  undefined4 local_240;
  wchar_t *local_238;
  undefined4 local_230;
  wchar_t *local_228;
  undefined4 local_220;
  wchar_t *local_218;
  undefined4 local_210;
  wchar_t *local_208;
  undefined4 local_200;
  wchar_t *local_1f8;
  undefined4 local_1f0;
  wchar_t *local_1e8;
  undefined4 local_1e0;
  wchar_t *local_1d8;
  undefined4 local_1d0;
  wchar_t *local_1c8;
  undefined4 local_1c0;
  wchar_t *local_1b8;
  undefined4 local_1b0;
  wchar_t *local_1a8;
  undefined4 local_1a0;
  wchar_t *local_198;
  undefined4 local_190;
  undefined4 local_184;
  char local_180;
  undefined7 uStack_17f;
  longlong *local_170;
  longlong *local_168;
  wchar_t *local_160;
  undefined4 local_158;
  longlong *local_150;
  undefined4 local_148;
  longlong *local_140 [2];
  longlong *local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  wchar_t *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  wchar_t *local_110;
  undefined4 local_108;
  wchar_t *local_100;
  undefined4 local_f8;
  uint local_ec;
  longlong *local_e8;
  longlong *local_e0;
  wchar_t **local_d8;
  undefined4 *puStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 local_ac;
  char local_ab;
  wchar_t *local_a8;
  undefined8 uStack_a0;
  longlong *local_98 [2];
  undefined4 local_88 [4];
  undefined1 local_78 [16];
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_458;
  local_100 = L"FileVersion";
  local_f8 = 0xb;
  cVar3 = FUN_14047faa2(param_2,&local_100,&local_ec);
  if (cVar3 == '\0') {
    local_110 = L"PluginFileVersion";
    local_108 = 0x11;
    cVar3 = FUN_14047faa2(param_2,&local_110,&local_ec);
    if (cVar3 != '\0') goto LAB_14047e40f;
    if (param_3 != 0) {
      local_a8 = L"InvalidProjectFileVersion";
      uStack_a0._0_4_ = 0x19;
      FUN_1446e940c(&local_c8,&local_a8);
      local_a8 = L"PluginDescriptor";
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0x10);
      FUN_1446e940c(&local_d8,&local_a8);
      FUN_140208bae(&local_a8,&local_d8,&local_c8,
                    L"File does not have a valid \'FileVersion\' number.");
      FUN_140008f88(param_3,&local_a8);
      local_120 = local_a8;
      goto LAB_14047f093;
    }
  }
  else {
LAB_14047e40f:
    if ((byte)((char)local_ec - 4U) < 0xfd) {
      if (param_3 != 0) {
        FUN_140002266(&local_a8,&DAT_149e063bc,local_ec & 0xff);
        FUN_140233b1a(&local_120,&local_a8);
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        FUN_140002266(&local_a8,&DAT_149e063bc,3);
        FUN_140233b1a(&local_130,&local_a8);
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_150 = local_130;
        if (local_130 != (longlong *)0x0) {
          (**(code **)(*local_130 + 8))();
        }
        local_148 = local_128;
        local_160 = local_120;
        if (local_120 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_120 + 8))();
        }
        local_158 = local_118;
        local_a8 = L"ProjectFileVersionTooLarge";
        uStack_a0._0_4_ = 0x1a;
        FUN_1446e940c(&local_308,&local_a8);
        local_a8 = L"PluginDescriptor";
        uStack_a0 = CONCAT44(uStack_a0._4_4_,0x10);
        FUN_1446e940c(&local_184,&local_a8);
        FUN_140208bae(&local_180,&local_184,&local_308,
                      L"File appears to be in a newer version ({0}) of the file format that we can load (max version: {1})."
                     );
        FUN_14023409e(&local_170,&local_180,1);
        local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
        FUN_14023423e(local_98,&local_160);
        local_88[0] = 4;
        FUN_14023423e(local_78,&local_150);
        puStack_d0 = local_68;
        local_d8 = &local_a8;
        FUN_14010d304(&local_c8);
        local_e8 = local_170;
        local_e0 = local_168;
        if (local_168 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_168 + 1) = (int)local_168[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_140,&local_e8,&local_c8);
        FUN_14007f2db(local_c8,(ulonglong)uStack_c0 & 0xffffffff);
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        lVar17 = 0x30;
        do {
          if (*(longlong **)((longlong)&local_a8 + lVar17) != (longlong *)0x0) {
            (**(code **)(**(longlong **)((longlong)&local_a8 + lVar17) + 0x10))();
            *(undefined8 *)((longlong)&local_a8 + lVar17) = 0;
            *(undefined4 *)((longlong)local_98 + lVar17 + -8) = 0;
          }
          lVar17 = lVar17 + -0x20;
        } while (lVar17 != -0x10);
        if (local_168 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_168 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_168)(local_168);
            LOCK();
            piVar2 = (int *)((longlong)local_168 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_168 + 0x10))(local_168);
            }
          }
        }
        if (local_160 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_160 + 0x10))();
        }
        if (local_150 != (longlong *)0x0) {
          (**(code **)(*local_150 + 0x10))();
        }
        FUN_140008f88(param_3,local_140);
        if (local_140[0] != (longlong *)0x0) {
          (**(code **)(*local_140[0] + 0x10))();
        }
        if ((longlong *)CONCAT71(uStack_17f,local_180) != (longlong *)0x0) {
          (**(code **)(*(longlong *)CONCAT71(uStack_17f,local_180) + 0x10))();
        }
        if (local_130 != (longlong *)0x0) {
          (**(code **)(*local_130 + 0x10))();
        }
LAB_14047f093:
        if (local_120 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_120 + 0x10))();
        }
      }
    }
    else {
      local_198 = L"Version";
      local_190 = 7;
      FUN_14047faa2(param_2,&local_198,param_1);
      local_1a8 = L"VersionName";
      local_1a0 = 0xb;
      FUN_14047fa10(param_2,&local_1a8,param_1 + 8);
      local_1b8 = L"FriendlyName";
      local_1b0 = 0xc;
      FUN_14047fa10(param_2,&local_1b8,param_1 + 0x18);
      local_1c8 = L"Description";
      local_1c0 = 0xb;
      FUN_14047fa10(param_2,&local_1c8,param_1 + 0x28);
      plVar1 = (longlong *)(param_1 + 0x38);
      local_1d8 = L"Category";
      local_1d0 = 8;
      cVar3 = FUN_14047fa10(param_2,&local_1d8,plVar1);
      if (cVar3 == '\0') {
        local_1e8 = L"CategoryPath";
        local_1e0 = 0xc;
        FUN_14047fa10(param_2,&local_1e8,plVar1);
      }
      iVar7 = *(int *)(param_1 + 0x40);
      if (((iVar7 - 3U < 0x7ffffffe) && (iVar5 = wcsncmp((wchar_t *)*plVar1,L"\"",1), iVar5 == 0))
         && (iVar5 = wcscmp((wchar_t *)(*plVar1 + (ulonglong)(iVar7 - 1) * 2 + -2),L"\""),
            iVar5 == 0)) {
        FUN_14496493a(plVar1,iVar7 + -2,1,0);
        iVar7 = *(int *)(param_1 + 0x40);
        iVar5 = iVar7 + -1;
        if (iVar7 == 0) {
          iVar5 = 0;
        }
        if (0 < iVar5) {
          iVar18 = iVar7 - (uint)(0 < iVar5);
          if (iVar18 != 0) {
            memmove(*(void **)(param_1 + 0x38),(void *)((longlong)*(void **)(param_1 + 0x38) + 2),
                    (longlong)iVar18 * 2);
            iVar7 = *(int *)(param_1 + 0x40);
          }
          *(uint *)(param_1 + 0x40) = iVar7 - (uint)(0 < iVar5);
        }
      }
      local_1f8 = L"CreatedBy";
      local_1f0 = 9;
      FUN_14047fa10(param_2,&local_1f8,param_1 + 0x48);
      local_208 = L"CreatedByURL";
      local_200 = 0xc;
      FUN_14047fa10(param_2,&local_208,param_1 + 0x58);
      local_218 = L"DocsURL";
      local_210 = 7;
      FUN_14047fa10(param_2,&local_218,param_1 + 0x68);
      local_228 = L"MarketplaceURL";
      local_220 = 0xe;
      FUN_14047fa10(param_2,&local_228,param_1 + 0x78);
      local_238 = L"SupportURL";
      local_230 = 10;
      FUN_14047fa10(param_2,&local_238,param_1 + 0x88);
      local_248 = L"EngineVersion";
      local_240 = 0xd;
      FUN_14047fa10(param_2,&local_248,param_1 + 0x98);
      local_258 = L"EditorCustomVirtualPath";
      local_250 = 0x17;
      FUN_14047fa10(param_2,&local_258,param_1 + 0xa8);
      local_268 = L"SupportedTargetPlatforms";
      local_260 = 0x18;
      FUN_140480c28(param_2,&local_268,param_1 + 0xb8);
      plVar1 = (longlong *)(param_1 + 200);
      local_278 = L"SupportedPrograms";
      local_270 = 0x11;
      FUN_140480c28(param_2,&local_278,plVar1);
      local_288 = L"bIsPluginExtension";
      local_280 = 0x12;
      FUN_14047f976(param_2,&local_288,param_1 + 0x132);
      cVar3 = FUN_140481258(param_2,param_1 + 0xe8,param_3);
      if (cVar3 != '\0') {
        local_d8 = (wchar_t **)0x149e464d2;
        puStack_d0 = (undefined4 *)CONCAT44(puStack_d0._4_4_,0x13);
        FUN_1449ba96e(param_2,&local_c8);
        bVar14 = true;
        if ((local_c8 != 0) && (*(int *)(local_c8 + 8) == 5)) {
          plVar8 = (longlong *)FUN_140482996();
          if ((longlong)(int)plVar8[1] != 0) {
            plVar12 = (longlong *)(param_1 + 0xf8);
            local_418 = *plVar8;
            lVar17 = (longlong)(int)plVar8[1] << 4;
            bVar14 = true;
            lVar19 = 0;
            local_430 = plVar12;
            local_428 = lVar17;
            local_420 = param_3;
            do {
              puVar9 = *(undefined8 **)(local_418 + lVar19);
              if ((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 1) != 6)) {
                if (param_3 != 0) {
                  local_a8 = L"TargetWithInvalidTargetsArray";
                  uStack_a0._0_4_ = 0x1d;
                  FUN_1446e940c(&local_e8,&local_a8);
                  local_a8 = L"LocalizationDescriptor";
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,0x16);
                  FUN_1446e940c(&local_120,&local_a8);
                  FUN_140208bae(&local_a8,&local_120,&local_e8,
                                L"The \'Localization Targets\' array has invalid contents and was not able to be loaded."
                               );
                  FUN_140008f88(param_3,&local_a8);
                  if (local_a8 != (wchar_t *)0x0) {
                    (**(code **)(*(longlong *)local_a8 + 0x10))();
                  }
                }
                bVar14 = false;
                plVar12 = local_430;
                lVar17 = local_428;
              }
              else {
                local_a8 = (wchar_t *)0x0;
                uStack_a0 = 0;
                local_98[0] = (longlong *)0x0;
                puVar9 = (undefined8 *)(**(code **)*puVar9)();
                cVar3 = FUN_145716114(&local_a8,*puVar9,param_3);
                if (cVar3 == '\0') {
                  bVar14 = false;
                }
                else {
                  iVar7 = *(int *)(param_1 + 0x100);
                  *(uint *)(param_1 + 0x100) = iVar7 + 1U;
                  if (*(uint *)(param_1 + 0x104) < iVar7 + 1U) {
                    FUN_145715e82(plVar12,iVar7);
                  }
                  pwVar15 = local_a8;
                  puVar9 = (undefined8 *)(*plVar12 + (longlong)iVar7 * 0x18);
                  *puVar9 = 0;
                  lVar17 = (longlong)(int)uStack_a0;
                  *(int *)(puVar9 + 1) = (int)uStack_a0;
                  if (lVar17 == 0) {
                    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
                  }
                  else {
                    FUN_1446dd670(puVar9,uStack_a0 & 0xffffffff,0);
                    memcpy((void *)*puVar9,pwVar15,lVar17 * 2);
                  }
                  puVar9[2] = local_98[0];
                  plVar12 = local_430;
                  lVar17 = local_428;
                }
                param_3 = local_420;
                if (local_a8 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
              }
              lVar19 = lVar19 + 0x10;
            } while (lVar17 != lVar19);
          }
        }
        plVar8 = uStack_c0;
        if (uStack_c0 != (longlong *)0x0) {
          LOCK();
          plVar12 = uStack_c0 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*uStack_c0)(uStack_c0);
            LOCK();
            piVar2 = (int *)((longlong)plVar8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        if (bVar14) {
          local_298 = L"VersePath";
          local_290 = 9;
          FUN_14047fa10(param_2,&local_298,param_1 + 0x108);
          local_2a8 = L"VerseScope";
          local_2a0 = 10;
          FUN_1449ba96e(param_2,&local_120);
          if ((local_120 == (wchar_t *)0x0) || (*(int *)(local_120 + 4) != 2)) {
LAB_14047e768:
            local_2d8 = L"VerseVersion";
            local_2d0 = 0xc;
            FUN_1449ba96e(param_2,&local_130);
            if (local_130 == (longlong *)0x0) {
LAB_14047e7a1:
              local_320 = L"EnableVerseAssetReflection";
              local_318 = 0x1a;
              FUN_14047f976(param_2,&local_320,param_1 + 0x124);
              local_330 = L"EnableIAD";
              local_328 = 9;
              FUN_14047f976(param_2,&local_330,param_1 + 0x125);
              local_340 = L"EnabledByDefault";
              local_338 = 0x10;
              cVar3 = FUN_14047f976(param_2,&local_340,&local_180);
              if (cVar3 != '\0') {
                *(char *)(param_1 + 0x126) = '\x02' - local_180;
              }
              local_350 = L"CanContainContent";
              local_348 = 0x11;
              FUN_14047f976(param_2,&local_350,param_1 + 0x127);
              local_360 = L"CanContainVerse";
              local_358 = 0xf;
              FUN_14047f976(param_2,&local_360,param_1 + 0x128);
              local_370 = L"NoCode";
              local_368 = 6;
              FUN_14047f976(param_2,&local_370,param_1 + 0x12f);
              local_380 = L"IsBetaVersion";
              local_378 = 0xd;
              FUN_14047f976(param_2,&local_380,param_1 + 0x129);
              local_390 = L"IsExperimentalVersion";
              local_388 = 0x15;
              FUN_14047f976(param_2,&local_390,param_1 + 0x12a);
              local_3a0 = L"Installed";
              local_398 = 9;
              FUN_14047f976(param_2,&local_3a0,param_1 + 299);
              local_3b0 = L"RequiresBuildPlatform";
              local_3a8 = 0x15;
              FUN_14047f976(param_2,&local_3b0,param_1 + 300);
              local_3c0 = L"Hidden";
              local_3b8 = 6;
              FUN_14047f976(param_2,&local_3c0,param_1 + 0x12d);
              local_3d0 = L"Sealed";
              local_3c8 = 6;
              FUN_14047f976(param_2,&local_3d0,param_1 + 0x12e);
              local_3e0 = L"ExplicitlyLoaded";
              local_3d8 = 0x10;
              FUN_14047f976(param_2,&local_3e0,param_1 + 0x130);
              local_3f0 = L"HasExplicitPlatforms";
              local_3e8 = 0x14;
              FUN_14047f976(param_2,&local_3f0,param_1 + 0x131);
              local_400 = L"CanBeUsedWithUnrealHeaderTool";
              local_3f8 = 0x1d;
              cVar3 = FUN_14047f976(param_2,&local_400,&local_308);
              if ((cVar3 != '\0') && (local_308 == '\x01')) {
                FUN_140056680(&local_a8,L"UnrealHeaderTool");
                iVar7 = *(int *)(param_1 + 0xd0);
                *(uint *)(param_1 + 0xd0) = iVar7 + 1U;
                if (*(uint *)(param_1 + 0xd4) < iVar7 + 1U) {
                  FUN_1447a1bd6(plVar1,iVar7);
                }
                lVar17 = *plVar1;
                lVar19 = (longlong)iVar7 * 0x10;
                *(undefined8 *)(lVar17 + lVar19) = 0;
                *(wchar_t **)(lVar17 + lVar19) = local_a8;
                local_a8 = (wchar_t *)0x0;
                *(int *)(lVar17 + 8 + lVar19) = (int)uStack_a0;
                *(undefined4 *)(lVar17 + 0xc + lVar19) = uStack_a0._4_4_;
                uStack_a0 = 0;
              }
              FUN_140056680(&local_a8,L"PreBuildSteps");
              FUN_14047fc48(param_1 + 0x138,param_2,&local_a8);
              if (local_a8 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              FUN_140056680(&local_a8,L"PostBuildSteps");
              FUN_14047fc48(param_1 + 0x188,param_2,&local_a8);
              if (local_a8 != (wchar_t *)0x0) {
                FUN_1400020a8();
              }
              cVar3 = FUN_14047feda(param_2,param_1 + 0x1d8,param_3);
              if (cVar3 == '\0') goto LAB_14047f668;
              local_d8 = (wchar_t **)0x0;
              puStack_d0 = (undefined4 *)0x0;
              pwVar15 = L"DisallowedPlugins";
              local_410 = L"DisallowedPlugins";
              local_408 = 0x11;
              cVar3 = FUN_140480c28(param_2);
              plVar1 = (longlong *)(param_1 + 0x1e8);
              if (cVar3 == '\0') {
                local_a8 = L"DisallowedPlugins";
                uStack_a0 = CONCAT44(uStack_a0._4_4_,0x11);
                cVar3 = FUN_140480164(param_2,&local_a8,&local_e8);
                if (cVar3 != '\0') {
                  pwVar15 = (wchar_t *)0x0;
                  if ((longlong)(int)local_e8[1] != 0) {
                    lVar17 = *local_e8;
                    pwVar15 = (wchar_t *)((longlong)(int)local_e8[1] * 0x10);
                    pwVar11 = (wchar_t *)0x0;
                    do {
                      local_140[0] = (longlong *)0x0;
                      plVar8 = *(longlong **)(lVar17 + (longlong)pwVar11);
                      if (((plVar8 != (longlong *)0x0) &&
                          (bVar4 = (**(code **)(*plVar8 + 0x80))(plVar8,local_140),
                          (local_140[0] != (longlong *)0x0 & bVar4) == 1)) && (*local_140[0] != 0))
                      {
                        local_c8 = 0;
                        uStack_c0 = (longlong *)0x0;
                        cVar3 = FUN_14684837c(&local_c8,*local_140[0],param_3);
                        if (cVar3 == '\0') {
                          if (local_c8 != 0) {
                            FUN_1400020a8();
                          }
                          uVar16 = 0;
                          goto LAB_14047eaf8;
                        }
                        iVar7 = *(int *)(param_1 + 0x1f0);
                        uVar6 = iVar7 + 1;
                        *(uint *)(param_1 + 0x1f0) = uVar6;
                        if (*(uint *)(param_1 + 500) < uVar6) {
                          FUN_14685327c(plVar1);
                        }
                        lVar19 = *plVar1;
                        lVar13 = (longlong)iVar7 * 0x10;
                        *(undefined8 *)(lVar19 + lVar13) = 0;
                        *(longlong *)(lVar19 + lVar13) = local_c8;
                        local_c8 = 0;
                        *(undefined4 *)(lVar19 + 8 + lVar13) = (undefined4)uStack_c0;
                        *(undefined4 *)(lVar19 + 0xc + lVar13) = uStack_c0._4_4_;
                        uStack_c0 = (longlong *)0x0;
                      }
                      pwVar11 = pwVar11 + 8;
                    } while (pwVar15 != pwVar11);
                  }
                }
                uVar16 = CONCAT71((int7)((ulonglong)pwVar15 >> 8),1);
              }
              else {
                if ((int)puStack_d0 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4((ulonglong)puStack_d0 & 0xffffffff);
                }
                if (*(int *)(param_1 + 500) < (int)puStack_d0) {
                  FUN_146853216(plVar1);
                }
                uVar16 = (longlong)L"Sealed" + 0xb;
                if (0 < (int)puStack_d0) {
                  lVar17 = 8;
                  lVar19 = 0;
                  do {
                    uVar10 = FUN_146846c66(plVar1);
                    iVar7 = *(int *)((longlong)local_d8 + lVar17) + -1;
                    if (*(int *)((longlong)local_d8 + lVar17) == 0) {
                      iVar7 = 0;
                    }
                    FUN_1402980a2(uVar10,*(undefined8 *)((longlong)local_d8 + lVar17 + -8),iVar7);
                    lVar19 = lVar19 + 1;
                    lVar17 = lVar17 + 0x10;
                  } while (lVar19 < (int)puStack_d0);
                }
              }
LAB_14047eaf8:
              FUN_1447a1747(local_d8,(ulonglong)puStack_d0 & 0xffffffff);
              if (local_d8 != (wchar_t **)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              cVar3 = (**(code **)(*local_130 + 0x10))(local_130,&local_184);
              if (cVar3 != '\0') {
                if (&local_184 != (undefined4 *)(param_1 + 0x11c)) {
                  *(undefined4 *)(param_1 + 0x11c) = local_184;
                  *(undefined1 *)(param_1 + 0x120) = 1;
                }
                goto LAB_14047e7a1;
              }
              if (param_3 != 0) {
                FUN_14047e026(local_130,&local_180);
                FUN_140233b1a(local_2e8,&local_180);
                local_a8 = L"PluginWithInvalidVerseVersion";
                uStack_a0._0_4_ = 0x1d;
                FUN_1446e940c(&local_ac,&local_a8);
                local_a8 = L"PluginDescriptor";
                uStack_a0 = CONCAT44(uStack_a0._4_4_,0x10);
                FUN_1446e940c(local_30c,&local_a8);
                FUN_140208bae(&local_308,local_30c,&local_ac,
                              L"Plugin entry \'VerseVersion\' specified an unrecognized value \'{1}\'"
                             );
                FUN_14023409e(&local_2f8,&local_308,1);
                local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
                FUN_14023423e(local_98,local_2e8);
                puStack_d0 = local_88;
                local_d8 = &local_a8;
                FUN_14010d304(&local_c8);
                local_e8 = local_2f8;
                local_e0 = local_2f0;
                if (local_2f0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(local_140,&local_e8,&local_c8);
                FUN_14007f2db(local_c8,(ulonglong)uStack_c0 & 0xffffffff);
                if (local_c8 != 0) {
                  FUN_1400020a8();
                }
                if (local_98[0] != (longlong *)0x0) {
                  (**(code **)(*local_98[0] + 0x10))();
                }
                if (local_2f0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_2f0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_2f0)(local_2f0);
                    LOCK();
                    piVar2 = (int *)((longlong)local_2f0 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*local_2f0 + 0x10))(local_2f0);
                    }
                  }
                }
                if (local_2e8[0] != (longlong *)0x0) {
                  (**(code **)(*local_2e8[0] + 0x10))();
                }
                FUN_140008f88(param_3,local_140);
                if (local_140[0] != (longlong *)0x0) {
                  (**(code **)(*local_140[0] + 0x10))();
                }
                if ((longlong *)CONCAT71(uStack_307,local_308) != (longlong *)0x0) {
                  (**(code **)(*(longlong *)CONCAT71(uStack_307,local_308) + 0x10))();
                }
                if (CONCAT71(uStack_17f,local_180) != 0) {
                  FUN_1400020a8();
                }
              }
LAB_14047f668:
              uVar16 = 0;
            }
            plVar1 = (longlong *)CONCAT44(uStack_124,local_128);
            if (plVar1 != (longlong *)0x0) {
              LOCK();
              plVar8 = plVar1 + 1;
              *(int *)plVar8 = (int)*plVar8 + -1;
              UNLOCK();
              if ((int)*plVar8 == 0) {
                (**(code **)*plVar1)(plVar1);
                LOCK();
                piVar2 = (int *)((longlong)plVar1 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar1 + 0x10))(plVar1);
                }
              }
            }
          }
          else {
            FUN_14047e026(local_120,&local_a8);
            pwVar15 = local_a8;
            pwVar11 = L"";
            if ((int)uStack_a0 != 0) {
              pwVar11 = local_a8;
            }
            FUN_146846b03(&local_ac,pwVar11);
            if (pwVar15 != (wchar_t *)0x0) {
              FUN_1400020a8(pwVar15);
            }
            if (local_ab == '\x01') {
              *(undefined1 *)(param_1 + 0x118) = local_ac;
              goto LAB_14047e768;
            }
            if (param_3 != 0) {
              FUN_14047e026(local_120,local_140);
              FUN_140233b1a(local_2b8,local_140);
              local_a8 = L"PluginWithInvalidVerseScope";
              uStack_a0._0_4_ = 0x1b;
              FUN_1446e940c(&local_308,&local_a8);
              local_a8 = L"PluginDescriptor";
              uStack_a0 = CONCAT44(uStack_a0._4_4_,0x10);
              FUN_1446e940c(&local_184,&local_a8);
              FUN_140208bae(&local_180,&local_184,&local_308,
                            L"Plugin entry \'VerseScope\' specified an unrecognized value \'{1}\'");
              FUN_14023409e(&local_2c8,&local_180,1);
              local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,4);
              FUN_14023423e(local_98,local_2b8);
              puStack_d0 = local_88;
              local_d8 = &local_a8;
              FUN_14010d304(&local_c8);
              local_e8 = local_2c8;
              local_e0 = local_2c0;
              if (local_2c0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_2c0 + 1) = (int)local_2c0[1] + 1;
                UNLOCK();
              }
              FUN_14010c016(&local_130,&local_e8,&local_c8);
              FUN_14007f2db(local_c8,(ulonglong)uStack_c0 & 0xffffffff);
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              if (local_98[0] != (longlong *)0x0) {
                (**(code **)(*local_98[0] + 0x10))();
              }
              if (local_2c0 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_2c0 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_2c0)(local_2c0);
                  LOCK();
                  piVar2 = (int *)((longlong)local_2c0 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_2c0 + 0x10))(local_2c0);
                  }
                }
              }
              if (local_2b8[0] != (longlong *)0x0) {
                (**(code **)(*local_2b8[0] + 0x10))();
              }
              FUN_140008f88(param_3,&local_130);
              if (local_130 != (longlong *)0x0) {
                (**(code **)(*local_130 + 0x10))();
              }
              if ((longlong *)CONCAT71(uStack_17f,local_180) != (longlong *)0x0) {
                (**(code **)(*(longlong *)CONCAT71(uStack_17f,local_180) + 0x10))();
              }
              if (local_140[0] != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            uVar16 = 0;
          }
          plVar1 = (longlong *)CONCAT44(uStack_114,local_118);
          if (plVar1 != (longlong *)0x0) {
            LOCK();
            plVar8 = plVar1 + 1;
            *(int *)plVar8 = (int)*plVar8 + -1;
            UNLOCK();
            if ((int)*plVar8 == 0) {
              (**(code **)*plVar1)(plVar1);
              LOCK();
              piVar2 = (int *)((longlong)plVar1 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
          }
          goto LAB_14047eb3f;
        }
      }
    }
  }
  uVar16 = 0;
LAB_14047eb3f:
  if ((local_60 ^ (ulonglong)auStack_458) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047f976 FUN_14047f976 body=144 status=ok
// SIG undefined FUN_14047f976(void)

undefined4 FUN_14047f976(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x60))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047fa10 FUN_14047fa10 body=144 status=ok
// SIG undefined FUN_14047fa10(void)

undefined4 FUN_14047fa10(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x58))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047faa2 FUN_14047faa2 body=144 status=ok
// SIG undefined FUN_14047faa2(void)

undefined4 FUN_14047faa2(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x30))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047fb34 FUN_14047fb34 body=115 status=ok
// SIG undefined FUN_14047fb34(void)

undefined8 FUN_14047fb34(longlong *param_1,int *param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  undefined1 auStack_38 [32];
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  cVar1 = (**(code **)(*param_1 + 0x50))(param_1,&local_18);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((-2147483648.0 <= local_18) && (local_18 <= 2147483647.0)) {
      dVar3 = (double)FUN_14047fbb4();
      *param_2 = (int)dVar3;
      uVar2 = CONCAT71((uint7)(uint3)((uint)(int)dVar3 >> 8),1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047fbb4 FUN_14047fbb4 body=146 status=ok
// SIG undefined FUN_14047fbb4(void)

void FUN_14047fbb4(double param_1)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0.0;
  dVar2 = modf(param_1,&local_28);
  if (param_1 < 0.0) {
    bVar1 = -0.5 < dVar2;
    dVar2 = -1.0;
  }
  else {
    bVar1 = dVar2 < 0.5;
    dVar2 = 1.0;
  }
  dVar3 = local_28;
  if (!bVar1) {
    dVar3 = local_28 + dVar2;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar3);
}



// FUNCTION 14047fc48 FUN_14047fc48 body=657 status=ok
// SIG undefined FUN_14047fc48(void)

/* WARNING: Removing unreachable block (ram,0x00014047fe54) */

void FUN_14047fc48(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong *local_b0;
  undefined4 local_a8;
  uint uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = *param_3;
  local_80 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    local_80 = 0;
  }
  FUN_1449ba96e(param_2,&local_78,&local_88);
  if ((local_78 != (undefined8 *)0x0) && (*(int *)(local_78 + 1) == 6)) {
    plVar8 = (longlong *)(**(code **)*local_78)();
    plVar8 = (longlong *)*plVar8;
    local_b8 = plVar8 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = local_b8;
    if ((int)plVar8[5] == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = (int)plVar8[5];
    }
    local_a8 = (undefined4)local_68;
    uStack_a4 = local_68._4_4_;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_90 = CONCAT44(uStack_4c,uStack_50);
    local_98 = local_58;
    uVar5 = local_98;
    local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_98._4_4_;
    local_b0 = plVar8;
    if ((local_98._4_4_ != iVar13) || (local_98 = local_58, uStack_60 != local_b8)) {
      do {
        local_98 = uVar5;
        lVar2 = *local_b0;
        lVar9 = (longlong)iVar6;
        iVar6 = *(int *)(lVar2 + 8 + lVar9 * 0x28);
        if (iVar6 == 0) {
          puVar12 = &DAT_149dfb77a;
        }
        else {
          puVar12 = *(undefined2 **)(lVar2 + lVar9 * 0x28);
        }
        lVar2 = lVar2 + lVar9 * 0x28;
        iVar4 = iVar6 + -1;
        if (iVar6 == 0) {
          iVar4 = 0;
        }
        uVar7 = FUN_144a49b4a(iVar4,puVar12);
        plVar10 = (longlong *)FUN_140e10654(param_1,uVar7,lVar2);
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 8) == 5)) {
          plVar11 = (longlong *)FUN_140482996();
          lVar2 = plVar11[1];
          if ((longlong)(int)lVar2 != 0) {
            lVar9 = *plVar11;
            lVar14 = 0;
            do {
              if (*(int *)(*(longlong *)(lVar9 + lVar14) + 8) == 2) {
                FUN_14047e026(*(longlong *)(lVar9 + lVar14),&local_68);
                iVar6 = (int)plVar10[1];
                *(uint *)(plVar10 + 1) = iVar6 + 1U;
                if (*(uint *)((longlong)plVar10 + 0xc) < iVar6 + 1U) {
                  FUN_1447a1bd6(plVar10,iVar6);
                }
                lVar3 = *plVar10;
                lVar15 = (longlong)iVar6 * 0x10;
                *(undefined8 *)(lVar3 + lVar15) = 0;
                *(undefined8 *)(lVar3 + lVar15) = local_68;
                local_68 = 0;
                *(undefined4 *)(lVar3 + 8 + lVar15) = (undefined4)uStack_60;
                *(undefined4 *)(lVar3 + 0xc + lVar15) = uStack_60._4_4_;
                uStack_60 = (longlong *)0x0;
              }
              lVar14 = lVar14 + 0x10;
            } while ((longlong)(int)lVar2 * 0x10 != lVar14);
          }
        }
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~uStack_a4);
        FUN_1449c0562(&local_a8);
        iVar6 = local_98._4_4_;
        uVar5 = local_98;
      } while (local_b0 != plVar8 ||
               ((longlong *)CONCAT44(uStack_9c,uStack_a0) != local_b8 || local_98._4_4_ != iVar13));
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_70 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14047feda FUN_14047feda body=528 status=ok
// SIG undefined FUN_14047feda(void)

ulonglong FUN_14047feda(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  wchar_t **ppwVar7;
  longlong **pplVar8;
  longlong lVar9;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  wchar_t *local_128;
  undefined4 local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  longlong *local_100 [23];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  ppwVar7 = &local_128;
  local_128 = L"Plugins";
  local_120 = 7;
  cVar6 = FUN_140480164(param_1,ppwVar7,&local_118);
  pplVar8 = (longlong **)CONCAT71((int7)((ulonglong)ppwVar7 >> 8),1);
  if ((cVar6 != '\0') && (lVar5 = local_118[1], (longlong)(int)lVar5 != 0)) {
    local_138 = *local_118;
    lVar9 = 0;
    do {
      local_130 = (longlong *)0x0;
      plVar4 = *(longlong **)(local_138 + lVar9);
      if (plVar4 != (longlong *)0x0) {
        pplVar8 = &local_130;
        cVar6 = (**(code **)(*plVar4 + 0x80))(plVar4,pplVar8);
        if (((cVar6 != '\0') && (local_130 != (longlong *)0x0)) && (*local_130 != 0)) {
          FUN_140056680(&local_110,&DAT_149dfb77a);
          FUN_1404800ec(local_100,&local_110,0);
          if (local_110 != 0) {
            FUN_1400020a8();
          }
          local_110 = *local_130;
          plVar4 = (longlong *)local_130[1];
          if (plVar4 == (longlong *)0x0) {
            local_108 = (longlong *)0x0;
            cVar6 = FUN_14048036e(local_100);
          }
          else {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
            local_108 = plVar4;
            cVar6 = FUN_14048036e(local_100,local_110,param_3,&local_110);
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
          if (cVar6 == '\0') {
            FUN_140a49ea0(local_100);
            pplVar8 = (longlong **)0x0;
            goto LAB_14048005c;
          }
          iVar3 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
            FUN_1404801f6(param_2,iVar3);
          }
          pplVar8 = local_100;
          FUN_140b84d02((longlong)iVar3 * 0xb8 + *param_2,local_100);
          FUN_140a49ea0(local_100);
        }
      }
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar9);
    pplVar8 = (longlong **)CONCAT71((int7)((ulonglong)pplVar8 >> 8),1);
  }
LAB_14048005c:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return (ulonglong)pplVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404800ec FUN_1404800ec body=120 status=ok
// SIG undefined FUN_1404800ec(void)

undefined8 * FUN_1404800ec(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  int iVar1;
  void *_Src;
  
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
  *(undefined1 *)(param_1 + 2) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  memset(param_1 + 3,0,0x91);
  return param_1;
}



// FUNCTION 140480164 FUN_140480164 body=144 status=ok
// SIG undefined FUN_140480164(void)

undefined4 FUN_140480164(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_1449ba96e(local_38,&local_28);
  if (local_28 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*local_28 + 0x70))(local_28,param_3);
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404801f6 FUN_1404801f6 body=375 status=ok
// SIG undefined FUN_1404801f6(void)

void FUN_1404801f6(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xb8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14048027e;
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
LAB_14048027e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xb8)) {
    uVar7 = uVar5 / 0xb8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xb8,8);
  return;
}



// FUNCTION 14048036e FUN_14048036e body=1945 status=ok
// SIG undefined FUN_14048036e(void)

ulonglong FUN_14048036e(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RBP;
  ulonglong uVar5;
  undefined1 auStack_128 [32];
  wchar_t *local_108;
  undefined4 local_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  int local_d0;
  longlong local_c8;
  int local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  longlong local_68;
  int local_60;
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_78 = L"Name";
  local_70 = 4;
  cVar4 = FUN_14047fa10(param_2,&local_78,param_1);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (cVar4 == '\0') {
    if (param_3 != 0) {
      local_58 = L"PluginReferenceWithoutName";
      local_50 = 0x1a;
      FUN_1446e940c(&local_68,&local_58);
      local_58 = L"PluginDescriptor";
      local_50 = 0x10;
      FUN_1446e940c(&local_c8,&local_58);
      FUN_140208bae(&local_58,&local_c8,&local_68,L"Plugin references must have a \'Name\' field");
      FUN_140008f88(param_3,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
    }
    uVar5 = 0;
  }
  local_88 = L"Enabled";
  local_80 = 7;
  cVar4 = FUN_14047f976(param_2,&local_88,(char *)(param_1 + 0x10));
  if (cVar4 == '\0') {
    if (param_3 != 0) {
      local_58 = L"PluginReferenceWithoutEnabled";
      local_50 = 0x1d;
      FUN_1446e940c(&local_68,&local_58);
      local_58 = L"PluginDescriptor";
      local_50 = 0x10;
      FUN_1446e940c(&local_c8,&local_58);
      FUN_140208bae(&local_58,&local_c8,&local_68,
                    L"Plugin references must have an \'Enabled\' field");
      FUN_140008f88(param_3,&local_58);
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
    }
    uVar5 = 0;
  }
  local_98 = L"Optional";
  local_90 = 8;
  FUN_14047f976(param_2,&local_98,param_1 + 0x11);
  local_a8 = L"Description";
  local_a0 = 0xb;
  FUN_14047fa10(param_2,&local_a8,param_1 + 0x18);
  local_b8 = L"MarketplaceURL";
  local_b0 = 0xe;
  FUN_14047fa10(param_2,&local_b8,param_1 + 0x28);
  FUN_140056680(&local_c8,L"WhitelistPlatforms");
  FUN_140056680(&local_d8,L"PlatformAllowList");
  local_58 = local_d8;
  local_50 = local_d0 + -1;
  if (local_d0 == 0) {
    local_50 = 0;
  }
  cVar4 = FUN_140480c28(param_2,&local_58,param_1 + 0x38);
  if (cVar4 == '\0') {
    local_68 = local_c8;
    local_60 = local_c0 + -1;
    if (local_c0 == 0) {
      local_60 = 0;
    }
    FUN_140480c28(param_2,&local_68,param_1 + 0x38);
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_c8,L"BlacklistPlatforms");
  FUN_140056680(&local_d8,L"PlatformDenyList");
  local_58 = local_d8;
  local_50 = local_d0 + -1;
  if (local_d0 == 0) {
    local_50 = 0;
  }
  cVar4 = FUN_140480c28(param_2,&local_58,param_1 + 0x48);
  if (cVar4 == '\0') {
    local_68 = local_c8;
    local_60 = local_c0 + -1;
    if (local_c0 == 0) {
      local_60 = 0;
    }
    FUN_140480c28(param_2,&local_68,param_1 + 0x48);
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_c8,L"WhitelistTargetConfigurations");
  FUN_140056680(&local_d8,L"TargetConfigurationAllowList");
  local_58 = local_d8;
  local_50 = local_d0 + -1;
  if (local_d0 == 0) {
    local_50 = 0;
  }
  cVar4 = FUN_140480b08(param_2,&local_58,param_1 + 0x58);
  if (cVar4 == '\0') {
    local_68 = local_c8;
    local_60 = local_c0 + -1;
    if (local_c0 == 0) {
      local_60 = 0;
    }
    FUN_140480b08(param_2,&local_68,param_1 + 0x58);
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_c8,L"BlacklistTargetConfigurations");
  FUN_140056680(&local_d8,L"TargetConfigurationDenyList");
  local_58 = local_d8;
  local_50 = local_d0 + -1;
  if (local_d0 == 0) {
    local_50 = 0;
  }
  cVar4 = FUN_140480b08(param_2,&local_58,param_1 + 0x68);
  if (cVar4 == '\0') {
    local_68 = local_c8;
    local_60 = local_c0 + -1;
    if (local_c0 == 0) {
      local_60 = 0;
    }
    FUN_140480b08(param_2,&local_68,param_1 + 0x68);
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_c8,L"WhitelistTargets");
  FUN_140056680(&local_d8,L"TargetAllowList");
  local_58 = local_d8;
  local_50 = local_d0 + -1;
  if (local_d0 == 0) {
    local_50 = 0;
  }
  cVar4 = FUN_140480dd8(param_2,&local_58,param_1 + 0x78);
  if (cVar4 == '\0') {
    local_68 = local_c8;
    local_60 = local_c0 + -1;
    if (local_c0 == 0) {
      local_60 = 0;
    }
    FUN_140480dd8(param_2,&local_68,param_1 + 0x78);
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_c8,L"BlacklistTargets");
  FUN_140056680(&local_d8,L"TargetDenyList");
  local_58 = local_d8;
  local_50 = local_d0 + -1;
  if (local_d0 == 0) {
    local_50 = 0;
  }
  cVar4 = FUN_140480dd8(param_2,&local_58,param_1 + 0x88);
  if (cVar4 == '\0') {
    local_68 = local_c8;
    local_60 = local_c0 + -1;
    if (local_c0 == 0) {
      local_60 = 0;
    }
    FUN_140480dd8(param_2,&local_68,param_1 + 0x88);
  }
  if (local_d8 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  local_e8 = L"SupportedTargetPlatforms";
  local_e0 = 0x18;
  FUN_140480c28(param_2,&local_e8,param_1 + 0x98);
  local_f8 = L"HasExplicitPlatforms";
  local_f0 = 0x14;
  FUN_14047f976(param_2,&local_f8,param_1 + 0xa8);
  local_108 = L"Version";
  local_100 = 7;
  cVar4 = FUN_14047faa2(param_2,&local_108,&local_68);
  if (cVar4 != '\0') {
    if (&local_68 != (longlong *)(param_1 + 0xac)) {
      *(undefined4 *)(param_1 + 0xac) = (undefined4)local_68;
      *(undefined1 *)(param_1 + 0xb0) = 1;
    }
    if (*(char *)(param_1 + 0x10) == '\0') {
      if (param_3 != 0 && (char)uVar5 == '\x01') {
        local_58 = L"PluginReferenceDisabledWithVersion";
        local_50 = 0x22;
        FUN_1446e940c(&local_c8,&local_58);
        local_58 = L"PluginDescriptor";
        local_50 = 0x10;
        FUN_1446e940c(&local_d8,&local_58);
        FUN_140208bae(&local_58,&local_d8,&local_c8,
                      L"Plugin references cannot be used to disable explicit versions. Remove the \'Version\' field when \'Enabled\' is false."
                     );
        FUN_140008f88(param_3,&local_58);
        if (local_58 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_58 + 0x10))();
        }
      }
      uVar5 = 0;
    }
  }
  plVar3 = *(longlong **)(param_4 + 8);
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
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140480b08 FUN_140480b08 body=287 status=ok
// SIG undefined FUN_140480b08(void)

undefined4 FUN_140480b08(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  uVar4 = FUN_140480c28();
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_146851b86(param_3);
    }
    lVar2 = local_58;
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        puVar5 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar6) != 0) {
          puVar5 = *(undefined2 **)(lVar2 + lVar6);
        }
        cVar3 = FUN_140482beb(&local_69,puVar5);
        if (cVar3 != '\0') {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_1404810fe(param_3,iVar1);
          }
          *(undefined1 *)(*param_3 + (longlong)iVar1) = local_69;
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar7 * 0x10 != lVar6);
    }
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140480c28 FUN_140480c28 body=431 status=ok
// SIG undefined FUN_140480c28(void)

ulonglong FUN_140480c28(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_c8 [32];
  void *local_a8;
  ulonglong uStack_a0;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  FUN_1449ba96e(local_88,&local_70);
  if ((local_70 == (longlong *)0x0) ||
     (cVar6 = (**(code **)(*local_70 + 0x70))(local_70,&local_90), cVar6 == '\0')) {
LAB_140480c73:
    uVar9 = 0;
  }
  else {
    uVar9 = CONCAT71((int7)((ulonglong)&local_70 >> 8),1);
    if (0 < (int)local_90[1]) {
      lVar8 = 0;
      lVar7 = 0;
      do {
        local_a8 = (void *)0x0;
        uStack_a0 = 0;
        cVar6 = (**(code **)(**(longlong **)(*local_90 + lVar8) + 0x58))
                          (*(longlong **)(*local_90 + lVar8),&local_a8);
        if (cVar6 == '\0') {
          if (local_a8 != (void *)0x0) {
            FUN_1400020a8();
          }
          goto LAB_140480c73;
        }
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_1447a1bd6(param_3,iVar4);
        }
        _Src = local_a8;
        lVar5 = *param_3;
        lVar10 = (longlong)iVar4 * 0x10;
        puVar3 = (undefined8 *)(lVar5 + lVar10);
        *(undefined8 *)(lVar5 + lVar10) = 0;
        lVar11 = (longlong)(int)uStack_a0;
        *(int *)(lVar5 + 8 + lVar10) = (int)uStack_a0;
        if (lVar11 == 0) {
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar3,uStack_a0 & 0xffffffff,0);
          memcpy((void *)*puVar3,_Src,lVar11 * 2);
        }
        if (local_a8 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x10;
      } while (lVar7 < (int)local_90[1]);
    }
  }
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 140480dd8 FUN_140480dd8 body=287 status=ok
// SIG undefined FUN_140480dd8(void)

undefined4 FUN_140480dd8(undefined8 param_1,undefined4 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  uVar4 = FUN_140480c28();
  if ((char)uVar4 != '\0') {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) != 0) {
      FUN_146851b56(param_3);
    }
    lVar2 = local_58;
    lVar7 = (longlong)(int)uStack_50;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        puVar5 = &DAT_149dfb77a;
        if (*(int *)(lVar2 + 8 + lVar6) != 0) {
          puVar5 = *(undefined2 **)(lVar2 + lVar6);
        }
        cVar3 = FUN_140480ef8(&local_69,puVar5);
        if (cVar3 != '\0') {
          iVar1 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
            FUN_140480fa4(param_3,iVar1);
          }
          *(undefined1 *)(*param_3 + (longlong)iVar1) = local_69;
        }
        lVar6 = lVar6 + 0x10;
      } while (lVar7 * 0x10 != lVar6);
    }
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140480ef8 FUN_140480ef8 body=171 status=ok
// SIG undefined FUN_140480ef8(void)

ulonglong FUN_140480ef8(undefined1 *param_1,wchar_t *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar3;
  
  iVar1 = wcscmp(param_2,L"Editor");
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (iVar1 == 0) {
    uVar3 = CONCAT71(uVar4,1);
    uVar2 = 4;
  }
  else {
    iVar1 = wcscmp(param_2,L"Game");
    uVar3 = CONCAT71(uVar4,1);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = wcscmp(param_2,L"Server");
      uVar2 = 2;
      if (iVar1 != 0) {
        iVar1 = wcscmp(param_2,L"Client");
        if (iVar1 == 0) {
          uVar2 = 3;
        }
        else {
          iVar1 = wcscmp(param_2,L"Program");
          uVar2 = 5;
          if (iVar1 != 0) {
            iVar1 = wcscmp(param_2,L"Unknown");
            uVar3 = CONCAT71(uVar4,iVar1 == 0);
            uVar2 = 0;
          }
        }
      }
    }
  }
  *param_1 = uVar2;
  return uVar3 & 0xffffffff;
}



// FUNCTION 140480fa4 FUN_140480fa4 body=345 status=ok
// SIG undefined FUN_140480fa4(void)

void FUN_140480fa4(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140481025;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_140481025:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1404810fe FUN_1404810fe body=345 status=ok
// SIG undefined FUN_1404810fe(void)

void FUN_1404810fe(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar5;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14048117f;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_14048117f:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 140481258 FUN_140481258 body=5949 status=ok
// SIG undefined FUN_140481258(void)

ulonglong FUN_140481258(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  undefined8 *puVar11;
  wchar_t *****pppppwVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 unaff_R14;
  ulonglong uVar17;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  uint local_354;
  longlong *local_350;
  longlong *local_348;
  wchar_t *local_340;
  undefined4 local_338;
  longlong local_330;
  longlong *local_328;
  undefined1 local_320 [4];
  undefined1 local_31c [4];
  longlong *local_318 [2];
  wchar_t ****local_308;
  longlong *local_300;
  longlong *local_2f8 [2];
  wchar_t ****local_2e8;
  longlong *local_2e0;
  longlong *local_2d8 [2];
  wchar_t ****local_2c8;
  int local_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  undefined4 local_2b0;
  longlong *local_2a8;
  longlong *local_2a0;
  wchar_t *local_298;
  undefined4 local_290;
  longlong local_288;
  longlong *local_280;
  wchar_t *local_278;
  undefined4 local_270;
  longlong local_268;
  longlong *local_260;
  wchar_t ****local_258;
  longlong *local_250;
  wchar_t ****local_248;
  undefined4 *local_240;
  wchar_t ****local_238;
  int local_230;
  wchar_t ****local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined4 local_174;
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [8];
  wchar_t ****local_c0;
  int local_b8 [2];
  longlong *aplStack_b0 [2];
  undefined4 local_a0 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined4 local_80 [2];
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong local_60;
  undefined7 uVar18;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  local_340 = L"Modules";
  local_338 = 7;
  local_350 = param_2;
  FUN_1449ba96e(param_1,&local_330);
  uVar18 = (undefined7)((ulonglong)unaff_R14 >> 8);
  uVar17 = CONCAT71(uVar18,1);
  if (((local_330 == 0) || (*(int *)(local_330 + 8) != 5)) ||
     (local_348 = (longlong *)FUN_140482996(), (int)local_348[1] < 1)) {
LAB_1404818d7:
    if (local_328 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_328 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_328)(local_328);
        LOCK();
        piVar2 = (int *)((longlong)local_328 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_328 + 0x10))(local_328);
        }
      }
    }
    if ((local_60 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar17 & 0xffffff01;
  }
  uVar17 = CONCAT71(uVar18,1);
  lVar16 = 0;
  local_368 = param_3;
LAB_14048130d:
  lVar15 = *local_348;
  lVar5 = *(longlong *)(lVar15 + lVar16 * 0x10);
  if ((lVar5 != 0) && (*(int *)(lVar5 + 8) == 6)) {
    local_228 = (wchar_t ****)0x0;
    local_220 = 0x600000000;
    local_1d8 = 0;
    iVar13 = 0;
    local_1d0 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_188 = 0;
    local_180 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_17c = 0xffffffff00000080;
    local_174 = 0;
    local_168 = 0;
    local_160 = 0;
    memset(local_158,0,0x91);
    puVar11 = (undefined8 *)(**(code **)**(undefined8 **)(lVar15 + lVar16 * 0x10))();
    uVar6 = *puVar11;
    local_278 = L"Name";
    local_270 = 4;
    FUN_1449ba96e(uVar6,&local_268,&local_278);
    if ((local_268 != 0) && (*(int *)(local_268 + 8) == 2)) {
      FUN_14047e026(local_268,&local_c0);
      pppppwVar12 = (wchar_t *****)&DAT_149dfb77a;
      if (local_b8[0] != 0) {
        pppppwVar12 = (wchar_t *****)local_c0;
      }
      FUN_1446f470e(&local_238,pppppwVar12,1);
      local_228 = local_238;
      if ((wchar_t *****)local_c0 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
      local_298 = L"Type";
      local_290 = 4;
      FUN_1449ba96e(uVar6,&local_288,&local_298);
      if ((local_288 != 0) && (*(int *)(local_288 + 8) == 2)) {
        FUN_14047e026(local_288,&local_c0);
        pppppwVar12 = (wchar_t *****)local_c0;
        if (local_b8[0] == 0) {
          pppppwVar12 = (wchar_t *****)&DAT_149dfb77a;
        }
        uVar10 = 0;
LAB_1404814fa:
        lVar15 = 0;
        do {
          uVar3 = *(ushort *)((longlong)pppppwVar12 + lVar15);
          uVar4 = *(ushort *)((&PTR_u_Runtime_149e49d18)[uVar10] + lVar15);
          if (uVar3 == uVar4) {
            if (uVar3 == 0) goto LAB_14048174c;
          }
          else {
            uVar17 = uVar17 & 0xffffffff;
            param_3 = local_368;
            if (0x7f < (uVar4 | uVar3)) {
              iVar14 = (uint)uVar3 - (uint)uVar4;
              goto LAB_140482562;
            }
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto LAB_14048255f;
          }
          lVar15 = lVar15 + 2;
        } while( true );
      }
      if (param_3 != 0) {
        local_360 = lVar16;
        FUN_145715fae(&local_2b8,&local_228);
        local_c0 = (wchar_t ****)0x149e45966;
        local_b8[0] = 0x12;
        FUN_1446e940c(&local_2e8,&local_c0);
        local_c0 = (wchar_t ****)0x149e458da;
        local_b8[0] = 0x10;
        FUN_1446e940c(local_2f8,&local_c0);
        local_c0 = (wchar_t ****)0x149e458fc;
        local_b8[0] = 0x34;
        FUN_140208c1e(local_2d8,local_2f8,&local_2e8,&local_c0);
        FUN_14023409e(&local_2c8,local_2d8,1);
        local_c0 = (wchar_t ****)CONCAT44(local_c0._4_4_,4);
        FUN_14023423e(aplStack_b0,&local_2b8);
        local_240 = local_a0;
        local_248 = (wchar_t ****)&local_c0;
        FUN_14010d304(&local_238,&local_248);
        local_250 = (longlong *)CONCAT44(uStack_2bc,local_2c0);
        local_258 = local_2c8;
        if (local_250 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_250 + 1) = (int)local_250[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(&local_2a8,&local_258,&local_238);
        FUN_14007f2db(local_238,local_230);
        if ((wchar_t *****)local_238 != (wchar_t *****)0x0) {
          FUN_1400020a8();
        }
        lVar16 = local_360;
        if (aplStack_b0[0] != (longlong *)0x0) {
          (**(code **)(*aplStack_b0[0] + 0x10))();
        }
        plVar7 = (longlong *)CONCAT44(uStack_2bc,local_2c0);
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
        if (local_2b8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_2b8 + 0x10))();
        }
        FUN_140008f88(local_368,&local_2a8);
        if (local_2a8 != (longlong *)0x0) {
          (**(code **)(*local_2a8 + 0x10))();
        }
        if (local_2d8[0] != (longlong *)0x0) {
          (**(code **)(*local_2d8[0] + 0x10))();
        }
      }
      goto LAB_140481716;
    }
    if (param_3 == 0) {
      cVar8 = '\0';
    }
    else {
      local_c0 = (wchar_t ****)0x149e458b4;
      local_b8[0] = 0x12;
      local_360 = lVar16;
      FUN_1446e940c(&local_248,&local_c0);
      local_c0 = (wchar_t ****)0x149e458da;
      local_b8[0] = 0x10;
      FUN_1446e940c(&local_258,&local_c0);
      local_c0 = (wchar_t ****)0x149e4584e;
      local_b8[0] = 0x32;
      FUN_140208c1e(&local_238,&local_258,&local_248,&local_c0);
      FUN_140008f88(param_3,&local_238);
      if ((wchar_t *****)local_238 != (wchar_t *****)0x0) {
        (*(code *)(*local_238)[2])();
      }
      cVar8 = '\0';
      uVar17 = uVar17 & 0xffffffff;
      lVar16 = local_360;
    }
    goto LAB_140481658;
  }
  if (param_3 != 0) {
    local_228 = (wchar_t ****)0x149e45f4e;
    local_220._0_4_ = 0x1d;
    FUN_1446e940c(&local_c0,&local_228);
    local_228 = (wchar_t ****)0x149e458da;
    local_220 = CONCAT44(local_220._4_4_,0x10);
    FUN_1446e940c(&local_238,&local_228);
    FUN_140208bae(&local_228,&local_238,&local_c0,
                  L"The \'Modules\' array has invalid contents and was not able to be loaded.");
    FUN_140008f88(local_368,&local_228);
    if ((wchar_t *****)local_228 != (wchar_t *****)0x0) {
      (*(code *)(*local_228)[2])();
    }
  }
  uVar17 = 0;
  param_3 = local_368;
  goto LAB_1404816d6;
LAB_14048255f:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_140482562:
  if (iVar14 == 0) goto LAB_14048174c;
  uVar10 = uVar10 + 1;
  if (uVar10 == 0xe) goto code_r0x000140482576;
  goto LAB_1404814fa;
code_r0x000140482576:
  uVar10 = 0xe;
LAB_14048174c:
  local_220 = CONCAT44(local_220._4_4_,uVar10);
  if ((wchar_t *****)local_c0 != (wchar_t *****)0x0) {
    FUN_1400020a8();
    uVar10 = (uint)local_220;
  }
  if (uVar10 == 0xe) {
    if (param_3 != 0) {
      local_354 = (uint)uVar17;
      local_360 = lVar16;
      FUN_14047e026(local_288,&local_2c8);
      FUN_140233b1a(&local_2b8,&local_2c8);
      FUN_145715fae(local_2d8,&local_228);
      local_c0 = (wchar_t ****)0x149e45a0a;
      local_b8[0] = 0x15;
      FUN_1446e940c(&local_308,&local_c0);
      local_c0 = (wchar_t ****)0x149e458da;
      local_b8[0] = 0x10;
      FUN_1446e940c(local_318,&local_c0);
      local_c0 = (wchar_t ****)0x149e4598c;
      local_b8[0] = 0x3e;
      FUN_140208c1e(local_2f8,local_318,&local_308,&local_c0);
      FUN_14023409e(&local_2e8,local_2f8,1);
      local_c0 = (wchar_t ****)CONCAT44(local_c0._4_4_,4);
      FUN_14023423e(aplStack_b0,local_2d8);
      local_a0[0] = 4;
      FUN_14023423e(&local_90,&local_2b8);
      local_248 = (wchar_t ****)&local_c0;
      local_240 = local_80;
      FUN_14010d304(&local_238);
      local_258 = local_2e8;
      local_250 = local_2e0;
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_2e0 + 1) = (int)local_2e0[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_2a8,&local_258,&local_238);
      FUN_14007f2db(local_238,local_230);
      if ((wchar_t *****)local_238 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
      lVar16 = local_368;
      lVar15 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_c0 + lVar15) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_c0 + lVar15) + 0x10))();
          *(undefined8 *)((longlong)&local_c0 + lVar15) = 0;
          *(undefined4 *)((longlong)aplStack_b0 + lVar15 + -8) = 0;
        }
        plVar7 = local_2e0;
        lVar15 = lVar15 + -0x20;
      } while (lVar15 != -0x10);
      if (local_2e0 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_2e0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_2e0)(local_2e0);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (local_2d8[0] != (longlong *)0x0) {
        (**(code **)(*local_2d8[0] + 0x10))();
      }
      if (local_2b8 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_2b8 + 0x10))();
      }
      FUN_140008f88(lVar16,&local_2a8);
      if (local_2a8 != (longlong *)0x0) {
        (**(code **)(*local_2a8 + 0x10))();
      }
      lVar16 = local_360;
      if (local_2f8[0] != (longlong *)0x0) {
        (**(code **)(*local_2f8[0] + 0x10))();
      }
      uVar17 = (ulonglong)local_354;
      if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
        FUN_1400020a8();
      }
    }
LAB_140481716:
    cVar8 = '\0';
    goto LAB_140481718;
  }
  local_2b8 = L"LoadingPhase";
  local_2b0 = 0xc;
  FUN_1449ba96e(uVar6,&local_2a8,&local_2b8);
  if ((local_2a8 != (longlong *)0x0) && ((int)local_2a8[1] == 2)) {
    FUN_14047e026(local_2a8,&local_c0);
    pppppwVar12 = (wchar_t *****)local_c0;
    if (local_b8[0] == 0) {
      pppppwVar12 = (wchar_t *****)&DAT_149dfb77a;
    }
    uVar10 = 0;
LAB_1404817de:
    lVar15 = 0;
    do {
      uVar3 = *(ushort *)((longlong)pppppwVar12 + lVar15);
      uVar4 = *(ushort *)((&PTR_u_EarliestPossible_149e49da8)[uVar10] + lVar15);
      if (uVar3 == uVar4) {
        if (uVar3 == 0) goto LAB_14048186b;
      }
      else {
        uVar17 = uVar17 & 0xffffffff;
        param_3 = local_368;
        if (0x7f < (uVar4 | uVar3)) {
          iVar14 = (uint)uVar3 - (uint)uVar4;
          goto LAB_140481856;
        }
        if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[(uint)uVar4]) goto code_r0x000140481853;
      }
      lVar15 = lVar15 + 2;
    } while( true );
  }
LAB_140481d86:
  local_360 = lVar16;
  FUN_140056680(&local_248,L"WhitelistPlatforms");
  FUN_140056680(&local_258,L"PlatformAllowList");
  local_c0 = local_258;
  iVar14 = (int)local_250 + -1;
  if ((int)local_250 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480c28(uVar6,&local_c0,&local_218);
  if (cVar8 == '\0') {
    local_238 = local_248;
    local_230 = (int)local_240 + -1;
    if ((int)local_240 == 0) {
      local_230 = iVar13;
    }
    FUN_140480c28(uVar6,&local_238,&local_218);
  }
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_248 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_248,L"BlacklistPlatforms");
  FUN_140056680(&local_258,L"PlatformDenyList");
  local_c0 = local_258;
  iVar14 = (int)local_250 + -1;
  if ((int)local_250 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480c28(uVar6,&local_c0,&local_208);
  if (cVar8 == '\0') {
    local_238 = local_248;
    local_230 = (int)local_240 + -1;
    if ((int)local_240 == 0) {
      local_230 = iVar13;
    }
    FUN_140480c28(uVar6,&local_238,&local_208);
  }
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_248 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  local_248 = (wchar_t ****)0x149e45bac;
  local_240 = (undefined4 *)CONCAT44(local_240._4_4_,0x14);
  FUN_14047f976(uVar6,&local_248,local_c8);
  FUN_140056680(&local_258,L"WhitelistTargets");
  FUN_140056680(&local_2c8,L"TargetAllowList");
  local_c0 = local_2c8;
  iVar14 = local_2c0 + -1;
  if (local_2c0 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480dd8(uVar6,&local_c0,local_158);
  if (cVar8 == '\0') {
    local_238 = local_258;
    local_230 = (int)local_250 + -1;
    if ((int)local_250 == 0) {
      local_230 = iVar13;
    }
    FUN_140480dd8(uVar6,&local_238,local_158);
  }
  if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_258,L"BlacklistTargets");
  FUN_140056680(&local_2c8,L"TargetDenyList");
  local_c0 = local_2c8;
  iVar14 = local_2c0 + -1;
  if (local_2c0 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480dd8(uVar6,&local_c0,local_148);
  if (cVar8 == '\0') {
    local_238 = local_258;
    local_230 = (int)local_250 + -1;
    if ((int)local_250 == 0) {
      local_230 = iVar13;
    }
    FUN_140480dd8(uVar6,&local_238,local_148);
  }
  if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_258,L"WhitelistTargetConfigurations");
  FUN_140056680(&local_2c8,L"TargetConfigurationAllowList");
  local_c0 = local_2c8;
  iVar14 = local_2c0 + -1;
  if (local_2c0 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480b08(uVar6,&local_c0,local_138);
  if (cVar8 == '\0') {
    local_238 = local_258;
    local_230 = (int)local_250 + -1;
    if ((int)local_250 == 0) {
      local_230 = iVar13;
    }
    FUN_140480b08(uVar6,&local_238,local_138);
  }
  if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_258,L"BlacklistTargetConfigurations");
  FUN_140056680(&local_2c8,L"TargetConfigurationDenyList");
  local_c0 = local_2c8;
  iVar14 = local_2c0 + -1;
  if (local_2c0 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480b08(uVar6,&local_c0,local_128);
  if (cVar8 == '\0') {
    local_238 = local_258;
    local_230 = (int)local_250 + -1;
    if ((int)local_250 == 0) {
      local_230 = iVar13;
    }
    FUN_140480b08(uVar6,&local_238,local_128);
  }
  if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_258,L"WhitelistPrograms");
  FUN_140056680(&local_2c8,L"ProgramAllowList");
  local_c0 = local_2c8;
  iVar14 = local_2c0 + -1;
  if (local_2c0 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480c28(uVar6,&local_c0,local_118);
  if (cVar8 == '\0') {
    local_238 = local_258;
    local_230 = (int)local_250 + -1;
    if ((int)local_250 == 0) {
      local_230 = iVar13;
    }
    FUN_140480c28(uVar6,&local_238,local_118);
  }
  if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  lVar16 = local_360;
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_258,L"BlacklistPrograms");
  FUN_140056680(&local_2c8,L"ProgramDenyList");
  local_c0 = local_2c8;
  iVar14 = local_2c0 + -1;
  if (local_2c0 == 0) {
    iVar14 = iVar13;
  }
  local_b8[0] = iVar14;
  cVar8 = FUN_140480c28(uVar6,&local_c0,local_108);
  if (cVar8 == '\0') {
    local_238 = local_258;
    local_230 = (int)local_250 + -1;
    if ((int)local_250 == 0) {
      local_230 = iVar13;
    }
    FUN_140480c28(uVar6,&local_238,local_108);
  }
  if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  uVar17 = uVar17 & 0xffffffff;
  if ((wchar_t *****)local_258 != (wchar_t *****)0x0) {
    FUN_1400020a8();
  }
  local_238 = (wchar_t ****)0x149e45dcc;
  local_230 = 0x16;
  FUN_140480c28(uVar6,&local_238,local_d8);
  local_258 = (wchar_t ****)0x149e45dfa;
  local_250 = (longlong *)CONCAT44(local_250._4_4_,0x13);
  FUN_140480c28(uVar6,&local_258,local_f8);
  local_2c8 = (wchar_t ****)0x149e45e22;
  local_2c0 = 0x12;
  FUN_140480c28(uVar6,&local_2c8,local_e8);
  cVar8 = '\0';
  local_98 = 0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  aplStack_b0[0] = (longlong *)0x0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  local_c0 = (wchar_t ****)&local_228;
  FUN_145716012(local_b8,uVar6);
  local_68 = local_368;
  cVar9 = FUN_140482e2e(&local_c0,L"PlatformArchitectureAllowList",&local_1f8);
  if (cVar9 != '\0') {
    cVar8 = FUN_140482e2e(&local_c0,L"PlatformArchitectureDenyList",&local_1a8);
  }
  local_70 = 0;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_14047c7cc(local_b8);
  goto LAB_14048189a;
code_r0x000140481853:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar4];
LAB_140481856:
  if (iVar14 == 0) goto LAB_14048186b;
  uVar10 = uVar10 + 1;
  if (uVar10 == 10) goto code_r0x000140481866;
  goto LAB_1404817de;
code_r0x000140481866:
  uVar10 = 10;
LAB_14048186b:
  local_220 = CONCAT44(uVar10,(uint)local_220);
  if ((wchar_t *****)local_c0 != (wchar_t *****)0x0) {
    FUN_1400020a8();
    uVar10 = local_220._4_4_;
  }
  if (uVar10 != 10) goto LAB_140481d86;
  if (param_3 != 0) {
    local_354 = (uint)uVar17;
    local_360 = lVar16;
    FUN_14047e026(local_2a8,&local_2e8);
    FUN_140233b1a(local_2d8,&local_2e8);
    FUN_145715fae(local_2f8,&local_228);
    local_c0 = (wchar_t ****)0x149e45ade;
    local_b8[0] = 0x1d;
    FUN_1446e940c(local_31c,&local_c0);
    local_c0 = (wchar_t ****)0x149e458da;
    local_b8[0] = 0x10;
    FUN_1446e940c(local_320,&local_c0);
    local_c0 = (wchar_t ****)0x149e45a50;
    local_b8[0] = 0x46;
    FUN_140208c1e(local_318,local_320,local_31c,&local_c0);
    FUN_14023409e(&local_308,local_318,1);
    local_c0 = (wchar_t ****)CONCAT44(local_c0._4_4_,4);
    FUN_14023423e(aplStack_b0,local_2f8);
    local_a0[0] = 4;
    FUN_14023423e(&local_90,local_2d8);
    local_248 = (wchar_t ****)&local_c0;
    local_240 = local_80;
    FUN_14010d304(&local_238);
    local_258 = local_308;
    local_250 = local_300;
    if (local_300 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_300 + 1) = (int)local_300[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_2c8,&local_258,&local_238);
    FUN_14007f2db(local_238,local_230);
    if ((wchar_t *****)local_238 != (wchar_t *****)0x0) {
      FUN_1400020a8();
    }
    lVar16 = local_368;
    lVar15 = 0x30;
    do {
      if (*(longlong **)((longlong)&local_c0 + lVar15) != (longlong *)0x0) {
        (**(code **)(**(longlong **)((longlong)&local_c0 + lVar15) + 0x10))();
        *(undefined8 *)((longlong)&local_c0 + lVar15) = 0;
        *(undefined4 *)((longlong)aplStack_b0 + lVar15 + -8) = 0;
      }
      plVar7 = local_300;
      lVar15 = lVar15 + -0x20;
    } while (lVar15 != -0x10);
    if (local_300 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_300 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_300)(local_300);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    if (local_2f8[0] != (longlong *)0x0) {
      (**(code **)(*local_2f8[0] + 0x10))();
    }
    if (local_2d8[0] != (longlong *)0x0) {
      (**(code **)(*local_2d8[0] + 0x10))();
    }
    FUN_140008f88(lVar16,&local_2c8);
    if ((wchar_t *****)local_2c8 != (wchar_t *****)0x0) {
      (*(code *)(*local_2c8)[2])();
    }
    lVar16 = local_360;
    if (local_318[0] != (longlong *)0x0) {
      (**(code **)(*local_318[0] + 0x10))();
    }
    uVar17 = (ulonglong)local_354;
    if ((wchar_t *****)local_2e8 != (wchar_t *****)0x0) {
      FUN_1400020a8();
    }
  }
  cVar8 = '\0';
LAB_14048189a:
  plVar7 = local_2a0;
  if (local_2a0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_2a0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_2a0)(local_2a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_140481718:
  plVar7 = local_280;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_280 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_140481658:
  plVar7 = local_260;
  if (local_260 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_260 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_260)(local_260);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  param_3 = local_368;
  if (cVar8 == '\0') {
    uVar17 = 0;
  }
  else {
    iVar13 = (int)local_350[1];
    *(uint *)(local_350 + 1) = iVar13 + 1U;
    if (*(uint *)((longlong)local_350 + 0xc) < iVar13 + 1U) {
      FUN_140482a76(local_350,iVar13);
    }
    FUN_140b8518e((longlong)iVar13 * 0x168 + *local_350,&local_228);
  }
  FUN_140a49fb6(&local_228);
LAB_1404816d6:
  lVar16 = lVar16 + 1;
  if ((int)local_348[1] <= lVar16) goto LAB_1404818d7;
  goto LAB_14048130d;
}



// FUNCTION 140482996 FUN_140482996 body=212 status=ok
// SIG undefined FUN_140482996(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140482996(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (undefined8 *)0x0;
  cVar1 = (**(code **)(*param_1 + 0x70))();
  if (cVar1 == '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926c80) {
      FUN_144b3d300(&DAT_14c926c80);
      if (DAT_14c926c80 == -1) {
        DAT_14c926c70 = 0;
        _DAT_14c926c78 = 0;
        atexit(FUN_14279e864);
        _Init_thread_footer(&DAT_14c926c80);
      }
    }
    local_18 = &DAT_14c926c70;
    FUN_140056680(local_28,L"Array");
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140482a76 FUN_140482a76 body=372 status=ok
// SIG undefined FUN_140482a76(void)

void FUN_140482a76(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x168;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140482afe;
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
LAB_140482afe:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x168)) {
    uVar7 = uVar5 / 0x168 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x168,8);
  return;
}



// FUNCTION 140482beb FUN_140482beb body=579 status=ok
// SIG undefined FUN_140482beb(void)

undefined8 FUN_140482beb(undefined1 *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  ushort uVar8;
  longlong lVar9;
  undefined7 uVar3;
  
  lVar9 = 0;
  do {
    uVar4 = *(ushort *)(param_2 + lVar9);
    uVar8 = *(ushort *)((longlong)L"Debug" + lVar9);
    uVar1 = (ulonglong)uVar8;
    uVar5 = (uint)uVar4;
    if (uVar4 == uVar8) {
      uVar7 = 1;
      uVar2 = CONCAT71((uint7)(byte)(uVar8 >> 8),1);
      if (uVar5 == 0) goto LAB_140482cff;
    }
    else {
      if (0x7f < (uVar8 | uVar4)) break;
      uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar4];
      uVar1 = (ulonglong)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[uVar8]) break;
    }
    lVar9 = lVar9 + 2;
  } while( true );
  uVar3 = (undefined7)(uVar1 >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (uVar5 != (uint)uVar1) {
    lVar9 = 0;
    do {
      uVar4 = *(ushort *)(param_2 + lVar9);
      uVar1 = (ulonglong)uVar4;
      uVar8 = *(ushort *)((longlong)L"DebugGame" + lVar9);
      if (uVar4 == uVar8) {
        uVar7 = 2;
        if (uVar4 == 0) goto LAB_140482cff;
      }
      else {
        if (0x7f < (uVar8 | uVar4)) goto LAB_140482c81;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
        uVar6 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar6]) goto LAB_140482c81;
      }
      lVar9 = lVar9 + 2;
    } while( true );
  }
  uVar7 = 1;
  goto LAB_140482cff;
LAB_140482c81:
  if (uVar4 != uVar8) {
    lVar9 = 0;
    do {
      uVar4 = *(ushort *)(param_2 + lVar9);
      uVar1 = (ulonglong)uVar4;
      uVar8 = *(ushort *)((longlong)L"Development" + lVar9);
      if (uVar4 == uVar8) {
        uVar7 = 3;
        if (uVar4 == 0) goto LAB_140482cff;
      }
      else {
        if (0x7f < (uVar8 | uVar4)) goto LAB_140482ccc;
        uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
        uVar6 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar6]) goto LAB_140482ccc;
      }
      lVar9 = lVar9 + 2;
    } while( true );
  }
  uVar7 = 2;
  goto LAB_140482cff;
LAB_140482ccc:
  if (uVar4 == uVar8) {
    uVar7 = 3;
  }
  else {
    lVar9 = 0;
    while( true ) {
      uVar4 = *(ushort *)(param_2 + lVar9);
      uVar1 = (ulonglong)uVar4;
      uVar8 = *(ushort *)((longlong)L"Shipping" + lVar9);
      if (uVar4 != uVar8) {
        if ((uVar8 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
          uVar6 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar6]) goto LAB_140482cf6;
        }
        uVar7 = 4;
        if (uVar4 == uVar8) goto LAB_140482cff;
        lVar9 = 0;
        goto LAB_140482d38;
      }
      if (uVar4 == 0) break;
LAB_140482cf6:
      lVar9 = lVar9 + 2;
    }
    uVar7 = 4;
  }
  goto LAB_140482cff;
LAB_140482d38:
  uVar4 = *(ushort *)(param_2 + lVar9);
  uVar1 = (ulonglong)uVar4;
  uVar8 = *(ushort *)((longlong)&DAT_149e0466c + lVar9);
  if (uVar4 == uVar8) {
    if (uVar4 == 0) goto LAB_140482e15;
LAB_140482d70:
    lVar9 = lVar9 + 2;
    goto LAB_140482d38;
  }
  if ((uVar8 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
    uVar6 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar6]) goto LAB_140482d70;
  }
  if (uVar4 != uVar8) {
    lVar9 = 0;
    goto LAB_140482dda;
  }
LAB_140482e15:
  uVar7 = 5;
  goto LAB_140482cff;
LAB_140482dda:
  uVar4 = *(ushort *)(param_2 + lVar9);
  uVar1 = (ulonglong)uVar4;
  uVar8 = *(ushort *)((longlong)L"Unknown" + lVar9);
  if (uVar4 == uVar8) {
    if (uVar4 == 0) goto LAB_140482e26;
LAB_140482e0f:
    lVar9 = lVar9 + 2;
    goto LAB_140482dda;
  }
  if ((uVar8 | uVar4) < 0x80) {
    uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar1];
    uVar6 = (ulonglong)uVar8;
    uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar6]) goto LAB_140482e0f;
  }
  uVar2 = CONCAT71(uVar3,uVar4 == uVar8);
LAB_140482e26:
  uVar7 = 0;
LAB_140482cff:
  *param_1 = uVar7;
  return uVar2;
}



// FUNCTION 140482e2e FUN_140482e2e body=1310 status=ok
// SIG undefined FUN_140482e2e(void)

byte FUN_140482e2e(undefined8 *param_1,wchar_t *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  size_t sVar5;
  undefined2 *puVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  byte local_191;
  undefined8 *local_190;
  undefined8 local_188;
  longlong local_180;
  undefined8 local_178;
  undefined1 local_170 [4];
  undefined1 local_16c [4];
  longlong *local_168 [2];
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148 [2];
  longlong *local_138 [2];
  longlong *local_128 [2];
  longlong local_118 [2];
  undefined2 *local_108;
  undefined8 uStack_100;
  wchar_t *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  longlong *local_c8;
  wchar_t **local_c0;
  ulonglong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  wchar_t *local_a0;
  undefined4 local_98 [2];
  undefined1 local_90 [16];
  undefined4 local_80;
  undefined1 local_70 [16];
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_188 = *param_1;
  local_e8 = 0;
  uStack_e0 = 0;
  uVar11 = 0;
  local_f0 = 0;
  local_190 = param_1;
  local_178 = param_3;
  local_f8 = param_2;
  if (param_2 != (wchar_t *)0x0) {
    sVar5 = wcslen(param_2);
    local_f0 = (int)sVar5;
  }
  FUN_140480c28(param_1 + 1,&local_f8,&local_e8);
  if ((longlong)(int)uStack_e0 == 0) {
    local_191 = 1;
  }
  else {
    lVar14 = (longlong)(int)uStack_e0 * 0x10 + local_e8;
    lVar15 = local_e8;
    local_180 = lVar14;
    do {
      local_108 = (undefined2 *)0x0;
      uStack_100 = 0;
      local_118[0] = 0;
      local_118[1] = 0;
      FUN_140056680(&local_a0,&DAT_149e31048);
      local_1a0 = 0;
      local_1a8 = 1;
      bVar4 = FUN_1407cdbc6(lVar15,&local_a0,local_118 + 2,local_118);
      if (local_a0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_191 = bVar4;
      if (bVar4 == 0) {
        if (local_190[0xb] != 0) {
          FUN_140009b9a(local_138,lVar15);
          FUN_145715fae(local_148,local_188);
          local_a0 = L"ModuleWithInvalidPlatformArchitecture";
          local_98[0] = 0x25;
          FUN_1446e940c(local_16c,&local_a0);
          local_a0 = L"ModuleDescriptor";
          local_98[0] = 0x10;
          FUN_1446e940c(local_170,&local_a0);
          local_a0 = 
          L"Module entry \'{0}\' specified an unrecognized Platform:Architecture pair \'{1}\'";
          local_98[0] = 0x4d;
          FUN_140208c1e(local_168,local_170,local_16c,&local_a0);
          FUN_14023409e(&local_158,local_168,1);
          local_a0 = (wchar_t *)CONCAT44(local_a0._4_4_,4);
          FUN_14023423e(local_90,local_148);
          local_80 = 4;
          FUN_14023423e(local_70,local_138);
          local_b8 = local_60;
          local_c0 = &local_a0;
          FUN_14010d304(&local_b0,&local_c0);
          local_d0 = local_158;
          local_c8 = local_150;
          if (local_150 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_150 + 1) = (int)local_150[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_128,&local_d0,&local_b0);
          FUN_14007f2db(local_b0,local_a8);
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
          lVar12 = 0x30;
          do {
            plVar3 = *(longlong **)((longlong)local_98 + lVar12 + -8);
            if (plVar3 != (longlong *)0x0) {
              (**(code **)(*plVar3 + 0x10))();
              *(undefined8 *)((longlong)local_98 + lVar12 + -8) = 0;
              *(undefined4 *)((longlong)local_98 + lVar12) = 0;
            }
            plVar3 = local_150;
            lVar12 = lVar12 + -0x20;
          } while (lVar12 != -0x10);
          if (local_150 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_150 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_150)(local_150);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          if (local_148[0] != (longlong *)0x0) {
            (**(code **)(*local_148[0] + 0x10))();
          }
          if (local_138[0] != (longlong *)0x0) {
            (**(code **)(*local_138[0] + 0x10))();
          }
          FUN_140008f88(local_190[0xb],local_128);
          if (local_128[0] != (longlong *)0x0) {
            (**(code **)(*local_128[0] + 0x10))();
          }
          if (local_168[0] != (longlong *)0x0) {
            (**(code **)(*local_168[0] + 0x10))();
          }
        }
      }
      else {
        uVar9 = 0;
        iVar8 = (int)uStack_100 + -1;
        if ((int)uStack_100 == 0) {
          iVar8 = 0;
        }
        if (0 < iVar8) {
          puVar6 = &DAT_149dfb77a;
          if ((int)uStack_100 != 0) {
            puVar6 = local_108;
          }
          lVar14 = 0;
          uVar9 = 0;
          do {
            uVar10 = ((uint)(0x19 < (ushort)puVar6[lVar14] - 0x61) * 0x20 +
                     (uint)(ushort)puVar6[lVar14]) - 0x20;
            uVar13 = (uint)(uVar9 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar10) & 0xff) * 4);
            uVar9 = (ulonglong)
                    (uVar13 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar10 >> 8 & 0xff) * 4))
            ;
            lVar14 = lVar14 + 1;
          } while (iVar8 != (int)lVar14);
        }
        uVar7 = FUN_140e10654(local_178,uVar9,local_118 + 2);
        FUN_1412fabe8(uVar7,local_118);
        lVar14 = local_180;
      }
      if (local_118[0] != 0) {
        FUN_1400020a8();
      }
      if (local_108 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      lVar15 = lVar15 + 0x10;
    } while ((local_191 & lVar15 != lVar14) != 0);
    uVar11 = (int)uStack_e0;
  }
  FUN_1447a1747(local_e8,uVar11);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60[0] ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return local_191;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048334d FUN_14048334d body=105 status=ok
// SIG undefined FUN_14048334d(void)

ulonglong FUN_14048334d(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar2 = 0;
LAB_14048335f:
  lVar7 = 0;
  do {
    uVar5 = *(ushort *)(param_1 + lVar7);
    uVar6 = (ulonglong)uVar5;
    uVar3 = *(ushort *)((&PTR_u_Never_149e49cd0)[uVar2] + lVar7);
    if (uVar5 == uVar3) {
      if (uVar5 == 0) {
        return uVar2;
      }
    }
    else {
      if (0x7f < (uVar3 | uVar5)) break;
      uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
      uVar4 = (ulonglong)uVar3;
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      if ((&DAT_149e05da0)[uVar6] != (&DAT_149e05da0)[uVar4]) break;
    }
    lVar7 = lVar7 + 2;
  } while( true );
  if (uVar5 == uVar3) {
    return uVar2;
  }
  uVar1 = (int)uVar2 + 1;
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 6) {
    return 6;
  }
  goto LAB_14048335f;
}



// FUNCTION 1404833b6 FUN_1404833b6 body=479 status=ok
// SIG undefined FUN_1404833b6(void)

void FUN_1404833b6(longlong param_1)

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
  FUN_14048362e();
  if ((*(longlong *)(param_1 + 0x3e0) == 0) || (lVar1 = *(longlong *)(param_1 + 0x168), lVar1 == 0))
  {
LAB_140483583:
    if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
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
  if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_140483583;
  if (*(char *)(param_1 + 0x480) == '\x01') {
    if (*(longlong *)(lVar1 + 0x3cd0) == 0) goto LAB_140483476;
    lVar1 = FUN_140c8331a();
    if (lVar1 == 0) goto LAB_140483476;
    FUN_1404835a8(*(undefined8 *)(param_1 + 0x3e0));
    if ((param_1 != 0) && (*(int *)(lVar1 + 0x410) == 2)) {
      FUN_1404df464(lVar1,param_1,*(undefined8 *)(param_1 + 0x3e0));
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x3cc8) == 0) goto LAB_140483476;
    lVar1 = FUN_140123f3e();
    if (lVar1 == 0) goto LAB_140483476;
    FUN_1404835a8(*(undefined8 *)(param_1 + 0x3e0));
    FUN_140483770(lVar1,param_1,*(undefined8 *)(param_1 + 0x3e0));
  }
  FUN_1404838ec(*(undefined8 *)(param_1 + 0x3e0));
LAB_140483476:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 1404835a8 FUN_1404835a8 body=134 status=ok
// SIG undefined FUN_1404835a8(void)

void FUN_1404835a8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x90) != 0) || (*(int *)(param_1 + 0x94) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x2e0);
    piVar1 = (int *)(lVar4 + 0x30);
    *piVar1 = *piVar1 + -1;
    FUN_1400eb24e(lVar4 + 0x28);
    iVar2 = *(int *)(param_1 + 0x40);
    iVar3 = *(int *)(param_1 + 0x44);
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x88);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x8c);
    *(float *)(param_1 + 0x30) =
         (float)(*(int *)(param_1 + 0x88) - (int)((float)iVar2 - *(float *)(param_1 + 0x30)));
    *(float *)(param_1 + 0x34) =
         (float)(*(int *)(param_1 + 0x8c) - (int)((float)iVar3 - *(float *)(param_1 + 0x34)));
  }
  return;
}



// FUNCTION 14048362e FUN_14048362e body=321 status=ok
// SIG undefined FUN_14048362e(void)

void FUN_14048362e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)((longlong)param_1 + 0x41c) < 0) {
    *(undefined4 *)(param_1 + 0x83) = 0;
    FUN_147af3fa6(param_1 + 0x82,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x83) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x42c) < 0) {
    *(undefined4 *)(param_1 + 0x85) = 0;
    FUN_147af4018(param_1 + 0x84,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x85) = 0;
  }
  if (((*(byte *)(param_1 + 0x74) & 2) != 0) &&
     (plVar1 = (longlong *)param_1[0x72], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x718))(plVar1,&local_38,&local_50);
    local_58 = local_40;
    local_68 = local_50;
    uStack_60 = uStack_48;
    local_88 = (undefined4)local_38;
    uStack_84 = local_38._4_4_;
    uStack_80 = uStack_30;
    uStack_7c = uStack_2c;
    local_78 = local_28;
    (**(code **)(*param_1 + 0x668))(param_1);
  }
  local_38 = *(undefined8 *)(param_1[0x7c] + 0x40);
  uVar2 = FUN_14477b072(param_1,DAT_14cae4520);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,&local_38);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140483770 FUN_140483770 body=355 status=ok
// SIG undefined FUN_140483770(void)

void FUN_140483770(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_108 [40];
  double local_e0;
  double local_d8;
  undefined1 local_d0 [176];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_2 != 0) && (*(int *)(param_1 + 0x410) == 2)) &&
     (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x4e8))();
    if (((cVar2 != '\0') && (*(longlong *)(param_1 + 0x3c0) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x3c0) + 0x3a8) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_108);
    }
  }
  if (((param_3 != 0) && (*(int *)(param_1 + 0x3ec) != 0)) &&
     ((uVar1 = *(uint *)(param_1 + 1000), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)))) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x3ec))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if (*(char *)(lVar3 + 0x950) == '\x01') {
        lVar3 = FUN_14571695d();
        local_d8 = (double)*(float *)(param_3 + 0x34);
        local_e0 = (double)*(float *)(param_3 + 0x30);
        FUN_140484538(local_d0,&DAT_14c8463f0,&local_e0,lVar3 + 0xa4);
        FUN_140484502(param_3,local_d0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404838ec FUN_1404838ec body=456 status=ok
// SIG undefined FUN_1404838ec(void)

void FUN_1404838ec(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  double local_58;
  double local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar5 = *(int *)(param_1 + 0x90);
  if ((((iVar5 != 0) || (*(int *)(param_1 + 0x94) != 0)) || (*(int *)(param_1 + 0x98) != 0)) ||
     (*(int *)(param_1 + 0x9c) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x2e8);
    fVar10 = 0.0;
    fVar11 = 0.0;
    if (lVar3 != 0) {
      fVar11 = (float)*(int *)(lVar3 + 0x4d8);
      fVar10 = (float)*(int *)(lVar3 + 0x4dc);
    }
    iVar6 = (int)(fVar11 + *(float *)(param_1 + 0x28));
    iVar7 = (int)(fVar10 + *(float *)(param_1 + 0x2c));
    iVar8 = 0;
    iVar4 = iVar5 - iVar6;
    if (iVar5 - iVar6 == 0 || iVar5 < iVar6) {
      iVar4 = iVar8;
    }
    iVar5 = *(int *)(param_1 + 0x94) - iVar7;
    if (iVar5 == 0 || *(int *)(param_1 + 0x94) < iVar7) {
      iVar5 = iVar8;
    }
    iVar1 = *(int *)(param_1 + 0x40);
    iVar2 = *(int *)(param_1 + 0x44);
    iVar9 = *(int *)(param_1 + 0xa0) - (*(int *)(param_1 + 0x98) + iVar6 + iVar1);
    if (iVar6 + iVar1 <= *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x98)) {
      iVar9 = iVar8;
    }
    iVar6 = *(int *)(param_1 + 0xa4) - (*(int *)(param_1 + 0x9c) + iVar7 + iVar2);
    if (iVar7 + iVar2 <= *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0x9c)) {
      iVar6 = iVar8;
    }
    *(int *)(param_1 + 0x88) = iVar1;
    *(int *)(param_1 + 0x8c) = iVar2;
    iVar9 = (iVar1 - iVar4) + iVar9;
    *(int *)(param_1 + 0x40) = iVar9;
    iVar6 = (iVar2 - iVar5) + iVar6;
    *(int *)(param_1 + 0x44) = iVar6;
    *(float *)(param_1 + 0x30) = (float)(iVar9 - (int)((float)iVar1 - *(float *)(param_1 + 0x30)));
    *(float *)(param_1 + 0x34) = (float)(iVar6 - (int)((float)iVar2 - *(float *)(param_1 + 0x34)));
    local_50 = (double)iVar5;
    local_58 = (double)iVar4;
    local_b8 = 0x3ff0000000000000;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0x3ff0000000000000;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0x3ff0000000000000;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0x3ff0000000000000;
    FUN_147d8e05e(*(undefined8 *)(param_1 + 0x2e0));
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140484502 FUN_140484502 body=54 status=ok
// SIG undefined FUN_140484502(void)

void FUN_140484502(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2e0);
  (**(code **)(*param_2 + 0x18))(param_2,lVar1);
  if (*(int *)(lVar1 + 0xac) != 1) {
    return;
  }
  FUN_14376e4da(lVar1,0);
  return;
}



// FUNCTION 140484538 FUN_140484538 body=143 status=ok
// SIG undefined FUN_140484538(void)

void FUN_140484538(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14a8bd0e0;
  uVar1 = param_2[1];
  param_1[1] = *param_2;
  param_1[2] = uVar1;
  param_1[5] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = &DAT_3f8000003f800000;
  param_1[7] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14aaeb770;
  uVar1 = param_3[1];
  param_1[8] = *param_3;
  param_1[9] = uVar1;
  *(undefined4 *)(param_1 + 10) = 0x3f800000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = DAT_14ca94e18;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x14] = DAT_14c8463f0;
  param_1[0x15] = uVar1;
  uVar1 = param_4[1];
  param_1[6] = *param_4;
  param_1[7] = uVar1;
  return;
}



// FUNCTION 1404845ce FUN_1404845ce body=874 status=ok
// SIG undefined FUN_1404845ce(void)

longlong FUN_1404845ce(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = param_1;
  while( true ) {
    *(undefined1 *)(lVar5 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    *(undefined4 *)(lVar5 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined1 *)(lVar5 + 0xc) = *(undefined1 *)(param_2 + 0xc);
    *(undefined4 *)(lVar5 + 0x160) = 0;
    if (*(int *)(lVar5 + 0x164) != 0) {
      FUN_14481578e(lVar5 + 0x158,0);
    }
    FUN_1402a351e(*(undefined8 *)(lVar5 + 0x178),*(undefined4 *)(lVar5 + 0x180));
    *(undefined4 *)(lVar5 + 0x180) = 0;
    if (*(int *)(lVar5 + 0x184) != 0) {
      FUN_145716a52(lVar5 + 0x178,0);
    }
    *(undefined4 *)(lVar5 + 0x170) = 0;
    if (*(int *)(lVar5 + 0x174) != 0) {
      FUN_14481578e(lVar5 + 0x168,0);
    }
    if (lVar5 == param_2) break;
    FUN_140484938(lVar5 + 0x10,param_2 + 0x10);
    FUN_1404849e2(lVar5 + 0x20,param_2 + 0x20);
    *(undefined4 *)(lVar5 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    iVar1 = *(int *)(param_2 + 0x40);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    *(int *)(lVar5 + 0x40) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar5 + 0x44) == 0) {
      *(undefined4 *)(lVar5 + 0x44) = 0;
    }
    else {
      FUN_1446fc50a(lVar5 + 0x38,iVar1);
      FUN_1446fc4ab(*(undefined8 *)(lVar5 + 0x38),uVar2,iVar1);
    }
    *(undefined1 *)(lVar5 + 0x48) = *(undefined1 *)(param_2 + 0x48);
    *(undefined4 *)(lVar5 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
    *(undefined4 *)(lVar5 + 0x50) = *(undefined4 *)(param_2 + 0x50);
    *(undefined4 *)(lVar5 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    FUN_140484a40(lVar5 + 0x58,param_2 + 0x58);
    FUN_14054c6c4(lVar5 + 0xa8,param_2 + 0xa8);
    FUN_14054c6c4(lVar5 + 0xb8,param_2 + 0xb8);
    uVar2 = *(undefined8 *)(param_2 + 0xf4);
    *(undefined8 *)(lVar5 + 0xec) = *(undefined8 *)(param_2 + 0xec);
    *(undefined8 *)(lVar5 + 0xf4) = uVar2;
    *(undefined4 *)(lVar5 + 0x10c) = *(undefined4 *)(param_2 + 0x10c);
    uVar2 = *(undefined8 *)(param_2 + 0x104);
    *(undefined8 *)(lVar5 + 0xfc) = *(undefined8 *)(param_2 + 0xfc);
    *(undefined8 *)(lVar5 + 0x104) = uVar2;
    *(undefined8 *)(lVar5 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
    *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(param_2 + 0xd8);
    *(undefined4 *)(lVar5 + 0xe0) = *(undefined4 *)(param_2 + 0xe0);
    *(undefined4 *)(lVar5 + 0xe4) = *(undefined4 *)(param_2 + 0xe4);
    *(undefined4 *)(lVar5 + 0xe8) = *(undefined4 *)(param_2 + 0xe8);
    iVar1 = *(int *)(param_2 + 0x118);
    uVar2 = *(undefined8 *)(param_2 + 0x110);
    *(int *)(lVar5 + 0x118) = iVar1;
    if (iVar1 == 0 && *(int *)(lVar5 + 0x11c) == 0) {
      *(undefined4 *)(lVar5 + 0x11c) = 0;
    }
    else {
      FUN_1446fc50a(lVar5 + 0x110,iVar1);
      FUN_1446fc4ab(*(undefined8 *)(lVar5 + 0x110),uVar2,iVar1);
    }
    FUN_140484988(lVar5 + 0x120);
    *(undefined4 *)(lVar5 + 0x130) = *(undefined4 *)(param_2 + 0x130);
    *(undefined4 *)(lVar5 + 0x134) = *(undefined4 *)(param_2 + 0x134);
    *(undefined8 *)(lVar5 + 0x138) = *(undefined8 *)(param_2 + 0x138);
    *(undefined4 *)(lVar5 + 0x140) = *(undefined4 *)(param_2 + 0x140);
    *(undefined4 *)(lVar5 + 0x144) = *(undefined4 *)(param_2 + 0x144);
    *(undefined8 *)(lVar5 + 0x148) = *(undefined8 *)(param_2 + 0x148);
    *(undefined1 *)(lVar5 + 0x188) = *(undefined1 *)(param_2 + 0x188);
    *(undefined1 *)(lVar5 + 0x189) = *(undefined1 *)(param_2 + 0x189);
    *(undefined1 *)(lVar5 + 0x18a) = *(undefined1 *)(param_2 + 0x18a);
    lVar4 = *(longlong *)(lVar5 + 200);
    if (*(longlong *)(param_2 + 200) == 0) {
      *(undefined8 *)(lVar5 + 200) = 0;
      if (lVar4 != 0) {
        FUN_140d9df70(lVar4);
        FUN_1400020a8(lVar4);
      }
      return param_1;
    }
    if (lVar4 == 0) {
      lVar4 = FUN_14001cc68(0x1e0);
      FUN_14008b51a(lVar4);
      lVar3 = *(longlong *)(lVar5 + 200);
      *(longlong *)(lVar5 + 200) = lVar4;
      if (lVar3 != 0) {
        FUN_140d9df70(lVar3);
        FUN_1400020a8(lVar3);
        lVar4 = *(longlong *)(lVar5 + 200);
      }
    }
    param_2 = *(longlong *)(param_2 + 200);
    lVar5 = lVar4;
  }
  return param_1;
}



// FUNCTION 140484938 FUN_140484938 body=79 status=ok
// SIG undefined FUN_140484938(void)

undefined8 * FUN_140484938(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140484ca8(param_1,iVar1);
      FUN_1449bab58(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140484988 FUN_140484988 body=89 status=ok
// SIG undefined FUN_140484988(void)

undefined8 * FUN_140484988(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140484ede(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404849e2 FUN_1404849e2 body=93 status=ok
// SIG undefined FUN_1404849e2(void)

undefined8 * FUN_1404849e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1449bab29(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140484d90(param_1,iVar1);
      FUN_1449babb0(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140484a40 FUN_140484a40 body=154 status=ok
// SIG undefined FUN_140484a40(void)

longlong FUN_140484a40(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_140484a6c;
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
LAB_140484a6c:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140484ada(param_1,param_2);
  return param_1;
}



// FUNCTION 140484ada FUN_140484ada body=337 status=ok
// SIG undefined FUN_140484ada(void)

longlong * FUN_140484ada(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140484c2c(param_1,(ulonglong)uVar1);
    lVar4 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar4 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar4) < uVar1) {
      FUN_140171ad2(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar5 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar6 = 0x80;
      if (0x80 < (int)uVar5) {
        uVar6 = uVar5;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar6;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar7 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar7 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar7,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      lVar4 = *param_1;
      lVar3 = *param_2;
      lVar8 = 0xc;
      uVar9 = 0;
      do {
        plVar7 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar7 = param_2 + 2;
        }
        uVar5 = *(uint *)((longlong)plVar7 + (uVar9 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar4 + -0xc + lVar8) = *(undefined4 *)(lVar3 + -0xc + lVar8);
        if ((uVar5 >> ((uint)uVar9 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar4 + -8 + lVar8) = *(undefined4 *)(lVar3 + -8 + lVar8);
        }
        else {
          *(undefined4 *)(lVar4 + -8 + lVar8) = *(undefined4 *)(lVar3 + -8 + lVar8);
          *(undefined4 *)(lVar4 + -4 + lVar8) = *(undefined4 *)(lVar3 + -4 + lVar8);
          *(undefined8 *)(lVar4 + lVar8) = *(undefined8 *)(lVar3 + lVar8);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x14;
      } while (uVar1 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 140484c2c FUN_140484c2c body=123 status=ok
// SIG undefined FUN_140484c2c(void)

void FUN_140484c2c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140484ca8 FUN_140484ca8 body=231 status=ok
// SIG undefined FUN_140484ca8(void)

void FUN_140484ca8(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (param_3 < iVar5) {
    FUN_1446f8d3c(param_1,0,iVar5,0x70,8);
    param_3 = iVar5;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140484d90 FUN_140484d90 body=333 status=ok
// SIG undefined FUN_140484d90(void)

void FUN_140484d90(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x48;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140484e02;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140484e02:
    iVar5 = (int)(uVar4 / 0x48);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x48,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140484ede FUN_140484ede body=336 status=ok
// SIG undefined FUN_140484ede(void)

void FUN_140484ede(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140484f50;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_140484f50:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14048502e FUN_14048502e body=815 status=ok
// SIG undefined FUN_14048502e(void)

longlong FUN_14048502e(longlong *param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  
  iVar8 = FUN_14048535e();
  if (iVar8 != -1) {
    if (*param_1 + (longlong)iVar8 * 0x20 != 0) {
      lVar11 = (longlong)iVar8 * 0x20 + *param_1;
      goto LAB_1404851d5;
    }
  }
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar8) {
      FUN_1447711aa(param_1,iVar8);
    }
    iVar19 = (int)param_1[5];
    if (iVar19 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar9 = iVar19 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar14 = iVar19 + 1;
    iVar18 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar18 = iVar19;
    }
    if (iVar18 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar9 = iVar19;
        }
        else {
          uVar10 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar10) {
              uVar13 = uVar10;
            }
          }
          else {
            uVar13 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar13 << 2,0);
          iVar9 = (int)(uVar16 >> 2);
          iVar14 = -0x20;
          if ((int)uVar10 <= iVar9) {
            iVar14 = iVar9 << 5;
          }
          iVar9 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar15,iVar9);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar9 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar9 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar15;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar9 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar8;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar19 & 0x1f;
    puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar18 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar8 = (int)param_1[6];
    lVar11 = (longlong)iVar8;
    iVar19 = *(int *)(*param_1 + 4 + lVar11 * 0x20);
    *(int *)(param_1 + 6) = iVar19;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar19 * 0x20) = 0xffffffff;
    }
  }
  iVar19 = 1;
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  iVar9 = iVar8 + 0x1f;
  if (-1 < iVar8) {
    iVar9 = iVar8;
  }
  puVar1 = (uint *)((longlong)plVar15 + (longlong)(iVar9 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  lVar3 = *param_1;
  lVar11 = lVar11 * 0x20;
  puVar2 = (undefined4 *)(lVar3 + lVar11);
  *(undefined4 *)(lVar3 + 8 + lVar11) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar3 + lVar11) = *param_3;
  *(undefined8 *)(lVar3 + 0x10 + lVar11) = 0;
  *(undefined4 *)(lVar3 + 0x18 + lVar11) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) {
    uVar10 = 1;
LAB_140485171:
    if (((int)uVar10 < 1) || (iVar19 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      puVar2[7] = param_2;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      puVar2[6] = *(undefined4 *)
                   ((longlong)plVar15 +
                   ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           iVar8;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_140485442(param_1);
    }
  }
  else {
    iVar9 = FUN_14048535e(param_1,param_2,puVar2);
    if (iVar9 == -1) {
      uVar10 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      if (3 < uVar10) {
        uVar16 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
        lVar11 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar19 = 1 << ((byte)lVar11 & 0x1f);
      }
      goto LAB_140485171;
    }
    lVar11 = *param_1;
    uVar4 = *puVar2;
    uVar5 = puVar2[1];
    uVar6 = puVar2[2];
    uVar7 = puVar2[3];
    *(undefined8 *)(lVar11 + 0x10 + (longlong)iVar9 * 0x20) = *(undefined8 *)(puVar2 + 4);
    puVar2 = (undefined4 *)(lVar11 + (longlong)iVar9 * 0x20);
    *puVar2 = uVar4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    FUN_140d335cc(param_1,iVar8);
  }
  lVar11 = *param_1 + (longlong)iVar8 * 0x20;
LAB_1404851d5:
  return lVar11 + 0x10;
}



// FUNCTION 14048535e FUN_14048535e body=123 status=ok
// SIG undefined FUN_14048535e(void)

int FUN_14048535e(longlong *param_1,uint param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x20;
        cVar1 = FUN_1404853da(lVar4 + lVar5,param_3);
        if ((cVar1 != '\0') && (*(int *)(lVar4 + 8 + lVar5) == *(int *)(param_3 + 8))) {
          return iVar3;
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1404853da FUN_1404853da body=104 status=ok
// SIG undefined FUN_1404853da(void)

ulonglong FUN_1404853da(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 140485442 FUN_140485442 body=681 status=ok
// SIG undefined FUN_140485442(void)

void FUN_140485442(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1404854a6;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1404854a6:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = *(uint *)(lVar6 + 4 + lVar13) ^ *(uint *)(lVar6 + lVar13);
      uVar15 = (longlong)
               (int)((uVar2 >> 2) + uVar2 * 0x40 + *(int *)(lVar6 + 8 + lVar13) + 0x9e3779b9 ^ uVar2
                    ) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 140485758 FUN_140485758 body=73 status=ok
// SIG undefined FUN_140485758(void)

undefined8 * FUN_140485758(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b398ea0;
  FUN_1403d9976(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404857a2 FUN_1404857a2 body=35 status=ok
// SIG undefined FUN_1404857a2(void)

void FUN_1404857a2(longlong param_1)

{
  FUN_1404857c6(param_1 + 0x660,0);
  FUN_1447c0e7a(param_1);
  return;
}



// FUNCTION 1404857c6 FUN_1404857c6 body=198 status=ok
// SIG undefined FUN_1404857c6(void)

void FUN_1404857c6(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 0x38) = *(int *)(param_1[3] + 0x38) + -1;
    UNLOCK();
    lVar2 = param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      lVar4 = lVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      lVar4 = param_1[3];
    }
    LOCK();
    bVar6 = param_1 == *(longlong **)(lVar4 + 0x30);
    if (bVar6) {
      *(longlong *)(lVar4 + 0x30) = lVar3;
    }
    UNLOCK();
    if (!bVar6) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    lVar3 = param_1[2];
    lVar4 = param_1[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 == '\0') && ((longlong)*(int *)(lVar4 + 0x20) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5) != 0)) {
          FUN_147e33d5a(lVar4 + 0x18,lVar3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x20) * 0x10 != lVar5);
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14048589a FUN_14048589a body=79 status=ok
// SIG undefined FUN_14048589a(void)

undefined8 * FUN_14048589a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b318510;
  FUN_1404858e9(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140485ace(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404858e9 FUN_1404858e9 body=41 status=ok
// SIG undefined FUN_1404858e9(void)

void FUN_1404858e9(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140485912(param_1);
    param_1 = param_1 + 0xc0;
  }
  return;
}



// FUNCTION 140485912 FUN_140485912 body=96 status=ok
// SIG undefined FUN_140485912(void)

void FUN_140485912(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b023b08;
  FUN_140485972(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014048596e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140485972 FUN_140485972 body=168 status=ok
// SIG undefined FUN_140485972(void)

void FUN_140485972(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x90;
    do {
      *(undefined4 *)(param_1 + 0x48) = 0;
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      FUN_140485a1a(param_1);
      *(undefined4 *)(param_1 + -8) = 0;
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      FUN_140485a1a(param_1 + -0x50);
      *(undefined2 **)(param_1 + -0x70) = &DAT_14a171d50;
      *(undefined4 *)(param_1 + -0x58) = 0;
      if (*(int *)(param_1 + -0x54) != 0) {
        FUN_140115c12(param_1 + -0x60,0);
      }
      *(undefined8 *)(param_1 + -0x68) = 0;
      if (*(longlong *)(param_1 + -0x60) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0xe8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140485a1a FUN_140485a1a body=55 status=ok
// SIG undefined FUN_140485a1a(void)

void FUN_140485a1a(longlong *param_1)

{
  FUN_140485a52(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140485a52 FUN_140485a52 body=123 status=ok
// SIG undefined FUN_140485a52(void)

void FUN_140485a52(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1448fc38a(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140485ace FUN_140485ace body=154 status=ok
// SIG undefined FUN_140485ace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140485ace(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b318540;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140485b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140485b74 FUN_140485b74 body=364 status=ok
// SIG undefined FUN_140485b74(void)

undefined8 * FUN_140485b74(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_38,L"SpawnComponent",1);
  uVar1 = FUN_140485dc8();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar1,0);
  FUN_1446f470e(&local_40,L"Preview",1);
  uVar1 = FUN_140485ce2();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar1,0);
  FUN_140485eae(param_1,param_2);
  *param_1 = &PTR_FUN_14b801560;
  param_1[0x72] = &PTR_FUN_14b801ba0;
  param_1[0x73] = &PTR_FUN_14b801bc0;
  param_1[0x78] = &PTR_FUN_14b801be0;
  param_1[0x79] = &PTR_FUN_14b801c50;
  param_1[0x7a] = &PTR_FUN_14b801c80;
  param_1[0x7b] = &PTR_FUN_14b801cb0;
  param_1[0x7c] = &PTR_FUN_14b801d20;
  param_1[0x7d] = &PTR_FUN_14b801d38;
  param_1[0x7e] = &PTR_FUN_14b801d50;
  param_1[0x7f] = &PTR_FUN_14b801d70;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140485ce2 FUN_140485ce2 body=228 status=ok
// SIG undefined FUN_140485ce2(void)

longlong FUN_140485ce2(void)

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
  if (DAT_14cbaef80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641f27c;
    local_38 = &LAB_148c45d29;
    local_40 = FUN_1465edf1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSpawnPointPreviewComponent",&DAT_14cbaef80,FUN_1465edef6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaef80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140485dc8 FUN_140485dc8 body=228 status=ok
// SIG undefined FUN_140485dc8(void)

longlong FUN_140485dc8(void)

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
  if (DAT_14cbaef30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464ba3a0;
    local_38 = &LAB_148c45c6d;
    local_40 = FUN_14067209b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x990;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSpawnPointComponent",&DAT_14cbaef30,&DAT_148c45c6c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaef30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140485eae FUN_140485eae body=982 status=ok
// SIG undefined FUN_140485eae(void)

undefined8 * FUN_140485eae(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_38,L"SpawnComponent",1);
  uVar1 = FUN_140486286();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 4,local_38,uVar1,0);
  FUN_14048636c(param_1,param_2);
  *param_1 = &PTR_FUN_14b16e030;
  param_1[0x72] = &PTR_FUN_14b16e670;
  param_1[0x73] = &PTR_FUN_14b16e690;
  param_1[0x78] = &PTR_FUN_14b16e6b0;
  param_1[0x79] = &PTR_FUN_14b16e720;
  param_1[0x7a] = &PTR_FUN_14b16e750;
  param_1[0x7b] = &PTR_FUN_14b16e780;
  param_1[0x7c] = &PTR_FUN_14b16e7f0;
  param_1[0x7d] = &PTR_FUN_14b16e808;
  param_1[0x7e] = &PTR_FUN_14b16e820;
  param_1[0x7f] = &PTR_FUN_14b16e840;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 2;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0x200000000;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x8b) = 2;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0xffffffff00000000;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 1;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 2;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x584) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x574) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5f4) = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x625) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 2;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x667) = 0;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  param_1[0xd4] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xa4] = &PTR_FUN_14b177f30;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 2;
  *(undefined8 *)((longlong)param_1 + 0x7a3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x794) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  *(undefined8 *)((longlong)param_1 + 0x77c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x764) = 0;
  *(undefined8 *)((longlong)param_1 + 0x76c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0;
  *(undefined8 *)((longlong)param_1 + 0x75c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x102) = 2;
  *(undefined4 *)((longlong)param_1 + 0x824) = 0;
  *(undefined8 *)((longlong)param_1 + 0x814) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81c) = 0;
  *(undefined4 *)(param_1 + 0x105) = 2;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  *(undefined8 *)((longlong)param_1 + 0x82c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x834) = 0;
  lVar3 = param_1[0x77];
  lVar2 = 0;
  if (lVar3 != 0) {
    lVar2 = FUN_140486286();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar3;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
    }
  }
  param_1[0x80] = lVar2;
  for (lVar3 = *param_2; (lVar3 != 0 && ((*(uint *)(lVar3 + 8) & 0x30) == 0));
      lVar3 = *(longlong *)(lVar3 + 0x20)) {
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140486286 FUN_140486286 body=228 status=ok
// SIG undefined FUN_140486286(void)

longlong FUN_140486286(void)

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
  if (DAT_14cb5eef8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641f248;
    local_38 = &LAB_1486b0f1d;
    local_40 = &LAB_1464e445c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x950;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameSpawnPointComponent",&DAT_14cb5eef8,&DAT_1486b0f1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5eef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048636c FUN_14048636c body=252 status=ok
// SIG undefined FUN_14048636c(void)

undefined8 * FUN_14048636c(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446f470e(&local_38,L"SpawnComponent",1);
  uVar1 = FUN_14048671e();
  FUN_140486538(param_2,local_38);
  FUN_14048646a(param_2 + 0x20,local_38,uVar1,0);
  FUN_1446f470e(&local_40,L"Preview",1);
  uVar1 = FUN_140486638();
  FUN_140486538(param_2,local_40);
  FUN_14048646a(param_2 + 0x20,local_40,uVar1,0);
  FUN_140486804(param_1,param_2);
  *param_1 = &PTR_FUN_14ab88aa0;
  param_1[0x72] = &PTR_FUN_14ab890e0;
  param_1[0x73] = &PTR_FUN_14ab89100;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048646a FUN_14048646a body=206 status=ok
// SIG undefined FUN_14048646a(void)

void FUN_14048646a(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x108);
  lVar4 = (longlong)iVar1;
  if (0 < lVar4) {
    lVar2 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar2 = param_1;
    }
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) == param_2) {
        if (param_3 == 0) {
          *(undefined1 *)(lVar2 + 0x18 + lVar3) = 1;
          return;
        }
        lVar4 = *(longlong *)(lVar2 + 8 + lVar3);
        if (((lVar4 != 0) && (*(int *)(param_3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(param_3 + 0x38) * 8) ==
            param_3 + 0x30)) {
          return;
        }
        *(longlong *)(lVar2 + 8 + lVar3) = param_3;
        return;
      }
      lVar3 = lVar3 + 0x20;
    } while (lVar4 << 5 != lVar3);
  }
  *(uint *)(param_1 + 0x108) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x10c) < iVar1 + 1U) {
    FUN_14690404a(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar2 = param_1;
  }
  lVar4 = lVar4 * 0x20;
  *(longlong *)(lVar2 + lVar4) = param_2;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0;
  *(longlong *)(lVar2 + 8 + lVar4) = param_3;
  *(bool *)(lVar2 + 0x18 + lVar4) = param_3 == 0;
  return;
}



// FUNCTION 140486538 FUN_140486538 body=255 status=ok
// SIG undefined FUN_140486538(void)

void FUN_140486538(longlong *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = param_2;
  if (*(char *)((longlong)param_1 + 0x12) == '\0') {
    FUN_14029eeae(&local_20,&local_30);
    local_48 = local_30;
    if (local_28 == 0) {
      local_48 = &DAT_149dfb77a;
    }
    if (*param_1 == 0) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x116c,
                    L"%s.%s: Subobject class setup is only allowed in base class constructor call (in the initialization list)"
                    ,L"NULL");
    }
    else {
      FUN_144750a86(*param_1,&local_40,0,0);
      puVar1 = local_40;
      if (local_38 == 0) {
        puVar1 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x116c,
                    L"%s.%s: Subobject class setup is only allowed in base class constructor call (in the initialization list)"
                    ,puVar1);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140486638 FUN_140486638 body=228 status=ok
// SIG undefined FUN_140486638(void)

longlong FUN_140486638(void)

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
  if (DAT_14cb1c138 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a7421c;
    local_38 = &LAB_147e34261;
    local_40 = &LAB_14581203b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavSpawnPointPreviewComponent",&DAT_14cb1c138,
                  &DAT_147e34260);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c138;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048671e FUN_14048671e body=228 status=ok
// SIG undefined FUN_14048671e(void)

longlong FUN_14048671e(void)

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
  if (DAT_14cb1c120 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146419168;
    local_38 = &LAB_147e34255;
    local_40 = &LAB_14641f240;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 0x10;
    local_68 = 0x840;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavSpawnPointComponent",&DAT_14cb1c120,&DAT_147e34254);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c120;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140486804 FUN_140486804 body=359 status=ok
// SIG undefined FUN_140486804(void)

undefined8 * FUN_140486804(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab63570;
  param_1[0x72] = &PTR_LAB_14ab63bb0;
  param_1[0x73] = &PTR_LAB_14ab63bd0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  FUN_1403121a6(param_1,0);
  uVar2 = DAT_14cb1b298;
  uVar3 = FUN_140486ede();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  bVar1 = DAT_14c950c29;
  if (lVar4 == 0 || DAT_14c950c29 != 1) {
    param_1[0x76] = lVar4;
    if (lVar4 != 0) goto LAB_1404868a6;
  }
  else {
    FUN_1456cec3c(lVar4);
    param_1[0x76] = lVar4;
    bVar1 = DAT_14c950c29;
LAB_1404868a6:
    *(undefined1 *)(lVar4 + 0x1fb) = 0;
    lVar4 = param_1[0x76];
    if ((bVar1 & 1) == 0) goto LAB_1404868bc;
    if (lVar4 != 0) {
      FUN_1456cec3c();
      lVar4 = param_1[0x76];
      goto LAB_1404868bc;
    }
  }
  lVar4 = 0;
LAB_1404868bc:
  param_1[0x39] = lVar4;
  uVar2 = DAT_14cb1b2a0;
  uVar3 = FUN_1407be990();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if ((lVar4 == 0) || (DAT_14c950c29 == 0)) {
    param_1[0x77] = lVar4;
    if (lVar4 == 0) {
      return param_1;
    }
  }
  else {
    FUN_1456cec3c(lVar4);
    param_1[0x77] = lVar4;
  }
  FUN_140486fc4(lVar4,param_1[0x39],0);
  return param_1;
}



// FUNCTION 14048696c FUN_14048696c body=319 status=ok
// SIG undefined FUN_14048696c(void)

void FUN_14048696c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  longlong *plVar3;
  bool bVar4;
  
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar4 = DAT_14c75ec34 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar4) {
      DVar2 = DAT_14c75ec34;
      DVar1 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar1;
    UNLOCK();
    if (bVar4) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if ((*(int *)((longlong)lpTlsValue + 0x18) == 0) ||
     (plVar3 = *(longlong **)
                (*(longlong *)((longlong)lpTlsValue + 0x10) +
                (longlong)(*(int *)((longlong)lpTlsValue + 0x18) + -1) * 8),
     plVar3 == (longlong *)0x0)) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Obj.cpp",0xa8,
                  L"No object initializer found during construction.");
    plVar3 = (longlong *)0x0;
  }
  if (*plVar3 != param_1) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Obj.cpp",0xa9,
                  L"Using incorrect object initializer.");
  }
  FUN_140486aac(plVar3,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 140486aac FUN_140486aac body=1073 status=ok
// SIG undefined FUN_140486aac(void)

longlong FUN_140486aac(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong *param_5,byte param_6,char param_7)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  char cVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_108 [40];
  longlong local_e0;
  longlong *local_d8;
  longlong local_d0;
  longlong local_c8;
  uint local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  longlong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dwTlsIndex = DAT_14c75ec34;
  local_e0 = param_3;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar11 = DAT_14c75ec34 != 0xffffffff;
    DVar3 = dwTlsIndex;
    if (bVar11) {
      DVar5 = DAT_14c75ec34;
      DVar3 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar3;
    UNLOCK();
    if (bVar11) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (*(int *)((longlong)lpTlsValue + 0x28) == 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x159c,
                  L"Subobjects cannot be created outside of UObject constructors. UObject constructing subobjects cannot be created using new or placement new operator."
                 );
    param_3 = local_e0;
  }
  if (param_3 == 0) {
    FUN_1400021e4(&local_e0,&local_d8);
    plVar10 = local_d8;
    if ((int)local_d0 == 0) {
      plVar10 = (longlong *)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x159f,
                  L"Illegal default subobject name: %s",plVar10);
    param_3 = local_e0;
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
      param_3 = local_e0;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x128) < 1) {
    uVar7 = 0;
  }
  else {
    lVar6 = param_1 + 0x20;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x120);
    }
    uVar7 = 0;
    lVar9 = 0;
    do {
      if (*(longlong *)(lVar6 + lVar9) == param_3) {
        if ((*(byte *)(lVar6 + 0x18 + lVar9) & (param_6 ^ 1)) != 0) goto LAB_140486d30;
        plVar10 = *(longlong **)(lVar6 + 8 + lVar9);
        if ((plVar10 != (longlong *)0x0) &&
           ((param_4 == 0 ||
            ((*(int *)(param_4 + 0x38) <= (int)plVar10[7] &&
             (*(longlong *)(plVar10[6] + (longlong)*(int *)(param_4 + 0x38) * 8) == param_4 + 0x30))
            )))) {
          param_5 = plVar10;
        }
        uVar7 = *(undefined8 *)(lVar6 + 0x10 + lVar9);
        break;
      }
      lVar9 = lVar9 + 0x20;
    } while ((longlong)*(int *)(param_1 + 0x128) * 0x20 != lVar9);
  }
  if ((param_5 == (longlong *)0x0) || ((*(byte *)((longlong)param_5 + 0xd4) & 1) != 0)) {
LAB_140486d30:
    lVar6 = 0;
    goto LAB_140486d33;
  }
  lVar9 = param_5[0x22];
  if (lVar9 == 0) {
    (**(code **)(*param_5 + 1000))(param_5);
    lVar9 = param_5[0x22];
  }
  local_c0 = *(uint *)(param_2 + 8) & 0x69 | 0x40000;
  cVar4 = '\x01';
  if ((*(longlong *)(param_1 + 8) != 0) &&
     (*(longlong *)(param_1 + 8) != *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x110))) {
    cVar4 = (char)((*(uint *)(param_2 + 8) & 0x10) >> 4);
  }
  local_88 = (longlong *)0x0;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_c8 = local_e0;
  local_d8 = param_5;
  local_d0 = param_2;
  local_58 = uVar7;
  if (((cVar4 == '\0' && param_7 == '\0') && (lVar6 = FUN_141717630(), lVar6 != 0)) &&
     (lVar9 != lVar6)) {
    if ((*(int *)(param_4 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(param_4 + 0x38) * 8
         ) == param_4 + 0x30)) {
      local_b0 = lVar6;
    }
  }
  lVar6 = FUN_1402710dd(&local_d8);
  lVar8 = local_b0;
  if (local_b0 == 0) {
    if (param_7 == '\0') {
      uVar7 = FUN_144938c96(param_2);
      cVar4 = FUN_1403d2392(uVar7);
      if (((cVar4 != '\0') && (lVar8 = FUN_144938c96(lVar6), lVar8 != 0)) && (lVar9 != lVar8)) {
        if ((*(int *)(param_4 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
             (longlong)*(int *)(param_4 + 0x38) * 8) == param_4 + 0x30)) goto LAB_140486ce8;
      }
    }
  }
  else {
LAB_140486ce8:
    iVar1 = *(int *)(param_1 + 0x1b8);
    *(uint *)(param_1 + 0x1b8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1bc) < iVar1 + 1U) {
      FUN_1469027f6(param_1 + 0x130,iVar1);
    }
    lVar9 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x1b0) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x1b0);
    }
    *(longlong *)(lVar9 + (longlong)iVar1 * 0x10) = lVar6;
    *(longlong *)(lVar9 + 8 + (longlong)iVar1 * 0x10) = lVar8;
  }
  FUN_14472eae2(lVar6,0x40000000);
  uVar2 = *(uint *)(lVar6 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar9 = 0;
  }
  do {
    uVar2 = *(uint *)(lVar9 + 8);
    if ((uVar2 >> 0x15 & 1) == 0) break;
    LOCK();
    bVar11 = uVar2 == *(uint *)(lVar9 + 8);
    if (bVar11) {
      *(uint *)(lVar9 + 8) = uVar2 & 0xffdfffff;
    }
    UNLOCK();
  } while (!bVar11);
  if (lStack_98 != 0) {
    plVar10 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar10 = local_78;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
LAB_140486d33:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 140486ede FUN_140486ede body=228 status=ok
// SIG undefined FUN_140486ede(void)

longlong FUN_140486ede(void)

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
  if (DAT_14cb1ab50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_147e1d755;
    local_40 = FUN_1417fec71;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2b0;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnRootComponent",&DAT_14cb1ab50,&DAT_147e1d754);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ab50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140486fc4 FUN_140486fc4 body=780 status=ok
// SIG undefined FUN_140486fc4(void)

void FUN_140486fc4(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if ((((lVar2 != param_2) || (*(longlong *)(param_1 + 0x128) != param_3)) && (param_2 != param_1))
     && ((*(byte *)(param_1 + 0x9c) & 1) == 0)) {
    if ((param_1 != 0) && (lVar6 = param_2, param_2 != 0)) {
      do {
        lVar6 = *(longlong *)(lVar6 + 0x120);
      } while (lVar6 != 0 && lVar6 != param_1);
      if (lVar6 != 0) {
        return;
      }
    }
    if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x140) != 0)) {
      lVar6 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar2 + 0x138) + lVar6) == param_1) {
          return;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(lVar2 + 0x140) * 8 != lVar6);
    }
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    *(longlong *)(param_1 + 0x120) = param_2;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,2);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar4 = *(uint **)(lVar2 + 0x18);
          if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
            puVar4 = (uint *)(lVar2 + 8);
          }
          *puVar4 = *puVar4 | 4;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
    *(longlong *)(param_1 + 0x128) = param_3;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,3);
    }
    else {
      uVar7 = (uint)uVar1;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
        puVar3 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar3 = DAT_14c998080;
        }
        if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
          lVar2 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
          puVar4 = *(uint **)(lVar2 + 0x18);
          if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
            puVar4 = (uint *)(lVar2 + 8);
          }
          *puVar4 = *puVar4 | 8;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
    *(byte *)(param_1 + 0x1f8) =
         *(byte *)(param_1 + 0x1f8) & 0xbf | (*(longlong *)(param_1 + 0x120) != 0) << 6;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001404872cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0xc);
      return;
    }
    uVar7 = (uint)uVar1;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar7 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar7 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x1000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 140487304 FUN_140487304 body=3249 status=ok
// SIG undefined FUN_140487304(void)

void FUN_140487304(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint uVar24;
  undefined8 *puVar25;
  int iVar26;
  undefined8 *puVar27;
  uint *puVar28;
  ulonglong uVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auStack_4e8 [32];
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 local_4b8;
  undefined8 local_4b0;
  wchar_t *local_4a8;
  undefined1 *local_4a0;
  undefined1 *local_498;
  undefined8 *local_490;
  undefined1 *local_488;
  undefined1 *local_480;
  longlong *local_478;
  uint *local_470;
  longlong local_468;
  longlong *local_460;
  longlong *local_458;
  longlong *local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined1 local_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  double local_3f0;
  double local_3e8;
  undefined1 local_3e0;
  undefined8 *local_3d8;
  ulonglong uStack_3d0;
  double local_3c8;
  double local_3c0;
  undefined1 local_3b8;
  undefined8 *local_3b0;
  ulonglong uStack_3a8;
  longlong local_3a0;
  longlong *local_398;
  int local_390;
  int local_38c;
  undefined8 local_388;
  longlong *plStack_380;
  undefined8 local_378;
  undefined8 local_368 [16];
  undefined8 local_2e8 [16];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_240;
  undefined1 local_1b8;
  undefined1 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  if (((*(int *)(param_1 + 0x310) == 0) || (*(longlong **)(param_1 + 0x308) == (longlong *)0x0)) ||
     (cVar11 = (**(code **)(**(longlong **)(param_1 + 0x308) + 0x30))(), cVar11 == '\0')) {
    lVar13 = *(longlong *)(param_1 + 0x2f8);
  }
  else {
    if (*(int *)(param_1 + 0x310) == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x308);
    }
    lVar13 = (**(code **)(*plVar15 + 0x58))();
    *(longlong *)(param_1 + 0x2f8) = lVar13;
  }
  if ((lVar13 != 0) &&
     (lVar13 = (**(code **)(**(longlong **)(lVar13 + 0x38) + 0x30))(), lVar13 != 0)) {
    bVar7 = *(byte *)(lVar13 + 0x152);
    if ((bVar7 == 1) || ((bVar7 < 7 && ((0x68U >> (bVar7 & 0x1f) & 1) != 0)))) {
      lVar14 = FUN_1449baec6(lVar13);
      if (lVar14 != 0) {
        plVar15 = (longlong *)FUN_140161992(DAT_14cb0d2b0,lVar13);
        local_460 = (longlong *)(param_1 + 0x2a8);
        puVar28 = (uint *)(param_1 + 0x2b8);
        iVar12 = *(int *)(param_1 + 0x2d0);
        local_478 = plVar15;
        local_468 = lVar14;
        if (iVar12 == 0) {
          uVar29 = 1;
          uVar23 = 0;
          iVar26 = 0;
          iVar30 = 0;
        }
        else {
          puVar19 = *(uint **)(param_1 + 0x2c8);
          if (*(uint **)(param_1 + 0x2c8) == (uint *)0x0) {
            puVar19 = puVar28;
          }
          uVar24 = *puVar19;
          if (uVar24 == 0) {
            iVar26 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar26 = iVar12 + -1;
            }
            uVar23 = 0;
            uVar29 = (ulonglong)(uint)(iVar26 >> 5);
            if (iVar26 >> 5 < 1) {
              uVar29 = uVar23;
            }
            iVar30 = 0;
            do {
              if (uVar29 == uVar23) goto LAB_1404878f0;
              iVar30 = iVar30 + 0x20;
              uVar24 = puVar19[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar24 == 0);
          }
          else {
            uVar23 = 0;
            iVar30 = 0;
          }
          uVar29 = (ulonglong)(-uVar24 & uVar24);
          uVar4 = uVar29 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar26 = (iVar30 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar26) {
            iVar26 = iVar12;
          }
        }
        if (iVar26 < iVar12) {
          uVar24 = 0xffffffff;
          do {
            lVar13 = (longlong)iVar26 * 0x20;
            iVar12 = *(int *)(*local_460 + 4 + lVar13);
            if (((((iVar12 != 0) && (uVar16 = *(uint *)(*local_460 + lVar13), -1 < (int)uVar16)) &&
                 ((int)uVar16 < DAT_14c9647dc)) &&
                ((plVar21 = (longlong *)
                            ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
                 plVar21 != (longlong *)0x0 && ((int)plVar21[2] == iVar12)))) &&
               (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar14 = *plVar21, lVar14 != 0)))) {
              if (DAT_14cae9568 == 0) {
                local_388 = FUN_1417de738;
                local_480 = &LAB_145893408;
                local_488 = &LAB_1458cbbd2;
                local_490 = &local_388;
                local_498 = &LAB_147ba21f1;
                local_4a0 = &LAB_1463e9233;
                local_4a8 = L"Engine";
                local_4b0 = 0;
                local_4b8 = 0x1000000c;
                local_4c0 = 8;
                local_4c8 = 0x2b8;
                local_470 = puVar28;
                FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
                plVar15 = local_478;
                puVar28 = local_470;
              }
              if (((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38))
                  && (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) &&
                 ((longlong)(int)plVar15[1] != 0)) {
                lVar20 = 0;
                do {
                  if (*(longlong *)(*plVar15 + lVar20) == lVar14) goto LAB_140487567;
                  lVar20 = lVar20 + 8;
                } while ((longlong)(int)plVar15[1] * 8 != lVar20);
              }
            }
            lVar14 = *(longlong *)(*local_460 + 8 + lVar13);
            plVar21 = *(longlong **)(*local_460 + 0x10 + lVar13);
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
              UNLOCK();
            }
            uVar8 = *(undefined8 *)(param_1 + 0x328);
            local_388 = *(code **)(lVar14 + 0x10);
            plVar15 = *(longlong **)(lVar14 + 0x18);
            local_470 = puVar28;
            if (plVar15 == (longlong *)0x0) {
              plStack_380 = (longlong *)0x0;
              FUN_145716ac6(uVar8);
            }
            else {
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              LOCK();
              *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
              UNLOCK();
              local_450 = plVar15;
              plStack_380 = plVar15;
              FUN_145716ac6(uVar8,&local_388);
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar15 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  local_458 = plVar15;
                  (**(code **)*plVar15)(plVar15);
                  LOCK();
                  piVar2 = (int *)((longlong)local_458 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_458 + 0x10))();
                  }
                }
              }
              LOCK();
              plVar15 = local_450 + 1;
              *(int *)plVar15 = (int)*plVar15 + -1;
              UNLOCK();
              if ((int)*plVar15 == 0) {
                (**(code **)*local_450)();
                LOCK();
                piVar2 = (int *)((longlong)local_450 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_450 + 0x10))();
                }
              }
            }
            FUN_145716b16(local_460,iVar26);
            plVar15 = local_478;
            puVar28 = local_470;
            if (plVar21 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar21 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar2 = (int *)((longlong)plVar21 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                plVar15 = local_478;
                puVar28 = local_470;
                if (*piVar2 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                  plVar15 = local_478;
                  puVar28 = local_470;
                }
              }
            }
LAB_140487567:
            uVar24 = uVar24 & ~(uint)uVar29;
            puVar19 = *(uint **)(param_1 + 0x2c8);
            if (*(uint **)(param_1 + 0x2c8) == (uint *)0x0) {
              puVar19 = puVar28;
            }
            iVar12 = *(int *)(param_1 + 0x2d0);
            iVar26 = (int)uVar23;
            lVar13 = (longlong)iVar26;
            uVar16 = puVar19[lVar13] & uVar24;
            if (uVar16 == 0) {
              iVar17 = iVar12 + 0x1e;
              if (-1 < iVar12 + -1) {
                iVar17 = iVar12 + -1;
              }
              iVar17 = iVar17 >> 5;
              iVar18 = iVar17;
              if (iVar17 < iVar26) {
                iVar18 = iVar26;
              }
              if (iVar17 <= iVar26) break;
              lVar14 = 0;
              while( true ) {
                iVar30 = iVar30 + 0x20;
                uVar16 = puVar19[lVar14 + lVar13 + 1];
                if (uVar16 != 0) break;
                lVar14 = lVar14 + 1;
                if (iVar18 - lVar13 == lVar14) goto LAB_1404878f0;
              }
              uVar23 = (ulonglong)(iVar26 + (int)lVar14 + 1);
              uVar24 = 0xffffffff;
            }
            uVar29 = (ulonglong)(-uVar16 & uVar16);
            uVar4 = uVar29 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar26 = (iVar30 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          } while (iVar26 < iVar12);
        }
LAB_1404878f0:
        lVar13 = local_468;
        if ((int)plVar15[1] != 0) {
          bVar7 = *(byte *)(local_468 + 0x70);
          if (*(longlong *)(local_468 + 0xf8) == 0) {
            fVar31 = 1.0;
          }
          else {
            fVar31 = (float)FUN_1401e2a2e(param_1);
            fVar31 = 1.0 / fVar31;
          }
          if ((*(float *)(param_1 + 0x3f4) != fVar31) ||
             (NAN(*(float *)(param_1 + 0x3f4)) || NAN(fVar31))) {
            FUN_140163244(param_1,0x80);
            *(float *)(param_1 + 0x3f4) = fVar31;
          }
          if (0 < (int)local_478[1]) {
            lVar14 = 0;
            local_470 = (uint *)CONCAT44(local_470._4_4_,(uint)bVar7);
            uVar24 = (uint)bVar7;
            do {
              plVar15 = *(longlong **)(*local_478 + lVar14 * 8);
              if (((int)uVar24 < *(int *)(lVar13 + 0x60)) &&
                 (lVar14 < *(int *)(*(longlong *)(lVar13 + 0x58) + 8 + (ulonglong)bVar7 * 0x10))) {
                FUN_140488232(param_1,&local_3a0,plVar15);
                lVar20 = *(longlong *)(*(longlong *)(lVar13 + 0x58) + (ulonglong)bVar7 * 0x10);
                fVar34 = *(float *)(lVar20 + lVar14 * 0x10);
                fVar35 = *(float *)(lVar20 + 4 + lVar14 * 0x10);
                fVar32 = 0.0;
                if (plVar15 == (longlong *)0x0) {
LAB_140487b10:
                  fVar33 = 0.0;
                }
                else {
                  local_378 = DAT_14c8464f0;
                  local_388 = (code *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                  plStack_380 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                  puVar25 = &DAT_14c846400;
                  puVar27 = local_368;
                  for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
                    *puVar27 = *puVar25;
                    puVar25 = puVar25 + 1;
                    puVar27 = puVar27 + 1;
                  }
                  puVar25 = &DAT_14c846400;
                  puVar27 = local_2e8;
                  for (lVar20 = 0x10; lVar20 != 0; lVar20 = lVar20 + -1) {
                    *puVar27 = *puVar25;
                    puVar25 = puVar25 + 1;
                    puVar27 = puVar27 + 1;
                  }
                  local_240 = 0;
                  local_1b8 = 0;
                  local_128 = 0;
                  local_268 = 0;
                  uStack_260 = 0;
                  local_118 = (undefined4)DAT_14c8464e0;
                  uStack_114 = DAT_14c8464e0._4_4_;
                  uStack_110 = (undefined4)DAT_14c8464e8;
                  uStack_10c = DAT_14c8464e8._4_4_;
                  local_108 = DAT_14c8464f0;
                  local_100 = 0;
                  uStack_f8 = 0;
                  cVar11 = (**(code **)(*plVar15 + 0x358))
                                     (plVar15,*(undefined8 *)(plVar15[0xf] + 0xf8),&local_388,
                                      0xffffffff);
                  uVar10 = uStack_f8;
                  uVar8 = local_100;
                  if (cVar11 == '\0') goto LAB_140487b10;
                  (**(code **)(**(longlong **)(plVar15[0xf] + 0xf8) + 0x28))
                            (*(longlong **)(plVar15[0xf] + 0xf8),&local_390);
                  iVar26 = (int)uVar8;
                  fVar32 = (float)iVar26 / (float)local_390;
                  iVar12 = (int)((ulonglong)uVar8 >> 0x20);
                  fVar33 = (float)iVar12 / (float)local_38c;
                  fVar34 = (float)((int)uVar10 - iVar26) / (float)local_390;
                  fVar35 = (float)((int)((ulonglong)uVar10 >> 0x20) - iVar12) / (float)local_38c;
                }
                fVar5 = *(float *)(param_1 + 0x270);
                fVar6 = *(float *)(param_1 + 0x274);
                fVar35 = fVar35 * fVar6 * fVar31;
                dVar9 = (double)fVar35;
                if (*(char *)(param_1 + 0x3c8) == '\x01') {
                  FUN_144b013c4(*(undefined8 *)(param_1 + 0x388),&local_388);
                  if (local_388._4_4_ < fVar35) {
                    FUN_144b013c4(*(undefined8 *)(param_1 + 0x388),&local_388);
                    dVar9 = dVar9 - (double)local_388._4_4_;
                  }
                }
                lVar20 = local_3a0;
                local_3c8 = (double)(fVar34 * fVar5 * fVar31);
                local_3b8 = 1;
                local_3b0 = (undefined8 *)0x0;
                uStack_3a8 = 0;
                local_3c0 = dVar9;
                FUN_140488020(*(longlong *)(local_3a0 + 0x20) + 0x40,
                              *(longlong *)(local_3a0 + 0x20) + 0x20,&local_3c8);
                if ((int)uStack_3a8 == 0) {
LAB_140487ba5:
                  if (local_3b0 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                else if (local_3b0 != (undefined8 *)0x0) {
                  (**(code **)*local_3b0)(local_3b0,0);
                  FUN_1446efa72(&local_3b0,0,0,0x10);
                  uStack_3a8 = uStack_3a8 & 0xffffffff00000000;
                  goto LAB_140487ba5;
                }
                local_3e8 = (double)(fVar33 * fVar6 * fVar31);
                local_3f0 = (double)(fVar32 * fVar5 * fVar31);
                local_3e0 = 1;
                local_3d8 = (undefined8 *)0x0;
                uStack_3d0 = 0;
                FUN_140488020(*(longlong *)(lVar20 + 0x20) + 0x30,
                              *(longlong *)(lVar20 + 0x20) + 0x20,&local_3f0);
                if ((int)uStack_3d0 == 0) {
LAB_140487c26:
                  plVar15 = local_398;
                  if (local_3d8 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                    plVar15 = local_398;
                  }
                }
                else {
                  plVar15 = local_398;
                  if (local_3d8 != (undefined8 *)0x0) {
                    (**(code **)*local_3d8)(local_3d8,0);
                    FUN_1446efa72(&local_3d8,0,0,0x10);
                    uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
                    goto LAB_140487c26;
                  }
                }
joined_r0x000140487f9d:
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar21 = plVar15 + 1;
                  *(int *)plVar21 = (int)*plVar21 + -1;
                  UNLOCK();
                  if ((int)*plVar21 == 0) {
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
              }
              else {
                if (plVar15 == (longlong *)0x0) {
                  iVar12 = 0;
                  iVar26 = 0;
                }
                else {
                  local_388 = (code *)0x0;
                  FUN_14485c47a(&local_388,plVar15);
                  iVar12 = (int)local_388;
                  iVar26 = (int)local_388._4_4_;
                }
                uVar24 = FUN_144a78877(iVar12,iVar26);
                lVar13 = local_468;
                if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
                  lVar20 = param_1 + 0x2e0;
                  if (*(longlong *)(param_1 + 0x2e8) != 0) {
                    lVar20 = *(longlong *)(param_1 + 0x2e8);
                  }
                  iVar30 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x2f0) - 1U & uVar24) *
                                             4);
                  if (iVar30 != -1) {
                    lVar20 = *local_460;
                    do {
                      lVar22 = (longlong)iVar30 * 0x20;
                      lVar3 = lVar20 + lVar22;
                      if ((*(int *)(lVar20 + lVar22) == iVar12) &&
                         (*(int *)(lVar20 + 4 + lVar22) == iVar26)) {
                        if (lVar3 != 0) {
                          lVar20 = *(longlong *)(lVar3 + 8);
                          plVar15 = *(longlong **)(lVar3 + 0x10);
                          if (plVar15 != (longlong *)0x0) {
                            LOCK();
                            *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
                            UNLOCK();
                          }
                          if (lVar20 != 0) {
                            local_418 = 0;
                            uStack_410 = 0;
                            local_408 = 1;
                            local_400 = 0;
                            uStack_3f8 = 0;
                            FUN_140488020(*(longlong *)(lVar20 + 0x20) + 0x40,
                                          *(longlong *)(lVar20 + 0x20) + 0x20,&local_418);
                            FUN_1449db362(&local_400);
                            local_448 = 0;
                            uStack_440 = 0;
                            local_438 = 1;
                            local_430 = 0;
                            uStack_428 = 0;
                            FUN_140488020(*(longlong *)(lVar20 + 0x20) + 0x30,
                                          *(longlong *)(lVar20 + 0x20) + 0x20,&local_448);
                            FUN_1449db362(&local_430);
                            lVar13 = local_468;
                          }
                          goto joined_r0x000140487f9d;
                        }
                        break;
                      }
                      iVar30 = *(int *)(lVar3 + 0x18);
                    } while (iVar30 != -1);
                  }
                }
              }
              lVar14 = lVar14 + 1;
              uVar24 = (uint)local_470;
            } while (lVar14 < (int)local_478[1]);
          }
        }
      }
    }
    else if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
      FUN_147d3002e(param_1 + 0x2a8);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_4e8);
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140488020 FUN_140488020 body=374 status=ok
// SIG undefined FUN_140488020(void)

undefined4 FUN_140488020(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140488055:
    if (*(char *)(param_3 + 2) != '\x01') {
      uVar3 = (**(code **)*param_2)(param_2);
      FUN_1400b73c8(uVar3,param_1);
      uVar2 = 0;
      goto LAB_1404880af;
    }
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_14048807c:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_14048807c;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_140488198(param_1,param_2,&local_38);
  }
  else {
    cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
    if (cVar1 == '\0') goto LAB_140488055;
    *(undefined1 *)(param_3 + 2) = 0;
    if ((longlong *)param_3[3] == (longlong *)0x0 || *(int *)(param_3 + 4) == 0) {
LAB_140488172:
      local_38 = *param_3;
      uStack_30 = *(undefined4 *)(param_3 + 1);
      uStack_2c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_28 = 0;
    }
    else {
      cVar1 = (**(code **)(*(longlong *)param_3[3] + 0x30))();
      if (cVar1 == '\0') goto LAB_140488172;
      local_38 = param_3[3];
      param_3[3] = 0;
      uStack_30 = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_3 + 4) = 0;
      local_28 = 1;
    }
    uVar2 = FUN_146af826e(param_1,param_2,&local_38);
  }
  (*(code *)(&PTR_LAB_149ef1c00)[local_28])(&local_38);
LAB_1404880af:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140488198 FUN_140488198 body=136 status=ok
// SIG undefined FUN_140488198(void)

ulonglong FUN_140488198(double *param_1,undefined8 *param_2,double *param_3)

{
  ulonglong uVar1;
  double dVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)*param_2)(param_2);
  FUN_1400b73c8(uVar3,param_1);
  (**(code **)*param_2)(param_2);
  uVar1 = -(ulonglong)(param_3[1] != param_1[1] || *param_1 != *param_3);
  if ((uVar1 & 1) != 0) {
    dVar2 = param_3[1];
    *param_1 = *param_3;
    param_1[1] = dVar2;
    (**(code **)*param_2)(param_2);
    FUN_145716b70(param_1,param_2,2,0);
  }
  return uVar1 & 0xffffff01;
}



// FUNCTION 140488232 FUN_140488232 body=1789 status=ok
// SIG undefined FUN_140488232(void)

undefined8 * FUN_140488232(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_278 [40];
  longlong *local_250;
  undefined8 **local_248;
  longlong *local_240;
  longlong local_230;
  longlong *local_228;
  int local_220;
  undefined4 uStack_21c;
  longlong *local_218;
  undefined8 *local_210;
  longlong *local_208;
  longlong local_200;
  undefined8 **local_1f8;
  undefined8 **local_1f0;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined4 local_1d8;
  undefined1 local_1d4;
  undefined1 local_156;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_200 = param_3;
  if (param_3 == 0) {
    uVar14 = 0;
    uVar5 = 0;
  }
  else {
    uVar14 = *(uint *)(param_3 + 0xc);
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar5 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar5 = *(uint *)(lVar15 + 0x10);
      bVar18 = uVar5 == 0;
      if (bVar18) {
        *(uint *)(lVar15 + 0x10) = uVar8;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar18) {
        uVar5 = uVar8;
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x2a8);
  if (*(int *)(param_1 + 0x2b0) != *(int *)(param_1 + 0x2dc)) {
    uVar8 = uVar5 >> 0xd ^ uVar14 - uVar5;
    uVar9 = uVar8 << 8 ^ (-0x61c88647 - uVar5) - uVar8;
    uVar12 = uVar9 >> 0xd ^ (uVar5 - uVar8) - uVar9;
    uVar13 = uVar12 >> 0xc ^ (uVar8 - uVar9) - uVar12;
    uVar8 = uVar13 << 0x10 ^ (uVar9 - uVar12) - uVar13;
    uVar9 = uVar8 >> 5 ^ (uVar12 - uVar13) - uVar8;
    uVar12 = uVar9 >> 3 ^ (uVar13 - uVar8) - uVar9;
    uVar8 = uVar12 << 10 ^ (uVar8 - uVar9) - uVar12;
    lVar15 = param_1 + 0x2e0;
    if (*(longlong *)(param_1 + 0x2e8) != 0) {
      lVar15 = *(longlong *)(param_1 + 0x2e8);
    }
    iVar10 = *(int *)(lVar15 + (ulonglong)
                               (*(int *)(param_1 + 0x2f0) - 1U &
                               (uVar8 >> 0xf ^ uVar9 - (uVar12 + uVar8))) * 4);
    if (iVar10 != -1) {
      lVar15 = *plVar2;
      do {
        lVar11 = (longlong)iVar10 * 0x20;
        lVar3 = lVar15 + lVar11;
        if ((*(uint *)(lVar15 + lVar11) == uVar14) && (*(uint *)(lVar15 + 4 + lVar11) == uVar5)) {
          if (lVar3 != 0) {
            puVar16 = (undefined8 *)(lVar3 + 8);
            goto LAB_1404883a3;
          }
          break;
        }
        iVar10 = *(int *)(lVar3 + 0x18);
      } while (iVar10 != -1);
    }
  }
  lVar15 = FUN_14001cc68(0xf8,0x10);
  FUN_145717132(lVar15);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14aa99480;
  plVar6[2] = lVar15;
  FUN_145716b82(lVar15,2);
  FUN_145716b82(lVar15,3);
  FUN_145716b82(lVar15,0);
  FUN_145716b82(lVar15,1);
  FUN_145716b82(lVar15,5);
  FUN_145716b82(lVar15,4);
  puVar16 = (undefined8 *)FUN_14001cc68(0x78,0x10);
  puVar16[9] = 0;
  *(undefined4 *)(puVar16 + 10) = 0;
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  puVar16[3] = 0;
  puVar16[4] = 0;
  puVar16[5] = 0;
  puVar16[6] = 0;
  *(undefined8 *)((longlong)puVar16 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar16 + 0x5c) = 0;
  puVar16[0xd] = 0;
  *(undefined4 *)(puVar16 + 0xe) = 0;
  local_210 = puVar16;
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14aa994a0;
  plVar7[2] = (longlong)puVar16;
  local_208 = plVar7;
  if (puVar16 != (undefined8 *)0x0) {
    if (plVar7 == (longlong *)0x0) {
      *puVar16 = puVar16;
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *puVar16 = puVar16;
      if ((longlong *)puVar16[1] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar17 = (longlong *)puVar16[1];
        if (plVar17 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar17 + 0x10))();
          }
        }
        puVar16[1] = plVar7;
      }
      LOCK();
      plVar17 = plVar7 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
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
  FUN_145716c86(&local_1f8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_230 = lVar15;
  local_228 = plVar6;
  FUN_1457170a4(&local_1f8,&local_230);
  local_156 = 3;
  local_250 = &local_200;
  FUN_145717ac6(&local_248);
  FUN_145716cf8(&local_248,&local_220,&local_1f8);
  plVar7 = local_218;
  if (local_218 == (longlong *)0x0) {
    local_210[2] = CONCAT44(uStack_21c,local_220);
    plVar17 = (longlong *)local_210[3];
    if (plVar17 == (longlong *)0x0) goto LAB_140488609;
    local_210[3] = 0;
LAB_140488819:
    LOCK();
    plVar7 = plVar17 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 != 0) goto LAB_140488609;
    (**(code **)*plVar17)(plVar17);
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar10 = *piVar1;
    UNLOCK();
    plVar7 = plVar17;
  }
  else {
    LOCK();
    *(int *)(local_218 + 1) = (int)local_218[1] + 1;
    UNLOCK();
    local_210[2] = CONCAT44(uStack_21c,local_220);
    plVar17 = (longlong *)local_210[3];
    if (local_218 != plVar17) {
      local_210[3] = local_218;
      if (plVar17 == (longlong *)0x0) goto LAB_140488609;
      goto LAB_140488819;
    }
    LOCK();
    plVar17 = local_218 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 != 0) goto LAB_140488609;
    (**(code **)*local_218)(local_218);
    LOCK();
    piVar1 = (int *)((longlong)plVar7 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar10 = *piVar1;
    UNLOCK();
  }
  if (iVar10 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
LAB_140488609:
  if (local_218 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_218 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_218)(local_218);
      LOCK();
      piVar1 = (int *)((longlong)local_218 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_218 + 0x10))(local_218);
      }
    }
  }
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_240 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)local_240 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_240 + 0x10))(local_240);
      }
    }
  }
  FUN_140a4ff8c(&local_1f8);
  FUN_145717202(*(undefined8 *)(param_1 + 0x328),&local_1f8);
  local_1e0 = 0;
  local_1dc = 1;
  local_1d8 = 0;
  local_1d4 = 1;
  local_210[4] = local_1f8;
  local_248 = (undefined8 **)local_210[2];
  plVar7 = (longlong *)local_210[3];
  if (plVar7 == (longlong *)0x0) {
    local_240 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    local_240 = plVar7;
  }
  FUN_14571701c(&local_1f8,&local_248);
  plVar17 = local_240;
  if (local_240 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_240 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_240)(local_240);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar7 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
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
  FUN_1457172e6(&local_1f8);
  local_248 = (undefined8 **)0x0;
  if (local_200 != 0) {
    local_1f8 = (undefined8 **)0x0;
    FUN_14485c47a(&local_1f8);
    local_248 = local_1f8;
  }
  local_1f0 = &local_210;
  local_1f8 = &local_248;
  FUN_14571764a(plVar2,&local_220);
  plVar7 = local_208;
  lVar15 = *plVar2;
  if (local_208 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_208 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_208)(local_208);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  puVar16 = (undefined8 *)(lVar15 + (longlong)local_220 * 0x20 + 8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_1404883a3:
  *param_2 = *puVar16;
  lVar15 = puVar16[1];
  param_2[1] = lVar15;
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140488930 FUN_140488930 body=333 status=ok
// SIG undefined FUN_140488930(void)

undefined8
FUN_140488930(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140488a76;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140488a76;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140488a76:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140488a1f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_50 = param_6;
      local_58 = param_5;
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140488a1f;
    }
  }
  uVar6 = 0;
LAB_140488a1f:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140488a7e FUN_140488a7e body=1048 status=ok
// SIG undefined FUN_140488a7e(void)

void FUN_140488a7e(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,char param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    if (DAT_14cb10130 == 0) {
      local_70 = &local_50;
      local_50 = FUN_140754f84;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_147da9a76;
      local_80 = FUN_1409f3105;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_140488aec;
  }
  lVar4 = 0;
LAB_140488aec:
  if (lVar4 == param_2) {
    FUN_140488f06(param_1,param_3);
    if (param_3 != 0 && param_6 == '\0') {
      lVar4 = FUN_14048957e();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
        plVar8 = (longlong *)(param_1 + 0x250);
        uVar1 = *(undefined8 *)(param_3 + 0x1d8);
        uVar2 = *(undefined8 *)(param_3 + 0x1e0);
        uVar6 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar11 = (uint)uVar2 & 0xffff;
        uVar5 = (uint)((ulonglong)uVar1 >> 0x10);
        uVar10 = (uint)uVar1 & 0xffff;
        uVar5 = ((uint)uVar1 << 0x10 | uVar10) + (int)((ulonglong)uVar1 >> 0x20) +
                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4);
        uVar5 = (uVar5 >> 2) + 0x9e3779b9 +
                ((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4) + uVar5 * 0x40 ^ uVar5;
        uVar10 = uVar5 >> 0xd ^ -uVar5;
        uVar6 = uVar10 << 8 ^ (-0x61c88647 - uVar5) - uVar10;
        uVar5 = uVar6 >> 0xd ^ (uVar5 - uVar10) - uVar6;
        uVar10 = uVar5 >> 0xc ^ (uVar10 - uVar6) - uVar5;
        uVar6 = uVar10 << 0x10 ^ (uVar6 - uVar5) - uVar10;
        uVar12 = uVar6 >> 5 ^ (uVar5 - uVar10) - uVar6;
        uVar11 = uVar12 >> 3 ^ (uVar10 - uVar6) - uVar12;
        uVar5 = uVar11 << 10 ^ (uVar6 - uVar12) - uVar11;
        iVar3 = *(int *)(param_3 + 0x1f0);
        uVar10 = 0;
        uVar6 = iVar3 - 1;
        if (iVar3 == 0) {
          uVar6 = uVar10;
        }
        if (0 < (int)uVar6) {
          if (iVar3 == 0) {
            puVar9 = &DAT_149dfb77a;
          }
          else {
            puVar9 = *(undefined2 **)(param_3 + 0x1e8);
          }
          lVar4 = 0;
          uVar10 = 0;
          do {
            uVar7 = ((uint)(ushort)puVar9[lVar4] +
                    (uint)(0x19 < (ushort)puVar9[lVar4] - 0x61) * 0x20) - 0x20;
            uVar10 = uVar10 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar10 ^ uVar7) & 0xff) * 4);
            uVar10 = uVar10 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar10 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
            lVar4 = lVar4 + 1;
          } while (uVar6 != (uint)lVar4);
        }
        uVar11 = uVar10 >> 0xd ^ (uVar5 >> 0xf ^ uVar12 - (uVar11 + uVar5)) - uVar10;
        uVar5 = uVar11 << 8 ^ (-0x61c88647 - uVar10) - uVar11;
        uVar6 = uVar5 >> 0xd ^ (uVar10 - uVar11) - uVar5;
        uVar10 = uVar6 >> 0xc ^ (uVar11 - uVar5) - uVar6;
        uVar11 = uVar10 << 0x10 ^ (uVar5 - uVar6) - uVar10;
        uVar5 = uVar11 >> 5 ^ (uVar6 - uVar10) - uVar11;
        uVar6 = uVar5 >> 3 ^ (uVar10 - uVar11) - uVar5;
        uVar10 = uVar6 << 10 ^ (uVar11 - uVar5) - uVar6;
        iVar3 = FUN_140488e98(plVar8,uVar10 >> 0xf ^ uVar5 - (uVar6 + uVar10),param_3 + 0x1d8);
        if (iVar3 != -1) {
          lVar4 = (longlong)iVar3 * 0x78 + *plVar8;
          if (lVar4 + 0x20 != 0 && lVar4 != 0) {
            local_58 = 0;
            FUN_14485c47a(&local_58,param_3);
            iVar3 = FUN_147dd14c6(lVar4 + 0x20,local_58);
            if ((iVar3 != 0) && (*(int *)(lVar4 + 0x28) == *(int *)(lVar4 + 0x54))) {
              FUN_147dd8d88(plVar8,param_3 + 0x1d8);
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140488e98 FUN_140488e98 body=110 status=ok
// SIG undefined FUN_140488e98(void)

int FUN_140488e98(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a7afa6(lVar4 + (longlong)iVar1 * 0x78,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x70 + (longlong)iVar1 * 0x78);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140488f06 FUN_140488f06 body=1567 status=ok
// SIG undefined FUN_140488f06(void)

void FUN_140488f06(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) {
    uVar13 = 0;
    uVar6 = 0;
  }
  else {
    lVar7 = FUN_14048957e();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
         lVar7 + 0x30)) &&
       ((*(byte *)(param_2 + 0x21) == 3 ||
        ((*(byte *)(param_2 + 0x21) < 2 &&
         (cVar4 = (**(code **)(*param_2 + 0x2d8))(param_2), cVar4 != '\0')))))) {
      uVar6 = *(uint *)((longlong)param_2 + 0xc);
      if ((int)uVar6 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar13 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar17 = DAT_14c964868 + 1;
        UNLOCK();
        uVar16 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar17;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar16);
        }
        LOCK();
        uVar13 = *(uint *)(lVar7 + 0x10);
        bVar19 = uVar13 == 0;
        if (bVar19) {
          *(uint *)(lVar7 + 0x10) = uVar16;
          uVar13 = 0;
        }
        UNLOCK();
        if (bVar19) {
          uVar13 = uVar16;
        }
      }
      plVar1 = (longlong *)(param_1 + 0x2a0);
      if (*(int *)(param_1 + 0x2d4) == 0) {
        uVar16 = *(uint *)(param_1 + 0x2a8);
        *(uint *)(param_1 + 0x2a8) = uVar16 + 1;
        if (*(uint *)(param_1 + 0x2ac) == uVar16) {
          FUN_144869a3c(plVar1,uVar16);
        }
        iVar17 = *(int *)(param_1 + 0x2c8);
        if (iVar17 == 0) {
          iVar12 = -1;
        }
        else {
          iVar12 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar12 = iVar17 + -1;
          }
          iVar12 = iVar12 >> 5;
        }
        lVar7 = param_1 + 0x2b0;
        iVar10 = iVar17 + 1;
        iVar15 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar15 = iVar17;
        }
        if (iVar15 >> 5 == iVar12) {
          *(int *)(param_1 + 0x2c8) = iVar10;
        }
        else {
          if (*(int *)(param_1 + 0x2cc) <= iVar17) {
            local_60 = (ulonglong)uVar16;
            if (iVar17 + 0x20U < 0xa0) {
              iVar10 = 0x80;
              iVar12 = iVar17;
            }
            else {
              uVar5 = iVar17 + 0x20U >> 5;
              if (*(int *)(param_1 + 0x2cc) + 0x1fU < 0xa0) {
                uVar18 = 4;
                if (4 < uVar5) {
                  uVar18 = uVar5;
                }
              }
              else {
                uVar18 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
              }
              uVar11 = FUN_144a3809e(uVar18 << 2,0);
              iVar12 = (int)(uVar11 >> 2);
              iVar10 = -0x20;
              if ((int)uVar5 <= iVar12) {
                iVar10 = iVar12 << 5;
              }
              iVar12 = *(int *)(param_1 + 0x2c8);
            }
            *(int *)(param_1 + 0x2cc) = iVar10;
            FUN_1446efbd8(lVar7,iVar12);
            iVar10 = *(int *)(param_1 + 0x2c8) + 1;
            uVar16 = (uint)local_60;
          }
          iVar12 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar12 = iVar10;
          }
          *(int *)(param_1 + 0x2c8) = iVar10;
          if (iVar10 % 0x20 != 0) {
            lVar14 = *(longlong *)(param_1 + 0x2c0);
            if (*(longlong *)(param_1 + 0x2c0) == 0) {
              lVar14 = lVar7;
            }
            bVar9 = -(char)(iVar10 % 0x20);
            *(uint *)(lVar14 + (longlong)(iVar12 >> 5) * 4) =
                 (uint)(*(int *)(lVar14 + (longlong)(iVar12 >> 5) * 4) << (bVar9 & 0x1f)) >>
                 (bVar9 & 0x1f);
          }
        }
        lVar14 = (longlong)(int)uVar16;
        if (*(longlong *)(param_1 + 0x2c0) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x2c0);
        }
        bVar9 = (byte)iVar17 & 0x1f;
        puVar2 = (uint *)(lVar7 + (longlong)(iVar15 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
      }
      else {
        uVar16 = *(uint *)(param_1 + 0x2d0);
        lVar14 = (longlong)(int)uVar16;
        iVar17 = *(int *)(*(longlong *)(param_1 + 0x2a0) + 4 + lVar14 * 0x10);
        *(int *)(param_1 + 0x2d0) = iVar17;
        iVar12 = *(int *)(param_1 + 0x2d4) + -1;
        *(int *)(param_1 + 0x2d4) = iVar12;
        if (iVar12 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a0) + (longlong)iVar17 * 0x10) = 0xffffffff;
        }
      }
      lVar7 = param_1 + 0x2b0;
      if (*(longlong *)(param_1 + 0x2c0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x2c0);
      }
      uVar5 = uVar16 + 0x1f;
      if (-1 < (int)uVar16) {
        uVar5 = uVar16;
      }
      puVar2 = (uint *)(lVar7 + (longlong)((int)uVar5 >> 5) * 4);
      *puVar2 = *puVar2 | 1 << ((byte)uVar16 & 0x1f);
      lVar7 = *(longlong *)(param_1 + 0x2a0);
      lVar14 = lVar14 * 0x10;
      puVar3 = (undefined8 *)(lVar7 + lVar14);
      *(ulonglong *)(lVar7 + lVar14) = CONCAT44(uVar13,uVar6);
      *(undefined4 *)(lVar7 + 8 + lVar14) = 0xffffffff;
      uVar18 = uVar6 ^ uVar13;
      uVar5 = *(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2d4);
      if ((uVar5 != 0) && (uVar5 != 1)) {
        lVar7 = param_1 + 0x2d8;
        if (*(longlong *)(param_1 + 0x2e0) != 0) {
          lVar7 = *(longlong *)(param_1 + 0x2e0);
        }
        iVar17 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x2e8) - 1U & uVar18) * 4);
        if (iVar17 != -1) {
          lVar7 = *plVar1;
          local_60 = (ulonglong)uVar18;
          do {
            lVar14 = (longlong)iVar17 * 0x10;
            local_50 = *(undefined8 *)(lVar7 + lVar14);
            local_58 = CONCAT44(uVar13,uVar6);
            cVar4 = FUN_140489664(&local_50,&local_58);
            lVar7 = *plVar1;
            if (cVar4 != '\0') {
              *(undefined8 *)(lVar7 + lVar14) = *puVar3;
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
            }
            iVar17 = *(int *)(lVar7 + 8 + lVar14);
          } while (iVar17 != -1);
          uVar5 = *(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x2d4);
          uVar18 = (uint)local_60;
        }
      }
      iVar17 = 1;
      if (3 < uVar5) {
        uVar11 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
        lVar7 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar7 & 0x1f);
      }
      if ((0 < (int)uVar5) && (*(int *)(param_1 + 0x2e8) < iVar17)) {
        *(int *)(param_1 + 0x2e8) = iVar17;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
      }
      uVar18 = *(int *)(param_1 + 0x2e8) - 1U & uVar18;
      *(uint *)((longlong)puVar3 + 0xc) = uVar18;
      lVar7 = *(longlong *)(param_1 + 0x2e0);
      if (*(longlong *)(param_1 + 0x2e0) == 0) {
        lVar7 = param_1 + 0x2d8;
      }
      *(undefined4 *)(puVar3 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x2e8) - 1U & (longlong)(int)uVar18) * 4);
      lVar7 = *(longlong *)(param_1 + 0x2e0);
      if (*(longlong *)(param_1 + 0x2e0) == 0) {
        lVar7 = param_1 + 0x2d8;
      }
      *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x2e8) - 1U & (longlong)(int)uVar18) * 4) =
           uVar16;
      goto LAB_14048902a;
    }
    uVar13 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar6 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar17 = DAT_14c964868 + 1;
      UNLOCK();
      uVar16 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar17;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar16);
      }
      LOCK();
      uVar6 = *(uint *)(lVar7 + 0x10);
      bVar19 = uVar6 == 0;
      if (bVar19) {
        *(uint *)(lVar7 + 0x10) = uVar16;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar19) {
        uVar6 = uVar16;
      }
    }
  }
  if (*(int *)(param_1 + 0x2a8) != *(int *)(param_1 + 0x2d4)) {
    lVar7 = param_1 + 0x2d8;
    if (*(longlong *)(param_1 + 0x2e0) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x2e0);
    }
    lVar7 = (longlong)
            *(int *)(lVar7 + ((longlong)(int)(uVar6 ^ uVar13) &
                             (longlong)*(int *)(param_1 + 0x2e8) - 1U) * 4);
    if (lVar7 != -1) {
      lVar14 = *(longlong *)(param_1 + 0x2a0);
      lVar7 = lVar7 * 0x10;
      local_50 = *(undefined8 *)(lVar14 + lVar7);
      local_58 = CONCAT44(uVar6,uVar13);
      cVar4 = FUN_140489664();
      if (cVar4 == '\0') {
        lVar14 = lVar14 + lVar7;
        do {
          if ((longlong)*(int *)(lVar14 + 8) == -1) goto LAB_14048902a;
          lVar7 = *(longlong *)(param_1 + 0x2a0);
          lVar8 = (longlong)*(int *)(lVar14 + 8) * 0x10;
          lVar14 = lVar7 + lVar8;
          local_50 = *(undefined8 *)(lVar7 + lVar8);
          local_58 = CONCAT44(uVar6,uVar13);
          cVar4 = FUN_140489664();
        } while (cVar4 == '\0');
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
  }
LAB_14048902a:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14048957e FUN_14048957e body=228 status=ok
// SIG undefined FUN_14048957e(void)

longlong FUN_14048957e(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb11ab0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1457dfdaa;
    local_28 = &LAB_14637debc;
    local_38 = &LAB_147dc9373;
    local_40 = FUN_1417fbdf1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x200;
    FUN_14081cfa3(L"/Script/Engine",L"WorldPartitionLevelStreamingDynamic",&DAT_14cb11ab0,
                  &DAT_147dc9372);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11ab0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140489664 FUN_140489664 body=104 status=ok
// SIG undefined FUN_140489664(void)

ulonglong FUN_140489664(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 1404896cc FUN_1404896cc body=114 status=ok
// SIG undefined FUN_1404896cc(void)

void FUN_1404896cc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
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



// FUNCTION 14048973e FUN_14048973e body=89 status=ok
// SIG undefined FUN_14048973e(void)

void FUN_14048973e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1404896cc();
  return;
}



// FUNCTION 1404899c2 FUN_1404899c2 body=265 status=ok
// SIG undefined FUN_1404899c2(void)

void FUN_1404899c2(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[0x35] != 0) {
    plVar4 = (longlong *)FUN_140489acc();
    iVar3 = (**(code **)(*plVar4 + 0x398))(plVar4,param_1[0x35]);
    if (0 < iVar3) {
      iVar5 = 0;
      do {
        plVar4 = (longlong *)FUN_140489acc();
        (**(code **)(*plVar4 + 0x360))(plVar4,&local_48,param_1[0x35],iVar5);
        if (local_48 != 0) {
          local_58 = local_48;
          local_50 = local_40;
          if (local_40 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_40 + 1) = (int)local_40[1] + 1;
            UNLOCK();
          }
          (**(code **)(*param_1 + 0x370))(param_1,&local_58,0);
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
        iVar5 = iVar5 + 1;
      } while (iVar3 != iVar5);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140489acc FUN_140489acc body=375 status=ok
// SIG undefined FUN_140489acc(void)

longlong FUN_140489acc(void)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  char local_29;
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14caf2ac0 != 0) goto LAB_140489aed;
  local_28 = 0;
  uStack_20 = 0;
  local_58 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"/Script/Engine.OnlineEngineInterface",L"ClassName");
  local_29 = '\0';
  local_58 = &DAT_14c872ce8;
  cVar2 = FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.OnlineEngineInterface",
                        L"bUseOnlineServicesV2");
  if (cVar2 != '\0') {
    pwVar5 = L"/Script/OnlineSubsystemUtils.OnlineEngineInterfaceImpl";
    if (local_29 != '\0') {
      pwVar5 = L"/Script/OnlineSubsystemUtils.OnlineServicesEngineInterfaceImpl";
    }
    FUN_14020fad6(&local_28,pwVar5);
  }
  lVar4 = local_28;
  if ((int)uStack_20 < 2) {
LAB_140489bc0:
    lVar4 = FUN_14594ae94();
  }
  else {
    uVar3 = FUN_14594ae94();
    local_50 = 0;
    local_58 = (undefined8 *)CONCAT44(local_58._4_4_,0x2000);
    lVar4 = FUN_141433b6f(uVar3,0,lVar4,0);
    if (lVar4 == 0) goto LAB_140489bc0;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_50 = local_50 & 0xffffffffffffff00;
  local_58 = (undefined8 *)0x0;
  lVar6 = 0;
  DAT_14caf2ac0 = FUN_1463ede30(DAT_14c951640,lVar4,0,0);
  uVar1 = *(uint *)(DAT_14caf2ac0 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  FUN_1447f71cc(lVar6,0x40000000);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
LAB_140489aed:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14caf2ac0;
}



// FUNCTION 140489c44 FUN_140489c44 body=538 status=ok
// SIG undefined FUN_140489c44(void)

undefined8 FUN_140489c44(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  iVar6 = FUN_1448332aa(param_2,&DAT_14ad42464);
  FUN_14021219d(param_2,param_3);
  FUN_14021219d(param_2,param_3 + 0x10);
  if ((0x36 < iVar6) || ((*(byte *)(param_2 + 5) & 1) == 0)) {
    (**(code **)(*param_2 + 0x10))
              (param_2,(longlong)*(int *)(param_3 + 0x30) * 0x50,
               (longlong)*(int *)(param_3 + 0x34) * 0x50);
    local_34 = 0;
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_34 = *(uint *)(param_3 + 0x30);
    }
    puVar4 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar4 + 1;
    if ((uint *)puVar4[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_34);
      }
    }
    else {
      local_34 = *(uint *)*puVar4;
      *puVar4 = (ulonglong)puVar1;
    }
    uVar5 = local_34;
    plVar2 = (longlong *)(param_3 + 0x28);
    if (local_34 == 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        FUN_1401b560a(*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30));
        *(undefined4 *)(param_3 + 0x30) = 0;
        if (*(int *)(param_3 + 0x34) != 0) {
          FUN_140489e76(plVar2,0);
        }
      }
    }
    else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
            ((0x33333 < local_34 && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
      FUN_14572541c(param_2);
    }
    else if ((*(byte *)(param_2 + 5) & 1) == 0) {
      *(uint *)(param_3 + 0x30) = local_34;
      lVar7 = 0;
      lVar8 = 0;
      do {
        FUN_140489f5c(*(longlong *)(param_3 + 0x28) + lVar7,param_2);
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x50;
      } while (lVar8 < *(int *)(param_3 + 0x30));
    }
    else {
      FUN_1401b560a(*(undefined8 *)(param_3 + 0x28),*(undefined4 *)(param_3 + 0x30));
      *(undefined4 *)(param_3 + 0x30) = 0;
      if (*(uint *)(param_3 + 0x34) != uVar5) {
        FUN_140489e76(plVar2,uVar5);
      }
      if (0 < (int)local_34) {
        iVar6 = 0;
        do {
          iVar3 = *(int *)(param_3 + 0x30);
          *(uint *)(param_3 + 0x30) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0x34) < iVar3 + 1U) {
            FUN_1480592d8(plVar2,iVar3);
          }
          lVar7 = (longlong)iVar3 * 0x50 + *plVar2;
          FUN_140489e5f(lVar7);
          FUN_140489f5c(lVar7,param_2);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)local_34);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140489e5f FUN_140489e5f body=23 status=ok
// SIG undefined FUN_140489e5f(void)

void FUN_140489e5f(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return;
}



// FUNCTION 140489e76 FUN_140489e76 body=230 status=ok
// SIG undefined FUN_140489e76(void)

void FUN_140489e76(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x19a) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 140489f5c FUN_140489f5c body=615 status=ok
// SIG undefined FUN_140489f5c(void)

void FUN_140489f5c(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ad42464);
  iVar6 = FUN_1448332aa(param_2,&DAT_14ad42464);
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  FUN_14021219d(param_2,param_1 + 8);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x20) << 4,(longlong)*(int *)(param_1 + 0x24) << 4
            );
  local_4c = 0;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_4c = *(uint *)(param_1 + 0x20);
  }
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  plVar2 = (longlong *)(param_1 + 0x18);
  if (local_4c == 0) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x20) = 0, *(int *)(param_1 + 0x24) != 0)) {
      FUN_14048a354(plVar2,0);
    }
  }
  else if ((((int)local_4c < 0) || ((*(byte *)((longlong)param_2 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_4c && (*(char *)((longlong)param_2 + 0x2b) < '\0')))) {
    FUN_14572541c(param_2);
  }
  else if ((*(byte *)(param_2 + 5) & 1) == 0) {
    *(uint *)(param_1 + 0x20) = local_4c;
    lVar9 = 8;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x18);
      (**(code **)(*param_2 + 0x160))(param_2,lVar5 + lVar9 + -8);
      (**(code **)(*param_2 + 0x160))(param_2,lVar5 + lVar9);
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar8 < *(int *)(param_1 + 0x20));
  }
  else {
    *(undefined4 *)(param_1 + 0x20) = 0;
    if ((*(uint *)(param_1 + 0x24) == local_4c) || (FUN_14048a354(plVar2), 0 < (int)local_4c)) {
      iVar7 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x24) < iVar3 + 1U) {
          FUN_140d6f884(plVar2,iVar3);
        }
        lVar9 = *plVar2;
        lVar8 = (longlong)iVar3 * 0x10 + lVar9;
        FUN_14048a34d(lVar8);
        (**(code **)(*param_2 + 0x160))(param_2,lVar8);
        (**(code **)(*param_2 + 0x160))(param_2,(longlong)iVar3 * 0x10 + lVar9 + 8);
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_4c);
    }
  }
  if (iVar6 < 0x4d) {
    if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  FUN_14048a1e0(param_2,param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
}



// FUNCTION 14048a1e0 FUN_14048a1e0 body=364 status=ok
// SIG undefined FUN_14048a1e0(void)

longlong * FUN_14048a1e0(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1480591ec(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_14804251c(*param_2 + lVar5,param_1);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1480591ec(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1480591b0(param_2);
        FUN_14804251c(uVar3,param_1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14048a34d FUN_14048a34d body=7 status=ok
// SIG undefined FUN_14048a34d(void)

void FUN_14048a34d(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 14048a354 FUN_14048a354 body=226 status=ok
// SIG undefined FUN_14048a354(void)

void FUN_14048a354(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,4);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,4);
  }
  return;
}



// FUNCTION 14048a436 FUN_14048a436 body=908 status=ok
// SIG undefined FUN_14048a436(void)

void FUN_14048a436(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_118 [32];
  uint local_f8;
  undefined8 **local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  int local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  longlong local_80;
  uint local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar3 = *(int *)(param_1 + 0x14);
  lVar15 = (longlong)iVar3;
  uVar16 = 0;
  local_c0 = 0;
  local_b8 = *(int *)(param_1 + 0x10) - iVar3;
  local_b0 = (undefined8 *)0x0;
  local_c8 = param_2;
  if (local_b8 != 0 && iVar3 <= *(int *)(param_1 + 0x10)) {
    local_d8 = param_1 + 0x108;
    lVar14 = lVar15 << 4;
    uVar11 = 0;
    local_d0 = param_1;
    while (lVar6 = local_d0, uVar16 = (uint)uVar11, param_1 = local_d0,
          *(char *)(local_d0 + 0x5c) == '\0') {
      lVar4 = *(longlong *)(*(longlong *)(local_c8 + 0x10) + lVar15 * 8);
      iVar3 = *(int *)(lVar4 + 0x28);
      uVar2 = *(undefined1 *)(lVar4 + 0x2c);
      uVar17 = (ulonglong)*(uint5 *)(lVar4 + 0x28);
      local_e0 = uVar11;
      if (uVar17 == 0) {
        *(undefined1 *)(local_d0 + 0x280) = 1;
        if (*(int *)(local_d0 + 0x60) != 0) {
          *(undefined1 *)(local_d0 + 0x5c) = 1;
        }
        break;
      }
      uVar16 = 1;
      if (*(char *)(local_d0 + 0x281) == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0a998) &&
           (FUN_144b3d300(&DAT_14cb0a998), DAT_14cb0a998 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14cb0a990 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"s.AsyncLoadingPrecachePriority",1);
          _Init_thread_footer(&DAT_14cb0a998);
        }
        lVar10 = DAT_14cb0b180;
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60) == 0x40000002) {
          uVar11 = 0;
        }
        else {
          bVar8 = FUN_144a61b4f();
          uVar11 = (ulonglong)(bVar8 ^ 1);
        }
        uVar16 = 2;
        if (*(int *)(lVar10 + uVar11 * 4) == 2 && DAT_14cb0a990 != (longlong *)0x0) {
          iVar9 = (**(code **)(*DAT_14cb0a990 + 0xb0))();
          iVar12 = 4;
          if (iVar9 < 4) {
            iVar12 = iVar9;
          }
          iVar9 = 1;
          if (1 < iVar12) {
            iVar9 = iVar12;
          }
          uVar16 = iVar9 + 1;
        }
      }
      lVar10 = *(longlong *)(lVar6 + 0x1f8);
      if (*(longlong *)(lVar6 + 0x1f8) == 0) {
        lVar10 = local_d8;
      }
      uVar5 = *(undefined8 *)(lVar10 + lVar14);
      local_a8[0] = (undefined8 *)FUN_14001cc68(0x20,0x10);
      local_a8[0][1] = 0;
      local_a8[0][2] = 0;
      *local_a8[0] = uVar5;
      *(int *)(local_a8[0] + 1) = iVar3;
      *(undefined1 *)(local_a8[0] + 3) = uVar2;
      *(undefined1 *)((longlong)local_a8[0] + 0x19) = 0;
      if (local_a8[0] != (undefined8 *)0x0) {
        LOCK();
        *(int *)((longlong)local_a8[0] + 0xc) = *(int *)((longlong)local_a8[0] + 0xc) + 1;
        UNLOCK();
      }
      local_f8 = uVar16 | 0x600;
      local_f0 = local_a8;
      local_e8 = 0;
      FUN_1449baf38(&local_c0,lVar4 + 0x20,0,uVar17);
      puVar7 = local_a8[0];
      if (local_a8[0] != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_a8[0] + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          FUN_144716208(local_a8[0]);
          FUN_1400020a8(puVar7);
        }
      }
      uVar16 = iVar3 + (int)local_e0;
      uVar11 = (ulonglong)uVar16;
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x10;
      param_1 = local_d0;
      if (*(int *)(local_d0 + 0x10) <= lVar15) break;
    }
  }
  if ((*(char *)(param_1 + 0x280) == '\0') && ((int)local_c0 != 0)) {
    LOCK();
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    UNLOCK();
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14aace940;
    local_a8[0] = (undefined8 *)&LAB_14372dffe;
    local_80 = param_1;
    local_78 = uVar16;
    FUN_14048a7c4(&local_c0,local_a8,param_1 + 0x288);
    if (local_a8[0] != (undefined8 *)0x0) {
      pppuVar13 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar13 = &local_88;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if (local_b0 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_b0 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_b0)(local_b0,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14048a7c4 FUN_14048a7c4 body=113 status=ok
// SIG undefined FUN_14048a7c4(void)

void FUN_14048a7c4(int *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if ((param_1[1] < 1) || (*param_1 != 0)) {
    FUN_14048a836(param_1,param_3);
    return;
  }
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10,param_2);
  *puVar2 = &PTR_FUN_149e699f0;
  puVar2[1] = 0x200000000;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)*param_3;
  *param_3 = (longlong)puVar2;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014048a82a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}



// FUNCTION 14048a836 FUN_14048a836 body=111 status=ok
// SIG undefined FUN_14048a836(void)

void FUN_14048a836(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1403c8db6(plVar1,param_3);
  if (param_2 != (longlong *)0x0) {
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
    plVar2 = (longlong *)*param_2;
    *param_2 = (longlong)plVar1;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014048a8a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*plVar1)(plVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14048a8ac FUN_14048a8ac body=159 status=ok
// SIG undefined FUN_14048a8ac(void)

undefined8 * FUN_14048a8ac(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e699b0;
  if (DAT_14c844ed8 == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *DAT_14c844ed8;
  }
  param_1[2] = uVar2;
  puVar1 = param_1 + 5;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_1448ba902(puVar1);
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    FUN_1447ab16c(puVar1,0);
  }
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  if ((0 < param_2) && (uVar3 = param_2 + 7U >> 3, *(int *)((longlong)param_1 + 0x34) < (int)uVar3))
  {
    FUN_1447ab16c(puVar1,uVar3);
  }
  return param_1;
}



// FUNCTION 14048a966 FUN_14048a966 body=57 status=ok
// SIG undefined FUN_14048a966(void)

undefined8 * FUN_14048a966(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f45be0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14048a9a0 FUN_14048a9a0 body=3661 status=ok
// SIG undefined FUN_14048a9a0(void)

ulonglong FUN_14048a9a0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined *puVar10;
  undefined8 unaff_RBX;
  undefined4 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined4 *puVar18;
  longlong lVar19;
  bool bVar20;
  bool bVar21;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  int local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char local_c8 [8];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ushort local_80;
  byte local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  undefined7 uVar14;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar5 + 0x80) != '\0') {
    uVar13 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
    if (*(char *)(lVar5 + 0x80) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
    }
    goto LAB_14048ad19;
  }
  lVar17 = *(longlong *)(param_1 + 0x40);
  local_c0 = param_1;
  if (lVar17 == 0) {
    lVar12 = 0;
    local_c0 = 0;
LAB_14048b183:
    local_b8 = (longlong *)0x0;
    bVar20 = true;
  }
  else {
    if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_14048afb6:
      lVar12 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar17 + 0x48);
      lVar12 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar16 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar16 == (longlong *)0x0) ||
           (((int)plVar16[2] != *(int *)(lVar17 + 0x4c) ||
            ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_14048afb6;
        lVar12 = *plVar16;
      }
    }
    plVar16 = *(longlong **)(lVar17 + 0x118);
    if (plVar16 == (longlong *)0x0) goto LAB_14048b183;
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar16 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    LOCK();
    *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
    UNLOCK();
    bVar20 = false;
    local_b8 = plVar16;
  }
  plVar16 = local_b8;
  local_a0 = 0;
  local_c8[0] = '\x03';
  local_b0._0_4_ = 0;
  if (lVar12 == 0) {
    iVar9 = 0;
    uVar4 = (uint)local_b0;
  }
  else {
    uVar4 = *(uint *)(lVar12 + 0xc);
    local_b0 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
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
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar21) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar9 = *(int *)(lVar17 + 0x10);
      bVar21 = iVar9 == 0;
      if (bVar21) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar9 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_b0;
      if (bVar21) {
        iVar9 = iVar15;
      }
    }
  }
  local_b0._0_4_ = uVar4;
  local_b0 = CONCAT44(iVar9,(uint)local_b0);
  local_a8 = 2;
  if (local_a0 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_a0 + -1,1);
    local_a0 = 0;
  }
  if (!bVar20) {
    LOCK();
    piVar2 = (int *)((longlong)plVar16 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  puVar11 = &local_98;
  FUN_1447c3578(lVar5 + 0xc0,puVar11,local_c8);
  if (local_78 == 4) {
    local_d8 = local_88;
    local_e8 = local_98;
    uStack_e4 = uStack_94;
    uStack_e0 = uStack_90;
    uStack_dc = uStack_8c;
    bVar20 = true;
    local_78 = 4;
  }
  else {
    puVar18 = &local_70;
    FUN_1400b56fe(puVar18,&local_98,4);
    bVar20 = local_50 != 0;
    if (bVar20) {
      local_d8 = local_60;
      local_e8 = local_70;
      uStack_e4 = uStack_6c;
      uStack_e0 = uStack_68;
      uStack_dc = uStack_64;
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar6 != (code *)0x0) {
      if (0x18 < local_58) {
        puVar18 = (undefined4 *)CONCAT44(uStack_6c,local_70);
      }
      (*pcVar6)(puVar18);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(CONCAT44(uStack_6c,local_70));
    }
  }
  pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
  if (pcVar6 != (code *)0x0) {
    if (0x18 < local_80) {
      puVar11 = (undefined4 *)CONCAT44(uStack_94,local_98);
    }
    (*pcVar6)(puVar11);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(CONCAT44(uStack_94,local_98));
  }
  lVar17 = DAT_14c9a3da0;
  lVar12 = (longlong)local_a0;
  if (lVar12 != 0) {
    lVar12 = lVar12 + -1;
    lVar19 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar19),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar19));
    if (*(longlong *)(lVar17 + lVar19) != 0) {
      FUN_1400020a8();
    }
    lVar17 = DAT_14c9a3da0;
    iVar9 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar17 + lVar19) = 0xffffffff;
    iVar15 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar15 = DAT_14c9a3dd0;
    }
    *(int *)(lVar17 + 4 + lVar19) = iVar15;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar15 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar15 = iVar9;
    }
    bVar7 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_a0 = 0;
  }
  if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_b8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  uVar14 = (undefined7)((ulonglong)lVar12 >> 8);
  uVar13 = CONCAT71(uVar14,2);
  if (!bVar20) goto LAB_14048ad19;
  if (*(char *)(lVar5 + 0x208) == '\x01') {
    if (*(char *)(lVar5 + 0x201) == '\x01') {
      uVar3 = *(undefined1 *)(lVar5 + 0xf8);
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (lVar17 == 0) {
        lVar12 = 0;
        lVar17 = 0;
LAB_14048b53c:
        local_b8 = (longlong *)0x0;
        bVar20 = true;
        local_c0 = lVar17;
      }
      else {
        if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_14048b418:
          lVar12 = 0;
        }
        else {
          uVar4 = *(uint *)(lVar17 + 0x48);
          lVar12 = 0;
          if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
            plVar16 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if ((plVar16 == (longlong *)0x0) ||
               (((int)plVar16[2] != *(int *)(lVar17 + 0x4c) ||
                ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_14048b418;
            lVar12 = *plVar16;
          }
        }
        plVar16 = *(longlong **)(lVar17 + 0x118);
        lVar17 = param_1;
        if (plVar16 == (longlong *)0x0) goto LAB_14048b53c;
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        LOCK();
        *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
        UNLOCK();
        bVar20 = false;
        local_c0 = param_1;
        local_b8 = plVar16;
      }
      plVar16 = local_b8;
      local_a0 = 0;
      local_c8[0] = '\x03';
      local_b0._0_4_ = 0;
      if (lVar12 == 0) {
        iVar9 = 0;
        uVar4 = (uint)local_b0;
      }
      else {
        uVar4 = *(uint *)(lVar12 + 0xc);
        local_b0 = (ulonglong)uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar17 = 0;
        }
        iVar9 = *(int *)(lVar17 + 0x10);
        if (*(int *)(lVar17 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          local_ec = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,local_ec);
          }
          LOCK();
          iVar9 = *(int *)(lVar17 + 0x10);
          bVar21 = iVar9 == 0;
          if (bVar21) {
            *(int *)(lVar17 + 0x10) = local_ec;
            iVar9 = 0;
          }
          UNLOCK();
          uVar4 = (uint)local_b0;
          if (bVar21) {
            iVar9 = local_ec;
          }
        }
      }
      local_b0._0_4_ = uVar4;
      local_b0 = CONCAT44(iVar9,(uint)local_b0);
      local_a8 = 2;
      if (local_a0 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_a0 + -1,1);
        local_a0 = 0;
      }
      if (!bVar20) {
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      local_f8 = uVar3;
      cVar8 = FUN_14048b810(lVar5 + 0x180,param_2,local_c8,&local_e8);
      lVar17 = DAT_14c9a3da0;
      if ((longlong)local_a0 != 0) {
        lVar19 = (longlong)local_a0 + -1;
        lVar12 = lVar19 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
        if (*(longlong *)(lVar17 + lVar12) != 0) {
          FUN_1400020a8();
        }
        lVar17 = DAT_14c9a3da0;
        iVar9 = (int)lVar19;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
        }
        *(undefined4 *)(lVar17 + lVar12) = 0xffffffff;
        iVar15 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar15 = DAT_14c9a3dd0;
        }
        *(int *)(lVar17 + 4 + lVar12) = iVar15;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar10 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar10 = DAT_14c9a3dc0;
        }
        iVar15 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar15 = iVar9;
        }
        bVar7 = (byte)lVar19 & 0x1f;
        DAT_14c9a3dd0 = iVar9;
        *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) =
             *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_a0 = 0;
      }
      if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      if (cVar8 != '\0') {
        uVar13 = CONCAT71(uVar14,1);
        goto LAB_14048ad19;
      }
    }
    if (*(char *)(lVar5 + 0x202) == '\x01') {
      uVar3 = *(undefined1 *)(lVar5 + 0xf8);
      lVar17 = *(longlong *)(param_1 + 0x40);
      if (lVar17 == 0) {
        lVar12 = 0;
        param_1 = 0;
LAB_14048b6ed:
        local_b8 = (longlong *)0x0;
        bVar20 = true;
        local_c0 = param_1;
      }
      else {
        if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_14048b35e:
          lVar12 = 0;
        }
        else {
          uVar4 = *(uint *)(lVar17 + 0x48);
          lVar12 = 0;
          if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
            plVar16 = (longlong *)
                      ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
            if ((plVar16 == (longlong *)0x0) ||
               (((int)plVar16[2] != *(int *)(lVar17 + 0x4c) ||
                ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_14048b35e;
            lVar12 = *plVar16;
          }
        }
        plVar16 = *(longlong **)(lVar17 + 0x118);
        if (plVar16 == (longlong *)0x0) goto LAB_14048b6ed;
        LOCK();
        *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar16 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar16)(plVar16);
          LOCK();
          piVar2 = (int *)((longlong)plVar16 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar16 + 0x10))(plVar16);
          }
        }
        LOCK();
        *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
        UNLOCK();
        bVar20 = false;
        local_c0 = param_1;
        local_b8 = plVar16;
      }
      plVar16 = local_b8;
      local_a0 = 0;
      local_c8[0] = '\x03';
      local_b0._0_4_ = 0;
      if (lVar12 == 0) {
        iVar9 = 0;
        uVar4 = (uint)local_b0;
      }
      else {
        uVar4 = *(uint *)(lVar12 + 0xc);
        local_b0 = (ulonglong)uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
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
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar21) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar15);
          }
          LOCK();
          iVar9 = *(int *)(lVar17 + 0x10);
          bVar21 = iVar9 == 0;
          if (bVar21) {
            *(int *)(lVar17 + 0x10) = iVar15;
            iVar9 = 0;
          }
          UNLOCK();
          uVar4 = (uint)local_b0;
          if (bVar21) {
            iVar9 = iVar15;
          }
        }
      }
      local_b0._0_4_ = uVar4;
      local_b0 = CONCAT44(iVar9,(uint)local_b0);
      local_a8 = 2;
      if (local_a0 != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_a0 + -1,1);
        local_a0 = 0;
      }
      if (!bVar20) {
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      local_f8 = uVar3;
      cVar8 = FUN_14048b810(lVar5 + 0x1c0,param_2,local_c8,&local_e8);
      lVar5 = DAT_14c9a3da0;
      if ((longlong)local_a0 != 0) {
        lVar17 = (longlong)local_a0 + -1;
        lVar12 = lVar17 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
        if (*(longlong *)(lVar5 + lVar12) != 0) {
          FUN_1400020a8();
        }
        lVar5 = DAT_14c9a3da0;
        iVar9 = (int)lVar17;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
        }
        *(undefined4 *)(lVar5 + lVar12) = 0xffffffff;
        iVar15 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar15 = DAT_14c9a3dd0;
        }
        *(int *)(lVar5 + 4 + lVar12) = iVar15;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar10 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar10 = DAT_14c9a3dc0;
        }
        iVar15 = iVar9 + 0x1f;
        if (-1 < iVar9) {
          iVar15 = iVar9;
        }
        bVar7 = (byte)lVar17 & 0x1f;
        DAT_14c9a3dd0 = iVar9;
        *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) =
             *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) &
             (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        local_a0 = 0;
      }
      if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_b8 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      if (cVar8 != '\0') goto LAB_14048ad19;
    }
  }
  else {
    uVar3 = *(undefined1 *)(lVar5 + 0xf8);
    lVar17 = *(longlong *)(param_1 + 0x40);
    if (lVar17 == 0) {
      lVar12 = 0;
      param_1 = 0;
LAB_14048b617:
      local_b8 = (longlong *)0x0;
      bVar20 = true;
      local_c0 = param_1;
    }
    else {
      if (*(int *)(lVar17 + 0x4c) == 0) {
LAB_14048afbe:
        lVar12 = 0;
      }
      else {
        uVar4 = *(uint *)(lVar17 + 0x48);
        lVar12 = 0;
        if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
          plVar16 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
          if ((plVar16 == (longlong *)0x0) ||
             (((int)plVar16[2] != *(int *)(lVar17 + 0x4c) ||
              ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))) goto LAB_14048afbe;
          lVar12 = *plVar16;
        }
      }
      plVar16 = *(longlong **)(lVar17 + 0x118);
      if (plVar16 == (longlong *)0x0) goto LAB_14048b617;
      LOCK();
      *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar16 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      LOCK();
      *(int *)((longlong)plVar16 + 0xc) = *(int *)((longlong)plVar16 + 0xc) + 1;
      UNLOCK();
      bVar20 = false;
      local_c0 = param_1;
      local_b8 = plVar16;
    }
    plVar16 = local_b8;
    local_a0 = 0;
    local_c8[0] = '\x03';
    local_b0._0_4_ = 0;
    if (lVar12 == 0) {
      iVar9 = 0;
      uVar4 = (uint)local_b0;
    }
    else {
      uVar4 = *(uint *)(lVar12 + 0xc);
      local_b0 = (ulonglong)uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar17 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
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
        bVar21 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar21) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar9 = *(int *)(lVar17 + 0x10);
        bVar21 = iVar9 == 0;
        if (bVar21) {
          *(int *)(lVar17 + 0x10) = iVar15;
          iVar9 = 0;
        }
        UNLOCK();
        uVar4 = (uint)local_b0;
        if (bVar21) {
          iVar9 = iVar15;
        }
      }
    }
    local_b0._0_4_ = uVar4;
    local_b0 = CONCAT44(iVar9,(uint)local_b0);
    local_a8 = 2;
    if (local_a0 != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_a0 + -1,1);
      local_a0 = 0;
    }
    if (!bVar20) {
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    local_f8 = uVar3;
    cVar8 = FUN_14048b810(lVar5 + 0x100,param_2,local_c8,&local_e8);
    lVar5 = DAT_14c9a3da0;
    if ((longlong)local_a0 != 0) {
      lVar17 = (longlong)local_a0 + -1;
      lVar12 = lVar17 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
      if (*(longlong *)(lVar5 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar5 = DAT_14c9a3da0;
      iVar9 = (int)lVar17;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
      }
      *(undefined4 *)(lVar5 + lVar12) = 0xffffffff;
      iVar15 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar15 = DAT_14c9a3dd0;
      }
      *(int *)(lVar5 + 4 + lVar12) = iVar15;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar10 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar10 = DAT_14c9a3dc0;
      }
      iVar15 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar15 = iVar9;
      }
      bVar7 = (byte)lVar17 & 0x1f;
      DAT_14c9a3dd0 = iVar9;
      *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) =
           *(uint *)(puVar10 + (longlong)(iVar15 >> 5) * 4) &
           (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
      local_a0 = 0;
    }
    if ((local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_b8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    if (cVar8 == '\0') goto LAB_14048ad19;
  }
  uVar13 = 0;
LAB_14048ad19:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14048b810 FUN_14048b810 body=244 status=ok
// SIG undefined FUN_14048b810(void)

undefined8
FUN_14048b810(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14048b906(*param_2);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5);
    FUN_14048ba0c(param_1,&local_38,param_3,uVar2 & 0xffffffff);
    lVar1 = *(longlong *)(lVar1 + 0x1c8);
    if (lVar1 == 0) {
      local_48 = DAT_14c8464f0;
      local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_58 = *(undefined8 *)(lVar1 + 0x260);
      uStack_50 = *(undefined8 *)(lVar1 + 0x268);
      local_48 = *(undefined8 *)(lVar1 + 0x270);
    }
    fVar4 = (float)FUN_14048b95e(uVar2 & 0xffffffff,&local_58,param_4);
    uVar2 = (ulonglong)-(uint)(fVar4 <= local_38 + local_34 && local_38 - local_34 <= fVar4) &
            0xffffffffffffff01;
    uVar3 = CONCAT71((int7)(uVar2 >> 8),*(char *)(param_1 + 0x38) != (char)uVar2);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048b906 FUN_14048b906 body=88 status=ok
// SIG undefined FUN_14048b906(void)

undefined8 FUN_14048b906(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong **)(param_1 + 2) != (longlong *)0x0) {
    if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
    {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
         ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014048b957. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
        return uVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 14048b95e FUN_14048b95e body=174 status=ok
// SIG undefined FUN_14048b95e(void)

ulonglong FUN_14048b95e(undefined1 param_1,double *param_2,double *param_3)

{
  double dVar1;
  
  switch(param_1) {
  case 0:
    dVar1 = SQRT((param_3[2] - param_2[2]) * (param_3[2] - param_2[2]) +
                 (param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
                 (*param_3 - *param_2) * (*param_3 - *param_2));
    break;
  case 1:
    dVar1 = SQRT((param_3[1] - param_2[1]) * (param_3[1] - param_2[1]) +
                 (*param_3 - *param_2) * (*param_3 - *param_2));
    break;
  case 2:
    return CONCAT44((int)((ulonglong)(param_3[2] - param_2[2]) >> 0x20),
                    (float)(param_3[2] - param_2[2])) & 0x7fffffff7fffffff;
  case 3:
    dVar1 = param_3[2] - param_2[2];
    break;
  default:
    return 0x7f7fffff;
  }
  return CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)dVar1);
}



// FUNCTION 14048ba0c FUN_14048ba0c body=442 status=ok
// SIG undefined FUN_14048ba0c(void)

float * FUN_14048ba0c(undefined8 param_1,float *param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_b8 [40];
  float local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pfVar3 = &local_90;
  FUN_1447c3578(param_1,pfVar3);
  if (local_70 == 0xb) {
    FUN_140b013e6(&local_90,param_2);
  }
  else {
    if (param_4 == '\x03') {
      fVar4 = -3.4028235e+38;
    }
    else {
      fVar4 = 0.0;
    }
    fVar6 = local_90;
    if (local_70 != 3) {
      pfVar2 = &local_68;
      FUN_1400b56fe(pfVar2,&local_90,3);
      fVar6 = 0.0;
      if (local_48 != 0) {
        fVar6 = local_68;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_50) {
          pfVar2 = (float *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar1)(pfVar2);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
    }
    fVar5 = fVar4;
    if (fVar4 <= fVar6) {
      fVar5 = fVar6;
      fVar6 = fVar4;
    }
    fVar4 = fVar6;
    if (fVar6 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar4 = (fVar4 - fVar6) * 0.5;
    fVar4 = (fVar6 + fVar4) - fVar4;
    if (fVar5 <= fVar4) {
      fVar4 = fVar5;
    }
    fVar6 = (fVar5 - fVar4) * 0.5;
    param_2[1] = fVar6;
    *param_2 = fVar4 + fVar6;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_70 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_78) {
      pfVar3 = (float *)CONCAT44(uStack_8c,local_90);
    }
    (*pcVar1)(pfVar3);
  }
  if (0x18 < local_78) {
    FUN_1400020a8(CONCAT44(uStack_8c,local_90));
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048bbc8 FUN_14048bbc8 body=576 status=ok
// SIG undefined FUN_14048bbc8(void)

longlong FUN_14048bbc8(longlong *param_1)

{
  uint uVar1;
  undefined2 *puVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_1[6];
  if ((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) goto LAB_14048bbf5;
  if ((*param_1 != 0) && ((*(uint *)(*param_1 + 8) >> 0x1e & 1) == 0)) {
    lVar5 = FUN_14048be0a();
    if (lVar5 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar5);
    }
    bVar3 = DAT_14c950c29;
    param_1[6] = lVar5;
    lVar5 = *param_1;
    if ((lVar5 != 0 & bVar3) == 1) {
      FUN_1456cec3c(lVar5);
LAB_14048bc9e:
      FUN_1400bbfc4(&local_48,lVar5);
      *(undefined4 *)(param_1 + 2) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
      *(undefined4 *)(param_1 + 3) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
      if (param_1 + 2 == (longlong *)&local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[4] != 0) {
          FUN_1400020a8();
        }
        param_1[4] = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 5) = local_30;
        *(undefined4 *)((longlong)param_1 + 0x2c) = local_2c;
      }
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      if (cVar4 != '\0') {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
          param_1[1] = 0;
          goto LAB_14048bd34;
        }
      }
      FUN_14485c47a(param_1 + 1,lVar5);
    }
    else {
      if (lVar5 != 0) goto LAB_14048bc9e;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *(undefined4 *)(param_1 + 5) = 0;
      if (*(int *)((longlong)param_1 + 0x2c) < 0) {
        FUN_1446f8c06(param_1 + 4,0);
      }
      puVar2 = (undefined2 *)param_1[4];
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
      }
    }
LAB_14048bd34:
    lVar5 = param_1[6];
    goto LAB_14048bbf5;
  }
  lVar5 = FUN_1404101e2(param_1 + 1);
  if ((lVar5 == 0) || (DAT_14c950c29 == 0)) {
    *param_1 = lVar5;
    if (lVar5 != 0) goto LAB_14048bdd0;
  }
  else {
    FUN_1456cec3c(lVar5);
    *param_1 = lVar5;
LAB_14048bdd0:
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
      lVar5 = FUN_14048be0a(lVar5);
      if ((lVar5 != 0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(lVar5);
      }
      param_1[6] = lVar5;
      goto LAB_14048bbf5;
    }
  }
  lVar5 = 0;
LAB_14048bbf5:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048be0a FUN_14048be0a body=63 status=ok
// SIG undefined FUN_14048be0a(void)

longlong FUN_14048be0a(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14048bf30();
  if (lVar1 != 0) {
    lVar2 = FUN_14048be4a();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14048be4a FUN_14048be4a body=228 status=ok
// SIG undefined FUN_14048be4a(void)

longlong FUN_14048be4a(void)

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
  if (DAT_14cb590a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641b69a;
    local_38 = &LAB_14865afdb;
    local_40 = &LAB_1464c52fd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x10d0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxAINodeComponent",&DAT_14cb590a0,FUN_1464c52d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb590a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


