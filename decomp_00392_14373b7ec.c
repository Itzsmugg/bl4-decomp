// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14373b7ec FUN_14373b7ec body=1558 status=ok
// SIG undefined FUN_14373b7ec(void)

bool FUN_14373b7ec(longlong *param_1,undefined8 *param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((int)*param_4 == 0) && (*(int *)((longlong)param_4 + 4) == 0)) && ((int)param_4[1] == 0))
     && (*(int *)((longlong)param_4 + 0xc) == 0)) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_78);
    uVar6 = local_78._4_4_;
    (**(code **)(*param_1 + 0x28))(param_1,&local_88);
    *param_4 = 0;
    param_4[1] = CONCAT44(uVar6,(undefined4)local_88);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1471cf4a8(param_2,0);
  }
  lVar3 = *param_4;
  lVar4 = param_4[1];
  uStack_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  local_9c = param_3[3];
  uStack_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_14373b8bc;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_14373b8c1;
      goto LAB_14373b940;
    }
  }
  else {
LAB_14373b8bc:
    if (iVar8 != 0x10) {
LAB_14373b940:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2))
        goto LAB_14373b8c1;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_14373b8c1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_14373baf5;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14374dad0);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_14373baf5:
          puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x1d);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar18 + 0x1d);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_14373bb75;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_14373bb75:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14aae0490;
        puVar18[0x15] = param_1;
        puVar18[0x16] = lVar3;
        puVar18[0x17] = lVar4;
        puVar18[0x18] = param_2;
        puVar18[0x19] = CONCAT44(uStack_a4,uStack_a8);
        puVar18[0x1a] = CONCAT44(local_9c,uStack_a0);
        *(undefined4 *)((longlong)puVar18 + 0xd4) = local_9c;
        *(undefined4 *)(puVar18 + 0x1b) = uStack_98;
        *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_94;
        *(undefined4 *)(puVar18 + 0x1c) = uStack_90;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
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
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar3 == 0) {
          uVar7 = 1;
          if ((char)uVar19 != '\x06') {
            uVar7 = uVar19;
          }
          uVar19 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar3 + 0x30);
        }
        puVar18[0xf] = uVar14;
        puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x48,8);
        *local_68 = (longlong)&PTR_LAB_14aae0440;
        local_68[1] = (longlong)param_1;
        local_68[2] = lVar3;
        local_68[3] = lVar4;
        local_68[4] = (longlong)param_2;
        *(ulonglong *)((longlong)local_68 + 0x34) = CONCAT44(uStack_98,local_9c);
        *(ulonglong *)((longlong)local_68 + 0x3c) = CONCAT44(uStack_90,uStack_94);
        *(undefined4 *)(local_68 + 5) = uStack_a8;
        *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_a4;
        *(undefined4 *)(local_68 + 6) = uStack_a0;
        *(undefined4 *)((longlong)local_68 + 0x34) = local_9c;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78 = FUN_143750b7a;
        }
        local_b8 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"ReadSurfaceFloatCommand",&DAT_14cb0ca50);
        if (local_78 != (code *)0x0) {
          plVar16 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar16 = local_58;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_14373ba1e;
    }
  }
LAB_14373b8c1:
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
  local_78 = (code *)CONCAT44(uStack_a4,uStack_a8);
  local_b0 = &local_78;
  _uStack_70 = CONCAT44(local_9c,uStack_a0);
  local_68 = (longlong *)CONCAT44(uStack_94,uStack_98);
  uStack_60 = uStack_90;
  local_b8 = param_2;
  local_88 = lVar3;
  local_80 = lVar4;
  (**(code **)(*DAT_14ca83900 + 0x490))(DAT_14ca83900,&DAT_14ca85100,*puVar11);
LAB_14373ba1e:
  FUN_14080c2b4();
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0 < *(int *)(param_2 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373be04 FUN_14373be04 body=1258 status=ok
// SIG undefined FUN_14373be04(void)

void FUN_14373be04(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = FUN_1447b4020();
  if (lVar9 == 0) goto LAB_14373bf33;
  lVar10 = FUN_1447b4020(param_1);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14373be5d;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14373be62;
      goto LAB_14373be99;
    }
  }
  else {
LAB_14373be5d:
    if (iVar6 != 0x10) {
LAB_14373be99:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_14373be62;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14373be62;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14373bff4;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14374dad0);
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
LAB_14373bff4:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14373c074;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14373c074:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aae0050;
        puVar17[0x15] = lVar10;
        *(char *)(puVar17 + 0x16) = (char)param_2;
        uVar4 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar17 + 0xb1) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar6 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
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
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar5 = 1;
          if ((char)uVar18 != '\x06') {
            uVar5 = uVar18;
          }
          uVar18 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aae0030;
        local_68 = &LAB_14374fa32;
        local_40 = lVar10;
        local_38 = (char)param_2;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateResourceImmediate",&DAT_14cb0ca40);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_14373bf33;
    }
  }
LAB_14373be62:
  (*(code *)**(undefined8 **)(lVar10 + 0x60))(lVar10 + 0x60,&DAT_14ca85100,param_2);
LAB_14373bf33:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373c2f0 FUN_14373c2f0 body=2018 status=ok
// SIG undefined FUN_14373c2f0(void)

void FUN_14373c2f0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  byte *local_b8;
  longlong local_b0;
  byte local_a8;
  undefined1 uStack_a7;
  byte bStack_a6;
  byte bStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((int)(*(longlong **)(param_1 + 0x90))[0x28] < 1) goto LAB_14373c91a;
  bVar8 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x3c0))();
  plVar15 = *(longlong **)(param_1 + 0x90);
  uVar18 = (*(uint *)((longlong)plVar15 + 0x13c) & 2) << 0x10 | (uint)bVar8 << 4;
  if ((*(byte *)((longlong)plVar15 + 0x155) & 8) != 0) {
    bVar9 = (**(code **)(*plVar15 + 0x3b8))();
    if ((*(byte *)((longlong)&DAT_14c873430 + (ulonglong)((uint)bVar9 * 0x30) + 2) & 0x40) == 0) {
      uVar18 = uVar18 | 0x1000000;
    }
    else {
      uVar18 = (uint)bVar8 << 4 | 0x20000;
    }
  }
  plVar15 = *(longlong **)(param_1 + 0x90);
  uVar10 = *(uint *)((longlong)plVar15 + 0x13c);
  bVar8 = (byte)DAT_14c760da4 & 0x1f;
  lVar14 = plVar15[0x28];
  local_75 = (**(code **)(*plVar15 + 0x3b8))(plVar15);
  lVar12 = *(longlong *)(param_1 + 0x90);
  local_78 = *(undefined1 *)(lVar12 + 0x158);
  bStack_a5 = (byte)(((uVar10 & 4) << 0x16) >> 0x18) | (byte)(uVar18 >> 0x18);
  bVar4 = bStack_a5;
  local_a8 = (byte)uVar18 | 9;
  bVar9 = local_a8;
  uStack_a7 = (undefined1)(uVar18 >> 8);
  uVar2 = uStack_a7;
  bStack_a6 = (byte)(uVar18 >> 0x10);
  bVar3 = bStack_a6;
  uStack_a4 = 0;
  uVar5 = uStack_a4;
  uStack_a3 = 0;
  uVar6 = uStack_a3;
  uStack_a2 = 0;
  uVar7 = uStack_a2;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_77 = 0x301;
  uStack_a0 = 1;
  uStack_9e = 0;
  uStack_9c = (undefined4)*(undefined8 *)(lVar12 + 0x144);
  uStack_98 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x144) >> 0x20);
  uStack_94 = (undefined4)*(undefined8 *)(lVar12 + 0x14c);
  uStack_90 = (uint)((ulonglong)*(undefined8 *)(lVar12 + 0x14c) >> 0x20);
  local_88 = 0;
  local_70 = 0x70;
  local_68 = L"FTextureRenderTargetCubeResource";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_8c = ~(-1 << bVar8);
  local_84 = CONCAT44((int)lVar14,(int)lVar14);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  plVar15 = (longlong *)(param_1 + 0x10);
  if (plVar15 == &local_b0) {
LAB_14373c507:
    lVar12 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar10 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar8 = *(byte *)(local_b0 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar12;
          plVar16 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar8 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar16;
              LOCK();
              bVar19 = plVar16 != DAT_14ca843c0;
              plVar13 = plVar11;
              if (bVar19) {
                plVar16 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar11 = (longlong)plVar13;
              LOCK();
              bVar19 = plVar13 != DAT_14ca843c8;
              plVar16 = plVar11;
              if (bVar19) {
                plVar13 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
  else {
    lVar12 = *plVar15;
    *plVar15 = local_b0;
    local_b0 = 0;
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar10 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar10 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar8 = *(byte *)(lVar12 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar12;
          plVar16 = DAT_14ca843c0;
          plVar13 = DAT_14ca843c8;
          if ((bVar8 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar16;
              LOCK();
              bVar19 = plVar16 != DAT_14ca843c0;
              plVar13 = plVar11;
              if (bVar19) {
                plVar16 = DAT_14ca843c0;
                plVar13 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar13;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar11 = (longlong)plVar13;
              LOCK();
              bVar19 = plVar13 != DAT_14ca843c8;
              plVar16 = plVar11;
              if (bVar19) {
                plVar13 = DAT_14ca843c8;
                plVar16 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar16;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
      goto LAB_14373c507;
    }
  }
  uVar10 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  *(uint *)(param_1 + 0x88) = uVar10;
  *(uint *)(param_1 + 0x8c) = uVar10;
  plVar16 = *(longlong **)(param_1 + 0x10);
  if ((uVar18 >> 0x11 & 1) != 0) {
    uStack_a7 = 0;
    bStack_a6 = 0;
    bStack_a5 = 0;
    uStack_a3 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_a8 = 3;
    uStack_a4 = 1;
    lVar12 = (**(code **)(*plVar16 + 8))(plVar16);
    if (*(byte *)(lVar12 + 0x32) < 5) {
      bStack_a6 = bStack_a6 & 0x8f | (byte)(0x4030502010 >> ((*(byte *)(lVar12 + 0x32) & 7) << 3));
    }
    bStack_a5 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    local_b8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2,plVar16);
    plVar16 = (longlong *)(param_1 + 0xb0);
    if (plVar16 == &local_b0) {
LAB_14373c68a:
      lVar12 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar18 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar18 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar8 = *(byte *)(local_b0 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar12;
            plVar16 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar8 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar16;
                LOCK();
                bVar19 = plVar16 != DAT_14ca843c0;
                plVar13 = plVar11;
                if (bVar19) {
                  plVar16 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar19);
            }
            else {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar19 = plVar13 != DAT_14ca843c8;
                plVar16 = plVar11;
                if (bVar19) {
                  plVar13 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar19);
            }
          }
        }
      }
    }
    else {
      lVar12 = *plVar16;
      *plVar16 = local_b0;
      local_b0 = 0;
      if (lVar12 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar12 + 8);
        uVar18 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar18 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar12 + 8);
          LOCK();
          uVar18 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar18 >> 0x1e & 1) == 0) {
            bVar8 = *(byte *)(lVar12 + 0xd);
            plVar11 = (longlong *)FUN_14001cc68(0x10,8);
            plVar11[1] = lVar12;
            plVar16 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c8;
            if ((bVar8 & 2) == 0) {
              do {
                *plVar11 = (longlong)plVar16;
                LOCK();
                bVar19 = plVar16 != DAT_14ca843c0;
                plVar13 = plVar11;
                if (bVar19) {
                  plVar16 = DAT_14ca843c0;
                  plVar13 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar13;
                UNLOCK();
              } while (bVar19);
            }
            else {
              do {
                *plVar11 = (longlong)plVar13;
                LOCK();
                bVar19 = plVar13 != DAT_14ca843c8;
                plVar16 = plVar11;
                if (bVar19) {
                  plVar13 = DAT_14ca843c8;
                  plVar16 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar16;
                UNLOCK();
              } while (bVar19);
            }
          }
        }
        goto LAB_14373c68a;
      }
    }
    plVar16 = (longlong *)*plVar15;
  }
  plVar15 = *(longlong **)(param_1 + 0x90);
  if (*(longlong *)(plVar15[0x25] + 0x10) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))
              (DAT_14ca83900,&DAT_14ca85100,*(longlong *)(plVar15[0x25] + 0x10),plVar16);
    plVar15 = *(longlong **)(param_1 + 0x90);
  }
  bVar8 = (byte)DAT_14c760da4 & 0x1f;
  lVar14 = plVar15[0x28];
  local_75 = (**(code **)(*plVar15 + 0x3b8))(plVar15);
  lVar12 = *(longlong *)(param_1 + 0x90);
  local_78 = *(undefined1 *)(lVar12 + 0x158);
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_77 = 1;
  uStack_a0 = 1;
  uStack_9e = 0;
  uStack_9c = (undefined4)*(undefined8 *)(lVar12 + 0x144);
  uStack_98 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x144) >> 0x20);
  uStack_94 = (undefined4)*(undefined8 *)(lVar12 + 0x14c);
  uStack_90 = (uint)((ulonglong)*(undefined8 *)(lVar12 + 0x14c) >> 0x20);
  local_88 = 0;
  local_70 = 0x70;
  local_68 = L"FTextureRenderTargetCubeResource";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_a8 = bVar9;
  uStack_a7 = uVar2;
  bStack_a6 = bVar3;
  bStack_a5 = bVar4;
  uStack_a4 = uVar5;
  uStack_a3 = uVar6;
  uStack_a2 = uVar7;
  local_8c = ~(-1 << bVar8);
  local_84 = CONCAT44((int)lVar14,(int)lVar14);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100);
  plVar15 = (longlong *)(param_1 + 0x58);
  if (plVar15 == &local_b0) {
LAB_14373c863:
    lVar12 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_b0 + 8);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_b0 + 8);
        LOCK();
        uVar18 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar8 = *(byte *)(local_b0 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar12;
          plVar15 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar8 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar15;
              LOCK();
              bVar19 = plVar15 != DAT_14ca843c0;
              plVar16 = plVar13;
              if (bVar19) {
                plVar15 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar13 = (longlong)plVar16;
              LOCK();
              bVar19 = plVar16 != DAT_14ca843c8;
              plVar15 = plVar13;
              if (bVar19) {
                plVar16 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
  else {
    lVar12 = *plVar15;
    *plVar15 = local_b0;
    local_b0 = 0;
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar18 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar8 = *(byte *)(lVar12 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar12;
          plVar15 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar8 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar15;
              LOCK();
              bVar19 = plVar15 != DAT_14ca843c0;
              plVar16 = plVar13;
              if (bVar19) {
                plVar15 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar13 = (longlong)plVar16;
              LOCK();
              bVar19 = plVar16 != DAT_14ca843c8;
              plVar15 = plVar13;
              if (bVar19) {
                plVar16 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
      goto LAB_14373c863;
    }
  }
  puVar17 = &DAT_14cb0b950;
  do {
    puVar17 = (undefined8 *)*puVar17;
    if (puVar17 == (undefined8 *)0x0) {
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
  } while (puVar17[2] != param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x80) = 1;
LAB_14373c91a:
  lVar12 = FUN_140032b16(0);
  local_a8 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0xf1);
  if (2 < local_a8) {
    local_a8 = *(byte *)(*(longlong *)(*(longlong *)(lVar12 + 0x78) + 0x28) + 1 +
                        (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x90) + 0xf6) * 0x5c);
  }
  uStack_a7 = 1;
  bStack_a6 = 1;
  bStack_a5 = 1;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a0 = 0;
  uStack_9e = 0;
  uStack_9c = 0x7f7fffff;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  lVar14 = FUN_1405d51a2();
  lVar12 = *(longlong *)(param_1 + 0x18);
  if (lVar12 != lVar14) {
    *(longlong *)(param_1 + 0x18) = lVar14;
    if (lVar14 != 0) {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
    }
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar18 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar18 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar18 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar18 >> 0x1e & 1) == 0) {
          bVar8 = *(byte *)(lVar12 + 0xd);
          plVar13 = (longlong *)FUN_14001cc68(0x10,8);
          plVar13[1] = lVar12;
          plVar15 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar8 & 2) == 0) {
            do {
              *plVar13 = (longlong)plVar15;
              LOCK();
              bVar19 = plVar15 != DAT_14ca843c0;
              plVar16 = plVar13;
              if (bVar19) {
                plVar15 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar19);
          }
          else {
            do {
              *plVar13 = (longlong)plVar16;
              LOCK();
              bVar19 = plVar16 != DAT_14ca843c8;
              plVar15 = plVar13;
              if (bVar19) {
                plVar16 = DAT_14ca843c8;
                plVar15 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar15;
              UNLOCK();
            } while (bVar19);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14373cad4 FUN_14373cad4 body=789 status=ok
// SIG undefined FUN_14373cad4(void)

void FUN_14373cad4(longlong param_1,ulonglong *param_2,char param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined8 uStack_ec;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  undefined4 local_d8;
  char *local_d0;
  undefined4 local_c8;
  char local_c0 [16];
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar5 = *(undefined8 **)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 8) != 0) {
    *(undefined8 **)(*(longlong *)(param_1 + 8) + 8) = puVar5;
  }
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = *(undefined8 *)(param_1 + 8);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if (param_3 != '\0') {
    local_b0 = *(undefined8 *)(param_1 + -8);
    local_c0[0] = -1;
    local_c0[1] = -1;
    local_c0[2] = -1;
    local_c0[3] = -1;
    local_c0[4] = -1;
    local_c0[5] = -1;
    local_c0[6] = -1;
    local_c0[7] = -1;
    local_c0[8] = -1;
    local_c0[9] = -1;
    local_c0[10] = -1;
    local_c0[0xb] = -1;
    local_a8 = 1;
    local_a4 = 0x100000000000;
    local_9c = 0;
    local_90 = 0;
    uStack_f0 = 1;
    local_f8 = local_c0;
    FUN_144760590(param_2,&local_f8,0);
    FUN_145d87ef6(param_2,*(undefined8 *)(param_1 + -8),0,0);
    local_b0 = *(undefined8 *)(param_1 + -8);
    local_c0[0] = -1;
    local_c0[1] = -1;
    local_c0[2] = -1;
    local_c0[3] = -1;
    local_c0[4] = -1;
    local_c0[5] = -1;
    local_c0[6] = -1;
    local_c0[7] = -1;
    local_c0[8] = -1;
    local_c0[9] = -1;
    local_c0[10] = -1;
    local_c0[0xb] = -1;
    local_a8 = 1;
    local_a4 = 0x8000001000;
    local_9c = 0;
    local_90 = 0;
    local_78 = *(undefined8 *)(param_1 + -0x50);
    local_88 = 0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_70 = 1;
    local_6c = 0x200000000000;
    local_64 = 0;
    local_58 = 0;
    local_c8 = 2;
    local_d0 = local_c0;
    FUN_144760590(param_2,&local_d0,0);
    lVar3 = 0x68;
    do {
      if (local_c0[lVar3] == '\x01') {
        local_c0[lVar3] = '\0';
      }
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != -8);
    uStack_f0 = DAT_14c9a52a0;
    local_f8 = (char *)DAT_14c9a5298;
    uStack_ec = DAT_14c9a5298;
    uStack_e4 = DAT_14c9a52a0;
    uStack_e0 = DAT_14c9a5298;
    local_d8 = DAT_14c9a52a0;
    iVar6 = 0;
    do {
      uVar1 = *(undefined8 *)(param_1 + -0x50);
      uVar2 = *(undefined8 *)(param_1 + -8);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 0xc;
      if ((undefined8 *)param_2[1] < puVar5) {
        FUN_140023dd8(param_2,0x68);
        puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar5 = puVar4 + 0xc;
      }
      *param_2 = (ulonglong)puVar5;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar4;
      param_2[6] = (ulonglong)(puVar4 + 1);
      puVar4[1] = 0;
      *puVar4 = &PTR_LAB_14a289d68;
      *(undefined4 *)(puVar4 + 2) = (undefined4)local_f8;
      *(undefined4 *)((longlong)puVar4 + 0x14) = local_f8._4_4_;
      *(undefined4 *)(puVar4 + 3) = uStack_f0;
      *(undefined4 *)((longlong)puVar4 + 0x1c) = (undefined4)uStack_ec;
      *(undefined4 *)(puVar4 + 4) = uStack_ec._4_4_;
      *(undefined4 *)((longlong)puVar4 + 0x24) = uStack_e4;
      *(undefined4 *)(puVar4 + 5) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar4 + 0x2c) = uStack_e0._4_4_;
      *(undefined4 *)(puVar4 + 6) = local_d8;
      *(undefined4 *)((longlong)puVar4 + 0x34) = 0;
      *(int *)(puVar4 + 7) = iVar6;
      *(undefined8 *)((longlong)puVar4 + 0x3c) = 1;
      *(undefined8 *)((longlong)puVar4 + 0x44) = 0x100000000;
      puVar4[10] = uVar2;
      puVar4[0xb] = uVar1;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 6);
    local_b0 = *(undefined8 *)(param_1 + -8);
    local_c0[0] = -1;
    local_c0[1] = -1;
    local_c0[2] = -1;
    local_c0[3] = -1;
    local_c0[4] = -1;
    local_c0[5] = -1;
    local_c0[6] = -1;
    local_c0[7] = -1;
    local_c0[8] = -1;
    local_c0[9] = -1;
    local_c0[10] = -1;
    local_c0[0xb] = -1;
    local_a8 = 1;
    local_a4 = 0x7000000080;
    local_9c = 0;
    local_90 = 0;
    local_78 = *(undefined8 *)(param_1 + -0x50);
    local_88 = 0xffffffffffffffff;
    local_80 = 0xffffffff;
    local_70 = 1;
    local_6c = 0x7000002000;
    local_64 = 0;
    local_58 = 0;
    local_100 = 2;
    local_108 = local_c0;
    FUN_144760590(param_2,&local_108,0);
    lVar3 = 0x68;
    do {
      if (local_c0[lVar3] == '\x01') {
        local_c0[lVar3] = '\0';
      }
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != -8);
  }
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14373cdea FUN_14373cdea body=1258 status=ok
// SIG undefined FUN_14373cdea(void)

void FUN_14373cdea(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar9 = FUN_1447b4020();
  if (lVar9 == 0) goto LAB_14373cf19;
  lVar10 = FUN_1447b4020(param_1);
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar9 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14373ce43;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14373ce48;
      goto LAB_14373ce7f;
    }
  }
  else {
LAB_14373ce43:
    if (iVar6 != 0x10) {
LAB_14373ce7f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar9 + 0xc60), iVar6 == 2))
        goto LAB_14373ce48;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14373ce48;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_14373cfda;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_14374dad0);
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
LAB_14373cfda:
          puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar17 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar17 + 0x17);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_14373d05a;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_14373d05a:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aae0080;
        puVar17[0x15] = lVar10;
        *(char *)(puVar17 + 0x16) = (char)param_2;
        uVar4 = (undefined4)local_68;
        *(undefined4 *)((longlong)puVar17 + 0xb1) = uVar4;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = local_68._3_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar18 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar6 = 0;
          }
          else {
            uVar18 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar18 = 5;
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
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar5 = 1;
          if ((char)uVar18 != '\x06') {
            uVar5 = uVar18;
          }
          uVar18 = uVar5;
          uVar13 = 0;
        }
        else {
          if ((char)uVar18 == '\x06') {
            uVar18 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar17[0xf] = uVar13;
        puVar17[0x10] = uVar18 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_69 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_69 = 1;
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aae0060;
        local_68 = &LAB_14374fc22;
        local_40 = lVar10;
        local_38 = (char)param_2;
        FUN_14005a792(&DAT_14ca9a440,L"UpdateResourceImmediate",&DAT_14cb0ca44);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_14373cf19;
    }
  }
LAB_14373ce48:
  (*(code *)**(undefined8 **)(lVar10 + 0x60))(lVar10 + 0x60,&DAT_14ca85100,param_2);
LAB_14373cf19:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373d2d6 FUN_14373d2d6 body=1534 status=ok
// SIG undefined FUN_14373d2d6(void)

void FUN_14373d2d6(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auStack_d8 [32];
  byte *local_b8;
  longlong local_b0;
  byte local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined2 uStack_a2;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  uint uStack_90;
  uint local_8c;
  undefined4 local_88;
  longlong local_84;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined1 local_76;
  undefined1 local_75;
  undefined2 local_74;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar11 = *(longlong **)(param_1 + 0x90);
  if ((((int)plVar11[0x28] < 1) || (*(int *)((longlong)plVar11 + 0x144) < 1)) ||
     ((int)plVar11[0x29] < 1)) goto LAB_14373d746;
  uVar5 = (**(code **)(*plVar11 + 0x3c0))();
  plVar11 = *(longlong **)(param_1 + 0x90);
  uVar14 = *(uint *)((longlong)plVar11 + 0x13c) & 2;
  bVar2 = (byte)DAT_14c760da4 & 0x1f;
  lVar8 = plVar11[0x28];
  lVar10 = plVar11[0x29];
  local_75 = (**(code **)(*plVar11 + 0x3b8))(plVar11);
  uVar5 = (uVar5 & 0xff) << 4;
  uVar12 = uVar5 | uVar14 << 0x10 | 9;
  uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x14c);
  uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0x154);
  local_76 = 2;
  local_a8 = (byte)uVar12;
  uStack_a7 = (undefined1)(uVar5 >> 8);
  uStack_a6 = (undefined1)uVar14;
  uStack_a5 = 0;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  local_74 = 0xff00;
  local_7a = 0x1010001;
  uStack_a0 = 1;
  uStack_9e = 0;
  uStack_9c = (undefined4)uVar3;
  uStack_98 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_94 = (undefined4)uVar4;
  uStack_90 = (uint)((ulonglong)uVar4 >> 0x20);
  local_88 = 0;
  local_68 = L"FTextureRenderTargetVolumeResource";
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_8c = ~(-1 << bVar2);
  local_84 = lVar8;
  local_7c = (short)lVar10;
  local_70 = FUN_1431edf91(uVar12,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar8 = local_b0;
  plVar11 = (longlong *)(param_1 + 0x58);
  if (plVar11 == &local_b0) {
LAB_14373d493:
    lVar8 = *plVar11;
  }
  else {
    lVar10 = *plVar11;
    *plVar11 = local_b0;
    local_b0 = 0;
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar10;
          plVar9 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar15) {
                plVar9 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar15 = plVar7 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar15) {
                plVar7 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
      goto LAB_14373d493;
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x10);
  if (lVar10 != lVar8) {
    *(longlong *)(param_1 + 0x10) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if (lVar10 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar10 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar10 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar10 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar10;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar15 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar7;
              if (bVar15) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar7;
              if (bVar15) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  lVar8 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_b0 + 8);
    uVar5 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar5 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_b0 + 8);
      LOCK();
      uVar5 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar5 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_b0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar8;
        plVar11 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar11;
            LOCK();
            bVar15 = plVar11 != DAT_14ca843c0;
            plVar9 = plVar7;
            if (bVar15) {
              plVar11 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar15);
        }
        else {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar15 = plVar9 != DAT_14ca843c8;
            plVar11 = plVar7;
            if (bVar15) {
              plVar9 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar15);
        }
      }
    }
  }
  plVar11 = *(longlong **)(param_1 + 0x10);
  if (uVar14 != 0) {
    uStack_a7 = 0;
    uStack_a6 = 0;
    uStack_a5 = 0;
    uStack_a3 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    uStack_9e = 0;
    uStack_9c = 0;
    local_a8 = 3;
    uStack_a4 = 1;
    lVar8 = (**(code **)(*plVar11 + 8))(plVar11);
    if (*(byte *)(lVar8 + 0x32) < 5) {
      uStack_a6 = (undefined1)(0x4030502010 >> ((*(byte *)(lVar8 + 0x32) & 7) << 3));
    }
    uStack_a5 = 0;
    uStack_a2 = 0;
    uStack_a0 = 0;
    local_b8 = &local_a8;
    (**(code **)(*DAT_14ca83900 + 0x1c0))(DAT_14ca83900,&local_b0,param_2,plVar11);
    plVar11 = (longlong *)(param_1 + 0xa8);
    if (plVar11 == &local_b0) {
LAB_14373d65a:
      lVar8 = local_b0;
      if (local_b0 != 0) {
        LOCK();
        puVar1 = (uint *)(local_b0 + 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_b0 + 8);
          LOCK();
          uVar5 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar5 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(local_b0 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar8;
            plVar11 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar11;
                LOCK();
                bVar15 = plVar11 != DAT_14ca843c0;
                plVar9 = plVar7;
                if (bVar15) {
                  plVar11 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar15);
            }
            else {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar15 = plVar9 != DAT_14ca843c8;
                plVar11 = plVar7;
                if (bVar15) {
                  plVar9 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar15);
            }
          }
        }
      }
    }
    else {
      lVar8 = *plVar11;
      *plVar11 = local_b0;
      local_b0 = 0;
      if (lVar8 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar8 + 8);
        uVar5 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar5 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar8 + 8);
          LOCK();
          uVar5 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar5 >> 0x1e & 1) == 0) {
            bVar2 = *(byte *)(lVar8 + 0xd);
            plVar7 = (longlong *)FUN_14001cc68(0x10,8);
            plVar7[1] = lVar8;
            plVar11 = DAT_14ca843c0;
            plVar9 = DAT_14ca843c8;
            if ((bVar2 & 2) == 0) {
              do {
                *plVar7 = (longlong)plVar11;
                LOCK();
                bVar15 = plVar11 != DAT_14ca843c0;
                plVar9 = plVar7;
                if (bVar15) {
                  plVar11 = DAT_14ca843c0;
                  plVar9 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar9;
                UNLOCK();
              } while (bVar15);
            }
            else {
              do {
                *plVar7 = (longlong)plVar9;
                LOCK();
                bVar15 = plVar9 != DAT_14ca843c8;
                plVar11 = plVar7;
                if (bVar15) {
                  plVar9 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar15);
            }
          }
        }
        goto LAB_14373d65a;
      }
    }
    plVar11 = *(longlong **)(param_1 + 0x10);
  }
  lVar8 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x128) + 0x10);
  if (lVar8 != 0) {
    (**(code **)(*DAT_14ca83900 + 0x178))(DAT_14ca83900,&DAT_14ca85100,lVar8,plVar11);
  }
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
  *(undefined1 *)(param_1 + 0x80) = 1;
LAB_14373d746:
  lVar8 = FUN_140032b16(0);
  local_a8 = *(byte *)(*(longlong *)(param_1 + 0x90) + 0xf1);
  if (2 < local_a8) {
    local_a8 = *(byte *)(*(longlong *)(*(longlong *)(lVar8 + 0x78) + 0x28) + 1 +
                        (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x90) + 0xf6) * 0x5c);
  }
  uStack_a7 = 1;
  uStack_a6 = 1;
  uStack_a5 = 1;
  uStack_a4 = 0;
  uStack_a3 = 0;
  uStack_a2 = 0;
  uStack_a0 = 0;
  uStack_9e = 0;
  uStack_9c = 0x7f7fffff;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = uStack_90 & 0xffffff00;
  lVar10 = FUN_1405d51a2();
  lVar8 = *(longlong *)(param_1 + 0x18);
  if (lVar8 != lVar10) {
    *(longlong *)(param_1 + 0x18) = lVar10;
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar5 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar5 >> 0x1e & 1) == 0) {
          bVar2 = *(byte *)(lVar8 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar8;
          plVar11 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar2 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar11;
              LOCK();
              bVar15 = plVar11 != DAT_14ca843c0;
              plVar9 = plVar7;
              if (bVar15) {
                plVar11 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar15 = plVar9 != DAT_14ca843c8;
              plVar11 = plVar7;
              if (bVar15) {
                plVar9 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14373d8d6 FUN_14373d8d6 body=1764 status=ok
// SIG undefined FUN_14373d8d6(void)

bool FUN_14373d8d6(longlong *param_1,undefined8 *param_2,undefined4 *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  longlong *plVar17;
  uint *puVar18;
  undefined4 uVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((((*param_4 == 0) && (param_4[1] == 0)) && (param_4[2] == 0)) && (param_4[3] == 0)) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_88);
    uVar19 = local_88._4_4_;
    (**(code **)(*param_1 + 0x28))(param_1,&local_b8);
    param_4[0] = 0;
    param_4[1] = 0;
    *(ulonglong *)(param_4 + 2) = CONCAT44(uVar19,local_b8);
  }
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
  lVar12 = (**(code **)(*(longlong *)*puVar11 + 8))();
  bVar3 = *(byte *)(lVar12 + 0x33);
  if ((0x15 < bVar3) || ((0x202400U >> (bVar3 & 0x1f) & 1) == 0)) goto LAB_14373dba5;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1471cf4a8(param_2,0);
  }
  uVar15 = *(undefined8 *)param_4;
  uVar5 = *(undefined8 *)(param_4 + 2);
  local_a8 = param_3[4];
  local_b8 = *param_3;
  uStack_b4 = param_3[1];
  uStack_b0 = param_3[2];
  uStack_ac = param_3[3];
  iVar4 = param_3[5];
  uVar19 = param_3[6];
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar12 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      local_bc = uVar19;
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        bVar22 = DVar9 == DVar10;
      }
      else {
        bVar22 = iVar8 == 0x10;
      }
      uVar19 = local_bc;
      if (!bVar22) goto LAB_14373dab6;
    }
LAB_14373d9e8:
    puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1);
    uVar6 = *puVar11;
    local_88 = (code *)0x0;
    local_80 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_88,5);
    local_88 = (code *)0x6;
    local_80 = CONCAT31(local_80._1_3_,1);
    local_7c = 0x467a0000;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_d8 = param_2;
    local_d0 = &local_88;
    local_98 = uVar15;
    local_90 = uVar5;
    (**(code **)(*DAT_14ca83900 + 0x280))(DAT_14ca83900,uVar6,&local_98,CONCAT44(iVar4 + 1,iVar4));
  }
  else {
    if (iVar8 == 0x10) goto LAB_14373d9e8;
LAB_14373dab6:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar12 + 0xc60), iVar8 == 2))
      goto LAB_14373d9e8;
      if (iVar8 == 1) {
        DVar9 = FUN_140ad26c0();
        DVar10 = GetCurrentThreadId();
        if (DVar9 == DVar10) goto LAB_14373d9e8;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar11 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar14 = (uint *)*puVar11;
      local_bc = uVar19;
      if (puVar14 != (uint *)0x0) goto LAB_14373dc90;
      while( true ) {
        uVar16 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar16 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar16 | 1;
          __tlregdtor(&LAB_14374dad0);
        }
        lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar13 = *(undefined4 **)(lVar12 + 0x310);
        *(undefined8 *)(lVar12 + 0x310) = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar13 = 0xffffffff;
        *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar11 = puVar13;
        FUN_140217a48(puVar11);
        puVar14 = (uint *)*puVar11;
LAB_14373dc90:
        puVar20 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar20 + 0x1d);
        uVar16 = puVar14[0x12];
        if (puVar18 <= puVar14 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
          LOCK();
          uVar2 = *puVar14;
          *puVar14 = *puVar14 + uVar16 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar16) != 0xffffffff) break;
          puVar14 = (uint *)*puVar11;
          *puVar14 = 0xffffffff;
          *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
          puVar14[0x12] = 0;
          *puVar11 = puVar14;
          puVar20 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x1d);
          uVar16 = 0;
          if (puVar18 <= puVar14 + 0x4000) {
            uVar16 = 1;
            goto LAB_14373dd10;
          }
        }
      }
      uVar16 = uVar16 + 1;
LAB_14373dd10:
      *(uint **)(puVar14 + 0x10) = puVar18;
      puVar14[0x12] = uVar16;
      iVar8 = 0;
      FUN_1447247dc(puVar20,0);
      *puVar20 = &PTR_FUN_14aae00d8;
      puVar20[0x15] = param_1 + -10;
      puVar20[0x16] = uVar15;
      puVar20[0x17] = uVar5;
      puVar20[0x18] = param_2;
      *(undefined4 *)(puVar20 + 0x19) = local_b8;
      *(undefined4 *)((longlong)puVar20 + 0xcc) = uStack_b4;
      *(undefined4 *)(puVar20 + 0x1a) = uStack_b0;
      *(undefined4 *)((longlong)puVar20 + 0xd4) = uStack_ac;
      *(undefined4 *)(puVar20 + 0x1b) = local_a8;
      *(int *)((longlong)puVar20 + 0xdc) = iVar4;
      *(undefined4 *)(puVar20 + 0x1c) = local_bc;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar16 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
          uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
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
      if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
      }
      puVar20[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar20[9] = puVar20;
      puVar20[10] = puVar20;
      lVar12 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar12 == 0) {
        uVar7 = 1;
        if ((char)uVar21 != '\x06') {
          uVar7 = uVar21;
        }
        uVar21 = uVar7;
        uVar15 = 0;
      }
      else {
        if ((char)uVar21 == '\x06') {
          uVar21 = *(ulonglong *)(lVar12 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar12 + 0x30);
      }
      puVar20[0xf] = uVar15;
      puVar20[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar20 + 0x1c) = iVar8;
      if (puVar20 == (undefined8 *)0x0) {
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
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
      local_88 = (code *)0x0;
      puVar11 = (undefined8 *)FUN_14001cc68(0x48,8);
      local_78 = SUB82(puVar11,0);
      uStack_76 = (undefined2)((ulonglong)puVar11 >> 0x10);
      uStack_74 = (undefined4)((ulonglong)puVar11 >> 0x20);
      *puVar11 = &PTR_LAB_14aae0090;
      puVar11[1] = param_1 + -10;
      puVar11[2] = uVar15;
      puVar11[3] = uVar5;
      puVar11[4] = param_2;
      *(undefined4 *)(puVar11 + 7) = local_a8;
      *(undefined4 *)(puVar11 + 5) = local_b8;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_b4;
      *(undefined4 *)(puVar11 + 6) = uStack_b0;
      *(undefined4 *)((longlong)puVar11 + 0x34) = uStack_ac;
      *(int *)((longlong)puVar11 + 0x3c) = iVar4;
      *(undefined4 *)(puVar11 + 8) = uVar19;
      if (puVar11 + 1 != (undefined8 *)0x0) {
        local_88 = FUN_14374fe12;
      }
      local_d8 = &local_88;
      FUN_14005a792(&DAT_14ca9a440,L"ReadSurfaceCommand",&DAT_14cb0ca48);
      if (local_88 != (code *)0x0) {
        plVar17 = (longlong *)CONCAT44(uStack_74,CONCAT22(uStack_76,local_78));
        if (plVar17 == (longlong *)0x0) {
          plVar17 = local_68;
        }
        (**(code **)(*plVar17 + 0x10))();
      }
    }
  }
  FUN_14080c2b4();
LAB_14373dba5:
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return bVar3 == 0xd || (bVar3 == 0x15 || bVar3 == 10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373dfbc FUN_14373dfbc body=242 status=ok
// SIG undefined FUN_14373dfbc(void)

void FUN_14373dfbc(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x30);
    lVar6 = (longlong)iVar1;
    if (lVar6 != 0) {
      plVar2 = *(longlong **)(param_1 + 0x28);
      iVar13 = 0;
      bVar5 = *plVar2 == 0;
      iVar10 = 0;
      do {
        lVar8 = (longlong)iVar10;
        iVar4 = iVar10 + 1;
        if (iVar10 + 1 < iVar1) {
          iVar4 = iVar1;
        }
        plVar7 = plVar2 + lVar8 * 2 + 2;
        iVar11 = iVar10;
        lVar9 = lVar8;
        do {
          lVar9 = lVar9 + 1;
          iVar12 = iVar4;
          if (lVar6 <= lVar9) break;
          lVar3 = *plVar7;
          iVar11 = iVar11 + 1;
          plVar7 = plVar7 + 2;
          iVar12 = iVar11;
        } while (bVar5 == (lVar3 == 0));
        if (bVar5 == false) {
          if (iVar13 != iVar10) {
            memmove(plVar2 + (longlong)iVar13 * 2,plVar2 + lVar8 * 2,
                    (longlong)(iVar12 - iVar10) << 4);
          }
          iVar13 = iVar13 + (iVar12 - iVar10);
        }
        bVar5 = (bool)(bVar5 ^ 1);
        iVar10 = iVar12;
      } while (lVar9 < lVar6);
      *(int *)(param_1 + 0x30) = iVar13;
    }
    *(undefined1 *)(param_1 + 0xb1) = 0;
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 14373e0b4 FUN_14373e0b4 body=413 status=ok
// SIG undefined FUN_14373e0b4(void)

void FUN_14373e0b4(longlong param_1,int param_2,char param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0bab8) && (FUN_144b3d300(&DAT_14cb0bab8), DAT_14cb0bab8 == -1)) {
    FUN_146408b70(&DAT_14cb0ba00);
    atexit((_func_5014 *)&LAB_14373e0ae);
    _Init_thread_footer(&DAT_14cb0bab8);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  FUN_144a3e9b6(&DAT_14cb0ba00);
  lVar3 = DAT_14cb0ba28;
  lVar7 = (longlong)DAT_14cb0ba30;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      if (((((((param_5 == 9) || (*(int *)(lVar3 + 0xc + lVar6) == param_5)) &&
             (plVar2 = *(longlong **)(lVar3 + lVar6), plVar2 != (longlong *)0x0)) &&
            (cVar4 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar4 != '\0')) &&
           (((*(char *)(lVar3 + 8 + lVar6) == '\x01' ||
             (cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2), cVar4 != '\0')) &&
            (lVar5 = (**(code **)(*plVar2 + 0x48))(plVar2), lVar5 == param_1)))) &&
          ((param_2 == 2 ||
           ((param_1 != 0 &&
            ((bVar1 = *(byte *)(param_1 + 0x152), bVar1 == 1 ||
             ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))))))) &&
         ((param_2 != 0 && param_3 == '\0' ||
          ((param_3 != '\0' && (cVar4 = (**(code **)(*plVar2 + 0x38))(plVar2), cVar4 != '\0')))))) {
        (**(code **)*plVar2)(plVar2,param_4);
      }
      lVar6 = lVar6 + 0x10;
    } while (lVar7 * 0x10 != lVar6);
  }
  FUN_14373dfbc(&DAT_14cb0ba00);
                    /* WARNING: Could not recover jumptable at 0x00014373e208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  return;
}



// FUNCTION 14373e251 FUN_14373e251 body=69 status=ok
// SIG undefined FUN_14373e251(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e251(void)

{
  _DAT_14cb0bac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bac8,1);
  return;
}



// FUNCTION 14373e296 FUN_14373e296 body=69 status=ok
// SIG undefined FUN_14373e296(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e296(void)

{
  _DAT_14cb0bad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bae0,1);
  return;
}



// FUNCTION 14373e2db FUN_14373e2db body=69 status=ok
// SIG undefined FUN_14373e2db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e2db(void)

{
  _DAT_14cb0baf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0baf8,1);
  return;
}



// FUNCTION 14373e320 FUN_14373e320 body=69 status=ok
// SIG undefined FUN_14373e320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e320(void)

{
  _DAT_14cb0bb08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e362. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bb10,1);
  return;
}



// FUNCTION 14373e365 FUN_14373e365 body=69 status=ok
// SIG undefined FUN_14373e365(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e365(void)

{
  _DAT_14cb0bb20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e3a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bb28,1);
  return;
}



// FUNCTION 14373e3aa FUN_14373e3aa body=69 status=ok
// SIG undefined FUN_14373e3aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e3aa(void)

{
  _DAT_14cb0bb38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bb40,1);
  return;
}



// FUNCTION 14373e3ef FUN_14373e3ef body=69 status=ok
// SIG undefined FUN_14373e3ef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e3ef(void)

{
  _DAT_14cb0bb50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bb58,1);
  return;
}



// FUNCTION 14373e434 FUN_14373e434 body=69 status=ok
// SIG undefined FUN_14373e434(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e434(void)

{
  _DAT_14cb0bb68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bb70,1);
  return;
}



// FUNCTION 14373e479 FUN_14373e479 body=69 status=ok
// SIG undefined FUN_14373e479(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e479(void)

{
  _DAT_14cb0bb80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e4bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bb88,1);
  return;
}



// FUNCTION 14373e4be FUN_14373e4be body=69 status=ok
// SIG undefined FUN_14373e4be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e4be(void)

{
  _DAT_14cb0bb98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014373e500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bba0,1);
  return;
}



// FUNCTION 14373e503 FUN_14373e503 body=106 status=ok
// SIG undefined FUN_14373e503(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e503(void)

{
  _DAT_14cb0bbd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bbd8,1);
  if (DAT_14cb0bbc0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0bbb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14373e56d FUN_14373e56d body=106 status=ok
// SIG undefined FUN_14373e56d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e56d(void)

{
  _DAT_14cb0bc10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bc18,1);
  if (DAT_14cb0bc00 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0bbf0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14373e5d7 FUN_14373e5d7 body=106 status=ok
// SIG undefined FUN_14373e5d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e5d7(void)

{
  _DAT_14cb0bc50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bc58,1);
  if (DAT_14cb0bc40 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0bc30 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14373e641 FUN_14373e641 body=106 status=ok
// SIG undefined FUN_14373e641(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e641(void)

{
  _DAT_14cb0bc90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bc98,1);
  if (DAT_14cb0bc80 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0bc70 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14373e6ac FUN_14373e6ac body=4008 status=ok
// SIG undefined FUN_14373e6ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373e6ac(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  uint *puVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong *plVar28;
  ulonglong uVar29;
  undefined1 auStack_d8 [38];
  undefined2 local_b2;
  undefined8 *local_b0;
  int local_a4;
  ulonglong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined1 local_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  iVar25 = (int)DAT_14c872be0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_2;
  if (*(int *)(*(longlong *)(param_1 + 0x20) + 4) == (int)DAT_14c872be0) goto LAB_14373ea72;
  *(int *)(*(longlong *)(param_1 + 0x20) + 4) = (int)DAT_14c872be0;
  if (*(char *)(param_1 + 0xb) != '\0') {
    local_98 = (longlong *)0x0;
    uStack_90 = 0;
    iVar8 = *(int *)(param_1 + 0x18);
    if (iVar8 < 1) {
      uVar10 = 0;
    }
    else {
      uVar24 = 0;
      uVar10 = 0;
      do {
        lVar22 = *(longlong *)(param_1 + 0x10);
        puVar15 = (uint *)(lVar22 + (longlong)(int)uVar24 * 0x10);
        iVar20 = *(int *)(lVar22 + 4 + (longlong)(int)uVar24 * 0x10);
        if ((((((iVar20 == 0) || (uVar9 = *puVar15, (int)uVar9 < 0)) ||
              (DAT_14c9647dc <= (int)uVar9)) ||
             ((lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar21 == 0
              || (*(int *)(lVar21 + 0x10) != iVar20)))) ||
            ((*(uint *)(lVar21 + 8) >> 0x1c & 1) != 0)) ||
           (lVar21 = *(longlong *)(puVar15 + 2), lVar21 == 0)) {
          iVar20 = ~uVar24 + iVar8;
          if (iVar20 != 0) {
            if (0 < iVar20) {
              iVar20 = 1;
            }
            memmove(puVar15,(void *)(lVar22 + (longlong)(iVar8 - iVar20) * 0x10),
                    (longlong)iVar20 << 4);
            iVar8 = *(int *)(param_1 + 0x18);
          }
          uVar24 = uVar24 - 1;
          *(int *)(param_1 + 0x18) = iVar8 + -1;
          FUN_1401c4f1a((longlong *)(param_1 + 0x10));
        }
        else if ((*(byte **)(lVar21 + 0x20) != (byte *)0x0) &&
                ((**(byte **)(lVar21 + 0x20) & 1) != 0)) {
          FUN_14373e6ac(lVar21,local_b0);
          uVar29 = uStack_90;
          lVar22 = *(longlong *)(lVar21 + 0x20);
          if ((*(int *)(lVar22 + 8) == iVar25) && (*(char *)(lVar22 + 1) != '\0')) {
            if (DAT_14cb0ca1e == '\x01') {
              pbVar16 = (byte *)(lVar22 + 3);
              if (lVar22 == 0) {
                pbVar16 = (byte *)(lVar21 + 9);
              }
              if ((*pbVar16 != 2) && (*pbVar16 < *(byte *)(param_1 + 8))) goto LAB_14373e877;
            }
            if (uVar10 < *(byte *)(lVar22 + 2)) {
              uVar10 = (uint)*(byte *)(lVar22 + 2);
            }
            lVar22 = (longlong)(int)uStack_90;
            uVar9 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar9);
            if (uStack_90._4_4_ < uVar9) {
              FUN_144a79096(&local_98,uVar29 & 0xffffffff);
            }
            local_98[lVar22] = lVar21;
          }
        }
LAB_14373e877:
        uVar24 = uVar24 + 1;
        iVar8 = *(int *)(param_1 + 0x18);
      } while ((int)uVar24 < iVar8);
    }
    plVar27 = local_98;
    bVar1 = *(byte *)(param_1 + 8);
    uVar9 = (uint)bVar1;
    uVar24 = (uint)*(byte *)((longlong)local_b0 + 0x11);
    if (*(byte *)((longlong)local_b0 + 0x11) <= bVar1) {
      uVar24 = (uint)bVar1;
    }
    if (uVar10 < uVar24) {
      uVar10 = uVar24;
    }
    if (uVar10 != bVar1) {
      uVar10 = uVar10 - 1;
      do {
        uVar9 = uVar10 + 1;
        uVar24 = uVar10 & 0xfffffffd;
        uVar10 = uVar9;
      } while (uVar24 == 0);
    }
    *(char *)(*(longlong *)(param_1 + 0x20) + 2) = (char)uVar9;
    *(char *)(*(longlong *)(param_1 + 0x20) + 3) = (char)uVar9;
    uVar10 = (uint)*(byte *)(param_1 + 9);
    if ((int)uVar9 < (int)(uint)*(byte *)(param_1 + 9)) {
      do {
        if ((uVar9 & 0xfffffffd) != 0) {
          *(char *)(*(longlong *)(param_1 + 0x20) + 3) = (char)uVar9 + '\x01';
          uVar10 = (uint)*(byte *)(param_1 + 9);
        }
        uVar9 = uVar9 + 1;
      } while ((int)uVar9 < (int)uVar10);
    }
    uVar10 = DAT_14cb0c060;
    if (*(char *)(param_1 + 0xb) == '\x01') {
      local_a4 = iVar25;
      if (DAT_14cb0ca1d == '\x01') {
        lVar22 = *(longlong *)(param_1 + 0x20);
        pbVar17 = (byte *)(lVar22 + 3);
        pbVar16 = (byte *)(lVar22 + 2);
        if (lVar22 == 0) {
          pbVar17 = (byte *)(param_1 + 9);
          pbVar16 = (byte *)(param_1 + 8);
        }
        bVar1 = *(byte *)(param_1 + 10) >> 4;
        if ((bVar1 & 1) != 0) {
          bVar2 = *pbVar16;
          uVar29 = (ulonglong)bVar2;
          if ((bVar2 == *pbVar17) &&
             (uVar24 = *(byte *)(param_1 + 10) >> 5 & 1, (char)uVar24 == '\0')) {
            uVar24 = (uint)*pbVar17 << 8 | (bVar1 & 1) << 0x18 | uVar24 << 0x10 | (uint)bVar2;
            lVar22 = (longlong)(int)DAT_14cb0c060;
            local_a0 = uVar29;
            if (0 < lVar22) {
              lVar21 = 0;
              do {
                if (uVar24 == *(uint *)(DAT_14cb0c050 + lVar21 * 0x10)) {
                  plVar27 = *(longlong **)(lVar21 * 0x10 + DAT_14cb0c050 + 8);
                  if ((int)uStack_90 != 0) {
                    plVar28 = local_98;
                    do {
                      lVar23 = *(longlong *)(*plVar28 + 0x20);
                      if ((lVar23 == 0) || (*(char *)(lVar23 + 1) != '\x02')) {
                        lVar23 = 0;
                      }
                      else {
                        lVar23 = *(longlong *)(lVar23 + 0x10);
                      }
                      if (lVar23 != *plVar27) {
                        if ((longlong)(int)plVar27[2] == 0) goto LAB_14373ea08;
                        lVar23 = 0;
                        while (*(longlong *)(plVar27[1] + lVar23) != *plVar28) {
                          lVar23 = lVar23 + 8;
                          if ((longlong)(int)plVar27[2] * 8 == lVar23) goto LAB_14373ea08;
                        }
                      }
                      plVar28 = plVar28 + 1;
                      if (plVar28 == local_98 + (int)uStack_90) break;
                    } while( true );
                  }
                  if (plVar27 != (longlong *)0x0) goto LAB_14373ea1e;
                  break;
                }
LAB_14373ea08:
                lVar21 = lVar21 + 1;
              } while (lVar21 != lVar22);
            }
            if (DAT_14cb0c060 == DAT_14cb0c058) {
              puVar11 = (undefined8 *)FUN_14001cc68(0x28,0x10);
              DAT_14cb0c058 = uVar10 + 1;
              *puVar11 = 0;
              puVar11[1] = 0;
              puVar11[2] = 0;
              puVar11[3] = 0;
              puVar11[4] = 0;
              if (DAT_14cb0c05c < DAT_14cb0c058) {
                FUN_147d7acd6(uVar10);
              }
              lVar21 = DAT_14cb0c050;
              *(undefined4 *)(DAT_14cb0c050 + lVar22 * 0x10) = 0;
              *(undefined8 **)(lVar21 + 8 + lVar22 * 0x10) = puVar11;
            }
            *(uint *)(DAT_14cb0c050 + (longlong)(int)DAT_14cb0c060 * 0x10) = uVar24;
            lVar22 = (longlong)(int)DAT_14cb0c060;
            DAT_14cb0c060 = DAT_14cb0c060 + 1;
            plVar27 = *(longlong **)(DAT_14cb0c050 + 8 + lVar22 * 0x10);
            FUN_147d7ac7e(plVar27 + 1,&local_98);
            plVar28 = local_98;
            local_68 = (undefined1 *)0x0;
            local_60 = 0x400000000;
            lVar22 = (longlong)(int)uStack_90;
            if (lVar22 != 0) {
              lVar21 = 0;
              do {
                uVar29 = local_60;
                lVar23 = *(longlong *)(*(longlong *)((longlong)plVar28 + lVar21) + 0x20);
                if (*(char *)(lVar23 + 1) == '\x03') {
                  lVar23 = **(longlong **)(lVar23 + 0x10);
LAB_14373ec8a:
                  if (lVar23 == 0) goto LAB_14373ec95;
                  LOCK();
                  *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
                  UNLOCK();
                }
                else {
                  if (*(char *)(lVar23 + 1) == '\x02' && lVar23 != 0) {
                    lVar23 = *(longlong *)(lVar23 + 0x10);
                    goto LAB_14373ec8a;
                  }
LAB_14373ec95:
                  lVar23 = 0;
                }
                lVar26 = (longlong)(int)local_60;
                uVar10 = (int)local_60 + 1;
                local_60 = CONCAT44(local_60._4_4_,uVar10);
                if (local_60._4_4_ < uVar10) {
                  FUN_14476a5c8(local_88,uVar29 & 0xffffffff);
                }
                puVar12 = local_68;
                if (local_68 == (undefined1 *)0x0) {
                  puVar12 = local_88;
                }
                *(longlong *)(puVar12 + lVar26 * 8) = lVar23;
                lVar21 = lVar21 + 8;
              } while (lVar22 * 8 != lVar21);
            }
            uVar6 = DAT_14cb0ca20;
            uVar5 = DAT_14cb0ca1f;
            local_50 = *(undefined4 *)(local_b0 + 1);
            local_58 = *local_b0;
            bVar1 = *(byte *)(param_1 + 10);
            if ((((bVar1 & 0x40) == 0) ||
                (*(char *)(*(longlong *)(param_1 + 0x20) + 2) != *(char *)(param_1 + 8))) ||
               (DAT_14cb0ca1c == '\0')) {
              uVar10 = (bVar1 & 0x20) * 0x10 + 1;
            }
            else {
              if ((bVar1 & 0x20) == 0) {
                uVar10 = DAT_14cb0bc68;
                if ((DAT_14cb0bc60 != 0x400 || DAT_14c7585d8 != 0) &&
                   ((DAT_14cb0bc60 != 0x800 || (DAT_14c7585dc != 0)))) {
                  uVar10 = DAT_14cb0bc60 | _DAT_14cb0bc64;
                }
              }
              else {
                uVar10 = DAT_14cb0bca8;
                if ((DAT_14cb0bca0 != 0x400 || DAT_14c7585d8 != 0) &&
                   ((DAT_14cb0bca0 != 0x800 || (DAT_14c7585dc != 0)))) {
                  uVar10 = DAT_14cb0bca0 | _DAT_14cb0bca4;
                }
              }
              uVar10 = uVar10 | 0xff;
            }
            local_b2 = *(undefined2 *)(local_b0 + 2);
            uVar4 = *(undefined4 *)((longlong)local_b0 + 0x14);
            puVar11 = (undefined8 *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
            puVar15 = (uint *)*puVar11;
            if (puVar15 != (uint *)0x0) goto LAB_14373f2dc;
            while( true ) {
              uVar24 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar24 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar24 | 1;
                __tlregdtor(&LAB_14374dad0);
              }
              lVar22 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar14 = *(undefined4 **)(lVar22 + 0x310);
              *(undefined8 *)(lVar22 + 0x310) = 0;
              if (puVar14 == (undefined4 *)0x0) {
                puVar14 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar14 = 0xffffffff;
              *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
              puVar14[0x12] = 0;
              *puVar11 = puVar14;
              FUN_140217a48(puVar11);
              puVar15 = (uint *)*puVar11;
LAB_14373f2dc:
              puVar19 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar18 = (uint *)(puVar19 + 0x19);
              uVar24 = puVar15[0x12];
              if (puVar18 <= puVar15 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
                LOCK();
                uVar9 = *puVar15;
                *puVar15 = *puVar15 + uVar24 + 1;
                UNLOCK();
                if ((uVar9 ^ uVar24) != 0xffffffff) break;
                puVar15 = (uint *)*puVar11;
                *puVar15 = 0xffffffff;
                *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
                puVar15[0x12] = 0;
                *puVar11 = puVar15;
                puVar19 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
                puVar18 = (uint *)(puVar19 + 0x19);
                uVar24 = 0;
                if (puVar18 <= puVar15 + 0x4000) {
                  uVar24 = 1;
                  goto LAB_14373f35c;
                }
              }
            }
            uVar24 = uVar24 + 1;
LAB_14373f35c:
            *(uint **)(puVar15 + 0x10) = puVar18;
            puVar15[0x12] = uVar24;
            FUN_1447247dc(puVar19,local_88);
            *puVar19 = &PTR_FUN_14aadf2f0;
            puVar19[0x15] = plVar27;
            puVar19[0x16] = local_58;
            *(undefined4 *)(puVar19 + 0x17) = local_50;
            *(uint *)((longlong)puVar19 + 0xbc) = uVar10;
            *(undefined2 *)(puVar19 + 0x18) = local_b2;
            *(undefined1 *)((longlong)puVar19 + 0xc2) = uVar5;
            *(undefined1 *)((longlong)puVar19 + 0xc3) = uVar6;
            *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar4;
            if ((uVar10 & 0xff) == 0xff) {
              uVar24 = uVar10 >> 10 & 3;
              iVar25 = 0;
              if ((uVar10 >> 9 & 1) == 0 || uVar24 < 2) {
                uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
              }
              else {
                uVar29 = 2;
              }
            }
            else {
              iVar25 = (uVar10 >> 7 & 2 | uVar10 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar10 & 0xff) * 4);
              uVar29 = 5;
            }
            iVar8 = (int)local_a0;
            if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
              iVar8 = (int)local_a0;
            }
            puVar19[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar19[9] = puVar19;
            puVar19[10] = puVar19;
            lVar22 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar22 == 0) {
              uVar7 = 1;
              if ((char)uVar29 != '\x06') {
                uVar7 = uVar29;
              }
              uVar29 = uVar7;
              uVar13 = 0;
            }
            else {
              if ((char)uVar29 == '\x06') {
                uVar29 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
              }
              uVar13 = *(undefined8 *)(lVar22 + 0x30);
            }
            puVar19[0xf] = uVar13;
            puVar19[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar19 + 0x1c) = iVar25;
            *plVar27 = (longlong)puVar19;
            lVar22 = (ulonglong)(uint)(iVar8 << 4) + (ulonglong)(uint)(iVar8 << 7);
            plVar28 = (longlong *)((longlong)&DAT_14cb0c050 + lVar22 + 0x598);
            iVar25 = *(int *)((longlong)&DAT_14cb0c050 + lVar22 + 0x5a0);
            *(uint *)((longlong)&DAT_14cb0c050 + lVar22 + 0x5a0) = iVar25 + 1U;
            if (*(uint *)((longlong)&DAT_14cb0c050 + lVar22 + 0x5a4) < iVar25 + 1U) {
              FUN_1417f52fe(plVar28,iVar25);
              iVar8 = (int)local_a0;
            }
            *(undefined8 **)(*plVar28 + (longlong)iVar25 * 8) = puVar19;
            uVar29 = (ulonglong)(uint)(iVar8 * 0x30);
            if (puVar19 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
              UNLOCK();
            }
            iVar25 = *(int *)((longlong)&DAT_14cb0c090 + uVar29);
            *(uint *)((longlong)&DAT_14cb0c090 + uVar29) = iVar25 + 1U;
            if (*(uint *)((longlong)&DAT_14cb0c090 + uVar29 + 4) < iVar25 + 1U) {
              FUN_14476a5c8(uVar29 + 0x14cb0c068,iVar25);
            }
            lVar22 = *(longlong *)((longlong)&DAT_14cb0c088 + uVar29);
            if (*(longlong *)((longlong)&DAT_14cb0c088 + uVar29) == 0) {
              lVar22 = uVar29 + 0x14cb0c068;
            }
            *(undefined8 **)(lVar22 + (longlong)iVar25 * 8) = puVar19;
            puVar12 = local_88;
            if (local_68 != (undefined1 *)0x0) {
              puVar12 = local_68;
            }
            FUN_144717c65(puVar12,local_60 & 0xffffffff);
            if (local_68 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
LAB_14373ea1e:
            iVar25 = (int)plVar27[4];
            *(uint *)(plVar27 + 4) = iVar25 + 1U;
            if (*(uint *)((longlong)plVar27 + 0x24) < iVar25 + 1U) {
              FUN_144a79096(plVar27 + 3,iVar25);
            }
            *(longlong *)(plVar27[3] + (longlong)iVar25 * 8) = param_1;
            lVar22 = *plVar27;
            *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 1) = 2;
            *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) = lVar22;
            iVar25 = local_a4;
            goto LAB_14373ea5b;
          }
        }
      }
      local_68 = (undefined1 *)0x0;
      local_60 = 0x400000000;
      lVar22 = (longlong)(int)uStack_90;
      if (lVar22 != 0) {
        lVar21 = 0;
        do {
          uVar29 = local_60;
          lVar23 = *(longlong *)(*(longlong *)((longlong)plVar27 + lVar21) + 0x20);
          if (*(char *)(lVar23 + 1) == '\x03') {
            lVar23 = **(longlong **)(lVar23 + 0x10);
LAB_14373eb04:
            if (lVar23 == 0) goto LAB_14373eb0f;
            LOCK();
            *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
            UNLOCK();
          }
          else {
            if (*(char *)(lVar23 + 1) == '\x02' && lVar23 != 0) {
              lVar23 = *(longlong *)(lVar23 + 0x10);
              goto LAB_14373eb04;
            }
LAB_14373eb0f:
            lVar23 = 0;
          }
          lVar26 = (longlong)(int)local_60;
          uVar10 = (int)local_60 + 1;
          local_60 = CONCAT44(local_60._4_4_,uVar10);
          if (local_60._4_4_ < uVar10) {
            FUN_14476a5c8(local_88,uVar29 & 0xffffffff);
          }
          puVar12 = local_68;
          if (local_68 == (undefined1 *)0x0) {
            puVar12 = local_88;
          }
          *(longlong *)(puVar12 + lVar26 * 8) = lVar23;
          lVar21 = lVar21 + 8;
        } while (lVar22 * 8 != lVar21);
      }
      uVar6 = DAT_14cb0ca20;
      uVar5 = DAT_14cb0ca1f;
      local_50 = *(undefined4 *)(local_b0 + 1);
      local_58 = *local_b0;
      bVar1 = *(byte *)(param_1 + 10);
      if ((((bVar1 & 0x40) == 0) ||
          (*(char *)(*(longlong *)(param_1 + 0x20) + 2) != *(char *)(param_1 + 8))) ||
         (DAT_14cb0ca1c == '\0')) {
        uVar10 = (bVar1 & 0x20) * 0x10 + 1;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          uVar10 = DAT_14cb0bc68;
          if ((DAT_14cb0bc60 != 0x400 || DAT_14c7585d8 != 0) &&
             ((DAT_14cb0bc60 != 0x800 || (DAT_14c7585dc != 0)))) {
            uVar10 = DAT_14cb0bc60 | _DAT_14cb0bc64;
          }
        }
        else {
          uVar10 = DAT_14cb0bca8;
          if ((DAT_14cb0bca0 != 0x400 || DAT_14c7585d8 != 0) &&
             ((DAT_14cb0bca0 != 0x800 || (DAT_14c7585dc != 0)))) {
            uVar10 = DAT_14cb0bca0 | _DAT_14cb0bca4;
          }
        }
        uVar10 = uVar10 | 0xff;
      }
      uVar3 = *(undefined2 *)(local_b0 + 2);
      uVar4 = *(undefined4 *)((longlong)local_b0 + 0x14);
      puVar11 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar15 = (uint *)*puVar11;
      if (puVar15 != (uint *)0x0) goto LAB_14373ef08;
      while( true ) {
        uVar24 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar24 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar24 | 1;
          __tlregdtor(&LAB_14374dad0);
        }
        lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar22 + 0x310);
        *(undefined8 *)(lVar22 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar11 = puVar14;
        FUN_140217a48(puVar11);
        puVar15 = (uint *)*puVar11;
LAB_14373ef08:
        puVar19 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar18 = (uint *)(puVar19 + 0x19);
        uVar24 = puVar15[0x12];
        if (puVar18 <= puVar15 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
          LOCK();
          uVar9 = *puVar15;
          *puVar15 = *puVar15 + uVar24 + 1;
          UNLOCK();
          if ((uVar9 ^ uVar24) != 0xffffffff) break;
          puVar15 = (uint *)*puVar11;
          *puVar15 = 0xffffffff;
          *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar11 = puVar15;
          puVar19 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x19);
          uVar24 = 0;
          if (puVar18 <= puVar15 + 0x4000) {
            uVar24 = 1;
            goto LAB_14373ef88;
          }
        }
      }
      uVar24 = uVar24 + 1;
LAB_14373ef88:
      *(uint **)(puVar15 + 0x10) = puVar18;
      puVar15[0x12] = uVar24;
      FUN_1447247dc(puVar19,local_88);
      *puVar19 = &PTR_FUN_14aadf300;
      puVar19[0x15] = param_1;
      puVar19[0x16] = local_58;
      *(undefined4 *)(puVar19 + 0x17) = local_50;
      *(uint *)((longlong)puVar19 + 0xbc) = uVar10;
      *(undefined2 *)(puVar19 + 0x18) = uVar3;
      *(undefined1 *)((longlong)puVar19 + 0xc2) = uVar5;
      *(undefined1 *)((longlong)puVar19 + 0xc3) = uVar6;
      *(undefined4 *)((longlong)puVar19 + 0xc4) = uVar4;
      if ((uVar10 & 0xff) == 0xff) {
        uVar24 = uVar10 >> 10 & 3;
        iVar25 = 0;
        if ((uVar10 >> 9 & 1) == 0 || uVar24 < 2) {
          uVar29 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
        }
        else {
          uVar29 = 2;
        }
      }
      else {
        iVar25 = (uVar10 >> 7 & 2 | uVar10 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar10 & 0xff) * 4);
        uVar29 = 5;
      }
      if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
      }
      puVar19[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar19[9] = puVar19;
      puVar19[10] = puVar19;
      lVar22 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar22 == 0) {
        uVar7 = 1;
        if ((char)uVar29 != '\x06') {
          uVar7 = uVar29;
        }
        uVar29 = uVar7;
        uVar13 = 0;
      }
      else {
        if ((char)uVar29 == '\x06') {
          uVar29 = *(ulonglong *)(lVar22 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar22 + 0x30);
      }
      puVar19[0xf] = uVar13;
      puVar19[0x10] = uVar29 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar19 + 0x1c) = iVar25;
      *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 1) = 2;
      *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10) = puVar19;
      bVar1 = *(byte *)(*(longlong *)(param_1 + 0x20) + 3);
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x20) + 2);
      if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
        plVar27 = (longlong *)((ulonglong)bVar1 * 0x10 + (ulonglong)bVar2 * 0x80 + 0x14cb0c5e8);
      }
      else {
        plVar27 = (longlong *)(&DAT_14cb0c1e8 + (ulonglong)bVar1 * 0x10 + (ulonglong)bVar2 * 0x80);
      }
      iVar8 = (int)plVar27[1];
      *(uint *)(plVar27 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)plVar27 + 0xc) < iVar8 + 1U) {
        FUN_1417f52fe(plVar27,iVar8);
      }
      iVar25 = local_a4;
      *(undefined8 **)(*plVar27 + (longlong)iVar8 * 8) = puVar19;
      uVar29 = (ulonglong)((uint)bVar1 * 0x30);
      if (puVar19 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
        UNLOCK();
      }
      iVar8 = *(int *)((longlong)&DAT_14cb0c090 + uVar29);
      *(uint *)((longlong)&DAT_14cb0c090 + uVar29) = iVar8 + 1U;
      if (*(uint *)((longlong)&DAT_14cb0c090 + uVar29 + 4) < iVar8 + 1U) {
        FUN_14476a5c8(uVar29 + 0x14cb0c068,iVar8);
      }
      lVar22 = *(longlong *)((longlong)&DAT_14cb0c088 + uVar29);
      if (*(longlong *)((longlong)&DAT_14cb0c088 + uVar29) == 0) {
        lVar22 = uVar29 + 0x14cb0c068;
      }
      *(undefined8 **)(lVar22 + (longlong)iVar8 * 8) = puVar19;
      puVar12 = local_88;
      if (local_68 != (undefined1 *)0x0) {
        puVar12 = local_68;
      }
      FUN_144717c65(puVar12,local_60 & 0xffffffff);
      if (local_68 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_14373ea5b:
    if (local_98 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(int *)(*(longlong *)(param_1 + 0x20) + 8) = iVar25;
LAB_14373ea72:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373f656 FUN_14373f656 body=2223 status=ok
// SIG undefined FUN_14373f656(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373f656(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined2 uVar4;
  byte *pbVar5;
  int iVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  int iVar25;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined1 local_88 [32];
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  iVar6 = (int)DAT_14c872be0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar23 = *(longlong *)(param_1 + 0x20);
  iVar25 = *(int *)(lVar23 + 4);
  if (iVar25 != (int)DAT_14c872be0) {
    LOCK();
    iVar22 = *(int *)(lVar23 + 4);
    if (iVar25 == iVar22) {
      *(int *)(lVar23 + 4) = (int)DAT_14c872be0;
      iVar22 = iVar25;
    }
    UNLOCK();
    if (iVar22 != iVar6) {
      if (*(char *)(param_1 + 0xb) != '\0') {
        local_68 = (undefined1 *)0x0;
        local_60 = 0x400000000;
        uVar24 = 0;
        if (*(int *)(param_1 + 0x18) != 0) {
          iVar25 = *(int *)(param_3 + 0x48);
          *(uint *)(param_3 + 0x48) = iVar25 + 1U;
          local_90 = param_2;
          if (*(uint *)(param_3 + 0x4c) < iVar25 + 1U) {
            FUN_147d7bcca(param_3,iVar25);
          }
          lVar23 = *(longlong *)(param_3 + 0x40);
          if (*(longlong *)(param_3 + 0x40) == 0) {
            lVar23 = param_3;
          }
          *(longlong *)(lVar23 + (longlong)iVar25 * 8) = param_1;
          iVar25 = *(int *)(param_1 + 0x18);
          uVar24 = 0;
          if (0 < iVar25) {
            uVar24 = 0;
            uVar10 = 0;
            do {
              lVar23 = *(longlong *)(param_1 + 0x10);
              puVar14 = (uint *)(lVar23 + (longlong)(int)uVar10 * 0x10);
              iVar22 = *(int *)(lVar23 + 4 + (longlong)(int)uVar10 * 0x10);
              if (((((iVar22 == 0) || (uVar11 = *puVar14, (int)uVar11 < 0)) ||
                   (DAT_14c9647dc <= (int)uVar11)) ||
                  ((lVar16 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8),
                   lVar16 == 0 || (*(int *)(lVar16 + 0x10) != iVar22)))) ||
                 (((*(uint *)(lVar16 + 8) >> 0x1c & 1) != 0 ||
                  (lVar16 = *(longlong *)(puVar14 + 2), lVar16 == 0)))) {
                iVar22 = ~uVar10 + iVar25;
                if (iVar22 != 0) {
                  if (0 < iVar22) {
                    iVar22 = 1;
                  }
                  memmove(puVar14,(void *)(lVar23 + (longlong)(iVar25 - iVar22) * 0x10),
                          (longlong)iVar22 << 4);
                  iVar25 = *(int *)(param_1 + 0x18);
                }
                uVar10 = uVar10 - 1;
                *(int *)(param_1 + 0x18) = iVar25 + -1;
                FUN_1401c4f1a((longlong *)(param_1 + 0x10));
              }
              else {
                lVar23 = *(longlong *)(param_3 + 0x40);
                if (*(longlong *)(param_3 + 0x40) == 0) {
                  lVar23 = param_3;
                }
                if ((longlong)*(int *)(param_3 + 0x48) != 0) {
                  lVar17 = 0;
                  do {
                    if (*(longlong *)(lVar23 + lVar17) == lVar16) goto LAB_14373f94b;
                    lVar17 = lVar17 + 8;
                  } while ((longlong)*(int *)(param_3 + 0x48) * 8 != lVar17);
                }
                if ((*(byte **)(lVar16 + 0x20) != (byte *)0x0) &&
                   ((**(byte **)(lVar16 + 0x20) & 1) != 0)) {
                  FUN_14373f656(lVar16,local_90,param_3);
                  uVar19 = local_60;
                  lVar23 = *(longlong *)(lVar16 + 0x20);
                  if ((lVar23 != 0) && ((*(byte *)(lVar23 + 1) & 0xfe) == 2)) {
                    if (uVar24 < *(byte *)(lVar23 + 2)) {
                      uVar24 = (uint)*(byte *)(lVar23 + 2);
                    }
                    puVar20 = *(undefined8 **)(lVar23 + 0x10);
                    if (*(byte *)(lVar23 + 1) == 3) {
                      puVar20 = (undefined8 *)*puVar20;
                    }
                    if (puVar20 == (undefined8 *)0x0) {
                      puVar20 = (undefined8 *)0x0;
                    }
                    else {
                      LOCK();
                      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
                      UNLOCK();
                    }
                    lVar23 = (longlong)(int)local_60;
                    uVar11 = (int)local_60 + 1;
                    local_60 = CONCAT44(local_60._4_4_,uVar11);
                    if (local_60._4_4_ < uVar11) {
                      FUN_14476a5c8(local_88,uVar19 & 0xffffffff);
                    }
                    puVar12 = local_68;
                    if (local_68 == (undefined1 *)0x0) {
                      puVar12 = local_88;
                    }
                    *(undefined8 **)(puVar12 + lVar23 * 8) = puVar20;
                  }
                }
              }
LAB_14373f94b:
              uVar10 = uVar10 + 1;
              iVar25 = *(int *)(param_1 + 0x18);
            } while ((int)uVar10 < iVar25);
          }
          *(int *)(param_3 + 0x48) = *(int *)(param_3 + 0x48) + -1;
          FUN_147d7bdbe(param_3);
          param_2 = local_90;
        }
        bVar3 = *(byte *)(param_1 + 8);
        uVar10 = (uint)bVar3;
        uVar11 = (uint)*(byte *)((longlong)param_2 + 0x11);
        if (*(byte *)((longlong)param_2 + 0x11) <= bVar3) {
          uVar11 = (uint)bVar3;
        }
        if (uVar24 < uVar11) {
          uVar24 = uVar11;
        }
        if (uVar24 != bVar3) {
          uVar24 = uVar24 - 1;
          do {
            uVar10 = uVar24 + 1;
            uVar11 = uVar24 & 0xfffffffd;
            uVar24 = uVar10;
          } while (uVar11 == 0);
        }
        *(char *)(*(longlong *)(param_1 + 0x20) + 2) = (char)uVar10;
        *(char *)(*(longlong *)(param_1 + 0x20) + 3) = (char)uVar10;
        uVar24 = (uint)*(byte *)(param_1 + 9);
        if ((int)uVar10 < (int)(uint)*(byte *)(param_1 + 9)) {
          do {
            if ((uVar10 & 0xfffffffd) != 0) {
              *(char *)(*(longlong *)(param_1 + 0x20) + 3) = (char)uVar10 + '\x01';
              uVar24 = (uint)*(byte *)(param_1 + 9);
            }
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar24);
        }
        if (*(char *)(param_1 + 0xb) == '\x01') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb0ca28) && (FUN_144b3d300(&DAT_14cb0ca28), DAT_14cb0ca28 == -1)) {
            FUN_145c49192();
            atexit((_func_5014 *)&LAB_14374ee9e);
            _Init_thread_footer(&DAT_14cb0ca28);
          }
          uVar8 = DAT_14cb0ca20;
          uVar7 = DAT_14cb0ca1f;
          local_50 = *(undefined4 *)(param_2 + 1);
          local_58 = *param_2;
          bVar3 = *(byte *)(param_1 + 10);
          if ((((bVar3 & 0x40) == 0) ||
              (*(char *)(*(longlong *)(param_1 + 0x20) + 2) != *(char *)(param_1 + 8))) ||
             (DAT_14cb0ca1c == '\0')) {
            uVar24 = (bVar3 & 0x20) * 0x10 + 1;
          }
          else {
            if ((bVar3 & 0x20) == 0) {
              uVar24 = DAT_14cb0bc68;
              if ((DAT_14cb0bc60 != 0x400 || DAT_14c7585d8 != 0) &&
                 ((DAT_14cb0bc60 != 0x800 || (DAT_14c7585dc != 0)))) {
                uVar24 = DAT_14cb0bc60 | _DAT_14cb0bc64;
              }
            }
            else {
              uVar24 = DAT_14cb0bca8;
              if ((DAT_14cb0bca0 != 0x400 || DAT_14c7585d8 != 0) &&
                 ((DAT_14cb0bca0 != 0x800 || (DAT_14c7585dc != 0)))) {
                uVar24 = DAT_14cb0bca0 | _DAT_14cb0bca4;
              }
            }
            uVar24 = uVar24 | 0xff;
          }
          uVar4 = *(undefined2 *)(param_2 + 2);
          local_90 = (undefined8 *)
                     CONCAT44(local_90._4_4_,*(undefined4 *)((longlong)param_2 + 0x14));
          puVar20 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar14 = (uint *)*puVar20;
          if (puVar14 != (uint *)0x0) goto LAB_14373fb5e;
          while( true ) {
            uVar10 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar10 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar10 | 1;
              __tlregdtor(&LAB_14374dad0);
            }
            lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar13 = *(undefined4 **)(lVar23 + 0x310);
            *(undefined8 *)(lVar23 + 0x310) = 0;
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar13 = 0xffffffff;
            *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar20 = puVar13;
            FUN_140217a48(puVar20);
            puVar14 = (uint *)*puVar20;
LAB_14373fb5e:
            puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar21 + 0x19);
            uVar10 = puVar14[0x12];
            if (puVar18 <= puVar14 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
              LOCK();
              uVar11 = *puVar14;
              *puVar14 = *puVar14 + uVar10 + 1;
              UNLOCK();
              if ((uVar11 ^ uVar10) != 0xffffffff) break;
              puVar14 = (uint *)*puVar20;
              *puVar14 = 0xffffffff;
              *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
              puVar14[0x12] = 0;
              *puVar20 = puVar14;
              puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
              puVar18 = (uint *)(puVar21 + 0x19);
              uVar10 = 0;
              if (puVar18 <= puVar14 + 0x4000) {
                uVar10 = 1;
                goto LAB_14373fbde;
              }
            }
          }
          uVar10 = uVar10 + 1;
LAB_14373fbde:
          *(uint **)(puVar14 + 0x10) = puVar18;
          puVar14[0x12] = uVar10;
          FUN_1447247dc(puVar21,local_88);
          *puVar21 = &PTR_FUN_14aadf300;
          puVar21[0x15] = param_1;
          puVar21[0x16] = local_58;
          *(undefined4 *)(puVar21 + 0x17) = local_50;
          *(uint *)((longlong)puVar21 + 0xbc) = uVar24;
          *(undefined2 *)(puVar21 + 0x18) = uVar4;
          *(undefined1 *)((longlong)puVar21 + 0xc2) = uVar7;
          *(undefined1 *)((longlong)puVar21 + 0xc3) = uVar8;
          *(undefined4 *)((longlong)puVar21 + 0xc4) = local_90._0_4_;
          if ((uVar24 & 0xff) == 0xff) {
            uVar10 = uVar24 >> 10 & 3;
            iVar25 = 0;
            if ((uVar24 >> 9 & 1) == 0 || uVar10 < 2) {
              uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar10];
            }
            else {
              uVar19 = 2;
            }
          }
          else {
            iVar25 = (uVar24 >> 7 & 2 | uVar24 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + (ulonglong)(uVar24 & 0xff) * 4);
            uVar19 = 5;
          }
          if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
          }
          puVar21[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar21[9] = puVar21;
          puVar21[10] = puVar21;
          lVar23 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar23 == 0) {
            uVar9 = 1;
            if ((char)uVar19 != '\x06') {
              uVar9 = uVar19;
            }
            uVar19 = uVar9;
            uVar15 = 0;
          }
          else {
            if ((char)uVar19 == '\x06') {
              uVar19 = *(ulonglong *)(lVar23 + 0x38) >> 0x3b;
            }
            uVar15 = *(undefined8 *)(lVar23 + 0x30);
          }
          puVar21[0xf] = uVar15;
          puVar21[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar21 + 0x1c) = iVar25;
          *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 1) = 2;
          *(undefined8 **)(*(longlong *)(param_1 + 0x20) + 0x10) = puVar21;
          bVar3 = *(byte *)(*(longlong *)(param_1 + 0x20) + 3);
          uVar9 = (ulonglong)((*(byte *)(param_1 + 10) & 0x20) == 0);
          uVar19 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x20) + 2);
          LOCK();
          piVar1 = (int *)(&DAT_14cb0c050 +
                          uVar9 * 0x80 + uVar19 * 0x10 + (ulonglong)bVar3 * 2 + 0x34);
          iVar25 = *piVar1;
          *piVar1 = *piVar1 + 1;
          UNLOCK();
          *(undefined8 **)
           ((&DAT_14cb0c050)[uVar9 * 0x80 + uVar19 * 0x10 + (ulonglong)bVar3 * 2 + 0x33] +
           (longlong)iVar25 * 8) = puVar21;
          uVar19 = (ulonglong)((uint)bVar3 * 0x30);
          if (puVar21 == (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)&DAT_14cb0c090 + uVar19);
            iVar25 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar23 = *(longlong *)((longlong)&DAT_14cb0c088 + uVar19);
            if (*(longlong *)((longlong)&DAT_14cb0c088 + uVar19) == 0) {
              lVar23 = uVar19 + 0x14cb0c068;
            }
            *(undefined8 *)(lVar23 + (longlong)iVar25 * 8) = 0;
          }
          else {
            LOCK();
            *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
            UNLOCK();
            LOCK();
            piVar1 = (int *)((longlong)&DAT_14cb0c090 + uVar19);
            iVar25 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar23 = *(longlong *)((longlong)&DAT_14cb0c088 + uVar19);
            if (*(longlong *)((longlong)&DAT_14cb0c088 + uVar19) == 0) {
              lVar23 = uVar19 + 0x14cb0c068;
            }
            *(undefined8 **)(lVar23 + (longlong)iVar25 * 8) = puVar21;
            LOCK();
            *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
            UNLOCK();
            LOCK();
            piVar1 = (int *)(puVar21 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar21)(puVar21,1);
            }
          }
          pbVar5 = *(byte **)(param_1 + 0x20);
          if (((*pbVar5 & 2) == 0) && (0.0 < *(float *)(param_1 + 0xc))) {
            lVar23 = *(longlong *)(pbVar5 + 0x28);
            *pbVar5 = *pbVar5 | 2;
            uVar2 = *(undefined4 *)(param_1 + 0xc);
            LOCK();
            piVar1 = (int *)(lVar23 + 0xb8);
            iVar25 = *piVar1;
            *piVar1 = *piVar1 + 1;
            UNLOCK();
            lVar23 = *(longlong *)(lVar23 + 0xb0);
            lVar16 = (longlong)iVar25 * 0x10;
            *(longlong *)(lVar23 + lVar16) = param_1;
            *(undefined4 *)(lVar23 + 8 + lVar16) = uVar2;
            *(undefined1 *)(lVar23 + 0xc + lVar16) = 1;
            *(undefined2 *)(lVar23 + 0xd + lVar16) = (undefined2)local_58;
            *(undefined1 *)(lVar23 + 0xf + lVar16) = local_58._2_1_;
          }
        }
        puVar12 = local_68;
        if (local_68 == (undefined1 *)0x0) {
          puVar12 = local_88;
        }
        FUN_144717c65(puVar12,local_60 & 0xffffffff);
        if (local_68 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
      LOCK();
      *(int *)(*(longlong *)(param_1 + 0x20) + 8) = iVar6;
      UNLOCK();
      goto LAB_14373f78c;
    }
    lVar23 = *(longlong *)(param_1 + 0x20);
  }
  if (*(int *)(lVar23 + 8) != iVar6) {
    iVar25 = *(int *)(lVar23 + 8);
    while (iVar25 != iVar6) {
      SwitchToThread();
      iVar25 = *(int *)(lVar23 + 8);
    }
  }
LAB_14373f78c:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14373ff06 FUN_14373ff06 body=49 status=ok
// SIG undefined FUN_14373ff06(void)

void FUN_14373ff06(void)

{
  FUN_147d7ae93(DAT_14cb0bcb0,DAT_14cb0bcb8);
  if (DAT_14cb0bcb0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14373ff48 FUN_14373ff48 body=162 status=ok
// SIG undefined FUN_14373ff48(void)

void FUN_14373ff48(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_14cb0bcc8 != 0 || DAT_14cb0bcb8 != 0) {
    FUN_147d7ae93(DAT_14cb0bcb0);
    DAT_14cb0bcb8 = 0;
    if (DAT_14cb0bcbc != 10000) {
      FUN_147d7aebc();
    }
    if (0 < DAT_14cb0bcc8) {
      lVar4 = 0;
      lVar3 = DAT_14cb0bcc0;
      iVar2 = DAT_14cb0bcc8;
      do {
        puVar1 = *(undefined8 **)(lVar3 + lVar4 * 8);
        if (puVar1 != (undefined8 *)0x0) {
          (**(code **)*puVar1)(puVar1,1);
          lVar3 = DAT_14cb0bcc0;
          iVar2 = DAT_14cb0bcc8;
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar2);
    }
    DAT_14cb0bcc8 = 0;
    if (DAT_14cb0bccc != 10000) {
      FUN_147d7af6e();
      return;
    }
  }
  return;
}



// FUNCTION 14373ffea FUN_14373ffea body=69 status=ok
// SIG undefined FUN_14373ffea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14373ffea(void)

{
  _DAT_14cb0bcd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014374002c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bcd8,1);
  return;
}



// FUNCTION 14374002f FUN_14374002f body=69 status=ok
// SIG undefined FUN_14374002f(void)

void FUN_14374002f(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  FUN_14373ff48();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  if (DAT_14cb0bcbc < 10000) {
    FUN_147d7aebc();
  }
  iVar3 = 10000;
  do {
    uVar2 = FUN_147d7b012();
    FUN_1402eb876(uVar2,uVar1);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



// FUNCTION 143740074 FUN_143740074 body=69 status=ok
// SIG undefined FUN_143740074(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143740074(void)

{
  _DAT_14cb0bce0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437400b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bce8,1);
  return;
}



// FUNCTION 1437400b9 FUN_1437400b9 body=371 status=ok
// SIG undefined FUN_1437400b9(void)

void FUN_1437400b9(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14373ff48();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  local_78 = 0;
  uStack_70 = 0;
  iVar5 = 0;
  do {
    iVar6 = 8;
    do {
      puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      uVar2 = uStack_70;
      *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *puVar4 = &PTR_FUN_14aadf330;
      *(undefined4 *)(puVar4 + 1) = 0x1090000;
      lVar7 = (longlong)(int)uStack_70;
      uVar3 = (int)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar3);
      if (uStack_70._4_4_ < uVar3) {
        FUN_147d7b18c(&local_78,uVar2 & 0xffffffff);
      }
      *(undefined8 **)(local_78 + lVar7 * 8) = puVar4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    puVar4 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    *(undefined8 *)((longlong)puVar4 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar4 + 0x14) = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    *puVar4 = &PTR_FUN_14aadf330;
    *(undefined4 *)(puVar4 + 1) = 0x1090000;
    FUN_1402eb876(puVar4,uVar1);
    uVar3 = DAT_14cb0bcc8;
    lVar7 = (longlong)(int)DAT_14cb0bcc8;
    DAT_14cb0bcc8 = DAT_14cb0bcc8 + 1;
    if (DAT_14cb0bccc < DAT_14cb0bcc8) {
      FUN_147d7b18c(&DAT_14cb0bcc0,uVar3);
    }
    *(undefined8 **)(DAT_14cb0bcc0 + lVar7 * 8) = puVar4;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 10000);
  lVar7 = 0;
  do {
    puVar4 = *(undefined8 **)(local_78 + lVar7 * 8);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 8);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374022d FUN_14374022d body=69 status=ok
// SIG undefined FUN_14374022d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374022d(void)

{
  _DAT_14cb0bcf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014374026f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bcf8,1);
  return;
}



// FUNCTION 143740272 FUN_143740272 body=688 status=ok
// SIG undefined FUN_143740272(void)

undefined8 * FUN_143740272(undefined8 *param_1,undefined1 param_2,undefined8 param_3,void *param_4)

{
  *param_1 = param_3;
  memcpy(param_1 + 2,param_4,0x90);
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xac) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xae) = 0;
  param_1[0x16] = 0;
  param_1[0x14] = &PTR_FUN_14a9e5330;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xde) = 0;
  param_1[0x1a] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0xec) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0xee) = 0;
  param_1[0x1e] = 0;
  param_1[0x1c] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x104) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x106) = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = &DAT_14aa6dc00;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x152) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x164) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x166) = 0;
  param_1[0x2d] = 0;
  param_1[0x2b] = &PTR_FUN_14aa50910;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined1 *)(param_1 + 0x32) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1a4) = 0x105;
  *(undefined1 *)((longlong)param_1 + 0x1a6) = 0;
  param_1[0x35] = 0;
  param_1[0x33] = &PTR_FUN_14aa61a50;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1e4) = param_2;
  *(undefined2 *)((longlong)param_1 + 0x1e5) = 1;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0x800000000;
  param_1[0x53] = 0;
  param_1[0x54] = 0x200000000;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0x300000000;
  param_1[0x5f] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x303) = 1;
  *(undefined1 *)((longlong)param_1 + 0x302) = 0xff;
  *(undefined2 *)(param_1 + 0x60) = 0xffff;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 4;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x3c4) = 0xff;
  *(undefined1 *)((longlong)param_1 + 0x3c6) = 0;
  param_1[0x7d] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  *(undefined4 *)(param_1 + 0x7e) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  param_1[0x3b] = &PTR_FUN_14aadae20;
  param_1[0x7f] = param_1 + 0x1a;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  return param_1;
}



// FUNCTION 143740522 FUN_143740522 body=3161 status=ok
// SIG undefined FUN_143740522(void)

/* WARNING: Removing unreachable block (ram,0x000143740b98) */
/* WARNING: Removing unreachable block (ram,0x000143740691) */
/* WARNING: Removing unreachable block (ram,0x000143740b24) */

void FUN_143740522(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined1 local_f0;
  longlong local_e8;
  undefined1 local_e0;
  longlong *local_d0;
  undefined8 *local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar17 = *(int *)(param_1 + 0x81);
  local_d0 = param_2;
  local_b8 = param_3;
  local_b0 = param_4;
  if (iVar17 == 0) {
    if ((local_90 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_98,L"Renderer",1);
    puVar2 = local_98;
    uVar13 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar13,puVar2);
    iVar17 = *(int *)(param_1 + 0x81);
  }
  uVar13 = *(undefined8 *)(*local_d0 + 0x18);
  uVar19 = iVar17 * 4;
  iVar17 = iVar17 * 6;
  local_a0 = param_1 + 0x2b;
  FUN_1408e3634(local_a0,uVar19,1);
  FUN_1408e36f6(param_1 + 0x1a,uVar19,1,1);
  local_a8 = param_1 + 0x33;
  FUN_140964b22(local_a8,uVar19,1);
  plVar1 = param_1 + 0x17;
  iVar6 = *(int *)(param_1 + 0x18);
  if (iVar6 < iVar17) {
    *(int *)(param_1 + 0x18) = iVar17;
    if ((uint)(*(int *)((longlong)param_1 + 0xc4) - iVar6) < (uint)(iVar17 - iVar6)) {
      FUN_1447808da(plVar1);
    }
    memset((void *)((longlong)iVar6 * 4 + *plVar1),0,(longlong)(iVar17 - iVar6) << 2);
  }
  else {
    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    if (iVar17 < iVar6) {
      *(int *)(param_1 + 0x18) = iVar17;
      FUN_144780a3c(plVar1);
    }
  }
  *(bool *)(param_1 + 0x19) = 0xffff < uVar19;
  if (0 < *(int *)(param_1 + 0x81)) {
    local_bc = 0;
    uVar19 = 0;
    lVar20 = 0;
    do {
      lVar12 = param_1[0x80];
      iVar17 = (int)lVar20;
      uVar9 = iVar17 * 4;
      *(uint *)(param_1[0x17] + (longlong)(iVar17 * 6) * 4) = uVar9;
      uVar16 = iVar17 * 4 + 1;
      *(uint *)(param_1[0x17] + (longlong)(iVar17 * 6 + 1) * 4) = uVar16;
      uVar14 = iVar17 * 4 + 2;
      *(uint *)(param_1[0x17] + (longlong)(iVar17 * 6 + 2) * 4) = uVar14;
      *(uint *)(param_1[0x17] + (longlong)(iVar17 * 6 + 3) * 4) = uVar14;
      *(uint *)(param_1[0x17] + (longlong)(iVar17 * 6 + 4) * 4) = uVar16;
      uVar15 = iVar17 * 4 + 3;
      *(uint *)(param_1[0x17] + (longlong)(iVar17 * 6 + 5) * 4) = uVar15;
      fVar24 = *(float *)(lVar12 + lVar20 * 0x28);
      fVar22 = *(float *)(lVar12 + 4 + lVar20 * 0x28);
      fVar4 = *(float *)(lVar12 + 0x10 + lVar20 * 0x28);
      fVar21 = *(float *)(lVar12 + 0x14 + lVar20 * 0x28);
      fVar5 = *(float *)(lVar12 + 0x1c + lVar20 * 0x28);
      fVar25 = *(float *)(lVar12 + 8 + lVar20 * 0x28) + fVar24;
      lVar11 = param_1[0x30];
      uVar18 = (ulonglong)(*(int *)(param_1 + 0x31) * uVar9);
      fVar26 = *(float *)(lVar12 + 0xc + lVar20 * 0x28) + fVar22;
      fVar23 = *(float *)(lVar12 + 0x18 + lVar20 * 0x28) + fVar4;
      *(float *)(lVar11 + uVar18) = fVar25;
      *(float *)(lVar11 + 4 + uVar18) = fVar22;
      *(undefined4 *)(lVar11 + 8 + uVar18) = 0;
      lVar11 = param_1[0x30];
      uVar18 = (ulonglong)(*(int *)(param_1 + 0x31) * uVar16);
      *(float *)(lVar11 + uVar18) = fVar24;
      *(float *)(lVar11 + 4 + uVar18) = fVar22;
      *(undefined4 *)(lVar11 + 8 + uVar18) = 0;
      lVar11 = param_1[0x30];
      uVar18 = (ulonglong)(*(int *)(param_1 + 0x31) * uVar14);
      *(float *)(lVar11 + uVar18) = fVar25;
      *(float *)(lVar11 + 4 + uVar18) = fVar26;
      *(undefined4 *)(lVar11 + 8 + uVar18) = 0;
      lVar11 = param_1[0x30];
      uVar18 = (ulonglong)(*(int *)(param_1 + 0x31) * uVar15);
      *(float *)(lVar11 + uVar18) = fVar24;
      *(float *)(lVar11 + 4 + uVar18) = fVar26;
      *(undefined4 *)(lVar11 + 8 + uVar18) = 0;
      lVar11 = param_1[0x27];
      if (*(char *)(param_1 + 0x2a) == '\x01') {
        lVar10 = (ulonglong)uVar9 * (ulonglong)*(uint *)(param_1 + 0x29);
        *(float *)(lVar11 + lVar10 * 8) = fVar23;
        *(float *)(lVar11 + 4 + lVar10 * 8) = fVar21;
      }
      else {
        fVar24 = ABS(fVar23);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        lVar10 = (ulonglong)uVar9 * (ulonglong)*(uint *)(param_1 + 0x29) * 4;
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar23));
        *(ushort *)(lVar11 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
        fVar24 = ABS(fVar21);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar21));
        *(ushort *)(lVar11 + 2 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
      }
      lVar11 = param_1[0x27];
      if (*(char *)(param_1 + 0x2a) == '\x01') {
        lVar10 = (ulonglong)uVar16 * (ulonglong)*(uint *)(param_1 + 0x29);
        *(float *)(lVar11 + lVar10 * 8) = fVar4;
        *(float *)(lVar11 + 4 + lVar10 * 8) = fVar21;
      }
      else {
        fVar24 = ABS(fVar4);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        lVar10 = (ulonglong)uVar16 * (ulonglong)*(uint *)(param_1 + 0x29) * 4;
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar4));
        *(ushort *)(lVar11 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
        fVar24 = ABS(fVar21);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar21));
        *(ushort *)(lVar11 + 2 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
      }
      fVar21 = fVar21 + fVar5;
      lVar11 = param_1[0x27];
      if (*(char *)(param_1 + 0x2a) == '\x01') {
        lVar10 = (ulonglong)uVar14 * (ulonglong)*(uint *)(param_1 + 0x29);
        *(float *)(lVar11 + lVar10 * 8) = fVar23;
        *(float *)(lVar11 + 4 + lVar10 * 8) = fVar21;
      }
      else {
        fVar24 = ABS(fVar23);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        lVar10 = (ulonglong)uVar14 * (ulonglong)*(uint *)(param_1 + 0x29) * 4;
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar23));
        *(ushort *)(lVar11 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
        fVar24 = ABS(fVar21);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar21));
        *(ushort *)(lVar11 + 2 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
      }
      lVar11 = param_1[0x27];
      if (*(char *)(param_1 + 0x2a) == '\x01') {
        lVar10 = (ulonglong)uVar15 * (ulonglong)*(uint *)(param_1 + 0x29);
        *(float *)(lVar11 + lVar10 * 8) = fVar4;
        *(float *)(lVar11 + 4 + lVar10 * 8) = fVar21;
      }
      else {
        fVar24 = ABS(fVar4);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        lVar10 = (ulonglong)uVar15 * (ulonglong)*(uint *)(param_1 + 0x29) * 4;
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar4));
        *(ushort *)(lVar11 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
        fVar24 = ABS(fVar21);
        if ((uint)fVar24 < 0x47800000) {
          if ((uint)fVar24 < 0x38800000) {
            fVar22 = fVar24 + 0.5;
          }
          else {
            fVar24 = (float)((int)fVar24 + 0x8000fff + (uint)(((uint)fVar24 >> 0xd & 1) != 0) >> 0xd
                            );
            fVar22 = fVar24;
          }
        }
        else {
          fVar22 = (float)((0x7f800000 < (uint)fVar24 | 0x3e) << 9);
        }
        iVar17 = movmskps(fVar24,ZEXT416((uint)fVar21));
        *(ushort *)(lVar11 + 2 + lVar10) = (ushort)(iVar17 << 0xf) | SUB42(fVar22,0);
      }
      lVar11 = (ulonglong)uVar19 << 3;
      lVar10 = 0;
      do {
        lVar8 = param_1[0x26];
        if (*(char *)((longlong)param_1 + 0x151) == '\x01') {
          *(undefined2 *)(lVar8 + lVar11 * 2) = 0x7fff;
          *(undefined2 *)(lVar8 + 2 + lVar11 * 2) = 0;
          *(undefined2 *)(lVar8 + 4 + lVar11 * 2) = 0;
          *(undefined2 *)(lVar8 + 6 + lVar11 * 2) = 0x7fff;
          *(undefined2 *)(lVar8 + 8 + lVar11 * 2) = 0;
          *(undefined2 *)(lVar8 + 10 + lVar11 * 2) = 0;
          *(undefined2 *)(lVar8 + 0xc + lVar11 * 2) = 0x7fff;
          *(undefined2 *)(lVar8 + 0xe + lVar11 * 2) = 0x7fff;
        }
        else {
          *(undefined1 *)(lVar8 + lVar11) = 0x7f;
          *(undefined1 *)(lVar8 + 1 + lVar11) = 0;
          *(undefined1 *)(lVar8 + 2 + lVar11) = 0;
          *(undefined1 *)(lVar8 + 3 + lVar11) = 0x7f;
          *(undefined1 *)(lVar8 + 4 + lVar11) = 0;
          *(undefined1 *)(lVar8 + 5 + lVar11) = 0;
          *(undefined1 *)(lVar8 + 6 + lVar11) = 0x7f;
          *(undefined1 *)(lVar8 + 7 + lVar11) = 0x7f;
        }
        *(undefined4 *)
         (param_1[0x38] + (ulonglong)((uVar19 + (int)lVar10) * *(int *)(param_1 + 0x39))) =
             *(undefined4 *)(lVar12 + lVar20 * 0x28 + 0x24);
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 8;
      } while (lVar10 != 4);
      lVar20 = lVar20 + 1;
      uVar19 = uVar19 + 4;
    } while (lVar20 < *(int *)(param_1 + 0x81));
  }
  puVar2 = param_1 + 0x14;
  local_c8 = param_1 + 0x1a;
  FUN_14006bf18(local_a0,uVar13);
  FUN_140d00208(local_c8,uVar13);
  FUN_14006bf18(local_a8,uVar13);
  FUN_14006bf18(puVar2,uVar13);
  puVar3 = param_1 + 0x3b;
  FUN_1417f485c(puVar3,uVar13);
  uVar7 = *(undefined4 *)(param_1[0x80] + 0x20);
  lVar12 = FUN_1417f4ad4(local_d0);
  *(undefined8 **)(lVar12 + 0xb8) = puVar3;
  *(undefined8 *)(lVar12 + 0xc0) = *param_1;
  *(uint *)(lVar12 + 0xe4) = *(uint *)(lVar12 + 0xe4) & 0xfff03fbf | 0x20000;
  *(undefined4 *)(lVar12 + 0xd0) = uVar7;
  lVar20 = lVar12;
  if (*(longlong *)(lVar12 + 0xa8) != 0) {
    lVar20 = *(longlong *)(lVar12 + 0xa8);
  }
  *(undefined8 **)(lVar20 + 0x18) = puVar2;
  *(undefined8 *)(lVar20 + 0x58) = 0;
  *(undefined4 *)(lVar20 + 0x68) = 0;
  *(int *)(lVar20 + 0x6c) = *(int *)(param_1 + 0x81) * 4 + -1;
  *(undefined8 **)(lVar20 + 8) = &DAT_14cb05598;
  if (0 < *(int *)(param_1 + 0x81)) {
    iVar17 = 0;
    lVar20 = 0x20;
    lVar11 = 0;
    do {
      lVar10 = param_1[0x80];
      if (*(int *)(lVar12 + 0xd0) != *(int *)(lVar10 + lVar20)) {
        if (DAT_14cad8310 == (longlong *)0x0) {
          FUN_1446f470e(&local_98,L"Renderer",1);
          local_c8 = local_98;
          uVar13 = FUN_144a52528();
          DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar13,local_c8);
        }
        plVar1 = local_d0;
        local_e8 = lVar12 + 0xd0;
        local_e0 = param_6;
        local_f0 = param_5;
        local_f8 = lVar12;
        (**(code **)(*DAT_14cad8310 + 0xa8))(DAT_14cad8310,local_d0,local_b8,local_b0);
        uVar7 = *(undefined4 *)(lVar10 + lVar20);
        lVar12 = FUN_1417f4ad4(plVar1);
        *(undefined8 **)(lVar12 + 0xb8) = puVar3;
        *(undefined8 *)(lVar12 + 0xc0) = *param_1;
        *(uint *)(lVar12 + 0xe4) = *(uint *)(lVar12 + 0xe4) & 0xfff03fbf | 0x20000;
        *(undefined4 *)(lVar12 + 0xd0) = uVar7;
        lVar10 = *(longlong *)(lVar12 + 0xa8);
        if (*(longlong *)(lVar12 + 0xa8) == 0) {
          lVar10 = lVar12;
        }
        *(undefined8 **)(lVar10 + 0x18) = puVar2;
        *(undefined8 *)(lVar10 + 0x58) = 0;
        *(undefined4 *)(lVar10 + 0x68) = 0;
        *(int *)(lVar10 + 0x6c) = *(int *)(param_1 + 0x81) * 4 + -1;
        *(undefined8 **)(lVar10 + 8) = &DAT_14cb05598;
        lVar10 = lVar12;
        if (*(longlong *)(lVar12 + 0xa8) != 0) {
          lVar10 = *(longlong *)(lVar12 + 0xa8);
        }
        *(int *)(lVar10 + 0x58) = iVar17;
      }
      lVar10 = *(longlong *)(lVar12 + 0xa8);
      if (*(longlong *)(lVar12 + 0xa8) == 0) {
        lVar10 = lVar12;
      }
      *(int *)(lVar10 + 0x5c) = *(int *)(lVar10 + 0x5c) + 2;
      lVar11 = lVar11 + 1;
      iVar17 = iVar17 + 6;
      lVar20 = lVar20 + 0x28;
    } while (lVar11 < *(int *)(param_1 + 0x81));
  }
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_98,L"Renderer",1);
    uVar13 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar13,local_98);
  }
  local_e8 = lVar12 + 0xd0;
  local_e0 = param_6;
  local_f0 = param_5;
  local_f8 = lVar12;
  (**(code **)(*DAT_14cad8310 + 0xa8))(DAT_14cad8310,local_d0,local_b8,local_b0);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_118);
}



// FUNCTION 143741180 FUN_143741180 body=2552 status=ok
// SIG undefined FUN_143741180(void)

void FUN_143741180(char *param_1,undefined4 param_2,char param_3,char param_4)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined *puVar12;
  byte bVar13;
  uint *puVar14;
  bool bVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  code *local_f0;
  char local_da;
  char local_d9;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  fVar19 = *(float *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = param_2;
  if (*(int *)(param_1 + 0x74) == 0) {
LAB_143741acf:
    lVar10 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x70);
    lVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != *(int *)(param_1 + 0x74) || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)
          ))) goto LAB_143741acf;
      lVar10 = *plVar8;
    }
  }
  local_da = param_3;
  local_d9 = param_4;
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar11 = 0x38;
    lVar9 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (*(longlong *)(lVar5 + -0x38 + lVar11) != 0) {
        puVar14 = (uint *)(lVar5 + lVar11 + -0x30);
        lVar7 = *(longlong *)(lVar5 + lVar11 + -0x28);
        if ((((lVar7 == 0) || (iVar4 = *(int *)(lVar5 + -0x2c + lVar11), iVar4 == 0)) ||
            (uVar3 = *puVar14, (int)uVar3 < 0)) ||
           (((DAT_14c9647dc <= (int)uVar3 ||
             (plVar8 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0)) ||
            (((int)plVar8[2] != iVar4 ||
             (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (*plVar8 == 0)))))))) {
LAB_1437412ca:
          if ((*(longlong *)(lVar5 + -0x18 + lVar11) == 0) &&
             (((*(int *)(lVar5 + lVar11) == 0 ||
               (plVar8 = *(longlong **)(lVar5 + -8 + lVar11), plVar8 == (longlong *)0x0)) ||
              (cVar6 = (**(code **)(*plVar8 + 0x30))(), cVar6 == '\0')))) goto LAB_1437412ec;
        }
        else {
          lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),lVar7,1);
          if (lVar7 == 0) goto LAB_1437412ca;
        }
        FUN_147a3f90a(*(undefined8 *)(lVar5 + -0x38 + lVar11),&local_b0,
                      *(undefined4 *)(param_1 + 0xc));
        local_b8 = local_a0;
        local_c8 = local_b0;
        uStack_c4 = uStack_ac;
        uStack_c0 = uStack_a8;
        uStack_bc = uStack_a4;
        lVar7 = *(longlong *)(lVar5 + -0x28 + lVar11);
        if (((lVar7 != 0) && (iVar4 = *(int *)(lVar5 + -0x2c + lVar11), iVar4 != 0)) &&
           ((uVar3 = *puVar14, -1 < (int)uVar3 &&
            ((((int)uVar3 < DAT_14c9647dc &&
              (plVar8 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar8 != (longlong *)0x0)) &&
             (((int)plVar8[2] == iVar4 &&
              (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))))))) {
          lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),lVar7,1);
          if (lVar7 != 0) {
            local_88 = local_b8;
            local_98 = local_c8;
            uStack_94 = uStack_c4;
            uStack_90 = uStack_c0;
            uStack_8c = uStack_bc;
            FUN_1478a9ad7(puVar14,&local_98);
          }
        }
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(lVar5 + -0x10 + lVar11);
          if (lVar7 == 0) {
            lVar7 = FUN_1408d67c1(*(undefined8 *)(lVar10 + 0x10),
                                  *(undefined8 *)(lVar5 + -0x18 + lVar11),3);
            *(longlong *)(lVar5 + -0x10 + lVar11) = lVar7;
            if (lVar7 == 0) goto LAB_1437413e2;
          }
          iVar4 = *(int *)(lVar7 + 0x44);
          *(undefined8 *)(lVar10 + 0x10 + (longlong)iVar4) = local_a0;
          puVar1 = (undefined4 *)(lVar10 + iVar4);
          *puVar1 = local_b0;
          puVar1[1] = uStack_ac;
          puVar1[2] = uStack_a8;
          puVar1[3] = uStack_a4;
        }
LAB_1437413e2:
        if ((*(int *)(lVar5 + lVar11) != 0) &&
           (plVar8 = *(longlong **)(lVar5 + -8 + lVar11), plVar8 != (longlong *)0x0)) {
          local_88 = local_a0;
          local_98 = local_b0;
          uStack_94 = uStack_ac;
          uStack_90 = uStack_a8;
          uStack_8c = uStack_a4;
          (**(code **)(*plVar8 + 0x60))(plVar8,&local_98);
        }
      }
LAB_1437412ec:
      lVar9 = lVar9 + 1;
      lVar11 = lVar11 + 0x40;
    } while (lVar9 < *(int *)(param_1 + 0x28));
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar9 = 0x38;
    lVar11 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(lVar5 + -0x38 + lVar9) != 0) {
        puVar14 = (uint *)(lVar5 + lVar9 + -0x30);
        lVar7 = *(longlong *)(lVar5 + lVar9 + -0x28);
        if (((((lVar7 == 0) || (iVar4 = *(int *)(lVar5 + -0x2c + lVar9), iVar4 == 0)) ||
             (uVar3 = *puVar14, (int)uVar3 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar3 ||
             (plVar8 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0)))) ||
           (((int)plVar8[2] != iVar4 ||
            (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (*plVar8 == 0)))))) {
LAB_1437414e2:
          if ((*(longlong *)(lVar5 + -0x18 + lVar9) == 0) &&
             (((*(int *)(lVar5 + lVar9) == 0 ||
               (plVar8 = *(longlong **)(lVar5 + -8 + lVar9), plVar8 == (longlong *)0x0)) ||
              (cVar6 = (**(code **)(*plVar8 + 0x30))(), cVar6 == '\0')))) goto LAB_14374159c;
        }
        else {
          lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),lVar7,1);
          if (lVar7 == 0) goto LAB_1437414e2;
        }
        uVar16 = FUN_1449e6cbc(*(undefined8 *)(lVar5 + -0x38 + lVar9),*(undefined4 *)(param_1 + 0xc)
                              );
        lVar7 = *(longlong *)(lVar5 + -0x28 + lVar9);
        if (((((lVar7 != 0) && (iVar4 = *(int *)(lVar5 + -0x2c + lVar9), iVar4 != 0)) &&
             (uVar3 = *puVar14, -1 < (int)uVar3)) &&
            (((int)uVar3 < DAT_14c9647dc &&
             (plVar8 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0)))) &&
           (((int)plVar8[2] == iVar4 &&
            (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
          lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),lVar7,1);
          if (lVar7 != 0) {
            FUN_1478a9a6f(puVar14,uVar16);
          }
        }
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(lVar5 + -0x10 + lVar9);
          if (lVar7 == 0) {
            lVar7 = FUN_145c2f0d0(*(undefined8 *)(lVar10 + 0x10),
                                  *(undefined8 *)(lVar5 + -0x18 + lVar9),3);
            *(longlong *)(lVar5 + -0x10 + lVar9) = lVar7;
            if (lVar7 == 0) goto LAB_143741583;
          }
          *(undefined4 *)(lVar10 + *(int *)(lVar7 + 0x44)) = uVar16;
        }
LAB_143741583:
        if ((*(int *)(lVar5 + lVar9) != 0) &&
           (plVar8 = *(longlong **)(lVar5 + -8 + lVar9), plVar8 != (longlong *)0x0)) {
          (**(code **)(*plVar8 + 0x60))(plVar8,uVar16);
        }
      }
LAB_14374159c:
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0x40;
    } while (lVar11 < *(int *)(param_1 + 0x38));
  }
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar9 = 0x38;
    lVar11 = 0;
    do {
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(lVar5 + -0x38 + lVar9) != 0) {
        puVar14 = (uint *)(lVar5 + lVar9 + -0x30);
        lVar7 = *(longlong *)(lVar5 + lVar9 + -0x28);
        if ((((lVar7 == 0) || (iVar4 = *(int *)(lVar5 + -0x2c + lVar9), iVar4 == 0)) ||
            (uVar3 = *puVar14, (int)uVar3 < 0)) ||
           (((DAT_14c9647dc <= (int)uVar3 ||
             (plVar8 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             plVar8 == (longlong *)0x0)) ||
            (((int)plVar8[2] != iVar4 ||
             (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 || (*plVar8 == 0)))))))) {
LAB_1437416a0:
          if ((*(longlong *)(lVar5 + -0x18 + lVar9) == 0) &&
             (((*(int *)(lVar5 + lVar9) == 0 ||
               (plVar8 = *(longlong **)(lVar5 + -8 + lVar9), plVar8 == (longlong *)0x0)) ||
              (cVar6 = (**(code **)(*plVar8 + 0x30))(), cVar6 == '\0')))) goto LAB_14374179b;
        }
        else {
          lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),lVar7,1);
          if (lVar7 == 0) goto LAB_1437416a0;
        }
        lVar7 = *(longlong *)(lVar5 + -0x38 + lVar9);
        (**(code **)(*(longlong *)(lVar7 + 0x28) + 0x50))
                  (lVar7 + 0x28,&local_b0,*(undefined4 *)(param_1 + 0xc));
        local_d8 = local_b0;
        uStack_d4 = uStack_ac;
        uStack_d0 = uStack_a8;
        uStack_cc = uStack_a4;
        lVar7 = *(longlong *)(lVar5 + -0x28 + lVar9);
        if (((lVar7 != 0) && (iVar4 = *(int *)(lVar5 + -0x2c + lVar9), iVar4 != 0)) &&
           ((uVar3 = *puVar14, -1 < (int)uVar3 &&
            ((((int)uVar3 < DAT_14c9647dc &&
              (plVar8 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar8 != (longlong *)0x0)) &&
             (((int)plVar8[2] == iVar4 &&
              (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))))))) {
          lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),lVar7,1);
          if (lVar7 != 0) {
            local_98 = local_d8;
            uStack_94 = uStack_d4;
            uStack_90 = uStack_d0;
            uStack_8c = uStack_cc;
            FUN_1478a9b49(puVar14,&local_98);
          }
        }
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(lVar5 + -0x10 + lVar9);
          if (lVar7 == 0) {
            lVar7 = FUN_1408d67c1(*(undefined8 *)(lVar10 + 0x10),
                                  *(undefined8 *)(lVar5 + -0x18 + lVar9),3);
            *(longlong *)(lVar5 + -0x10 + lVar9) = lVar7;
            if (lVar7 == 0) goto LAB_143741775;
          }
          puVar1 = (undefined4 *)(lVar10 + *(int *)(lVar7 + 0x44));
          *puVar1 = local_b0;
          puVar1[1] = uStack_ac;
          puVar1[2] = uStack_a8;
          puVar1[3] = uStack_a4;
        }
LAB_143741775:
        if ((*(int *)(lVar5 + lVar9) != 0) &&
           (plVar8 = *(longlong **)(lVar5 + -8 + lVar9), plVar8 != (longlong *)0x0)) {
          local_98 = local_b0;
          uStack_94 = uStack_ac;
          uStack_90 = uStack_a8;
          uStack_8c = uStack_a4;
          (**(code **)(*plVar8 + 0x60))(plVar8,&local_98);
        }
      }
LAB_14374179b:
      lVar11 = lVar11 + 1;
      lVar9 = lVar9 + 0x40;
    } while (lVar11 < *(int *)(param_1 + 0x48));
  }
  if (lVar10 == 0 || *(longlong *)(param_1 + 0x78) == 0) goto LAB_1437418bc;
  lVar9 = *(longlong *)(param_1 + 0x90);
  if (lVar9 == 0) {
    lVar9 = FUN_145c2ef20(*(undefined8 *)(lVar10 + 0x10),*(longlong *)(param_1 + 0x78),3);
    *(longlong *)(param_1 + 0x90) = lVar9;
    if (lVar9 == 0) {
      lVar9 = FUN_147b82e6e(*(undefined8 *)(lVar10 + 0x10),*(undefined8 *)(param_1 + 0x78),3);
      *(longlong *)(param_1 + 0x90) = lVar9;
      if (lVar9 == 0) goto LAB_1437418bc;
    }
  }
  bVar13 = param_1[1];
  puVar12 = *(undefined **)(lVar9 + 8);
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
  bVar13 = bVar13 >> 1 & 1;
  if (DAT_14c951d30 == 0) {
    bVar15 = puVar12 != (undefined *)0x0;
    if (puVar12 != &DAT_14c951d28 && bVar15) {
      do {
        puVar12 = *(undefined **)(puVar12 + 0x30);
        bVar15 = puVar12 != (undefined *)0x0;
        if (puVar12 == &DAT_14c951d28) break;
      } while (puVar12 != (undefined *)0x0);
    }
    if (!bVar15) goto LAB_14374189b;
  }
  else if ((*(ulonglong *)(puVar12 + 0x18) & DAT_14c951d30) == 0) {
LAB_14374189b:
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x70);
    (**(code **)(*plVar8 + 0x1f8))
              (plVar8,lVar10 + *(int *)(*(longlong *)(param_1 + 0x90) + 0x44),bVar13);
    goto LAB_1437418bc;
  }
  *(byte *)(lVar10 + *(int *)(lVar9 + 0x44)) = bVar13;
LAB_1437418bc:
  if (local_da != '\0') {
    fVar2 = *(float *)(param_1 + 0xc);
    if ((param_1[1] & 2U) == 0) {
      if (*param_1 == '\0') {
        fVar17 = *(float *)(param_1 + 4);
      }
      else {
        fVar17 = 0.0;
        if (*param_1 == '\x01') {
          fVar17 = (float)FUN_147d7359c(param_1);
        }
      }
      fVar18 = fVar19;
      fVar19 = fVar2;
      if ((fVar2 == fVar17) && (!NAN(fVar2) && !NAN(fVar17))) {
        fVar19 = fVar2 + 0.0001;
      }
    }
    else {
      fVar18 = fVar2;
      if ((fVar2 == 0.0) && (!NAN(fVar2))) {
        fVar18 = fVar2 + -0.0001;
      }
    }
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar10 = 0xc;
      lVar9 = 0;
      do {
        lVar11 = *(longlong *)(param_1 + 0x10);
        fVar2 = *(float *)(lVar11 + -0xc + lVar10);
        if ((param_1[1] & 2U) == 0) {
          if ((fVar18 <= fVar2) && (fVar2 < fVar19)) {
LAB_143741962:
            if ((*(longlong *)(lVar11 + lVar10) != 0) &&
               (iVar4 = *(int *)(lVar11 + -4 + lVar10), iVar4 != 0)) {
              puVar14 = (uint *)(lVar11 + lVar10 + -8);
              uVar3 = *puVar14;
              if ((-1 < (int)uVar3) &&
                 ((((((int)uVar3 < DAT_14c9647dc &&
                     (plVar8 = (longlong *)
                               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                     plVar8 != (longlong *)0x0)) && ((int)plVar8[2] == iVar4)) &&
                   (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) &&
                  (lVar11 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),
                                          *(longlong *)(lVar11 + lVar10),1), lVar11 != 0)))) {
                FUN_1417b0cb2(puVar14);
              }
            }
          }
        }
        else if ((fVar18 < fVar2) && (fVar2 <= fVar19)) goto LAB_143741962;
        lVar9 = lVar9 + 1;
        lVar10 = lVar10 + 0x14;
      } while (lVar9 < *(int *)(param_1 + 0x18));
    }
  }
  if (((local_d9 != '\0') && (*(longlong *)(param_1 + 0x58) != 0)) &&
     (*(int *)(param_1 + 0x54) != 0)) {
    uVar3 = *(uint *)(param_1 + 0x50);
    if ((((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) &&
        (plVar8 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar8 != (longlong *)0x0)) &&
       ((((int)plVar8[2] == *(int *)(param_1 + 0x54) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))
        && ((*plVar8 != 0 &&
            (lVar10 = FUN_1400796d0(*(undefined8 *)(*plVar8 + 0x10),*(longlong *)(param_1 + 0x58),1)
            , lVar10 != 0)))))) {
      FUN_1417b0cb2(param_1 + 0x50);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143741b7a FUN_143741b7a body=275 status=ok
// SIG undefined FUN_143741b7a(void)

void FUN_143741b7a(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    local_48 = 0;
    puStack_40 = (undefined8 *)0x0;
    local_38 = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_5;
    iVar1 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar1 + 1U;
    local_70 = param_2;
    local_50 = param_4;
    if (*(uint *)(param_1 + 0x2c) < iVar1 + 1U) {
      FUN_147d7bf46((longlong *)(param_1 + 0x20),iVar1);
    }
    FUN_1478ace9e((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x20),&local_70);
    if (local_38 != 0) {
      if (puStack_40 == (undefined8 *)0x0) goto LAB_143741b99;
      (**(code **)*puStack_40)(puStack_40,0);
      FUN_1446efa72(&puStack_40,0,0,0x10);
      local_38 = 0;
    }
    if (puStack_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143741b99:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143741c8e FUN_143741c8e body=275 status=ok
// SIG undefined FUN_143741c8e(void)

void FUN_143741c8e(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *puStack_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    local_48 = 0;
    puStack_40 = (undefined8 *)0x0;
    local_38 = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = param_5;
    iVar1 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar1 + 1U;
    local_70 = param_2;
    local_50 = param_4;
    if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
      FUN_147d7bfcc((longlong *)(param_1 + 0x40),iVar1);
    }
    FUN_1478ad042((longlong)iVar1 * 0x40 + *(longlong *)(param_1 + 0x40),&local_70);
    if (local_38 != 0) {
      if (puStack_40 == (undefined8 *)0x0) goto LAB_143741cad;
      (**(code **)*puStack_40)(puStack_40,0);
      FUN_1446efa72(&puStack_40,0,0,0x10);
      local_38 = 0;
    }
    if (puStack_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143741cad:
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143741da2 FUN_143741da2 body=846 status=ok
// SIG undefined FUN_143741da2(void)

void FUN_143741da2(longlong *param_1,float param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_78 [36];
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1[2] + 0xd4) & 0x40080) != 0x80) {
    local_54 = param_2;
    uVar4 = FUN_14477b072(param_1,DAT_14cad0060);
    (**(code **)(*param_1 + 0x248))(param_1,uVar4,&local_54);
    if ((DAT_14c761388 != 0) &&
       ((lVar3 = param_1[0x16], lVar3 != 0 || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
      uVar4 = FUN_14119d0a4(lVar3);
      FUN_140e65914(uVar4,param_1,*(undefined4 *)(lVar3 + 0x6f4));
    }
  }
  if ((*(byte *)(param_1 + 0x35) & 1) != 0) {
    param_2 = (float)DAT_14c759090;
    lVar3 = param_1[0x16];
    if ((((lVar3 != 0) || (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)) &&
        (*(longlong *)(lVar3 + 0x30) != 0)) &&
       (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 != 0)) {
      if (*(float *)(lVar3 + 0x4e0) <= param_2) {
        param_2 = *(float *)(lVar3 + 0x4e0);
      }
      if (param_2 <= *(float *)(lVar3 + 0x4dc)) {
        param_2 = *(float *)(lVar3 + 0x4dc);
      }
    }
  }
  if ((*(byte *)((longlong)param_1 + 0x112) & 1) == 0) goto LAB_143741f94;
  plVar5 = param_1 + 0x22;
  if ((char)*plVar5 == '\0') {
    fVar8 = *(float *)((longlong)param_1 + 0x114);
  }
  else {
    fVar8 = 0.0;
    if ((char)*plVar5 == '\x01') {
      fVar8 = (float)FUN_147d7359c(plVar5);
    }
  }
  bVar1 = *(byte *)((longlong)param_1 + 0x111);
  fVar6 = *(float *)(param_1 + 0x23);
  if ((bVar1 & 2) != 0) {
    fVar6 = -fVar6;
  }
  fVar9 = *(float *)((longlong)param_1 + 0x11c) + param_2 * fVar6;
  fVar7 = fVar9;
  if (param_2 * fVar6 <= 0.0) {
    if (fVar9 < 0.0) {
      fVar6 = 0.0;
      if ((bVar1 & 1) == 0) goto LAB_143741ed1;
      FUN_143741180(plVar5,0,1,0);
      FUN_143741180(plVar5,fVar8,0,0);
      fVar7 = 0.0;
      if (0.0 < fVar8) {
        do {
          fVar9 = fVar9 + fVar8;
          fVar7 = fVar9;
        } while (fVar9 < 0.0);
      }
    }
  }
  else if (fVar8 < fVar9) {
    fVar6 = fVar8;
    if ((bVar1 & 1) == 0) {
LAB_143741ed1:
      *(byte *)((longlong)param_1 + 0x112) = *(byte *)((longlong)param_1 + 0x112) & 0xfe;
      FUN_143741180(plVar5,fVar6,1,1);
      if ((param_1[0x2f] != 0) && (*(int *)((longlong)param_1 + 0x174) != 0)) {
        uVar2 = *(uint *)(param_1 + 0x2e);
        if ((((-1 < (int)uVar2) &&
             (((int)uVar2 < DAT_14c9647dc &&
              (plVar5 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
              plVar5 != (longlong *)0x0)))) &&
            ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x174))) &&
           ((((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)) &&
            (lVar3 = FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),param_1[0x2f],1), lVar3 != 0))))
        {
          FUN_1417b0cb2(param_1 + 0x2e);
        }
      }
      if (((int)param_1[0x33] != 0) && ((longlong *)param_1[0x32] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x32] + 0x60))();
      }
      goto LAB_143741f94;
    }
    FUN_143741180(plVar5,fVar8,1,0);
    FUN_143741180(plVar5,0,0,0);
    fVar7 = 0.0;
    if (0.0 < fVar8) {
      do {
        fVar7 = fVar9 - fVar8;
        fVar9 = fVar7;
      } while (fVar8 < fVar7);
    }
  }
  FUN_143741180(plVar5,fVar7,1,1);
LAB_143741f94:
  if (((-1 < *(char *)((longlong)param_1 + 0x9c)) ||
      ((param_1[0x15] != 0 && (*(char *)(param_1[0x15] + 0x178) == '\x03')))) &&
     ((*(byte *)((longlong)param_1 + 0x112) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_78);
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143742114 FUN_143742114 body=122 status=ok
// SIG undefined FUN_143742114(void)

void FUN_143742114(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  (**(code **)(*param_1 + 0x2a8))(param_1,0);
  if ((char)param_1[0x22] == '\0') {
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x114);
  }
  else {
    uVar3 = 0;
    if ((char)param_1[0x22] == '\x01') {
      uVar3 = FUN_147d7359c(param_1 + 0x22,0);
    }
  }
  FUN_143741180(param_1 + 0x22,uVar3,0,1);
  *(byte *)((longlong)param_1 + 0x111) = *(byte *)((longlong)param_1 + 0x111) | 2;
  bVar1 = *(byte *)((longlong)param_1 + 0x112);
  bVar2 = bVar1 + 3;
  if (bVar1 < 0xfd) {
    bVar2 = bVar1;
  }
  *(byte *)((longlong)param_1 + 0x112) = (bVar2 | 1) + 2;
  return;
}



// FUNCTION 14374218e FUN_14374218e body=41 status=ok
// SIG undefined FUN_14374218e(void)

ulonglong FUN_14374218e(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    return (ulonglong)*(uint *)(param_1 + 0x114);
  }
  if (*(char *)(param_1 + 0x110) != '\x01') {
    return 0;
  }
  uVar1 = FUN_147d7359c(0);
  return uVar1;
}



// FUNCTION 1437421b8 FUN_1437421b8 body=78 status=ok
// SIG undefined FUN_1437421b8(void)

undefined8 FUN_1437421b8(longlong param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar5;
  ulonglong uVar4;
  
  fVar1 = *(float *)(param_1 + 0x118);
  fVar3 = 0.0;
  uVar5 = 0;
  uVar4 = 0;
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    cVar2 = *(char *)(param_1 + 0x110);
    if (cVar2 == '\0') {
      uVar4 = (ulonglong)*(uint *)(param_1 + 0x114);
    }
    else if (cVar2 == '\x01') {
      uVar4 = FUN_147d7359c((char *)(param_1 + 0x110));
    }
    uVar5 = (undefined4)(uVar4 >> 0x20);
    fVar3 = (float)uVar4 / fVar1;
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 143742206 FUN_143742206 body=100 status=ok
// SIG undefined FUN_143742206(void)

void FUN_143742206(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 != 0 && param_2 != 0) && ((longlong)*(int *)(param_1 + 0x148) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x140);
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + 0x18 + lVar2) == param_3) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(lVar1 + lVar2) = param_2;
        return;
      }
      lVar2 = lVar2 + 0x40;
    } while ((longlong)*(int *)(param_1 + 0x148) * 0x40 != lVar2);
  }
  return;
}



// FUNCTION 14374226a FUN_14374226a body=100 status=ok
// SIG undefined FUN_14374226a(void)

void FUN_14374226a(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 != 0 && param_2 != 0) && ((longlong)*(int *)(param_1 + 0x138) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x130);
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + 0x18 + lVar2) == param_3) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(lVar1 + lVar2) = param_2;
        return;
      }
      lVar2 = lVar2 + 0x40;
    } while ((longlong)*(int *)(param_1 + 0x138) * 0x40 != lVar2);
  }
  return;
}



// FUNCTION 1437422ce FUN_1437422ce body=100 status=ok
// SIG undefined FUN_1437422ce(void)

void FUN_1437422ce(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_3 != 0 && param_2 != 0) && ((longlong)*(int *)(param_1 + 0x158) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x150);
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar1 + 0x18 + lVar2) == param_3) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        *(longlong *)(lVar1 + lVar2) = param_2;
        return;
      }
      lVar2 = lVar2 + 0x40;
    } while ((longlong)*(int *)(param_1 + 0x158) * 0x40 != lVar2);
  }
  return;
}



// FUNCTION 143742344 FUN_143742344 body=1960 status=ok
// SIG undefined FUN_143742344(void)

void FUN_143742344(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  code *pcVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
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
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  GUID local_68;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar5 = lVar2;
  lVar9 = param_1;
  do {
    lVar7 = lVar5;
    lVar5 = lVar9;
    if (lVar7 == 0) {
LAB_143742398:
      if (lVar5 != 0) {
        bVar11 = lVar5 != DAT_14c951640;
        bVar1 = *(byte *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc88
                         );
        if (0 < *(int *)(param_1 + 0x48)) {
          iVar10 = 0;
          lVar5 = 0x20;
          do {
            lVar9 = *(longlong *)(param_1 + 0x40);
            if ((*(longlong *)(lVar9 + lVar5) != 0 && (bVar11 && (bVar1 & 1) == 0)) &&
               (*(char *)(lVar9 + -0x10 + lVar5) == '\0')) {
              lVar7 = *(longlong *)(*(longlong *)(lVar9 + lVar5) + 0x20);
              if (DAT_14c951858 == 0) {
                local_68._0_8_ = FUN_1449e2820;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_14081d0ea;
                local_a0 = (code **)&local_68;
                local_a8 = &LAB_1468c5283;
                local_b0 = FUN_142809da0;
                local_b8 = L"Engine";
                local_c0 = 0x400000000;
                local_c8 = 0x10000000;
                local_d0 = 8;
                local_d8 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar7 = *(longlong *)(lVar7 + 0x10);
              if ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
                  DAT_14c951858 + 0x30)) {
                FUN_147d74134(&local_68,*(undefined8 *)(lVar9 + lVar5),lVar2);
                pcVar8 = (code *)&DAT_149dfb77a;
                if (local_68.Data4._0_4_ != 0) {
                  pcVar8 = (code *)local_68._0_8_;
                }
                FUN_1446f470e(&local_50,pcVar8,1);
                uVar4 = local_50;
                uVar3 = *(undefined8 *)(lVar9 + lVar5);
                uVar6 = FUN_1400d1e14();
                lVar7 = FUN_14092e757(uVar6,uVar3,lVar2,uVar4);
                if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar7);
                }
                *(longlong *)(lVar9 + lVar5) = lVar7;
                if ((code *)local_68._0_8_ != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            iVar10 = iVar10 + 1;
            lVar5 = lVar5 + 0x28;
          } while (iVar10 < *(int *)(param_1 + 0x48));
        }
        if (0 < *(int *)(param_1 + 0x38)) {
          iVar10 = 0;
          lVar5 = 0x20;
          do {
            lVar9 = *(longlong *)(param_1 + 0x30);
            if ((*(longlong *)(lVar9 + lVar5) != 0 && (bVar11 && (bVar1 & 1) == 0)) &&
               (*(char *)(lVar9 + -0x10 + lVar5) == '\0')) {
              lVar7 = *(longlong *)(*(longlong *)(lVar9 + lVar5) + 0x20);
              if (DAT_14c951858 == 0) {
                local_68._0_8_ = FUN_1449e2820;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_14081d0ea;
                local_a0 = (code **)&local_68;
                local_a8 = &LAB_1468c5283;
                local_b0 = FUN_142809da0;
                local_b8 = L"Engine";
                local_c0 = 0x400000000;
                local_c8 = 0x10000000;
                local_d0 = 8;
                local_d8 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar7 = *(longlong *)(lVar7 + 0x10);
              if ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
                  DAT_14c951858 + 0x30)) {
                FUN_147d74134(&local_68,*(undefined8 *)(lVar9 + lVar5),lVar2);
                pcVar8 = (code *)&DAT_149dfb77a;
                if (local_68.Data4._0_4_ != 0) {
                  pcVar8 = (code *)local_68._0_8_;
                }
                FUN_1446f470e(&local_70,pcVar8,1);
                uVar4 = local_70;
                uVar3 = *(undefined8 *)(lVar9 + lVar5);
                uVar6 = FUN_1400d1e14();
                lVar7 = FUN_14092e757(uVar6,uVar3,lVar2,uVar4);
                if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar7);
                }
                *(longlong *)(lVar9 + lVar5) = lVar7;
                if ((code *)local_68._0_8_ != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            iVar10 = iVar10 + 1;
            lVar5 = lVar5 + 0x28;
          } while (iVar10 < *(int *)(param_1 + 0x38));
        }
        if (0 < *(int *)(param_1 + 0x58)) {
          iVar10 = 0;
          lVar5 = 0x20;
          do {
            lVar9 = *(longlong *)(param_1 + 0x50);
            if ((*(longlong *)(lVar9 + lVar5) != 0 && (bVar11 && (bVar1 & 1) == 0)) &&
               (*(char *)(lVar9 + -0x10 + lVar5) == '\0')) {
              lVar7 = *(longlong *)(*(longlong *)(lVar9 + lVar5) + 0x20);
              if (DAT_14c951858 == 0) {
                local_68._0_8_ = FUN_1449e2820;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_14081d0ea;
                local_a0 = (code **)&local_68;
                local_a8 = &LAB_1468c5283;
                local_b0 = FUN_142809da0;
                local_b8 = L"Engine";
                local_c0 = 0x400000000;
                local_c8 = 0x10000000;
                local_d0 = 8;
                local_d8 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar7 = *(longlong *)(lVar7 + 0x10);
              if ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
                  DAT_14c951858 + 0x30)) {
                FUN_147d74134(&local_68,*(undefined8 *)(lVar9 + lVar5),lVar2);
                pcVar8 = (code *)&DAT_149dfb77a;
                if (local_68.Data4._0_4_ != 0) {
                  pcVar8 = (code *)local_68._0_8_;
                }
                FUN_1446f470e(&local_78,pcVar8,1);
                uVar4 = local_78;
                uVar3 = *(undefined8 *)(lVar9 + lVar5);
                uVar6 = FUN_14120ab20();
                lVar7 = FUN_14092e757(uVar6,uVar3,lVar2,uVar4);
                if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar7);
                }
                *(longlong *)(lVar9 + lVar5) = lVar7;
                if ((code *)local_68._0_8_ != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            iVar10 = iVar10 + 1;
            lVar5 = lVar5 + 0x28;
          } while (iVar10 < *(int *)(param_1 + 0x58));
        }
        if (0 < *(int *)(param_1 + 0x68)) {
          iVar10 = 0;
          lVar5 = 0x20;
          do {
            lVar9 = *(longlong *)(param_1 + 0x60);
            if ((*(longlong *)(lVar9 + lVar5) != 0 && (bVar11 && (bVar1 & 1) == 0)) &&
               (*(char *)(lVar9 + -0x10 + lVar5) == '\0')) {
              lVar7 = *(longlong *)(*(longlong *)(lVar9 + lVar5) + 0x20);
              if (DAT_14c951858 == 0) {
                local_68._0_8_ = FUN_1449e2820;
                local_90 = FUN_14081d0ea;
                local_98 = FUN_14081d0ea;
                local_a0 = (code **)&local_68;
                local_a8 = &LAB_1468c5283;
                local_b0 = FUN_142809da0;
                local_b8 = L"Engine";
                local_c0 = 0x400000000;
                local_c8 = 0x10000000;
                local_d0 = 8;
                local_d8 = 0x50;
                FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
              }
              lVar7 = *(longlong *)(lVar7 + 0x10);
              if ((*(int *)(lVar7 + 0x38) < *(int *)(DAT_14c951858 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) !=
                  DAT_14c951858 + 0x30)) {
                FUN_147d74134(&local_68,*(undefined8 *)(lVar9 + lVar5),lVar2);
                pcVar8 = (code *)&DAT_149dfb77a;
                if (local_68.Data4._0_4_ != 0) {
                  pcVar8 = (code *)local_68._0_8_;
                }
                FUN_1446f470e(&local_80,pcVar8,1);
                uVar4 = local_80;
                uVar3 = *(undefined8 *)(lVar9 + lVar5);
                uVar6 = FUN_14118b628();
                lVar7 = FUN_14092e757(uVar6,uVar3,lVar2,uVar4);
                if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(lVar7);
                }
                *(longlong *)(lVar9 + lVar5) = lVar7;
                if ((code *)local_68._0_8_ != (code *)0x0) {
                  FUN_1400020a8();
                }
              }
            }
            iVar10 = iVar10 + 1;
            lVar5 = lVar5 + 0x28;
          } while (iVar10 < *(int *)(param_1 + 0x68));
        }
        local_68.Data1 = 0;
        local_68.Data2 = 0;
        local_68.Data3 = 0;
        local_68.Data4[0] = '\0';
        local_68.Data4[1] = '\0';
        local_68.Data4[2] = '\0';
        local_68.Data4[3] = '\0';
        local_68.Data4[4] = '\0';
        local_68.Data4[5] = '\0';
        local_68.Data4[6] = '\0';
        local_68.Data4[7] = '\0';
        CoCreateGuid(&local_68);
        *(ulong *)(param_1 + 0x80) = local_68.Data1;
        *(undefined4 *)(param_1 + 0x84) = local_68._4_4_;
        *(undefined4 *)(param_1 + 0x88) = local_68.Data4._0_4_;
        *(undefined4 *)(param_1 + 0x8c) = local_68.Data4._4_4_;
        FUN_147d73b0c(param_1);
        if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return;
      }
      lVar7 = *(longlong *)(lVar9 + 0x20);
    }
    else if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) != 0) {
      lVar5 = FUN_142840154(lVar9);
      goto LAB_143742398;
    }
    lVar5 = *(longlong *)(lVar7 + 0x20);
    lVar9 = lVar7;
  } while( true );
}



// FUNCTION 143742aed FUN_143742aed body=69 status=ok
// SIG undefined FUN_143742aed(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143742aed(void)

{
  _DAT_14cb0bde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143742b2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bdf0,1);
  return;
}



// FUNCTION 143742b32 FUN_143742b32 body=69 status=ok
// SIG undefined FUN_143742b32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143742b32(void)

{
  _DAT_14cb0be00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143742b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0be08,1);
  return;
}



// FUNCTION 143742b77 FUN_143742b77 body=69 status=ok
// SIG undefined FUN_143742b77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143742b77(void)

{
  _DAT_14cb0be10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143742bb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0be18,1);
  return;
}



// FUNCTION 143742bbc FUN_143742bbc body=69 status=ok
// SIG undefined FUN_143742bbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143742bbc(void)

{
  _DAT_14cb0be20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143742bfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0be28,1);
  return;
}



// FUNCTION 143742c01 FUN_143742c01 body=69 status=ok
// SIG undefined FUN_143742c01(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143742c01(void)

{
  _DAT_14cb0be30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143742c43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0be38,1);
  return;
}



// FUNCTION 143742c46 FUN_143742c46 body=1193 status=ok
// SIG undefined FUN_143742c46(void)

void FUN_143742c46(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  iVar2 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar2 != 0) {
    lVar16 = *(longlong *)(param_1 + 0x40);
    lVar13 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 8);
      lVar14 = (ulonglong)((uint)*(undefined8 *)(lVar16 + lVar13) & 0xffffff) * 0x70;
      if (*(char *)(lVar4 + 1 + lVar14) != '\x04') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        FUN_1437430ef(&DAT_14c872ee0,lVar4 + lVar14);
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar2 * 8 != lVar13);
  }
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    uVar17 = 1;
    iVar12 = 0;
    uVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x70);
    if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x60);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar15) goto LAB_143742d90;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      iVar12 = 0;
      uVar15 = 0;
    }
    uVar17 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar11 = 0xffffffff;
    do {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x10);
      lVar16 = *(longlong *)(param_1 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      FUN_1437430ef(&DAT_14c872ee0,(ulonglong)((uint)uVar5 & 0xffffff) * 0x70 + lVar16);
      uVar11 = uVar11 & ~(uint)uVar17;
      puVar7 = *(uint **)(param_1 + 0x70);
      if (*(uint **)(param_1 + 0x70) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x60);
      }
      iVar3 = *(int *)(param_1 + 0x78);
      iVar6 = (int)uVar15;
      lVar16 = (longlong)iVar6;
      uVar10 = puVar7[lVar16] & uVar11;
      if (uVar10 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar13 = 0;
          do {
            uVar10 = puVar7[lVar16 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar11 = 0xffffffff;
              goto LAB_143742ee6;
            }
            iVar12 = iVar12 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar16 != lVar13);
          uVar11 = 0xffffffff;
          iVar6 = iVar8;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_143742ee6:
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
LAB_143742d90:
  iVar2 = *(int *)(param_1 + 200);
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar15 = 0;
    iVar12 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0xb0);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar17 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar17 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar15) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar17 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 != iVar2) {
    uVar11 = 0xffffffff;
    do {
      uVar5 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x10);
      lVar16 = *(longlong *)(param_1 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
      {
        FUN_1459825b0(&DAT_14c872ee0);
        atexit(FUN_1427868a5);
        _Init_thread_footer(&DAT_14c872ef8);
      }
      FUN_1437430ef(&DAT_14c872ee0,(ulonglong)((uint)uVar5 & 0xffffff) * 0x70 + lVar16);
      uVar11 = uVar11 & ~(uint)uVar17;
      puVar7 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0xb0);
      }
      iVar3 = *(int *)(param_1 + 200);
      iVar6 = (int)uVar15;
      lVar16 = (longlong)iVar6;
      uVar10 = puVar7[lVar16] & uVar11;
      if (uVar10 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar8 = iVar9;
        if (iVar9 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar13 = 0;
          do {
            uVar10 = puVar7[lVar16 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar11 = 0xffffffff;
              goto LAB_14374305d;
            }
            iVar12 = iVar12 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar16 != lVar13);
          uVar11 = 0xffffffff;
          iVar6 = iVar8;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_14374305d:
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
  return;
}



// FUNCTION 1437430ef FUN_1437430ef body=1771 status=ok
// SIG undefined FUN_1437430ef(void)

void FUN_1437430ef(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  longlong *plVar3;
  ulonglong uVar4;
  size_t sVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 **ppuVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined2 **ppuVar11;
  wchar_t *pwVar12;
  int iVar13;
  undefined1 auStack_f08 [32];
  wchar_t *local_ee8;
  uint local_ee0;
  double local_ed8;
  undefined8 local_ed0;
  undefined2 *local_ec8;
  longlong local_eb8;
  int local_eb0;
  undefined2 *local_ea8;
  undefined8 uStack_ea0;
  undefined2 *local_e90;
  int local_e88;
  undefined2 **local_d90;
  undefined2 **local_d88;
  int local_d80;
  undefined2 *local_d78;
  undefined8 uStack_d70;
  undefined2 **local_c78;
  undefined2 **local_c70;
  int local_c68;
  undefined2 *local_c58;
  undefined8 uStack_c50;
  char local_858 [1024];
  char acStack_458 [1024];
  undefined4 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f08;
  bVar1 = param_2[0x50];
  if (bVar1 == 3) {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      pwVar12 = L"UNBOUND TFUNCTION";
    }
    else {
      pwVar12 = L"TFUNCTION";
    }
    goto LAB_14374330b;
  }
  if (bVar1 == 2) {
    if ((((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 0x14) == 0)) ||
        (uVar9 = *(uint *)(param_2 + 0x10), (int)uVar9 < 0)) ||
       ((((DAT_14c9647dc <= (int)uVar9 ||
          (plVar3 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
          plVar3 == (longlong *)0x0)) ||
         (((int)plVar3[2] != *(int *)(param_2 + 0x14) ||
          (((*(uint *)(plVar3 + 1) & 0x10200000) != 0 || (*plVar3 == 0)))))) ||
        (lVar6 = FUN_1400796d0(*(undefined8 *)(*plVar3 + 0x10),*(longlong *)(param_2 + 0x18),1),
        lVar6 == 0)))) {
      pwVar12 = L"UNBOUND DYN DELEGATE";
      goto LAB_14374330b;
    }
    if (*(int *)(param_2 + 0x14) == 0) {
LAB_143743751:
      lVar6 = 0;
    }
    else {
      uVar9 = *(uint *)(param_2 + 0x10);
      lVar6 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar3 = (longlong *)
                 ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar3 == (longlong *)0x0) ||
           (((int)plVar3[2] != *(int *)(param_2 + 0x14) ||
            ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)))) goto LAB_143743751;
        lVar6 = *plVar3;
      }
    }
    local_ea8 = *(undefined2 **)(param_2 + 0x18);
    FUN_1400021e4(&local_ea8,&local_c58);
    puVar7 = local_c58;
    if ((int)uStack_c50 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    if (lVar6 == 0) {
      FUN_140002266(&local_e90,L"DYN DELEGATE,%s,%s",L"NO OBJ",puVar7);
      puVar7 = local_c58;
    }
    else {
      local_d78 = (undefined2 *)0x0;
      uStack_d70 = 0;
      FUN_1401031ac(lVar6,0,&local_d78);
      puVar10 = local_d78;
      if ((int)uStack_d70 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_e90,L"DYN DELEGATE,%s,%s",puVar10,puVar7);
      puVar7 = local_c58;
      if (local_d78 != (undefined2 *)0x0) {
        FUN_1400020a8();
        puVar7 = local_c58;
      }
    }
LAB_14374370f:
    if (puVar7 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (bVar1 == 1) {
      if (((*(int *)(param_2 + 0x18) != 0) && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0))
         && (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x30))(), cVar2 != '\0')) {
        local_ea8 = (undefined2 *)0x0;
        uStack_ea0 = 0;
        if ((*(int *)(param_2 + 0x18) == 0) || (*(longlong **)(param_2 + 0x10) == (longlong *)0x0))
        {
LAB_14374366b:
          FUN_14020fad6(&local_ea8,L" 0x0");
        }
        else {
          plVar3 = (longlong *)(**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
          if (plVar3 == (longlong *)0x0) {
            lVar6 = 0;
          }
          else {
            lVar6 = *plVar3;
            FUN_140002266(&local_c58,L"vtbl: %p",lVar6);
            if (local_ea8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            local_ea8 = local_c58;
            uStack_ea0 = uStack_c50;
          }
          if (((*(int *)(param_2 + 0x18) == 0) ||
              (*(longlong **)(param_2 + 0x10) == (longlong *)0x0)) ||
             (uVar4 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x18))(), uVar4 == 0))
          goto LAB_14374366b;
          if (((uVar4 < 0x8000) && (lVar6 != 0)) && (DAT_14c761df8 != 0)) {
            uVar4 = *(ulonglong *)(lVar6 + (uVar4 & 0xfffffffffffffff8));
          }
          FUN_140002266(&local_c58,L" func: 0x%llx",uVar4);
          iVar13 = (int)uStack_c50 + -1;
          if ((int)uStack_c50 == 0) {
            iVar13 = 0;
          }
          FUN_1400020e8(&local_ea8,local_c58,iVar13);
          if (local_c58 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (DAT_14c761dfc != 0) {
            memset(&local_c58,0,0xc18);
            FUN_146830fc4(uVar4,&local_c58);
            local_c78 = (undefined2 **)0x0;
            if (acStack_458 == (char *)0x0) {
              local_c70 = (undefined2 **)0x0;
              local_c68 = 0;
            }
            else {
              sVar5 = strlen(acStack_458);
              iVar13 = (int)sVar5;
              uVar9 = iVar13 + 1;
              local_c68 = iVar13;
              if (uVar9 < 0x81) {
                ppuVar8 = (undefined2 **)0x0;
              }
              else {
                FUN_1446efa72(&local_c78,0,uVar9,2);
                ppuVar8 = local_c78;
              }
              if (ppuVar8 == (undefined2 **)0x0) {
                ppuVar8 = &local_d78;
              }
              local_c70 = ppuVar8;
              if (-1 < iVar13) {
                uVar4 = 0;
                do {
                  *(short *)((longlong)ppuVar8 + uVar4 * 2) = (short)acStack_458[uVar4];
                  uVar4 = uVar4 + 1;
                } while (uVar9 != uVar4);
              }
            }
            ppuVar8 = local_c70;
            local_d90 = (undefined2 **)0x0;
            if (local_858 == (char *)0x0) {
              local_d88 = (undefined2 **)0x0;
              local_d80 = 0;
            }
            else {
              sVar5 = strlen(local_858);
              iVar13 = (int)sVar5;
              uVar9 = iVar13 + 1;
              local_d80 = iVar13;
              if (uVar9 < 0x81) {
                ppuVar11 = (undefined2 **)0x0;
              }
              else {
                FUN_1446efa72(&local_d90,0,uVar9,2);
                ppuVar11 = local_d90;
              }
              if (ppuVar11 == (undefined2 **)0x0) {
                ppuVar11 = &local_e90;
              }
              local_d88 = ppuVar11;
              if (-1 < iVar13) {
                uVar4 = 0;
                do {
                  *(short *)((longlong)ppuVar11 + uVar4 * 2) = (short)local_858[uVar4];
                  uVar4 = uVar4 + 1;
                } while (uVar9 != uVar4);
              }
            }
            local_ee8 = (wchar_t *)CONCAT44(local_ee8._4_4_,local_58);
            FUN_140002266(&local_eb8,L" %s [%s:%d]",local_d88,ppuVar8);
            iVar13 = local_eb0 + -1;
            if (local_eb0 == 0) {
              iVar13 = 0;
            }
            FUN_1400020e8(&local_ea8,local_eb8,iVar13);
            if (local_eb8 != 0) {
              FUN_1400020a8();
            }
            if (local_d90 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
            if (local_c78 != (undefined2 **)0x0) {
              FUN_1400020a8();
            }
          }
        }
        if ((*(int *)(param_2 + 0x18) == 0) || (*(longlong **)(param_2 + 0x10) == (longlong *)0x0))
        {
          puVar7 = local_ea8;
          if ((int)uStack_ea0 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
        }
        else {
          lVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 8))();
          puVar7 = local_ea8;
          if ((int)uStack_ea0 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          if (lVar6 != 0) {
            local_c58 = (undefined2 *)0x0;
            uStack_c50 = 0;
            FUN_1401031ac(lVar6,0,&local_c58);
            puVar10 = local_c58;
            if ((int)uStack_c50 == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            FUN_140002266(&local_e90,L"DELEGATE,%s,%s",puVar10,puVar7);
            puVar7 = local_ea8;
            if (local_c58 != (undefined2 *)0x0) {
              FUN_1400020a8();
              puVar7 = local_ea8;
            }
            goto LAB_14374370f;
          }
        }
        FUN_140002266(&local_e90,L"DELEGATE,%s,%s",L"NO OBJ",puVar7);
        puVar7 = local_ea8;
        goto LAB_14374370f;
      }
      pwVar12 = L"UNBOUND DELEGATE";
    }
    else {
      pwVar12 = L"UNSET";
    }
LAB_14374330b:
    FUN_140056680(&local_e90,pwVar12);
  }
  local_ec8 = local_e90;
  if (local_e88 == 0) {
    local_ec8 = &DAT_149dfb77a;
  }
  local_ed0 = *(undefined8 *)(param_2 + 8);
  pwVar12 = L"true";
  local_ee8 = L"true";
  if ((*param_2 & 4) == 0) {
    local_ee8 = L"false";
  }
  if ((*param_2 & 1) == 0) {
    pwVar12 = L"false";
  }
  local_ed8 = (double)*(float *)(param_2 + 4);
  local_ee0 = (uint)param_2[1];
  FUN_140047918(param_1,
                L"TimerData %p : bLoop=%s, bRequiresDelegate=%s, Status=%d, Rate=%f, ExpireTime=%f, Delegate=%s"
                ,param_2,pwVar12);
  if (local_e90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_f08) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437437dc FUN_1437437dc body=955 status=ok
// SIG undefined FUN_1437437dc(void)

undefined8 * FUN_1437437dc(longlong param_1,undefined8 *param_2,uint *param_3)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  undefined8 uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_98 [32];
  uint local_78;
  int local_74;
  uint *local_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  if ((((param_3[1] != 0) && (uVar6 = *param_3, -1 < (int)uVar6)) && ((int)uVar6 < DAT_14c9647dc))
     && (((puVar11 = (ulonglong *)
                     ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
          puVar11 != (ulonglong *)0x0 && ((uint)puVar11[2] == param_3[1])) &&
         (((puVar11[1] & 0x10200000) == 0 &&
          ((uVar17 = *puVar11, uVar17 != 0 &&
           (*(int *)(param_1 + 0xf8) != *(int *)(param_1 + 0x124))))))))) {
    uVar6 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    lVar9 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x130);
    }
    iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uVar6 >> 0x10 ^ uVar6))
                              * 4);
    if (iVar13 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0xf0) + (longlong)iVar13 * 0x60;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar13 * 0x60) == uVar17) {
          if ((lVar9 != 0) && (local_58 = (longlong *)(lVar9 + 8), local_58 != (longlong *)0x0)) {
            puVar14 = (uint *)(lVar9 + 0x18);
            uVar6 = *(uint *)(lVar9 + 0x30);
            if (uVar6 == 0) {
              uVar18 = 1;
              uVar17 = 0;
              uVar3 = 0;
              iVar13 = 0;
              goto LAB_1437439b5;
            }
            puVar4 = *(uint **)(lVar9 + 0x28);
            if (*(uint **)(lVar9 + 0x28) == (uint *)0x0) {
              puVar4 = puVar14;
            }
            uVar3 = *puVar4;
            if (uVar3 != 0) {
              uVar17 = 0;
              iVar13 = 0;
              goto LAB_14374398e;
            }
            iVar13 = uVar6 + 0x1e;
            if (-1 < (int)(uVar6 - 1)) {
              iVar13 = uVar6 - 1;
            }
            uVar17 = 0;
            uVar18 = (ulonglong)(uint)(iVar13 >> 5);
            if (iVar13 >> 5 < 1) {
              uVar18 = uVar17;
            }
            iVar13 = 0;
            goto LAB_143743975;
          }
          break;
        }
        iVar13 = *(int *)(lVar9 + 0x58);
      } while (iVar13 != -1);
    }
  }
  goto LAB_1437438f5;
  while( true ) {
    iVar13 = iVar13 + 0x20;
    uVar3 = puVar4[uVar17 + 1];
    uVar17 = uVar17 + 1;
    if (uVar3 != 0) break;
LAB_143743975:
    if (uVar18 == uVar17) goto LAB_1437438f5;
  }
LAB_14374398e:
  uVar18 = (ulonglong)(-uVar3 & uVar3);
  uVar1 = uVar18 * 2 + 1;
  lVar5 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  uVar3 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
  if ((int)uVar6 <= (int)uVar3) {
    uVar3 = uVar6;
  }
LAB_1437439b5:
  if (uVar3 != uVar6) {
    uVar10 = 0xffffffff;
    local_68 = (ulonglong)uVar6;
    do {
      uVar15 = *(undefined8 *)(*local_58 + (longlong)(int)uVar3 * 0x10);
      lVar5 = (ulonglong)((uint)uVar15 & 0xffffff) * 0x70;
      if (((*(char *)(*(longlong *)(param_1 + 8) + 1 + lVar5) != '\x04') &&
          (lVar5 = *(longlong *)(param_1 + 8) + lVar5, *(char *)(lVar5 + 0x50) == '\x02')) &&
         ((int *)(lVar5 + 0x10) != (int *)0x0)) {
        local_50 = *(undefined8 *)param_3;
        lVar12 = *(longlong *)(param_3 + 2);
        if ((((*(int *)(lVar5 + 0x10) == (int)local_50) &&
             (*(int *)(lVar5 + 0x14) == (int)((ulonglong)local_50 >> 0x20))) ||
            ((local_78 = uVar10, local_74 = iVar13, local_70 = puVar14, local_60 = uVar15,
             cVar2 = FUN_144729dda(), puVar14 = local_70, iVar13 = local_74, uVar10 = local_78,
             cVar2 == '\0' &&
             (cVar2 = FUN_144729dda(&local_50), puVar14 = local_70, uVar15 = local_60,
             iVar13 = local_74, uVar10 = local_78, cVar2 == '\0')))) &&
           (*(longlong *)(lVar5 + 0x18) == lVar12)) {
          *param_2 = uVar15;
          break;
        }
      }
      uVar10 = uVar10 & ~(uint)uVar18;
      puVar4 = *(uint **)(lVar9 + 0x28);
      if (*(uint **)(lVar9 + 0x28) == (uint *)0x0) {
        puVar4 = puVar14;
      }
      uVar6 = *(uint *)(lVar9 + 0x30);
      iVar16 = (int)uVar17;
      lVar5 = (longlong)iVar16;
      uVar3 = puVar4[lVar5] & uVar10;
      if (uVar3 == 0) {
        iVar7 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar7 = uVar6 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar16) {
          iVar8 = iVar16;
        }
        if (iVar16 < iVar7) {
          lVar12 = 0;
          do {
            uVar3 = puVar4[lVar5 + lVar12 + 1];
            if (uVar3 != 0) {
              uVar17 = (ulonglong)(iVar16 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
              goto LAB_143743aab;
            }
            iVar13 = iVar13 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar5 != lVar12);
          uVar10 = 0xffffffff;
          iVar16 = iVar8;
        }
        uVar17 = (ulonglong)(iVar16 + 1);
        uVar3 = uVar6;
      }
      else {
LAB_143743aab:
        uVar18 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar18 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        uVar3 = (iVar13 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if ((int)uVar6 <= (int)uVar3) {
          uVar3 = uVar6;
        }
      }
    } while (uVar3 != (uint)local_68);
  }
LAB_1437438f5:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 143743b98 FUN_143743b98 body=322 status=ok
// SIG undefined FUN_143743b98(void)

int FUN_143743b98(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong *plVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  longlong lVar13;
  int *piVar14;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    iVar8 = 0;
  }
  else {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    piVar10 = (int *)((longlong)plVar9 +
                     ((longlong)((int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2) &
                     (longlong)(int)param_1[9] - 1U) * 4);
    iVar8 = 0;
    do {
      iVar3 = *piVar10;
      if ((longlong)iVar3 == -1) {
        return iVar8;
      }
      lVar4 = *param_1;
      lVar13 = (longlong)iVar3 * 0x10;
      lVar1 = lVar4 + lVar13;
      lVar5 = *(longlong *)(lVar4 + lVar13);
      lVar6 = *param_2;
      if (lVar5 == lVar6) {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = param_1 + 7;
        }
        iVar11 = *(int *)((longlong)plVar9 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        if (iVar11 == iVar3) {
          piVar14 = (int *)((longlong)plVar9 + (longlong)*(int *)(lVar1 + 0xc) * 4);
        }
        else {
          do {
            piVar14 = (int *)((longlong)iVar11 * 0x10 + lVar4 + 8);
            iVar11 = *piVar14;
          } while (iVar11 != iVar3);
        }
        *piVar14 = *(int *)(lVar1 + 8);
        lVar1 = *param_1;
        if (*(int *)((longlong)param_1 + 0x34) != 0) {
          *(int *)(lVar1 + (longlong)(int)param_1[6] * 0x10) = iVar3;
        }
        *(undefined4 *)(lVar1 + lVar13) = 0xffffffff;
        uVar12 = 0xffffffff;
        if (0 < *(int *)((longlong)param_1 + 0x34)) {
          uVar12 = (undefined4)param_1[6];
        }
        *(undefined4 *)(lVar1 + lVar13 + 4) = uVar12;
        *(int *)(param_1 + 6) = iVar3;
        *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
        plVar9 = param_1 + 2;
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar9 = (longlong *)param_1[4];
        }
        iVar11 = iVar3 + 0x1f;
        if (-1 < iVar3) {
          iVar11 = iVar3;
        }
        bVar7 = (byte)iVar3 & 0x1f;
        puVar2 = (uint *)((longlong)plVar9 + (longlong)(iVar11 >> 5) * 4);
        *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
        iVar8 = iVar8 + 1;
      }
      else {
        piVar10 = (int *)(lVar1 + 8);
      }
    } while (lVar5 != lVar6);
  }
  return iVar8;
}



// FUNCTION 143743cda FUN_143743cda body=2982 status=ok
// SIG undefined FUN_143743cda(void)

void FUN_143743cda(longlong param_1,float param_2)

{
  double *pdVar1;
  double dVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  double dVar6;
  char cVar7;
  BOOL BVar8;
  undefined4 extraout_var;
  undefined8 uVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  uint *puVar23;
  int iVar24;
  ulonglong uVar25;
  uint uVar26;
  byte *pbVar27;
  ulonglong uVar28;
  undefined1 auStack_d8 [32];
  uint *local_b8;
  undefined4 local_ac;
  longlong local_a8;
  longlong local_a0;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(longlong *)(param_1 + 0x150) != DAT_14c872be0) {
    QueryPerformanceCounter(&local_98);
    dVar6 = (double)local_98.QuadPart * DAT_14c83f420;
    *(double *)(param_1 + 0x140) = (double)param_2 + *(double *)(param_1 + 0x140);
    if ((*(longlong *)(param_1 + 0x158) == 0) ||
       (lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x158) + 0x30), lVar20 == 0)) {
      lVar20 = 0;
    }
    else {
      lVar20 = *(longlong *)(lVar20 + 0x360);
    }
    local_a8 = param_1 + 0x40;
    uVar26 = *(uint *)(param_1 + 0x48);
    if (0 < (int)uVar26) {
      local_a0 = param_1 + 0x18;
      local_b8 = (uint *)0x0;
      iVar24 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1 + 0x40);
        lVar19 = (ulonglong)((uint)*puVar3 & 0xffffff) * 0x70;
        if (*(char *)(*(longlong *)(param_1 + 8) + 1 + lVar19) == '\x04') {
          if (uVar26 == 1) {
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
          else {
            *puVar3 = puVar3[(ulonglong)uVar26 - 1];
            iVar16 = *(int *)(param_1 + 0x48);
            iVar12 = iVar16 + -1;
            *(int *)(param_1 + 0x48) = iVar12;
            if (2 < iVar16) {
              lVar19 = *(longlong *)(param_1 + 0x40);
              iVar16 = 0;
              iVar22 = 1;
              iVar18 = 0;
              do {
                iVar16 = iVar16 + 2;
                lVar15 = *(longlong *)(param_1 + 8);
                iVar17 = iVar22;
                if ((iVar16 < iVar12) &&
                   (dVar2 = *(double *)
                             (lVar15 + 8 +
                             (*(ulonglong *)(lVar19 + (longlong)iVar16 * 8) & 0xffffff) * 0x70),
                   pdVar1 = (double *)
                            (lVar15 + 8 +
                            (*(ulonglong *)(lVar19 + (longlong)iVar22 * 8) & 0xffffff) * 0x70),
                   dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
                  iVar17 = iVar16;
                }
                uVar21 = *(ulonglong *)(lVar19 + (longlong)iVar18 * 8);
                uVar28 = *(ulonglong *)(lVar19 + (longlong)iVar17 * 8);
                dVar2 = *(double *)(lVar15 + 8 + (uVar21 & 0xffffff) * 0x70);
                pdVar1 = (double *)(lVar15 + 8 + (uVar28 & 0xffffff) * 0x70);
                if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
                *(ulonglong *)(lVar19 + (longlong)iVar18 * 8) = uVar28;
                *(ulonglong *)(lVar19 + (longlong)iVar17 * 8) = uVar21;
                iVar16 = iVar17 * 2;
                iVar22 = iVar17 * 2 + 1;
                iVar18 = iVar17;
              } while (iVar22 < iVar12);
            }
          }
          FUN_1448b4fb2(param_1);
        }
        else {
          pbVar27 = (byte *)(*(longlong *)(param_1 + 8) + lVar19);
          if (*(double *)(param_1 + 0x140) < *(double *)(pbVar27 + 8) ||
              *(double *)(param_1 + 0x140) == *(double *)(pbVar27 + 8)) break;
          if ((((ulonglong)local_b8 & 1) != 0) &&
             (iVar12 = iVar24 + 1, bVar5 = iVar24 < DAT_14c761e00, iVar24 = iVar12, bVar5)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1))
            {
              FUN_1459825b0(&DAT_14c872ee0);
              atexit(FUN_1427868a5);
              _Init_thread_footer(&DAT_14c872ef8);
            }
            FUN_1437430ef(&DAT_14c872ee0,pbVar27);
          }
          if (lVar20 == 0) {
            local_ac = 0xffffffff;
          }
          else {
            iVar12 = -1;
            if ((longlong)*(int *)(lVar20 + 0x1a8) != 0) {
              uVar21 = 0;
              do {
                if (*(byte *)(*(longlong *)(lVar20 + 0x1a0) + uVar21) == pbVar27[2]) {
                  iVar12 = (int)(uVar21 >> 3) * -0x11111111;
                  break;
                }
                uVar21 = uVar21 + 0x78;
              } while ((longlong)*(int *)(lVar20 + 0x1a8) * 0x78 - uVar21 != 0);
            }
            local_ac = *(undefined4 *)(lVar20 + 0x1b0);
            FUN_140080e72(lVar20,iVar12);
          }
          puVar3 = *(undefined8 **)(param_1 + 0x40);
          *(undefined8 *)(param_1 + 0x148) = *puVar3;
          iVar12 = *(int *)(param_1 + 0x48) + -1;
          if (iVar12 == 0) {
            *(undefined4 *)(param_1 + 0x48) = 0;
          }
          else {
            if (0 < iVar12) {
              iVar12 = 1;
            }
            memmove(puVar3,puVar3 + (*(int *)(param_1 + 0x48) - iVar12),(longlong)iVar12 << 3);
            iVar16 = *(int *)(param_1 + 0x48);
            iVar12 = iVar16 + -1;
            *(int *)(param_1 + 0x48) = iVar12;
            if (2 < iVar16) {
              lVar19 = *(longlong *)(param_1 + 0x40);
              iVar16 = 0;
              iVar22 = 1;
              iVar18 = 0;
              do {
                iVar16 = iVar16 + 2;
                lVar15 = *(longlong *)(param_1 + 8);
                iVar17 = iVar22;
                if ((iVar16 < iVar12) &&
                   (dVar2 = *(double *)
                             (lVar15 + 8 +
                             (*(ulonglong *)(lVar19 + (longlong)iVar16 * 8) & 0xffffff) * 0x70),
                   pdVar1 = (double *)
                            (lVar15 + 8 +
                            (*(ulonglong *)(lVar19 + (longlong)iVar22 * 8) & 0xffffff) * 0x70),
                   dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
                  iVar17 = iVar16;
                }
                uVar21 = *(ulonglong *)(lVar19 + (longlong)iVar18 * 8);
                uVar28 = *(ulonglong *)(lVar19 + (longlong)iVar17 * 8);
                dVar2 = *(double *)(lVar15 + 8 + (uVar21 & 0xffffff) * 0x70);
                pdVar1 = (double *)(lVar15 + 8 + (uVar28 & 0xffffff) * 0x70);
                if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
                *(ulonglong *)(lVar19 + (longlong)iVar18 * 8) = uVar28;
                *(ulonglong *)(lVar19 + (longlong)iVar17 * 8) = uVar21;
                iVar16 = iVar17 * 2;
                iVar22 = iVar17 * 2 + 1;
                iVar18 = iVar17;
              } while (iVar22 < iVar12);
            }
          }
          pbVar27[1] = 3;
          iVar16 = 1;
          iVar12 = 1;
          if (((*pbVar27 & 1) == 0) ||
             (uVar26 = (uint)(longlong)
                             ((*(double *)(param_1 + 0x140) - *(double *)(pbVar27 + 8)) /
                             (double)*(float *)(pbVar27 + 4)), iVar16 = uVar26 + 1,
             uVar26 < 0x7fffffff)) {
            while( true ) {
              FUN_1404fa942(pbVar27 + 0x10);
              lVar19 = *(longlong *)(param_1 + 0x148);
              if (lVar19 == 0) break;
              uVar26 = (uint)lVar19;
              if (*(int *)(param_1 + 0x10) <= (int)(uVar26 & 0xffffff)) break;
              lVar15 = *(longlong *)(param_1 + 0x28);
              if (*(longlong *)(param_1 + 0x28) == 0) {
                lVar15 = local_a0;
              }
              if ((*(uint *)(lVar15 + (ulonglong)((uVar26 & 0xffffff) >> 5) * 4) >> (uVar26 & 0x1f)
                  & 1) == 0) break;
              lVar15 = *(longlong *)(param_1 + 8);
              lVar13 = (ulonglong)(uVar26 & 0xffffff) * 0x70;
              pbVar27 = (byte *)(lVar15 + lVar13);
              if (((pbVar27 == (byte *)0x0) || (*(longlong *)(lVar15 + 0x60 + lVar13) != lVar19)) ||
                 (cVar7 = *(char *)(lVar15 + 1 + lVar13), cVar7 == '\x04')) break;
              if (((cVar7 != '\x03') || ((*pbVar27 & 2) != 0)) ||
                 (bVar5 = iVar16 <= iVar12, iVar12 = iVar12 + 1, bVar5)) goto LAB_14374413b;
            }
            pbVar27 = (byte *)0x0;
          }
LAB_14374413b:
          if (DAT_14cb0bdf8 <= 0.0 || ((ulonglong)local_b8 & 1) != 0) {
LAB_14374418d:
            if (pbVar27 != (byte *)0x0) {
LAB_1437441db:
              if (((*pbVar27 & 1) == 0) ||
                 (((*pbVar27 & 4) != 0 && (cVar7 = FUN_1417f4bee(pbVar27 + 0x10), cVar7 == '\0'))))
              {
                FUN_1448b4fb2(param_1,*(undefined8 *)(param_1 + 0x148));
              }
              else {
                *(double *)(pbVar27 + 8) =
                     (double)((float)iVar16 * *(float *)(pbVar27 + 4)) + *(double *)(pbVar27 + 8);
                pbVar27[1] = 1;
                iVar12 = *(int *)(param_1 + 0x48);
                *(uint *)(param_1 + 0x48) = iVar12 + 1U;
                if (*(uint *)(param_1 + 0x4c) < iVar12 + 1U) {
                  FUN_1458de3d0(local_a8,iVar12);
                }
                *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar12 * 8) =
                     *(undefined8 *)(param_1 + 0x148);
                if (1 < *(int *)(param_1 + 0x48)) {
                  lVar19 = *(longlong *)(param_1 + 0x40);
                  uVar21 = (ulonglong)(*(int *)(param_1 + 0x48) - 1);
                  uVar9 = *(undefined8 *)(lVar19 + uVar21 * 8);
                  do {
                    uVar26 = (int)uVar21 - 1;
                    uVar28 = (ulonglong)(uVar26 >> 1);
                    uVar4 = *(undefined8 *)(lVar19 + uVar28 * 8);
                    dVar2 = *(double *)
                             (*(longlong *)(param_1 + 8) + 8 +
                             (ulonglong)((uint)uVar4 & 0xffffff) * 0x70);
                    pdVar1 = (double *)
                             (*(longlong *)(param_1 + 8) + 8 +
                             (ulonglong)((uint)uVar9 & 0xffffff) * 0x70);
                    if (dVar2 < *pdVar1 || dVar2 == *pdVar1) break;
                    *(undefined8 *)(lVar19 + uVar21 * 8) = uVar4;
                    *(undefined8 *)(lVar19 + uVar28 * 8) = uVar9;
                    uVar21 = uVar28;
                  } while (1 < uVar26);
                }
              }
              *(undefined8 *)(param_1 + 0x148) = 0;
            }
          }
          else {
            BVar8 = QueryPerformanceCounter(&local_98);
            if ((((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar6 + 16777216.0)) *
                1000.0 < (double)DAT_14cb0bdf8) goto LAB_14374418d;
            iVar24 = iVar24 + 1;
            if (pbVar27 != (byte *)0x0) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c872ef8) &&
                 (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
                FUN_1459825b0(&DAT_14c872ee0);
                atexit(FUN_1427868a5);
                _Init_thread_footer(&DAT_14c872ef8);
              }
              uVar9 = FUN_1437430ef(&DAT_14c872ee0,pbVar27);
              local_b8 = (uint *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              goto LAB_1437441db;
            }
            local_b8 = (uint *)CONCAT71((int7)(CONCAT44(extraout_var,BVar8) >> 8),1);
          }
          if (lVar20 != 0) {
            FUN_140080e72(lVar20,local_ac);
          }
        }
        uVar26 = *(uint *)(param_1 + 0x48);
      } while (0 < (int)uVar26);
    }
    *(longlong *)(param_1 + 0x150) = DAT_14c872be0;
    iVar24 = *(int *)(param_1 + 0xa8);
    iVar12 = *(int *)(param_1 + 0xd4);
    if (iVar12 < iVar24) {
      puVar23 = (uint *)(param_1 + 0xb0);
      iVar16 = *(int *)(param_1 + 200);
      if (iVar16 == 0) {
        uVar21 = 1;
        uVar28 = 0;
        iVar22 = 0;
        iVar18 = 0;
      }
      else {
        puVar10 = *(uint **)(param_1 + 0xc0);
        if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
          puVar10 = puVar23;
        }
        uVar26 = *puVar10;
        if (uVar26 == 0) {
          iVar18 = iVar16 + 0x1e;
          if (-1 < iVar16 + -1) {
            iVar18 = iVar16 + -1;
          }
          uVar28 = 0;
          uVar21 = (ulonglong)(uint)(iVar18 >> 5);
          if (iVar18 >> 5 < 1) {
            uVar21 = uVar28;
          }
          iVar22 = 0;
          do {
            if (uVar21 == uVar28) goto LAB_143744614;
            iVar22 = iVar22 + 0x20;
            uVar26 = puVar10[uVar28 + 1];
            uVar28 = uVar28 + 1;
          } while (uVar26 == 0);
        }
        else {
          uVar28 = 0;
          iVar22 = 0;
        }
        uVar21 = (ulonglong)(-uVar26 & uVar26);
        uVar11 = uVar21 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar18 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar16 <= iVar18) {
          iVar18 = iVar16;
        }
      }
      if (iVar18 != iVar16) {
        uVar26 = 0xffffffff;
        local_b8 = puVar23;
        do {
          lVar20 = *(longlong *)(param_1 + 8);
          uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar18 * 0x10);
          lVar19 = (ulonglong)((uint)uVar9 & 0xffffff) * 0x70;
          *(double *)(lVar20 + 8 + lVar19) =
               *(double *)(param_1 + 0x140) + *(double *)(lVar20 + 8 + lVar19);
          *(undefined1 *)(lVar20 + 1 + lVar19) = 1;
          iVar24 = *(int *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar24 + 1U;
          if (*(uint *)(param_1 + 0x4c) < iVar24 + 1U) {
            FUN_1458de3d0(local_a8,iVar24);
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar24 * 8) = uVar9;
          if (1 < *(int *)(param_1 + 0x48)) {
            lVar20 = *(longlong *)(param_1 + 0x40);
            uVar11 = (ulonglong)(*(int *)(param_1 + 0x48) - 1);
            uVar9 = *(undefined8 *)(lVar20 + uVar11 * 8);
            do {
              uVar14 = (int)uVar11 - 1;
              uVar25 = (ulonglong)(uVar14 >> 1);
              uVar4 = *(undefined8 *)(lVar20 + uVar25 * 8);
              dVar6 = *(double *)
                       (*(longlong *)(param_1 + 8) + 8 + (ulonglong)((uint)uVar4 & 0xffffff) * 0x70)
              ;
              pdVar1 = (double *)
                       (*(longlong *)(param_1 + 8) + 8 + (ulonglong)((uint)uVar9 & 0xffffff) * 0x70)
              ;
              if (dVar6 < *pdVar1 || dVar6 == *pdVar1) break;
              *(undefined8 *)(lVar20 + uVar11 * 8) = uVar4;
              *(undefined8 *)(lVar20 + uVar25 * 8) = uVar9;
              uVar11 = uVar25;
            } while (1 < uVar14);
          }
          uVar26 = uVar26 & ~(uint)uVar21;
          puVar23 = *(uint **)(param_1 + 0xc0);
          if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
            puVar23 = local_b8;
          }
          iVar17 = *(int *)(param_1 + 200);
          iVar24 = (int)uVar28;
          lVar20 = (longlong)iVar24;
          uVar14 = puVar23[lVar20] & uVar26;
          if (uVar14 == 0) {
            iVar12 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar12 = iVar17 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar22 = iVar22 + 0x20;
            iVar18 = iVar12;
            if (iVar12 < iVar24) {
              iVar18 = iVar24;
            }
            if (iVar24 < iVar12) {
              lVar19 = 0;
              do {
                uVar14 = puVar23[lVar20 + lVar19 + 1];
                if (uVar14 != 0) {
                  uVar28 = (ulonglong)(iVar24 + (int)lVar19 + 1);
                  uVar26 = 0xffffffff;
                  goto LAB_1437445b0;
                }
                iVar22 = iVar22 + 0x20;
                lVar19 = lVar19 + 1;
              } while (iVar18 - lVar20 != lVar19);
              uVar26 = 0xffffffff;
              iVar24 = iVar18;
            }
            uVar28 = (ulonglong)(iVar24 + 1);
            iVar18 = iVar17;
          }
          else {
LAB_1437445b0:
            uVar21 = (ulonglong)(-uVar14 & uVar14);
            uVar11 = uVar21 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar18 = (iVar22 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar18) {
              iVar18 = iVar17;
            }
          }
        } while (iVar18 != iVar16);
        iVar24 = *(int *)(param_1 + 0xa8);
        iVar12 = *(int *)(param_1 + 0xd4);
        puVar23 = local_b8;
        iVar16 = iVar17;
      }
LAB_143744614:
      if (iVar24 != iVar12) {
        lVar20 = param_1 + 0xd8;
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          lVar20 = *(longlong *)(param_1 + 0xe0);
        }
        iVar18 = *(int *)(param_1 + 0xe8);
        iVar22 = iVar18 + 3;
        if (-1 < iVar18) {
          iVar22 = iVar18;
        }
        if (iVar24 - iVar12 < iVar22 >> 2) {
          if (iVar16 == 0) {
            uVar21 = 0;
            uVar28 = 1;
            iVar24 = 0;
            iVar12 = 0;
          }
          else {
            puVar10 = *(uint **)(param_1 + 0xc0);
            if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
              puVar10 = puVar23;
            }
            uVar26 = *puVar10;
            if (uVar26 == 0) {
              iVar24 = iVar16 + 0x1e;
              if (-1 < iVar16 + -1) {
                iVar24 = iVar16 + -1;
              }
              uVar21 = 0;
              uVar14 = iVar24 >> 5;
              if (iVar24 >> 5 < 1) {
                uVar14 = 0;
              }
              iVar12 = 0;
              do {
                if (uVar14 == uVar21) goto LAB_1437447dd;
                iVar12 = iVar12 + 0x20;
                uVar26 = puVar10[uVar21 + 1];
                uVar21 = uVar21 + 1;
              } while (uVar26 == 0);
            }
            else {
              uVar21 = 0;
              iVar12 = 0;
            }
            uVar28 = (ulonglong)(-uVar26 & uVar26);
            uVar11 = uVar28 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar24 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar16 <= iVar24) {
              iVar24 = iVar16;
            }
          }
          if (iVar24 != iVar16) {
            uVar26 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar20 + (longlong)
                         *(int *)(*(longlong *)(param_1 + 0xa0) + 0xc + (longlong)iVar24 * 0x10) * 4
               ) = 0xffffffff;
              uVar26 = ~(uint)uVar28 & uVar26;
              puVar10 = *(uint **)(param_1 + 0xc0);
              if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
                puVar10 = puVar23;
              }
              iVar18 = *(int *)(param_1 + 200);
              iVar24 = (int)uVar21;
              lVar19 = (longlong)iVar24;
              uVar14 = puVar10[lVar19] & uVar26;
              if (uVar14 == 0) {
                iVar22 = iVar18 + 0x1e;
                if (-1 < iVar18 + -1) {
                  iVar22 = iVar18 + -1;
                }
                iVar22 = iVar22 >> 5;
                iVar12 = iVar12 + 0x20;
                iVar17 = iVar22;
                if (iVar22 < iVar24) {
                  iVar17 = iVar24;
                }
                if (iVar24 < iVar22) {
                  lVar15 = 0;
                  do {
                    uVar14 = puVar10[lVar19 + lVar15 + 1];
                    if (uVar14 != 0) {
                      uVar21 = (ulonglong)(iVar24 + (int)lVar15 + 1);
                      uVar26 = 0xffffffff;
                      goto LAB_14374477c;
                    }
                    iVar12 = iVar12 + 0x20;
                    lVar15 = lVar15 + 1;
                  } while (iVar17 - lVar19 != lVar15);
                  uVar26 = 0xffffffff;
                  iVar24 = iVar17;
                }
                uVar21 = (ulonglong)(iVar24 + 1);
                iVar24 = iVar18;
              }
              else {
LAB_14374477c:
                uVar28 = (ulonglong)(-uVar14 & uVar14);
                uVar11 = uVar28 * 2 + 1;
                lVar19 = 0x3f;
                if (uVar11 != 0) {
                  for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                  }
                }
                iVar24 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                if (iVar18 <= iVar24) {
                  iVar24 = iVar18;
                }
              }
            } while (iVar24 != iVar16);
          }
        }
        else if (0 < iVar18) {
          lVar19 = 0;
          do {
            *(undefined4 *)(lVar20 + lVar19 * 4) = 0xffffffff;
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(param_1 + 0xe8));
        }
LAB_1437447dd:
        *(undefined4 *)(param_1 + 0xa8) = 0;
        if (*(int *)(param_1 + 0xac) < 0) {
          FUN_14474875a(param_1 + 0xa0,0);
        }
        *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
        *(undefined4 *)(param_1 + 200) = 0;
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143744881 FUN_143744881 body=1470 status=ok
// SIG undefined FUN_143744881(void)

void FUN_143744881(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x1f0) == 0) {
      plVar7 = (longlong *)(param_1 + 0x458);
    }
    else {
      plVar7 = (longlong *)(*(longlong *)(param_1 + 0x1f0) + 0xf0);
    }
    lVar4 = *plVar7;
    local_58 = 0;
    uStack_50 = 0;
    iVar2 = *(int *)(lVar4 + 0x48);
    if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar2);
    }
    if (iVar2 != 0) {
      FUN_147d7c162(&local_58);
      iVar2 = *(int *)(lVar4 + 0x48);
      if ((longlong)iVar2 != 0) {
        lVar19 = *(longlong *)(lVar4 + 0x40);
        lVar20 = 0;
        do {
          uVar14 = uStack_50;
          lVar16 = *(longlong *)(lVar19 + lVar20);
          if (lVar16 != 0) {
            uVar18 = (uint)lVar16;
            if ((int)(uVar18 & 0xffffff) < *(int *)(lVar4 + 0x10)) {
              lVar12 = *(longlong *)(lVar4 + 0x28);
              if (*(longlong *)(lVar4 + 0x28) == 0) {
                lVar12 = lVar4 + 0x18;
              }
              if ((*(uint *)(lVar12 + (ulonglong)((uVar18 & 0xffffff) >> 5) * 4) >> (uVar18 & 0x1f)
                  & 1) != 0) {
                lVar12 = *(longlong *)(lVar4 + 8);
                lVar13 = (ulonglong)(uVar18 & 0xffffff) * 0x70;
                if (((lVar12 + lVar13 != 0) && (*(longlong *)(lVar12 + 0x60 + lVar13) == lVar16)) &&
                   (*(char *)(lVar12 + 1 + lVar13) != '\x04')) {
                  lVar16 = (longlong)(int)uStack_50;
                  uVar18 = (int)uStack_50 + 1;
                  uStack_50 = CONCAT44(uStack_50._4_4_,uVar18);
                  if (uStack_50._4_4_ < uVar18) {
                    FUN_147d7c1b8(&local_58,uVar14 & 0xffffffff);
                  }
                  *(longlong *)(local_58 + lVar16 * 8) = lVar12 + lVar13;
                }
              }
            }
          }
          lVar20 = lVar20 + 8;
        } while ((longlong)iVar2 * 8 != lVar20);
      }
    }
    lVar19 = local_58;
    lVar20 = (longlong)(int)uStack_50;
    if (lVar20 != 0) {
      lVar16 = 0;
      do {
        uVar5 = *(undefined8 *)(lVar19 + lVar16);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        FUN_1437430ef(&DAT_14c872ee0,uVar5);
        lVar16 = lVar16 + 8;
      } while (lVar20 * 8 != lVar16);
    }
    iVar2 = *(int *)(lVar4 + 0x78);
    if (iVar2 == 0) {
      uVar14 = 1;
      iVar15 = 0;
      uVar17 = 0;
      iVar6 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar4 + 0x70);
      if (*(uint **)(lVar4 + 0x70) == (uint *)0x0) {
        puVar8 = (uint *)(lVar4 + 0x60);
      }
      uVar18 = *puVar8;
      if (uVar18 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar14 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar14 = uVar17;
        }
        iVar15 = 0;
        do {
          if (uVar14 == uVar17) goto LAB_1437449fb;
          iVar15 = iVar15 + 0x20;
          uVar18 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar18 == 0);
      }
      else {
        iVar15 = 0;
        uVar17 = 0;
      }
      uVar14 = (ulonglong)(-uVar18 & uVar18);
      uVar1 = uVar14 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar18 = 0xffffffff;
      do {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0x50) + (longlong)iVar6 * 0x10);
        lVar19 = *(longlong *)(lVar4 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        FUN_1437430ef(&DAT_14c872ee0,(ulonglong)((uint)uVar5 & 0xffffff) * 0x70 + lVar19);
        uVar18 = uVar18 & ~(uint)uVar14;
        puVar8 = *(uint **)(lVar4 + 0x70);
        if (*(uint **)(lVar4 + 0x70) == (uint *)0x0) {
          puVar8 = (uint *)(lVar4 + 0x60);
        }
        iVar3 = *(int *)(lVar4 + 0x78);
        iVar6 = (int)uVar17;
        lVar19 = (longlong)iVar6;
        uVar11 = puVar8[lVar19] & uVar18;
        if (uVar11 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar9 = iVar10;
          if (iVar10 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar20 = 0;
            do {
              uVar11 = puVar8[lVar19 + lVar20 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar20 + 1);
                uVar18 = 0xffffffff;
                goto LAB_143744b4e;
              }
              iVar15 = iVar15 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar9 - lVar19 != lVar20);
            uVar18 = 0xffffffff;
            iVar6 = iVar9;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_143744b4e:
          uVar14 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar14 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar6 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
LAB_1437449fb:
    iVar2 = *(int *)(lVar4 + 200);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar17 = 0;
      iVar15 = 0;
      iVar6 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar4 + 0xc0);
      if (*(uint **)(lVar4 + 0xc0) == (uint *)0x0) {
        puVar8 = (uint *)(lVar4 + 0xb0);
      }
      uVar18 = *puVar8;
      if (uVar18 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar17 = 0;
        uVar14 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar14 = uVar17;
        }
        iVar15 = 0;
        do {
          if (uVar14 == uVar17) goto LAB_143744bdb;
          iVar15 = iVar15 + 0x20;
          uVar18 = puVar8[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar17 = 0;
        iVar15 = 0;
      }
      uVar14 = (ulonglong)(-uVar18 & uVar18);
      uVar1 = uVar14 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar18 = 0xffffffff;
      do {
        uVar5 = *(undefined8 *)(*(longlong *)(lVar4 + 0xa0) + (longlong)iVar6 * 0x10);
        lVar19 = *(longlong *)(lVar4 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        FUN_1437430ef(&DAT_14c872ee0,(ulonglong)((uint)uVar5 & 0xffffff) * 0x70 + lVar19);
        uVar18 = uVar18 & ~(uint)uVar14;
        puVar8 = *(uint **)(lVar4 + 0xc0);
        if (*(uint **)(lVar4 + 0xc0) == (uint *)0x0) {
          puVar8 = (uint *)(lVar4 + 0xb0);
        }
        iVar3 = *(int *)(lVar4 + 200);
        iVar6 = (int)uVar17;
        lVar19 = (longlong)iVar6;
        uVar11 = puVar8[lVar19] & uVar18;
        if (uVar11 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar9 = iVar10;
          if (iVar10 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar20 = 0;
            do {
              uVar11 = puVar8[lVar19 + lVar20 + 1];
              if (uVar11 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar20 + 1);
                uVar18 = 0xffffffff;
                goto LAB_143744ce7;
              }
              iVar15 = iVar15 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar9 - lVar19 != lVar20);
            uVar18 = 0xffffffff;
            iVar6 = iVar9;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_143744ce7:
          uVar14 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar14 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar6 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
LAB_143744bdb:
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143744e41 FUN_143744e41 body=69 status=ok
// SIG undefined FUN_143744e41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143744e41(void)

{
  _DAT_14cb0be48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143744e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0be50,1);
  return;
}



// FUNCTION 143744e88 FUN_143744e88 body=866 status=ok
// SIG undefined FUN_143744e88(void)

void FUN_143744e88(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined1 local_90;
  longlong local_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x81) != 0) {
    local_70 = param_4;
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_50,L"Renderer",1);
      uVar5 = local_50;
      uVar4 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar4,uVar5);
    }
    FUN_147d7554c(param_1,*(undefined8 *)(*param_2 + 0x18));
    uVar1 = *(undefined4 *)(param_1[0x80] + 0x90);
    lVar2 = FUN_1417f4ad4(param_2);
    local_58 = param_1 + 0x3b;
    *(undefined8 **)(lVar2 + 0xb8) = local_58;
    *(undefined8 *)(lVar2 + 0xc0) = *param_1;
    *(uint *)(lVar2 + 0xe4) = *(uint *)(lVar2 + 0xe4) & 0xfff03f3f | 0x20080;
    *(undefined4 *)(lVar2 + 0xd0) = uVar1;
    lVar6 = *(longlong *)(lVar2 + 0xa8);
    if (*(longlong *)(lVar2 + 0xa8) == 0) {
      lVar6 = lVar2;
    }
    local_60 = param_1 + 0x14;
    *(undefined8 **)(lVar6 + 0x18) = local_60;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined4 *)(lVar6 + 0x68) = 0;
    *(int *)(lVar6 + 0x6c) = *(int *)(param_1 + 0x81) * 3 + -1;
    *(undefined8 **)(lVar6 + 8) = &DAT_14cb05598;
    if (0 < *(int *)(param_1 + 0x81)) {
      iVar8 = 0;
      lVar7 = 0x90;
      lVar6 = 0;
      do {
        lVar3 = param_1[0x80];
        if (*(int *)(lVar2 + 0xd0) != *(int *)(lVar3 + lVar7)) {
          if (DAT_14cad8310 == (longlong *)0x0) {
            FUN_1446f470e(&local_50,L"Renderer",1);
            local_68 = local_50;
            uVar5 = FUN_144a52528();
            DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar5,local_68);
          }
          local_88 = lVar2 + 0xd0;
          local_90 = param_5;
          local_80 = 0;
          local_98 = lVar2;
          (**(code **)(*DAT_14cad8310 + 0xa8))(DAT_14cad8310,param_2,param_3,local_70);
          uVar1 = *(undefined4 *)(lVar3 + lVar7);
          lVar2 = FUN_1417f4ad4(param_2);
          *(undefined8 **)(lVar2 + 0xb8) = local_58;
          *(undefined8 *)(lVar2 + 0xc0) = *param_1;
          *(uint *)(lVar2 + 0xe4) = *(uint *)(lVar2 + 0xe4) & 0xfff03f3f | 0x20080;
          *(undefined4 *)(lVar2 + 0xd0) = uVar1;
          lVar3 = *(longlong *)(lVar2 + 0xa8);
          if (*(longlong *)(lVar2 + 0xa8) == 0) {
            lVar3 = lVar2;
          }
          *(undefined8 **)(lVar3 + 0x18) = local_60;
          *(undefined8 *)(lVar3 + 0x58) = 0;
          *(undefined4 *)(lVar3 + 0x68) = 0;
          *(int *)(lVar3 + 0x6c) = *(int *)(param_1 + 0x81) * 3 + -1;
          *(undefined8 **)(lVar3 + 8) = &DAT_14cb05598;
          lVar3 = lVar2;
          if (*(longlong *)(lVar2 + 0xa8) != 0) {
            lVar3 = *(longlong *)(lVar2 + 0xa8);
          }
          *(int *)(lVar3 + 0x58) = iVar8;
        }
        lVar3 = *(longlong *)(lVar2 + 0xa8);
        if (*(longlong *)(lVar2 + 0xa8) == 0) {
          lVar3 = lVar2;
        }
        *(int *)(lVar3 + 0x5c) = *(int *)(lVar3 + 0x5c) + 1;
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 3;
        lVar7 = lVar7 + 0x98;
      } while (lVar6 < *(int *)(param_1 + 0x81));
    }
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_50,L"Renderer",1);
      uVar5 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar5,local_50);
    }
    local_88 = lVar2 + 0xd0;
    local_90 = param_5;
    local_80 = 0;
    local_98 = lVar2;
    (**(code **)(*DAT_14cad8310 + 0xa8))(DAT_14cad8310,param_2,param_3,local_70);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437451f0 FUN_1437451f0 body=507 status=ok
// SIG undefined FUN_1437451f0(void)

longlong FUN_1437451f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_40 = &local_20;
      local_20 = (code *)&LAB_14355090c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147b8e16d;
      local_50 = (code *)&LAB_140810a38;
      local_58 = L"Engine";
      local_60 = 0x800000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar2 = DAT_14cae8b20;
    if ((*(int *)(DAT_14cae8b20 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8) == DAT_14cae8b20 + 0x30)) goto LAB_14374528b;
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (param_1 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          param_1 = 0;
        }
      } while ((param_1 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      goto LAB_14374528b;
    }
  }
  param_1 = 0;
LAB_14374528b:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437453ec FUN_1437453ec body=69 status=ok
// SIG undefined FUN_1437453ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437453ec(void)

{
  _DAT_14cb0beb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014374542e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0beb8,1);
  return;
}



// FUNCTION 143745432 FUN_143745432 body=1589 status=ok
// SIG undefined FUN_143745432(void)

bool FUN_143745432(longlong *param_1,longlong param_2,undefined4 *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (((((int)*param_4 == 0) && (*(int *)((longlong)param_4 + 4) == 0)) && ((int)param_4[1] == 0))
     && (*(int *)((longlong)param_4 + 0xc) == 0)) {
    (**(code **)(*param_1 + 0x28))(param_1,&local_78);
    uVar6 = local_78._4_4_;
    (**(code **)(*param_1 + 0x28))(param_1,&local_88);
    *param_4 = 0;
    param_4[1] = CONCAT44(uVar6,(undefined4)local_88);
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_144750f90(param_2,0);
  }
  lVar3 = *param_4;
  lVar4 = param_4[1];
  uStack_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  local_9c = param_3[3];
  uStack_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_143745508;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_143745511;
      goto LAB_1437455a5;
    }
  }
  else {
LAB_143745508:
    if (iVar8 != 0x10) {
LAB_1437455a5:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar5 + 0xc60), iVar8 == 2))
        goto LAB_143745511;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_143745511;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar11 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar11;
        if (puVar13 != (uint *)0x0) goto LAB_14374575a;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14374dad0);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          FUN_140217a48(puVar11);
          puVar13 = (uint *)*puVar11;
LAB_14374575a:
          puVar18 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x1d);
          uVar15 = puVar13[0x12];
          if (puVar17 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar11;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar11 = puVar13;
            puVar18 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar18 + 0x1d);
            uVar15 = 0;
            if (puVar17 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_1437457da;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_1437457da:
        *(uint **)(puVar13 + 0x10) = puVar17;
        puVar13[0x12] = uVar15;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14aae04c0;
        puVar18[0x15] = param_1;
        puVar18[0x16] = lVar3;
        puVar18[0x17] = lVar4;
        puVar18[0x18] = param_2;
        puVar18[0x19] = CONCAT44(uStack_a4,uStack_a8);
        puVar18[0x1a] = CONCAT44(local_9c,uStack_a0);
        *(undefined4 *)((longlong)puVar18 + 0xd4) = local_9c;
        *(undefined4 *)(puVar18 + 0x1b) = uStack_98;
        *(undefined4 *)((longlong)puVar18 + 0xdc) = uStack_94;
        *(undefined4 *)(puVar18 + 0x1c) = uStack_90;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar8 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
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
        lVar3 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar3 == 0) {
          uVar7 = 1;
          if ((char)uVar19 != '\x06') {
            uVar7 = uVar19;
          }
          uVar19 = uVar7;
          uVar14 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar3 + 0x30);
        }
        puVar18[0xf] = uVar14;
        puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_78 = (code *)CONCAT71(local_78._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_78 = (code *)0x0;
        local_68 = (longlong *)FUN_14001cc68(0x48,8);
        *local_68 = (longlong)&PTR_LAB_14aae04a0;
        local_68[1] = (longlong)param_1;
        local_68[2] = lVar3;
        local_68[3] = lVar4;
        local_68[4] = param_2;
        *(ulonglong *)((longlong)local_68 + 0x34) = CONCAT44(uStack_98,local_9c);
        *(ulonglong *)((longlong)local_68 + 0x3c) = CONCAT44(uStack_90,uStack_94);
        *(undefined4 *)(local_68 + 5) = uStack_a8;
        *(undefined4 *)((longlong)local_68 + 0x2c) = uStack_a4;
        *(undefined4 *)(local_68 + 6) = uStack_a0;
        *(undefined4 *)((longlong)local_68 + 0x34) = local_9c;
        if (local_68 + 1 != (longlong *)0x0) {
          local_78 = FUN_143750e80;
        }
        local_b8 = &local_78;
        FUN_14005a792(&DAT_14ca9a440,L"ReadSurfaceCommand",&DAT_14cb0ca54);
        if (local_78 != (code *)0x0) {
          plVar16 = local_68;
          if (local_68 == (longlong *)0x0) {
            plVar16 = local_58;
          }
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      goto LAB_143745683;
    }
  }
LAB_143745511:
  puVar11 = (undefined8 *)(**(code **)(*param_1 + 0x20))(param_1);
  uVar14 = *puVar11;
  local_78 = (code *)0x0;
  uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
  FUN_14007658c(&DAT_14ca850c8,&local_78,5);
  local_78 = (code *)CONCAT44(uStack_a4,uStack_a8);
  uStack_70 = CONCAT44(local_9c,uStack_a0);
  local_68 = (longlong *)CONCAT44(uStack_94,uStack_98);
  uStack_60 = uStack_90;
  local_b8 = &local_78;
  local_88 = lVar3;
  local_80 = lVar4;
  (**(code **)(*DAT_14ca83900 + 0x250))(DAT_14ca83900,uVar14,&local_88,param_2);
LAB_143745683:
  FUN_14080c2b4();
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0 < *(int *)(param_2 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143745a9d FUN_143745a9d body=49 status=ok
// SIG undefined FUN_143745a9d(void)

void FUN_143745a9d(void)

{
  FUN_144760e21(DAT_14cb0ca68,DAT_14cb0ca70);
  if (DAT_14cb0ca68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143745ace FUN_143745ace body=49 status=ok
// SIG undefined FUN_143745ace(void)

void FUN_143745ace(void)

{
  FUN_144760e21(DAT_14cb0bee8,DAT_14cb0bef0);
  if (DAT_14cb0bee8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143745b32 FUN_143745b32 body=69 status=ok
// SIG undefined FUN_143745b32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143745b32(void)

{
  _DAT_14cb0bf10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143745b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0bf18,1);
  return;
}



// FUNCTION 143745b78 FUN_143745b78 body=16287 status=ok
// SIG undefined FUN_143745b78(void)

int FUN_143745b78(float *param_1,longlong *param_2,float *param_3,int param_4,int param_5)

{
  double dVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  double dVar5;
  undefined8 *puVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  size_t sVar14;
  undefined8 uVar15;
  uint *puVar16;
  int iVar17;
  undefined1 *puVar18;
  wchar_t *pwVar19;
  float *pfVar20;
  bool bVar21;
  uint uVar22;
  float *pfVar23;
  int iVar24;
  uint uVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auStack_358 [32];
  float *local_338;
  float *local_330;
  undefined4 *local_328;
  int local_31c;
  char local_315;
  undefined4 local_314;
  ulonglong local_310;
  float *local_308;
  float *local_300;
  float *local_2f8;
  undefined4 local_2ec;
  float *local_2e8;
  float *local_2e0;
  float *local_2d8;
  undefined8 local_2d0;
  ulonglong local_2c8;
  int local_2bc;
  wchar_t *local_2b8;
  int local_2b0;
  float **local_2a8;
  int *local_2a0;
  float *local_298;
  undefined4 *local_290;
  int *local_288;
  float **local_280;
  undefined1 *local_278;
  int local_26c;
  int local_268;
  float local_264;
  float local_260;
  undefined1 local_259;
  float *local_258;
  float *local_250;
  wchar_t *local_248;
  int local_240;
  undefined8 local_238;
  float local_230;
  undefined4 local_22c;
  float local_228;
  float fStack_224;
  float local_220;
  float local_21c;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  LARGE_INTEGER local_178;
  undefined1 local_170 [64];
  undefined1 *local_130;
  longlong local_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  local_250 = param_3;
  if ((DAT_14c866ff0 == '\0') && (DAT_14c846539 != '\x01')) {
    dVar32 = DAT_14c866ff8 - DAT_14c846540;
    dVar5 = DAT_14c83f420;
  }
  else {
    QueryPerformanceCounter(&local_178);
    dVar5 = DAT_14c83f420;
    dVar32 = (double)CONCAT44(local_178.s.HighPart,local_178.s.LowPart) * DAT_14c83f420 + 16777216.0
    ;
    dVar1 = *(double *)(param_1 + 0x4e);
    uVar26 = -(ulonglong)(dVar1 == 0.0);
    *(double *)(param_1 + 0x4e) = dVar32;
    dVar32 = dVar32 - (double)(~uVar26 & (ulonglong)dVar1 | uVar26 & (ulonglong)dVar32);
  }
  param_1[0x4b] = (float)dVar32 * 1000.0;
  param_1[0x24] = param_1[0x24] * 0.9 + (float)dVar32 * 1000.0 * 0.1;
  uVar26 = (ulonglong)DAT_14ca9a348;
  dVar5 = dVar5 * 1000.0;
  param_1[0x29] = (float)((double)uVar26 * dVar5);
  param_1[2] = param_1[2] * 0.9 + (float)((double)uVar26 * dVar5) * 0.1;
  uVar26 = (ulonglong)DAT_14ca9a34c;
  param_1[0x2a] = (float)((double)uVar26 * dVar5);
  param_1[3] = param_1[3] * 0.9 + (float)((double)uVar26 * dVar5) * 0.1;
  uVar26 = (ulonglong)DAT_14ca9a350;
  param_1[0x27] = (float)((double)uVar26 * dVar5);
  *param_1 = *param_1 * 0.9 + (float)((double)uVar26 * dVar5) * 0.1;
  fVar27 = (float)((double)DAT_14ca9a354 * DAT_14c83f420 * 1000.0);
  param_1[0x28] = fVar27;
  param_1[1] = param_1[1] * 0.9 + fVar27 * 0.1;
  fVar27 = (float)((double)DAT_14ca9a358 * DAT_14c83f420 * 1000.0);
  param_1[0x4c] = fVar27;
  param_1[0x25] = param_1[0x25] * 0.9 + fVar27 * 0.1;
  fVar27 = (float)((((double)CONCAT44(0x43300000,(int)DAT_14ca84ad0) - 4503599627370496.0) +
                   ((double)CONCAT44(0x45300000,(int)((ulonglong)DAT_14ca84ad0 >> 0x20)) -
                   1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0);
  param_1[0x4d] = fVar27;
  param_1[0x26] = param_1[0x26] * 0.9 + fVar27 * 0.1;
  FUN_1415e1712(&local_178);
  FUN_1415e18b4(DAT_14cb0d2b0,&local_178);
  if (DAT_14c760da4 != 0) {
    uVar25 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar11 = 0;
    if (uVar25 != 0) {
      for (; (uVar25 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    do {
      uVar9 = (**(code **)(*DAT_14ca83900 + 0x330))(DAT_14ca83900,uVar11);
      fVar27 = (float)((double)uVar9 * DAT_14c83f420 * 1000.0);
      uVar26 = (ulonglong)uVar11;
      param_1[uVar26 + 0x2b] = fVar27;
      param_1[uVar26 + 4] = param_1[uVar26 + 4] * 0.9 + fVar27 * 0.1;
      if (DAT_14ca84e04 == 1) {
        (*(code *)0x0)(&local_228,uVar26);
        param_1[uVar26 + 0x33] = local_228;
        param_1[uVar26 + 0xc] = param_1[uVar26 + 0xc] * 0.9 + local_228 * 0.1;
        param_1[uVar26 + 0x3b] = fStack_224;
        param_1[uVar26 + 0x14] = param_1[uVar26 + 0x14] * 0.9 + fStack_224 * 0.1;
        param_1[uVar26 + 0x43] = local_220;
        param_1[uVar26 + 0x1c] = param_1[uVar26 + 0x1c] * 0.9 + local_220 * 0.1;
      }
      uVar25 = uVar25 & ~(1 << (uVar11 & 0x1f));
      if (uVar25 == 0) {
        uVar11 = 0x20;
      }
      else {
        uVar11 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      }
    } while (uVar25 != 0);
  }
  local_330 = (float *)CONCAT44(local_330._4_4_,param_1[0x25]);
  local_338 = (float *)CONCAT44(local_338._4_4_,param_1[4]);
  FUN_14375d684(DAT_14cb0d2b0);
  if (DAT_14cade070 != 0) {
    local_338 = (float *)(double)param_1[0x4c];
    local_330 = (float *)(double)param_1[0x2b];
    FUN_14350d062(DAT_14cade070,(double)param_1[0x4b],SUB84((double)param_1[0x29],0),
                  (double)param_1[0x27]);
  }
  if ((param_2 == (longlong *)0x0) || (local_250 == (float *)0x0)) goto LAB_143746091;
  local_188 = 0;
  uStack_180 = 0;
  local_198 = 0;
  uStack_190 = 0;
  plVar2 = (longlong *)param_2[6];
  if (plVar2 == (longlong *)0x0) {
    local_2ec = 0;
    local_308 = (float *)((ulonglong)local_308 & 0xffffffff00000000);
    uVar26 = 0;
  }
  else {
    FUN_140056680(&local_228,L"UnitCriticalPath");
    uVar11 = (**(code **)(*plVar2 + 0x170))(plVar2,&local_228);
    uVar26 = (ulonglong)uVar11;
    if (CONCAT44(fStack_224,local_228) != 0) {
      FUN_1400020a8();
    }
    plVar2 = (longlong *)param_2[6];
    if (plVar2 == (longlong *)0x0) {
      local_2ec = 0;
      local_308 = (float *)((ulonglong)local_308 & 0xffffffff00000000);
    }
    else {
      FUN_140056680(&local_228,L"UnitMax");
      uVar10 = (**(code **)(*plVar2 + 0x170))(plVar2,&local_228);
      local_308 = (float *)CONCAT44(local_308._4_4_,uVar10);
      if (CONCAT44(fStack_224,local_228) != 0) {
        FUN_1400020a8();
      }
      plVar2 = (longlong *)param_2[6];
      if (plVar2 == (longlong *)0x0) {
        local_2ec = 0;
      }
      else {
        FUN_140056680(&local_228,&DAT_14aa815f0);
        local_2ec = (**(code **)(*plVar2 + 0x170))(plVar2,&local_228);
        if (CONCAT44(fStack_224,local_228) != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  lVar7 = DAT_14cb0d2b0;
  local_314 = 0xff7fca9f;
  cVar8 = (**(code **)(*param_2 + 0x1d8))(param_2);
  if ((cVar8 == '\0') || (*(longlong **)(lVar7 + 0xfd0) == (longlong *)0x0)) {
    cVar8 = '\0';
  }
  else {
    cVar8 = (**(code **)(**(longlong **)(lVar7 + 0xfd0) + 8))();
  }
  local_258 = *(float **)(DAT_14cb0d2b0 + 0x58);
  plVar2 = (longlong *)param_2[6];
  if (plVar2 == (longlong *)0x0) {
    local_259 = 0;
  }
  else {
    FUN_140056680(&local_228,L"UnitGraph");
    local_259 = (**(code **)(*plVar2 + 0x170))(plVar2,&local_228);
    if (CONCAT44(fStack_224,local_228) != 0) {
      FUN_1400020a8();
    }
  }
  local_1a0 = 0;
  if (DAT_14c760da4 != 0) {
    uVar25 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar11 = 0x20;
    if ((uVar25 != 0) && (uVar11 = 0, uVar25 != 0)) {
      for (; (uVar25 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    do {
      *(bool *)((longlong)&local_1a0 + (ulonglong)uVar11) = 0.0 < param_1[(ulonglong)uVar11 + 0x2b];
      bVar4 = (byte)uVar11 & 0x1f;
      uVar25 = (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4) & uVar25;
      if (uVar25 == 0) {
        uVar11 = 0x20;
      }
      else {
        uVar11 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      }
    } while (uVar25 != 0);
  }
  fVar27 = param_1[0x26];
  local_260 = -NAN;
  FUN_147a9832e(local_258,L" 0000.00 ms ",&local_2a8,&local_228);
  local_264 = local_228;
  if (cVar8 == '\0') {
    fVar28 = 1.0;
  }
  else {
    fVar28 = 0.5;
  }
  local_310 = (ulonglong)((uint)(byte)local_308 + (int)(uVar26 & 0xff) + 1);
  local_268 = (int)(fVar28 * (float)param_4);
  local_2c8 = uVar26 & 0xff;
  fVar28 = (float)FUN_140324d4e(local_258);
  local_26c = (int)(fVar28 * 1.1);
  local_288 = &local_26c;
  local_298 = &local_264;
  local_290 = &param_5;
  local_280 = &local_250;
  local_278 = &local_259;
  local_300 = (float *)CONCAT44(local_300._4_4_,(int)uVar26);
  local_2a8 = &local_258;
  local_2a0 = &local_268;
  if ((char)local_308 != '\0' || (char)uVar26 != '\0') {
    FUN_140056680(&local_248,&DAT_14aadd9b2);
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar28 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = DAT_14c75905c;
    fStack_224 = DAT_14c75905c;
    local_220 = DAT_14c75905c;
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    local_230 = 0.0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      local_230 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * ((int)local_310 + -1)),
                  SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((char)uVar26 != '\0') {
      FUN_140056680(&local_248,L"Critical");
      pfVar23 = local_250;
      pfVar20 = local_258;
      fVar28 = local_264;
      iVar13 = local_268;
      iVar12 = param_5;
      local_228 = DAT_14c75905c;
      fStack_224 = DAT_14c75905c;
      local_220 = DAT_14c75905c;
      local_21c = 1.0;
      local_238 = local_248;
      if (local_240 == 0) {
        local_238 = L"";
      }
      fVar29 = 0.0;
      if (local_238 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_238);
        fVar29 = (float)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_338 = pfVar20;
      local_330 = &local_228;
      local_230 = fVar29;
      FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * ((int)local_310 + -2)),
                    SUB84((double)iVar12,0));
      if (local_248 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((byte)local_308 != '\0') {
      FUN_140056680(&local_248,&DAT_14aa85e12);
      pfVar23 = local_250;
      pfVar20 = local_258;
      iVar13 = local_268;
      iVar12 = param_5;
      local_228 = DAT_14c75905c;
      fStack_224 = DAT_14c75905c;
      local_220 = DAT_14c75905c;
      local_21c = 1.0;
      local_238 = local_248;
      if (local_240 == 0) {
        local_238 = L"";
      }
      fVar28 = 0.0;
      if (local_238 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_238);
        fVar28 = (float)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_338 = pfVar20;
      local_330 = &local_228;
      local_230 = fVar28;
      FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
      if (local_248 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    param_5 = param_5 + local_26c;
  }
  local_228 = -3.0439005e+38;
  uVar10 = 0;
  local_338 = &local_228;
  FUN_143749b18(&local_2a8,0,local_310,L"Frame");
  fVar28 = param_1[0x24];
  fVar29 = (float)FUN_147c473a0();
  fVar30 = (float)FUN_143605286();
  uVar11 = 0xff7fca9f;
  if (fVar30 < fVar28) {
    uVar11 = 0xfff4ba70;
  }
  uVar26 = 0xffe96d63;
  if (fVar28 <= fVar29) {
    uVar26 = (ulonglong)uVar11;
  }
  FUN_140002266(&local_248,L"%3.2f ms",(double)param_1[0x24]);
  pfVar23 = local_250;
  pfVar20 = local_258;
  fVar28 = local_264;
  iVar13 = local_268;
  iVar12 = param_5;
  local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
  fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
  local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
  local_21c = 1.0;
  local_238 = local_248;
  if (local_240 == 0) {
    local_238 = L"";
  }
  if (local_238 != (wchar_t *)0x0) {
    sVar14 = wcslen(local_238);
    uVar10 = (undefined4)sVar14;
  }
  local_31c = (int)local_310 + -1;
  local_328 = &DAT_149e1e308;
  local_338 = pfVar20;
  local_330 = &local_228;
  local_230 = (float)uVar10;
  FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * local_31c),SUB84((double)iVar12,0));
  if (local_248 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((byte)local_308 != '\0') {
    fVar28 = (float)FUN_147c473a0();
    fVar29 = (float)FUN_143605286();
    uVar11 = 0xff7fca9f;
    if (fVar29 < 0.0) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (0.0 <= fVar28) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%4.2f ms",0);
    pfVar23 = local_250;
    pfVar20 = local_258;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    uVar10 = 0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      uVar10 = (undefined4)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = (float)uVar10;
    FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  param_5 = param_5 + local_26c;
  local_228 = -NAN;
  uVar10 = 0;
  local_338 = &local_228;
  FUN_143749b18(&local_2a8,0,local_310,&DAT_149e063b2);
  fVar28 = param_1[2];
  fVar29 = (float)FUN_147c473a0();
  fVar30 = (float)FUN_143605286();
  uVar11 = 0xff7fca9f;
  if (fVar30 < fVar28) {
    uVar11 = 0xfff4ba70;
  }
  uVar26 = 0xffe96d63;
  if (fVar28 <= fVar29) {
    uVar26 = (ulonglong)uVar11;
  }
  FUN_140002266(&local_248,L"%3.2f ms",(double)param_1[2]);
  pfVar23 = local_250;
  pfVar20 = local_258;
  fVar28 = local_264;
  iVar13 = local_268;
  iVar12 = param_5;
  local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
  fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
  local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
  local_21c = 1.0;
  local_238 = local_248;
  if (local_240 == 0) {
    local_238 = L"";
  }
  if (local_238 != (wchar_t *)0x0) {
    sVar14 = wcslen(local_238);
    uVar10 = (undefined4)sVar14;
  }
  local_328 = &DAT_149e1e308;
  local_338 = pfVar20;
  local_330 = &local_228;
  local_230 = (float)uVar10;
  FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * local_31c),SUB84((double)iVar12,0));
  if (local_248 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((char)local_300 != '\0') {
    fVar28 = param_1[3];
    fVar29 = (float)FUN_147c473a0();
    fVar30 = (float)FUN_143605286();
    uVar11 = 0xff7fca9f;
    if (fVar30 < fVar28) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (fVar28 <= fVar29) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%3.2f ms",(double)param_1[3]);
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar28 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    uVar10 = 0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      uVar10 = (undefined4)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = (float)uVar10;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * ((int)local_310 + -2)),
                  SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((byte)local_308 != '\0') {
    fVar28 = (float)FUN_147c473a0();
    fVar29 = (float)FUN_143605286();
    uVar11 = 0xff7fca9f;
    if (fVar29 < 0.0) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (0.0 <= fVar28) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%4.2f ms",0);
    pfVar23 = local_250;
    pfVar20 = local_258;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    uVar10 = 0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      uVar10 = (undefined4)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = (float)uVar10;
    FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  param_5 = param_5 + local_26c;
  local_228 = -3.0358838e+38;
  fVar29 = 0.0;
  local_338 = &local_228;
  FUN_143749b18(&local_2a8,0,local_310,L"Draw");
  fVar28 = *param_1;
  fVar30 = (float)FUN_147c473a0();
  fVar31 = (float)FUN_143605286();
  uVar11 = 0xff7fca9f;
  if (fVar31 < fVar28) {
    uVar11 = 0xfff4ba70;
  }
  uVar26 = 0xffe96d63;
  if (fVar28 <= fVar30) {
    uVar26 = (ulonglong)uVar11;
  }
  FUN_140002266(&local_248,L"%3.2f ms",(double)*param_1);
  pfVar23 = local_250;
  pfVar20 = local_258;
  fVar28 = local_264;
  iVar13 = local_268;
  iVar12 = param_5;
  local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
  fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
  local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
  local_21c = 1.0;
  local_238 = local_248;
  if (local_240 == 0) {
    local_238 = L"";
  }
  if (local_238 != (wchar_t *)0x0) {
    sVar14 = wcslen(local_238);
    fVar29 = (float)sVar14;
  }
  local_328 = &DAT_149e1e308;
  local_338 = pfVar20;
  local_330 = &local_228;
  local_230 = fVar29;
  FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * local_31c),SUB84((double)iVar12,0));
  if (local_248 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((char)local_300 != '\0') {
    fVar28 = param_1[1];
    fVar29 = (float)FUN_147c473a0();
    fVar30 = (float)FUN_143605286();
    uVar11 = 0xff7fca9f;
    if (fVar30 < fVar28) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (fVar28 <= fVar29) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%3.2f ms",(double)param_1[1]);
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar28 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    fVar29 = 0.0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      fVar29 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = fVar29;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * ((int)local_310 + -2)),
                  SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((byte)local_308 != '\0') {
    fVar28 = (float)FUN_147c473a0();
    fVar29 = (float)FUN_143605286();
    uVar11 = 0xff7fca9f;
    if (fVar29 < 0.0) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (0.0 <= fVar28) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%4.2f ms",0);
    pfVar23 = local_250;
    pfVar20 = local_258;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    fVar28 = 0.0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      fVar28 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = fVar28;
    FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  param_5 = param_5 + local_26c;
  if (DAT_14c842750 == '\x01') {
    local_228 = -NAN;
    fVar29 = 0.0;
    local_338 = &local_228;
    FUN_143749b18(&local_2a8,0,local_310,L"RHIT");
    fVar28 = param_1[0x25];
    fVar30 = (float)FUN_147c473a0();
    fVar31 = (float)FUN_143605286();
    uVar11 = 0xff7fca9f;
    if (fVar31 < fVar28) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (fVar28 <= fVar30) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%3.2f ms",(double)param_1[0x25]);
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar28 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      fVar29 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = fVar29;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * local_31c),SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((byte)local_308 != '\0') {
      fVar28 = (float)FUN_147c473a0();
      fVar29 = (float)FUN_143605286();
      uVar11 = 0xff7fca9f;
      if (fVar29 < 0.0) {
        uVar11 = 0xfff4ba70;
      }
      uVar26 = 0xffe96d63;
      if (0.0 <= fVar28) {
        uVar26 = (ulonglong)uVar11;
      }
      FUN_140002266(&local_248,L"%4.2f ms",0);
      pfVar23 = local_250;
      pfVar20 = local_258;
      iVar13 = local_268;
      iVar12 = param_5;
      local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
      fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
      local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
      local_21c = 1.0;
      local_238 = local_248;
      if (local_240 == 0) {
        local_238 = L"";
      }
      fVar28 = 0.0;
      if (local_238 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_238);
        fVar28 = (float)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_338 = pfVar20;
      local_330 = &local_228;
      local_230 = fVar28;
      FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
      if (local_248 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    param_5 = param_5 + local_26c;
  }
  bVar21 = DAT_14ca81480 != 0 || 1 < DAT_14c760da4;
  uVar11 = (uint)DAT_14ca84e04;
  local_338 = &local_228;
  local_228 = -NAN;
  local_300 = (float *)CONCAT44(local_300._4_4_,DAT_14c760da4 * (int)local_310);
  FUN_143749b18(&local_2a8,bVar21,DAT_14c760da4 * (int)local_310,L"GPU Time");
  pfVar20 = local_300;
  cVar8 = bVar21;
  local_315 = bVar21;
  if (DAT_14ca84e04 == 1) {
    local_338 = &local_260;
    FUN_143749b18(&local_2a8,bVar21 + '\x01',(ulonglong)local_300 & 0xffffffff,L"GPU Clock");
    local_338 = &local_260;
    FUN_143749b18(&local_2a8,bVar21 + '\x02',(ulonglong)pfVar20 & 0xffffffff,L"GPU Usage");
    cVar8 = local_315;
    local_338 = &local_260;
    FUN_143749b18(&local_2a8,bVar21 + '\x03',(ulonglong)pfVar20 & 0xffffffff,L"GPU External");
  }
  local_2bc = (uint)bVar21 + uVar11 * 3 + 1;
  if (DAT_14c760da4 != 0) {
    local_2c8 = (ulonglong)((int)local_2c8 + 1);
    uVar25 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar11 = 0;
    if (uVar25 != 0) {
      for (; (uVar25 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    do {
      uVar15 = 0;
      if (cVar8 != '\0') {
        pwVar19 = L"VGPU%d";
        if (DAT_14ca81480 == 0) {
          pwVar19 = L"GPU%d";
        }
        FUN_140002266(&local_248,pwVar19,uVar11);
        pfVar23 = local_250;
        pfVar20 = local_258;
        fVar28 = local_264;
        iVar13 = local_268;
        iVar12 = param_5;
        local_228 = DAT_14c758fd0;
        fStack_224 = DAT_14c758fd0;
        local_220 = DAT_14c758fd0;
        local_21c = 1.0;
        local_238 = L"";
        if (local_240 != 0) {
          local_238 = local_248;
        }
        fVar29 = 0.0;
        if (local_238 != (wchar_t *)0x0) {
          sVar14 = wcslen(local_238);
          fVar29 = (float)sVar14;
        }
        local_328 = &DAT_149e1e308;
        local_330 = &local_228;
        local_338 = pfVar20;
        local_230 = fVar29;
        FUN_147d8e230(pfVar23,(double)(int)(iVar13 - (int)fVar28 *
                                                     (~(uVar11 * (int)local_310) + (int)local_300)),
                      SUB84((double)iVar12,0),&local_238);
        if (local_248 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        uVar15 = 1;
        cVar8 = local_315;
      }
      uVar26 = (ulonglong)uVar11;
      if (*(char *)((longlong)&local_1a0 + uVar26) == '\x01') {
        fVar28 = param_1[uVar26 + 4];
        local_2d0 = uVar15;
        fVar29 = (float)FUN_147c473a0();
        fVar30 = (float)FUN_143605286();
        uVar9 = 0xff7fca9f;
        if (fVar30 < fVar28) {
          uVar9 = 0xfff4ba70;
        }
        if (fVar29 < fVar28) {
          uVar9 = 0xffe96d63;
        }
        FUN_140002266(&local_248,L"%3.2f ms",(double)param_1[uVar26 + 4]);
        fVar28 = local_264;
        iVar24 = local_268;
        iVar13 = local_26c;
        iVar12 = param_5;
        local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar9 >> 0xe & 0x3fc));
        fStack_224 = (float)(&DAT_14c758c60)[uVar9 >> 8 & 0xff];
        local_220 = (float)(&DAT_14c758c60)[uVar9 & 0xff];
        local_21c = 1.0;
        local_238 = L"";
        if (local_240 != 0) {
          local_238 = local_248;
        }
        fVar29 = 0.0;
        pfVar20 = local_258;
        pfVar23 = local_250;
        if (local_238 != (wchar_t *)0x0) {
          local_2d8 = local_250;
          local_2f8 = local_258;
          sVar14 = wcslen(local_238);
          fVar29 = (float)sVar14;
          pfVar20 = local_2f8;
          pfVar23 = local_2d8;
        }
        local_2f8 = (float *)CONCAT44(local_2f8._4_4_,uVar11 * (int)local_310);
        iVar17 = ~(uVar11 * (int)local_310) + (int)local_300;
        local_2d8 = (float *)CONCAT44(local_2d8._4_4_,iVar17);
        local_328 = &DAT_149e1e308;
        local_330 = &local_228;
        local_338 = pfVar20;
        local_230 = fVar29;
        FUN_147d8e230(pfVar23,(double)(iVar24 - (int)fVar28 * iVar17),
                      SUB84((double)(iVar13 * (int)local_2d0 + iVar12),0),&local_238);
        cVar8 = local_315;
        if (local_248 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if ((byte)local_308 != '\0') {
          fVar28 = *(float *)((longlong)&local_198 + uVar26 * 4);
          fVar29 = (float)FUN_147c473a0();
          fVar30 = (float)FUN_143605286();
          uVar9 = 0xff7fca9f;
          if (fVar30 < fVar28) {
            uVar9 = 0xfff4ba70;
          }
          if (fVar29 < fVar28) {
            uVar9 = 0xffe96d63;
          }
          FUN_140002266(&local_248,L"%4.2f ms",(double)fVar28);
          fVar28 = local_264;
          iVar24 = local_268;
          iVar13 = local_26c;
          iVar12 = param_5;
          local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar9 >> 0xe & 0x3fc));
          fStack_224 = (float)(&DAT_14c758c60)[uVar9 >> 8 & 0xff];
          local_220 = (float)(&DAT_14c758c60)[uVar9 & 0xff];
          local_21c = 1.0;
          local_238 = L"";
          if (local_240 != 0) {
            local_238 = local_248;
          }
          fVar29 = 0.0;
          pfVar20 = local_258;
          pfVar23 = local_250;
          if (local_238 != (wchar_t *)0x0) {
            local_2e8 = local_250;
            local_2e0 = local_258;
            sVar14 = wcslen(local_238);
            fVar29 = (float)sVar14;
            pfVar20 = local_2e0;
            pfVar23 = local_2e8;
          }
          local_328 = &DAT_149e1e308;
          local_330 = &local_228;
          local_338 = pfVar20;
          local_230 = fVar29;
          FUN_147d8e230(pfVar23,(double)(iVar24 - (int)fVar28 *
                                                  (~((int)local_2f8 + (int)local_2c8) +
                                                  (int)local_300)),
                        SUB84((double)(iVar13 * (int)local_2d0 + iVar12),0),&local_238);
          cVar8 = local_315;
          if (local_248 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        if (DAT_14ca84e04 == 1 && (DAT_14ca81480 != 0 & uVar11 != 0 & DAT_14ca84e04) == 0) {
          fVar28 = param_1[uVar26 + 0xc];
          uVar9 = 0xff7fca9f;
          if (fVar28 < 0.75) {
            uVar9 = 0xfff4ba70;
          }
          if (fVar28 < 0.5) {
            uVar9 = 0xffe96d63;
          }
          FUN_140002266(&local_248,L"%3.2f %%",(double)(fVar28 * 100.0));
          fVar28 = local_264;
          iVar13 = local_268;
          iVar12 = local_26c;
          local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar9 >> 0xe & 0x3fc));
          fStack_224 = (float)(&DAT_14c758c60)[uVar9 >> 8 & 0xff];
          local_220 = (float)(&DAT_14c758c60)[uVar9 & 0xff];
          local_21c = 1.0;
          local_238 = L"";
          if (local_240 != 0) {
            local_238 = local_248;
          }
          uVar10 = 0;
          pfVar20 = local_258;
          pfVar23 = local_250;
          iVar24 = param_5;
          if (local_238 != (wchar_t *)0x0) {
            local_2f8 = local_250;
            local_2e8 = (float *)CONCAT44(local_2e8._4_4_,param_5);
            local_2e0 = local_258;
            sVar14 = wcslen(local_238);
            uVar10 = (undefined4)sVar14;
            pfVar20 = local_2e0;
            pfVar23 = local_2f8;
            iVar24 = (int)local_2e8;
          }
          local_328 = &DAT_149e1e308;
          local_330 = &local_228;
          local_338 = pfVar20;
          local_230 = (float)uVar10;
          FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * (int)local_2d8),
                        SUB84((double)(iVar12 * ((int)local_2d0 + 1) + iVar24),0),&local_238);
          if (local_248 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          fVar28 = param_1[uVar26 + 0x14];
          uVar9 = 0xff7fca9f;
          if (fVar28 < 0.75) {
            uVar9 = 0xfff4ba70;
          }
          if (fVar28 < 0.5) {
            uVar9 = 0xffe96d63;
          }
          FUN_140002266(&local_248,L"%3.2f %%",(double)(fVar28 * 100.0));
          fVar28 = local_264;
          iVar13 = local_268;
          iVar12 = local_26c;
          local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar9 >> 0xe & 0x3fc));
          fStack_224 = (float)(&DAT_14c758c60)[uVar9 >> 8 & 0xff];
          local_220 = (float)(&DAT_14c758c60)[uVar9 & 0xff];
          local_21c = 1.0;
          local_238 = L"";
          if (local_240 != 0) {
            local_238 = local_248;
          }
          uVar10 = 0;
          pfVar20 = local_258;
          pfVar23 = local_250;
          iVar24 = param_5;
          if (local_238 != (wchar_t *)0x0) {
            local_2f8 = local_250;
            local_2e8 = (float *)CONCAT44(local_2e8._4_4_,param_5);
            local_2e0 = local_258;
            sVar14 = wcslen(local_238);
            uVar10 = (undefined4)sVar14;
            pfVar20 = local_2e0;
            pfVar23 = local_2f8;
            iVar24 = (int)local_2e8;
          }
          local_328 = &DAT_149e1e308;
          local_330 = &local_228;
          local_338 = pfVar20;
          local_230 = (float)uVar10;
          FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar28 * (int)local_2d8),
                        SUB84((double)(iVar12 * ((int)local_2d0 + 2) + iVar24),0),&local_238);
          if (local_248 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          fVar28 = param_1[uVar26 + 0x1c];
          uVar9 = 0xff7fca9f;
          if (0.1 < fVar28) {
            uVar9 = 0xfff4ba70;
          }
          if (0.2 < fVar28) {
            uVar9 = 0xffe96d63;
          }
          FUN_140002266(&local_248,L"%3.2f %%",(double)(fVar28 * 100.0));
          fVar28 = local_264;
          iVar24 = local_268;
          iVar13 = local_26c;
          iVar12 = param_5;
          local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar9 >> 0xe & 0x3fc));
          fStack_224 = (float)(&DAT_14c758c60)[uVar9 >> 8 & 0xff];
          local_220 = (float)(&DAT_14c758c60)[uVar9 & 0xff];
          local_21c = 1.0;
          local_238 = L"";
          if (local_240 != 0) {
            local_238 = local_248;
          }
          fVar29 = 0.0;
          pfVar20 = local_258;
          pfVar23 = local_250;
          if (local_238 != (wchar_t *)0x0) {
            local_2f8 = local_250;
            local_2e8 = local_258;
            sVar14 = wcslen(local_238);
            fVar29 = (float)sVar14;
            pfVar20 = local_2e8;
            pfVar23 = local_2f8;
          }
          local_328 = &DAT_149e1e308;
          local_330 = &local_228;
          local_338 = pfVar20;
          local_230 = fVar29;
          FUN_147d8e230(pfVar23,(double)(iVar24 - (int)fVar28 * (int)local_2d8),
                        SUB84((double)(iVar13 * ((int)local_2d0 + 3) + iVar12),0),&local_238);
          if (local_248 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      bVar4 = (byte)uVar11 & 0x1f;
      uVar25 = uVar25 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
      if (uVar25 == 0) {
        uVar11 = 0x20;
      }
      else {
        uVar11 = 0;
        if (uVar25 != 0) {
          for (; (uVar25 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      }
    } while (uVar25 != 0);
  }
  param_5 = param_5 + local_2bc * local_26c;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0bf30) && (FUN_144b3d300(&DAT_14cb0bf30), DAT_14cb0bf30 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb0bf28 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.ShowStatUnitInput",1)
    ;
    _Init_thread_footer(&DAT_14cb0bf30);
  }
  if (((DAT_14cb0bf28 != (longlong *)0x0) &&
      (iVar12 = (**(code **)(*DAT_14cb0bf28 + 0xb0))(), 0.0 < fVar27)) && (0 < iVar12)) {
    local_228 = -NAN;
    fVar28 = 0.0;
    local_338 = &local_228;
    FUN_143749b18(&local_2a8,0,local_310,L"Input");
    fVar27 = param_1[0x26];
    fVar29 = (float)FUN_147c473a0();
    fVar30 = (float)FUN_143605286();
    uVar11 = 0xff7fca9f;
    if (fVar30 < fVar27 / 2.5) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (fVar27 / 2.5 <= fVar29) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%3.2f ms",(double)param_1[0x26]);
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar27 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    local_21c = 1.0;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      fVar28 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = fVar28;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if ((byte)local_308 != '\0') {
      fVar27 = (float)FUN_147c473a0();
      fVar28 = (float)FUN_143605286();
      uVar11 = 0xff7fca9f;
      if (fVar28 < 0.0) {
        uVar11 = 0xfff4ba70;
      }
      uVar26 = 0xffe96d63;
      if (0.0 <= fVar27) {
        uVar26 = (ulonglong)uVar11;
      }
      FUN_140002266(&local_248,L"%4.2f ms",0);
      pfVar23 = local_250;
      pfVar20 = local_258;
      iVar13 = local_268;
      iVar12 = param_5;
      local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
      fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
      local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
      local_21c = 1.0;
      local_238 = local_248;
      if (local_240 == 0) {
        local_238 = L"";
      }
      fVar27 = 0.0;
      if (local_238 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_238);
        fVar27 = (float)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_338 = pfVar20;
      local_330 = &local_228;
      local_230 = fVar27;
      FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
      if (local_248 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
    param_5 = param_5 + local_26c;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0bf40) && (FUN_144b3d300(&DAT_14cb0bf40), DAT_14cb0bf40 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb0bf38 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.ShowStatUnitMem",1);
    _Init_thread_footer(&DAT_14cb0bf40);
  }
  if ((DAT_14cb0bf38 != (longlong *)0x0) &&
     (iVar12 = (**(code **)(*DAT_14cb0bf38 + 0xb0))(), 0 < iVar12)) {
    if ((byte)local_308 == '\0') {
      FUN_1405d5a96(&local_228);
      if (local_1d0 != 0) {
        local_338 = &local_260;
        fVar28 = 0.0;
        FUN_143749b18(&local_2a8,0,local_310,&DAT_14aaddac4);
        auVar34._8_4_ = (int)((ulonglong)local_1d0 >> 0x20);
        auVar34._0_8_ = local_1d0;
        auVar34._12_4_ = 0x45300000;
        FUN_147d77c74(&local_248,
                      ((double)CONCAT44(0x43300000,(int)local_1d0) - 4503599627370496.0) +
                      (auVar34._8_8_ - 1.9342813113834067e+25));
        pfVar23 = local_250;
        pfVar20 = local_258;
        fVar27 = local_264;
        iVar13 = local_268;
        iVar12 = param_5;
        local_228 = DAT_14c758e5c;
        fStack_224 = DAT_14c758f88;
        local_220 = DAT_14c758edc;
        local_21c = 1.0;
        local_238 = local_248;
        if (local_240 == 0) {
          local_238 = L"";
        }
        if (local_238 != (wchar_t *)0x0) {
          sVar14 = wcslen(local_238);
          fVar28 = (float)sVar14;
        }
        local_328 = &DAT_149e1e308;
        local_338 = pfVar20;
        local_330 = &local_228;
        local_230 = fVar28;
        FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
        if (local_248 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        param_5 = param_5 + local_26c;
      }
    }
    else {
      FUN_1405d5a96(&local_228);
      uVar10 = 0;
      local_338 = &local_260;
      FUN_143749b18(&local_2a8,0,local_310,&DAT_14aaddac4);
      auVar33._0_8_ = (double)CONCAT44(0x43300000,(int)local_1d0);
      auVar33._8_4_ = (int)((ulonglong)local_1d0 >> 0x20);
      auVar33._12_4_ = 0x45300000;
      FUN_147d77c74(&local_2b8,
                    (auVar33._0_8_ - 4503599627370496.0) + (auVar33._8_8_ - 1.9342813113834067e+25))
      ;
      pfVar23 = local_250;
      pfVar20 = local_258;
      fVar27 = local_264;
      iVar13 = local_268;
      iVar12 = param_5;
      local_238 = (wchar_t *)CONCAT44(DAT_14c758f88,DAT_14c758e5c);
      local_230 = DAT_14c758edc;
      local_22c = 0x3f800000;
      local_248 = local_2b8;
      if (local_2b0 == 0) {
        local_248 = L"";
      }
      if (local_248 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_248);
        uVar10 = (undefined4)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_330 = (float *)&local_238;
      local_338 = pfVar20;
      local_240 = uVar10;
      FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
      if (local_2b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      auVar35._0_8_ = (double)CONCAT44(0x43300000,(int)local_1c8);
      auVar35._8_4_ = (int)((ulonglong)local_1c8 >> 0x20);
      auVar35._12_4_ = 0x45300000;
      FUN_147d77c74(&local_2b8,
                    (auVar35._0_8_ - 4503599627370496.0) + (auVar35._8_8_ - 1.9342813113834067e+25))
      ;
      pfVar23 = local_250;
      pfVar20 = local_258;
      iVar13 = local_268;
      iVar12 = param_5;
      local_238 = (wchar_t *)CONCAT44(DAT_14c758f88,DAT_14c758e5c);
      local_230 = DAT_14c758edc;
      local_22c = 0x3f800000;
      local_248 = local_2b8;
      if (local_2b0 == 0) {
        local_248 = L"";
      }
      uVar10 = 0;
      if (local_248 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_248);
        uVar10 = (undefined4)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_330 = (float *)&local_238;
      local_338 = pfVar20;
      local_240 = uVar10;
      FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
      if (local_2b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      param_5 = param_5 + local_26c;
      uVar10 = 0;
      local_338 = &local_260;
      FUN_143749b18(&local_2a8,0,local_310,L"VMem");
      auVar36._0_8_ = (double)CONCAT44(0x43300000,(int)local_1c0);
      auVar36._8_4_ = (int)((ulonglong)local_1c0 >> 0x20);
      auVar36._12_4_ = 0x45300000;
      FUN_147d77c74(&local_2b8,
                    (auVar36._0_8_ - 4503599627370496.0) + (auVar36._8_8_ - 1.9342813113834067e+25))
      ;
      pfVar23 = local_250;
      pfVar20 = local_258;
      fVar27 = local_264;
      iVar13 = local_268;
      iVar12 = param_5;
      local_238 = (wchar_t *)CONCAT44(DAT_14c758f88,DAT_14c758e5c);
      local_230 = DAT_14c758edc;
      local_22c = 0x3f800000;
      local_248 = local_2b8;
      if (local_2b0 == 0) {
        local_248 = L"";
      }
      if (local_248 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_248);
        uVar10 = (undefined4)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_330 = (float *)&local_238;
      local_338 = pfVar20;
      local_240 = uVar10;
      FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
      if (local_2b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      auVar37._0_8_ = (double)CONCAT44(0x43300000,(int)local_1b8);
      auVar37._8_4_ = (int)((ulonglong)local_1b8 >> 0x20);
      auVar37._12_4_ = 0x45300000;
      FUN_147d77c74(&local_2b8,
                    (auVar37._0_8_ - 4503599627370496.0) + (auVar37._8_8_ - 1.9342813113834067e+25))
      ;
      pfVar23 = local_250;
      pfVar20 = local_258;
      iVar13 = local_268;
      iVar12 = param_5;
      local_238 = (wchar_t *)CONCAT44(DAT_14c758f88,DAT_14c758e5c);
      local_230 = DAT_14c758edc;
      local_22c = 0x3f800000;
      local_248 = local_2b8;
      if (local_2b0 == 0) {
        local_248 = L"";
      }
      iVar24 = 0;
      if (local_248 != (wchar_t *)0x0) {
        sVar14 = wcslen(local_248);
        iVar24 = (int)sVar14;
      }
      local_328 = &DAT_149e1e308;
      local_330 = (float *)&local_238;
      local_338 = pfVar20;
      local_240 = iVar24;
      FUN_147d8e230(pfVar23,(double)iVar13,SUB84((double)iVar12,0));
      if (local_2b8 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      param_5 = param_5 + local_26c;
    }
  }
  local_338 = &local_228;
  puVar18 = local_130;
  if (local_130 == (undefined1 *)0x0) {
    puVar18 = local_170;
  }
  fVar27 = *(float *)(puVar18 + (longlong)DAT_14cad82fc * 4);
  local_228 = -NAN;
  FUN_143749b18(&local_2a8,0,local_310,L"DynRes");
  if (4 < local_178.s.LowPart) {
    param_5 = param_5 + local_26c;
    goto LAB_143747c28;
  }
  fVar27 = fVar27 * 100.0;
  switch(local_178.s.LowPart) {
  case 0:
    pwVar19 = L"Unsupported";
    break;
  case 1:
    pwVar19 = L"OFF";
    break;
  case 2:
    FUN_140056680(&local_248,L"Paused");
    goto LAB_143748137;
  case 3:
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0bf50) && (FUN_144b3d300(&DAT_14cb0bf50), DAT_14cb0bf50 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0bf48 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DynamicRes.MinScreenPercentage",1);
      _Init_thread_footer(&DAT_14cb0bf50);
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0bf60) && (FUN_144b3d300(&DAT_14cb0bf60), DAT_14cb0bf60 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cb0bf58 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DynamicRes.MaxScreenPercentage",1);
      _Init_thread_footer(&DAT_14cb0bf60);
    }
    fVar29 = 100.0;
    fVar28 = 100.0;
    if (DAT_14cb0bf48 != (longlong *)0x0) {
      fVar28 = (float)(**(code **)(*DAT_14cb0bf48 + 0xb8))();
    }
    if (DAT_14cb0bf58 != (longlong *)0x0) {
      fVar29 = (float)(**(code **)(*DAT_14cb0bf58 + 0xb8))();
    }
    local_338 = (float *)(double)fVar29;
    uVar11 = 0xff7fca9f;
    if ((fVar29 - fVar28) * 0.25 < fVar29 - fVar27) {
      uVar11 = 0xfff4ba70;
    }
    uVar26 = 0xffe96d63;
    if (fVar29 - fVar27 <= (fVar29 - fVar28) * 0.5) {
      uVar26 = (ulonglong)uVar11;
    }
    FUN_140002266(&local_248,L"%3.1f / (%3.1f-%3.1f)",(double)fVar27,(double)fVar28);
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)((uint)(uVar26 >> 0xe) & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[(uint)(uVar26 >> 8) & 0xff];
    local_220 = (float)(&DAT_14c758c60)[(uint)uVar26 & 0xff];
    goto LAB_143748331;
  case 4:
    FUN_140002266(&local_248,L"%3.1f%% x %3.1f%%",(double)fVar27,(double)fVar27);
LAB_143748137:
    local_228 = DAT_14c758f90;
    fStack_224 = DAT_14c758ec4;
    local_220 = DAT_14c758f90;
    goto LAB_143748331;
  }
  FUN_140056680(&local_248,pwVar19);
  local_228 = DAT_14c758ee0;
  fStack_224 = DAT_14c758ee0;
  local_220 = DAT_14c758ee0;
LAB_143748331:
  pfVar23 = local_250;
  pfVar20 = local_258;
  fVar27 = local_264;
  iVar13 = local_268;
  iVar12 = param_5;
  local_21c = 1.0;
  local_238 = local_248;
  if (local_240 == 0) {
    local_238 = L"";
  }
  fVar28 = 0.0;
  if (local_238 != (wchar_t *)0x0) {
    sVar14 = wcslen(local_238);
    fVar28 = (float)sVar14;
  }
  local_328 = &DAT_149e1e308;
  local_330 = &local_228;
  local_338 = pfVar20;
  local_230 = fVar28;
  FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
  if (local_248 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  param_5 = param_5 + local_26c;
  if ((local_178.s.LowPart == 3) && (puVar6 = DAT_14ca8ba00, DAT_14ca84e02 == '\x01')) {
    for (; puVar6 != (undefined8 *)0x0; puVar6 = (undefined8 *)*puVar6) {
      puVar3 = (undefined8 *)puVar6[2];
      if ((*(int *)((longlong)puVar3 + 100) != DAT_14cad82fc) &&
         (0.0 < *(float *)((longlong)puVar3 + 0x4c))) {
        puVar18 = local_130;
        if (local_130 == (undefined1 *)0x0) {
          puVar18 = local_170;
        }
        fVar27 = *(float *)(puVar18 + (longlong)*(int *)((longlong)puVar3 + 100) * 4);
        FUN_140056680(&local_248,*puVar3);
        FUN_1448097c4(&local_248,L"Dynamic",&DAT_14aaddb34,1);
        FUN_1448097c4(&local_248,L"Resolution",&DAT_14aaddb3c,1);
        puVar16 = &DAT_14aadd990;
        if (0.7 <= fVar27) {
          fVar28 = fVar27 * 0.97;
          if (1.0 <= fVar28) {
            fVar28 = 1.0;
          }
          puVar16 = &DAT_14aadd994;
          if (fVar28 <= fVar27) {
            puVar16 = &local_314;
          }
        }
        uVar11 = *puVar16;
        pwVar19 = L"";
        if (local_240 != 0) {
          pwVar19 = local_248;
        }
        local_338 = (float *)&DAT_149e1e2cc;
        FUN_143749b18(&local_2a8,0,local_310,pwVar19);
        dVar1 = (double)(fVar27 * 100.0);
        fVar27 = (float)(uVar11 >> 0x18) * 0.003921569;
        if (*(int *)(puVar3 + 7) == 2) {
          FUN_140002266(&local_2b8,L"%3.1f%% x %3.1f%%",dVar1,dVar1);
        }
        else {
          FUN_140002266(&local_2b8,L"%3.1f%%",dVar1);
        }
        fVar28 = local_264;
        iVar13 = local_268;
        iVar12 = param_5;
        local_228 = (float)(&DAT_14c758c60)[uVar11 >> 0x10 & 0xff];
        fStack_224 = (float)(&DAT_14c758c60)[uVar11 >> 8 & 0xff];
        local_220 = (float)(&DAT_14c758c60)[uVar11 & 0xff];
        local_238 = L"";
        if (local_2b0 != 0) {
          local_238 = local_2b8;
        }
        fVar29 = 0.0;
        pfVar20 = local_250;
        pfVar23 = local_258;
        local_21c = fVar27;
        if (local_238 != (wchar_t *)0x0) {
          local_308 = local_250;
          local_300 = local_258;
          sVar14 = wcslen(local_238);
          fVar29 = (float)sVar14;
          pfVar20 = local_308;
          pfVar23 = local_300;
        }
        local_328 = &DAT_149e1e308;
        local_330 = &local_228;
        local_338 = pfVar23;
        local_230 = fVar29;
        FUN_147d8e230(pfVar20,(double)(iVar13 - (int)fVar28 * local_31c),SUB84((double)iVar12,0),
                      &local_238);
        if (local_2b8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        param_5 = param_5 + local_26c;
        if (local_248 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_143747c28:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0bf70) && (FUN_144b3d300(&DAT_14cb0bf70), DAT_14cb0bf70 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb0bf68 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.ShowStatUnitDraws",1)
    ;
    _Init_thread_footer(&DAT_14cb0bf70);
  }
  if ((DAT_14cb0bf68 != (longlong *)0x0) &&
     (iVar12 = (**(code **)(*DAT_14cb0bf68 + 0xb0))(), uVar10 = DAT_14ca84ae0, 0 < iVar12)) {
    local_338 = &local_260;
    fVar28 = 0.0;
    FUN_143749b18(&local_2a8,0,local_310,L"Draws");
    FUN_140002266(&local_248,&DAT_149e063bc,uVar10);
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar27 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = (float)(&DAT_14c758c60)[local_314._2_1_];
    fStack_224 = (float)(&DAT_14c758c60)[local_314._1_1_];
    local_220 = (float)(&DAT_14c758c60)[(byte)local_314];
    local_21c = (float)(local_314 >> 0x18) * 0.003921569;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      fVar28 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_330 = &local_228;
    local_338 = pfVar20;
    local_230 = fVar28;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_5 = param_5 + local_26c;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0bf80) && (FUN_144b3d300(&DAT_14cb0bf80), DAT_14cb0bf80 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb0bf78 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.ShowStatUnitPrims",1)
    ;
    _Init_thread_footer(&DAT_14cb0bf80);
  }
  if ((DAT_14cb0bf78 != (longlong *)0x0) &&
     (iVar13 = (**(code **)(*DAT_14cb0bf78 + 0xb0))(), iVar12 = DAT_14ca84b00, 0 < iVar13)) {
    local_338 = &local_260;
    FUN_143749b18(&local_2a8,0,local_310,L"Prims");
    if (iVar12 < 10000) {
      FUN_140002266(&local_248,&DAT_149e063bc,iVar12);
    }
    else {
      FUN_140002266(&local_248,L"%.1fK",(double)((float)iVar12 / 1000.0));
    }
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar27 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = (float)(&DAT_14c758c60)[local_314._2_1_];
    fStack_224 = (float)(&DAT_14c758c60)[local_314._1_1_];
    local_220 = (float)(&DAT_14c758c60)[(byte)local_314];
    local_21c = (float)(local_314 >> 0x18) * 0.003921569;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    fVar28 = 0.0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      fVar28 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = fVar28;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_5 = param_5 + local_26c;
  }
  uVar11 = local_314;
  uVar25 = DAT_14ca964e4;
  if (((char)local_2ec != '\0') && (DAT_14ca964e4 != 0)) {
    uVar26 = (ulonglong)DAT_14ca964e0;
    uVar9 = 0xfff4ba70;
    if (0x1fa3ff < DAT_14ca964e0) {
      uVar9 = local_314;
    }
    uVar22 = 0xffe96d63;
    if (0xe0fff < DAT_14ca964e0) {
      uVar22 = uVar9;
    }
    fVar27 = param_1[0x24];
    local_338 = &local_260;
    FUN_143749b18(&local_2a8,0,local_310,L"TSR feed");
    FUN_140002266(&local_248,L"%.2f MP/s",(double)(((1000.0 / fVar27) * (float)uVar26) / 1e+06));
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar27 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar22 >> 0xe & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[uVar22 >> 8 & 0xff];
    local_220 = (float)(&DAT_14c758c60)[uVar22 & 0xff];
    local_21c = (float)(uVar22 >> 0x18) * 0.003921569;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    uVar10 = 0;
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      uVar10 = (undefined4)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = (float)uVar10;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_5 = param_5 + local_26c;
    fVar27 = powf(SQRT((float)uVar26 / (float)uVar25),-2.0);
    if (fVar27 <= 1.0) {
      fVar27 = 1.0;
    }
    fVar27 = fVar27 * param_1[0x24];
    uVar25 = 0xffe96d63;
    if (fVar27 < 133.33333) {
      uVar25 = 0xfff4ba70;
    }
    if (66.666664 < fVar27) {
      uVar11 = uVar25;
    }
    local_338 = &local_260;
    fVar28 = 0.0;
    FUN_143749b18(&local_2a8,0,local_310,L"TSR 1spp");
    FUN_140002266(&local_248,L"%3.2f ms",(double)fVar27);
    pfVar23 = local_250;
    pfVar20 = local_258;
    fVar27 = local_264;
    iVar13 = local_268;
    iVar12 = param_5;
    local_228 = *(float *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar11 >> 0xe & 0x3fc));
    fStack_224 = (float)(&DAT_14c758c60)[uVar11 >> 8 & 0xff];
    local_220 = (float)(&DAT_14c758c60)[uVar11 & 0xff];
    local_21c = (float)(uVar11 >> 0x18) * 0.003921569;
    local_238 = local_248;
    if (local_240 == 0) {
      local_238 = L"";
    }
    if (local_238 != (wchar_t *)0x0) {
      sVar14 = wcslen(local_238);
      fVar28 = (float)sVar14;
    }
    local_328 = &DAT_149e1e308;
    local_338 = pfVar20;
    local_330 = &local_228;
    local_230 = fVar28;
    FUN_147d8e230(pfVar23,(double)(iVar13 - (int)fVar27 * local_31c),SUB84((double)iVar12,0));
    if (local_248 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    param_5 = param_5 + local_26c;
  }
LAB_143746091:
  iVar12 = param_5;
  if (local_e0 != 0) {
    FUN_1400020a8();
  }
  if (local_130 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_d0 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar12;
}



// FUNCTION 143749b18 FUN_143749b18 body=407 status=ok
// SIG undefined FUN_143749b18(void)

void FUN_143749b18(undefined8 *param_1,int param_2,int param_3,undefined8 param_4,byte *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  size_t sVar8;
  wchar_t *pwVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  int *local_90;
  undefined4 *local_88;
  wchar_t *local_80;
  undefined4 local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  float local_64;
  wchar_t *local_60;
  int local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_140002266(&local_60,L"%s:   ",param_4);
  pwVar9 = L"";
  if (local_58 != 0) {
    pwVar9 = local_60;
  }
  FUN_147a9832e(*(undefined8 *)*param_1,pwVar9,local_4c,&local_70);
  iVar7 = local_70;
  iVar1 = *(int *)param_1[4];
  if (*(char *)param_1[6] == '\0') {
    param_5 = (byte *)&DAT_149e1e2cc;
  }
  iVar2 = *(int *)param_1[1];
  iVar3 = *(int *)param_1[2];
  uVar5 = *(undefined8 *)param_1[5];
  iVar4 = *(int *)param_1[3];
  local_70 = (&DAT_14c758c60)[param_5[2]];
  local_6c = (&DAT_14c758c60)[param_5[1]];
  local_68 = (&DAT_14c758c60)[*param_5];
  local_64 = (float)param_5[3] * 0.003921569;
  local_80 = L"";
  if (local_58 != 0) {
    local_80 = local_60;
  }
  uVar6 = *(undefined8 *)*param_1;
  local_78 = 0;
  if (local_80 != (wchar_t *)0x0) {
    sVar8 = wcslen(local_80);
    local_78 = (int)sVar8;
  }
  local_88 = &DAT_149e1e308;
  local_98 = uVar6;
  local_90 = &local_70;
  FUN_147d8e230(uVar5,(double)((iVar2 - iVar7) + (1 - param_3) * iVar3),
                (double)(param_2 * iVar1 + iVar4));
  if (local_60 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143749cb0 FUN_143749cb0 body=895 status=ok
// SIG undefined FUN_143749cb0(void)

int FUN_143749cb0(double *param_1,undefined8 param_2,longlong param_3,int param_4,int param_5)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 *local_130;
  undefined4 *local_128;
  wchar_t *local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  LARGE_INTEGER local_100;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  QueryPerformanceCounter(&local_100);
  dVar3 = (double)CONCAT44(local_100.s.HighPart,local_100.s.LowPart) * DAT_14c83f420 + 16777216.0;
  if (0.0 < *param_1) {
    fVar9 = (float)(dVar3 - *param_1);
    if (DAT_14c75b138 * 0.001 < fVar9) {
      *(float *)((longlong)param_1[1] + (longlong)*(int *)(param_1 + 5) * 4) = fVar9;
      *(double *)((longlong)param_1[3] + (longlong)*(int *)(param_1 + 5) * 8) = dVar3;
      *(int *)(param_1 + 5) =
           *(int *)(param_1 + 5) + ((*(int *)(param_1 + 5) + 1) / 0x14) * -0x14 + 1;
    }
    (**(code **)(**(longlong **)(param_3 + 0x58) + 0x28))(*(longlong **)(param_3 + 0x58),&local_100)
    ;
    iVar4 = local_100.s.HighPart - param_5;
    lVar8 = 0;
    do {
      dVar1 = *(double *)((longlong)param_1[3] + lVar8 * 8);
      if (((dVar3 + -4.2 <= dVar1) && (0.0 < dVar1)) && (dVar1 <= dVar3)) {
        fVar11 = *(float *)((longlong)param_1[1] + lVar8 * 4) * 1000.0;
        fVar12 = fVar11 * 0.25;
        fVar9 = (float)FUN_147c473a0();
        fVar10 = (float)FUN_143605286();
        uVar7 = 0xff7fca9f;
        if (fVar10 < fVar12) {
          uVar7 = 0xfff4ba70;
        }
        if (fVar9 < fVar12) {
          uVar7 = 0xffe96d63;
        }
        dVar1 = *(double *)((longlong)param_1[3] + lVar8 * 8);
        FUN_140002266(&local_100,&DAT_14aaddc10,(int)fVar11);
        local_110 = *(undefined4 *)((longlong)&DAT_14c758c60 + (ulonglong)(uVar7 >> 0xe & 0x3fc));
        local_10c = (&DAT_14c758c60)[uVar7 >> 8 & 0xff];
        local_108 = (&DAT_14c758c60)[uVar7 & 0xff];
        local_104 = 0x3f800000;
        local_120 = L"";
        if (local_f8 != 0) {
          local_120 = (wchar_t *)CONCAT44(local_100.s.HighPart,local_100.s.LowPart);
        }
        uVar2 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
        uVar5 = 0;
        if (local_120 != (wchar_t *)0x0) {
          sVar6 = wcslen(local_120);
          uVar5 = (int)sVar6;
        }
        local_128 = &DAT_149e1e308;
        local_130 = &local_110;
        local_138 = uVar2;
        local_118 = uVar5;
        FUN_147d8e230(param_3,(double)param_4,
                      (double)((int)((float)((dVar3 - dVar1) / 4.2) * (float)iVar4) + param_5),
                      &local_120);
        if (CONCAT44(local_100.s.HighPart,local_100.s.LowPart) != 0) {
          FUN_1400020a8();
        }
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x14);
  }
  *param_1 = dVar3;
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_5;
}



// FUNCTION 14374a030 FUN_14374a030 body=49 status=ok
// SIG undefined FUN_14374a030(void)

void FUN_14374a030(void)

{
  FUN_144760e21(DAT_14cb0ca98,DAT_14cb0caa0);
  if (DAT_14cb0ca98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14374a062 FUN_14374a062 body=510 status=ok
// SIG undefined FUN_14374a062(void)

ulonglong FUN_14374a062(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 unaff_RBX;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [8];
  longlong *local_190;
  wchar_t *local_188;
  undefined4 local_180;
  undefined4 local_108;
  undefined2 local_103;
  undefined1 local_fc;
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (DAT_14c867cf8 == 0 && DAT_14c867cf4 == 0) {
    uVar3 = *(uint *)(param_1 + 0x14);
    lVar6 = FUN_14034d933();
    DAT_14c867cf4 = (uint)(longlong)((float)uVar3 * *(float *)(lVar6 + 0x20));
    uVar3 = *(uint *)((longlong)param_1 + 0xa4);
    lVar6 = FUN_14034d933();
    DAT_14c867cf8 = (uint)(longlong)((float)uVar3 * *(float *)(lVar6 + 0x20));
  }
  bVar4 = DAT_14c867cf4 <= DAT_14ca84e40;
  bVar5 = DAT_14c867cf8 <= DAT_14ca84e40;
  if (bVar5 && bVar4) {
    *(undefined1 *)((longlong)param_1 + 0xbc) = 1;
    (**(code **)(*param_1 + 0x1b8))(param_1);
    (**(code **)(*param_1 + 0x1b0))(param_1);
  }
  else {
    local_188 = L"HighResScreenshotTooBig";
    local_180 = 0x17;
    FUN_1446e940c(local_54,&local_188);
    local_188 = L"UnrealClient";
    local_180 = 0xc;
    FUN_1446e940c(local_58,&local_188);
    local_188 = 
    L"The high resolution screenshot multiplier is too large for your system. Please try again with a smaller value!"
    ;
    local_180 = 0x6e;
    FUN_140208c1e(local_50,local_58,local_54,&local_188);
    FUN_1469b1e6a(&local_188,local_50);
    local_fc = 1;
    local_108 = 0x40a00000;
    local_103 = 0;
    uVar7 = FUN_1413f66b6();
    FUN_146a1e072(uVar7,local_198,&local_188);
    if (local_190 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_190 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_190)(local_190);
        LOCK();
        piVar2 = (int *)((longlong)local_190 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_190 + 0x10))(local_190);
        }
      }
    }
    DAT_14c867cf1 = 0;
    FUN_1469b2018(&local_188);
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar5 && bVar4) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374a261 FUN_14374a261 body=1254 status=ok
// SIG undefined FUN_14374a261(void)

void FUN_14374a261(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_14374a2a4;
    if (iVar6 != 1) goto LAB_14374a29f;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_14374a2a4;
  }
  else {
LAB_14374a29f:
    if (iVar6 == 0x10) goto LAB_14374a2a4;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_14374a2a4:
      if (param_1 != (longlong *)0x0) {
        (**(code **)(*param_1 + 400))(param_1,&DAT_14ca85100,0,0);
      }
      FUN_1447f69b6(&DAT_14c867450);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14374a2a4;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_14374a482;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14374dad0);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_14374a482:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x16);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar3 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_14374a502;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_14374a502:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14aadfed0;
    puVar16[0x15] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar15 != '\x06') {
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aadfe90;
    local_68[0] = FUN_14374ef3c;
    local_40 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"EndFrameCommand",&DAT_14cb0ca2c);
    if (local_68[0] != (code *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374a75e FUN_14374a75e body=1268 status=ok
// SIG undefined FUN_14374a75e(void)

void FUN_14374a75e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  longlong lVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar17 = DAT_14c872be0 + 1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  DAT_14c872be0 = lVar17;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14374a7ac;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14374a7b1;
      goto LAB_14374a821;
    }
  }
  else {
LAB_14374a7ac:
    if (iVar6 != 0x10) {
LAB_14374a821:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14374a7b1;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14374a7b1;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_14374a985;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14374dad0);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_14374a985:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x17);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar16 + 0x17);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_14374aa05;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_14374aa05:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aadff28;
        puVar16[0x15] = param_1;
        puVar16[0x16] = lVar17;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar15 != '\x06') {
            uVar5 = uVar15;
          }
          uVar15 = uVar5;
          uVar11 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar11;
        puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aadfee0;
        local_68[0] = FUN_14374f154;
        local_40 = param_1;
        local_38 = lVar17;
        FUN_14005a792(&DAT_14ca9a440,L"BeginFrameCommand",&DAT_14cb0ca30);
        if (local_68[0] != (code *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14374a8c4;
    }
  }
LAB_14374a7b1:
  DAT_14c7590b0 = DAT_14c7590b0 + 1;
  DAT_14c867d10 = lVar17;
  FUN_1447f69b6(&DAT_14c86a918);
  if (param_1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
LAB_14374a8c4:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374ac68 FUN_14374ac68 body=51 status=ok
// SIG undefined FUN_14374ac68(void)

int * FUN_14374ac68(longlong param_1,int *param_2)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*DAT_14ca83900 + 0x2c0))(DAT_14ca83900,*(undefined8 *)(param_1 + 0x90));
  *param_2 = 1 << (bVar1 & 0x1f);
  return param_2;
}



// FUNCTION 14374ac9c FUN_14374ac9c body=1200 status=ok
// SIG undefined FUN_14374ac9c(void)

void FUN_14374ac9c(undefined8 param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_14374acdf;
    if (iVar6 != 1) goto LAB_14374acda;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_14374acdf;
  }
  else {
LAB_14374acda:
    if (iVar6 == 0x10) goto LAB_14374acdf;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_14374acdf:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14374acdf;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_14374ae87;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14374dad0);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar10 = (uint *)*puVar2;
LAB_14374ae87:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x16);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar3 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar2;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x16);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_14374af07;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_14374af07:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14aae0608;
    puVar16[0x15] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar15 != '\x06') {
        uVar5 = uVar15;
      }
      uVar15 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar6;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14aae05c0;
    local_68[0] = &LAB_1437511de;
    local_40 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"BeginDrawingCommand",&DAT_14cb0ca58);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374b164 FUN_14374b164 body=4085 status=ok
// SIG undefined FUN_14374b164(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374b164(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  void *_Src;
  DWORD DVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  DWORD DVar12;
  DWORD dwTlsIndex;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong unaff_RBP;
  ulonglong uVar19;
  uint uVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  longlong *plVar25;
  bool bVar26;
  bool bVar27;
  undefined1 auStack_228 [32];
  uint local_208;
  undefined4 local_200;
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  uint local_1e4;
  longlong *local_1e0 [2];
  longlong *local_1d0;
  int local_1c8;
  undefined4 uStack_1c4;
  undefined1 local_1c0;
  undefined8 *local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8 [2];
  longlong *local_198 [2];
  void *local_188;
  int local_180;
  undefined4 local_17c;
  LARGE_INTEGER local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined8 local_140;
  longlong local_138;
  undefined4 local_f8;
  undefined2 local_f3;
  undefined1 local_ec;
  longlong *local_98;
  int local_90;
  undefined1 local_88 [16];
  undefined1 local_78;
  undefined8 *local_70;
  int local_68;
  ulonglong local_48;
  undefined7 uVar20;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  lVar13 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0bfd0) && (FUN_144b3d300(&DAT_14cb0bfd0), DAT_14cb0bfd0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    param_3 = CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    plVar23 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.BufferVisualizationDumpFrames",param_3);
    if (plVar23 == (longlong *)0x0) {
      DAT_14cb0bfc8 = (int *)0x0;
    }
    else {
      DAT_14cb0bfc8 = (int *)(**(code **)(*plVar23 + 0x68))(plVar23);
    }
    _Init_thread_footer(&DAT_14cb0bfd0);
  }
  bVar27 = true;
  bVar26 = DAT_14c867cf1 == '\0';
  DAT_14c867cf1 = '\x01';
  if (bVar26) {
    DAT_14c867cf1 = *(char *)((longlong)param_1 + 0xbc);
  }
  if ((DAT_14cb0ca80 == '\0') && (DAT_14c867cf1 == '\0')) {
    bVar27 = DAT_14c86a9e0 != 0;
  }
  uVar20 = (undefined7)((ulonglong)param_3 >> 8);
  if ((bool)(DAT_14cb0bfc8 != (int *)0x0 & bVar27)) {
    bVar26 = *DAT_14cb0bfc8 != 0;
  }
  else {
    bVar26 = false;
  }
  if (lVar13 == 0) {
LAB_14374b235:
    if (DAT_14c867cf1 == '\0') {
      if ((bool)(bVar27 & bVar26)) {
        local_178.QuadPart = 0;
        uStack_170 = 0;
        FUN_147d7771c(&local_178,0,CONCAT71(uVar20,1),0);
      }
    }
    else {
      lVar14 = FUN_14034d933();
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),*(int *)(lVar14 + 0x50) < 2);
      uVar9 = (**(code **)(*param_1 + 0x48))(param_1);
      local_178.QuadPart = 0;
      uStack_170 = 0;
      FUN_147d7771c(&local_178,0,unaff_RBP & 0xffffffff,uVar9);
      lVar14 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
      _Src = DAT_14cb0ca88;
      if (lVar14 != 0) {
        local_188 = (void *)0x0;
        lVar14 = (longlong)DAT_14cb0ca90;
        local_180 = DAT_14cb0ca90;
        if (lVar14 == 0) {
          local_17c = 0;
        }
        else {
          FUN_1446dd670(&local_188,DAT_14cb0ca90,0);
          memcpy(local_188,_Src,lVar14 * 2);
        }
        plVar23 = (longlong *)FUN_14001cc68(0xd8,0x10);
        FUN_147d77d16(plVar23,param_1[6]);
        uVar8 = (**(code **)(*param_1 + 0x48))(param_1);
        uVar9 = (**(code **)(*param_1 + 0x40))(param_1);
        uVar11 = (**(code **)(*param_1 + 0x38))(param_1);
        *(undefined4 *)(plVar23 + 0x19) = uVar11;
        *(undefined4 *)((longlong)plVar23 + 0xcc) = uVar9;
        *(undefined1 *)(plVar23 + 0x1a) = uVar8;
        iVar24 = DAT_14c867cf4;
        if (DAT_14c867cf4 == 0) {
          iVar24 = (int)param_1[0x14];
        }
        *(int *)(plVar23 + 0x14) = iVar24;
        iVar24 = DAT_14c867cf8;
        if (DAT_14c867cf8 == 0) {
          iVar24 = *(int *)((longlong)param_1 + 0xa4);
        }
        *(int *)((longlong)plVar23 + 0xa4) = iVar24;
        plVar25 = plVar23 + 2;
        if (plVar23 == (longlong *)0x0) {
          plVar25 = (longlong *)0x0;
        }
        FUN_140308182(plVar25,0);
        (**(code **)(*(longlong *)param_1[6] + 0x38))();
        lVar14 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
        local_1e4 = *(uint *)(lVar14 + 4) & 0x2000;
        (**(code **)(*(longlong *)param_1[6] + 0x38))();
        FUN_14034d933();
        lVar14 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
        *(byte *)(lVar14 + 5) = *(byte *)(lVar14 + 5) & 0xdf;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0bf90) &&
           (FUN_144b3d300(&DAT_14cb0bf90), DAT_14cb0bf90 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14cb0bf88 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.SceneColorFormat",1);
          _Init_thread_footer(&DAT_14cb0bf90);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0bfa0) &&
           (FUN_144b3d300(&DAT_14cb0bfa0), DAT_14cb0bfa0 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14cb0bf98 =
               (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PostProcessingColorFormat",1);
          _Init_thread_footer(&DAT_14cb0bfa0);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0bfb0) &&
           (FUN_144b3d300(&DAT_14cb0bfb0), DAT_14cb0bfb0 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          DAT_14cb0bfa8 =
               (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.ForceLOD",1);
          _Init_thread_footer(&DAT_14cb0bfb0);
        }
        local_1ec = (**(code **)(*DAT_14cb0bf88 + 0xb0))();
        local_1e8 = (**(code **)(*DAT_14cb0bf98 + 0xb0))();
        if (DAT_14cb0bfa8 == (longlong *)0x0) {
          local_1f0 = 0xffffffff;
        }
        else {
          local_1f0 = (**(code **)(*DAT_14cb0bfa8 + 0xb0))();
        }
        lVar14 = FUN_14034d933();
        if (*(char *)(lVar14 + 0x42) == '\x01') {
          FUN_140635eb8(DAT_14cb0bf88,5,0xd000000,0);
          FUN_140635eb8(DAT_14cb0bf98,1,0xd000000,0);
        }
        if (DAT_14cb0bfa8 != (longlong *)0x0) {
          FUN_140635eb8(DAT_14cb0bfa8,0,0xd000000,0);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0bfc0) &&
           (FUN_144b3d300(&DAT_14cb0bfc0), DAT_14cb0bfc0 == -1)) {
          if (DAT_14c8407a8 == (longlong *)0x0) {
            FUN_1414b00ea();
          }
          plVar17 = (longlong *)
                    (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.HighResScreenshotDelay",1)
          ;
          if (plVar17 == (longlong *)0x0) {
            DAT_14cb0bfb8 = (int *)0x0;
          }
          else {
            DAT_14cb0bfb8 = (int *)(**(code **)(*plVar17 + 0x68))(plVar17);
          }
          _Init_thread_footer(&DAT_14cb0bfc0);
        }
        if (DAT_14cb0bfb8 == (int *)0x0) {
          iVar24 = 4;
        }
        else {
          iVar24 = 1;
          if (1 < *DAT_14cb0bfb8) {
            iVar24 = *DAT_14cb0bfb8;
          }
        }
        FUN_14374a261(0);
        DAT_14c867cf1 = 0;
        do {
          FUN_14374a75e(plVar23);
          if (iVar24 == 1) {
            DAT_14c867cf1 = 1;
          }
          lVar14 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
          bVar6 = *(byte *)(lVar14 + 0x150);
          uVar16 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
          local_208 = (uint)bVar6;
          local_1f8 = 0x3f800000;
          local_200 = 0;
          FUN_1401fac16(&local_178,plVar23,0,uVar16);
          (**(code **)(*(longlong *)param_1[6] + 0x20))((longlong *)param_1[6],plVar23);
          FUN_14376e4da(&local_178,0);
          lVar14 = (**(code **)(*plVar23 + 0x160))(plVar23);
          *(undefined4 *)(lVar14 + 0x78) = 2;
          uVar16 = (**(code **)(*plVar23 + 0x160))(plVar23);
          FUN_14376e4da(uVar16,1);
          FUN_14374a261(plVar23);
          FUN_14080c2b4();
          FUN_14010ad76(&local_178);
          iVar24 = iVar24 + -1;
        } while (iVar24 != 0);
        (**(code **)(*(longlong *)param_1[6] + 0x38))();
        lVar14 = (**(code **)(*(longlong *)param_1[6] + 0x38))();
        *(uint *)(lVar14 + 4) = *(uint *)(lVar14 + 4) & 0xffffdfff | local_1e4;
        uVar18 = (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6],plVar23);
        unaff_RBP = (ulonglong)uVar18;
        FUN_140635eb8(DAT_14cb0bf88,local_1ec,0xd000000,0);
        FUN_140635eb8(DAT_14cb0bf98,local_1e8,0xd000000,0);
        if (DAT_14cb0bfa8 != (longlong *)0x0) {
          FUN_140635eb8(DAT_14cb0bfa8,local_1f0,0xd000000,0);
        }
        FUN_140414380(plVar25,0);
        FUN_14080c2b4();
        if (plVar23 != (longlong *)0x0) {
          (**(code **)*plVar23)(plVar23,1);
        }
        DAT_14c867cf1 = '\0';
        *(undefined1 *)((longlong)param_1 + 0xbc) = 0;
        cVar7 = (**(code **)(*param_1 + 0x130))(param_1);
        if (((cVar7 == '\0') && ((char)uVar18 != '\0')) && (DAT_14c86aa68 == '\0')) {
          local_178.QuadPart = 0x14aaddfb0;
          uStack_170._0_4_ = 0x18;
          FUN_1446e940c(&local_1d0,&local_178);
          local_178.QuadPart = 0x14aaddf4e;
          uStack_170._0_4_ = 0xc;
          FUN_1446e940c(local_1a8,&local_178);
          local_178.QuadPart = 0x14aaddf68;
          uStack_170 = CONCAT44(uStack_170._4_4_,0x23);
          FUN_140208c1e(local_198,local_1a8,&local_1d0,&local_178);
          FUN_1469b1e6a(&local_178,local_198);
          local_ec = 1;
          local_f8 = 0x40a00000;
          local_f3 = 0;
          FUN_1401aea18(local_1a8,&local_188);
          local_1d0 = (longlong *)0x0;
          local_1c8 = 0;
          FUN_1446efa72(&local_1d0,0,3,0x10);
          plVar23 = local_1d0;
          local_1c8 = 3;
          FUN_147d7ccc6(local_1d0,local_1a8);
          iVar24 = local_1c8;
          plVar25 = local_1d0;
          *plVar23 = (longlong)&PTR_FUN_14aae04d0;
          plVar23[4] = (longlong)FUN_14374f36e;
          local_1d0 = (longlong *)0x0;
          local_1c8 = 0;
          if (local_90 == 0) {
LAB_14374bbf0:
            if (local_98 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_98 != (longlong *)0x0) {
            (**(code **)*local_98)(local_98,0);
            FUN_1446efa72(&local_98,0,0,0x10);
            local_90 = 0;
            goto LAB_14374bbf0;
          }
          local_98 = plVar25;
          local_90 = iVar24;
          if (local_1c8 == 0) {
LAB_14374bc4c:
            if (local_1d0 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_1d0 != (longlong *)0x0) {
            (**(code **)*local_1d0)(local_1d0,0);
            FUN_1446efa72(&local_1d0,0,0,0x10);
            local_1c8 = 0;
            goto LAB_14374bc4c;
          }
          FUN_140009b9a(local_1e0,local_1a8);
          FUN_14023423e(&local_1d0,local_1e0);
          local_1c0 = 1;
          local_1b8 = (undefined8 *)0x0;
          uStack_1b0 = 0;
          FUN_140008f88(local_88,&local_1d0);
          puVar15 = local_1b8;
          local_78 = local_1c0;
          local_1b8 = (undefined8 *)0x0;
          iVar24 = (int)uStack_1b0;
          unaff_RBP = uStack_1b0 & 0xffffffff;
          uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
          if (local_68 == 0) {
LAB_14374bcc5:
            if (local_70 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_70 != (undefined8 *)0x0) {
            (**(code **)*local_70)(local_70,0);
            FUN_1446efa72(&local_70,0,0,0x10);
            local_68 = 0;
            goto LAB_14374bcc5;
          }
          local_70 = puVar15;
          local_68 = iVar24;
          if ((int)uStack_1b0 == 0) {
LAB_14374bd20:
            if (local_1b8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_1b8 != (undefined8 *)0x0) {
            (**(code **)*local_1b8)(local_1b8,0);
            FUN_1446efa72(&local_1b8,0,0,0x10);
            uStack_1b0 = uStack_1b0 & 0xffffffff00000000;
            goto LAB_14374bd20;
          }
          if (local_1d0 != (longlong *)0x0) {
            (**(code **)(*local_1d0 + 0x10))();
          }
          if (local_1e0[0] != (longlong *)0x0) {
            (**(code **)(*local_1e0[0] + 0x10))();
          }
          uVar16 = FUN_1413f66b6();
          FUN_146a1e072(uVar16,&local_1d0);
          plVar23 = (longlong *)CONCAT44(uStack_1c4,local_1c8);
          if (plVar23 != (longlong *)0x0) {
            LOCK();
            plVar25 = plVar23 + 1;
            *(int *)plVar25 = (int)*plVar25 + -1;
            UNLOCK();
            if ((int)*plVar25 == 0) {
              (**(code **)*plVar23)(plVar23);
              LOCK();
              piVar1 = (int *)((longlong)plVar23 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar23 + 0x10))(plVar23);
              }
            }
          }
          if (local_1a8[0] != 0) {
            FUN_1400020a8();
          }
          FUN_1469b2018(&local_178);
          if (local_198[0] != (longlong *)0x0) {
            (**(code **)(*local_198[0] + 0x10))();
          }
        }
        FUN_14374a75e(0);
        if (local_188 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
    if (((int)param_1[0x14] == 0) || (*(int *)((longlong)param_1 + 0xa4) == 0)) {
      if (lVar13 == 0) goto LAB_14374b619;
      bVar6 = *(byte *)(lVar13 + 0x152);
      if ((bVar6 == 1) || ((bVar6 < 7 && ((0x68U >> (bVar6 & 0x1f) & 1) != 0)))) goto LAB_14374b2f4;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0bfe0) && (FUN_144b3d300(&DAT_14cb0bfe0), DAT_14cb0bfe0 == -1))
      {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        plVar23 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VSync",1);
        if (plVar23 == (longlong *)0x0) {
          DAT_14cb0bfd8 = (int *)0x0;
        }
        else {
          DAT_14cb0bfd8 = (int *)(**(code **)(*plVar23 + 0x68))(plVar23);
        }
        _Init_thread_footer(&DAT_14cb0bfe0);
      }
      iVar24 = *DAT_14cb0bfd8;
      uVar20 = (undefined7)(unaff_RBP >> 8);
      uVar19 = CONCAT71(uVar20,iVar24 != 0);
      if ((DAT_14cb0d2b0 != 0 && lVar13 != 0) &&
         (lVar14 = FUN_140d673e2(DAT_14cb0d2b0,lVar13), lVar14 != 0)) {
        if (*(longlong *)(lVar14 + 0x30) == 0) {
          bVar6 = 0;
        }
        else {
          bVar6 = (*(byte *)(*(longlong *)(lVar14 + 0x30) + 0x5a0) & 2) >> 1;
        }
        uVar19 = CONCAT71(uVar20,iVar24 != 0 | bVar6);
      }
      (**(code **)(*param_1 + 0x178))(param_1);
      if (DAT_14c872be0 != DAT_14c761e08) {
        QueryPerformanceCounter(&local_178);
        uVar9 = local_178.s.LowPart;
        dwTlsIndex = DAT_14c758730;
        if (DAT_14c758730 == 0xffffffff) {
          dwTlsIndex = TlsAlloc();
          DVar12 = 0xffffffff;
          LOCK();
          bVar27 = DAT_14c758730 != 0xffffffff;
          DVar5 = dwTlsIndex;
          if (bVar27) {
            DVar12 = DAT_14c758730;
            DVar5 = DAT_14c758730;
          }
          DAT_14c758730 = DVar5;
          UNLOCK();
          if (bVar27) {
            TlsFree(dwTlsIndex);
            dwTlsIndex = DVar12;
          }
        }
        puVar15 = TlsGetValue(dwTlsIndex);
        if (puVar15 == (undefined8 *)0x0) {
          puVar15 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          DVar12 = GetCurrentThreadId();
          *(DWORD *)(puVar15 + 1) = DVar12;
          *puVar15 = &PTR_FUN_149e06328;
          puVar15[2] = 0;
          *(undefined4 *)(puVar15 + 3) = 1;
          *(undefined1 *)((longlong)puVar15 + 0x1c) = 0;
          FUN_140fddf04(puVar15);
          TlsSetValue(dwTlsIndex,puVar15);
        }
        if (DAT_14cb0bfe8 == '\x01') {
          uVar10 = uVar9 - _DAT_14cb0bfe4;
          uVar18 = *(uint *)(puVar15 + 2);
          uVar21 = 0;
          if (uVar18 < uVar10) {
            uVar21 = uVar18;
          }
          DAT_14ca9a348 = uVar10 - uVar21;
          uVar18 = uVar18 - *(int *)((longlong)puVar15 + 0x14);
          if (uVar10 <= uVar18) {
            uVar18 = 0;
          }
          DAT_14ca9a34c = uVar10 - uVar18;
        }
        else {
          DAT_14cb0bfe8 = '\x01';
        }
        DAT_14c761e08 = DAT_14c872be0;
        _DAT_14cb0bfe4 = uVar9;
        puVar15[2] = 0;
        *(undefined4 *)(puVar15 + 3) = 0;
      }
      lVar14 = (**(code **)(*(longlong *)param_1[6] + 0x30))();
      cVar7 = (**(code **)(*(longlong *)param_1[6] + 0x1c0))();
      if (cVar7 == '\0') {
        local_1f8 = 0x3f800000;
      }
      else {
        local_1f8 = (**(code **)(*(longlong *)param_1[6] + 0x1c8))();
      }
      local_208 = DAT_14c760db4;
      if (lVar14 != 0) {
        local_208 = (uint)*(byte *)(lVar14 + 0x150);
      }
      local_200 = 0;
      FUN_1401fac16(&local_178,param_1,0,lVar14);
      local_138 = param_1[0x14];
      local_140 = 0;
      (**(code **)(*(longlong *)param_1[6] + 0x20))((longlong *)param_1[6],param_1,&local_178);
      FUN_14376e4da(&local_178,0);
      FUN_141547016(&DAT_14cadbe80,param_1);
      (**(code **)(*(longlong *)param_1[6] + 0x28))((longlong *)param_1[6],param_1);
      (**(code **)(*param_1 + 0x168))(param_1,uVar19 & 0xffffffff);
      (**(code **)(*param_1 + 0x180))(param_1,uVar19 & 0xffffffff);
      DAT_14ca964b1 = 0;
      FUN_14010ad76(&local_178);
      if (lVar13 == 0) goto LAB_14374b619;
    }
  }
  else {
    bVar6 = *(byte *)(lVar13 + 0x152);
    uVar20 = 0;
    if (((bVar6 != 1) && ((6 < bVar6 || ((0x68U >> (bVar6 & 0x1f) & 1) == 0)))) ||
       (DAT_14c761e04 != '\0')) goto LAB_14374b235;
LAB_14374b2f4:
    if (DAT_14cad5900 == 0) {
      local_168 = 0;
      FUN_141690028(lVar13);
    }
  }
  iVar4 = DAT_14c9647dc;
  lVar14 = DAT_14c9647c8;
  iVar24 = *(int *)(lVar13 + 0x238);
  if (0 < iVar24) {
    lVar22 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(lVar13 + 0x230) + 4 + lVar22 * 8);
      if (((((iVar2 != 0) &&
            (uVar18 = *(uint *)(*(longlong *)(lVar13 + 0x230) + lVar22 * 8), -1 < (int)uVar18)) &&
           ((int)uVar18 < iVar4)) &&
          ((plVar23 = (longlong *)
                      ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                      *(longlong *)(lVar14 + (ulonglong)(uVar18 >> 0x10) * 8)),
           plVar23 != (longlong *)0x0 && ((int)plVar23[2] == iVar2)))) &&
         (((*(uint *)(plVar23 + 1) & 0x10200000) == 0 &&
          ((*plVar23 != 0 && (lVar3 = *(longlong *)(*plVar23 + 0x448), lVar3 != 0)))))) {
        (&DAT_00002e59)[lVar3] = (&DAT_00002e59)[lVar3] & 0xf7;
        iVar24 = *(int *)(lVar13 + 0x238);
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < iVar24);
  }
LAB_14374b619:
  if ((0 < DAT_14cb0bec4) && (DAT_14cb0bec4 = DAT_14cb0bec4 + -1, DAT_14cb0bec4 == 0)) {
    DAT_14c761e04 = '\x01';
  }
  if ((local_48 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14374c15a FUN_14374c15a body=751 status=ok
// SIG undefined FUN_14374c15a(void)

void FUN_14374c15a(longlong *param_1,char param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined1 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14080c2b4();
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(undefined4 *)((longlong)param_1 + 0xa4) = param_4;
  *(undefined4 *)((longlong)param_1 + 0xac) = param_5;
  FUN_140414380(param_1 + 2,0);
  plVar10 = param_1 + 0x12;
  lVar5 = param_1[0x12];
  if (param_2 != '\0') {
    if (lVar5 != 0) {
      *plVar10 = 0;
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar7;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    goto LAB_14374c229;
  }
  if (lVar5 == 0) {
    uVar6 = (**(code **)(*param_1 + 0x130))(param_1);
    uVar4 = *(undefined4 *)((longlong)param_1 + 0xa4);
    lVar5 = param_1[0x14];
    uVar8 = (**(code **)(*param_1 + 0x80))(param_1);
    local_48 = 0;
    local_58 = uVar4;
    local_50 = uVar6;
    (**(code **)(*DAT_14ca83900 + 0x338))(DAT_14ca83900,&local_40,uVar8,(int)lVar5);
    if (plVar10 != &local_40) {
      lVar5 = *plVar10;
      *plVar10 = local_40;
      local_40 = 0;
      if (lVar5 == 0) goto LAB_14374c360;
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar7;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
    lVar5 = local_40;
    if (local_40 != 0) {
      LOCK();
      puVar1 = (uint *)(local_40 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_40 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_40 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar10;
              LOCK();
              bVar11 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar7;
              if (bVar11) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar7;
              if (bVar11) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x130))(param_1);
    local_50 = param_6;
    local_58 = CONCAT31(local_58._1_3_,uVar6);
    (**(code **)(*DAT_14ca83900 + 0x340))
              (DAT_14ca83900,param_1[0x12],(int)param_1[0x14],
               *(undefined4 *)((longlong)param_1 + 0xa4));
  }
LAB_14374c360:
  FUN_140308182(param_1 + 2,0);
  FUN_146401fcc(&DAT_14cb0ca98,param_1,0);
LAB_14374c229:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14374c44a FUN_14374c44a body=933 status=ok
// SIG undefined FUN_14374c44a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374c44a(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_b8 [40];
  longlong local_90 [2];
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  uint local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_56;
  undefined4 local_50;
  wchar_t *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_64 = CONCAT44(param_3,param_2);
  local_90[1] = 9;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_80 = DAT_14ca84d30;
  local_7c = _DAT_14ca84d34;
  uStack_74 = uRam000000014ca84d3c;
  local_68 = 0;
  local_56 = 0xff000200;
  local_50 = 0x70;
  local_48 = L"HitProxyTexture";
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_90,&DAT_14ca85100);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 == local_90) {
LAB_14374c59b:
    lVar4 = local_90[0];
    if (local_90[0] != 0) {
      LOCK();
      puVar1 = (uint *)(local_90[0] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_90[0] + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_90[0] + 0xd);
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
  }
  else {
    lVar4 = *plVar7;
    *plVar7 = local_90[0];
    local_90[0] = 0;
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
      goto LAB_14374c59b;
    }
  }
  local_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_64 = *(undefined8 *)(param_1 + 0x28);
  local_56 = 0xff000200;
  local_90[1] = 0x80000;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_80 = 1;
  local_68 = 0;
  local_7c = 0;
  uStack_74 = 0;
  local_48 = L"HitProxyCPUTexture";
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_50 = 0x70;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_90,&DAT_14ca85100);
  plVar7 = (longlong *)(param_1 + 0x40);
  if (plVar7 != local_90) {
    lVar4 = *plVar7;
    *plVar7 = local_90[0];
    local_90[0] = 0;
    if (lVar4 == 0) goto LAB_14374c765;
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
  lVar4 = local_90[0];
  if (local_90[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_90[0] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_90[0] + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_90[0] + 0xd);
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
LAB_14374c765:
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14374c7f0 FUN_14374c7f0 body=68 status=ok
// SIG undefined FUN_14374c7f0(void)

void FUN_14374c7f0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x20);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 14374c84c FUN_14374c84c body=48 status=ok
// SIG undefined FUN_14374c84c(void)

ulonglong FUN_14374c84c(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*(char *)((longlong)param_1 + 0xc) == '\0') {
    uVar1 = (ulonglong)*(uint *)(param_1 + 1);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x1d8))(param_1);
    *(int *)(param_1 + 1) = (int)uVar1;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return uVar1;
}



// FUNCTION 14374c87c FUN_14374c87c body=512 status=ok
// SIG undefined FUN_14374c87c(void)

void FUN_14374c87c(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined2 local_4c;
  undefined4 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = 0x12;
  if (*(char *)(param_1 + 0xc0) != '\0') {
    uVar5 = DAT_14ca84f4c;
  }
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_5c = *(undefined8 *)(param_1 + 0x90);
  local_4e = 0;
  local_88[1] = 9;
  local_4d = (undefined1)uVar5;
  local_4c = 0xff00;
  local_54 = 0x10001;
  local_50 = 0x101;
  local_78 = 1;
  local_60 = 0;
  local_74 = 0;
  uStack_6c = 0;
  local_48 = 0x70;
  local_40 = L"FDummyViewport";
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_88,&DAT_14ca85100);
  plVar8 = (longlong *)(param_1 + -8);
  if (plVar8 != local_88) {
    lVar4 = *plVar8;
    *plVar8 = local_88[0];
    local_88[0] = 0;
    if (lVar4 == 0) goto LAB_14374ca27;
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
  lVar4 = local_88[0];
  if (local_88[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_88[0] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_88[0] + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_88[0] + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar4;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
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
LAB_14374ca27:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14374ca90 FUN_14374ca90 body=62 status=ok
// SIG undefined FUN_14374ca90(void)

void FUN_14374ca90(void)

{
  DAT_14cb0bff0 = &PTR_FUN_14aadef90;
  if (DAT_14cb0c030 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb0c000 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14374cace FUN_14374cace body=2422 status=ok
// SIG undefined FUN_14374cace(void)

void FUN_14374cace(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  undefined1 *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined1 *)(param_1 + 0x38) = 1;
  lVar13 = *(longlong *)(param_1 + 8);
  *(bool *)(lVar13 + 0x9cf) = *DAT_14cb0bae8 != 0;
  *(bool *)(lVar13 + 0x9d0) = *DAT_14cb0bb00 != 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0c048) && (FUN_144b3d300(&DAT_14cb0c048), DAT_14cb0c048 == -1)) {
    DAT_14cb0c045 = '\0';
    atexit((_func_5014 *)&LAB_14374dabf);
    _Init_thread_footer(&DAT_14cb0c048);
  }
  local_b8 = param_1;
  if (DAT_14cb0c045 == '\0') {
    cVar2 = FUN_1447e0190();
    if ((cVar2 != '\0') && (iVar4 = FUN_140e55850(), 2 < iVar4)) {
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c83f0fc) &&
           (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar3 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
          DAT_14c83f0f8 = bVar3 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
          param_1 = local_b8;
        }
        if (DAT_14c83f0f8 == 0) goto LAB_14374cbed;
      }
      DAT_14cb0c044 = '\0';
      DAT_14cb0c045 = '\x01';
      goto LAB_14374cbde;
    }
LAB_14374cbed:
    DAT_14cb0c044 = '\x01';
    DAT_14cb0c045 = '\x01';
LAB_14374cbfb:
    bVar20 = false;
  }
  else {
    if (DAT_14cb0c044 != '\0') goto LAB_14374cbfb;
LAB_14374cbde:
    bVar20 = *DAT_14cb0bb18 != 0;
  }
  *(bool *)(lVar13 + 0x9cc) = bVar20;
  *(bool *)(lVar13 + 0x9cd) = *DAT_14cb0bb30 != 0;
  *(bool *)(lVar13 + 0x9ce) = *DAT_14cb0bb48 != 0;
  FUN_14151920e(lVar13);
  lVar16 = lVar13 + 0x598;
  lVar17 = 0;
  do {
    lVar11 = lVar17 * 0x30;
    lVar18 = lVar13 + 0x18 + lVar11;
    iVar4 = *(int *)(lVar13 + 0x44 + lVar11);
    lVar12 = *(longlong *)(lVar13 + 0x38 + lVar11);
    if (lVar12 == 0) {
      lVar12 = lVar18;
    }
    FUN_144717c65(lVar12,*(undefined4 *)(lVar13 + 0x40 + lVar11));
    *(undefined4 *)(lVar13 + 0x40 + lVar11) = 0;
    if ((iVar4 < 0) && (*(int *)(lVar18 + 0x2c) != 0)) {
      FUN_14473dbc4(lVar18,0);
    }
    lVar12 = 8;
    lVar18 = lVar16;
    do {
      *(undefined4 *)(lVar18 + 8) = 0;
      if (*(int *)(lVar18 + 0xc) < 0) {
        FUN_145a06d00(lVar18,0);
      }
      *(undefined4 *)(lVar18 + -0x3f8) = 0;
      if (*(int *)(lVar18 + -0x3f4) < 0) {
        FUN_145a06d00(lVar18 + -0x400,0);
      }
      lVar11 = local_b8;
      lVar18 = lVar18 + 0x10;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar17 = lVar17 + 1;
    lVar16 = lVar16 + 0x80;
  } while (lVar17 != 8);
  *(undefined4 *)(lVar13 + 0x9c8) = 0;
  FUN_144a79006(local_b8,param_5);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0c048) && (FUN_144b3d300(&DAT_14cb0c048), DAT_14cb0c048 == -1)) {
    DAT_14cb0c045 = '\0';
    atexit((_func_5014 *)&LAB_14374dabf);
    _Init_thread_footer(&DAT_14cb0c048);
  }
  if (DAT_14cb0c045 == '\0') {
    cVar2 = FUN_1447e0190();
    if ((cVar2 != '\0') && (iVar4 = FUN_140e55850(), 2 < iVar4)) {
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c83f0fc) &&
           (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar3 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
          DAT_14c83f0f8 = bVar3 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
          lVar11 = local_b8;
        }
        if (DAT_14c83f0f8 == 0) goto LAB_14374ce55;
      }
      DAT_14cb0c044 = '\0';
      DAT_14cb0c045 = '\x01';
      goto LAB_14374cdb2;
    }
LAB_14374ce55:
    DAT_14cb0c044 = '\x01';
    DAT_14cb0c045 = '\x01';
  }
  else if (DAT_14cb0c044 == '\0') {
LAB_14374cdb2:
    if (*DAT_14cb0bb60 != 0) {
      if (0 < *(int *)(lVar11 + 0x18)) {
        lVar13 = 0;
        do {
          FUN_147d795ac(*(undefined8 *)(*(longlong *)(lVar11 + 0x10) + lVar13 * 8),param_1 + 0x20,
                        lVar11 + 0x40);
          lVar13 = lVar13 + 1;
        } while (lVar13 < *(int *)(lVar11 + 0x18));
      }
      FUN_147d797c0(*(undefined8 *)(lVar11 + 8),*(undefined4 *)(lVar11 + 0x48));
      iVar4 = *(int *)(lVar11 + 0x18);
      if (0 < iVar4) {
        lVar13 = 0;
        do {
          lVar16 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar13 * 8);
          iVar10 = *(int *)(lVar16 + 0xb8) + *(int *)(lVar11 + 0x48);
          if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar10);
          }
          if (*(int *)(lVar16 + 0xbc) < iVar10) {
            FUN_147d79a34(lVar16 + 0xb0);
            iVar4 = *(int *)(lVar11 + 0x18);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar4);
      }
      local_88 = &local_98;
      local_c8 = &local_80;
      local_80 = 0;
      local_78 = 0;
      local_90 = &LAB_147d79a94;
      local_d0 = 0;
      local_98 = lVar11;
      FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(lVar11 + 0x48),1);
      *(undefined4 *)(lVar11 + 0x48) = 0;
      if (*(int *)(lVar11 + 0x4c) < 0) {
        FUN_1456c3976(lVar11 + 0x40);
      }
      iVar4 = *(int *)(lVar11 + 0x18);
      if (0 < iVar4) {
        lVar13 = 0;
        do {
          lVar16 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar13 * 8);
          iVar10 = *(int *)(lVar16 + 0xb8);
          if (0 < (longlong)iVar10) {
            lVar17 = *(longlong *)(lVar16 + 0xb0);
            lVar18 = 0;
            do {
              if ((*(char *)(lVar17 + 0xc + lVar18) == '\x01') &&
                 (*(char *)(*(longlong *)(lVar17 + lVar18) + 0xb) != '\0')) {
                FUN_1402eb6f0(lVar16 + 8);
              }
              lVar18 = lVar18 + 0x10;
            } while ((longlong)iVar10 * 0x10 != lVar18);
            iVar4 = *(int *)(lVar11 + 0x18);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < iVar4);
      }
      goto LAB_14374d1d0;
    }
  }
  if (0 < *(int *)(lVar11 + 0x18)) {
    lVar13 = 0;
    do {
      lVar16 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar13 * 8);
      *(undefined1 *)(lVar16 + 0x121) = 0;
      *(undefined4 *)(lVar16 + 0x118) = *(undefined4 *)(lVar11 + 0x28);
      *(undefined1 *)(lVar16 + 0x120) = *(undefined1 *)(lVar11 + 0x30);
      *(undefined4 *)(lVar16 + 0x11c) = 1;
      *(undefined8 *)(lVar16 + 0x110) = *(undefined8 *)(lVar11 + 0x20);
      *(undefined1 *)(lVar16 + 0x128) = 1;
      FUN_140080a3e();
      lVar17 = *(longlong *)(lVar16 + 0x58);
      if (lVar17 != 0) {
        fVar22 = 0.0;
        do {
          lVar18 = *(longlong *)(lVar17 + 0x20);
          fVar21 = fVar22 + *(float *)(lVar18 + 0x20);
          if (*(float *)(lVar16 + 0x118) <= fVar21) {
            *(float *)(lVar18 + 0x20) =
                 *(float *)(lVar18 + 0x20) - (*(float *)(lVar16 + 0x118) - fVar22);
            break;
          }
          *(undefined1 *)(lVar17 + 0xb) = 1;
          lVar17 = *(longlong *)(lVar18 + 0x18);
          fVar22 = fVar21;
        } while (lVar17 != 0);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(lVar11 + 0x18));
    if (0 < *(int *)(lVar11 + 0x18)) {
      lVar13 = 0;
      do {
        lVar16 = *(longlong *)(*(longlong *)(lVar11 + 0x10) + lVar13 * 8);
        local_a8 = lVar13;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0ca28) &&
           (FUN_144b3d300(&DAT_14cb0ca28), DAT_14cb0ca28 == -1)) {
          FUN_145c49192();
          atexit((_func_5014 *)&LAB_14374ee9e);
          _Init_thread_footer(&DAT_14cb0ca28);
        }
        iVar4 = *(int *)(lVar16 + 0x30);
        if (iVar4 == 0) {
          uVar19 = 1;
          uVar14 = 0;
          iVar9 = 0;
          iVar10 = 0;
        }
        else {
          puVar8 = *(uint **)(lVar16 + 0x28);
          if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
            puVar8 = (uint *)(lVar16 + 0x18);
          }
          uVar15 = *puVar8;
          if (uVar15 == 0) {
            iVar10 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar10 = iVar4 + -1;
            }
            uVar14 = 0;
            uVar19 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar19 = uVar14;
            }
            iVar9 = 0;
            do {
              if (uVar19 == uVar14) goto LAB_14374d0f0;
              iVar9 = iVar9 + 0x20;
              uVar15 = puVar8[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar15 == 0);
          }
          else {
            uVar14 = 0;
            iVar9 = 0;
          }
          uVar19 = (ulonglong)(-uVar15 & uVar15);
          uVar1 = uVar19 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar10 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar10) {
            iVar10 = iVar4;
          }
        }
        if (iVar10 < iVar4) {
          local_b0 = (longlong *)(lVar16 + 8);
          local_a0 = lVar16 + 0x110;
          uVar15 = 0xffffffff;
          do {
            lVar13 = *(longlong *)(*local_b0 + (longlong)iVar10 * 0x10);
            FUN_14373e6ac(lVar13,local_a0);
            if (0.0 < *(float *)(lVar13 + 0xc)) {
              FUN_1402eb78e(local_b0,iVar10);
              FUN_1410ec8ba(lVar16,lVar13,*(undefined4 *)(lVar13 + 0xc));
            }
            uVar15 = uVar15 & ~(uint)uVar19;
            puVar8 = *(uint **)(lVar16 + 0x28);
            if (*(uint **)(lVar16 + 0x28) == (uint *)0x0) {
              puVar8 = (uint *)(lVar16 + 0x18);
            }
            iVar4 = *(int *)(lVar16 + 0x30);
            iVar10 = (int)uVar14;
            lVar13 = (longlong)iVar10;
            uVar5 = puVar8[lVar13] & uVar15;
            if (uVar5 == 0) {
              iVar6 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar6 = iVar4 + -1;
              }
              iVar6 = iVar6 >> 5;
              iVar7 = iVar6;
              if (iVar6 < iVar10) {
                iVar7 = iVar10;
              }
              if (iVar6 <= iVar10) break;
              lVar17 = 0;
              while( true ) {
                iVar9 = iVar9 + 0x20;
                uVar5 = puVar8[lVar13 + lVar17 + 1];
                if (uVar5 != 0) break;
                lVar17 = lVar17 + 1;
                if (iVar7 - lVar13 == lVar17) goto LAB_14374d0f0;
              }
              uVar14 = (ulonglong)(iVar10 + (int)lVar17 + 1);
              uVar15 = 0xffffffff;
            }
            uVar19 = (ulonglong)(-uVar5 & uVar5);
            uVar1 = uVar19 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar10 = (iVar9 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          } while (iVar10 < iVar4);
        }
LAB_14374d0f0:
        lVar13 = *(longlong *)(lVar16 + 0x58);
        if (lVar13 != 0) {
          fVar22 = 0.0;
          do {
            if (*(char *)(lVar13 + 0xb) != '\x01') break;
            fVar22 = fVar22 + *(float *)(*(longlong *)(lVar13 + 0x20) + 0x20);
            FUN_14373e6ac(lVar13,lVar16 + 0x110);
            FUN_1410ec8ba(lVar16,lVar13,
                          *(float *)(lVar13 + 0xc) - (*(float *)(lVar16 + 0x118) - fVar22));
            lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x20) + 0x18);
            *(longlong *)(lVar16 + 0x58) = lVar13;
          } while (lVar13 != 0);
        }
        lVar13 = local_a8 + 1;
        lVar11 = local_b8;
      } while (lVar13 < *(int *)(local_b8 + 0x18));
    }
  }
  if (*(char *)(*(longlong *)(lVar11 + 8) + 0x9cd) == '\x01') {
    *(undefined1 *)(*(longlong *)(lVar11 + 8) + 0x9cd) = 0;
  }
LAB_14374d1d0:
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374d446 FUN_14374d446 body=1463 status=ok
// SIG undefined FUN_14374d446(void)

void FUN_14374d446(longlong param_1,undefined8 param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong local_88;
  
  FUN_14374daf8(*(undefined8 *)(param_1 + 8));
  *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x01';
  if (param_3 != '\0') {
    iVar16 = 0;
    do {
      if (*(int *)(param_1 + 0x18) < 1) {
        return;
      }
      lVar18 = 0;
      iVar14 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar18 * 8);
        *(undefined1 *)(lVar2 + 0x121) = *(undefined1 *)(param_1 + 0x31);
        iVar17 = 0;
        if (*(int *)(lVar2 + 200) != *(int *)(lVar2 + 0xf4)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cb0ca28) && (FUN_144b3d300(&DAT_14cb0ca28), DAT_14cb0ca28 == -1)) {
            FUN_145c49192();
            atexit((_func_5014 *)&LAB_14374ee9e);
            _Init_thread_footer(&DAT_14cb0ca28);
          }
          iVar4 = *(int *)(lVar2 + 0xe8);
          iVar17 = 0;
          if (iVar4 == 0) {
            uVar8 = 1;
            local_88 = 0;
            iVar10 = 0;
            iVar6 = 0;
          }
          else {
            puVar5 = *(uint **)(lVar2 + 0xe0);
            if (*(uint **)(lVar2 + 0xe0) == (uint *)0x0) {
              puVar5 = (uint *)(lVar2 + 0xd0);
            }
            uVar9 = *puVar5;
            if (uVar9 == 0) {
              iVar6 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar6 = iVar4 + -1;
              }
              local_88 = 0;
              uVar8 = (ulonglong)(uint)(iVar6 >> 5);
              if (iVar6 >> 5 < 1) {
                uVar8 = local_88;
              }
              iVar6 = 0;
              do {
                if (uVar8 == local_88) {
                  iVar17 = 0;
                  goto LAB_14374d713;
                }
                iVar6 = iVar6 + 0x20;
                uVar9 = puVar5[local_88 + 1];
                local_88 = local_88 + 1;
              } while (uVar9 == 0);
            }
            else {
              local_88 = 0;
              iVar6 = 0;
            }
            uVar8 = (ulonglong)(-uVar9 & uVar9);
            uVar15 = uVar8 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar15 != 0) {
              for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar10 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar10) {
              iVar10 = iVar4;
            }
          }
          if (iVar10 < iVar4) {
            uVar9 = 0xffffffff;
            iVar17 = 0;
            do {
              lVar11 = *(longlong *)(*(longlong *)(lVar2 + 0xc0) + (longlong)iVar10 * 0x10);
              FUN_14373e6ac(lVar11,lVar2 + 0x110);
              if (0.0 < *(float *)(lVar11 + 0xc)) {
                FUN_1402eb6f0(lVar2 + 8,lVar11);
                FUN_1410ec8ba(lVar2,lVar11,*(undefined4 *)(lVar11 + 0xc));
              }
              iVar17 = iVar17 + 1;
              uVar9 = uVar9 & ~(uint)uVar8;
              puVar5 = *(uint **)(lVar2 + 0xe0);
              if (*(uint **)(lVar2 + 0xe0) == (uint *)0x0) {
                puVar5 = (uint *)(lVar2 + 0xd0);
              }
              iVar4 = *(int *)(lVar2 + 0xe8);
              iVar10 = (int)local_88;
              lVar11 = (longlong)iVar10;
              uVar3 = puVar5[lVar11] & uVar9;
              if (uVar3 == 0) {
                iVar12 = iVar4 + 0x1e;
                if (-1 < iVar4 + -1) {
                  iVar12 = iVar4 + -1;
                }
                iVar12 = iVar12 >> 5;
                iVar13 = iVar12;
                if (iVar12 < iVar10) {
                  iVar13 = iVar10;
                }
                if (iVar12 <= iVar10) break;
                lVar7 = 0;
                while( true ) {
                  iVar6 = iVar6 + 0x20;
                  uVar3 = puVar5[lVar11 + lVar7 + 1];
                  if (uVar3 != 0) break;
                  lVar7 = lVar7 + 1;
                  if (iVar13 - lVar11 == lVar7) goto LAB_14374d713;
                }
                local_88 = (ulonglong)(iVar10 + (int)lVar7 + 1);
                uVar9 = 0xffffffff;
              }
              uVar8 = (ulonglong)(-uVar3 & uVar3);
              uVar15 = uVar8 * 2 + 1;
              lVar11 = 0x3f;
              if (uVar15 != 0) {
                for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                }
              }
              iVar10 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            } while (iVar10 < iVar4);
          }
LAB_14374d713:
          FUN_14085530e();
        }
        iVar14 = iVar14 + iVar17;
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)(param_1 + 0x18));
      if (iVar14 == 0) {
        return;
      }
      if (*(char *)(param_1 + 0x31) != '\a') {
        return;
      }
      FUN_14374daf8(*(undefined8 *)(param_1 + 8),7);
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0x65);
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar18 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + lVar18 * 8);
        *(undefined1 *)(lVar2 + 0x121) = *(undefined1 *)(param_1 + 0x31);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0ca28) && (FUN_144b3d300(), DAT_14cb0ca28 == -1)) {
          FUN_145c49192();
          atexit((_func_5014 *)&LAB_14374ee9e);
          _Init_thread_footer();
        }
        iVar16 = *(int *)(lVar2 + 0xe8);
        if (iVar16 == 0) {
          uVar15 = 1;
          uVar8 = 0;
          iVar17 = 0;
          iVar14 = 0;
        }
        else {
          puVar5 = *(uint **)(lVar2 + 0xe0);
          if (*(uint **)(lVar2 + 0xe0) == (uint *)0x0) {
            puVar5 = (uint *)(lVar2 + 0xd0);
          }
          uVar9 = *puVar5;
          if (uVar9 == 0) {
            iVar14 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar14 = iVar16 + -1;
            }
            uVar8 = 0;
            uVar15 = (ulonglong)(uint)(iVar14 >> 5);
            if (iVar14 >> 5 < 1) {
              uVar15 = uVar8;
            }
            iVar17 = 0;
            do {
              if (uVar15 == uVar8) goto LAB_14374d97e;
              iVar17 = iVar17 + 0x20;
              uVar9 = puVar5[uVar8 + 1];
              uVar8 = uVar8 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar8 = 0;
            iVar17 = 0;
          }
          uVar15 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar15 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar14 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar16 <= iVar14) {
            iVar14 = iVar16;
          }
        }
        if (iVar14 < iVar16) {
          uVar9 = 0xffffffff;
          do {
            lVar11 = *(longlong *)(*(longlong *)(lVar2 + 0xc0) + (longlong)iVar14 * 0x10);
            if (0.0 < *(float *)(lVar11 + 0xc)) {
              FUN_1402eb6f0(lVar2 + 8,lVar11);
              FUN_1410ec8ba(lVar2,lVar11,*(undefined4 *)(lVar11 + 0xc));
              iVar16 = *(int *)(lVar2 + 0xe8);
            }
            uVar9 = uVar9 & ~(uint)uVar15;
            puVar5 = *(uint **)(lVar2 + 0xe0);
            if (*(uint **)(lVar2 + 0xe0) == (uint *)0x0) {
              puVar5 = (uint *)(lVar2 + 0xd0);
            }
            iVar14 = (int)uVar8;
            lVar11 = (longlong)iVar14;
            uVar3 = puVar5[lVar11] & uVar9;
            if (uVar3 == 0) {
              iVar4 = iVar16 + 0x1e;
              if (-1 < iVar16 + -1) {
                iVar4 = iVar16 + -1;
              }
              iVar4 = iVar4 >> 5;
              iVar6 = iVar4;
              if (iVar4 < iVar14) {
                iVar6 = iVar14;
              }
              if (iVar4 <= iVar14) break;
              lVar7 = 0;
              while( true ) {
                iVar17 = iVar17 + 0x20;
                uVar3 = puVar5[lVar11 + lVar7 + 1];
                if (uVar3 != 0) break;
                lVar7 = lVar7 + 1;
                if (iVar6 - lVar11 == lVar7) goto LAB_14374d97e;
              }
              uVar8 = (ulonglong)(iVar14 + (int)lVar7 + 1);
              uVar9 = 0xffffffff;
            }
            uVar15 = (ulonglong)(-uVar3 & uVar3);
            uVar1 = uVar15 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar14 = (iVar17 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          } while (iVar14 < iVar16);
        }
LAB_14374d97e:
        FUN_14085530e((longlong *)(lVar2 + 0xc0));
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)(param_1 + 0x18));
    }
  }
  return;
}



// FUNCTION 14374d9fe FUN_14374d9fe body=193 status=ok
// SIG undefined FUN_14374d9fe(void)

void FUN_14374d9fe(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  undefined8 unaff_RBP;
  longlong lVar5;
  
  iVar4 = *(int *)(param_2 + 0x198);
  if (0 < iVar4) {
    dVar1 = *(double *)(param_2 + 0x6d0);
    dVar2 = *(double *)(param_2 + 0x6d8);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 400) + lVar5 * 8);
      if (((*(byte *)(lVar3 + 0x240) & 0x20) != 0) &&
         (lVar3 = *(longlong *)(lVar3 + 0x158), lVar3 != 0)) {
        FUN_147d7a7c2(lVar3,param_3,param_4,
                      CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6,
                      (float)dVar1,(float)dVar2);
        iVar4 = *(int *)(param_2 + 0x198);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar4);
  }
  return;
}



// FUNCTION 14374daf8 FUN_14374daf8 body=3155 status=ok
// SIG undefined FUN_14374daf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374daf8(longlong param_1,uint param_2,char param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 *puVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong local_a0;
  undefined8 *local_98;
  longlong *local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  uVar17 = (ulonglong)param_2;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0c048) && (FUN_144b3d300(&DAT_14cb0c048), DAT_14cb0c048 == -1)) {
    DAT_14cb0c045 = '\0';
    atexit((_func_5014 *)&LAB_14374dabf);
    _Init_thread_footer(&DAT_14cb0c048);
  }
  if (DAT_14cb0c045 == '\0') {
    cVar5 = FUN_1447e0190();
    if ((cVar5 != '\0') && (iVar7 = FUN_140e55850(), 2 < iVar7)) {
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c83f0fc) &&
           (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
          DAT_14c83f0f8 = bVar6 ^ 1;
          _Init_thread_footer(&DAT_14c83f0fc);
        }
        if (DAT_14c83f0f8 == 0) goto LAB_14374dcfd;
      }
      DAT_14cb0c044 = 0;
      DAT_14cb0c045 = '\x01';
      goto LAB_14374dbc5;
    }
LAB_14374dcfd:
    DAT_14cb0c044 = 1;
    DAT_14cb0c045 = '\x01';
  }
  else if (DAT_14cb0c044 == 0) {
LAB_14374dbc5:
    plVar3 = DAT_14c82b500;
    if (*DAT_14cb0bb78 != 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar2;
      if (puVar9 != (uint *)0x0) goto LAB_14374dc83;
      do {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_14374dad0);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar8 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar8 = 0xffffffff;
        *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
        puVar8[0x12] = 0;
        *puVar2 = puVar8;
        FUN_140217a48(puVar2);
        puVar9 = (uint *)*puVar2;
LAB_14374dc83:
        uVar19 = *(longlong *)(puVar9 + 0x10) + 7;
        uVar11 = puVar9[0x12];
        while( true ) {
          puVar18 = (undefined8 *)(uVar19 & 0xfffffffffffffff8);
          if (puVar18 + 0x17 <= puVar9 + 0x4000) {
            *(undefined8 **)(puVar9 + 0x10) = puVar18 + 0x17;
            puVar9[0x12] = uVar11 + 1;
            FUN_1447247dc(puVar18,0);
            *puVar18 = &PTR_FUN_14aadf070;
            puVar18[0x15] = param_1;
            *(uint *)(puVar18 + 0x16) = param_2;
            uVar11 = DAT_14cb0bbe8;
            if (((DAT_14cb0bbe0 != 0x400) || (DAT_14c7585d8 != 0)) &&
               ((DAT_14cb0bbe0 != 0x800 || (DAT_14c7585dc != 0)))) {
              uVar11 = DAT_14cb0bbe0 | _DAT_14cb0bbe4;
            }
            uVar12 = uVar11 >> 10 & 3;
            if ((uVar11 >> 9 & 1) == 0 || uVar12 < 2) {
              uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            }
            else {
              uVar19 = 2;
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
            lVar15 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar15 == 0) {
              uVar4 = 1;
              if ((char)uVar19 != '\x06') {
                uVar4 = uVar19;
              }
              uVar19 = uVar4;
              uVar10 = 0;
            }
            else {
              if ((char)uVar19 == '\x06') {
                uVar19 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
              }
              uVar10 = *(undefined8 *)(lVar15 + 0x30);
            }
            puVar18[0xf] = uVar10;
            puVar18[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
            *(undefined4 *)((longlong)puVar18 + 0x1c) = 0;
            if (puVar18 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
              UNLOCK();
            }
            local_78[0] = 1;
            FUN_1447439e4(puVar18,local_78);
            local_58 = (undefined1 *)0x0;
            local_50 = 1;
            local_80 = puVar18;
            FUN_144727e94(local_78,1,0);
            puVar14 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar14 = local_78;
            }
            FUN_144727e6e(puVar14,&local_80,1);
            (**(code **)(*plVar3 + 0x60))(plVar3,local_78,0xff);
            puVar14 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar14 = local_78;
            }
            FUN_144717c65(puVar14,local_50);
            if (local_58 != (undefined1 *)0x0) {
              FUN_1400020a8();
            }
            if (local_80 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_80 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_80)(local_80,1);
              }
            }
            goto LAB_14374dd15;
          }
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar12 = *puVar9;
          *puVar9 = *puVar9 + uVar11 + 1;
          UNLOCK();
          if ((uVar12 ^ uVar11) != 0xffffffff) break;
          puVar9 = (uint *)*puVar2;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          uVar19 = (longlong)puVar9 + 0x5f;
          uVar11 = 0;
        }
      } while( true );
    }
  }
  FUN_14374e74c(param_1,uVar17);
LAB_14374dd15:
  if (param_3 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0c048) && (FUN_144b3d300(&DAT_14cb0c048), DAT_14cb0c048 == -1)) {
      DAT_14cb0c045 = '\0';
      atexit((_func_5014 *)&LAB_14374dabf);
      _Init_thread_footer(&DAT_14cb0c048);
    }
    if (DAT_14cb0c045 == '\0') {
      cVar5 = FUN_1447e0190();
      if ((cVar5 != '\0') && (iVar7 = FUN_140e55850(), 2 < iVar7)) {
        if (DAT_14c846b14 == '\x01') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
            DAT_14c83f0f8 = bVar6 ^ 1;
            _Init_thread_footer(&DAT_14c83f0fc);
          }
          if (DAT_14c83f0f8 == 0) goto LAB_14374ddc2;
        }
        DAT_14cb0c044 = 0;
        DAT_14cb0c045 = '\x01';
        goto LAB_14374ddae;
      }
LAB_14374ddc2:
      DAT_14cb0c044 = 1;
      DAT_14cb0c045 = '\x01';
    }
    else if (DAT_14cb0c044 != 1) {
LAB_14374ddae:
      (**(code **)(*DAT_14c82b500 + 0x48))(DAT_14c82b500,1);
      goto LAB_14374ddf6;
    }
  }
  lVar15 = (longlong)*(int *)(param_1 + 0x9c8);
  local_a0 = uVar17;
  if (*(int *)(param_1 + 0x9c8) <= (int)param_2) {
    local_a8 = param_1 + 0x998;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar16 + 0x308);
    local_98 = (undefined8 *)(lVar16 + 0x310);
    local_88 = 0x527800b400;
    local_90 = (longlong *)(lVar16 + 0x2b8);
    do {
      if (*(int *)(param_1 + 0x40 + lVar15 * 0x30) != 0) {
        lVar16 = lVar15 * 0x30 + param_1 + 0x18;
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,lVar16,1);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb0c048) &&
           (FUN_144b3d300(&DAT_14cb0c048), DAT_14cb0c048 == -1)) {
          DAT_14cb0c045 = '\0';
          atexit((_func_5014 *)&LAB_14374dabf);
          _Init_thread_footer(&DAT_14cb0c048);
        }
        if (DAT_14cb0c045 == '\x01') {
LAB_14374def3:
          if ((((lVar15 != 7) && ((DAT_14cb0c044 & 1) == 0)) && (*DAT_14cb0bb90 != 0)) &&
             (0x31 < *(int *)(lVar16 + 0x28))) {
            puVar9 = (uint *)*puVar2;
            if (puVar9 != (uint *)0x0) goto LAB_14374df90;
            do {
              puVar18 = local_98;
              uVar11 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar11 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar11 | 1;
                __tlregdtor(&LAB_14374dad0);
              }
              puVar8 = (undefined4 *)*puVar18;
              *puVar18 = 0;
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar8 = 0xffffffff;
              *(undefined4 **)(puVar8 + 0x10) = puVar8 + 0x16;
              puVar8[0x12] = 0;
              *puVar2 = puVar8;
              FUN_140217a48(puVar2);
              puVar9 = (uint *)*puVar2;
LAB_14374df90:
              uVar17 = *(longlong *)(puVar9 + 0x10) + 7;
              uVar11 = puVar9[0x12];
              while( true ) {
                puVar18 = (undefined8 *)(uVar17 & 0xfffffffffffffff8);
                if (puVar18 + 0x17 <= puVar9 + 0x4000) {
                  *(undefined8 **)(puVar9 + 0x10) = puVar18 + 0x17;
                  puVar9[0x12] = uVar11 + 1;
                  FUN_1447247dc(puVar18,0);
                  *puVar18 = &PTR_FUN_14aadf080;
                  puVar18[0x15] = param_1;
                  *(int *)(puVar18 + 0x16) = (int)lVar15;
                  uVar11 = DAT_14cb0bc28;
                  if (((DAT_14cb0bc20 != 0x400) || (DAT_14c7585d8 != 0)) &&
                     ((DAT_14cb0bc20 != 0x800 || (DAT_14c7585dc != 0)))) {
                    uVar11 = DAT_14cb0bc20 | _DAT_14cb0bc24;
                  }
                  uVar12 = uVar11 >> 10 & 3;
                  if ((uVar11 >> 9 & 1) == 0 || uVar12 < 2) {
                    uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
                  }
                  else {
                    uVar17 = 2;
                  }
                  if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
                  }
                  puVar18[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar18[9] = puVar18;
                  puVar18[10] = puVar18;
                  lVar16 = *local_90;
                  if (lVar16 == 0) {
                    if ((char)uVar17 == '\x06') {
                      uVar17 = 1;
                    }
                    uVar10 = 0;
                  }
                  else {
                    if ((char)uVar17 == '\x06') {
                      uVar17 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
                    }
                    uVar10 = *(undefined8 *)(lVar16 + 0x30);
                  }
                  puVar18[0xf] = uVar10;
                  puVar18[0x10] = (uVar17 << 0x3b) + local_88 | 0xc000000000000000;
                  *(undefined4 *)((longlong)puVar18 + 0x1c) = 0;
                  if (puVar18 != (undefined8 *)0x0) {
                    LOCK();
                    *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
                    UNLOCK();
                  }
                  local_78[0] = 1;
                  FUN_1447439e4(puVar18,local_78);
                  iVar7 = *(int *)(param_1 + 0x9c0);
                  *(uint *)(param_1 + 0x9c0) = iVar7 + 1U;
                  if (*(uint *)(param_1 + 0x9c4) < iVar7 + 1U) {
                    FUN_14476a5c8(local_a8,iVar7);
                  }
                  lVar16 = *(longlong *)(param_1 + 0x9b8);
                  if (*(longlong *)(param_1 + 0x9b8) == 0) {
                    lVar16 = local_a8;
                  }
                  *(undefined8 **)(lVar16 + (longlong)iVar7 * 8) = puVar18;
                  goto LAB_14374e09e;
                }
                *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
                LOCK();
                uVar12 = *puVar9;
                *puVar9 = *puVar9 + uVar11 + 1;
                UNLOCK();
                if ((uVar12 ^ uVar11) != 0xffffffff) break;
                puVar9 = (uint *)*puVar2;
                *puVar9 = 0xffffffff;
                *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
                puVar9[0x12] = 0;
                *puVar2 = puVar9;
                uVar17 = (longlong)puVar9 + 0x5f;
                uVar11 = 0;
              }
            } while( true );
          }
        }
        else {
          cVar5 = FUN_1447e0190();
          if ((cVar5 != '\0') && (iVar7 = FUN_140e55850(), 2 < iVar7)) {
            if (DAT_14c846b14 == '\x01') {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c83f0fc) &&
                 (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
                if (DAT_14c846b14 == '\0') {
                  FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                                L"Attempting to get the command line but it hasn\'t been initialized yet."
                               );
                }
                bVar6 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
                DAT_14c83f0f8 = bVar6 ^ 1;
                _Init_thread_footer(&DAT_14c83f0fc);
              }
              if (DAT_14c83f0f8 == 0) goto LAB_14374e067;
            }
            DAT_14cb0c044 = 0;
            DAT_14cb0c045 = '\x01';
            goto LAB_14374def3;
          }
LAB_14374e067:
          DAT_14cb0c044 = 1;
          DAT_14cb0c045 = '\x01';
        }
        iVar7 = *(int *)(lVar16 + 0x2c);
        lVar13 = *(longlong *)(lVar16 + 0x20);
        if (*(longlong *)(lVar16 + 0x20) == 0) {
          lVar13 = lVar16;
        }
        FUN_144717c65(lVar13,*(undefined4 *)(lVar16 + 0x28));
        *(undefined4 *)(lVar16 + 0x28) = 0;
        if ((iVar7 < 0) && (*(int *)(lVar16 + 0x2c) != 0)) {
          FUN_14473dbc4(lVar16,0);
        }
      }
LAB_14374e09e:
      lVar15 = lVar15 + 1;
    } while (param_2 + 1 != (int)lVar15);
  }
  *(uint *)(param_1 + 0x9c8) = (uint)((int)local_a0 != 7) + (int)local_a0;
LAB_14374ddf6:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14374e74c FUN_14374e74c body=424 status=ok
// SIG undefined FUN_14374e74c(void)

void FUN_14374e74c(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [46];
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (longlong)param_2;
  lVar3 = 0;
  do {
    plVar1 = (longlong *)(lVar3 * 0x10 + param_1 + 0x198 + lVar4 * 0x80);
    if ((lVar4 <= lVar3) && (0 < (int)plVar1[1])) {
      lVar2 = 0;
      do {
        local_4a = 1;
        FUN_1447439e4(*(undefined8 *)(*plVar1 + lVar2 * 8),&local_4a);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)plVar1[1]);
    }
    *(undefined4 *)(plVar1 + 1) = 0;
    if (*(int *)((longlong)plVar1 + 0xc) < 0) {
      FUN_145a06d00(plVar1,0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  lVar3 = 0;
  do {
    plVar1 = (longlong *)(lVar3 * 0x10 + param_1 + 0x598 + lVar4 * 0x80);
    if ((lVar4 <= lVar3) && (0 < (int)plVar1[1])) {
      lVar2 = 0;
      do {
        local_49 = 1;
        FUN_1447439e4(*(undefined8 *)(*plVar1 + lVar2 * 8),&local_49);
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)plVar1[1]);
    }
    *(undefined4 *)(plVar1 + 1) = 0;
    if (*(int *)((longlong)plVar1 + 0xc) < 0) {
      FUN_145a06d00(plVar1,0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 8);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374e8f6 FUN_14374e8f6 body=282 status=ok
// SIG undefined FUN_14374e8f6(void)

undefined8 * FUN_14374e8f6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374ea10 FUN_14374ea10 body=282 status=ok
// SIG undefined FUN_14374ea10(void)

undefined8 * FUN_14374ea10(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374eb2a FUN_14374eb2a body=282 status=ok
// SIG undefined FUN_14374eb2a(void)

undefined8 * FUN_14374eb2a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374ec44 FUN_14374ec44 body=319 status=ok
// SIG undefined FUN_14374ec44(void)

void FUN_14374ec44(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  float fVar1;
  longlong lVar2;
  longlong *plVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = (longlong)*(int *)(*param_1 + 0x20);
  if (lVar7 != 0) {
    lVar2 = *(longlong *)(*param_1 + 0x18);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (*(char *)((longlong)param_1 + 0x1a) == '\x01') {
        local_60 = *(undefined1 *)((longlong)param_1 + 0x1b);
        local_5c = 0;
        local_50 = &local_64;
        local_58 = FUN_143750172;
        local_64 = param_2;
        (**(code **)(*plVar3 + 0x20))(plVar3,&local_58);
      }
      if (*(char *)((longlong)plVar3 + 0xb) != '\0') {
        lVar5 = param_1[3];
        uVar10 = *(uint *)(param_1 + 2);
        pbVar4 = (byte *)plVar3[4];
        if ((*pbVar4 & 2) == 0) {
          pbVar4[0x24] = 0;
          pbVar4[0x25] = 0;
          pbVar4[0x26] = 0x80;
          pbVar4[0x27] = 0xbf;
        }
        else {
          fVar9 = (float)*(double *)
                          (param_1[1] + 0x6d0 +
                          (ulonglong)(*(byte *)((longlong)plVar3 + 10) & 1) * 8);
          fVar1 = *(float *)(pbVar4 + 0x24);
          *(float *)(pbVar4 + 0x24) = fVar9;
          uVar8 = -(uint)(fVar1 < 0.0);
          uVar10 = uVar8 & uVar10 | ~uVar8 & (uint)(fVar9 - fVar1);
        }
        local_78 = param_3;
        (**(code **)(*plVar3 + 8))(plVar3,uVar10,(char)lVar5,param_2);
      }
      *(undefined1 *)(plVar3[4] + 1) = 0;
      *(undefined8 *)(plVar3[4] + 0x10) = 0;
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374ed84 FUN_14374ed84 body=282 status=ok
// SIG undefined FUN_14374ed84(void)

undefined8 * FUN_14374ed84(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374ef3c FUN_14374ef3c body=71 status=ok
// SIG undefined FUN_14374ef3c(void)

void FUN_14374ef3c(longlong *param_1,undefined8 param_2)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 400))(param_1,param_2,0,0);
  }
  FUN_1447f69b6(&DAT_14c867450);
                    /* WARNING: Could not recover jumptable at 0x00014374ef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,param_2);
  return;
}



// FUNCTION 14374ef8e FUN_14374ef8e body=12 status=ok
// SIG undefined FUN_14374ef8e(void)

void FUN_14374ef8e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014374ef97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14374ef9a FUN_14374ef9a body=29 status=ok
// SIG undefined FUN_14374ef9a(void)

undefined8 FUN_14374ef9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374efb8 FUN_14374efb8 body=282 status=ok
// SIG undefined FUN_14374efb8(void)

undefined8 * FUN_14374efb8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374f0d2 FUN_14374f0d2 body=129 status=ok
// SIG undefined FUN_14374f0d2(void)

void FUN_14374f0d2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 400))(plVar2,&DAT_14ca85100,0,0);
  }
  FUN_1447f69b6(&DAT_14c867450);
  (**(code **)(*DAT_14ca83900 + 0x38))(DAT_14ca83900,&DAT_14ca85100);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014374f149. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14374f154 FUN_14374f154 body=79 status=ok
// SIG undefined FUN_14374f154(void)

void FUN_14374f154(longlong *param_1,undefined8 param_2)

{
  DAT_14c867d10 = param_1[1];
  DAT_14c7590b0 = DAT_14c7590b0 + 1;
  FUN_1447f69b6(&DAT_14c86a918);
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014374f198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 14374f1ae FUN_14374f1ae body=12 status=ok
// SIG undefined FUN_14374f1ae(void)

void FUN_14374f1ae(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014374f1b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14374f1ba FUN_14374f1ba body=29 status=ok
// SIG undefined FUN_14374f1ba(void)

undefined8 FUN_14374f1ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374f1d8 FUN_14374f1d8 body=282 status=ok
// SIG undefined FUN_14374f1d8(void)

undefined8 * FUN_14374f1d8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374f2f2 FUN_14374f2f2 body=123 status=ok
// SIG undefined FUN_14374f2f2(void)

void FUN_14374f2f2(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  DAT_14c867d10 = param_1[0x16];
  DAT_14c7590b0 = DAT_14c7590b0 + 1;
  FUN_1447f69b6(&DAT_14c86a918);
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x188))(plVar2,&DAT_14ca85100);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014374f363. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14374f36e FUN_14374f36e body=122 status=ok
// SIG undefined FUN_14374f36e(void)

void FUN_14374f36e(longlong *param_1)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140bee914(&local_28,param_1);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_14683078c(puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14374f3ea FUN_14374f3ea body=110 status=ok
// SIG undefined FUN_14374f3ea(void)

void FUN_14374f3ea(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar2 = param_1[2];
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  if (((*(int *)(lVar3 + 0xbc) != (int)param_1[1]) || (*(int *)(lVar3 + 0xc0) != iVar1)) ||
     (*(int *)(lVar3 + 0xc4) != (int)lVar2)) {
    *(int *)(lVar3 + 0xbc) = (int)param_1[1];
    *(int *)(lVar3 + 0xc0) = iVar1;
    *(int *)(lVar3 + 0xc4) = (int)lVar2;
    FUN_1447fd100(lVar3,&DAT_14ca85100);
    lVar3 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00014374f455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar3 + 0x60))(lVar3 + 0x60,param_2,1);
  return;
}



// FUNCTION 14374f462 FUN_14374f462 body=12 status=ok
// SIG undefined FUN_14374f462(void)

void FUN_14374f462(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014374f46b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14374f46e FUN_14374f46e body=29 status=ok
// SIG undefined FUN_14374f46e(void)

undefined8 FUN_14374f46e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374f48c FUN_14374f48c body=282 status=ok
// SIG undefined FUN_14374f48c(void)

undefined8 * FUN_14374f48c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374f5a6 FUN_14374f5a6 body=172 status=ok
// SIG undefined FUN_14374f5a6(void)

void FUN_14374f5a6(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar4 = param_1[0x15];
  iVar2 = *(int *)(param_1 + 0x17);
  iVar3 = *(int *)((longlong)param_1 + 0xb4);
  if (((*(int *)(lVar4 + 0xbc) != *(int *)(param_1 + 0x16)) || (*(int *)(lVar4 + 0xc0) != iVar3)) ||
     (*(int *)(lVar4 + 0xc4) != iVar2)) {
    *(int *)(lVar4 + 0xbc) = *(int *)(param_1 + 0x16);
    *(int *)(lVar4 + 0xc0) = iVar3;
    *(int *)(lVar4 + 0xc4) = iVar2;
    FUN_1447fd100(lVar4,&DAT_14ca85100);
    lVar4 = param_1[0x15];
  }
  (*(code *)**(undefined8 **)(lVar4 + 0x60))(lVar4 + 0x60,&DAT_14ca85100,1);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014374f648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14374f674 FUN_14374f674 body=12 status=ok
// SIG undefined FUN_14374f674(void)

void FUN_14374f674(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014374f67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14374f680 FUN_14374f680 body=29 status=ok
// SIG undefined FUN_14374f680(void)

undefined8 FUN_14374f680(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374f69e FUN_14374f69e body=282 status=ok
// SIG undefined FUN_14374f69e(void)

undefined8 * FUN_14374f69e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374f7b8 FUN_14374f7b8 body=137 status=ok
// SIG undefined FUN_14374f7b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374f7b8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014374f837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(_DAT_000000a8 + 0x60))
              (_DAT_000000a8 + 0x60,&DAT_14ca85100,DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (*(code *)**(undefined8 **)(param_1[0x15] + 0x60))
            (param_1[0x15] + 0x60,&DAT_14ca85100,*(undefined1 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014374f807. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14374f864 FUN_14374f864 body=12 status=ok
// SIG undefined FUN_14374f864(void)

void FUN_14374f864(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014374f86d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14374f870 FUN_14374f870 body=29 status=ok
// SIG undefined FUN_14374f870(void)

undefined8 FUN_14374f870(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374f88e FUN_14374f88e body=282 status=ok
// SIG undefined FUN_14374f88e(void)

undefined8 * FUN_14374f88e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374f9a8 FUN_14374f9a8 body=137 status=ok
// SIG undefined FUN_14374f9a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374f9a8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014374fa27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(_DAT_000000a8 + 0x60))
              (_DAT_000000a8 + 0x60,&DAT_14ca85100,DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (*(code *)**(undefined8 **)(param_1[0x15] + 0x60))
            (param_1[0x15] + 0x60,&DAT_14ca85100,*(undefined1 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014374f9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14374fa54 FUN_14374fa54 body=12 status=ok
// SIG undefined FUN_14374fa54(void)

void FUN_14374fa54(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014374fa5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14374fa60 FUN_14374fa60 body=29 status=ok
// SIG undefined FUN_14374fa60(void)

undefined8 FUN_14374fa60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374fa7e FUN_14374fa7e body=282 status=ok
// SIG undefined FUN_14374fa7e(void)

undefined8 * FUN_14374fa7e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374fb98 FUN_14374fb98 body=137 status=ok
// SIG undefined FUN_14374fb98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374fb98(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014374fc17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(_DAT_000000a8 + 0x60))
              (_DAT_000000a8 + 0x60,&DAT_14ca85100,DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (*(code *)**(undefined8 **)(param_1[0x15] + 0x60))
            (param_1[0x15] + 0x60,&DAT_14ca85100,*(undefined1 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014374fbe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14374fc44 FUN_14374fc44 body=12 status=ok
// SIG undefined FUN_14374fc44(void)

void FUN_14374fc44(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014374fc4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14374fc50 FUN_14374fc50 body=29 status=ok
// SIG undefined FUN_14374fc50(void)

undefined8 FUN_14374fc50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374fc6e FUN_14374fc6e body=282 status=ok
// SIG undefined FUN_14374fc6e(void)

undefined8 * FUN_14374fc6e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14374fd88 FUN_14374fd88 body=137 status=ok
// SIG undefined FUN_14374fd88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14374fd88(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014374fe07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)(_DAT_000000a8 + 0x60))
              (_DAT_000000a8 + 0x60,&DAT_14ca85100,DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (*(code *)**(undefined8 **)(param_1[0x15] + 0x60))
            (param_1[0x15] + 0x60,&DAT_14ca85100,*(undefined1 *)(param_1 + 0x16));
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014374fdd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14374fe12 FUN_14374fe12 body=222 status=ok
// SIG undefined FUN_14374fe12(void)

void FUN_14374fe12(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 *local_80;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = param_1[3];
  iVar1 = *(int *)((longlong)param_1 + 0x34);
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)(*param_1 + 0x50) + 0x10))(*param_1 + 0x50);
  uVar3 = *puVar6;
  local_60 = 0;
  local_58 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_60,5);
  local_60 = 6;
  local_58 = CONCAT31(local_58._1_3_,1);
  local_54 = 0x467a0000;
  local_50 = 0;
  local_4c = 0;
  local_88 = lVar2;
  local_80 = &local_60;
  local_70 = lVar4;
  lStack_68 = lVar5;
  (**(code **)(*DAT_14ca83900 + 0x280))(DAT_14ca83900,uVar3,&local_70,CONCAT44(iVar1 + 1,iVar1));
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14374fefc FUN_14374fefc body=29 status=ok
// SIG undefined FUN_14374fefc(void)

void FUN_14374fefc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14374ff1a FUN_14374ff1a body=29 status=ok
// SIG undefined FUN_14374ff1a(void)

undefined8 FUN_14374ff1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14374ff38 FUN_14374ff38 body=282 status=ok
// SIG undefined FUN_14374ff38(void)

undefined8 * FUN_14374ff38(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 143750052 FUN_143750052 body=287 status=ok
// SIG undefined FUN_143750052(void)

void FUN_143750052(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined8 local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar3 = param_1[0x18];
  iVar2 = *(int *)((longlong)param_1 + 0xdc);
  uVar5 = param_1[0x16];
  uVar6 = param_1[0x17];
  puVar7 = (undefined8 *)
           (**(code **)(*(longlong *)(param_1[0x15] + 0x50) + 0x10))(param_1[0x15] + 0x50);
  uVar4 = *puVar7;
  local_70 = 0;
  local_68 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_70,5);
  local_70 = 6;
  local_68 = CONCAT31(local_68._1_3_,1);
  local_64 = 0x467a0000;
  local_60 = 0;
  local_5c = 0;
  local_98 = uVar3;
  local_90 = &local_70;
  local_80 = uVar5;
  uStack_78 = uVar6;
  (**(code **)(*DAT_14ca83900 + 0x280))(DAT_14ca83900,uVar4,&local_80,CONCAT44(iVar2 + 1,iVar2));
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143750172 FUN_143750172 body=105 status=ok
// SIG undefined FUN_143750172(void)

void FUN_143750172(undefined4 *param_1,longlong *param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined1 local_20;
  int local_1c;
  code *local_18;
  undefined4 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined1 *)(param_1 + 1);
  local_24 = *param_1;
  local_1c = param_1[2] + 1;
  local_10 = &local_24;
  local_18 = FUN_143750172;
  (**(code **)(*param_2 + 0x20))(param_2);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437501dc FUN_1437501dc body=168 status=ok
// SIG undefined FUN_1437501dc(void)

void FUN_1437501dc(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 3;
  if (*(undefined8 **)(lVar2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(lVar2 + 0x70),0x28);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 3;
  }
  *(undefined8 **)(lVar2 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14aae0100;
  puVar4[1] = *param_2;
  puVar4[2] = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(lVar2 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  return;
}



// FUNCTION 143750284 FUN_143750284 body=203 status=ok
// SIG undefined FUN_143750284(void)

void FUN_143750284(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_58 = 0x11;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_60 = DAT_14c9c0d98;
  local_30 = 0;
  local_70 = *(undefined1 *)((longlong)param_1 + 0x19);
  local_78 = *(undefined1 *)(param_1 + 3);
  FUN_143740522(*param_1,param_2,&local_68,param_1[2]);
  FUN_1437501dc(param_2,param_1);
  local_28 = *(undefined8 *)(param_1[2] + 8);
  FUN_143750428(param_2,&local_28);
  local_28 = param_1[2];
  FUN_1437504f8(param_2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143750350 FUN_143750350 body=95 status=ok
// SIG undefined FUN_143750350(void)

undefined8 * FUN_143750350(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14aae0110;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined2 *)(puVar2 + 4) = *(undefined2 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar2 + 1;
}



// FUNCTION 1437503b6 FUN_1437503b6 body=29 status=ok
// SIG undefined FUN_1437503b6(void)

void FUN_1437503b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437503d4 FUN_1437503d4 body=83 status=ok
// SIG undefined FUN_1437503d4(void)

undefined8 * FUN_1437503d4(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aae0110;
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



// FUNCTION 143750428 FUN_143750428 body=154 status=ok
// SIG undefined FUN_143750428(void)

void FUN_143750428(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 2;
  if (*(undefined8 **)(lVar2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(lVar2 + 0x70),0x20);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 2;
  }
  *(undefined8 **)(lVar2 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14aae0130;
  puVar4[1] = *param_2;
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(lVar2 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  return;
}



// FUNCTION 1437504c2 FUN_1437504c2 body=54 status=ok
// SIG undefined FUN_1437504c2(void)

longlong FUN_1437504c2(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437504f8 FUN_1437504f8 body=154 status=ok
// SIG undefined FUN_1437504f8(void)

void FUN_1437504f8(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *param_1;
  puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 2;
  if (*(undefined8 **)(lVar2 + 0x78) < puVar3) {
    FUN_140023dd8((longlong *)(lVar2 + 0x70),0x20);
    puVar4 = (undefined8 *)(*(longlong *)(lVar2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 2;
  }
  *(undefined8 **)(lVar2 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14aae0138;
  puVar4[1] = *param_2;
  iVar1 = *(int *)(lVar2 + 0xa0);
  *(uint *)(lVar2 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(lVar2 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(lVar2 + 0x98) + (longlong)iVar1 * 8) = puVar4;
  return;
}



// FUNCTION 143750592 FUN_143750592 body=54 status=ok
// SIG undefined FUN_143750592(void)

longlong FUN_143750592(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437505c8 FUN_1437505c8 body=206 status=ok
// SIG undefined FUN_1437505c8(void)

undefined8 FUN_1437505c8(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong local_58 [4];
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_38 = 0;
  FUN_14020fad6(local_58,*param_2);
  FUN_14020fad6(local_58 + 2,param_2[1]);
  local_38 = *(undefined1 *)(param_2 + 2);
  lVar2 = *(longlong *)*param_1;
  iVar1 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar1 + 1U) {
    FUN_147d7cb1a((longlong *)(lVar2 + 8),iVar1);
  }
  FUN_14707774a((longlong)iVar1 * 0x28 + *(longlong *)(lVar2 + 8),local_58);
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143750698 FUN_143750698 body=193 status=ok
// SIG undefined FUN_143750698(void)

void FUN_143750698(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  local_58 = 0x11;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_60 = DAT_14c9c0d98;
  local_30 = 0;
  local_78 = *(undefined1 *)(param_1 + 3);
  FUN_143744e88(*param_1,param_2,&local_68,param_1[2]);
  FUN_147d7cbd8(param_2,param_1);
  local_28 = *(undefined8 *)(param_1[2] + 8);
  FUN_143750428(param_2,&local_28);
  local_28 = param_1[2];
  FUN_1437504f8(param_2,&local_28);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375075a FUN_14375075a body=93 status=ok
// SIG undefined FUN_14375075a(void)

undefined8 * FUN_14375075a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar2;
  *puVar2 = &PTR_FUN_14aae03f0;
  puVar2[1] = *(undefined8 *)(param_1 + 8);
  lVar1 = *(longlong *)(param_1 + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  return puVar2 + 1;
}



// FUNCTION 1437507be FUN_1437507be body=29 status=ok
// SIG undefined FUN_1437507be(void)

void FUN_1437507be(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1437507dc FUN_1437507dc body=83 status=ok
// SIG undefined FUN_1437507dc(void)

undefined8 * FUN_1437507dc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14aae03f0;
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



// FUNCTION 143750830 FUN_143750830 body=211 status=ok
// SIG undefined FUN_143750830(void)

void FUN_143750830(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_88 = *(undefined4 *)(param_1 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 5);
  local_7c = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_78 = *(undefined4 *)(param_1 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_70 = *(undefined4 *)(param_1 + 7);
  uVar1 = param_1[3];
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x20))();
  uVar2 = *puVar5;
  local_58 = 0;
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  FUN_14007658c(&DAT_14ca850c8,&local_58,5);
  local_58 = CONCAT44(uStack_84,uStack_88);
  uStack_50 = CONCAT44(local_7c,uStack_80);
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  local_98 = &local_58;
  local_68 = uVar3;
  uStack_60 = uVar4;
  (**(code **)(*DAT_14ca83900 + 600))(DAT_14ca83900,uVar2,&local_68,uVar1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375090e FUN_14375090e body=29 status=ok
// SIG undefined FUN_14375090e(void)

void FUN_14375090e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14375092c FUN_14375092c body=29 status=ok
// SIG undefined FUN_14375092c(void)

undefined8 FUN_14375092c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14375094a FUN_14375094a body=282 status=ok
// SIG undefined FUN_14375094a(void)

undefined8 * FUN_14375094a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 143750a64 FUN_143750a64 body=276 status=ok
// SIG undefined FUN_143750a64(void)

void FUN_143750a64(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uStack_98 = *(undefined4 *)(param_1 + 0x19);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0xcc);
  uStack_90 = *(undefined4 *)(param_1 + 0x1a);
  local_8c = *(undefined4 *)((longlong)param_1 + 0xd4);
  uStack_88 = *(undefined4 *)(param_1 + 0x1b);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0xdc);
  uStack_80 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = param_1[0x18];
  uVar4 = param_1[0x16];
  uVar5 = param_1[0x17];
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  uVar3 = *puVar6;
  local_68 = 0;
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  FUN_14007658c(&DAT_14ca850c8,&local_68,5);
  local_68 = CONCAT44(uStack_94,uStack_98);
  uStack_60 = CONCAT44(local_8c,uStack_90);
  uStack_58 = uStack_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  local_a8 = &local_68;
  local_78 = uVar4;
  uStack_70 = uVar5;
  (**(code **)(*DAT_14ca83900 + 600))(DAT_14ca83900,uVar3,&local_78,uVar2);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143750b7a FUN_143750b7a body=180 status=ok
// SIG undefined FUN_143750b7a(void)

void FUN_143750b7a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_88 = *(undefined4 *)(param_1 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 5);
  local_7c = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_78 = *(undefined4 *)(param_1 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_70 = *(undefined4 *)(param_1 + 7);
  uVar1 = param_1[3];
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  puVar4 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x20))();
  local_58 = CONCAT44(uStack_84,uStack_88);
  local_90 = &local_58;
  _uStack_50 = CONCAT44(local_7c,uStack_80);
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  local_98 = uVar1;
  local_68 = uVar2;
  uStack_60 = uVar3;
  (**(code **)(*DAT_14ca83900 + 0x490))(DAT_14ca83900,param_2,*puVar4);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143750c3a FUN_143750c3a body=29 status=ok
// SIG undefined FUN_143750c3a(void)

void FUN_143750c3a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143750c58 FUN_143750c58 body=29 status=ok
// SIG undefined FUN_143750c58(void)

undefined8 FUN_143750c58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143750c76 FUN_143750c76 body=282 status=ok
// SIG undefined FUN_143750c76(void)

undefined8 * FUN_143750c76(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 143750d90 FUN_143750d90 body=239 status=ok
// SIG undefined FUN_143750d90(void)

void FUN_143750d90(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uStack_88 = *(undefined4 *)(param_1 + 0x19);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0xcc);
  uStack_80 = *(undefined4 *)(param_1 + 0x1a);
  local_7c = *(undefined4 *)((longlong)param_1 + 0xd4);
  uStack_78 = *(undefined4 *)(param_1 + 0x1b);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0xdc);
  uStack_70 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = param_1[0x18];
  uVar3 = param_1[0x16];
  uVar4 = param_1[0x17];
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  local_58 = CONCAT44(uStack_84,uStack_88);
  local_90 = &local_58;
  _uStack_50 = CONCAT44(local_7c,uStack_80);
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  local_98 = uVar2;
  local_68 = uVar3;
  uStack_60 = uVar4;
  (**(code **)(*DAT_14ca83900 + 0x490))(DAT_14ca83900,&DAT_14ca85100,*puVar5);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143750e80 FUN_143750e80 body=211 status=ok
// SIG undefined FUN_143750e80(void)

void FUN_143750e80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_88 = *(undefined4 *)(param_1 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 5);
  local_7c = *(undefined4 *)((longlong)param_1 + 0x2c);
  uStack_78 = *(undefined4 *)(param_1 + 6);
  uStack_74 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_70 = *(undefined4 *)(param_1 + 7);
  uVar1 = param_1[3];
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_1 + 0x20))();
  uVar2 = *puVar5;
  local_58 = 0;
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  FUN_14007658c(&DAT_14ca850c8,&local_58,5);
  local_58 = CONCAT44(uStack_84,uStack_88);
  uStack_50 = CONCAT44(local_7c,uStack_80);
  uStack_48 = uStack_78;
  uStack_44 = uStack_74;
  uStack_40 = uStack_70;
  local_98 = &local_58;
  local_68 = uVar3;
  uStack_60 = uVar4;
  (**(code **)(*DAT_14ca83900 + 0x250))(DAT_14ca83900,uVar2,&local_68,uVar1);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143750f5e FUN_143750f5e body=29 status=ok
// SIG undefined FUN_143750f5e(void)

void FUN_143750f5e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 143750f7c FUN_143750f7c body=29 status=ok
// SIG undefined FUN_143750f7c(void)

undefined8 FUN_143750f7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143750f9a FUN_143750f9a body=282 status=ok
// SIG undefined FUN_143750f9a(void)

undefined8 * FUN_143750f9a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 1437510b4 FUN_1437510b4 body=276 status=ok
// SIG undefined FUN_1437510b4(void)

void FUN_1437510b4(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uStack_98 = *(undefined4 *)(param_1 + 0x19);
  uStack_94 = *(undefined4 *)((longlong)param_1 + 0xcc);
  uStack_90 = *(undefined4 *)(param_1 + 0x1a);
  local_8c = *(undefined4 *)((longlong)param_1 + 0xd4);
  uStack_88 = *(undefined4 *)(param_1 + 0x1b);
  uStack_84 = *(undefined4 *)((longlong)param_1 + 0xdc);
  uStack_80 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = param_1[0x18];
  uVar4 = param_1[0x16];
  uVar5 = param_1[0x17];
  puVar6 = (undefined8 *)(**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  uVar3 = *puVar6;
  local_68 = 0;
  uStack_60 = (ulonglong)uStack_60._4_4_ << 0x20;
  FUN_14007658c(&DAT_14ca850c8,&local_68,5);
  local_68 = CONCAT44(uStack_94,uStack_98);
  uStack_60 = CONCAT44(local_8c,uStack_90);
  uStack_58 = uStack_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  local_a8 = &local_68;
  local_78 = uVar4;
  uStack_70 = uVar5;
  (**(code **)(*DAT_14ca83900 + 0x250))(DAT_14ca83900,uVar3,&local_78,uVar2);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437511f8 FUN_1437511f8 body=12 status=ok
// SIG undefined FUN_1437511f8(void)

void FUN_1437511f8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143751201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143751204 FUN_143751204 body=29 status=ok
// SIG undefined FUN_143751204(void)

undefined8 FUN_143751204(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143751222 FUN_143751222 body=282 status=ok
// SIG undefined FUN_143751222(void)

undefined8 * FUN_143751222(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 14375133c FUN_14375133c body=120 status=ok
// SIG undefined FUN_14375133c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375133c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437513aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*_DAT_000000a8 + 0x188))(_DAT_000000a8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  (**(code **)(*(longlong *)param_1[0x15] + 0x188))((longlong *)param_1[0x15],&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143751383. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1437513f2 FUN_1437513f2 body=12 status=ok
// SIG undefined FUN_1437513f2(void)

void FUN_1437513f2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001437513fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1437513fe FUN_1437513fe body=29 status=ok
// SIG undefined FUN_1437513fe(void)

undefined8 FUN_1437513fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14375141c FUN_14375141c body=282 status=ok
// SIG undefined FUN_14375141c(void)

undefined8 * FUN_14375141c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14374dad0);
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



// FUNCTION 143751536 FUN_143751536 body=121 status=ok
// SIG undefined FUN_143751536(void)

void FUN_143751536(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = *(uint *)(param_1 + 0x16);
  DAT_14ca964b2 = (byte)(uVar2 >> 1) & 1;
  (**(code **)(*(longlong *)param_1[0x15] + 400))
            ((longlong *)param_1[0x15],&DAT_14ca85100,(uVar2 & 4) >> 2,uVar2 & 0xffffff01);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437515a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1437515af FUN_1437515af body=3346 status=ok
// SIG undefined FUN_1437515af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437515af(void)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14aad5c00 + lVar5),L"/Script/Engine",
                  *(undefined8 *)(&UNK_14aad5c08 + lVar5),
                  *(undefined8 *)((longlong)&PTR_FUN_14aad5c10 + lVar5));
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != 0x70);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad61b0,1,0);
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad6f80,1,&PTR_FUN_14aad6f50);
  local_88._0_4_ = 0x40;
  FUN_141471170(&DAT_14cb0b6c8,L"r.UITextureLODBias",&DAT_14cb0b6c0,
                L"Extra LOD bias to apply to UI textures. (default=0)");
  atexit(FUN_143738ec9);
  local_88 = CONCAT44(local_88._4_4_,4);
  FUN_14153156c(&DAT_14cb0b6e0,L"r.gbx.lodgroup.enabled",&DAT_14cb0b6d8,
                L"Enable/disable runtime lod settings groups");
  atexit(FUN_143738f0e);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad7680,1,0);
  ppuStack_80 = &PTR_FUN_14aad85c0;
  local_88 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad8600,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad8d50,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad95f0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aad9e50,1,0);
  local_60._0_4_ = 0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb0bac0,L"CriticalPathStall.TickStartFrame",&local_60,
                L"Sleep for the given time in start frame. Time is given in ms. This is a debug option used for critical path analysis and forcing a change in the critical path."
               );
  atexit(FUN_14373e251);
  local_60._0_4_ = 0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bad8,L"tick.LogTicks",&local_60,L"Spew ticks for debugging.");
  atexit(FUN_14373e296);
  local_60._0_4_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0baf0,L"tick.ShowPrerequistes",&local_60,
                L"When logging ticks, show the prerequistes; debugging.");
  atexit(FUN_14373e2db);
  local_60._0_4_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bb08,L"tick.AllowAsyncComponentTicks",&local_60,
                L"If true, components (and other tick functions) with bRunOnAnyThread set will run in parallel with other ticks."
               );
  atexit(FUN_14373e320);
  local_60._0_4_ = 0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bb20,L"tick.AllowBatchedTicks",&local_60,
                L"If true, tick functions with bAllowTickBatching will be automatically combined into a single tick task."
               );
  atexit(FUN_14373e365);
  local_60._0_4_ = 1;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bb38,L"tick.AllowOptimizedPrerequisites",&local_60,
                L"If true, the code will ignore prerequisites that are not relevant due to guaranteed order of tick groups"
               );
  atexit(FUN_14373e3aa);
  local_60._0_4_ = 0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bb50,L"tick.AllowConcurrentTickQueue",&local_60,
                L"If true, queue ticks concurrently using multiple threads at once. This may be faster on platforms with many cores but can change the order of ticking."
               );
  atexit(FUN_14373e3ef);
  local_60._0_4_ = 0;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bb68,L"tick.AllowAsyncTickDispatch",&local_60,
                L"If true, ticks are dispatched in a task thread.");
  atexit(FUN_14373e434);
  local_60 = (char *)((ulonglong)local_60._4_4_ << 0x20);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bb80,L"tick.AllowAsyncTickCleanup",&local_60,
                L"If true, ticks are cleaned up in a task thread.");
  atexit(FUN_14373e479);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0bb98,L"tick.LightweightTimeguardThresholdMS",&DAT_14cb0bba8,
                L"Threshold in milliseconds for the tick timeguard");
  atexit(FUN_14373e4be);
  ppuStack_80._0_4_ = 0x200;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1412c7f16(&DAT_14cb0bbb0,L"TaskGraph.TaskPriorities.TickDispatchTaskPriority",
                L"Task and thread priority for tick tasks dispatch.",0x400);
  atexit(FUN_14373e503);
  ppuStack_80._0_4_ = 0xffffffff;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1412c7f16(&DAT_14cb0bbf0,L"TaskGraph.TaskPriorities.TickCleanupTaskPriority",
                L"Task and thread priority for tick cleanup.",0);
  atexit(FUN_14373e56d);
  ppuStack_80._0_4_ = 0xffffffff;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1412c7f16(&DAT_14cb0bc30,L"TaskGraph.TaskPriorities.NormalAsyncTickTaskPriority",
                L"Task and thread priority for async ticks that are not high priority.",0);
  atexit(FUN_14373e5d7);
  ppuStack_80 = (undefined **)CONCAT44(ppuStack_80._4_4_,0x200);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1412c7f16(&DAT_14cb0bc70,L"TaskGraph.TaskPriorities.HiPriAsyncTickTaskPriority",
                L"Task and thread priority for async ticks that are high priority.",0x400);
  atexit(FUN_14373e641);
  DAT_14cb0bcb0 = 0;
  _DAT_14cb0bcb8 = 0;
  atexit(FUN_14373ff06);
  DAT_14cb0bcc0 = 0;
  _DAT_14cb0bcc8 = 0;
  atexit((_func_5014 *)&LAB_14373ff37);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  *(longlong *)((longlong)local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_149e00260;
  *(code **)((longlong)local_60 + 0x18) = FUN_14373ff48;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb0bcd0,L"tick.RemoveTestTickFunctions",
                L"Remove no-op ticks to test performance of ticking infrastructure.",&local_60);
  if ((int)local_58 == 0) {
LAB_143751b4b:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_143751b4b;
  }
  atexit(FUN_14373ffea);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  *(longlong *)((longlong)local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14a380e50;
  *(code **)((longlong)local_60 + 0x18) = FUN_14374002f;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb0bce0,L"tick.AddTestTickFunctions",
                L"Add no-op ticks to test performance of ticking infrastructure.",&local_60);
  if ((int)local_58 == 0) {
LAB_143751c37:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_143751c37;
  }
  atexit(FUN_143740074);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_14a177500;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  *(longlong *)((longlong)local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14a380e50;
  *(code **)((longlong)local_60 + 0x18) = FUN_1437400b9;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb0bcf0,L"tick.AddIndirectTestTickFunctions",
                L"Add no-op ticks to test performance of ticking infrastructure.",&local_60);
  if ((int)local_58 == 0) {
LAB_143751d15:
    if (local_60 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_60 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
    goto LAB_143751d15;
  }
  atexit(FUN_14374022d);
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_60,&DAT_14cb0bd00);
  if (cVar1 == '\0') {
    _DAT_14cb0bd00 = 0;
    uRam000000014cb0bd08 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_80 = (undefined **)0x0;
  local_78 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aadbf20,1,&PTR_FUN_14aadbe00);
  FUN_140056680(&DAT_14cb0bdd0,L"_Template");
  atexit((_func_5014 *)&LAB_143742332);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0bde8,L"TimerManager.DumpTimerLogsThreshold",&DAT_14cb0bdf8,
                L"Threshold (in milliseconds) after which we log timer info to try and help track down spikes in the timer code. Disabled when set to 0"
               );
  atexit(FUN_143742aed);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0be00,L"TimerManager.DumpTimerLogResolveVirtualFunctions",&DAT_14c761df8,
                L"When logging timer info virtual functions will be resolved, if possible.");
  atexit(FUN_143742b32);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0be10,L"TimerManager.DumpTimerLogSymbolNames",&DAT_14c761dfc,
                L"When logging timer info, symbol names will be included if set to 1.");
  atexit(FUN_143742b77);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0be20,L"TimerManager.MaxExpiredTimersToLog",&DAT_14c761e00,
                L"Maximum number of TimerData exceeding the threshold to log in a single frame.");
  atexit(FUN_143742bbc);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0be30,L"TimerManager.GuaranteeEngineTickDelay",&DAT_14cb0be40,
                L"If true, timers delayed until next tick will guarantee the engine tick has advanced. If false, these could run during the same engine tick (default behavior prior to 5.5)."
               );
  atexit(FUN_143742c01);
  local_60 = (char *)0x0;
  local_58._0_4_ = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58._0_4_ = 2;
  *(undefined ***)local_60 = &PTR_LAB_14a1e1a40;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar5 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar5 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar5;
  *(longlong *)((longlong)local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14a1e19d0;
  *(code **)((longlong)local_60 + 0x18) = FUN_143744881;
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cb0be48,L"ListTimers",&DAT_149dfb77a,&local_60);
  if ((int)local_58 != 0) {
    if (local_60 == (char *)0x0) goto LAB_143751f92;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58._0_4_ = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_143751f92:
  atexit(FUN_143744e41);
  local_60 = &DAT_14a19662d;
  local_58._0_5_ = 4;
  FUN_14001a6c0(&local_60,1);
  local_60 = ".UnknownData";
  local_58._0_5_ = 0xc;
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb0be58 = (ulonglong)uVar2;
  local_60 = ".ScriptData";
  local_58 = CONCAT35(local_58._5_3_,0xb);
  uVar2 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb0be60 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cb0be68,L"Trigger",1);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aadceb0,1,0);
  local_78 = 0;
  local_88 = 0;
  ppuStack_80 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aadd5d0,1,0);
  DAT_14cb0cab8 = 0xff;
  DAT_14cb0caba = 0xff;
  DAT_14cb0cab9 = 0xff;
  FUN_1446f470e(&local_68,L"PostProcessSettings",1);
  FUN_1446f470e(&local_70,L"/Script/Engine",1);
  puVar3 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar3[1] = 0x10000008c0;
  *puVar3 = &PTR_FUN_14a732cf0;
  local_60 = (char *)local_70;
  local_58 = local_68;
  FUN_1427dc50a(&local_60,puVar3);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0beb0,L"r.HitProxy.CaptureNextUpdate",&DAT_14cb0bec0,
                L"Enables GPU capture of hit proxy rendering on the next update.");
  atexit(FUN_1437453ec);
  FUN_1446f470e(&DAT_14cb0bec8,L"DummyViewport",1);
  DAT_14cb0ca68 = 0;
  _DAT_14cb0ca70 = 0;
  _DAT_14cb0ca78 = 2;
  atexit(FUN_143745a9d);
  DAT_14cb0bee8 = 0;
  _DAT_14cb0bef0 = 0;
  _DAT_14cb0bef8 = 2;
  atexit(FUN_143745ace);
  DAT_14cb0ca88 = 0;
  _DAT_14cb0ca90 = 0;
  atexit((_func_5014 *)&LAB_143745aff);
  DAT_14cb0bf00 = 0;
  uRam000000014cb0bf08 = 0;
  atexit((_func_5014 *)&LAB_143745b10);
  DAT_14cb0bed0 = 0;
  uRam000000014cb0bed8 = 0;
  atexit((_func_5014 *)&LAB_143745b21);
  local_60 = (char *)((ulonglong)local_60 & 0xffffffff00000000);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0bf10,L"FullSizeUnitGraph",&local_60,
                L"If true, the unit graph is the old full size, full brightness version.");
  atexit(FUN_143745b32);
  DAT_14cb0ca98 = 0;
  _DAT_14cb0caa0 = 0;
  _DAT_14cb0caa8 = 2;
  atexit(FUN_14374a030);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437522c4 FUN_1437522c4 body=69 status=ok
// SIG undefined FUN_1437522c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437522c4(void)

{
  _DAT_14cb0cae0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752306. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cae8,1);
  return;
}



// FUNCTION 143752309 FUN_143752309 body=69 status=ok
// SIG undefined FUN_143752309(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752309(void)

{
  _DAT_14cb0cb20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375234b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cb28,1);
  return;
}



// FUNCTION 14375234e FUN_14375234e body=69 status=ok
// SIG undefined FUN_14375234e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375234e(void)

{
  _DAT_14cb0cb38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cb40,1);
  return;
}



// FUNCTION 143752393 FUN_143752393 body=69 status=ok
// SIG undefined FUN_143752393(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752393(void)

{
  _DAT_14cb0cb50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437523d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cb58,1);
  return;
}



// FUNCTION 1437523d8 FUN_1437523d8 body=69 status=ok
// SIG undefined FUN_1437523d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437523d8(void)

{
  _DAT_14cb0cb60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375241a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cb68,1);
  return;
}



// FUNCTION 14375241d FUN_14375241d body=69 status=ok
// SIG undefined FUN_14375241d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375241d(void)

{
  _DAT_14cb0cb80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375245f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cb88,1);
  return;
}



// FUNCTION 143752462 FUN_143752462 body=69 status=ok
// SIG undefined FUN_143752462(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752462(void)

{
  _DAT_14cb0cb98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437524a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cba0,1);
  return;
}



// FUNCTION 1437524a7 FUN_1437524a7 body=69 status=ok
// SIG undefined FUN_1437524a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437524a7(void)

{
  _DAT_14cb0cba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437524e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cbb0,1);
  return;
}



// FUNCTION 1437524ec FUN_1437524ec body=69 status=ok
// SIG undefined FUN_1437524ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437524ec(void)

{
  _DAT_14cb0cbb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375252e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cbc0,1);
  return;
}



// FUNCTION 143752531 FUN_143752531 body=69 status=ok
// SIG undefined FUN_143752531(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752531(void)

{
  _DAT_14cb0cbc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cbd0,1);
  return;
}



// FUNCTION 143752576 FUN_143752576 body=49 status=ok
// SIG undefined FUN_143752576(void)

void FUN_143752576(void)

{
  FUN_144760e21(DAT_14cb0ce20,DAT_14cb0ce28);
  if (DAT_14cb0ce20 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437525a7 FUN_1437525a7 body=69 status=ok
// SIG undefined FUN_1437525a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437525a7(void)

{
  _DAT_14cb0ce40 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437525e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ce48,1);
  return;
}



// FUNCTION 1437525ec FUN_1437525ec body=69 status=ok
// SIG undefined FUN_1437525ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437525ec(void)

{
  _DAT_14cb0ce50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375262e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ce58,1);
  return;
}



// FUNCTION 143752631 FUN_143752631 body=69 status=ok
// SIG undefined FUN_143752631(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752631(void)

{
  _DAT_14cb0ce68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ce70,1);
  return;
}



// FUNCTION 143752676 FUN_143752676 body=69 status=ok
// SIG undefined FUN_143752676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752676(void)

{
  _DAT_14cb0ce80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437526b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ce88,1);
  return;
}



// FUNCTION 1437526bb FUN_1437526bb body=69 status=ok
// SIG undefined FUN_1437526bb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437526bb(void)

{
  _DAT_14cb0ce90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437526fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ce98,1);
  return;
}



// FUNCTION 143752700 FUN_143752700 body=69 status=ok
// SIG undefined FUN_143752700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752700(void)

{
  _DAT_14cb0cea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752742. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cea8,1);
  return;
}



// FUNCTION 143752745 FUN_143752745 body=69 status=ok
// SIG undefined FUN_143752745(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752745(void)

{
  _DAT_14cb0ceb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ceb8,1);
  return;
}



// FUNCTION 14375278a FUN_14375278a body=69 status=ok
// SIG undefined FUN_14375278a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375278a(void)

{
  _DAT_14cb0cec0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437527cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cec8,1);
  return;
}



// FUNCTION 1437527cf FUN_1437527cf body=69 status=ok
// SIG undefined FUN_1437527cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437527cf(void)

{
  _DAT_14cb0ced8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752811. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cee0,1);
  return;
}



// FUNCTION 143752814 FUN_143752814 body=69 status=ok
// SIG undefined FUN_143752814(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752814(void)

{
  _DAT_14cb0cee8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143752856. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cef0,1);
  return;
}



// FUNCTION 14375285a FUN_14375285a body=403 status=ok
// SIG undefined FUN_14375285a(void)

void FUN_14375285a(void)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 **local_c0;
  code *local_b8;
  undefined1 local_b0 [128];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_30 = (undefined1 *)0x0;
  local_28 = 0x1000000000;
  local_c0 = &local_d0;
  local_c8 = FUN_143769ade;
  local_d0 = local_b0;
  if (DAT_14cb10130 == 0) {
    local_f0 = &local_b8;
    local_b8 = FUN_140754f84;
    local_e0 = FUN_14081d0ea;
    local_e8 = FUN_14081d0ea;
    local_f8 = &LAB_147da9a76;
    local_100 = FUN_1409f3105;
    local_108 = L"Engine";
    local_110 = 0;
    local_118 = 0x10000000;
    local_120 = 8;
    local_128 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  local_128 = 0;
  FUN_140245161(DAT_14cb10130,&local_c8,1,0x10);
  puVar2 = local_b0;
  if (local_30 != (undefined1 *)0x0) {
    puVar2 = local_30;
  }
  lVar3 = (longlong)(int)local_28;
  if (lVar3 != 0) {
    lVar1 = 0;
    do {
      FUN_14083337a(*(undefined8 *)(puVar2 + lVar1));
      lVar1 = lVar1 + 8;
    } while (lVar3 * 8 != lVar1);
  }
  if (local_30 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437529f2 FUN_1437529f2 body=167 status=ok
// SIG undefined FUN_1437529f2(void)

float FUN_1437529f2(void)

{
  float fVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [72];
  ulonglong local_60;
  ulonglong local_20;
  
  fVar1 = DAT_14c761e34;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (0.0 < DAT_14cb0ced0) {
    FUN_1405d59a9(local_a8);
    if (((float)(local_60 >> 0x14) <= DAT_14cb0ced0) && (DAT_14c761e34 < DAT_14c761e30)) {
      fVar1 = DAT_14c761e30;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143752a9a FUN_143752a9a body=1299 status=ok
// SIG undefined FUN_143752a9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752a9a(longlong *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
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
  undefined1 *local_60;
  code **local_58;
  undefined1 local_49;
  code *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14c872be0 == param_1[0x1e3]) {
    if (DAT_14c950c29 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_d8);
    }
    goto LAB_143752d9f;
  }
  iVar4 = (**(code **)(*param_1 + 0x3b0))();
  if (iVar4 == 0) {
    bVar6 = *(byte *)((longlong)param_1 + 0xf24) & 1;
  }
  else {
    fVar7 = (float)(**(code **)(*param_1 + 0x388))(param_1);
    *(float *)(param_1 + 0x1e4) = fVar7 + 1.0;
    pbVar1 = (byte *)((longlong)param_1 + 0xf24);
    *pbVar1 = *pbVar1 | iVar4 == 2;
    bVar6 = *pbVar1;
  }
  if (bVar6 == 0) {
    if ((longlong)(int)param_1[0x22a] != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(param_1[0x229] + lVar5) + 0x360);
        if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x155) & 1) != 0)) &&
            (*(longlong *)(lVar2 + 0x30) != 0)) &&
           (*(int *)(*(longlong *)(lVar2 + 0x30) + 0xa8) != 0)) {
          *(float *)(param_1 + 0x1e4) = (float)((double)*(float *)(param_1 + 0x1e4) + DAT_14c759090)
          ;
          fVar7 = (float)(**(code **)(*param_1 + 0x388))(param_1);
          if (*(char *)((longlong)param_1 + 0xf25) == '\x01') {
            *(undefined1 *)((longlong)param_1 + 0xf25) = 0;
          }
          else if (DAT_14c950c29 == '\x01') {
            FUN_14689c8ec((double)_DAT_14c75ec70);
          }
          else if ((((DAT_14c949801 & 1) != 0) || ((DAT_14c950c00 & 1) != 0)) ||
                  ((fVar7 <= 0.0 || (*(float *)(param_1 + 0x1e4) <= fVar7)))) {
            fVar7 = (float)(**(code **)(*param_1 + 0x3b8))(param_1);
            FUN_1427e28e4(1,(double)fVar7);
          }
          else if ((DAT_14cb0ce38 != 0) || (cVar3 = (*(code *)PTR_FUN_14c75b118)(), cVar3 == '\0'))
          {
            if ((longlong)(int)param_1[0x22a] == 0) goto LAB_143752e1a;
            lVar5 = 0;
            goto LAB_143752ce9;
          }
          break;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)param_1[0x22a] * 8 != lVar5);
    }
  }
  else {
    cVar3 = FUN_1427e39ef(0);
    if (cVar3 != '\0') {
      local_58 = &local_38;
      local_60 = &LAB_143769b48;
      if (DAT_14cb10130 == 0) {
        local_80 = &local_48;
        local_48 = FUN_140754f84;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_147da9a76;
        local_90 = FUN_1409f3105;
        local_98 = L"Engine";
        local_a0 = 0;
        local_a8 = 0x10000000;
        local_b0 = 8;
        local_b8 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      local_b8 = 0;
      FUN_140245161(DAT_14cb10130,&local_60,1,0x10);
      *(undefined2 *)((longlong)param_1 + 0xf24) = 0;
      *(undefined4 *)(param_1 + 0x1e4) = 0;
    }
  }
  goto LAB_143752d35;
  while (lVar5 = lVar5 + 8, (longlong)(int)param_1[0x22a] * 8 != lVar5) {
LAB_143752ce9:
    lVar2 = *(longlong *)(*(longlong *)(param_1[0x229] + lVar5) + 0x360);
    if (((lVar2 != 0) && (bVar6 = *(char *)(lVar2 + 0x152) - 1, bVar6 < 6)) &&
       ((0x35U >> (bVar6 & 0x1f) & 1) != 0)) break;
  }
LAB_143752e1a:
  cVar3 = FUN_1427e39ef(0);
  if (cVar3 != '\0') {
    local_40 = &local_49;
    local_48 = (code *)&LAB_143769b50;
    if (DAT_14cb10130 == 0) {
      local_80 = &local_38;
      local_38 = FUN_140754f84;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_147da9a76;
      local_90 = FUN_1409f3105;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000000;
      local_b0 = 8;
      local_b8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    local_b8 = 0;
    FUN_140245161(DAT_14cb10130,&local_48,1,0x10);
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined1 *)((longlong)param_1 + 0xf24) = 0;
    param_1[0x1e3] = DAT_14c872be0;
  }
LAB_143752d35:
  if ((longlong)*DAT_14cb0ce60 == 0) {
    if ((((0 < *DAT_14cb0ce78) && (DAT_14c950c29 == '\0')) &&
        ((DAT_14c949828 <= DAT_14c950214 &&
         (((DAT_14c949e10 & 1) == 0 && ((DAT_14c949801 & 1) == 0)))))) && ((DAT_14c950c00 & 1) == 0)
       ) {
      fVar7 = (float)(**(code **)(*param_1 + 0x388))(param_1,0);
      *(float *)(param_1 + 0x1e4) = fVar7 + 1.0;
    }
  }
  else if (DAT_14c872be0 % (ulonglong)(longlong)*DAT_14cb0ce60 == 0) {
    fVar7 = (float)(**(code **)(*param_1 + 0x388))(param_1,0);
    *(float *)(param_1 + 0x1e4) = fVar7 + 1.0;
    *(undefined1 *)((longlong)param_1 + 0xf24) = 1;
  }
  param_1[0x1e3] = DAT_14c872be0;
LAB_143752d9f:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143752fc8 FUN_143752fc8 body=14672 status=ok
// SIG undefined FUN_143752fc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143752fc8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined2 *puVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_318 [32];
  undefined8 **local_2f8;
  undefined8 **ppuStack_2f0;
  ulonglong local_2e8;
  wchar_t *local_2e0;
  wchar_t *local_2d8;
  code *local_2d0;
  undefined1 *local_2c8;
  code **local_2c0;
  code *local_2b8;
  code *local_2b0;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 *local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 *local_248;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 *local_228;
  undefined4 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 *local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  undefined8 *local_1b8;
  undefined4 local_1b0;
  undefined8 *local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 *local_188;
  undefined4 local_180;
  undefined8 *local_178;
  undefined4 local_170;
  undefined8 *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [8];
  undefined1 local_140 [8];
  code *local_138 [2];
  longlong *local_128 [2];
  undefined8 *local_118;
  undefined4 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined4 local_c0;
  code *local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_59;
  code *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  param_1[0x183] = param_2;
  FUN_145c632fe();
  FUN_145d12fb6(&DAT_14cb0f148);
  DAT_14cb0db68 = 1;
  FUN_14036c39e(param_1 + 0x22c,param_1);
  (**(code **)(*param_1 + 0x450))(param_1);
  uVar3 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar3 < DAT_14c9647dc) {
    lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  }
  else {
    lVar15 = 0;
  }
  FUN_1447f71cc(lVar15,0x40000000);
  uVar8 = FUN_140c61bfa();
  FUN_14123f5ce(uVar8,&local_b8,FUN_14375285a);
  if (DAT_14c764000 != 0) {
    (**(code **)(*param_1 + 0x428))(param_1);
    (**(code **)(*param_1 + 0x430))(param_1);
  }
  if (DAT_14c86a9f0 == '\x01') {
    FUN_1456af888(param_1);
  }
  plVar12 = DAT_14c98e618;
  if (DAT_14c872bf0 == '\0') {
    pcVar9 = (code *)FUN_14001cc68(8,0x10);
    *(undefined ***)pcVar9 = &PTR_FUN_14aae5430;
    plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14aae6590;
    plVar10[2] = (longlong)pcVar9;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_b8 = pcVar9;
    plStack_b0 = plVar10;
    (**(code **)(*plVar12 + 0x1b8))(plVar12,&local_b8);
    plVar12 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar10)(plVar10);
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
  puVar11 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar11 = &PTR_FUN_14aae5450;
  _DAT_14cb0d268 = (undefined8 *)FUN_14001cc68(8,0x10);
  *_DAT_14cb0d268 = &PTR_FUN_14aae5480;
  _DAT_14cb0d270 = puVar11;
  if (DAT_14cac0148 == 0) {
    local_b8 = FUN_1417f6a96;
    local_2b0 = FUN_14081d0ea;
    local_2b8 = FUN_14081d0ea;
    local_2c8 = &LAB_147863ed7;
    local_2d0 = (code *)&LAB_146373c3b;
    local_2d8 = L"Engine";
    local_2e0 = (wchar_t *)0x0;
    local_2e8 = CONCAT44(local_2e8._4_4_,0x1000000f);
    ppuStack_2f0 = (undefined8 **)CONCAT44(ppuStack_2f0._4_4_,8);
    local_2f8 = (undefined8 **)CONCAT44(local_2f8._4_4_,0x1350);
    local_2c0 = &local_b8;
    FUN_14081cfa3(L"/Script/Engine",L"Engine",&DAT_14cac0148,&DAT_147863ed6);
  }
  local_58 = *(code **)(DAT_14cac0148 + 0x18);
  FUN_1400021e4(&local_58,&local_b8);
  pcVar9 = local_b8;
  if ((int)plStack_b0 == 0) {
    pcVar9 = (code *)&DAT_149dfb77a;
  }
  if (DAT_14cac0148 == 0) {
    local_58 = FUN_1417f6a96;
    local_2b0 = FUN_14081d0ea;
    local_2b8 = FUN_14081d0ea;
    local_2c8 = &LAB_147863ed7;
    local_2d0 = (code *)&LAB_146373c3b;
    local_2d8 = L"Engine";
    local_2e0 = (wchar_t *)0x0;
    local_2e8 = CONCAT44(local_2e8._4_4_,0x1000000f);
    ppuStack_2f0 = (undefined8 **)CONCAT44(ppuStack_2f0._4_4_,8);
    local_2f8 = (undefined8 **)CONCAT44(local_2f8._4_4_,0x1350);
    local_2c0 = &local_58;
    FUN_14081cfa3(L"/Script/Engine",L"Engine",&DAT_14cac0148,&DAT_147863ed6);
  }
  uVar8 = *(undefined8 *)(DAT_14cac0148 + 0x20);
  if (DAT_14c949118 == 0) {
    local_138[0] = FUN_140631fbe;
    lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar15;
    FUN_1446f470e(local_128,L"Class",1);
    local_2c8 = &LAB_146891e90;
    local_2d0 = (code *)&LAB_146273097;
    local_2e0 = L"Engine";
    local_2d8 = (wchar_t *)CONCAT44(local_2d8._4_4_,199);
    local_2e8 = 0x20;
    ppuStack_2f0._0_4_ = 0x10000000;
    local_2f8._0_4_ = 8;
    local_2c0 = local_138;
    FUN_14574b4b2(lVar15);
    DAT_14c949118 = lVar15;
    if (DAT_14c951858 == 0) {
      local_58 = FUN_1449e2820;
      local_2b0 = FUN_14081d0ea;
      local_2b8 = FUN_14081d0ea;
      local_2c8 = &LAB_1468c5283;
      local_2d0 = FUN_142809da0;
      local_2d8 = L"Engine";
      local_2e0 = (wchar_t *)0x400000000;
      local_2e8 = CONCAT44(local_2e8._4_4_,0x10000000);
      ppuStack_2f0._0_4_ = 8;
      local_2f8._0_4_ = 0x50;
      local_2c0 = &local_58;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar17 = DAT_14c951858;
    lVar15 = DAT_14c949118;
    uVar14 = FUN_1449e2fb2();
    local_2f8 = (undefined8 **)0x149e6ee30;
    FUN_14574b446(uVar14,lVar15,lVar17,L"/Script/CoreUObject");
  }
  local_2e0 = (wchar_t *)0x0;
  ppuStack_2f0 = (undefined8 **)0x0;
  local_2e8 = CONCAT71(local_2e8._1_7_,1);
  local_2f8 = (undefined8 **)CONCAT44(local_2f8._4_4_,0x2002);
  FUN_1412ecd05(DAT_14c949118,uVar8,pcVar9,0);
  if (local_b8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_2f8 = (undefined8 **)0x0;
  ppuStack_2f0 = (undefined8 **)0x0;
  FUN_1400033ba(param_1,0,0,0);
  if (DAT_14c872ce0 != 0) {
    local_2f8 = (undefined8 **)&DAT_14c872ce8;
    FUN_1414d73b6(DAT_14c872ce0,L"ProcessLimits",L"VirtualMemoryLimitInKB",&local_b8);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_141369f9a(&DAT_14c846b20,L"virtmemkb=",&local_b8);
  *(undefined1 *)((longlong)param_1 + 0xe0c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xdcc) = *(undefined4 *)((longlong)param_1 + 0xdbc);
  *(int *)(param_1 + 0x1ba) = (int)param_1[0x1b8];
  *(undefined4 *)((longlong)param_1 + 0xdd4) = *(undefined4 *)((longlong)param_1 + 0xdc4);
  *(int *)(param_1 + 0x1bb) = (int)param_1[0x1b9];
  *(undefined4 *)((longlong)param_1 + 0xddc) = *(undefined4 *)((longlong)param_1 + 0xdbc);
  *(int *)(param_1 + 0x1bc) = (int)param_1[0x1b8];
  *(undefined4 *)((longlong)param_1 + 0xde4) = *(undefined4 *)((longlong)param_1 + 0xdc4);
  *(int *)(param_1 + 0x1bd) = (int)param_1[0x1b9];
  (**(code **)(*param_1 + 0x440))(param_1);
  if (DAT_14c872ce0 != 0) {
    local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
    local_2f8 = (undefined8 **)&DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"/Script/Engine.Engine",L"bEnableOnScreenDebugMessages",&local_b8);
    *(uint *)(param_1 + 0x1c2) =
         (*(uint *)(param_1 + 0x1c2) & 0xfffffffc) + (uint)(byte)local_b8 * 2 | (uint)(byte)local_b8
    ;
  }
  FUN_143203ce2((int)param_1[0x187]);
  FUN_1461c125a();
  plVar12 = (longlong *)FUN_145a50fcc();
  lVar15 = plVar12[0x22];
  if (lVar15 == 0) {
    (**(code **)(*plVar12 + 1000))(plVar12);
    lVar15 = plVar12[0x22];
  }
  if (*(int *)(lVar15 + 0xc0) == 0) {
    puVar16 = &DAT_149dfb77a;
  }
  else {
    puVar16 = *(undefined2 **)(lVar15 + 0xb8);
  }
  FUN_142786678(puVar16);
  local_b8 = (code *)&LAB_147d7d5b0;
  plStack_b0 = (longlong *)((ulonglong)plStack_b0 & 0xffffffff00000000);
  FUN_14640990e(param_1 + 0x1d6,&local_58,param_1,&local_b8);
  local_b8 = (code *)&LAB_14375691a;
  plStack_b0 = (longlong *)((ulonglong)plStack_b0 & 0xffffffff00000000);
  FUN_146409a0e(param_1 + 0x1d9,&local_58,param_1,&local_b8);
  local_b8 = (code *)&LAB_147d7d5be;
  plStack_b0 = (longlong *)((ulonglong)plStack_b0 & 0xffffffff00000000);
  FUN_145dc2f6a(param_1 + 0x1dc,&local_58,param_1,&local_b8);
  local_58 = (code *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  pcVar9 = local_58;
  local_50 = 3;
  *(undefined ***)local_58 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  *(longlong *)(local_58 + 0x10) = lVar17;
  *(undefined ***)local_58 = &PTR_FUN_14aae6770;
  *(undefined8 *)(local_58 + 0x18) = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_58 + 0x18) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)(pcVar9 + 0x1c) = iVar20;
  *(undefined1 **)(pcVar9 + 0x20) = &LAB_147d7d5cc;
  *(undefined4 *)(pcVar9 + 0x28) = 0;
  plVar12 = (longlong *)FUN_140489acc();
  (**(code **)(*plVar12 + 0x3b0))(plVar12,&local_58);
  if (DAT_14cacef48 == '\0') {
    FUN_14620d3c6(&DAT_14cacee68);
  }
  FUN_14620d3c6(&DAT_14cacee68);
  if (DAT_14caf1b90 == '\0') {
    FUN_145e7ba6a(&DAT_14caf1948);
  }
  FUN_145e7ba6a(&DAT_14caf1948);
  if (DAT_14cb0ea10 == '\0') {
    FUN_145be2c28(&DAT_14cb0e998);
  }
  FUN_145be2c28(&DAT_14cb0e998);
  if (DAT_14c872bf0 == '\0') {
    (**(code **)(*param_1 + 0x448))(param_1);
  }
  (**(code **)(*param_1 + 0x420))(param_1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_b8 = (code *)0x14a1e91c0;
  plStack_b0 = (longlong *)CONCAT35(plStack_b0._5_3_,0xf);
  uVar7 = FUN_14001a6c0(&local_b8,1);
  FUN_1402c9134(&DAT_14c874628,uVar7,&local_b8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_b8 = (code *)0x14aae2560;
  plStack_b0 = (longlong *)CONCAT35(plStack_b0._5_3_,0x17);
  uVar7 = FUN_14001a6c0(&local_b8,1);
  FUN_1402c9134(&DAT_14c874628,uVar7,&local_b8,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_b8 = (code *)0x14a46dc48;
  plStack_b0 = (longlong *)CONCAT35(plStack_b0._5_3_,10);
  uVar7 = FUN_14001a6c0(&local_b8,1);
  FUN_1402c9134(&DAT_14c874628,uVar7,&local_b8,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_b8 = (code *)0x14aae2578;
  plStack_b0 = (longlong *)CONCAT35(plStack_b0._5_3_,0x10);
  uVar7 = FUN_14001a6c0(&local_b8,1);
  FUN_1402c9134(&DAT_14c874628,uVar7,&local_b8,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_b8 = (code *)0x14a5a4cc8;
  plStack_b0 = (longlong *)CONCAT35(plStack_b0._5_3_,0xd);
  uVar7 = FUN_14001a6c0(&local_b8,1);
  FUN_1402c9134(&DAT_14c874628,uVar7,&local_b8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  local_b8 = (code *)0x14aae2589;
  plStack_b0 = (longlong *)CONCAT35(plStack_b0._5_3_,0xf);
  uVar7 = FUN_14001a6c0(&local_b8,1);
  FUN_1402c9134(&DAT_14c874628,uVar7,&local_b8,0);
  (**(code **)(*(longlong *)param_1[0x6c] + 0x4a8))();
  local_59 = 1;
  if (DAT_14c872ce0 != 0) {
    local_2f8 = (undefined8 **)&DAT_14c872ce8;
    FUN_14052bb08(DAT_14c872ce0,L"DevOptions.Debug",L"bEngineStatsOnRHS",&local_59);
  }
  uVar5 = local_59;
  local_c8 = (undefined8 *)0x0;
  local_c0 = 0;
  FUN_1446efa72(&local_c8,0,3,0x10);
  puVar11 = local_c8;
  local_c0 = 3;
  *local_c8 = &PTR_LAB_14aae6850;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_c8[2] = lVar17;
  *local_c8 = &PTR_FUN_14aae67e0;
  local_c8[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_c8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_143756928;
  *(undefined4 *)(puVar11 + 5) = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = &PTR_FUN_149e19310;
    DAT_14c844840[2] = 0xffffffffffffffff;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  plVar12 = param_1 + 0x244;
  FUN_1446f470e(local_128,L"STATCAT_Engine",1);
  FUN_1446f470e(local_138,L"STAT_NamedEvents",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,uVar5) & 0xffffffffffffff01;
  local_2f8 = (undefined8 **)&local_d8;
  ppuStack_2f0 = &local_c8;
  FUN_14144edaa(&local_b8,local_138,local_128,&DAT_14c844840);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  uVar5 = local_59;
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  FUN_1446efa72(&local_e8,0,3,0x10);
  puVar11 = local_e8;
  local_e0 = 3;
  *local_e8 = &PTR_LAB_14aae6850;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_e8[2] = lVar17;
  *local_e8 = &PTR_FUN_14aae67e0;
  local_e8[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7d5e0;
  *(undefined4 *)(puVar11 + 5) = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c844850) && (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
    DAT_14c844840 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    DAT_14c844840[1] = 0;
    *DAT_14c844840 = &PTR_FUN_149e19310;
    DAT_14c844840[2] = 0xffffffffffffffff;
    DAT_14c844840[3] = 0;
    DAT_14c844840[4] = 0;
    DAT_14c844840[5] = 0;
    if (DAT_14c844840 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(DAT_14c844840 + 1) = *(int *)(DAT_14c844840 + 1) + 1;
      UNLOCK();
    }
    DAT_14c844848 = 0;
    atexit(FUN_142760bef);
    _Init_thread_footer(&DAT_14c844850);
  }
  FUN_1446f470e(local_128,L"STATCAT_Engine",1);
  FUN_1446f470e(local_138,L"STAT_VerboseNamedEvents",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,uVar5);
  local_2f8 = (undefined8 **)&local_f8;
  ppuStack_2f0 = &local_e8;
  FUN_14144edaa(&local_b8,local_138,local_128,&DAT_14c844840);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  local_2a0 = CONCAT71(local_2a0._1_7_,local_59);
  local_108 = (undefined8 *)0x0;
  local_100 = 0;
  FUN_1446efa72(&local_108,0,3,0x10);
  puVar11 = local_108;
  local_100 = 3;
  *local_108 = &PTR_LAB_14aae6850;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_108[2] = lVar17;
  *local_108 = &PTR_FUN_14aae67e0;
  local_108[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_108 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7d6bc;
  *(undefined4 *)(puVar11 + 5) = 0;
  local_118 = (undefined8 *)0x0;
  local_110 = 0;
  FUN_1446efa72(&local_118,0,3,0x10);
  puVar11 = local_118;
  local_110 = 3;
  *local_118 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_118[2] = lVar17;
  *local_118 = &PTR_FUN_14aae68c0;
  local_118[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_118 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7d78c;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display average FPS.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_FPS",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,(undefined1)local_2a0);
  local_2f8 = &local_118;
  ppuStack_2f0 = &local_108;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = local_59;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (undefined8 *)0x0;
  local_160 = 0;
  FUN_1446efa72(&local_168,0,3,0x10);
  puVar11 = local_168;
  local_160 = 3;
  *local_168 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_168[2] = lVar17;
  *local_168 = &PTR_FUN_14aae68c0;
  local_168[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_168 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7ddfc;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display UsedPhysical memory stat.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_Summary",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,uVar5);
  ppuStack_2f0 = (undefined8 **)&local_158;
  local_2f8 = &local_168;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  local_2a0 = CONCAT71(local_2a0._1_7_,local_59);
  local_178 = (undefined8 *)0x0;
  local_170 = 0;
  FUN_1446efa72(&local_178,0,3,0x10);
  puVar11 = local_178;
  local_170 = 3;
  *local_178 = &PTR_LAB_14aae6850;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_178[2] = lVar17;
  *local_178 = &PTR_FUN_14aae67e0;
  local_178[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_178 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7df72;
  *(undefined4 *)(puVar11 + 5) = 0;
  local_188 = (undefined8 *)0x0;
  local_180 = 0;
  FUN_1446efa72(&local_188,0,3,0x10);
  puVar11 = local_188;
  local_180 = 3;
  *local_188 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_188[2] = lVar17;
  *local_188 = &PTR_FUN_14aae68c0;
  local_188[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_188 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7e0e2;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,
                L"Display frame times for Game Thread, Render Thread and GPU.  Also displays draw calls and primitive counts."
               );
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_Unit",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,(undefined1)local_2a0);
  local_2f8 = &local_188;
  ppuStack_2f0 = &local_178;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = local_59;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = (undefined8 *)0x0;
  local_1a0 = 0;
  FUN_1446efa72(&local_1a8,0,3,0x10);
  puVar11 = local_1a8;
  local_1a0 = 3;
  *local_1a8 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_1a8[2] = lVar17;
  *local_1a8 = &PTR_FUN_14aae68c0;
  local_1a8[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_1a8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_1437569bc;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display draw call counts per render pass.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_DrawCount",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,uVar5);
  ppuStack_2f0 = (undefined8 **)&local_198;
  local_2f8 = &local_1a8;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  local_2a0 = CONCAT71(local_2a0._1_7_,local_59);
  local_1b8 = (undefined8 *)0x0;
  local_1b0 = 0;
  FUN_1446efa72(&local_1b8,0,3,0x10);
  puVar11 = local_1b8;
  local_1b0 = 3;
  *local_1b8 = &PTR_LAB_14aae6850;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_1b8[2] = lVar17;
  *local_1b8 = &PTR_FUN_14aae67e0;
  local_1b8[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_1b8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7e12e;
  *(undefined4 *)(puVar11 + 5) = 0;
  local_1c8 = (undefined8 *)0x0;
  local_1c0 = 0;
  FUN_1446efa72(&local_1c8,0,3,0x10);
  puVar11 = local_1c8;
  local_1c0 = 3;
  *local_1c8 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_1c8[2] = lVar17;
  *local_1c8 = &PTR_FUN_14aae68c0;
  local_1c8[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_1c8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7e146;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display a scrolling hitch time when frame hitches occur.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_Hitches",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,(undefined1)local_2a0);
  local_2f8 = &local_1c8;
  ppuStack_2f0 = &local_1b8;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = local_59;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1e8 = (undefined8 *)0x0;
  local_1e0 = 0;
  FUN_1446efa72(&local_1e8,0,3,0x10);
  puVar11 = local_1e8;
  local_1e0 = 3;
  *local_1e8 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_1e8[2] = lVar17;
  *local_1e8 = &PTR_FUN_14aae68c0;
  local_1e8[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_1e8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7e192;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,
                L"Display number of APlayerControllers and the number that were rendered to screen."
               );
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_AI",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,uVar5);
  ppuStack_2f0 = (undefined8 **)&local_1d8;
  local_2f8 = &local_1e8;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = local_59;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = (undefined8 *)0x0;
  local_200 = 0;
  FUN_1446efa72(&local_208,0,3,0x10);
  puVar11 = local_208;
  local_200 = 3;
  *local_208 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_208[2] = lVar17;
  *local_208 = &PTR_FUN_14aae68c0;
  local_208[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_208 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7e55a;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display a time from a timecode provider.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_Timecode",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,uVar5);
  ppuStack_2f0 = (undefined8 **)&local_1f8;
  local_2f8 = &local_208;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  uVar5 = local_59;
  local_218 = 0;
  uStack_210 = 0;
  local_228 = (undefined8 *)0x0;
  local_220 = 0;
  FUN_1446efa72(&local_228,0,3,0x10);
  puVar11 = local_228;
  local_220 = 3;
  *local_228 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_228[2] = lVar17;
  *local_228 = &PTR_FUN_14aae68c0;
  local_228[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_228 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7ea58;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display the global, steadily increasing frame counter.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_FrameCounter",1);
  local_2e8 = CONCAT71(local_2e8._1_7_,uVar5);
  ppuStack_2f0 = (undefined8 **)&local_218;
  local_2f8 = &local_228;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  local_238 = 0;
  uStack_230 = 0;
  local_248 = (undefined8 *)0x0;
  local_240 = 0;
  FUN_1446efa72(&local_248,0,3,0x10);
  puVar11 = local_248;
  local_240 = 3;
  *local_248 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_248[2] = lVar17;
  *local_248 = &PTR_FUN_14aae68c0;
  local_248[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_248 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7eb86;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display a list of common FColors and their names.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_ColorList",1);
  ppuStack_2f0 = (undefined8 **)&local_238;
  local_2e8 = local_2e8 & 0xffffffffffffff00;
  local_2f8 = &local_248;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  local_258 = 0;
  uStack_250 = 0;
  local_268 = (undefined8 *)0x0;
  local_260 = 0;
  FUN_1446efa72(&local_268,0,3,0x10);
  puVar11 = local_268;
  local_260 = 3;
  *local_268 = &PTR_LAB_14aae6930;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_268[2] = lVar17;
  *local_268 = &PTR_FUN_14aae68c0;
  local_268[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_268 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_143756abe;
  *(undefined4 *)(puVar11 + 5) = 0;
  FUN_140056680(local_138,L"Display a list of names of all the loaded levels.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_Levels",1);
  ppuStack_2f0 = (undefined8 **)&local_258;
  local_2e8 = local_2e8 & 0xffffffffffffff00;
  local_2f8 = &local_268;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  local_278 = (undefined8 *)0x0;
  local_270 = 0;
  FUN_1446efa72(&local_278,0,3,0x10);
  puVar11 = local_278;
  local_270 = 3;
  *local_278 = &PTR_LAB_14aae6850;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_278[2] = lVar17;
  *local_278 = &PTR_FUN_14aae67e0;
  local_278[3] = 0;
  iVar20 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_278 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar20 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      iVar19 = DAT_14c964868 + 1;
      bVar22 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar22) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar19);
      }
      LOCK();
      iVar20 = *(int *)(lVar15 + 0x10);
      bVar22 = iVar20 == 0;
      if (bVar22) {
        *(int *)(lVar15 + 0x10) = iVar19;
        iVar20 = 0;
      }
      UNLOCK();
      if (bVar22) {
        iVar20 = iVar19;
      }
    }
  }
  *(int *)((longlong)puVar11 + 0x1c) = iVar20;
  puVar11[4] = FUN_147d7ee86;
  *(undefined4 *)(puVar11 + 5) = 0;
  local_288 = 0;
  uStack_280 = 0;
  FUN_140056680(local_138,L"Display detailed frame and fps timings.");
  FUN_140233b1a(local_128,local_138);
  FUN_1446f470e(local_140,L"STATCAT_Engine",1);
  FUN_1446f470e(local_148,L"STAT_Detailed",1);
  local_2e8 = local_2e8 & 0xffffffffffffff00;
  local_2f8 = (undefined8 **)&local_288;
  ppuStack_2f0 = &local_278;
  FUN_14144edaa(&local_b8,local_148,local_140,local_128);
  iVar20 = (int)param_1[0x245];
  *(uint *)(param_1 + 0x245) = iVar20 + 1U;
  if (*(uint *)((longlong)param_1 + 0x122c) < iVar20 + 1U) {
    FUN_14640a88c(plVar12,iVar20);
  }
  puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar20 * 0x58);
  *puVar11 = local_b8;
  puVar11[1] = 0;
  puVar11[1] = plStack_b0;
  plStack_b0 = (longlong *)0x0;
  *(undefined4 *)(puVar11 + 2) = (undefined4)local_a8;
  *(undefined4 *)((longlong)puVar11 + 0x14) = local_a8._4_4_;
  local_a8 = 0;
  puVar11[3] = local_a0;
  FUN_14023423e(puVar11 + 4,local_98);
  puVar11[6] = 0;
  *(undefined4 *)(puVar11 + 7) = 0;
  puVar11[6] = local_88;
  local_88 = 0;
  *(undefined4 *)(puVar11 + 7) = local_80;
  local_80 = 0;
  puVar11[8] = 0;
  *(undefined4 *)(puVar11 + 9) = 0;
  puVar11[8] = local_78;
  local_78 = 0;
  *(undefined4 *)(puVar11 + 9) = local_70;
  local_70 = 0;
  *(undefined1 *)(puVar11 + 10) = local_68;
  FUN_1411de872(&local_b8);
  if (local_128[0] != (longlong *)0x0) {
    (**(code **)(*local_128[0] + 0x10))();
  }
  if (local_138[0] != (code *)0x0) {
    FUN_1400020a8();
  }
  if (0 < (int)param_1[0x245]) {
    lVar15 = 0;
    do {
      lVar17 = *plVar12;
      uVar13 = (ulonglong)DAT_14cb0ce28;
      if (0 < (longlong)uVar13) {
        lVar18 = lVar15 * 0x58;
        local_2a0 = lVar17 + lVar18;
        local_290 = lVar17 + lVar18 + 0x20;
        local_298 = lVar17 + lVar18 + 0x18;
        bVar22 = false;
        DAT_14cb0ce34 = DAT_14cb0ce34 + 1;
        do {
          lVar17 = uVar13 * 0x10 + -8;
          uVar21 = uVar13;
          while (((*(int *)(DAT_14cb0ce20 + lVar17) != 0 &&
                  (plVar10 = *(longlong **)(DAT_14cb0ce20 + -8 + lVar17), plVar10 != (longlong *)0x0
                  )) && (cVar6 = (**(code **)(*plVar10 + 0x60))
                                           (plVar10,local_2a0,local_298,local_290), cVar6 != '\0')))
          {
            lVar17 = lVar17 + -0x10;
            bVar4 = uVar21 < 2;
            uVar21 = uVar21 - 1;
            if (bVar4) {
              DAT_14cb0ce34 = DAT_14cb0ce34 + -1;
              if (bVar22) goto LAB_143755974;
              goto LAB_1437558b9;
            }
          }
          uVar13 = uVar21 - 1;
          bVar22 = true;
        } while (1 < uVar21);
        DAT_14cb0ce34 = DAT_14cb0ce34 + -1;
LAB_143755974:
        iVar20 = DAT_14cb0ce28;
        if (DAT_14cb0ce34 < 1) {
          if (0 < DAT_14cb0ce28) {
            iVar19 = 0;
            do {
              if (((*(int *)(DAT_14cb0ce20 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                  (plVar10 = *(longlong **)(DAT_14cb0ce20 + (longlong)iVar19 * 0x10),
                  plVar10 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar10 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(&DAT_14cb0ce20,iVar19);
                FUN_14005b248(&DAT_14cb0ce20);
              }
              else {
                iVar19 = iVar19 + 1;
              }
            } while (iVar19 < DAT_14cb0ce28);
          }
          _DAT_14cb0ce30 = DAT_14cb0ce28 * 2;
          if (_DAT_14cb0ce30 < 3) {
            _DAT_14cb0ce30 = 2;
          }
          if ((_DAT_14cb0ce30 < iVar20) && (DAT_14cb0ce2c != DAT_14cb0ce28)) {
            FUN_14045812c(&DAT_14cb0ce20);
          }
        }
      }
LAB_1437558b9:
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_1[0x245]);
  }
  (**(code **)(*param_1 + 0x438))(param_1);
  DAT_14cb0d138 = 0xffffffffffffffff;
  DAT_14cb0d148 = 0xffffffffffffffff;
  DAT_14cb0d108 = 0xffffffffffffffff;
  DAT_14cb0d118 = 0xffffffffffffffff;
  DAT_14cb0d128 = 0xffffffffffffffff;
  DAT_14cb0d140 = 5;
  DAT_14cb0d150 = 2;
  _DAT_14cb0d110 = 0;
  _DAT_14cb0d120 = 0;
  _DAT_14cb0d130 = 0;
  if (DAT_14c872ce0 != 0) {
    local_b8 = (code *)0x0;
    plStack_b0 = (longlong *)0x0;
    local_2f8 = (undefined8 **)&DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,L"/Script/Engine.Engine",L"ThreadConfigs",&local_b8);
    uVar7 = 0;
    if ((int)plStack_b0 != 0) {
      FUN_143766e1b(&local_b8);
      uVar7 = (int)plStack_b0;
    }
    FUN_1447a1747(local_b8,uVar7);
    if (local_b8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_50 != 0) {
    if (local_58 == (code *)0x0) goto LAB_143755b4a;
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143755b4a:
  if ((local_48 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143756928 FUN_143756928 body=147 status=ok
// SIG undefined FUN_143756928(void)

undefined8 FUN_143756928(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 != (longlong *)0x0) {
    FUN_140056680(local_30,L"NamedEvents");
    cVar1 = (**(code **)(*param_3 + 0x170))(param_3,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
    if (cVar1 == '\0') {
      iVar2 = 1;
      if (1 < DAT_14c867d20) {
        iVar2 = DAT_14c867d20;
      }
      DAT_14c867d20 = iVar2 + -1;
    }
    else {
      DAT_14c867d20 = DAT_14c867d20 + 1;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1437569bc FUN_1437569bc body=257 status=ok
// SIG undefined FUN_1437569bc(void)

int FUN_1437569bc(void)

{
  undefined8 uVar1;
  size_t sVar2;
  undefined8 in_R9;
  int in_stack_00000028;
  int in_stack_00000030;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 *local_70;
  undefined4 *local_68;
  wchar_t *local_58;
  int local_50;
  wchar_t *local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = DAT_14c75905c;
  local_34 = DAT_14c758c60;
  local_30 = DAT_14c758c60;
  local_2c = 0x3f800000;
  uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
  FUN_140002266(&local_58,L"DrawCount only supported with HAS_GPU_STATS");
  local_48 = local_58;
  if (local_50 == 0) {
    local_48 = L"";
  }
  local_40 = 0;
  if (local_48 != (wchar_t *)0x0) {
    sVar2 = wcslen(local_48);
    local_40 = (int)sVar2;
  }
  local_68 = &DAT_149e1e308;
  local_70 = &local_38;
  local_78 = uVar1;
  FUN_147d8e230(in_R9,(double)(in_stack_00000028 + -200),(double)in_stack_00000030);
  if (local_58 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return in_stack_00000030;
}



// FUNCTION 143756abe FUN_143756abe body=2732 status=ok
// SIG undefined FUN_143756abe(void)

int FUN_143756abe(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 uint param_5,int param_6)

{
  ulonglong uVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined4 uVar4;
  code *pcVar5;
  size_t sVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  int iVar12;
  uint uVar13;
  undefined *puVar14;
  undefined2 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1c8 [32];
  code *local_1a8;
  wchar_t *local_1a0;
  undefined4 *local_198;
  undefined8 local_190;
  wchar_t *local_188;
  code *local_180;
  undefined1 *local_178;
  undefined8 *local_170;
  code *local_168;
  code *local_160;
  int local_14c;
  ulonglong local_148;
  code *local_140;
  longlong local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  code *local_110;
  undefined4 local_108;
  code *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float local_d4;
  code *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulonglong uStack_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  undefined8 *local_90;
  uint local_88;
  ulonglong local_80;
  
  uVar7 = (ulonglong)param_5;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  uVar10 = 0;
  FUN_1434df551(&local_90,param_2,0);
  local_1a8 = *(code **)(DAT_14cb0d2b0 + 0x58);
  local_a0 = L"Levels";
  local_98 = 6;
  local_198 = &DAT_149e1e308;
  local_1a0 = L"";
  FUN_147d8e230(param_4,(double)(int)param_5,(double)param_6);
  iVar12 = param_6 + 0xc;
  if (local_88 != 0) {
    FUN_1400021e4(local_90,&local_b0);
    FUN_140d2bdd2(&local_c0,&local_b0);
    local_140 = local_c0;
    if (*(char *)(param_1 + 0x12e0) == '\x01') {
      uVar10 = (longlong)(int)uStack_a8 * 2;
      do {
        if (uVar10 == 0) goto LAB_143756c60;
        uVar1 = uVar10 - 2;
        lVar16 = uVar10 - 2;
        uVar10 = uVar1;
      } while (*(short *)(local_b0 + lVar16) != 0x2f);
      iVar8 = (int)(uVar1 >> 1);
      if (iVar8 != -1) {
        uVar9 = iVar8 + 1;
        uVar13 = (int)uStack_a8 - 1;
        pcVar5 = local_b0;
        if ((int)uStack_a8 == 0) {
          pcVar5 = (code *)&DAT_149dfb77a;
          uVar13 = 0;
        }
        if ((int)uVar13 <= (int)uVar9) {
          uVar9 = uVar13;
        }
        uVar10 = (ulonglong)uVar9;
        if ((int)uVar9 < 1) {
          uVar10 = 0;
        }
        FUN_14006620a(&local_c0,pcVar5 + uVar10 * 2,uVar13 - (int)uVar10);
        if (local_b0 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_b0 = local_c0;
        uStack_a8 = uStack_b8;
      }
    }
LAB_143756c60:
    uVar2 = *local_90;
    if (DAT_14c951858 == 0) {
      local_c0 = FUN_1449e2820;
      local_160 = FUN_14081d0ea;
      local_168 = FUN_14081d0ea;
      local_178 = &LAB_1468c5283;
      local_180 = FUN_142809da0;
      local_188 = L"Engine";
      local_190 = 0x400000000;
      local_198 = (undefined4 *)CONCAT44(local_198._4_4_,0x10000000);
      local_1a0 = (wchar_t *)CONCAT44(local_1a0._4_4_,8);
      local_1a8 = (code *)CONCAT44(local_1a8._4_4_,0x50);
      local_170 = &local_c0;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    local_1a0 = (wchar_t *)((ulonglong)local_1a0 & 0xffffffff00000000);
    local_1a8 = (code *)((ulonglong)local_1a8 & 0xffffffff00000000);
    FUN_140be85e0(DAT_14c951858,0,uVar2,0);
    if (*(char *)((longlong)local_90 + 0x21) == '\x01') {
      pcVar5 = (code *)&DAT_149dfb77a;
      if ((int)uStack_a8 != 0) {
        pcVar5 = local_b0;
      }
      pwVar11 = L"->  %s - %4.1f sec";
    }
    else {
      pcVar5 = (code *)&DAT_149dfb77a;
      if ((int)uStack_a8 != 0) {
        pcVar5 = local_b0;
      }
      pwVar11 = L"    %s - %4.1f sec";
    }
    FUN_140002266(&local_c0,pwVar11,pcVar5,0);
    pcVar5 = (code *)&DAT_149dfb77a;
    if ((int)uStack_b8 != 0) {
      pcVar5 = local_c0;
    }
    FUN_14020fad6(&local_b0,pcVar5);
    if (local_c0 != (code *)0x0) {
      FUN_1400020a8();
    }
    local_c0 = (code *)CONCAT44(DAT_14c758e5c,DAT_14c758e5c);
    uStack_b8 = CONCAT44(0x3f800000,DAT_14c758e5c);
    local_d0 = local_b0;
    if ((int)uStack_a8 == 0) {
      local_d0 = (code *)&DAT_149dfb77a;
    }
    uVar10 = *(ulonglong *)(DAT_14cb0d2b0 + 0x58);
    local_c8 = 0;
    if (local_d0 != (code *)0x0) {
      sVar6 = wcslen((wchar_t *)local_d0);
      local_c8 = (int)sVar6;
    }
    local_198 = &DAT_149e1e308;
    local_1a8 = (code *)uVar10;
    local_1a0 = (wchar_t *)&local_c0;
    FUN_147d8e230(param_4,(double)(int)param_5,(double)iVar12);
    if (local_b0 != (code *)0x0) {
      FUN_1400020a8();
    }
    iVar12 = param_6 + 0x18;
    uVar10 = (ulonglong)local_88;
    local_d4 = 0.0;
    local_d8 = 0.0;
    if (1 < (int)local_88) {
      lVar16 = 1;
      fVar18 = 0.0;
      local_14c = iVar12;
      local_138 = param_1;
      local_130 = param_4;
      do {
        puVar17 = local_90 + lVar16 * 0xf;
        (**(code **)(*(longlong *)param_4[0xb] + 0x28))((longlong *)param_4[0xb],&local_b0);
        local_148 = uVar7;
        if (local_b0._4_4_ + -0x1e < iVar12) {
          if (param_6 < iVar12) {
            param_6 = iVar12;
          }
          fVar19 = fVar18 + (float)(int)uVar7;
          fVar18 = 0.0;
          iVar12 = local_14c;
          local_148 = (ulonglong)(uint)(int)fVar19;
        }
        uVar7 = (ulonglong)*(uint *)(puVar17 + 3);
        local_118 = 0xff;
        local_120 = 0xff;
        local_128 = 0xff;
        pwVar11 = L"Unknown";
        if (uVar7 < 9) {
          local_118 = *(longlong *)(&DAT_14aae7498 + uVar7 * 8);
          local_120 = *(longlong *)(&DAT_14aae74e0 + uVar7 * 8);
          local_128 = *(longlong *)(&DAT_14aae7528 + uVar7 * 8);
          pwVar11 = (wchar_t *)(&PTR_u_Unloaded_14aae7570)[uVar7];
        }
        if (*(int *)(puVar17 + 2) < 2) {
          FUN_1400021e4(puVar17,&local_b0);
        }
        else {
          local_b0 = (code *)0x0;
          uVar9 = *(uint *)(puVar17 + 2);
          _Src = (void *)puVar17[1];
          uStack_a8 = CONCAT44(uStack_a8._4_4_,uVar9);
          if ((longlong)(int)uVar9 == 0) {
            uStack_a8 = (ulonglong)uVar9;
          }
          else {
            FUN_1446dd670(&local_b0,uVar9,0);
            memcpy(local_b0,_Src,(longlong)(int)uVar9 * 2);
          }
        }
        FUN_140d2bdd2(&local_e8,&local_b0);
        FUN_14094a6a4(&local_c0,&local_e8,0);
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (*(char *)(local_138 + 0x12e0) == '\x01') {
          uVar7 = (longlong)(int)uStack_b8 * 2;
          do {
            if (uVar7 == 0) goto LAB_14375703e;
            uVar10 = uVar7 - 2;
            lVar3 = uVar7 - 2;
            uVar7 = uVar10;
          } while (*(short *)(local_c0 + lVar3) != 0x2f);
          iVar8 = (int)(uVar10 >> 1);
          if (iVar8 != -1) {
            uVar9 = iVar8 + 1;
            pcVar5 = local_c0;
            if ((int)uStack_b8 == 0) {
              pcVar5 = (code *)&DAT_149dfb77a;
            }
            uVar13 = (int)uStack_b8 - 1;
            if ((int)uStack_b8 == 0) {
              uVar13 = 0;
            }
            if ((int)uVar13 <= (int)uVar9) {
              uVar9 = uVar13;
            }
            if ((int)uVar9 < 1) {
              uVar9 = 0;
            }
            FUN_14006620a(&local_e8,pcVar5 + (ulonglong)uVar9 * 2,uVar13 - uVar9);
            if (local_c0 != (code *)0x0) {
              FUN_1400020a8();
            }
            uStack_b8 = CONCAT44(uStack_dc,iStack_e0);
            local_c0 = local_e8;
          }
        }
LAB_14375703e:
        if (*(int *)((longlong)puVar17 + 0x1c) != -1) {
          FUN_140002266(&local_e8,L" [LOD%d]",*(int *)((longlong)puVar17 + 0x1c) + 1);
          iVar8 = iStack_e0 + -1;
          if (iStack_e0 == 0) {
            iVar8 = 0;
          }
          FUN_1400020e8(&local_c0,local_e8,iVar8);
          if (local_e8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        uVar2 = *puVar17;
        if (DAT_14c951858 == 0) {
          local_e8 = FUN_1449e2820;
          local_160 = FUN_14081d0ea;
          local_168 = FUN_14081d0ea;
          local_178 = &LAB_1468c5283;
          local_180 = FUN_142809da0;
          local_188 = L"Engine";
          local_190 = 0x400000000;
          local_198 = (undefined4 *)CONCAT44(local_198._4_4_,0x10000000);
          local_1a0 = (wchar_t *)CONCAT44(local_1a0._4_4_,8);
          local_1a8 = (code *)CONCAT44(local_1a8._4_4_,0x50);
          local_170 = &local_e8;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        local_1a0 = (wchar_t *)((ulonglong)local_1a0 & 0xffffffff00000000);
        local_1a8 = (code *)((ulonglong)local_1a8 & 0xffffffff00000000);
        FUN_140be85e0(DAT_14c951858,0,uVar2,0);
        FUN_1400021e4(puVar17,&local_e8);
        pcVar5 = (code *)&DAT_149dfb77a;
        if (iStack_e0 != 0) {
          pcVar5 = local_e8;
        }
        FUN_1446f470e(local_f0,pcVar5,1);
        fVar19 = (float)(**(code **)(*DAT_14c948aa0 + 0x78))(DAT_14c948aa0,local_f0);
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (0.0 <= fVar19) {
          FUN_140002266(&local_e8,L" - %3i %%",(int)fVar19);
          iVar8 = iStack_e0 + -1;
          if (iStack_e0 == 0) {
            iVar8 = 0;
          }
          FUN_1400020e8(&local_c0,local_e8,iVar8);
          if (local_e8 != (code *)0x0) {
            FUN_1400020a8();
          }
        }
        local_1a8 = (code *)&DAT_149dfb77a;
        if ((int)uStack_b8 != 0) {
          local_1a8 = local_c0;
        }
        puVar15 = (undefined2 *)&DAT_149e001d8;
        if (*(char *)(puVar17 + 4) != '\0') {
          puVar15 = &DAT_149e060b2;
        }
        puVar14 = &DAT_149e16f6c;
        if (*(char *)((longlong)puVar17 + 0x21) != '\0') {
          puVar14 = &DAT_149e64e00;
        }
        local_1a0 = pwVar11;
        FUN_140002266(&local_e8,L"%s %s %s (%s)",puVar14,puVar15);
        pcVar5 = (code *)&DAT_149dfb77a;
        if (iStack_e0 != 0) {
          pcVar5 = local_e8;
        }
        FUN_14020fad6(&local_c0,pcVar5);
        param_4 = local_130;
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
        uVar7 = local_148;
        local_e8 = (code *)CONCAT44((&DAT_14c758c60)[local_120],(&DAT_14c758c60)[local_118]);
        iStack_e0 = (&DAT_14c758c60)[local_128];
        uStack_dc = 0x3f800000;
        uVar10 = *(ulonglong *)(DAT_14cb0d2b0 + 0x58);
        local_100 = (code *)&DAT_149dfb77a;
        if ((int)uStack_b8 != 0) {
          local_100 = local_c0;
        }
        uVar4 = 0;
        if (local_100 != (code *)0x0) {
          sVar6 = wcslen((wchar_t *)local_100);
          uVar4 = (int)sVar6;
        }
        local_198 = &DAT_149e1e308;
        local_1a8 = (code *)uVar10;
        local_1a0 = (wchar_t *)&local_e8;
        local_f8 = uVar4;
        FUN_147d8e230(param_4,(double)((int)uVar7 + 4),(double)iVar12,&local_100);
        local_110 = (code *)&DAT_149dfb77a;
        if ((int)uStack_b8 != 0) {
          local_110 = local_c0;
        }
        uVar4 = 0;
        if (local_110 != (code *)0x0) {
          sVar6 = wcslen((wchar_t *)local_110);
          uVar4 = (int)sVar6;
        }
        local_1a0 = (wchar_t *)param_4;
        local_1a8 = (code *)((ulonglong)local_1a8 & 0xffffffffffffff00);
        local_108 = uVar4;
        FUN_140b23708(*(undefined8 *)(DAT_14cb0d2b0 + 0x58),&local_110,&local_d4,&local_d8);
        if (fVar18 <= local_d4) {
          fVar18 = local_d4;
        }
        fVar19 = (float)iVar12 + local_d8;
        if (local_c0 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0 != (code *)0x0) {
          FUN_1400020a8();
        }
        iVar12 = (int)fVar19;
        lVar16 = lVar16 + 1;
        uVar10 = (ulonglong)(int)local_88;
      } while (lVar16 < (longlong)uVar10);
    }
    if (local_140 != (code *)0x0) {
      FUN_1400020a8();
      uVar10 = (ulonglong)local_88;
    }
  }
  FUN_147d88ee4(local_90,uVar10 & 0xffffffff);
  if (local_90 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (param_6 < iVar12) {
    param_6 = iVar12;
  }
  if ((local_80 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return param_6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375756c FUN_14375756c body=585 status=ok
// SIG undefined FUN_14375756c(void)

void FUN_14375756c(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  longlong local_58;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1437577b6();
  QueryPerformanceCounter(&local_50);
  plVar1 = (longlong *)(param_1 + 0xc28);
  iVar2 = *(int *)(param_1 + 0xc30);
  lVar7 = (longlong)iVar2;
  if (0 < lVar7) {
    local_60 = (longlong *)(param_1 + 0x28);
    lVar8 = lVar7 << 4;
    lVar9 = 0;
    local_58 = lVar8;
    do {
      plVar4 = (longlong *)FUN_147d7f3f4(param_1);
      if (plVar4 == (longlong *)0x0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(*plVar1 + 8 + lVar9) != 0) {
          puVar10 = *(undefined2 **)(*plVar1 + lVar9);
        }
        (**(code **)(*local_60 + 8))(local_60,DAT_14cb10918,puVar10,&DAT_14c872ee0);
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c872ef8) &&
           (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
          FUN_1459825b0(&DAT_14c872ee0);
          atexit(FUN_1427868a5);
          _Init_thread_footer(&DAT_14c872ef8);
        }
        puVar10 = &DAT_149dfb77a;
        if (*(int *)(*plVar1 + 8 + lVar9) != 0) {
          puVar10 = *(undefined2 **)(*plVar1 + lVar9);
        }
        uVar5 = (**(code **)(*plVar4 + 0x180))(plVar4);
        (**(code **)(plVar4[5] + 8))(plVar4 + 5,uVar5,puVar10,&DAT_14c872ee0);
        lVar8 = local_58;
      }
      lVar9 = lVar9 + 0x10;
    } while (lVar8 != lVar9);
  }
  QueryPerformanceCounter(&local_50);
  if (iVar2 != 0) {
    _Dst = *(void **)(param_1 + 0xc28);
    FUN_1447a1747(_Dst,iVar2);
    iVar3 = *(int *)(param_1 + 0xc30) - iVar2;
    iVar6 = iVar2;
    if (iVar3 != 0) {
      memmove(_Dst,(void *)(lVar7 * 0x10 + (longlong)_Dst),(longlong)iVar3 << 4);
      iVar6 = *(int *)(param_1 + 0xc30);
    }
    *(int *)(param_1 + 0xc30) = iVar6 - iVar2;
    FUN_140b12644(plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1437577b6 FUN_1437577b6 body=1896 status=ok
// SIG undefined FUN_1437577b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437577b6(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  void *pvVar3;
  double dVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  uint *puVar21;
  undefined1 auStack_e8 [32];
  int local_c8;
  uint local_c4;
  ulonglong local_c0;
  uint *local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined4 local_94;
  LARGE_INTEGER local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  QueryPerformanceCounter(&local_90);
  dVar4 = ((double)local_90.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14c86a9d8;
  if (*(int *)(param_1 + 0x1274) < *(int *)(param_1 + 0x1248)) {
    puVar21 = (uint *)(param_1 + 0x1250);
    local_78 = 0;
    uStack_70 = 0;
    uVar7 = *(uint *)(param_1 + 0x1268);
    uVar17 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar11 = 1;
      uVar15 = 0;
      iVar12 = 0;
      uVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x1260);
      if (*(uint **)(param_1 + 0x1260) == (uint *)0x0) {
        puVar6 = puVar21;
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
        iVar12 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar12 = uVar7 - 1;
        }
        uVar15 = 0;
        uVar11 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar11 = uVar15;
        }
        iVar12 = 0;
        do {
          if (uVar11 == uVar15) goto LAB_143757b73;
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar15 = 0;
        iVar12 = 0;
      }
      uVar11 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar11 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar5 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar7 <= (int)uVar5) {
        uVar5 = uVar7;
      }
    }
    if (uVar5 != uVar7) {
      plVar20 = (longlong *)(param_1 + 0x1240);
      uVar7 = 0xffffffff;
      local_b0 = plVar20;
      do {
        local_90.s.LowPart = *(undefined4 *)(*plVar20 + (longlong)(int)uVar5 * 0x20);
        local_c4 = uVar7;
        FUN_14685040c(&local_88);
        uVar1 = uStack_70;
        if ((local_90.QuadPart & 0xffffffffU) <= DAT_14c872be0) {
          lVar19 = (longlong)(int)uStack_70;
          uVar7 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
          local_a8 = uVar15;
          if (uStack_70._4_4_ < uVar7) {
            FUN_1447808da(&local_78,uVar1 & 0xffffffff);
          }
          lVar16 = local_88;
          *(undefined4 *)(local_78 + lVar19 * 4) = local_90.s.LowPart;
          lVar19 = (longlong)local_80;
          if (lVar19 == 0) {
            iVar14 = 0;
          }
          else {
            lVar18 = 0;
            local_c8 = iVar12;
            local_c0 = uVar17;
            local_b8 = puVar21;
            do {
              local_a0 = (undefined2 *)0x0;
              local_98 = *(int *)(lVar16 + 8 + lVar18);
              lVar13 = (longlong)local_98;
              pvVar3 = *(void **)(lVar16 + lVar18);
              if (lVar13 == 0) {
                local_94 = 0;
              }
              else {
                FUN_1446dd670(&local_a0,local_98,0);
                memcpy(local_a0,pvVar3,lVar13 * 2);
              }
              iVar12 = *(int *)(param_1 + 0xc30);
              *(uint *)(param_1 + 0xc30) = iVar12 + 1U;
              if (*(uint *)(param_1 + 0xc34) < iVar12 + 1U) {
                FUN_1447a1bd6((longlong *)(param_1 + 0xc28),iVar12);
              }
              puVar10 = &DAT_149dfb77a;
              if (local_98 != 0) {
                puVar10 = local_a0;
              }
              FUN_140056680((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0xc28),puVar10);
              if (local_a0 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              lVar18 = lVar18 + 0x10;
              uVar17 = local_c0;
              puVar21 = local_b8;
              iVar12 = local_c8;
              iVar14 = local_80;
            } while (lVar19 * 0x10 != lVar18);
          }
          FUN_1447a1747(local_88,iVar14);
          uVar15 = local_a8;
          plVar20 = local_b0;
          local_80 = 0;
          if (local_7c != 0) {
            FUN_1408be2c4(&local_88,0);
          }
        }
        FUN_1447a1747(local_88,local_80);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        lVar19 = local_78;
        uVar7 = local_c4 & ~(uint)uVar11;
        puVar6 = *(uint **)(param_1 + 0x1260);
        if (*(uint **)(param_1 + 0x1260) == (uint *)0x0) {
          puVar6 = puVar21;
        }
        uVar2 = *(uint *)(param_1 + 0x1268);
        iVar14 = (int)uVar15;
        lVar16 = (longlong)iVar14;
        uVar5 = puVar6[lVar16] & uVar7;
        if (uVar5 == 0) {
          iVar8 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar8 = uVar2 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar14) {
            iVar9 = iVar14;
          }
          if (iVar14 < iVar8) {
            lVar18 = 0;
            do {
              uVar5 = puVar6[lVar16 + lVar18 + 1];
              if (uVar5 != 0) {
                uVar15 = (ulonglong)(iVar14 + (int)lVar18 + 1);
                uVar7 = 0xffffffff;
                goto LAB_143757afe;
              }
              iVar12 = iVar12 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar9 - lVar16 != lVar18);
            uVar7 = 0xffffffff;
            iVar14 = iVar9;
          }
          uVar15 = (ulonglong)(iVar14 + 1);
          uVar5 = uVar2;
        }
        else {
LAB_143757afe:
          uVar11 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar11 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar5) {
            uVar5 = uVar2;
          }
        }
      } while (uVar5 != (uint)uVar17);
      lVar16 = (longlong)(int)uStack_70;
      if (lVar16 != 0) {
        lVar18 = 0;
        do {
          FUN_147d88f0a(plVar20,*(undefined4 *)(lVar19 + lVar18));
          lVar18 = lVar18 + 4;
        } while (lVar16 * 4 != lVar18);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
  }
LAB_143757b73:
  if (*(int *)(param_1 + 0x12c4) < *(int *)(param_1 + 0x1298)) {
    puVar21 = (uint *)(param_1 + 0x12a0);
    local_78 = 0;
    uStack_70 = 0;
    uVar7 = *(uint *)(param_1 + 0x12b8);
    uVar17 = (ulonglong)uVar7;
    if (uVar7 == 0) {
      uVar11 = 1;
      uVar15 = 0;
      iVar12 = 0;
      uVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(param_1 + 0x12b0);
      if (*(uint **)(param_1 + 0x12b0) == (uint *)0x0) {
        puVar6 = puVar21;
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
        iVar12 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar12 = uVar7 - 1;
        }
        uVar15 = 0;
        uVar11 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar11 = uVar15;
        }
        iVar12 = 0;
        do {
          if (uVar11 == uVar15) goto LAB_143757ed7;
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar6[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar15 = 0;
        iVar12 = 0;
      }
      uVar11 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar11 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar5 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar7 <= (int)uVar5) {
        uVar5 = uVar7;
      }
    }
    if (uVar5 != uVar7) {
      plVar20 = (longlong *)(param_1 + 0x1290);
      uVar7 = 0xffffffff;
      local_b0 = plVar20;
      do {
        local_90 = *(LARGE_INTEGER *)(*plVar20 + (longlong)(int)uVar5 * 0x20);
        local_c4 = uVar7;
        FUN_14685040c(&local_88);
        uVar1 = uStack_70;
        if ((double)local_90 <= dVar4) {
          lVar19 = (longlong)(int)uStack_70;
          uVar7 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
          local_a8 = uVar15;
          if (uStack_70._4_4_ < uVar7) {
            FUN_144941252(&local_78,uVar1 & 0xffffffff);
          }
          lVar16 = local_88;
          *(LARGE_INTEGER *)(local_78 + lVar19 * 8) = local_90;
          lVar19 = (longlong)local_80;
          if (lVar19 == 0) {
            iVar14 = 0;
          }
          else {
            lVar18 = 0;
            local_c8 = iVar12;
            local_c0 = uVar17;
            local_b8 = puVar21;
            do {
              local_a0 = (undefined2 *)0x0;
              local_98 = *(int *)(lVar16 + 8 + lVar18);
              lVar13 = (longlong)local_98;
              pvVar3 = *(void **)(lVar16 + lVar18);
              if (lVar13 == 0) {
                local_94 = 0;
              }
              else {
                FUN_1446dd670(&local_a0,local_98,0);
                memcpy(local_a0,pvVar3,lVar13 * 2);
              }
              iVar12 = *(int *)(param_1 + 0xc30);
              *(uint *)(param_1 + 0xc30) = iVar12 + 1U;
              if (*(uint *)(param_1 + 0xc34) < iVar12 + 1U) {
                FUN_1447a1bd6((longlong *)(param_1 + 0xc28),iVar12);
              }
              puVar10 = &DAT_149dfb77a;
              if (local_98 != 0) {
                puVar10 = local_a0;
              }
              FUN_140056680((longlong)iVar12 * 0x10 + *(longlong *)(param_1 + 0xc28),puVar10);
              if (local_a0 != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              lVar18 = lVar18 + 0x10;
              uVar17 = local_c0;
              puVar21 = local_b8;
              iVar12 = local_c8;
              iVar14 = local_80;
            } while (lVar19 * 0x10 != lVar18);
          }
          FUN_1447a1747(local_88,iVar14);
          uVar15 = local_a8;
          plVar20 = local_b0;
          local_80 = 0;
          if (local_7c != 0) {
            FUN_1408be2c4(&local_88,0);
          }
        }
        FUN_1447a1747(local_88,local_80);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        lVar19 = local_78;
        uVar7 = local_c4 & ~(uint)uVar11;
        puVar6 = *(uint **)(param_1 + 0x12b0);
        if (*(uint **)(param_1 + 0x12b0) == (uint *)0x0) {
          puVar6 = puVar21;
        }
        uVar2 = *(uint *)(param_1 + 0x12b8);
        iVar14 = (int)uVar15;
        lVar16 = (longlong)iVar14;
        uVar5 = puVar6[lVar16] & uVar7;
        if (uVar5 == 0) {
          iVar8 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar8 = uVar2 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar14) {
            iVar9 = iVar14;
          }
          if (iVar14 < iVar8) {
            lVar18 = 0;
            do {
              uVar5 = puVar6[lVar16 + lVar18 + 1];
              if (uVar5 != 0) {
                uVar15 = (ulonglong)(iVar14 + (int)lVar18 + 1);
                uVar7 = 0xffffffff;
                goto LAB_143757e62;
              }
              iVar12 = iVar12 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar9 - lVar16 != lVar18);
            uVar7 = 0xffffffff;
            iVar14 = iVar9;
          }
          uVar15 = (ulonglong)(iVar14 + 1);
          uVar5 = uVar2;
        }
        else {
LAB_143757e62:
          uVar11 = (ulonglong)(-uVar5 & uVar5);
          uVar1 = uVar11 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar5 = (iVar12 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar5) {
            uVar5 = uVar2;
          }
        }
      } while (uVar5 != (uint)uVar17);
      lVar16 = (longlong)(int)uStack_70;
      if (lVar16 != 0) {
        lVar18 = 0;
        do {
          FUN_147d89000(plVar20,*(undefined8 *)(lVar19 + lVar18));
          lVar18 = lVar18 + 8;
        } while (lVar16 * 8 != lVar18);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
  }
LAB_143757ed7:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143757f2a FUN_143757f2a body=1809 status=ok
// SIG undefined FUN_143757f2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143757f2a(longlong *param_1)

{
  longlong *plVar1;
  char *pcVar2;
  double dVar3;
  double dVar4;
  LARGE_INTEGER LVar5;
  ulonglong uVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  byte bVar14;
  bool bVar15;
  ulonglong uVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  undefined4 unaff_XMM7_Db;
  float fVar20;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  LARGE_INTEGER local_a8;
  undefined8 uStack_a0;
  LARGE_INTEGER local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar1 = (longlong *)param_1[0x18c];
  if ((plVar1 == (longlong *)0x0) ||
     (cVar7 = (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1), bVar14 = DAT_14cb0cf04, cVar7 != '\0')
     ) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0cf00) && (FUN_144b3d300(&DAT_14cb0cf00), DAT_14cb0cf00 == -1)) {
      QueryPerformanceCounter(&local_a8);
      DAT_14cb0cef8 = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0 + -0.0001;
      _Init_thread_footer(&DAT_14cb0cf00);
    }
    bVar14 = (DAT_14c846539 | DAT_14c866ff0) & 1;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0cf08) && (FUN_144b3d300(&DAT_14cb0cf08), DAT_14cb0cf08 == -1)) {
      DAT_14cb0cf04 = bVar14;
      _Init_thread_footer(&DAT_14cb0cf08);
    }
    DAT_14c846540 = DAT_14c866ff8;
    if (bVar14 == 0) {
      QueryPerformanceCounter(&local_a8);
      dVar17 = (double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0;
      if (DAT_14cb0cf04 != 0) {
        dVar3 = DAT_14c759090;
        if ((*(byte *)((longlong)param_1 + 0xc44) & 0x40) != 0) {
          dVar3 = 1.0 / (double)*(float *)(param_1 + 0x189);
        }
        DAT_14cb0cef8 = dVar17 - dVar3;
      }
      fVar19 = (float)(dVar17 - DAT_14cb0cef8);
      DAT_14c866ff8 = dVar17;
      if (fVar19 < 0.0) {
        dVar3 = (double)(**(code **)(*param_1 + 0x2f0))(param_1,(double)fVar19);
        unaff_XMM7_Db = 0;
        fVar19 = (float)dVar3;
      }
      (**(code **)(*param_1 + 0x310))(param_1,CONCAT44(unaff_XMM7_Db,fVar19),1);
      uVar16 = (**(code **)(*param_1 + 0x2f8))(param_1,CONCAT44(unaff_XMM7_Db,fVar19),1);
      if ((*(byte *)((longlong)param_1 + 0xc44) & 0x40) != 0) {
        uVar16 = (ulonglong)*(uint *)(param_1 + 0x189);
      }
      fVar18 = (float)uVar16;
      fVar20 = 0.0;
      if ((0.0 < fVar18) && (fVar20 = 1.0 / fVar18 - fVar19, fVar20 <= 0.0)) {
        fVar20 = 0.0;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      FUN_1401c23cc(&local_b0);
      local_a8.QuadPart = 0;
      uStack_a0 = 0;
      iVar9 = (**(code **)(DAT_14c8337f0 + 0x18))(&DAT_14c8337f0,local_b0);
      if (0 < iVar9) {
        iVar13 = 0;
        do {
          lVar11 = (**(code **)(DAT_14c8337f0 + 0x20))(&DAT_14c8337f0,local_b0,iVar13);
          uVar6 = uStack_a0;
          lVar12 = lVar11 + -8;
          if (lVar11 == 0) {
            lVar12 = 0;
          }
          lVar11 = (longlong)(int)uStack_a0;
          uVar10 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
          if (uStack_a0._4_4_ < uVar10) {
            FUN_1401c24ca(&local_a8,uVar6 & 0xffffffff);
          }
          *(longlong *)(local_a8.QuadPart + lVar11 * 8) = lVar12;
          iVar13 = iVar13 + 1;
        } while (iVar9 != iVar13);
      }
      LVar5 = local_a8;
      lVar12 = (longlong)(int)uStack_a0;
      if (lVar12 == 0) {
        bVar8 = 1;
      }
      else {
        lVar11 = 0;
        do {
          bVar8 = (**(code **)(**(longlong **)(LVar5.QuadPart + lVar11) + 0x30))
                            (*(longlong **)(LVar5.QuadPart + lVar11),uVar16);
          if (bVar8 != 0) break;
          bVar15 = lVar12 * 8 + -8 != lVar11;
          lVar11 = lVar11 + 8;
        } while (bVar15);
        bVar8 = bVar8 ^ 1;
      }
      if (fVar20 <= 0.0) {
        DAT_14c846548 = 0.0;
        if ((*(byte *)((longlong)param_1 + 0xc44) & 0x40) != 0) {
          fVar19 = *(float *)(param_1 + 0x189);
          DAT_14c846548 = 0.0;
          if ((fVar18 == fVar19) && (DAT_14c846548 = 0.0, !NAN(fVar18) && !NAN(fVar19))) {
            DAT_14c866ff8 = 1.0 / (double)fVar19 + DAT_14cb0cef8;
            DAT_14c846548 = 0.0;
          }
        }
      }
      else {
        FUN_1403937d4(local_b8,0);
        QueryPerformanceCounter(&local_98);
        dVar3 = (double)local_98.QuadPart * DAT_14c83f420;
        if (bVar8 != 0) {
          if (0.005 < fVar20) {
            FUN_14279b9b6(fVar20 + -0.002);
          }
          QueryPerformanceCounter(&local_98);
          if ((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0 < dVar17 + (double)fVar20) {
            do {
              SwitchToThread();
              QueryPerformanceCounter(&local_98);
            } while ((double)local_98.QuadPart * DAT_14c83f420 + 16777216.0 <
                     dVar17 + (double)fVar20);
          }
        }
        QueryPerformanceCounter(&local_98);
        dVar17 = (double)local_98.QuadPart * DAT_14c83f420 + 16777216.0;
        DAT_14c866ff8 = dVar17;
        if ((*(byte *)((longlong)param_1 + 0xc44) & 0x40) != 0) {
          DAT_14c866ff8 = 1.0 / (double)*(float *)(param_1 + 0x189) + DAT_14cb0cef8;
        }
        QueryPerformanceCounter(&local_98);
        dVar4 = (double)local_98.QuadPart * DAT_14c83f420;
        FUN_140248952(local_b8);
        DAT_14c846548 = ((dVar4 + 16777216.0) - (dVar3 + 16777216.0)) + 0.0;
      }
      DAT_14c759090 = DAT_14c866ff8 - DAT_14cb0cef8;
      DAT_14c846550 = 0.0;
      if (0.0 <= DAT_14c846548 - (double)fVar20) {
        DAT_14c846550 = DAT_14c846548 - (double)fVar20;
      }
      if (DAT_14c759090 < 0.0) {
        DAT_14c759090 = 0.01;
      }
      DAT_14cb0cef8 = dVar17;
      if (param_1 != (longlong *)0x0) {
        lVar12 = FUN_1413f862e();
        if ((((*(int *)(lVar12 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
              lVar12 + 0x30)) && (fVar19 = *(float *)(param_1 + 0x26a), 0.0 < fVar19)) &&
           (0 < (longlong)(int)param_1[0x22a])) {
          lVar12 = 0;
          do {
            pcVar2 = *(char **)(param_1[0x229] + lVar12 * 8);
            if ((*pcVar2 == '\x01') && (*(longlong *)(pcVar2 + 0x2a8) != 0)) {
              if (((*(longlong *)(pcVar2 + 0x360) != 0) &&
                  ((plVar1 = *(longlong **)(*(longlong *)(pcVar2 + 0x360) + 0x170),
                   plVar1 != (longlong *)0x0 &&
                   (iVar9 = *(int *)(*(longlong *)(pcVar2 + 0x2a8) + 0x40),
                   iVar13 = (**(code **)(*plVar1 + 0x6b0))(), iVar13 == iVar9)))) &&
                 (dVar17 = (double)fVar19, dVar17 <= DAT_14c759090)) {
                DAT_14c759090 = dVar17;
              }
              break;
            }
            lVar12 = lVar12 + 1;
          } while ((int)param_1[0x22a] != lVar12);
        }
      }
      if (local_a8.QuadPart != 0) {
        FUN_1400020a8();
      }
    }
    else {
      DAT_14c759090 = (double)(float)_DAT_14c759070;
      DAT_14cb0cef8 = DAT_14c866ff8;
      DAT_14c866ff8 = DAT_14c866ff8 + DAT_14c759090;
    }
  }
  DAT_14cb0cf04 = bVar14;
  FUN_140215d30(param_1);
  DAT_14c866fe0 = DAT_14c866fe0 + DAT_14c759090;
  if ((local_90 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14375863c FUN_14375863c body=144 status=ok
// SIG undefined FUN_14375863c(void)

void FUN_14375863c(longlong param_1)

{
  char cVar1;
  
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"noailogging");
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xe10) = *(byte *)(param_1 + 0xe10) | 8;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar1 = FUN_14054d46e(&DAT_14c846b20,L"enableailogging");
  if (cVar1 != '\0') {
    *(byte *)(param_1 + 0xe10) = *(byte *)(param_1 + 0xe10) & 0xf7;
  }
  return;
}



// FUNCTION 1437586d8 FUN_1437586d8 body=69 status=ok
// SIG undefined FUN_1437586d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437586d8(void)

{
  _DAT_14cb0cf10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375871a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cf18,1);
  return;
}



// FUNCTION 143758729 FUN_143758729 body=69 status=ok
// SIG undefined FUN_143758729(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143758729(void)

{
  _DAT_14cb0cf20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375876b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cf28,1);
  return;
}



// FUNCTION 14375876e FUN_14375876e body=11996 status=ok
// SIG undefined FUN_14375876e(void)

void FUN_14375876e(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  code *pcVar17;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  undefined1 local_71;
  code *local_70;
  undefined1 *local_68;
  undefined1 local_59;
  code *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14089e62a(&local_59,L"Initializing Object References");
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  lVar9 = DAT_14ca9ecb8;
  iVar16 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar16 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar16 == 2)) {
    uVar15 = 0;
  }
  else if (iVar16 == 1) {
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    uVar15 = (ulonglong)(DVar6 != DVar7);
  }
  else {
    uVar15 = 1;
  }
  if (*(int *)(lVar9 + uVar15 * 4) == 1) {
    FUN_140056680(&local_58,L"WireframeMaterialName");
    FUN_14375b64b(param_1 + 0x488,param_1 + 0x480,1);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"LevelColorationLitMaterialName");
    FUN_14375b64b(param_1 + 0x508,param_1 + 0x500,1);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"LevelColorationUnlitMaterialName");
    FUN_14375b64b(param_1 + 0x520,param_1 + 0x518,1);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"LightingTexelDensityName");
    FUN_14375b64b(param_1 + 0x538,param_1 + 0x530,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"ShadedLevelColorationLitMaterialName");
    FUN_14375b64b(param_1 + 0x550,param_1 + 0x548,1);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"ShadedLevelColorationUnlitMaterialName");
    FUN_14375b64b(param_1 + 0x568,param_1 + 0x560,1);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"VertexColorMaterialName");
    FUN_14375b64b(param_1 + 0x5a8,param_1 + 0x5a0,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"VertexColorViewModeMaterialName_ColorOnly");
    FUN_14375b64b(param_1 + 0x5c0,param_1 + 0x5b8,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"VertexColorViewModeMaterialName_AlphaAsColor");
    FUN_14375b64b(param_1 + 0x5d8,param_1 + 0x5d0,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"VertexColorViewModeMaterialName_RedOnly");
    FUN_14375b64b(param_1 + 0x5f0,param_1 + 0x5e8,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"VertexColorViewModeMaterialName_GreenOnly");
    FUN_14375b64b(param_1 + 0x608,param_1 + 0x600,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"VertexColorViewModeMaterialName_BlueOnly");
    FUN_14375b64b(param_1 + 0x620,param_1 + 0x618,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_58,L"TextureColorViewModeMaterialName");
    FUN_14375b64b(param_1 + 0x638,param_1 + 0x630,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(&local_58,L"NaniteHiddenSectionMaterialName");
  FUN_14375b64b(param_1 + 0x4c8,param_1 + 0x4c0,0);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x580,&local_58);
  FUN_140056680(&local_70,L"RemoveSurfaceMaterialName");
  FUN_14375b64b(&local_58,param_1 + 0x578,0);
  if (local_70 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x4a0,&local_58);
  FUN_140056680(&local_70,L"DebugMeshMaterialName");
  FUN_14375b64b(&local_58,param_1 + 0x498,0);
  if (local_70 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x4e0,&local_58);
  FUN_140056680(&local_70,L"EmissiveMeshMaterialName");
  FUN_14375b64b(&local_58,param_1 + 0x4d8,0);
  if (local_70 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x6b0,&local_58);
  FUN_140056680(&local_70,L"InvalidLightmapSettingsMaterialName");
  FUN_14375b64b(&local_58,param_1 + 0x6a8,0);
  if (local_70 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x710,&local_58);
  FUN_140056680(&local_70,L"ArrowMaterialName");
  FUN_14375b64b(&local_58,param_1 + 0x6f8,0);
  if (local_70 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x730,&local_58);
  FUN_140056680(&local_70,L"ArrowMaterialInWorldGbxName");
  FUN_14375b64b(&local_58,param_1 + 0x700,0);
  if (local_70 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x370,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14154f5bb(param_1 + 0x368,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x398,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14375b715(param_1 + 0x390,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 1000,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14154f5bb(param_1 + 0x3e0,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x410,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14154f5bb(param_1 + 0x408,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0xb80,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14154f5bb(param_1 + 0xb78,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0xbb0,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14375b715(param_1 + 0xba0,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0xbd0,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14375b715(param_1 + 0xba8,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0xbf8,&local_58);
  pcVar17 = local_58;
  if (local_50 == 0) {
    pcVar17 = (code *)&DAT_149dfb77a;
  }
  FUN_14154f5bb(param_1 + 0xbf0,pcVar17);
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_146409bc4(param_1);
  FUN_146409c60(param_1);
  FUN_145dbf75c(param_1);
  lVar9 = *(longlong *)(param_1 + 0x898);
  if (lVar9 == 0) {
    FUN_14475cc44(param_1 + 0x8a0,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_1401f2c50();
    uStack_d0 = 0;
    local_e0 = 0;
    local_d8 = CONCAT71(local_d8._1_7_,1);
    local_e8 = (ulonglong)local_e8._4_4_ << 0x20;
    lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x898) = lVar9;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar9 = *(longlong *)(param_1 + 0x898);
    }
    if (lVar9 == 0) {
      lVar9 = FUN_147d7f515(DAT_14c951640);
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar9);
      }
      *(longlong *)(param_1 + 0x898) = lVar9;
    }
  }
  DAT_14c997c50 = lVar9;
  if (*(longlong *)(param_1 + 0x8c0) == 0) {
    FUN_14475cc44(param_1 + 0x8c8,&local_58);
    if (local_50 < 2) {
      FUN_14020fad6(&local_58,
                    L"/Engine/EngineMaterials/DefaultDestructiblePhysicalMaterial.DefaultDestructiblePhysicalMaterial"
                   );
    }
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_1401f2c50();
    uStack_d0 = 0;
    local_e0 = 0;
    local_d8 = CONCAT71(local_d8._1_7_,1);
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
    if ((lVar9 == 0) || (DAT_14c950c29 == '\0')) {
      *(longlong *)(param_1 + 0x8c0) = lVar9;
      if (lVar9 == 0) {
        lVar9 = FUN_147d7f515(DAT_14c951640);
        if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) goto LAB_1437591d1;
        goto LAB_1437591d9;
      }
    }
    else {
LAB_1437591d1:
      FUN_1456cec3c(lVar9);
LAB_1437591d9:
      *(longlong *)(param_1 + 0x8c0) = lVar9;
    }
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x140);
  if ((((lVar9 == 0) || (lVar10 = FUN_145992cd2(), lVar10 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30 || (*(longlong *)(param_1 + 0x140) == 0)))) {
    lVar9 = param_1 + 0x148;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_145992cd2();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x140) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x140);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_145992cd2(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x140),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_145992cd2();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x140) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x140);
      }
      if (lVar12 != 0) goto LAB_1437593aa;
    }
    else {
LAB_1437593aa:
      lVar9 = FUN_145992cd2();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x140) != 0)))) goto LAB_1437593e7;
    }
    lVar9 = FUN_145992cd2();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x140) = lVar9;
  }
LAB_1437593e7:
  lVar9 = *(longlong *)(param_1 + 0x168);
  if ((((lVar9 == 0) || (lVar10 = FUN_14129ed0a(), lVar10 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30 || (*(longlong *)(param_1 + 0x168) == 0)))) {
    lVar9 = param_1 + 0x170;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_14129ed0a();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x168) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x168);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_14129ed0a(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x168),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_14129ed0a();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x168) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x168);
      }
      if (lVar12 != 0) goto LAB_143759572;
    }
    else {
LAB_143759572:
      lVar9 = FUN_14129ed0a();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x168) != 0)))) goto LAB_1437595af;
    }
    lVar9 = FUN_14129ed0a();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x168) = lVar9;
  }
LAB_1437595af:
  lVar9 = *(longlong *)(param_1 + 400);
  if (lVar9 == 0) {
LAB_1437595d8:
    lVar9 = param_1 + 0x198;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    if (DAT_14cae9568 == 0) {
      local_70 = FUN_1417de738;
      local_a0 = (code *)&LAB_145893408;
      local_a8 = (code *)&LAB_1458cbbd2;
      local_b8 = &LAB_147ba21f1;
      local_c0 = (code *)&LAB_1463e9233;
      local_c8 = L"Engine";
      uStack_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,0x1000000c);
      local_e0 = CONCAT44(local_e0._4_4_,8);
      local_e8 = CONCAT44(local_e8._4_4_,0x2b8);
      local_b0 = &local_70;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
    }
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(DAT_14cae9568,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 400) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 400);
    }
    if (lVar10 == 0) {
LAB_1437596b9:
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      if (DAT_14cae9568 == 0) {
        local_70 = FUN_1417de738;
        local_a0 = (code *)&LAB_145893408;
        local_a8 = (code *)&LAB_1458cbbd2;
        local_b8 = &LAB_147ba21f1;
        local_c0 = (code *)&LAB_1463e9233;
        local_c8 = L"Engine";
        uStack_d0 = 0;
        local_d8 = CONCAT44(local_d8._4_4_,0x1000000c);
        local_e0 = CONCAT44(local_e0._4_4_,8);
        local_e8 = CONCAT44(local_e8._4_4_,0x2b8);
        local_b0 = &local_70;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      }
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar11 = FUN_141433b6f(DAT_14cae9568,0,pcVar17,0);
      if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar11);
      }
      *(longlong *)(param_1 + 400) = lVar11;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar11 = *(longlong *)(param_1 + 400);
      }
      if (lVar11 != 0) {
        if (DAT_14cae9568 == 0) {
          local_58 = FUN_1417de738;
          local_a0 = (code *)&LAB_145893408;
          local_a8 = (code *)&LAB_1458cbbd2;
          local_b8 = &LAB_147ba21f1;
          local_c0 = (code *)&LAB_1463e9233;
          local_c8 = L"Engine";
          uStack_d0 = 0;
          local_d8 = CONCAT44(local_d8._4_4_,0x1000000c);
          local_e0 = CONCAT44(local_e0._4_4_,8);
          local_e8 = CONCAT44(local_e8._4_4_,0x2b8);
          local_b0 = &local_58;
          FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
          if (DAT_14cae9568 == 0) goto LAB_14375b392;
        }
        goto LAB_143759772;
      }
      if (DAT_14cae9568 == 0) {
LAB_14375b392:
        local_58 = FUN_1417de738;
        local_a0 = (code *)&LAB_145893408;
        local_a8 = (code *)&LAB_1458cbbd2;
        local_b8 = &LAB_147ba21f1;
        local_c0 = (code *)&LAB_1463e9233;
        local_c8 = L"Engine";
        uStack_d0 = 0;
        local_d8 = CONCAT44(local_d8._4_4_,0x1000000c);
        local_e0 = CONCAT44(local_e0._4_4_,8);
        local_e8 = CONCAT44(local_e8._4_4_,0x2b8);
        local_b0 = &local_58;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      }
    }
    else {
      if (DAT_14cae9568 == 0) {
        local_58 = FUN_1417de738;
        local_a0 = (code *)&LAB_145893408;
        local_a8 = (code *)&LAB_1458cbbd2;
        local_b8 = &LAB_147ba21f1;
        local_c0 = (code *)&LAB_1463e9233;
        local_c8 = L"Engine";
        uStack_d0 = 0;
        local_d8 = CONCAT44(local_d8._4_4_,0x1000000c);
        local_e0 = CONCAT44(local_e0._4_4_,8);
        local_e8 = CONCAT44(local_e8._4_4_,0x2b8);
        local_b0 = &local_58;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        if (DAT_14cae9568 == 0) goto LAB_1437596b9;
      }
      if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
         (lVar11 = *(longlong *)(param_1 + 400),
         lVar11 == 0 ||
         *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         != DAT_14cae9568 + 0x30)) goto LAB_1437596b9;
LAB_143759772:
      if (((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
           DAT_14cae9568 + 0x30)) && (*(longlong *)(param_1 + 400) != 0)) goto LAB_14375979e;
    }
    lVar9 = DAT_14cae9568;
    if ((DAT_14cae9568 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(DAT_14cae9568);
    }
    *(longlong *)(param_1 + 400) = lVar9;
  }
  else {
    if (DAT_14cae9568 == 0) {
      local_58 = FUN_1417de738;
      local_a0 = (code *)&LAB_145893408;
      local_a8 = (code *)&LAB_1458cbbd2;
      local_b8 = &LAB_147ba21f1;
      local_c0 = (code *)&LAB_1463e9233;
      local_c8 = L"Engine";
      uStack_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,0x1000000c);
      local_e0 = CONCAT44(local_e0._4_4_,8);
      local_e8 = CONCAT44(local_e8._4_4_,0x2b8);
      local_b0 = &local_58;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      if (DAT_14cae9568 == 0) goto LAB_1437595d8;
    }
    if (((*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cae9568 + 0x38)) ||
        (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         != DAT_14cae9568 + 0x30)) || (*(longlong *)(param_1 + 400) == 0)) goto LAB_1437595d8;
  }
LAB_14375979e:
  lVar9 = *(longlong *)(param_1 + 0x1b8);
  if (((lVar9 == 0) || (lVar10 = FUN_14059e8cc(), lVar10 == 0)) ||
     ((*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38) ||
      ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30 || (*(longlong *)(param_1 + 0x1b8) == 0)))))) {
    lVar9 = param_1 + 0x1c0;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_14059e8cc();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x1b8) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x1b8);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_14059e8cc(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x1b8),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_14059e8cc();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x1b8) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x1b8);
      }
      if (lVar12 != 0) goto LAB_143759929;
    }
    else {
LAB_143759929:
      lVar9 = FUN_14059e8cc();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x1b8) != 0)))) goto LAB_143759966;
    }
    lVar9 = FUN_14059e8cc();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x1b8) = lVar9;
  }
LAB_143759966:
  lVar9 = *(longlong *)(param_1 + 0x200);
  if ((((lVar9 == 0) || (lVar10 = FUN_14594a93c(), lVar10 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30 || (*(longlong *)(param_1 + 0x200) == 0)))) {
    lVar9 = param_1 + 0x1e0;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_14594a93c();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x200) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x200);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_14594a93c(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x200),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_14594a93c();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x200) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x200);
      }
      if (lVar12 != 0) goto LAB_143759af1;
    }
    else {
LAB_143759af1:
      lVar9 = FUN_14594a93c();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x200) != 0)))) goto LAB_143759b2e;
    }
    lVar9 = FUN_14594a93c();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x200) = lVar9;
  }
LAB_143759b2e:
  lVar9 = *(longlong *)(param_1 + 0x228);
  if ((((lVar9 == 0) || (lVar10 = FUN_1412b49a2(), lVar10 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30 || (*(longlong *)(param_1 + 0x228) == 0)))) {
    lVar9 = param_1 + 0x208;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_1412b49a2();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x228) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x228);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_1412b49a2(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x228),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_1412b49a2();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x228) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x228);
      }
      if (lVar12 != 0) goto LAB_143759cb9;
    }
    else {
LAB_143759cb9:
      lVar9 = FUN_1412b49a2();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x228) != 0)))) goto LAB_143759cf6;
    }
    lVar9 = FUN_1412b49a2();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x228) = lVar9;
  }
LAB_143759cf6:
  if ((*(longlong *)(param_1 + 0x230) != 0) &&
     ((((lVar9 = *(longlong *)(param_1 + 0x250), lVar9 == 0 ||
        (lVar10 = FUN_1405f325c(), lVar10 == 0)) ||
       (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
      ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30 || (*(longlong *)(param_1 + 0x250) == 0)))))) {
    lVar9 = param_1 + 0x230;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_1405f325c();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x250) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x250);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_1405f325c(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x250),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_1405f325c();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x250) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x250);
      }
      if (lVar12 != 0) goto LAB_143759eda;
    }
    else {
LAB_143759eda:
      lVar9 = FUN_1405f325c();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x250) != 0)))) goto LAB_143759f17;
    }
    lVar9 = FUN_1405f325c();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x250) = lVar9;
  }
LAB_143759f17:
  lVar9 = *(longlong *)(param_1 + 0x2c0);
  if ((((lVar9 == 0) || (lVar10 = FUN_1458b5420(), lVar10 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30 || (*(longlong *)(param_1 + 0x2c0) == 0)))) {
    lVar9 = param_1 + 0x2a0;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_1458b5420();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x2c0) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x2c0);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_1458b5420(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x2c0),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_1458b5420();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x2c0) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x2c0);
      }
      if (lVar12 != 0) goto LAB_14375a0df;
    }
    else {
LAB_14375a0df:
      lVar9 = FUN_1458b5420();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x2c0) != 0)))) goto LAB_14375a10b;
    }
    lVar9 = FUN_1458b5420();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x2c0) = lVar9;
  }
LAB_14375a10b:
  lVar9 = *(longlong *)(param_1 + 0x2d0);
  if ((((lVar9 == 0) || (lVar10 = FUN_140a8ab54(), lVar10 == 0)) ||
      (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
       lVar10 + 0x30 || (*(longlong *)(param_1 + 0x2d0) == 0)))) {
    lVar9 = param_1 + 0x2d8;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_140a8ab54();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x2d0) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x2d0);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_140a8ab54(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x2d0),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_140a8ab54();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x2d0) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x2d0);
      }
      if (lVar12 != 0) goto LAB_14375a28e;
    }
    else {
LAB_14375a28e:
      lVar9 = FUN_140a8ab54();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x2d0) != 0)))) goto LAB_14375a2c7;
    }
    lVar9 = FUN_140a8ab54();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x2d0) = lVar9;
  }
LAB_14375a2c7:
  if ((*(longlong *)(param_1 + 0x280) != 0) &&
     ((((lVar9 = *(longlong *)(param_1 + 0x278), lVar9 == 0 ||
        (lVar10 = FUN_1405f333a(), lVar10 == 0)) ||
       (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) ||
      ((*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
        lVar10 + 0x30 || (*(longlong *)(param_1 + 0x278) == 0)))))) {
    lVar9 = param_1 + 0x280;
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_1405f333a();
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(uVar8,0,pcVar17,0);
    if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar10);
    }
    *(longlong *)(param_1 + 0x278) = lVar10;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
      lVar10 = *(longlong *)(param_1 + 0x278);
    }
    if ((((lVar10 == 0) || (lVar11 = FUN_1405f333a(), lVar11 == 0)) ||
        (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (lVar12 = *(longlong *)(param_1 + 0x278),
       lVar12 == 0 ||
       *(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
       lVar11 + 0x30)) {
      FUN_14475c82a(lVar9);
      FUN_14475cc44(lVar9,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      uVar8 = FUN_1405f333a();
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar12 = FUN_141433b6f(uVar8,0,pcVar17,0);
      if ((lVar12 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar12);
      }
      *(longlong *)(param_1 + 0x278) = lVar12;
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
        lVar12 = *(longlong *)(param_1 + 0x278);
      }
      if (lVar12 != 0) goto LAB_14375a458;
    }
    else {
LAB_14375a458:
      lVar9 = FUN_1405f333a();
      if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar12 + 0x38))) &&
         ((*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30 && (*(longlong *)(param_1 + 0x278) != 0)))) goto LAB_14375a491;
    }
    lVar9 = FUN_1405f333a();
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x278) = lVar9;
  }
LAB_14375a491:
  local_70 = (code *)&local_80;
  local_80 = 0;
  local_68 = &local_71;
  FUN_14475cc44(param_1 + 0x38,&local_90);
  lVar9 = local_90;
  if (*(longlong *)(param_1 + 0x30) == 0) {
    if (local_88 - 2U < 0x7fffffff) {
      uVar8 = FUN_140259bea();
      lVar10 = 0;
      uStack_d0 = 0;
      local_e0 = 0;
      local_d8 = CONCAT71(local_d8._1_7_,1);
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar9 = FUN_1412ecd05(uVar8,0,lVar9,0);
      *(longlong *)(param_1 + 0x30) = lVar9;
      if (lVar9 != 0) goto LAB_14375a59b;
    }
    local_58 = (code *)0x149eeaea4;
    local_50 = 5;
    local_4c = 0;
    uVar3 = FUN_14001a6c0(&local_58,1);
    local_58 = (code *)0x14aae6af4;
    local_50 = 0xf;
    local_4c = 0;
    uVar4 = FUN_14001a6c0(&local_58,1);
    lVar10 = FUN_143769b98(uVar4,uVar3,8);
    if (lVar10 != 0) {
      FUN_1401924dc(lVar10);
    }
    *(longlong *)(param_1 + 0x30) = lVar10;
  }
  else {
    lVar10 = 0;
  }
LAB_14375a59b:
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x60,&local_58);
  pcVar17 = local_58;
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (local_50 - 2U < 0x7fffffff) {
      uVar8 = FUN_140259bea();
      uStack_d0 = 0;
      local_e0 = 0;
      local_d8 = CONCAT71(local_d8._1_7_,1);
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
      *(longlong *)(param_1 + 0x58) = lVar9;
      if (lVar9 != 0) goto LAB_14375a623;
    }
    uVar8 = FUN_143769c7c(&local_70);
    *(undefined8 *)(param_1 + 0x58) = uVar8;
  }
LAB_14375a623:
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x88,&local_58);
  pcVar17 = local_58;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    if (local_50 - 2U < 0x7fffffff) {
      uVar8 = FUN_140259bea();
      uStack_d0 = 0;
      local_e0 = 0;
      local_d8 = CONCAT71(local_d8._1_7_,1);
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
      *(longlong *)(param_1 + 0x80) = lVar9;
      if (lVar9 != 0) goto LAB_14375a6ba;
    }
    uVar8 = FUN_143769c7c(&local_70);
    *(undefined8 *)(param_1 + 0x80) = uVar8;
  }
LAB_14375a6ba:
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0xb0,&local_58);
  pcVar17 = local_58;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    if (local_50 - 2U < 0x7fffffff) {
      uVar8 = FUN_140259bea();
      uStack_d0 = 0;
      local_e0 = 0;
      local_d8 = CONCAT71(local_d8._1_7_,1);
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
      *(longlong *)(param_1 + 0xa8) = lVar9;
      if (lVar9 != 0) goto LAB_14375a751;
    }
    uVar8 = FUN_143769c7c(&local_70);
    *(undefined8 *)(param_1 + 0xa8) = uVar8;
  }
LAB_14375a751:
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0xd8,&local_58);
  pcVar17 = local_58;
  if (*(longlong *)(param_1 + 0xd0) == 0) {
    if (local_50 - 2U < 0x7fffffff) {
      uVar8 = FUN_140259bea();
      uStack_d0 = 0;
      local_e0 = 0;
      local_d8 = CONCAT71(local_d8._1_7_,1);
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
      *(longlong *)(param_1 + 0xd0) = lVar9;
      if (lVar9 != 0) goto LAB_14375a7e8;
    }
    uVar8 = FUN_143769c7c(&local_70);
    *(undefined8 *)(param_1 + 0xd0) = uVar8;
  }
LAB_14375a7e8:
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_14475cc44(param_1 + 0x100,&local_58);
  pcVar17 = local_58;
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    if (local_50 - 2U < 0x7fffffff) {
      uVar8 = FUN_140259bea();
      uStack_d0 = 0;
      local_e0 = 0;
      local_d8 = CONCAT71(local_d8._1_7_,1);
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
      *(longlong *)(param_1 + 0xf8) = lVar9;
      if (lVar9 != 0) goto LAB_14375a87f;
    }
    uVar8 = FUN_143769c7c(&local_70);
    *(undefined8 *)(param_1 + 0xf8) = uVar8;
  }
LAB_14375a87f:
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  iVar16 = *(int *)(param_1 + 0x138);
  if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar16);
  }
  plVar14 = (longlong *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x128) = 0;
  local_98 = lVar10;
  if (*(int *)(param_1 + 300) != iVar16) {
    FUN_147d8703e(plVar14);
    iVar16 = *(int *)(param_1 + 0x138);
  }
  if (iVar16 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x130);
    lVar10 = 0;
    do {
      if (*(int *)(lVar9 + 8 + lVar10) - 2U < 0x7fffffff) {
        uVar8 = *(undefined8 *)(lVar9 + lVar10);
        uVar13 = FUN_140259bea();
        uStack_d0 = 0;
        local_e0 = 0;
        local_d8 = CONCAT71(local_d8._1_7_,1);
        local_e8 = local_e8 & 0xffffffff00000000;
        lVar11 = FUN_1412ecd05(uVar13,0,uVar8,0);
        if (lVar11 == 0) goto LAB_14375a928;
      }
      else {
LAB_14375a928:
        lVar11 = FUN_143769c7c(&local_70);
      }
      if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar11);
      }
      iVar1 = *(int *)(param_1 + 0x128);
      uVar5 = iVar1 + 1;
      *(uint *)(param_1 + 0x128) = uVar5;
      if (*(uint *)(param_1 + 300) < uVar5) {
        FUN_147d8709e(plVar14);
      }
      *(longlong *)(*plVar14 + (longlong)iVar1 * 8) = lVar11;
      if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar11);
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)iVar16 * 0x10 != lVar10);
  }
  if ((local_80 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  if ((local_98 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  FUN_14375b89e(param_1);
  FUN_14375b8e0(param_1);
  if (*(longlong *)(param_1 + 0x338) == 0) {
    FUN_14475cc44(param_1 + 0x318,&local_58);
    uVar5 = local_50 - 2;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (uVar5 < 0x7fffffff) {
      FUN_14475cc44(param_1 + 0x318,&local_58);
      pcVar17 = local_58;
      if (local_50 == 0) {
        pcVar17 = (code *)&DAT_149dfb77a;
      }
      if (DAT_14c927740 == 0) {
        local_70 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b0 = &local_70;
        local_b8 = &LAB_146856450;
        local_c0 = FUN_1427b121c;
        local_c8 = L"Engine";
        uStack_d0 = 0;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
        local_e0 = CONCAT44(local_e0._4_4_,8);
        local_e8 = CONCAT44(local_e8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      local_e0 = 0;
      local_e8 = local_e8 & 0xffffffff00000000;
      lVar9 = FUN_141433b6f(DAT_14c927740,0,pcVar17,0);
      if (local_58 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (lVar9 != 0) {
        local_d8 = 0;
        uStack_d0 = 0;
        local_e0 = local_e0 & 0xffffffffffffff00;
        local_e8 = 0;
        lVar9 = FUN_140584627(param_1,lVar9,0,0);
        if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar9);
        }
        *(longlong *)(param_1 + 0x338) = lVar9;
      }
    }
  }
  if (*(longlong *)(param_1 + 0x360) != 0) goto LAB_14375ad02;
  lVar9 = param_1 + 0x340;
  FUN_14475cc44(lVar9,&local_58);
  uVar5 = local_50 - 2;
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (uVar5 < 0x7fffffff) {
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    if (DAT_14c927740 == 0) {
      local_70 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b0 = &local_70;
      local_b8 = &LAB_146856450;
      local_c0 = FUN_1427b121c;
      local_c8 = L"Engine";
      uStack_d0 = 0;
      local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
      local_e0 = CONCAT44(local_e0._4_4_,8);
      local_e8 = CONCAT44(local_e8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
    }
    local_e0 = 0;
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar10 = FUN_141433b6f(DAT_14c927740,0,pcVar17,0);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (lVar10 == 0) goto LAB_14375b02b;
  }
  else {
LAB_14375b02b:
    FUN_14475cc44(lVar9,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/Engine/Private/UnrealEngine.cpp",0xdf0,
                  L"Engine config value AssetManagerClassName \'%s\' is not a valid class name.",
                  pcVar17);
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    lVar10 = 0;
  }
  lVar9 = FUN_146409ea2(param_1,lVar10);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  *(longlong *)(param_1 + 0x360) = lVar9;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar2 = FUN_14054d46e(&DAT_14c846b20,L"SkipAssetScan");
  if (cVar2 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x360) + 0x4a0))();
  }
LAB_14375ad02:
  plVar14 = (longlong *)FUN_1401e2c50();
  lVar9 = plVar14[0x22];
  if (lVar9 == 0) {
    (**(code **)(*plVar14 + 1000))(plVar14);
    lVar9 = plVar14[0x22];
  }
  FUN_14168f4a6(lVar9,0);
  if ((*(longlong *)(param_1 + 0x12e8) == 0) && (*(longlong *)(param_1 + 0x12f0) != 0)) {
    FUN_14475cc44(param_1 + 0x12f0,&local_58);
    pcVar17 = local_58;
    if (local_50 == 0) {
      pcVar17 = (code *)&DAT_149dfb77a;
    }
    uVar8 = FUN_140e9e504();
    uStack_d0 = 0;
    local_e0 = 0;
    local_d8 = CONCAT71(local_d8._1_7_,1);
    local_e8 = local_e8 & 0xffffffff00000000;
    lVar9 = FUN_1412ecd05(uVar8,0,pcVar17,0);
    if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar9);
    }
    *(longlong *)(param_1 + 0x12e8) = lVar9;
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14475cc44(param_1 + 0x1330,&local_58);
  FUN_140056680(&local_70,L"GbxHdrConversionMaterialName");
  FUN_14375b64b(&local_58,(undefined8 *)(param_1 + 0x1320),0);
  if (local_70 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (code *)0x0) {
    FUN_1400020a8();
  }
  lVar9 = FUN_14090ceee(*(undefined8 *)(param_1 + 0x1320),0,0);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  *(longlong *)(param_1 + 0x1328) = lVar9;
  lVar9 = FUN_1407bb686();
  uVar8 = FUN_1407bb416();
  FUN_1407bb482(uVar8,*(undefined8 *)(lVar9 + 0x10));
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14375b64b FUN_14375b64b body=202 status=ok
// SIG undefined FUN_14375b64b(void)

void FUN_14375b64b(undefined8 *param_1,longlong *param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  
  if (*param_2 == 0) {
    if (*(int *)(param_1 + 1) == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    uVar1 = FUN_140a1dfd8();
    lVar2 = FUN_1412ecd05(uVar1,0,puVar3,0,0,0,1,0);
    if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
      *param_2 = lVar2;
      if (lVar2 == 0) {
        return;
      }
    }
    else {
      FUN_1456cec3c(lVar2);
      *param_2 = lVar2;
    }
    if (param_3 == '\x01' && (*(byte *)(lVar2 + 0x1c0) & 0x20) == 0) {
      if (*(int *)(param_1 + 1) == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      else {
        puVar3 = (undefined2 *)*param_1;
      }
      FUN_140033559(".\\Runtime/Engine/Private/UnrealEngine.cpp",0xc48,
                    L"The special material (%s) was not marked with bUsedAsSpecialEngineMaterial. Make sure this flag is set in the editor, save the package, and compile shaders for this platform"
                    ,puVar3);
    }
  }
  return;
}



// FUNCTION 14375b715 FUN_14375b715 body=369 status=ok
// SIG undefined FUN_14375b715(void)

void FUN_14375b715(longlong *param_1,short *param_2)

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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 == 0) {
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
      *param_1 = 0;
LAB_14375b773:
      if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (DAT_14cb0b430 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_145892f94;
      local_48 = &LAB_147d6dbf3;
      local_50 = &LAB_1464081e0;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000001;
      local_70 = 8;
      local_78 = 0x138;
      FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
    }
    lVar1 = FUN_14583a8aa(DAT_14cb0b430,0,param_2);
    if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
      *param_1 = lVar1;
      if (lVar1 == 0) goto LAB_14375b773;
    }
    else {
      FUN_1456cec3c(lVar1);
      *param_1 = lVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 14375b89e FUN_14375b89e body=66 status=ok
// SIG undefined FUN_14375b89e(void)

void FUN_14375b89e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0xc88) != 0) {
    lVar1 = FUN_147d83002(param_1 + 0xc88);
    if (lVar1 != 0) {
      uVar2 = FUN_147d83099(param_1,lVar1);
      goto LAB_14375b8d3;
    }
  }
  uVar2 = 0;
LAB_14375b8d3:
  FUN_147d7f462(param_1,uVar2);
  return;
}



// FUNCTION 14375b8e0 FUN_14375b8e0 body=288 status=ok
// SIG undefined FUN_14375b8e0(void)

void FUN_14375b8e0(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xcd0) != 0) {
    lVar3 = FUN_147d83154(param_1 + 0xcd0);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    FUN_147d831eb(param_1,lVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (*(char *)(param_1 + 0xcf0) == '\x01') {
    local_30 = "DefaultTimecodeProvider";
    local_28 = 0x17;
    local_24 = 0;
    uVar1 = FUN_14001a6c0(&local_30,1);
    uVar2 = FUN_145a71232();
    local_38 = 0;
    FUN_140af9fb2(&local_30,param_1,uVar2,uVar1);
    lVar3 = FUN_14640a658(param_1,local_30);
    *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)(param_1 + 0xcf4);
    *(undefined4 *)(lVar3 + 0x28) = *(undefined4 *)(param_1 + 0xcfc);
    *(undefined2 *)(lVar3 + 0x38) = 0;
    FUN_146409b0e(param_1,lVar3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_146409b0e(param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375ba12 FUN_14375ba12 body=168 status=ok
// SIG undefined FUN_14375ba12(void)

void FUN_14375ba12(longlong *param_1,short *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
      *param_1 = 0;
      return;
    }
    uVar2 = FUN_14586995e();
    lVar3 = FUN_14583a8aa(uVar2,0,param_2);
    if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
      *param_1 = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    else {
      FUN_1456cec3c(lVar3);
      *param_1 = lVar3;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  FUN_1447f71cc(lVar3,0x40000000);
  return;
}



// FUNCTION 14375baba FUN_14375baba body=168 status=ok
// SIG undefined FUN_14375baba(void)

void FUN_14375baba(longlong *param_1,short *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
      *param_1 = 0;
      return;
    }
    uVar2 = FUN_14085eb5a();
    lVar3 = FUN_14583a8aa(uVar2,0,param_2);
    if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
      *param_1 = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    else {
      FUN_1456cec3c(lVar3);
      *param_1 = lVar3;
    }
  }
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  FUN_1447f71cc(lVar3,0x40000000);
  return;
}



// FUNCTION 14375bb62 FUN_14375bb62 body=12 status=ok
// SIG undefined FUN_14375bb62(void)

undefined8 FUN_14375bb62(void)

{
  return *(undefined8 *)(DAT_14cb0d2b0 + 0x30);
}



// FUNCTION 14375bb6e FUN_14375bb6e body=12 status=ok
// SIG undefined FUN_14375bb6e(void)

undefined8 FUN_14375bb6e(void)

{
  return *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
}



// FUNCTION 14375bb7a FUN_14375bb7a body=8 status=ok
// SIG undefined FUN_14375bb7a(void)

undefined8 FUN_14375bb7a(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xf50);
}



// FUNCTION 14375bb82 FUN_14375bb82 body=2379 status=ok
// SIG undefined FUN_14375bb82(void)

/* WARNING: Removing unreachable block (ram,0x00014375bf4d) */

bool FUN_14375bb82(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong **pplVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  char local_c1;
  longlong **local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c872bf0 != '\0') goto LAB_14375bc90;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0cf78) && (FUN_144b3d300(&DAT_14cb0cf78), DAT_14cb0cf78 == -1)) {
    local_78 = 0;
    local_d8 = CONCAT44(local_d8._4_4_,4);
    FUN_14078dbce(&DAT_14cb0cf60,L"r.EnableStereoEmulation",&local_78,L"Emulate stereo rendering");
    atexit(FUN_14375c4ce);
    _Init_thread_footer(&DAT_14cb0cf78);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar4 = FUN_14054d46e(&DAT_14c846b20,L"emulatestereo");
  lVar15 = DAT_14cb0cf70;
  if (cVar4 == '\0') {
    iVar16 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar16 == 0x40000002) {
      uVar9 = 0;
    }
    else {
      bVar17 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar16 != 2)) {
        if (iVar16 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          bVar17 = DVar7 == DVar8;
        }
        else {
          bVar17 = false;
        }
      }
      uVar9 = (ulonglong)(bVar17 ^ 1);
    }
    if (*(int *)(lVar15 + uVar9 * 4) == 0) {
      if (*(longlong *)(param_1 + 0xfe0) == 0) {
        if (DAT_14c846b14 == '\0') {
          FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                        L"Attempting to get the command line but it hasn\'t been initialized yet.");
        }
        cVar4 = FUN_14054d46e(&DAT_14c846b20,L"nohmd");
        if (cVar4 == '\0') {
          FUN_145af9b74(&local_68);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1)) {
            FUN_1456d85e6(&DAT_14c8337f0);
            atexit((_func_5014 *)&LAB_142748837);
            _Init_thread_footer(&DAT_14c8338a0);
          }
          FUN_1461cc160(&DAT_14c8337f0,&local_78,local_68);
          local_88 = 0;
          uStack_80 = 0;
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          pplVar12 = (longlong **)(param_1 + 0xfe0);
          local_d8 = 0;
          cVar4 = FUN_14063337c(&DAT_14c846b20,L"hmd=",&local_88,1);
          FUN_147366b8c(CONCAT44(uStack_74,local_78),local_70);
          local_98 = 0;
          uStack_90 = 0;
          if (0 < local_70) {
            lVar15 = 0;
            local_c1 = cVar4;
            local_c0 = pplVar12;
            do {
              plVar10 = *(longlong **)(CONCAT44(uStack_74,local_78) + lVar15 * 8);
              if (cVar4 == '\0') {
LAB_14375c04b:
                cVar5 = (**(code **)(*plVar10 + 0x58))(plVar10);
                uVar9 = uStack_90;
                if (cVar5 == '\0') {
                  lVar14 = (longlong)(int)uStack_90;
                  uVar6 = (int)uStack_90 + 1;
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar6);
                  if (uStack_90._4_4_ < uVar6) {
                    FUN_1461cc1e6(&local_98,uVar9 & 0xffffffff);
                  }
                  *(longlong **)(local_98 + lVar14 * 8) = plVar10;
                }
                else {
                  (**(code **)(*plVar10 + 0x80))(plVar10,&local_a8);
                  plVar11 = uStack_a0;
                  if (pplVar12 == &local_a8) {
LAB_14375c0d1:
                    plVar11 = uStack_a0;
                    if (uStack_a0 != (longlong *)0x0) {
                      LOCK();
                      plVar13 = uStack_a0 + 1;
                      *(int *)plVar13 = (int)*plVar13 + -1;
                      UNLOCK();
                      if ((int)*plVar13 == 0) {
                        (**(code **)*uStack_a0)(uStack_a0);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar11 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar11 + 0x10))(plVar11);
                        }
                      }
                    }
                  }
                  else {
                    *(longlong **)(param_1 + 0xfe0) = local_a8;
                    local_a8 = (longlong *)0x0;
                    plVar13 = *(longlong **)(param_1 + 0xfe8);
                    if (uStack_a0 == plVar13) goto LAB_14375c0d1;
                    uStack_a0 = (longlong *)0x0;
                    *(longlong **)(param_1 + 0xfe8) = plVar11;
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
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar13 + 0x10))(plVar13);
                        }
                      }
                      goto LAB_14375c0d1;
                    }
                  }
                  if (*pplVar12 != (longlong *)0x0) {
                    if (plVar10 != (longlong *)0x0) goto LAB_14375c21a;
                    break;
                  }
                }
              }
              else {
                local_a8 = (longlong *)0x0;
                uStack_a0 = (longlong *)0x0;
                (**(code **)(*plVar10 + 0x48))(plVar10,&local_a8);
                (**(code **)(*plVar10 + 0x40))(plVar10);
                lVar14 = (longlong)(int)uStack_a0;
                uVar6 = (int)uStack_a0 + 1;
                uStack_a0 = (longlong *)CONCAT44(uStack_a0._4_4_,uVar6);
                if (uStack_a0._4_4_ < uVar6) {
                  FUN_1447a1bd6(&local_a8);
                }
                local_a8[lVar14 * 2] = 0;
                local_a8[lVar14 * 2] = local_b8;
                *(undefined4 *)(local_a8 + lVar14 * 2 + 1) = (undefined4)local_b0;
                *(undefined4 *)((longlong)local_a8 + lVar14 * 0x10 + 0xc) = local_b0._4_4_;
                local_b0 = 0;
                local_b8 = 0;
                bVar17 = true;
                if ((longlong)(int)uStack_a0 != 0) {
                  plVar11 = local_a8;
LAB_14375bf7f:
                  if ((int)uStack_80 != (int)plVar11[1]) {
                    if ((int)plVar11[1] + (int)uStack_80 == 1) goto LAB_14375c141;
                    goto LAB_14375c008;
                  }
                  if (1 < (int)uStack_80) {
                    lVar14 = 0;
                    do {
                      uVar2 = *(ushort *)(local_88 + lVar14);
                      uVar3 = *(ushort *)(*plVar11 + lVar14);
                      pplVar12 = local_c0;
                      cVar4 = local_c1;
                      if (uVar2 == uVar3) {
                        if (uVar2 == 0) {
                          bVar17 = false;
                          goto LAB_14375c02e;
                        }
                      }
                      else {
                        if (0x7f < (uVar3 | uVar2)) {
                          iVar16 = (uint)uVar2 - (uint)uVar3;
                          goto LAB_14375bfe2;
                        }
                        if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3])
                        goto code_r0x00014375bfdf;
                      }
                      lVar14 = lVar14 + 2;
                    } while( true );
                  }
                  goto LAB_14375c141;
                }
LAB_14375c02e:
                FUN_1447a1747();
                if (local_a8 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                if (!bVar17) goto LAB_14375c04b;
              }
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < local_70);
            if (0 < (int)uStack_90) {
              lVar15 = 0;
              do {
                plVar10 = *(longlong **)(local_98 + lVar15 * 8);
                (**(code **)(*plVar10 + 0x80))(plVar10,&local_a8);
                plVar11 = uStack_a0;
                if (pplVar12 == &local_a8) {
LAB_14375c1dc:
                  plVar11 = uStack_a0;
                  if (uStack_a0 != (longlong *)0x0) {
                    LOCK();
                    plVar13 = uStack_a0 + 1;
                    *(int *)plVar13 = (int)*plVar13 + -1;
                    UNLOCK();
                    if ((int)*plVar13 == 0) {
                      (**(code **)*uStack_a0)(uStack_a0);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar11 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar11 + 0x10))(plVar11);
                      }
                    }
                  }
                }
                else {
                  *(longlong **)(param_1 + 0xfe0) = local_a8;
                  local_a8 = (longlong *)0x0;
                  plVar13 = *(longlong **)(param_1 + 0xfe8);
                  if (uStack_a0 == plVar13) goto LAB_14375c1dc;
                  uStack_a0 = (longlong *)0x0;
                  *(longlong **)(param_1 + 0xfe8) = plVar11;
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
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)(*plVar13 + 0x10))(plVar13);
                      }
                    }
                    goto LAB_14375c1dc;
                  }
                }
                if (*pplVar12 != (longlong *)0x0) goto LAB_14375c21a;
                lVar15 = lVar15 + 1;
              } while (lVar15 < (int)uStack_90);
            }
            plVar10 = (longlong *)0x0;
LAB_14375c21a:
            if (0 < local_70) {
              lVar15 = 0;
              iVar16 = local_70;
              do {
                plVar11 = *(longlong **)(CONCAT44(uStack_74,local_78) + lVar15 * 8);
                if (plVar11 != plVar10) {
                  plVar13 = plVar11 + 1;
                  if (plVar11 == (longlong *)0x0) {
                    plVar13 = (longlong *)0x0;
                  }
                  (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_68,plVar13);
                  iVar16 = local_70;
                }
                lVar15 = lVar15 + 1;
              } while ((int)lVar15 < iVar16);
            }
          }
          if (*pplVar12 != (longlong *)0x0) {
            if (DAT_14c846b14 == '\0') {
              FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                            L"Attempting to get the command line but it hasn\'t been initialized yet."
                           );
            }
            cVar4 = FUN_14054d46e(&DAT_14c846b20,L"noxrstereo");
            if (cVar4 == '\0') {
              (**(code **)(**(longlong **)(param_1 + 0xfe0) + 0x128))
                        (*(longlong **)(param_1 + 0xfe0),&local_a8);
              plVar10 = uStack_a0;
              pplVar12 = (longlong **)(param_1 + 0xfd0);
              if (pplVar12 != &local_a8) {
                *(longlong **)(param_1 + 0xfd0) = local_a8;
                local_a8 = (longlong *)0x0;
                plVar11 = *(longlong **)(param_1 + 0xfd8);
                if (uStack_a0 != plVar11) {
                  uStack_a0 = (longlong *)0x0;
                  *(longlong **)(param_1 + 0xfd8) = plVar10;
                  if (plVar11 != (longlong *)0x0) {
                    LOCK();
                    plVar10 = plVar11 + 1;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)*plVar10 == 0) {
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
                }
              }
              plVar10 = uStack_a0;
              if (uStack_a0 != (longlong *)0x0) {
                LOCK();
                plVar11 = uStack_a0 + 1;
                *(int *)plVar11 = (int)*plVar11 + -1;
                UNLOCK();
                if ((int)*plVar11 == 0) {
                  (**(code **)*uStack_a0)(uStack_a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar10 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar10 + 0x10))(plVar10);
                  }
                }
              }
              if ((*pplVar12 != (longlong *)0x0) && (cVar4 = FUN_147d5d7c4(), cVar4 != '\0')) {
                (**(code **)(**pplVar12 + 0x18))(*pplVar12,1);
              }
            }
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          if (local_88 != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_74,local_78) != 0) {
            FUN_1400020a8();
          }
        }
      }
      goto LAB_14375bc90;
    }
  }
  lVar15 = FUN_14001cc68(0x28,0x10);
  FUN_147d7f9d2(lVar15,DAT_14cb0d27c / 2,DAT_14cb0d280);
  plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14aae6b40;
  plVar10[2] = lVar15;
  if (plVar10 == (longlong *)0x0) {
    *(longlong *)(param_1 + 0xfd0) = lVar15;
    plVar11 = *(longlong **)(param_1 + 0xfd8);
    if (plVar11 == (longlong *)0x0) goto LAB_14375bc90;
    *(undefined8 *)(param_1 + 0xfd8) = 0;
LAB_14375bd7b:
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
    if (plVar10 == (longlong *)0x0) goto LAB_14375bc90;
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    *(longlong *)(param_1 + 0xfd0) = lVar15;
    plVar11 = *(longlong **)(param_1 + 0xfd8);
    if (plVar10 == plVar11) {
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
      *(longlong **)(param_1 + 0xfd8) = plVar10;
      if (plVar11 != (longlong *)0x0) goto LAB_14375bd7b;
    }
  }
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
LAB_14375bc90:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return *(longlong *)(param_1 + 0xfd0) != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014375bfdf:
  iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_14375bfe2:
  if (iVar16 == 0) {
LAB_14375c141:
    bVar17 = false;
    goto LAB_14375c02e;
  }
LAB_14375c008:
  plVar11 = plVar11 + 2;
  if (plVar11 == local_a8 + (longlong)(int)uStack_a0 * 2) goto LAB_14375c02e;
  goto LAB_14375bf7f;
}



// FUNCTION 14375c4ce FUN_14375c4ce body=69 status=ok
// SIG undefined FUN_14375c4ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375c4ce(void)

{
  _DAT_14cb0cf60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375c510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cf68,1);
  return;
}



// FUNCTION 14375c514 FUN_14375c514 body=1202 status=ok
// SIG undefined FUN_14375c514(void)

bool FUN_14375c514(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((DAT_14c872bf0 == '\0') && (*(longlong *)(param_1 + 0x1000) == 0)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20,L"noeyetracking");
    if (cVar7 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8338a0) && (FUN_144b3d300(&DAT_14c8338a0), DAT_14c8338a0 == -1))
      {
        FUN_1456d85e6(&DAT_14c8337f0);
        atexit((_func_5014 *)&LAB_142748837);
        _Init_thread_footer(&DAT_14c8338a0);
      }
      FUN_1446f470e(&local_68,L"EyeTracker",1);
      FUN_147d7fdd4(&DAT_14c8337f0,&local_78,local_68);
      local_88 = 0;
      uStack_80 = 0;
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      plVar1 = (longlong *)(param_1 + 0x1000);
      local_b8 = 0;
      cVar7 = FUN_14063337c(&DAT_14c846b20,L"eyetracking=",&local_88,1);
      local_98 = 0;
      uStack_90 = 0;
      if (0 < local_70) {
        lVar15 = 0;
        do {
          plVar11 = *(longlong **)(local_78 + lVar15 * 8);
          if (cVar7 == '\0') {
LAB_14375c711:
            cVar8 = (**(code **)(*plVar11 + 0x48))(plVar11);
            uVar6 = uStack_90;
            if (cVar8 == '\0') {
              lVar12 = (longlong)(int)uStack_90;
              uVar10 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
              if (uStack_90._4_4_ < uVar10) {
                FUN_147d85bb8(&local_98,uVar6 & 0xffffffff);
              }
              *(longlong **)(local_98 + lVar12 * 8) = plVar11;
            }
            else {
              (**(code **)(*plVar11 + 0x50))(plVar11,&local_a8);
              plVar13 = local_a0;
              if (plVar1 == &local_a8) {
LAB_14375c796:
                plVar13 = local_a0;
                if (local_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar5 = local_a0 + 1;
                  *(int *)plVar5 = (int)*plVar5 + -1;
                  UNLOCK();
                  if ((int)*plVar5 == 0) {
                    (**(code **)*local_a0)(local_a0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar13 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                  }
                }
              }
              else {
                *(longlong *)(param_1 + 0x1000) = local_a8;
                local_a8 = 0;
                plVar5 = *(longlong **)(param_1 + 0x1008);
                if (local_a0 == plVar5) goto LAB_14375c796;
                local_a0 = (longlong *)0x0;
                *(longlong **)(param_1 + 0x1008) = plVar13;
                if (plVar5 != (longlong *)0x0) {
                  LOCK();
                  plVar13 = plVar5 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    (**(code **)*plVar5)(plVar5);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar5 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar5 + 0x10))(plVar5);
                    }
                  }
                  goto LAB_14375c796;
                }
              }
              if (*plVar1 != 0) {
                if (plVar11 != (longlong *)0x0) goto LAB_14375c8cc;
                break;
              }
            }
          }
          else {
            (**(code **)(*plVar11 + 0x40))(plVar11,&local_a8);
            if ((int)uStack_80 == (int)local_a0) {
              bVar16 = true;
              if (1 < (int)uStack_80) {
                lVar12 = 0;
                while( true ) {
                  uVar3 = *(ushort *)(local_88 + lVar12);
                  uVar10 = (uint)uVar3;
                  uVar4 = *(ushort *)(local_a8 + lVar12);
                  uVar14 = (uint)uVar4;
                  if (uVar3 != uVar4) {
                    if ((uVar4 | uVar3) < 0x80) {
                      uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
                      uVar14 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                      if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_14375c6b6;
                    }
                    iVar9 = uVar10 - uVar14;
                    goto LAB_14375c6f8;
                  }
                  if (uVar3 == 0) break;
LAB_14375c6b6:
                  lVar12 = lVar12 + 2;
                }
                iVar9 = 0;
LAB_14375c6f8:
                bVar16 = iVar9 == 0;
              }
            }
            else {
              bVar16 = (int)local_a0 + (int)uStack_80 == 1;
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            if (bVar16) goto LAB_14375c711;
          }
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < local_70);
      }
      if (0 < (int)uStack_90) {
        lVar15 = 0;
        do {
          plVar11 = *(longlong **)(local_98 + lVar15 * 8);
          (**(code **)(*plVar11 + 0x50))(plVar11,&local_a8);
          plVar13 = local_a0;
          if (plVar1 == &local_a8) {
LAB_14375c88e:
            plVar13 = local_a0;
            if (local_a0 != (longlong *)0x0) {
              LOCK();
              plVar5 = local_a0 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
                (**(code **)*local_a0)(local_a0);
                LOCK();
                piVar2 = (int *)((longlong)plVar13 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar13 + 0x10))(plVar13);
                }
              }
            }
          }
          else {
            *(longlong *)(param_1 + 0x1000) = local_a8;
            local_a8 = 0;
            plVar5 = *(longlong **)(param_1 + 0x1008);
            if (local_a0 == plVar5) goto LAB_14375c88e;
            local_a0 = (longlong *)0x0;
            *(longlong **)(param_1 + 0x1008) = plVar13;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar13 = plVar5 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar2 = (int *)((longlong)plVar5 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
              goto LAB_14375c88e;
            }
          }
          if (*plVar1 != 0) goto LAB_14375c8cc;
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)uStack_90);
      }
      plVar11 = (longlong *)0x0;
LAB_14375c8cc:
      if (0 < local_70) {
        lVar15 = 0;
        iVar9 = local_70;
        do {
          plVar1 = *(longlong **)(local_78 + lVar15 * 8);
          if (plVar1 != plVar11) {
            plVar13 = plVar1 + 1;
            if (plVar1 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            (**(code **)(DAT_14c8337f0 + 0x30))(&DAT_14c8337f0,local_68,plVar13);
            iVar9 = local_70;
          }
          lVar15 = lVar15 + 1;
        } while ((int)lVar15 < iVar9);
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(longlong *)(param_1 + 0x1000) != 0;
}



// FUNCTION 14375c9c8 FUN_14375c9c8 body=250 status=ok
// SIG undefined FUN_14375c9c8(void)

undefined8 FUN_14375c9c8(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 == 0) {
    if ((longlong)*(int *)(param_1 + 0x1150) < 1) {
      uVar4 = 0;
    }
    else {
      lVar7 = 0;
      do {
        pcVar1 = *(char **)(*(longlong *)(param_1 + 0x1148) + lVar7 * 8);
        if (((*pcVar1 != '\x06') && (lVar8 = *(longlong *)(pcVar1 + 0x2a8), lVar8 != 0)) &&
           (1 < *(int *)(lVar8 + 0x40))) {
          return CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        }
        lVar7 = lVar7 + 1;
        uVar4 = 0;
      } while (*(int *)(param_1 + 0x1150) != lVar7);
    }
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x1148);
      lVar6 = (longlong)*(int *)(param_1 + 0x1150) * 8;
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(lVar7 + lVar8);
        if (*(longlong *)(lVar5 + 0x360) == param_2) {
          if (lVar5 != 0) goto LAB_14375ca0a;
          break;
        }
        lVar8 = lVar8 + 8;
      } while (lVar6 != lVar8);
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(lVar7 + lVar8);
        cVar2 = FUN_147dab532(lVar5 + 8,param_2);
        if (cVar2 != '\0') goto LAB_14375ca0a;
        lVar8 = lVar8 + 8;
      } while (lVar6 != lVar8);
    }
    lVar5 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_14375ca0a:
    puVar3 = &DAT_14cb0d060;
    if (*(longlong *)(lVar5 + 0x2a8) != 0) {
      puVar3 = (undefined8 *)(*(longlong *)(lVar5 + 0x2a8) + 0x38);
    }
    uVar4 = CONCAT71((int7)((ulonglong)puVar3 >> 8),1 < *(int *)(puVar3 + 1));
  }
  return uVar4;
}



// FUNCTION 14375cac2 FUN_14375cac2 body=2040 status=ok
// SIG undefined FUN_14375cac2(void)

ulonglong FUN_14375cac2(longlong *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined2 *puVar10;
  undefined8 unaff_RBP;
  undefined *puVar11;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined7 uVar12;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14cb0cab0 == 0) && (DAT_14cb0cab0 = param_1[0x17f] + 0x28, param_1[0x17f] == 0)) {
    DAT_14cb0cab0 = 0;
  }
  local_80 = param_3;
  cVar3 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
  uVar12 = (undefined7)((ulonglong)unaff_RBP >> 8);
  puVar11 = (undefined *)CONCAT71(uVar12,1);
  if (((cVar3 != '\0') || (cVar3 = FUN_142805ec8(param_2,param_3,param_4), cVar3 != '\0')) ||
     ((DAT_14c872d28 != (longlong *)0x0 &&
      (cVar3 = (**(code **)(*DAT_14c872d28 + 8))(DAT_14c872d28,param_2,param_3,param_4),
      cVar3 != '\0')))) goto LAB_14375d00e;
  if (param_2 == 0) {
    lVar1 = param_1[0x1e5];
    if (lVar1 != 0) {
      lVar14 = param_1[0x1e7];
joined_r0x00014375cd85:
      if ((lVar14 != 0) && (plVar8 = *(longlong **)(lVar1 + 0x98), plVar8 != (longlong *)0x0))
      goto LAB_14375cd9b;
    }
  }
  else {
    plVar8 = *(longlong **)(param_2 + 0x1d8);
    if (plVar8 == (longlong *)0x0) {
      if ((DAT_14cb0d2b0 != 0) && (lVar1 = *(longlong *)(DAT_14cb0d2b0 + 0xf50), lVar1 != 0)) {
        lVar14 = *(longlong *)(DAT_14cb0d2b0 + 0xf60);
        goto joined_r0x00014375cd85;
      }
    }
    else {
LAB_14375cd9b:
      cVar3 = (**(code **)(*plVar8 + 8))(plVar8,param_2,param_3,param_4);
      if (cVar3 != '\0') goto LAB_14375d00e;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_88 = 0;
  cVar3 = FUN_14063337c(param_3,L"CULTURE=",&local_58,1);
  if (cVar3 == '\0') {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    local_58 = 0;
    uStack_50 = 0;
    local_88 = 0;
    cVar3 = FUN_14063337c(local_80,L"LANGUAGE=",&local_58,1);
    if (cVar3 == '\0') {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      local_58 = 0;
      uStack_50 = 0;
      local_88 = 0;
      cVar3 = FUN_14063337c(local_80,L"LOCALE=",&local_58,1);
      if (cVar3 == '\0') {
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        puVar11 = (undefined *)CONCAT71(uVar12,1);
        cVar3 = FUN_140988638(&local_80,L"FLUSHLOG",1);
        if (cVar3 != '\0') {
          FUN_147d800ae();
          goto LAB_14375d00e;
        }
        puVar11 = (undefined *)CONCAT71(uVar12,1);
        cVar3 = FUN_140988638(&local_80,L"GAMEVER",1);
        if ((cVar3 != '\0') || (cVar3 = FUN_140988638(&local_80,L"GAMEVERSION",1), cVar3 != '\0')) {
          FUN_147d800d2(local_80,param_4);
          goto LAB_14375d00e;
        }
        cVar3 = FUN_140988638(&local_80,L"STAT",1);
        lVar1 = DAT_14cb0cab0;
        if (cVar3 == '\0') {
          puVar11 = (undefined *)CONCAT71(uVar12,1);
          FUN_140988638(&local_80,L"STOPMOVIECAPTURE",1);
          cVar3 = FUN_140988638(&local_80,L"CRACKURL",1);
          if (cVar3 != '\0') {
            FUN_147d80308(local_80,param_4);
            goto LAB_14375d00e;
          }
          param_1 = param_1 + -5;
          puVar11 = (undefined *)CONCAT71(uVar12,1);
          cVar3 = FUN_140988638(&local_80,L"DEFER",1);
          if (cVar3 != '\0') {
            FUN_147d804dc(param_1,local_80);
            goto LAB_14375d00e;
          }
          cVar3 = FUN_140988638(&local_80,L"OPEN",1);
          if (cVar3 == '\0') {
            cVar3 = FUN_140988638(&local_80,L"STREAMMAP",1);
            if (cVar3 == '\0') {
              cVar3 = FUN_140988638(&local_80,L"SERVERTRAVEL",1);
              if (cVar3 == '\0') {
                cVar3 = FUN_140988638(&local_80,L"DISCONNECT",1);
                if (cVar3 == '\0') {
                  cVar3 = FUN_140988638(&local_80,L"RECONNECT",1);
                  if (cVar3 == '\0') {
                    cVar3 = FUN_140988638(&local_80,L"TRAVEL",1);
                    if (cVar3 == '\0') {
                      cVar3 = FUN_140988638(&local_80,&DAT_14aae35d0,1);
                      lVar1 = local_80;
                      if (cVar3 != '\0') {
                        FUN_140056680(&local_58,L"No level found for CE processing");
                        iVar6 = *(int *)(param_2 + 0x198);
                        if (0 < iVar6) {
                          lVar14 = 0;
                          bVar13 = 0;
                          do {
                            lVar15 = *(longlong *)(*(longlong *)(param_2 + 400) + lVar14 * 8);
                            if ((lVar15 != 0) && (lVar9 = *(longlong *)(lVar15 + 0xf0), lVar9 != 0))
                            {
                              uVar2 = uStack_50 >> 0x20;
                              uStack_50 = uStack_50 & 0xffffffff00000000;
                              if ((int)uVar2 != 0) {
                                FUN_1446f8c06(&local_58,0);
                                lVar9 = *(longlong *)(lVar15 + 0xf0);
                              }
                              local_88 = CONCAT71(local_88._1_7_,1);
                              bVar4 = FUN_1411c044a(lVar9,lVar1,param_4,0);
                              bVar13 = bVar13 | bVar4;
                              iVar6 = *(int *)(param_2 + 0x198);
                            }
                            lVar14 = lVar14 + 1;
                          } while ((int)lVar14 < iVar6);
                          if ((bVar13 & 1) != 0) goto LAB_14375cbe3;
                        }
                        local_78 = (undefined2 *)0x0;
                        uStack_70 = 0;
                        FUN_1401031ac(param_2,0,&local_78);
                        puVar10 = local_78;
                        if ((int)uStack_70 == 0) {
                          puVar10 = &DAT_149dfb77a;
                        }
                        FUN_140002266(&local_68,
                                      L"CE command \'%s\' wasn\'t processed for levels from world \'%s\'."
                                      ,lVar1,puVar10);
                        if (local_58 != 0) {
                          FUN_1400020a8();
                        }
                        local_58 = local_68;
                        uStack_50 = uStack_60;
                        local_68 = 0;
                        uStack_60 = 0;
                        if (local_78 != (undefined2 *)0x0) {
                          FUN_1400020a8();
                        }
                        goto LAB_14375cbe3;
                      }
                      puVar11 = (undefined *)CONCAT71(uVar12,1);
                      cVar3 = FUN_140988638(&local_80,L"GAMMA",1);
                      if (cVar3 != '\0') {
                        FUN_147d80586(param_1,local_80);
                        goto LAB_14375d00e;
                      }
                      puVar11 = (undefined *)CONCAT71(uVar12,1);
                      cVar3 = FUN_140988638(&local_80,L"SCALABILITY",1);
                      if (cVar3 != '\0') {
                        FUN_1436a07b1(local_80,param_4);
                        goto LAB_14375d00e;
                      }
                      if (DAT_14c8407a8 == (longlong *)0x0) {
                        FUN_1414b00ea();
                      }
                      local_88 = 0;
                      cVar3 = (**(code **)(*DAT_14c8407a8 + 0xf0))
                                        (DAT_14c8407a8,local_80,param_4,param_2);
                      puVar11 = (undefined *)CONCAT71(uVar12,1);
                      if (cVar3 != '\0') goto LAB_14375d00e;
                      if (1 < DAT_14cad39b0 + 1U) {
                        plVar8 = (longlong *)FUN_140083894();
                        cVar3 = (**(code **)(*plVar8 + 0x40))(plVar8,param_2,local_80,param_4);
                        if (cVar3 != '\0') goto LAB_14375d00e;
                      }
                      puVar11 = (undefined *)CONCAT71(uVar12,1);
                      cVar3 = FUN_140988638(&local_80,L"DUMPTICKS",1);
                      if (cVar3 != '\0') {
                        FUN_147d8062e(param_2,local_80,param_4);
                        goto LAB_14375d00e;
                      }
                      puVar11 = (undefined *)CONCAT71(uVar12,1);
                      cVar3 = FUN_140988638(&local_80,L"CANCELASYNCLOAD",1);
                      if (cVar3 != '\0') {
                        FUN_1427d682c();
                        goto LAB_14375d00e;
                      }
                      goto LAB_14375cd66;
                    }
                    uVar5 = (**(code **)(*param_1 + 0x490))(param_1,local_80,param_4,param_2);
                  }
                  else {
                    uVar5 = (**(code **)(*param_1 + 0x4b0))(param_1,local_80,param_4,param_2);
                  }
                }
                else {
                  uVar5 = (**(code **)(*param_1 + 0x4a8))(param_1,local_80,param_4,param_2);
                }
              }
              else {
                uVar5 = (**(code **)(*param_1 + 0x4a0))(param_1,local_80,param_4,param_2);
              }
            }
            else {
              uVar5 = (**(code **)(*param_1 + 0x498))(param_1,local_80,param_4,param_2);
            }
          }
          else {
            uVar5 = (**(code **)(*param_1 + 0x488))(param_1,local_80,param_4,param_2);
          }
LAB_14375d00c:
          puVar11 = (undefined *)(ulonglong)uVar5;
        }
        else {
          local_58 = local_80;
          if (0 < (int)param_1[0x240]) {
            lVar15 = 0x48;
            lVar14 = 0;
            do {
              lVar9 = param_1[0x23f];
              puVar10 = &DAT_149dfb77a;
              if (*(int *)(lVar9 + -0x38 + lVar15) != 0) {
                puVar10 = *(undefined2 **)(lVar9 + -0x40 + lVar15);
              }
              cVar3 = FUN_140988638(&local_58,puVar10,1);
              if (cVar3 != '\0') {
                puVar11 = &DAT_149dfb701;
                if (((*(int *)(lVar9 + lVar15) == 0) ||
                    (plVar8 = *(longlong **)(lVar9 + -8 + lVar15), plVar8 == (longlong *)0x0)) ||
                   (cVar3 = (**(code **)(*plVar8 + 0x30))(), cVar3 == '\0')) goto LAB_14375d00e;
                if (lVar1 != 0) {
                  if (*(int *)(lVar9 + lVar15) == 0) {
                    plVar8 = (longlong *)0x0;
                  }
                  else {
                    plVar8 = *(longlong **)(lVar9 + -8 + lVar15);
                  }
                  uVar5 = (**(code **)(*plVar8 + 0x58))(plVar8,param_2,lVar1,local_58);
                  goto LAB_14375d00c;
                }
                break;
              }
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 0x58;
            } while (lVar14 < (int)param_1[0x240]);
          }
LAB_14375cd66:
          puVar11 = (undefined *)0x0;
        }
        goto LAB_14375d00e;
      }
      uVar7 = FUN_140d5712e();
      FUN_1467ca202(uVar7,&local_58);
    }
    else {
      uVar7 = FUN_140d5712e();
      FUN_1467ca0f8(uVar7,&local_58);
    }
  }
  else {
    uVar7 = FUN_140d5712e();
    FUN_1467c9f6a(uVar7,&local_58);
  }
LAB_14375cbe3:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  puVar11 = (undefined *)CONCAT71(uVar12,1);
LAB_14375d00e:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return (ulonglong)puVar11 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375d2bf FUN_14375d2bf body=69 status=ok
// SIG undefined FUN_14375d2bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375d2bf(void)

{
  _DAT_14cb0cf80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375d301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cf88,1);
  return;
}



// FUNCTION 14375d304 FUN_14375d304 body=69 status=ok
// SIG undefined FUN_14375d304(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375d304(void)

{
  _DAT_14cb0cf98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375d346. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cfa0,1);
  return;
}



// FUNCTION 14375d349 FUN_14375d349 body=69 status=ok
// SIG undefined FUN_14375d349(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375d349(void)

{
  _DAT_14cb0cfb0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375d38b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cfb8,1);
  return;
}



// FUNCTION 14375d38e FUN_14375d38e body=69 status=ok
// SIG undefined FUN_14375d38e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375d38e(void)

{
  _DAT_14cb0cfc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014375d3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0cfd0,1);
  return;
}



// FUNCTION 14375d418 FUN_14375d418 body=619 status=ok
// SIG undefined FUN_14375d418(void)

void FUN_14375d418(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  LARGE_INTEGER LVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong unaff_RDI;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78;
  ulonglong local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar3 = (int)param_1[0x22a];
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1[0x229] + lVar6 * 8) + 0x360);
      if ((((lVar4 != 0) && ((*(byte *)(lVar4 + 0x156) & 0x10) != 0)) &&
          (*(longlong *)(lVar4 + 0x30) != 0)) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar4 != 0)) {
        unaff_RDI = CONCAT71((int7)(unaff_RDI >> 8),1);
        if (((*(byte *)(lVar4 + 0x39e) & 0x60) != 0) ||
           (lVar4 = FUN_1405e677a(DAT_14cb0d2b0), *(char *)(lVar4 + 0x88) != '\0'))
        goto LAB_14375d4bf;
        iVar3 = (int)param_1[0x22a];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  unaff_RDI = 0;
LAB_14375d4bf:
  dVar8 = (double)(**(code **)(*param_1 + 0x368))(param_1,param_2,unaff_RDI & 0xffffffff);
  QueryPerformanceCounter(&local_78);
  LVar2 = local_78;
  uVar5 = (ulonglong)(dVar8 / DAT_14c83f418);
  uVar7 = 0;
  if (0.0 < dVar8) {
    uVar7 = (longlong)(dVar8 / DAT_14c83f418 - 9.223372036854776e+18) & (longlong)uVar5 >> 0x3f |
            uVar5;
  }
  fVar1 = DAT_14c76149c / 1000.0;
  if ((byte)unaff_RDI != 0) {
    fVar1 = fVar1 + DAT_14c7614a0 / 1000.0;
  }
  FUN_14283d134(param_2,CONCAT71((int7)(unaff_RDI >> 8),(byte)unaff_RDI | DAT_14cad5904 != 0) &
                        0xffffffff,fVar1);
  iVar3 = (int)param_1[0x22a];
  if (0 < iVar3) {
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1[0x229] + lVar6 * 8) + 0x360);
      if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x156) & 0x10) != 0)) {
        local_68 = 1;
        local_78 = LVar2;
        local_70 = uVar7;
        FUN_141690028(lVar4,&local_78);
        iVar3 = (int)param_1[0x22a];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
  }
  if (uVar7 == 0xffffffffffffffff) {
    dVar8 = 1.79769313486232e+308;
  }
  else {
    auVar10._8_4_ = (int)(uVar7 >> 0x20);
    auVar10._0_8_ = uVar7;
    auVar10._12_4_ = 0x45300000;
    dVar8 = (((double)CONCAT44(0x43300000,(int)uVar7) - 4503599627370496.0) +
            (auVar10._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
    QueryPerformanceCounter(&local_78);
    lVar6 = local_78.QuadPart - (longlong)LVar2;
    auVar9._8_4_ = (int)((ulonglong)lVar6 >> 0x20);
    auVar9._0_8_ = lVar6;
    auVar9._12_4_ = 0x45300000;
    dVar8 = dVar8 - (((double)CONCAT44(0x43300000,(int)lVar6) - 4503599627370496.0) +
                    (auVar9._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
    if (dVar8 <= 5e-05) goto LAB_14375d651;
  }
  (**(code **)(*DAT_14c948aa0 + 0x38))(DAT_14c948aa0,1,0,dVar8);
LAB_14375d651:
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14375d684 FUN_14375d684 body=122 status=ok
// SIG undefined FUN_14375d684(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375d684(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6)

{
  if (DAT_14cb0d000 != DAT_14c872be0) {
    _DAT_14cb0cfe4 = _DAT_14cb0cfe4 + 1;
    DAT_14cb0d000 = DAT_14c872be0;
    _DAT_14cb0cfe8 = param_2 + _DAT_14cb0cfe8;
    _DAT_14cb0cff4 = param_3 + _DAT_14cb0cff4;
    _DAT_14cb0cfec = param_4 + _DAT_14cb0cfec;
    _DAT_14cb0cff0 = param_5 + _DAT_14cb0cff0;
    _DAT_14cb0cff8 = param_6 + _DAT_14cb0cff8;
  }
  return;
}



// FUNCTION 14375d6fe FUN_14375d6fe body=394 status=ok
// SIG undefined FUN_14375d6fe(void)

void FUN_14375d6fe(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  undefined4 extraout_XMM0_Da;
  float fVar6;
  undefined1 auStack_a8 [32];
  float local_88;
  int *local_80;
  int local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 0 && param_1 != 0) {
    (**(code **)(**(longlong **)(param_3 + 0x58) + 0x28))(*(longlong **)(param_3 + 0x58),&local_48);
    piVar2 = (int *)(param_4 + 0x40);
    if (param_4 == 0) {
      piVar2 = &local_48;
    }
    local_4c = 100;
    fVar5 = 1.0;
    fVar6 = 1.0;
    if (*(char *)(param_3 + 0xa0) == '\0') {
      fVar6 = *(float *)(param_3 + 0xb0);
    }
    iVar4 = (int)((float)*piVar2 / fVar6 + -110.0);
    if (*(char *)(param_3 + 0xa0) == '\0') {
      fVar5 = *(float *)(param_3 + 0xb0);
    }
    uVar1 = (**(code **)(*param_2 + 0x1d0))
                      (param_2,param_3,100,(int)((float)(int)((float)local_44 * 0.2) / fVar5));
    local_50 = FUN_14375d88a(extraout_XMM0_Da,param_3,iVar4,uVar1);
    local_70 = &local_50;
    local_60 = param_7;
    local_68 = param_6;
    local_80 = &local_4c;
    local_88 = 1.4013e-43;
    local_78 = iVar4;
    FUN_144b2b6f6(DAT_14cb0d2b0,param_1,param_2,param_3);
    lVar3 = FUN_14014025a(param_1);
    if (lVar3 != 0) {
      local_88 = (float)local_4c;
      FUN_1434e17dc(lVar3,param_2,param_3,param_4);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375d88a FUN_14375d88a body=477 status=ok
// SIG undefined FUN_14375d88a(void)

int FUN_14375d88a(undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined1 auStack_2a8 [32];
  undefined *local_288;
  double local_280;
  double local_278;
  undefined1 local_26c [4];
  longlong *local_268 [2];
  wchar_t *local_258;
  undefined4 local_250;
  byte local_210;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  double local_1a8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  if (DAT_14c867d20 != 0) {
    if (DAT_14c867d24 == '\x01') {
      local_258 = L"VERBOSENAMEDEVENTSENABLED";
      local_250 = 0x19;
      FUN_1446e940c(&local_280,&local_258);
      local_258 = L"UnrealEngine";
      local_250 = 0xc;
      FUN_1446e940c(local_26c,&local_258);
      pwVar2 = L"VERBOSE NAMED EVENTS ENABLED";
    }
    else {
      local_258 = L"NAMEDEVENTSENABLED";
      local_250 = 0x12;
      FUN_1446e940c(&local_280,&local_258);
      local_258 = L"UnrealEngine";
      local_250 = 0xc;
      FUN_1446e940c(local_26c,&local_258);
      pwVar2 = L"NAMED EVENTS ENABLED";
    }
    FUN_140208bae(local_268,local_26c,&local_280,pwVar2);
    iVar1 = param_3 + -100;
    if (DAT_14c867d24 == '\0') {
      iVar1 = param_3 + -0x2a;
    }
    local_280 = (double)iVar1;
    local_288 = &DAT_149e1dd04;
    local_278 = (double)param_4;
    FUN_140114bb6(&local_258,&local_280,local_268,*(undefined8 *)(DAT_14cb0d2b0 + 0x58));
    local_1c0 = 0x3ff0000000000000;
    local_1b8 = 0x3ff0000000000000;
    local_1d0 = 0;
    uStack_1cc = 0;
    uStack_1c8 = 0;
    uStack_1c4 = 0x3f800000;
    local_210 = local_210 | 2;
    FUN_140505094(param_2,&local_258);
    FUN_140b2399e(&local_258);
    if (local_268[0] != (longlong *)0x0) {
      (**(code **)(*local_268[0] + 0x10))();
    }
    param_4 = (int)((double)param_4 + local_1a8);
  }
  if ((local_40 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375da72 FUN_14375da72 body=877 status=ok
// SIG undefined FUN_14375da72(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_14375da72(undefined8 param_1)

{
  int iVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *_Source;
  longlong lVar8;
  undefined1 auStack_2148 [32];
  undefined2 local_2128;
  wchar_t *local_2120;
  int local_2118;
  int local_2114;
  longlong local_2110;
  longlong local_20f8 [2];
  longlong local_20e8;
  longlong local_20d8;
  undefined4 local_20d0;
  longlong local_20c8;
  wchar_t *local_20b8;
  int local_20b0;
  int local_20ac;
  undefined2 *local_20a8;
  longlong local_20a0 [2];
  longlong local_2090;
  longlong local_2078;
  longlong local_2068;
  longlong local_2058;
  undefined4 local_2050;
  longlong local_2048;
  wchar_t local_2038 [4096];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2148;
  FUN_140810d00(local_20a0,0);
  FUN_14622068e(local_20a0,L"DefaultPlayer",&DAT_14c872af8);
  memset(local_2038,0,0x2000);
  local_20a8 = &DAT_149dfb77a;
  local_2128 = 0;
  cVar4 = FUN_142786b6e(&local_20a8,local_2038,0x1000,0);
  if ((cVar4 == '\0') || (local_2038[0] == L'-')) {
    plVar5 = (longlong *)FUN_140628716();
    lVar8 = plVar5[0x22];
    if (lVar8 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar8 = plVar5[0x22];
    }
    FUN_140810f5e(&local_20b8,0);
    iVar3 = local_20ac;
    iVar2 = local_20b0;
    if (local_20b0 < 2) {
      local_2120 = (wchar_t *)0x0;
      local_2118 = *(int *)(lVar8 + 0x30);
      lVar7 = (longlong)local_2118;
      _Src = *(void **)(lVar8 + 0x28);
      if (lVar7 == 0) {
        local_2114 = 0;
      }
      else {
        FUN_1446dd670(&local_2120,local_2118,0);
        memcpy(local_2120,_Src,lVar7 * 2);
      }
    }
    else {
      iVar6 = *(int *)(lVar8 + 0x30) + -1;
      if (*(int *)(lVar8 + 0x30) == 0) {
        iVar6 = 0;
      }
      local_2120 = local_20b8;
      local_20b8 = (wchar_t *)0x0;
      local_2118 = local_20b0;
      local_2114 = local_20ac;
      local_20b0 = 0;
      local_20ac = 0;
      iVar1 = iVar6 + iVar2;
      if (iVar1 < iVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((longlong)iVar6);
      }
      if (iVar3 < iVar1) {
        FUN_1446f8c06(&local_2120);
      }
      FUN_1400020e8(&local_2120,*(undefined8 *)(lVar8 + 0x28),iVar6);
    }
    _Source = L"";
    if (local_2118 != 0) {
      _Source = local_2120;
    }
    wcscpy(local_2038,_Source);
    if (local_2120 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (local_20b8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140245d8a(&local_2120,local_20a0,local_2038,1);
  FUN_140c50e9c(param_1,local_20f8,1);
  if (local_20c8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_20d8,local_20d0);
  if (local_20d8 != 0) {
    FUN_1400020a8();
  }
  if (local_20e8 != 0) {
    FUN_1400020a8();
  }
  if (local_20f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_2110 != 0) {
    FUN_1400020a8();
  }
  if (local_2120 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_2048 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_2058,local_2050);
  if (local_2058 != 0) {
    FUN_1400020a8();
  }
  if (local_2068 != 0) {
    FUN_1400020a8();
  }
  if (local_2078 != 0) {
    FUN_1400020a8();
  }
  if (local_2090 != 0) {
    FUN_1400020a8();
  }
  if (local_20a0[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_2148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375dde0 FUN_14375dde0 body=108 status=ok
// SIG undefined FUN_14375dde0(void)

void FUN_14375dde0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 unaff_RDI;
  
  if (*(longlong **)(param_1 + 0xf28) != (longlong *)0x0) {
    if ((*(char *)(param_1 + 0xf48) == '\0') &&
       ((*DAT_14cb0cb70 == 2 || ((*DAT_14cb0cb70 == 1 && (*(char *)(param_1 + 0xf49) == '\x01'))))))
    {
      uVar2 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    }
    else {
      uVar2 = 0;
    }
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x48))();
    if ((char)uVar2 != cVar1) {
                    /* WARNING: Could not recover jumptable at 0x00014375de49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x40))(*(longlong **)(param_1 + 0xf28),uVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14375de4c FUN_14375de4c body=248 status=ok
// SIG undefined FUN_14375de4c(void)

void FUN_14375de4c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  
  if (DAT_14c872bf0 == '\0') {
    cVar6 = (char)param_2;
    cVar7 = *(char *)(param_1 + 0xf26);
    if (cVar7 != cVar6) {
      if (cVar6 == '\0') {
        if (*(longlong **)(param_1 + 0xf28) != *(longlong **)(param_1 + 0xf38)) {
          cVar7 = (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x48))();
          if (cVar7 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x40))
                      (*(longlong **)(param_1 + 0xf28),0);
          }
          uVar3 = *(undefined8 *)(param_1 + 0xf38);
          lVar4 = *(longlong *)(param_1 + 0xf40);
          if (lVar4 != 0) {
            LOCK();
            *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
            UNLOCK();
          }
          plVar5 = *(longlong **)(param_1 + 0xf30);
          *(undefined8 *)(param_1 + 0xf28) = uVar3;
          *(longlong *)(param_1 + 0xf30) = lVar4;
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
        }
        FUN_14375dde0(param_1);
      }
      else {
        if (cVar7 == '\x03') {
          return;
        }
        if (cVar7 == '\x02' && cVar6 == '\x01') {
          return;
        }
        if (cVar7 != (char)(cVar6 + -1)) {
          FUN_14375de4c(param_1);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0xf28) + 0x50))
                (*(longlong **)(param_1 + 0xf28),param_2);
      *(char *)(param_1 + 0xf26) = cVar6;
    }
  }
  return;
}



// FUNCTION 14375df44 FUN_14375df44 body=12 status=ok
// SIG undefined FUN_14375df44(void)

void FUN_14375df44(longlong param_1)

{
  FUN_147d87416(param_1 + 0xec8);
  return;
}



// FUNCTION 14375df50 FUN_14375df50 body=174 status=ok
// SIG undefined FUN_14375df50(void)

undefined8 * FUN_14375df50(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x1148);
    lVar6 = (longlong)*(int *)(param_1 + 0x1150) * 8;
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar5);
      if (*(longlong *)(lVar4 + 0x360) == param_3) {
        if (lVar4 != 0) goto LAB_14375df8e;
        break;
      }
      lVar5 = lVar5 + 8;
    } while (lVar6 != lVar5);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar1 + lVar5);
      cVar2 = FUN_147dab532(lVar4 + 8,param_3);
      if (cVar2 != '\0') goto LAB_14375df8e;
      lVar5 = lVar5 + 8;
    } while (lVar6 != lVar5);
  }
  lVar4 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_14375df8e:
  puVar3 = &DAT_14cb0d060;
  if (*(longlong *)(lVar4 + 0x2a8) != 0) {
    puVar3 = (undefined8 *)(*(longlong *)(lVar4 + 0x2a8) + 0x38);
  }
  *param_2 = puVar3;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 14375e010 FUN_14375e010 body=196 status=ok
// SIG undefined FUN_14375e010(void)

void FUN_14375e010(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_2 != 0) {
    lVar5 = *(longlong *)(param_2 + 0x38);
    if (lVar5 != 0) {
      *(undefined8 *)(param_2 + 0x38) = 0;
      uVar1 = *(undefined8 *)(lVar5 + 0x200);
      uVar4 = FUN_1405e677a(param_1,param_2);
      FUN_14375e49a(uVar4,uVar1);
    }
    FUN_145eda014(param_2);
    lVar5 = FUN_1405e677a(DAT_14cb0d2b0,param_2);
    iVar3 = *(int *)(lVar5 + 0x2b8);
    if (0 < iVar3) {
      iVar6 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x2b0) + (longlong)iVar6 * 0x10);
        if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1a8) == param_2)) {
          uVar1 = *(undefined8 *)(lVar2 + 0x200);
          uVar4 = FUN_1405e677a(param_1,param_2);
          FUN_14375e49a(uVar4,uVar1);
          iVar6 = iVar6 + -1;
          iVar3 = *(int *)(lVar5 + 0x2b8);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar3);
    }
  }
  return;
}



// FUNCTION 14375e0d4 FUN_14375e0d4 body=965 status=ok
// SIG undefined FUN_14375e0d4(void)

longlong FUN_14375e0d4(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  byte bVar13;
  char *pcVar14;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  char *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(param_1 + 0x10e0) == 0) {
LAB_14375e23a:
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    lVar11 = 0;
    lVar9 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x10d8) + lVar11) == param_3) {
        lVar9 = *(longlong *)(param_1 + 0x10d8) - lVar9;
        if (lVar9 == 0) goto LAB_14375e23a;
        FUN_1400021e4(lVar9 + 8,&local_58);
        pcVar14 = local_58;
        if (local_50 == 0) {
          pcVar14 = "";
        }
        uVar6 = FUN_14123c468();
        local_60 = 0;
        local_68 = 0x2000;
        plVar7 = (longlong *)FUN_141433b6f(uVar6,0,pcVar14,0);
        if (local_58 != (char *)0x0) {
          FUN_1400020a8();
        }
        if (plVar7 == (longlong *)0x0) {
LAB_14375e1d6:
          FUN_1400021e4(lVar9 + 0x10,&local_58);
          pcVar14 = local_58;
          if (local_50 == 0) {
            pcVar14 = "";
          }
          uVar6 = FUN_14123c468();
          local_60 = 0;
          local_68 = 0;
          plVar7 = (longlong *)FUN_141433b6f(uVar6,0,pcVar14,0);
          if (local_58 != (char *)0x0) {
            FUN_1400020a8();
          }
          if (plVar7 == (longlong *)0x0) goto LAB_14375e23a;
        }
        else {
          plVar10 = (longlong *)plVar7[0x22];
          if (plVar10 == (longlong *)0x0) {
            (**(code **)(*plVar7 + 1000))(plVar7);
            plVar10 = (longlong *)plVar7[0x22];
          }
          cVar3 = (**(code **)(*plVar10 + 0x2a8))();
          if (cVar3 == '\0') goto LAB_14375e1d6;
        }
        lVar8 = FUN_14640a30d(DAT_14c951640,plVar7);
        *(longlong *)(lVar8 + 0x8d0) = param_3;
        if (param_4 == 0) {
          param_4 = *(longlong *)(lVar8 + 0x18);
        }
        lVar11 = FUN_14640a0ee(param_1,param_3,param_4);
        if (lVar11 == 0) {
          bVar12 = 0;
        }
        else {
          bVar12 = *(byte *)(lVar11 + 0x20);
        }
        bVar2 = 0 < DAT_14c998e28;
        plVar7 = *(longlong **)(param_2 + 0x2a8);
        if (plVar7 == (longlong *)0x0) {
LAB_14375e2de:
          bVar13 = bVar2 & bVar12;
        }
        else {
          cVar3 = (**(code **)(*plVar7 + 0x410))(plVar7,param_3);
          if (cVar3 == '\x01') {
            bVar13 = 0;
          }
          else {
            bVar13 = bVar12;
            if (cVar3 != '\x02') goto LAB_14375e2de;
          }
        }
        cVar3 = FUN_14628d426();
        if (cVar3 == '\x01') {
LAB_14375e364:
          uVar4 = 0;
        }
        else {
          if (cVar3 != '\x02') {
            if (bVar13 != 0) goto LAB_14375e2fe;
            goto LAB_14375e364;
          }
          if (bVar12 == 0) goto LAB_14375e364;
LAB_14375e2fe:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          local_58 = "IrisCore";
          local_50 = 8;
          local_4c = 0;
          uVar5 = FUN_14001a6c0(&local_58,1);
          cVar3 = FUN_14011feae(&DAT_14c874628,uVar5);
          if (cVar3 == '\0') goto LAB_14375e364;
          DAT_14c75f464 = 0;
          uVar4 = 1;
        }
        *(longlong *)(lVar8 + 0x200) = param_4;
        *(longlong *)(lVar8 + 0x278) = param_3;
        if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x10e0) == 0) goto LAB_14375e3b9;
        plVar7 = *(longlong **)(DAT_14cb0d2b0 + 0x10d8);
        lVar11 = (longlong)*(int *)(DAT_14cb0d2b0 + 0x10e0) * 0x1c;
        goto LAB_14375e399;
      }
      lVar9 = lVar9 + -0x1c;
      lVar11 = lVar11 + 0x1c;
    } while ((longlong)*(int *)(param_1 + 0x10e0) * -0x1c - lVar9 != 0);
  }
  goto LAB_14375e23d;
  while( true ) {
    plVar7 = (longlong *)((longlong)plVar7 + 0x1c);
    lVar11 = lVar11 + -0x1c;
    if (lVar11 == 0) break;
LAB_14375e399:
    if (*plVar7 == param_3) {
      if (plVar7 != (longlong *)0x0) {
        *(int *)(lVar8 + 0x280) = (int)plVar7[3];
      }
      break;
    }
  }
LAB_14375e3b9:
  *(undefined1 *)(lVar8 + 0x849) = uVar4;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar1 = *(int *)(param_2 + 0x2b8);
  *(uint *)(param_2 + 0x2b8) = iVar1 + 1U;
  if (*(uint *)(param_2 + 700) < iVar1 + 1U) {
    FUN_14640a9ee((longlong *)(param_2 + 0x2b0),iVar1);
  }
  lVar11 = *(longlong *)(param_2 + 0x2b0);
  *(longlong *)(lVar11 + (longlong)iVar1 * 0x10) = lVar8;
  if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar8);
  }
  *(longlong *)(lVar11 + (longlong)iVar1 * 0x10 + 8) = lVar9;
  FUN_147d874e8(&DAT_14cb10898,*(undefined8 *)(param_2 + 0x360),lVar8);
LAB_14375e23d:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 14375e49a FUN_14375e49a body=591 status=ok
// SIG undefined FUN_14375e49a(void)

void FUN_14375e49a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  uint local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar3 = *(int *)(param_1 + 0x2b8);
  if (0 < (longlong)iVar3) {
    iVar5 = 1;
    lVar8 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x2b0) + lVar8);
      if ((plVar1 != (longlong *)0x0) && (plVar1[0x40] == param_2)) {
        if (((char)plVar1[0x61] == '\x01') && (DAT_14c87ead8 == '\0')) {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
          iVar3 = *(int *)(param_1 + 0x2b8);
        }
        iVar5 = iVar3 - iVar5;
        if (iVar5 != 0) {
          iVar6 = 1;
          if (iVar5 < 1) {
            iVar6 = iVar5;
          }
          memmove((void *)(lVar8 + *(longlong *)(param_1 + 0x2b0)),
                  (void *)((longlong)(iVar3 - iVar6) * 0x10 + *(longlong *)(param_1 + 0x2b0)),
                  (longlong)iVar6 << 4);
          iVar3 = *(int *)(param_1 + 0x2b8);
        }
        *(int *)(param_1 + 0x2b8) = iVar3 + -1;
        FUN_145d38e10((longlong *)(param_1 + 0x2b0));
        local_40 = *(uint *)((longlong)plVar1 + 0xc);
        if ((int)local_40 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((local_40 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_40 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        local_3c = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar5 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          local_3c = *(int *)(lVar8 + 0x10);
          bVar9 = local_3c == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar5;
            local_3c = 0;
          }
          UNLOCK();
          if (bVar9) {
            local_3c = iVar5;
          }
        }
        FUN_146149022(param_1 + 0x300,local_44);
        (**(code **)(*plVar1 + 0x3d8))(plVar1,0);
        (**(code **)(*plVar1 + 0x2f8))(plVar1);
        (**(code **)(*plVar1 + 0x300))(plVar1);
        if (*(longlong *)(param_1 + 0x360) != 0) {
          FUN_147daabc0(*(longlong *)(param_1 + 0x360),plVar1);
        }
        break;
      }
      lVar8 = lVar8 + 0x10;
      iVar5 = iVar5 + 1;
    } while ((longlong)iVar3 << 4 != lVar8);
  }
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    plVar4 = *(longlong **)(DAT_14cb0d2b0 + 0x1148);
    plVar1 = plVar4 + *(int *)(DAT_14cb0d2b0 + 0x1150);
    do {
      lVar8 = (longlong)*(int *)(*plVar4 + 0x2b8);
      if (lVar8 != 0) {
        lVar7 = 0;
        do {
          lVar2 = *(longlong *)(*(longlong *)(*plVar4 + 0x2b0) + lVar7);
          if ((lVar2 != 0) && (*(char *)(lVar2 + 0x849) != '\0')) goto LAB_14375e565;
          lVar7 = lVar7 + 0x10;
        } while (lVar8 * 0x10 != lVar7);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  DAT_14c75f464 = 1;
LAB_14375e565:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14375e6ea FUN_14375e6ea body=40 status=ok
// SIG undefined FUN_14375e6ea(void)

void FUN_14375e6ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1405e677a();
  FUN_14375e0d4(param_1,uVar1,param_3,0);
  return;
}



// FUNCTION 14375e712 FUN_14375e712 body=121 status=ok
// SIG undefined FUN_14375e712(void)

void FUN_14375e712(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x560))();
    (**(code **)(*param_1 + 0x500))(param_1,param_2,0);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    lVar3 = FUN_1411c1a08();
    FUN_147d874e8(lVar3 + 0x78,param_2,uVar1);
    if ((*(longlong *)(param_2 + 0x1f0) != 0) &&
       (plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x1f0) + 0x48), plVar2 != (longlong *)0x0))
    {
                    /* WARNING: Could not recover jumptable at 0x00014375e788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2,uVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14375e78c FUN_14375e78c body=563 status=ok
// SIG undefined FUN_14375e78c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14375e78c(longlong *param_1,longlong param_2,longlong *param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  QueryPerformanceCounter(&local_38);
  if ((double)*(float *)(param_1 + 0x223) <
      ((double)local_38.QuadPart * DAT_14c83f420 + 16777216.0) - _DAT_14cb0d070) {
    QueryPerformanceCounter(&local_38);
    _DAT_14cb0d070 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  if (param_3 != (longlong *)0x0) {
    uVar1 = param_3[0x40];
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if ((uVar1 == DAT_14c892fa8) || (uVar1 == DAT_14c892fac)) {
      if (param_2 == 0) {
LAB_14375e8a6:
        (**(code **)(*param_1 + 0x558))(param_1,param_2,param_3,param_4);
        if (*(code **)(*param_3 + 0x3c0) == (code *)&LAB_1448ff5f6) {
          cVar6 = param_3[0x1e] == 0;
        }
        else {
          cVar6 = (**(code **)(*param_3 + 0x3c0))(param_3);
        }
        if (((10 < param_4) || ((0x618U >> (param_4 & 0x1f) & 1) == 0)) || (cVar6 == '\0')) {
          lVar3 = FUN_1411c1a08();
          FUN_147d874e8(lVar3 + 0x78,param_2,param_3);
          if (param_2 == 0) {
            uVar1 = param_3[0x40];
            if (DAT_14c87ead8 == '\0') {
              FUN_140024d3a(&DAT_14c87eb00);
              DAT_14c87ead8 = '\x01';
            }
            if (uVar1 != DAT_14c892fac) goto LAB_14375e8f3;
            lVar3 = FUN_147d81aec(DAT_14cb0d2b0,param_3);
            plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x2a8) + 0x48);
            if (plVar4 == (longlong *)0x0) goto LAB_14375e8f3;
            param_2 = *(longlong *)(lVar3 + 0x360);
            lVar3 = *plVar4;
          }
          else {
            if ((*(longlong *)(param_2 + 0x1f0) == 0) ||
               (plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x1f0) + 0x48),
               plVar4 == (longlong *)0x0)) goto LAB_14375e8f3;
            lVar3 = *plVar4;
          }
          (**(code **)(lVar3 + 0x2b0))(plVar4,param_2,param_3);
        }
      }
      else {
        lVar3 = FUN_1405e677a(param_1);
        if (0 < (longlong)*(int *)(lVar3 + 0x2b8)) {
          lVar5 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x2b0) + lVar5);
            if ((lVar2 != 0) && (*(ulonglong *)(lVar2 + 0x200) == uVar1)) goto LAB_14375e8a6;
            lVar5 = lVar5 + 0x10;
          } while ((longlong)*(int *)(lVar3 + 0x2b8) * 0x10 != lVar5);
        }
      }
    }
  }
LAB_14375e8f3:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14375e9c0 FUN_14375e9c0 body=1252 status=ok
// SIG undefined FUN_14375e9c0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14375e9c0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  longlong *plVar6;
  ushort uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined1 auStack_1218 [32];
  ulonglong local_11f8;
  undefined8 local_11f0;
  undefined8 local_11e8;
  undefined8 local_11e0;
  wchar_t *local_11d8;
  undefined1 *local_11d0;
  undefined1 *local_11c8;
  code **local_11c0;
  code *local_11b8;
  code *local_11b0;
  undefined8 local_11a0;
  longlong local_1198;
  undefined2 *local_1190;
  longlong local_1188;
  undefined8 uStack_1180;
  undefined8 local_1178;
  undefined8 uStack_1170;
  undefined4 local_1168;
  undefined4 uStack_1164;
  undefined4 uStack_1160;
  undefined4 uStack_115c;
  undefined8 local_1158;
  undefined8 uStack_1150;
  undefined8 local_1148;
  undefined8 uStack_1140;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  code *local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined2 local_10e8;
  byte local_10e6;
  undefined1 local_10e5;
  undefined4 local_10e4;
  longlong local_10d8;
  longlong *local_10c8;
  longlong local_10b8 [4];
  wchar_t local_1098 [2052];
  ulonglong local_90;
  undefined8 uStack_48;
  
  uStack_48 = 0x14375e9d6;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1218;
  local_1188 = 0;
  uStack_1180 = 0;
  local_11a0 = param_2;
  FUN_140b7fa3a(&local_1188,param_1 + 0x10f8);
  FUN_140b7fa3a(&local_1188,param_1 + 0x1108);
  if (0 < (int)uStack_1180) {
    lVar9 = 0;
    do {
      local_1190 = &DAT_149dfb77a;
      if (*(int *)(local_1188 + 8 + lVar9 * 0x10) != 0) {
        local_1190 = *(undefined2 **)(local_1188 + lVar9 * 0x10);
      }
      local_11f8 = local_11f8 & 0xffffffffffff0000;
      local_1198 = lVar9;
      cVar1 = FUN_142786b6e(&local_1190,local_1098,0x800,1);
      if (cVar1 != '\0') {
        if (DAT_14cac9ca8 == 0) {
          local_1118 = FUN_141030f22;
          local_11b0 = FUN_14081d0ea;
          local_11b8 = FUN_14081d0ea;
          local_11c8 = &LAB_1478c0a72;
          local_11d0 = &LAB_1417b2375;
          local_11d8 = L"Engine";
          local_11e0 = 0x1000000000;
          local_11e8 = CONCAT44(local_11e8._4_4_,0x10000004);
          local_11f0 = CONCAT44(local_11f0._4_4_,8);
          local_11f8 = CONCAT44(local_11f8._4_4_,0x390);
          local_11c0 = &local_1118;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        }
        local_11f0 = 0;
        local_11f8 = local_11f8 & 0xffffffff00000000;
        uVar2 = FUN_141433b6f(DAT_14cac9ca8,0,local_1098,0);
        local_10f8 = 0;
        uStack_10f0 = 0;
        local_1108 = 0;
        uStack_1100 = 0;
        local_1118 = (code *)0x0;
        uStack_1110 = 0;
        local_10e8 = 0x100;
        local_10e6 = local_10e6 & 0xe0;
        local_10e5 = 0;
        local_10e4 = 8;
        local_10d8 = 0;
        local_10c8 = (longlong *)0x0;
        local_1178 = 0;
        uStack_1170 = 0;
        local_1168 = 0;
        uStack_1164 = 0;
        uStack_1160 = 0;
        uStack_115c = 0x3ff00000;
        local_1148 = 0;
        uStack_1140 = 0;
        local_1158 = 0;
        uStack_1150 = 0;
        local_1138 = 0x3ff0000000000000;
        uStack_1130 = 0x3ff0000000000000;
        local_1128 = 0x3ff0000000000000;
        uStack_1120 = 0;
        uVar3 = FUN_141037e38(local_11a0,uVar2,&local_1178,&local_1118);
        if (local_10d8 != 0) {
          plVar6 = local_10c8;
          if (local_10c8 == (longlong *)0x0) {
            plVar6 = local_10b8;
          }
          (**(code **)(*plVar6 + 0x10))();
        }
        if (uVar3 != 0) {
LAB_14375ebe2:
          while( true ) {
            local_11f8 = local_11f8 & 0xffffffffffff0000;
            cVar1 = FUN_142786b6e(&local_1190,local_1098,0x800,1);
            if (cVar1 == '\0') break;
            pwVar4 = wcschr(local_1098,L'=');
            if (pwVar4 != (wchar_t *)0x0) {
              *pwVar4 = L'\0';
              plVar6 = *(longlong **)(uVar3 + 0x10);
              if (plVar6 != (longlong *)0x0) {
                do {
                  for (plVar12 = (longlong *)plVar6[10]; plVar12 != (longlong *)0x0;
                      plVar12 = (longlong *)plVar12[3]) {
                    if ((~*(uint *)(plVar12[1] + 0x18) & 0x8001) == 0) goto LAB_14375ec63;
                  }
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
                } while (plVar6 != (longlong *)0x0);
              }
            }
          }
        }
      }
      lVar9 = local_1198 + 1;
    } while (lVar9 < (int)uStack_1180);
  }
  FUN_1447a1747(local_1188);
  if (local_1188 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_1218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14375ec63:
  FUN_1400021e4(plVar12 + 4,&local_1118);
  pcVar5 = local_1118;
  if ((int)uStack_1110 == 0) {
    pcVar5 = (code *)&DAT_149dfb77a;
  }
  lVar9 = 0;
  while( true ) {
    uVar7 = *(ushort *)(pcVar5 + lVar9);
    uVar8 = (ulonglong)uVar7;
    uVar10 = *(ushort *)((longlong)local_1098 + lVar9);
    if (uVar7 != uVar10) {
      if ((uVar10 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
        uVar11 = (ulonglong)uVar10;
        uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_14375eca1;
      }
      if (uVar7 != uVar10) {
        if (local_1118 != (code *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14375ed1d;
      }
      break;
    }
    if (uVar7 == 0) break;
LAB_14375eca1:
    lVar9 = lVar9 + 2;
  }
  lVar9 = plVar12[7];
  if (local_1118 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (((uint)lVar9 >> 0xe & 1) != 0) {
    local_11e8 = DAT_14c872be8;
    local_11f0 = CONCAT44(local_11f0._4_4_,0x8000000);
    local_11f8 = uVar3;
    (**(code **)(*plVar12 + 0xf8))(plVar12,pwVar4 + 1,uVar3,1);
  }
LAB_14375ed1d:
  plVar12 = plVar12 + 3;
  do {
    for (plVar12 = (longlong *)*plVar12; plVar12 != (longlong *)0x0;
        plVar12 = (longlong *)plVar12[3]) {
      if ((~*(uint *)(plVar12[1] + 0x18) & 0x8001) == 0) goto LAB_14375ec63;
    }
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
    plVar12 = plVar6 + 10;
  } while (plVar6 != (longlong *)0x0);
  goto LAB_14375ebe2;
}



// FUNCTION 14375eea6 FUN_14375eea6 body=516 status=ok
// SIG undefined FUN_14375eea6(void)

bool FUN_14375eea6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  int local_6c;
  longlong local_68 [2];
  undefined8 *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0x360) + 0x153);
  *pbVar1 = *pbVar1 & 0x7f;
  local_6c = *(int *)(param_2 + 0x250);
  if (local_6c < 1) {
    plVar2 = (longlong *)(param_2 + 0x248);
    *(undefined4 *)(param_2 + 0x250) = 0;
    if (*(int *)(param_2 + 0x254) < 0) {
      FUN_1402191ca(plVar2,0);
    }
    uVar3 = *(uint *)(param_3 + 1);
    if ((longlong)(int)uVar3 != 0) {
      iVar4 = *(int *)(param_2 + 0x250);
      *(uint *)(param_2 + 0x250) = iVar4 + uVar3;
      if ((uint)(*(int *)(param_2 + 0x254) - iVar4) < uVar3) {
        FUN_1446f84a2(plVar2,iVar4);
      }
      memcpy((void *)((longlong)iVar4 * 8 + *plVar2),(void *)*param_3,(longlong)(int)uVar3 << 3);
    }
    if (*(longlong *)(param_2 + 0x360) != 0) {
      FUN_1406fa324(*(longlong *)(param_2 + 0x360) + 0x770,param_3);
    }
    if ((longlong)*(int *)(param_2 + 0x250) != 0) {
      lVar7 = *(longlong *)(param_2 + 0x248);
      lVar8 = (longlong)*(int *)(param_2 + 0x250) << 3;
      do {
        local_58 = (undefined8 *)0x0;
        local_50 = 0;
        FUN_1446efa72(&local_58,0,2,0x10);
        local_50 = 2;
        *local_58 = &PTR_LAB_14aae6c10;
        local_58[1] = *(undefined8 *)(param_2 + 0x140);
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar5 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar5 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar5;
        local_58[2] = lVar6;
        *local_58 = &PTR_FUN_14aae6ba0;
        local_58[3] = FUN_1437647cc;
        FUN_1400021e4(lVar7,local_68);
        local_78 = 0xffffffff;
        FUN_1427d6730(local_68,&local_58,0,0);
        if (local_68[0] != 0) {
          FUN_1400020a8();
        }
        lVar7 = lVar7 + 8;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
    }
  }
  else {
    FUN_14020fad6(param_2 + 0x268,L"Current map change still in progress");
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_6c < 1;
}



// FUNCTION 14375f0ac FUN_14375f0ac body=150 status=ok
// SIG undefined FUN_14375f0ac(void)

void FUN_14375f0ac(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_2 + 0x278) & 1) != 0) && (0 < *(int *)(param_2 + 0x250))) {
    if ((*(int *)(param_2 + 0x250) != *(int *)(param_2 + 0x260)) &&
       (DAT_14c948aa0 != (longlong *)0x0)) {
      local_28 = 0;
      local_20 = 0;
      (**(code **)(*DAT_14c948aa0 + 0x60))();
    }
    FUN_1405e677a(param_1,*(undefined8 *)(param_2 + 0x360));
    FUN_143764a58();
    *(byte *)(param_2 + 0x278) = *(byte *)(param_2 + 0x278) & 0xfe;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14375f144 FUN_14375f144 body=5398 status=ok
// SIG undefined FUN_14375f144(void)

uint FUN_14375f144(longlong *param_1,char *param_2,longlong *param_3,wchar_t **param_4)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  void *_Src;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  size_t sVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  wchar_t **ppwVar13;
  wchar_t *_Str;
  int iVar14;
  undefined2 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  char *pcVar20;
  int iVar21;
  undefined1 auStack_2d8 [32];
  wchar_t **local_2b8;
  char *local_2a8;
  longlong *local_2a0;
  undefined1 local_298 [104];
  wchar_t *local_230;
  ulonglong uStack_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  longlong local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  longlong local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined1 local_1c8 [104];
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150 [2];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  longlong *local_138 [2];
  undefined8 local_128;
  longlong *local_120;
  longlong *local_118 [2];
  longlong *local_108 [2];
  longlong *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e0;
  longlong *local_d8;
  wchar_t **local_d0;
  undefined8 local_c8;
  wchar_t **local_c0;
  int local_b8;
  int local_b4;
  wchar_t *local_b0;
  ulonglong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  pwVar18 = L"";
  FUN_14020fad6(param_4,&DAT_149dfb77a);
  FUN_14020fad6(param_2 + 0x148,&DAT_149dfb77a);
  if (((*(longlong *)(param_2 + 0x360) == 0) ||
      (lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x38), lVar10 == 0)) ||
     (*(char *)(lVar10 + 0x308) != '\x01')) {
    plVar11 = param_3 + 5;
    if ((int)param_3[6] != 0) {
      pwVar18 = (wchar_t *)*plVar11;
    }
    local_2a8 = param_2;
    local_2a0 = param_1;
    pwVar18 = wcsstr(pwVar18,L".unreal");
    lVar10 = param_3[6];
    if ((int)lVar10 == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)*plVar11;
    }
    sVar9 = wcslen(_Str);
    uVar16 = DAT_14c872ce0;
    if ((longlong)pwVar18 - (longlong)_Str >> 1 == (longlong)((int)sVar9 + -7)) {
      local_f8 = (longlong *)0x0;
      uStack_f0 = 0;
      if ((int)lVar10 == 0) {
        puVar15 = &DAT_149dfb77a;
      }
      else {
        puVar15 = (undefined2 *)*plVar11;
      }
      FUN_140056680(&local_b0,puVar15);
      local_2b8 = &local_b0;
      cVar6 = FUN_1449da20c(uVar16,L"Link",L"Server",&local_f8);
      if (local_b0 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      if (cVar6 == '\0') {
        FUN_140009b9a(local_118,plVar11);
        local_b0 = L"InvalidLink";
        local_a8._0_4_ = 0xb;
        FUN_1446e940c(local_13c,&local_b0);
        local_b0 = L"Engine";
        local_a8._0_4_ = 6;
        FUN_1446e940c(local_140,&local_b0);
        local_b0 = L"Invalid Link: {0}";
        local_a8 = CONCAT44(local_a8._4_4_,0x11);
        FUN_140208c1e(local_138,local_140,local_13c,&local_b0);
        FUN_14023409e(&local_128,local_138,1);
        local_b0 = (wchar_t *)CONCAT44(local_b0._4_4_,4);
        FUN_14023423e(&plStack_a0,local_118);
        local_c8 = &uStack_90;
        local_d0 = &local_b0;
        FUN_14010d304(&local_c0);
        local_e0 = local_128;
        local_d8 = local_120;
        if (local_120 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_120 + 1) = (int)local_120[1] + 1;
          UNLOCK();
        }
        FUN_14010c016(local_108,&local_e0,&local_c0);
        FUN_14007f2db(local_c0,local_b8);
        if (local_c0 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
        if (plStack_a0 != (longlong *)0x0) {
          (**(code **)(*plStack_a0 + 0x10))();
        }
        if (local_120 != (longlong *)0x0) {
          LOCK();
          plVar11 = local_120 + 1;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)*plVar11 == 0) {
            (**(code **)*local_120)(local_120);
            LOCK();
            piVar1 = (int *)((longlong)local_120 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_120 + 0x10))(local_120);
            }
          }
        }
        if (local_118[0] != (longlong *)0x0) {
          (**(code **)(*local_118[0] + 0x10))();
        }
        plVar11 = local_108[0];
        plVar12 = local_108[0];
        if (*(code **)(*local_108[0] + 0x50) != FUN_144828418) {
          plVar12 = (longlong *)(**(code **)(*local_108[0] + 0x50))(local_108[0]);
        }
        FUN_1447a1fc0(plVar12);
        pcVar3 = *(code **)(*plVar11 + 0x28);
        if (pcVar3 == FUN_14482841c) {
          ppwVar13 = (wchar_t **)(plVar11[5] + 8);
          if (plVar11[5] == 0) {
            ppwVar13 = (wchar_t **)(plVar11 + 3);
          }
        }
        else if (pcVar3 == (code *)&LAB_14010c34c) {
          ppwVar13 = (wchar_t **)(plVar11 + 2);
        }
        else {
          ppwVar13 = (wchar_t **)(*pcVar3)(plVar11);
        }
        if (ppwVar13 != param_4) {
          iVar2 = *(int *)(ppwVar13 + 1);
          pwVar18 = *ppwVar13;
          *(int *)(param_4 + 1) = iVar2;
          if (iVar2 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
            *(undefined4 *)((longlong)param_4 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(param_4,iVar2);
            if (iVar2 != 0) {
              memcpy(*param_4,pwVar18,(longlong)iVar2 * 2);
            }
          }
        }
        if (plVar11 != (longlong *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        if (local_138[0] != (longlong *)0x0) {
          (**(code **)(*local_138[0] + 0x10))();
        }
      }
      else {
        plVar11 = local_f8;
        if ((int)uStack_f0 == 0) {
          plVar11 = (longlong *)&DAT_149dfb77a;
        }
        FUN_140245d8a(&local_b0,0,plVar11,0);
        FUN_147bcc67a(param_3,&local_b0);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_84,local_88) != 0) {
          FUN_1400020a8();
        }
        if (plStack_a0 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_b0 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_f8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar8 = 1;
      if (cVar6 == '\0') goto LAB_14375f9ff;
    }
    if (*(int *)((longlong)param_3 + 0x24) != 0) {
      lVar10 = FUN_14045d4ce(param_3,L"failed",0);
      if (lVar10 == 0) {
        lVar10 = FUN_14045d4ce(param_3,L"closed",0);
        if (lVar10 != 0) goto LAB_14375f820;
        lVar10 = FUN_14045d4ce(param_3,L"restart",0);
        plVar11 = local_2a0;
        pcVar20 = local_2a8;
        if (lVar10 != 0) {
          FUN_1405f35b2(param_3,local_2a8 + 0x160);
        }
        if ((DAT_14cadad94 == '\x01') && (lVar10 = FUN_14045d4ce(param_3,L"listen",0), lVar10 != 0))
        {
          local_b0 = L"UsedCheatCommands";
          local_a8._0_4_ = 0x11;
          FUN_1446e940c(&local_d0,&local_b0);
          local_b0 = L"Engine";
          local_a8._0_4_ = 6;
          FUN_1446e940c(&local_e0,&local_b0);
          local_b0 = 
          L"Console commands were used which are disallowed in netplay.  You must restart the game to create a match."
          ;
          local_a8 = CONCAT44(local_a8._4_4_,0x69);
          FUN_140208c1e(&local_c0,&local_e0,&local_d0,&local_b0);
          ppwVar13 = local_c0;
          if (*(code **)(*local_c0 + 0x28) != FUN_144828418) {
            ppwVar13 = (wchar_t **)(**(code **)(*local_c0 + 0x28))();
          }
          FUN_1447a1fc0(ppwVar13);
          pcVar3 = *(code **)(*local_c0 + 0x14);
          if (pcVar3 == FUN_14482841c) {
            ppwVar13 = local_c0 + 3;
            if (local_c0[5] != (wchar_t *)0x0) {
              ppwVar13 = (wchar_t **)(local_c0[5] + 4);
            }
          }
          else if (pcVar3 == (code *)&LAB_14010c34c) {
            ppwVar13 = local_c0 + 2;
          }
          else {
            ppwVar13 = (wchar_t **)(*pcVar3)(local_c0);
          }
          if (ppwVar13 != param_4) {
            iVar2 = *(int *)(ppwVar13 + 1);
            pwVar18 = *ppwVar13;
            *(int *)(param_4 + 1) = iVar2;
            if (iVar2 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
              *(undefined4 *)((longlong)param_4 + 0xc) = 0;
            }
            else {
              FUN_1446dd670(param_4,iVar2);
              if (iVar2 != 0) {
                memcpy(*param_4,pwVar18,(longlong)iVar2 * 2);
              }
            }
          }
          if (local_c0 != (wchar_t **)0x0) {
            (**(code **)(*local_c0 + 8))();
          }
          uVar16 = *(undefined8 *)(local_2a8 + 0x360);
          plVar11 = local_2a0 + 0x1d6;
          uVar17 = 7;
          goto LAB_14375f9f1;
        }
        if ((((int)plVar11[0x226] == 0) || ((longlong *)plVar11[0x225] == (longlong *)0x0)) ||
           (cVar6 = (**(code **)(*(longlong *)plVar11[0x225] + 0x30))(), cVar6 == '\0')) {
          cVar6 = FUN_147d8a6b2(param_3);
          if (cVar6 != '\0') {
            FUN_145ad1184(local_298,param_3);
            local_2b8 = param_4;
            bVar7 = (**(code **)(*plVar11 + 0x4c8))(plVar11,pcVar20,local_298,0);
            uVar8 = (uint)(bVar7 ^ 1);
            goto LAB_14375f9ff;
          }
          cVar6 = FUN_147d8a63c(param_3);
          if ((cVar6 == '\0') || (DAT_14c86a9f0 != '\x01')) {
            cVar6 = FUN_147d8a63c(param_3);
            uVar8 = 1;
            if (cVar6 != '\0') {
              local_b0 = L"ServerOpen";
              local_a8._0_4_ = 10;
              FUN_1446e940c(&local_d0,&local_b0);
              local_b0 = L"Engine";
              local_a8._0_4_ = 6;
              FUN_1446e940c(&local_e0,&local_b0);
              local_b0 = L"Servers can\'t open network URLs";
              local_a8 = CONCAT44(local_a8._4_4_,0x1f);
              FUN_140208c1e(&local_c0,&local_e0,&local_d0,&local_b0);
              ppwVar13 = local_c0;
              if (*(code **)(*local_c0 + 0x28) != FUN_144828418) {
                ppwVar13 = (wchar_t **)(**(code **)(*local_c0 + 0x28))();
              }
              FUN_1447a1fc0(ppwVar13);
              pcVar3 = *(code **)(*local_c0 + 0x14);
              if (pcVar3 == FUN_14482841c) {
                ppwVar13 = local_c0 + 3;
                if (local_c0[5] != (wchar_t *)0x0) {
                  ppwVar13 = (wchar_t **)(local_c0[5] + 4);
                }
              }
              else if (pcVar3 == (code *)&LAB_14010c34c) {
                ppwVar13 = local_c0 + 2;
              }
              else {
                ppwVar13 = (wchar_t **)(*pcVar3)(local_c0);
              }
              if (ppwVar13 != param_4) {
                iVar2 = *(int *)(ppwVar13 + 1);
                pwVar18 = *ppwVar13;
                *(int *)(param_4 + 1) = iVar2;
                if (iVar2 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
                  *(undefined4 *)((longlong)param_4 + 0xc) = 0;
                }
                else {
                  FUN_1446dd670(param_4,iVar2);
                  if (iVar2 != 0) {
                    memcpy(*param_4,pwVar18,(longlong)iVar2 * 2);
                  }
                }
              }
              if (local_c0 != (wchar_t **)0x0) {
                (**(code **)(*local_c0 + 8))();
              }
            }
            goto LAB_14375f9ff;
          }
          if (*(longlong *)(pcVar20 + 0x230) != 0) {
            (**(code **)(*plVar11 + 0x4f8))(plVar11,pcVar20);
          }
          if ((*(longlong *)(pcVar20 + 0x360) != 0) &&
             (cVar6 = (**(code **)(*plVar11 + 0x548))(plVar11), cVar6 != '\0')) {
            FUN_14375e010(plVar11,*(undefined8 *)(pcVar20 + 0x360));
          }
          lVar10 = FUN_14640a4b9(DAT_14c951640);
          if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar10);
          }
          pcVar20 = local_2a8;
          *(longlong *)(local_2a8 + 0x230) = lVar10;
          FUN_1463f223e(lVar10,param_3);
          FUN_1436037d4(*(undefined8 *)(pcVar20 + 0x230));
          lVar10 = *(longlong *)(pcVar20 + 0x230);
          if (lVar10 == 0) {
            local_b0 = L"PendingNetGameInitFailure";
            local_a8._0_4_ = 0x19;
            FUN_1446e940c(&local_d0,&local_b0);
            local_b0 = L"Engine";
            local_a8._0_4_ = 6;
            FUN_1446e940c(&local_e0,&local_b0);
            local_b0 = L"Error initializing the network driver.";
            local_a8 = CONCAT44(local_a8._4_4_,0x26);
            FUN_140208c1e(&local_c0,&local_e0,&local_d0,&local_b0);
            ppwVar13 = local_c0;
            if (*(code **)(*local_c0 + 0x28) != FUN_144828418) {
              ppwVar13 = (wchar_t **)(**(code **)(*local_c0 + 0x28))();
            }
            FUN_1447a1fc0(ppwVar13);
            pcVar3 = *(code **)(*local_c0 + 0x14);
            if (pcVar3 == FUN_14482841c) {
              ppwVar13 = local_c0 + 3;
              if (local_c0[5] != (wchar_t *)0x0) {
                ppwVar13 = (wchar_t **)(local_c0[5] + 4);
              }
            }
            else if (pcVar3 == (code *)&LAB_14010c34c) {
              ppwVar13 = local_c0 + 2;
            }
            else {
              ppwVar13 = (wchar_t **)(*pcVar3)(local_c0);
            }
            if (ppwVar13 != param_4) {
              iVar2 = *(int *)(ppwVar13 + 1);
              pwVar18 = *ppwVar13;
              *(int *)(param_4 + 1) = iVar2;
              if (iVar2 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
                *(undefined4 *)((longlong)param_4 + 0xc) = 0;
              }
              else {
                FUN_1446dd670(param_4,iVar2);
                if (iVar2 != 0) {
                  memcpy(*param_4,pwVar18,(longlong)iVar2 * 2);
                }
              }
            }
            if (local_c0 != (wchar_t **)0x0) {
              (**(code **)(*local_c0 + 8))();
            }
            uVar16 = *(undefined8 *)(local_2a8 + 0x360);
            plVar11 = local_2a0 + 0x1d6;
            uVar17 = 8;
            goto LAB_14375f9f1;
          }
          goto LAB_14375fc4c;
        }
        FUN_145ad1184(&local_230,param_3);
        local_98 = uStack_218;
        local_a8 = uStack_228;
        if ((int)plVar11[0x226] == 0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          plVar11 = (longlong *)plVar11[0x225];
        }
        local_b0 = local_230;
        local_230 = (wchar_t *)0x0;
        uStack_228 = 0;
        plStack_a0 = plStack_220;
        plStack_220 = (longlong *)0x0;
        uStack_218 = 0;
        uStack_90 = uStack_210;
        uVar4 = (undefined4)local_208;
        local_88 = (undefined4)local_208;
        uStack_84 = local_208._4_4_;
        uStack_80 = (undefined4)uStack_200;
        uStack_7c = uStack_200._4_4_;
        local_208 = 0;
        uStack_200 = 0;
        local_78 = local_1f8;
        local_1f8 = 0;
        local_70 = local_1f0;
        local_6c = local_1ec;
        local_1f0 = 0;
        local_1ec = 0;
        local_68 = local_1e8;
        local_1e8 = 0;
        local_60 = local_1e0;
        local_5c = local_1dc;
        local_1e0 = 0;
        local_1dc = 0;
        local_58 = local_1d8;
        local_1d8 = 0;
        local_50 = local_1d0;
        local_4c = local_1cc;
        local_1d0 = 0;
        local_1cc = 0;
        uVar8 = (**(code **)(*plVar11 + 0x58))(uVar4,pcVar20,&local_b0,param_4);
        if (local_1d8 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_1e8,local_1e0);
        if (local_1e8 != 0) {
          FUN_1400020a8();
        }
        if (local_1f8 != 0) {
          FUN_1400020a8();
        }
        if (local_208 != 0) {
          FUN_1400020a8();
        }
        pwVar18 = local_230;
        if (plStack_220 != (longlong *)0x0) {
          FUN_1400020a8();
          pwVar18 = local_230;
        }
      }
      else {
LAB_14375f820:
        pcVar20 = local_2a8;
        if (*(longlong *)(local_2a8 + 0x230) != 0) {
          (**(code **)(*local_2a0 + 0x4f8))(local_2a0,local_2a8);
        }
        if (*(longlong *)(pcVar20 + 0x360) != 0) {
          FUN_1468b6d7e(*(undefined8 *)(*(longlong *)(pcVar20 + 0x360) + 0x20));
        }
        if (*pcVar20 == '\x06') {
          local_b0 = (wchar_t *)0x0;
          iVar2 = *(int *)(pcVar20 + 0x2b8);
          uVar16 = *(undefined8 *)(pcVar20 + 0x2b0);
          local_a8 = CONCAT44(local_a8._4_4_,iVar2);
          if (iVar2 == 0) {
            local_a8 = 0;
            pcVar20 = local_2a8;
          }
          else {
            FUN_147866270(&local_b0,iVar2,0);
            FUN_1478662d2(local_b0,uVar16,iVar2);
            pwVar18 = local_b0;
            pcVar20 = local_2a8;
            lVar10 = (longlong)(int)local_a8;
            if (lVar10 != 0) {
              lVar19 = 0;
              do {
                if (*(longlong *)((longlong)pwVar18 + lVar19) != 0) {
                  FUN_14375e49a(pcVar20,*(undefined8 *)
                                         (*(longlong *)((longlong)pwVar18 + lVar19) + 0x200));
                }
                lVar19 = lVar19 + 0x10;
              } while (lVar10 * 0x10 != lVar19);
            }
          }
          FUN_1427e390c(0,1);
          FUN_14584f2c6(local_b0,local_a8 & 0xffffffff);
          if (local_b0 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar10 = FUN_14640a4b9(DAT_14c951640);
          if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar10);
          }
          *(longlong *)(pcVar20 + 0x230) = lVar10;
          FUN_1463f223e(lVar10,pcVar20 + 0x160);
          FUN_1436037d4(*(undefined8 *)(pcVar20 + 0x230));
          lVar10 = *(longlong *)(pcVar20 + 0x230);
LAB_14375fc4c:
          pcVar20 = local_2a8;
          uVar8 = 2;
          if (*(longlong *)(lVar10 + 0x30) != 0) goto LAB_14375f9ff;
          FUN_147d83bd2(local_2a0 + 0x1d6,*(undefined8 *)(local_2a8 + 0x360),8,lVar10 + 0xb0);
          pcVar20[0x230] = '\0';
          pcVar20[0x231] = '\0';
          pcVar20[0x232] = '\0';
          pcVar20[0x233] = '\0';
          pcVar20[0x234] = '\0';
          pcVar20[0x235] = '\0';
          pcVar20[0x236] = '\0';
          pcVar20[0x237] = '\0';
          goto LAB_14375f9f9;
        }
        plVar11 = (longlong *)FUN_140628716();
        lVar10 = plVar11[0x22];
        if (lVar10 == 0) {
          (**(code **)(*plVar11 + 1000))(plVar11);
          lVar10 = plVar11[0x22];
        }
        FUN_140810f5e(&local_d0,0);
        iVar2 = (int)local_c8;
        if ((int)local_c8 < 2) {
          local_c0 = (wchar_t **)0x0;
          local_b8 = *(int *)(lVar10 + 0x30);
          lVar19 = (longlong)local_b8;
          _Src = *(void **)(lVar10 + 0x28);
          if (lVar19 == 0) {
            local_b4 = 0;
          }
          else {
            FUN_1446dd670(&local_c0,local_b8,0);
            memcpy(local_c0,_Src,lVar19 * 2);
          }
        }
        else {
          iVar21 = *(int *)(lVar10 + 0x30) + -1;
          if (*(int *)(lVar10 + 0x30) == 0) {
            iVar21 = 0;
          }
          local_c0 = local_d0;
          local_d0 = (wchar_t **)0x0;
          local_b8 = (int)local_c8;
          iVar5 = local_c8._4_4_;
          local_b4 = local_c8._4_4_;
          local_c8 = (undefined8 *)0x0;
          iVar14 = iVar21 + iVar2;
          if (iVar14 < iVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4((longlong)iVar21);
          }
          if (iVar5 < iVar14) {
            FUN_1446f8c06(&local_c0);
          }
          FUN_1400020e8(&local_c0,*(undefined8 *)(lVar10 + 0x28),iVar21);
        }
        plVar11 = local_2a0;
        ppwVar13 = local_c0;
        if (local_b8 == 0) {
          ppwVar13 = (wchar_t **)&DAT_149dfb77a;
        }
        FUN_140245d8a(&local_b0,param_3,ppwVar13,1);
        if (local_c0 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
        if (local_d0 != (wchar_t **)0x0) {
          FUN_1400020a8();
        }
        FUN_145ad1184(local_1c8,&local_b0);
        pcVar20 = local_2a8;
        uVar8 = 0;
        local_2b8 = param_4;
        cVar6 = (**(code **)(*plVar11 + 0x4c8))(plVar11,local_2a8,local_1c8,0);
        if (cVar6 == '\0') {
          FUN_141641396(&local_b0,&local_c0,0);
          (**(code **)(*plVar11 + 0x550))(plVar11,pcVar20,&local_c0,param_4);
          if (local_c0 != (wchar_t **)0x0) {
            FUN_1400020a8();
          }
          uVar8 = 1;
        }
        else {
          FUN_1427e390c(0,1);
          pcVar20 = pcVar20 + 0x160;
          FUN_14622b792(pcVar20,L"failed",0,&DAT_14c872af8);
          FUN_14622b792(pcVar20,L"closed",0,&DAT_14c872af8);
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_68,local_60);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (CONCAT44(uStack_84,local_88) != 0) {
          FUN_1400020a8();
        }
        pwVar18 = local_b0;
        if (plStack_a0 != (longlong *)0x0) {
          FUN_1400020a8();
          pwVar18 = local_b0;
        }
      }
      if (pwVar18 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_14375f9ff;
    }
    FUN_141641396(param_3,local_108,0);
    FUN_140233b1a(local_150,local_108);
    local_b0 = L"InvalidUrl";
    local_a8._0_4_ = 10;
    FUN_1446e940c(local_13c,&local_b0);
    local_b0 = L"Engine";
    local_a8._0_4_ = 6;
    FUN_1446e940c(local_140,&local_b0);
    local_b0 = L"Invalid URL: {0}";
    local_a8 = CONCAT44(local_a8._4_4_,0x10);
    FUN_140208c1e(local_138,local_140,local_13c,&local_b0);
    FUN_14023409e(&local_160,local_138,1);
    local_b0 = (wchar_t *)CONCAT44(local_b0._4_4_,4);
    FUN_14023423e(&plStack_a0,local_150);
    local_c8 = &uStack_90;
    local_d0 = &local_b0;
    FUN_14010d304(&local_c0);
    local_e0 = local_160;
    local_d8 = local_158;
    if (local_158 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_158 + 1) = (int)local_158[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(&local_f8,&local_e0,&local_c0);
    FUN_14007f2db(local_c0,local_b8);
    if (local_c0 != (wchar_t **)0x0) {
      FUN_1400020a8();
    }
    if (plStack_a0 != (longlong *)0x0) {
      (**(code **)(*plStack_a0 + 0x10))();
    }
    if (local_158 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_158 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_158)(local_158);
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_158 + 0x10))(local_158);
        }
      }
    }
    if (local_150[0] != (longlong *)0x0) {
      (**(code **)(*local_150[0] + 0x10))();
    }
    plVar11 = local_f8;
    plVar12 = local_f8;
    if (*(code **)(*local_f8 + 0x50) != FUN_144828418) {
      plVar12 = (longlong *)(**(code **)(*local_f8 + 0x50))(local_f8);
    }
    FUN_1447a1fc0(plVar12);
    pcVar3 = *(code **)(*plVar11 + 0x28);
    if (pcVar3 == FUN_14482841c) {
      ppwVar13 = (wchar_t **)(plVar11[5] + 8);
      if (plVar11[5] == 0) {
        ppwVar13 = (wchar_t **)(plVar11 + 3);
      }
    }
    else if (pcVar3 == (code *)&LAB_14010c34c) {
      ppwVar13 = (wchar_t **)(plVar11 + 2);
    }
    else {
      ppwVar13 = (wchar_t **)(*pcVar3)(plVar11);
    }
    if (ppwVar13 != param_4) {
      iVar2 = *(int *)(ppwVar13 + 1);
      pwVar18 = *ppwVar13;
      *(int *)(param_4 + 1) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_4,iVar2);
        if (iVar2 != 0) {
          memcpy(*param_4,pwVar18,(longlong)iVar2 * 2);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    if (local_138[0] != (longlong *)0x0) {
      (**(code **)(*local_138[0] + 0x10))();
    }
    plVar11 = local_2a0;
    pcVar20 = local_2a8;
    if (local_108[0] != (longlong *)0x0) {
      FUN_1400020a8();
    }
    uVar16 = *(undefined8 *)(pcVar20 + 0x360);
    plVar11 = plVar11 + 0x1d6;
    uVar17 = 2;
LAB_14375f9f1:
    FUN_147d83bd2(plVar11,uVar16,uVar17,param_4);
  }
  else {
    FUN_14020fad6(param_4,
                  L"Attempting to call UEngine::Browse and destroy the net driver while the net driver is ticking. Instead try using UWorld::ServerTravel or APlayerController::ClientTravel."
                 );
  }
LAB_14375f9f9:
  uVar8 = 1;
LAB_14375f9ff:
  if (param_3[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_3[9],(int)param_3[10]);
  if (param_3[9] != 0) {
    FUN_1400020a8();
  }
  if (param_3[7] != 0) {
    FUN_1400020a8();
  }
  if (param_3[5] != 0) {
    FUN_1400020a8();
  }
  if (param_3[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14376065c FUN_14376065c body=594 status=ok
// SIG undefined FUN_14376065c(void)

void FUN_14376065c(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8 [2];
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140009b9a(local_a8,param_4);
  local_58 = L"FailedToLoadDefaultMap";
  local_50 = 0x16;
  FUN_1446e940c(local_cc,&local_58);
  local_58 = L"Engine";
  local_50 = 6;
  FUN_1446e940c(local_d0,&local_58);
  local_58 = L"Error \'{0}\'. Exiting.";
  local_50 = 0x15;
  FUN_140208c1e(local_c8,local_d0,local_cc,&local_58);
  FUN_14023409e(&local_b8,local_c8,1);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(local_48,local_a8);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_b8;
  local_80 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_98,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if (local_a8[0] != (longlong *)0x0) {
    (**(code **)(*local_a8[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  FUN_1427863e0();
  FUN_1427864dc(0,0,local_98,&DAT_14c873210);
  if (*(longlong *)(param_2 + 0x360) == 0) {
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = 5;
    local_f8 = 1;
    uVar3 = FUN_141603f94(*param_2,0,0,0);
    FUN_14572aa80(param_2,uVar3);
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437608b0 FUN_1437608b0 body=1756 status=ok
// SIG undefined FUN_1437608b0(void)

void FUN_1437608b0(longlong *param_1,longlong param_2,float param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  undefined1 local_1a0 [104];
  undefined1 local_138 [104];
  undefined1 local_d0 [104];
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(char *)(param_2 + 0x88) == '\x01') &&
     (FUN_14378c02e(param_2 + 8), *(int *)(param_2 + 0xa0) != 0)) goto LAB_143760cd3;
  lVar3 = *(longlong *)(param_2 + 0x360);
  if (lVar3 == 0) {
    FUN_147d8162e(param_1,param_2);
    FUN_140056680(local_58,
                  L"UEngine::TickWorldTravel has no world after ticking seamless travel handler.");
    uVar6 = *(undefined8 *)(param_2 + 0x360);
    uVar8 = 10;
LAB_143760d3d:
    FUN_147d83bd2(param_1 + 0x1d6,uVar6,uVar8,local_58);
  }
  else {
    if (*(int *)(lVar3 + 0x768) < 2) {
LAB_143760944:
      iVar2 = *(int *)(param_2 + 0x150);
      if (iVar2 < 2) {
        if ((((int)param_1[0x228] != 0) &&
            (plVar5 = (longlong *)param_1[0x227], plVar5 != (longlong *)0x0)) &&
           (cVar1 = (**(code **)(*plVar5 + 0x60))(plVar5,param_2,param_3), cVar1 != '\0'))
        goto LAB_143760cd3;
        plVar5 = *(longlong **)(param_2 + 0x230);
        if (plVar5 == (longlong *)0x0) {
          if (*(char *)((longlong)param_1 + 0xd5c) == '\x06') {
            *(undefined1 *)((longlong)param_1 + 0xd5c) = 0;
          }
          goto LAB_143760cd3;
        }
        uVar10 = (**(code **)(*plVar5 + 0x2a0))(plVar5,param_3);
        lVar3 = *(longlong *)(param_2 + 0x230);
        if (lVar3 == 0) goto LAB_143760cd3;
        if (*(int *)(lVar3 + 0xb8) - 2U < 0x7fffffff) {
          local_1a8 = (longlong *)(lVar3 + 0xb0);
          FUN_147d87416(param_1 + 0x1d9,0,*(undefined8 *)(lVar3 + 0x30),8);
          (**(code **)(*param_1 + 0x4f8))(param_1,param_2);
LAB_143760dd5:
          plVar5 = *(longlong **)(param_2 + 0x230);
        }
        else {
          if (((*(char *)(lVar3 + 0xa8) != '\x01') || (*(char *)(lVar3 + 0xa9) != '\0')) ||
             (*(char *)(lVar3 + 0xaa) != '\0')) goto LAB_143760dd5;
          if (*(longlong **)(param_2 + 0x2a8) != (longlong *)0x0) {
            cVar1 = (**(code **)(**(longlong **)(param_2 + 0x2a8) + 0x3d0))();
            if (cVar1 != '\0') goto LAB_143760dd5;
            lVar3 = *(longlong *)(param_2 + 0x230);
            uVar10 = extraout_XMM0_Da;
          }
          if (*(char *)(lVar3 + 0xab) == '\x01') {
            FUN_147d8162e(param_1,param_2);
            FUN_140056680(local_58,L"Travel failed for unknown reason");
            FUN_147d83bd2(param_1 + 0x1d6,*(undefined8 *)(param_2 + 0x360),6,local_58);
LAB_143760a55:
            if (local_58[0] != 0) {
              FUN_1400020a8();
            }
            goto LAB_143760dd5;
          }
          cVar1 = FUN_14622a50c(uVar10,lVar3 + 0x68);
          if (cVar1 == '\0') {
            FUN_147d8162e(param_1,param_2);
            FUN_147d83bd2(param_1 + 0x1d6,*(undefined8 *)(param_2 + 0x360),3,
                          *(longlong *)(param_2 + 0x230) + 0x68);
            goto LAB_143760dd5;
          }
          plVar5 = *(longlong **)(param_2 + 0x230);
          if (*(char *)((longlong)plVar5 + 0xaa) == '\0') {
            local_58[0] = 0;
            local_58[1] = 0;
            FUN_145ad1184(local_1a0,plVar5 + 8);
            local_1a8 = local_58;
            uVar10 = (**(code **)(*param_1 + 0x4c8))(param_1,param_2,local_1a0,plVar5);
            plVar5 = *(longlong **)(param_2 + 0x230);
            if (plVar5 == (longlong *)0x0) {
              uVar10 = 6;
            }
            else {
              local_1a8 = local_58;
              cVar1 = (**(code **)(*plVar5 + 0x2b8))(plVar5,param_1,param_2,uVar10);
              if (cVar1 != '\0') goto LAB_143760a55;
              uVar10 = 1;
            }
            FUN_147d8162e(param_1,param_2);
            FUN_147d83bd2(param_1 + 0x1d6,*(undefined8 *)(param_2 + 0x360),uVar10,local_58);
            goto LAB_143760a55;
          }
        }
        if ((plVar5 == (longlong *)0x0) || (*(char *)((longlong)plVar5 + 0xaa) != '\x01'))
        goto LAB_143760cd3;
        if (*(longlong **)(param_2 + 0x2a8) != (longlong *)0x0) {
          cVar1 = (**(code **)(**(longlong **)(param_2 + 0x2a8) + 0x3d8))();
          if (cVar1 != '\0') goto LAB_143760cd3;
          plVar5 = *(longlong **)(param_2 + 0x230);
        }
        if (*(char *)((longlong)plVar5 + 0xab) == '\0') {
          (**(code **)(*plVar5 + 0x2c0))(plVar5,param_1,param_2);
          *(undefined8 *)(param_2 + 0x230) = 0;
          goto LAB_143760cd3;
        }
        (**(code **)(*param_1 + 0x4f8))(param_1,param_2);
        FUN_147d8162e(param_1,param_2);
        FUN_140056680(local_58,L"Travel failed for unknown reason");
        uVar6 = *(undefined8 *)(param_2 + 0x360);
        uVar8 = 1;
        goto LAB_143760d3d;
      }
      if (*(longlong **)(lVar3 + 0x170) == (longlong *)0x0) {
        pvVar9 = *(void **)(param_2 + 0x148);
LAB_143760b78:
        local_58[1] = 0;
        local_58[0] = 0;
        local_68 = (undefined2 *)0x0;
        local_60 = iVar2;
        FUN_1446dd670(&local_68,iVar2,0);
        memcpy(local_68,pvVar9,(longlong)iVar2 * 2);
        puVar7 = local_68;
        if (local_60 == 0) goto LAB_143760baf;
      }
      else {
        (**(code **)(**(longlong **)(lVar3 + 0x170) + 0x740))();
        iVar2 = *(int *)(param_2 + 0x150);
        local_58[0] = 0;
        local_58[1] = 0;
        local_68 = (undefined2 *)0x0;
        pvVar9 = *(void **)(param_2 + 0x148);
        if (iVar2 != 0) goto LAB_143760b78;
        local_5c = 0;
        local_60 = iVar2;
LAB_143760baf:
        puVar7 = &DAT_149dfb77a;
      }
      FUN_140245d8a(local_138,param_2 + 0x160,puVar7,*(undefined1 *)(param_2 + 0x158));
      iVar2 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2,local_138,local_58);
      if (iVar2 == 1) {
        lVar3 = *(longlong *)(param_2 + 0x360);
        if (lVar3 == 0) {
          FUN_147d8162e(param_1,param_2);
          lVar3 = *(longlong *)(param_2 + 0x360);
        }
        uVar6 = 0xb;
LAB_143760d98:
        FUN_147d83bd2(param_1 + 0x1d6,lVar3,uVar6,local_58);
      }
    }
    else {
      *(float *)(lVar3 + 0x740) = *(float *)(lVar3 + 0x740) - param_3;
      lVar3 = *(longlong *)(param_2 + 0x360);
      if (0.0 < *(float *)(lVar3 + 0x740)) goto LAB_143760944;
      if (*(longlong **)(lVar3 + 0x170) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar3 + 0x170) + 0x740))();
        lVar3 = *(longlong *)(param_2 + 0x360);
      }
      local_58[0] = 0;
      local_58[1] = 0;
      local_68 = (undefined2 *)0x0;
      local_60 = *(int *)(lVar3 + 0x768);
      lVar4 = (longlong)local_60;
      pvVar9 = *(void **)(lVar3 + 0x760);
      if (lVar4 == 0) {
        local_5c = 0;
        puVar7 = &DAT_149dfb77a;
      }
      else {
        FUN_1446dd670(&local_68,local_60,0);
        memcpy(local_68,pvVar9,lVar4 * 2);
        puVar7 = local_68;
        if (local_60 == 0) {
          puVar7 = &DAT_149dfb77a;
        }
        lVar3 = *(longlong *)(param_2 + 0x360);
      }
      FUN_140245d8a(local_d0,param_2 + 0x160,puVar7,*(undefined1 *)(lVar3 + 0x759));
      iVar2 = (**(code **)(*param_1 + 0x4b8))(param_1,param_2,local_d0,local_58);
      if (iVar2 != 0) {
        if (*(longlong *)(param_2 + 0x360) == 0) {
          FUN_147d8162e(param_1,param_2);
        }
        else {
          FUN_14020fad6(*(longlong *)(param_2 + 0x360) + 0x760,&DAT_149dfb77a);
        }
        lVar3 = *(longlong *)(param_2 + 0x360);
        uVar6 = 10;
        goto LAB_143760d98;
      }
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_143760cd3:
  if ((local_40 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143760f8e FUN_143760f8e body=6990 status=ok
// SIG undefined FUN_143760f8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_143760f8e(longlong *param_1,byte *param_2,longlong *param_3,longlong param_4,
                       LARGE_INTEGER *param_5)

{
  byte *pbVar1;
  uint uVar2;
  void *pvVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  uint *puVar15;
  LARGE_INTEGER LVar16;
  LARGE_INTEGER LVar17;
  undefined4 *puVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  LARGE_INTEGER *pLVar21;
  ushort uVar22;
  ulonglong uVar23;
  code *pcVar24;
  longlong *plVar25;
  longlong lVar26;
  uint uVar27;
  undefined2 *puVar28;
  ushort uVar29;
  longlong lVar30;
  longlong lVar31;
  undefined2 *puVar32;
  bool bVar33;
  undefined4 uVar34;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  LARGE_INTEGER *local_1e8;
  longlong *local_1e0;
  longlong *local_1d8;
  int *local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  LARGE_INTEGER local_1b8;
  LARGE_INTEGER LStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_168;
  LARGE_INTEGER local_160 [2];
  ushort local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  undefined1 local_120 [104];
  undefined8 local_b8;
  undefined8 uStack_b0;
  LARGE_INTEGER local_a0;
  DWORD local_98;
  undefined4 local_94;
  void *local_90;
  int local_88;
  undefined4 local_84;
  undefined1 local_79;
  LARGE_INTEGER *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_218;
  pLVar21 = (LARGE_INTEGER *)(param_3 + 5);
  if ((int)param_3[6] == 0) {
    puVar28 = &DAT_149dfb77a;
  }
  else {
    puVar28 = (undefined2 *)pLVar21->QuadPart;
  }
  local_1e0 = param_1;
  FUN_14089e62a(&local_79,L"Loading Map %s",puVar28);
  local_90 = (void *)0x0;
  local_88 = (int)param_3[6];
  lVar30 = (longlong)local_88;
  pvVar3 = (void *)param_3[5];
  if (lVar30 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_88,0);
    memcpy(local_90,pvVar3,lVar30 * 2);
  }
  FUN_14094a6a4(&local_1b8,pLVar21,0);
  if (pLVar21 == &local_1b8) {
    if ((code *)local_1b8.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_3[5] != 0) {
      FUN_1400020a8();
    }
    ((LARGE_INTEGER *)(param_3 + 5))->QuadPart = (LONGLONG)local_1b8;
    local_1b8.QuadPart = 0;
    *(undefined4 *)(param_3 + 6) = LStack_1b0._0_4_;
    *(undefined4 *)((longlong)param_3 + 0x34) = LStack_1b0._4_4_;
  }
  FUN_1402cfa70();
  if ((param_4 != 0) && (*(char *)(param_4 + 0xc0) == '\x01')) {
    if (*(longlong *)(param_2 + 0x360) == 0) {
      puVar28 = &DAT_149dfb77a;
      if ((int)param_3[6] != 0) {
        puVar28 = (undefined2 *)pLVar21->QuadPart;
      }
      puVar32 = &DAT_149dfb77a;
      if (_DAT_000005e8 != 0) {
        puVar32 = _DAT_000005e0;
      }
      FUN_140002266(&local_1b8,L"Seamless net transition failed due to misssing world",puVar32,
                    puVar28);
      if (&local_1b8 == param_5) {
        if ((code *)local_1b8.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_5->QuadPart != 0) {
          FUN_1400020a8();
        }
        param_5->QuadPart = (LONGLONG)local_1b8;
        local_1b8.QuadPart = 0;
        param_5[1].s.LowPart = LStack_1b0._0_4_;
        *(undefined4 *)((longlong)param_5 + 0xc) = LStack_1b0._4_4_;
      }
      uVar20 = 0;
      goto LAB_1437613b0;
    }
    FUN_14094a6a4(&local_1b8,*(longlong *)(param_2 + 0x360) + 0x5e0,0);
    DVar10 = *(DWORD *)(param_3 + 6);
    if (LStack_1b0._0_4_ == DVar10) {
      if (1 < (int)LStack_1b0._0_4_) {
        lVar30 = 0;
        while( true ) {
          uVar29 = *(ushort *)(local_1b8.QuadPart + lVar30);
          uVar20 = (ulonglong)uVar29;
          uVar22 = *(ushort *)(pLVar21->QuadPart + lVar30);
          if (uVar29 != uVar22) break;
          if (uVar29 == 0) goto LAB_143761163;
LAB_143761136:
          lVar30 = lVar30 + 2;
        }
        if ((uVar22 | uVar29) < 0x80) {
          uVar29 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
          uVar23 = (ulonglong)uVar22;
          uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
          if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar23]) goto LAB_143761136;
        }
        if (uVar29 != uVar22) goto LAB_14376123b;
      }
LAB_143761163:
      FUN_14640a5b8(DVar10,param_2);
      FUN_14378bda4(param_2 + 8);
      (**(code **)(*local_1e0 + 0x540))(local_1e0,param_2);
      iVar9 = FUN_14490d72a(*(undefined8 *)(param_2 + 0x360));
      if (iVar9 == 3) {
        FUN_1405f35b2(param_2 + 0x1c8,param_3);
      }
      FUN_14107e8f0(&DAT_14c9647a0,*(undefined8 *)(param_2 + 0x360));
      uVar20 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
    }
    else {
      if (DVar10 + LStack_1b0._0_4_ == 1) goto LAB_143761163;
LAB_14376123b:
      puVar28 = &DAT_149dfb77a;
      if (DVar10 != 0) {
        puVar28 = (undefined2 *)pLVar21->QuadPart;
      }
      LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
      if (LStack_1b0._0_4_ != 0) {
        LVar16 = local_1b8;
      }
      FUN_140002266(&local_a0,
                    L"Seamless net transition failed due to map mismatch - Local: %ls  Server: %ls",
                    LVar16.QuadPart,puVar28);
      if (&local_a0 == param_5) {
        if ((LARGE_INTEGER *)local_a0.QuadPart != (LARGE_INTEGER *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_5->QuadPart != 0) {
          FUN_1400020a8();
        }
        param_5->QuadPart = (LONGLONG)local_a0;
        local_a0.QuadPart = 0;
        param_5[1].s.LowPart = local_98;
        *(undefined4 *)((longlong)param_5 + 0xc) = local_94;
      }
      uVar20 = 0;
    }
    if ((code *)local_1b8.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1437613b0;
  }
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)*DAT_14c99f930)();
  }
  FUN_14020fad6(param_5,&DAT_149dfb77a);
  FUN_14626c60c();
  if (*(longlong *)(param_2 + 0x360) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_2 + 0x360) + 0x153);
    *pbVar1 = *pbVar1 & 0x7f;
  }
  FUN_147d87620(param_2,pLVar21);
  FUN_1411f311e(&DAT_14c964278,pLVar21);
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)(*DAT_14c99f930 + 8))();
  }
  FUN_141470c1e();
  *(byte *)((longlong)local_1e0 + 0x111c) = *(byte *)((longlong)local_1e0 + 0x111c) & 0xfe;
  if ((*(longlong *)(param_2 + 0x360) != 0) &&
     (lVar30 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x30), lVar30 != 0)) {
LAB_14376135b:
    lVar26 = lVar30;
    lVar30 = lVar26;
    if (*(longlong *)(lVar26 + 0x20) != 0) goto code_r0x00014376136a;
    goto LAB_14376137d;
  }
  goto LAB_1437614b2;
code_r0x000143761f5e:
  LVar16.QuadPart = ((LARGE_INTEGER *)(LVar17.QuadPart + 0x20))->QuadPart;
  if (((((LARGE_INTEGER *)(LVar17.QuadPart + 8))->s).LowPart >> 0x1c & 1) == 0) goto LAB_143761f4f;
  LVar16.QuadPart = FUN_142840154(LVar17.QuadPart);
LAB_143761f74:
  if ((LARGE_INTEGER *)LVar16.QuadPart == (LARGE_INTEGER *)0x0) {
    LVar16.QuadPart = ((LARGE_INTEGER *)(LVar17.QuadPart + 0x20))->QuadPart;
    goto LAB_143761f4f;
  }
  bVar33 = true;
  local_128 = LVar16;
  if ((LARGE_INTEGER *)local_130.QuadPart != (LARGE_INTEGER *)0x0) goto LAB_143761eca;
  goto LAB_143761f9c;
code_r0x00014376136a:
  lVar30 = *(longlong *)(lVar26 + 0x20);
  if ((*(uint *)(lVar26 + 8) >> 0x1c & 1) == 0) goto LAB_14376135b;
  lVar30 = FUN_142840154(lVar26);
LAB_14376137d:
  if (lVar30 == 0) {
    lVar30 = *(longlong *)(lVar26 + 0x20);
    goto LAB_14376135b;
  }
  local_a0 = *(LARGE_INTEGER *)(lVar30 + 0x18);
  FUN_1400021e4(&local_a0,&local_1b8);
  FUN_147d817ae(param_2,0,&local_1b8);
  if ((code *)local_1b8.QuadPart != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1437614b2:
  FUN_140056680(&local_1b8,&DAT_149dfb77a);
  FUN_147d817ae(param_2,1,&local_1b8);
  if ((code *)local_1b8.QuadPart != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1b8,&DAT_149dfb77a);
  FUN_147d817ae(param_2,2,&local_1b8);
  if ((code *)local_1b8.QuadPart != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(&local_1b8,&DAT_149dfb77a);
  uVar34 = FUN_147d817ae(param_2,4,&local_1b8);
  if ((code *)local_1b8.QuadPart != (code *)0x0) {
    uVar34 = FUN_1400020a8();
  }
  DAT_14c947e18 = DAT_14c947e18 + 1;
  if (DAT_14c948aa0 != (longlong *)0x0) {
    local_1b8.QuadPart = 0;
    LStack_1b0.QuadPart = LStack_1b0.QuadPart & 0xffffffff00000000;
    uVar34 = (**(code **)(*DAT_14c948aa0 + 0x60))();
  }
  DAT_14c947e18 = DAT_14c947e18 + -1;
  FUN_14640a5b8(uVar34,param_2);
  FUN_14378bda4(param_2 + 8);
  QueryPerformanceCounter(&local_1b8);
  dVar4 = (double)local_1b8.QuadPart * DAT_14c83f420;
  local_1e8 = pLVar21;
  if (*(longlong *)(param_2 + 0x360) != 0) {
    FUN_143769ecc(&DAT_14cb108b0,0);
    *(byte *)(*(longlong *)(param_2 + 0x360) + 0x155) =
         *(byte *)(*(longlong *)(param_2 + 0x360) + 0x155) | 0x20;
    FUN_1409f3758(&DAT_14cb10ae8);
    lVar30 = FUN_14045d4ce(param_3,L"quiet",0);
    plVar13 = local_1e0;
    if (lVar30 == 0) {
      *(undefined1 *)((longlong)local_1e0 + 0xd5c) = 2;
      iVar9 = (int)param_3[6] + -1;
      if ((int)param_3[6] == 0) {
        iVar9 = 0;
      }
      FUN_1402980a2(local_1e0 + 0x1ac,param_3[5],iVar9);
      lVar30 = FUN_14045d4ce(param_3,L"Game=",0);
      if (lVar30 == 0) {
        puVar28 = &DAT_149dfb77a;
      }
      else {
        puVar28 = (undefined2 *)FUN_14045d4ce(param_3,L"Game=",&DAT_149dfb77a);
      }
      FUN_14020fad6(plVar13 + 0x1ae,puVar28);
      if ((DAT_14c867b48 == (longlong *)0x0 || DAT_14c867b50 == 0) ||
         (cVar6 = (**(code **)(*DAT_14c867b48 + 0x30))(), cVar6 == '\0')) {
        cVar6 = '\0';
      }
      else {
        plVar13 = DAT_14c867b48;
        if (DAT_14c867b50 == 0) {
          plVar13 = (longlong *)0x0;
        }
        cVar6 = (**(code **)(*plVar13 + 0x58))();
      }
      if (((DAT_14cb0d2b0 == (longlong *)0x0) ||
          ((longlong *)DAT_14cb0d2b0[0x1fc] == (longlong *)0x0)) ||
         (plVar13 = (longlong *)(**(code **)(*(longlong *)DAT_14cb0d2b0[0x1fc] + 0x148))(),
         plVar13 == (longlong *)0x0)) {
        cVar7 = '\0';
      }
      else {
        cVar7 = (**(code **)(*plVar13 + 0x30))(plVar13);
      }
      plVar13 = local_1e0;
      if (cVar6 == '\0' && cVar7 == '\0') {
        (**(code **)(*local_1e0 + 0x4e0))(local_1e0);
      }
      *(undefined1 *)((longlong)plVar13 + 0xd5c) = 0;
      pLVar21 = local_1e8;
    }
    FUN_14375e010(local_1e0,*(undefined8 *)(param_2 + 0x360));
    *(byte *)(*(longlong *)(param_2 + 0x360) + 0x153) =
         *(byte *)(*(longlong *)(param_2 + 0x360) + 0x153) & 0x7f;
    lVar30 = *(longlong *)(param_2 + 0x360);
    if ((*(byte *)(lVar30 + 0x156) & 0x40) == 0) {
      *(byte *)(lVar30 + 0x156) = *(byte *)(lVar30 + 0x156) | 0x40;
      FUN_1414451e4();
      lVar30 = *(longlong *)(param_2 + 0x360);
    }
    FUN_143786ce4(lVar30,2);
    FUN_143769ecc(&DAT_14cb10a90,0,*(undefined8 *)(param_2 + 0x360));
    lVar30 = *(longlong *)(param_2 + 0x2a8);
    if ((lVar30 != 0) && (0 < *(int *)(lVar30 + 0x40))) {
      lVar26 = 0;
      do {
        plVar13 = *(longlong **)(*(longlong *)(lVar30 + 0x38) + lVar26 * 8);
        if (plVar13[6] != 0) {
          lVar14 = FUN_1447210f0();
          lVar31 = *(longlong *)(param_2 + 0x360);
          if (lVar14 == lVar31) {
            lVar14 = plVar13[6];
            if (*(longlong *)(lVar14 + 0x3d0) != 0) {
              FUN_1412f3774(lVar31,*(longlong *)(lVar14 + 0x3d0),1,1);
              lVar31 = *(longlong *)(param_2 + 0x360);
              lVar14 = plVar13[6];
            }
            FUN_1412f3774(lVar31,lVar14,1,1);
            plVar13[6] = 0;
          }
        }
        *(byte *)(plVar13 + 0x19) = *(byte *)(plVar13 + 0x19) & 0xfe;
        local_b8 = 0;
        uStack_b0 = 0;
        (**(code **)(*plVar13 + 0x360))(plVar13,&local_b8);
        lVar26 = lVar26 + 1;
      } while ((int)lVar26 < *(int *)(lVar30 + 0x40));
    }
    FUN_1417f9a7e(*(undefined8 *)(param_2 + 0x360),1);
    FUN_140e511ae(*(undefined8 *)(param_2 + 0x360),1,1,0);
    if (DAT_14cb0d2b0 != (longlong *)0x0) {
      if (DAT_14cb0d2b0[0x184] != 0) {
        FUN_147d81978(local_1e0);
      }
      (**(code **)(*DAT_14cb0d2b0 + 0x2a8))(DAT_14cb0d2b0,*(undefined8 *)(param_2 + 0x360));
    }
    uVar2 = *(uint *)(*(longlong *)(param_2 + 0x360) + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar30 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar30 = 0;
    }
    FUN_14482b126(lVar30,0x40000000);
    lVar30 = *(longlong *)(param_2 + 0x360);
    iVar9 = *(int *)(lVar30 + 0x198);
    if (0 < iVar9) {
      lVar26 = 0;
      do {
        lVar31 = *(longlong *)(*(longlong *)(lVar30 + 400) + lVar26 * 8);
        if (lVar31 != 0) {
          FUN_14640e252(*(undefined8 *)(lVar31 + 0x20));
          iVar9 = *(int *)(lVar30 + 0x198);
        }
        lVar26 = lVar26 + 1;
      } while ((int)lVar26 < iVar9);
      lVar30 = *(longlong *)(param_2 + 0x360);
    }
    iVar9 = *(int *)(lVar30 + 0x90);
    if ((longlong)iVar9 != 0) {
      lVar30 = *(longlong *)(lVar30 + 0x88);
      lVar26 = 0;
      do {
        plVar13 = *(longlong **)(lVar30 + lVar26);
        if ((plVar13[0x2f] != 0) &&
           ((cVar6 = (**(code **)(*plVar13 + 0x2d8))(plVar13), cVar6 == '\0' ||
            (cVar6 = (**(code **)(*plVar13 + 0x2e0))(plVar13), cVar6 == '\0')))) {
          FUN_14640e252(*(undefined8 *)(plVar13[0x2f] + 0x20));
        }
        lVar26 = lVar26 + 8;
      } while ((longlong)iVar9 * 8 != lVar26);
      lVar30 = *(longlong *)(param_2 + 0x360);
      pLVar21 = local_1e8;
    }
    lVar26 = *(longlong *)(lVar30 + 0x1d8);
    if ((lVar26 != 0) ||
       ((((DAT_14cb0d2b0 != (longlong *)0x0 && (DAT_14cb0d2b0[0x1ea] != 0)) &&
         (DAT_14cb0d2b0[0x1ec] != 0)) &&
        (lVar26 = *(longlong *)(DAT_14cb0d2b0[0x1ea] + 0x98), lVar26 != 0)))) {
      FUN_1433ff8e6(lVar26,lVar30,1);
      FUN_1434080aa(lVar26,0x3f800000);
    }
    FUN_14572aa80(param_2,0);
  }
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)(*DAT_14c99f930 + 8))();
  }
  if (DAT_14cb0cb90 == 0) {
    FUN_143762ade();
  }
  if (1 < DAT_14cad39b0 + 1U) {
    plVar13 = (longlong *)FUN_140083894();
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  if (DAT_14cb0cb90 == 0) {
    (**(code **)(*local_1e0 + 0x510))(local_1e0,param_2);
  }
  if (DAT_14c99f930 != (longlong *)0x0) {
    (**(code **)(*DAT_14c99f930 + 8))();
  }
  plVar13 = *(longlong **)(param_2 + 0x2a8);
  local_1d8 = param_3;
  FUN_145ad1184(local_120,param_3);
  (**(code **)(*plVar13 + 0x3a8))(plVar13,local_120);
  local_128.QuadPart = 0;
  local_130.QuadPart = 0;
  LVar16.QuadPart = local_130.QuadPart;
  if ((1 < *(int *)(param_2 + 0x2d0)) && (lVar30 = local_1e0[0x22a], (longlong)(int)lVar30 != 0)) {
    lVar26 = local_1e0[0x229];
    local_1d0 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    lVar31 = 0;
    LVar16.QuadPart = 0;
    pcVar24 = wcslen_exref;
    do {
      lVar14 = *(longlong *)(lVar26 + lVar31);
      if (((*(longlong *)(lVar14 + 0x360) != *(longlong *)(param_2 + 0x360)) &&
          (1 < *(int *)(lVar14 + 0x2d0))) && (lVar14 = *(longlong *)(lVar14 + 0x2c8), lVar14 != 0))
      {
        uVar34 = (*pcVar24)(lVar14);
        local_1f0 = 0xffffffff;
        local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffff00000000);
        iVar9 = FUN_1447ee042(&local_90,lVar14,uVar34,1);
        if (iVar9 != -1) {
          local_1b8.QuadPart = 0;
          uVar2 = *(uint *)(local_1d8 + 6);
          pvVar3 = (void *)local_1d8[5];
          LStack_1b0.s.LowPart = uVar2;
          if ((longlong)(int)uVar2 == 0) {
            LStack_1b0.s.HighPart = 0;
          }
          else {
            FUN_1446dd670(&local_1b8,uVar2,0);
            memcpy((void *)local_1b8,pvVar3,(longlong)(int)uVar2 * 2);
          }
          uVar34 = *(undefined4 *)(param_2 + 0x2c0);
          cVar6 = (*(code *)PTR_FUN_14c758760)();
          bVar33 = true;
          if ((DAT_14c86a9f8 == '\x01') && (*local_1d0 != 2)) {
            if (*local_1d0 == 1) {
              DVar10 = FUN_140ad26c0();
              DVar11 = GetCurrentThreadId();
              bVar33 = DVar10 == DVar11;
              goto LAB_143761cb0;
            }
            puVar18 = &DAT_14c7590bc;
            if (cVar6 != '\0') goto LAB_143761bba;
          }
          else {
LAB_143761cb0:
            if (cVar6 == '\0') {
              puVar18 = &DAT_14c7590b4;
              if (!bVar33) goto LAB_143761bbc;
            }
            else {
              puVar18 = &DAT_14c7590bc;
              if (bVar33) {
                puVar18 = &DAT_14c7590b8;
              }
            }
LAB_143761bba:
            *puVar18 = uVar34;
          }
LAB_143761bbc:
          FUN_1468b5474();
          LVar16.QuadPart = FUN_143763486(param_2,&local_1b8,&local_128);
          if ((LARGE_INTEGER *)LVar16.QuadPart == (LARGE_INTEGER *)0x0) {
            LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
            if (LStack_1b0._0_4_ != 0) {
              LVar16 = local_1b8;
            }
            FUN_140002266(&local_a0,L"Failed to load package \'%s\' while in PIE",LVar16.QuadPart);
            param_3 = local_1d8;
            pLVar21 = local_1e8;
            if (&local_a0 == param_5) {
              if ((LARGE_INTEGER *)local_a0.QuadPart != (LARGE_INTEGER *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (param_5->QuadPart != 0) {
                FUN_1400020a8();
              }
              param_5->QuadPart = (LONGLONG)local_a0;
              local_a0.QuadPart = 0;
              param_5[1].s.LowPart = local_98;
              *(undefined4 *)((longlong)param_5 + 0xc) = local_94;
            }
            if ((code *)local_1b8.QuadPart != (code *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_14376210d;
          }
          FUN_140002266(&local_a0,L"%s_%d_",&DAT_14a8eb0f8,*(undefined4 *)(param_2 + 0x2c0));
          pcVar24 = wcslen_exref;
          if ((LARGE_INTEGER *)(LVar16.QuadPart + 200) == &local_a0) {
            if ((LARGE_INTEGER *)local_a0.QuadPart != (LARGE_INTEGER *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if ((LARGE_INTEGER *)((LARGE_INTEGER *)(LVar16.QuadPart + 200))->QuadPart !=
                (LARGE_INTEGER *)0x0) {
              FUN_1400020a8();
            }
            ((LARGE_INTEGER *)(LVar16.QuadPart + 200))->QuadPart = (LONGLONG)local_a0;
            local_a0.QuadPart = 0;
            (((LARGE_INTEGER *)(LVar16.QuadPart + 0xd0))->s).LowPart = local_98;
            *(undefined4 *)(LVar16.QuadPart + 0xd4) = local_94;
          }
          DAT_14c872a71 = 1;
          if ((code *)local_1b8.QuadPart != (code *)0x0) {
            FUN_1400020a8();
          }
        }
      }
      lVar31 = lVar31 + 8;
      pLVar21 = local_1e8;
    } while ((longlong)(int)lVar30 * 8 != lVar31);
  }
  local_130 = LVar16;
  param_3 = local_1d8;
  if (*param_2 == 6) {
    if ((int)local_1d8[6] == 0) {
      puVar28 = &DAT_149dfb77a;
    }
    else {
      puVar28 = (undefined2 *)pLVar21->QuadPart;
    }
    FUN_1446f470e(&local_138,puVar28,1);
    FUN_147aa53ca(local_138,&local_128,&local_130);
  }
  local_a0.QuadPart = 0;
  local_98 = *(DWORD *)(param_3 + 6);
  lVar30 = (longlong)(int)local_98;
  pvVar3 = (void *)param_3[5];
  if (lVar30 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,local_98,0);
    memcpy((void *)local_a0,pvVar3,lVar30 * 2);
  }
  pLVar21 = local_1e8;
  LVar16 = local_130;
  if ((LARGE_INTEGER *)local_130.QuadPart != (LARGE_INTEGER *)0x0) goto LAB_143762188;
  puVar32 = &DAT_149dfb77a;
  puVar28 = &DAT_149dfb77a;
  if ((int)param_3[6] != 0) {
    puVar28 = (undefined2 *)local_1e8->QuadPart;
  }
  FUN_1446f470e(&local_140,puVar28,1);
  bVar8 = *param_2;
  uVar2 = (uint)((ulonglong)local_140 >> 0x10);
  uVar27 = (uint)local_140 & 0xffff;
  puVar15 = (uint *)FUN_140b19d32(&DAT_14cb108c8,
                                  ((uint)local_140 << 0x10 | uVar27) +
                                  (int)((ulonglong)local_140 >> 0x20) +
                                  (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar27 >> 4),&local_140);
  *puVar15 = (uint)bVar8;
  if ((int)param_3[6] != 0) {
    puVar32 = (undefined2 *)pLVar21->QuadPart;
  }
  LVar16.QuadPart = FUN_140277851(0,puVar32);
  bVar33 = (LARGE_INTEGER *)LVar16.QuadPart != (LARGE_INTEGER *)0x0;
  local_128.QuadPart = LVar16.QuadPart;
  if ((LARGE_INTEGER *)LVar16.QuadPart == (LARGE_INTEGER *)0x0) {
    if ((int)param_3[6] == 0) {
      puVar28 = &DAT_149dfb77a;
    }
    else {
      puVar28 = (undefined2 *)pLVar21->QuadPart;
    }
    local_1f8 = (undefined8 *)0x0;
    LVar16.QuadPart = FUN_1402791b4(0,puVar28,(ulonglong)(*param_2 == 3) << 0x13,0);
    local_128.QuadPart = LVar16.QuadPart;
    FUN_14070f0e8(&DAT_14cb108c8,local_140);
    if ((LARGE_INTEGER *)LVar16.QuadPart != (LARGE_INTEGER *)0x0) goto LAB_143761e73;
    if ((int)param_3[6] == 0) {
      puVar28 = &DAT_149dfb77a;
    }
    else {
      puVar28 = (undefined2 *)pLVar21->QuadPart;
    }
    FUN_140002266(&local_1b8,L"Failed to load package \'%s\'",puVar28);
    if (&local_1b8 != param_5) goto LAB_143762072;
LAB_1437620df:
    if ((code *)local_1b8.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
LAB_1437620ee:
    bVar33 = false;
  }
  else {
    FUN_14070f0e8(&DAT_14cb108c8,local_140);
LAB_143761e73:
    local_78 = local_160;
    local_160[0].QuadPart = 0;
    LStack_1b0.QuadPart = (LONGLONG)&local_78;
    local_1b8.QuadPart = (LONGLONG)FUN_143794c14;
    local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffff00000000);
    FUN_144a56f9f(LVar16.QuadPart,&local_1b8,0,0);
    local_130.s = local_160[0].s;
    if ((LARGE_INTEGER *)local_160[0].QuadPart == (LARGE_INTEGER *)0x0) {
      local_130.QuadPart = FUN_147dab1b4(LVar16.QuadPart,0);
      LVar16.QuadPart = local_130.QuadPart;
      if ((LARGE_INTEGER *)local_130.QuadPart != (LARGE_INTEGER *)0x0) {
LAB_143761f4f:
        LVar17 = LVar16;
        LVar16 = LVar17;
        if ((LARGE_INTEGER *)((LARGE_INTEGER *)(LVar17.QuadPart + 0x20))->QuadPart !=
            (LARGE_INTEGER *)0x0) goto code_r0x000143761f5e;
        goto LAB_143761f74;
      }
LAB_143761f9c:
      if ((int)param_3[6] == 0) {
        puVar28 = &DAT_149dfb77a;
      }
      else {
        puVar28 = (undefined2 *)local_1e8->QuadPart;
      }
      pwVar19 = L"Failed to load package \'%s\'";
LAB_143762065:
      pLVar21 = local_1e8;
      FUN_140002266(&local_1b8,pwVar19,puVar28);
      if (&local_1b8 == param_5) goto LAB_1437620df;
LAB_143762072:
      if (param_5->QuadPart != 0) {
        FUN_1400020a8();
      }
      param_5->QuadPart = (LONGLONG)local_1b8;
      local_1b8.QuadPart = 0;
      param_5[1].s.LowPart = LStack_1b0._0_4_;
      *(undefined4 *)((longlong)param_5 + 0xc) = LStack_1b0._4_4_;
      goto LAB_1437620ee;
    }
LAB_143761eca:
    LVar16 = local_130;
    FUN_14356787a(((LARGE_INTEGER *)(local_130.QuadPart + 0x30))->QuadPart);
    plVar13 = local_1e0;
    if (*param_2 == 1) {
      if ((((*(byte *)(LVar16.QuadPart + 0x153) & 0x40) != 0) && (*(int *)(param_2 + 0x2c0) != -1))
         && (LVar16.QuadPart = FUN_143763486(param_2,local_1e8,&local_128),
            local_130.QuadPart = LVar16.QuadPart,
            (LARGE_INTEGER *)LVar16.QuadPart == (LARGE_INTEGER *)0x0)) {
        if ((int)param_3[6] == 0) {
          puVar28 = &DAT_149dfb77a;
        }
        else {
          puVar28 = (undefined2 *)local_1e8->QuadPart;
        }
        pwVar19 = L"Failed to load package \'%s\' into a new game world.";
        goto LAB_143762065;
      }
    }
    else if (*param_2 == 3) {
      if ((bVar33) || (*(char *)(LVar16.QuadPart + 0x152) == '\x02')) {
        if (*(int *)(param_2 + 0x2c0) == -1) {
          param_2[0x2c0] = 0;
          param_2[0x2c1] = 0;
          param_2[0x2c2] = 0;
          param_2[0x2c3] = 0;
        }
        LVar16.QuadPart =
             (**(code **)(*local_1e0 + 0x408))(local_1e0,param_2,LVar16.QuadPart,local_1e8);
        DAT_14c872a71 = 1;
        local_130.QuadPart = LVar16.QuadPart;
      }
      (**(code **)(*plVar13 + 0x3e0))(plVar13,LVar16.QuadPart);
      LVar16 = local_130;
    }
LAB_143762188:
    pLVar21 = *(LARGE_INTEGER **)(param_2 + 0x2a8);
    if ((pLVar21 != (LARGE_INTEGER *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(pLVar21);
    }
    ((LARGE_INTEGER *)(LVar16.QuadPart + 0x1f0))->QuadPart = (LONGLONG)pLVar21;
    DAT_14cb10918 = LVar16;
    FUN_14572aa80(param_2,LVar16.QuadPart);
    plVar13 = local_1e0;
    pLVar21 = local_1e8;
    bVar8 = *param_2;
    *(byte *)(*(longlong *)(param_2 + 0x360) + 0x152) = bVar8;
    if (bVar8 == 3) {
      FUN_14472eae2(*(longlong *)(param_2 + 0x360),2);
      plVar13 = local_1e0;
      (**(code **)(*local_1e0 + 0x410))(local_1e0,*(undefined8 *)(param_2 + 0x360));
      pLVar21 = local_1e8;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(param_2 + 0x360) + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar30 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar30 = 0;
      }
      FUN_1447f71cc(lVar30,0x40000000);
      lVar30 = *(longlong *)(param_2 + 0x360);
      if ((*(byte *)(lVar30 + 0x153) & 0x40) == 0) {
        local_150 = 0x167f;
        if ((*(longlong *)(lVar30 + 0x30) != 0) &&
           (plVar25 = *(longlong **)(*(longlong *)(lVar30 + 0x30) + 0x2b0),
           plVar25 != (longlong *)0x0)) {
          bVar8 = (**(code **)(*plVar25 + 0x6a0))(plVar25);
          local_150 = (ushort)bVar8 << 0xe | 0x167f;
          lVar30 = *(longlong *)(param_2 + 0x360);
        }
        local_148 = 0;
        FUN_14572bbfc(lVar30);
      }
    }
    if (param_4 != 0) {
      (**(code **)(*plVar13 + 0x540))(plVar13,param_2);
    }
    FUN_1437893fe(*(undefined8 *)(param_2 + 0x360),param_3);
    lVar30 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x1d8);
    if (((lVar30 != 0) ||
        ((((DAT_14cb0d2b0 != (longlong *)0x0 && (DAT_14cb0d2b0[0x1ea] != 0)) &&
          (DAT_14cb0d2b0[0x1ec] != 0)) &&
         (lVar30 = *(longlong *)(DAT_14cb0d2b0[0x1ea] + 0x98), lVar30 != 0)))) &&
       ((lVar26 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x30), lVar26 != 0 &&
        (lVar26 = *(longlong *)(lVar26 + 0x2b0), lVar26 != 0)))) {
      FUN_1434000f0(lVar30,*(undefined8 *)(lVar26 + 0x4c0));
    }
    if ((param_4 == 0) &&
       ((DAT_14c86a9f0 != '\x01' || (lVar30 = FUN_14045d4ce(param_3,L"Listen",0), lVar30 != 0)))) {
      FUN_1416a341a(*(undefined8 *)(param_2 + 0x360),param_3);
    }
    puVar28 = &DAT_149dfb77a;
    lVar30 = FUN_14045d4ce(param_3,L"Mutator=",&DAT_149dfb77a);
    if (lVar30 != 0) {
      local_1b8.QuadPart = 0;
      LStack_1b0.QuadPart = 0;
      FUN_140056680(local_160,lVar30);
      FUN_1403de9f2(local_160,&local_1b8,&DAT_149e06196,1);
      if ((LARGE_INTEGER *)local_160[0].QuadPart != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
      if (0 < (int)LStack_1b0._0_4_) {
        lVar30 = 0;
        lVar26 = 0;
        do {
          FUN_1437636c2(plVar13,*(undefined8 *)(param_2 + 0x360),4,
                        (code *)(local_1b8.QuadPart + lVar30));
          lVar26 = lVar26 + 1;
          lVar30 = lVar30 + 0x10;
        } while (lVar26 < (int)LStack_1b0._0_4_);
      }
      FUN_1447a1747(local_1b8.QuadPart);
      if ((code *)local_1b8.QuadPart != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    if (DAT_14cb05368 != 0) {
      FUN_1436a64c8();
    }
    plVar25 = (longlong *)(*(longlong *)(param_2 + 0x360) + 0x30);
    do {
      lVar30 = *plVar25;
      do {
        lVar26 = lVar30;
        lVar30 = lVar26;
        if (*(longlong *)(lVar26 + 0x20) == 0) goto LAB_143762438;
        lVar30 = *(longlong *)(lVar26 + 0x20);
      } while ((*(uint *)(lVar26 + 8) >> 0x1c & 1) == 0);
      lVar30 = FUN_142840154(lVar26);
LAB_143762438:
      plVar25 = (longlong *)(lVar26 + 0x20);
    } while (lVar30 == 0);
    local_160[0] = *(LARGE_INTEGER *)(lVar30 + 0x18);
    FUN_1400021e4(local_160,&local_1b8);
    FUN_1437636c2(plVar13,*(undefined8 *)(param_2 + 0x360),0,&local_1b8);
    if ((code *)local_1b8.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_143786ce4(*(undefined8 *)(param_2 + 0x360),2);
    uVar12 = *(undefined8 *)(param_2 + 0x360);
    if ((int)param_3[6] != 0) {
      puVar28 = (undefined2 *)pLVar21->QuadPart;
    }
    FUN_1446f470e(&local_168,puVar28,1);
    FUN_14378ea10(uVar12,local_168);
    if (DAT_14c99f930 != (longlong *)0x0) {
      (**(code **)(*DAT_14c99f930 + 8))();
    }
    FUN_14572ccb8(*(undefined8 *)(param_2 + 0x360));
    local_1b8 = *(LARGE_INTEGER *)(param_2 + 0x360);
    QueryPerformanceCounter(local_160);
    LStack_1b0 = local_160[0];
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    FUN_1405f2cd6(*(undefined8 *)(param_2 + 0x360),param_3,1,&local_1b8);
    FUN_1400f6522(&local_1b8);
    FUN_1400f64be(&uStack_180);
    FUN_1400f64be(&uStack_190);
    FUN_1405f35b2(param_2 + 0x160,param_3);
    DVar10 = local_98;
    LVar16 = local_a0;
    pLVar21 = (LARGE_INTEGER *)(param_2 + 0x188);
    if (pLVar21 != &local_a0) {
      lVar30 = (longlong)(int)local_98;
      *(DWORD *)(param_2 + 400) = local_98;
      if (local_98 == 0 && *(int *)(param_2 + 0x194) == 0) {
        param_2[0x194] = 0;
        param_2[0x195] = 0;
        param_2[0x196] = 0;
        param_2[0x197] = 0;
      }
      else {
        FUN_1446dd670(pLVar21,local_98);
        if (DVar10 != 0) {
          memcpy((void *)*pLVar21,(void *)LVar16,lVar30 * 2);
        }
      }
    }
    iVar9 = FUN_14490d72a(*(undefined8 *)(param_2 + 0x360));
    if (iVar9 == 3) {
      FUN_1405f35b2(param_2 + 0x1c8,param_3);
    }
    if (DAT_14c99f930 != (longlong *)0x0) {
      (**(code **)(*DAT_14c99f930 + 8))();
    }
    lVar30 = *(longlong *)(param_2 + 0x2a8);
    if ((lVar30 != 0) && (0 < *(int *)(lVar30 + 0x40))) {
      lVar26 = 0;
      do {
        local_1b8.QuadPart = 0;
        LStack_1b0.QuadPart = 0;
        plVar13 = *(longlong **)(*(longlong *)(lVar30 + 0x38) + lVar26 * 8);
        uVar12 = *(undefined8 *)(param_2 + 0x360);
        FUN_141641396(local_1d8,local_160,1);
        cVar6 = (**(code **)(*plVar13 + 0x2f8))(plVar13,local_160,&local_1b8,uVar12);
        if ((LARGE_INTEGER *)local_160[0].QuadPart != (LARGE_INTEGER *)0x0) {
          FUN_1400020a8();
        }
        if (cVar6 == '\0') {
          LVar16.QuadPart = (LONGLONG)&DAT_149dfb77a;
          if (LStack_1b0._0_4_ != 0) {
            LVar16 = local_1b8;
          }
          FUN_140033559(".\\Runtime/Engine/Private/UnrealEngine.cpp",0x40df,
                        L"Couldn\'t spawn player: %s",LVar16.QuadPart);
        }
        if ((code *)local_1b8.QuadPart != (code *)0x0) {
          FUN_1400020a8();
        }
        lVar26 = lVar26 + 1;
      } while ((int)lVar26 < *(int *)(lVar30 + 0x40));
    }
    plVar13 = (longlong *)FUN_140083894();
    (**(code **)(*plVar13 + 0x30))(plVar13);
    if ((DAT_14cb0d2b0 != (longlong *)0x0) &&
       (plVar13 = (longlong *)DAT_14cb0d2b0[0x1fc], plVar13 != (longlong *)0x0)) {
      (**(code **)(*plVar13 + 0x170))(plVar13,param_2);
    }
    FUN_14572a4ce(*(undefined8 *)(param_2 + 0x360));
    param_3 = local_1d8;
    pLVar21 = local_1e8;
    if (DAT_14c99f930 != (longlong *)0x0) {
      (**(code **)(*DAT_14c99f930 + 8))();
    }
    FUN_14107e8f0(&DAT_14c9647a0,*(undefined8 *)(param_2 + 0x360));
    if (DAT_14c99f930 != (longlong *)0x0) {
      (**(code **)(*DAT_14c99f930 + 0x10))();
    }
    *(byte *)(*(longlong *)(param_2 + 0x360) + 0x153) =
         *(byte *)(*(longlong *)(param_2 + 0x360) + 0x153) | 1;
    if ((DAT_14c867b48 == (longlong *)0x0 || DAT_14c867b50 == 0) ||
       (cVar6 = (**(code **)(*DAT_14c867b48 + 0x30))(), cVar6 == '\0')) {
LAB_14376278b:
      (**(code **)(*local_1e0 + 0x4d0))(local_1e0,0);
    }
    else {
      plVar13 = DAT_14c867b48;
      if (DAT_14c867b50 == 0) {
        plVar13 = (longlong *)0x0;
      }
      cVar6 = (**(code **)(*plVar13 + 0x58))();
      if (cVar6 == '\0') goto LAB_14376278b;
    }
    uVar12 = FUN_140083894();
    FUN_1404df9f2(uVar12,1);
    if ((((*(longlong **)(*(longlong *)(param_2 + 0x360) + 0x170) == (longlong *)0x0) ||
         (cVar6 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 0x360) + 0x170) + 0x7c8))(),
         cVar6 == '\0')) && (lVar30 = FUN_14045d4ce(param_3,L"DemoRec",0), lVar30 != 0)) &&
       (*(longlong *)(param_2 + 0x2a8) != 0)) {
      uVar12 = FUN_14045d4ce(param_3,L"DemoRec=",0);
      plVar13 = *(longlong **)(param_2 + 0x2a8);
      local_1c8 = 0;
      uStack_1c0 = 0;
      FUN_1410908dc(*(undefined8 *)(param_2 + 0x360),&local_1b8,0);
      FUN_140056680(local_160,uVar12);
      local_1f8 = &local_1c8;
      (**(code **)(*plVar13 + 0x360))(plVar13,local_160,&local_1b8,param_3 + 9);
      if ((LARGE_INTEGER *)local_160[0].QuadPart != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
      param_3 = local_1d8;
      if ((code *)local_1b8.QuadPart != (code *)0x0) {
        FUN_1400020a8();
        param_3 = local_1d8;
      }
    }
    QueryPerformanceCounter(&local_1b8);
    dVar5 = (double)local_1b8.QuadPart * DAT_14c83f420;
    FUN_14626c60c();
    param_2 = *(byte **)(param_2 + 0x2a8);
    if ((int)param_3[6] == 0) {
      puVar28 = &DAT_149dfb77a;
    }
    else {
      puVar28 = (undefined2 *)pLVar21->QuadPart;
    }
    FUN_140056680(&local_1b8,puVar28);
    (**(code **)(*(longlong *)param_2 + 0x308))
              (param_2,(float)((dVar5 + 16777216.0) - (dVar4 + 16777216.0)),&local_1b8);
    if ((code *)local_1b8.QuadPart != (code *)0x0) {
      FUN_1400020a8();
    }
    bVar33 = true;
    if ((DAT_14cb0cb90 != 0) && (FUN_143762ade(), DAT_14cb0cb90 == 1)) {
      DAT_14cb0cb90 = 0;
    }
  }
  if ((LARGE_INTEGER *)local_a0.QuadPart != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
  uVar20 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  if (!bVar33) {
LAB_14376210d:
    uVar20 = 0;
    FUN_14107e8f0(&DAT_14c9647a0,0);
  }
LAB_1437613b0:
  FUN_1402cfa70();
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  lVar30 = FUN_1407bb686();
  uVar12 = FUN_1407bb416();
  FUN_1407bb482(uVar12,*(undefined8 *)(lVar30 + 0x10));
  if (param_3[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_3[9],(int)param_3[10]);
  if (param_3[9] != 0) {
    FUN_1400020a8();
  }
  if (param_3[7] != 0) {
    FUN_1400020a8();
  }
  if (pLVar21->QuadPart != 0) {
    FUN_1400020a8();
  }
  if (param_3[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 143762ade FUN_143762ade body=2471 status=ok
// SIG undefined FUN_143762ade(void)

void FUN_143762ade(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  uint *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68;
  undefined4 local_60;
  undefined ***local_58;
  undefined **local_48;
  code *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c761e10 < 1) {
    piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  else {
    piVar15 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar6 = *piVar15;
    if (DAT_14c86a9fc == 0) {
      if (iVar6 != 2) {
        if (iVar6 != 1) goto LAB_143762b24;
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143762b29;
        goto LAB_143762b8d;
      }
LAB_143762b29:
      local_68 = (undefined1 *)0x0;
      local_60 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_68,5);
    }
    else {
LAB_143762b24:
      if (iVar6 == 0x10) goto LAB_143762b29;
LAB_143762b8d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar15 == 2)) goto LAB_143762b29;
        if (*piVar15 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143762b29;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_143762d59;
        do {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143768c26);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_143762d59:
          uVar16 = *(longlong *)(puVar9 + 0x10) + 7;
          uVar12 = puVar9[0x12];
          while( true ) {
            puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
            if (puVar17 + 0x16 <= puVar9 + 0x4000) {
              *(undefined8 **)(puVar9 + 0x10) = puVar17 + 0x16;
              puVar9[0x12] = uVar12 + 1;
              iVar6 = 0;
              FUN_1447247dc(puVar17,0);
              *puVar17 = &PTR_FUN_14aae6b78;
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar12 = DAT_14c7585c8 >> 10 & 3;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
                  uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
                       (*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
              if (lVar4 == 0) {
                uVar5 = 1;
                if ((char)uVar16 != '\x06') {
                  uVar5 = uVar16;
                }
                uVar16 = uVar5;
                uVar10 = 0;
              }
              else {
                if ((char)uVar16 == '\x06') {
                  uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
                }
                uVar10 = *(undefined8 *)(lVar4 + 0x30);
              }
              puVar17[0xf] = uVar10;
              puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar17 + 0x1c) = iVar6;
              if (puVar17 == (undefined8 *)0x0) {
                local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
                local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
                FUN_1447439e4(puVar17);
                LOCK();
                piVar1 = (int *)(puVar17 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar17)(puVar17,1);
                }
              }
              goto LAB_143762c24;
            }
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            uVar16 = (longlong)puVar9 + 0x5f;
            uVar12 = 0;
          }
        } while( true );
      }
      local_78 = &local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a2f19c0;
      local_40 = FUN_143769f7a;
      local_68 = &LAB_1448467b2;
      FUN_14005a792(&DAT_14ca9a440,L"FlushCommand",&DAT_14cb0d260);
      if (local_68 != (undefined1 *)0x0) {
        pppuVar13 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar13 = &local_48;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
LAB_143762c24:
    FUN_14080c2b4();
  }
  FUN_1427e390c(0,1);
  iVar6 = *piVar15;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143762c41;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143762c4a;
      goto LAB_143762fdb;
    }
  }
  else {
LAB_143762c41:
    if (iVar6 != 0x10) {
LAB_143762fdb:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar15 == 2)) goto LAB_143762c4a;
        if (*piVar15 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_143762c4a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar9 = (uint *)*puVar2;
        if (puVar9 != (uint *)0x0) goto LAB_14376314d;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143768c26);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar9 = (uint *)*puVar2;
LAB_14376314d:
          puVar17 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar17 + 0x16);
          uVar12 = puVar9[0x12];
          if (puVar14 <= puVar9 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
            LOCK();
            uVar3 = *puVar9;
            *puVar9 = *puVar9 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar9 = (uint *)*puVar2;
            *puVar9 = 0xffffffff;
            *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
            puVar9[0x12] = 0;
            *puVar2 = puVar9;
            puVar17 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(puVar17 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar9 + 0x4000) {
              uVar12 = 1;
              goto LAB_1437631cd;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1437631cd:
        *(uint **)(puVar9 + 0x10) = puVar14;
        puVar9[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aae6b88;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
          uVar10 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar17[0xf] = uVar10;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
        if (puVar17 == (undefined8 *)0x0) {
          local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68 = (undefined1 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar15 = (int *)(puVar17 + 1);
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (*piVar15 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_78 = &local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14a2f19c0;
        local_40 = FUN_14376a1aa;
        local_68 = &LAB_1448467b2;
        FUN_14005a792(&DAT_14ca9a440,L"FlushCommand",&DAT_14cb0d264);
        if (local_68 != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_14376307a;
    }
  }
LAB_143762c4a:
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_68,5);
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_68,5);
  (**(code **)(*DAT_14ca83900 + 0x328))();
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_68,7);
LAB_14376307a:
  FUN_14080c2b4();
  uVar10 = FUN_141582352();
  FUN_1447f69b6(uVar10);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143763486 FUN_143763486 body=570 status=ok
// SIG undefined FUN_143763486(void)

longlong FUN_143763486(byte *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  code *local_78;
  undefined2 *local_70;
  int local_68;
  longlong *local_60;
  code *local_58;
  longlong **local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_147daa0c0(&local_70,param_2,*(undefined4 *)(param_1 + 0x2c0));
  puVar7 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar7 = local_70;
  }
  FUN_1446f470e(&local_78,puVar7,1);
  bVar1 = *param_1;
  uVar3 = (uint)((ulonglong)local_78 >> 0x10);
  uVar8 = (uint)local_78 & 0xffff;
  puVar4 = (uint *)FUN_140b19d32(&DAT_14cb108c8,
                                 ((uint)local_78 << 0x10 | uVar8) +
                                 (int)((ulonglong)local_78 >> 0x20) +
                                 (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4),&local_78);
  *puVar4 = (uint)bVar1;
  local_58 = local_78;
  uVar9 = 0;
  FUN_144a13f80(&DAT_14c963d10,&local_48,&local_58,0);
  puVar7 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar7 = local_70;
  }
  lVar5 = FUN_14099f58f(puVar7);
  if ((lVar5 != 0) && (*param_1 == 3)) {
    *(byte *)(lVar5 + 0x2e) = *(byte *)(lVar5 + 0x2e) | 0x10;
    uVar9 = 0x80000;
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  local_88 = 0;
  lVar6 = 0;
  lVar5 = FUN_1402791b4(lVar5,puVar7,uVar9,0);
  *param_3 = lVar5;
  FUN_14070f0e8(&DAT_14cb108c8,local_78);
  if (*param_3 == 0) goto LAB_143763689;
  local_48 = 0;
  local_50 = &local_60;
  local_58 = FUN_143794c14;
  local_88 = local_88 & 0xffffffff00000000;
  local_60 = &local_48;
  FUN_144a56f9f(*param_3,&local_58,0,0);
  lVar5 = *param_3;
  lVar6 = local_48;
  if (local_48 == 0) {
    lVar6 = FUN_147dab1b4(lVar5,0);
    lVar5 = lVar6;
    if (lVar6 != 0) {
LAB_143763617:
      lVar10 = lVar5;
      lVar5 = lVar10;
      if (*(longlong *)(lVar10 + 0x20) != 0) goto code_r0x000143763626;
      goto LAB_14376363b;
    }
    lVar5 = *param_3;
    lVar6 = 0;
  }
  goto LAB_143763650;
code_r0x000143763626:
  lVar5 = *(longlong *)(lVar10 + 0x20);
  if ((*(uint *)(lVar10 + 8) >> 0x1c & 1) == 0) goto LAB_143763617;
  lVar5 = FUN_142840154(lVar10);
LAB_14376363b:
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar10 + 0x20);
    goto LAB_143763617;
  }
  *param_3 = lVar5;
LAB_143763650:
  *(byte *)(lVar5 + 0x2e) = *(byte *)(lVar5 + 0x2e) | 0x10;
  iVar2 = *(int *)(lVar6 + 0x90);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(lVar6 + 0x88);
    lVar10 = 0;
    do {
      FUN_147b98a0e(*(undefined8 *)(lVar5 + lVar10),*(undefined4 *)(param_1 + 0x2c0),0);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
LAB_143763689:
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
}



// FUNCTION 1437636c2 FUN_1437636c2 body=1786 status=ok
// SIG undefined FUN_1437636c2(void)

void FUN_1437636c2(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined2 *puVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  int *local_e0;
  longlong *local_d8;
  longlong local_d0;
  uint local_c4;
  longlong local_c0;
  undefined8 *local_b8;
  code *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined2 *local_88;
  undefined8 uStack_80;
  code *local_70;
  int local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar6 = FUN_1405e677a();
  if (*(int *)(param_4 + 1) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_4;
  }
  lVar7 = 0;
  while( true ) {
    uVar9 = *(ushort *)((longlong)puVar8 + lVar7);
    uVar11 = (ulonglong)uVar9;
    uVar12 = *(ushort *)((longlong)L"___TAILONLY___" + lVar7);
    if (uVar9 != uVar12) {
      if ((uVar12 | uVar9) < 0x80) {
        uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
        uVar13 = (ulonglong)uVar12;
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
        if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_143763732;
      }
      local_e0 = (int *)(lVar6 + 0x240);
      iVar3 = *(int *)(lVar6 + 0x240);
      if (uVar9 == uVar12) goto LAB_1437637be;
      iVar14 = 0;
      if (0 < iVar3) goto LAB_1437637c1;
      goto LAB_14376377a;
    }
    if (uVar9 == 0) break;
LAB_143763732:
    lVar7 = lVar7 + 2;
  }
  iVar3 = *(int *)(lVar6 + 0x240);
LAB_1437637be:
  iVar14 = iVar3 + -1;
LAB_1437637c1:
  local_e0 = (int *)(lVar6 + 0x240);
  lVar7 = (longlong)iVar14;
  local_c4 = param_3;
  local_c0 = lVar6;
  local_b8 = param_4;
  do {
    if (*(byte *)(*(longlong *)(lVar6 + 0x238) + lVar7 * 0x38) == param_3) {
      lVar16 = *(longlong *)(lVar6 + 0x238) + lVar7 * 0x38;
      iVar14 = *(int *)(lVar16 + 0x10);
      iVar4 = *(int *)(param_4 + 1);
      local_d0 = lVar7;
      if (iVar14 == iVar4) {
        if (1 < iVar14) {
          puVar8 = (undefined2 *)*param_4;
          lVar15 = 0;
          while( true ) {
            uVar9 = *(ushort *)(*(longlong *)(lVar16 + 8) + lVar15);
            uVar12 = *(ushort *)((longlong)puVar8 + lVar15);
            if (uVar9 != uVar12) break;
            if (uVar9 == 0) goto LAB_143763899;
LAB_14376384b:
            lVar15 = lVar15 + 2;
          }
          if ((uVar12 | uVar9) < 0x80) {
            if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[(uint)uVar12]) goto LAB_14376384b;
            iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar9] -
                     (uint)(byte)(&DAT_149e05da0)[(uint)uVar12];
          }
          else {
            iVar14 = (uint)uVar9 - (uint)uVar12;
          }
          if (iVar14 != 0) goto LAB_143763cd8;
        }
      }
      else if (iVar14 + iVar4 != 1) {
        puVar8 = (undefined2 *)*param_4;
LAB_143763cd8:
        if (iVar4 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        lVar15 = 0;
        while( true ) {
          uVar9 = *(ushort *)((longlong)puVar8 + lVar15);
          uVar11 = (ulonglong)uVar9;
          uVar12 = *(ushort *)((longlong)&DAT_149dfb77a + lVar15);
          if (uVar9 != uVar12) break;
          if (uVar9 == 0) goto LAB_143763899;
LAB_143763d07:
          lVar15 = lVar15 + 2;
        }
        if ((uVar12 | uVar9) < 0x80) {
          uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
          uVar13 = (ulonglong)uVar12;
          uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
          if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_143763d07;
        }
        if (uVar9 != uVar12) {
          lVar15 = 0;
          goto LAB_143763d40;
        }
      }
LAB_143763899:
      if (0 < *(int *)(lVar16 + 0x20)) {
        local_d8 = (longlong *)(lVar16 + 0x28);
        lVar6 = 0;
        do {
          FUN_1400021e4(*(longlong *)(lVar16 + 0x18) + lVar6 * 8,&local_b0);
          iVar3 = (int)local_a8;
          iVar4 = ((int)local_a8 == 0) + 3;
          local_70 = local_b0;
          local_b0 = (code *)0x0;
          local_68 = (int)local_a8;
          iVar14 = local_a8._4_4_;
          local_64 = local_a8._4_4_;
          local_a8 = 0;
          iVar10 = iVar4 + iVar3;
          if (iVar10 < iVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar4);
          }
          if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar10);
          }
          if (iVar14 < iVar10) {
            FUN_1446f8c06(&local_70);
          }
          FUN_1400020e8(&local_70,&DAT_14aae454a,3);
          if (local_b0 != (code *)0x0) {
            FUN_1400020a8();
          }
          local_88 = (undefined2 *)0x0;
          uStack_80 = 0;
          cVar2 = FUN_14166d522(&local_70,&local_88,1);
          if (cVar2 == '\0') {
            FUN_1400021e4(lVar6 * 8 + *(longlong *)(lVar16 + 0x18),&local_b0);
            cVar2 = FUN_14166d522(&local_b0,&local_88,1);
            if (local_b0 != (code *)0x0) {
              FUN_1400020a8();
            }
            if (cVar2 != '\0') goto LAB_1437639f5;
          }
          else {
LAB_1437639f5:
            puVar8 = &DAT_149dfb77a;
            if ((int)uStack_80 != 0) {
              puVar8 = local_88;
            }
            local_138 = 0;
            lVar7 = FUN_1402791b4(0,puVar8,0,0);
            uVar1 = *(uint *)(lVar7 + 0xc);
            lVar15 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            FUN_1447f71cc(lVar15,0x40000000);
            if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar7);
            }
            iVar3 = *(int *)(lVar16 + 0x30);
            *(uint *)(lVar16 + 0x30) = iVar3 + 1U;
            if (*(uint *)(lVar16 + 0x34) < iVar3 + 1U) {
              FUN_140845902(local_d8,iVar3);
            }
            *(longlong *)(*local_d8 + (longlong)iVar3 * 8) = lVar7;
            if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar7);
            }
            uVar5 = FUN_14482ca40();
            if (DAT_14c927740 == 0) {
              local_b0 = FUN_1449e2820;
              local_f0 = FUN_14081d0ea;
              local_f8 = FUN_14081d0ea;
              local_108 = &LAB_146856450;
              local_110 = FUN_1427b121c;
              local_118 = L"Engine";
              local_120 = 0;
              local_128 = 0x10000021;
              local_130 = 8;
              local_138 = CONCAT44(local_138._4_4_,0x28);
              local_100 = &local_b0;
              FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
            }
            local_138 = CONCAT44(local_138._4_4_,uVar5) | 0x90000000;
            FUN_146123bc0(&local_b0,DAT_14c927740,0);
            while (local_a0 != (longlong *)0x0) {
              cVar2 = FUN_1468ff1f6(*local_a0,lVar7);
              if (cVar2 != '\0') {
                if (local_a0 == (longlong *)0x0) {
                  lVar15 = 0;
                }
                else {
                  lVar15 = *local_a0;
                }
                uVar1 = *(uint *)(lVar15 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar15 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar15 = 0;
                }
                FUN_1447f71cc(lVar15,0x40000000);
                if (local_a0 == (longlong *)0x0) {
                  bVar17 = false;
                  lVar15 = 0;
                }
                else {
                  lVar15 = *local_a0;
                  bVar17 = lVar15 != 0;
                  if ((bVar17) && (DAT_14c950c29 != 0)) {
                    FUN_1456cec3c(lVar15);
                    bVar17 = true;
                  }
                }
                iVar3 = *(int *)(lVar16 + 0x30);
                *(uint *)(lVar16 + 0x30) = iVar3 + 1U;
                if (*(uint *)(lVar16 + 0x34) < iVar3 + 1U) {
                  FUN_140845902(local_d8,iVar3);
                }
                *(longlong *)(*local_d8 + (longlong)iVar3 * 8) = lVar15;
                if ((bVar17 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c(lVar15);
                }
              }
              FUN_1468bea3c(&local_b0);
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(local_b0 + 0x30));
          }
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_70 != (code *)0x0) {
            FUN_1400020a8();
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(lVar16 + 0x20));
        iVar3 = *local_e0;
        param_4 = local_b8;
        lVar7 = local_d0;
        lVar6 = local_c0;
        param_3 = local_c4;
      }
    }
LAB_143763cc1:
    lVar7 = lVar7 + 1;
  } while (lVar7 < iVar3);
LAB_14376377a:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_143763d40:
  uVar9 = *(ushort *)((longlong)puVar8 + lVar15);
  uVar11 = (ulonglong)uVar9;
  uVar12 = *(ushort *)((longlong)L"___TAILONLY___" + lVar15);
  if (uVar9 != uVar12) {
    if ((uVar12 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      uVar13 = (ulonglong)uVar12;
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
      if ((&DAT_149e05da0)[uVar11] == (&DAT_149e05da0)[uVar13]) goto LAB_143763d5f;
    }
    if (uVar9 != uVar12) goto LAB_143763cc1;
    goto LAB_143763899;
  }
  if (uVar9 == 0) goto LAB_143763899;
LAB_143763d5f:
  lVar15 = lVar15 + 2;
  goto LAB_143763d40;
}



// FUNCTION 143763dbe FUN_143763dbe body=70 status=ok
// SIG undefined FUN_143763dbe(void)

void FUN_143763dbe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar2);
      if (*(longlong *)(lVar1 + 0x140) == param_2) {
        if (lVar1 != 0) {
          return;
        }
        break;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar2);
  }
  FUN_14572ad1a(DAT_14cb0d2b0,0);
  return;
}



// FUNCTION 143763e04 FUN_143763e04 body=2503 status=ok
// SIG undefined FUN_143763e04(void)

void FUN_143763e04(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  undefined1 auStack_998 [32];
  undefined4 local_978;
  undefined4 local_970;
  undefined4 local_968;
  undefined8 local_960;
  wchar_t *local_958;
  code *local_950;
  undefined1 *local_948;
  code **local_940;
  code *local_938;
  code *local_930;
  longlong local_920;
  uint *local_918;
  undefined2 *local_910;
  int local_908;
  undefined8 local_900;
  undefined1 local_8f8 [8];
  ulonglong local_8f0;
  longlong local_8e8;
  int local_8e0;
  longlong local_8d8;
  undefined4 local_8d0;
  longlong local_8c8;
  undefined8 uStack_8c0;
  code *local_8b8;
  undefined2 *local_8b0;
  longlong *local_8a8;
  char local_8a0;
  undefined6 local_898;
  undefined2 uStack_892;
  undefined6 uStack_890;
  undefined2 local_88a [1017];
  longlong local_98 [2];
  uint local_88 [4];
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_998;
  local_8c8 = 0;
  uStack_8c0 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_920 = param_2;
  FUN_14133d72e(&local_8b8,0x10,1,0);
  uVar20 = (ulonglong)local_8a8 & 0xffffffff;
  if ((-1 < (int)local_8a8) && ((int)local_8a8 < (int)local_8b0)) {
LAB_143763ed3:
    puVar8 = *(undefined2 **)(local_8b8 + (uVar20 & 0xffffffff) * 8);
    if ((*(char *)(puVar8 + 0xa9) != '\x04') && (*(char *)(puVar8 + 0xa9) != '\a')) {
      if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
        lVar7 = (longlong)*(int *)(param_1 + 0x1150) * 8;
        lVar16 = 0;
        do {
          lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar16);
          if (*(undefined2 **)(lVar22 + 0x360) == puVar8) {
            if (lVar22 != 0) goto LAB_143763f5f;
            break;
          }
          lVar16 = lVar16 + 8;
        } while (lVar7 != lVar16);
        if (*(longlong *)(puVar8 + 0x18) != 0) {
          lVar16 = 0;
          do {
            lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar16);
            if (*(longlong *)(lVar22 + 0x360) == *(longlong *)(*(longlong *)(puVar8 + 0x18) + 0xc0))
            {
              if (lVar22 != 0) goto LAB_143763f5f;
              break;
            }
            lVar16 = lVar16 + 8;
          } while (lVar7 != lVar16);
        }
      }
      cVar4 = FUN_147d81b50(param_1,puVar8);
      uVar20 = uStack_8c0;
      if (cVar4 == '\0') {
        lVar7 = (longlong)(int)uStack_8c0;
        uVar23 = (int)uStack_8c0 + 1;
        uStack_8c0 = CONCAT44(uStack_8c0._4_4_,uVar23);
        if (uStack_8c0._4_4_ < uVar23) {
          FUN_1447f76d2(&local_8c8,uVar20 & 0xffffffff);
        }
        *(undefined2 **)(local_8c8 + lVar7 * 8) = puVar8;
LAB_143763fe7:
        puVar17 = puVar8;
        puVar8 = puVar17;
        if (*(undefined2 **)(puVar17 + 0x10) != (undefined2 *)0x0) goto code_r0x000143763ff6;
        goto LAB_143764008;
      }
    }
    goto LAB_143763f5f;
  }
LAB_143764028:
  if (local_8b8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_920 != 0) {
    plVar1 = (longlong *)(local_920 + 0x300);
    puVar9 = (uint *)(local_920 + 0x310);
    iVar5 = *(int *)(local_920 + 0x328);
    if (iVar5 == 0) {
      uVar24 = 1;
      iVar6 = 0;
      uVar20 = 0;
      iVar19 = 0;
    }
    else {
      puVar11 = *(uint **)(local_920 + 800);
      if (*(uint **)(local_920 + 800) == (uint *)0x0) {
        puVar11 = puVar9;
      }
      uVar23 = *puVar11;
      if (uVar23 == 0) {
        iVar6 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar6 = iVar5 + -1;
        }
        uVar20 = 0;
        uVar18 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar18 = uVar20;
        }
        iVar6 = 0;
        do {
          if (uVar18 == uVar20) goto LAB_14376461e;
          iVar6 = iVar6 + 0x20;
          uVar23 = puVar11[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar23 == 0);
      }
      else {
        iVar6 = 0;
        uVar20 = 0;
      }
      uVar24 = (ulonglong)(-uVar23 & uVar23);
      uVar18 = uVar24 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar19 = (iVar6 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar5 <= iVar19) {
        iVar19 = iVar5;
      }
    }
    if (iVar19 != iVar5) {
      uVar23 = 0xffffffff;
      lVar7 = local_920;
      iVar12 = iVar5;
      local_918 = puVar9;
      do {
        uVar3 = uStack_8c0;
        uVar18 = *(ulonglong *)(*plVar1 + (longlong)iVar19 * 0x10);
        if (((((uVar18 >> 0x20 != 0) && (uVar15 = (uint)uVar18, -1 < (int)uVar15)) &&
             ((int)uVar15 < DAT_14c9647dc)) &&
            ((plVar21 = (longlong *)
                        ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0xd & 0x3fff8))),
             plVar21 != (longlong *)0x0 && ((int)plVar21[2] == (int)(uVar18 >> 0x20))))) &&
           (((*(uint *)(plVar21 + 1) >> 0x1c & 1) == 0 && (lVar16 = *plVar21, lVar16 != 0)))) {
          lVar7 = (longlong)(int)uStack_8c0;
          uVar15 = (int)uStack_8c0 + 1;
          uStack_8c0 = CONCAT44(uStack_8c0._4_4_,uVar15);
          if (uStack_8c0._4_4_ < uVar15) {
            FUN_1447f76d2(&local_8c8,uVar3 & 0xffffffff);
            puVar9 = local_918;
          }
          *(longlong *)(local_8c8 + lVar7 * 8) = lVar16;
          iVar12 = *(int *)(local_920 + 0x328);
          lVar7 = local_920;
        }
        uVar23 = uVar23 & ~(uint)uVar24;
        puVar11 = *(uint **)(lVar7 + 800);
        if (*(uint **)(lVar7 + 800) == (uint *)0x0) {
          puVar11 = puVar9;
        }
        iVar19 = (int)uVar20;
        lVar16 = (longlong)iVar19;
        uVar15 = puVar11[lVar16] & uVar23;
        if (uVar15 == 0) {
          iVar13 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar13 = iVar12 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar19) {
            iVar14 = iVar19;
          }
          if (iVar19 < iVar13) {
            lVar22 = 0;
            do {
              uVar15 = puVar11[lVar16 + lVar22 + 1];
              if (uVar15 != 0) {
                uVar20 = (ulonglong)(iVar19 + (int)lVar22 + 1);
                uVar23 = 0xffffffff;
                goto LAB_143764773;
              }
              iVar6 = iVar6 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar14 - lVar16 != lVar22);
            uVar23 = 0xffffffff;
            iVar19 = iVar14;
          }
          uVar20 = (ulonglong)(iVar19 + 1);
          puVar9 = local_918;
          lVar7 = local_920;
          iVar19 = iVar12;
        }
        else {
LAB_143764773:
          uVar24 = (ulonglong)(-uVar15 & uVar15);
          uVar18 = uVar24 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar19 = (iVar6 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar19) {
            iVar19 = iVar12;
          }
        }
      } while (iVar19 != iVar5);
    }
LAB_14376461e:
    FUN_147d81cb2(plVar1);
  }
  uVar20 = uStack_8c0 & 0xffffffff;
  if (uVar20 != 0) {
    if (DAT_14c761e14 != 0) {
      if (DAT_14c761e14 == 3) {
        iVar5 = 5;
      }
      else if (DAT_14c761e14 == 2) {
        iVar5 = 0x104;
      }
      else {
        iVar5 = 4;
      }
      iVar6 = 5;
      if (DAT_14c951760 == '\0') {
        iVar6 = iVar5;
      }
      iVar5 = iVar6 + 0x200;
      if (DAT_14cb0cbd8 != 0) {
        iVar5 = iVar6;
      }
      if (0 < (int)uStack_8c0 && DAT_14cb0cbd8 != 0) {
        do {
          uVar18 = uVar20 - 1;
          lVar7 = *(longlong *)(local_8c8 + -8 + uVar20 * 8);
          if (lVar7 != 0) {
            if (DAT_14cb10130 == 0) {
              local_8b8 = FUN_140754f84;
              local_930 = FUN_14081d0ea;
              local_938 = FUN_14081d0ea;
              local_948 = &LAB_147da9a76;
              local_950 = FUN_1409f3105;
              local_958 = L"Engine";
              local_960 = 0;
              local_968 = 0x10000000;
              local_970 = 8;
              local_978 = 0x990;
              local_940 = &local_8b8;
              FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
            }
            if (((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                  (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) &&
               ((*(longlong *)(lVar7 + 0x30) != 0 &&
                (lVar16 = *(longlong *)(*(longlong *)(lVar7 + 0x30) + 0xc0), lVar16 != lVar7)))) {
              if ((longlong)(int)uStack_8c0 != 0) {
                lVar7 = 0;
                do {
                  if (lVar16 == *(longlong *)(local_8c8 + lVar7)) {
                    if (uVar20 != (uStack_8c0 & 0xffffffff)) {
                      memmove((void *)(local_8c8 + uVar18 * 8),(void *)(local_8c8 + uVar18 * 8 + 8),
                              (longlong)((int)uStack_8c0 - (int)uVar20) << 3);
                    }
                    uStack_8c0 = CONCAT44(uStack_8c0._4_4_,(int)uStack_8c0 + -1);
                    break;
                  }
                  lVar7 = lVar7 + 8;
                } while ((longlong)(int)uStack_8c0 << 3 != lVar7);
              }
            }
          }
          bVar2 = 1 < (longlong)uVar20;
          uVar20 = uVar18;
        } while (bVar2);
      }
      local_8e8 = local_8c8;
      local_8e0 = (int)uStack_8c0;
      FUN_14281b60e(&local_8d8,&local_8e8,iVar5);
      FUN_1447a1747(local_8d8,local_8d0);
      if (local_8d8 != 0) {
        FUN_1400020a8();
      }
    }
    iVar5 = local_70;
    if (DAT_14c951760 == '\0') {
      if (local_70 == 0) {
        uVar20 = 1;
        uVar18 = 0;
        iVar19 = 0;
        iVar6 = 0;
      }
      else {
        puVar9 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar9 = local_88;
        }
        uVar23 = *puVar9;
        if (uVar23 == 0) {
          iVar6 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar6 = local_70 + -1;
          }
          uVar18 = 0;
          uVar20 = (ulonglong)(uint)(iVar6 >> 5);
          if (iVar6 >> 5 < 1) {
            uVar20 = uVar18;
          }
          iVar19 = 0;
          do {
            if (uVar20 == uVar18) goto LAB_1437642fe;
            iVar19 = iVar19 + 0x20;
            uVar23 = puVar9[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar23 == 0);
        }
        else {
          uVar18 = 0;
          iVar19 = 0;
        }
        uVar20 = (ulonglong)(-uVar23 & uVar23);
        uVar24 = uVar20 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar6 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar6) {
          iVar6 = local_70;
        }
      }
      if (iVar6 != local_70) {
        uVar23 = 0xffffffff;
        do {
          plVar1 = *(longlong **)(local_98[0] + (longlong)iVar6 * 0x10);
          uVar10 = FUN_146900b84();
          FUN_1468bbb78(uVar10,plVar1);
          local_8f0 = (ulonglong)*(uint *)(plVar1 + 3);
          local_8a0 = '\0';
          local_8b8 = (code *)&local_898;
          local_8a8 = local_98;
          uStack_890 = 0x640065006b;
          local_898 = 0x65004c002f;
          uStack_892 = 0x61;
          local_8b0 = local_88a;
          FUN_14005eb5c(&local_8f0,&local_8b8);
          *local_8b0 = 0;
          FUN_1446f470e(&local_900,local_8b8,1);
          local_978 = 0;
          FUN_140af9fb2(local_8f8,0,plVar1[2],local_900);
          FUN_1400021e4(local_8f8,&local_910);
          puVar8 = &DAT_149dfb77a;
          if (local_908 != 0) {
            puVar8 = local_910;
          }
          (**(code **)(*plVar1 + 0x170))(plVar1,puVar8,0,0x14);
          if (local_910 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_8a0 == '\x01') {
            FUN_1400020a8(local_8b8);
          }
          uVar23 = uVar23 & ~(uint)uVar20;
          puVar9 = local_78;
          if (local_78 == (uint *)0x0) {
            puVar9 = local_88;
          }
          iVar6 = (int)uVar18;
          lVar7 = (longlong)iVar6;
          uVar15 = puVar9[lVar7] & uVar23;
          if (uVar15 == 0) {
            iVar12 = local_70 + 0x1e;
            if (-1 < local_70 + -1) {
              iVar12 = local_70 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar19 = iVar19 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar6) {
              iVar13 = iVar6;
            }
            if (iVar6 < iVar12) {
              lVar16 = 0;
              do {
                uVar15 = puVar9[lVar7 + lVar16 + 1];
                if (uVar15 != 0) {
                  uVar18 = (ulonglong)(iVar6 + (int)lVar16 + 1);
                  uVar23 = 0xffffffff;
                  goto LAB_143764535;
                }
                iVar19 = iVar19 + 0x20;
                lVar16 = lVar16 + 1;
              } while (iVar13 - lVar7 != lVar16);
              uVar23 = 0xffffffff;
              iVar6 = iVar13;
            }
            uVar18 = (ulonglong)(iVar6 + 1);
            iVar6 = local_70;
          }
          else {
LAB_143764535:
            uVar20 = (ulonglong)(-uVar15 & uVar15);
            uVar24 = uVar20 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar24 != 0) {
              for (; uVar24 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            iVar6 = (iVar19 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if (local_70 <= iVar6) {
              iVar6 = local_70;
            }
          }
        } while (iVar6 != iVar5);
      }
    }
  }
LAB_1437642fe:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14090246c(local_98);
  if (local_8c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_998) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000143763ff6:
  puVar8 = *(undefined2 **)(puVar17 + 0x10);
  if ((*(uint *)(puVar17 + 4) >> 0x1c & 1) == 0) goto LAB_143763fe7;
  puVar8 = (undefined2 *)FUN_142840154(puVar17);
LAB_143764008:
  if (puVar8 == (undefined2 *)0x0) {
    puVar8 = *(undefined2 **)(puVar17 + 0x10);
    goto LAB_143763fe7;
  }
  local_910 = puVar8;
  FUN_147d8777c(local_98,&local_8f0,&local_910);
LAB_143763f5f:
  uVar20 = (longlong)(int)local_8a8;
  do {
    uVar18 = uVar20;
    uVar20 = uVar18 + 1;
    local_8a8 = (longlong *)CONCAT44(local_8a8._4_4_,(int)uVar20);
    if ((longlong)(int)local_8b0 <= (longlong)uVar20) break;
  } while (*(longlong *)(local_8b8 + uVar20 * 8) == 0);
  if (((longlong)uVar18 < -1) || ((int)local_8b0 <= (int)uVar20)) goto LAB_143764028;
  goto LAB_143763ed3;
}



// FUNCTION 1437647cc FUN_1437647cc body=650 status=ok
// SIG undefined FUN_1437647cc(void)

void FUN_1437647cc(undefined8 param_1,undefined2 *param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined2 *local_58;
  int local_50;
  undefined2 **local_48;
  code *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar6 = 0;
    do {
      lVar5 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar6);
      if (*(longlong *)(lVar5 + 0x140) == param_4) {
        if (lVar5 != 0) goto LAB_143764832;
        break;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar6);
  }
  lVar5 = FUN_14572ad1a(DAT_14cb0d2b0,0);
LAB_143764832:
  if (param_2 == (undefined2 *)0x0) {
    iVar1 = *(int *)(lVar5 + 0x260);
    *(uint *)(lVar5 + 0x260) = iVar1 + 1U;
    if (*(uint *)(lVar5 + 0x264) < iVar1 + 1U) {
      FUN_1458edfd8((longlong *)(lVar5 + 600),iVar1);
    }
    *(undefined8 *)(*(longlong *)(lVar5 + 600) + (longlong)iVar1 * 8) = 0;
    goto LAB_143764a0e;
  }
  local_48 = &local_58;
  local_58 = (undefined2 *)0x0;
  local_38 = &local_48;
  local_40 = FUN_143794c14;
  local_68 = 0;
  FUN_144a56f9f(param_2,&local_40,0,0);
  puVar3 = local_58;
  if (local_58 == (undefined2 *)0x0) {
    puVar3 = (undefined2 *)FUN_147dab1b4(param_2,0);
    puVar2 = puVar3;
    if (puVar3 != (undefined2 *)0x0) {
LAB_1437648eb:
      puVar4 = puVar2;
      param_2 = puVar4;
      if (*(undefined2 **)(puVar4 + 0x10) != (undefined2 *)0x0) goto code_r0x0001437648fa;
      goto LAB_14376490f;
    }
LAB_14376491e:
    local_40 = *(code **)(param_2 + 0xc);
    FUN_1400021e4(&local_40,&local_58);
    puVar3 = local_58;
    if (local_50 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_40,L"Couldn\'t find level in package %s",puVar3);
    if ((code **)(lVar5 + 0x268) == &local_40) {
      if (local_40 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar5 + 0x268) != 0) {
        FUN_1400020a8();
      }
      *(code **)(lVar5 + 0x268) = local_40;
      local_40 = (code *)0x0;
      *(undefined4 *)(lVar5 + 0x270) = (undefined4)local_38;
      *(undefined4 *)(lVar5 + 0x274) = local_38._4_4_;
      local_38 = (undefined2 ***)0x0;
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    bVar7 = 0;
    lVar6 = 0;
  }
  else {
LAB_14376487c:
    lVar6 = *(longlong *)(puVar3 + 0x18);
    if (lVar6 == 0) goto LAB_14376491e;
    bVar7 = 1;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar6);
    }
  }
  iVar1 = *(int *)(lVar5 + 0x260);
  *(uint *)(lVar5 + 0x260) = iVar1 + 1U;
  if (*(uint *)(lVar5 + 0x264) < iVar1 + 1U) {
    FUN_1458edfd8((longlong *)(lVar5 + 600),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar5 + 600) + (longlong)iVar1 * 8) = lVar6;
  if ((bVar7 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
LAB_143764a0e:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001437648fa:
  puVar2 = *(undefined2 **)(puVar4 + 0x10);
  if ((*(uint *)(puVar4 + 4) >> 0x1c & 1) != 0) {
    param_2 = (undefined2 *)FUN_142840154(puVar4);
LAB_14376490f:
    if (param_2 == (undefined2 *)0x0) {
      puVar2 = *(undefined2 **)(puVar4 + 0x10);
      goto LAB_1437648eb;
    }
    goto LAB_14376487c;
  }
  goto LAB_1437648eb;
}



// FUNCTION 143764a58 FUN_143764a58 body=3006 status=ok
// SIG undefined FUN_143764a58(void)

undefined8 FUN_143764a58(undefined8 param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  wchar_t *pwVar10;
  longlong *plVar11;
  code **ppcVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  code *pcVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  code *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  undefined1 local_d2;
  undefined1 local_d1;
  longlong *local_d0;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  code *local_a8;
  ulonglong uStack_a0;
  longlong *local_98;
  undefined **local_80;
  undefined2 local_78;
  longlong local_70;
  undefined8 uStack_68;
  code *local_60;
  uint uStack_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_2 + 0x250) < 1) {
    pwVar10 = L"No map change is being prepared";
  }
  else {
    if (*(int *)(param_2 + 0x250) == *(int *)(param_2 + 0x260)) {
      local_c8 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x170);
      if (local_c8 != 0) {
        plVar16 = (longlong *)(*(longlong *)(param_2 + 0x360) + 0x30);
        do {
          lVar5 = *plVar16;
          do {
            lVar14 = lVar5;
            lVar5 = lVar14;
            if (*(longlong *)(lVar14 + 0x20) == 0) goto LAB_143764b35;
            lVar5 = *(longlong *)(lVar14 + 0x20);
          } while ((*(uint *)(lVar14 + 8) >> 0x1c & 1) == 0);
          lVar5 = FUN_142840154(lVar14);
LAB_143764b35:
          plVar16 = (longlong *)(lVar14 + 0x20);
        } while (lVar5 == 0);
        local_80 = *(undefined ***)(lVar5 + 0x18);
        FUN_1400021e4(&local_80,&local_a8);
        FUN_1400021e4(*(undefined8 *)(param_2 + 0x248),&local_80);
        lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x360) + 0x90);
        if (lVar5 != 0) {
          lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x88);
          lVar20 = 0;
          do {
            plVar16 = *(longlong **)(lVar14 + lVar20);
            if (plVar16 != (longlong *)0x0) {
              lVar6 = FUN_1402cf98a();
              if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar16[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar16[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                  lVar6 + 0x30)) {
                (**(code **)(*plVar16 + 0x2d0))(plVar16,local_50);
                FUN_1400021e4(local_50,&local_60);
                if (local_a8 != (code *)0x0) {
                  FUN_1400020a8();
                }
                local_a8 = local_60;
                uStack_a0 = (ulonglong)uStack_58;
                break;
              }
            }
            lVar20 = lVar20 + 8;
          } while (lVar5 * 8 != lVar20);
        }
        lVar5 = FUN_1411c1a08();
        FUN_140b9d292(lVar5 + 0x48,&local_a8,&local_80);
        if (local_80 != (undefined **)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      local_80 = &PTR_LAB_149e668b0;
      local_78 = 0;
      FUN_1405bceb4(&local_80);
      local_80 = &PTR_FUN_14aae59d0;
      plVar16 = (longlong *)(param_2 + 0x290);
      local_70 = 0;
      uStack_68 = 0;
      if (0 < *(int *)(param_2 + 0x298)) {
        if (DAT_14c927740 == 0) {
          local_f0 = &local_a8;
          local_a8 = FUN_1449e2820;
          local_e0 = FUN_14081d0ea;
          local_e8 = FUN_14081d0ea;
          local_f8 = &LAB_146856450;
          local_100 = FUN_1427b121c;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000021;
          local_120 = 8;
          local_128 = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        local_128 = 0;
        FUN_146123bc0(&local_a8,DAT_14c927740,1,0x10);
        if (local_98 != (longlong *)0x0) {
          do {
            lVar5 = *local_98;
            if (lVar5 != 0) {
              if (DAT_14cae8b20 == 0) {
                local_60 = (code *)&LAB_14355090c;
                local_e0 = FUN_14081d0ea;
                local_e8 = FUN_14081d0ea;
                local_f0 = &local_60;
                local_f8 = &LAB_147b8e16d;
                local_100 = (code *)&LAB_140810a38;
                local_108 = L"Engine";
                local_110 = 0x800000000;
                local_118 = 0x10000000;
                local_120 = 8;
                local_128 = 0x3f0;
                FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
              }
              if (((*(int *)(DAT_14cae8b20 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38))
                  && (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                       (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8) == DAT_14cae8b20 + 0x30)) &&
                 (0 < *(int *)(param_2 + 0x298))) {
                lVar20 = 0;
                lVar14 = lVar5;
LAB_1437653d0:
                do {
                  lVar6 = lVar14;
                  lVar14 = lVar6;
                  if (*(longlong *)(lVar6 + 0x20) != 0) {
                    lVar14 = *(longlong *)(lVar6 + 0x20);
                    if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto LAB_1437653d0;
                    lVar14 = FUN_142840154(lVar6);
                  }
                  if (lVar14 == 0) {
                    lVar14 = *(longlong *)(lVar6 + 0x20);
                  }
                  else {
                    if ((*(longlong *)(lVar14 + 0x18) == *(longlong *)(*plVar16 + lVar20 * 0x10)) &&
                       ((*(byte *)(*plVar16 + lVar20 * 0x10 + 8) & 3) != 0)) {
                      if (DAT_14c950c29 == '\x01') {
                        FUN_1456cec3c(lVar5);
                      }
                      uVar13 = uStack_68;
                      lVar14 = (longlong)(int)uStack_68;
                      uVar4 = (int)uStack_68 + 1;
                      uStack_68 = CONCAT44(uStack_68._4_4_,uVar4);
                      if (uStack_68._4_4_ < uVar4) {
                        FUN_1458edfd8(&local_70,uVar13 & 0xffffffff);
                      }
                      *(longlong *)(local_70 + lVar14 * 8) = lVar5;
                      if (DAT_14c950c29 == '\x01') {
                        FUN_1456cec3c(lVar5);
                      }
                      break;
                    }
                    lVar20 = lVar20 + 1;
                    lVar14 = lVar5;
                    if (*(int *)(param_2 + 0x298) <= lVar20) break;
                  }
                } while( true );
              }
            }
            FUN_1468bea3c(&local_a8);
          } while (local_98 != (longlong *)0x0);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(local_a8 + 0x30));
      }
      lVar5 = *(longlong *)(param_2 + 0x360);
      *(undefined4 *)(lVar5 + 0x778) = 0;
      if (*(int *)(lVar5 + 0x77c) != 0) {
        FUN_1402191ca(lVar5 + 0x770,0);
      }
      lVar5 = (longlong)*(int *)(*(longlong *)(param_2 + 0x360) + 0x90);
      if (lVar5 != 0) {
        lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x88);
        lVar20 = 0;
        do {
          lVar6 = *(longlong *)(lVar14 + lVar20);
          if (lVar6 != 0) {
            FUN_140d7233c(lVar6,1);
          }
          lVar20 = lVar20 + 8;
        } while (lVar5 * 8 != lVar20);
      }
      lVar14 = 0;
      FUN_1427e390c(0,1);
      lVar5 = **(longlong **)(param_2 + 0x248);
      *(longlong *)(*(longlong *)(param_2 + 0x360) + 0x780) = lVar5;
      plVar11 = (longlong *)(param_2 + 600);
      iVar3 = *(int *)(param_2 + 0x260);
      local_d0 = plVar11;
      if (0 < iVar3) {
        lVar20 = 0;
LAB_143764d7b:
        lVar14 = *(longlong *)(*plVar11 + lVar20 * 8);
        lVar6 = lVar14;
        if (lVar14 != 0) {
LAB_143764d8a:
          lVar9 = lVar6;
          lVar6 = lVar9;
          if (*(longlong *)(lVar9 + 0x20) != 0) goto code_r0x000143764d99;
          goto LAB_143764db0;
        }
        goto LAB_143764dc7;
      }
      goto LAB_143764dd5;
    }
    pwVar10 = L"Map change is not ready yet";
  }
  FUN_14020fad6(param_2 + 0x268,pwVar10);
  uVar8 = 0;
  goto LAB_143764aba;
code_r0x000143764d99:
  lVar6 = *(longlong *)(lVar9 + 0x20);
  if ((*(uint *)(lVar9 + 8) >> 0x1c & 1) == 0) goto LAB_143764d8a;
  lVar6 = FUN_142840154(lVar9);
  plVar11 = local_d0;
LAB_143764db0:
  if (lVar6 == 0) {
    lVar6 = *(longlong *)(lVar9 + 0x20);
    goto LAB_143764d8a;
  }
  if (lVar5 == *(longlong *)(lVar6 + 0x18)) goto LAB_143764dd5;
  iVar3 = *(int *)(param_2 + 0x260);
LAB_143764dc7:
  lVar20 = lVar20 + 1;
  if (iVar3 <= lVar20) goto code_r0x000143764dd2;
  goto LAB_143764d7b;
code_r0x000143764dd2:
  lVar14 = 0;
LAB_143764dd5:
  lVar20 = lVar14;
LAB_143764ddf:
  lVar6 = lVar20;
  lVar20 = lVar6;
  if (*(longlong *)(lVar6 + 0x20) != 0) goto code_r0x000143764dee;
  goto LAB_143764e00;
code_r0x000143764dee:
  lVar20 = *(longlong *)(lVar6 + 0x20);
  if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) goto LAB_143764ddf;
  lVar20 = FUN_142840154(lVar6);
LAB_143764e00:
  if (lVar20 == 0) {
    lVar20 = *(longlong *)(lVar6 + 0x20);
    goto LAB_143764ddf;
  }
  local_a8 = *(code **)(lVar20 + 0x18);
  FUN_1400021e4(&local_a8,&local_60);
  pcVar17 = (code *)&DAT_149dfb77a;
  if (uStack_58 != 0) {
    pcVar17 = local_60;
  }
  FUN_140002266(&local_a8,L"LevelStreamingPersistent_%s",pcVar17);
  pcVar17 = (code *)&DAT_149dfb77a;
  if ((int)uStack_a0 != 0) {
    pcVar17 = local_a8;
  }
  plVar11 = &local_b0;
  FUN_1446f470e(plVar11,pcVar17,1);
  plVar7 = (longlong *)FUN_147d81cf6(*(undefined8 *)(param_2 + 0x360),local_b0);
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (code *)0x0) {
    FUN_1400020a8();
  }
  FUN_140831bbe(*(undefined8 *)(param_2 + 0x360),plVar7);
  (**(code **)(*plVar7 + 0x308))(plVar7,lVar14);
  FUN_147b98faa(plVar7,lVar5);
  lVar5 = *(longlong *)(lVar14 + 0x20);
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  FUN_147d81dbe(&local_a8,*(undefined4 *)(lVar5 + 0x90));
  uVar13 = (longlong)*(int *)(lVar5 + 0x90);
  if (0 < (longlong)*(int *)(lVar5 + 0x90)) {
    do {
      plVar7 = *(longlong **)(*(longlong *)(lVar5 + 0x88) + -8 + uVar13 * 8);
      (**(code **)(*plVar7 + 0x170))(plVar7,0,*(undefined8 *)(param_2 + 0x360),0x10);
      FUN_1408349ec(lVar5);
      *(longlong **)(local_a8 + uVar13 * 8 + -8) = plVar7;
      bVar2 = 1 < uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar2);
  }
  pcVar17 = local_a8;
  lVar5 = *(longlong *)(param_2 + 0x360);
  lVar14 = (longlong)(int)uStack_a0;
  if (lVar14 != 0) {
    lVar20 = 0;
    do {
      FUN_140831bbe(lVar5,*(undefined8 *)(pcVar17 + lVar20));
      lVar20 = lVar20 + 8;
    } while (lVar14 * 8 != lVar20);
    lVar5 = *(longlong *)(param_2 + 0x360);
  }
  if ((longlong)*(int *)(lVar5 + 0x90) != 0) {
    plVar11 = *(longlong **)(lVar5 + 0x88);
    local_c0 = plVar11 + *(int *)(lVar5 + 0x90);
    do {
      plVar7 = (longlong *)*plVar11;
      if ((plVar7 != (longlong *)0x0) && (0 < *(int *)(param_2 + 0x250))) {
        lVar5 = 0;
        do {
          lVar14 = *(longlong *)(param_2 + 0x248);
          (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_b8);
          if (*(longlong *)(lVar14 + lVar5 * 8) == local_b8) {
            (**(code **)(*plVar7 + 0x2c0))(plVar7,1);
            FUN_14039914a(plVar7,1);
            iVar3 = FUN_14490d72a(*(undefined8 *)(param_2 + 0x360));
            if (iVar3 != 3) {
              local_d1 = (**(code **)(*plVar7 + 0x2d8))(plVar7);
              local_d2 = (**(code **)(*plVar7 + 0x2e0))(plVar7);
              lVar5 = *(longlong *)(param_2 + 0x360);
              iVar3 = *(int *)(lVar5 + 0x238);
              if (0 < iVar3) {
                lVar14 = 0;
                do {
                  iVar1 = *(int *)(*(longlong *)(lVar5 + 0x230) + lVar14 * 8 + 4);
                  if (iVar1 != 0) {
                    uVar4 = *(uint *)(*(longlong *)(lVar5 + 0x230) + lVar14 * 8);
                    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
                      plVar18 = (longlong *)
                                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
                      if ((plVar18 != (longlong *)0x0) &&
                         ((((int)plVar18[2] == iVar1 && ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)
                           ) && (*plVar18 != 0)))) {
                        local_118 = *(undefined4 *)((longlong)plVar7 + 0xe4);
                        uVar13 = (ulonglong)
                                 CONCAT11((char)(uVar4 >> 0x18),*(byte *)((longlong)plVar7 + 0x10a))
                                 & 0xffffffffffffff08;
                        local_120 = CONCAT31(local_120._1_3_,(byte)uVar13 >> 3);
                        local_128 = CONCAT31(local_128._1_3_,
                                             (*(byte *)((longlong)plVar7 + 0x10a) & 4) >> 2);
                        FUN_147ca0828(*plVar18,plVar7,CONCAT71((int7)(uVar13 >> 8),local_d1),
                                      local_d2);
                        iVar3 = *(int *)(lVar5 + 0x238);
                      }
                    }
                  }
                  lVar14 = lVar14 + 1;
                } while ((int)lVar14 < iVar3);
              }
            }
            break;
          }
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_2 + 0x250));
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != local_c0);
    lVar5 = *(longlong *)(param_2 + 0x360);
  }
  FUN_143786ce4(lVar5,2);
  plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x360) + 0x1d8);
  if ((plVar7 != (longlong *)0x0) ||
     (((DAT_14cb0d2b0 != 0 && (*(longlong *)(DAT_14cb0d2b0 + 0xf50) != 0)) &&
      ((*(longlong *)(DAT_14cb0d2b0 + 0xf60) != 0 &&
       (plVar7 = *(longlong **)(*(longlong *)(DAT_14cb0d2b0 + 0xf50) + 0x98),
       plVar7 != (longlong *)0x0)))))) {
    (**(code **)(*plVar7 + 0x68))(plVar7,0);
  }
  FUN_1427e390c(0,1);
  if ((longlong)*(int *)(param_2 + 0x298) < 1) {
    uVar13 = CONCAT71((int7)((ulonglong)plVar11 >> 8),2);
  }
  else {
    puVar19 = (undefined8 *)*plVar16;
    puVar15 = puVar19 + (longlong)*(int *)(param_2 + 0x298) * 2;
    do {
      lVar14 = (longlong)*(int *)(*(longlong *)(param_2 + 0x360) + 0x90);
      lVar5 = 0;
      if (lVar14 != 0) {
        plVar11 = *(longlong **)(*(longlong *)(param_2 + 0x360) + 0x88);
        lVar5 = lVar14 << 3;
        do {
          plVar7 = (longlong *)*plVar11;
          if ((plVar7 != (longlong *)0x0) &&
             (ppcVar12 = &local_60, (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_60),
             local_60 == (code *)*puVar19)) {
            if (plVar11 != (longlong *)0x0) {
              (**(code **)(*(longlong *)*plVar11 + 0x2c0))
                        ((longlong *)*plVar11,
                         CONCAT71((int7)((ulonglong)ppcVar12 >> 8),*(undefined1 *)(puVar19 + 1)) &
                         0xffffffffffffff01);
              FUN_14039914a(*plVar11,(*(uint *)(puVar19 + 1) & 2) >> 1);
              FUN_147b9824e(*plVar11,*(undefined4 *)((longlong)puVar19 + 0xc));
            }
            break;
          }
          plVar11 = plVar11 + 1;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      puVar19 = puVar19 + 2;
    } while (puVar19 != puVar15);
    *(undefined4 *)(param_2 + 0x298) = 0;
    uVar13 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
    if (*(int *)(param_2 + 0x29c) != 0) {
      FUN_147d87c54(plVar16);
    }
  }
  FUN_143786ce4(*(undefined8 *)(param_2 + 0x360),uVar13 & 0xffffffff);
  *(undefined4 *)(*(longlong *)(param_2 + 0x360) + 0x68c) = 3;
  *(undefined4 *)(param_2 + 0x250) = 0;
  if (*(int *)(param_2 + 0x254) != 0) {
    FUN_1402191ca((longlong *)(param_2 + 0x248),0);
  }
  *(undefined4 *)(param_2 + 0x260) = 0;
  if (*(int *)(param_2 + 0x264) != 0) {
    FUN_14572c66e(local_d0,0);
  }
  FUN_14020fad6(param_2 + 0x268,&DAT_149dfb77a);
  plVar16 = (longlong *)FUN_140083894();
  (**(code **)(*plVar16 + 0x30))(plVar16);
  if (local_c8 != 0) {
    lVar5 = FUN_1411c1a08();
    FUN_1447f69b6(lVar5 + 0x60);
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_FUN_14aae59d0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_80 = &PTR_LAB_149e668b0;
  if ((DAT_14c948580 != 0) && (local_78._1_1_ == '\x01')) {
    FUN_14019e20a(DAT_14c948580,&local_80);
  }
  uVar8 = 1;
LAB_143764aba:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 143765617 FUN_143765617 body=69 status=ok
// SIG undefined FUN_143765617(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143765617(void)

{
  _DAT_14cb0d078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143765659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d080,1);
  return;
}



// FUNCTION 14376565c FUN_14376565c body=69 status=ok
// SIG undefined FUN_14376565c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14376565c(void)

{
  _DAT_14cb0d090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014376569e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0d098,1);
  return;
}


