// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1437807c9 FUN_1437807c9 body=69 status=ok
// SIG undefined FUN_1437807c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437807c9(void)

{
  _DAT_14cb0fa18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378080b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fa20,1);
  return;
}



// FUNCTION 14378080e FUN_14378080e body=69 status=ok
// SIG undefined FUN_14378080e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378080e(void)

{
  _DAT_14cb0fa30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143780850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fa38,1);
  return;
}



// FUNCTION 143780853 FUN_143780853 body=69 status=ok
// SIG undefined FUN_143780853(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143780853(void)

{
  _DAT_14cb0fa48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143780895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fa50,1);
  return;
}



// FUNCTION 143780898 FUN_143780898 body=69 status=ok
// SIG undefined FUN_143780898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143780898(void)

{
  _DAT_14cb0fa58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437808da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fa60,1);
  return;
}



// FUNCTION 14378090e FUN_14378090e body=192 status=ok
// SIG undefined FUN_14378090e(void)

longlong FUN_14378090e(longlong param_1,undefined8 param_2,undefined4 param_3,byte param_4,
                      byte param_5,undefined8 param_6,longlong param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_144929100(param_1 + 0xe8,param_6);
  if (param_4 != 0) {
    puVar4 = (undefined4 *)(param_7 + 0x14);
    uVar2 = 0;
    do {
      if ((param_5 >> ((uint)uVar2 & 0x1f) & 1) != 0) {
        lVar3 = *(longlong *)(puVar4 + -5);
        if (*(char *)(lVar3 + 0x52) != '\0') {
          lVar3 = 0;
        }
        FUN_14378377c(param_1 + 0x10,param_2,lVar1,lVar3,puVar4[-1],*puVar4,param_3);
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 4;
      puVar4 = puVar4 + 8;
    } while (param_4 != uVar2);
  }
  return param_1 + 0x10;
}



// FUNCTION 1437809ce FUN_1437809ce body=214 status=ok
// SIG undefined FUN_1437809ce(void)

void FUN_1437809ce(void)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  
  iVar5 = DAT_14c7590b0;
  if ((DAT_14cb0fa68 != (longlong *)0x0) &&
     (uVar1 = *(uint *)(DAT_14cb0fa40 + 4), uVar1 < DAT_14cb0fae0)) {
    uVar2 = *(uint *)(DAT_14cb0fa28 + 4);
    plVar6 = DAT_14cb0fa68;
    while (plVar6[3] != 0) {
      plVar3 = (longlong *)*plVar6;
      if ((plVar6[2] != 0) && ((*(byte *)(plVar6[2] + 0xa0) & 1) == 0)) {
        return;
      }
      if ((int)plVar6[0xd] != 0) {
        return;
      }
      if ((uint)(iVar5 - *(int *)((longlong)plVar6 + 100)) <= uVar2) {
        return;
      }
      plVar4 = (longlong *)plVar6[1];
      if (*plVar6 != 0) {
        *(longlong **)(*plVar6 + 8) = plVar4;
      }
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      if (*(longlong *)(*(longlong *)(plVar6[3] + 0x28) + (longlong)(int)plVar6[0xc] * 8) != 0) {
        *(undefined8 *)(*(longlong *)(plVar6[3] + 0x28) + (longlong)(int)plVar6[0xc] * 8) = 0;
        FUN_1401376d8();
      }
      if (plVar3 == (longlong *)0x0) {
        return;
      }
      plVar6 = plVar3;
      if (DAT_14cb0fae0 <= uVar1) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 143780aa4 FUN_143780aa4 body=1509 status=ok
// SIG undefined FUN_143780aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_143780aa4(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  uint *puVar18;
  longlong lVar19;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  longlong *local_90;
  uint local_88;
  undefined1 local_79;
  undefined1 local_78 [32];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar19 = (longlong)param_4;
  uVar9 = (ulonglong)
          *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8) + 0x60 + lVar19 * 0x90);
  if (uVar9 < 5) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 3;
  }
  else {
    lVar4 = *(longlong *)(param_1 + 0x28);
    lVar5 = *(longlong *)(lVar4 + lVar19 * 8);
    if (lVar5 == 0) {
      uVar14 = 0;
      local_58 = (undefined1 *)0x0;
      local_50 = 0x400000000;
      local_98 = param_5;
      local_a8 = 0;
      local_a0 = uVar9;
      FUN_14378108a(param_1,&local_90);
      if ((local_88 & 0xfffffffe) == 2) {
        DAT_14cb0fae0 = DAT_14cb0fae0 + 1;
        puVar11 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        *puVar11 = 0;
        puVar11[1] = 0;
        puVar11[2] = 0;
        puVar11[3] = 0;
        puVar11[4] = 0;
        puVar11[5] = 0;
        puVar11[6] = 0;
        puVar11[7] = 0;
        puVar11[8] = 0;
        puVar11[9] = 0;
        puVar11[10] = 0;
        puVar11[0xb] = 0;
        puVar11[0xc] = 0;
        puVar11[0xd] = 0;
        puVar17 = *(undefined8 **)(lVar4 + lVar19 * 8);
        if (puVar17 != puVar11) {
          *(undefined8 **)(lVar4 + lVar19 * 8) = puVar11;
          FUN_1401376d8();
          puVar17 = *(undefined8 **)(lVar4 + lVar19 * 8);
        }
        if (DAT_14cb0fa68 == (undefined *)0x0) {
          _DAT_14cb0fa70 = 0;
          DAT_14cb0fa68 = &DAT_14cb0fa70;
          DAT_14cb0fa78 = &DAT_14cb0fa68;
        }
        puVar17[1] = DAT_14cb0fa78;
        DAT_14cb0fa78 = puVar17;
        *puVar17 = &DAT_14cb0fa70;
        if ((undefined8 *)puVar17[1] != (undefined8 *)0x0) {
          *(undefined8 *)puVar17[1] = puVar17;
        }
        *(longlong *)(*(longlong *)(lVar4 + lVar19 * 8) + 0x18) = param_1;
        *(int *)(*(longlong *)(lVar4 + lVar19 * 8) + 0x60) = param_4;
        *(undefined4 *)(*(longlong *)(lVar4 + lVar19 * 8) + 100) = DAT_14c7590b0;
        uVar14 = *(undefined8 *)(lVar4 + lVar19 * 8);
        puVar17 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar13 = (uint *)*puVar17;
        if (puVar13 != (uint *)0x0) goto LAB_143780e39;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14379017d);
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
          *puVar17 = puVar12;
          FUN_140217a48(puVar17);
          puVar13 = (uint *)*puVar17;
LAB_143780e39:
          puVar11 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar11 + 0x17);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar2 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar17;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar17 = puVar13;
            puVar11 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar11 + 0x17);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143780eb9;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143780eb9:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        FUN_1447247dc(puVar11,local_78);
        *puVar11 = &PTR_FUN_14ab09598;
        puVar11[0x15] = local_90;
        if (local_90 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_90 + 1) = (int)local_90[1] + 1;
          UNLOCK();
        }
        puVar11[0x16] = uVar14;
        if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
        }
        puVar11[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar11[9] = puVar11;
        puVar11[10] = puVar11;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar11[0xf] = uVar14;
        puVar11[0x10] = 0xc80000527800b400;
        *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
        if (puVar11 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
          UNLOCK();
        }
        local_79 = 1;
        FUN_1447439e4(puVar11);
        lVar5 = *(longlong *)(lVar4 + lVar19 * 8);
        puVar17 = *(undefined8 **)(lVar5 + 0x10);
        *(undefined8 **)(lVar5 + 0x10) = puVar11;
        if (puVar17 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
        lVar5 = *(longlong *)(lVar4 + lVar19 * 8);
        iVar3 = *(int *)(param_3 + 0x28);
        *(uint *)(param_3 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0x2c) < iVar3 + 1U) {
          FUN_14476a5c8(param_3,iVar3);
        }
        lVar10 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar10 = param_3;
        }
        lVar5 = *(longlong *)(lVar5 + 0x10);
        *(longlong *)(lVar10 + (longlong)iVar3 * 8) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        uVar14 = *(undefined8 *)(lVar4 + lVar19 * 8);
        local_88 = 2;
      }
      *param_2 = uVar14;
      *(uint *)(param_2 + 1) = local_88;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_90 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)(*local_90 + 0x28))(local_90,1);
        }
      }
      puVar16 = local_78;
      if (local_58 != (undefined1 *)0x0) {
        puVar16 = local_58;
      }
      FUN_144717c65(puVar16,local_50 & 0xffffffff);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      lVar5 = *(longlong *)(lVar5 + 0x10);
      uVar8 = 3;
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0xa0) & 1) == 0)) {
        lVar5 = *(longlong *)(lVar4 + lVar19 * 8);
        iVar3 = *(int *)(param_3 + 0x28);
        *(uint *)(param_3 + 0x28) = iVar3 + 1U;
        if (*(uint *)(param_3 + 0x2c) < iVar3 + 1U) {
          FUN_14476a5c8(param_3,iVar3);
        }
        lVar10 = *(longlong *)(param_3 + 0x20);
        if (*(longlong *)(param_3 + 0x20) == 0) {
          lVar10 = param_3;
        }
        lVar5 = *(longlong *)(lVar5 + 0x10);
        *(longlong *)(lVar10 + (longlong)iVar3 * 8) = lVar5;
        uVar8 = 2;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
      }
      plVar6 = *(longlong **)(lVar4 + lVar19 * 8);
      plVar7 = (longlong *)plVar6[1];
      if (*plVar6 != 0) {
        *(longlong **)(*plVar6 + 8) = plVar7;
      }
      if (plVar7 != (longlong *)0x0) {
        *plVar7 = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      puVar17 = *(undefined8 **)(lVar4 + lVar19 * 8);
      if (DAT_14cb0fa68 == (undefined *)0x0) {
        _DAT_14cb0fa70 = 0;
        DAT_14cb0fa68 = &DAT_14cb0fa70;
        DAT_14cb0fa78 = &DAT_14cb0fa68;
      }
      puVar17[1] = DAT_14cb0fa78;
      DAT_14cb0fa78 = puVar17;
      *puVar17 = &DAT_14cb0fa70;
      if ((undefined8 *)puVar17[1] != (undefined8 *)0x0) {
        *(undefined8 *)puVar17[1] = puVar17;
      }
      *(undefined4 *)(*(longlong *)(lVar4 + lVar19 * 8) + 100) = DAT_14c7590b0;
      *param_2 = *(undefined8 *)(lVar4 + lVar19 * 8);
      *(undefined4 *)(param_2 + 1) = uVar8;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14378108a FUN_14378108a body=481 status=ok
// SIG undefined FUN_14378108a(void)

undefined8 *
FUN_14378108a(longlong param_1,undefined8 *param_2,undefined8 param_3,uint param_4,
             undefined8 param_5,undefined8 param_6,int param_7)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  uint local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *(longlong *)(param_1 + 0x18);
  lVar10 = (longlong)(int)param_4;
  plVar7 = *(longlong **)(lVar8 + lVar10 * 8);
  if (plVar7 == (longlong *)0x0) {
    lVar6 = lVar10 * 0x90 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8);
    if (*(char *)(lVar6 + 0x2c) != '\0' || *(int *)(lVar6 + 0x28) != 0) {
      uVar11 = 0xffffffffffffffff;
      if ((ulonglong)*(uint5 *)(lVar6 + 0x2d) != 0xffffffffff) {
        uVar11 = (ulonglong)*(uint5 *)(lVar6 + 0x2d);
      }
      uVar3 = FUN_140314cfa();
      plVar4 = (longlong *)FUN_142749ecc(uVar3,uVar11);
      plVar2 = *(longlong **)(lVar8 + lVar10 * 8);
      plVar7 = plVar2;
      if ((plVar2 != plVar4) &&
         (*(longlong **)(lVar8 + lVar10 * 8) = plVar4, plVar7 = plVar4, plVar2 != (longlong *)0x0))
      {
        (**(code **)*plVar2)(plVar2,1);
        plVar4 = *(longlong **)(lVar8 + lVar10 * 8);
        plVar7 = plVar4;
      }
      if (plVar4 != (longlong *)0x0) goto LAB_1437810c5;
    }
    lVar8 = param_1 + 0x38;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x48);
    }
    uVar5 = param_4 + 0x1f;
    if (-1 < (int)param_4) {
      uVar5 = param_4;
    }
    uVar1 = *(uint *)(lVar8 + (longlong)((int)uVar5 >> 5) * 4);
    if ((uVar1 >> (param_4 & 0x1f) & 1) == 0) {
      *(uint *)(lVar8 + (longlong)((int)uVar5 >> 5) * 4) = uVar1 | 1 << ((byte)param_4 & 0x1f);
    }
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
  }
  else {
LAB_1437810c5:
    puVar9 = &DAT_14c761e8c;
    if (param_7 == 1) {
      puVar9 = &DAT_14c761e90;
    }
    local_50 = *puVar9 | 0x200;
    local_58 = param_6;
    (**(code **)(*plVar7 + 8))(plVar7,&local_48,param_3,param_5);
    if (local_48 == (longlong *)0x0) {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 1;
    }
    else {
      *param_2 = local_48;
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      *(undefined4 *)(param_2 + 1) = 2;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_48 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)(*local_48 + 0x28))(local_48,1);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14378126c FUN_14378126c body=273 status=ok
// SIG undefined FUN_14378126c(void)

void FUN_14378126c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [44];
  undefined1 local_9c [4];
  longlong local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0xb0);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xa8) + 0x38;
    lVar1 = lVar1 * 0x90;
    do {
      FUN_1467e8be8(local_98,lVar2);
      FUN_140e830ae(&local_88,local_9c,local_98,0);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x90;
      lVar1 = lVar1 + -0x90;
    } while (lVar1 != 0);
  }
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(&local_88);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14378137e FUN_14378137e body=69 status=ok
// SIG undefined FUN_14378137e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378137e(void)

{
  _DAT_14cb0fb48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437813c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fb50,1);
  return;
}



// FUNCTION 1437813e3 FUN_1437813e3 body=69 status=ok
// SIG undefined FUN_1437813e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437813e3(void)

{
  _DAT_14cb0fcd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143781425. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fce0,1);
  return;
}



// FUNCTION 143781428 FUN_143781428 body=69 status=ok
// SIG undefined FUN_143781428(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143781428(void)

{
  _DAT_14cb0fcf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378146a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fcf8,1);
  return;
}



// FUNCTION 14378146e FUN_14378146e body=3794 status=ok
// SIG undefined FUN_14378146e(void)

void FUN_14378146e(uint *param_1,longlong *param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 uVar11;
  uint uVar12;
  longlong *plVar13;
  code *pcVar14;
  int iVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  uint *puVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 local_100;
  uint *local_f8;
  ulonglong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  uint local_6c;
  uint local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2[0xd] == 0) {
    bVar29 = false;
  }
  else {
    bVar29 = *(longlong *)(param_2[0xd] + 0x10) != 0;
  }
  puVar2 = (ulonglong *)param_2[1];
  local_e8 = param_3;
  if (puVar2[1] < *puVar2 + 4) {
    local_88 = (undefined2 *)CONCAT44(local_88._4_4_,(uint)bVar29);
    (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    if (1 < (uint)local_88) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  puVar24 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar24;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar24 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 4,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[4] = *puVar24;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar24 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 5,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[5] = *puVar24;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar24 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 6,4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[6] = *puVar24;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar24 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    param_1[7] = *puVar24;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1447a84cc(param_2,param_1 + 0x2e);
  if ((int)param_4 < 1) {
    puVar24 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_1[1] = *puVar24;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar24 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_1[2] = *puVar24;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    puVar24 = *(uint **)param_2[1];
    if ((uint *)((undefined8 *)param_2[1])[1] < puVar24 + 1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2);
      }
      else {
        FUN_14572512c(param_2);
      }
    }
    else {
      param_1[3] = *puVar24;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
    FUN_1447a84cc(param_2,param_1 + 0x32);
    FUN_1447a84cc(param_2,param_1 + 0x36);
    FUN_1400907be(param_2,param_1 + 0x3a);
    FUN_1447a84cc(param_2,param_1 + 0x3e);
    FUN_1447a84cc(param_2,param_1 + 0x42);
    FUN_1447a84cc(param_2,param_1 + 0x46);
    iVar21 = 0;
  }
  else {
    uVar23 = (ulonglong)param_4;
    iVar21 = *(int *)(*(longlong *)(param_1 + 0x32) + uVar23 * 4);
    local_64 = param_1[1] - param_4;
    local_68 = param_1[2] >> ((byte)param_4 & 0x1f);
    local_6c = param_1[3] >> ((byte)param_4 & 0x1f);
    local_88 = (undefined2 *)0x0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_f0 = CONCAT44(local_f0._4_4_,param_4);
    iVar15 = param_1[0x34] - param_4;
    if (iVar15 < 0) {
LAB_1437822e8:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar15);
    }
    if (iVar15 != 0) {
      FUN_14480809c(&local_88);
      if ((int)local_f0 < (int)param_1[0x34]) {
        uVar20 = uVar23;
        do {
          uVar10 = uStack_80;
          iVar15 = *(int *)(*(longlong *)(param_1 + 0x32) + uVar20 * 4);
          lVar27 = (longlong)(int)uStack_80;
          uVar12 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar12);
          if (uStack_80._4_4_ < uVar12) {
            FUN_1447808da(&local_88,uVar10 & 0xffffffff);
          }
          *(int *)(local_88 + lVar27 * 2) = iVar15 - iVar21;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)param_1[0x34]);
      }
    }
    uVar12 = param_1[0x38];
    iVar9 = (int)local_f0;
    iVar15 = uVar12 - (int)local_f0;
    if (iVar15 < 0) goto LAB_1437822e8;
    if ((int)uStack_90._4_4_ < iVar15) {
      FUN_14480809c(&local_98);
      uVar12 = param_1[0x38];
    }
    if (iVar9 < (int)uVar12) {
      uVar20 = uVar23;
      do {
        uVar10 = uStack_90;
        lVar27 = *(longlong *)(param_1 + 0x36);
        lVar28 = (longlong)(int)uStack_90;
        uVar12 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar12);
        if (uStack_90._4_4_ < uVar12) {
          FUN_1447808da(&local_98,uVar10 & 0xffffffff);
        }
        *(undefined4 *)(local_98 + lVar28 * 4) = *(undefined4 *)(lVar27 + uVar20 * 4);
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < (int)param_1[0x38]);
    }
    uVar12 = param_1[0x3c];
    iVar9 = (int)local_f0;
    iVar15 = uVar12 - (int)local_f0;
    if (iVar15 < 0) goto LAB_1437822e8;
    local_f8 = (uint *)CONCAT44(local_f8._4_4_,iVar21);
    if ((int)uStack_a0._4_4_ < iVar15) {
      FUN_140090b36(&local_a8);
      uVar12 = param_1[0x3c];
    }
    if (iVar9 < (int)uVar12) {
      lVar27 = uVar23 * 0x30;
      uVar20 = local_f0 & 0xffffffff;
      do {
        uVar10 = uStack_a0;
        lVar28 = *(longlong *)(param_1 + 0x3a);
        lVar19 = (longlong)(int)uStack_a0;
        uVar12 = (int)uStack_a0 + 1;
        uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar12);
        if (uStack_a0._4_4_ < uVar12) {
          FUN_147daf842(&local_a8,uVar10 & 0xffffffff);
        }
        FUN_147daf8d6(lVar19 * 0x30 + local_a8,lVar28 + lVar27);
        uVar12 = (int)uVar20 + 1;
        uVar20 = (ulonglong)uVar12;
        lVar27 = lVar27 + 0x30;
      } while ((int)uVar12 < (int)param_1[0x3c]);
    }
    iVar21 = (int)local_f8;
    if (0 < (int)param_1[0x48]) {
      uVar12 = param_1[0x40];
      iVar15 = uVar12 - (int)local_f8;
      if (iVar15 < 0) goto LAB_1437822e8;
      uVar26 = *(uint *)(*(longlong *)(param_1 + 0x42) + uVar23 * 4);
      lVar27 = (longlong)(int)uVar26;
      if ((int)uStack_b0._4_4_ < iVar15) {
        FUN_14480809c(&local_b8);
        uVar12 = param_1[0x40];
      }
      if (iVar21 < (int)uVar12) {
        lVar28 = (longlong)(int)local_f8;
        do {
          uVar20 = uStack_b0;
          uVar12 = *(uint *)(*(longlong *)(param_1 + 0x3e) + lVar28 * 4);
          iVar21 = uVar12 - uVar26;
          if (uVar12 < uVar26) {
            iVar21 = 0;
          }
          lVar19 = (longlong)(int)uStack_b0;
          uVar12 = (int)uStack_b0 + 1;
          uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar12);
          if (uStack_b0._4_4_ < uVar12) {
            FUN_1447808da(&local_b8,uVar20 & 0xffffffff);
          }
          *(int *)(local_b8 + lVar19 * 4) = iVar21;
          lVar28 = lVar28 + 1;
        } while (lVar28 < (int)param_1[0x40]);
      }
      uVar12 = param_1[0x44];
      iVar9 = (int)local_f0;
      iVar15 = uVar12 - (int)local_f0;
      if (iVar15 < 0) goto LAB_1437822e8;
      if ((int)uStack_c0._4_4_ < iVar15) {
        FUN_14480809c(&local_c8);
        uVar12 = param_1[0x44];
      }
      iVar21 = (int)local_f8;
      if (iVar9 < (int)uVar12) {
        do {
          uVar20 = uStack_c0;
          iVar15 = *(int *)(*(longlong *)(param_1 + 0x42) + uVar23 * 4);
          lVar28 = (longlong)(int)uStack_c0;
          uVar12 = (int)uStack_c0 + 1;
          uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar12);
          if (uStack_c0._4_4_ < uVar12) {
            FUN_1447808da(&local_c8,uVar20 & 0xffffffff);
          }
          *(uint *)(local_c8 + lVar28 * 4) = iVar15 - uVar26;
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < (int)param_1[0x44]);
      }
      uVar12 = param_1[0x48];
      iVar15 = uVar12 - uVar26;
      if (iVar15 < 0) goto LAB_1437822e8;
      if ((int)uStack_d0._4_4_ < iVar15) {
        FUN_14480809c(&local_d8);
        uVar12 = param_1[0x48];
      }
      if ((int)uVar26 < (int)uVar12) {
        do {
          uVar23 = uStack_d0;
          lVar28 = *(longlong *)(param_1 + 0x46);
          lVar19 = (longlong)(int)uStack_d0;
          uVar12 = (int)uStack_d0 + 1;
          uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar12);
          if (uStack_d0._4_4_ < uVar12) {
            FUN_1447808da(&local_d8,uVar23 & 0xffffffff);
          }
          *(undefined4 *)(local_d8 + lVar19 * 4) = *(undefined4 *)(lVar28 + lVar27 * 4);
          lVar27 = lVar27 + 1;
        } while (lVar27 < (int)param_1[0x48]);
      }
    }
    puVar2 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_64);
      }
      else {
        FUN_14572512c(param_2,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar24 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar24) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_68);
      }
      else {
        FUN_14572512c(param_2,&local_68);
      }
    }
    else {
      local_68 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar24;
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar24 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar24) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_6c);
      }
      else {
        FUN_14572512c(param_2,&local_6c);
      }
    }
    else {
      local_6c = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar24;
    }
    FUN_1447a84cc(param_2,&local_88);
    FUN_1447a84cc(param_2,&local_98);
    FUN_1400907be(param_2,&local_a8);
    FUN_1447a84cc(param_2,&local_b8);
    FUN_1447a84cc(param_2,&local_c8);
    FUN_1447a84cc(param_2,&local_d8);
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_1400ea480(local_a8,uStack_a0 & 0xffffffff);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  lVar27 = FUN_141165238();
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    uVar12 = *param_1;
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      if (uVar12 == 0) goto LAB_143781e3b;
      uVar23 = 0;
      do {
        if ((longlong)*(int *)(lVar27 + 0x48) != 0) {
          lVar28 = 0;
          do {
            if (*(ulonglong *)(*(longlong *)(lVar27 + 0x40) + 8 + lVar28) ==
                (ulonglong)*(byte *)((longlong)param_1 + uVar23 + 0x20)) {
              local_98 = *(longlong *)(*(longlong *)(lVar27 + 0x40) + lVar28);
              goto LAB_143781d27;
            }
            lVar28 = lVar28 + 0x10;
          } while ((longlong)*(int *)(lVar27 + 0x48) * 0x10 != lVar28);
        }
        local_98 = 0;
LAB_143781d27:
        FUN_14029eeae(&local_98,&local_88);
        FUN_14021219d(param_2,&local_88);
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        uVar23 = uVar23 + 1;
        uVar12 = *param_1;
      } while (uVar23 < uVar12);
    }
  }
  else {
    if (*param_1 == 0) goto LAB_143781e3b;
    uVar23 = 0;
    do {
      local_88 = (undefined2 *)0x0;
      uStack_80 = 0;
      FUN_14021219d(param_2,&local_88);
      puVar16 = &DAT_149dfb77a;
      if ((int)uStack_80 != 0) {
        puVar16 = local_88;
      }
      FUN_1446f470e(&local_e0,puVar16,1);
      iVar15 = FUN_1448e5bf4(lVar27,local_e0,0);
      if (iVar15 == -1) {
        uVar11 = 0xff;
      }
      else {
        uVar11 = (undefined1)
                 *(undefined8 *)(*(longlong *)(lVar27 + 0x40) + 8 + (longlong)iVar15 * 0x10);
      }
      *(undefined1 *)((longlong)param_1 + uVar23 + 0x20) = uVar11;
      if (local_88 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar23 = uVar23 + 1;
      uVar12 = *param_1;
    } while (uVar23 < uVar12);
  }
  if (uVar12 != 0) {
    puVar24 = param_1 + 10;
    uVar23 = 0;
    do {
      FUN_1408ef3d7(param_2,puVar24);
      uVar23 = uVar23 + 1;
      puVar24 = puVar24 + 4;
    } while (uVar23 < *param_1);
  }
LAB_143781e3b:
  local_88 = (undefined2 *)CONCAT44(local_88._4_4_,param_1[0x2c] - iVar21);
  puVar2 = (ulonglong *)param_2[1];
  puVar17 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar17) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_88,4);
    }
    else {
      FUN_14572512c(param_2,&local_88);
    }
  }
  else {
    local_88 = (undefined2 *)CONCAT44(local_88._4_4_,*(undefined4 *)*puVar2);
    *puVar2 = (ulonglong)puVar17;
  }
  local_f8 = param_1 + 0x2a;
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    if ((int)(uint)local_88 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)local_88 & 0xffffffff);
    }
    if ((int)param_1[0x2d] < (int)(uint)local_88) {
      FUN_1417fa678(local_f8,(ulonglong)local_88 & 0xffffffff);
    }
    puVar24 = local_f8;
    uVar12 = param_1[0x2c];
    if ((int)uVar12 < (int)(uint)local_88) {
      param_1[0x2c] = (uint)local_88;
      uVar26 = (uint)local_88 - uVar12;
      if (param_1[0x2d] - uVar12 < uVar26) {
        FUN_147daf98a(local_f8,uVar12);
      }
      FUN_143793d20((longlong)(int)uVar12 * 0x90 + *(longlong *)local_f8,uVar26);
    }
    else {
      if ((int)(uint)local_88 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4((uint)local_88);
      }
      if ((int)(uint)local_88 < (int)uVar12) {
        FUN_147dafa1e(local_f8,(uint)local_88,uVar12 - (uint)local_88);
        FUN_147dafa84(puVar24);
      }
    }
  }
  if (iVar21 < (int)param_1[0x2c]) {
    lVar28 = (longlong)iVar21;
    local_f0 = lVar28 * 0x90;
    lVar27 = lVar28 * 0x90 + 100;
    do {
      lVar25 = *(longlong *)local_f8;
      lVar19 = lVar25 + lVar28 * 0x90;
      puVar17 = (undefined4 *)(lVar19 + 0x48);
      pcVar14 = *(code **)(*param_2 + 0x170);
      if (pcVar14 == FUN_14473a572) {
        plVar13 = (longlong *)param_2[0x12];
        pcVar14 = *(code **)(*plVar13 + 0x170);
        if (pcVar14 == FUN_14004e24c) {
          FUN_14004e24c(plVar13,puVar17,0x14);
        }
        else if (pcVar14 == FUN_1447395b8) {
          lVar22 = plVar13[0x12];
          lVar4 = plVar13[0x13];
          *(undefined4 *)(lVar19 + 0x58) = *(undefined4 *)(lVar22 + 0x10 + lVar4);
          puVar3 = (undefined4 *)(lVar22 + lVar4);
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          uVar8 = puVar3[3];
          *puVar17 = *puVar3;
          *(undefined4 *)(lVar19 + 0x4c) = uVar6;
          *(undefined4 *)(lVar19 + 0x50) = uVar7;
          *(undefined4 *)(lVar19 + 0x54) = uVar8;
          plVar13[0x13] = plVar13[0x13] + 0x14;
        }
        else {
          if (pcVar14 != FUN_144a6950e) goto LAB_143782061;
          if ((*(byte *)((longlong)plVar13 + 0x29) & 2) == 0) {
            puVar3 = *(undefined4 **)plVar13[1];
            *(undefined4 *)(lVar19 + 0x58) = puVar3[4];
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar8 = puVar3[3];
            *puVar17 = *puVar3;
            *(undefined4 *)(lVar19 + 0x4c) = uVar6;
            *(undefined4 *)(lVar19 + 0x50) = uVar7;
            *(undefined4 *)(lVar19 + 0x54) = uVar8;
            plVar13 = (longlong *)plVar13[1];
            goto LAB_14378204a;
          }
        }
      }
      else if (pcVar14 == FUN_140090aac) {
        FUN_140090aac(param_2,puVar17,0x14);
      }
      else {
        plVar13 = param_2;
        if (pcVar14 == FUN_144a6950e) {
          if ((*(byte *)((longlong)param_2 + 0x29) & 2) == 0) {
            puVar3 = *(undefined4 **)param_2[1];
            *(undefined4 *)(lVar19 + 0x58) = puVar3[4];
            uVar6 = puVar3[1];
            uVar7 = puVar3[2];
            uVar8 = puVar3[3];
            *puVar17 = *puVar3;
            *(undefined4 *)(lVar19 + 0x4c) = uVar6;
            *(undefined4 *)(lVar19 + 0x50) = uVar7;
            *(undefined4 *)(lVar19 + 0x54) = uVar8;
            plVar13 = (longlong *)param_2[1];
LAB_14378204a:
            *plVar13 = *plVar13 + 0x14;
          }
        }
        else {
LAB_143782061:
          (*pcVar14)(plVar13,puVar17,0x14);
        }
      }
      lVar19 = lVar28 * 0x90 + lVar25;
      puVar17 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar17 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(lVar19 + 0x5c),4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *(undefined4 *)(lVar19 + 0x5c) = *puVar17;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      puVar17 = *(undefined4 **)param_2[1];
      if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar17 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(lVar19 + 0x60),4);
        }
        else {
          FUN_14572512c(param_2);
        }
      }
      else {
        *(undefined4 *)(lVar19 + 0x60) = *puVar17;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
      }
      if (*param_1 != 0) {
        lVar22 = lVar25 + lVar27;
        lVar25 = lVar25 + local_f0;
        uVar23 = 0;
        do {
          puVar18 = (undefined1 *)(lVar25 + uVar23 + 0x84);
          puVar5 = *(undefined1 **)param_2[1];
          if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar5 + 1) {
            (**(code **)(*param_2 + 0x170))(param_2,puVar18,1);
          }
          else {
            *puVar18 = *puVar5;
            *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
          }
          puVar17 = *(undefined4 **)param_2[1];
          if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar17 + 1) {
            if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
              (**(code **)(*param_2 + 0x170))(param_2,lVar22,4);
            }
            else {
              FUN_14572512c(param_2,lVar22);
            }
          }
          else {
            *(undefined4 *)(lVar25 + 100 + uVar23 * 4) = *puVar17;
            *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
          }
          uVar23 = uVar23 + 1;
          lVar22 = lVar22 + 4;
        } while (uVar23 < *param_1);
      }
      local_100 = 0;
      local_108 = 1;
      FUN_140430222(lVar19 + 0x20,param_2,local_e8,0);
      lVar28 = lVar28 + 1;
      lVar27 = lVar27 + 0x90;
      local_f0 = local_f0 + 0x90;
    } while (lVar28 < (int)param_1[0x2c]);
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143782342 FUN_143782342 body=1245 status=ok
// SIG undefined FUN_143782342(void)

void FUN_143782342(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar6 = FUN_1449d9015(DAT_14ca85550,0);
  if (cVar6 == '\0') goto LAB_143782492;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14378239b;
    if (iVar7 != 1) goto LAB_143782396;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14378239b;
  }
  else {
LAB_143782396:
    if (iVar7 == 0x10) goto LAB_14378239b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2)) {
LAB_14378239b:
      FUN_143784bf8(param_1 + 0xe8,&DAT_14ca85100,param_1 + 0x10);
      FUN_140e359b2(param_1 + 0x10,&DAT_14ca85100);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14378239b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143782554;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14379017d);
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
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_143782554:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_1437825d4;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1437825d4:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14ab09610;
    puVar17[0x15] = param_1;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar16 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
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
    *(int *)((longlong)puVar17 + 0x1c) = iVar7;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (code *)CONCAT71(local_68[0]._1_7_,1);
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
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ab095b0;
    local_68[0] = FUN_143793d80;
    local_40 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"UpdateVirtualTextureStreaming",&DAT_14cb10770);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_143782492:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143782830 FUN_143782830 body=3914 status=ok
// SIG undefined FUN_143782830(void)

undefined4 *
FUN_143782830(longlong *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
             undefined8 *param_5,uint *param_6,longlong *param_7,longlong param_8)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  int *piVar14;
  uint *puVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  char *pcVar22;
  short sVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 **ppuVar26;
  uint *puVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  longlong *plVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  bool bVar40;
  undefined1 auStack_278 [32];
  undefined4 local_258;
  undefined4 **local_250;
  ulonglong local_240;
  ulonglong local_238;
  ulonglong local_230;
  char *local_228;
  longlong local_220;
  longlong *local_218;
  longlong local_210;
  longlong *local_208;
  undefined4 *local_200;
  longlong *local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  ulonglong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  uint local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 *local_198 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  uint uStack_174;
  ulonglong uStack_170;
  wchar_t *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined2 local_f0;
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
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar25 = *param_1;
  sVar23 = *(short *)(lVar25 + 0x3c);
  uVar37 = (uint)sVar23;
  local_200 = param_2;
  local_1f0 = param_3;
  if (uVar37 == 0) {
    uVar37 = *(uint *)(param_1 + 1);
    lVar28 = (longlong)(int)uVar37;
    *(uint *)(param_1 + 1) = uVar37 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) < uVar37 + 1) {
      FUN_1461a85d0(param_1,uVar37);
      lVar25 = *param_1;
    }
    lVar13 = lVar28 * 0x40;
    FUN_141613fe7(lVar25 + lVar13,1);
    lVar25 = *param_1;
    *(short *)(lVar25 + 0x3e + lVar13) = (short)uVar37;
    *(short *)(lVar25 + 0x3c + lVar13) = (short)uVar37;
  }
  else {
    lVar28 = (longlong)(int)uVar37;
    lVar13 = lVar28 * 0x40;
    sVar5 = *(short *)(lVar25 + 0x3c + lVar13);
    sVar6 = *(short *)(lVar25 + 0x3e + lVar13);
    *(short *)(lVar25 + 0x3c + (longlong)sVar6 * 0x40) = sVar5;
    *(short *)(*param_1 + 0x3e + (longlong)sVar5 * 0x40) = sVar6;
    *(short *)(lVar25 + 0x3e + lVar13) = sVar23;
    *(short *)(lVar25 + 0x3c + lVar13) = sVar23;
  }
  local_230 = (ulonglong)uVar37;
  lVar25 = *param_1;
  lVar28 = lVar28 * 0x40;
  *(undefined2 *)(lVar25 + 0x3c + lVar28) = 1;
  sVar23 = *(short *)(lVar25 + 0x7e);
  *(short *)(lVar25 + 0x3e + lVar28) = sVar23;
  *(short *)(*param_1 + 0x3c + (longlong)sVar23 * 0x40) = (short)uVar37;
  *(short *)(lVar25 + 0x7e) = (short)uVar37;
  uVar7 = *(ushort *)(param_5 + 1);
  if (*(uint *)(param_1 + 3) <= uVar37) {
    uVar29 = (ulonglong)(uVar37 + (uVar37 == 0xffffffff)) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar34 = 1 << ((byte)lVar25 & 0x1f);
    uVar37 = 0x20;
    if (0x20 < uVar34) {
      uVar37 = uVar34;
    }
    FUN_1404b04e2(param_1 + 2,uVar37);
  }
  uVar29 = (ulonglong)(((uint)uVar7 & *(uint *)((longlong)param_1 + 0x14)) << 2);
  uVar37 = (uint)local_230;
  uVar31 = local_230 & 0xffffffff;
  *(undefined4 *)(param_1[5] + uVar31 * 4) = *(undefined4 *)(param_1[4] + uVar29);
  *(uint *)(param_1[4] + uVar29) = uVar37;
  uVar34 = (*param_6 >> 0x10 ^ *param_6) * -0x7a143595;
  uVar34 = (uVar34 >> 0xd ^ uVar34) * -0x3d4d51cb;
  if (*(uint *)(param_1 + 7) <= uVar37) {
    uVar29 = (ulonglong)(uVar37 + (uVar37 == 0xffffffff)) * 2 + 1;
    lVar25 = 0x3f;
    if (uVar29 != 0) {
      for (; uVar29 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    uVar35 = 1 << ((byte)lVar25 & 0x1f);
    uVar37 = 0x20;
    if (0x20 < uVar35) {
      uVar37 = uVar35;
    }
    FUN_1404b04e2(param_1 + 6,uVar37);
    uVar37 = (uint)local_230;
  }
  uVar29 = (ulonglong)((uVar34 >> 0x10 ^ uVar34) & *(uint *)((longlong)param_1 + 0x34));
  *(undefined4 *)(param_1[9] + uVar31 * 4) = *(undefined4 *)(param_1[8] + uVar29 * 4);
  *(uint *)(param_1[8] + uVar29 * 4) = uVar37;
  lVar25 = *param_1;
  local_220 = lVar25 + lVar28;
  *(undefined8 *)(lVar25 + lVar28) = *param_5;
  *(uint *)(lVar25 + 0x30 + lVar28) = *param_6;
  *(undefined2 *)(lVar25 + 0x3a + lVar28) = *(undefined2 *)(param_5 + 1);
  *(undefined4 *)(lVar25 + 0x34 + lVar28) = DAT_14c7590b0;
  puVar1 = (undefined8 *)(lVar25 + 0x10 + lVar28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar25 + 0x20 + lVar28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = *(undefined8 **)(lVar25 + 8 + lVar28);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(local_220 + 8) = 0;
    LOCK();
    piVar14 = (int *)(puVar1 + 1);
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (*piVar14 == 0) {
      (**(code **)*puVar1)();
    }
  }
  if (param_8 != 0) {
    lVar13 = *(longlong *)(param_8 + 0x20);
    if (*(longlong *)(param_8 + 0x20) == 0) {
      lVar13 = param_8;
    }
    if ((longlong)*(int *)(param_8 + 0x28) != 0) {
      lVar24 = 0;
      do {
        if ((*(byte *)(*(longlong *)(lVar13 + lVar24) + 0xa0) & 1) == 0) goto LAB_143782acd;
        lVar24 = lVar24 + 8;
      } while ((longlong)*(int *)(param_8 + 0x28) * 8 != lVar24);
    }
  }
  param_8 = 0;
LAB_143782acd:
  local_1d8 = (longlong)(int)param_7[4];
  puVar15 = (uint *)param_7[2];
  uVar37 = puVar15[7] * 2 + puVar15[6];
  local_1e0 = *(longlong *)(puVar15 + 0x2a);
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
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
  uVar29 = (ulonglong)*puVar15;
  if (*puVar15 == 0) {
LAB_1437832fa:
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    uStack_130 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = (wchar_t *)0x0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_174 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_184 = 0;
    uStack_180 = 0;
    uStack_17c = 0;
    local_198[0] = (undefined4 *)0x0;
    local_198[1] = (undefined4 *)0x0;
    local_118 = (longlong *)*param_7;
    if (local_118 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_118 + 1) = (int)local_118[1] + 1;
      UNLOCK();
    }
    local_110 = (undefined4)param_7[1];
    uStack_10c = *(undefined4 *)((longlong)param_7 + 0xc);
    lVar25 = param_7[1];
    uStack_108 = (undefined4)param_7[2];
    uStack_104 = *(undefined4 *)((longlong)param_7 + 0x14);
    local_100 = (undefined4)param_7[3];
    uStack_fc = *(undefined4 *)((longlong)param_7 + 0x1c);
    uStack_f8 = (undefined4)param_7[4];
    uStack_f4 = *(undefined4 *)((longlong)param_7 + 0x24);
    local_f0 = (undefined2)param_7[5];
    if (lVar25 != 0) {
      LOCK();
      piVar14 = (int *)(lVar25 + 0x68);
      *piVar14 = *piVar14 + 1;
      UNLOCK();
    }
    plVar19 = &local_e8;
    ppuVar26 = local_198;
    for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
      *ppuVar26 = (undefined4 *)*plVar19;
      plVar19 = plVar19 + 1;
      ppuVar26 = ppuVar26 + 1;
    }
    FUN_14031478e(local_198);
    puVar20 = local_200;
    if (CONCAT44(uStack_10c,local_110) != 0) {
      LOCK();
      piVar14 = (int *)(CONCAT44(uStack_10c,local_110) + 0x68);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
    }
    if (local_118 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_118 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)(*local_118 + 0x28))(local_118,1);
      }
    }
  }
  else {
    local_1c0 = lVar25 + lVar28 + 0x10;
    local_228 = (char *)(param_4 + 0x28);
    local_1c8 = (ulonglong)(uVar37 - 1);
    local_218 = (longlong *)(param_4 + 0x30);
    local_1f8 = (longlong *)(param_4 + 0x40);
    local_208 = (longlong *)(param_4 + 0x18);
    local_1d0 = param_4 + 0x58;
    uVar32 = 0;
    pcVar22 = local_228;
    uVar31 = (ulonglong)uVar37;
    local_238 = (ulonglong)uVar37;
    local_210 = param_4;
    uVar16 = 0;
    local_1b8 = param_8;
    do {
      while (local_1e8 = uVar16, iVar36 = (int)uVar31,
            (*(byte *)((longlong)param_7 + 0x29) >> ((uint)uVar32 & 0x1f) & 1) == 0) {
LAB_143782e50:
        uVar32 = uVar32 + 1;
        uVar16 = local_1e8;
        if (uVar29 <= uVar32) {
          if ((local_1e8 & 1) == 0) goto LAB_1437832fa;
          goto LAB_14378342d;
        }
      }
      bVar3 = *(byte *)((longlong)puVar15 + uVar32 + 0x20);
      LOCK();
      cVar2 = *pcVar22;
      if (cVar2 == '\0') {
        *pcVar22 = '\x01';
      }
      UNLOCK();
      if (cVar2 != '\0') {
        FUN_1447d2058();
        iVar36 = (int)local_238;
        pcVar22 = local_228;
      }
      uVar31 = (ulonglong)((uint)bVar3 * 0x30);
      uVar29 = 0;
      iVar8 = *(int *)((longlong)&DAT_14c873428 + uVar31);
      iVar38 = ((*(uint *)((longlong)&DAT_14c87341c + uVar31) + (int)local_1c8) /
               *(uint *)((longlong)&DAT_14c87341c + uVar31)) * iVar8;
      iVar39 = ((*(uint *)((longlong)&DAT_14c873420 + uVar31) + (int)local_1c8) /
               *(uint *)((longlong)&DAT_14c873420 + uVar31)) * iVar38;
      uVar37 = *(uint *)(param_4 + 0x38);
      uVar31 = (ulonglong)(int)uVar37;
      if ((longlong)uVar31 < 1) {
LAB_143782c59:
        if ((uint)uVar29 == uVar37) goto LAB_143783204;
      }
      else {
        piVar14 = (int *)(*local_218 + 8);
        uVar29 = 0;
        do {
          if (((iVar8 == piVar14[-2]) && (iVar38 == piVar14[-1])) && (iVar39 == *piVar14))
          goto LAB_143782c59;
          uVar29 = uVar29 + 1;
          piVar14 = piVar14 + 3;
        } while (uVar31 != uVar29);
LAB_143783204:
        *(uint *)(local_210 + 0x38) = uVar37 + 1;
        if (*(uint *)(local_210 + 0x3c) < uVar37 + 1) {
          FUN_14640e980(local_218,uVar37);
        }
        lVar25 = *local_218;
        *(int *)(lVar25 + uVar31 * 0xc) = iVar8;
        *(int *)(lVar25 + 4 + uVar31 * 0xc) = iVar38;
        *(int *)(lVar25 + 8 + uVar31 * 0xc) = iVar39;
        FUN_1459031f2(local_1f8);
        uVar29 = (ulonglong)uVar37;
        iVar36 = (int)local_238;
        pcVar22 = local_228;
      }
      lVar25 = (uVar29 & 0xffffffff) * 0x10;
      plVar19 = (longlong *)(*local_1f8 + lVar25);
      uVar37 = *(uint *)(*local_1f8 + 8 + lVar25);
      if ((longlong)(int)uVar37 < 1) {
        uVar31 = 0;
LAB_143782ca9:
        if ((uint)uVar31 == uVar37) goto LAB_1437831cd;
      }
      else {
        piVar14 = (int *)(*plVar19 + 0x28);
        uVar31 = 0;
        do {
          if ((*(longlong *)(piVar14 + -8) == 0) || (*piVar14 != 0)) goto LAB_143782ca9;
          uVar31 = uVar31 + 1;
          piVar14 = piVar14 + 0xc;
        } while ((longlong)(int)uVar37 != uVar31);
LAB_1437831cd:
        FUN_14583a73a(plVar19);
        iVar36 = (int)local_238;
        uVar31 = (ulonglong)uVar37;
        pcVar22 = local_228;
      }
      param_4 = local_210;
      lVar25 = (uVar31 & 0xffffffff) * 0x30;
      plVar33 = (longlong *)(*plVar19 + lVar25);
      if (*(longlong *)(*plVar19 + 8 + lVar25) == 0) {
        *(int *)(plVar33 + 2) = iVar39;
        uVar34 = iVar39 + 0x7fU & 0xffffff80;
        *(uint *)((longlong)plVar33 + 0x14) = uVar34;
        uVar16 = (ulonglong)((*(int *)(DAT_14cb0ffd0 + 4) * 0x100000 + uVar34) - 1) /
                 (ulonglong)uVar34;
        uVar37 = (uint)uVar16;
        *(uint *)(plVar33 + 3) = uVar37;
        lVar25 = plVar33[5];
        *(uint *)(plVar33 + 5) = (int)lVar25 + uVar37;
        if ((uint)(*(int *)((longlong)plVar33 + 0x2c) - (int)lVar25) < uVar37) {
          local_240 = uVar16;
          FUN_14488eebe();
          uVar37 = (uint)local_240;
          uVar16 = (ulonglong)*(uint *)(plVar33 + 3);
        }
        lVar25 = local_1f0;
        if ((int)uVar16 != 0) {
          uVar35 = 0;
          sVar23 = -1;
          do {
            *(short *)(plVar33[4] + (longlong)(int)uVar35 * 2) = (short)uVar16 + sVar23;
            uVar35 = uVar35 + 1;
            uVar16 = (ulonglong)*(uint *)(plVar33 + 3);
            sVar23 = sVar23 + -1;
          } while (uVar35 < *(uint *)(plVar33 + 3));
        }
        uVar37 = uVar37 * uVar34;
        uVar16 = (ulonglong)uVar37;
        if ((DAT_14ca84e29 == '\0') || (DAT_14ca84e36 != '\x01')) {
          lVar25 = FUN_14001cc68(uVar16,0x80);
          plVar33[1] = lVar25;
        }
        else {
          local_198[0] = (undefined4 *)0x0;
          local_198[1] = (undefined4 *)0x0;
          local_188 = 1;
          uStack_184 = 0;
          uStack_180 = 0;
          uStack_17c = 0;
          local_178 = 0;
          uStack_174 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          uStack_170 = (uStack_170 >> 8 & 0xffffff) << 8;
          local_168 = L"StagingBuffer";
          uStack_160 = 0;
          local_158 = 0;
          local_19c = 0x10301;
          local_240 = uVar16;
          local_1a4 = uVar37;
          local_1a0 = iVar8;
          if (uVar37 == 0) {
            FUN_14570b4be(local_1f0,local_198,0x10301,iVar8);
          }
          if (*(char *)(lVar25 + 0x69) == '\0') {
            FUN_14002049c(lVar25,1);
            local_250 = local_198;
            local_258 = 0x70;
            (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1b0,lVar25,&local_1a4);
            *(undefined4 *)(local_1b0 + 0x18) = 0x70;
            FUN_14002049c(lVar25,0);
          }
          else {
            local_250 = local_198;
            local_258 = 0x70;
            (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_1b0,lVar25,&local_1a4);
            *(undefined4 *)(local_1b0 + 0x18) = 0x70;
          }
          if (&local_1b0 == plVar33) {
LAB_1437830cf:
            lVar28 = local_1b0;
            if (local_1b0 != 0) {
              LOCK();
              puVar15 = (uint *)(local_1b0 + 8);
              uVar37 = *puVar15;
              *puVar15 = *puVar15 - 1;
              UNLOCK();
              if ((uVar37 & 0x3fffffff) == 1) {
                puVar15 = (uint *)(local_1b0 + 8);
                LOCK();
                uVar37 = *puVar15;
                *puVar15 = *puVar15 | 0x40000000;
                UNLOCK();
                if ((uVar37 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(local_1b0 + 0xd);
                  plVar17 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar17[1] = lVar28;
                  plVar19 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar17 = (longlong)plVar19;
                      LOCK();
                      bVar40 = plVar19 != DAT_14ca843c0;
                      plVar18 = plVar17;
                      if (bVar40) {
                        plVar19 = DAT_14ca843c0;
                        plVar18 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar18;
                      UNLOCK();
                    } while (bVar40);
                  }
                  else {
                    do {
                      *plVar17 = (longlong)plVar18;
                      LOCK();
                      bVar40 = plVar18 != DAT_14ca843c8;
                      plVar19 = plVar17;
                      if (bVar40) {
                        plVar18 = DAT_14ca843c8;
                        plVar19 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar19;
                      UNLOCK();
                    } while (bVar40);
                  }
                }
              }
            }
          }
          else {
            lVar28 = *plVar33;
            *plVar33 = local_1b0;
            local_1b0 = 0;
            if (lVar28 != 0) {
              LOCK();
              puVar15 = (uint *)(lVar28 + 8);
              uVar37 = *puVar15;
              *puVar15 = *puVar15 - 1;
              UNLOCK();
              if ((uVar37 & 0x3fffffff) == 1) {
                puVar15 = (uint *)(lVar28 + 8);
                LOCK();
                uVar37 = *puVar15;
                *puVar15 = *puVar15 | 0x40000000;
                UNLOCK();
                if ((uVar37 >> 0x1e & 1) == 0) {
                  bVar4 = *(byte *)(lVar28 + 0xd);
                  plVar17 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar17[1] = lVar28;
                  plVar19 = DAT_14ca843c0;
                  plVar18 = DAT_14ca843c8;
                  if ((bVar4 & 2) == 0) {
                    do {
                      *plVar17 = (longlong)plVar19;
                      LOCK();
                      bVar40 = plVar19 != DAT_14ca843c0;
                      plVar18 = plVar17;
                      if (bVar40) {
                        plVar19 = DAT_14ca843c0;
                        plVar18 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar18;
                      UNLOCK();
                    } while (bVar40);
                  }
                  else {
                    do {
                      *plVar17 = (longlong)plVar18;
                      LOCK();
                      bVar40 = plVar18 != DAT_14ca843c8;
                      plVar19 = plVar17;
                      if (bVar40) {
                        plVar18 = DAT_14ca843c8;
                        plVar19 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar19;
                      UNLOCK();
                    } while (bVar40);
                  }
                }
              }
              goto LAB_1437830cf;
            }
          }
          lVar28 = *plVar33;
          cVar2 = *(char *)(lVar25 + 0x69);
          if (cVar2 == '\0') {
            FUN_14002049c(lVar25,1);
          }
          local_258 = (undefined4)local_240;
          local_250 = (undefined4 **)CONCAT44(local_250._4_4_,2);
          lVar28 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,lVar25,lVar28,0);
          if (cVar2 == '\0') {
            FUN_14002049c(lVar25,0);
          }
          plVar33[1] = lVar28;
          param_4 = local_210;
        }
        *(int *)(param_4 + 0x50) =
             *(int *)(param_4 + 0x50) + (int)plVar33[3] * *(int *)((longlong)plVar33 + 0x14);
        iVar36 = (int)local_238;
        pcVar22 = local_228;
      }
      uVar7 = *(ushort *)(plVar33[4] + -2 + (longlong)(int)plVar33[5] * 2);
      *(int *)(plVar33 + 5) = (int)plVar33[5] + -1;
      LOCK();
      cVar2 = *pcVar22;
      if (cVar2 == '\x01') {
        *pcVar22 = '\0';
      }
      UNLOCK();
      if (cVar2 != '\x01') {
        FUN_14008cdb0();
        iVar36 = (int)local_238;
      }
      param_8 = local_1b8;
      uVar37 = (uint)uVar29 & 0xff;
      lVar25 = *(longlong *)(*(longlong *)(param_4 + 0x40) + (ulonglong)(uVar37 << 4));
      uVar29 = (ulonglong)(((uint)uVar31 & 0xff) * 0x30);
      uVar9 = *(undefined4 *)(lVar25 + 0x10 + uVar29);
      uVar10 = *(undefined4 *)(*(longlong *)(param_4 + 0x30) + 4 + (ulonglong)uVar37 * 0xc);
      (&local_e8)[uVar32 * 2] =
           (ulonglong)(*(int *)(lVar25 + 0x14 + uVar29) * (uint)uVar7) +
           *(longlong *)(lVar25 + 8 + uVar29);
      *(undefined4 *)(&uStack_e0 + uVar32 * 2) = uVar9;
      *(undefined4 *)((longlong)&uStack_e0 + uVar32 * 0x10 + 4) = uVar10;
      if (0 < (longlong)*(int *)(param_4 + 0x20)) {
        piVar14 = (int *)(*local_208 + 4);
        uVar29 = 0;
        do {
          if ((*(byte *)(piVar14 + -1) == bVar3) && (*piVar14 == iVar36)) goto LAB_143782db6;
          uVar29 = uVar29 + 1;
          piVar14 = piVar14 + 0x1a;
        } while ((longlong)*(int *)(param_4 + 0x20) != uVar29);
      }
      uVar34 = FUN_1458d1d00(local_208);
      uVar29 = (ulonglong)uVar34;
      lVar25 = *local_208;
      *(byte *)(lVar25 + (longlong)(int)uVar34 * 0x68) = bVar3;
      *(int *)(lVar25 + 4 + (longlong)(int)uVar34 * 0x68) = (int)local_238;
LAB_143782db6:
      ppuVar26 = local_198;
      FUN_1417fa75e(local_1d0,ppuVar26);
      *local_198[1] = (int)uVar29;
      local_198[1][1] = (uint)uVar7 << 0x10 | ((uint)uVar31 & 0xff) << 8 | uVar37;
      local_198[1][2] = 0;
      *(undefined8 *)(local_198[1] + 4) = 0;
      *(undefined8 *)(local_198[1] + 6) = 0;
      local_198[1][8] = 0;
      *(undefined4 *)(local_1c0 + uVar32 * 4) = local_198[0]._0_4_;
      pcVar22 = local_228;
      uVar31 = local_238;
      if ((param_8 == 0) && (*(char *)(uVar32 + 0x84 + local_1d8 * 0x90 + local_1e0) == '\x04')) {
        puVar15 = (uint *)param_7[2];
        uVar29 = (ulonglong)*puVar15;
        goto LAB_143782e50;
      }
      uVar32 = uVar32 + 1;
      puVar15 = (uint *)param_7[2];
      uVar29 = (ulonglong)*puVar15;
      uVar16 = CONCAT71((int7)((ulonglong)ppuVar26 >> 8),1);
    } while (uVar32 < uVar29);
LAB_14378342d:
    puVar1 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar15 = (uint *)*puVar1;
    if (puVar15 != (uint *)0x0) goto LAB_1437834cd;
    while( true ) {
      uVar37 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar37 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar37 | 1;
        __tlregdtor(&LAB_14379017d);
      }
      lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar20 = *(undefined4 **)(lVar25 + 0x310);
      *(undefined8 *)(lVar25 + 0x310) = 0;
      if (puVar20 == (undefined4 *)0x0) {
        puVar20 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar20 = 0xffffffff;
      *(undefined4 **)(puVar20 + 0x10) = puVar20 + 0x16;
      puVar20[0x12] = 0;
      *puVar1 = puVar20;
      FUN_140217a48(puVar1);
      puVar15 = (uint *)*puVar1;
LAB_1437834cd:
      puVar30 = (undefined8 *)(*(longlong *)(puVar15 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar27 = (uint *)(puVar30 + 0x2b);
      uVar37 = puVar15[0x12];
      if (puVar27 <= puVar15 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
        LOCK();
        uVar34 = *puVar15;
        *puVar15 = *puVar15 + uVar37 + 1;
        UNLOCK();
        if ((uVar34 ^ uVar37) != 0xffffffff) break;
        puVar15 = (uint *)*puVar1;
        *puVar15 = 0xffffffff;
        *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
        puVar15[0x12] = 0;
        *puVar1 = puVar15;
        puVar30 = (undefined8 *)((longlong)puVar15 + 0x5fU & 0xfffffffffffffff8);
        puVar27 = (uint *)(puVar30 + 0x2b);
        uVar37 = 0;
        if (puVar27 <= puVar15 + 0x4000) {
          uVar37 = 1;
          goto LAB_14378354d;
        }
      }
    }
    uVar37 = uVar37 + 1;
LAB_14378354d:
    *(uint **)(puVar15 + 0x10) = puVar27;
    puVar15[0x12] = uVar37;
    FUN_1447247dc(puVar30,param_8);
    *puVar30 = &PTR_FUN_14ab09630;
    puVar30[0x15] = 0;
    puVar30[0x16] = 0;
    puVar30[0x17] = 0;
    puVar30[0x18] = 0;
    puVar30[0x19] = 0;
    puVar30[0x1a] = 0;
    puVar30[0x1b] = 0;
    puVar30[0x1c] = 0;
    puVar30[0x1d] = 0;
    puVar30[0x1e] = 0;
    puVar30[0x1f] = 0;
    puVar30[0x20] = 0;
    puVar30[0x21] = 0;
    puVar30[0x22] = 0;
    puVar30[0x23] = 0;
    puVar30[0x24] = 0;
    lVar25 = *param_7;
    puVar30[0x25] = lVar25;
    if (lVar25 != 0) {
      LOCK();
      *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
      UNLOCK();
    }
    uVar9 = *(undefined4 *)((longlong)param_7 + 0xc);
    lVar25 = param_7[2];
    uVar10 = *(undefined4 *)((longlong)param_7 + 0x14);
    lVar28 = param_7[3];
    uVar11 = *(undefined4 *)((longlong)param_7 + 0x1c);
    lVar13 = param_7[4];
    uVar12 = *(undefined4 *)((longlong)param_7 + 0x24);
    *(int *)(puVar30 + 0x26) = (int)param_7[1];
    *(undefined4 *)((longlong)puVar30 + 0x134) = uVar9;
    *(int *)(puVar30 + 0x27) = (int)lVar25;
    *(undefined4 *)((longlong)puVar30 + 0x13c) = uVar10;
    *(short *)(puVar30 + 0x2a) = (short)param_7[5];
    *(int *)(puVar30 + 0x28) = (int)lVar28;
    *(undefined4 *)((longlong)puVar30 + 0x144) = uVar11;
    *(int *)(puVar30 + 0x29) = (int)lVar13;
    *(undefined4 *)((longlong)puVar30 + 0x14c) = uVar12;
    if (puVar30[0x26] != 0) {
      LOCK();
      piVar14 = (int *)(puVar30[0x26] + 0x68);
      *piVar14 = *piVar14 + 1;
      UNLOCK();
    }
    plVar19 = &local_e8;
    plVar33 = puVar30 + 0x15;
    for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
      *plVar33 = *plVar19;
      plVar19 = plVar19 + 1;
      plVar33 = plVar33 + 1;
    }
    if (*(code **)(puVar30[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar30[0xe] + 0x18))(puVar30 + 0xe,puVar30 + 9);
    }
    puVar20 = local_200;
    puVar30[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar30[9] = puVar30;
    puVar30[10] = puVar30;
    lVar25 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar25 == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = *(undefined8 *)(lVar25 + 0x30);
    }
    puVar30[0xf] = uVar21;
    puVar30[0x10] = 0xc80000527800b400;
    *(undefined4 *)((longlong)puVar30 + 0x1c) = 0;
    if (puVar30 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
      UNLOCK();
    }
    local_198[0] = (undefined4 *)CONCAT71(local_198[0]._1_7_,1);
    FUN_1447439e4(puVar30);
    puVar1 = *(undefined8 **)(local_220 + 8);
    *(undefined8 **)(local_220 + 8) = puVar30;
    if (puVar1 != (undefined8 *)0x0) {
      LOCK();
      piVar14 = (int *)(puVar1 + 1);
      *piVar14 = *piVar14 + -1;
      UNLOCK();
      if (*piVar14 == 0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  uVar7 = *(ushort *)(local_220 + 0x38);
  *puVar20 = (int)local_230;
  puVar20[1] = (uint)uVar7;
  if ((local_60 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar20;
}



// FUNCTION 14378377c FUN_14378377c body=939 status=ok
// SIG undefined FUN_14378377c(void)

void FUN_14378377c(longlong param_1,longlong param_2,int *param_3,longlong param_4,int param_5,
                  int param_6,int param_7)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  int local_d0;
  int local_cc;
  longlong *local_c8;
  int *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  int local_78;
  int local_74;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined1 local_50;
  ulonglong local_48;
  
  local_cc = param_6;
  local_d0 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = param_1 + 0x58;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x58) + (longlong)*param_3 * 0x28);
  piVar1[2] = DAT_14c7590b0;
  iVar6 = *piVar1;
  lVar16 = *(longlong *)(param_1 + 0x18);
  iVar15 = *(int *)(lVar16 + 4 + (longlong)iVar6 * 0x68);
  local_c0 = param_3;
  local_b0 = param_2;
  FUN_143784f04(param_1 + 0x28,local_a8,piVar1[1]);
  lVar17 = local_b0;
  if (local_a8[0] == 0) {
    lVar16 = lVar16 + (longlong)iVar6 * 0x68;
    *(longlong *)(piVar1 + 4) = param_4;
    piVar1[6] = local_d0;
    piVar1[7] = local_cc;
    piVar1[8] = param_7;
    iVar6 = *(int *)(lVar16 + 0x60);
    lVar17 = (longlong)iVar6;
    *(uint *)(lVar16 + 0x60) = iVar6 + 1U;
    if (*(uint *)(lVar16 + 100) < iVar6 + 1U) {
      FUN_1417fa934((longlong *)(lVar16 + 0x58),iVar6);
    }
    lVar16 = *(longlong *)(lVar16 + 0x58);
    *(undefined8 *)(lVar16 + 0x20 + lVar17 * 0x28) = *(undefined8 *)(piVar1 + 8);
    iVar6 = *piVar1;
    iVar15 = piVar1[1];
    iVar7 = piVar1[2];
    iVar8 = piVar1[3];
    iVar9 = piVar1[5];
    iVar10 = piVar1[6];
    iVar11 = piVar1[7];
    piVar3 = (int *)(lVar16 + 0x10 + lVar17 * 0x28);
    *piVar3 = piVar1[4];
    piVar3[1] = iVar9;
    piVar3[2] = iVar10;
    piVar3[3] = iVar11;
    piVar1 = (int *)(lVar16 + lVar17 * 0x28);
    *piVar1 = iVar6;
    piVar1[1] = iVar15;
    piVar1[2] = iVar7;
    piVar1[3] = iVar8;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_118);
  }
  iVar15 = iVar15 + param_7 * -2;
  if ((longlong)*(int *)(param_1 + 0xd0) != 0) {
    lVar16 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 200) + lVar16) == param_4) goto LAB_1437838f7;
      lVar16 = lVar16 + 8;
    } while ((longlong)*(int *)(param_1 + 0xd0) * 8 != lVar16);
  }
  local_c8 = (longlong *)(param_1 + 200);
  local_90 = &local_80;
  local_80 = 0xffffffffffffffff;
  local_78 = 0xffffffff;
  local_68 = 1;
  local_64 = 0x200000000000;
  local_5c = 0;
  local_50 = 0;
  local_88 = 1;
  local_70 = param_4;
  FUN_144760590(local_b0,&local_90,1);
  iVar6 = *(int *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0xd0) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xd4) < iVar6 + 1U) {
    FUN_14640ea14(local_c8,iVar6);
  }
  *(longlong *)(*local_c8 + (longlong)iVar6 * 8) = param_4;
LAB_1437838f7:
  local_80 = CONCAT44(local_cc * iVar15,local_d0 * iVar15);
  local_78 = param_7;
  local_74 = param_7;
  local_70 = CONCAT44(iVar15,iVar15);
  if (*(char *)(lVar17 + 0x69) == '\0') {
    FUN_14002049c(lVar17,1);
    local_e0 = local_98;
    local_e8 = local_a8[0];
    local_f0 = local_94;
    local_f8 = &local_80;
    (**(code **)(*DAT_14ca83900 + 0x218))(DAT_14ca83900,lVar17,param_4,0);
    FUN_14002049c(lVar17,0);
  }
  else {
    local_e0 = local_98;
    local_e8 = local_a8[0];
    local_f0 = local_94;
    local_f8 = &local_80;
    (**(code **)(*DAT_14ca83900 + 0x218))(DAT_14ca83900,lVar17,param_4,0);
  }
  FUN_1417fa75e(param_1 + 0x90,&local_90);
  piVar3 = (int *)CONCAT44(uStack_84,local_88);
  *(undefined8 *)(piVar3 + 8) = *(undefined8 *)(piVar1 + 8);
  iVar6 = *piVar1;
  iVar15 = piVar1[1];
  iVar7 = piVar1[2];
  iVar8 = piVar1[3];
  iVar9 = piVar1[5];
  iVar10 = piVar1[6];
  iVar11 = piVar1[7];
  piVar3[4] = piVar1[4];
  piVar3[5] = iVar9;
  piVar3[6] = iVar10;
  piVar3[7] = iVar11;
  *piVar3 = iVar6;
  piVar3[1] = iVar15;
  piVar3[2] = iVar7;
  piVar3[3] = iVar8;
  FUN_140e3573e(local_b8,*local_c0);
  LOCK();
  puVar2 = (uint *)(local_a8[0] + 8);
  uVar4 = *puVar2;
  *puVar2 = *puVar2 - 1;
  UNLOCK();
  if ((uVar4 & 0x3fffffff) == 1) {
    puVar2 = (uint *)(local_a8[0] + 8);
    LOCK();
    uVar4 = *puVar2;
    *puVar2 = *puVar2 | 0x40000000;
    UNLOCK();
    if ((uVar4 >> 0x1e & 1) == 0) {
      bVar5 = *(byte *)(local_a8[0] + 0xd);
      plVar12 = (longlong *)FUN_14001cc68(0x10,8);
      plVar12[1] = local_a8[0];
      plVar14 = DAT_14ca843c0;
      plVar13 = DAT_14ca843c8;
      if ((bVar5 & 2) == 0) {
        do {
          *plVar12 = (longlong)plVar14;
          LOCK();
          bVar18 = plVar14 != DAT_14ca843c0;
          plVar13 = plVar12;
          if (bVar18) {
            plVar14 = DAT_14ca843c0;
            plVar13 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar13;
          UNLOCK();
        } while (bVar18);
      }
      else {
        do {
          *plVar12 = (longlong)plVar13;
          LOCK();
          bVar18 = plVar13 != DAT_14ca843c8;
          plVar14 = plVar12;
          if (bVar18) {
            plVar13 = DAT_14ca843c8;
            plVar14 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar14;
          UNLOCK();
        } while (bVar18);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143783b47 FUN_143783b47 body=69 status=ok
// SIG undefined FUN_143783b47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143783b47(void)

{
  _DAT_14cb0fd48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143783b89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fd50,1);
  return;
}



// FUNCTION 143783b8c FUN_143783b8c body=69 status=ok
// SIG undefined FUN_143783b8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143783b8c(void)

{
  _DAT_14cb0fd60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143783bce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fd68,1);
  return;
}



// FUNCTION 143783bd1 FUN_143783bd1 body=69 status=ok
// SIG undefined FUN_143783bd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143783bd1(void)

{
  _DAT_14cb0fd78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143783c13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fd80,1);
  return;
}



// FUNCTION 143783c16 FUN_143783c16 body=1208 status=ok
// SIG undefined FUN_143783c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143783c16(void)

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
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 *local_40;
  int local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar15 = DAT_14cb0fdb0 + 1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  DAT_14cb0fdb0 = iVar15;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_143783d2b;
    if (iVar6 != 1) goto LAB_143783c5f;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143783d2b;
  }
  else {
LAB_143783c5f:
    if (iVar6 == 0x10) goto LAB_143783d2b;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
    goto LAB_143783d2b;
    if (iVar6 == 1) {
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143783d2b;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar2;
    if (puVar10 != (uint *)0x0) goto LAB_143783ded;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14379017d);
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
LAB_143783ded:
      puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar17 + 0x17);
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
        puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar17 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_143783e6d;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_143783e6d:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar6 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14ab08af8;
    puVar17[0x15] = &DAT_14cb0fdb0;
    *(int *)(puVar17 + 0x16) = iVar15;
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
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar5 = 1;
      if ((char)uVar16 != '\x06') {
        uVar5 = uVar16;
      }
      uVar16 = uVar5;
      uVar11 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar17[0xf] = uVar11;
    puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar17 + 0x1c) = iVar6;
    if (puVar17 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
      iVar15 = _DAT_14cb0fdb4;
    }
    else {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar17);
      LOCK();
      piVar1 = (int *)(puVar17 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      iVar15 = _DAT_14cb0fdb4;
      if (*piVar1 == 0) {
        (**(code **)*puVar17)(puVar17,1);
        iVar15 = _DAT_14cb0fdb4;
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14ab08ab0;
    local_40 = &DAT_14cb0fdb0;
    local_68[0] = &LAB_147dadc5c;
    local_38 = iVar15;
    FUN_14005a792(&DAT_14ca9a440,L"IncrementVersion",&DAT_14cb1062c);
    iVar15 = _DAT_14cb0fdb4;
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar13 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar13 = &local_48;
      }
      (*(code *)(*pppuVar13)[2])();
      iVar15 = _DAT_14cb0fdb4;
    }
  }
LAB_143783d2b:
  _DAT_14cb0fdb4 = iVar15;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437840d0 FUN_1437840d0 body=729 status=ok
// SIG undefined FUN_1437840d0(void)

void FUN_1437840d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar6 = (uint *)*puVar2;
  if (puVar6 != (uint *)0x0) goto LAB_143784189;
  do {
    uVar3 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar3 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar3 | 1;
      __tlregdtor(&LAB_14379017d);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar5 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar5 = 0xffffffff;
    *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
    puVar5[0x12] = 0;
    *puVar2 = puVar5;
    FUN_140217a48(puVar2);
    puVar6 = (uint *)*puVar2;
LAB_143784189:
    uVar8 = *(longlong *)(puVar6 + 0x10) + 7;
    while( true ) {
      puVar9 = (undefined8 *)(uVar8 & 0xfffffffffffffff8);
      if (puVar9 + 0x17 <= puVar6 + 0x4000) {
        *(undefined8 **)(puVar6 + 0x10) = puVar9 + 0x17;
        puVar6[0x12] = puVar6[0x12] + 1;
        FUN_1447247dc(puVar9,0);
        *puVar9 = &PTR_FUN_14ab09620;
        puVar9[0x15] = 0;
        puVar9[0x15] = *param_1;
        *param_1 = 0;
        *(undefined4 *)(puVar9 + 0x16) = *(undefined4 *)(param_1 + 1);
        *(undefined4 *)((longlong)puVar9 + 0xb4) = *(undefined4 *)((longlong)param_1 + 0xc);
        param_1[1] = 0;
        if (*(code **)(puVar9[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar9[0xe] + 0x18))(puVar9 + 0xe,puVar9 + 9);
        }
        puVar9[0xe] = LowLevelTasks::
                      TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                      TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                      ::vftable;
        puVar9[9] = puVar9;
        puVar9[10] = puVar9;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar9[0xf] = uVar7;
        puVar9[0x10] = 0xe80000527800b400;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = 3;
        if (puVar9 == (undefined8 *)0x0) {
          local_21 = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar9 + 1) = *(int *)(puVar9 + 1) + 1;
          UNLOCK();
          local_21 = 1;
          FUN_1447439e4(puVar9);
          LOCK();
          piVar1 = (int *)(puVar9 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar9)(puVar9,1);
          }
        }
        if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar3 = *puVar6;
      *puVar6 = *puVar6 + puVar6[0x12] + 1;
      UNLOCK();
      if ((uVar3 ^ puVar6[0x12]) != 0xffffffff) break;
      puVar6 = (uint *)*puVar2;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar2 = puVar6;
      uVar8 = (longlong)puVar6 + 0x5f;
    }
  } while( true );
}



// FUNCTION 1437843aa FUN_1437843aa body=105 status=ok
// SIG undefined FUN_1437843aa(void)

undefined8 FUN_1437843aa(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb0fd70;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar6));
}



// FUNCTION 143784413 FUN_143784413 body=69 status=ok
// SIG undefined FUN_143784413(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784413(void)

{
  _DAT_14cb0fdb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fdc0,1);
  return;
}



// FUNCTION 143784458 FUN_143784458 body=69 status=ok
// SIG undefined FUN_143784458(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784458(void)

{
  _DAT_14cb0fdd0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378449a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fdd8,1);
  return;
}



// FUNCTION 14378449d FUN_14378449d body=69 status=ok
// SIG undefined FUN_14378449d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378449d(void)

{
  _DAT_14cb0fde8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437844df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fdf0,1);
  return;
}



// FUNCTION 1437844e2 FUN_1437844e2 body=69 status=ok
// SIG undefined FUN_1437844e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437844e2(void)

{
  _DAT_14cb0fe00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fe08,1);
  return;
}



// FUNCTION 143784527 FUN_143784527 body=69 status=ok
// SIG undefined FUN_143784527(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784527(void)

{
  _DAT_14cb0fe18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784569. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fe20,1);
  return;
}



// FUNCTION 14378456c FUN_14378456c body=69 status=ok
// SIG undefined FUN_14378456c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378456c(void)

{
  _DAT_14cb0fe30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437845ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fe38,1);
  return;
}



// FUNCTION 1437845b1 FUN_1437845b1 body=69 status=ok
// SIG undefined FUN_1437845b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437845b1(void)

{
  _DAT_14cb0fe48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437845f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fe50,1);
  return;
}



// FUNCTION 1437845f6 FUN_1437845f6 body=69 status=ok
// SIG undefined FUN_1437845f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437845f6(void)

{
  _DAT_14cb0fe60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fe68,1);
  return;
}



// FUNCTION 14378463b FUN_14378463b body=69 status=ok
// SIG undefined FUN_14378463b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378463b(void)

{
  _DAT_14cb0fe78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378467d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fe80,1);
  return;
}



// FUNCTION 143784680 FUN_143784680 body=69 status=ok
// SIG undefined FUN_143784680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784680(void)

{
  _DAT_14cb0fe90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437846c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fe98,1);
  return;
}



// FUNCTION 1437846c5 FUN_1437846c5 body=69 status=ok
// SIG undefined FUN_1437846c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437846c5(void)

{
  _DAT_14cb0fea8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0feb0,1);
  return;
}



// FUNCTION 14378470a FUN_14378470a body=69 status=ok
// SIG undefined FUN_14378470a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378470a(void)

{
  _DAT_14cb0fec8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378474c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fed0,1);
  return;
}



// FUNCTION 14378474f FUN_14378474f body=69 status=ok
// SIG undefined FUN_14378474f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378474f(void)

{
  _DAT_14cb0fed8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784791. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fee0,1);
  return;
}



// FUNCTION 143784794 FUN_143784794 body=69 status=ok
// SIG undefined FUN_143784794(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784794(void)

{
  _DAT_14cb0fee8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437847d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fef0,1);
  return;
}



// FUNCTION 1437847d9 FUN_1437847d9 body=69 status=ok
// SIG undefined FUN_1437847d9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437847d9(void)

{
  _DAT_14cb0fef8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378481b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ff00,1);
  return;
}



// FUNCTION 14378481e FUN_14378481e body=69 status=ok
// SIG undefined FUN_14378481e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378481e(void)

{
  _DAT_14cb0ff10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ff18,1);
  return;
}



// FUNCTION 143784863 FUN_143784863 body=69 status=ok
// SIG undefined FUN_143784863(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784863(void)

{
  _DAT_14cb0ff28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437848a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ff30,1);
  return;
}



// FUNCTION 1437848a8 FUN_1437848a8 body=392 status=ok
// SIG undefined FUN_1437848a8(void)

void FUN_1437848a8(void)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)*DAT_14cb0ff38;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb10634) && (FUN_144b3d300(&DAT_14cb10634), DAT_14cb10634 == -1)) {
    DAT_14cb10630 = fVar2;
    _Init_thread_footer(&DAT_14cb10634);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb10644) && (FUN_144b3d300(&DAT_14cb10644), DAT_14cb10644 == -1)) {
    DAT_14cb10638 = DAT_14cb0feb8;
    DAT_14cb1063c = DAT_14cb0febc;
    DAT_14cb10640 = DAT_14cb0fec0;
    _Init_thread_footer(&DAT_14cb10644);
  }
  fVar1 = DAT_14cb10630;
  if ((DAT_14cb10630 != fVar2) || (NAN(DAT_14cb10630) || NAN(fVar2))) {
    DAT_14cb10630 = fVar2;
  }
  if ((DAT_14cb10638 == DAT_14cb0feb8) && (!NAN(DAT_14cb10638) && !NAN(DAT_14cb0feb8))) {
    if ((DAT_14cb1063c == DAT_14cb0febc) && (!NAN(DAT_14cb1063c) && !NAN(DAT_14cb0febc))) {
      if ((DAT_14cb10640 == DAT_14cb0fec0) && (!NAN(DAT_14cb10640) && !NAN(DAT_14cb0fec0))) {
        if ((fVar1 == fVar2) && (!NAN(fVar1) && !NAN(fVar2))) {
          return;
        }
        goto LAB_14378495f;
      }
    }
  }
  DAT_14cb10638 = DAT_14cb0feb8;
  DAT_14cb1063c = DAT_14cb0febc;
  DAT_14cb10640 = DAT_14cb0fec0;
LAB_14378495f:
  FUN_140dfbfc9();
  return;
}



// FUNCTION 143784a30 FUN_143784a30 body=105 status=ok
// SIG undefined FUN_143784a30(void)

undefined4 FUN_143784a30(void)

{
  int iVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  
  lVar2 = DAT_14cb0fe70;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
    uVar5 = 0;
  }
  else if (iVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar5 = 1;
  }
  return *(undefined4 *)(lVar2 + uVar5 * 4);
}



// FUNCTION 143784a99 FUN_143784a99 body=18 status=ok
// SIG undefined FUN_143784a99(void)

int FUN_143784a99(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < *(int *)(DAT_14cb0fea0 + 4)) {
    iVar1 = *(int *)(DAT_14cb0fea0 + 4);
  }
  return iVar1;
}



// FUNCTION 143784aab FUN_143784aab body=109 status=ok
// SIG undefined FUN_143784aab(void)

undefined8 FUN_143784aab(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb0ff20;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar6 * 4) != 0);
}



// FUNCTION 143784b29 FUN_143784b29 body=69 status=ok
// SIG undefined FUN_143784b29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784b29(void)

{
  _DAT_14cb0ff88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ff90,1);
  return;
}



// FUNCTION 143784b6e FUN_143784b6e body=69 status=ok
// SIG undefined FUN_143784b6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784b6e(void)

{
  _DAT_14cb0ff98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ffa0,1);
  return;
}



// FUNCTION 143784bb3 FUN_143784bb3 body=69 status=ok
// SIG undefined FUN_143784bb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784bb3(void)

{
  _DAT_14cb0ffa8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ffb0,1);
  return;
}



// FUNCTION 143784bf8 FUN_143784bf8 body=572 status=ok
// SIG undefined FUN_143784bf8(void)

void FUN_143784bf8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  
  iVar9 = DAT_14c7590b0;
  if (*(short *)(*param_1 + 0x7c) != 1) {
    sVar2 = *(short *)(*param_1 + 0x7c);
    do {
      lVar15 = *param_1;
      lVar16 = (longlong)sVar2 * 0x40;
      if ((uint)(iVar9 - *(int *)(lVar15 + 0x34 + lVar16)) < DAT_14c761e94) {
        return;
      }
      sVar3 = *(short *)(lVar15 + 0x3c + lVar16);
      puVar13 = (undefined8 *)(lVar15 + lVar16);
      if (puVar13[1] == 0) {
        *(short *)(puVar13 + 7) = *(short *)(puVar13 + 7) + 1;
      }
      else {
        if ((*(byte *)(puVar13[1] + 0xa0) & 1) == 0) {
          return;
        }
        puVar7 = (undefined8 *)puVar13[1];
        *(short *)(puVar13 + 7) = *(short *)(puVar13 + 7) + 1;
        if (puVar7 != (undefined8 *)0x0) {
          puVar13[1] = 0;
          LOCK();
          piVar1 = (int *)(puVar7 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar7)(puVar7,1);
          }
        }
      }
      uVar10 = (uint)sVar2;
      uVar8 = *puVar13;
      lVar15 = 0;
      do {
        if (((uint)((ulonglong)uVar8 >> 0x3c) >> ((uint)lVar15 & 0x1f) & 1) != 0) {
          iVar6 = *(int *)((longlong)puVar13 + lVar15 * 4 + 0x10);
          FUN_140e357b0(param_3 + 0x28,param_2,
                        *(undefined4 *)(*(longlong *)(param_3 + 0x58) + 4 + (longlong)iVar6 * 0x28))
          ;
          FUN_140e3573e((longlong *)(param_3 + 0x58),iVar6);
        }
        lVar15 = lVar15 + 1;
      } while (lVar15 != 8);
      lVar15 = *param_1;
      sVar4 = *(short *)(lVar15 + 0x3c + lVar16);
      sVar5 = *(short *)(lVar15 + 0x3e + lVar16);
      *(short *)(lVar15 + 0x3c + (longlong)sVar5 * 0x40) = sVar4;
      *(short *)(*param_1 + 0x3e + (longlong)sVar4 * 0x40) = sVar5;
      *(short *)(lVar15 + 0x3e + lVar16) = sVar2;
      *(short *)(lVar15 + 0x3c + lVar16) = sVar2;
      lVar15 = *param_1;
      *(undefined2 *)(lVar15 + 0x3c + lVar16) = 0;
      sVar4 = *(short *)(lVar15 + 0x3e);
      *(short *)(lVar15 + 0x3e + lVar16) = sVar4;
      *(short *)(*param_1 + 0x3c + (longlong)sVar4 * 0x40) = sVar2;
      *(short *)(lVar15 + 0x3e) = sVar2;
      if (uVar10 < *(uint *)(param_1 + 3)) {
        uVar12 = (ulonglong)
                 ((uint)*(ushort *)((longlong)puVar13 + 0x3a) & *(uint *)((longlong)param_1 + 0x14))
        ;
        uVar11 = *(uint *)(param_1[4] + uVar12 * 4);
        if (uVar11 == uVar10) {
          puVar14 = (undefined4 *)(param_1[4] + uVar12 * 4);
          lVar15 = param_1[5];
        }
        else {
          do {
            uVar12 = (ulonglong)uVar11;
            if (uVar11 == 0xffffffff) goto LAB_143784db1;
            lVar15 = param_1[5];
            uVar11 = *(uint *)(lVar15 + uVar12 * 4);
          } while (uVar11 != uVar10);
          puVar14 = (undefined4 *)(lVar15 + uVar12 * 4);
        }
        *puVar14 = *(undefined4 *)(lVar15 + (ulonglong)uVar10 * 4);
      }
LAB_143784db1:
      if (uVar10 < *(uint *)(param_1 + 7)) {
        uVar11 = (*(uint *)(puVar13 + 6) >> 0x10 ^ *(uint *)(puVar13 + 6)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        uVar12 = (ulonglong)((uVar11 >> 0x10 ^ uVar11) & *(uint *)((longlong)param_1 + 0x34));
        uVar11 = *(uint *)(param_1[8] + uVar12 * 4);
        if (uVar11 == uVar10) {
          puVar14 = (undefined4 *)(param_1[8] + uVar12 * 4);
          lVar15 = param_1[9];
        }
        else {
          do {
            uVar12 = (ulonglong)uVar11;
            if (uVar11 == 0xffffffff) goto LAB_143784e18;
            lVar15 = param_1[9];
            uVar11 = *(uint *)(lVar15 + uVar12 * 4);
          } while (uVar11 != uVar10);
          puVar14 = (undefined4 *)(lVar15 + uVar12 * 4);
        }
        *puVar14 = *(undefined4 *)(lVar15 + (ulonglong)uVar10 * 4);
      }
LAB_143784e18:
      sVar2 = sVar3;
    } while (sVar3 != 1);
  }
  return;
}



// FUNCTION 143784e34 FUN_143784e34 body=69 status=ok
// SIG undefined FUN_143784e34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784e34(void)

{
  _DAT_14cb0ffc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784e76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ffc8,1);
  return;
}



// FUNCTION 143784e79 FUN_143784e79 body=69 status=ok
// SIG undefined FUN_143784e79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784e79(void)

{
  _DAT_14cb0ffd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784ebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0ffe0,1);
  return;
}



// FUNCTION 143784ebe FUN_143784ebe body=69 status=ok
// SIG undefined FUN_143784ebe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143784ebe(void)

{
  _DAT_14cb0fff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143784f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb0fff8,1);
  return;
}



// FUNCTION 143784f04 FUN_143784f04 body=124 status=ok
// SIG undefined FUN_143784f04(void)

void FUN_143784f04(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + (ulonglong)((param_3 & 0xff) << 4));
  uVar4 = (ulonglong)((param_3 >> 8 & 0xff) * 0x30);
  lVar1 = lVar3 + uVar4;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  lVar3 = *(longlong *)(lVar3 + uVar4);
  if (lVar3 != 0) {
    *param_2 = lVar3;
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_2[1] = *(longlong *)(lVar1 + 8);
  *(uint *)(param_2 + 2) = (param_3 >> 0x10) * *(int *)(lVar1 + 0x14);
  *(undefined4 *)((longlong)param_2 + 0x14) =
       *(undefined4 *)(lVar2 + 4 + (ulonglong)(param_3 & 0xff) * 0xc);
  return;
}



// FUNCTION 143784f80 FUN_143784f80 body=3064 status=ok
// SIG undefined FUN_143784f80(void)

void FUN_143784f80(longlong param_1,longlong param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong **pplVar20;
  byte bVar21;
  longlong lVar22;
  ulonglong *puVar23;
  uint uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  ulonglong uVar28;
  bool bVar29;
  undefined1 auStack_1c8 [32];
  uint local_1a8;
  int *local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined8 local_188;
  longlong local_180;
  longlong **local_178;
  longlong local_170;
  longlong *local_168;
  uint local_15c;
  ulonglong local_158;
  ulonglong *local_150;
  ulonglong local_148;
  longlong local_140;
  uint local_138;
  uint local_134;
  longlong *local_130;
  longlong local_128;
  ulonglong local_120;
  byte *local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  uint local_f8;
  int local_ec;
  longlong *local_e8;
  undefined4 local_e0;
  longlong local_d8;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  int iStack_c4;
  undefined4 uStack_c0;
  ulonglong local_bc;
  ulonglong local_b4;
  undefined4 local_ac;
  ushort local_a8;
  undefined1 local_a6;
  byte local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar23 = *(ulonglong **)(param_2 + 0x18);
  uVar6 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_138 = *(uint *)((longlong)puVar23 + 0x17c);
  local_170 = param_1;
  if (local_138 != uVar6) {
    *(uint *)((longlong)puVar23 + 0x17c) = uVar6;
    puVar8 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar8 + 3;
    if ((undefined8 *)puVar23[1] < puVar13) {
      FUN_140023dd8(puVar23,0x20);
      puVar8 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar8 + 3;
    }
    *puVar23 = (ulonglong)puVar13;
    *(int *)(puVar23 + 0xc) = (int)puVar23[0xc] + 1;
    *(undefined8 **)puVar23[6] = puVar8;
    puVar23[6] = (ulonglong)(puVar8 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar23 + 0x17c);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar8 + 2) = uVar3;
  }
  iVar27 = *(int *)(local_170 + 0x20);
  lVar19 = local_170;
  local_150 = puVar23;
  if (0 < iVar27) {
    local_128 = local_170 + 0x28;
    local_130 = (longlong *)(local_170 + 200);
    lVar22 = 0;
    do {
      lVar17 = *(longlong *)(lVar19 + 0x18);
      lVar25 = lVar22 * 0x68;
      uVar6 = *(uint *)(lVar17 + 0x60 + lVar25);
      if (uVar6 != 0) {
        local_118 = (byte *)(lVar17 + lVar25);
        uVar9 = (ulonglong)((uint)*local_118 * 0x30);
        uVar15 = *(uint *)(local_118 + 4);
        local_158 = (ulonglong)uVar15;
        uVar7 = *(uint *)(local_118 + 0x50);
        iVar27 = *(int *)((longlong)&DAT_14c873428 + uVar9);
        uVar24 = *(uint *)((longlong)&DAT_14c87341c + uVar9);
        local_15c = *(uint *)((longlong)&DAT_14c873420 + uVar9);
        local_148 = (ulonglong)local_15c;
        local_134 = (local_15c + uVar15) - 1;
        local_15c = local_134 / local_15c;
        *(uint *)(local_118 + 0x50) = (uVar7 + 1) % 3;
        local_178 = (longlong **)(local_118 + (ulonglong)uVar7 * 0x18 + 8);
        bVar21 = DAT_14c842750 ^ 1;
        local_110 = lVar22;
        if (((*(uint *)(local_118 + (ulonglong)uVar7 * 0x18 + 0x14) < uVar6) ||
            (uVar6 * 2 <= *(uint *)(local_118 + (ulonglong)uVar7 * 0x18 + 0x14))) ||
           (local_118[(ulonglong)uVar7 * 0x18 + 0x18] != bVar21)) {
          uVar26 = (int)((ulonglong)(((int)(DAT_14ca84e40 / local_158) + uVar6) - 1) /
                        (DAT_14ca84e40 / local_158)) + 3U & 0xfffffffc;
          uVar7 = ((uVar26 + uVar6) - 1) / uVar26;
          local_168 = (longlong *)CONCAT44(local_168._4_4_,uVar7);
          local_b4 = CONCAT44(uVar7 * uVar15,uVar26 * uVar15);
          local_d8 = (ulonglong)bVar21 << 5;
          local_a6 = 0;
          local_a4 = 0;
          local_ac = 0x10001;
          local_a8 = 0x101;
          uStack_d0 = 1;
          uStack_cc = 0;
          uStack_c8 = 0;
          iStack_c4 = 0;
          uStack_c0 = 0;
          local_a3 = 0xff;
          local_bc = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_98 = L"VirtualTexture_UploadCacheStagingTexture";
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          local_a5 = *local_118;
          local_a0 = FUN_1431edf91(local_d8,0);
          (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_e8,&DAT_14ca85100,&local_d8);
          if (local_178 == &local_e8) {
LAB_14378530c:
            plVar12 = local_e8;
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              puVar1 = (uint *)(local_e8 + 1);
              uVar7 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar7 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_e8 + 1);
                LOCK();
                uVar7 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar7 >> 0x1e & 1) == 0) {
                  local_180 = CONCAT44(local_180._4_4_,iVar27);
                  bVar2 = *(byte *)((longlong)local_e8 + 0xd);
                  plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar10[1] = (longlong)plVar12;
                  plVar12 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c8;
                  iVar27 = (int)local_180;
                  if ((bVar2 & 2) == 0) {
                    do {
                      *plVar10 = (longlong)plVar12;
                      LOCK();
                      bVar29 = plVar12 != DAT_14ca843c0;
                      plVar11 = plVar10;
                      if (bVar29) {
                        plVar12 = DAT_14ca843c0;
                        plVar11 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar11;
                      UNLOCK();
                    } while (bVar29);
                  }
                  else {
                    do {
                      *plVar10 = (longlong)plVar11;
                      LOCK();
                      bVar29 = plVar11 != DAT_14ca843c8;
                      plVar12 = plVar10;
                      if (bVar29) {
                        plVar11 = DAT_14ca843c8;
                        plVar12 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar12;
                      UNLOCK();
                    } while (bVar29);
                  }
                }
              }
            }
          }
          else {
            plVar12 = *local_178;
            *local_178 = local_e8;
            local_e8 = (longlong *)0x0;
            if (plVar12 != (longlong *)0x0) {
              LOCK();
              puVar1 = (uint *)(plVar12 + 1);
              uVar7 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar7 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(plVar12 + 1);
                LOCK();
                uVar7 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar7 >> 0x1e & 1) == 0) {
                  local_180 = CONCAT44(local_180._4_4_,iVar27);
                  bVar2 = *(byte *)((longlong)plVar12 + 0xd);
                  plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar10[1] = (longlong)plVar12;
                  plVar12 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c8;
                  iVar27 = (int)local_180;
                  if ((bVar2 & 2) == 0) {
                    do {
                      *plVar10 = (longlong)plVar12;
                      LOCK();
                      bVar29 = plVar12 != DAT_14ca843c0;
                      plVar11 = plVar10;
                      if (bVar29) {
                        plVar12 = DAT_14ca843c0;
                        plVar11 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar11;
                      UNLOCK();
                    } while (bVar29);
                  }
                  else {
                    do {
                      *plVar10 = (longlong)plVar11;
                      LOCK();
                      bVar29 = plVar11 != DAT_14ca843c8;
                      plVar12 = plVar10;
                      if (bVar29) {
                        plVar11 = DAT_14ca843c8;
                        plVar12 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar12;
                      UNLOCK();
                    } while (bVar29);
                  }
                }
              }
              goto LAB_14378530c;
            }
          }
          *(uint *)(local_178 + 1) = uVar26;
          *(uint *)((longlong)local_178 + 0xc) = (int)local_168 * uVar26;
          *(byte *)(local_178 + 2) = bVar21;
        }
        local_168 = (longlong *)(lVar17 + lVar25 + 0x58);
        local_ec = 0;
        uVar7 = 0;
        local_190 = 0;
        local_198 = 0;
        local_1a0 = &local_ec;
        local_188 = 0;
        local_1a8 = 1;
        local_108 = (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,local_150,*local_178,0);
        uVar15 = (((uVar24 + uVar15) - 1) / uVar24) * iVar27;
        uVar9 = (ulonglong)local_15c;
        local_120 = (ulonglong)uVar6;
        do {
          local_180 = *local_168;
          uVar6 = *(uint *)(local_178 + 1);
          local_140 = (longlong)(int)uVar7 * 5;
          FUN_143784f04(local_128,&local_d8,
                        *(undefined4 *)(local_180 + 4 + (longlong)(int)uVar7 * 0x28));
          iVar27 = iStack_c4;
          if ((uint)local_148 <= local_134) {
            uVar24 = (uVar7 / uVar6) * local_15c * local_ec;
            lVar22 = (ulonglong)((uVar7 % uVar6) * uVar15) + local_108;
            uVar28 = (ulonglong)uStack_c8;
            lVar19 = CONCAT44(uStack_cc,uStack_d0);
            uVar16 = 0;
            uVar18 = 0;
            do {
              memcpy((void *)((ulonglong)(uint)(local_ec * (int)uVar18) + lVar22 + (ulonglong)uVar24
                             ),(void *)(uVar16 + uVar28 + lVar19),(ulonglong)uVar15);
              uVar18 = uVar18 + 1;
              uVar16 = (ulonglong)(uint)((int)uVar16 + iVar27);
            } while (uVar18 < uVar9);
          }
          puVar23 = local_150;
          FUN_140e357b0(local_128,local_150,*(undefined4 *)(local_180 + local_140 * 8 + 4));
          lVar19 = local_d8;
          if (local_d8 != 0) {
            LOCK();
            puVar1 = (uint *)(local_d8 + 8);
            uVar6 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar6 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(local_d8 + 8);
              LOCK();
              uVar6 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar6 >> 0x1e & 1) == 0) {
                bVar21 = *(byte *)(local_d8 + 0xd);
                plVar10 = (longlong *)FUN_14001cc68(0x10);
                plVar10[1] = lVar19;
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c8;
                if ((bVar21 & 2) == 0) {
                  do {
                    *plVar10 = (longlong)plVar12;
                    LOCK();
                    bVar29 = plVar12 != DAT_14ca843c0;
                    plVar11 = plVar10;
                    if (bVar29) {
                      plVar12 = DAT_14ca843c0;
                      plVar11 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar11;
                    UNLOCK();
                  } while (bVar29);
                }
                else {
                  do {
                    *plVar10 = (longlong)plVar11;
                    LOCK();
                    bVar29 = plVar11 != DAT_14ca843c8;
                    plVar12 = plVar10;
                    if (bVar29) {
                      plVar11 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar29);
                }
              }
            }
          }
          pplVar20 = local_178;
          uVar7 = uVar7 + 1;
        } while (uVar7 != (uint)local_120);
        uVar6 = 0;
        local_1a0 = (int *)((ulonglong)local_1a0 & 0xffffffffffffff00);
        local_1a8 = local_1a8 & 0xffffff00;
        (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,puVar23,*local_178,0);
        local_d8 = -1;
        uStack_d0 = 0xffffffff;
        uStack_c8 = (uint)*pplVar20;
        iStack_c4 = (int)((ulonglong)*pplVar20 >> 0x20);
        uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
        local_bc = 0x8000000070;
        local_b4 = local_b4 & 0xffffffff00000000;
        local_a8 = local_a8 & 0xff00;
        local_e8 = &local_d8;
        local_e0 = 1;
        FUN_144760590(puVar23,&local_e8,0);
        lVar19 = local_170;
        uVar9 = local_158;
        do {
          lVar22 = *local_168;
          lVar25 = (longlong)(int)uVar6;
          uVar15 = *(uint *)(pplVar20 + 1);
          uVar7 = *(uint *)(lVar22 + 0x20 + lVar25 * 0x28);
          local_148 = (ulonglong)uVar7;
          iVar27 = (int)uVar9 + uVar7 * -2;
          local_180 = CONCAT44(local_180._4_4_,*(int *)(lVar22 + 0x1c + lVar25 * 0x28) * iVar27);
          local_140 = CONCAT44(local_140._4_4_,*(int *)(lVar22 + 0x18 + lVar25 * 0x28) * iVar27);
          lVar17 = *(longlong *)(lVar22 + 0x10 + lVar25 * 0x28);
          if ((longlong)*(int *)(lVar19 + 0xd0) != 0) {
            lVar14 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar19 + 200) + lVar14) == lVar17) goto LAB_143785770;
              lVar14 = lVar14 + 8;
            } while ((longlong)*(int *)(lVar19 + 0xd0) * 8 != lVar14);
          }
          local_d8 = -1;
          uStack_d0 = 0xffffffff;
          uStack_c8 = (uint)lVar17;
          iStack_c4 = (int)((ulonglong)lVar17 >> 0x20);
          uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
          local_bc = 0x200000000000;
          local_b4 = local_b4 & 0xffffffff00000000;
          local_a8 = local_a8 & 0xff00;
          local_e8 = &local_d8;
          local_e0 = 1;
          FUN_144760590(puVar23,&local_e8,1);
          iVar4 = *(int *)(local_170 + 0xd0);
          *(uint *)(local_170 + 0xd0) = iVar4 + 1U;
          if (*(uint *)(local_170 + 0xd4) < iVar4 + 1U) {
            FUN_14640ea14(local_130,iVar4);
          }
          lVar17 = *(longlong *)(lVar22 + lVar25 * 0x28 + 0x10);
          *(longlong *)(*local_130 + (longlong)iVar4 * 8) = lVar17;
          lVar19 = local_170;
          uVar9 = local_158;
          pplVar20 = local_178;
          puVar23 = local_150;
LAB_143785770:
          uVar16 = local_120;
          plVar12 = *pplVar20;
          puVar8 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar8 + 0xc;
          if ((undefined8 *)puVar23[1] < puVar13) {
            FUN_140023dd8(puVar23,0x68);
            puVar8 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
            puVar13 = puVar8 + 0xc;
            lVar19 = local_170;
            uVar9 = local_158;
            pplVar20 = local_178;
          }
          *puVar23 = (ulonglong)puVar13;
          *(int *)(puVar23 + 0xc) = (int)puVar23[0xc] + 1;
          *(undefined8 **)puVar23[6] = puVar8;
          puVar23[6] = (ulonglong)(puVar8 + 1);
          puVar8[1] = 0;
          *puVar8 = &PTR_LAB_14a289d68;
          *(int *)(puVar8 + 2) = iVar27;
          *(int *)((longlong)puVar8 + 0x14) = iVar27;
          *(undefined4 *)(puVar8 + 3) = 1;
          *(uint *)((longlong)puVar8 + 0x1c) = (uVar6 % uVar15) * (int)uVar9 + (int)local_148;
          *(uint *)(puVar8 + 4) = (uVar6 / uVar15) * (int)uVar9 + (int)local_148;
          *(undefined4 *)((longlong)puVar8 + 0x24) = 0;
          *(undefined4 *)(puVar8 + 5) = (undefined4)local_140;
          *(int *)((longlong)puVar8 + 0x2c) = (int)local_180;
          puVar8[6] = 0;
          puVar8[7] = 0x100000000;
          puVar8[8] = 0;
          *(undefined4 *)(puVar8 + 9) = 1;
          puVar8[10] = plVar12;
          puVar8[0xb] = lVar17;
          uVar6 = uVar6 + 1;
        } while (uVar6 != (uint)uVar16);
        local_d8 = -1;
        uStack_d0 = 0xffffffff;
        uStack_c8 = (uint)*pplVar20;
        iStack_c4 = (int)((ulonglong)*pplVar20 >> 0x20);
        uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
        local_bc = 0x7000000080;
        local_b4 = local_b4 & 0xffffffff00000000;
        local_a8 = local_a8 & 0xff00;
        local_e8 = &local_d8;
        local_e0 = 1;
        FUN_144760590(puVar23,&local_e8,0);
        iVar27 = *(int *)(local_118 + 100);
        local_118[0x60] = 0;
        local_118[0x61] = 0;
        local_118[0x62] = 0;
        local_118[99] = 0;
        if (iVar27 < 0) {
          FUN_147dafd08(local_168);
        }
        iVar27 = *(int *)(local_170 + 0x20);
        lVar22 = local_110;
        lVar19 = local_170;
      }
      lVar22 = lVar22 + 1;
    } while (lVar22 < iVar27);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_cc = 0;
  iVar27 = *(int *)(lVar19 + 0xd0);
  if (iVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar27);
  }
  lVar22 = lVar19;
  if ((iVar27 != 0) &&
     (FUN_1402a9a22(&local_d8), lVar22 = local_170, 0 < *(int *)(local_170 + 0xd0))) {
    lVar17 = 0;
    do {
      uVar6 = uStack_d0;
      uVar5 = *(undefined8 *)(*(longlong *)(lVar19 + 200) + lVar17 * 8);
      lVar25 = (longlong)(int)uStack_d0;
      uStack_d0 = uStack_d0 + 1;
      if (uStack_cc < uStack_d0) {
        FUN_14742f52c(&local_d8,uVar6);
        lVar22 = local_170;
      }
      lVar25 = lVar25 * 0x38;
      *(undefined8 *)(local_d8 + lVar25) = 0xffffffffffffffff;
      *(undefined4 *)(local_d8 + 8 + lVar25) = 0xffffffff;
      *(undefined8 *)(local_d8 + 0x10 + lVar25) = uVar5;
      *(undefined1 *)(local_d8 + 0x18 + lVar25) = 1;
      *(undefined8 *)(local_d8 + 0x1c + lVar25) = 0x7000002000;
      *(undefined4 *)(local_d8 + 0x24 + lVar25) = 0;
      *(undefined1 *)(local_d8 + 0x30 + lVar25) = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 < *(int *)(lVar22 + 0xd0));
  }
  puVar23 = local_150;
  local_100 = local_d8;
  local_f8 = uStack_d0;
  local_1a8 = 0;
  FUN_1431ebb78(local_150,&local_100,1,3);
  *(undefined4 *)(lVar22 + 0xd0) = 0;
  if (*(int *)(lVar22 + 0xd4) < 0) {
    FUN_147dafd38((longlong *)(lVar19 + 200));
  }
  FUN_144705e08(local_d8,uStack_d0);
  FUN_14006d152(&local_d8);
  if (*(uint *)((longlong)puVar23 + 0x17c) != local_138) {
    *(uint *)((longlong)puVar23 + 0x17c) = local_138;
    puVar8 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar8 + 3;
    if ((undefined8 *)puVar23[1] < puVar13) {
      FUN_140023dd8(puVar23,0x20);
      puVar8 = (undefined8 *)(*puVar23 + 7 & 0xfffffffffffffff8);
      puVar13 = puVar8 + 3;
    }
    *puVar23 = (ulonglong)puVar13;
    *(int *)(puVar23 + 0xc) = (int)puVar23[0xc] + 1;
    *(undefined8 **)puVar23[6] = puVar8;
    puVar23[6] = (ulonglong)(puVar8 + 1);
    uVar3 = *(undefined4 *)((longlong)puVar23 + 0x17c);
    puVar8[1] = 0;
    *puVar8 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar8 + 2) = uVar3;
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143785b7a FUN_143785b7a body=32 status=ok
// SIG undefined FUN_143785b7a(void)

void FUN_143785b7a(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14aa9a7a0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 143785b9a FUN_143785b9a body=72 status=ok
// SIG undefined FUN_143785b9a(void)

void FUN_143785b9a(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 2;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143785bd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x348))(*(longlong **)(lVar1 + 0x218),param_1);
  return;
}



// FUNCTION 143785be2 FUN_143785be2 body=65 status=ok
// SIG undefined FUN_143785be2(void)

void FUN_143785be2(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143785c16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x358))(*(longlong **)(lVar1 + 0x218),param_1);
  return;
}



// FUNCTION 143785c24 FUN_143785c24 body=65 status=ok
// SIG undefined FUN_143785c24(void)

void FUN_143785c24(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfb;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143785c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x358))(*(longlong **)(lVar1 + 0x218),param_1);
  return;
}



// FUNCTION 143785c66 FUN_143785c66 body=72 status=ok
// SIG undefined FUN_143785c66(void)

void FUN_143785c66(longlong param_1)

{
  longlong lVar1;
  
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000143785ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(lVar1 + 0x218) + 0x350))(*(longlong **)(lVar1 + 0x218),param_1);
  return;
}



// FUNCTION 143785cae FUN_143785cae body=221 status=ok
// SIG undefined FUN_143785cae(void)

longlong FUN_143785cae(void)

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
  if (DAT_14cb10130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140754f84;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147da9a76;
    local_40 = FUN_1409f3105;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x990;
    FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb10130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143785d8c FUN_143785d8c body=69 status=ok
// SIG undefined FUN_143785d8c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785d8c(void)

{
  _DAT_14cb10148 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10150,1);
  return;
}



// FUNCTION 143785dd1 FUN_143785dd1 body=69 status=ok
// SIG undefined FUN_143785dd1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785dd1(void)

{
  _DAT_14cb10158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785e13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10160,1);
  return;
}



// FUNCTION 143785e16 FUN_143785e16 body=69 status=ok
// SIG undefined FUN_143785e16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785e16(void)

{
  _DAT_14cb10168 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10170,1);
  return;
}



// FUNCTION 143785e5b FUN_143785e5b body=69 status=ok
// SIG undefined FUN_143785e5b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785e5b(void)

{
  _DAT_14cb10180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785e9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10188,1);
  return;
}



// FUNCTION 143785ea0 FUN_143785ea0 body=69 status=ok
// SIG undefined FUN_143785ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785ea0(void)

{
  _DAT_14cb10198 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb101a0,1);
  return;
}



// FUNCTION 143785ee5 FUN_143785ee5 body=69 status=ok
// SIG undefined FUN_143785ee5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785ee5(void)

{
  _DAT_14cb101a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785f27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb101b0,1);
  return;
}



// FUNCTION 143785f2a FUN_143785f2a body=69 status=ok
// SIG undefined FUN_143785f2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785f2a(void)

{
  _DAT_14cb101c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785f6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb101c8,1);
  return;
}



// FUNCTION 143785f6f FUN_143785f6f body=69 status=ok
// SIG undefined FUN_143785f6f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785f6f(void)

{
  _DAT_14cb101d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785fb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb101e0,1);
  return;
}



// FUNCTION 143785fb4 FUN_143785fb4 body=69 status=ok
// SIG undefined FUN_143785fb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785fb4(void)

{
  _DAT_14cb101f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143785ff6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb101f8,1);
  return;
}



// FUNCTION 143785ff9 FUN_143785ff9 body=69 status=ok
// SIG undefined FUN_143785ff9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143785ff9(void)

{
  _DAT_14cb10208 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378603b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10210,1);
  return;
}



// FUNCTION 14378603e FUN_14378603e body=69 status=ok
// SIG undefined FUN_14378603e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378603e(void)

{
  _DAT_14cb10220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143786080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10228,1);
  return;
}



// FUNCTION 143786083 FUN_143786083 body=69 status=ok
// SIG undefined FUN_143786083(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143786083(void)

{
  _DAT_14cb10230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437860c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10238,1);
  return;
}



// FUNCTION 1437860c8 FUN_1437860c8 body=69 status=ok
// SIG undefined FUN_1437860c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437860c8(void)

{
  _DAT_14cb10240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378610a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10248,1);
  return;
}



// FUNCTION 14378610d FUN_14378610d body=69 status=ok
// SIG undefined FUN_14378610d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378610d(void)

{
  _DAT_14cb10250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378614f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10258,1);
  return;
}



// FUNCTION 143786152 FUN_143786152 body=69 status=ok
// SIG undefined FUN_143786152(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143786152(void)

{
  _DAT_14cb10260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143786194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10268,1);
  return;
}



// FUNCTION 143786197 FUN_143786197 body=69 status=ok
// SIG undefined FUN_143786197(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143786197(void)

{
  _DAT_14cb10278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437861d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10280,1);
  return;
}



// FUNCTION 1437861dc FUN_1437861dc body=49 status=ok
// SIG undefined FUN_1437861dc(void)

void FUN_1437861dc(void)

{
  FUN_144760e21(DAT_14cb10778,DAT_14cb10780);
  if (DAT_14cb10778 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378620d FUN_14378620d body=49 status=ok
// SIG undefined FUN_14378620d(void)

void FUN_14378620d(void)

{
  FUN_144760e21(DAT_14cb10790,DAT_14cb10798);
  if (DAT_14cb10790 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378623e FUN_14378623e body=41 status=ok
// SIG undefined FUN_14378623e(void)

void FUN_14378623e(void)

{
  DAT_14cb10910 = 0;
  if (DAT_14cb10908 != 0) {
    FUN_1400020a8();
  }
  FUN_145d6bfa6();
  return;
}



// FUNCTION 143786267 FUN_143786267 body=59 status=ok
// SIG undefined FUN_143786267(void)

void FUN_143786267(void)

{
  FUN_144760e21(DAT_14cb109c0,DAT_14cb109c8);
  if (DAT_14cb109c0 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x000143786294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10998);
  return;
}



// FUNCTION 1437862a2 FUN_1437862a2 body=49 status=ok
// SIG undefined FUN_1437862a2(void)

void FUN_1437862a2(void)

{
  FUN_144760e21(DAT_14cb109f0,DAT_14cb109f8);
  if (DAT_14cb109f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437862d3 FUN_1437862d3 body=49 status=ok
// SIG undefined FUN_1437862d3(void)

void FUN_1437862d3(void)

{
  FUN_144760e21(DAT_14cb10980,DAT_14cb10988);
  if (DAT_14cb10980 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786304 FUN_143786304 body=49 status=ok
// SIG undefined FUN_143786304(void)

void FUN_143786304(void)

{
  FUN_144760e21(DAT_14cb109d8,DAT_14cb109e0);
  if (DAT_14cb109d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786335 FUN_143786335 body=49 status=ok
// SIG undefined FUN_143786335(void)

void FUN_143786335(void)

{
  FUN_144760e21(DAT_14cb10a20,DAT_14cb10a28);
  if (DAT_14cb10a20 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786366 FUN_143786366 body=49 status=ok
// SIG undefined FUN_143786366(void)

void FUN_143786366(void)

{
  FUN_144760e21(DAT_14cb10a08,DAT_14cb10a10);
  if (DAT_14cb10a08 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786397 FUN_143786397 body=59 status=ok
// SIG undefined FUN_143786397(void)

void FUN_143786397(void)

{
  FUN_144760e21(DAT_14cb10a60,DAT_14cb10a68);
  if (DAT_14cb10a60 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437863c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10a38);
  return;
}



// FUNCTION 1437863d2 FUN_1437863d2 body=49 status=ok
// SIG undefined FUN_1437863d2(void)

void FUN_1437863d2(void)

{
  FUN_144760e21(DAT_14cb10a78,DAT_14cb10a80);
  if (DAT_14cb10a78 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786403 FUN_143786403 body=49 status=ok
// SIG undefined FUN_143786403(void)

void FUN_143786403(void)

{
  FUN_144760e21(DAT_14cb108b0,DAT_14cb108b8);
  if (DAT_14cb108b0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786434 FUN_143786434 body=49 status=ok
// SIG undefined FUN_143786434(void)

void FUN_143786434(void)

{
  FUN_144760e21(DAT_14cb10a90,DAT_14cb10a98);
  if (DAT_14cb10a90 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786465 FUN_143786465 body=49 status=ok
// SIG undefined FUN_143786465(void)

void FUN_143786465(void)

{
  FUN_144760e21(DAT_14cb107c0,DAT_14cb107c8);
  if (DAT_14cb107c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786496 FUN_143786496 body=49 status=ok
// SIG undefined FUN_143786496(void)

void FUN_143786496(void)

{
  FUN_144760e21(DAT_14cb107d8,DAT_14cb107e0);
  if (DAT_14cb107d8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437864c7 FUN_1437864c7 body=49 status=ok
// SIG undefined FUN_1437864c7(void)

void FUN_1437864c7(void)

{
  FUN_144760e21(DAT_14cb107f0,DAT_14cb107f8);
  if (DAT_14cb107f0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437864f8 FUN_1437864f8 body=49 status=ok
// SIG undefined FUN_1437864f8(void)

void FUN_1437864f8(void)

{
  FUN_144760e21(DAT_14cb10880,DAT_14cb10888);
  if (DAT_14cb10880 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786529 FUN_143786529 body=49 status=ok
// SIG undefined FUN_143786529(void)

void FUN_143786529(void)

{
  FUN_144760e21(DAT_14cb10378,DAT_14cb10380);
  if (DAT_14cb10378 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378655a FUN_14378655a body=49 status=ok
// SIG undefined FUN_14378655a(void)

void FUN_14378655a(void)

{
  FUN_144760e21(DAT_14cb10390,DAT_14cb10398);
  if (DAT_14cb10390 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378658b FUN_14378658b body=49 status=ok
// SIG undefined FUN_14378658b(void)

void FUN_14378658b(void)

{
  FUN_144760e21(DAT_14cb10838,DAT_14cb10840);
  if (DAT_14cb10838 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437865bc FUN_1437865bc body=49 status=ok
// SIG undefined FUN_1437865bc(void)

void FUN_1437865bc(void)

{
  FUN_144760e21(DAT_14cb10808,DAT_14cb10810);
  if (DAT_14cb10808 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437865ed FUN_1437865ed body=49 status=ok
// SIG undefined FUN_1437865ed(void)

void FUN_1437865ed(void)

{
  FUN_144760e21(DAT_14cb10850,DAT_14cb10858);
  if (DAT_14cb10850 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378661e FUN_14378661e body=49 status=ok
// SIG undefined FUN_14378661e(void)

void FUN_14378661e(void)

{
  FUN_144760e21(DAT_14cb10868,DAT_14cb10870);
  if (DAT_14cb10868 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378664f FUN_14378664f body=49 status=ok
// SIG undefined FUN_14378664f(void)

void FUN_14378664f(void)

{
  FUN_144760e21(DAT_14cb10820,DAT_14cb10828);
  if (DAT_14cb10820 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786680 FUN_143786680 body=59 status=ok
// SIG undefined FUN_143786680(void)

void FUN_143786680(void)

{
  FUN_144760e21(DAT_14cb10b10,DAT_14cb10b18);
  if (DAT_14cb10b10 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437866ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10ae8);
  return;
}



// FUNCTION 1437866bb FUN_1437866bb body=59 status=ok
// SIG undefined FUN_1437866bb(void)

void FUN_1437866bb(void)

{
  FUN_144760e21(DAT_14cb10ad0,DAT_14cb10ad8);
  if (DAT_14cb10ad0 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437866e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10aa8);
  return;
}



// FUNCTION 1437866f6 FUN_1437866f6 body=49 status=ok
// SIG undefined FUN_1437866f6(void)

void FUN_1437866f6(void)

{
  FUN_144760e21(DAT_14cb10968,DAT_14cb10970);
  if (DAT_14cb10968 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786727 FUN_143786727 body=49 status=ok
// SIG undefined FUN_143786727(void)

void FUN_143786727(void)

{
  FUN_144760e21(DAT_14cb103a8,DAT_14cb103b0);
  if (DAT_14cb103a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786758 FUN_143786758 body=49 status=ok
// SIG undefined FUN_143786758(void)

void FUN_143786758(void)

{
  FUN_144760e21(DAT_14cb10898,DAT_14cb108a0);
  if (DAT_14cb10898 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143786789 FUN_143786789 body=49 status=ok
// SIG undefined FUN_143786789(void)

void FUN_143786789(void)

{
  FUN_144760e21(DAT_14cb103c0,DAT_14cb103c8);
  if (DAT_14cb103c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437867ba FUN_1437867ba body=49 status=ok
// SIG undefined FUN_1437867ba(void)

void FUN_1437867ba(void)

{
  FUN_144760e21(DAT_14cb107a8,DAT_14cb107b0);
  if (DAT_14cb107a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437867eb FUN_1437867eb body=49 status=ok
// SIG undefined FUN_1437867eb(void)

void FUN_1437867eb(void)

{
  FUN_144760e21(DAT_14cb10950,DAT_14cb10958);
  if (DAT_14cb10950 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378681c FUN_14378681c body=49 status=ok
// SIG undefined FUN_14378681c(void)

void FUN_14378681c(void)

{
  FUN_144760e21(DAT_14cb10920,DAT_14cb10928);
  if (DAT_14cb10920 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378684d FUN_14378684d body=49 status=ok
// SIG undefined FUN_14378684d(void)

void FUN_14378684d(void)

{
  FUN_144760e21(DAT_14cb103e0,DAT_14cb103e8);
  if (DAT_14cb103e0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14378687e FUN_14378687e body=49 status=ok
// SIG undefined FUN_14378687e(void)

void FUN_14378687e(void)

{
  FUN_144760e21(DAT_14cb10938,DAT_14cb10940);
  if (DAT_14cb10938 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1437868b0 FUN_1437868b0 body=766 status=ok
// SIG undefined FUN_1437868b0(void)

void FUN_1437868b0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  code *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  code *local_58;
  longlong **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(byte *)(param_1 + 0x157) & 2) != 0) {
    FUN_1409f3758(&DAT_14cb10a38,param_1);
    FUN_1402d3a9c(param_1);
    plVar1 = *(longlong **)(param_1 + 0x168);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))(plVar1,0);
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    if (*(longlong *)(param_1 + 0x620) != 0) {
      FUN_1435b80fe();
      *(undefined8 *)(param_1 + 0x620) = 0;
    }
    puVar2 = *(undefined8 **)(param_1 + 0x260);
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
      *(undefined8 *)(param_1 + 0x260) = 0;
      lVar5 = DAT_14cafa570;
      if ((DAT_14cafa570 != 0) &&
         (*(undefined4 *)(DAT_14cafa570 + 8) = 0, *(int *)(lVar5 + 0xc) != 0)) {
        FUN_147c86524(lVar5,0);
      }
    }
    if (*(longlong **)(param_1 + 0x218) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x218) + 0x3b8))();
      *(undefined8 *)(param_1 + 0x218) = 0;
    }
  }
  if (DAT_14cb10918 == param_1) {
    DAT_14cb10918 = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x458);
  lVar5 = param_1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
LAB_1437869c5:
  lVar4 = lVar5;
  lVar5 = lVar4;
  if (*(longlong *)(lVar4 + 0x20) != 0) goto code_r0x0001437869d4;
  goto LAB_1437869e8;
code_r0x0001437869d4:
  lVar5 = *(longlong *)(lVar4 + 0x20);
  if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) goto LAB_1437869c5;
  lVar5 = FUN_142840154(lVar4);
LAB_1437869e8:
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar4 + 0x20);
    goto LAB_1437869c5;
  }
  if ((*(byte *)(lVar5 + 0x2e) & 2) != 0) {
    local_60 = &local_78;
    local_78 = 0;
    uStack_70 = 0;
    local_50 = &local_60;
    local_58 = FUN_14284083c;
    local_c8 = 0;
    FUN_144a56f9f(lVar5,&local_58,0,0);
    lVar4 = local_78;
    lVar6 = (longlong)(int)uStack_70;
    if (lVar6 != 0) {
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(lVar4 + lVar7);
        if (lVar3 != 0) {
          if (DAT_14cb10130 == 0) {
            local_58 = FUN_140754f84;
            local_80 = FUN_14081d0ea;
            local_88 = FUN_14081d0ea;
            local_98 = &LAB_147da9a76;
            local_a0 = FUN_1409f3105;
            local_a8 = L"Engine";
            local_b0 = 0;
            local_b8 = 0x10000000;
            local_c0 = 8;
            local_c8 = 0x990;
            local_90 = &local_58;
            FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
          }
          if (((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
              (lVar3 != param_1)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30))
          goto LAB_143786b5e;
        }
        lVar7 = lVar7 + 8;
      } while (lVar6 * 8 != lVar7);
    }
    *(byte *)(lVar5 + 0x2e) = *(byte *)(lVar5 + 0x2e) & 0xfd;
LAB_143786b5e:
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  switchD_143c3d4dc::caseD_1f(param_1);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143786bb4 FUN_143786bb4 body=55 status=ok
// SIG undefined FUN_143786bb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143786bb4(undefined8 param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1479b02fa();
  if (cVar2 == '\0') {
    *param_2 = 0;
    uVar1 = uRam000000014cad0f28;
    param_3[2] = _DAT_14cad0f20;
    param_3[3] = uVar1;
    uVar1 = _DAT_14cad0f18;
    *param_3 = _DAT_14cad0f10;
    param_3[1] = uVar1;
  }
  return;
}



// FUNCTION 143786bec FUN_143786bec body=248 status=ok
// SIG undefined FUN_143786bec(void)

void FUN_143786bec(longlong param_1,char param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0x7f;
  if ((*(byte *)(param_1 + 0x156) & 0x40) == 0) {
    *(byte *)(param_1 + 0x156) = *(byte *)(param_1 + 0x156) | 0x40;
    FUN_1414451e4(param_1);
  }
  FUN_143786ce4(param_1,1);
  FUN_140e511ae(param_1,1,1,param_3);
  if (param_2 == '\x01' && DAT_14cb0d2b0 != (longlong *)0x0) {
    (**(code **)(*DAT_14cb0d2b0 + 0x2a8))(DAT_14cb0d2b0,param_1);
  }
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar4 = 0;
  }
  FUN_14482b126(lVar4,0x40000000);
  FUN_14472eae2(param_1,2);
  iVar3 = *(int *)(param_1 + 0x198);
  if (0 < iVar3) {
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 400) + lVar4 * 8) + 0x20);
      if (lVar2 != param_3 && lVar2 != param_1) {
        FUN_14472eae2(lVar2,2);
        iVar3 = *(int *)(param_1 + 0x198);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar3);
  }
  return;
}



// FUNCTION 143786ce4 FUN_143786ce4 body=347 status=ok
// SIG undefined FUN_143786ce4(void)

void FUN_143786ce4(longlong param_1,char param_2)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = *(char *)(param_1 + 0x758);
  if ((cVar1 != param_2) && (param_2 != '\0' && cVar1 != '\x01')) {
    cVar2 = '\x01';
    if (cVar1 != '\x02' || param_2 != '\x01') {
      *(char *)(param_1 + 0x758) = param_2;
      if (param_2 == '\x01') {
        local_30 = 0;
        FUN_141690028(param_1);
        DAT_14c947e18 = DAT_14c947e18 + 1;
        if (*(char *)(param_1 + 0x758) == '\x01') {
          FUN_14046004c(param_1);
        }
      }
      else {
        DAT_14c947e18 = DAT_14c947e18 + 1;
      }
      local_30 = 0;
      FUN_141690028(param_1);
      DAT_14c947e18 = DAT_14c947e18 + -1;
      cVar2 = FUN_143788e04(param_1);
      if (cVar2 != '\0') {
        do {
          cVar2 = *(char *)(param_1 + 0x758);
          DAT_14c947e18 = DAT_14c947e18 + 1;
          if (cVar2 == '\x01') {
            FUN_14046004c(param_1);
          }
          local_30 = 0;
          FUN_141690028(param_1,local_40);
          DAT_14c947e18 = DAT_14c947e18 + -1;
        } while ((cVar2 != *(char *)(param_1 + 0x758)) ||
                (cVar2 = FUN_143788e04(param_1), cVar2 != '\0'));
      }
      if ((*(byte *)(param_1 + 0x153) & 0xc) == 0) {
        *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
      }
      cVar2 = cVar1;
      if (*(char *)(param_1 + 0x758) == '\x01') {
        *(byte *)(param_1 + 0x154) = *(byte *)(param_1 + 0x154) & 0xbf;
      }
    }
    *(char *)(param_1 + 0x758) = cVar2;
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143786e40 FUN_143786e40 body=423 status=ok
// SIG undefined FUN_143786e40(void)

void FUN_143786e40(uint *param_1)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  
  lVar13 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar12 = (longlong)(int)param_1[8] + 1;
    do {
      lVar10 = lVar13;
      puVar4 = param_1 + 0xe;
      if (lVar12 < lVar13) {
        lVar10 = 0;
        puVar4 = param_1 + 4;
      }
      lVar10 = *(longlong *)(*(longlong *)puVar4 + lVar10 * -8 + lVar12 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar10 != 0) && (lVar7 = FUN_144a79cc8(lVar10), lVar7 != 0)) &&
         ((uVar6 = *param_1, (uVar6 & 1) == 0 || ((*(uint *)(lVar10 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar6 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar10);
          if (cVar5 == '\0') goto LAB_143786eed;
          uVar6 = *param_1;
        }
        if ((uVar6 & 4) != 0) {
          if (((*(byte *)(lVar7 + 0x240) & 0x20) == 0) ||
             (bVar9 = 1, (*(byte *)(lVar7 + 0x242) & 8) != 0)) {
            bVar9 = 1;
            if ((*(byte *)(lVar7 + 0x241) & 0x20) == 0) {
              bVar9 = (*(byte *)(lVar7 + 0x241) & 0x40) >> 6;
            }
          }
          lVar8 = *(longlong *)(lVar7 + 0xc0);
          if (lVar8 == 0) {
LAB_143786f68:
            pcVar11 = (char *)0x0;
          }
          else {
            iVar1 = *(int *)(lVar8 + 0x1b0);
            if (((longlong)iVar1 < 0) || (*(int *)(lVar8 + 0x1a8) <= iVar1)) goto LAB_143786f68;
            pcVar11 = (char *)((longlong)iVar1 * 0x78 + *(longlong *)(lVar8 + 0x1a0));
          }
          pcVar3 = *(char **)(lVar7 + 0x2e8);
          if (pcVar3 == (char *)0x0) {
            bVar14 = true;
          }
          else {
            bVar14 = *pcVar3 == '\x02';
          }
          if ((bVar9 & ((pcVar11 == (char *)0x0 || pcVar3 == pcVar11) | bVar14)) != 1)
          goto LAB_143786eed;
        }
        lVar8 = FUN_144a8afe2(lVar7);
        if (lVar8 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar7) {
LAB_143786fd5:
            *(longlong *)(param_1 + 0xc) = lVar10;
            param_1[8] = (uint)lVar12;
            return;
          }
          lVar7 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_143786fd5;
        }
      }
LAB_143786eed:
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x10] + lVar13);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 143786fe8 FUN_143786fe8 body=21 status=ok
// SIG undefined FUN_143786fe8(void)

void FUN_143786fe8(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x153) & 0xc) == 0) {
    *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) | 8;
  }
  return;
}



// FUNCTION 143786ffe FUN_143786ffe body=3948 status=ok
// SIG undefined FUN_143786ffe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143786ffe(LARGE_INTEGER param_1,LARGE_INTEGER param_2,ulonglong param_3,byte param_4,
                  LARGE_INTEGER *param_5,undefined4 param_6,longlong param_7)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  byte bVar7;
  byte bVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 uVar16;
  LARGE_INTEGER LVar17;
  int iVar18;
  LARGE_INTEGER LVar19;
  byte bVar20;
  bool bVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  PSRWLOCK pRVar26;
  double dVar27;
  float fVar28;
  undefined1 auStack_168 [47];
  byte local_139;
  LARGE_INTEGER local_138;
  PSRWLOCK local_130;
  int local_124;
  longlong local_120;
  ulonglong local_118;
  LARGE_INTEGER local_110;
  int local_108;
  LARGE_INTEGER local_100;
  LARGE_INTEGER local_f8;
  ulonglong local_f0;
  ulonglong local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  LARGE_INTEGER local_b8;
  LARGE_INTEGER local_b0;
  ulonglong local_a8;
  uint local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_118 = param_3;
  if (param_7 == 0) {
    param_7 = FUN_1405d1c86(param_2.QuadPart);
  }
  *(byte *)(param_2.QuadPart + 0x241U) = *(byte *)(param_2.QuadPart + 0x241U) | 0x20;
  local_120 = param_7;
  QueryPerformanceCounter(&local_b8);
  dVar5 = (double)local_b8.QuadPart * DAT_14c83f420;
  pRVar26 = (PSRWLOCK)(param_1.QuadPart + 0xe0);
  AcquireSRWLockShared(pRVar26);
  local_130 = pRVar26;
  if (param_2.QuadPart == 0) {
    ReleaseSRWLockShared(pRVar26);
LAB_1437870c0:
    iVar23 = 1;
    if (1 < DAT_14c761e98) {
      iVar23 = DAT_14c761e98;
    }
    bVar21 = *(int *)(param_1.QuadPart + 0xf0) < iVar23;
    bVar6 = false;
  }
  else {
    bVar20 = *(byte *)(param_2.QuadPart + 0x243);
    ReleaseSRWLockShared(pRVar26);
    bVar6 = true;
    bVar21 = true;
    if ((bVar20 & 0xc) != 4) goto LAB_1437870c0;
  }
  local_139 = 0x6aU >> (*(byte *)(param_1.QuadPart + 0x152) & 0x1f) &
              *(byte *)(param_1.QuadPart + 0x152) < 7;
  if (bVar21 == true && !bVar6) {
    lVar11 = FUN_14019a418(param_2.QuadPart + 0x2c0);
    if (lVar11 == 0) {
      bVar20 = 1;
    }
    else {
      lVar12 = (**(code **)(*(longlong *)(lVar11 + 0x28) + 0x78))((longlong *)(lVar11 + 0x28));
      bVar20 = 1;
      lVar11 = 0;
      if (lVar12 == 0) {
LAB_143787398:
        bVar7 = (byte)lVar11;
      }
      else {
        lVar11 = 0;
        if (((*(longlong *)(lVar12 + 0x30) == 0) ||
            (lVar11 = *(longlong *)(*(longlong *)(lVar12 + 0x30) + 0x2b0), lVar11 == 0)) ||
           (*(longlong *)(lVar11 + 0x3f0) == 0)) goto LAB_143787398;
        bVar7 = FUN_1417fb8a6();
        bVar20 = 0;
      }
      bVar20 = bVar20 | bVar7;
    }
    bVar21 = (bool)(bVar21 & bVar20);
  }
  bVar20 = local_139;
  bVar7 = *(byte *)(param_1.QuadPart + 0x155) >> 1 & param_4 & local_139;
  QueryPerformanceCounter(&local_b8);
  local_138 = local_b8;
  uVar24 = 0xffffffffffffffff;
  if ((bVar21 != false) && (bVar7 != 0)) {
    if (*(char *)(param_5 + 2) == '\x01') {
      local_138 = (LARGE_INTEGER)param_5->QuadPart;
      uVar24 = param_5[1].QuadPart;
LAB_143787281:
      if (uVar24 == 0xffffffffffffffff) {
        bVar21 = false;
      }
      else if (uVar24 == 0) {
        bVar21 = true;
      }
      else {
        QueryPerformanceCounter(&local_b8);
        bVar21 = local_138.QuadPart + uVar24 < (ulonglong)local_b8;
      }
    }
    else {
      fVar28 = 0.0;
      if (((*(longlong *)(param_1.QuadPart + 0x30) != 0) &&
          (lVar11 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x30) + 0x2b0), lVar11 != 0)) &&
         (((*(byte *)(lVar11 + 0x39e) & 0x60) != 0 ||
          (lVar11 = FUN_1405e677a(DAT_14cb0d2b0), *(char *)(lVar11 + 0x88) == '\x01')))) {
        fVar28 = DAT_14c7614a4;
      }
      if (DAT_14cb10374 == '\x01') {
        pfVar13 = (float *)&DAT_14cb10360;
        DAT_14cb10364 = fVar28;
      }
      else {
        pfVar13 = (float *)&DAT_14c7614a8;
      }
      dVar27 = (double)(fVar28 + *pfVar13) - _DAT_14cb10408;
      dVar4 = 0.0;
      if (0.0 <= dVar27) {
        dVar4 = dVar27;
      }
      if (0.0 < dVar4 / 1000.0) {
        dVar4 = (dVar4 / 1000.0) / DAT_14c83f418;
        uVar24 = (ulonglong)dVar4;
        uVar24 = (longlong)(dVar4 - 9.223372036854776e+18) & (longlong)uVar24 >> 0x3f | uVar24;
        goto LAB_143787281;
      }
      bVar21 = true;
      uVar24 = 0;
    }
    bVar21 = (bool)(bVar21 ^ 1);
  }
  pRVar26 = local_130;
  if (bVar6 || bVar21 != true) {
LAB_143787301:
    bVar8 = *(byte *)(param_2.QuadPart + 0x240);
    if ((bVar8 & 0x20) == 0) {
      iVar23 = 0;
      if (((*(byte *)(param_2.QuadPart + 0x241) & 1) == 0) &&
         (iVar23 = 0, *(char *)(param_2.QuadPart + 0x244) != '\x03')) {
        iVar23 = *(int *)(param_2.QuadPart + 0xa8) - *(int *)(param_2.QuadPart + 0x248);
      }
      if (*(byte *)(param_2.QuadPart + 0x3c8) != 3) {
        iVar23 = (int)((float)iVar23 +
                      ((float)(int)((3 - (uint)*(byte *)(param_2.QuadPart + 0x3c8)) *
                                    *(int *)(param_2.QuadPart + 0xa8) -
                                   *(int *)(param_2.QuadPart + 0x3cc)) * DAT_14c76159c) / 3.0);
      }
    }
    else {
      iVar23 = 0;
    }
    if (bVar21 == false) goto LAB_143787385;
LAB_143787549:
    if ((bVar8 & 0x40) == 0) {
      local_b0.QuadPart = 0;
      local_a8 = local_118;
      local_a0 = CONCAT31(local_a0._1_3_,1);
      local_b8 = param_2;
      FUN_140f782f2();
      bVar8 = *(byte *)(param_2.QuadPart + 0x240) | 0x40;
      *(byte *)(param_2.QuadPart + 0x240) = bVar8;
      if (bVar7 == 0) goto LAB_14378767b;
      if (uVar24 == 0) goto LAB_143787385;
      if (uVar24 == 0xffffffffffffffff) goto LAB_14378767b;
      QueryPerformanceCounter(&local_100);
      pRVar26 = local_130;
      if ((ulonglong)local_100 <= local_138.QuadPart + uVar24) {
        bVar8 = *(byte *)(param_2.QuadPart + 0x240);
        goto LAB_14378767b;
      }
      bVar8 = 0;
    }
    else {
LAB_14378767b:
      if (-1 < (char)bVar8) {
        if (*(longlong *)(param_1.QuadPart + 0x748) != 0) {
          FUN_147db2794();
          bVar8 = *(byte *)(param_2.QuadPart + 0x240);
        }
        *(byte *)(param_2.QuadPart + 0x240) = bVar8 | 0x80;
        if (((bVar7 != 0) && (uVar24 != 0xffffffffffffffff)) &&
           ((uVar24 == 0 ||
            (QueryPerformanceCounter(&local_b8), pRVar26 = local_130,
            local_138.QuadPart + uVar24 < (ulonglong)local_b8)))) goto LAB_143787385;
      }
      bVar8 = 1;
      if ((*(byte *)(param_2.QuadPart + 0x241) & 1) == 0) {
        *(byte *)(param_2.QuadPart + 0x240U) = *(byte *)(param_2.QuadPart + 0x240U) & 0xfd;
        if (param_2.QuadPart == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = *(longlong *)(param_2.QuadPart + 0x2f0);
        }
        local_124 = iVar23;
        local_100 = param_1;
        QueryPerformanceCounter(&local_110);
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_f8.s = local_138.s;
        local_a0 = DAT_14c7614ac;
        if ((int)DAT_14c7614ac < 1) {
          local_a0 = 0;
        }
        local_e8 = (ulonglong)local_a0;
        local_b8.s = local_100.s;
        local_b0.s = local_138.s;
        local_98 = 0;
        local_9c = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        uStack_78 = 0;
        local_f0 = uVar24;
        local_a8 = uVar24;
        FUN_1400f6522(&local_100);
        FUN_1400f64be(&local_c8);
        FUN_1400f64be(&local_d8);
        uVar9 = 0;
        if ((DAT_14c872bf0 & 1) == 0) {
          uVar9 = DAT_14c7614b0;
        }
        uVar25 = 0;
        if (bVar7 != 0) {
          uVar25 = uVar9;
        }
        LVar17.QuadPart = local_138.QuadPart + uVar24;
        do {
          FUN_14165ac48(param_2.QuadPart,uVar25,0,&local_b8);
          if (((*(byte *)(param_2.QuadPart + 0x240) & 2) != 0) ||
             (*(int *)(param_2.QuadPart + 0x37c) < *(int *)(param_2.QuadPart + 0x350))) break;
          if (uVar24 == 0xffffffffffffffff) {
            bVar21 = false;
          }
          else if (uVar24 == 0) {
            bVar21 = true;
          }
          else {
            QueryPerformanceCounter(&local_100);
            bVar21 = (ulonglong)LVar17 < (ulonglong)local_100;
          }
          bVar20 = 1;
          if (((lVar11 != 0) && (*(longlong *)(lVar11 + 0x40) != 0)) &&
             (bVar20 = *(byte *)(*(longlong *)(lVar11 + 0x40) + 0xa0), ((bVar20 ^ 1) & bVar21) == 1)
             ) {
            *(undefined1 *)(lVar11 + 0x70) = 0;
            bVar20 = 0;
          }
        } while ((bVar21 & bVar20) != 1);
        if (lVar11 == 0) {
          FUN_1400f6522(&local_b8);
          FUN_1400f64be(&local_80);
          FUN_1400f64be(&local_90);
        }
        else {
          *(undefined1 *)(lVar11 + 0x70) = 0;
          FUN_1400f6522(&local_b8);
          FUN_1400f64be(&local_80);
          FUN_1400f64be(&local_90);
          *(undefined1 *)(lVar11 + 0x70) = 1;
        }
        bVar20 = local_139;
        *(byte *)(param_2.QuadPart + 0x241) =
             *(byte *)(param_2.QuadPart + 0x241) & 0xfe |
             *(byte *)(param_2.QuadPart + 0x240) >> 1 & 1;
        bVar8 = (*(byte *)(param_2.QuadPart + 0x240) & 2) >> 1;
        pRVar26 = local_130;
        iVar23 = local_124;
        if ((bVar8 & bVar7) == 1) {
          if (uVar24 == 0xffffffffffffffff) {
            bVar21 = false;
          }
          else if (uVar24 == 0) {
            bVar21 = true;
          }
          else {
            QueryPerformanceCounter(&local_b8);
            bVar21 = (ulonglong)LVar17 < (ulonglong)local_b8;
          }
          bVar8 = bVar21 ^ 1;
          pRVar26 = local_130;
          iVar23 = local_124;
        }
      }
    }
  }
  else {
    AcquireSRWLockShared(local_130);
    if (param_2.QuadPart == 0) {
      ReleaseSRWLockShared(pRVar26);
    }
    else {
      bVar8 = *(byte *)(param_2.QuadPart + 0x243);
      ReleaseSRWLockShared(pRVar26);
      bVar20 = local_139;
      if ((bVar8 & 0xc) == 8) goto LAB_143787301;
    }
    bVar20 = local_139;
    if ((param_1.QuadPart != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1.QuadPart);
    }
    ((LARGE_INTEGER *)(param_2.QuadPart + 0xc0))->QuadPart = (LONGLONG)param_1;
    if (local_120 != 0) {
      FUN_1437942c0(&DAT_14cb0a8e8,param_1.QuadPart,local_120,param_2.QuadPart);
    }
    FUN_1406e389a(param_1.QuadPart,param_2.QuadPart,1);
    FUN_14049b458(param_2.QuadPart);
    local_b8 = param_2;
    if ((param_2.QuadPart != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2.QuadPart);
    }
    FUN_144a803b6(param_1.QuadPart + 400);
    if ((bVar7 == 0) || (uVar24 == 0xffffffffffffffff)) {
      bVar8 = *(byte *)(param_2.QuadPart + 0x240);
      if ((bVar8 & 0x20) == 0) {
        iVar23 = 0;
        if (((*(byte *)(param_2.QuadPart + 0x241) & 1) == 0) &&
           (*(char *)(param_2.QuadPart + 0x244) != '\x03')) {
          iVar23 = *(int *)(param_2.QuadPart + 0xa8) - *(int *)(param_2.QuadPart + 0x248);
        }
        if (*(byte *)(param_2.QuadPart + 0x3c8) != 3) {
          iVar23 = (int)((float)iVar23 +
                        ((float)(int)((3 - (uint)*(byte *)(param_2.QuadPart + 0x3c8)) *
                                      *(int *)(param_2.QuadPart + 0xa8) -
                                     *(int *)(param_2.QuadPart + 0x3cc)) * DAT_14c76159c) / 3.0);
        }
      }
      else {
        iVar23 = 0;
      }
      goto LAB_143787549;
    }
    if (uVar24 == 0) {
      if ((*(byte *)(param_2.QuadPart + 0x240) & 0x20) == 0) {
        iVar23 = 0;
        if (((*(byte *)(param_2.QuadPart + 0x241) & 1) == 0) &&
           (*(char *)(param_2.QuadPart + 0x244) != '\x03')) {
          iVar23 = *(int *)(param_2.QuadPart + 0xa8) - *(int *)(param_2.QuadPart + 0x248);
        }
        if (*(byte *)(param_2.QuadPart + 0x3c8) != 3) {
          iVar23 = (int)((float)iVar23 +
                        ((float)(int)((3 - (uint)*(byte *)(param_2.QuadPart + 0x3c8)) *
                                      *(int *)(param_2.QuadPart + 0xa8) -
                                     *(int *)(param_2.QuadPart + 0x3cc)) * DAT_14c76159c) / 3.0);
        }
      }
      else {
        iVar23 = 0;
      }
    }
    else {
      QueryPerformanceCounter(&local_b8);
      bVar8 = *(byte *)(param_2.QuadPart + 0x240);
      if ((bVar8 & 0x20) == 0) {
        iVar23 = 0;
        if (((*(byte *)(param_2.QuadPart + 0x241) & 1) == 0) &&
           (*(char *)(param_2.QuadPart + 0x244) != '\x03')) {
          iVar23 = *(int *)(param_2.QuadPart + 0xa8) - *(int *)(param_2.QuadPart + 0x248);
        }
        if (*(byte *)(param_2.QuadPart + 0x3c8) != 3) {
          iVar23 = (int)((float)iVar23 +
                        ((float)(int)((3 - (uint)*(byte *)(param_2.QuadPart + 0x3c8)) *
                                      *(int *)(param_2.QuadPart + 0xa8) -
                                     *(int *)(param_2.QuadPart + 0x3cc)) * DAT_14c76159c) / 3.0);
        }
      }
      else {
        iVar23 = 0;
      }
      if ((ulonglong)local_b8 <= local_138.QuadPart + uVar24) goto LAB_143787549;
    }
LAB_143787385:
    bVar8 = 0;
  }
  if (((bVar20 != 0) && (*(char *)(param_1.QuadPart + 0x154) < '\0')) &&
     ((*(longlong *)(param_1.QuadPart + 0x30) != 0 &&
      (*(int *)(*(longlong *)(param_1.QuadPart + 0x30) + 0xa8) != 0)))) {
    if (bVar8 == 0) goto LAB_143787ef1;
    bVar8 = *(byte *)(param_2.QuadPart + 0x241);
    if ((~bVar8 & 0xc) != 0) {
      if ((bVar8 & 4) == 0) {
        FUN_1417dd662(param_2.QuadPart);
      }
      else {
        iVar2 = *(int *)(param_2.QuadPart + 0xa8);
        if ((longlong)iVar2 != 0) {
          lVar11 = *(longlong *)(param_2.QuadPart + 0xa0);
          lVar12 = 0;
          do {
            lVar3 = *(longlong *)(lVar11 + lVar12);
            if (lVar3 != 0) {
              pbVar1 = (byte *)(lVar3 + 99);
              *pbVar1 = *pbVar1 & 0xfb;
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar2 * 8 != lVar12);
          bVar8 = *(byte *)(param_2.QuadPart + 0x241);
        }
        *(byte *)(param_2.QuadPart + 0x241) = bVar8 | 8;
      }
      if ((bVar7 != 0) &&
         ((DAT_14cad5908 != 0 ||
          ((uVar24 != 0xffffffffffffffff &&
           ((uVar24 == 0 ||
            (QueryPerformanceCounter(&local_b8), pRVar26 = local_130,
            local_138.QuadPart + uVar24 < (ulonglong)local_b8)))))))) goto LAB_143787ef1;
    }
    if (*(char *)(param_2.QuadPart + 0x3c8) != '\x03') {
      uVar9 = 0;
      if ((DAT_14c872bf0 & 1) == 0) {
        uVar9 = DAT_14c7614b4;
      }
      uVar25 = 0;
      if (bVar7 != 0) {
        uVar25 = uVar9;
      }
      *(byte *)(param_1.QuadPart + 0x155U) = *(byte *)(param_1.QuadPart + 0x155U) | 0x10;
      FUN_14355247c(param_2.QuadPart,uVar25);
      if (*(char *)(param_2.QuadPart + 0x3c8) != '\x03') {
        LVar17.QuadPart = local_138.QuadPart + uVar24;
        if (uVar24 == 0xffffffffffffffff) goto LAB_143787f2e;
        if (uVar24 != 0) {
          while (QueryPerformanceCounter(&local_b8), pRVar26 = local_130,
                (ulonglong)local_b8 <= (ulonglong)LVar17) {
LAB_143787f2e:
            do {
              FUN_14355247c(param_2.QuadPart,uVar25);
              if (*(char *)(param_2.QuadPart + 0x3c8) == '\x03') goto LAB_143787e7b;
            } while (uVar24 == 0xffffffffffffffff);
          }
        }
      }
LAB_143787e7b:
      bVar20 = local_139;
      *(byte *)(param_1.QuadPart + 0x155U) = *(byte *)(param_1.QuadPart + 0x155U) & 0xef;
      if ((*(char *)(param_2.QuadPart + 0x3c8) == '\x03' & bVar7) == 1) {
        if ((uVar24 != 0xffffffffffffffff) &&
           ((uVar24 == 0 ||
            (QueryPerformanceCounter(&local_b8), pRVar26 = local_130,
            local_138.QuadPart + uVar24 < (ulonglong)local_b8)))) {
LAB_143787ef1:
          AcquireSRWLockShared(pRVar26);
          ReleaseSRWLockShared(pRVar26);
          *(byte *)(param_2.QuadPart + 0x241U) = *(byte *)(param_2.QuadPart + 0x241U) & 0xdf;
LAB_143787c1c:
          QueryPerformanceCounter(&local_b8);
          _DAT_14cb10408 =
               (((double)local_b8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar5 + 16777216.0)) *
               1000.0 + _DAT_14cb10408;
          if (DAT_14cb10374 == '\x01') {
            iVar2 = *(int *)(param_2.QuadPart + 0xa8);
            if ((*(byte *)(param_2.QuadPart + 0x240) & 0x20) == 0) {
              iVar18 = 0;
              if (((*(byte *)(param_2.QuadPart + 0x241) & 1) == 0) &&
                 (iVar18 = 0, *(char *)(param_2.QuadPart + 0x244) != '\x03')) {
                iVar18 = iVar2 - *(int *)(param_2.QuadPart + 0x248);
              }
              if (*(byte *)(param_2.QuadPart + 0x3c8) != 3) {
                iVar18 = (int)((float)iVar18 +
                              (DAT_14c76159c *
                              (float)(int)((3 - (uint)*(byte *)(param_2.QuadPart + 0x3c8)) * iVar2 -
                                          *(int *)(param_2.QuadPart + 0x3cc))) / 3.0);
              }
            }
            else {
              iVar18 = 0;
            }
            DAT_14cb10290 = DAT_14cb10290 + (iVar23 - iVar18);
            DAT_14cb10294 = DAT_14cb10294 + iVar18;
            DAT_14cb10298 = DAT_14cb10298 + (int)((float)iVar2 * DAT_14c76159c + (float)iVar2);
          }
          if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0();
          }
          return;
        }
      }
      else if (*(char *)(param_2.QuadPart + 0x3c8) != '\x03') goto LAB_143787ef1;
    }
    if ((*(byte *)(param_2.QuadPart + 0x241) & 0x10) == 0) {
      FUN_143551d30(param_2.QuadPart);
      *(byte *)(param_2.QuadPart + 0x241U) = *(byte *)(param_2.QuadPart + 0x241U) | 0x10;
      if ((bVar7 != 0) && (1 < uVar24 + 1)) {
        QueryPerformanceCounter(&local_b8);
      }
    }
  }
  AcquireSRWLockShared(pRVar26);
  ReleaseSRWLockShared(pRVar26);
  *(byte *)(param_2.QuadPart + 0x240U) = *(byte *)(param_2.QuadPart + 0x240U) & 0x7f;
  *(byte *)(param_2.QuadPart + 0x241U) = *(byte *)(param_2.QuadPart + 0x241U) & 0xc6;
  *(undefined1 *)(param_2.QuadPart + 0x3c8) = 0;
  *(undefined4 *)(param_2.QuadPart + 0x3cc) = 0;
  FUN_1406e389a(param_1.QuadPart,param_2.QuadPart,0);
  FUN_140442d98(param_2.QuadPart);
  if ((bVar20 == 0) || ((*(byte *)(param_2.QuadPart + 0x242) & 1) != 0)) goto LAB_143787ba0;
  FUN_14049cadc(&local_100,param_2.QuadPart,1,0);
  LVar17 = local_100;
  FUN_14375df50(DAT_14cb0d2b0,&local_110,param_1.QuadPart);
  uVar24 = (ulonglong)local_108;
  if (-1 < (longlong)uVar24) {
    uVar10 = *(uint *)(local_110.QuadPart + 8);
    if (local_108 < (int)uVar10) {
      if (*(longlong *)(*(longlong *)local_110 + uVar24 * 8) == 0) {
        plVar15 = (longlong *)(*(longlong *)local_110 + uVar24 * 8);
        do {
          plVar15 = plVar15 + 1;
          uVar22 = (int)uVar24 + 1;
          uVar24 = (ulonglong)uVar22;
          if ((int)uVar10 <= (int)uVar22) {
            uVar24 = (ulonglong)uVar10;
            break;
          }
        } while (*plVar15 == 0);
      }
      if ((int)uVar24 < 0) goto LAB_143787b87;
    }
    uVar14 = uVar24 & 0xffffffff;
    while ((int)uVar14 < *(int *)(local_110.QuadPart + 8)) {
      plVar15 = (longlong *)
                FUN_140334a94(*(undefined8 *)(*(longlong *)local_110 + uVar14 * 8),param_1.QuadPart)
      ;
      if (plVar15 != (longlong *)0x0) {
        FUN_14098f2e8(plVar15,&local_b8,LVar17.QuadPart,0);
        local_100 = local_b8;
        local_f0 = CONCAT44(local_f0._4_4_,param_6);
        local_a8 = local_f0;
        local_b0 = local_f8;
        uVar16 = FUN_14477b072(plVar15,DAT_14caf9ba0);
        (**(code **)(*plVar15 + 0x248))(plVar15,uVar16,&local_b8);
      }
      uVar14 = uVar24 & 0xffffffff;
      do {
        if ((int)uVar24 < -1) goto LAB_143787b87;
        iVar2 = (int)uVar14;
        uVar10 = iVar2 + 1;
        uVar14 = (ulonglong)uVar10;
      } while (((int)uVar10 < *(int *)(local_110.QuadPart + 8)) &&
              (*(longlong *)(*(longlong *)local_110 + (ulonglong)uVar10 * 8) == 0));
      uVar24 = (ulonglong)uVar10;
      if (iVar2 < -1) break;
    }
  }
LAB_143787b87:
  lVar11 = *(longlong *)(param_1.QuadPart + 0xc0);
  if ((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) {
    FUN_147d5f43a(lVar11,local_120,1);
  }
LAB_143787ba0:
  *(byte *)(param_2.QuadPart + 0x240U) = *(byte *)(param_2.QuadPart + 0x240U) | 0x20;
  FUN_1405f378a(param_2.QuadPart);
  plVar15 = (longlong *)FUN_140083894();
  (**(code **)(*plVar15 + 0x48))(plVar15,param_2.QuadPart);
  FUN_143769ecc(&DAT_14cb10a78,param_2.QuadPart,param_1.QuadPart);
  FUN_1447f69b6(param_1.QuadPart + 0x540);
  LVar17 = param_2;
LAB_143787be2:
  LVar19 = LVar17;
  LVar17 = LVar19;
  if (((LARGE_INTEGER *)(LVar19.QuadPart + 0x20))->QuadPart != 0) goto code_r0x000143787bf1;
  goto LAB_143787c02;
code_r0x000143787bf1:
  LVar17.QuadPart = ((LARGE_INTEGER *)(LVar19.QuadPart + 0x20))->QuadPart;
  if ((*(uint *)(LVar19.QuadPart + 8) >> 0x1c & 1) == 0) goto LAB_143787be2;
  LVar17.QuadPart = FUN_142840154(LVar19.QuadPart);
LAB_143787c02:
  if (LVar17.QuadPart == 0) {
    LVar17.QuadPart = ((LARGE_INTEGER *)(LVar19.QuadPart + 0x20))->QuadPart;
    goto LAB_143787be2;
  }
  FUN_144ae53e2(param_1.QuadPart,*(undefined8 *)(LVar17.QuadPart + 0x18),1);
  goto LAB_143787c1c;
}



// FUNCTION 143787f6c FUN_143787f6c body=3170 status=ok
// SIG undefined FUN_143787f6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143787f6c(LARGE_INTEGER param_1,LARGE_INTEGER param_2,char param_3,LARGE_INTEGER *param_4,
                  undefined4 param_5,longlong param_6)

{
  LARGE_INTEGER *pLVar1;
  byte bVar2;
  double dVar3;
  char cVar4;
  DWORD DVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 uVar12;
  int iVar13;
  DWORD DVar14;
  LARGE_INTEGER LVar15;
  byte bVar16;
  undefined4 uVar17;
  uint uVar18;
  LARGE_INTEGER LVar19;
  ulonglong uVar20;
  byte bVar21;
  bool bVar22;
  double dVar23;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined2 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  LARGE_INTEGER *local_180;
  code *local_178;
  code *local_170;
  LARGE_INTEGER local_168;
  LARGE_INTEGER local_160;
  longlong local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  LARGE_INTEGER local_148;
  longlong local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  byte local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  ulonglong local_c8;
  char local_b4;
  longlong *local_a8;
  char local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  QueryPerformanceCounter(&local_d8);
  uVar10 = 1;
  local_160 = local_d8;
  uVar20 = 0xffffffffffffffff;
  if ((param_3 != '\0') && ((*(char *)(param_4 + 2) != '\0' || (0.0 < DAT_14c7614b8)))) {
    if (*(char *)(param_4 + 2) == '\0') {
      dVar3 = 0.0;
      if (0.0 <= (double)DAT_14c7614b8 - _DAT_14cb10410) {
        dVar3 = (double)DAT_14c7614b8 - _DAT_14cb10410;
      }
      QueryPerformanceCounter(&local_d8);
      dVar23 = (dVar3 / 1000.0) / DAT_14c83f418;
      uVar20 = (ulonglong)dVar23;
      uVar10 = 0;
      local_160 = local_d8;
      uVar20 = (longlong)(dVar23 - 9.223372036854776e+18) & (longlong)uVar20 >> 0x3f | uVar20;
      if (dVar3 / 1000.0 <= 0.0) {
        uVar20 = uVar10;
      }
    }
    else {
      uVar10 = 0;
      local_160 = *param_4;
      uVar20 = param_4[1].QuadPart;
    }
  }
  bVar22 = 6 < *(byte *)(param_1.QuadPart + 0x152);
  bVar16 = 0x15 >> (*(byte *)(param_1.QuadPart + 0x152) & 0x1f);
  *(byte *)(param_2.QuadPart + 0x241) = *(byte *)(param_2.QuadPart + 0x241) | 0x40;
  if (param_6 == 0) {
    param_6 = FUN_1405d1c86(param_2.QuadPart);
  }
  bVar2 = DAT_14c7615ab;
  pLVar1 = (LARGE_INTEGER *)(param_1.QuadPart + 0xe0);
  local_158 = param_6;
  AcquireSRWLockShared((PSRWLOCK)&pLVar1->s);
  DVar5 = (((LARGE_INTEGER *)(param_1.QuadPart + 0xf0))->s).LowPart;
  local_168 = param_1;
  ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
  bVar21 = (byte)uVar10;
  if (0 < (int)DVar5) {
    if ((bVar2 | bVar21) != 1) goto LAB_143788aa8;
    AcquireSRWLockShared((PSRWLOCK)&pLVar1->s);
    if ((LARGE_INTEGER *)param_2.QuadPart == (LARGE_INTEGER *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
    }
    else {
      bVar2 = *(byte *)(param_2.QuadPart + 0x243);
      ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
      if ((bVar2 & 0xc) == 4) goto LAB_143788aa8;
    }
  }
  if (((*(byte *)(param_2.QuadPart + 0x240) & 0x20) == 0) &&
     ((*(byte *)(param_2.QuadPart + 0x242) & 8) == 0)) goto LAB_143788aa8;
  QueryPerformanceCounter(&local_d8);
  dVar3 = (double)local_d8.QuadPart * DAT_14c83f420;
  AcquireSRWLockShared((PSRWLOCK)&pLVar1->s);
  if (bVar21 == 0) {
    if ((LARGE_INTEGER *)param_2.QuadPart == (LARGE_INTEGER *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
LAB_1437882f4:
      iVar13 = 1;
      if (1 < DAT_14c761e9c) {
        iVar13 = DAT_14c761e9c;
      }
      if (((int)(((LARGE_INTEGER *)(local_168.QuadPart + 0x100))->s).LowPart < iVar13) &&
         ((uVar20 == 0xffffffffffffffff ||
          ((uVar20 != 0 &&
           (QueryPerformanceCounter(&local_d8), (ulonglong)local_d8 <= local_160.QuadPart + uVar20))
          )))) {
        LVar19 = local_168;
        FUN_1406e389a(local_168.QuadPart,param_2.QuadPart,2);
        FUN_143769ecc(&DAT_14cb108b0,param_2.QuadPart,LVar19.QuadPart);
        *(byte *)(param_2.QuadPart + 0x242) = *(byte *)(param_2.QuadPart + 0x242) | 8;
        if (local_158 != 0) {
          FUN_1437942c0(&DAT_14cb0a900,LVar19.QuadPart,local_158,param_2.QuadPart);
        }
        if ((*(char *)(param_2.QuadPart + 0x241) < '\0') &&
           ((*(byte *)(param_2.QuadPart + 0x240) & 0x20) != 0)) {
          *(byte *)(param_2.QuadPart + 0x240) = *(byte *)(param_2.QuadPart + 0x240) & 0xdf;
          LVar19 = param_2;
LAB_1437883b7:
          LVar15 = LVar19;
          LVar19 = LVar15;
          if ((LARGE_INTEGER *)((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart !=
              (LARGE_INTEGER *)0x0) goto code_r0x0001437883c6;
          goto LAB_1437883d7;
        }
        goto LAB_1437883f5;
      }
      goto LAB_143788422;
    }
    bVar2 = *(byte *)(param_2.QuadPart + 0x243);
    ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
    if ((bVar2 & 0xc) != 8) goto LAB_1437882f4;
    AcquireSRWLockShared((PSRWLOCK)&pLVar1->s);
    goto LAB_143788434;
  }
  if ((LARGE_INTEGER *)param_2.QuadPart == (LARGE_INTEGER *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
  }
  else {
    bVar2 = *(byte *)(param_2.QuadPart + 0x243);
    ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
    if ((bVar2 & 0xc) == 8) {
      do {
        cVar4 = FUN_14032a59a(param_2.QuadPart,0x7fffffff,0);
      } while (cVar4 == '\0');
      goto LAB_143788520;
    }
  }
  lVar7 = local_158;
  LVar19 = local_168;
  if ((*(byte *)(param_2.QuadPart + 0x242) & 8) == 0) {
    FUN_143769ecc(&DAT_14cb108b0,param_2.QuadPart,local_168.QuadPart);
    *(byte *)(param_2.QuadPart + 0x242) = *(byte *)(param_2.QuadPart + 0x242) | 8;
    if (lVar7 != 0) {
      FUN_1437942c0(&DAT_14cb0a900,LVar19.QuadPart,lVar7,param_2.QuadPart);
    }
    if ((*(char *)(param_2.QuadPart + 0x241) < '\0') &&
       ((*(byte *)(param_2.QuadPart + 0x240) & 0x20) != 0)) {
      *(byte *)(param_2.QuadPart + 0x240) = *(byte *)(param_2.QuadPart + 0x240) & 0xdf;
      LVar19 = param_2;
LAB_14378825d:
      LVar15 = LVar19;
      LVar19 = LVar15;
      if ((LARGE_INTEGER *)((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart !=
          (LARGE_INTEGER *)0x0) goto code_r0x00014378826c;
      goto LAB_14378827e;
    }
    goto LAB_1437882a2;
  }
  goto LAB_143788520;
code_r0x0001437883c6:
  LVar19.QuadPart = ((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart;
  if (((((LARGE_INTEGER *)(LVar15.QuadPart + 8))->s).LowPart >> 0x1c & 1) == 0) goto LAB_1437883b7;
  LVar19.QuadPart = FUN_142840154(LVar15.QuadPart);
LAB_1437883d7:
  if ((LARGE_INTEGER *)LVar19.QuadPart == (LARGE_INTEGER *)0x0) {
    LVar19.QuadPart = ((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart;
    goto LAB_1437883b7;
  }
  FUN_144ae53e2(local_168.QuadPart,((LARGE_INTEGER *)(LVar19.QuadPart + 0x18))->QuadPart,0);
LAB_1437883f5:
  if ((((!bVar22 && (bVar16 & 1) == 0) && ((*(byte *)(param_2.QuadPart + 0x242) & 1) == 0)) &&
      (lVar7 = ((LARGE_INTEGER *)(local_168.QuadPart + 0xc0))->QuadPart, lVar7 != 0)) &&
     ((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0)) {
    FUN_147d5f43a(lVar7,local_158,0);
  }
LAB_143788422:
  AcquireSRWLockShared((PSRWLOCK)&pLVar1->s);
  if ((LARGE_INTEGER *)param_2.QuadPart == (LARGE_INTEGER *)0x0) {
    ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
  }
  else {
LAB_143788434:
    bVar2 = *(byte *)(param_2.QuadPart + 0x243);
    ReleaseSRWLockShared((PSRWLOCK)&pLVar1->s);
    if (((bVar2 & 0xc) == 8) && (uVar20 != 0)) {
      if (uVar20 == 0xffffffffffffffff) {
        LVar19.QuadPart = local_160.QuadPart - 1;
      }
      else {
        QueryPerformanceCounter(&local_d8);
        LVar19.QuadPart = uVar20 + local_160.QuadPart;
        if ((ulonglong)LVar19 < (ulonglong)local_d8) goto LAB_143788a54;
      }
      QueryPerformanceCounter(&local_138);
      uVar17 = DAT_14c7614bc;
      local_d8 = local_168;
      local_d0.s = local_160.s;
      local_c8 = uVar20;
      cVar4 = FUN_14032a59a(param_2.QuadPart,DAT_14c7614bc);
      if (cVar4 == '\0') {
        do {
          if ((*(int *)(param_2.QuadPart + 0x32c) <
               (int)(((LARGE_INTEGER *)(param_2.QuadPart + 0x300))->s).LowPart) ||
             ((uVar20 != 0xffffffffffffffff &&
              (QueryPerformanceCounter(&local_138), (ulonglong)LVar19 < (ulonglong)local_138))))
          goto LAB_143788a4f;
          cVar4 = FUN_14032a59a(param_2.QuadPart,uVar17,&local_d8);
        } while (cVar4 == '\0');
      }
      goto LAB_143788520;
    }
  }
  goto LAB_143788a54;
code_r0x000143788a11:
  LVar19.QuadPart = ((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart;
  if (((((LARGE_INTEGER *)(LVar15.QuadPart + 8))->s).LowPart >> 0x1c & 1) == 0) goto LAB_143788a02;
  LVar19.QuadPart = FUN_142840154(LVar15.QuadPart);
LAB_143788a22:
  if ((LARGE_INTEGER *)LVar19.QuadPart == (LARGE_INTEGER *)0x0) {
    LVar19.QuadPart = ((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart;
    goto LAB_143788a02;
  }
  FUN_144ae53e2(local_168.QuadPart,((LARGE_INTEGER *)(LVar19.QuadPart + 0x18))->QuadPart,0);
  goto LAB_143788a3e;
code_r0x00014378826c:
  LVar19.QuadPart = ((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart;
  if (((((LARGE_INTEGER *)(LVar15.QuadPart + 8))->s).LowPart >> 0x1c & 1) == 0) goto LAB_14378825d;
  LVar19.QuadPart = FUN_142840154(LVar15.QuadPart);
LAB_14378827e:
  if ((LARGE_INTEGER *)LVar19.QuadPart == (LARGE_INTEGER *)0x0) {
    LVar19.QuadPart = ((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart;
    goto LAB_14378825d;
  }
  FUN_144ae53e2(local_168.QuadPart,((LARGE_INTEGER *)(LVar19.QuadPart + 0x18))->QuadPart,0);
  lVar7 = local_158;
LAB_1437882a2:
  if ((((!bVar22 && (bVar16 & 1) == 0) && ((*(byte *)(param_2.QuadPart + 0x242) & 1) == 0)) &&
      (lVar8 = ((LARGE_INTEGER *)(local_168.QuadPart + 0xc0))->QuadPart, lVar8 != 0)) &&
     ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) {
    FUN_147d5f43a(lVar8,lVar7,0);
  }
LAB_143788520:
  if (uVar20 == 0xffffffffffffffff) {
LAB_143788552:
    DVar5 = (((LARGE_INTEGER *)(param_2.QuadPart + 0x3d0))->s).LowPart;
    DVar14 = (((LARGE_INTEGER *)(param_2.QuadPart + 0xa8))->s).LowPart;
    if ((int)DVar5 < (int)DVar14) {
      uVar17 = 0;
      if ((DAT_14c872bf0 & 1) == 0) {
        uVar17 = DAT_14cad590c;
      }
      if (bVar22 || (bVar16 & 1) != 0) {
        uVar17 = 0;
      }
      if (bVar21 != 0) {
        uVar17 = 0;
      }
      FUN_1403313f0(param_2.QuadPart,uVar17);
      DVar5 = (((LARGE_INTEGER *)(param_2.QuadPart + 0x3d0))->s).LowPart;
      DVar14 = (((LARGE_INTEGER *)(param_2.QuadPart + 0xa8))->s).LowPart;
      if ((int)DVar5 < (int)DVar14) {
        LVar19.QuadPart = uVar20 + local_160.QuadPart;
        do {
          if ((uVar20 != 0xffffffffffffffff) &&
             (QueryPerformanceCounter(&local_d8), (ulonglong)LVar19 < (ulonglong)local_d8))
          goto LAB_143788601;
          FUN_1403313f0(param_2.QuadPart,uVar17);
          DVar5 = (((LARGE_INTEGER *)(param_2.QuadPart + 0x3d0))->s).LowPart;
          DVar14 = (((LARGE_INTEGER *)(param_2.QuadPart + 0xa8))->s).LowPart;
        } while ((int)DVar5 < (int)DVar14);
      }
    }
    if (uVar20 != 0xffffffffffffffff) {
      LVar19.QuadPart = uVar20 + local_160.QuadPart;
LAB_143788601:
      QueryPerformanceCounter(&local_d8);
      if ((ulonglong)LVar19 < (ulonglong)local_d8) goto LAB_143788a4f;
      DVar5 = (((LARGE_INTEGER *)(param_2.QuadPart + 0x3d0))->s).LowPart;
      DVar14 = (((LARGE_INTEGER *)(param_2.QuadPart + 0xa8))->s).LowPart;
    }
    if ((int)DVar14 <= (int)DVar5) {
      FUN_1406e389a(local_168.QuadPart,param_2.QuadPart,0);
      if (DAT_14caf64b8 == 0) {
        local_d8.QuadPart = (LONGLONG)FUN_141030f22;
        local_170 = FUN_14081d0ea;
        local_178 = FUN_142b4754c;
        local_180 = &local_d8;
        local_188 = &LAB_147c45ce0;
        local_190 = &LAB_1463f1ff4;
        local_198 = &DAT_149e063b2;
        local_1a0 = 0x4000000000;
        local_1a8 = 0x10000004;
        local_1b0 = 8;
        local_1b8 = 0x428;
        FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
      }
      lVar7 = DAT_14caf64b8;
      if (DAT_14caf64b8 != 0 && DAT_14c950c29 == 1) {
        FUN_1456cec3c(DAT_14caf64b8);
      }
      local_150 = 5;
      local_148.s = local_168.s;
      local_140 = lVar7;
      if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(lVar7);
      }
      FUN_1409463b0(&local_d8,&local_150);
      local_138.QuadPart = (ulonglong)(uint)local_138.s.HighPart << 0x20;
      local_e0 = 0;
      if (local_b4 == '\0') {
        do {
          plVar9 = local_a8;
          cVar4 = FUN_1433b7f66(local_a8,param_2.QuadPart);
          if (cVar4 == '\0') {
            lVar7 = (**(code **)(*plVar9 + 0x638))(plVar9);
            if (lVar7 != 0) {
              lVar8 = FUN_140f27e30();
              if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                *(byte *)(lVar7 + 0x349) = *(byte *)(lVar7 + 0x349) | 0x10;
              }
            }
          }
          else if ((plVar9[0x78] != 0) && (*(longlong **)(plVar9[0x78] + 0x3d0) != plVar9)) {
            FUN_1413ef136();
          }
          FUN_1409464a8(&local_d8);
        } while (local_b4 == '\0');
        if ((local_e0 & 1) != 0) {
          FUN_14024445c(&local_130);
        }
      }
      if (local_80 == '\x01') {
        FUN_14024445c(&local_d0);
      }
      FUN_14099af08(param_2.QuadPart);
      plVar9 = (longlong *)FUN_140083894();
      (**(code **)(*plVar9 + 0x50))(plVar9,param_2.QuadPart);
      FUN_1408dc6b8(param_2.QuadPart);
      if ((!bVar22 && (bVar16 & 1) == 0) && ((*(byte *)(param_2.QuadPart + 0x242) & 1) == 0)) {
        FUN_14049cadc(&local_138,param_2.QuadPart,0,0);
        LVar19 = local_138;
        FUN_14375df50(DAT_14cb0d2b0,&local_150,local_168.QuadPart);
        uVar20 = (ulonglong)(int)local_148._0_4_;
        if (-1 < (longlong)uVar20) {
          plVar9 = (longlong *)CONCAT44(uStack_14c,local_150);
          uVar6 = *(uint *)(plVar9 + 1);
          if ((int)local_148._0_4_ < (int)uVar6) {
            if (*(longlong *)(*plVar9 + uVar20 * 8) == 0) {
              plVar11 = (longlong *)(*plVar9 + uVar20 * 8);
              do {
                plVar11 = plVar11 + 1;
                uVar18 = (int)uVar20 + 1;
                uVar20 = (ulonglong)uVar18;
                if ((int)uVar6 <= (int)uVar18) {
                  uVar20 = (ulonglong)uVar6;
                  break;
                }
              } while (*plVar11 == 0);
            }
            if ((int)uVar20 < 0) goto LAB_143788965;
          }
          uVar10 = uVar20 & 0xffffffff;
          while ((int)uVar10 < (int)plVar9[1]) {
            plVar11 = (longlong *)
                      FUN_140334a94(*(undefined8 *)(*plVar9 + uVar10 * 8),local_168.QuadPart);
            if (plVar11 != (longlong *)0x0) {
              FUN_14098f2e8(plVar11,&local_d8,LVar19.QuadPart,0);
              local_138 = local_d8;
              local_128 = param_5;
              local_c8 = CONCAT44(uStack_124,param_5);
              local_d0 = local_130;
              uVar12 = FUN_14477b072(plVar11,DAT_14caf9ba0);
              (**(code **)(*plVar11 + 0x248))(plVar11,uVar12,&local_d8);
            }
            uVar10 = uVar20 & 0xffffffff;
            do {
              if ((int)uVar20 < -1) goto LAB_143788965;
              iVar13 = (int)uVar10;
              uVar6 = iVar13 + 1;
              uVar10 = (ulonglong)uVar6;
            } while (((int)uVar6 < (int)plVar9[1]) &&
                    (*(longlong *)(*plVar9 + (ulonglong)uVar6 * 8) == 0));
            uVar20 = (ulonglong)uVar6;
            if (iVar13 < -1) break;
          }
        }
      }
LAB_143788965:
      *(byte *)(param_2.QuadPart + 0x240) = *(byte *)(param_2.QuadPart + 0x240) & 0xdf;
      if (((LARGE_INTEGER *)(local_168.QuadPart + 0x748))->QuadPart != 0) {
        FUN_147db28a2(((LARGE_INTEGER *)(local_168.QuadPart + 0x748))->QuadPart,param_2.QuadPart);
      }
      if (!bVar22 && (bVar16 & 1) == 0) {
        pLVar1 = (LARGE_INTEGER *)(local_168.QuadPart + 400);
        local_138 = param_2;
        if (((LARGE_INTEGER *)param_2.QuadPart != (LARGE_INTEGER *)0x0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(param_2.QuadPart);
        }
        local_d8.QuadPart = (LONGLONG)&local_138;
        FUN_144a1ce12(pLVar1);
        ((LARGE_INTEGER *)(param_2.QuadPart + 0xc0))->QuadPart = 0;
      }
      LVar19 = local_168;
      FUN_143769ecc(&DAT_14cb10a90,param_2.QuadPart,local_168.QuadPart);
      FUN_1447f69b6((LARGE_INTEGER *)(LVar19.QuadPart + 0x540));
      LVar19 = param_2;
      if (-1 < *(char *)(param_2.QuadPart + 0x241)) {
LAB_143788a02:
        LVar15 = LVar19;
        LVar19 = LVar15;
        if ((LARGE_INTEGER *)((LARGE_INTEGER *)(LVar15.QuadPart + 0x20))->QuadPart !=
            (LARGE_INTEGER *)0x0) goto code_r0x000143788a11;
        goto LAB_143788a22;
      }
LAB_143788a3e:
      (((LARGE_INTEGER *)(param_2.QuadPart + 0x3d0))->s).LowPart = 0;
      *(byte *)(param_2.QuadPart + 0x242) = *(byte *)(param_2.QuadPart + 0x242) & 0xf7;
    }
  }
  else if (uVar20 != 0) {
    QueryPerformanceCounter(&local_d8);
    LVar19.QuadPart = uVar20 + local_160.QuadPart;
    if ((ulonglong)local_d8 <= (ulonglong)LVar19) goto LAB_143788552;
    goto LAB_143788601;
  }
LAB_143788a4f:
  if (bVar21 == 0) {
LAB_143788a54:
    QueryPerformanceCounter(&local_d8);
    _DAT_14cb10410 =
         (((double)local_d8.QuadPart * DAT_14c83f420 + 16777216.0) - (dVar3 + 16777216.0)) * 1000.0
         + _DAT_14cb10410;
  }
  *(byte *)(param_2.QuadPart + 0x241) = *(byte *)(param_2.QuadPart + 0x241) & 0xbf;
LAB_143788aa8:
  if ((local_70 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143788bd0 FUN_143788bd0 body=421 status=ok
// SIG undefined FUN_143788bd0(void)

void FUN_143788bd0(longlong *param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  if ((int)param_1[4] < 1) {
    iVar6 = (int)param_1[1];
    if (~param_2 + iVar6 != 0) {
      memmove((void *)(*param_1 + (longlong)(int)param_2 * 8),
              (void *)(*param_1 + (longlong)(int)param_2 * 8 + 8),
              (longlong)(int)(~param_2 + iVar6) << 3);
      iVar6 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar6 + -1;
  }
  else {
    uVar2 = *(ulonglong *)(*param_1 + (longlong)(int)param_2 * 8);
    if (uVar2 != 0) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(uVar2);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(uVar2);
      }
      uVar7 = *(uint *)(param_1 + 3);
      uVar9 = 0;
      if (0 < (int)uVar7) {
        lVar8 = param_1[2];
        uVar9 = 0;
        bVar5 = DAT_14c950c29;
        do {
          uVar1 = uVar9 + (uVar7 >> 1);
          uVar3 = *(ulonglong *)(lVar8 + (ulonglong)uVar1 * 0x10);
          if (((bVar5 & 1) != 0) && (uVar3 != 0)) {
            FUN_1456cec3c(uVar3);
            bVar5 = DAT_14c950c29;
          }
          if (uVar3 < uVar2) {
            uVar9 = uVar1 + (uVar7 & 1);
          }
          bVar4 = 1 < uVar7;
          uVar7 = uVar7 >> 1;
        } while (bVar4);
        uVar7 = *(uint *)(param_1 + 3);
      }
      if ((int)uVar9 < (int)uVar7) {
        lVar8 = (ulonglong)uVar9 * 0x10;
        uVar3 = *(ulonglong *)(param_1[2] + lVar8);
        if ((DAT_14c950c29 == 1) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
        }
        if (uVar3 <= uVar2) {
          iVar6 = (int)param_1[3];
          if (~uVar9 + iVar6 != 0) {
            memmove((void *)(param_1[2] + lVar8),(void *)(param_1[2] + lVar8 + 0x10),
                    (longlong)(int)(~uVar9 + iVar6) << 4);
            iVar6 = (int)param_1[3];
          }
          *(int *)(param_1 + 3) = iVar6 + -1;
          FUN_1417fabb8(param_1 + 2);
        }
      }
      *(undefined8 *)(*param_1 + (longlong)(int)param_2 * 8) = 0;
    }
  }
  return;
}



// FUNCTION 143788d76 FUN_143788d76 body=141 status=ok
// SIG undefined FUN_143788d76(void)

void FUN_143788d76(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  code *local_30;
  undefined1 *local_28;
  code *local_20;
  code **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14355ce32(param_1,0);
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FUN_147db21cc();
  }
  uVar1 = FUN_14143efda();
  local_18 = &local_30;
  local_30 = FUN_1437943c0;
  local_28 = &local_31;
  local_20 = FUN_14379437c;
  FUN_1406d0e12(param_1 + 0x870,uVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143788e04 FUN_143788e04 body=87 status=ok
// SIG undefined FUN_143788e04(void)

ulonglong FUN_143788e04(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  uint3 uVar2;
  ulonglong uVar3;
  
  SRWLock = (PSRWLOCK)(param_1 + 0xe0);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0xf0);
  ReleaseSRWLockShared(SRWLock);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (iVar1 < 1) {
    AcquireSRWLockShared(SRWLock);
    uVar3 = (ulonglong)CONCAT31(uVar2,0 < *(int *)(param_1 + 0x100));
    ReleaseSRWLockShared(SRWLock);
  }
  else {
    uVar3 = CONCAT71((uint7)uVar2,1);
  }
  return uVar3;
}



// FUNCTION 143788e5b FUN_143788e5b body=234 status=ok
// SIG undefined FUN_143788e5b(void)

void FUN_143788e5b(void)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14133d72e(&local_30,0x10,1,0);
  uVar5 = (ulonglong)local_20;
  lVar3 = local_30;
  iVar2 = local_28;
  if ((int)local_20 < local_28 && -1 < (int)local_20) {
    do {
      uVar4 = (uint)uVar5;
      lVar1 = *(longlong *)(lVar3 + (uVar5 & 0xffffffff) * 8);
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + 0xc0) == lVar1)) {
        FUN_140033559(".\\Runtime/Engine/Private/Level.cpp",0xee2,
                      L"ULevel::BuildStreamingData should not be called on a console");
        lVar3 = local_30;
        iVar2 = local_28;
        uVar4 = local_20;
      }
      uVar5 = (longlong)(int)uVar4;
      do {
        uVar6 = uVar5;
        uVar5 = uVar6 + 1;
        local_20 = (uint)uVar5;
        if ((longlong)iVar2 <= (longlong)uVar5) break;
      } while (*(longlong *)(lVar3 + uVar5 * 8) == 0);
    } while ((-2 < (longlong)uVar6) && ((int)local_20 < iVar2));
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143788f46 FUN_143788f46 body=69 status=ok
// SIG undefined FUN_143788f46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143788f46(void)

{
  _DAT_14cb10420 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143788f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10428,1);
  return;
}



// FUNCTION 143788f8c FUN_143788f8c body=1136 status=ok
// SIG undefined FUN_143788f8c(void)

undefined8 FUN_143788f8c(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [8];
  longlong local_d0;
  void *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  int local_b0;
  void *local_a8;
  ulonglong uStack_a0;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  int local_7c;
  longlong local_78;
  void *local_70;
  undefined8 uStack_68;
  longlong local_60;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = (void *)0x0;
  uStack_a0 = 0;
  local_90 = param_2;
  cVar5 = FUN_140ffc744(&local_90,&local_a8,0,0);
  if ((param_4 == 0) || (cVar5 == '\0')) {
LAB_1437890d1:
    plVar4 = *(longlong **)(param_1 + 0x1f0);
    if (plVar4 == (longlong *)0x0) goto LAB_1437890dd;
    local_78 = FUN_147be3f33();
    local_88 = 0xb;
    local_7c = 0;
    if (local_78 == 0) {
      local_80 = 0;
      iVar7 = 0;
    }
    else {
      local_80 = *(uint *)(local_78 + 0xc);
      if ((int)local_80 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((local_80 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_80 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar12 = iVar7 == 0;
        if (bVar12) {
          *(int *)(lVar9 + 0x10) = iVar6;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar7 = iVar6;
        }
      }
    }
    local_70 = (void *)0x0;
    uStack_68 = 0;
    local_60 = 0;
    local_7c = iVar7;
    (**(code **)(*plVar4 + 0x340))(plVar4,&local_88);
    pvVar8 = local_70;
    if (local_60 != 0) {
      (**(code **)(local_60 + -0x10))(local_60 + -0x10);
      pvVar8 = local_70;
    }
  }
  else {
    if ((*(char *)(param_4 + 0x152) == '\x02') || (*(longlong *)(param_4 + 0x1f0) == 0))
    goto LAB_1437890d1;
    if ((*(char *)(param_4 + 0x152) == '\x03') &&
       (iVar7 = *(int *)(DAT_14cb0d2b0 + 0x1150), (longlong)iVar7 != 0)) {
      lVar9 = *(longlong *)(DAT_14cb0d2b0 + 0x1148);
      lVar11 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + lVar11) + 0x360) + 0x108);
        if ((lVar2 != 0) &&
           ((*(char *)(lVar2 + 0xcbe) != '\0' ||
            ((*(longlong *)(lVar2 + 0xf0) != 0 && (iVar6 = FUN_143587a6a(), iVar6 != 1))))))
        goto LAB_1437890d1;
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar7 * 8 != lVar11);
    }
    pvVar8 = local_a8;
    puVar10 = (undefined8 *)(param_1 + 0x458);
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar10;
    local_c8 = (void *)0x0;
    lVar9 = (longlong)(int)uStack_a0;
    local_c0 = CONCAT44(local_c0._4_4_,(int)uStack_a0);
    local_d0 = param_4;
    if (lVar9 == 0) {
      local_c0 = uStack_a0 & 0xffffffff;
    }
    else {
      FUN_1446dd670(&local_c8,uStack_a0 & 0xffffffff,0);
      memcpy(local_c8,pvVar8,lVar9 * 2);
    }
    local_b8 = (undefined8 *)0x0;
    local_b0 = 0;
    FUN_1446efa72(&local_b8,0,4,0x10);
    puVar10 = local_b8;
    local_b0 = 4;
    *local_b8 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_b8[2] = lVar11;
    *local_b8 = &PTR_FUN_14ab09650;
    local_b8[3] = 0;
    uVar1 = *(uint *)(param_4 + 0xc);
    *(uint *)(local_b8 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar12 = iVar7 == 0;
      if (bVar12) {
        *(int *)(lVar9 + 0x10) = iVar6;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar7 = iVar6;
      }
    }
    *(int *)((longlong)puVar10 + 0x1c) = iVar7;
    puVar10[4] = local_d0;
    puVar10[5] = local_c8;
    local_c8 = (void *)0x0;
    *(undefined4 *)(puVar10 + 6) = (undefined4)local_c0;
    *(undefined4 *)((longlong)puVar10 + 0x34) = local_c0._4_4_;
    local_c0 = 0;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_b8);
    local_48 = 1;
    FUN_14016fdb0(uVar3,local_d8,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    if (local_b0 == 0) {
LAB_14378930f:
      pvVar8 = local_c8;
      if (local_b8 != (undefined8 *)0x0) {
        FUN_1400020a8();
        pvVar8 = local_c8;
      }
    }
    else {
      pvVar8 = local_c8;
      if (local_b8 != (undefined8 *)0x0) {
        (**(code **)*local_b8)(local_b8,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        local_b0 = 0;
        goto LAB_14378930f;
      }
    }
  }
  if (pvVar8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1437890dd:
  if (local_a8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1437893fe FUN_1437893fe body=179 status=ok
// SIG undefined FUN_1437893fe(void)

ulonglong FUN_1437893fe(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = FUN_14490d72a();
  if ((iVar2 == 3) || (*(longlong *)(param_1 + 0x170) != 0)) {
    uVar4 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x1f0);
    FUN_145ad1184(local_90,param_2);
    lVar3 = (**(code **)(*plVar1 + 0x3b0))(plVar1,local_90,param_1);
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),lVar3 != 0);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x170) = lVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437894b2 FUN_1437894b2 body=1245 status=ok
// SIG undefined FUN_1437894b2(void)

void FUN_1437894b2(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  char param_5)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 uVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  undefined1 auStack_98 [32];
  char local_78;
  undefined1 local_61;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar17 = *(undefined1 *)(param_1 + 0x158);
  *(undefined1 *)(param_1 + 0x158) = 1;
  if (*(int *)(param_1 + 0x78c) == DAT_14cb103d8) goto LAB_1437897d5;
  *(int *)(param_1 + 0x78c) = DAT_14cb103d8;
  lVar18 = *(longlong *)(param_1 + 0x260);
  local_61 = uVar17;
  if (lVar18 != 0) {
    cVar5 = FUN_142a2f612(lVar18);
    if (cVar5 == '\0') {
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,lVar18 + 0x50,1);
    }
    FUN_145c74e7a(lVar18);
  }
  FUN_1417fac46(&DAT_14cb10a20,param_1,param_2,param_3);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_50,L"Renderer",1);
    uVar8 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar8,local_50);
  }
  local_78 = (char)param_4;
  (**(code **)(*DAT_14cad8310 + 0x88))(DAT_14cad8310,param_1,param_2,param_3);
  plVar3 = *(longlong **)(param_1 + 0x180);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2,param_3);
  }
  if ((char)param_3 == '\0') {
    FUN_143789990(DAT_14cb0d2b0,param_1);
    FUN_1408dc612(param_1);
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x168);
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x2a8))(plVar3,0);
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    FUN_143789990(DAT_14cb0d2b0,param_1);
    FUN_1408dc612(param_1);
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (FUN_14099af08(), DAT_14c98e618 != 0 && param_5 == '\0')) {
      FUN_140d2cebc();
    }
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14090223e(*(longlong *)(param_1 + 0x30),1,1);
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    lVar18 = 0;
    do {
      local_78 = '\0';
      FUN_1437894b2(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 400) + lVar18 * 8) + 0x20)
                    ,param_2,param_3,param_4);
      lVar18 = lVar18 + 1;
    } while (lVar18 < *(int *)(param_1 + 0x198));
  }
  iVar20 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar20 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x88);
    lVar13 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar18 + lVar13) + 0x178);
      if (lVar4 != 0) {
        local_78 = '\0';
        FUN_1437894b2(*(undefined8 *)(lVar4 + 0x20),param_2,param_3,param_4);
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar20 * 8 != lVar13);
  }
  local_60 = param_1;
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    puVar19 = (uint *)(*(longlong *)(param_1 + 0x1a0) + 0x38);
    lVar18 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78;
    do {
      if ((char)puVar19[-0xe] == '\x01') {
        if (puVar19 != (uint *)&DAT_00000038) {
          uVar2 = puVar19[6];
          if (uVar2 == 0) {
            uVar14 = 1;
            uVar16 = 0;
            iVar20 = 0;
            uVar9 = 0;
            goto LAB_143789757;
          }
          puVar7 = *(uint **)(puVar19 + 4);
          if (*(uint **)(puVar19 + 4) == (uint *)0x0) {
            puVar7 = puVar19;
          }
          uVar9 = *puVar7;
          if (uVar9 != 0) {
            uVar16 = 0;
            iVar20 = 0;
            goto LAB_143789720;
          }
          iVar20 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar20 = uVar2 - 1;
          }
          uVar16 = 0;
          uVar14 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar14 = uVar16;
          }
          iVar20 = 0;
          goto LAB_14378970b;
        }
        break;
      }
      puVar19 = puVar19 + 0x1e;
      lVar18 = lVar18 + -0x78;
    } while (lVar18 != 0);
  }
  goto LAB_143789760;
  while( true ) {
    iVar20 = iVar20 + 0x20;
    uVar9 = puVar7[uVar16 + 1];
    uVar16 = uVar16 + 1;
    if (uVar9 != 0) break;
LAB_14378970b:
    if (uVar14 == uVar16) goto LAB_143789760;
  }
LAB_143789720:
  uVar14 = (ulonglong)(-uVar9 & uVar9);
  uVar1 = uVar14 * 2 + 1;
  lVar18 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
    }
  }
  uVar9 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
  if ((int)uVar2 <= (int)uVar9) {
    uVar9 = uVar2;
  }
LAB_143789757:
  if (uVar9 != uVar2) {
    uVar12 = 0xffffffff;
    uVar6 = uVar2;
    do {
      lVar18 = *(longlong *)(*(longlong *)(puVar19 + -4) + (longlong)(int)uVar9 * 0x10);
      if (lVar18 != 0) {
        local_78 = '\0';
        local_58 = uVar14;
        FUN_1437894b2(*(undefined8 *)(lVar18 + 0x20),param_2,param_3,param_4);
        uVar6 = puVar19[6];
        uVar14 = local_58;
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = *(uint **)(puVar19 + 4);
      if (*(uint **)(puVar19 + 4) == (uint *)0x0) {
        puVar7 = puVar19;
      }
      iVar15 = (int)uVar16;
      lVar18 = (longlong)iVar15;
      uVar9 = puVar7[lVar18] & uVar12;
      if (uVar9 == 0) {
        iVar10 = uVar6 + 0x1e;
        if (-1 < (int)(uVar6 - 1)) {
          iVar10 = uVar6 - 1;
        }
        iVar10 = iVar10 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar15) {
          iVar11 = iVar15;
        }
        if (iVar15 < iVar10) {
          lVar13 = 0;
          do {
            uVar9 = puVar7[lVar18 + lVar13 + 1];
            if (uVar9 != 0) {
              uVar16 = (ulonglong)(iVar15 + (int)lVar13 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1437898d9;
            }
            iVar20 = iVar20 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar11 - lVar18 != lVar13);
          uVar12 = 0xffffffff;
          iVar15 = iVar11;
        }
        uVar16 = (ulonglong)(iVar15 + 1);
        uVar9 = uVar6;
      }
      else {
LAB_1437898d9:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar9 = (iVar20 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar6 <= (int)uVar9) {
          uVar9 = uVar6;
        }
      }
    } while (uVar9 != uVar2);
  }
LAB_143789760:
  param_1 = local_60;
  FUN_1407915be(local_60 + 0x818,local_60);
  FUN_1417fac46(&DAT_14cb10a08,param_1,param_2,param_3);
  if ((char)param_3 != '\0') {
    FUN_140790e84(param_1 + 0x870);
  }
  uVar17 = local_61;
  if ((char)param_4 == '\x01' && *(longlong *)(param_1 + 0x620) != 0) {
    FUN_1435b80fe();
    (**(code **)(**(longlong **)(param_1 + 0x218) + 0x418))(*(longlong **)(param_1 + 0x218),0);
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
LAB_1437897d5:
  *(undefined1 *)(param_1 + 0x158) = uVar17;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143789990 FUN_143789990 body=147 status=ok
// SIG undefined FUN_143789990(void)

void FUN_143789990(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((param_2 != 0 && param_1 != 0) && ((longlong)*(int *)(param_1 + 0x1150) != 0)) {
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar4);
      if (*(longlong *)(lVar3 + 0x360) == param_2) {
        if (lVar3 == 0) {
          return;
        }
        iVar1 = *(int *)(lVar3 + 0x2b8);
        if ((longlong)iVar1 == 0) {
          return;
        }
        lVar4 = *(longlong *)(lVar3 + 0x2b0);
        lVar3 = 0;
        do {
          lVar2 = *(longlong *)(lVar4 + lVar3);
          if (lVar2 != 0) {
            FUN_145a0c4bc(*(undefined8 *)(lVar2 + 0x858));
          }
          lVar3 = lVar3 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar3);
        return;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar4);
  }
  return;
}



// FUNCTION 143789bc2 FUN_143789bc2 body=6173 status=ok
// SIG undefined FUN_143789bc2(void)

void FUN_143789bc2(longlong param_1,longlong *param_2,char param_3,longlong *param_4)

{
  short *psVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  code *pcVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  undefined *_Src;
  char cVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined ***pppuVar13;
  undefined **ppuVar14;
  longlong *plVar15;
  undefined8 uVar16;
  int iVar17;
  undefined2 *puVar18;
  uint uVar19;
  longlong lVar20;
  size_t _Size;
  bool bVar21;
  undefined1 auStack_358 [32];
  undefined ***local_338;
  undefined ***local_330;
  undefined1 local_328;
  undefined ***local_318;
  uint local_310;
  int iStack_30c;
  longlong local_300;
  undefined **local_2f8;
  undefined8 uStack_2f0;
  ushort local_2de;
  ushort local_2dc;
  undefined1 local_2d9;
  undefined **local_2d8;
  undefined8 uStack_2d0;
  longlong local_2c8;
  longlong local_2c0;
  longlong local_2b0;
  undefined **local_2a8;
  undefined **ppuStack_2a0;
  undefined ***pppuStack_298;
  byte local_290;
  undefined7 uStack_28f;
  undefined *local_288;
  ulonglong uStack_280;
  undefined **local_188;
  undefined8 uStack_180;
  undefined8 *local_178;
  char local_170;
  undefined7 uStack_16f;
  undefined8 local_168;
  longlong local_160;
  longlong local_150;
  longlong local_140;
  undefined4 local_138;
  longlong local_130;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_358;
  lVar11 = param_1 + -0x28;
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xf0) != 0) {
    if (param_3 == '\x12') {
      local_2a8 = (undefined **)0x0;
      local_188 = (undefined **)0x0;
      uStack_180 = (undefined **)0x0;
      (**(code **)(*param_4 + 400))(param_4);
      FUN_14021219d(param_4,&local_188);
      ppuVar12 = local_188;
      if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
        (**(code **)(*(longlong *)param_2[0xd] + 0x2b8))
                  ((longlong *)param_2[0xd],&local_2a8,&local_188);
        ppuVar12 = local_188;
      }
    }
    else {
      if (param_3 == '\x11') goto switchD_143789cb2_caseD_11;
      if (param_3 != '\x06') goto switchD_143789cb2_caseD_6;
      FUN_140056680(&local_2a8,L"?failed");
      local_2d8 = (undefined **)0x0;
      uStack_2d0 = (undefined **)0x0;
      FUN_14021219d(param_4,&local_2d8);
      if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
        if ((int)uStack_2d0 < 2) {
          local_188 = (undefined **)0x14ab07e36;
          uStack_180._0_4_ = 0x17;
          FUN_1446e940c(&local_2f8,&local_188);
          local_188 = (undefined **)0x14a8a9162;
          uStack_180._0_4_ = 0xd;
          FUN_1446e940c(&local_310,&local_188);
          local_188 = (undefined **)0x14ab07e10;
          uStack_180 = (undefined **)CONCAT44(uStack_180._4_4_,0x12);
          FUN_140208c1e(&local_68,&local_310,&local_2f8,&local_188);
          ppuVar12 = (undefined **)local_68;
          if (*(code **)(*(undefined **)local_68 + 0x50) != FUN_144828418) {
            ppuVar12 = (undefined **)(**(code **)(*(undefined **)local_68 + 0x50))();
          }
          FUN_1447a1fc0(ppuVar12);
          pcVar5 = *(code **)(*(undefined **)local_68 + 0x28);
          if (pcVar5 == FUN_14482841c) {
            pppuVar13 = (undefined ***)((longlong)local_68 + 0x18);
            if (*(undefined **)((longlong)local_68 + 0x28) != (undefined *)0x0) {
              pppuVar13 = (undefined ***)(*(undefined **)((longlong)local_68 + 0x28) + 8);
            }
          }
          else if (pcVar5 == (code *)&LAB_14010c34c) {
            pppuVar13 = (undefined ***)((longlong)local_68 + 0x10);
          }
          else {
            pppuVar13 = (undefined ***)(*pcVar5)(local_68);
          }
          if (&local_2d8 != pppuVar13) {
            uVar9 = *(uint *)(pppuVar13 + 1);
            ppuVar12 = *pppuVar13;
            uStack_2d0 = (undefined **)CONCAT44(uStack_2d0._4_4_,uVar9);
            if (uVar9 == 0 && uStack_2d0._4_4_ == 0) {
              uStack_2d0 = (undefined **)(ulonglong)uVar9;
            }
            else {
              FUN_1446dd670(&local_2d8,uVar9);
              if (uVar9 != 0) {
                memcpy(local_2d8,ppuVar12,(longlong)(int)uVar9 * 2);
              }
            }
          }
          if ((undefined **)local_68 != (undefined **)0x0) {
            (**(code **)(*(undefined **)local_68 + 0x10))();
          }
        }
        local_338 = &local_2d8;
        if (param_2 == (longlong *)0x0) {
          FUN_147d87416(DAT_14cb0d2b0 + 0xec8,lVar11,*(undefined8 *)(param_1 + 0x10),5);
        }
        else {
          FUN_1459b235e(&local_188,5);
          FUN_143587eda(param_2,&local_188);
          if (local_160 != 0) {
            (**(code **)(local_160 + -0x10))(local_160 + -0x10);
          }
          if (CONCAT71(uStack_16f,local_170) != 0) {
            FUN_1400020a8();
          }
          FUN_147d87416(DAT_14cb0d2b0 + 0xec8,lVar11,*(undefined8 *)(param_1 + 0x10),5);
          FUN_1459b235e(&local_188,5);
          FUN_143587ad8(param_2,&local_188);
          if (local_160 != 0) {
            (**(code **)(local_160 + -0x10))(local_160 + -0x10);
          }
          if (CONCAT71(uStack_16f,local_170) != 0) {
            FUN_1400020a8();
          }
        }
      }
      ppuVar12 = local_2a8;
      if (local_2d8 != (undefined **)0x0) {
        FUN_1400020a8();
        ppuVar12 = local_2a8;
      }
    }
    goto LAB_14378a204;
  }
  if (*(int *)((longlong)param_2 + 0x1cc) == 1) {
    if ((char)param_2[0x3a] != param_3) goto switchD_143789dc9_caseD_5;
    switch(param_3) {
    case '\x04':
      goto switchD_143789cb2_caseD_4;
    case '\x05':
      ppuStack_2a0 = (undefined **)0x0;
      pppuStack_298 = (undefined ***)0x0;
      local_290 = 0;
      local_2a8 = &PTR_FUN_14a5af930;
      local_288 = (undefined *)0x0;
      uStack_280 = 0;
      pppuVar13 = (undefined ***)(param_2 + 0x37);
      local_338 = &local_2f8;
      local_2f8 = (undefined **)0x0;
      uStack_2f0 = 0;
      param_4[7] = param_4[7] + 0x1000000;
      cVar8 = FUN_14640e3a4(param_4,param_2 + 0x35,pppuVar13,&local_2a8);
      param_4[7] = param_4[7] + -0x1000000;
      if (cVar8 == '\0') {
        *(undefined4 *)(param_2 + 0x36) = 0;
        if (*(int *)((longlong)param_2 + 0x1b4) != 0) {
          FUN_1446f8c06(param_2 + 0x35,0);
        }
        *(undefined4 *)(param_2 + 0x38) = 0;
        if (*(int *)((longlong)param_2 + 0x1c4) != 0) {
          FUN_1446f8c06(pppuVar13,0);
        }
      }
      else {
        if ((int)param_2[0x38] == 0) {
          ppuVar12 = (undefined **)&DAT_149dfb77a;
        }
        else {
          ppuVar12 = *pppuVar13;
        }
        while ((0x3f < (ulonglong)*(ushort *)ppuVar12 ||
               ((0x8000000800000001U >> ((ulonglong)*(ushort *)ppuVar12 & 0x3f) & 1) == 0))) {
          ppuVar12 = (undefined **)((longlong)ppuVar12 + 2);
        }
        FUN_140245d8a(&local_188,0,ppuVar12,0);
        if (local_168._4_4_ == 0) {
          FUN_14020fad6(pppuVar13,ppuVar12);
          FUN_14572541c(param_4);
        }
        else {
          iVar10 = 0xfe;
          if ((int)param_2[10] < 0xfe) {
            iVar10 = (int)param_2[10];
          }
          FUN_14622b792(&local_188,L"SplitscreenCount",0,&DAT_14c872af8);
          FUN_140002266(&local_2d8,L"SplitscreenCount=%i",iVar10 + 1);
          ppuVar12 = local_2d8;
          if ((int)uStack_2d0 == 0) {
            ppuVar12 = (undefined **)&DAT_149dfb77a;
          }
          FUN_141556918(&local_188,ppuVar12);
          if (local_2d8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          FUN_141641396(&local_188,&local_2d8,0);
          if (pppuVar13 == &local_2d8) {
            if (local_2d8 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            iVar10 = (int)param_2[0x38];
          }
          else {
            if (param_2[0x37] != 0) {
              FUN_1400020a8();
            }
            param_2[0x37] = (longlong)local_2d8;
            local_2d8 = (undefined **)0x0;
            *(int *)(param_2 + 0x38) = (int)uStack_2d0;
            *(int *)((longlong)param_2 + 0x1c4) = uStack_2d0._4_4_;
            iVar10 = (int)uStack_2d0;
          }
          if (iVar10 == 0) {
            ppuVar12 = (undefined **)&DAT_149dfb77a;
          }
          else {
            ppuVar12 = *pppuVar13;
          }
          for (; (*(short *)ppuVar12 != 0 && (*(short *)ppuVar12 != 0x3f));
              ppuVar12 = (undefined **)((longlong)ppuVar12 + 2)) {
          }
          local_318 = (undefined ***)(param_2 + 0x2c);
          if (&local_2a8 != local_318) {
            local_58 = CONCAT71(local_58._1_7_,local_290);
            (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[local_290])
                      (&local_68,&ppuStack_2a0);
            local_2c8 = local_58;
            local_2d8 = (undefined **)local_68;
            uStack_2d0 = uStack_60;
            uVar6 = param_2[0x2f];
            ppuVar14 = (undefined **)param_2[0x2d];
            ppuVar7 = (undefined **)param_2[0x2e];
            *(undefined4 *)(param_2 + 0x2d) = (undefined4)local_68;
            *(undefined4 *)((longlong)param_2 + 0x16c) = local_68._4_4_;
            *(int *)(param_2 + 0x2e) = (int)uStack_60;
            *(uint *)((longlong)param_2 + 0x174) = uStack_60._4_4_;
            param_2[0x2f] = local_58;
            local_68 = (code *)ppuVar14;
            uStack_60 = ppuVar7;
            local_58 = uVar6;
            (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar6 & 0xff])(&local_68);
            _Src = local_288;
            iVar10 = (int)uStack_280;
            _Size = (size_t)(int)uStack_280;
            *(int *)(param_2 + 0x31) = (int)uStack_280;
            if ((int)uStack_280 == 0 && *(int *)((longlong)param_2 + 0x18c) == 0) {
              *(undefined4 *)((longlong)param_2 + 0x18c) = 0;
            }
            else {
              FUN_1447a127e(param_2 + 0x30,uStack_280 & 0xffffffff);
              if (iVar10 != 0) {
                memcpy((void *)param_2[0x30],_Src,_Size);
              }
            }
          }
          ppuVar14 = local_2f8;
          if ((int)uStack_2f0 == 0) {
            ppuVar14 = (undefined **)&DAT_149dfb77a;
          }
          FUN_1446f470e(&local_300,ppuVar14,1);
          param_2[0x2e1] = local_300;
          plVar15 = *(longlong **)(param_1 + 0x148);
          iStack_30c = 0;
          if (param_2 == (longlong *)0x0) {
            local_310 = 0;
            iVar10 = 0;
          }
          else {
            local_310 = *(uint *)((longlong)param_2 + 0xc);
            if ((int)local_310 < DAT_14c9647dc) {
              lVar20 = (ulonglong)((local_310 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_310 >> 0x10) * 8);
            }
            else {
              lVar20 = 0;
            }
            iVar10 = *(int *)(lVar20 + 0x10);
            if (*(int *)(lVar20 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              iVar17 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar17);
              }
              LOCK();
              iVar10 = *(int *)(lVar20 + 0x10);
              bVar21 = iVar10 == 0;
              if (bVar21) {
                *(int *)(lVar20 + 0x10) = iVar17;
                iVar10 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar10 = iVar17;
              }
            }
          }
          local_68 = FUN_146214664;
          uStack_60 = (undefined **)((ulonglong)uStack_60 & 0xffffffff00000000);
          iStack_30c = iVar10;
          FUN_14640e3f2(&local_2d8,lVar11);
          if (plVar15 == (longlong *)0x0) {
            local_68 = (code *)0x0;
            uStack_60 = (undefined **)0x0;
            if (local_2d8 != (undefined **)0x0 && (int)uStack_2d0 != 0) {
              (**(code **)(*local_2d8 + 0x60))(local_2d8,&local_68);
              goto LAB_14378ae36;
            }
          }
          else {
            (**(code **)(*param_2 + 0x2c0))(param_2,&local_68,0);
            FUN_140056680(&local_310,ppuVar12);
            local_338 = &local_2d8;
            (**(code **)(*plVar15 + 0x758))(plVar15,&local_310,&local_68,local_318);
            if (CONCAT44(iStack_30c,local_310) != 0) {
              FUN_1400020a8();
            }
LAB_14378ae36:
            if ((undefined **)local_68 != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
          if ((int)uStack_2d0 != 0) {
            if (local_2d8 == (undefined **)0x0) goto LAB_14378ae8c;
            (**(code **)*local_2d8)(local_2d8,0);
            FUN_1446efa72(&local_2d8,0,0,0x10);
            uStack_2d0 = (undefined **)((ulonglong)uStack_2d0 & 0xffffffff00000000);
          }
          if (local_2d8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
        }
LAB_14378ae8c:
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_140,local_138);
        if (local_140 != 0) {
          FUN_1400020a8();
        }
        if (local_150 != 0) {
          FUN_1400020a8();
        }
        if (local_160 != 0) {
          FUN_1400020a8();
        }
        if (local_178 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_188 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      if (local_2f8 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      local_2a8 = &PTR_FUN_14a5af930;
      if (local_288 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      local_2a8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_290])(&ppuStack_2a0);
    case '\x06':
    case '\a':
    case '\b':
    case '\v':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x10':
      goto switchD_143789cb2_caseD_6;
    case '\t':
      goto switchD_143789cb2_caseD_9;
    case '\n':
      goto switchD_143789cb2_caseD_a;
    case '\x0f':
      goto switchD_143789cb2_caseD_f;
    case '\x11':
      goto switchD_143789cb2_caseD_11;
    default:
      if (param_3 != '\0') goto switchD_143789cb2_caseD_6;
      local_2d9 = 0;
      local_2f8 = (undefined **)((ulonglong)local_2f8 & 0xffffffff00000000);
      uVar9 = FUN_1415d1120(1);
      local_68 = (code *)0x0;
      uStack_60 = (undefined **)0x0;
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x10) + 0x849);
      local_338 = (undefined ***)&local_2de;
      local_2de = 0;
      local_310 = uVar9;
      local_2dc = (ushort)bVar2;
      FUN_146030b86(param_4,&local_2d9,&local_2f8);
      ppuVar12 = (undefined **)local_68;
      if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
        cVar8 = FUN_146815e02(uVar9,(ulonglong)local_2f8 & 0xffffffff);
        if ((cVar8 == '\0') || (local_2de != bVar2)) {
          local_188 = (undefined **)&local_168;
          local_170 = '\0';
          local_178 = &local_68;
          local_2a8 = &local_288;
          local_290 = 0;
          pppuStack_298 = &local_188;
          ppuStack_2a0 = local_2a8;
          uStack_180 = local_188;
          FUN_146816066(bVar2);
          FUN_146816066(local_2de,&local_2a8);
          FUN_147daaeb0(param_2,&local_310,&local_2dc);
          (**(code **)(*param_2 + 0x2f8))(param_2,1);
          if (cVar8 == '\0') {
            FUN_1459b235e(&local_2d8,0x13);
            FUN_143587ad8(param_2,&local_2d8);
            if (local_2b0 != 0) {
              (**(code **)(local_2b0 + -0x10))(local_2b0 + -0x10);
            }
            if (local_2c0 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_290 == 1) {
            FUN_1400020a8(local_2a8);
          }
          ppuVar14 = local_188;
          ppuVar12 = (undefined **)local_68;
          if (local_170 != '\x01') break;
        }
        else {
          if ((int)uStack_60 < 2) {
            bVar21 = true;
            if ((DAT_14caf27a0 != (longlong *)0x0 && DAT_14caf27a8 != 0) &&
               (cVar8 = (**(code **)(*DAT_14caf27a0 + 0x30))(), cVar8 != '\0')) {
              plVar15 = DAT_14caf27a0;
              if (DAT_14caf27a8 == 0) {
                plVar15 = (longlong *)0x0;
              }
              cVar8 = (**(code **)(*plVar15 + 0x58))(plVar15,param_2);
              bVar21 = cVar8 != '\x02';
            }
            cVar8 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x4a0))();
            if ((!bVar21) || (cVar8 == '\0')) {
              FUN_14358f02e(param_2);
              ppuVar12 = (undefined **)local_68;
              break;
            }
            FUN_140056680(&local_2a8,L"Encryption token missing");
            FUN_1459b235e(&local_188,0x32);
            FUN_143587eda(param_2,&local_188);
            if (local_160 != 0) {
              (**(code **)(local_160 + -0x10))(local_160 + -0x10);
            }
            if (CONCAT71(uStack_16f,local_170) != 0) {
              FUN_1400020a8();
            }
            FUN_147a4786e(param_2,&local_2a8);
            (**(code **)(*param_2 + 0x2f8))(param_2,1);
            uVar16 = 0x32;
LAB_14378b1db:
            FUN_1459b235e(&local_188,uVar16);
            FUN_143587ad8(param_2,&local_188);
            if (local_160 != 0) {
              (**(code **)(local_160 + -0x10))(local_160 + -0x10);
            }
            ppuVar14 = local_2a8;
            if (CONCAT71(uStack_16f,local_170) != 0) {
              FUN_1400020a8();
              ppuVar14 = local_2a8;
            }
          }
          else {
            if ((DAT_14caf27c0 == (longlong *)0x0 || DAT_14caf27c8 == 0) ||
               (cVar8 = (**(code **)(*DAT_14caf27c0 + 0x30))(), cVar8 == '\0')) {
              FUN_140056680(&local_2a8,L"Encryption failure");
              FUN_1459b235e(&local_188,0x31);
              FUN_143587eda(param_2,&local_188);
              if (local_160 != 0) {
                (**(code **)(local_160 + -0x10))(local_160 + -0x10);
              }
              if (CONCAT71(uStack_16f,local_170) != 0) {
                FUN_1400020a8();
              }
              FUN_147a4786e(param_2,&local_2a8);
              (**(code **)(*param_2 + 0x2f8))(param_2,1);
              uVar16 = 0x31;
              goto LAB_14378b1db;
            }
            local_2a8 = (undefined **)FUN_14358f13c;
            ppuStack_2a0 = (undefined **)((ulonglong)ppuStack_2a0 & 0xffffffff00000000);
            FUN_147daaf9c(&local_188,param_2);
            plVar15 = DAT_14caf27c0;
            if (DAT_14caf27c8 == 0) {
              plVar15 = (longlong *)0x0;
            }
            (**(code **)(*plVar15 + 0x58))(plVar15,&local_68,&local_188);
            ppuVar14 = local_188;
            if ((int)uStack_180 != 0) {
              ppuVar12 = (undefined **)local_68;
              if (local_188 == (undefined **)0x0) break;
              (**(code **)*local_188)(local_188,0);
              FUN_1446efa72(&local_188,0,0,0x10);
              uStack_180 = (undefined **)((ulonglong)uStack_180._4_4_ << 0x20);
              ppuVar14 = local_188;
            }
          }
          ppuVar12 = (undefined **)local_68;
          if (ppuVar14 == (undefined **)0x0) break;
        }
        FUN_1400020a8(ppuVar14);
        ppuVar12 = (undefined **)local_68;
      }
    }
LAB_14378a204:
    if (ppuVar12 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    switch(param_3) {
    case '\x04':
switchD_143789cb2_caseD_4:
      FUN_1463c28ee(param_4,&local_188);
      if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
        iVar10 = *(int *)(*(longlong *)(param_1 + 0x10) + 200);
        if ((int)local_188 < iVar10) {
          iVar10 = (int)local_188;
        }
        iVar17 = 0x708;
        if (0x708 < iVar10) {
          iVar17 = iVar10;
        }
        *(int *)(param_2 + 7) = iVar17;
      }
      break;
    case '\x05':
switchD_143789dc9_caseD_5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_358);
    case '\x06':
    case '\a':
    case '\b':
    case '\v':
    case '\f':
    case '\r':
    case '\x0e':
    case '\x10':
      break;
    case '\t':
switchD_143789cb2_caseD_9:
      if (param_2[6] != 0) break;
      local_2d8 = (undefined **)0x0;
      uStack_2d0 = (undefined **)0x0;
      if ((int)param_2[0x38] == 0) {
        puVar18 = &DAT_149dfb77a;
      }
      else {
        puVar18 = (undefined2 *)param_2[0x37];
      }
      FUN_140245d8a(&local_188,0,puVar18,0);
      if (local_168._4_4_ != 0) {
        local_338 = (undefined ***)(param_2 + 0x2c);
        local_330 = &local_2d8;
        local_328 = 0;
        lVar20 = FUN_141556b84(lVar11,param_2,2,&local_188);
        if ((lVar20 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar20);
          param_2[6] = lVar20;
LAB_14378a049:
          (**(code **)(*param_2 + 0x3b8))(param_2,3);
          local_68 = (code *)0x0;
          uStack_60 = (undefined **)0x0;
          lVar20 = FUN_1405e677a(DAT_14cb0d2b0,lVar11);
          if (*(char *)(lVar20 + 0x88) == '\x01') {
            FUN_147daae42(lVar20 + 8,&local_2a8);
            if ((undefined **)local_68 != (undefined **)0x0) {
              FUN_1400020a8();
            }
            local_68 = (code *)local_2a8;
            uStack_60 = ppuStack_2a0;
          }
          else {
            cVar8 = FUN_140496a74(param_2[6]);
            if (cVar8 == '\0') {
LAB_14378a08e:
              lVar20 = lVar11;
              lVar11 = lVar20;
              if (*(longlong *)(lVar20 + 0x20) != 0) goto code_r0x00014378a09d;
              goto LAB_14378a0ae;
            }
          }
          goto LAB_14378a100;
        }
        param_2[6] = lVar20;
        if (lVar20 != 0) goto LAB_14378a049;
        FUN_1459b235e(&local_2a8,0x15);
        FUN_143587eda(param_2,&local_2a8);
        if (uStack_280 != 0) {
          (**(code **)(uStack_280 - 0x10))(uStack_280 - 0x10);
        }
        if (CONCAT71(uStack_28f,local_290) != 0) {
          FUN_1400020a8();
        }
        FUN_147a4786e(param_2,&local_2d8);
        (**(code **)(*param_2 + 0x2f8))(param_2,1);
        FUN_1459b235e(&local_2a8,0x15);
        FUN_143587ad8(param_2,&local_2a8);
        if (uStack_280 != 0) {
          (**(code **)(uStack_280 - 0x10))(uStack_280 - 0x10);
        }
        ppuVar12 = (undefined **)CONCAT71(uStack_28f,local_290);
        goto LAB_14378a176;
      }
      FUN_14572541c(param_4);
      goto LAB_14378a180;
    case '\n':
switchD_143789cb2_caseD_a:
      local_2d8 = (undefined **)0x0;
      uStack_2d0 = (undefined **)0x0;
      ppuStack_2a0 = (undefined **)0x0;
      pppuStack_298 = (undefined ***)0x0;
      local_290 = 0;
      local_2a8 = &PTR_FUN_14a5af930;
      local_288 = (undefined *)0x0;
      uStack_280 = 0;
      FUN_14021219d(param_4,&local_2d8);
      FUN_146214c9d(param_4,&local_2a8);
      if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
        ppuVar12 = local_2d8;
        if ((int)uStack_2d0 == 0) {
          ppuVar12 = (undefined **)&DAT_149dfb77a;
        }
        while ((0x3f < (ulonglong)*(ushort *)ppuVar12 ||
               ((0x8000000800000001U >> ((ulonglong)*(ushort *)ppuVar12 & 0x3f) & 1) == 0))) {
          ppuVar12 = (undefined **)((longlong)ppuVar12 + 2);
        }
        FUN_140245d8a(&local_188,0,ppuVar12,0);
        if (local_168._4_4_ == 0) {
          FUN_14020fad6(&local_2d8,ppuVar12);
          FUN_14572541c(param_4);
        }
        else {
          iVar10 = 0xfd;
          if ((int)param_2[10] < 0xfd) {
            iVar10 = (int)param_2[10];
          }
          FUN_14622b792(&local_188,L"SplitscreenCount",0,&DAT_14c872af8);
          FUN_140002266(&local_68,L"SplitscreenCount=%i",iVar10 + 2);
          ppuVar12 = (undefined **)local_68;
          if ((int)uStack_60 == 0) {
            ppuVar12 = (undefined **)&DAT_149dfb77a;
          }
          FUN_141556918(&local_188,ppuVar12);
          if ((undefined **)local_68 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          FUN_141641396(&local_188,&local_68,0);
          if (local_2d8 != (undefined **)0x0) {
            FUN_1400020a8();
          }
          local_2d8 = (undefined **)local_68;
          uStack_2d0 = uStack_60;
          ppuVar12 = (undefined **)&DAT_149dfb77a;
          if ((int)uStack_60 != 0) {
            ppuVar12 = (undefined **)local_68;
          }
          for (; (*(ushort *)ppuVar12 != 0 && (*(ushort *)ppuVar12 != 0x3f));
              ppuVar12 = (undefined **)((longlong)ppuVar12 + 2)) {
          }
          plVar15 = *(longlong **)(param_1 + 0x148);
          iStack_30c = 0;
          if (param_2 == (longlong *)0x0) {
            local_310 = 0;
            iVar10 = 0;
          }
          else {
            local_310 = *(uint *)((longlong)param_2 + 0xc);
            if ((int)local_310 < DAT_14c9647dc) {
              lVar20 = (ulonglong)((local_310 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_310 >> 0x10) * 8);
            }
            else {
              lVar20 = 0;
            }
            iVar10 = *(int *)(lVar20 + 0x10);
            if (*(int *)(lVar20 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              iVar17 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar21) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar17);
              }
              LOCK();
              iVar10 = *(int *)(lVar20 + 0x10);
              bVar21 = iVar10 == 0;
              if (bVar21) {
                *(int *)(lVar20 + 0x10) = iVar17;
                iVar10 = 0;
              }
              UNLOCK();
              if (bVar21) {
                iVar10 = iVar17;
              }
            }
          }
          local_2f8 = (undefined **)FUN_14378b3fc;
          uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
          local_338 = &local_2a8;
          local_330 = &local_2d8;
          iStack_30c = iVar10;
          FUN_147dab04a(&local_68,lVar11);
          if (plVar15 == (longlong *)0x0) {
            local_2f8 = (undefined **)0x0;
            uStack_2f0 = 0;
            if ((undefined **)local_68 != (undefined **)0x0 && (int)uStack_60 != 0) {
              (**(code **)(*(undefined **)local_68 + 0x60))(local_68,&local_2f8);
              goto LAB_14378a8bc;
            }
          }
          else {
            (**(code **)(*param_2 + 0x2c0))(param_2,&local_2f8,0);
            FUN_140056680(&local_310,ppuVar12);
            local_338 = (undefined ***)&local_68;
            (**(code **)(*plVar15 + 0x758))(plVar15,&local_310,&local_2f8,&local_2a8);
            if (CONCAT44(iStack_30c,local_310) != 0) {
              FUN_1400020a8();
            }
LAB_14378a8bc:
            if (local_2f8 != (undefined **)0x0) {
              FUN_1400020a8();
            }
          }
          if ((int)uStack_60 != 0) {
            if ((undefined **)local_68 == (undefined **)0x0) goto LAB_14378a912;
            (*(code *)**(undefined8 **)local_68)(local_68,0);
            FUN_1446efa72(&local_68,0,0,0x10);
            uStack_60 = (undefined **)((ulonglong)uStack_60._4_4_ << 0x20);
          }
          if ((undefined **)local_68 != (undefined **)0x0) {
            FUN_1400020a8();
          }
        }
LAB_14378a912:
        if (local_130 != 0) {
          FUN_1400020a8();
        }
        FUN_1447a1747(local_140,local_138);
        if (local_140 != 0) {
          FUN_1400020a8();
        }
        if (local_150 != 0) {
          FUN_1400020a8();
        }
        if (local_160 != 0) {
          FUN_1400020a8();
        }
        if (local_178 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_188 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
      local_2a8 = &PTR_FUN_14a5af930;
      if (local_288 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      local_2a8 = &PTR_FUN_14a184370;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[local_290])(&ppuStack_2a0);
      ppuVar12 = local_2d8;
      goto LAB_14378a204;
    case '\x0f':
switchD_143789cb2_caseD_f:
      FUN_1463c28ee(param_4,&local_188);
      if ((*(byte *)((longlong)param_4 + 0x29) & 2) == 0) {
        if (-1 < (longlong)(int)local_188) {
          if ((int)param_2[10] <= (int)local_188) break;
          param_2 = *(longlong **)(param_2[9] + (longlong)(int)local_188 * 8);
        }
        if (param_2 != (longlong *)0x0) {
          FUN_146106050(lVar11,param_2);
        }
      }
      break;
    case '\x11':
switchD_143789cb2_caseD_11:
      local_188 = (undefined **)0x0;
      uStack_180 = (undefined **)0x0;
      FUN_14021219d(param_4,&local_188);
      ppuVar12 = local_188;
      goto LAB_14378a204;
    default:
      if (param_3 == '\0') goto switchD_143789dc9_caseD_5;
    }
  }
switchD_143789cb2_caseD_6:
  if ((local_48 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014378a09d:
  lVar11 = *(longlong *)(lVar20 + 0x20);
  if ((*(uint *)(lVar20 + 8) >> 0x1c & 1) == 0) goto LAB_14378a08e;
  lVar11 = FUN_142840154(lVar20);
LAB_14378a0ae:
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar20 + 0x20);
    goto LAB_14378a08e;
  }
  local_2f8 = *(undefined ***)(lVar11 + 0x18);
  FUN_1400021e4(&local_2f8,&local_2a8);
  FUN_1402980a2(&local_68,local_2a8);
  if (local_2a8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_14378a100:
  ppuVar12 = (undefined **)local_68;
  if ((int)uStack_60 == 0) {
    ppuVar12 = (undefined **)&DAT_149dfb77a;
  }
  lVar11 = 0;
  while( true ) {
    uVar3 = *(ushort *)((longlong)ppuVar12 + lVar11);
    uVar9 = (uint)uVar3;
    uVar4 = *(ushort *)((longlong)&DAT_149dfb77a + lVar11);
    uVar19 = (uint)uVar4;
    if (uVar3 != uVar4) break;
    if (uVar3 == 0) goto LAB_14378a16c;
LAB_14378a13d:
    lVar11 = lVar11 + 2;
  }
  if ((uVar4 | uVar3) < 0x80) {
    uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
    uVar19 = (uint)(byte)(&DAT_149e05da0)[uVar4];
    if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_14378a13d;
  }
  if (uVar9 - uVar19 != 0) {
    lVar11 = param_2[6];
    local_338 = &local_2a8;
    local_2a8 = (undefined **)0x0;
    ppuStack_2a0 = (undefined **)0x0;
    psVar1 = (short *)(lVar11 + 0x670);
    *psVar1 = *psVar1 + 1;
    FUN_1461c932c(lVar11,&local_68,2,CONCAT71((uint7)(uint3)(uVar9 - uVar19 >> 8),1));
  }
LAB_14378a16c:
  *(undefined4 *)(param_2 + 0x40) = 0;
  ppuVar12 = (undefined **)local_68;
LAB_14378a176:
  if (ppuVar12 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_14378a180:
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_140,local_138);
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if (local_150 != 0) {
    FUN_1400020a8();
  }
  if (local_160 != 0) {
    FUN_1400020a8();
  }
  if (local_178 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ppuVar12 = local_2d8;
  if (local_188 != (undefined **)0x0) {
    FUN_1400020a8();
    ppuVar12 = local_2d8;
  }
  goto LAB_14378a204;
}



// FUNCTION 14378b3fc FUN_14378b3fc body=1124 status=ok
// SIG undefined FUN_14378b3fc(void)

void FUN_14378b3fc(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int iVar1;
  ulonglong uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  uint uVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong *local_120;
  undefined1 local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  longlong local_100;
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong local_90;
  longlong local_80;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_3 >> 0x20 == 0) {
LAB_14378b5d1:
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)0x0;
    uVar11 = (uint)param_3;
    if ((-1 < (int)uVar11) && ((int)uVar11 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar11 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0xd & 0x3fff8)));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(int *)(puVar9 + 2) != (int)(param_3 >> 0x20) ||
          ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)))) goto LAB_14378b5d1;
      plVar10 = (longlong *)*puVar9;
    }
  }
  cVar6 = FUN_141657e86(plVar10);
  if (cVar6 != '\0') {
    lVar8 = *(longlong *)(param_1 + 0x30);
    lVar7 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x3b8))
                      (*(longlong **)(param_1 + 0x38),plVar10);
    local_108 = (undefined8 *)(lVar7 + 0x160);
    if (local_108 != param_4) {
      local_d8 = CONCAT71(local_d8._1_7_,*(byte *)(param_4 + 3));
      (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_4 + 3)])
                (&local_e8,param_4 + 1);
      local_a8 = local_d8;
      local_b8 = (undefined4)local_e8;
      uStack_b4 = local_e8._4_4_;
      uStack_b0 = uStack_e0;
      uStack_ac = uStack_dc;
      uVar2 = *(ulonglong *)(lVar7 + 0x178);
      plVar5 = *(longlong **)(lVar7 + 0x168);
      uVar3 = *(undefined4 *)(lVar7 + 0x170);
      uVar4 = *(undefined4 *)(lVar7 + 0x174);
      *(undefined4 *)(lVar7 + 0x168) = (undefined4)local_e8;
      *(undefined4 *)(lVar7 + 0x16c) = local_e8._4_4_;
      *(undefined4 *)(lVar7 + 0x170) = uStack_e0;
      *(undefined4 *)(lVar7 + 0x174) = uStack_dc;
      *(ulonglong *)(lVar7 + 0x178) = local_d8;
      local_e8 = plVar5;
      uStack_e0 = uVar3;
      uStack_dc = uVar4;
      local_d8 = uVar2;
      (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar2 & 0xff])(&local_e8);
      iVar1 = *(int *)(param_4 + 5);
      _Src = (void *)param_4[4];
      *(int *)(lVar7 + 0x188) = iVar1;
      if (iVar1 == 0 && *(int *)(lVar7 + 0x18c) == 0) {
        *(undefined4 *)(lVar7 + 0x18c) = 0;
      }
      else {
        local_110 = (undefined8 *)(lVar7 + 0x180);
        FUN_1447a127e(local_110,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*local_110,_Src,(longlong)iVar1);
        }
      }
    }
    *(longlong *)(lVar7 + 0x1708) = plVar10[0x2e1];
    iVar1 = (int)param_5[1] + -1;
    if ((int)param_5[1] == 0) {
      iVar1 = 0;
    }
    FUN_1402980a2(lVar7 + 0x1b8,*param_5,iVar1);
LAB_14378b630:
    lVar13 = lVar8;
    lVar8 = lVar13;
    if (*(longlong *)(lVar13 + 0x20) != 0) goto code_r0x00014378b63f;
    goto LAB_14378b651;
  }
LAB_14378b499:
  *param_4 = &PTR_FUN_14a5af930;
  if (param_4[4] != 0) {
    FUN_1400020a8();
  }
  *param_4 = &PTR_FUN_14a184370;
  (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[*(byte *)(param_4 + 3)])(param_4 + 1);
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x00014378b63f:
  lVar8 = *(longlong *)(lVar13 + 0x20);
  if ((*(uint *)(lVar13 + 8) >> 0x1c & 1) == 0) goto LAB_14378b630;
  lVar8 = FUN_142840154(lVar13);
LAB_14378b651:
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(lVar13 + 0x20);
    goto LAB_14378b630;
  }
  *(undefined8 *)(lVar7 + 0x1800) = *(undefined8 *)(lVar8 + 0x18);
  FUN_146074476(lVar7);
  if ((int)param_5[1] == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  else {
    puVar12 = (undefined2 *)*param_5;
  }
  FUN_140245d8a(&local_b8,0,puVar12,0);
  local_120 = local_f8;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_118 = (undefined1)plVar10[10];
  local_128 = local_108;
  lVar8 = FUN_141556b84(param_1,lVar7,2,&local_b8);
  if (lVar8 == 0) {
    local_100 = lVar7;
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    local_e8 = &local_100;
    FUN_147db0f38(plVar10 + 9);
    FUN_1459b235e(&local_e8,0x16);
    FUN_143587eda(plVar10,&local_e8);
    if (local_c0 != 0) {
      (**(code **)(local_c0 + -0x10))(local_c0 + -0x10);
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
    FUN_147a4786e(plVar10,local_f8);
    (**(code **)(*plVar10 + 0x2f8))(plVar10,1);
    FUN_1459b235e(&local_e8,0x16);
    FUN_143587ad8(plVar10,&local_e8);
    if (local_c0 != 0) {
      (**(code **)(local_c0 + -0x10))(local_c0 + -0x10);
    }
    if (local_d0 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  goto LAB_14378b499;
}



// FUNCTION 14378b862 FUN_14378b862 body=47 status=ok
// SIG undefined FUN_14378b862(void)

void FUN_14378b862(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14cb0d2b0;
  uVar2 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
  FUN_14375eea6(uVar1,uVar2,param_2);
  return;
}



// FUNCTION 14378b892 FUN_14378b892 body=60 status=ok
// SIG undefined FUN_14378b892(void)

void FUN_14378b892(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
  if (0 < *(int *)(lVar1 + 0x250)) {
    lVar1 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
    *(byte *)(lVar1 + 0x278) = *(byte *)(lVar1 + 0x278) | 1;
  }
  return;
}



// FUNCTION 14378b8ce FUN_14378b8ce body=1237 status=ok
// SIG undefined FUN_14378b8ce(void)

undefined8 FUN_14378b8ce(longlong param_1,_struct_19 *param_2)

{
  _struct_19 *p_Var1;
  longlong *plVar2;
  LARGE_INTEGER LVar3;
  char cVar4;
  int iVar5;
  BOOL BVar6;
  undefined8 uVar7;
  undefined4 extraout_var;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  _struct_19 local_c8;
  undefined4 local_c0;
  _struct_19 local_b8;
  undefined4 local_b0;
  _struct_19 local_a8;
  undefined4 local_a0;
  _struct_19 local_98;
  undefined4 local_90;
  _struct_19 local_88;
  undefined4 local_80;
  LARGE_INTEGER local_78;
  undefined8 uStack_70;
  LARGE_INTEGER local_68;
  double dStack_60;
  double local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if (((*(DWORD *)(param_1 + 0x710) != param_2->LowPart) ||
      (*(int *)(param_1 + 0x714) != param_2->HighPart)) ||
     (uVar7 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x714) >> 8),1),
     *(DWORD *)(param_1 + 0x718) != param_2[1].LowPart)) {
    cVar4 = FUN_143788e04(param_1);
    if (cVar4 == '\0') {
      p_Var1 = (_struct_19 *)(param_1 + 0x710);
      QueryPerformanceCounter(&local_68);
      dStack_60 = (double)CONCAT44(dStack_60._4_4_,param_2[1].LowPart);
      local_68.s = *param_2;
      uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(param_1 + 0x718));
      local_78.s = *p_Var1;
      FUN_147db1076(&DAT_14c8674a8,param_1,&local_78,&local_68);
      local_68 = (LARGE_INTEGER)(double)(int)(*(int *)(param_1 + 0x710) - param_2->LowPart);
      dStack_60 = (double)(*(int *)(param_1 + 0x714) - param_2->HighPart);
      local_58 = (double)(int)(*(int *)(param_1 + 0x718) - param_2[1].LowPart);
      *(LARGE_INTEGER *)(param_1 + 0x728) = local_68;
      *(double *)(param_1 + 0x730) = dStack_60;
      *(double *)(param_1 + 0x738) = local_58;
      (**(code **)(**(longlong **)(param_1 + 0x218) + 0x440))
                (*(longlong **)(param_1 + 0x218),&local_68);
      iVar5 = *(int *)(param_1 + 0x198);
      if (0 < iVar5) {
        lVar9 = 0;
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 400) + lVar9 * 8);
          if (((*(byte *)(lVar8 + 0x240) & 0x20) != 0) ||
             ((*(longlong *)(lVar8 + 0xc0) != 0 &&
              (*(longlong *)(*(longlong *)(lVar8 + 0xc0) + 0x30) == lVar8)))) {
            FUN_14355277e(lVar8,&local_68,1);
            iVar5 = *(int *)(param_1 + 0x198);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar5);
      }
      plVar2 = *(longlong **)(param_1 + 0x168);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x2d0))(plVar2,&local_68,1);
      }
      local_78.QuadPart = 0;
      uStack_70 = 0;
      local_118 = 0;
      FUN_14086ecde(param_1,&local_78,0,0);
      LVar3 = local_78;
      lVar9 = (longlong)(int)uStack_70;
      if (lVar9 != 0) {
        lVar8 = 0;
        do {
          plVar2 = *(longlong **)(LVar3.QuadPart + lVar8);
          if (plVar2 != (longlong *)0x0) {
            if (DAT_14cad00c8 == 0) {
              local_50 = FUN_144a7958c;
              local_d0 = FUN_14081d0ea;
              local_d8 = FUN_14081d0ea;
              local_e0 = &local_50;
              local_e8 = &LAB_1479b7a0c;
              local_f0 = &LAB_1463b464e;
              local_f8 = L"Engine";
              local_100 = 0;
              local_108 = 0x10000005;
              local_110 = 8;
              local_118 = 0x110;
              FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            }
            if (((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
                (*(longlong *)
                  (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
                 == DAT_14cad00c8 + 0x30)) && (plVar2[0x15] == 0)) {
              (**(code **)(*plVar2 + 0x458))(plVar2,&local_68,1);
            }
          }
          lVar8 = lVar8 + 8;
        } while (lVar9 * 8 != lVar8);
      }
      if (local_78.QuadPart != 0) {
        FUN_1400020a8(local_78.QuadPart);
      }
      plVar2 = *(longlong **)(param_1 + 0x40);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x458))(plVar2,&local_68,1);
      }
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x458))(plVar2,&local_68,1);
      }
      plVar2 = *(longlong **)(param_1 + 0x50);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x458))(plVar2,&local_68,1);
      }
      plVar2 = *(longlong **)(param_1 + 0x288);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x458))(plVar2,&local_68,1);
      }
      local_80 = *(undefined4 *)(param_1 + 0x718);
      local_88 = *p_Var1;
      *(DWORD *)(param_1 + 0x718) = param_2[1].LowPart;
      *p_Var1 = *param_2;
      *(DWORD *)(param_1 + 0x724) = param_2[1].LowPart;
      *(_struct_19 *)(param_1 + 0x71c) = *param_2;
      iVar5 = *(int *)(param_1 + 0x198);
      if (0 < iVar5) {
        lVar9 = 0;
        do {
          lVar8 = *(longlong *)(*(longlong *)(param_1 + 400) + lVar9 * 8);
          if (((*(byte *)(lVar8 + 0x240) & 0x20) != 0) &&
             (lVar8 = *(longlong *)(lVar8 + 0xf0), lVar8 != 0)) {
            local_90 = *(undefined4 *)(param_1 + 0x718);
            local_98 = *p_Var1;
            local_a8 = local_88;
            local_a0 = local_80;
            FUN_147b97d40(lVar8,&local_a8,&local_98);
            iVar5 = *(int *)(param_1 + 0x198);
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < iVar5);
      }
      if (*(longlong **)(param_1 + 0x180) != (longlong *)0x0) {
        local_b0 = *(undefined4 *)(param_1 + 0x718);
        local_b8 = *p_Var1;
        local_c8 = local_88;
        local_c0 = local_80;
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0x2a8))();
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(param_1 + 0x718));
      local_78.s = *p_Var1;
      FUN_147db1076(&DAT_14c8674c0,param_1,&local_88);
      BVar6 = QueryPerformanceCounter(&local_78);
      uVar7 = CONCAT71((int7)(CONCAT44(extraout_var,BVar6) >> 8),1);
    }
    else {
      uVar7 = 0;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14378bda4 FUN_14378bda4 body=360 status=ok
// SIG undefined FUN_14378bda4(void)

void FUN_14378bda4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    FUN_14482b126(lVar5,0x40000000);
    FUN_14472eae2(*(undefined8 *)(param_1 + 0x78),2);
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  if (*(char *)(param_1 + 0x80) != '\x01') {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) != 0) {
LAB_14378be20:
    lVar3 = lVar5;
    lVar5 = lVar3;
    if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x00014378be2f;
    goto LAB_14378be43;
  }
LAB_14378beea:
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  FUN_140113df6(param_1);
  return;
code_r0x00014378be2f:
  lVar5 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_14378be20;
  lVar5 = FUN_142840154(lVar3);
LAB_14378be43:
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar3 + 0x20);
    goto LAB_14378be20;
  }
  iVar2 = FUN_14490d72a(*(undefined8 *)(param_1 + 0x70));
  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x1f0);
  (**(code **)(*plVar6 + 0x428))(plVar6,iVar2 != 3,0);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38);
  if ((lVar3 != 0) && (iVar2 = *(int *)(lVar3 + 0x100), 0 < iVar2)) {
    lVar5 = *(longlong *)(lVar5 + 0x18);
    lVar7 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0xf8) + lVar7 * 8);
      if (plVar6 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar6 + 0x2b8))(plVar6);
        if (lVar4 != 0) {
          plVar6 = *(longlong **)(lVar4 + 0x1de8);
        }
        plVar6[0x300] = lVar5;
        FUN_146074476(plVar6);
        iVar2 = *(int *)(lVar3 + 0x100);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
  }
  goto LAB_14378beea;
}



// FUNCTION 14378bf0c FUN_14378bf0c body=220 status=ok
// SIG undefined FUN_14378bf0c(void)

void FUN_14378bf0c(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_c8 [40];
  void *local_a0;
  int local_98;
  undefined4 local_94;
  undefined1 local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(char *)(param_1 + 0x80) == '\x01') && (*(char *)(param_1 + 0x81) == '\x01')) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x1f0);
    FUN_145ad1184(local_90,param_1);
    (**(code **)(*plVar1 + 0x3a8))(plVar1,local_90);
    local_a0 = (void *)0x0;
    local_98 = *(int *)(param_1 + 0x30);
    lVar2 = (longlong)local_98;
    _Src = *(void **)(param_1 + 0x28);
    if (lVar2 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_98,0);
      memcpy(local_a0,_Src,lVar2 * 2);
    }
    FUN_145772d12(param_1,&local_a0);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14378bfe9 FUN_14378bfe9 body=69 status=ok
// SIG undefined FUN_14378bfe9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378bfe9(void)

{
  _DAT_14cb10438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378c02b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10440,1);
  return;
}



// FUNCTION 14378c02e FUN_14378c02e body=10720 status=ok
// SIG undefined FUN_14378c02e(void)

undefined8 FUN_14378c02e(undefined4 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  DWORD DVar5;
  LARGE_INTEGER LVar6;
  LARGE_INTEGER LVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  char *pcVar14;
  ulonglong uVar15;
  LARGE_INTEGER *pLVar16;
  LARGE_INTEGER *pLVar17;
  LARGE_INTEGER *pLVar18;
  ulonglong uVar19;
  undefined2 *puVar20;
  longlong lVar21;
  longlong *plVar22;
  LARGE_INTEGER LVar23;
  undefined8 uVar24;
  LARGE_INTEGER *pLVar25;
  undefined4 uVar26;
  byte bVar27;
  uint uVar28;
  longlong lVar29;
  longlong lVar30;
  LARGE_INTEGER *pLVar31;
  undefined8 *puVar32;
  LARGE_INTEGER LVar33;
  ushort uVar34;
  ushort uVar35;
  undefined7 uVar36;
  longlong *plVar37;
  longlong *plVar38;
  bool bVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_398 [32];
  undefined4 local_378;
  undefined4 local_370;
  undefined4 local_368;
  undefined8 local_360;
  wchar_t *local_358;
  undefined1 *local_350;
  undefined1 *local_348;
  LARGE_INTEGER *local_340;
  code *local_338;
  code *local_330;
  byte local_319;
  undefined4 *local_318;
  longlong *local_310;
  longlong *local_308;
  LARGE_INTEGER *local_300;
  longlong *local_2f8;
  uint local_2f0;
  undefined8 local_2e8;
  undefined4 *local_2e0;
  longlong local_2d8;
  LARGE_INTEGER *local_2d0;
  undefined4 *local_2c8;
  LARGE_INTEGER *local_2c0;
  char *local_2b8;
  char local_2ad;
  undefined4 local_2ac;
  LARGE_INTEGER local_2a8;
  LARGE_INTEGER *pLStack_2a0;
  LARGE_INTEGER local_298;
  undefined1 **local_290;
  undefined1 *local_288;
  LARGE_INTEGER *pLStack_280;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  longlong local_248;
  undefined4 local_240;
  LARGE_INTEGER local_238;
  LARGE_INTEGER LStack_230;
  LARGE_INTEGER *local_228;
  ulonglong local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  longlong lStack_1f8;
  undefined4 local_1f0;
  LARGE_INTEGER local_1e8;
  LARGE_INTEGER LStack_1e0;
  LARGE_INTEGER *local_1d8;
  uint local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  ulonglong local_1c0;
  longlong lStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  char local_190;
  undefined8 local_158;
  undefined4 local_148;
  undefined2 local_90;
  undefined1 **local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if ((*(char *)((longlong)param_1 + 0x83) == '\x01') &&
     (cVar8 = (*(code *)PTR_FUN_14c75b118)(), cVar8 == '\0')) {
    FUN_1427e390c(0,1);
    *(undefined1 *)((longlong)param_1 + 0x83) = 0;
    if ((*(char *)(param_1 + 0x20) == '\x01') &&
       (*(undefined1 *)((longlong)param_1 + 0x82) = 0, *(char *)((longlong)param_1 + 0x81) == '\x01'
       )) {
      FUN_14378bf0c(param_1);
    }
  }
  lVar21 = *(longlong *)(param_1 + 0x1c);
  lVar30 = lVar21;
  if (lVar21 == 0) {
    lVar30 = *(longlong *)(param_1 + 0x1e);
  }
  pLVar16 = *(LARGE_INTEGER **)(lVar30 + 0x38);
  bVar27 = param_1[0x26] != 0 & DAT_14cb10448;
  if ((*(longlong *)(param_1 + 0x1a) != 0) || (*(longlong *)(param_1 + 0x1e) != 0)) {
    if ((int)param_1[0x26] < 6) {
      puVar20 = &DAT_149dfb77a;
      if (*(int *)(lVar21 + 0x768) != 0) {
        puVar20 = *(undefined2 **)(lVar21 + 0x760);
      }
      lVar21 = 0;
      while( true ) {
        uVar34 = *(ushort *)((longlong)puVar20 + lVar21);
        uVar19 = (ulonglong)uVar34;
        uVar35 = *(ushort *)((longlong)&DAT_149dfb77a + lVar21);
        if (uVar34 != uVar35) break;
        if (uVar34 == 0) goto LAB_14378c0fd;
LAB_14378c1d5:
        lVar21 = lVar21 + 2;
      }
      if ((uVar35 | uVar34) < 0x80) {
        uVar34 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        uVar15 = (ulonglong)uVar35;
        uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
        if ((&DAT_149e05da0)[uVar19] == (&DAT_149e05da0)[uVar15]) goto LAB_14378c1d5;
      }
      if (uVar34 != uVar35) goto LAB_14378c739;
    }
LAB_14378c0fd:
    if (bVar27 == 0) {
      QueryPerformanceCounter(&local_1e8);
      pLStack_2a0 = (LARGE_INTEGER *)0xffffffffffffffff;
      if (*(longlong *)(param_1 + 0x1e) == 0) goto LAB_14378c339;
LAB_14378c326:
      local_2a8 = local_1e8;
      cVar8 = (*(code *)PTR_FUN_14c75b118)();
      if (cVar8 != '\0') goto LAB_14378c874;
LAB_14378c334:
      lVar21 = *(longlong *)(param_1 + 0x1e);
    }
    else {
      auVar41 = roundpd(ZEXT816(0x40f3880800000000),ZEXT816(0x40f3880800000000),1);
      QueryPerformanceCounter(&local_1e8);
      local_2a8 = local_1e8;
      pLStack_2a0 = (LARGE_INTEGER *)0xffffffffffffffff;
      if ((longlong)auVar41._0_8_ != 0x7fffffffffffffff) {
        dVar40 = (double)(longlong)auVar41._0_8_ / 10000000.0;
        if (dVar40 <= 0.0) {
          pLStack_2a0 = (LARGE_INTEGER *)0x0;
        }
        else {
          dVar40 = dVar40 / DAT_14c83f418;
          uVar19 = (ulonglong)dVar40;
          pLStack_2a0 = (LARGE_INTEGER *)
                        ((longlong)(dVar40 - 9.223372036854776e+18) & (longlong)uVar19 >> 0x3f |
                        uVar19);
        }
      }
      lVar21 = *(longlong *)(param_1 + 0x1e);
      if (lVar21 != 0) {
        if (param_1[0x26] != 0xd) goto LAB_14378c326;
        FUN_143788d76(lVar21);
        local_1e8 = local_2a8;
        LStack_1e0.QuadPart = (LONGLONG)pLStack_2a0;
        local_1d8 = (LARGE_INTEGER *)CONCAT71(local_1d8._1_7_,1);
        FUN_141690028(lVar21);
        cVar8 = FUN_143788e04(lVar21);
        if (cVar8 == '\0') {
          if ((longlong)*(int *)(lVar21 + 0xa0) != 0) {
            *(int *)(lVar21 + 0xb8) = *(int *)(lVar21 + 0xb8) + 1;
            lVar30 = 0;
            do {
              iVar10 = *(int *)(*(longlong *)(*(longlong *)(lVar21 + 0x98) + lVar30) + 0x100);
              if (iVar10 != 0) break;
              bVar39 = (longlong)*(int *)(lVar21 + 0xa0) * 8 + -8 != lVar30;
              lVar30 = lVar30 + 8;
            } while (bVar39);
            FUN_1404601ea(lVar21 + 0x98);
            if (iVar10 != 0) goto LAB_14378c874;
          }
          if ((param_1[0x26] != 0) &&
             (iVar10 = param_1[0x26] + 1, param_1[0x26] = iVar10, iVar10 == 0xf)) {
            FUN_140113df6(param_1);
          }
          *(undefined1 *)(param_1 + 0x20) = 0;
          goto LAB_14378c334;
        }
        goto LAB_14378c874;
      }
LAB_14378c339:
      lVar21 = 0;
      local_2a8 = local_1e8;
    }
    plVar38 = (longlong *)(param_1 + 0x1e);
    if (*(longlong *)(param_1 + 0x1c) == lVar21) {
      FUN_140002266(&local_1e8,L"Travel aborted - new world is the same as current world");
      FUN_14378bda4(param_1);
    }
    else {
      if ((lVar21 != 0) && (*(longlong *)(lVar21 + 0x30) != 0)) {
        uVar12 = param_1[0x26];
        local_318 = param_1;
        if (uVar12 < 2) {
          FUN_143786ce4(*(longlong *)(param_1 + 0x1c),2);
          if (*(char *)((longlong)param_1 + 0x81) == '\x01') {
            FUN_14378ea10(*plVar38,*(undefined8 *)(*(longlong *)(*plVar38 + 0x20) + 0x18));
          }
          lVar21 = *(longlong *)(param_1 + 0x1c);
          plVar22 = *(longlong **)(lVar21 + 0x178);
          local_300 = pLVar16;
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 0x680))
                      (plVar22,CONCAT71((int7)((ulonglong)lVar21 >> 8),
                                        *(undefined1 *)((longlong)param_1 + 0x81)) ^ 1);
            lVar21 = *(longlong *)(param_1 + 0x1c);
          }
          *(byte *)(lVar21 + 0x155) = *(byte *)(lVar21 + 0x155) | 0x20;
          FUN_1409f3758(&DAT_14cb10ae8);
          FUN_14107e8f0(&DAT_14cb103a8,*(undefined8 *)(param_1 + 0x1c));
          uVar24 = 0;
          plVar22 = (longlong *)FUN_14001cc68(0xa0,0x10);
          FUN_147db12a6(plVar22);
          if (plVar22 == (longlong *)0x0) {
            local_310 = (longlong *)(param_1 + 0x28);
            *(undefined8 *)(param_1 + 0x28) = 0x10;
            plVar37 = *(longlong **)(param_1 + 0x2a);
            if (plVar37 != (longlong *)0x0) {
              *(undefined8 *)(param_1 + 0x2a) = 0;
LAB_14378ca60:
              local_310 = (longlong *)(param_1 + 0x28);
              LOCK();
              plVar1 = plVar37 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar37)(plVar37);
                LOCK();
                piVar2 = (int *)((longlong)plVar37 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar37 + 0x10))(plVar37);
                }
              }
              if (plVar22 != (longlong *)0x0) goto LAB_14378de20;
            }
          }
          else {
            LOCK();
            *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
            UNLOCK();
            local_310 = (longlong *)(param_1 + 0x28);
            *(longlong **)(param_1 + 0x28) = plVar22 + 2;
            plVar37 = *(longlong **)(param_1 + 0x2a);
            if (plVar22 == plVar37) {
              LOCK();
              plVar37 = plVar22 + 1;
              *(int *)plVar37 = (int)*plVar37 + -1;
              UNLOCK();
              if ((int)*plVar37 == 0) {
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
            else {
              *(longlong **)(param_1 + 0x2a) = plVar22;
              if (plVar37 != (longlong *)0x0) goto LAB_14378ca60;
            }
LAB_14378de20:
            LOCK();
            plVar37 = plVar22 + 1;
            *(int *)plVar37 = (int)*plVar37 + -1;
            UNLOCK();
            if ((int)*plVar37 == 0) {
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
          lVar21 = *(longlong *)(param_1 + 0x1c);
          lVar30 = *(longlong *)(param_1 + 0x28);
          plVar22 = *(longlong **)(lVar21 + 0x170);
          if (plVar22 != (longlong *)0x0) {
            (**(code **)(*plVar22 + 0x718))
                      (plVar22,CONCAT71((int7)((ulonglong)uVar24 >> 8),
                                        *(undefined1 *)((longlong)param_1 + 0x81)) ^ 1,
                       param_1 + 0x2c);
            lVar21 = *(longlong *)(param_1 + 0x1c);
          }
          iVar10 = FUN_14490d72a(lVar21);
          if (iVar10 == 3) {
            pLVar25 = &local_1e8;
            FUN_14375df50(DAT_14cb0d2b0,pLVar25,*(undefined8 *)(param_1 + 0x1c));
            LVar23 = local_1e8;
            pLVar16 = (LARGE_INTEGER *)(longlong)(int)LStack_1e0.s.LowPart;
            if (-1 < (longlong)pLVar16) {
              uVar12 = (((LARGE_INTEGER *)(local_1e8.QuadPart + 8))->s).LowPart;
              pLVar18 = (LARGE_INTEGER *)(ulonglong)uVar12;
              if ((int)LStack_1e0._0_4_ < (int)uVar12) {
                pLVar17 = pLVar16;
                uVar26 = LStack_1e0.s.LowPart;
                if (*(longlong *)(*(ulonglong *)local_1e8 + (longlong)pLVar16 * 8) == 0) {
                  do {
                    uVar28 = (int)pLVar17 + 1;
                    pLVar25 = (LARGE_INTEGER *)(ulonglong)uVar28;
                    pLVar31 = pLVar18;
                    if ((int)uVar12 <= (int)uVar28) goto LAB_14378e683;
                    pLVar16 = (LARGE_INTEGER *)((longlong)pLVar17 + 1);
                    lVar21 = (longlong)pLVar17 * 8;
                    pLVar17 = pLVar16;
                  } while (*(longlong *)(*(ulonglong *)local_1e8 + 8 + lVar21) == 0);
                  uVar26 = (uint)pLVar16;
                }
                pLVar18 = (LARGE_INTEGER *)((ulonglong)pLVar16 & 0xffffffff);
                pLVar25 = pLVar16;
                pLVar31 = (LARGE_INTEGER *)(ulonglong)(uint)uVar26;
LAB_14378e683:
                pLVar16 = pLVar18;
                if ((int)pLVar18 < 0) goto LAB_14378e713;
              }
              else {
                pLVar31 = (LARGE_INTEGER *)(LStack_1e0.QuadPart & 0xffffffff);
              }
              while (uVar12 = (uint)pLVar16,
                    (int)uVar12 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 8))->s).LowPart) {
                lVar21 = *(longlong *)
                          (*(longlong *)
                            (*(ulonglong *)LVar23 + ((ulonglong)pLVar16 & 0xffffffff) * 8) + 0x30);
                pLVar25 = (LARGE_INTEGER *)0x0;
                if (lVar21 != 0) {
                  local_238.s.LowPart._0_1_ = 1;
                  FUN_145d252ee(lVar30,lVar21,&local_238);
                  uVar12 = (uint)pLVar31;
                  plVar22 = *(longlong **)
                             (*(longlong *)(*(ulonglong *)LVar23 + (longlong)(int)uVar12 * 8) + 0x30
                             );
                  pLVar25 = (LARGE_INTEGER *)
                            (CONCAT71((int7)((ulonglong)lVar21 >> 8),
                                      *(undefined1 *)((longlong)param_1 + 0x81)) ^ 1);
                  (**(code **)(*plVar22 + 0xbd8))(plVar22,pLVar25,param_1 + 0x2c);
                }
                pLVar31 = (LARGE_INTEGER *)(ulonglong)uVar12;
                do {
                  if ((int)uVar12 < -1) goto LAB_14378e713;
                  iVar10 = (int)pLVar31;
                  uVar28 = iVar10 + 1;
                  pLVar31 = (LARGE_INTEGER *)(ulonglong)uVar28;
                  if ((int)(((LARGE_INTEGER *)(LVar23.QuadPart + 8))->s).LowPart <= (int)uVar28)
                  break;
                  pLVar25 = *(LARGE_INTEGER **)LVar23;
                } while (pLVar25[uVar28].QuadPart == 0);
                pLVar16 = (LARGE_INTEGER *)(ulonglong)uVar28;
                if (iVar10 < -1) break;
              }
            }
LAB_14378e713:
            plVar22 = *(longlong **)(*(longlong *)(param_1 + 0x1c) + 0x1f0);
            if (plVar22 != (longlong *)0x0) {
              (**(code **)(*plVar22 + 0x460))
                        (plVar22,CONCAT71((int7)((ulonglong)pLVar25 >> 8),
                                          *(undefined1 *)((longlong)local_318 + 0x81)) ^ 1,
                         local_318 + 0x2c);
            }
          }
          else {
            lVar21 = *(longlong *)(param_1 + 0x1c);
            if (0 < *(int *)(lVar21 + 0x228)) {
              puVar3 = local_318 + 0x2c;
              lVar29 = 0;
              do {
                iVar10 = *(int *)(*(longlong *)(lVar21 + 0x220) + 4 + lVar29 * 8);
                if ((((iVar10 != 0) &&
                     (uVar12 = *(uint *)(*(longlong *)(lVar21 + 0x220) + lVar29 * 8),
                     -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)) &&
                   (((plVar22 = (longlong *)
                                ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                                DAT_14c9647c8[uVar12 >> 0x10]), plVar22 != (longlong *)0x0 &&
                     ((int)plVar22[2] == iVar10)) &&
                    (((*(uint *)(plVar22 + 1) & 0x10200000) == 0 &&
                     ((plVar22 = (longlong *)*plVar22, plVar22 != (longlong *)0x0 &&
                      (cVar8 = (**(code **)(*plVar22 + 0x770))(plVar22), cVar8 != '\0')))))))) {
                  local_1e8.s.LowPart._0_1_ = 1;
                  FUN_145d252ee(lVar30,plVar22,&local_1e8);
                  if (DAT_14caf9cd0 == 0) {
                    local_1e8.QuadPart = (LONGLONG)FUN_141030f22;
                    local_330 = FUN_14081d0ea;
                    local_338 = (code *)&LAB_1463c0cc2;
                    local_348 = &LAB_147c9db5b;
                    local_350 = &LAB_1463f9c44;
                    local_358 = L"Game";
                    local_360 = 0x2000000000;
                    local_368 = 0x10000004;
                    local_370 = 8;
                    local_378 = 0x958;
                    local_340 = &local_1e8;
                    FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22
                                 );
                  }
                  iVar10 = *(int *)(DAT_14caf9cd0 + 0x38);
                  if ((iVar10 <= *(int *)(plVar22[2] + 0x38)) &&
                     (*(longlong *)(*(longlong *)(plVar22[2] + 0x30) + (longlong)iVar10 * 8) ==
                      DAT_14caf9cd0 + 0x30)) {
                    (**(code **)(*plVar22 + 0xbd8))
                              (plVar22,CONCAT71((int7)(int3)((uint)iVar10 >> 8),
                                                *(undefined1 *)((longlong)local_318 + 0x81)) ^ 1,
                               puVar3);
                  }
                }
                lVar29 = lVar29 + 1;
              } while ((int)lVar29 < *(int *)(lVar21 + 0x228));
            }
          }
          param_1 = local_318;
          iVar10 = local_318[0x2e];
          if ((longlong)iVar10 != 0) {
            lVar21 = *(longlong *)(local_318 + 0x2c);
            lVar29 = 0;
            do {
              if (*(longlong *)(lVar21 + lVar29) != 0) {
                local_1e8.s.LowPart._0_1_ = 1;
                FUN_145d252ee(lVar30,*(longlong *)(lVar21 + lVar29),&local_1e8);
              }
              lVar29 = lVar29 + 8;
            } while ((longlong)iVar10 * 8 != lVar29);
          }
          iVar10 = *(int *)(lVar30 + 0x10) - *(int *)(lVar30 + 0x3c);
          if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar10);
          }
          if ((int)param_1[0x33] < iVar10) {
            FUN_1456cf384(param_1 + 0x30);
          }
          pLVar16 = local_300;
          if (param_1[0x26] == 0) {
            lVar21 = *local_310;
          }
          else {
            uVar12 = param_1[0x26] + 1;
            param_1[0x26] = uVar12;
            if (uVar12 == 0xf) {
              FUN_140113df6(param_1);
              uVar12 = param_1[0x26];
            }
            if (uVar12 != 0) {
              if (pLStack_2a0 != (LARGE_INTEGER *)0xffffffffffffffff) {
                if ((pLStack_2a0 == (LARGE_INTEGER *)0x0) ||
                   (QueryPerformanceCounter(&local_1e8),
                   (ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart) < (ulonglong)local_1e8))
                goto LAB_14378c874;
                uVar12 = param_1[0x26];
                if (uVar12 == 0) goto LAB_14378e83f;
              }
              goto LAB_14378c374;
            }
LAB_14378e83f:
            lVar21 = *(longlong *)(param_1 + 0x28);
          }
          local_2ac = 0xffffffff;
          local_2e0 = param_1;
          local_2d0 = pLVar16;
LAB_14378c3d5:
          local_2b8 = &local_2ad;
          local_2c0 = &local_2a8;
          local_2c8 = &local_2ac;
          local_2ad = '\0';
          puVar32 = (undefined8 *)0x0;
          local_319 = bVar27;
          local_308 = plVar38;
          local_300 = local_2d0;
          local_2d8 = lVar21;
          FUN_1405f0e9c(&local_1e8,*(undefined8 *)(local_2e0 + 0x1c),5);
          if (local_1c8._4_1_ == '\0') {
            do {
              lVar30 = lStack_1b8;
              if (DAT_14caf9cd0 == 0) {
                local_238.QuadPart = (LONGLONG)FUN_141030f22;
                local_330 = FUN_14081d0ea;
                local_338 = (code *)&LAB_1463c0cc2;
                local_340 = &local_238;
                local_348 = &LAB_147c9db5b;
                local_350 = &LAB_1463f9c44;
                local_358 = L"Game";
                local_360 = 0x2000000000;
                local_368 = 0x10000004;
                local_370 = 8;
                local_378 = 0x958;
                puVar32 = &DAT_14caf9cd0;
                FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
              }
              lVar29 = *(longlong *)(lVar30 + 0x10);
              if ((*(int *)(lVar29 + 0x38) < *(int *)(DAT_14caf9cd0 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar29 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) !=
                  DAT_14caf9cd0 + 0x30)) {
                FUN_14378ebb6(&local_2e0,lVar30);
              }
              if (local_2ad != '\0') {
                if (local_190 == '\x01') {
                  FUN_14024445c(&LStack_1e0);
                }
                goto LAB_14378c874;
              }
              FUN_14059e512(&local_1e8);
            } while (local_1c8._4_1_ == '\0');
          }
          if (local_190 == '\x01') {
            FUN_14024445c(&LStack_1e0);
          }
          pLVar16 = local_300;
          plVar38 = local_308;
          param_1 = local_318;
          lVar30 = *(longlong *)(local_318 + 0x1c);
          if (0 < *(int *)(lVar30 + 0x238)) {
            lVar29 = 0;
            do {
              iVar10 = *(int *)(*(longlong *)(lVar30 + 0x230) + 4 + lVar29 * 8);
              if ((((((iVar10 != 0) &&
                     (uVar12 = *(uint *)(*(longlong *)(lVar30 + 0x230) + lVar29 * 8),
                     -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)) &&
                   ((plVar22 = (longlong *)
                               ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                               DAT_14c9647c8[uVar12 >> 0x10]), puVar32 = DAT_14c9647c8,
                    plVar22 != (longlong *)0x0 && ((int)plVar22[2] == iVar10)))) &&
                  ((*(uint *)(plVar22 + 1) & 0x10200000) == 0)) && (*plVar22 != 0)) {
                FUN_14378ebb6(&local_2e0);
              }
              if (local_2ad != '\0') goto LAB_14378c874;
              lVar29 = lVar29 + 1;
            } while ((int)lVar29 < *(int *)(lVar30 + 0x238));
          }
          if (pLVar16 != (LARGE_INTEGER *)0x0) {
            FUN_14620703c(pLVar16);
          }
          iVar11 = FUN_14490d72a(*(undefined8 *)(param_1 + 0x1c));
          *(bool *)(param_1 + 0x4c) = iVar11 != 3;
          iVar10 = param_1[0x32];
          if ((longlong)iVar10 != 0) {
            lVar30 = *(longlong *)(param_1 + 0x30);
            local_2f8 = (longlong *)(param_1 + 0x34);
            lVar29 = 0;
            local_310 = (longlong *)0x0;
            plVar22 = (longlong *)0x0;
            do {
              plVar37 = *(longlong **)(lVar30 + lVar29);
              FUN_1408bb83a(lVar21,plVar37);
              (**(code **)(*plVar37 + 0x5b8))
                        (plVar37,CONCAT71((int7)((ulonglong)plVar38 >> 8),iVar11 != 3) & 0xffffffff,
                         CONCAT71((int7)((ulonglong)puVar32 >> 8),
                                  *(undefined1 *)((longlong)local_318 + 0x81)) ^ 1);
              if (plVar37 == (longlong *)0x0) {
LAB_14378c586:
                lVar13 = FUN_14117928e();
                if ((*(int *)(plVar37[2] + 0x38) < *(int *)(lVar13 + 0x38)) ||
                   (plVar38 = plVar37,
                   *(longlong *)
                    (*(longlong *)(plVar37[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
                   lVar13 + 0x30)) {
                  lVar13 = FUN_1413e9348();
                  plVar38 = local_310;
                  if ((*(int *)(lVar13 + 0x38) <= *(int *)(plVar37[2] + 0x38)) &&
                     (*(longlong *)
                       (*(longlong *)(plVar37[2] + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
                      lVar13 + 0x30)) {
                    plVar22 = plVar37;
                  }
                }
              }
              else {
                if (DAT_14cad3ae0 == 0) {
                  local_1e8.QuadPart = (LONGLONG)FUN_141030f22;
                  local_330 = FUN_14081d0ea;
                  local_338 = FUN_142b4754c;
                  local_340 = &local_1e8;
                  local_348 = &LAB_147a36475;
                  local_350 = &LAB_1463c0cc7;
                  local_358 = L"Engine";
                  local_360 = 0;
                  local_368 = 0x10000005;
                  local_370 = 8;
                  local_378 = 0x428;
                  FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
                }
                puVar3 = local_318;
                if ((*(int *)(plVar37[2] + 0x38) < *(int *)(DAT_14cad3ae0 + 0x38)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar37[2] + 0x30) +
                     (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) != DAT_14cad3ae0 + 0x30))
                goto LAB_14378c586;
                FUN_145a00b82(*(undefined8 *)(local_318 + 0x1c),plVar37);
                iVar4 = puVar3[0x36];
                uVar12 = iVar4 + 1;
                puVar3[0x36] = uVar12;
                if ((uint)puVar3[0x37] < uVar12) {
                  FUN_14095e928(local_2f8);
                }
                *(longlong **)(*local_2f8 + (longlong)iVar4 * 8) = plVar37;
                plVar38 = local_310;
              }
              local_310 = plVar38;
              plVar38 = local_308;
              puVar32 = *(undefined8 **)(*local_308 + 0x30);
              (**(code **)(*plVar37 + 0x170))(plVar37,0,puVar32,0);
              pLVar16 = local_300;
              plVar1 = local_310;
              param_1 = local_318;
              *(byte *)((longlong)plVar37 + 99) = *(byte *)((longlong)plVar37 + 99) | 4;
              lVar29 = lVar29 + 8;
            } while ((longlong)iVar10 * 8 != lVar29);
            if (local_310 != (longlong *)0x0) {
              lVar21 = *plVar38;
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(local_310);
              }
              *(longlong **)(lVar21 + 0x170) = plVar1;
              FUN_145ae2e96(lVar21,plVar22);
              *(undefined1 *)(param_1 + 0x4c) = 0;
            }
          }
          FUN_146249cc2(param_1);
          (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x1c) + 0x1f0) + 0x428))
                    (*(longlong **)(*(longlong *)(param_1 + 0x1c) + 0x1f0),
                     CONCAT71((int7)((ulonglong)lVar21 >> 8),iVar11 != 3) & 0xffffffff,
                     CONCAT71((int7)((ulonglong)puVar32 >> 8),
                              *(undefined1 *)((longlong)param_1 + 0x81)) ^ 1);
          FUN_1405f0e42(*(undefined8 *)(param_1 + 0x1c),0);
          bVar27 = local_319;
          if (param_1[0x26] != 0) {
            iVar10 = param_1[0x26] + 1;
            param_1[0x26] = iVar10;
            if (iVar10 == 0xf) {
              FUN_140113df6(param_1);
              iVar10 = param_1[0x26];
            }
            if (((iVar10 != 0) && (pLStack_2a0 != (LARGE_INTEGER *)0xffffffffffffffff)) &&
               ((pLStack_2a0 == (LARGE_INTEGER *)0x0 ||
                (QueryPerformanceCounter(&local_1e8),
                (ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart) < (ulonglong)local_1e8))))
            goto LAB_14378c874;
          }
        }
        else {
LAB_14378c374:
          local_2c8 = &local_2ac;
          local_2ac = 0xf;
          local_2b8 = &local_2ad;
          local_2ad = '\0';
          lVar21 = *(longlong *)(param_1 + 0x28);
          local_2c0 = &local_2a8;
          local_2e0 = param_1;
          local_2d8 = lVar21;
          local_2d0 = pLVar16;
          if (uVar12 == 2) goto LAB_14378c3d5;
        }
        if (bVar27 != 0) {
          iVar10 = param_1[0x26];
          if (5 < iVar10 || iVar10 == 0) goto LAB_14378cc73;
          cVar8 = FUN_147dab3e0(*(undefined8 *)(param_1 + 0x1c),param_1,
                                *(undefined1 *)((longlong)param_1 + 0x81),&local_2a8);
          if (cVar8 != '\0') {
            DAT_14c7614c8 = 0;
            uVar12 = *(uint *)(*(longlong *)(param_1 + 0x1c) + 0xc);
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar21 = (ulonglong)((uVar12 & 0xffff) * 0x18) + DAT_14c9647c8[uVar12 >> 0x10];
            }
            else {
              lVar21 = 0;
            }
            FUN_14482b126(lVar21,0x40000000);
            FUN_14472eae2(*(undefined8 *)(param_1 + 0x1c),2);
            if (param_1[0x26] != 0) {
              if ((pLStack_2a0 == (LARGE_INTEGER *)0xffffffffffffffff) ||
                 ((pLStack_2a0 != (LARGE_INTEGER *)0x0 &&
                  (QueryPerformanceCounter(&local_1e8),
                  (ulonglong)local_1e8 <= (ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart))))
                 ) goto LAB_14378cc6c;
              goto LAB_14378c874;
            }
            goto LAB_14378cc80;
          }
          goto LAB_14378c874;
        }
        lVar21 = 0;
        FUN_140e511ae(*(undefined8 *)(param_1 + 0x1c),*(undefined1 *)((longlong)param_1 + 0x81),1,0)
        ;
        uVar12 = *(uint *)(*(longlong *)(param_1 + 0x1c) + 0xc);
        if ((int)uVar12 < DAT_14c9647dc) {
          lVar21 = (ulonglong)((uVar12 & 0xffff) * 0x18) + DAT_14c9647c8[uVar12 >> 0x10];
        }
        FUN_14482b126(lVar21,0x40000000);
        FUN_14472eae2(*(undefined8 *)(param_1 + 0x1c),2);
LAB_14378cc6c:
        iVar10 = param_1[0x26];
LAB_14378cc73:
        if ((iVar10 == 6) || (iVar10 == 0)) {
LAB_14378cc80:
          lVar21 = *(longlong *)(param_1 + 0x1c);
          lVar30 = *(longlong *)(lVar21 + 0x1d8);
          if ((lVar30 != 0) ||
             ((((DAT_14cb0d2b0 != (longlong *)0x0 && (DAT_14cb0d2b0[0x1ea] != 0)) &&
               (param_1 = local_318, DAT_14cb0d2b0[0x1ec] != 0)) &&
              (lVar30 = *(longlong *)(DAT_14cb0d2b0[0x1ea] + 0x98), lVar30 != 0)))) {
            FUN_1433ff8e6(lVar30,lVar21,1);
            lVar21 = *(longlong *)(param_1 + 0x1c);
          }
          if (*(longlong *)(lVar21 + 0x58) == 0) {
            bVar9 = 0;
          }
          else {
            bVar9 = (byte)(*(uint *)(*(longlong *)(lVar21 + 0x58) + 0x3b4) >> 1) & 1;
          }
          *(byte *)((longlong)param_1 + 0x131) = bVar9;
          uVar12 = *(uint *)(*(longlong *)(param_1 + 0x1e) + 0xc);
          if ((int)uVar12 < DAT_14c9647dc) {
            lVar21 = (ulonglong)((uVar12 & 0xffff) * 0x18) + DAT_14c9647c8[uVar12 >> 0x10];
          }
          else {
            lVar21 = 0;
          }
          FUN_1447f71cc(lVar21,0x40000000);
          pcVar14 = (char *)FUN_1405e677a(DAT_14cb0d2b0,*(undefined8 *)(param_1 + 0x1c));
          FUN_14572aa80(pcVar14,*(undefined8 *)(param_1 + 0x1e));
          cVar8 = *pcVar14;
          *(char *)(*(longlong *)(param_1 + 0x1e) + 0x152) = cVar8;
          plVar22 = plVar38;
          if (cVar8 == '\x03') {
            do {
              lVar21 = *plVar22;
              do {
                lVar30 = lVar21;
                lVar21 = lVar30;
                if (*(longlong *)(lVar30 + 0x20) == 0) goto LAB_14378cd61;
                lVar21 = *(longlong *)(lVar30 + 0x20);
              } while ((*(uint *)(lVar30 + 8) >> 0x1c & 1) == 0);
              lVar21 = FUN_142840154(lVar30);
LAB_14378cd61:
              plVar22 = (longlong *)(lVar30 + 0x20);
            } while (lVar21 == 0);
            *(byte *)(lVar21 + 0x2e) = *(byte *)(lVar21 + 0x2e) | 0x10;
          }
          if ((pLVar16 != (LARGE_INTEGER *)0x0) &&
             ((**(code **)(pLVar16->QuadPart + 0x3e0))(pLVar16),
             *(longlong *)(*plVar38 + 0x170) != 0)) {
            FUN_14628d426();
          }
          DAT_14cb10918 = 0;
          lVar21 = *(longlong *)(param_1 + 0x1c);
          iVar10 = *(int *)(lVar21 + 0x198);
          if (0 < iVar10) {
            lVar30 = 0;
            do {
              lVar29 = *(longlong *)(*(longlong *)(lVar21 + 400) + lVar30 * 8);
              if ((lVar29 != 0) && ((*(byte *)(*(longlong *)(lVar29 + 0x20) + 0x788) & 1) == 0)) {
                FUN_14640e252();
                iVar10 = *(int *)(lVar21 + 0x198);
              }
              lVar30 = lVar30 + 1;
            } while ((int)lVar30 < iVar10);
            lVar21 = *(longlong *)(param_1 + 0x1c);
          }
          iVar10 = *(int *)(lVar21 + 0x90);
          if ((longlong)iVar10 != 0) {
            lVar21 = *(longlong *)(lVar21 + 0x88);
            lVar30 = 0;
            do {
              lVar29 = *(longlong *)(*(longlong *)(lVar21 + lVar30) + 0x178);
              if ((lVar29 != 0) && ((*(byte *)(*(longlong *)(lVar29 + 0x20) + 0x788) & 1) == 0)) {
                FUN_14640e252();
              }
              lVar30 = lVar30 + 8;
            } while ((longlong)iVar10 * 8 != lVar30);
          }
          *(undefined8 *)(param_1 + 0x1c) = 0;
          if (DAT_14c951760 == '\0') {
            uStack_218 = 0;
            local_210 = 0;
            local_238.QuadPart = 0;
            LStack_230.QuadPart = 0;
            uStack_20c = 0x80;
            uStack_208 = 0xffffffff;
            uStack_204 = 0;
            lStack_1f8 = 0;
            local_1f0 = 0;
            iVar10 = param_1[0x32];
            if ((longlong)iVar10 != 0) {
              lVar21 = *(longlong *)(local_318 + 0x30);
              lVar30 = 0;
              local_319 = bVar27;
              local_308 = plVar38;
              local_300 = pLVar16;
              do {
                uVar24 = *(undefined8 *)(lVar21 + lVar30);
                local_268 = 0;
                local_260 = 0;
                local_288 = (undefined1 *)0x0;
                pLStack_280 = (LARGE_INTEGER *)0x0;
                local_25c = 0xffffffff00000080;
                local_254 = 0;
                local_248 = 0;
                local_240 = 0;
                FUN_147dae79e(&local_288,&local_238);
                FUN_147d88e0e(&local_1e8);
                local_90 = 0;
                local_148 = 0;
                local_1c0 = local_1c0 & 0xffffffffff9bffff | 0x6600000;
                local_1e8.QuadPart = (LONGLONG)&PTR_FUN_14ab092a0;
                local_158 = uVar24;
                local_88 = &local_288;
                FUN_147dae890(&local_1e8);
                FUN_147d8229a(&local_1e8);
                local_298.QuadPart = (LONGLONG)FUN_143794b76;
                LStack_1e0.QuadPart = (LONGLONG)&local_298;
                local_1e8.QuadPart = (LONGLONG)FUN_1449cc908;
                local_378 = 0x200000;
                local_290 = &local_288;
                FUN_14482c30e(uVar24,&local_1e8,1,0);
                local_240 = 0;
                if (local_248 != 0) {
                  FUN_1400020a8();
                }
                FUN_1401be51a(&local_288);
                pLVar16 = local_300;
                plVar38 = local_308;
                bVar27 = local_319;
                lVar30 = lVar30 + 8;
              } while ((longlong)iVar10 * 8 != lVar30);
              local_1f0 = 0;
              if (lStack_1f8 != 0) {
                FUN_1400020a8();
              }
            }
            FUN_1401be51a(&local_238);
            param_1 = local_318;
          }
          if (param_1[0x26] != 0) {
            iVar10 = param_1[0x26] + 1;
            param_1[0x26] = iVar10;
            if (iVar10 == 0xf) {
              FUN_140113df6(param_1);
              iVar10 = param_1[0x26];
            }
            if (((iVar10 != 0) && (pLStack_2a0 != (LARGE_INTEGER *)0xffffffffffffffff)) &&
               ((pLStack_2a0 == (LARGE_INTEGER *)0x0 ||
                (QueryPerformanceCounter(&local_1e8),
                (ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart) < (ulonglong)local_1e8))))
            goto LAB_14378c874;
          }
        }
        if (bVar27 != 0) {
          uVar12 = param_1[0x26];
          if ((uVar12 != 7) && (uVar12 != 0)) goto LAB_14378d17f;
          uVar26 = (undefined4)((ulonglong)pLStack_2a0 >> 0x20);
          if ((DAT_14c949801 & 1) == 0) {
            if (*(char *)((longlong)param_1 + 0x132) == '\0') {
              if ((DAT_14c950c00 & 1) == 0) {
                DAT_14c7614c8 = 1;
                FUN_1427e390c(0,0);
                *(undefined1 *)((longlong)param_1 + 0x132) = 1;
                goto LAB_14378c874;
              }
LAB_14378d499:
              if (pLStack_2a0 == (LARGE_INTEGER *)0xffffffffffffffff) {
                uVar26 = 0xffffffff;
              }
              else {
                auVar44._8_4_ = uVar26;
                auVar44._0_8_ = pLStack_2a0;
                auVar44._12_4_ = 0x45300000;
                dVar40 = (((double)CONCAT44(0x43300000,(int)pLStack_2a0) - 4503599627370496.0) +
                         (auVar44._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
                QueryPerformanceCounter(&local_1e8);
                lVar21 = local_1e8.QuadPart - (longlong)local_2a8;
                auVar41._8_4_ = (int)((ulonglong)lVar21 >> 0x20);
                auVar41._0_8_ = lVar21;
                auVar41._12_4_ = 0x45300000;
                uVar26 = SUB84(dVar40 - (((double)CONCAT44(0x43300000,(int)lVar21) -
                                         4503599627370496.0) +
                                        (auVar41._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418,0)
                ;
              }
              FUN_1427e28e4(1,uVar26);
              goto LAB_14378c874;
            }
            if ((DAT_14c950c00 & 1) != 0) goto LAB_14378d0f3;
          }
          else {
            if (*(char *)((longlong)param_1 + 0x132) == '\0') goto LAB_14378d499;
LAB_14378d0f3:
            if (pLStack_2a0 == (LARGE_INTEGER *)0xffffffffffffffff) {
              uVar26 = 0xffffffff;
            }
            else {
              auVar43._8_4_ = uVar26;
              auVar43._0_8_ = pLStack_2a0;
              auVar43._12_4_ = 0x45300000;
              dVar40 = (((double)CONCAT44(0x43300000,(int)pLStack_2a0) - 4503599627370496.0) +
                       (auVar43._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418;
              QueryPerformanceCounter(&local_1e8);
              lVar21 = local_1e8.QuadPart - (longlong)local_2a8;
              auVar42._8_4_ = (int)((ulonglong)lVar21 >> 0x20);
              auVar42._0_8_ = lVar21;
              auVar42._12_4_ = 0x45300000;
              uVar26 = SUB84(dVar40 - (((double)CONCAT44(0x43300000,(int)lVar21) -
                                       4503599627370496.0) +
                                      (auVar42._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418,0);
            }
            FUN_1427e28e4(1,uVar26);
          }
          if (((DAT_14c949801 & 1) == 0) && ((DAT_14c950c00 & 1) == 0)) {
            if (param_1[0x26] != 0) {
              iVar10 = param_1[0x26] + 1;
              param_1[0x26] = iVar10;
              if (iVar10 == 0xf) {
                FUN_140113df6(param_1);
                iVar10 = param_1[0x26];
              }
              if (((iVar10 == 0) || (pLStack_2a0 == (LARGE_INTEGER *)0xffffffffffffffff)) ||
                 ((pLStack_2a0 != (LARGE_INTEGER *)0x0 &&
                  (QueryPerformanceCounter(&local_1e8),
                  (ulonglong)local_1e8 <= (ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart))))
                 ) goto LAB_14378d178;
              goto LAB_14378c874;
            }
            goto LAB_14378dc0a;
          }
LAB_14378c874:
          uVar24 = 0;
          goto LAB_14378c876;
        }
        FUN_1427e390c(0,1);
LAB_14378d178:
        uVar12 = param_1[0x26];
LAB_14378d17f:
        if ((uVar12 & 0xfffffff7) == 0) {
LAB_14378dc0a:
          FUN_1405e677a(DAT_14cb0d2b0,*plVar38);
          if (pLVar16 != (LARGE_INTEGER *)0x0) {
            (**(code **)(pLVar16->QuadPart + 0x3c8))(pLVar16);
            FUN_14576e8de(pLVar16[0x10b].QuadPart);
          }
          DAT_14cb10918 = *plVar38;
          if ((*(byte *)(DAT_14cb10918 + 0x153) & 0x40) == 0) {
            local_2f0 = local_2f0 & 0xffff8000 | 0x167f;
            local_2e8 = 0;
            FUN_14572bbfc();
          }
          iVar10 = param_1[0x36];
          if ((longlong)iVar10 != 0) {
            lVar21 = *(longlong *)(param_1 + 0x34);
            lVar30 = 0;
            do {
              FUN_145ac4650(*plVar38,*(undefined8 *)(lVar21 + lVar30));
              lVar30 = lVar30 + 8;
            } while ((longlong)iVar10 * 8 != lVar30);
          }
          iVar10 = FUN_14490d72a(*(undefined8 *)(param_1 + 0x1e));
          if (*(char *)(param_1 + 0x4c) != '\0') {
            FUN_1437893fe(*(undefined8 *)(param_1 + 0x1e),param_1);
          }
          if ((iVar10 != 3) && (*(char *)((longlong)param_1 + 0x81) != '\0')) {
            lVar21 = *plVar38;
            lVar30 = *(longlong *)(lVar21 + 0x1d8);
            if ((lVar30 != 0) ||
               ((((DAT_14cb0d2b0 != (longlong *)0x0 && (DAT_14cb0d2b0[0x1ea] != 0)) &&
                 (param_1 = local_318, DAT_14cb0d2b0[0x1ec] != 0)) &&
                (lVar30 = *(longlong *)(DAT_14cb0d2b0[0x1ea] + 0x98), lVar30 != 0)))) {
              if (*(longlong *)(lVar21 + 0x30) == 0) {
                lVar21 = 0;
              }
              else {
                lVar21 = *(longlong *)(*(longlong *)(lVar21 + 0x30) + 0x2b0);
              }
              FUN_1434000f0(lVar30,*(undefined8 *)(lVar21 + 0x4c0));
              lVar21 = *plVar38;
              param_1 = local_318;
            }
            lVar21 = *(longlong *)(lVar21 + 0x58);
            if (lVar21 != 0) {
              *(uint *)(lVar21 + 0x3b4) =
                   (*(uint *)(lVar21 + 0x3b4) & 0xfffffffd) +
                   (uint)*(byte *)((longlong)param_1 + 0x131) * 2;
            }
          }
          local_378 = 2;
          uVar28 = 0;
          uVar36 = (undefined7)((ulonglong)pLVar16 >> 8);
          uVar19 = CONCAT71(uVar36,1);
          FUN_14626c8e8(&local_1e8,1,L"    SeamlessTravel FlushLevelStreaming ",0);
          FUN_143786ce4(*(undefined8 *)(param_1 + 0x1e),2);
          FUN_142791572(&local_1e8);
          FUN_14572ccb8(*(undefined8 *)(param_1 + 0x1e));
          if (param_1[0x26] != 0) {
            uVar12 = param_1[0x26] + 1;
            param_1[0x26] = uVar12;
            if (uVar12 == 0xf) {
              FUN_140113df6(param_1);
              uVar12 = param_1[0x26];
            }
            if (uVar12 != 0) {
              uVar19 = CONCAT71(uVar36,1);
              if (pLStack_2a0 != (LARGE_INTEGER *)0xffffffffffffffff) {
                if ((pLStack_2a0 == (LARGE_INTEGER *)0x0) ||
                   (QueryPerformanceCounter(&local_1e8),
                   (ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart) < (ulonglong)local_1e8))
                goto LAB_14378c874;
                uVar12 = param_1[0x26];
              }
              goto LAB_14378d18e;
            }
          }
LAB_14378d1a5:
          LVar23.QuadPart = *plVar38;
          if (bVar27 == 0) {
            FUN_1405f2cd6(LVar23.QuadPart,param_1,0,0);
          }
          else {
            local_310 = (longlong *)CONCAT44(local_310._4_4_,(int)uVar19);
            local_308 = plVar38;
            if ((uVar28 == 9) || (uVar28 == 0)) {
              lVar21 = FUN_14045d4ce(param_1,&DAT_149ec90e4,0);
              if (lVar21 == 0) {
                FUN_1405f35b2((LARGE_INTEGER *)(LVar23.QuadPart + 0x5b8),param_1);
              }
              uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x40))->QuadPart;
              if (uVar15 == 0) {
                uVar15 = FUN_1405f2428(DAT_14c951640);
                if ((uVar15 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(uVar15);
                }
                ((LARGE_INTEGER *)(LVar23.QuadPart + 0x40))->QuadPart = uVar15;
                *(byte *)(uVar15 + 0x658) = *(byte *)(uVar15 + 0x658) & 0xfe;
                uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x40))->QuadPart;
              }
              if ((*(byte *)(uVar15 + 0x9c) & 1) == 0) {
                FUN_140b506dc(uVar15,LVar23.QuadPart,0);
              }
              uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x48))->QuadPart;
              if (uVar15 == 0) {
                uVar15 = FUN_1405f2428(DAT_14c951640);
                if ((uVar15 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(uVar15);
                }
                ((LARGE_INTEGER *)(LVar23.QuadPart + 0x48))->QuadPart = uVar15;
                *(byte *)(uVar15 + 0x658) = *(byte *)(uVar15 + 0x658) & 0xfe;
                uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x48))->QuadPart;
              }
              if ((*(byte *)(uVar15 + 0x9c) & 1) == 0) {
                FUN_140b506dc(uVar15,LVar23.QuadPart,0);
              }
              uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x50))->QuadPart;
              if (uVar15 == 0) {
                uVar15 = FUN_1405f2428(DAT_14c951640);
                if ((uVar15 != 0) && (DAT_14c950c29 != '\0')) {
                  FUN_1456cec3c(uVar15);
                }
                ((LARGE_INTEGER *)(LVar23.QuadPart + 0x50))->QuadPart = uVar15;
                *(byte *)(uVar15 + 0x658) = *(byte *)(uVar15 + 0x658) & 0xfe;
                uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x50))->QuadPart;
              }
              if ((*(byte *)(uVar15 + 0x9c) & 1) == 0) {
                FUN_140b506dc(uVar15,LVar23.QuadPart,0);
              }
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14cb10478) &&
                 (FUN_144b3d300(&DAT_14cb10478), DAT_14cb10478 == -1)) {
                if (DAT_14c8407a8 == (longlong *)0x0) {
                  FUN_1414b00ea();
                }
                DAT_14cb10470 =
                     (longlong *)
                     (**(code **)(*DAT_14c8407a8 + 200))
                               (DAT_14c8407a8,L"r.PhysicsField.EnableField",1);
                _Init_thread_footer(&DAT_14cb10478);
                uVar19 = (ulonglong)local_310 & 0xffffffff;
                param_1 = local_318;
              }
              if ((((DAT_14cb10470 != (longlong *)0x0) &&
                   (iVar10 = (**(code **)(*DAT_14cb10470 + 0xb0))(), iVar10 == 1)) &&
                  (((LARGE_INTEGER *)(LVar23.QuadPart + 0x218))->QuadPart != 0)) &&
                 ((&DAT_14ca814b8)
                  [(ulonglong)
                   *(ushort *)
                    (&DAT_14ca85070 +
                    (longlong)*(int *)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x218))->QuadPart + 8) *
                    2) * 0xf] != 1)) {
                uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x288))->QuadPart;
                if (uVar15 == 0) {
                  uVar15 = FUN_147da9d83(DAT_14c951640);
                  if ((uVar15 != 0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c(uVar15);
                  }
                  ((LARGE_INTEGER *)(LVar23.QuadPart + 0x288))->QuadPart = uVar15;
                }
                if ((*(byte *)(uVar15 + 0x9c) & 1) == 0) {
                  FUN_140b506dc(uVar15,LVar23.QuadPart,0);
                }
              }
              if (param_1[0x26] != 0) {
                uVar28 = param_1[0x26] + 1;
                param_1[0x26] = uVar28;
                if (uVar28 == 0xf) {
                  FUN_140113df6(param_1);
                  uVar28 = param_1[0x26];
                }
                goto LAB_14378d39e;
              }
              uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x30))->QuadPart;
LAB_14378d69e:
              local_300 = (LARGE_INTEGER *)(LVar23.QuadPart + 0x30);
              local_238.QuadPart = LVar23.QuadPart;
              QueryPerformanceCounter(&local_298);
              uStack_218 = 0;
              local_210 = 0;
              uStack_20c = 0;
              uStack_208 = 0;
              uStack_204 = 0;
              local_200 = 0;
              lStack_1f8 = 0;
              local_1d0 = DAT_14c7614ac;
              if ((int)DAT_14c7614ac < 1) {
                local_1d0 = 0;
              }
              LStack_230 = local_2a8;
              local_228 = pLStack_2a0;
              local_220 = (ulonglong)local_1d0;
              local_1c8 = 0;
              local_1e8.s = local_238.s;
              LStack_1e0 = local_2a8;
              local_1d8 = pLStack_2a0;
              local_1cc = 0;
              local_1c0 = 0;
              lStack_1b8 = 0;
              local_1b0 = 0;
              uStack_1a8 = 0;
              FUN_1400f6522(&local_238);
              FUN_1400f64be(&local_200);
              FUN_1400f64be(&local_210);
              uVar26 = DAT_14c7614b0;
              FUN_14165ac48(uVar15,DAT_14c7614b0,0,&local_1e8);
              FUN_1400f6522(&local_1e8);
              plVar38 = local_310;
              bVar9 = *(byte *)(uVar15 + 0x240);
              if ((bVar9 & 2) == 0) {
                do {
                  if (pLStack_2a0 != (LARGE_INTEGER *)0xffffffffffffffff) {
                    if (pLStack_2a0 == (LARGE_INTEGER *)0x0) break;
                    QueryPerformanceCounter(&local_238);
                    if ((ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart) <
                        (ulonglong)local_238) {
                      bVar9 = *(byte *)(uVar15 + 0x240);
                      break;
                    }
                  }
                  FUN_14165ac48(uVar15,uVar26,0,&local_1e8);
                  FUN_1400f6522(&local_1e8);
                  bVar9 = *(byte *)(uVar15 + 0x240);
                } while ((bVar9 & 2) == 0);
              }
              uVar19 = (ulonglong)plVar38 & 0xffffffff;
              if ((bVar9 & 2) == 0) {
                FUN_1400f6522(&local_1e8);
                FUN_1400f64be(&local_1b0);
                FUN_1400f64be(&local_1c0);
                goto LAB_14378c874;
              }
              if ((local_318[0x26] != 0) &&
                 (iVar10 = local_318[0x26] + 1, local_318[0x26] = iVar10, iVar10 == 0xf)) {
                FUN_140113df6();
              }
              FUN_1400f6522(&local_1e8);
              FUN_1400f64be(&local_1b0);
              FUN_1400f64be(&local_1c0);
              plVar38 = local_308;
              pLVar16 = local_300;
            }
            else {
LAB_14378d39e:
              pLVar16 = (LARGE_INTEGER *)(LVar23.QuadPart + 0x30);
              uVar15 = ((LARGE_INTEGER *)(LVar23.QuadPart + 0x30))->QuadPart;
              if ((uVar28 == 10) || (uVar28 == 0)) goto LAB_14378d69e;
            }
            FUN_1408dc76a(&DAT_14cb107d8,LVar23.QuadPart,uVar15);
            local_1e8.QuadPart = 0;
            pLStack_280 = &local_238;
            local_288 = &LAB_14379507c;
            local_238.QuadPart = LVar23.QuadPart;
            FUN_1405f0fde((LARGE_INTEGER *)(LVar23.QuadPart + 0x870));
            FUN_1414514e6(LVar23.QuadPart,0,0);
            if (((-1 < *(char *)(LVar23.QuadPart + 0x154)) || (pLVar16->QuadPart == 0)) ||
               (*(int *)(pLVar16->QuadPart + 0xa8) == 0)) {
              plVar38 = (longlong *)((LARGE_INTEGER *)(LVar23.QuadPart + 0x168))->QuadPart;
              if (plVar38 != (longlong *)0x0) {
                if (pLVar16->QuadPart == 0) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = *(undefined8 *)(pLVar16->QuadPart + 0x2b0);
                }
                (**(code **)(*plVar38 + 0x2c8))(plVar38,uVar24);
              }
              if (0 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart) {
                lVar21 = 0;
                do {
                  FUN_1417dd662(*(undefined8 *)
                                 (((LARGE_INTEGER *)(LVar23.QuadPart + 400))->QuadPart + lVar21 * 8)
                               );
                  lVar21 = lVar21 + 1;
                } while (lVar21 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart);
              }
              puVar3 = local_318;
              *(byte *)(LVar23.QuadPart + 0x155) = *(byte *)(LVar23.QuadPart + 0x155) | 0x10;
              *(byte *)(LVar23.QuadPart + 0x154) = *(byte *)(LVar23.QuadPart + 0x154) | 0x80;
              if ((((LARGE_INTEGER *)LVar23.QuadPart != (LARGE_INTEGER *)0x0) &&
                  (DAT_14cb0d2b0 != (longlong *)0x0)) &&
                 (iVar10 = FUN_14490d72a(LVar23.QuadPart), iVar10 - 1U < 2)) {
                (**(code **)(*DAT_14cb0d2b0 + 0x458))(DAT_14cb0d2b0,LVar23.QuadPart);
              }
              if ((((LARGE_INTEGER *)(LVar23.QuadPart + 0x170))->QuadPart != 0) &&
                 ((*(byte *)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x170))->QuadPart + 100) & 2) == 0
                 )) {
                FUN_140056680(&local_1e8,&DAT_149dfb77a);
                FUN_140056680(&local_238,&DAT_149dfb77a);
                if (0 < (int)puVar3[0x14]) {
                  lVar21 = 8;
                  lVar30 = 0;
                  do {
                    FUN_1400020e8(&local_1e8,&DAT_149e1423e,1);
                    iVar10 = *(int *)(*(longlong *)(puVar3 + 0x12) + lVar21);
                    iVar11 = iVar10 + -1;
                    if (iVar10 == 0) {
                      iVar11 = 0;
                    }
                    FUN_1400020e8(&local_1e8,
                                  *(undefined8 *)(*(longlong *)(puVar3 + 0x12) + -8 + lVar21),iVar11
                                 );
                    lVar30 = lVar30 + 1;
                    lVar21 = lVar21 + 0x10;
                  } while (lVar30 < (int)puVar3[0x14]);
                }
                plVar38 = (longlong *)((LARGE_INTEGER *)(LVar23.QuadPart + 0x170))->QuadPart;
                FUN_140c50e9c(&local_298,puVar3 + 10,1);
                (**(code **)(*plVar38 + 0x698))(plVar38,&local_298,&local_1e8,&local_238);
                if (local_298.QuadPart != 0) {
                  FUN_1400020a8();
                }
                if ((LARGE_INTEGER *)local_238.QuadPart != (LARGE_INTEGER *)0x0) {
                  FUN_1400020a8();
                }
                uVar19 = (ulonglong)local_310 & 0xffffffff;
                if ((longlong *)local_1e8.QuadPart != (longlong *)0x0) {
                  FUN_1400020a8();
                }
              }
              local_319 = bVar27;
              if (0 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart) {
                lVar21 = 0;
                do {
                  FUN_14355247c(*(undefined8 *)
                                 (((LARGE_INTEGER *)(LVar23.QuadPart + 400))->QuadPart + lVar21 * 8)
                                ,0);
                  lVar21 = lVar21 + 1;
                } while (lVar21 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart);
              }
              LVar33.QuadPart = LVar23.QuadPart;
              FUN_14375df50(DAT_14cb0d2b0,&local_1e8,LVar23.QuadPart);
              LVar7 = local_1e8;
              uVar15 = (ulonglong)(int)LStack_1e0.s.LowPart;
              if (-1 < (longlong)uVar15) {
                uVar12 = *(uint *)(local_1e8.QuadPart + 8);
                if (((int)LStack_1e0.s.LowPart < (int)uVar12) &&
                   (*(longlong *)(*(longlong *)local_1e8 + uVar15 * 8) == 0)) {
                  plVar38 = (longlong *)(*(longlong *)local_1e8 + uVar15 * 8);
                  do {
                    plVar38 = plVar38 + 1;
                    uVar28 = (int)uVar15 + 1;
                    uVar15 = (ulonglong)uVar28;
                    if ((int)uVar12 <= (int)uVar28) {
                      uVar15 = (ulonglong)uVar12;
                      break;
                    }
                  } while (*plVar38 == 0);
                  if ((int)uVar15 < 0) goto LAB_14378e454;
                }
                do {
                  iVar10 = (int)uVar15;
                  if ((int)uVar12 <= iVar10) break;
                  lVar21 = FUN_140334a94(*(undefined8 *)
                                          (*(longlong *)LVar7 + (uVar15 & 0xffffffff) * 8),
                                         LVar23.QuadPart);
                  if (lVar21 != 0) {
                    local_238.QuadPart = 0;
                    LStack_230.QuadPart = 0;
                    if (1 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart) {
                      lVar30 = 1;
                      do {
                        LVar6 = LStack_230;
                        lVar29 = *(longlong *)
                                  (((LARGE_INTEGER *)(LVar23.QuadPart + 400))->QuadPart + lVar30 * 8
                                  );
                        lVar13 = (longlong)(int)LStack_230._0_4_;
                        uVar12 = LStack_230._0_4_ + 1;
                        LStack_230.s.LowPart = uVar12;
                        if ((uint)LStack_230._4_4_ < uVar12) {
                          FUN_147bd42de(&local_238,LVar6.QuadPart & 0xffffffff);
                        }
                        pLVar16 = (LARGE_INTEGER *)(local_238.QuadPart + lVar13 * 0x18);
                        uVar19 = CONCAT71((int7)((ulonglong)LVar33 >> 8),
                                          *(undefined1 *)(lVar29 + 0x240)) & 0xffffffffffffff20;
                        FUN_14049cadc(pLVar16,lVar29,CONCAT71((int7)(uVar19 >> 8),(byte)uVar19 >> 5)
                                      ,0);
                        LVar33 = (LARGE_INTEGER)pLVar16->QuadPart;
                        FUN_14098f2e8(lVar21,&local_298,LVar33.QuadPart);
                        *pLVar16 = local_298;
                        lVar30 = lVar30 + 1;
                      } while (lVar30 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).
                                             LowPart);
                      if (0 < (int)LStack_230._0_4_) {
                        FUN_147c9c096(lVar21,&local_238);
                      }
                      uVar19 = (ulonglong)local_310 & 0xffffffff;
                      if ((LARGE_INTEGER *)local_238.QuadPart != (LARGE_INTEGER *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                  }
                  if (iVar10 < -1) break;
                  uVar12 = *(uint *)(LVar7.QuadPart + 8);
                  uVar28 = iVar10 + 1U;
                  if ((int)(iVar10 + 1U) < (int)uVar12) {
                    uVar28 = uVar12;
                  }
                  do {
                    iVar10 = (int)uVar15;
                    if (uVar28 - 1 == iVar10) {
                      uVar15 = (ulonglong)uVar28;
                      iVar10 = uVar28 - 1;
                      break;
                    }
                    uVar15 = (ulonglong)(iVar10 + 1);
                    /* WARNING: Load size is inaccurate */
                    LVar33.s = *LVar7.s;
                  } while (((LARGE_INTEGER *)(LVar33.QuadPart + uVar15 * 8))->QuadPart == 0);
                } while (-2 < iVar10);
              }
LAB_14378e454:
              *(byte *)(LVar23.QuadPart + 0x155) = *(byte *)(LVar23.QuadPart + 0x155) & 0xef;
              plVar38 = local_308;
              bVar27 = local_319;
            }
            if (0 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart) {
              lVar21 = 0;
              do {
                FUN_143551d30(*(undefined8 *)
                               (((LARGE_INTEGER *)(LVar23.QuadPart + 400))->QuadPart + lVar21 * 8));
                lVar21 = lVar21 + 1;
                DVar5 = (((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart;
              } while (lVar21 < (int)DVar5);
              if (1 < (int)DVar5) {
                lVar21 = 1;
                do {
                  lVar30 = *(longlong *)
                            (((LARGE_INTEGER *)(LVar23.QuadPart + 400))->QuadPart + lVar21 * 8);
                  *(byte *)(lVar30 + 0x240) = *(byte *)(lVar30 + 0x240) & 0x7f;
                  *(byte *)(lVar30 + 0x241) = *(byte *)(lVar30 + 0x241) & 0xe6;
                  *(undefined1 *)(lVar30 + 0x3c8) = 0;
                  *(undefined4 *)(lVar30 + 0x3cc) = 0;
                  lVar21 = lVar21 + 1;
                } while (lVar21 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart);
              }
            }
            param_1 = local_318;
            if (DAT_14cb0d2b0[0x184] != 0) {
              plVar22 = *(longlong **)(DAT_14cb0d2b0[0x184] + 0x40);
              if ((DAT_14c950c29 == '\x01') && (plVar22 != (longlong *)0x0)) {
                FUN_1456cec3c(plVar22);
              }
              else if (plVar22 == (longlong *)0x0) goto LAB_14378e519;
              (**(code **)(*plVar22 + 0x2f0))(plVar22,0);
            }
LAB_14378e519:
            LStack_1e0.QuadPart = LStack_1e0.QuadPart & 0xffffffffffffff00;
            local_1e8.QuadPart = LVar23.QuadPart;
            FUN_143794abe((LARGE_INTEGER *)(LVar23.QuadPart + 0x7a0),&local_1e8);
            FUN_143794abe(&DAT_14cb10950,&local_1e8);
            if ((longlong *)((LARGE_INTEGER *)(LVar23.QuadPart + 0x168))->QuadPart !=
                (longlong *)0x0) {
              (**(code **)(*(longlong *)((LARGE_INTEGER *)(LVar23.QuadPart + 0x168))->QuadPart +
                          0x2c0))();
            }
            plVar22 = (longlong *)((LARGE_INTEGER *)(LVar23.QuadPart + 0x180))->QuadPart;
            if (plVar22 != (longlong *)0x0) {
              (**(code **)(*plVar22 + 0x2a0))(plVar22,0);
            }
            if (0 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart) {
              lVar21 = 0;
              do {
                uVar24 = *(undefined8 *)
                          (((LARGE_INTEGER *)(LVar23.QuadPart + 400))->QuadPart + lVar21 * 8);
                plVar22 = (longlong *)FUN_140083894();
                (**(code **)(*plVar22 + 0x48))(plVar22,uVar24);
                lVar21 = lVar21 + 1;
              } while (lVar21 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 0x198))->s).LowPart);
            }
            if ((param_1[0x26] != 0) &&
               (iVar10 = param_1[0x26] + 1, param_1[0x26] = iVar10, iVar10 == 0xf)) {
              FUN_140113df6(param_1);
            }
          }
          cVar8 = (char)uVar19;
          uVar12 = param_1[0x26];
          if (uVar12 != 0) {
            if (pLStack_2a0 != (LARGE_INTEGER *)0xffffffffffffffff) {
              if ((pLStack_2a0 == (LARGE_INTEGER *)0x0) ||
                 (QueryPerformanceCounter(&local_1e8),
                 (ulonglong)((longlong)pLStack_2a0 + local_2a8.QuadPart) < (ulonglong)local_1e8))
              goto LAB_14378c874;
              uVar12 = param_1[0x26];
            }
            goto LAB_14378d420;
          }
        }
        else {
          uVar19 = 0;
LAB_14378d18e:
          if ((uVar12 < 0xc) && (uVar28 = uVar12, (0xe01U >> (uVar12 & 0x1f) & 1) != 0))
          goto LAB_14378d1a5;
LAB_14378d420:
          cVar8 = (char)uVar19;
          if ((uVar12 != 0xc) && (uVar12 != 0)) goto LAB_14378e1a4;
        }
        plVar22 = (longlong *)FUN_140628716();
        lVar21 = plVar22[0x22];
        if (lVar21 == 0) {
          (**(code **)(*plVar22 + 1000))(plVar22);
          lVar21 = plVar22[0x22];
        }
        local_238 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar21 + 0x38))->QuadPart;
        if (local_238.QuadPart == 0) {
          local_1e8.QuadPart = 0;
          LStack_1e0.QuadPart = 0;
        }
        else {
          FUN_1400021e4(&local_238,&local_1e8);
          if (1 < (int)LStack_1e0.s.LowPart) goto LAB_14378d559;
        }
        if (((*(char *)((longlong)param_1 + 0x81) == '\0') && (*(longlong *)(*plVar38 + 0x30) != 0))
           && (lVar21 = *(longlong *)(*(longlong *)(*plVar38 + 0x30) + 0x2b0), lVar21 != 0)) {
          FUN_140c7ce82(lVar21,0);
          FUN_14021bad2(*plVar38,lVar21);
        }
LAB_14378d559:
        lVar21 = *plVar38;
LAB_14378d55c:
        lVar30 = lVar21;
        lVar21 = lVar30;
        if (*(longlong *)(lVar30 + 0x20) != 0) goto code_r0x00014378d56b;
        goto LAB_14378d57c;
      }
      if (*(longlong *)(param_1 + 0x1a) == 0) {
        local_1e8 = *(LARGE_INTEGER *)(lVar21 + 0x18);
      }
      else {
        local_1e8 = *(LARGE_INTEGER *)(*(longlong *)(param_1 + 0x1a) + 0x18);
      }
      FUN_1400021e4(&local_1e8,&local_238);
      LVar23 = local_238;
      if (LStack_230._0_4_ == 0) {
        LVar23.QuadPart = (LONGLONG)&DAT_149dfb77a;
      }
      FUN_140002266(&local_1e8,L"Unable to travel to \'%s\' - package is not a level",
                    LVar23.QuadPart);
      if ((LARGE_INTEGER *)local_238.QuadPart != (LARGE_INTEGER *)0x0) {
        FUN_1400020a8();
      }
      FUN_14378bda4(param_1);
      FUN_147d83bd2(DAT_14cb0d2b0 + 0x1d6,*(undefined8 *)(param_1 + 0x1c),0,&local_1e8);
    }
    if ((LARGE_INTEGER *)local_1e8.QuadPart != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14378c739:
  uVar24 = 0;
  goto LAB_14378c73b;
code_r0x00014378d56b:
  lVar21 = *(longlong *)(lVar30 + 0x20);
  if ((*(uint *)(lVar30 + 8) >> 0x1c & 1) == 0) goto LAB_14378d55c;
  lVar21 = FUN_142840154(lVar30);
LAB_14378d57c:
  if (lVar21 == 0) {
    lVar21 = *(longlong *)(lVar30 + 0x20);
    goto LAB_14378d55c;
  }
  local_238 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar21 + 0x18))->QuadPart;
  FUN_1400021e4(&local_238,&local_288);
  FUN_14094a6a4(&local_238,&local_288,0);
  LVar23 = local_238;
  if (LStack_230._0_4_ == 0) {
    LVar23.QuadPart = (LONGLONG)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_298,LVar23.QuadPart,1);
  if ((LARGE_INTEGER *)local_238.QuadPart != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
  if (local_288 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14375df50(DAT_14cb0d2b0,&local_238,*plVar38);
  LVar23 = local_238;
  uVar19 = (ulonglong)(int)LStack_230._0_4_;
  if (-1 < (longlong)uVar19) {
    uVar12 = (((LARGE_INTEGER *)(local_238.QuadPart + 8))->s).LowPart;
    uVar26 = LStack_230._0_4_;
    if ((int)LStack_230._0_4_ < (int)uVar12) {
      if (*(longlong *)(*(ulonglong *)local_238 + uVar19 * 8) == 0) {
        plVar22 = (longlong *)(*(ulonglong *)local_238 + uVar19 * 8);
        do {
          plVar22 = plVar22 + 1;
          uVar28 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar28;
          if ((int)uVar12 <= (int)uVar28) {
            uVar19 = (ulonglong)uVar12;
            break;
          }
        } while (*plVar22 == 0);
      }
      uVar26 = (uint)uVar19;
      if ((int)(uint)uVar19 < 0) goto LAB_14378e15b;
    }
    while ((int)uVar26 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 8))->s).LowPart) {
      plVar22 = *(longlong **)
                 (*(longlong *)(*(ulonglong *)LVar23 + (ulonglong)(uint)uVar26 * 8) + 0x30);
      uVar12 = uVar26;
      if (plVar22 != (longlong *)0x0) {
        (**(code **)(*plVar22 + 0xb40))
                  (plVar22,local_298.QuadPart,*(undefined1 *)((longlong)param_1 + 0x81));
        uVar12 = (uint)uVar19;
        FUN_14098f2e8(*(undefined8 *)
                       (*(longlong *)(*(ulonglong *)LVar23 + (longlong)(int)uVar12 * 8) + 0x30),
                      &local_288,local_298.QuadPart,0);
        FUN_1463f9382(*(undefined8 *)
                       (*(longlong *)(*(ulonglong *)LVar23 + (longlong)(int)uVar12 * 8) + 0x30),
                      local_288);
      }
      uVar19 = (ulonglong)uVar12;
      do {
        if ((int)uVar12 < -1) goto LAB_14378e15b;
        iVar10 = (int)uVar19;
        uVar26 = iVar10 + 1;
        uVar19 = (ulonglong)(uint)uVar26;
      } while (((int)uVar26 < (int)(((LARGE_INTEGER *)(LVar23.QuadPart + 8))->s).LowPart) &&
              (*(longlong *)(*(ulonglong *)LVar23 + (ulonglong)(uint)uVar26 * 8) == 0));
      if (iVar10 < -1) break;
    }
  }
LAB_14378e15b:
  *(byte *)(*(longlong *)(param_1 + 0x1e) + 0x153) =
       *(byte *)(*(longlong *)(param_1 + 0x1e) + 0x153) | 1;
  if (*(char *)((longlong)param_1 + 0x81) == '\0') {
    *(undefined1 *)((longlong)param_1 + 0x81) = 1;
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_1 + 0x1e);
    if (*(char *)((longlong)param_1 + 0x82) == '\0') {
      FUN_14378bf0c(param_1);
    }
  }
  else {
    lVar21 = FUN_1405e677a(DAT_14cb0d2b0,*(undefined8 *)(param_1 + 0x1e));
    FUN_1405f35b2(lVar21 + 0x160,param_1);
    *(undefined1 *)(param_1 + 0x20) = 0;
    iVar10 = param_1[0x32];
    if ((longlong)iVar10 != 0) {
      lVar21 = *(longlong *)(param_1 + 0x30);
      lVar30 = 0;
      do {
        if (*(longlong **)(lVar21 + lVar30) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar21 + lVar30) + 0x5c0))();
        }
        lVar30 = lVar30 + 8;
      } while ((longlong)iVar10 * 8 != lVar30);
    }
    (**(code **)(**(longlong **)(*plVar38 + 0x1f0) + 0x430))();
    QueryPerformanceCounter(&local_238);
    FUN_14626c60c();
    lVar21 = *plVar38;
    if (*(longlong **)(lVar21 + 0x170) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar21 + 0x170) + 0x738))();
      lVar21 = *plVar38;
    }
    *(byte *)(lVar21 + 0x988) = bVar27;
    FUN_14572a4ce(*(undefined8 *)(param_1 + 0x1e));
    *(undefined1 *)(*(longlong *)(param_1 + 0x1e) + 0x988) = 0;
    FUN_14107e8f0(&DAT_14c9647a0,*(undefined8 *)(param_1 + 0x1e));
    *(byte *)(param_1 + 0x20) = bVar27;
    if (param_1[0x26] != 0) {
      iVar10 = param_1[0x26] + 1;
      param_1[0x26] = iVar10;
      if (iVar10 == 0xf) {
        FUN_140113df6(param_1);
        iVar10 = param_1[0x26];
      }
      if (iVar10 == 0xd) {
        if ((LARGE_INTEGER *)local_1e8.QuadPart != (LARGE_INTEGER *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14378c874;
      }
    }
  }
  if ((LARGE_INTEGER *)local_1e8.QuadPart != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
LAB_14378e1a4:
  if (cVar8 == '\0') goto LAB_14378c739;
  uVar24 = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
LAB_14378c73b:
  FUN_140113df6(param_1);
LAB_14378c876:
  if ((local_80 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24;
}



// FUNCTION 14378ea10 FUN_14378ea10 body=420 status=ok
// SIG undefined FUN_14378ea10(void)

void FUN_14378ea10(longlong param_1)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined2 local_a8 [4];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x418))();
  if ((cVar2 != '\0') &&
     (((*(longlong *)(param_1 + 0x30) == 0 ||
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar3 == 0)) ||
      (*(longlong *)(lVar3 + 0x3f0) == 0)))) {
    local_60 = 0;
    local_58 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    lStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_54 = 0xffffffff00000080;
    local_4c = 0;
    local_40 = 0;
    local_38 = 0;
    local_a8[0] = 1;
    lVar3 = FUN_14378f0e3();
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x242) = *(byte *)(lVar3 + 0x242) | 1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar3);
      }
      lStack_88 = lVar3;
      FUN_14019222c(local_a8,lVar3);
      iVar1 = *(int *)(param_1 + 0x90);
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(param_1 + 0x88);
        lVar5 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar5);
          if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x10a) & 2) == 0)) {
            lVar4 = FUN_14378f0e3(*(undefined8 *)(lVar4 + 0x178));
            if (lVar4 == 0) goto LAB_14378eba6;
            *(byte *)(lVar4 + 0x242) = *(byte *)(lVar4 + 0x242) | 1;
            FUN_14019222c(local_a8,lVar4);
          }
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
      }
      iVar1 = *(int *)(param_1 + 0x1a8);
      *(uint *)(param_1 + 0x1a8) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x1ac) < iVar1 + 1U) {
        FUN_147db1350((longlong *)(param_1 + 0x1a0),iVar1);
      }
      FUN_1456d546a((longlong)iVar1 * 0x78 + *(longlong *)(param_1 + 0x1a0),local_a8);
    }
LAB_14378eba6:
    FUN_1456d5336(local_a8);
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14378ebb6 FUN_14378ebb6 body=1297 status=ok
// SIG undefined FUN_14378ebb6(void)

void FUN_14378ebb6(longlong *param_1,ulonglong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  bool bVar15;
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
  ulonglong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_1;
  local_58 = param_2;
  if (0 < *(int *)param_1[3]) {
    if (*(int *)(lVar2 + 0xe8) != *(int *)(lVar2 + 0x114)) {
      uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      lVar9 = lVar2 + 0x118;
      if (*(longlong *)(lVar2 + 0x120) != 0) {
        lVar9 = *(longlong *)(lVar2 + 0x120);
      }
      iVar12 = *(int *)(lVar9 + (ulonglong)(*(int *)(lVar2 + 0x128) - 1U & (uVar8 >> 0x10 ^ uVar8))
                                * 4);
      if (iVar12 != -1) {
        lVar9 = *(longlong *)(lVar2 + 0xe0);
        do {
          if (*(ulonglong *)(lVar9 + (longlong)iVar12 * 0x10) == param_2) {
            if ((param_2 != 0) && (FUN_1401924dc(param_2), DAT_14c872a72 == '\0')) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
            }
            goto LAB_14378ef36;
          }
          iVar12 = *(int *)((longlong)iVar12 * 0x10 + lVar9 + 8);
        } while (iVar12 != -1);
      }
    }
    FUN_140d0b320((longlong *)(lVar2 + 0xe0),&local_50,&local_58,0);
    *(int *)param_1[3] = *(int *)param_1[3] + -1;
    if (*(int *)param_1[3] == 0) {
      *(int *)param_1[3] = 0xf;
      cVar7 = FUN_147dab36e(lVar2,param_1[4]);
      if (cVar7 != '\0') {
        *(undefined1 *)param_1[5] = 1;
      }
    }
  }
  uVar4 = local_58;
  lVar9 = *(longlong *)(lVar2 + 0x70);
  if (DAT_14cae8b20 == 0) {
    local_70 = &local_50;
    local_50 = (code *)&LAB_14355090c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_147b8e16d;
    local_80 = (code *)&LAB_140810a38;
    local_88 = L"Engine";
    local_90 = 0x800000000;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar11 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_70 = &local_50;
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_78 = &LAB_1468c5283;
    local_80 = FUN_142809da0;
    local_88 = L"Engine";
    local_90 = 0x400000000;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  uVar5 = local_58;
  lVar10 = *(longlong *)(uVar4 + 0x20);
  if (lVar10 == 0) {
    lVar14 = 0;
  }
  else {
    iVar12 = *(int *)(lVar11 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < iVar12) ||
         (lVar14 = lVar10,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) + (longlong)iVar12 * 8) !=
         lVar11 + 0x30)) {
        lVar14 = 0;
      }
    } while ((lVar14 == 0) && (lVar10 = *(longlong *)(lVar10 + 0x20), lVar10 != 0));
  }
  lVar9 = *(longlong *)(lVar9 + 0x30);
  lVar11 = param_1[1];
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar11 + 0x58);
  EnterCriticalSection(lpCriticalSection);
  if (*(ulonglong *)(lVar11 + 0x80) == uVar5) {
    bVar13 = *(byte *)(lVar11 + 0x88);
  }
  else {
    *(ulonglong *)(lVar11 + 0x80) = uVar5;
    if (*(int *)(lVar11 + 0x10) != *(int *)(lVar11 + 0x3c)) {
      uVar8 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      lVar10 = lVar11 + 0x40;
      if (*(longlong *)(lVar11 + 0x48) != 0) {
        lVar10 = *(longlong *)(lVar11 + 0x48);
      }
      iVar12 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar11 + 0x50) - 1U & (uVar8 >> 0x10 ^ uVar8))
                                 * 4);
      if (iVar12 != -1) {
        do {
          puVar1 = (ulonglong *)(*(longlong *)(lVar11 + 8) + (longlong)iVar12 * 0x18);
          if (*puVar1 == uVar5) {
            if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
              bVar13 = (byte)puVar1[1];
              *(byte *)(lVar11 + 0x88) = bVar13;
              goto LAB_14378ee17;
            }
            break;
          }
          iVar12 = (int)puVar1[2];
        } while (iVar12 != -1);
      }
    }
    *(undefined1 *)(lVar11 + 0x88) = 0;
    bVar13 = 0;
  }
LAB_14378ee17:
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
  if ((*(byte *)(local_58 + 99) & 8) == 0) {
    bVar15 = false;
  }
  else {
    bVar15 = 1 < *(byte *)(local_58 + 0x179);
  }
  bVar6 = 0;
  if ((!bVar15) && (bVar6 = 0, *(byte *)(local_58 + 0x178) < 3)) {
    bVar6 = FUN_1449e2a3e(local_58);
    bVar6 = bVar6 ^ 1;
  }
  uVar4 = local_58;
  lVar11 = FUN_140a8ab54();
  if (*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < *(int *)(lVar11 + 0x38)) {
    bVar15 = false;
  }
  else {
    bVar15 = *(longlong *)
              (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30;
  }
  if (((((bVar6 | bVar13) & 1) == 0) || (lVar9 != lVar14)) || (bVar15)) {
    FUN_140331450(local_58,1);
    FUN_1408bb83a(param_1[1],local_58);
    plVar3 = (longlong *)param_1[2];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x3a0))(plVar3,local_58);
    }
  }
  else {
    lVar9 = param_1[2];
    if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x840) == 0)) {
      FUN_145bf74f6(*(undefined8 *)(lVar9 + 0x858),local_58);
    }
    iVar12 = *(int *)(lVar2 + 200);
    *(uint *)(lVar2 + 200) = iVar12 + 1U;
    if (*(uint *)(lVar2 + 0xcc) < iVar12 + 1U) {
      FUN_147dae718((longlong *)(lVar2 + 0xc0),iVar12);
    }
    uVar4 = local_58;
    lVar2 = *(longlong *)(lVar2 + 0xc0);
    *(undefined8 *)(lVar2 + (longlong)iVar12 * 8) = 0;
    if (local_58 != 0) {
      FUN_1401924dc(local_58);
      *(ulonglong *)(lVar2 + (longlong)iVar12 * 8) = uVar4;
    }
  }
LAB_14378ef36:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14378f0e3 FUN_14378f0e3 body=1040 status=ok
// SIG undefined FUN_14378f0e3(void)

longlong FUN_14378f0e3(LARGE_INTEGER param_1)

{
  int iVar1;
  LARGE_INTEGER LVar2;
  LARGE_INTEGER LVar3;
  LARGE_INTEGER LVar4;
  longlong lVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  LARGE_INTEGER LVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  int local_10c;
  undefined2 *local_108;
  int local_100;
  longlong local_f8 [2];
  undefined1 local_e4 [4];
  LARGE_INTEGER local_e0;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  LVar2 = param_1;
  if (param_1.QuadPart != 0) {
LAB_14378f13f:
    LVar4 = LVar2;
    LVar2 = LVar4;
    if (((LARGE_INTEGER *)(LVar4.QuadPart + 0x20))->QuadPart != 0) goto code_r0x00014378f14e;
    goto LAB_14378f15f;
  }
  lVar6 = 0;
LAB_14378f10d:
  if ((local_40 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar6;
code_r0x00014378f14e:
  LVar2.QuadPart = ((LARGE_INTEGER *)(LVar4.QuadPart + 0x20))->QuadPart;
  if ((*(uint *)(LVar4.QuadPart + 8) >> 0x1c & 1) == 0) goto LAB_14378f13f;
  LVar2.QuadPart = FUN_142840154(LVar4.QuadPart);
LAB_14378f15f:
  if (LVar2.QuadPart == 0) {
    LVar2.QuadPart = ((LARGE_INTEGER *)(LVar4.QuadPart + 0x20))->QuadPart;
    goto LAB_14378f13f;
  }
  QueryPerformanceCounter(&local_d8);
  LVar2 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1.QuadPart + 0x20))->QuadPart;
  LVar4 = LVar2;
  LVar9 = param_1;
  do {
    LVar3 = LVar4;
    LVar4 = LVar9;
    if (LVar3.QuadPart == 0) {
LAB_14378f1a4:
      if (LVar4.QuadPart != 0) break;
      LVar3 = (LARGE_INTEGER)((LARGE_INTEGER *)(LVar9.QuadPart + 0x20))->QuadPart;
    }
    else if ((*(uint *)(LVar9.QuadPart + 8) >> 0x1c & 1) != 0) {
      LVar4.QuadPart = FUN_142840154(LVar9.QuadPart);
      goto LAB_14378f1a4;
    }
    LVar4.QuadPart = ((LARGE_INTEGER *)(LVar3.QuadPart + 0x20))->QuadPart;
    LVar9 = LVar3;
  } while( true );
  local_d8 = *(LARGE_INTEGER *)(LVar4.QuadPart + 0x18);
  FUN_1400021e4(&local_d8,local_f8);
  FUN_147daa0c0(&local_108,local_f8,1);
  puVar7 = local_108;
  if (local_100 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  lVar5 = FUN_14099f58f(puVar7);
  *(byte *)(lVar5 + 0x2e) = *(byte *)(lVar5 + 0x2e) | 0x10;
  *(undefined8 *)(lVar5 + 0x38) = *(undefined8 *)(LVar4.QuadPart + 0x38);
  *(undefined1 *)(lVar5 + 0x40) = *(undefined1 *)(LVar4.QuadPart + 0x40);
  *(byte *)(lVar5 + 0x28) = *(byte *)(lVar5 + 0x28) | 2;
  local_d8 = *(LARGE_INTEGER *)(lVar5 + 0x18);
  FUN_144a13f80(&DAT_14c963d10,&local_e0,&local_d8,0);
  FUN_147d7d52e(&local_10c,1);
  local_120 = 0;
  local_128 = 0;
  lVar6 = FUN_14572aef8(lVar5,*(undefined8 *)(LVar2.QuadPart + 0x18),0,0);
  FUN_144757f48(lVar6,8);
  *(undefined1 *)(lVar6 + 0x152) = 1;
  *(undefined1 *)(lVar6 + 0x150) = 5;
  local_e0.s.HighPart = 0;
  if (LVar2.QuadPart == 0) {
    local_e0.s.LowPart = 0;
    iVar1 = 0;
  }
  else {
    local_e0.s.LowPart = *(uint *)(LVar2.QuadPart + 0xc);
    if ((int)local_e0.s.LowPart < DAT_14c9647dc) {
      lVar10 = (ulonglong)((local_e0.s.LowPart & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_e0.s.LowPart >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar1 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar1 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar1 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar1 = iVar8;
      }
    }
  }
  local_118 = *(undefined8 *)(lVar5 + 0x18);
  local_d8.QuadPart = (LONGLONG)&local_118;
  local_e0.s.HighPart = iVar1;
  local_d0 = &local_e0;
  FUN_147dae9b0(local_e4,&local_d8);
  local_c0 = 0xfff00007efffff7b;
  local_b8 = 0;
  local_a8 = 1;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_a0 = *(undefined8 *)(param_1.QuadPart + 0x10);
  local_c8 = *(undefined8 *)(param_1.QuadPart + 0x18);
  local_b0 = 0x200400000;
  local_d8 = param_1;
  local_d0 = (LARGE_INTEGER *)lVar6;
  lVar6 = FUN_14092ef3d(&local_d8);
  FUN_1406a129a(&DAT_14cae8cc0,*(undefined8 *)(lVar5 + 0x18));
  lVar5 = *(longlong *)(lVar6 + 200);
  if (lVar5 != 0) {
    lVar10 = *(longlong *)(param_1.QuadPart + 200);
    if ((lVar10 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar10);
      lVar5 = *(longlong *)(lVar6 + 200);
    }
    if (((lVar5 == lVar10) && (*(int *)(lVar6 + 0xd8) == *(int *)(param_1.QuadPart + 0xd8))) &&
       (FUN_147bca812(), 0 < *(int *)(lVar6 + 0xd8))) {
      lVar5 = 0;
      do {
        FUN_1479e7d30(*(undefined8 *)(*(longlong *)(lVar6 + 0xd0) + lVar5 * 8),
                      *(undefined8 *)(*(longlong *)(param_1.QuadPart + 0xd0) + lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar6 + 0xd8));
    }
  }
  QueryPerformanceCounter(&local_e0);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1401be51a(&local_98);
  iVar1 = FUN_140d25081();
  if (iVar1 != local_10c) {
    FUN_14680e99f(local_10c);
  }
  if (local_108 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  goto LAB_14378f10d;
}



// FUNCTION 14378f4f4 FUN_14378f4f4 body=510 status=ok
// SIG undefined FUN_14378f4f4(void)

void FUN_14378f4f4(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  float local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float fStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_88 = *(undefined8 *)(param_2 + 4);
  local_98 = *param_2;
  uStack_94 = param_2[1];
  uStack_90 = param_2[2];
  fStack_8c = (float)param_2[3];
  FUN_143794d3c(param_1 + 0x690);
  iVar1 = *(int *)(param_1 + 0x6b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x6a8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      local_c8 = *(undefined8 *)(param_2 + 4);
      local_d8 = *param_2;
      uStack_d4 = param_2[1];
      uStack_d0 = param_2[2];
      uStack_cc = param_2[3];
      (**(code **)(*plVar3 + 0x18))(plVar3,&local_98);
      if (local_88._4_1_ == '\x01') {
        local_9c = 0.0;
        fVar5 = (float)local_88;
        if (1.0 <= (float)local_88) {
          fVar5 = 1.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        if (local_88._5_1_ == '\0') {
          local_a8 = local_c8;
          local_b8 = local_d8;
          uStack_b4 = uStack_d4;
          uStack_b0 = uStack_d0;
          uStack_ac = uStack_cc;
          (**(code **)(*plVar3 + 0x10))(plVar3,&local_b8,0,&local_9c);
          if (((local_9c < 0.0) || (fStack_8c < local_9c)) ||
             ((1.0 <= fStack_8c &&
              ((fVar5 = fVar5 * (1.0 - local_9c / fStack_8c), fVar5 < 0.0 || (1.0 < fVar5))))))
          goto LAB_14378f64b;
        }
        if ((0.0 < fVar5) &&
           (FUN_14102cb1c(param_3,CONCAT44(uStack_94,local_98)), DAT_14cae3be8 == '\x01')) {
          FUN_14350a8a8(plVar3,fVar5,CONCAT44(uStack_94,local_98),0);
        }
      }
LAB_14378f64b:
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if (DAT_14cae3be8 != '\0') {
    FUN_14350a8a8(0,0x3f800000,param_3 + 0x2510,1);
    DAT_14cae3be8 = '\0';
  }
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14378f6f3 FUN_14378f6f3 body=172 status=ok
// SIG undefined FUN_14378f6f3(void)

void FUN_14378f6f3(undefined8 param_1)

{
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1405f0e9c(local_80,param_1,5);
  if (local_5c == '\0') {
    do {
      if (local_50 != 0) {
        FUN_14096f7c8(local_50,0x3d4ccccd);
      }
      FUN_14059e512(local_80);
    } while (local_5c == '\0');
  }
  if (local_28 == '\x01') {
    FUN_14024445c(local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14378f7a0 FUN_14378f7a0 body=69 status=ok
// SIG undefined FUN_14378f7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378f7a0(void)

{
  _DAT_14cb10450 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378f7e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10458,1);
  return;
}



// FUNCTION 14378f7e6 FUN_14378f7e6 body=69 status=ok
// SIG undefined FUN_14378f7e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14378f7e6(void)

{
  _DAT_14cb10460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014378f828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10468,1);
  return;
}



// FUNCTION 14378f82c FUN_14378f82c body=479 status=ok
// SIG undefined FUN_14378f82c(void)

void FUN_14378f82c(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar4 = DAT_14cb103d8 + 1;
  DAT_14cb103d8 = iVar4;
  *(undefined1 *)(param_1 + 0x158) = 1;
  if (*(int *)(param_1 + 0x78c) != iVar4) {
    *(int *)(param_1 + 0x78c) = iVar4;
    lVar6 = *(longlong *)(param_1 + 0x260);
    if (lVar6 != 0) {
      cVar3 = FUN_142a2f612(lVar6);
      if (cVar3 == '\0') {
        (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,lVar6 + 0x50,1);
      }
      FUN_145c74e7a(lVar6);
    }
    FUN_1417fac46(&DAT_14cb10a20,param_1,param_2,1);
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_28,L"Renderer",1);
      uVar5 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar5,local_28);
    }
    local_38 = param_1 != 0;
    (**(code **)(*DAT_14cad8310 + 0x88))(DAT_14cad8310,param_1,param_2,1);
    plVar1 = *(longlong **)(param_1 + 0x180);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2b8))(plVar1,param_2,1);
    }
    plVar1 = *(longlong **)(param_1 + 0x168);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x2a8))(plVar1,0);
    }
    *(undefined8 *)(param_1 + 0x168) = 0;
    if ((param_1 != 0 && DAT_14cb0d2b0 != 0) && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)) {
      lVar6 = 0;
      do {
        lVar7 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar6);
        if (*(longlong *)(lVar7 + 0x360) == param_1) {
          if ((lVar7 != 0) && (iVar4 = *(int *)(lVar7 + 0x2b8), (longlong)iVar4 != 0)) {
            lVar6 = *(longlong *)(lVar7 + 0x2b0);
            lVar7 = 0;
            do {
              lVar2 = *(longlong *)(lVar6 + lVar7);
              if (lVar2 != 0) {
                FUN_145a0c4bc(*(undefined8 *)(lVar2 + 0x858));
              }
              lVar7 = lVar7 + 0x10;
            } while ((longlong)iVar4 * 0x10 != lVar7);
          }
          break;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar6);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14378fa0c FUN_14378fa0c body=446 status=ok
// SIG undefined FUN_14378fa0c(void)

ulonglong FUN_14378fa0c(LARGE_INTEGER param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  LARGE_INTEGER local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(&local_68);
  uVar5 = DAT_14c7614bc;
  local_60 = (undefined4)*param_2;
  uStack_5c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_58 = (undefined4)param_2[1];
  uStack_54 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_68 = param_1;
  if (0 < *(int *)(param_1.QuadPart + 0x198)) {
    lVar7 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1.QuadPart + 400) + lVar7 * 8);
      do {
        if (param_2[1] != -1) {
          if (param_2[1] != 0) {
            QueryPerformanceCounter(&local_50);
            if ((ulonglong)local_50 <= (ulonglong)(param_2[1] + *param_2)) goto LAB_14378faa5;
          }
          uVar8 = 0;
          goto LAB_14378fba1;
        }
LAB_14378faa5:
        cVar6 = FUN_14032a59a(lVar2,uVar5,&local_68);
      } while (cVar6 == '\0');
      *(byte *)(lVar2 + 0x240) = *(byte *)(lVar2 + 0x240) & 0xfd;
      iVar1 = *(int *)(lVar2 + 0xd8);
      local_70 = param_1;
      if ((longlong)iVar1 != 0) {
        lVar3 = *(longlong *)(lVar2 + 0xd0);
        lVar9 = 0;
        do {
          lVar4 = *(longlong *)(lVar3 + lVar9);
          if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x9c) & 1) != 0)) {
            FUN_1401bf202();
          }
          lVar9 = lVar9 + 8;
        } while ((longlong)iVar1 * 8 != lVar9);
      }
      param_1 = local_70;
      *(byte *)(lVar2 + 0x242) = *(byte *)(lVar2 + 0x242) & 0xef;
      FUN_1408dc76a(&DAT_14cb107c0,local_70.QuadPart,lVar2);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1.QuadPart + 0x198));
  }
  if ((*(longlong *)(param_1.QuadPart + 0x40) != 0) &&
     ((*(byte *)(*(longlong *)(param_1.QuadPart + 0x40) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  if ((*(longlong *)(param_1.QuadPart + 0x48) != 0) &&
     ((*(byte *)(*(longlong *)(param_1.QuadPart + 0x48) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  if ((*(longlong *)(param_1.QuadPart + 0x50) != 0) &&
     ((*(byte *)(*(longlong *)(param_1.QuadPart + 0x50) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
  uVar8 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  if ((*(longlong *)(param_1.QuadPart + 0x288) != 0) &&
     ((*(byte *)(*(longlong *)(param_1.QuadPart + 0x288) + 0x9c) & 1) != 0)) {
    FUN_1401bf202();
  }
LAB_14378fba1:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14378fbcc FUN_14378fbcc body=798 status=ok
// SIG undefined FUN_14378fbcc(void)

void FUN_14378fbcc(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_14099af08();
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_14090223e(*(longlong *)(param_1 + 0x30),1,1);
    }
  }
  if (0 < *(int *)(param_1 + 0x198)) {
    lVar10 = 0;
    do {
      FUN_1437894b2(*(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 400) + lVar10 * 8) + 0x20)
                    ,param_2,1,param_1 != 0,1);
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x198));
  }
  iVar9 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar9 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x88);
    lVar15 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(lVar10 + lVar15) + 0x178);
      if (lVar3 != 0) {
        FUN_1437894b2(*(undefined8 *)(lVar3 + 0x20),param_2,1,param_1 != 0,1);
      }
      lVar15 = lVar15 + 8;
    } while ((longlong)iVar9 * 8 != lVar15);
  }
  if (DAT_14c98e618 != 0) {
    FUN_140d2cebc();
  }
  if ((longlong)*(int *)(param_1 + 0x1a8) != 0) {
    puVar11 = (uint *)(*(longlong *)(param_1 + 0x1a0) + 0x38);
    lVar10 = (longlong)*(int *)(param_1 + 0x1a8) * 0x78;
    do {
      if ((char)puVar11[-0xe] == '\x01') {
        if (puVar11 != (uint *)&DAT_00000038) {
          uVar2 = puVar11[6];
          if (uVar2 == 0) {
            uVar12 = 1;
            uVar16 = 0;
            iVar9 = 0;
            uVar6 = 0;
            goto LAB_14378fd5f;
          }
          puVar5 = *(uint **)(puVar11 + 4);
          if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
            puVar5 = puVar11;
          }
          uVar6 = *puVar5;
          if (uVar6 != 0) {
            uVar16 = 0;
            iVar9 = 0;
            goto LAB_14378fd2a;
          }
          iVar9 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar9 = uVar2 - 1;
          }
          uVar16 = 0;
          uVar12 = (ulonglong)(uint)(iVar9 >> 5);
          if (iVar9 >> 5 < 1) {
            uVar12 = uVar16;
          }
          iVar9 = 0;
          goto LAB_14378fd16;
        }
        break;
      }
      puVar11 = puVar11 + 0x1e;
      lVar10 = lVar10 + -0x78;
    } while (lVar10 != 0);
  }
  goto LAB_14378fd68;
  while( true ) {
    iVar9 = iVar9 + 0x20;
    uVar6 = puVar5[uVar16 + 1];
    uVar16 = uVar16 + 1;
    if (uVar6 != 0) break;
LAB_14378fd16:
    if (uVar12 == uVar16) goto LAB_14378fd68;
  }
LAB_14378fd2a:
  uVar12 = (ulonglong)(-uVar6 & uVar6);
  uVar1 = uVar12 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  if ((int)uVar2 <= (int)uVar6) {
    uVar6 = uVar2;
  }
LAB_14378fd5f:
  if (uVar6 != uVar2) {
    uVar13 = 0xffffffff;
    uVar4 = uVar2;
    do {
      lVar10 = *(longlong *)(*(longlong *)(puVar11 + -4) + (longlong)(int)uVar6 * 0x10);
      if (lVar10 != 0) {
        FUN_1437894b2(*(undefined8 *)(lVar10 + 0x20),param_2,1,param_1 != 0,0);
        uVar4 = puVar11[6];
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar5 = *(uint **)(puVar11 + 4);
      if (*(uint **)(puVar11 + 4) == (uint *)0x0) {
        puVar5 = puVar11;
      }
      iVar14 = (int)uVar16;
      lVar10 = (longlong)iVar14;
      uVar6 = puVar5[lVar10] & uVar13;
      if (uVar6 == 0) {
        iVar7 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar7 = uVar4 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar14) {
          iVar8 = iVar14;
        }
        if (iVar14 < iVar7) {
          lVar15 = 0;
          do {
            uVar6 = (puVar5 + lVar10 + 1)[lVar15];
            if (uVar6 != 0) {
              uVar16 = (ulonglong)(iVar14 + (int)lVar15 + 1);
              uVar13 = 0xffffffff;
              goto LAB_14378fea1;
            }
            iVar9 = iVar9 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar8 - lVar10 != lVar15);
          uVar13 = 0xffffffff;
          iVar14 = iVar8;
        }
        uVar16 = (ulonglong)(iVar14 + 1);
        uVar6 = uVar4;
      }
      else {
LAB_14378fea1:
        uVar12 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar4 <= (int)uVar6) {
          uVar6 = uVar4;
        }
      }
    } while (uVar6 != uVar2);
  }
LAB_14378fd68:
  FUN_1407915be(param_1 + 0x818,param_1);
  FUN_1417fac46(&DAT_14cb10a08,param_1,param_2,1);
  FUN_140790e84(param_1 + 0x870);
  if (*(longlong *)(param_1 + 0x620) != 0 && param_1 != 0) {
    FUN_1435b80fe();
    (**(code **)(**(longlong **)(param_1 + 0x218) + 0x418))(*(longlong **)(param_1 + 0x218),0);
    *(undefined8 *)(param_1 + 0x620) = 0;
  }
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(byte *)(param_1 + 0x153) = *(byte *)(param_1 + 0x153) & 0xbf;
  return;
}



// FUNCTION 14378ff32 FUN_14378ff32 body=526 status=ok
// SIG undefined FUN_14378ff32(void)

/* WARNING: Removing unreachable block (ram,0x00014378ff62) */
/* WARNING: Removing unreachable block (ram,0x00014378ffbe) */

ulonglong FUN_14378ff32(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  DWORD DVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DVar5 = GetCurrentThreadId();
  if ((DAT_14cb0f868 & 1) == 0) {
    DAT_14cb0f868 = DAT_14cb0f868 | 1;
    LOCK();
    UNLOCK();
    DAT_14cb0f86c = DVar5;
  }
  else if (DAT_14cb0f86c == DVar5) {
    LOCK();
    DAT_14cb0f868 = DAT_14cb0f868 + 4;
    UNLOCK();
  }
  else {
    FUN_1402441ea(&DAT_14cb0f868,DAT_14cb0f868);
  }
  FUN_147daca04();
  if (DAT_14cb0f800 == DAT_14cb0f82c) {
    local_38 = 0;
    lStack_30 = 0;
    local_28 = 0xffffffff;
    uStack_20 = 0;
    FUN_147daca90();
    lVar4 = lStack_30;
    if (lStack_30 != 0) {
      LOCK();
      puVar1 = (uint *)(lStack_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lStack_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lStack_30 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar4;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar4 = local_38;
    if (local_38 != 0) {
      LOCK();
      puVar1 = (uint *)(local_38 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_38 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_38 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar4;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  uVar2 = DAT_14cb0f868;
  uVar6 = (ulonglong)DAT_14cb0f868;
  if (DAT_14cb0f868 < 4) {
    DAT_14cb0f86c = 0;
    if (DAT_14cb0f868 < 2) {
      LOCK();
      DAT_14cb0f868 = 0;
      uVar6 = (ulonglong)uVar2;
      UNLOCK();
    }
    else {
      uVar6 = FUN_140d366d2(&DAT_14cb0f868);
    }
  }
  else {
    LOCK();
    DAT_14cb0f868 = DAT_14cb0f868 - 4;
    UNLOCK();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143790154 FUN_143790154 body=12 status=ok
// SIG undefined FUN_143790154(void)

void FUN_143790154(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014379015d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143790160 FUN_143790160 body=29 status=ok
// SIG undefined FUN_143790160(void)

undefined8 FUN_143790160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437901a4 FUN_1437901a4 body=282 status=ok
// SIG undefined FUN_1437901a4(void)

undefined8 * FUN_1437901a4(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 1437902be FUN_1437902be body=94 status=ok
// SIG undefined FUN_1437902be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437902be(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14377fc9e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14377fc9e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001437902fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14379031c FUN_14379031c body=282 status=ok
// SIG undefined FUN_14379031c(void)

undefined8 * FUN_14379031c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 14379043c FUN_14379043c body=282 status=ok
// SIG undefined FUN_14379043c(void)

undefined8 * FUN_14379043c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 143790556 FUN_143790556 body=29 status=ok
// SIG undefined FUN_143790556(void)

undefined8 FUN_143790556(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14379058e FUN_14379058e body=148 status=ok
// SIG undefined FUN_14379058e(void)

void FUN_14379058e(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140074620();
  FUN_1403e5552(&DAT_14c8339c0,0);
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_18,L"Renderer",1);
    uVar1 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar1,local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001437905da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cad8310 + 0x1b8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 143790630 FUN_143790630 body=1156 status=ok
// SIG undefined FUN_143790630(void)

void FUN_143790630(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  undefined1 auStack_198 [32];
  undefined8 *local_178;
  int local_16c;
  longlong local_168;
  undefined1 local_15c;
  undefined7 local_15b;
  undefined1 uStack_154;
  undefined7 uStack_153;
  undefined8 local_14c;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  int local_120;
  undefined1 local_11c;
  undefined1 local_11b;
  undefined1 local_11a;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined1 local_ff;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined4 local_fc;
  undefined3 uStack_f8;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined1 local_e4 [120];
  undefined1 local_6c;
  undefined1 local_63;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar15 = 0;
  local_15b = 0;
  uStack_154 = 0;
  uStack_153 = 0x7f7fffff000000;
  local_14c = 0;
  local_144 = 0;
  local_15c = 1;
  lVar6 = FUN_1405d51a2();
  lVar9 = *(longlong *)(param_1 + 0x18);
  if (lVar9 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar9 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar9 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar9 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar5 = *(byte *)(lVar9 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10);
          plVar7[1] = lVar9;
          plVar13 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar5 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar13;
              LOCK();
              bVar16 = plVar13 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar16) {
                plVar13 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar13 = plVar7;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  iVar3 = *(int *)(param_1 + 0xb0);
  plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x10);
  if (plVar13 != (longlong *)0x0) {
    lVar9 = (**(code **)(*plVar13 + 8))();
    uVar15 = (uint)*(byte *)(lVar9 + 0x30);
  }
  local_11c = 1;
  local_11a = 0;
  local_104 = 0x10001;
  local_fc = 0;
  uStack_f8 = 0;
  local_f4 = 0;
  uStack_ec = 0x3f80000000000000;
  memset(local_e4,0,0x81);
  local_128 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = (uint)((ulonglong)local_128 >> 0x10);
  uVar14 = (uint)local_128 & 0xffff;
  local_120 = ((uint)local_128 << 0x10 | uVar14) + (int)((ulonglong)local_128 >> 0x20) +
              (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4);
  local_11b = 0;
  local_100 = 2;
  local_118 = *(undefined4 *)(param_1 + 0x9c);
  local_114 = *(undefined4 *)(param_1 + 0xa0);
  local_110 = *(undefined4 *)(param_1 + 0xa4);
  local_10c = *(undefined4 *)(param_1 + 0xa8);
  local_108 = 1;
  local_ff = *(undefined1 *)(param_1 + 0xac);
  local_fe = 1;
  local_6c = 1;
  local_fd = *(undefined1 *)(param_1 + 0x98);
  local_63 = 4;
  puVar10 = (undefined8 *)FUN_14001cc68(0x110,0x10);
  plVar13 = *(longlong **)(*(longlong *)(param_1 + 0x90) + 0x10);
  plVar8 = (longlong *)0x0;
  if ((plVar13 != (longlong *)0x0) &&
     (plVar8 = (longlong *)0x0, *(char *)((longlong)plVar13 + 0x52) == '\0')) {
    plVar8 = plVar13;
  }
  *puVar10 = &PTR_FUN_14ab08680;
  puVar10[1] = &PTR_FUN_14ab086c8;
  puVar10[2] = plVar8;
  memcpy(puVar10 + 3,&local_128,200);
  puVar10[0x1d] = 0;
  puVar10[0x1e] = 0;
  puVar10[0x1f] = 0;
  puVar10[0x20] = 0;
  lVar9 = (**(code **)(*plVar8 + 8))(plVar8);
  bVar5 = *(byte *)(lVar9 + 0x33);
  uVar11 = (ulonglong)bVar5;
  *(byte *)(puVar10 + 0x1c) = bVar5;
  *(undefined1 *)((longlong)puVar10 + 0xe1) = *(undefined1 *)((longlong)puVar10 + 0x43);
  if (uVar11 < 0x39) {
    if ((0x1000080008000e0U >> (uVar11 & 0x3f) & 1) == 0) {
      if (uVar11 == 0x37) {
        bVar5 = 10;
      }
    }
    else {
      bVar5 = 0x25;
    }
  }
  *(byte *)((longlong)puVar10 + 0xe2) = bVar5;
  plVar13 = (longlong *)puVar10[2];
  local_168 = param_1;
  lVar9 = (**(code **)(*plVar13 + 8))(plVar13);
  if (*(int *)((longlong)puVar10 + 0xf4) < (int)(uint)*(byte *)(lVar9 + 0x30)) {
    FUN_147426a90(puVar10 + 0x1d);
    plVar13 = (longlong *)puVar10[2];
  }
  local_16c = iVar3 - uVar15;
  lVar9 = (**(code **)(*plVar13 + 8))(plVar13);
  if (*(char *)(lVar9 + 0x30) != '\0') {
    uVar15 = 0;
    do {
      plVar13 = (longlong *)puVar10[2];
      uStack_130 = 0;
      local_138 = 2;
      lVar9 = (**(code **)(*plVar13 + 8))(plVar13);
      if (*(byte *)(lVar9 + 0x32) < 5) {
        local_138._0_3_ =
             CONCAT12(local_138._2_1_ & 0x8f |
                      (byte)(0x4030502010 >> ((*(byte *)(lVar9 + 0x32) & 7) << 3)),
                      (undefined2)local_138);
      }
      uVar4 = local_138;
      local_138._0_4_ = CONCAT13((char)uVar15,(undefined3)local_138);
      local_138._5_3_ = SUB83(uVar4,5);
      local_138._0_5_ = CONCAT14(1,(undefined4)local_138);
      local_178 = &local_138;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_140,param_2,plVar13);
      iVar3 = *(int *)(puVar10 + 0x1e);
      *(uint *)(puVar10 + 0x1e) = iVar3 + 1U;
      if (*(uint *)((longlong)puVar10 + 0xf4) < iVar3 + 1U) {
        FUN_14178e592(puVar10 + 0x1d,iVar3);
      }
      *(undefined8 *)(puVar10[0x1d] + (longlong)iVar3 * 8) = local_140;
      uVar15 = uVar15 + 1;
      lVar9 = (**(code **)(*(longlong *)puVar10[2] + 8))();
    } while (uVar15 < *(byte *)(lVar9 + 0x30));
  }
  *(int *)(puVar10 + 0x21) = local_16c;
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_138,L"Renderer",1);
    uVar4 = local_138;
    uVar12 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar12,uVar4);
  }
  local_178 = puVar10;
  (**(code **)(*DAT_14cad8310 + 0x148))(DAT_14cad8310,&local_138,param_2,&local_128);
  *(undefined4 *)(local_168 + 0x88) = (undefined4)local_138;
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143790ab6 FUN_143790ab6 body=7326 status=ok
// SIG undefined FUN_143790ab6(void)

void FUN_143790ab6(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  longlong *plVar21;
  byte bVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined8 *puVar25;
  int iVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong uVar29;
  undefined2 uVar30;
  undefined8 *puVar31;
  int iVar32;
  bool bVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_268 [32];
  int *local_248;
  byte local_236;
  undefined1 local_235;
  uint local_234;
  longlong *local_230;
  ulonglong *local_228;
  byte local_219;
  ulonglong local_218;
  ulonglong local_210;
  longlong *local_208;
  ulonglong local_200;
  longlong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  uint local_1dc;
  ulonglong local_1d8;
  ulonglong local_1d0;
  longlong *local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  ulonglong local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined8 local_188;
  uint local_17c;
  int local_178;
  uint local_174;
  longlong local_170;
  longlong *local_168;
  longlong *local_160;
  int local_154;
  int local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  int local_134;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  uint local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined2 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    plVar28 = *(longlong **)(param_1 + 0xf0);
    local_168 = plVar28 + (longlong)*(int *)(param_1 + 0xf8) * 6;
    local_1c0 = param_2 + 0x178;
    local_228 = (ulonglong *)(param_2 + 0x70);
    local_208 = (longlong *)(param_2 + 0x98);
    local_1f8 = param_2 + 0x198;
    local_170 = param_2 + 0x168;
    fVar38 = 1.0;
    local_1b8 = param_1;
    do {
      local_198 = (longlong *)*plVar28;
      if (local_198 == (longlong *)0x0) {
        local_198 = (longlong *)0x0;
      }
      else if (*(char *)((longlong)local_198 + 0x52) != '\0') {
        local_198 = (longlong *)0x0;
      }
      plVar21 = (longlong *)0x0;
      uVar14 = (uint)*(byte *)(plVar28 + 5);
      local_1f0 = 0;
      if ((int)uVar14 < *(int *)(param_1 + 0xe8)) {
        local_1f0 = (ulonglong)uVar14;
      }
      local_230 = (longlong *)(ulonglong)uVar14;
      if ((int)uVar14 < *(int *)(param_1 + 0xe8)) {
        local_230 = plVar21;
      }
      bVar13 = *(byte *)(param_1 + 0xd9);
      uVar14 = (uint)bVar13;
      if ((*(byte *)(param_1 + 0xd8) != bVar13) &&
         (plVar21 = (longlong *)&DAT_00000001, bVar13 < 0x39)) {
        plVar21 = (longlong *)(0x7fff7fff7fff1f >> (bVar13 & 0x3f));
      }
      uVar17 = plVar28[4];
      uVar29 = ((uVar17 & 0x5555555555555555) >> 1 | uVar17 & 0x5555555555555555) &
               0x3333333333333333;
      uVar29 = (uVar29 >> 2 | uVar29) & 0xf0f0f0f0f0f0f0f;
      uVar29 = (uVar29 >> 4 | uVar29) & 0xff00ff00ff00ff;
      uVar29 = uVar29 >> 8 | uVar29;
      uVar17 = uVar17 & 0x2222222222222222 | uVar17 >> 1 & 0x4444444444444444;
      uVar17 = (uVar17 >> 3 | uVar17 >> 1) & 0xf0f0f0f0f0f0f0f;
      uVar17 = (uVar17 >> 4 | uVar17) & 0xff00ff00ff00ff;
      uVar17 = uVar17 >> 8 | uVar17;
      fVar36 = (float)(1 << (*(byte *)(plVar28 + 5) & 0x1f));
      fVar34 = (float)*(uint *)(param_1 + 0x28) / fVar36;
      fVar36 = (float)*(uint *)(param_1 + 0x2c) / fVar36;
      fVar40 = (float)(uVar17 & 0xffff | (ulonglong)((uint)(uVar17 >> 0x10) & 0xffff0000)) / fVar36;
      fVar39 = (float)(uVar29 & 0xffff | (ulonglong)((uint)(uVar29 >> 0x10) & 0xffff0000)) / fVar34;
      fVar36 = 1.0 / fVar36;
      fVar34 = 1.0 / fVar34;
      fVar37 = (float)*(uint *)(param_1 + 0x24) / (float)*(uint *)(param_1 + 0x20);
      fVar35 = fVar36 * fVar37;
      fVar37 = fVar37 * fVar34;
      fVar36 = fVar36 + fVar40 + fVar35;
      fVar34 = fVar34 + fVar39 + fVar37;
      fVar40 = fVar40 - fVar35;
      fVar39 = fVar39 - fVar37;
      if ((int)local_230 == 0) {
        bVar22 = (1.0 < fVar34 || fVar40 < 0.0) | (byte)plVar21 | fVar39 < 0.0 | 1.0 < fVar36;
        plVar21 = plVar28;
      }
      else {
        bVar22 = 0;
        plVar21 = (longlong *)0xff00ff00ff00ff;
      }
      uVar17 = 0;
      if ((uVar14 < 0x39) && ((0x1800080008000e0U >> ((ulonglong)uVar14 & 0x3f) & 1) != 0)) {
        uVar17 = (ulonglong)
                 (byte)(*(byte *)(param_1 + 0xd8) != bVar13 | bVar22 | (int)local_230 != 0);
      }
      local_1b0 = (longlong *)plVar28[1];
      uVar19 = *(uint *)(param_1 + 0x20) + *(uint *)(param_1 + 0x24) * 2;
      local_210 = (ulonglong)uVar19;
      uVar5 = *(int *)((longlong)plVar28 + 0x14) * uVar19;
      local_1d0 = (ulonglong)uVar5;
      uVar15 = (int)plVar28[2] * uVar19;
      local_1d8 = (ulonglong)uVar15;
      local_1a8 = (ulonglong)(uVar15 + uVar19);
      local_1a0 = (ulonglong)(uVar5 + uVar19);
      local_235 = *(undefined1 *)(param_1 + 0xda);
      local_1e8 = *(longlong *)(param_1 + 0xe0);
      local_188 = *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
      local_190 = plVar28;
      FUN_140100962(*(longlong *)(local_1e8 + local_1f0 * 8) + 0x18);
      uVar5 = (uint)uStack_120._2_1_;
      bVar33 = (uStack_120 & 0x10000) == 0;
      puVar23 = (undefined8 *)CONCAT71((int7)((ulonglong)plVar21 >> 8),bVar33);
      pbVar7 = (byte *)(**(code **)(*local_198 + 8))();
      puVar4 = local_228;
      local_236 = (*pbVar7 & 0x10) >> 4 & bVar33;
      uVar29 = (ulonglong)((uVar5 & 1) << 4);
      local_1dc = (uint)uVar17;
      local_234 = uVar14;
      if ((bVar22 & 1) == 0) {
        iVar24 = 0;
        if ((int)local_230 == 0) {
          bVar22 = 0;
          uVar29 = 0;
          fVar35 = fVar40;
          fVar37 = fVar39;
          uVar14 = (uint)bVar13;
        }
        else {
          local_178 = (int)local_230 + -1;
          local_219 = (byte)uVar17 ^ 1;
          local_160 = (longlong *)(uVar29 | 0x20008);
          local_17c = (uint)local_236 * 2;
          uVar17 = 0;
          fVar35 = fVar39;
          fVar37 = fVar40;
          do {
            puVar4 = local_228;
            bVar13 = (char)local_230 - (char)iVar24;
            local_174 = (int)local_210 << (bVar13 & 0x1f);
            iVar32 = (int)local_210 << (bVar13 - 1 & 0x1f);
            bVar13 = iVar24 == local_178 & local_219;
            local_200 = CONCAT71((int7)((ulonglong)puVar23 >> 8),bVar13);
            if (bVar13 == 1) {
              local_128 = local_1b0;
              if (local_1b0 != (longlong *)0x0) {
                (**(code **)(*local_1b0 + 0x30))();
              }
              local_218 = FUN_14473c272(param_2,&local_128,0);
              uVar14 = local_17c;
              if (local_128 != (longlong *)0x0) {
                (**(code **)(*local_128 + 0x38))();
                uVar14 = local_17c;
              }
            }
            else {
              local_110 = DAT_14ca85098;
              uStack_120 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
              local_118 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
              local_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
              local_f6 = 0;
              local_128 = local_160;
              local_f5 = local_235;
              local_f4 = 0xff00;
              local_fc = 0x10001;
              local_f8 = 0x101;
              local_108 = 0;
              local_104 = DAT_14ca84e40;
              if (iVar32 < DAT_14ca84e40) {
                local_104 = iVar32;
              }
              if (local_104 < 2) {
                local_104 = 1;
              }
              uVar18 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
              uVar29 = uVar18 + 0x120;
              local_100 = local_104;
              if (*(ulonglong *)(param_2 + 0x78) < uVar29) {
                FUN_140023dd8(local_228,0x128);
                uVar18 = *puVar4 + 7 & 0xfffffffffffffff8;
                uVar29 = uVar18 + 0x120;
              }
              *(ulonglong *)(param_2 + 0x70) = uVar29;
              FUN_1456bbb8c(uVar18,L"VirtualTextureAdapter.Downsample",&local_128,0);
              iVar20 = *(int *)(param_2 + 0x180);
              *(uint *)(param_2 + 0x180) = iVar20 + 1U;
              if (*(uint *)(param_2 + 0x184) < iVar20 + 1U) {
                FUN_14472c0f6(local_1c0,iVar20);
              }
              *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar20 * 8) = uVar18;
              *(int *)(uVar18 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
              uVar14 = 0;
              local_218 = uVar18;
            }
            FUN_145f0d8d6();
            FUN_1448e935e(local_188,&local_128,&DAT_14cb0fbe8,uVar17 == 0 | uVar14);
            FUN_145f0d8d6();
            puVar4 = local_228;
            local_148 = (undefined4)local_128;
            uStack_144 = local_128._4_4_;
            uStack_140 = (undefined4)uStack_120;
            uStack_13c = uStack_120._4_4_;
            puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar25 = puVar23 + 0xe;
            if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
              FUN_140023dd8(local_228,0x80);
              puVar23 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
              puVar25 = puVar23 + 0xe;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar25;
            *puVar23 = &PTR_FUN_14ab08758;
            puVar23[2] = 0;
            puVar23[3] = 0;
            puVar23[4] = 0;
            puVar23[5] = 0;
            puVar23[6] = 0;
            puVar23[7] = 0;
            iVar20 = *(int *)(param_2 + 0xa0);
            *(uint *)(param_2 + 0xa0) = iVar20 + 1U;
            if (*(uint *)(param_2 + 0xa4) < iVar20 + 1U) {
              FUN_1448cfae8(local_208,iVar20);
            }
            puVar4 = local_228;
            plVar28 = puVar23 + 2;
            *(undefined8 **)(*local_208 + (longlong)iVar20 * 8) = puVar23;
            if (uVar17 == 0) {
              lVar8 = *(longlong *)(local_1e8 + local_1f0 * 8);
              if (lVar8 == 0) {
                *plVar28 = 0;
              }
              else {
                LOCK();
                *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
                UNLOCK();
                *plVar28 = lVar8;
                LOCK();
                puVar1 = (uint *)(lVar8 + 8);
                uVar14 = *puVar1;
                *puVar1 = *puVar1 - 1;
                UNLOCK();
                if ((uVar14 & 0x3fffffff) == 1) {
                  puVar1 = (uint *)(lVar8 + 8);
                  LOCK();
                  uVar14 = *puVar1;
                  *puVar1 = *puVar1 | 0x40000000;
                  UNLOCK();
                  if ((uVar14 >> 0x1e & 1) == 0) {
                    bVar13 = *(byte *)(lVar8 + 0xd);
                    plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                    plVar10[1] = lVar8;
                    plVar21 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c8;
                    if ((bVar13 & 2) == 0) {
                      do {
                        *plVar10 = (longlong)plVar21;
                        LOCK();
                        bVar33 = plVar21 != DAT_14ca843c0;
                        plVar11 = plVar10;
                        if (bVar33) {
                          plVar21 = DAT_14ca843c0;
                          plVar11 = DAT_14ca843c0;
                        }
                        DAT_14ca843c0 = plVar11;
                        UNLOCK();
                        puVar31 = (undefined8 *)0x0;
                      } while (bVar33);
                    }
                    else {
                      do {
                        *plVar10 = (longlong)plVar11;
                        LOCK();
                        bVar33 = plVar11 != DAT_14ca843c8;
                        plVar21 = plVar10;
                        if (bVar33) {
                          plVar11 = DAT_14ca843c8;
                          plVar21 = DAT_14ca843c8;
                        }
                        DAT_14ca843c8 = plVar21;
                        UNLOCK();
                        puVar31 = (undefined8 *)0x0;
                      } while (bVar33);
                    }
                    goto LAB_143791342;
                  }
                }
              }
              puVar31 = (undefined8 *)0x0;
            }
            else {
              *plVar28 = 0;
              if ((*(char *)(uVar17 + 0x92) == '\x04') || (*(char *)(uVar17 + 0x92) == '\x01')) {
                uVar30 = *(undefined2 *)(uVar17 + 0x8e);
              }
              else {
                uVar30 = 0;
              }
              uVar2 = *(undefined1 *)(uVar17 + 0x90);
              puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
              puVar25 = puVar31 + 8;
              if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
                local_1c8 = plVar28;
                FUN_140023dd8(local_228,0x48);
                puVar31 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
                puVar25 = puVar31 + 8;
                plVar28 = local_1c8;
              }
              *(undefined8 **)(param_2 + 0x70) = puVar25;
              puVar31[1] = *(undefined8 *)(uVar17 + 8);
              puVar31[2] = 0;
              *(undefined1 *)(puVar31 + 3) = 1;
              *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
              *puVar31 = &PTR_FUN_14a203858;
              *(undefined2 *)(puVar31 + 5) = 0;
              *(undefined1 *)((longlong)puVar31 + 0x2a) = uVar2;
              *(undefined1 *)((longlong)puVar31 + 0x2b) = 0;
              *(undefined2 *)((longlong)puVar31 + 0x2c) = 0;
              *(undefined2 *)((longlong)puVar31 + 0x2e) = uVar30;
              *(undefined1 *)(puVar31 + 6) = 0;
              *(undefined1 *)((longlong)puVar31 + 0x32) = 0;
              puVar31[7] = uVar17;
              iVar20 = *(int *)(param_2 + 0x1a0);
              *(uint *)(param_2 + 0x1a0) = iVar20 + 1U;
              if (*(uint *)(param_2 + 0x1a4) < iVar20 + 1U) {
                FUN_1447568fc(local_1f8,iVar20);
              }
              *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar20 * 8) = puVar31;
              *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            }
LAB_143791342:
            puVar4 = local_228;
            puVar23[3] = puVar31;
            puVar23[4] = DAT_14c9c0de0;
            uVar2 = *(undefined1 *)(local_218 + 0x94);
            puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar25 = puVar31 + 9;
            if (*(undefined8 **)(param_2 + 0x78) < puVar25) {
              FUN_140023dd8(local_228,0x50);
              puVar31 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar25 = puVar31 + 9;
            }
            uVar14 = local_234;
            *(undefined8 **)(param_2 + 0x70) = puVar25;
            puVar31[1] = *(undefined8 *)(local_218 + 8);
            puVar31[2] = 0;
            *(undefined1 *)(puVar31 + 3) = 0;
            *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar31 + 5) = 0;
            *puVar31 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar31 + 6) = uVar2;
            *(undefined1 *)(puVar31 + 7) = 0;
            *(undefined4 *)((longlong)puVar31 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar31 + 0x35) = 0;
            puVar31[8] = local_218;
            iVar20 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar20 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar20 + 1U) {
              local_1c8 = plVar28;
              FUN_1447568fc(local_1f8,iVar20);
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar20 * 8) = puVar31;
            *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
            puVar23[5] = puVar31;
            *(float *)(puVar23 + 8) = fVar35;
            *(float *)((longlong)puVar23 + 0x44) = fVar37;
            *(float *)(puVar23 + 9) = (fVar34 - fVar35) / (float)local_174;
            *(float *)((longlong)puVar23 + 0x4c) = (fVar36 - fVar37) / (float)local_174;
            puVar23[10] = 0x3f00000040000000;
            uVar6 = 0;
            uVar16 = 0;
            iVar20 = iVar32;
            iVar27 = iVar32;
            if ((char)local_200 != '\0') {
              uVar6 = (undefined4)local_1d8;
              uVar16 = (undefined4)local_1d0;
              iVar20 = (int)local_1a8;
              iVar27 = (int)local_1a0;
            }
            *(undefined4 *)(puVar23 + 0xc) = uVar6;
            *(undefined4 *)((longlong)puVar23 + 100) = uVar16;
            *(int *)(puVar23 + 0xd) = iVar20;
            *(int *)((longlong)puVar23 + 0x6c) = iVar27;
            local_134 = iVar32 + 0xe;
            if (-1 < iVar32 + 7) {
              local_134 = iVar32 + 7;
            }
            local_134 = local_134 >> 3;
            local_12c = 1;
            local_248 = &local_134;
            local_130 = local_134;
            FUN_147dad168(param_2,&local_128);
            iVar24 = iVar24 + 1;
            fVar37 = 0.0;
            fVar35 = 0.0;
            uVar17 = local_218;
            fVar36 = fVar38;
            fVar34 = fVar38;
          } while (iVar24 != (int)local_230);
          uVar17 = (ulonglong)local_1dc;
          bVar22 = (byte)local_200;
          uVar29 = local_218;
          fVar36 = 1.0;
          fVar34 = 1.0;
        }
      }
      else {
        if ((uVar17 & 1) == 0) {
          local_128 = local_1b0;
          if (local_1b0 != (longlong *)0x0) {
            (**(code **)(*local_1b0 + 0x30))();
          }
          uVar29 = FUN_14473c272(param_2,&local_128,0);
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 0x38))();
          }
        }
        else {
          local_128 = (longlong *)(uVar29 | 0x20008);
          local_110 = DAT_14ca85098;
          uStack_120 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
          local_118 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
          local_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_f6 = 0;
          local_f5 = local_235;
          local_f4 = 0xff00;
          local_fc = 0x10001;
          local_f8 = 0x101;
          local_108 = 0;
          local_104 = DAT_14ca84e40;
          if ((int)local_210 < DAT_14ca84e40) {
            local_104 = (int)local_210;
          }
          if (local_104 < 2) {
            local_104 = 1;
          }
          uVar29 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar18 = uVar29 + 0x120;
          local_100 = local_104;
          if (*(ulonglong *)(param_2 + 0x78) < uVar18) {
            FUN_140023dd8(local_228,0x128);
            uVar29 = *puVar4 + 7 & 0xfffffffffffffff8;
            uVar18 = uVar29 + 0x120;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar18;
          FUN_1456bbb8c(uVar29,L"VirtualTextureAdapter.Downsample",&local_128,0);
          iVar24 = *(int *)(param_2 + 0x180);
          *(uint *)(param_2 + 0x180) = iVar24 + 1U;
          if (*(uint *)(param_2 + 0x184) < iVar24 + 1U) {
            FUN_14472c0f6(local_1c0,iVar24);
          }
          *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar24 * 8) = uVar29;
          *(int *)(uVar29 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        }
        uVar18 = uVar17 ^ 1;
        iVar24 = ((uint)uVar18 & 1) * 2 + 1;
        if ((local_236 & 1) == 0) {
          iVar24 = 1;
        }
        FUN_145f0d8d6();
        FUN_1448e935e(local_188,&local_128,&DAT_14cb0fbe8,iVar24);
        FUN_145f0d8d6();
        puVar4 = local_228;
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar23 = puVar25 + 0xe;
        if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
          FUN_140023dd8(local_228,0x80);
          puVar25 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
          puVar23 = puVar25 + 0xe;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar23;
        *puVar25 = &PTR_FUN_14ab08758;
        puVar25[2] = 0;
        puVar25[3] = 0;
        puVar25[4] = 0;
        puVar25[5] = 0;
        puVar25[6] = 0;
        puVar25[7] = 0;
        iVar24 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar24 + 1U;
        local_200 = uVar18;
        if (*(uint *)(param_2 + 0xa4) < iVar24 + 1U) {
          FUN_1448cfae8(local_208,iVar24);
        }
        puVar4 = local_228;
        *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar24 * 8) = puVar25;
        puVar25[2] = *(undefined8 *)(local_1e8 + local_1f0 * 8);
        puVar25[4] = DAT_14c9c0d80;
        uVar2 = *(undefined1 *)(uVar29 + 0x94);
        puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar23 = puVar31 + 9;
        if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
          FUN_140023dd8(local_228,0x50);
          puVar31 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar23 = puVar31 + 9;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar23;
        puVar31[1] = *(undefined8 *)(uVar29 + 8);
        puVar31[2] = 0;
        *(undefined1 *)(puVar31 + 3) = 0;
        *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar31 + 5) = 0;
        *puVar31 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar31 + 6) = uVar2;
        *(undefined1 *)(puVar31 + 7) = 0;
        *(undefined4 *)((longlong)puVar31 + 0x31) = 0;
        *(undefined2 *)((longlong)puVar31 + 0x35) = 0;
        puVar31[8] = uVar29;
        iVar24 = *(int *)(param_2 + 0x1a0);
        *(uint *)(param_2 + 0x1a0) = iVar24 + 1U;
        if (*(uint *)(param_2 + 0x1a4) < iVar24 + 1U) {
          FUN_1447568fc(local_1f8,iVar24);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar24 * 8) = puVar31;
        *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        puVar25[5] = puVar31;
        *(float *)(puVar25 + 8) = fVar39;
        *(float *)((longlong)puVar25 + 0x44) = fVar40;
        iVar20 = (int)local_210;
        *(float *)(puVar25 + 9) = (fVar34 - fVar39) / (float)(local_210 & 0xffffffff);
        *(float *)((longlong)puVar25 + 0x4c) = (fVar36 - fVar40) / (float)(local_210 & 0xffffffff);
        puVar25[10] = 0x3f800000;
        uVar6 = 0;
        uVar16 = 0;
        iVar24 = iVar20;
        iVar32 = iVar20;
        if ((uVar17 & 1) == 0) {
          uVar6 = (undefined4)local_1d8;
          uVar16 = (undefined4)local_1d0;
          iVar24 = (int)local_1a8;
          iVar32 = (int)local_1a0;
        }
        *(undefined4 *)(puVar25 + 0xc) = uVar6;
        *(undefined4 *)((longlong)puVar25 + 100) = uVar16;
        *(int *)(puVar25 + 0xd) = iVar24;
        *(int *)((longlong)puVar25 + 0x6c) = iVar32;
        local_134 = iVar20 + 0xe;
        if (-1 < iVar20 + 7) {
          local_134 = iVar20 + 7;
        }
        local_134 = local_134 >> 3;
        local_12c = 1;
        local_248 = &local_134;
        local_130 = local_134;
        FUN_147dad168(param_2,&local_148,&local_128,puVar25 + 2);
        fVar37 = 0.0;
        fVar35 = 0.0;
        bVar22 = (byte)local_200;
        fVar36 = fVar38;
        fVar34 = fVar38;
        uVar14 = local_234;
      }
      param_1 = local_1b8;
      if ((uVar17 & 1) == 0) {
        bVar22 = bVar22 & 1;
      }
      else {
        lVar8 = 0;
        do {
          if ((&DAT_14ab08778)[lVar8] == (char)uVar14) {
            iVar24 = (int)lVar8 + 1;
            goto LAB_14379185e;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 != 6);
        iVar24 = 0;
LAB_14379185e:
        uVar5 = (uint)local_236;
        local_218 = uVar29;
        FUN_145f0d8d6();
        FUN_1448e935e(local_188,&local_128,&DAT_14cb0fbe8,
                      (uVar5 & 1) * 2 + iVar24 * 4 | (uint)(uVar29 == 0));
        FUN_145f0d8d6();
        puVar4 = local_228;
        bVar22 = DAT_14ca84e27;
        local_148 = (undefined4)local_128;
        uStack_144 = local_128._4_4_;
        uStack_140 = (undefined4)uStack_120;
        uStack_13c = uStack_120._4_4_;
        if (DAT_14ca84e27 == 1) {
          local_128 = local_1b0;
          if (local_1b0 != (longlong *)0x0) {
            (**(code **)(*local_1b0 + 0x30))();
          }
          uVar29 = FUN_14473c272(param_2,&local_128,0);
          if (local_128 != (longlong *)0x0) {
            (**(code **)(*local_128 + 0x38))();
          }
        }
        else {
          local_f5 = 0x44;
          if (uVar14 != 0x27) {
            local_f5 = 0x30;
          }
          if (uVar14 == 5) {
            local_f5 = 0x44;
          }
          local_110 = DAT_14ca85098;
          iVar24 = (int)local_210;
          iVar32 = iVar24 + 3;
          if (-1 < iVar24) {
            iVar32 = iVar24;
          }
          uStack_120 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
          local_118 = (undefined *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
          local_10c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
          local_f6 = 0;
          local_128 = (longlong *)&DAT_00020008;
          local_f4 = 0xff00;
          local_fc = 0x10001;
          local_f8 = 0x101;
          local_108 = 0;
          local_104 = iVar32 >> 2;
          if (DAT_14ca84e40 <= iVar32 >> 2) {
            local_104 = DAT_14ca84e40;
          }
          if (local_104 < 2) {
            local_104 = 1;
          }
          uVar29 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
          uVar17 = uVar29 + 0x120;
          local_100 = local_104;
          if (*(ulonglong *)(param_2 + 0x78) < uVar17) {
            FUN_140023dd8(local_228,0x128);
            uVar29 = *puVar4 + 7 & 0xfffffffffffffff8;
            uVar17 = uVar29 + 0x120;
          }
          *(ulonglong *)(param_2 + 0x70) = uVar17;
          FUN_1456bbb8c(uVar29,L"VirtualTextureAdapter.Compress",&local_128,0);
          iVar24 = *(int *)(param_2 + 0x180);
          *(uint *)(param_2 + 0x180) = iVar24 + 1U;
          if (*(uint *)(param_2 + 0x184) < iVar24 + 1U) {
            FUN_14472c0f6(local_1c0,iVar24);
          }
          *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar24 * 8) = uVar29;
          *(int *)(uVar29 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
        }
        puVar4 = local_228;
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar23 = puVar25 + 0xe;
        if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
          FUN_140023dd8(local_228,0x80);
          puVar25 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
          puVar23 = puVar25 + 0xe;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar23;
        *puVar25 = &PTR_FUN_14ab08758;
        puVar25[2] = 0;
        puVar25[3] = 0;
        puVar25[4] = 0;
        puVar25[5] = 0;
        puVar25[6] = 0;
        puVar25[7] = 0;
        iVar24 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar24 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar24 + 1U) {
          FUN_1448cfae8(local_208,iVar24);
        }
        puVar4 = local_228;
        plVar28 = puVar25 + 2;
        *(undefined8 **)(*local_208 + (longlong)iVar24 * 8) = puVar25;
        if (local_218 == 0) {
          lVar8 = *(longlong *)(local_1e8 + local_1f0 * 8);
          if (lVar8 == 0) {
            *plVar28 = 0;
          }
          else {
            LOCK();
            *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
            UNLOCK();
            *plVar28 = lVar8;
            LOCK();
            puVar1 = (uint *)(lVar8 + 8);
            uVar14 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar14 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(lVar8 + 8);
              LOCK();
              uVar14 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar14 >> 0x1e & 1) == 0) {
                bVar13 = *(byte *)(lVar8 + 0xd);
                local_230 = plVar28;
                plVar10 = (longlong *)FUN_14001cc68(0x10,8);
                plVar10[1] = lVar8;
                plVar21 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c8;
                plVar28 = local_230;
                if ((bVar13 & 2) == 0) {
                  do {
                    *plVar10 = (longlong)plVar21;
                    LOCK();
                    bVar33 = plVar21 != DAT_14ca843c0;
                    plVar11 = plVar10;
                    if (bVar33) {
                      plVar21 = DAT_14ca843c0;
                      plVar11 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar11;
                    UNLOCK();
                    puVar31 = (undefined8 *)0x0;
                  } while (bVar33);
                }
                else {
                  do {
                    *plVar10 = (longlong)plVar11;
                    LOCK();
                    bVar33 = plVar11 != DAT_14ca843c8;
                    plVar21 = plVar10;
                    if (bVar33) {
                      plVar11 = DAT_14ca843c8;
                      plVar21 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar21;
                    UNLOCK();
                    puVar31 = (undefined8 *)0x0;
                  } while (bVar33);
                }
              }
              else {
                puVar31 = (undefined8 *)0x0;
                local_230 = plVar28;
              }
              goto LAB_14379221d;
            }
          }
          puVar31 = (undefined8 *)0x0;
        }
        else {
          *plVar28 = 0;
          if ((*(char *)(local_218 + 0x92) == '\x04') || (*(char *)(local_218 + 0x92) == '\x01')) {
            uVar30 = *(undefined2 *)(local_218 + 0x8e);
          }
          else {
            uVar30 = 0;
          }
          uVar2 = *(undefined1 *)(local_218 + 0x90);
          puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar23 = puVar31 + 8;
          if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
            local_230 = plVar28;
            FUN_140023dd8(local_228,0x48);
            puVar31 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar23 = puVar31 + 8;
            plVar28 = local_230;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar23;
          puVar31[1] = *(undefined8 *)(local_218 + 8);
          puVar31[2] = 0;
          *(undefined1 *)(puVar31 + 3) = 1;
          *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
          *puVar31 = &PTR_FUN_14a203858;
          *(undefined2 *)(puVar31 + 5) = 0;
          *(undefined1 *)((longlong)puVar31 + 0x2a) = uVar2;
          *(undefined1 *)((longlong)puVar31 + 0x2b) = 0;
          *(undefined2 *)((longlong)puVar31 + 0x2c) = 0;
          *(undefined2 *)((longlong)puVar31 + 0x2e) = uVar30;
          *(undefined1 *)(puVar31 + 6) = 0;
          *(undefined1 *)((longlong)puVar31 + 0x32) = 0;
          puVar31[7] = local_218;
          iVar24 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar24 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar24 + 1U) {
            local_230 = plVar28;
            FUN_1447568fc(local_1f8,iVar24);
            plVar28 = local_230;
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar24 * 8) = puVar31;
          *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        }
LAB_14379221d:
        puVar4 = local_228;
        puVar25[3] = puVar31;
        puVar25[4] = DAT_14c9c0de0;
        if ((local_234 == 0x27) || (local_234 == 5)) {
          puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
          puVar23 = puVar31 + 9;
          if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
            FUN_140023dd8(local_228,0x50);
            puVar31 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
            puVar23 = puVar31 + 9;
          }
          *(undefined8 **)(param_2 + 0x70) = puVar23;
          puVar31[1] = *(undefined8 *)(uVar29 + 8);
          puVar31[2] = 0;
          *(undefined1 *)(puVar31 + 3) = 0;
          *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
          *(undefined1 *)(puVar31 + 5) = 0;
          *puVar31 = &PTR_FUN_14a1fb948;
          *(undefined1 *)(puVar31 + 6) = 0x44;
          *(undefined1 *)(puVar31 + 7) = 0;
          *(undefined4 *)((longlong)puVar31 + 0x31) = 0;
          *(undefined2 *)((longlong)puVar31 + 0x35) = 0;
          puVar31[8] = uVar29;
          iVar24 = *(int *)(param_2 + 0x1a0);
          *(uint *)(param_2 + 0x1a0) = iVar24 + 1U;
          if (*(uint *)(param_2 + 0x1a4) < iVar24 + 1U) {
            local_230 = plVar28;
            FUN_1447568fc(local_1f8,iVar24);
            plVar28 = local_230;
          }
          *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar24 * 8) = puVar31;
          *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
        }
        else {
          puVar31 = (undefined8 *)0x0;
        }
        puVar4 = local_228;
        puVar25[6] = puVar31;
        if (local_234 == 5) {
          puVar23 = (undefined8 *)0x0;
        }
        else {
          puVar23 = (undefined8 *)0x0;
          if (local_234 != 0x27) {
            puVar23 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
            puVar31 = puVar23 + 9;
            if (*(undefined8 **)(param_2 + 0x78) < puVar31) {
              FUN_140023dd8(local_228,0x50);
              puVar23 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
              puVar31 = puVar23 + 9;
            }
            *(undefined8 **)(param_2 + 0x70) = puVar31;
            puVar23[1] = *(undefined8 *)(uVar29 + 8);
            puVar23[2] = 0;
            *(undefined1 *)(puVar23 + 3) = 0;
            *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
            *(undefined1 *)(puVar23 + 5) = 0;
            *puVar23 = &PTR_FUN_14a1fb948;
            *(undefined1 *)(puVar23 + 6) = 0x30;
            *(undefined1 *)(puVar23 + 7) = 0;
            *(undefined4 *)((longlong)puVar23 + 0x31) = 0;
            *(undefined2 *)((longlong)puVar23 + 0x35) = 0;
            puVar23[8] = uVar29;
            iVar24 = *(int *)(param_2 + 0x1a0);
            *(uint *)(param_2 + 0x1a0) = iVar24 + 1U;
            if (*(uint *)(param_2 + 0x1a4) < iVar24 + 1U) {
              local_230 = plVar28;
              FUN_1447568fc(local_1f8,iVar24);
              plVar28 = local_230;
            }
            *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar24 * 8) = puVar23;
            *(int *)((longlong)puVar23 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
          }
        }
        puVar25[7] = puVar23;
        *(float *)(puVar25 + 8) = fVar37;
        *(float *)((longlong)puVar25 + 0x44) = fVar35;
        iVar26 = (int)local_210;
        *(float *)(puVar25 + 9) = (fVar34 - fVar37) / (float)(local_210 & 0xffffffff);
        *(float *)((longlong)puVar25 + 0x4c) = (fVar36 - fVar35) / (float)(local_210 & 0xffffffff);
        puVar25[10] = 0x3f00000040800000;
        iVar24 = 0;
        iVar32 = 0;
        iVar20 = iVar26;
        iVar27 = iVar26;
        if (bVar22 != 0) {
          iVar32 = (int)local_1d8;
          iVar24 = iVar32 + 3;
          if (-1 < iVar32) {
            iVar24 = iVar32;
          }
          iVar24 = iVar24 >> 2;
          iVar20 = (int)local_1d0;
          iVar32 = iVar20 + 3;
          if (-1 < iVar20) {
            iVar32 = iVar20;
          }
          iVar32 = iVar32 >> 2;
          iVar27 = (int)local_1a8;
          iVar20 = iVar27 + 3;
          if (-1 < iVar27) {
            iVar20 = iVar27;
          }
          iVar20 = iVar20 >> 2;
          iVar3 = (int)local_1a0;
          iVar27 = iVar3 + 3;
          if (-1 < iVar3) {
            iVar27 = iVar3;
          }
          iVar27 = iVar27 >> 2;
        }
        *(int *)(puVar25 + 0xc) = iVar24;
        *(int *)((longlong)puVar25 + 100) = iVar32;
        *(int *)(puVar25 + 0xd) = iVar20;
        *(int *)((longlong)puVar25 + 0x6c) = iVar27;
        iVar24 = iVar26 + 3;
        if (-1 < iVar26) {
          iVar24 = iVar26;
        }
        iVar32 = (iVar24 >> 2) + 7;
        local_154 = (iVar24 >> 2) + 0xe;
        if (-1 < iVar32) {
          local_154 = iVar32;
        }
        local_154 = local_154 >> 3;
        local_14c = 1;
        local_248 = &local_154;
        local_150 = local_154;
        FUN_147dad168(param_2,&local_128,&local_148,plVar28);
      }
      lVar8 = local_1e8;
      uVar17 = local_1f0;
      if (bVar22 == 0) {
        local_218 = CONCAT71(local_218._1_7_,uVar29 == 0);
        if (uVar29 == 0) {
          lVar9 = (**(code **)(**(longlong **)(*(longlong *)(local_1e8 + local_1f0 * 8) + 0x10) + 8)
                  )();
          bVar13 = *(byte *)(*(longlong *)(lVar8 + uVar17 * 8) + 0x1b);
          fVar39 = fVar39 * (float)(*(uint *)(lVar9 + 0x24) >> (bVar13 & 0x1f));
          local_230 = (longlong *)CONCAT44(local_230._4_4_,(uint)bVar13);
          fVar40 = fVar40 * (float)(*(uint *)(lVar9 + 0x28) >> (bVar13 & 0x1f));
          local_200 = 0;
          iVar24 = (int)ROUND(fVar39 + fVar39 + -0.5) >> 1;
          iVar32 = (int)ROUND(fVar40 + fVar40 + -0.5) >> 1;
        }
        else {
          local_200 = (ulonglong)DAT_14c9a52a0;
          local_230 = (longlong *)((ulonglong)local_230 & 0xffffffff00000000);
          iVar24 = (int)DAT_14c9a5298;
          iVar32 = DAT_14c9a5298._4_4_;
        }
        puVar4 = local_228;
        if ((local_1dc & 1) != 0) {
          iVar20 = iVar24 + 3;
          if (-1 < iVar24) {
            iVar20 = iVar24;
          }
          iVar24 = iVar20 >> 2;
          iVar20 = iVar32 + 3;
          if (-1 < iVar32) {
            iVar20 = iVar32;
          }
          iVar32 = iVar20 >> 2;
          iVar20 = (int)local_200;
          iVar27 = iVar20 + 3;
          if (-1 < iVar20) {
            iVar27 = iVar20;
          }
          local_200 = (ulonglong)(uint)(iVar27 >> 2);
          iVar20 = (int)local_210;
          iVar27 = iVar20 + 3;
          if (-1 < iVar20) {
            iVar27 = iVar20;
          }
          local_210 = (ulonglong)(uint)(iVar27 >> 2);
        }
        puVar25 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar23 = puVar25 + 6;
        if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
          FUN_140023dd8(local_228,0x40);
          puVar25 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
          puVar23 = puVar25 + 6;
        }
        *(undefined8 **)(param_2 + 0x70) = puVar23;
        *puVar25 = &PTR_FUN_14ab08780;
        puVar25[2] = 0;
        puVar25[3] = 0;
        *(undefined4 *)(puVar25 + 4) = 0;
        iVar20 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar20 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar20 + 1U) {
          FUN_1448cfae8(local_208,iVar20);
        }
        *(undefined8 **)(*local_208 + (longlong)iVar20 * 8) = puVar25;
        if (uVar29 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = *(undefined8 *)(uVar29 + 0xac);
        }
        puVar25[2] = uVar29;
        puVar25[3] = uVar12;
        *(undefined4 *)(puVar25 + 4) = 0x80;
        lVar8 = *(longlong *)(local_1e8 + local_1f0 * 8);
        if (lVar8 != 0) {
          LOCK();
          *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
          UNLOCK();
        }
        FUN_147dad618();
        FUN_140069376(param_2);
        puVar4 = local_228;
        puVar31 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar23 = puVar31 + 0x43;
        if (*(undefined8 **)(param_2 + 0x78) < puVar23) {
          FUN_140023dd8(local_228,0x220);
          puVar31 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar23 = puVar31 + 0x43;
        }
        local_128 = puVar25 + 2;
        *local_228 = (ulonglong)puVar23;
        uStack_120 = DAT_14cb105f0;
        if (DAT_14cb105f0 != 0) {
          LOCK();
          *(int *)(DAT_14cb105f0 + 8) = *(int *)(DAT_14cb105f0 + 8) + 1;
          UNLOCK();
        }
        local_118 = &DAT_14cb105a8;
        local_248 = (int *)CONCAT71(local_248._1_7_,2);
        FUN_140068f1a(puVar31,&local_148,&local_128,0x18);
        *puVar31 = &PTR_FUN_14ab08790;
        *(undefined1 *)(puVar31 + 0x37) = (undefined1)local_218;
        puVar31[0x38] = lVar8;
        puVar31[0x39] = uVar29;
        puVar31[0x3a] = local_198;
        *(int *)(puVar31 + 0x3b) = (int)local_210;
        *(int *)((longlong)puVar31 + 0x1dc) = (int)local_210;
        *(undefined4 *)(puVar31 + 0x3c) = 0;
        *(int *)((longlong)puVar31 + 0x1e4) = iVar24;
        *(int *)(puVar31 + 0x3d) = iVar32;
        *(int *)((longlong)puVar31 + 0x1ec) = (int)local_200;
        *(int *)(puVar31 + 0x3e) = (int)local_1d8;
        *(int *)((longlong)puVar31 + 500) = (int)local_1d0;
        puVar31[0x3f] = 0;
        puVar31[0x40] = 0x100000000;
        *(undefined4 *)(puVar31 + 0x41) = local_230._0_4_;
        *(undefined8 *)((longlong)puVar31 + 0x20c) = 0x100000000;
        iVar24 = *(int *)(param_2 + 0x170);
        *(uint *)(param_2 + 0x170) = iVar24 + 1U;
        if (*(uint *)(param_2 + 0x174) < iVar24 + 1U) {
          FUN_14470e57a(local_170,iVar24);
        }
        *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar24 * 8) = puVar31;
        *(int *)((longlong)puVar31 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
        FUN_140069100(param_2);
        param_1 = local_1b8;
      }
      plVar28 = local_190 + 6;
    } while (plVar28 != local_168);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) < 0) {
    FUN_147dad886(param_1 + 0xf0);
  }
  if ((local_f0 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143792756 FUN_143792756 body=481 status=ok
// SIG undefined FUN_143792756(void)

void FUN_143792756(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_147dad3e0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143792938 FUN_143792938 body=232 status=ok
// SIG undefined FUN_143792938(void)

void FUN_143792938(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 143792a20 FUN_143792a20 body=81 status=ok
// SIG undefined FUN_143792a20(void)

void FUN_143792a20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_147dad483(param_1,param_2,lVar1);
  return;
}



// FUNCTION 143792a72 FUN_143792a72 body=174 status=ok
// SIG undefined FUN_143792a72(void)

undefined8 * FUN_143792a72(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14ab08790;
  lVar4 = param_1[0x38];
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
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143792b20 FUN_143792b20 body=767 status=ok
// SIG undefined FUN_143792b20(void)

void FUN_143792b20(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
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
  undefined4 uVar16;
  undefined4 uVar17;
  undefined8 *puVar18;
  undefined8 *_Dst;
  undefined8 *puVar19;
  undefined1 *_Src;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined1 local_a8 [4];
  undefined8 local_a4;
  undefined4 local_9c;
  undefined1 local_90;
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar19 + 0x11;
  if ((undefined8 *)param_2[1] < puVar18) {
    FUN_140023dd8(param_2,0x90);
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar19 + 0x11;
  }
  *param_2 = (ulonglong)puVar18;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar19;
  param_2[6] = (ulonglong)(puVar19 + 1);
  puVar19[1] = 0;
  *puVar19 = &PTR_FUN_14a1fb978;
  puVar19[3] = 0;
  *(int *)(puVar19 + 4) = (int)local_b0;
  if ((longlong)(int)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x24) = 8;
  }
  else {
    puVar18 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar18 = &local_c0;
    }
    FUN_1446fe144(puVar19 + 2,(int)local_b0,0);
    _Dst = (undefined8 *)puVar19[3];
    if ((undefined8 *)puVar19[3] == (undefined8 *)0x0) {
      _Dst = puVar19 + 2;
    }
    memcpy(_Dst,puVar18,(longlong)(int)local_b0);
  }
  puVar19[0xd] = 0;
  *(int *)(puVar19 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar19 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar19 + 5,local_60,0);
    puVar18 = (undefined8 *)puVar19[0xd];
    if ((undefined8 *)puVar19[0xd] == (undefined8 *)0x0) {
      puVar18 = puVar19 + 5;
    }
    memcpy(puVar18,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar19 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar19 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar19 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar19 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)
           (*(longlong *)(param_1 + 0x1c0 + (ulonglong)(*(byte *)(param_1 + 0x1b8) ^ 1) * 8) + 0x10)
  ;
  local_b0 = *(undefined8 *)(param_1 + 0x1d0);
  local_c0 = 0xffffffffffffffff;
  local_b8 = 0xffffffff;
  local_a8[0] = 1;
  local_a4 = 0x200000000070;
  local_9c = 0;
  local_90 = 0;
  local_c8 = 1;
  local_d0 = &local_c0;
  FUN_144760590(param_2,&local_d0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x1d0);
  puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar18 = puVar19 + 0xc;
  if ((undefined8 *)param_2[1] < puVar18) {
    FUN_140023dd8(param_2,0x68);
    puVar19 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar18 = puVar19 + 0xc;
  }
  *param_2 = (ulonglong)puVar18;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar19;
  param_2[6] = (ulonglong)(puVar19 + 1);
  puVar19[1] = 0;
  *puVar19 = &PTR_LAB_14a289d68;
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar4 = *(undefined4 *)(param_1 + 0x1e0);
  uVar5 = *(undefined4 *)(param_1 + 0x1e4);
  uVar6 = *(undefined4 *)(param_1 + 0x1e8);
  uVar7 = *(undefined4 *)(param_1 + 0x1ec);
  uVar8 = *(undefined4 *)(param_1 + 0x1f0);
  uVar9 = *(undefined4 *)(param_1 + 500);
  uVar10 = *(undefined4 *)(param_1 + 0x1f8);
  uVar11 = *(undefined4 *)(param_1 + 0x1fc);
  uVar12 = *(undefined4 *)(param_1 + 0x200);
  uVar13 = *(undefined4 *)(param_1 + 0x204);
  uVar14 = *(undefined4 *)(param_1 + 0x204);
  uVar15 = *(undefined4 *)(param_1 + 0x208);
  uVar16 = *(undefined4 *)(param_1 + 0x20c);
  uVar17 = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)(puVar19 + 2) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)((longlong)puVar19 + 0x14) = uVar3;
  *(undefined4 *)(puVar19 + 3) = uVar4;
  *(undefined4 *)((longlong)puVar19 + 0x1c) = uVar5;
  *(undefined4 *)(puVar19 + 4) = uVar6;
  *(undefined4 *)((longlong)puVar19 + 0x24) = uVar7;
  *(undefined4 *)(puVar19 + 5) = uVar8;
  *(undefined4 *)((longlong)puVar19 + 0x2c) = uVar9;
  *(undefined4 *)(puVar19 + 6) = uVar10;
  *(undefined4 *)((longlong)puVar19 + 0x34) = uVar11;
  *(undefined4 *)(puVar19 + 7) = uVar12;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = uVar13;
  *(undefined4 *)((longlong)puVar19 + 0x3c) = uVar14;
  *(undefined4 *)(puVar19 + 8) = uVar15;
  *(undefined4 *)((longlong)puVar19 + 0x44) = uVar16;
  *(undefined4 *)(puVar19 + 9) = uVar17;
  puVar19[10] = uVar1;
  puVar19[0xb] = uVar2;
  local_b0 = *(undefined8 *)(param_1 + 0x1d0);
  local_c0 = 0xffffffffffffffff;
  local_b8 = 0xffffffff;
  local_a8[0] = 1;
  local_a4 = 0x7000002000;
  local_9c = 0;
  local_90 = 0;
  local_c8 = 1;
  local_d0 = &local_c0;
  FUN_144760590(param_2,&local_d0,0);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143792e48 FUN_143792e48 body=282 status=ok
// SIG undefined FUN_143792e48(void)

undefined8 * FUN_143792e48(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 143792f62 FUN_143792f62 body=183 status=ok
// SIG undefined FUN_143792f62(void)

void FUN_143792f62(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *_Str;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[1] == 1) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)*param_1;
    }
    iVar1 = _wtoi(_Str);
    DAT_14c761eb4 = iVar1 != 0;
  }
  else {
    DAT_14c761eb4 = DAT_14c761eb4 ^ 1;
  }
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_18,L"Renderer",1);
    uVar2 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar2,local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000143792fd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14cad8310 + 0x1b8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 143793060 FUN_143793060 body=29 status=ok
// SIG undefined FUN_143793060(void)

undefined8 FUN_143793060(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143793092 FUN_143793092 body=85 status=ok
// SIG undefined FUN_143793092(void)

void FUN_143793092(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab09530;
  return;
}



// FUNCTION 1437930e8 FUN_1437930e8 body=85 status=ok
// SIG undefined FUN_1437930e8(void)

void FUN_1437930e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab09530;
  return;
}



// FUNCTION 14379313e FUN_14379313e body=118 status=ok
// SIG undefined FUN_14379313e(void)

void FUN_14379313e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ab09530;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437931a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437931b4 FUN_1437931b4 body=81 status=ok
// SIG undefined FUN_1437931b4(void)

void FUN_1437931b4(void)

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



// FUNCTION 143793206 FUN_143793206 body=83 status=ok
// SIG undefined FUN_143793206(void)

undefined8 FUN_143793206(void)

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



// FUNCTION 14379325a FUN_14379325a body=282 status=ok
// SIG undefined FUN_14379325a(void)

undefined8 * FUN_14379325a(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 143793374 FUN_143793374 body=43 status=ok
// SIG undefined FUN_143793374(void)

void FUN_143793374(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14379339f FUN_14379339f body=404 status=ok
// SIG undefined FUN_14379339f(void)

longlong * FUN_14379339f(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1437935fc(param_2,0);
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar4 = 0;
    lVar6 = 0;
    do {
      FUN_14379354d(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1437935fc(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1437936e8(param_2,iVar2);
        }
        lVar4 = (longlong)iVar2 * 0x20 + *param_2;
        FUN_1437936cc(lVar4);
        FUN_14379354d(param_1,lVar4);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143793534 FUN_143793534 body=25 status=ok
// SIG undefined FUN_143793534(void)

void FUN_143793534(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) << 4;
  if (iVar1 != *(int *)(param_1 + 0x104)) {
    *(int *)(param_1 + 0x104) = iVar1;
  }
  return;
}



// FUNCTION 14379354d FUN_14379354d body=175 status=ok
// SIG undefined FUN_14379354d(void)

void FUN_14379354d(longlong *param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,2);
    }
    else {
      FUN_1457251a8(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    *(undefined4 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_147daf6f0(param_1,param_2 + 4);
  return;
}



// FUNCTION 1437935fc FUN_1437935fc body=208 status=ok
// SIG undefined FUN_1437935fc(void)

void FUN_1437935fc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,4);
  }
  return;
}



// FUNCTION 1437936cc FUN_1437936cc body=27 status=ok
// SIG undefined FUN_1437936cc(void)

void FUN_1437936cc(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(undefined8 *)(param_1 + 0xc) = 0x400000000;
  return;
}



// FUNCTION 1437936e8 FUN_1437936e8 body=248 status=ok
// SIG undefined FUN_1437936e8(void)

void FUN_1437936e8(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1437937e0 FUN_1437937e0 body=37 status=ok
// SIG undefined FUN_1437937e0(void)

void FUN_1437937e0(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x100)) {
    *(undefined4 *)(param_1 + 0x104) = 0x10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143793806 FUN_143793806 body=54 status=ok
// SIG undefined FUN_143793806(void)

void FUN_143793806(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14379383c(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14379383c FUN_14379383c body=47 status=ok
// SIG undefined FUN_14379383c(void)

void FUN_14379383c(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14379386b FUN_14379386b body=432 status=ok
// SIG undefined FUN_14379386b(void)

longlong * FUN_14379386b(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  local_34 = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_34 = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar4 = local_34;
  if (local_34 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14379383c(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_143793b30(param_2,0);
      }
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x80000 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_143793a2f(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0x20;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_14379383c(*param_2,(int)param_2[1]);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(uint *)((longlong)param_2 + 0xc) != uVar4) {
      FUN_143793b30(param_2,uVar4);
    }
    if (0 < (int)local_34) {
      iVar6 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_143793c08(param_2,iVar2);
        }
        lVar5 = (longlong)iVar2 * 0x20 + *param_2;
        FUN_143793c00(lVar5);
        FUN_143793a2f(param_1,lVar5);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143793a1c FUN_143793a1c body=19 status=ok
// SIG undefined FUN_143793a1c(void)

void FUN_143793a1c(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (uint)(param_2 != 0) << 2;
  if (iVar1 != *(int *)(param_1 + 0x44)) {
    *(int *)(param_1 + 0x44) = iVar1;
  }
  return;
}



// FUNCTION 143793a2f FUN_143793a2f body=257 status=ok
// SIG undefined FUN_143793a2f(void)

longlong * FUN_143793a2f(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  FUN_140077068(param_1,param_2 + 4);
  return param_1;
}



// FUNCTION 143793b30 FUN_143793b30 body=208 status=ok
// SIG undefined FUN_143793b30(void)

void FUN_143793b30(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 143793c00 FUN_143793c00 body=8 status=ok
// SIG undefined FUN_143793c00(void)

void FUN_143793c00(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143793c08 FUN_143793c08 body=248 status=ok
// SIG undefined FUN_143793c08(void)

void FUN_143793c08(longlong param_1,int param_2)

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



// FUNCTION 143793d00 FUN_143793d00 body=31 status=ok
// SIG undefined FUN_143793d00(void)

void FUN_143793d00(longlong param_1,int param_2)

{
  if (param_2 <= *(int *)(param_1 + 0x40)) {
    *(undefined4 *)(param_1 + 0x44) = 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 143793d20 FUN_143793d20 body=95 status=ok
// SIG undefined FUN_143793d20(void)

void FUN_143793d20(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    *(undefined4 *)((longlong)param_1 + 0x2d) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x31) = 0xff;
    param_1[7] = DAT_14c845dbc;
    *(undefined4 *)(param_1 + 8) = DAT_14c845dc4;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
    param_1 = param_1 + 0x12;
  }
  return;
}



// FUNCTION 143793d80 FUN_143793d80 body=58 status=ok
// SIG undefined FUN_143793d80(void)

void FUN_143793d80(longlong *param_1,undefined8 param_2)

{
  FUN_143784bf8(*param_1 + 0xe8,param_2,*param_1 + 0x10);
  FUN_140e359b2(*param_1 + 0x10,param_2);
  FUN_1437809ce();
  return;
}



// FUNCTION 143793dc4 FUN_143793dc4 body=12 status=ok
// SIG undefined FUN_143793dc4(void)

void FUN_143793dc4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143793dcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143793dd0 FUN_143793dd0 body=29 status=ok
// SIG undefined FUN_143793dd0(void)

undefined8 FUN_143793dd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143793dee FUN_143793dee body=282 status=ok
// SIG undefined FUN_143793dee(void)

undefined8 * FUN_143793dee(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 143793f08 FUN_143793f08 body=190 status=ok
// SIG undefined FUN_143793f08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143793f08(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_143784bf8(_DAT_000000a8 + 0xe8,&DAT_14ca85100,_DAT_000000a8 + 0x10);
    FUN_140e359b2(_DAT_000000a8 + 0x10,&DAT_14ca85100);
    FUN_1437809ce();
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_143784bf8(param_1[0x15] + 0xe8,&DAT_14ca85100,param_1[0x15] + 0x10);
  FUN_140e359b2(param_1[0x15] + 0x10,&DAT_14ca85100);
  FUN_1437809ce();
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143793f73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 143793fc6 FUN_143793fc6 body=282 status=ok
// SIG undefined FUN_143793fc6(void)

undefined8 * FUN_143793fc6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14379017d);
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



// FUNCTION 1437940e0 FUN_1437940e0 body=25 status=ok
// SIG undefined FUN_1437940e0(void)

void FUN_1437940e0(void)

{
  FUN_14611ec3e();
  FUN_14170c56a(&DAT_14cb10008);
  return;
}



// FUNCTION 1437940fa FUN_1437940fa body=347 status=ok
// SIG undefined FUN_1437940fa(void)

ulonglong FUN_1437940fa(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  FUN_144757f48(lVar3,0x40000000);
  uVar2 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  do {
    uVar2 = *(uint *)(lVar5 + 8);
    uVar4 = (ulonglong)uVar2;
    if ((uVar2 >> 0x15 & 1) != 0) break;
    LOCK();
    uVar1 = *(uint *)(lVar5 + 8);
    if (uVar2 == uVar1) {
      *(uint *)(lVar5 + 8) = uVar2 | 0x200000;
    }
    else {
      uVar4 = (ulonglong)uVar1;
    }
    UNLOCK();
  } while (uVar2 != uVar1);
  if (lVar3 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_30 = &local_18;
      local_18 = &LAB_14355090c;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_147b8e16d;
      local_40 = &LAB_140810a38;
      local_48 = L"Engine";
      local_50 = 0x800000000;
      local_58 = 0x10000000;
      local_60 = 8;
      local_68 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    uVar4 = DAT_14cae8b20;
    if ((*(int *)(DAT_14cae8b20 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (uVar4 = DAT_14cae8b20 + 0x30,
       *(ulonglong *)
        (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8) == uVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143794266 FUN_143794266 body=66 status=ok
// SIG undefined FUN_143794266(void)

void FUN_143794266(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437942c0 FUN_1437942c0 body=187 status=ok
// SIG undefined FUN_1437942c0(void)

void FUN_1437942c0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_143794363;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143794363:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14379437c FUN_14379437c body=66 status=ok
// SIG undefined FUN_14379437c(void)

void FUN_14379437c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = *param_2;
  (*(code *)*param_1)(param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437943c0 FUN_1437943c0 body=39 status=ok
// SIG undefined FUN_1437943c0(void)

void FUN_1437943c0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar1 = *param_2;
  uVar2 = FUN_14143efda();
  plVar3 = (longlong *)FUN_144718840(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001437943e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 1437943e8 FUN_1437943e8 body=57 status=ok
// SIG undefined FUN_1437943e8(void)

undefined8 * FUN_1437943e8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab09650;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1437945a0 FUN_1437945a0 body=175 status=ok
// SIG undefined FUN_1437945a0(void)

void FUN_1437945a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14a1c8830;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ab09650;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143794650 FUN_143794650 body=175 status=ok
// SIG undefined FUN_143794650(void)

void FUN_143794650(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14a1c8830;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_14ab09650;
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  *(int *)(puVar2 + 6) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(puVar2 + 5,iVar1,0);
    memcpy((void *)puVar2[5],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  return;
}



// FUNCTION 143794700 FUN_143794700 body=214 status=ok
// SIG undefined FUN_143794700(void)

void FUN_143794700(longlong param_1,LPCRITICAL_SECTION param_2)

{
  int iVar1;
  PRTL_CRITICAL_SECTION_DEBUG p_Var2;
  undefined8 uVar3;
  void *_Src;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var2 = param_2[1].DebugInfo;
  *(undefined ***)p_Var2 = &PTR_LAB_14a1c8830;
  (p_Var2->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var2 = &PTR_FUN_14ab09650;
  (p_Var2->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var2->EntryCount = (int)uVar3;
  p_Var2->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  p_Var2->Flags = 0;
  p_Var2->CreatorBackTraceIndexHigh = 0;
  p_Var2->SpareWORD = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  _Src = *(void **)(param_1 + 0x28);
  p_Var2[1].Type = (short)iVar1;
  p_Var2[1].CreatorBackTraceIndex = (short)((uint)iVar1 >> 0x10);
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)&p_Var2[1].field_0x4 = 0;
  }
  else {
    FUN_1446dd670(&p_Var2->Flags,iVar1,0);
    memcpy(*(void **)&p_Var2->Flags,_Src,(longlong)iVar1 * 2);
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001437947c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1437947e0 FUN_1437947e0 body=269 status=ok
// SIG undefined FUN_1437947e0(void)

undefined8 FUN_1437947e0(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1437948e7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1437948e7;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1437948e7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14379489b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_1437948ee(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14379489b;
    }
  }
  uVar6 = 0;
LAB_14379489b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1437948ee FUN_1437948ee body=463 status=ok
// SIG undefined FUN_1437948ee(void)

void FUN_1437948ee(longlong *param_1)

{
  void *_Src;
  longlong *_Dst;
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong local_78;
  ulonglong uStack_70;
  longlong *local_68;
  ulonglong uStack_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(*param_1 + 0x1f0) != 0) {
    local_50 = (void *)0x0;
    local_48 = (int)param_1[2];
    lVar3 = (longlong)local_48;
    _Src = (void *)param_1[1];
    if (lVar3 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar3 * 2);
    }
    local_68 = (longlong *)0x0;
    uStack_60 = 0;
    iVar1 = FUN_1403de9f2(param_1 + 1,&local_68,&DAT_149e1423e,1);
    if (iVar1 < 2) {
      local_78 = 0;
      uStack_70 = 0;
      (**(code **)(**(longlong **)(*param_1 + 0x1f0) + 0x370))
                (*(longlong **)(*param_1 + 0x1f0),&local_50,0,&local_78);
      FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      iVar2 = 0;
      iVar1 = (int)local_68[1] + -1;
      if ((int)local_68[1] == 0) {
        iVar1 = 0;
      }
      FUN_1402980a2(&local_50,*local_68,iVar1);
      _Dst = local_68;
      if (*local_68 != 0) {
        FUN_1400020a8();
      }
      iVar1 = (int)uStack_60 + -1;
      if (iVar1 != 0) {
        iVar2 = 1;
        if (iVar1 < 1) {
          iVar2 = iVar1;
        }
        memmove(_Dst,_Dst + (longlong)((int)uStack_60 - iVar2) * 2,(longlong)iVar2 << 4);
        iVar2 = (int)uStack_60 + -1;
      }
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar2);
      FUN_140b12644(&local_68);
      (**(code **)(**(longlong **)(*param_1 + 0x1f0) + 0x370))
                (*(longlong **)(*param_1 + 0x1f0),&local_50,0,&local_68);
    }
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143794abe FUN_143794abe body=162 status=ok
// SIG undefined FUN_143794abe(void)

void FUN_143794abe(longlong *param_1,undefined8 param_2)

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
        goto LAB_143794b4b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143794b4b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 143794b76 FUN_143794b76 body=156 status=ok
// SIG undefined FUN_143794b76(void)

void FUN_143794b76(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1a8 [32];
  undefined **local_188 [5];
  byte local_15e;
  byte local_15d;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  uVar1 = *param_2;
  FUN_147d88e0e(local_188);
  local_30 = 0;
  local_e8 = 0;
  local_15d = local_15d | 6;
  local_15e = local_15e & 0x9b | 0x60;
  local_188[0] = &PTR_FUN_14ab092a0;
  local_f8 = uVar1;
  local_28 = param_1;
  FUN_147dae890(local_188);
  FUN_147d8229a(local_188);
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143794c14 FUN_143794c14 body=281 status=ok
// SIG undefined FUN_143794c14(void)

undefined8 FUN_143794c14(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
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
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_143794c63;
  }
  lVar1 = 0;
LAB_143794c63:
  *(longlong *)*param_1 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(longlong *)*param_1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143794d3c FUN_143794d3c body=236 status=ok
// SIG undefined FUN_143794d3c(void)

void FUN_143794d3c(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar7 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_48 = *(undefined8 *)(param_2 + 4);
        local_58 = *param_2;
        uStack_54 = param_2[1];
        uStack_50 = param_2[2];
        uStack_4c = param_2[3];
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,&local_58,param_3);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar6) goto LAB_143794ddd;
          goto LAB_143794e1d;
        }
      }
      uVar5 = uVar7 - 1;
      bVar6 = true;
    } while (1 < uVar7);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_143794e1d:
    FUN_14474d06a(param_1,0);
  }
LAB_143794ddd:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143794e2a FUN_143794e2a body=29 status=ok
// SIG undefined FUN_143794e2a(void)

undefined8 FUN_143794e2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143794e5c FUN_143794e5c body=93 status=ok
// SIG undefined FUN_143794e5c(void)

void FUN_143794e5c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a57d310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab099f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143794eba FUN_143794eba body=93 status=ok
// SIG undefined FUN_143794eba(void)

void FUN_143794eba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a57d310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab099f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143794f18 FUN_143794f18 body=126 status=ok
// SIG undefined FUN_143794f18(void)

void FUN_143794f18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a57d310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ab099f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143794f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143794f96 FUN_143794f96 body=65 status=ok
// SIG undefined FUN_143794f96(void)

void FUN_143794f96(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14379501c(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143794fd8 FUN_143794fd8 body=67 status=ok
// SIG undefined FUN_143794fd8(void)

undefined8 FUN_143794fd8(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_2;
  FUN_14379501c(param_1 + 0x18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379501c FUN_14379501c body=95 status=ok
// SIG undefined FUN_14379501c(void)

void FUN_14379501c(longlong *param_1,int *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*param_1 + 0x1e0) == *param_2) {
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0xffffffff;
    FUN_140becc00(*param_1,&local_28);
    FUN_14051bf10(&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143795092 FUN_143795092 body=8353 status=ok
// SIG undefined FUN_143795092(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143795092(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined1 local_a9;
  code *local_a8;
  code *pcStack_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aafa080,1,0);
  FUN_1446f470e(&DAT_14cb0f280,L"BPOnTalkingBegin",1);
  FUN_1446f470e(&DAT_14cb0f290,L"BPOnTalkingEnd",1);
  uStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aafb010,2,&PTR_FUN_14aafafe0);
  DAT_14cb0f310 = 0;
  DAT_14cb0f318 = 0;
  DAT_14cb0f2f0 = 0;
  _DAT_14cb0f2f8 = 0;
  _DAT_14cb0f31c = 0xffffffff00000080;
  DAT_14cb0f324 = 0;
  DAT_14cb0f330 = 0;
  DAT_14cb0f338 = 0;
  atexit(FUN_14377f2c6);
  local_a8._0_4_ = 0x40000000;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb0f340,L"voice.SilenceDetectionAttackTime",&local_a8,
                L"Attack time to be set for the VOIP microphone\'s silence detection algorithm in milliseconds.\n"
               );
  atexit(FUN_14377f2ef);
  local_a8._0_4_ = 0x44898000;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb0f358,L"voice.SilenceDetectionReleaseTime",&local_a8,
                L"Release time to be set for the VOIP microphone\'s silence detection algorithm in milliseconds.\n"
               );
  atexit(FUN_14377f334);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3da3d70a);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cb0f370,L"voice.SilenceDetectionThreshold",&local_a8,
                L"Threshold to be set for the VOIP microphone\'s silence detection algorithm.\n");
  atexit(FUN_14377f379);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0f388,L"voice.MicInputGain",&DAT_14c761e40,
                L"The default gain amount in linear amplitude.\nValue: Gain multiplier.");
  atexit(FUN_14377f3be);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0f398,L"voice.MicStereoBias",&DAT_14cb0f3a8,
                L"This will attenuate the left or right channel.\n0.0: Centered. 1.0: right channel only. -1.0: Left channel only."
               );
  atexit(FUN_14377f403);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0f3b0,L"voice.JitterBufferDelay",&DAT_14c761e44,
                L"The default amount of audio we buffer, in seconds, before we play back audio. Decreasing this value will decrease latency but increase the potential for underruns.\nValue: Number of seconds of audio we buffer."
               );
  atexit(FUN_14377f448);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0f3c0,L"voice.MicNoiseGateThreshold",&DAT_14c761e48,
                L"Our threshold, in linear amplitude, for  our noise gate on input. Similar to voice.SilenceDetectionThreshold, except that audio quieter than our noise gate threshold will still output silence.\nValue: Number of seconds of audio we buffer."
               );
  atexit(FUN_14377f48d);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0f3d0,L"voice.MicNoiseAttackTime",&DAT_14c761e4c,
                L"Sets the fade-in time for our noise gate.\nValue: Number of seconds we fade in over."
               );
  atexit(FUN_14377f4d2);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb0f3e0,L"voice.MicNoiseReleaseTime",&DAT_14c761e50,
                L"Sets the fade out time for our noise gate.\nValue: Number of seconds we fade out over."
               );
  atexit(FUN_14377f517);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0f3f0,L"voice.NumChannels",&DAT_14c761e54,
                L"Default number of channels to capture from mic input, encode to Opus, and output. Can be set to 1 or 2.\nValue: Number of channels to use for VOIP input and output."
               );
  atexit(FUN_14377f55c);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aafc370,1,0);
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14cb0f45c);
  if (cVar2 == '\0') {
    _DAT_14cb0f45c = 0;
    uRam000000014cb0f464 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  pcStack_a0 = FUN_144a92acc;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0f588,&local_a8);
  pcStack_a0 = FUN_144a949f2;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0f6b0,&local_a8);
  DAT_14cb0f6c8 = 0xffffffff;
  _DAT_14cb0f6cc = 0x105;
  DAT_14cb0f6ce = 0;
  DAT_14cb0f6d0 = 0;
  DAT_14cb0f6c0 = &PTR_FUN_14ab09500;
  FUN_14640e938();
  atexit(FUN_14377f612);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aafc940,1,0);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb0f6f0,L"r.SupportsVolumeTextureStreaming",&DAT_14c761e58,
                L"Enable Support of VolumeTexture Streaming\n");
  atexit(FUN_14377f7dc);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aafd1b0,1,0);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aafd720,1,0);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_c8._0_4_ = 0x24;
  FUN_140bd5914(&DAT_14cb0f730,L"r.MeshPaintVirtualTexture.Support",&local_a8,
                L"Build time support mesh painting with virtual textures");
  atexit(FUN_14377f8e9);
  local_a8 = (code *)0x0;
  pcStack_a0 = (code *)((ulonglong)pcStack_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14ab09530;
  local_a9 = 1;
  local_c8 = CONCAT44(local_c8._4_4_,0x20);
  FUN_140bd5914(&DAT_14cb0f748,L"r.MeshPaintVirtualTexture.Enable",&local_a9,
                L"Run time enable mesh painting with virtual textures");
  (**(code **)(*DAT_14cb0f750 + 200))(DAT_14cb0f750,&local_a8);
  if ((int)pcStack_a0 == 0) {
LAB_14379562a:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
    goto LAB_14379562a;
  }
  atexit(FUN_14377f92e);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb0f760,L"r.MeshPaintVirtualTexture.UseCompression",&local_a8,
                L"Whether mesh paint textures use a compressed format");
  atexit(FUN_14377f973);
  local_a8._0_4_ = 0x20;
  local_c8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb0f778,L"r.MeshPaintVirtualTexture.TileSize",&local_a8,
                L"Virtual texture tile size for mesh paint textures");
  atexit(FUN_14377f9b8);
  local_a8._0_4_ = 2;
  local_c8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb0f790,L"r.MeshPaintVirtualTexture.TileBorderSize",&local_a8,
                L"Virtual texture tile border size for mesh paint textures");
  atexit(FUN_14377f9fd);
  local_a8._0_4_ = 4;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14cb0f7a8,L"r.MeshPaintVirtualTexture.DefaultTexelsPerVertex",&local_a8,
                L"Default ratio of texels to vertices when creating a texture for a mesh");
  atexit(FUN_14377fa42);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x1000);
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  FUN_14078dbce(&DAT_14cb0f7c0,L"r.MeshPaintVirtualTexture.MaxTextureSize",&local_a8,
                L"Maximum allowed size for mesh paint textures");
  atexit(FUN_14377fa87);
  DAT_14cb0f818 = 0;
  DAT_14cb0f820 = 0;
  DAT_14cb0f7f8 = 0;
  _DAT_14cb0f800 = 0;
  _DAT_14cb0f824 = 0xffffffff00000080;
  DAT_14cb0f82c = 0;
  DAT_14cb0f838 = 0;
  DAT_14cb0f840 = 0;
  atexit(FUN_14377fb70);
  DAT_14cb0f848 = 0;
  DAT_14cb0f850 = 0;
  _DAT_14cb0f858 = 0xffffffff;
  _DAT_14cb0f860 = 0;
  atexit(FUN_14377fb99);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aafe910,1,0);
  local_a8._0_1_ = 1;
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb0f8b0,L"r.VT.RVT.EnableBaseColor",&local_a8,
                L"Enable \'Base Color\' RVT Material Type");
  atexit(FUN_143780540);
  local_a8._0_1_ = 1;
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb0f8c8,L"r.VT.RVT.EnableBaseColorRoughness",&local_a8,
                L"Enable \'Base Color, Normal, Roughness\' RVT Material Type");
  atexit(FUN_143780585);
  local_a8._0_1_ = 1;
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb0f8e0,L"r.VT.RVT.EnableBaseColorSpecular",&local_a8,
                L"Enable \'Base Color, Normal, Roughness, Specular\' family of RVT Material Types");
  atexit(FUN_1437805ca);
  local_a8._0_1_ = 1;
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb0f8f8,L"r.VT.RVT.EnableMask4",&local_a8,
                L"Enable \'Mask4\' RVT Material Type");
  atexit(FUN_14378060f);
  local_a8._0_1_ = 1;
  local_c8._0_4_ = 4;
  FUN_140bd5914(&DAT_14cb0f910,L"r.VT.RVT.EnableWorldHeight",&local_a8,
                L"Enable \'World Height\' RVT Material Type");
  atexit(FUN_143780654);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_c8 = CONCAT44(local_c8._4_4_,4);
  FUN_140bd5914(&DAT_14cb0f928,L"r.VT.RVT.EnableDisplacement",&local_a8,
                L"Enable \'Displacement\' RVT Material Type");
  atexit(FUN_143780699);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14aaff400,1,0);
  local_a8._0_4_ = 0x78;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0fa18,L"r.VT.CodecAgeThreshold",&local_a8,
                L"Mininum number of frames VT codec must be unused before possibly being retired");
  atexit(FUN_1437807c9);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,100);
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0fa30,L"r.VT.CodecNumThreshold",&local_a8,
                L"Once number of VT codecs exceeds this number, attempt to retire codecs that haven\'t been recently used"
               );
  atexit(FUN_14378080e);
  local_c8._0_4_ = 0;
  FUN_141471170(&DAT_14cb0fa48,L"r.VT.IOPriority_NormalPagePri",&DAT_14c761e8c,
                L"Priority of default priority VT I/O requests");
  atexit(FUN_143780853);
  local_c8 = (ulonglong)local_c8._4_4_ << 0x20;
  FUN_141471170(&DAT_14cb0fa58,L"r.VT.IOPriority_HighPagePri",&DAT_14c761e90,
                L"Priority of high priority VT I/O requests");
  atexit(FUN_143780898);
  _DAT_14cb0fa70 = 0;
  DAT_14cb0fa78 = 0;
  DAT_14cb0fa80 = 0;
  _DAT_14cb0fa90 = 0;
  uRam000000014cb0fa98 = 0;
  _DAT_14cb0faa0 = 0;
  uRam000000014cb0faa8 = 0;
  _DAT_14cb0fab0 = 0;
  uRam000000014cb0fab8 = 0;
  _DAT_14cb0fac0 = 0;
  uRam000000014cb0fac8 = 0;
  _DAT_14cb0facc = 0;
  uRam000000014cb0fad0 = 0;
  uRam000000014cb0fad4 = 0;
  atexit((_func_5014 *)&LAB_1437808dd);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab00830,4,0);
  local_a8 = (code *)0x0;
  pcStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)(local_a8 + 0x18) = FUN_14379058e;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb0fb48,L"r.VT.FlushAndEvictFileCache",
                L"Flush both the virtual texture physcial page cache and disk file cache",&local_a8)
  ;
  if ((int)pcStack_a0 == 0) {
LAB_143795b53:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
    goto LAB_143795b53;
  }
  atexit(FUN_14378137e);
  local_a8 = (code *)0x70884b49804e3f75;
  pcStack_a0 = (code *)0x3c7eb6dca4d68c06;
  _DAT_14cb0fb58 = 0x804e3f75;
  uRam000000014cb0fb5c = 0x70884b49;
  uRam000000014cb0fb60 = 0xa4d68c06;
  uRam000000014cb0fb64 = 0x3c7eb6dc;
  FUN_141005458(&local_a8,5,L"VirtualTextureBuiltDataVersion",0);
  atexit((_func_5014 *)&LAB_1437813c3);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab01000,1,0);
  pcStack_a0 = FUN_145f0d8d6;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14cb0fc98,&local_a8);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab01540,1,0);
  uStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 1;
  FUN_14282b410(L"/Script/Engine",0,0,&PTR_FUN_14ab01680);
  local_a8._0_4_ = 0x80;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0fcd8,L"r.VT.TileSize",&local_a8,
                L"Size in pixels to use for virtual texture tiles (rounded to next power-of-2)");
  atexit(FUN_1437813e3);
  local_a8._0_4_ = 4;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb0fcf0,L"r.VT.TileBorderSize",&local_a8,
                L"Size in pixels to use for virtual texture tiles borders (rounded to multiple-of-2)"
               );
  atexit(FUN_143781428);
  uStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 1;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab02210,1,&PTR_FUN_14ab021e0);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x3f800000);
  local_c8._0_4_ = 0x1060;
  FUN_140a6b41e(&DAT_14cb0fd48,L"r.VT.PoolSizeScale",&local_a8,
                L"Scale factor for virtual texture physical pool size.\n");
  atexit(FUN_143783b47);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_c8._0_4_ = 0x20;
  FUN_140bd5914(&DAT_14cb0fd60,L"r.VT.PoolAutoGrow",&local_a8,
                L"Enable physical pool growing on oversubscription.");
  atexit(FUN_143783b8c);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_c8 = CONCAT44(local_c8._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb0fd78,L"r.VT.SplitPhysicalPoolSize",&local_a8,
                L"Create multiple physical pools per format to keep pools at this maximum size in tiles.\nA value of 64 tiles will force 16bit page tables. This can be a page table memory optimization for large physical pools.\nDefaults to 0 (off)."
               );
  atexit(FUN_143783bd1);
  local_a8 = (code *)0x0;
  pcStack_a0 = (code *)((ulonglong)pcStack_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)(local_a8 + 0x18) = FUN_140dfbe49;
  FUN_141253d16(&DAT_14cb0fd98,&local_a8);
  if ((int)pcStack_a0 == 0) {
LAB_143795e2f:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
    goto LAB_143795e2f;
  }
  local_a8._0_4_ = 8;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fdb8,L"r.VT.MaxUploadsPerFrame",&local_a8,
                L"Max number of page uploads per frame in game");
  atexit(FUN_143784413);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fdd0,L"r.VT.MaxUploadsPerFrame.Streaming",&local_a8,
                L"If positive, max number of page uploads per frame in game for streaming VT. Negative means no limit.\nIf zero, SVTs won\'t be budgeted separately. They will be limited by r.VT.MaxUploadsPerFrame along with other types of VTs. This is the old behavior.\nThis limit should be high if streaming pages is slow so that I/O requests are not throttled which can cause long delays to acquire page data."
               );
  atexit(FUN_143784458);
  local_a8._0_4_ = 0x1e;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fde8,L"r.VT.MaxTilesProducedPerFrame",&local_a8,
                L"Max number of pages that can be produced per frame");
  atexit(FUN_14378449d);
  local_a8._0_4_ = 0xffffffff;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fe00,L"r.VT.MaxUploadsPerFrame.GbxBoost",&local_a8,
                L"GBX override value for r.VT.MaxUploadsPerFrame while SetVirtualTextureThrottlingEnabled() is being called\n-1: Do not override"
               );
  atexit(FUN_1437844e2);
  local_a8._0_4_ = 0xffffffff;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fe18,L"r.VT.MaxUploadsPerFrame.Streaming.GbxBoost",&local_a8,
                L"GBX override value for r.VT.MaxUploadsPerFrame.Streaming while SetVirtualTextureThrottlingEnabled() is being called\n-1: Do not override"
               );
  atexit(FUN_143784527);
  local_a8._0_4_ = 0xffffffff;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fe30,L"r.VT.MaxTilesProducedPerFrame.GbxBoost",&local_a8,
                L"GBX override value for r.VT.MaxTilesProducedPerFrame.GbxBoost while SetVirtualTextureThrottlingEnabled() is being called\n-1: Do not override"
               );
  atexit(FUN_14378456c);
  local_a8._0_4_ = 1;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fe48,L"r.VT.MaxContinuousUpdatesPerFrame",&local_a8,
                L"Max number of page uploads for pages that are already mapped.");
  atexit(FUN_1437845b1);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 0x60;
  FUN_14078dbce(&DAT_14cb0fe60,L"r.VT.MaxReleasedPerFrame",&local_a8,
                L"Max number of allocated virtual textures to release per frame");
  atexit(FUN_1437845f6);
  local_a8._0_4_ = 0x3c;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0fe78,L"r.VT.PageFreeThreshold",&local_a8,
                L"Number of frames since the last time a VT page was used, before it\'s considered free.\nVT pages are not necesarily marked as used on the CPU every time they\'re accessed by the GPU.\nIncreasing this threshold reduces the chances that an in-use frame is considered free."
               );
  atexit(FUN_14378463b);
  local_a8._0_4_ = 8;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0fe90,L"r.VT.RVT.DirtyPagesKeptMappedFrames",&local_a8,
                L"Number of frames since the last time a VT page was used, before it will be unmapped instead of simply updated during RVT page invalidation."
               );
  atexit(FUN_143784680);
  local_c8._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb0fea8,L"r.VT.RVT.TileCountBias",&DAT_14cb0feb8,
                L"Bias to apply to Runtime Virtual Texture size.\n Group 0");
  atexit(FUN_1437846c5);
  local_c8._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb0fec8,L"r.VT.RVT.TileCountBias.Group0",&DAT_14cb0feb8,
                L"Bias to apply to Runtime Virtual Texture size.\n Group 0");
  atexit(FUN_14378470a);
  local_c8._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb0fed8,L"r.VT.RVT.TileCountBias.Group1",&DAT_14cb0febc,
                L"Bias to apply to Runtime Virtual Texture size.\n Group 1");
  atexit(FUN_14378474f);
  local_c8._0_4_ = 0x40;
  FUN_1415c789c(&DAT_14cb0fee8,L"r.VT.RVT.TileCountBias.Group2",&DAT_14cb0fec0,
                L"Bias to apply to Runtime Virtual Texture size.\n Group 2");
  atexit(FUN_143784794);
  local_a8._0_4_ = 1;
  local_c8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb0fef8,L"r.VT.Mobile.ManualTrilinearFiltering",&local_a8,
                L"Whether to use a manual trilinear filtering for VTs on mobile platforms.\nThis more expensive filtering is used on mobile platforms that do not support Temporal Anti-Aliasing.\n"
               );
  atexit(FUN_1437847d9);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14cb0ff10,L"r.VT.AnisotropicFiltering",&local_a8,
                L"Is anisotropic filtering for VTs enabled?");
  atexit(FUN_14378481e);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,8);
  local_c8 = CONCAT44(local_c8._4_4_,0x60);
  FUN_14078dbce(&DAT_14cb0ff28,L"r.VT.MaxAnisotropy",&local_a8,
                L"MaxAnisotropy setting for Virtual Texture sampling.");
  atexit(FUN_143784863);
  local_a8 = (code *)0x0;
  pcStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)(local_a8 + 0x18) = FUN_1437848a8;
  FUN_141253d16(&DAT_14cb0ff40,&local_a8);
  if ((int)pcStack_a0 == 0) {
LAB_1437962a9:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
    goto LAB_1437962a9;
  }
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0ff88,L"r.VT.TranscodeRetireAge",&DAT_14c761e94,
                L"If a VT transcode request is not picked up after this number of frames, drop it and put request in cache as free. default 60\n"
               );
  atexit(FUN_143784b29);
  local_a8 = (code *)0x0;
  pcStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e001f0;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e00260;
  *(code **)(local_a8 + 0x18) = FUN_143792f62;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c7246(&DAT_14cb0ff98,L"r.VT.ShowDecodeErrors",
                L"Highlight virtual textures with decode errors in hot pink.",&local_a8);
  if ((int)pcStack_a0 == 0) {
LAB_1437963b8:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
    goto LAB_1437963b8;
  }
  atexit(FUN_143784b6e);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb0ffa8,L"r.VT.Borders",&DAT_14cb0ffb8,
                L"If > 0, debug borders will enabled\n");
  atexit(FUN_143784bb3);
  local_a8._0_4_ = 4;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0ffc0,L"r.VT.UploadMemoryPageSize",&local_a8,
                L"Size in MB for a single page of virtual texture upload memory.");
  atexit(FUN_143784e34);
  local_a8._0_4_ = 0x40;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cb0ffd8,L"r.VT.MaxUploadMemory",&local_a8,
                L"Maximum amount of upload memory to allocate in MB before throttling virtual texture streaming requests.\nWe never throttle high priority requests so allocation can peak above this value."
               );
  atexit(FUN_143784e79);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,2000);
  local_c8 = CONCAT44(local_c8._4_4_,0x20);
  FUN_14078dbce(&DAT_14cb0fff0,L"r.VT.MaxUploadRequests",&local_a8,
                L"Maximum number of virtual texture tile upload requests that can be in flight.");
  atexit(FUN_143784ebe);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1437940e0;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14cb10070,6,&local_a8);
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab04420,1,0);
  local_a8 = (code *)0x149fca2ba;
  pcStack_a0._0_5_ = 0xd;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb10090 = (ulonglong)uVar3;
  local_a8 = (code *)0x14a1e3c88;
  pcStack_a0._0_5_ = 10;
  uVar3 = FUN_14001a6c0(&local_a8,1);
  _DAT_14cb10098 = (ulonglong)uVar3;
  local_a8 = (code *)&DAT_14a19662d;
  pcStack_a0 = (code *)CONCAT35(pcStack_a0._5_3_,4);
  FUN_14001a6c0(&local_a8,1);
  uStack_c0 = 0;
  local_b8 = 0;
  local_c8 = 5;
  FUN_14282b410(L"/Script/Engine",&PTR_FUN_14ab06030,1,&PTR_FUN_14ab05f60);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb10148,L"LevelStreaming.MaximumMakingVisibleLevels",&DAT_14c761e98,
                L"Sets the maximum number of levels in the process of being made visible (default is 1). \nCan be used in conjunction with incremental component pre-registration & asynchronous physics state creation \nand set to a value greater than 1 to maximize the usage of the time limit allowed by s.LevelStreamingActorsUpdateTimeLimit \n(see p.Chaos.EnableAsyncInitBody and LevelStreaming.AllowIncrementalPreRegisterComponents)."
               );
  atexit(FUN_143785d8c);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb10158,L"LevelStreaming.MaximumMakingInvisibleLevels",&DAT_14c761e9c,
                L"Sets the maximum number of levels in the process of being made invisible (default is 1). \nCan be used in conjunction with incremental component pre-unregistration & asynchronous physics state destruction \nand set to a value greater than 1 to maximize the usage of the time limit allowed by s.UnregisterComponentsTimeLimit \n(see p.Chaos.EnableAsyncInitBody and LevelStreaming.AllowIncrementalPreUnregisterComponents)."
               );
  atexit(FUN_143785dd1);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb10168,L"LevelStreaming.VisibilityPrioritySort",&DAT_14cb10178,
                L"Defines how to sort the priority of handling different streaming level requests\n-1 - Do not sort at all\n0 - Default behavior of sorting all add to world requests before removes\n1 - Sort removes before adds, this is better for memory usage\n2 - Interleave adds and removes, starting with add\n3 - Interleave adds and removes, starting with remove\n"
               );
  atexit(FUN_143785e16);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb10180,L"net.DisableRemapScriptActors",&DAT_14cb10190,
                L"When set, disables name remapping of compiled script actors (for networking)");
  atexit(FUN_143785e5b);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb10198,L"s.World.SkipPerfTrackerForUninitializedWorlds",&DAT_14c761ea0,
                L"When set, disables allocation of InGamePerformanceTrackers for Worlds that aren\'t initialized."
               );
  atexit(FUN_143785ea0);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb101a8,L"s.World.CreateStaticLevelCollection",&DAT_14cb101b8,
                L"When set, create a separate level collection for static streaming levels that will not be duplicated by DuplicateRequestedLevels.\nIf this is 0, static streaming levels will be part of the main DynamicSourceLevels collection."
               );
  atexit(FUN_143785ee5);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb101c0,L"s.World.ForceFlushAllAsyncLoadsDuringLevelStreaming",&DAT_14cb101d0
                ,L"When set, level streaming will wait for all outstanding async loads globally.");
  atexit(FUN_143785f2a);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cb101d8,L"r.PurgeEditorSceneDuringPIE",&local_a8,
                L"0 to keep editor scene fully initialized during PIE (default)\n1 to purge editor scene from memory during PIE and restore when the session finishes."
               );
  atexit(FUN_143785f6f);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb101f0,L"gbx.UseGlobalCullDistanceSettings",&DAT_14cb10200,
                L"When enabled, render setting \"CullDistances\"  will be applied to meshes not inside of Cull Distance Volumes"
               );
  atexit(FUN_143785fb4);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb10208,L"s.AdaptiveAddToWorld.Enabled",&DAT_14cb10218,
                L"Enables the adaptive AddToWorld timeslice (replaces s.LevelStreamingActorsUpdateTimeLimit) (default: off)"
               );
  atexit(FUN_143785ff9);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb10220,L"s.AdaptiveAddToWorld.Method",&DAT_14c761ea4,
                L"Heuristic to use for the adaptive timeslice\n0 - compute the target timeslice based on remaining work time\n1 - compute the target timeslice based on total work time for levels in flight (this avoids slowing before a level completes)\n"
               );
  atexit(FUN_14378603e);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb10230,L"s.AdaptiveAddToWorld.AddToWorldTimeSliceMin",&DAT_14c761ea8,
                L"Minimum adaptive AddToWorld timeslice");
  atexit(FUN_143786083);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb10240,L"s.AdaptiveAddToWorld.AddToWorldTimeSliceMax",&DAT_14c761eac,
                L"Maximum adaptive AddToWorld timeslice");
  atexit(FUN_1437860c8);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb10250,L"s.AdaptiveAddToWorld.TargetMaxTimeRemaining",&DAT_14c761eb0,
                L"Target max time remaining in seconds. If our estimated completion time is longer than this, the timeslice will increase. Lower values are more aggressive"
               );
  atexit(FUN_14378610d);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb10260,L"s.AdaptiveAddToWorld.TimeSliceMaxIncreasePerSecond",&DAT_14cb10270,
                L"Max rate at which the adptive AddToWorld timeslice will increase. Set to 0 to increase instantly"
               );
  atexit(FUN_143786152);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cb10278,L"s.AdaptiveAddToWorld.TimeSliceMaxReducePerSecond",&DAT_14cb10288,
                L"Max rate at which the adptive AddToWorld timeslice will reduce. Set to 0 to reduce instantly"
               );
  atexit(FUN_143786197);
  memset(&DAT_14cb10290,0,0xd0);
  DAT_14cb10360 = 0x3f800000;
  _DAT_14cb10364 = 0;
  uRam000000014cb1036c = 0;
  DAT_14cb10374 = 0;
  DAT_14cb10778 = 0;
  _DAT_14cb10780 = 0;
  _DAT_14cb10788 = 2;
  atexit(FUN_1437861dc);
  DAT_14cb10790 = 0;
  _DAT_14cb10798 = 0;
  _DAT_14cb107a0 = 2;
  atexit(FUN_14378620d);
  DAT_14cb10918 = 0;
  DAT_14cb108e8 = 0;
  _DAT_14cb108f0 = 0;
  DAT_14cb108c8 = 0;
  _DAT_14cb108d0 = 0;
  _DAT_14cb108f4 = 0xffffffff00000080;
  DAT_14cb108fc = 0;
  DAT_14cb10908 = 0;
  DAT_14cb10910 = 0;
  atexit(FUN_14378623e);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10998);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb10998,4000);
  DAT_14cb109c0 = 0;
  _DAT_14cb109c8 = 0;
  _DAT_14cb109d0 = 2;
  atexit(FUN_143786267);
  DAT_14cb109f0 = 0;
  _DAT_14cb109f8 = 0;
  _DAT_14cb10a00 = 2;
  atexit(FUN_1437862a2);
  DAT_14cb10980 = 0;
  _DAT_14cb10988 = 0;
  _DAT_14cb10990 = 2;
  atexit(FUN_1437862d3);
  DAT_14cb109d8 = 0;
  _DAT_14cb109e0 = 0;
  _DAT_14cb109e8 = 2;
  atexit(FUN_143786304);
  DAT_14cb10a20 = 0;
  _DAT_14cb10a28 = 0;
  _DAT_14cb10a30 = 2;
  atexit(FUN_143786335);
  DAT_14cb10a08 = 0;
  _DAT_14cb10a10 = 0;
  _DAT_14cb10a18 = 2;
  atexit(FUN_143786366);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10a38);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb10a38,4000);
  DAT_14cb10a60 = 0;
  _DAT_14cb10a68 = 0;
  _DAT_14cb10a70 = 2;
  atexit(FUN_143786397);
  DAT_14cb10a78 = 0;
  _DAT_14cb10a80 = 0;
  _DAT_14cb10a88 = 2;
  atexit(FUN_1437863d2);
  DAT_14cb108b0 = 0;
  _DAT_14cb108b8 = 0;
  _DAT_14cb108c0 = 2;
  atexit(FUN_143786403);
  DAT_14cb10a90 = 0;
  _DAT_14cb10a98 = 0;
  _DAT_14cb10aa0 = 2;
  atexit(FUN_143786434);
  DAT_14cb107c0 = 0;
  _DAT_14cb107c8 = 0;
  _DAT_14cb107d0 = 2;
  atexit(FUN_143786465);
  DAT_14cb107d8 = 0;
  _DAT_14cb107e0 = 0;
  _DAT_14cb107e8 = 2;
  atexit(FUN_143786496);
  DAT_14cb107f0 = 0;
  _DAT_14cb107f8 = 0;
  _DAT_14cb10800 = 2;
  atexit(FUN_1437864c7);
  DAT_14cb10880 = 0;
  _DAT_14cb10888 = 0;
  _DAT_14cb10890 = 2;
  atexit(FUN_1437864f8);
  DAT_14cb10378 = 0;
  _DAT_14cb10380 = 0;
  _DAT_14cb10388 = 2;
  atexit(FUN_143786529);
  DAT_14cb10390 = 0;
  _DAT_14cb10398 = 0;
  _DAT_14cb103a0 = 2;
  atexit(FUN_14378655a);
  DAT_14cb10838 = 0;
  _DAT_14cb10840 = 0;
  _DAT_14cb10848 = 2;
  atexit(FUN_14378658b);
  DAT_14cb10808 = 0;
  _DAT_14cb10810 = 0;
  _DAT_14cb10818 = 2;
  atexit(FUN_1437865bc);
  DAT_14cb10850 = 0;
  _DAT_14cb10858 = 0;
  _DAT_14cb10860 = 2;
  atexit(FUN_1437865ed);
  DAT_14cb10868 = 0;
  _DAT_14cb10870 = 0;
  _DAT_14cb10878 = 2;
  atexit(FUN_14378661e);
  DAT_14cb10820 = 0;
  _DAT_14cb10828 = 0;
  _DAT_14cb10830 = 2;
  atexit(FUN_14378664f);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10ae8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb10ae8,4000);
  DAT_14cb10b10 = 0;
  _DAT_14cb10b18 = 0;
  _DAT_14cb10b20 = 2;
  atexit(FUN_143786680);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14cb10aa8);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14cb10aa8,4000);
  DAT_14cb10ad0 = 0;
  _DAT_14cb10ad8 = 0;
  _DAT_14cb10ae0 = 2;
  atexit(FUN_1437866bb);
  DAT_14cb10968 = 0;
  _DAT_14cb10970 = 0;
  _DAT_14cb10978 = 2;
  atexit(FUN_1437866f6);
  DAT_14cb103a8 = 0;
  _DAT_14cb103b0 = 0;
  _DAT_14cb103b8 = 2;
  atexit(FUN_143786727);
  DAT_14cb10898 = 0;
  _DAT_14cb108a0 = 0;
  _DAT_14cb108a8 = 2;
  atexit(FUN_143786758);
  DAT_14cb103c0 = 0;
  _DAT_14cb103c8 = 0;
  _DAT_14cb103d0 = 2;
  atexit(FUN_143786789);
  DAT_14cb107a8 = 0;
  _DAT_14cb107b0 = 0;
  _DAT_14cb107b8 = 2;
  atexit(FUN_1437867ba);
  DAT_14cb10950 = 0;
  _DAT_14cb10958 = 0;
  _DAT_14cb10960 = 2;
  _DAT_14cb10964 = 0;
  atexit(FUN_1437867eb);
  DAT_14cb10920 = 0;
  _DAT_14cb10928 = 0;
  _DAT_14cb10930 = 2;
  _DAT_14cb10934 = 0;
  atexit(FUN_14378681c);
  DAT_14cb103e0 = 0;
  _DAT_14cb103e8 = 0;
  DAT_14cb103f0 = 2;
  DAT_14cb103f4 = 0;
  atexit(FUN_14378684d);
  DAT_14cb10938 = 0;
  _DAT_14cb10940 = 0;
  _DAT_14cb10948 = 2;
  _DAT_14cb1094c = 0;
  atexit(FUN_14378687e);
  local_a8 = (code *)0x0;
  pcStack_a0 = (code *)((ulonglong)pcStack_a0 & 0xffffffff00000000);
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)(local_a8 + 0x18) = FUN_143788e5b;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14152bcb8(&DAT_14cb10420,L"ForceBuildStreamingData",
                L"Forces streaming data to be rebuilt for the current world.",&local_a8);
  if ((int)pcStack_a0 == 0) {
LAB_143796df9:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
    goto LAB_143796df9;
  }
  atexit(FUN_143788f46);
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb10438,L"gbx.EnableIncrementalSeamlessTravel",&DAT_14cb10448,
                L"Enables incremental seamless travel");
  atexit(FUN_14378bfe9);
  local_a8 = (code *)0x0;
  pcStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14a1e19d0;
  *(code **)(local_a8 + 0x18) = FUN_14378f6f3;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cb10450,L"DumpVisibleActors",L"Dump visible actors in current world.",
                &local_a8);
  if ((int)pcStack_a0 == 0) {
LAB_143796f14:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
    goto LAB_143796f14;
  }
  atexit(FUN_14378f7a0);
  local_a8 = (code *)0x0;
  pcStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  pcStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a1e1a40;
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
  *(longlong *)(local_a8 + 0x10) = lVar4;
  *(undefined ***)local_a8 = &PTR_FUN_14a1e19d0;
  *(undefined **)(local_a8 + 0x18) = &DAT_14378f7e5;
  local_c8 = local_c8 & 0xffffffff00000000;
  FUN_14156bb80(&DAT_14cb10460,L"DumpLevelCollections",
                L"Dump level collections in the current world.",&local_a8);
  if ((int)pcStack_a0 != 0) {
    if (local_a8 == (code *)0x0) goto LAB_143797000;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    pcStack_a0._0_4_ = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_143797000:
  atexit(FUN_14378f7e6);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143797134 FUN_143797134 body=755 status=ok
// SIG undefined FUN_143797134(void)

void FUN_143797134(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_108 [40];
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((longlong)*(int *)(param_1 + 0x40) == 0) {
LAB_1437973f2:
    if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  lVar8 = *(longlong *)(param_1 + 0x38);
  local_e0 = (longlong)*(int *)(param_1 + 0x40) * 200 + lVar8;
LAB_143797198:
  local_98 = 0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0x80;
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  *(undefined4 *)(lVar8 + 0x2c) = DAT_14c9a52a0;
  *(undefined8 *)(lVar8 + 0x24) = DAT_14c9a5298;
  lVar5 = lVar8;
  do {
    lVar10 = lVar5;
    *(int *)(lVar8 + 0x24) = *(int *)(lVar8 + 0x24) + *(int *)(lVar10 + 0x18);
    *(int *)(lVar8 + 0x28) = *(int *)(lVar8 + 0x28) + *(int *)(lVar10 + 0x1c);
    *(int *)(lVar8 + 0x2c) = *(int *)(lVar8 + 0x2c) + *(int *)(lVar10 + 0x20);
    FUN_144a13f80(&local_b8,&local_d0,lVar10,0);
    puVar6 = &DAT_149dfb77a;
    if (*(int *)(lVar10 + 0xa0) != 0) {
      puVar6 = *(undefined2 **)(lVar10 + 0x98);
    }
    FUN_1446f470e(&local_c0,puVar6,1);
    lVar5 = FUN_147db1978(param_1,&local_c0);
    if (lVar5 == 0) break;
    if ((int)uStack_b0 != local_84) {
      uVar3 = (uint)((ulonglong)local_c0 >> 0x10);
      uVar9 = (uint)local_c0 & 0xffff;
      puVar7 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar7 = local_80;
      }
      iVar2 = *(int *)(puVar7 + (ulonglong)
                                (local_70 - 1U &
                                (int)((ulonglong)local_c0 >> 0x20) +
                                ((uint)local_c0 << 0x10 | uVar9) + (uVar3 << 0x13 | uVar3 & 0xffff)
                                + (uVar9 >> 4)) * 4);
      while (iVar2 != -1) {
        lVar1 = local_b8 + (longlong)iVar2 * 0x10;
        if (*(longlong *)(local_b8 + (longlong)iVar2 * 0x10) == local_c0) {
          if (lVar1 != 0) {
            local_d8 = 0;
            FUN_1400021e4(&local_d8,&local_d0);
            if ((longlong *)(lVar10 + 0x98) == &local_d0) {
              if (local_d0 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(lVar10 + 0x98) != 0) {
                FUN_1400020a8();
              }
              *(longlong *)(lVar10 + 0x98) = local_d0;
              local_d0 = 0;
              *(undefined4 *)(lVar10 + 0xa0) = local_c8;
              *(undefined4 *)(lVar10 + 0xa4) = local_c4;
            }
            goto LAB_143797351;
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 8);
      }
    }
  } while( true );
LAB_143797351:
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar4 = uStack_b0 >> 0x20;
  uStack_b0 = uStack_b0 & 0xffffffff00000000;
  if ((int)uVar4 != 0) {
    FUN_14472eb64(&local_b8,0);
  }
  uStack_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    FUN_1446efbd8(local_a8,0);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  lVar8 = lVar8 + 200;
  if (lVar8 == local_e0) goto LAB_1437973f2;
  goto LAB_143797198;
}



// FUNCTION 143797428 FUN_143797428 body=312 status=ok
// SIG undefined FUN_143797428(void)

void FUN_143797428(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    if (*param_2 == 0) {
      return;
    }
    puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *puVar3 = DAT_14c89603c;
    *(undefined4 *)(puVar3 + 1) = 1;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[6] = 0;
    *(undefined8 **)(param_1 + 0x48) = puVar3;
    lVar4 = *param_2;
    if (puVar3 + 6 != param_2) {
      puVar3[6] = lVar4;
      *param_2 = 0;
      return;
    }
  }
  else {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x48) + 0x30);
    lVar4 = *param_2;
    if (plVar2 != param_2) {
      lVar1 = *plVar2;
      *plVar2 = lVar4;
      *param_2 = 0;
      if (lVar1 == 0) {
        return;
      }
      if (*(longlong *)(lVar1 + 0x90) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x80) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x50) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar1);
      lVar4 = *param_2;
    }
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar4 + 0x80) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar4 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(lVar4);
  return;
}



// FUNCTION 143797578 FUN_143797578 body=280 status=ok
// SIG undefined FUN_143797578(void)

void FUN_143797578(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147db30ec(param_1,&local_28);
  puVar4 = local_28;
  if (local_20 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_38 = 0;
  lVar1 = FUN_1402791b4(0,puVar4,0,0);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x30) = lVar1;
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    uVar2 = FUN_1412d87bc();
    lVar1 = FUN_1402ab8a4(*(undefined8 *)(param_1 + 0x30),uVar2,0);
    if (lVar1 != 0) {
      lVar3 = FUN_1412d87bc();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        *(longlong *)(param_1 + 0x38) = lVar1;
        FUN_147dcce30(lVar1,*(undefined8 *)(param_1 + 0x18));
        goto LAB_14379763c;
      }
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
LAB_14379763c:
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143797692 FUN_143797692 body=84 status=ok
// SIG undefined FUN_143797692(void)

void FUN_143797692(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x2b0), lVar1 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f0);
    }
    cVar2 = FUN_147dc0220(uVar3);
    if (cVar2 == '\0') {
      *(undefined4 *)(param_1 + 0x28) = 2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = 3;
  return;
}



// FUNCTION 1437976e6 FUN_1437976e6 body=73 status=ok
// SIG undefined FUN_1437976e6(void)

void FUN_1437976e6(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30);
    if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0x2b0), lVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f0);
    }
    FUN_147dc03a8(uVar2);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143797730 FUN_143797730 body=119 status=ok
// SIG undefined FUN_143797730(void)

void FUN_143797730(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(uint *)(param_1 + 5) | 2) == 3) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  plVar3 = (longlong *)param_1[2];
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
    if (param_1[1] != 0) {
      FUN_147db327a(param_1[1],param_1[3]);
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
                    /* WARNING: Could not recover jumptable at 0x000143797790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1437977a8 FUN_1437977a8 body=141 status=ok
// SIG undefined FUN_1437977a8(void)

void FUN_1437977a8(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  (**(code **)(*param_1 + 0x30))();
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) {
        return;
      }
      LOCK();
      iVar6 = (int)plVar2[1];
      bVar8 = iVar7 == iVar6;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar8);
    plVar3 = (longlong *)param_1[1];
    if (plVar3 != (longlong *)0x0) {
      lVar4 = param_1[3];
      lVar5 = param_1[5];
      FUN_14379796a(plVar3,lVar4,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,(int)lVar5,lVar4);
    }
    LOCK();
    plVar3 = plVar2 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143797826. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 143797836 FUN_143797836 body=307 status=ok
// SIG undefined FUN_143797836(void)

undefined8 * FUN_143797836(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = &PTR_FUN_14ab0c3f0;
  param_1[1] = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar4 + 0x10) = iVar3;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar3;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar2;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  iVar2 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 0xd) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar2,0);
    memcpy((void *)param_1[0xc],_Src,(longlong)iVar2 * 2);
  }
  *(undefined4 *)(param_1 + 0xe) = 1;
  return param_1;
}



// FUNCTION 14379796a FUN_14379796a body=494 status=ok
// SIG undefined FUN_14379796a(void)

void FUN_14379796a(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_88 [44];
  uint local_5c;
  int local_58;
  undefined4 local_54;
  uint *local_50;
  undefined4 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar5 = (longlong *)(param_1 + 0x10);
  local_54 = param_3;
  if (param_2 == 0) {
    uVar7 = 0;
    uVar2 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar2 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar4;
      }
    }
  }
  local_50 = (uint *)CONCAT44(uVar2,uVar7);
  iVar1 = FUN_147dbb186(plVar5,uVar2 ^ uVar7);
  if (iVar1 != -1) {
    if ((*plVar5 + (longlong)iVar1 * 0x14 != 0) &&
       (puVar3 = (undefined4 *)(*plVar5 + (longlong)iVar1 * 0x14 + 8), puVar3 != (undefined4 *)0x0))
    {
      *puVar3 = param_3;
      goto LAB_143797a20;
    }
  }
  local_58 = 0;
  if (param_2 == 0) {
    local_5c = 0;
    iVar1 = 0;
  }
  else {
    local_5c = *(uint *)(param_2 + 0xc);
    if ((int)local_5c < DAT_14c9647dc) {
      lVar8 = (ulonglong)((local_5c & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_5c >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar1 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar1 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar1 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar1 = iVar6;
      }
    }
  }
  local_50 = &local_5c;
  local_48 = &local_54;
  local_58 = iVar1;
  FUN_147dbb240(plVar5,local_3c);
LAB_143797a20:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143797b5a FUN_143797b5a body=198 status=ok
// SIG undefined FUN_143797b5a(void)

longlong * FUN_143797b5a(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar2 = param_1[2];
  plVar7 = (longlong *)FUN_14001cc68(0x40,0x10);
  FUN_147db3086(plVar7,param_2,lVar2);
  *plVar7 = (longlong)&PTR_FUN_14ab0c340;
  plVar7[6] = 0;
  plVar7[7] = 0;
  iVar6 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar6 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
    FUN_147dbb706(param_1,iVar6);
  }
  *(longlong **)(*param_1 + (longlong)iVar6 * 8) = plVar7;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  plVar3 = (longlong *)plVar7[2];
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        return plVar7;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    plVar4 = (longlong *)plVar7[1];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,plVar7[3]);
    }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return plVar7;
}



// FUNCTION 143797c20 FUN_143797c20 body=106 status=ok
// SIG undefined FUN_143797c20(void)

void FUN_143797c20(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(uint *)(param_2 + 5) | 2) == 3) {
    FUN_143797730(param_2);
  }
  (**(code **)(*param_2 + 0x28))(param_2);
  uVar2 = 0xffffffff;
  if ((longlong)(int)param_1[1] != 0) {
    lVar1 = (longlong)(int)param_1[1] << 3;
    uVar3 = 0;
    do {
      if (*(longlong **)(*param_1 + uVar3 * 8) == param_2) {
        uVar2 = uVar3 & 0xffffffff;
        break;
      }
      uVar3 = uVar3 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  FUN_147dbb78c(param_1,uVar2);
  FUN_147dbb7f4(param_1);
  return;
}



// FUNCTION 143797c8a FUN_143797c8a body=180 status=ok
// SIG undefined FUN_143797c8a(void)

void FUN_143797c8a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    uVar1 = *(uint *)(param_2 + 8);
    lVar2 = 0;
    do {
      if ((((((int)uVar1 < 0 || *(int *)(param_2 + 0xc) == 0) || DAT_14c9647dc <= (int)uVar1) ||
           (plVar3 = (longlong *)
                     (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                     (ulonglong)((uVar1 & 0xffff) * 0x18)), plVar3 == (longlong *)0x0)) ||
          ((int)plVar3[2] != *(int *)(param_2 + 0xc))) ||
         ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *plVar3;
      }
      if (*(longlong *)(*(longlong *)(*param_1 + lVar2) + 0x20) == lVar4) {
        if (*(longlong *)(*param_1 + lVar2) == 0) {
          return;
        }
        FUN_147db36c4();
        return;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)(int)param_1[1] * 8 != lVar2);
  }
  return;
}



// FUNCTION 143797d3e FUN_143797d3e body=328 status=ok
// SIG undefined FUN_143797d3e(void)

void FUN_143797d3e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((longlong)(int)param_1[1] != 0) {
    uVar2 = *(uint *)(param_2 + 8);
    lVar8 = 0;
    do {
      lVar3 = *(longlong *)(*param_1 + lVar8);
      if ((((((int)uVar2 < 0 || *(int *)(param_2 + 0xc) == 0) || DAT_14c9647dc <= (int)uVar2) ||
           (plVar9 = (longlong *)
                     (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8) +
                     (ulonglong)((uVar2 & 0xffff) * 0x18)), plVar9 == (longlong *)0x0)) ||
          ((int)plVar9[2] != *(int *)(param_2 + 0xc))) ||
         ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar9;
      }
      if (*(longlong *)(lVar3 + 0x20) == lVar10) {
        if (lVar3 == 0) {
          return;
        }
        if ((*(uint *)(lVar3 + 0x28) | 2) != 3) {
          return;
        }
        plVar9 = *(longlong **)(lVar3 + 0x10);
        if (plVar9 != (longlong *)0x0) {
          iVar7 = (int)plVar9[1];
          while (iVar7 != 0) {
            LOCK();
            iVar5 = (int)plVar9[1];
            bVar11 = iVar7 == iVar5;
            if (bVar11) {
              *(int *)(plVar9 + 1) = iVar7 + 1;
              iVar5 = iVar7;
            }
            iVar7 = iVar5;
            UNLOCK();
            if (bVar11) {
              plVar4 = *(longlong **)(lVar3 + 8);
              if (((plVar4 == (longlong *)0x0) ||
                  (cVar6 = (**(code **)(*plVar4 + 0x10))(plVar4,param_1[2]), cVar6 != '\0')) ||
                 (cVar6 = FUN_147db3744(*(undefined8 *)(param_1[2] + 0x750)), cVar6 == '\0')) {
                FUN_143797730(lVar3);
              }
              LOCK();
              plVar4 = plVar9 + 1;
              *(int *)plVar4 = (int)*plVar4 + -1;
              UNLOCK();
              if ((int)*plVar4 != 0) {
                return;
              }
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar1 = (int *)((longlong)plVar9 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 != 0) {
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x000143797e4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar9 + 0x10))(plVar9);
              return;
            }
          }
        }
        FUN_143797730(lVar3);
        return;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)param_1[1] * 8 != lVar8);
  }
  return;
}



// FUNCTION 143797e86 FUN_143797e86 body=102 status=ok
// SIG undefined FUN_143797e86(void)

void FUN_143797e86(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar4 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar4 + *(int *)(param_1 + 0x30);
    do {
      lVar6 = (longlong)(int)((longlong *)*plVar4)[1];
      if (lVar6 != 0) {
        lVar2 = *(longlong *)*plVar4;
        lVar5 = 0;
        do {
          plVar3 = *(longlong **)(lVar2 + lVar5);
          (**(code **)(*plVar3 + 8))(plVar3,param_2);
          lVar5 = lVar5 + 8;
        } while (lVar6 * 8 != lVar5);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return;
}



// FUNCTION 143797eec FUN_143797eec body=55 status=ok
// SIG undefined FUN_143797eec(void)

void FUN_143797eec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb10e10 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb10e10 = FUN_14171c317(FUN_14640f2e4,uVar1,L"EDataLayerState");
  }
  return;
}



// FUNCTION 143797f23 FUN_143797f23 body=55 status=ok
// SIG undefined FUN_143797f23(void)

void FUN_143797f23(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb10e98 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb10e98 = FUN_14171c317(FUN_14640f5bc,uVar1,L"EDataLayerLoadFilter");
  }
  return;
}



// FUNCTION 143797f5a FUN_143797f5a body=55 status=ok
// SIG undefined FUN_143797f5a(void)

void FUN_143797f5a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb10ef0 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb10ef0 = FUN_14171c317(FUN_1417fad09,uVar1,L"EDataLayerRuntimeState");
  }
  return;
}



// FUNCTION 143797f91 FUN_143797f91 body=55 status=ok
// SIG undefined FUN_143797f91(void)

void FUN_143797f91(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb10f08 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb10f08 = FUN_14171c317(FUN_14640f72a,uVar1,L"EOverrideBlockOnSlowStreaming");
  }
  return;
}



// FUNCTION 143797fc8 FUN_143797fc8 body=619 status=ok
// SIG undefined FUN_143797fc8(void)

undefined8 FUN_143797fc8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)((ulonglong)param_2 >> 0x20);
  uVar3 = (ushort)((ulonglong)param_2 >> 0x10);
  uVar2 = (ushort)param_2;
  iVar6 = (int)param_2;
  if (*(int *)(param_1 + 0x5c8) != *(int *)(param_1 + 0x5f4)) {
    lVar1 = param_1 + 0x5f8;
    if (*(longlong *)(param_1 + 0x600) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x600);
    }
    iVar5 = *(int *)(lVar1 + (ulonglong)
                             (*(int *)(param_1 + 0x608) - 1U &
                             iVar4 + (iVar6 << 0x10 | (uint)uVar2) +
                             ((uint)uVar3 << 0x13 | (uint)uVar3) + (uint)(uVar2 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x5c0);
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar5 * 0x10) == param_2) goto LAB_14379819e;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  if (*(int *)(param_1 + 0x618) != *(int *)(param_1 + 0x644)) {
    lVar1 = param_1 + 0x648;
    if (*(longlong *)(param_1 + 0x650) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x650);
    }
    iVar5 = *(int *)(lVar1 + (ulonglong)
                             (*(int *)(param_1 + 0x658) - 1U &
                             iVar4 + (iVar6 << 0x10 | (uint)uVar2) +
                             ((uint)uVar3 << 0x13 | (uint)uVar3) + (uint)(uVar2 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x610);
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar5 * 0x10) == param_2) goto LAB_14379822c;
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  if (*(int *)(param_1 + 0x668) != *(int *)(param_1 + 0x694)) {
    lVar1 = param_1 + 0x698;
    if (*(longlong *)(param_1 + 0x6a0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x6a0);
    }
    iVar5 = *(int *)(lVar1 + (ulonglong)
                             (*(int *)(param_1 + 0x6a8) - 1U &
                             iVar4 + (iVar6 << 0x10 | (uint)uVar2) +
                             ((uint)uVar3 << 0x13 | (uint)uVar3) + (uint)(uVar2 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)(param_1 + 0x660);
      do {
        if (*(longlong *)(lVar1 + (longlong)iVar5 * 0x10) == param_2) {
LAB_14379819e:
          return CONCAT71((int7)((ulonglong)lVar1 >> 8),2);
        }
        iVar5 = *(int *)((longlong)iVar5 * 0x10 + lVar1 + 8);
      } while (iVar5 != -1);
    }
  }
  if (*(int *)(param_1 + 0x6b8) != *(int *)(param_1 + 0x6e4)) {
    lVar1 = param_1 + 0x6e8;
    if (*(longlong *)(param_1 + 0x6f0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x6f0);
    }
    iVar6 = *(int *)(lVar1 + (ulonglong)
                             (*(int *)(param_1 + 0x6f8) - 1U &
                             iVar4 + (iVar6 << 0x10 | (uint)uVar2) +
                             ((uint)uVar3 << 0x13 | (uint)uVar3) + (uint)(uVar2 >> 4)) * 4);
    if (iVar6 != -1) {
      while (lVar1 = (longlong)iVar6 * 0x10,
            *(longlong *)(*(longlong *)(param_1 + 0x6b0) + lVar1) != param_2) {
        iVar6 = *(int *)(lVar1 + *(longlong *)(param_1 + 0x6b0) + 8);
        if (iVar6 == -1) {
          return 0;
        }
      }
LAB_14379822c:
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 143798233 FUN_143798233 body=106 status=ok
// SIG undefined FUN_143798233(void)

void FUN_143798233(longlong *param_1)

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
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_14ab10b70;
  return;
}



// FUNCTION 14379829d FUN_14379829d body=69 status=ok
// SIG undefined FUN_14379829d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379829d(void)

{
  _DAT_14cb10ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001437982df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb10ff8,1);
  return;
}



// FUNCTION 1437982f3 FUN_1437982f3 body=69 status=ok
// SIG undefined FUN_1437982f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1437982f3(void)

{
  _DAT_14cb11010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143798335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11018,1);
  return;
}



// FUNCTION 143798349 FUN_143798349 body=69 status=ok
// SIG undefined FUN_143798349(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143798349(void)

{
  _DAT_14cb11030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014379838b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb11038,1);
  return;
}



// FUNCTION 14379838e FUN_14379838e body=127 status=ok
// SIG undefined FUN_14379838e(void)

undefined8 FUN_14379838e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x2a0))(param_2);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x2b8);
    }
    (**(code **)(*param_2 + 0x310))(param_2,&local_28);
    uVar2 = FUN_143797fc8(uVar2,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379840e FUN_14379840e body=134 status=ok
// SIG undefined FUN_14379840e(void)

undefined8 FUN_14379840e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_2 + 0x2a0))(param_2);
    if (*(longlong *)(lVar1 + 0x30) == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b8);
    }
    (**(code **)(*param_2 + 0x310))(param_2,&local_28);
    uVar2 = FUN_1411bbe3a(lVar1 + 0x720,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143798495 FUN_143798495 body=169 status=ok
// SIG undefined FUN_143798495(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143798495(void)

{
  _DAT_14cb11088 = 0;
  if (DAT_14cb11080 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb11048 = 0;
  if (DAT_14cb1104c != 0) {
    FUN_14472eb64(&DAT_14cb11040,0);
  }
  _DAT_14cb11070 = 0xffffffff;
  _DAT_14cb11068 = 0;
  if (0x80 < DAT_14cb1106c) {
    DAT_14cb1106c = 0x80;
    FUN_1446efbd8(&DAT_14cb11050,0);
  }
  if (DAT_14cb11060 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb11040 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14379853e FUN_14379853e body=169 status=ok
// SIG undefined FUN_14379853e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14379853e(void)

{
  _DAT_14cb110e0 = 0;
  if (DAT_14cb110d8 != 0) {
    FUN_1400020a8();
  }
  _DAT_14cb110a0 = 0;
  if (DAT_14cb110a4 != 0) {
    FUN_14472eb64(&DAT_14cb11098,0);
  }
  _DAT_14cb110c8 = 0xffffffff;
  _DAT_14cb110c0 = 0;
  if (0x80 < DAT_14cb110c4) {
    DAT_14cb110c4 = 0x80;
    FUN_1446efbd8(&DAT_14cb110a8,0);
  }
  if (DAT_14cb110b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb11098 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1437985e8 FUN_1437985e8 body=3697 status=ok
// SIG undefined FUN_1437985e8(void)

void FUN_1437985e8(longlong *param_1,longlong param_2,double *param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  LARGE_INTEGER *pLVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  code *pcVar18;
  undefined7 uVar19;
  int iVar20;
  longlong lVar21;
  ulonglong *puVar22;
  double *pdVar23;
  uint uVar24;
  longlong *plVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_258 [32];
  LARGE_INTEGER local_238;
  float *local_230;
  undefined8 local_228;
  longlong *local_220;
  double local_218;
  longlong local_210;
  undefined8 local_208;
  longlong *local_200;
  LARGE_INTEGER local_1f8;
  double *local_1f0;
  longlong *local_1e8;
  undefined2 *local_1e0;
  int local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  undefined4 *local_1c0;
  float *local_1b8;
  float local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  int local_18c;
  code *local_188;
  undefined8 uStack_180;
  longlong local_178;
  ulonglong uStack_170;
  uint local_168 [4];
  uint *local_158;
  int local_150;
  uint local_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  longlong local_138;
  undefined4 local_130;
  double local_128;
  ulonglong uStack_120;
  uint local_118 [4];
  uint *local_108;
  uint local_100;
  uint local_fc;
  undefined4 uStack_f8;
  int local_f4;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  int local_e0;
  longlong *local_d8;
  ulonglong uStack_d0;
  uint local_c8 [4];
  uint *local_b8;
  int local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  int local_a4;
  longlong local_98;
  undefined4 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x2e8) != 0)) {
    local_1a8 = *(undefined4 *)param_3;
    uStack_1a4 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_1a0 = *(undefined4 *)(param_3 + 1);
    uStack_19c = *(undefined4 *)((longlong)param_3 + 0xc);
    local_1ac = 0.0;
    lVar8 = (**(code **)(*param_1 + 0x180))();
    if (lVar8 == 0) {
      local_228 = 0;
    }
    else {
      local_228 = FUN_14011c706(lVar8);
    }
    local_1c0 = &local_1a8;
    local_1d0 = param_1;
    local_1c8 = param_2;
    local_1b8 = &local_1ac;
    uVar9 = FUN_147db4838(param_1);
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    local_d8 = (longlong *)0x0;
    uStack_d0 = 0;
    local_ac = 0x80;
    uStack_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    FUN_144881636(&local_d8,uVar9);
    uVar9 = FUN_140898eae(param_1);
    local_108 = (uint *)0x0;
    local_100 = 0;
    local_128 = 0.0;
    uStack_120 = 0;
    local_fc = 0x80;
    uStack_f8 = 0xffffffff;
    local_f4 = 0;
    local_e8 = (undefined1 *)0x0;
    local_e0 = 0;
    FUN_144881636(&local_128,uVar9);
    plVar10 = (longlong *)0x0;
    plVar25 = param_1;
    if ((*(uint *)(param_1 + 1) & 0x10) != 0) goto LAB_143798785;
    do {
      plVar10 = (longlong *)plVar25[4];
LAB_143798785:
      do {
        plVar25 = plVar10;
        plVar10 = plVar25;
        if ((longlong *)plVar25[4] == (longlong *)0x0) goto LAB_1437987ac;
        plVar10 = (longlong *)plVar25[4];
      } while ((*(uint *)(plVar25 + 1) >> 0x1c & 1) == 0);
      plVar10 = (longlong *)FUN_142840154(plVar25);
LAB_1437987ac:
    } while (plVar10 == (longlong *)0x0);
    local_178 = plVar10[3];
    FUN_1400021e4(&local_178,&local_1f8);
    FUN_1449fb060(&local_178,&local_1f8,1);
    FUN_14094a6a4(&local_1e0,&local_178,0);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if ((longlong **)local_1f8.QuadPart != (longlong **)0x0) {
      FUN_1400020a8();
    }
    uVar9 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
    puVar16 = local_1e0;
    if (local_1d8 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    FUN_140056680(&local_178,puVar16);
    local_238.QuadPart = (LONGLONG)&local_1a8;
    local_230 = &local_1ac;
    FUN_147dc1086(param_2,&local_178,uVar9,&DAT_149e1e2d4);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_178,L"Loaded Data Layers");
    local_238.QuadPart = (LONGLONG)&local_d8;
    FUN_14379945a(&local_1d0,&local_178,0xff00ffff,0xffffffff);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    FUN_140056680(&local_178,L"Active Data Layers");
    local_238 = (LARGE_INTEGER)&local_128;
    FUN_14379945a(&local_1d0,&local_178,0xff00ff00,0xffffffff);
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    local_158 = (uint *)0x0;
    local_150 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_14c = 0x80;
    uStack_148 = 0xffffffff;
    local_144 = 0;
    local_138 = 0;
    local_130 = 0;
    local_188 = FUN_1437a2cba;
    uStack_180 = &local_1f8;
    local_1f8.QuadPart = (LONGLONG)&local_d8;
    local_1f0 = &local_128;
    local_1e8 = &local_178;
    FUN_140bc66fe(param_1);
    FUN_140056680(&local_1f8,L"Unloaded Data Layers");
    local_238 = (LARGE_INTEGER)&local_178;
    FUN_14379945a(&local_1d0,&local_1f8,0xffbdc3c7,0xffc0c0c0);
    if ((longlong **)local_1f8.QuadPart != (longlong **)0x0) {
      FUN_1400020a8();
    }
    iVar15 = local_150;
    *param_3 = (double)(local_1ac + 10.0) + *param_3;
    if (DAT_14cb122e4 == 0) {
      FUN_147dbce32(param_1 + 0x14);
    }
    else {
      if (local_150 == 0) {
        uVar17 = 1;
        iVar20 = 0;
        uVar26 = 0;
        iVar5 = 0;
      }
      else {
        puVar11 = local_158;
        if (local_158 == (uint *)0x0) {
          puVar11 = local_168;
        }
        uVar7 = *puVar11;
        if (uVar7 == 0) {
          iVar5 = local_150 + 0x1e;
          if (-1 < local_150 + -1) {
            iVar5 = local_150 + -1;
          }
          uVar26 = 0;
          uVar17 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar17 = uVar26;
          }
          iVar20 = 0;
          do {
            if (uVar17 == uVar26) goto LAB_143798a79;
            iVar20 = iVar20 + 0x20;
            uVar7 = puVar11[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (uVar7 == 0);
        }
        else {
          iVar20 = 0;
          uVar26 = 0;
        }
        uVar17 = (ulonglong)(-uVar7 & uVar7);
        uVar27 = uVar17 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar5 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (local_150 <= iVar5) {
          iVar5 = local_150;
        }
      }
      if (iVar5 != local_150) {
        local_220 = param_1 + 0x14;
        uVar7 = 0xffffffff;
        do {
          local_1f8 = *(LARGE_INTEGER *)(local_178 + (longlong)iVar5 * 0x10);
          lVar8 = FUN_147db4664(param_1,&local_1f8);
          if (lVar8 != 0) {
            FUN_147dbc858(local_220,lVar8);
          }
          uVar7 = uVar7 & ~(uint)uVar17;
          puVar11 = local_158;
          if (local_158 == (uint *)0x0) {
            puVar11 = local_168;
          }
          iVar5 = (int)uVar26;
          lVar8 = (longlong)iVar5;
          uVar6 = puVar11[lVar8] & uVar7;
          if (uVar6 == 0) {
            iVar13 = local_150 + 0x1e;
            if (-1 < local_150 + -1) {
              iVar13 = local_150 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar12 = iVar13;
            if (iVar13 < iVar5) {
              iVar12 = iVar5;
            }
            if (iVar5 < iVar13) {
              lVar21 = 0;
              do {
                uVar6 = puVar11[lVar8 + lVar21 + 1];
                if (uVar6 != 0) {
                  uVar26 = (ulonglong)(iVar5 + (int)lVar21 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_143798bef;
                }
                iVar20 = iVar20 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar12 - lVar8 != lVar21);
              uVar7 = 0xffffffff;
              iVar5 = iVar12;
            }
            uVar26 = (ulonglong)(iVar5 + 1);
            iVar5 = local_150;
          }
          else {
LAB_143798bef:
            uVar17 = (ulonglong)(-uVar6 & uVar6);
            uVar27 = uVar17 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar5 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if (local_150 <= iVar5) {
              iVar5 = local_150;
            }
          }
        } while (iVar5 != iVar15);
      }
LAB_143798a79:
      local_188 = (code *)0x0;
      uStack_180 = (LARGE_INTEGER *)0x0;
      iVar15 = ((int)uStack_120 - local_f4) + ((int)uStack_d0 - local_a4);
      if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar15);
      }
      if (iVar15 != 0) {
        FUN_147dbc772(&local_188);
      }
      iVar15 = local_b0;
      if (local_b0 == 0) {
        uVar17 = 1;
        uVar26 = 0;
        iVar20 = 0;
        iVar5 = 0;
      }
      else {
        puVar11 = local_b8;
        if (local_b8 == (uint *)0x0) {
          puVar11 = local_c8;
        }
        uVar7 = *puVar11;
        if (uVar7 == 0) {
          iVar5 = local_b0 + 0x1e;
          if (-1 < local_b0 + -1) {
            iVar5 = local_b0 + -1;
          }
          uVar26 = 0;
          uVar17 = (ulonglong)(uint)(iVar5 >> 5);
          if (iVar5 >> 5 < 1) {
            uVar17 = uVar26;
          }
          iVar20 = 0;
          do {
            if (uVar17 == uVar26) goto LAB_143798c51;
            iVar20 = iVar20 + 0x20;
            uVar7 = puVar11[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar26 = 0;
          iVar20 = 0;
        }
        uVar17 = (ulonglong)(-uVar7 & uVar7);
        uVar27 = uVar17 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar27 != 0) {
          for (; uVar27 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar5 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (local_b0 <= iVar5) {
          iVar5 = local_b0;
        }
      }
      if (iVar5 != local_b0) {
        uVar7 = 0xffffffff;
        do {
          local_1f8 = *(LARGE_INTEGER *)(local_d8 + (longlong)iVar5 * 2);
          uVar9 = FUN_147db4664(param_1,&local_1f8);
          pLVar3 = uStack_180;
          lVar8 = (longlong)(int)uStack_180;
          uVar6 = (int)uStack_180 + 1;
          uStack_180 = (LARGE_INTEGER *)CONCAT44(uStack_180._4_4_,uVar6);
          if (uStack_180._4_4_ < uVar6) {
            FUN_147dbc7d2(&local_188,(ulonglong)pLVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_188 + lVar8 * 8) = uVar9;
          uVar7 = uVar7 & ~(uint)uVar17;
          puVar11 = local_b8;
          if (local_b8 == (uint *)0x0) {
            puVar11 = local_c8;
          }
          iVar5 = (int)uVar26;
          lVar8 = (longlong)iVar5;
          uVar6 = puVar11[lVar8] & uVar7;
          if (uVar6 == 0) {
            iVar13 = local_b0 + 0x1e;
            if (-1 < local_b0 + -1) {
              iVar13 = local_b0 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar12 = iVar13;
            if (iVar13 < iVar5) {
              iVar12 = iVar5;
            }
            if (iVar5 < iVar13) {
              lVar21 = 0;
              do {
                uVar6 = puVar11[lVar8 + lVar21 + 1];
                if (uVar6 != 0) {
                  uVar26 = (ulonglong)(iVar5 + (int)lVar21 + 1);
                  uVar7 = 0xffffffff;
                  goto LAB_143798db9;
                }
                iVar20 = iVar20 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar12 - lVar8 != lVar21);
              uVar7 = 0xffffffff;
              iVar5 = iVar12;
            }
            uVar26 = (ulonglong)(iVar5 + 1);
            iVar5 = local_b0;
          }
          else {
LAB_143798db9:
            uVar17 = (ulonglong)(-uVar6 & uVar6);
            uVar27 = uVar17 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar27 != 0) {
              for (; uVar27 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            iVar5 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if (local_b0 <= iVar5) {
              iVar5 = local_b0;
            }
          }
        } while (iVar5 != iVar15);
      }
LAB_143798c51:
      uVar7 = local_100;
      uVar17 = (ulonglong)local_100;
      if (local_100 == 0) {
        uVar26 = 1;
        uVar27 = 0;
        iVar15 = 0;
        uVar6 = 0;
      }
      else {
        puVar11 = local_108;
        if (local_108 == (uint *)0x0) {
          puVar11 = local_118;
        }
        uVar6 = *puVar11;
        if (uVar6 == 0) {
          iVar15 = local_100 + 0x1e;
          if (-1 < (int)(local_100 - 1)) {
            iVar15 = local_100 - 1;
          }
          uVar27 = 0;
          uVar26 = (ulonglong)(uint)(iVar15 >> 5);
          if (iVar15 >> 5 < 1) {
            uVar26 = uVar27;
          }
          iVar15 = 0;
          do {
            if (uVar26 == uVar27) goto LAB_143798e1d;
            iVar15 = iVar15 + 0x20;
            uVar6 = puVar11[uVar27 + 1];
            uVar27 = uVar27 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar27 = 0;
          iVar15 = 0;
        }
        uVar26 = (ulonglong)(-uVar6 & uVar6);
        uVar2 = uVar26 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar6 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)local_100 <= (int)uVar6) {
          uVar6 = local_100;
        }
      }
      if (uVar6 != local_100) {
        uVar24 = 0xffffffff;
        do {
          local_1f8 = *(LARGE_INTEGER *)((longlong)local_128 + (longlong)(int)uVar6 * 0x10);
          uVar9 = FUN_147db4664(param_1,&local_1f8);
          pLVar3 = uStack_180;
          lVar8 = (longlong)(int)uStack_180;
          uVar6 = (int)uStack_180 + 1;
          uStack_180 = (LARGE_INTEGER *)CONCAT44(uStack_180._4_4_,uVar6);
          if (uStack_180._4_4_ < uVar6) {
            FUN_147dbc7d2(&local_188,(ulonglong)pLVar3 & 0xffffffff);
          }
          *(undefined8 *)(local_188 + lVar8 * 8) = uVar9;
          uVar24 = uVar24 & ~(uint)uVar26;
          puVar11 = local_108;
          if (local_108 == (uint *)0x0) {
            puVar11 = local_118;
          }
          iVar5 = (int)uVar27;
          lVar8 = (longlong)iVar5;
          uVar6 = puVar11[lVar8] & uVar24;
          if (uVar6 == 0) {
            iVar20 = local_100 + 0x1e;
            if (-1 < (int)(local_100 - 1)) {
              iVar20 = local_100 - 1;
            }
            iVar20 = iVar20 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar13 = iVar20;
            if (iVar20 < iVar5) {
              iVar13 = iVar5;
            }
            if (iVar5 < iVar20) {
              lVar21 = 0;
              do {
                uVar6 = puVar11[lVar8 + lVar21 + 1];
                if (uVar6 != 0) {
                  uVar27 = (ulonglong)(iVar5 + (int)lVar21 + 1);
                  uVar24 = 0xffffffff;
                  goto LAB_14379933c;
                }
                iVar15 = iVar15 + 0x20;
                lVar21 = lVar21 + 1;
              } while (iVar13 - lVar8 != lVar21);
              uVar24 = 0xffffffff;
              iVar5 = iVar13;
            }
            uVar27 = (ulonglong)(iVar5 + 1);
            uVar6 = local_100;
          }
          else {
LAB_14379933c:
            uVar26 = (ulonglong)(-uVar6 & uVar6);
            uVar2 = uVar26 * 2 + 1;
            lVar8 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
              }
            }
            uVar6 = (iVar15 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
            if ((int)local_100 <= (int)uVar6) {
              uVar6 = local_100;
            }
          }
        } while (uVar6 != uVar7);
      }
LAB_143798e1d:
      if ((longlong)(int)uStack_180 != 0) {
        pcVar1 = local_188 + (longlong)(int)uStack_180 * 8;
        plVar25 = param_1 + 0x14;
        pcVar18 = local_188;
        do {
          local_200 = *(longlong **)pcVar18;
          if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
            uVar7 = ((uint)((ulonglong)local_200 >> 0x14) & 0xffff ^
                    (uint)((ulonglong)local_200 >> 4)) * -0x7a143595;
            uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
            plVar10 = (longlong *)param_1[0x1c];
            if ((longlong *)param_1[0x1c] == (longlong *)0x0) {
              plVar10 = param_1 + 0x1b;
            }
            iVar15 = *(int *)((longlong)plVar10 +
                             (ulonglong)((int)param_1[0x1d] - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
            if (iVar15 != -1) {
              do {
                puVar22 = (ulonglong *)(*plVar25 + (longlong)iVar15 * 0x18);
                if ((longlong *)*puVar22 == local_200) goto LAB_143798ee5;
                iVar15 = (int)puVar22[2];
              } while (iVar15 != -1);
            }
          }
          puVar22 = (ulonglong *)0x0;
LAB_143798ee5:
          local_208 = local_228;
          (**(code **)(*local_200 + 0x310))(local_200,&local_210);
          uVar19 = (undefined7)(uVar17 >> 8);
          uVar17 = CONCAT71(uVar19,1);
          if ((int)uStack_120 != local_f4) {
            uVar7 = (uint)((ulonglong)local_210 >> 0x10);
            uVar6 = (uint)local_210 & 0xffff;
            puVar14 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar14 = local_f0;
            }
            for (iVar15 = *(int *)(puVar14 +
                                  (ulonglong)
                                  (local_e0 - 1U &
                                  (int)((ulonglong)local_210 >> 0x20) +
                                  ((uint)local_210 << 0x10 | uVar6) +
                                  (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4)) * 4);
                iVar15 != -1; iVar15 = *(int *)((longlong)iVar15 * 0x10 + (longlong)local_128 + 8))
            {
              if (*(longlong *)((longlong)local_128 + (longlong)iVar15 * 0x10) == local_210) {
                uVar17 = CONCAT71(uVar19,2);
                break;
              }
            }
          }
          if (puVar22 == (ulonglong *)0x0) {
            cVar4 = FUN_14379a25c(&local_208,local_200,uVar17);
            if (cVar4 == '\0') {
              QueryPerformanceCounter(&local_1f8);
              local_218 = -((double)local_1f8.QuadPart * DAT_14c83f420 + 16777216.0);
              local_1f8.QuadPart = (LONGLONG)&local_200;
              local_1f0 = &local_218;
              FUN_147dbc9a6(plVar25,&local_18c,&local_1f8);
              pdVar23 = (double *)((longlong)local_18c * 0x18 + *plVar25 + 8);
              if (pdVar23 != (double *)0x0) goto LAB_143798f9c;
            }
          }
          else {
            pdVar23 = (double *)(puVar22 + 1);
LAB_143798f9c:
            if ((*pdVar23 <= 0.0 && *pdVar23 != 0.0) &&
               (cVar4 = FUN_14379a25c(&local_208,local_200,uVar17), cVar4 != '\0')) {
              QueryPerformanceCounter(&local_1f8);
              *pdVar23 = (double)local_1f8.QuadPart * DAT_14c83f420 + 16777216.0 + *pdVar23;
            }
          }
          pcVar18 = pcVar18 + 8;
        } while (pcVar18 != pcVar1);
      }
      if (local_188 != (code *)0x0) {
        FUN_1400020a8(local_188);
      }
    }
    local_130 = 0;
    if (local_138 != 0) {
      FUN_1400020a8();
    }
    uVar17 = uStack_170 >> 0x20;
    uStack_170 = uStack_170 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      FUN_14472eb64(&local_178,0);
    }
    uStack_148 = 0xffffffff;
    local_144 = 0;
    local_150 = 0;
    if (0x80 < local_14c) {
      local_14c = 0x80;
      FUN_1446efbd8(local_168,0);
    }
    if (local_158 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_1e0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_e0 = 0;
    if (local_e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar17 = uStack_120 >> 0x20;
    uStack_120 = uStack_120 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      FUN_14472eb64(&local_128,0);
    }
    uStack_f8 = 0xffffffff;
    local_f4 = 0;
    local_100 = 0;
    if (0x80 < local_fc) {
      local_fc = 0x80;
      FUN_1446efbd8(local_118,0);
    }
    if (local_108 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_128 != 0.0) {
      FUN_1400020a8();
    }
    local_90 = 0;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    uVar17 = uStack_d0 >> 0x20;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    if ((int)uVar17 != 0) {
      FUN_14472eb64(&local_d8,0);
    }
    uStack_a8 = 0xffffffff;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      FUN_1446efbd8(local_c8,0);
    }
    if (local_b8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379945a FUN_14379945a body=3584 status=ok
// SIG undefined FUN_14379945a(void)

void FUN_14379945a(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  LARGE_INTEGER LVar11;
  ulonglong **ppuVar12;
  ulonglong *puVar13;
  wchar_t *pwVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  uint uVar24;
  undefined2 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  uint uVar30;
  double *pdVar31;
  float fVar32;
  undefined1 auStack_428 [32];
  undefined4 *local_408;
  longlong lStack_400;
  longlong lStack_3f8;
  ulonglong **local_3f0;
  ulonglong local_3e8;
  longlong local_3e0;
  ulonglong *local_3d8;
  longlong *local_3d0;
  ulonglong *local_3c8;
  undefined8 uStack_3c0;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined2 *local_3a8;
  int local_3a0;
  LARGE_INTEGER local_398;
  int local_390;
  ulonglong *local_388;
  ulonglong *local_380;
  undefined4 local_378 [190];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_3b0 = param_4;
  local_3ac = param_3;
  if (*(int *)((longlong)param_5 + 0x34) < (int)param_5[1]) {
    local_3e0 = *param_1;
    local_408 = (undefined4 *)param_1[2];
    lStack_400 = param_1[3];
    FUN_147dc1086(param_1[1],param_2,*(undefined8 *)(DAT_14cb0d2b0 + 0x58));
    local_3c8 = (ulonglong *)0x0;
    uStack_3c0 = 0;
    iVar10 = (int)param_5[1] - *(int *)((longlong)param_5 + 0x34);
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (iVar10 != 0) {
      FUN_147dbc772(&local_3c8);
    }
    iVar10 = (int)param_5[5];
    local_3d0 = param_1;
    if (iVar10 == 0) {
      uVar16 = 1;
      uVar29 = 0;
      iVar18 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = (uint *)param_5[4];
      if ((uint *)param_5[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_5 + 2);
      }
      uVar24 = *puVar6;
      if (uVar24 == 0) {
        iVar5 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar5 = iVar10 + -1;
        }
        uVar29 = 0;
        uVar16 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar16 = uVar29;
        }
        iVar18 = 0;
        do {
          if (uVar16 == uVar29) goto LAB_1437995d4;
          iVar18 = iVar18 + 0x20;
          uVar24 = puVar6[uVar29 + 1];
          uVar29 = uVar29 + 1;
        } while (uVar24 == 0);
      }
      else {
        uVar29 = 0;
        iVar18 = 0;
      }
      uVar16 = (ulonglong)(-uVar24 & uVar24);
      uVar26 = uVar16 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar5 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      if (iVar10 <= iVar5) {
        iVar5 = iVar10;
      }
    }
    if (iVar5 != iVar10) {
      uVar24 = 0xffffffff;
      do {
        uVar8 = FUN_147db4664(local_3e0,(longlong)iVar5 * 0x10 + *param_5);
        uVar26 = uStack_3c0;
        if (uVar8 != 0) {
          local_3e8 = CONCAT44(local_3e8._4_4_,uVar24);
          lVar21 = (longlong)(int)uStack_3c0;
          uVar24 = (int)uStack_3c0 + 1;
          uStack_3c0 = CONCAT44(uStack_3c0._4_4_,uVar24);
          if (uStack_3c0._4_4_ < uVar24) {
            FUN_147dbc7d2(&local_3c8,uVar26 & 0xffffffff);
          }
          local_3c8[lVar21] = uVar8;
          uVar24 = (uint)local_3e8;
        }
        uVar24 = uVar24 & ~(uint)uVar16;
        puVar6 = (uint *)param_5[4];
        if ((uint *)param_5[4] == (uint *)0x0) {
          puVar6 = (uint *)(param_5 + 2);
        }
        iVar20 = (int)param_5[5];
        iVar5 = (int)uVar29;
        lVar21 = (longlong)iVar5;
        uVar15 = puVar6[lVar21] & uVar24;
        if (uVar15 == 0) {
          iVar19 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar19 = iVar20 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar18 = iVar18 + 0x20;
          iVar9 = iVar19;
          if (iVar19 < iVar5) {
            iVar9 = iVar5;
          }
          if (iVar5 < iVar19) {
            lVar27 = 0;
            do {
              uVar15 = puVar6[lVar21 + lVar27 + 1];
              if (uVar15 != 0) {
                uVar29 = (ulonglong)(iVar5 + (int)lVar27 + 1);
                uVar24 = 0xffffffff;
                goto LAB_14379a1ed;
              }
              iVar18 = iVar18 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar9 - lVar21 != lVar27);
            uVar24 = 0xffffffff;
            iVar5 = iVar9;
          }
          uVar29 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar20;
        }
        else {
LAB_14379a1ed:
          uVar16 = (ulonglong)(-uVar15 & uVar15);
          uVar26 = uVar16 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar26 != 0) {
            for (; uVar26 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar5 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if (iVar20 <= iVar5) {
            iVar5 = iVar20;
          }
        }
      } while (iVar5 != iVar10);
    }
LAB_1437995d4:
    puVar7 = local_3c8;
    iVar10 = (int)uStack_3c0;
    lVar21 = (longlong)(int)uStack_3c0;
    if (1 < lVar21) {
      memset(local_378,0,0x2f0);
      local_388 = puVar7;
      local_380 = puVar7 + lVar21 + -1;
      fVar32 = logf((float)iVar10);
      local_378[0] = (int)(longlong)(fVar32 + fVar32);
      ppuVar12 = &local_388;
      do {
        puVar17 = *ppuVar12;
        puVar7 = ppuVar12[1];
        iVar10 = *(int *)(ppuVar12 + 2);
        iVar5 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar17) >> 3);
        uVar16 = (ulonglong)(iVar5 + 1);
        local_3f0 = ppuVar12;
        if (iVar10 != 0) {
LAB_14379966a:
          if (8 < (int)(uint)uVar16) {
            local_3e8 = CONCAT44(local_3e8._4_4_,iVar10);
            uVar24 = (uint)uVar16 >> 1;
            uVar16 = puVar17[uVar24];
            puVar17[uVar24] = *puVar17;
            *puVar17 = uVar16;
            puVar13 = puVar7 + 1;
            puVar23 = puVar17;
            local_3d8 = puVar7;
LAB_143799697:
            puVar23 = puVar23 + 1;
            if (puVar23 <= puVar7) goto code_r0x0001437996a4;
            goto LAB_143799766;
          }
          for (; ppuVar12 = local_3f0, puVar23 = puVar17, puVar13 = puVar17, puVar17 < puVar7;
              puVar7 = puVar7 + -1) {
            while (puVar13 = puVar13 + 1, puVar13 <= puVar7) {
              plVar3 = (longlong *)*puVar23;
              (**(code **)(*(longlong *)*puVar13 + 0x2d8))((longlong *)*puVar13,&local_398);
              (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_3a8);
              LVar11 = local_398;
              if (local_390 == 0) {
                LVar11.QuadPart = (LONGLONG)&DAT_149dfb77a;
              }
              puVar25 = local_3a8;
              if (local_3a0 == 0) {
                puVar25 = &DAT_149dfb77a;
              }
              lVar21 = 0;
              while( true ) {
                uVar1 = *(ushort *)((longlong)puVar25 + lVar21);
                uVar15 = (uint)uVar1;
                uVar2 = *(ushort *)(LVar11.QuadPart + lVar21);
                uVar24 = (uint)uVar2;
                if (uVar1 != uVar2) {
                  if ((uVar2 | uVar1) < 0x80) {
                    uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                    uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                    if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143799de2;
                  }
                  iVar10 = uVar15 - uVar24;
                  goto LAB_143799e0e;
                }
                if (uVar1 == 0) break;
LAB_143799de2:
                lVar21 = lVar21 + 2;
              }
              iVar10 = 0;
LAB_143799e0e:
              if (local_3a8 != (undefined2 *)0x0) {
                FUN_1400020a8(local_3a8);
              }
              if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
                FUN_1400020a8();
              }
              if (iVar10 < 0) {
                puVar23 = puVar13;
              }
            }
            uVar16 = *puVar23;
            *puVar23 = *puVar7;
            *puVar7 = uVar16;
          }
          goto LAB_143799e62;
        }
LAB_1437998ff:
        ppuVar12 = local_3f0;
        if ((int)uVar16 != 0) {
          uVar24 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
          local_3e8 = uVar16;
          do {
            puVar7 = (ulonglong *)(ulonglong)uVar24;
            uVar15 = uVar24 * 2 + 1;
            local_3d8 = puVar7;
            if ((int)uVar15 < (int)uVar16) {
              do {
                uVar30 = uVar24 * 2 + 2;
                uVar24 = uVar15;
                if ((int)uVar30 < (int)uVar16) {
                  plVar3 = (longlong *)puVar17[(int)uVar30];
                  (**(code **)(*(longlong *)puVar17[(int)uVar15] + 0x2d8))
                            ((longlong *)puVar17[(int)uVar15],&local_398);
                  (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_3a8);
                  LVar11 = local_398;
                  if (local_390 == 0) {
                    LVar11.QuadPart = (LONGLONG)&DAT_149dfb77a;
                  }
                  puVar25 = local_3a8;
                  if (local_3a0 == 0) {
                    puVar25 = &DAT_149dfb77a;
                  }
                  lVar21 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)((longlong)puVar25 + lVar21);
                    uVar24 = (uint)uVar1;
                    uVar2 = *(ushort *)(LVar11.QuadPart + lVar21);
                    uVar28 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1437999c0;
                      }
                      iVar10 = uVar24 - uVar28;
                      goto LAB_1437999ee;
                    }
                    if (uVar1 == 0) break;
LAB_1437999c0:
                    lVar21 = lVar21 + 2;
                  }
                  iVar10 = 0;
LAB_1437999ee:
                  if (local_3a8 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_3a8);
                  }
                  if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  uVar24 = uVar30;
                  if (iVar10 < 0) {
                    uVar24 = uVar15;
                  }
                }
                iVar10 = (int)puVar7;
                plVar3 = (longlong *)puVar17[iVar10];
                (**(code **)(*(longlong *)puVar17[(int)uVar24] + 0x2d8))
                          ((longlong *)puVar17[(int)uVar24],&local_398);
                (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_3a8);
                LVar11 = local_398;
                if (local_390 == 0) {
                  LVar11.QuadPart = (LONGLONG)&DAT_149dfb77a;
                }
                puVar25 = local_3a8;
                if (local_3a0 == 0) {
                  puVar25 = &DAT_149dfb77a;
                }
                lVar21 = 0;
                while( true ) {
                  uVar1 = *(ushort *)((longlong)puVar25 + lVar21);
                  uVar30 = (uint)uVar1;
                  uVar2 = *(ushort *)(LVar11.QuadPart + lVar21);
                  uVar15 = (uint)uVar2;
                  if (uVar1 != uVar2) {
                    if ((uVar2 | uVar1) < 0x80) {
                      uVar30 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                      uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                      if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143799a8f;
                    }
                    iVar5 = uVar30 - uVar15;
                    goto LAB_143799abb;
                  }
                  if (uVar1 == 0) break;
LAB_143799a8f:
                  lVar21 = lVar21 + 2;
                }
                iVar5 = 0;
LAB_143799abb:
                if (local_3a8 != (undefined2 *)0x0) {
                  FUN_1400020a8(local_3a8);
                }
                if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                uVar16 = local_3e8;
                if (-1 < iVar5) break;
                uVar29 = puVar17[iVar10];
                puVar17[iVar10] = puVar17[(int)uVar24];
                puVar17[(int)uVar24] = uVar29;
                uVar15 = uVar24 * 2 + 1;
                puVar7 = (ulonglong *)(ulonglong)uVar24;
              } while ((int)uVar15 < (int)local_3e8);
            }
            uVar24 = (int)local_3d8 - 1;
          } while ((int)local_3d8 != 0);
          ppuVar12 = local_3f0;
          if (1 < (int)uVar16) {
            uVar26 = uVar16 & 0xffffffff;
            uVar29 = *puVar17;
            *puVar17 = puVar17[uVar26 - 1];
            puVar17[uVar26 - 1] = uVar29;
            if ((int)uVar16 != 2) {
              do {
                local_3e8 = uVar26 - 1;
                iVar10 = 0;
                iVar18 = 1;
                iVar5 = 0;
                do {
                  iVar10 = iVar10 + 2;
                  iVar20 = iVar18;
                  if ((longlong)iVar10 < (longlong)local_3e8) {
                    plVar3 = (longlong *)puVar17[iVar10];
                    (**(code **)(*(longlong *)puVar17[iVar18] + 0x2d8))
                              ((longlong *)puVar17[iVar18],&local_398);
                    (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_3a8);
                    LVar11 = local_398;
                    if (local_390 == 0) {
                      LVar11.QuadPart = (LONGLONG)&DAT_149dfb77a;
                    }
                    puVar25 = local_3a8;
                    if (local_3a0 == 0) {
                      puVar25 = &DAT_149dfb77a;
                    }
                    lVar21 = 0;
                    while( true ) {
                      uVar1 = *(ushort *)((longlong)puVar25 + lVar21);
                      uVar24 = (uint)uVar1;
                      uVar2 = *(ushort *)(LVar11.QuadPart + lVar21);
                      uVar15 = (uint)uVar2;
                      if (uVar1 != uVar2) {
                        if ((uVar2 | uVar1) < 0x80) {
                          uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                          uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2])
                          goto LAB_143799bda;
                        }
                        iVar19 = uVar24 - uVar15;
                        goto LAB_143799c09;
                      }
                      if (uVar1 == 0) break;
LAB_143799bda:
                      lVar21 = lVar21 + 2;
                    }
                    iVar19 = 0;
LAB_143799c09:
                    if (local_3a8 != (undefined2 *)0x0) {
                      FUN_1400020a8(local_3a8);
                    }
                    if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    iVar20 = iVar10;
                    if (iVar19 < 0) {
                      iVar20 = iVar18;
                    }
                  }
                  plVar3 = (longlong *)puVar17[iVar5];
                  (**(code **)(*(longlong *)puVar17[iVar20] + 0x2d8))
                            ((longlong *)puVar17[iVar20],&local_398);
                  (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_3a8);
                  LVar11 = local_398;
                  if (local_390 == 0) {
                    LVar11.QuadPart = (LONGLONG)&DAT_149dfb77a;
                  }
                  puVar25 = local_3a8;
                  if (local_3a0 == 0) {
                    puVar25 = &DAT_149dfb77a;
                  }
                  lVar21 = 0;
                  while( true ) {
                    uVar1 = *(ushort *)((longlong)puVar25 + lVar21);
                    uVar15 = (uint)uVar1;
                    uVar2 = *(ushort *)(LVar11.QuadPart + lVar21);
                    uVar24 = (uint)uVar2;
                    if (uVar1 != uVar2) {
                      if ((uVar2 | uVar1) < 0x80) {
                        uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                        uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143799ca9;
                      }
                      iVar10 = uVar15 - uVar24;
                      goto LAB_143799cd5;
                    }
                    if (uVar1 == 0) break;
LAB_143799ca9:
                    lVar21 = lVar21 + 2;
                  }
                  iVar10 = 0;
LAB_143799cd5:
                  if (local_3a8 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_3a8);
                  }
                  if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (-1 < iVar10) break;
                  uVar16 = puVar17[iVar5];
                  puVar17[iVar5] = puVar17[iVar20];
                  puVar17[iVar20] = uVar16;
                  iVar10 = iVar20 * 2;
                  iVar18 = iVar20 * 2 + 1;
                  iVar5 = iVar20;
                } while ((longlong)iVar18 < (longlong)local_3e8);
                uVar16 = *puVar17;
                *puVar17 = puVar17[local_3e8 - 1];
                puVar17[local_3e8 - 1] = uVar16;
                ppuVar12 = local_3f0;
                uVar26 = local_3e8;
              } while (2 < local_3e8);
            }
          }
        }
LAB_143799e62:
        ppuVar12 = ppuVar12 + -3;
      } while (&local_388 <= ppuVar12);
    }
    if ((int)uStack_3c0 != 0) {
      uVar4 = *(undefined8 *)(DAT_14cb0d2b0 + 0x58);
      puVar7 = local_3c8 + (int)uStack_3c0;
      local_3e8 = local_3e0 + 0xd8;
      puVar17 = local_3c8;
      do {
        plVar3 = (longlong *)*puVar17;
        (**(code **)(*plVar3 + 0x2d0))(plVar3,&local_388);
        if ((DAT_14cb122e4 != 0) && (*(int *)(local_3e0 + 0xa8) != *(int *)(local_3e0 + 0xd4))) {
          uVar24 = ((uint)((ulonglong)plVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar3 >> 4)) *
                   -0x7a143595;
          uVar24 = (uVar24 >> 0xd ^ uVar24) * -0x3d4d51cb;
          uVar16 = *(ulonglong *)(local_3e0 + 0xe0);
          if (*(ulonglong *)(local_3e0 + 0xe0) == 0) {
            uVar16 = local_3e8;
          }
          iVar10 = *(int *)(uVar16 + (ulonglong)
                                     (*(int *)(local_3e0 + 0xe8) - 1U & (uVar24 >> 0x10 ^ uVar24)) *
                                     4);
          if (iVar10 != -1) {
            do {
              puVar13 = (ulonglong *)(*(longlong *)(local_3e0 + 0xa0) + (longlong)iVar10 * 0x18);
              if ((longlong *)*puVar13 == plVar3) {
                pdVar31 = (double *)(puVar13 + 1);
                if (pdVar31 != (double *)0x0 && puVar13 != (ulonglong *)0x0) {
                  if (0.0 <= *pdVar31) {
                    FUN_146269454(&local_3a8);
                    puVar25 = &DAT_149dfb77a;
                    if (local_3a0 != 0) {
                      puVar25 = local_3a8;
                    }
                    pwVar14 = L" (took %s)";
                  }
                  else {
                    QueryPerformanceCounter(&local_398);
                    FUN_146269454(&local_3a8,
                                  (double)local_398.QuadPart * DAT_14c83f420 + 16777216.0 + *pdVar31
                                 );
                    puVar25 = &DAT_149dfb77a;
                    if (local_3a0 != 0) {
                      puVar25 = local_3a8;
                    }
                    pwVar14 = L" (streaming %s)";
                  }
                  FUN_140002266(&local_398,pwVar14,puVar25);
                  iVar10 = local_390 + -1;
                  if (local_390 == 0) {
                    iVar10 = 0;
                  }
                  FUN_1400020e8(&local_388,local_398.QuadPart,iVar10);
                  if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_3a8 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                }
                break;
              }
              iVar10 = (int)puVar13[2];
            } while (iVar10 != -1);
          }
        }
        lVar21 = local_3d0[2];
        lVar27 = local_3d0[3];
        (**(code **)(*plVar3 + 0x2c8))(plVar3,&local_3a8);
        puVar13 = (ulonglong *)&DAT_149dfb77a;
        if ((int)local_380 != 0) {
          puVar13 = local_388;
        }
        FUN_140056680(&local_398,puVar13);
        local_408 = &local_3b0;
        lStack_400 = lVar21;
        lStack_3f8 = lVar27;
        FUN_147dc11d0(local_3d0[1],&local_398,uVar4,&local_3a8);
        if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_388 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        puVar17 = puVar17 + 1;
      } while (puVar17 != puVar7);
    }
    if (local_3c8 != (ulonglong *)0x0) {
      FUN_1400020a8(local_3c8);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001437996a4:
  plVar3 = (longlong *)*puVar17;
  (**(code **)(*(longlong *)*puVar23 + 0x2d8))((longlong *)*puVar23,&local_398);
  (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_3a8);
  LVar11 = local_398;
  if (local_390 == 0) {
    LVar11.QuadPart = (LONGLONG)&DAT_149dfb77a;
  }
  puVar25 = local_3a8;
  if (local_3a0 == 0) {
    puVar25 = &DAT_149dfb77a;
  }
  lVar21 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar25 + lVar21);
    uVar24 = (uint)uVar1;
    uVar2 = *(ushort *)(LVar11.QuadPart + lVar21);
    uVar15 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_143799715;
      }
      iVar10 = uVar24 - uVar15;
      goto LAB_14379973f;
    }
    if (uVar1 == 0) break;
LAB_143799715:
    lVar21 = lVar21 + 2;
  }
  iVar10 = 0;
LAB_14379973f:
  if (local_3a8 != (undefined2 *)0x0) {
    FUN_1400020a8(local_3a8);
  }
  if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (-1 < iVar10) goto LAB_143799697;
LAB_143799766:
  do {
    puVar22 = puVar13;
    puVar13 = puVar22 + -1;
    if (puVar13 <= puVar17) break;
    plVar3 = (longlong *)*puVar13;
    (**(code **)(*(longlong *)*puVar17 + 0x2d8))((longlong *)*puVar17,&local_398);
    (**(code **)(*plVar3 + 0x2d8))(plVar3,&local_3a8);
    LVar11 = local_398;
    if (local_390 == 0) {
      LVar11.QuadPart = (LONGLONG)&DAT_149dfb77a;
    }
    puVar25 = local_3a8;
    if (local_3a0 == 0) {
      puVar25 = &DAT_149dfb77a;
    }
    lVar21 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar25 + lVar21);
      uVar15 = (uint)uVar1;
      uVar2 = *(ushort *)(LVar11.QuadPart + lVar21);
      uVar24 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar15 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar24 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1437997e8;
        }
        iVar10 = uVar15 - uVar24;
        goto LAB_143799814;
      }
      if (uVar1 == 0) break;
LAB_1437997e8:
      lVar21 = lVar21 + 2;
    }
    iVar10 = 0;
LAB_143799814:
    if (local_3a8 != (undefined2 *)0x0) {
      FUN_1400020a8(local_3a8);
    }
    if ((undefined2 *)local_398.QuadPart != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  } while (-1 < iVar10);
  if (puVar23 <= puVar13) {
    uVar16 = *puVar23;
    *puVar23 = *puVar13;
    *puVar13 = uVar16;
    goto LAB_143799697;
  }
  uVar16 = *puVar17;
  *puVar17 = *puVar13;
  puVar22[-1] = uVar16;
  iVar10 = (uint)local_3e8 + -1;
  puVar22 = puVar22 + -2;
  if ((longlong)puVar22 - (longlong)puVar17 < (longlong)local_3d8 - (longlong)puVar23) {
    if (puVar23 < puVar7) {
      *local_3f0 = puVar23;
      local_3f0[1] = puVar7;
      *(int *)(local_3f0 + 2) = iVar10;
      local_3f0 = local_3f0 + 3;
    }
    ppuVar12 = local_3f0;
    if (puVar13 <= puVar17 + 1) goto LAB_143799e62;
  }
  else {
    ppuVar12 = local_3f0;
    if (puVar17 + 1 < puVar13) {
      *local_3f0 = puVar17;
      local_3f0[1] = puVar22;
      *(int *)(local_3f0 + 2) = iVar10;
      ppuVar12 = local_3f0 + 3;
    }
    puVar22 = puVar7;
    puVar17 = puVar23;
    if (puVar7 <= puVar23) goto LAB_143799e62;
  }
  local_3f0 = ppuVar12;
  iVar5 = (int)((ulonglong)((longlong)puVar22 - (longlong)puVar17) >> 3);
  uVar16 = (ulonglong)(iVar5 + 1);
  puVar7 = puVar22;
  if (iVar10 == 0) goto LAB_1437998ff;
  goto LAB_14379966a;
}



// FUNCTION 14379a25c FUN_14379a25c body=389 status=ok
// SIG undefined FUN_14379a25c(void)

undefined4 FUN_14379a25c(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_288 [40];
  undefined8 *local_260;
  undefined8 *local_258;
  longlong local_250;
  undefined4 local_248;
  undefined8 local_240 [33];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_11c;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined2 local_108;
  undefined8 local_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_128 = DAT_14c8464f0;
  local_138 = DAT_14c8464e0;
  uStack_130 = DAT_14c8464e8;
  local_120 = 0;
  local_11c = 1;
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  uStack_f7 = 0;
  uStack_f0 = 0;
  uStack_ef = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_64 = 0xffffffff00000080;
  local_5c = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_108 = 1;
  (**(code **)(*param_2 + 0x310))(param_2,local_240);
  uStack_110 = CONCAT44(uStack_110._4_4_,1);
  FUN_1446f84a2(&local_118,0);
  *local_118 = local_240[0];
  uVar1 = *param_1;
  FUN_1406d359e(local_240,&local_138);
  local_258 = &local_138;
  local_260 = local_240;
  FUN_147664532(&local_250);
  uVar2 = FUN_1406d2c3e(uVar1,param_3,&local_250,1);
  FUN_1406d33ae(local_250,local_248);
  if (local_250 != 0) {
    FUN_1400020a8();
  }
  FUN_1406d3414(local_240);
  FUN_1406d3414(&local_138);
  if ((local_28 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379a3e2 FUN_14379a3e2 body=387 status=ok
// SIG undefined FUN_14379a3e2(void)

void FUN_14379a3e2(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  local_30 = param_2;
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_50 = &local_28;
      local_28 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14379a449;
  }
  lVar1 = 0;
LAB_14379a449:
  lVar1 = FUN_14103c0a0(lVar1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1411ac5e8(lVar1,&local_30);
    if (plVar2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar2 + 0x2a0))(plVar2);
      if (*(longlong *)(lVar1 + 0x30) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x2b8);
      }
      FUN_1411ada6c(uVar3,plVar2,param_3,param_4);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14379a566 FUN_14379a566 body=346 status=ok
// SIG undefined FUN_14379a566(void)

void FUN_14379a566(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    if (DAT_14cb10130 == 0) {
      local_50 = &local_38;
      local_38 = FUN_140754f84;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147da9a76;
      local_60 = FUN_1409f3105;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) goto LAB_14379a5cf;
  }
  lVar1 = 0;
LAB_14379a5cf:
  lVar1 = FUN_14103c0a0(lVar1);
  if (lVar1 != 0) {
    lVar1 = FUN_147db4664(lVar1,param_2);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


