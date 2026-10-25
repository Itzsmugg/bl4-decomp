// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1435b80d5 FUN_1435b80d5 body=41 status=ok
// SIG undefined FUN_1435b80d5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b80d5(void)

{
  _DAT_14caf3298 = 0;
  if (DAT_14caf3290 != 0) {
    FUN_1400020a8();
  }
  FUN_146155174();
  return;
}



// FUNCTION 1435b80fe FUN_1435b80fe body=1208 status=ok
// SIG undefined FUN_1435b80fe(void)

void FUN_1435b80fe(longlong *param_1)

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
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 8))();
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1435b8142;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1435b8147;
      goto LAB_1435b819a;
    }
  }
  else {
LAB_1435b8142:
    if (iVar6 != 0x10) {
LAB_1435b819a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1435b8147;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1435b8147;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1435b82f3;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_1435c8f10);
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
LAB_1435b82f3:
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
              goto LAB_1435b8373;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1435b8373:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa00100;
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
        local_48 = &PTR_LAB_14aa000b0;
        local_68[0] = &LAB_1435cc852;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"FDestroyFXSystemCommand",&DAT_14caf3b88);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar13 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar13 = &local_48;
          }
          (*(code *)(*pppuVar13)[2])();
        }
      }
      goto LAB_1435b8231;
    }
  }
LAB_1435b8147:
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
LAB_1435b8231:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b85cf FUN_1435b85cf body=69 status=ok
// SIG undefined FUN_1435b85cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b85cf(void)

{
  _DAT_14caf32a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b8611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf32a8,1);
  return;
}



// FUNCTION 1435b8614 FUN_1435b8614 body=69 status=ok
// SIG undefined FUN_1435b8614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b8614(void)

{
  _DAT_14caf32b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b8656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf32c0,1);
  return;
}



// FUNCTION 1435b8659 FUN_1435b8659 body=69 status=ok
// SIG undefined FUN_1435b8659(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b8659(void)

{
  _DAT_14caf32c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b869b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf32d0,1);
  return;
}



// FUNCTION 1435b869e FUN_1435b869e body=69 status=ok
// SIG undefined FUN_1435b869e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b869e(void)

{
  _DAT_14caf32d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b86e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf32e0,1);
  return;
}



// FUNCTION 1435b86e3 FUN_1435b86e3 body=69 status=ok
// SIG undefined FUN_1435b86e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b86e3(void)

{
  _DAT_14caf32e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b8725. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf32f0,1);
  return;
}



// FUNCTION 1435b8728 FUN_1435b8728 body=69 status=ok
// SIG undefined FUN_1435b8728(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b8728(void)

{
  _DAT_14caf32f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b876a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3300,1);
  return;
}



// FUNCTION 1435b876d FUN_1435b876d body=69 status=ok
// SIG undefined FUN_1435b876d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b876d(void)

{
  _DAT_14caf3308 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b87af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3310,1);
  return;
}



// FUNCTION 1435b87b2 FUN_1435b87b2 body=69 status=ok
// SIG undefined FUN_1435b87b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b87b2(void)

{
  _DAT_14caf3318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b87f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3320,1);
  return;
}



// FUNCTION 1435b87f7 FUN_1435b87f7 body=69 status=ok
// SIG undefined FUN_1435b87f7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b87f7(void)

{
  _DAT_14caf3328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b8839. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3330,1);
  return;
}



// FUNCTION 1435b883c FUN_1435b883c body=69 status=ok
// SIG undefined FUN_1435b883c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b883c(void)

{
  _DAT_14caf3338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b887e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3340,1);
  return;
}



// FUNCTION 1435b8881 FUN_1435b8881 body=69 status=ok
// SIG undefined FUN_1435b8881(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b8881(void)

{
  _DAT_14caf3348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b88c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3350,1);
  return;
}



// FUNCTION 1435b88c6 FUN_1435b88c6 body=69 status=ok
// SIG undefined FUN_1435b88c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b88c6(void)

{
  _DAT_14caf3358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b8908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3360,1);
  return;
}



// FUNCTION 1435b890b FUN_1435b890b body=69 status=ok
// SIG undefined FUN_1435b890b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b890b(void)

{
  _DAT_14caf3368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b894d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3370,1);
  return;
}



// FUNCTION 1435b8950 FUN_1435b8950 body=69 status=ok
// SIG undefined FUN_1435b8950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435b8950(void)

{
  _DAT_14caf3378 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435b8992. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3380,1);
  return;
}



// FUNCTION 1435b8996 FUN_1435b8996 body=1378 status=ok
// SIG undefined FUN_1435b8996(void)

void FUN_1435b8996(void)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *_Src;
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
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined8 *local_80;
  void *local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  _Src = DAT_14caf3c78;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar15 = (longlong)DAT_14caf3c80;
  if (lVar15 == 0) goto LAB_1435b89be;
  local_80 = &DAT_14caf3c38;
  local_78 = (void *)0x0;
  uStack_70 = CONCAT44(uStack_70._4_4_,DAT_14caf3c80);
  FUN_147c0e556(&local_78,DAT_14caf3c80);
  memcpy(local_78,_Src,lVar15 << 4);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_1435b8a42;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1435b8a47;
      goto LAB_1435b8a78;
    }
LAB_1435b8a47:
    FUN_1435ce57c(&local_80,&DAT_14ca85100);
  }
  else {
LAB_1435b8a42:
    if (iVar5 == 0x10) goto LAB_1435b8a47;
LAB_1435b8a78:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar15 + 0xc60), iVar5 == 2))
      goto LAB_1435b8a47;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_1435b8a47;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar9 = (uint *)*puVar2;
      if (puVar9 != (uint *)0x0) goto LAB_1435b8bf5;
      while( true ) {
        uVar11 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar11 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar11 | 1;
          __tlregdtor(&LAB_1435c8f10);
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
LAB_1435b8bf5:
        puVar16 = (undefined8 *)(*(longlong *)(puVar9 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar13 = (uint *)(puVar16 + 0x18);
        uVar11 = puVar9[0x12];
        if (puVar13 <= puVar9 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x4000;
          LOCK();
          uVar3 = *puVar9;
          *puVar9 = *puVar9 + uVar11 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar11) != 0xffffffff) break;
          puVar9 = (uint *)*puVar2;
          *puVar9 = 0xffffffff;
          *(uint **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          puVar16 = (undefined8 *)((longlong)puVar9 + 0x5fU & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar16 + 0x18);
          uVar11 = 0;
          if (puVar13 <= puVar9 + 0x4000) {
            uVar11 = 1;
            goto LAB_1435b8c75;
          }
        }
      }
      uVar11 = uVar11 + 1;
LAB_1435b8c75:
      *(uint **)(puVar9 + 0x10) = puVar13;
      puVar9[0x12] = uVar11;
      iVar5 = 0;
      FUN_1447247dc(puVar16,0);
      *puVar16 = &PTR_FUN_14aa005b8;
      puVar16[0x15] = local_80;
      puVar16[0x16] = local_78;
      local_78 = (void *)0x0;
      *(undefined4 *)(puVar16 + 0x17) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar16 + 0xbc) = uStack_70._4_4_;
      uStack_70 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar11 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar11 < 2) {
          uVar14 = (ulonglong)(byte)(&DAT_149e38edc)[uVar11];
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
      if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
      }
      puVar16[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar16[9] = puVar16;
      puVar16[10] = puVar16;
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar4 = 1;
        if ((char)uVar14 != '\x06') {
          uVar4 = uVar14;
        }
        uVar14 = uVar4;
        uVar10 = 0;
      }
      else {
        if ((char)uVar14 == '\x06') {
          uVar14 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
        }
        uVar10 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar16[0xf] = uVar10;
      puVar16[0x10] = uVar14 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar16 + 0x1c) = iVar5;
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
      local_88 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14aa00560;
      local_40 = local_80;
      local_38 = local_78;
      uStack_30 = uStack_70;
      local_78 = (void *)0x0;
      uStack_70 = 0;
      local_68[0] = &LAB_1435cf456;
      FUN_14005a792(&DAT_14ca9a440,L"FInjectPendingCurvesCommand",&DAT_14caf3c34);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar12 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar12 = &local_48;
        }
        (*(code *)(*pppuVar12)[2])();
      }
    }
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  DAT_14caf3c80 = 0;
  if (DAT_14caf3c84 < 0) {
    FUN_147c0e846();
  }
LAB_1435b89be:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b8efa FUN_1435b8efa body=2179 status=ok
// SIG undefined FUN_1435b8efa(void)

void FUN_1435b8efa(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_1a8 [32];
  code **local_188;
  longlong local_178;
  undefined8 *local_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  code *local_e8 [2];
  longlong *local_d8;
  longlong local_c8 [5];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (((((DAT_14c7616a4 == 0) || (DAT_14ca84e1d != '\x01')) || ((DAT_14c873768 & 1) == 0)) ||
      ((DAT_14ca84e19 != '\x01' ||
       (plVar14 = *(longlong **)(param_2 + 0x620), plVar14 == (longlong *)0x0)))) ||
     (*(char *)(param_1 + 8) != '\0')) goto LAB_1435b9328;
  puVar13 = (undefined8 *)FUN_14001cc68(0x1e0);
  *puVar13 = 0;
  *(undefined1 *)(puVar13 + 7) = 0;
  puVar22 = &DAT_14c846400;
  puVar23 = puVar13 + 8;
  for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar23 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar23 = puVar23 + 1;
  }
  puVar22 = &DAT_14c846400;
  puVar23 = puVar13 + 0x18;
  for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar23 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar23 = puVar23 + 1;
  }
  puVar22 = &DAT_14c846400;
  puVar23 = puVar13 + 0x28;
  for (lVar19 = 0x10; lVar19 != 0; lVar19 = lVar19 + -1) {
    *puVar23 = *puVar22;
    puVar22 = puVar22 + 1;
    puVar23 = puVar23 + 1;
  }
  *(undefined4 *)(puVar13 + 0x38) = 0;
  *(undefined4 *)((longlong)puVar13 + 0x1c4) = 0;
  *(undefined4 *)(puVar13 + 0x39) = 0xffffffff;
  *(undefined4 *)((longlong)puVar13 + 0x1cc) = 0;
  *(undefined1 *)(puVar13 + 0x3a) = 0;
  (**(code **)(*plVar14 + 0x2a0))(plVar14,puVar13,0);
  *(undefined8 **)(param_2 + 0x640) = puVar13;
  dVar27 = *(double *)(param_2 + 0x170);
  dVar3 = *(double *)(param_2 + 0x188);
  dVar4 = *(double *)(param_2 + 0x160);
  dVar5 = *(double *)(param_2 + 0x168);
  dVar6 = *(double *)(param_2 + 0x180);
  dVar7 = *(double *)(param_2 + 0x178);
  puVar13[1] = dVar4 - dVar7;
  puVar13[2] = dVar5 - dVar6;
  puVar13[3] = dVar27 - dVar3;
  puVar13[4] = dVar4 + dVar7;
  puVar13[5] = dVar5 + dVar6;
  puVar13[6] = dVar27 + dVar3;
  *(undefined1 *)(puVar13 + 7) = 1;
  *(undefined4 *)((longlong)puVar13 + 0x1c4) = *(undefined4 *)(param_2 + 0x628);
  *(undefined4 *)(puVar13 + 0x38) = *(undefined4 *)(param_2 + 0x62c);
  dVar5 = *(double *)(param_2 + 0x240);
  dVar6 = *(double *)(param_2 + 0x248);
  dVar7 = *(double *)(param_2 + 0x250);
  local_108 = *(undefined4 *)(param_2 + 0x260);
  uStack_104 = *(undefined4 *)(param_2 + 0x264);
  uStack_100 = *(undefined4 *)(param_2 + 0x268);
  uStack_fc = *(undefined4 *)(param_2 + 0x26c);
  local_f8 = *(undefined8 *)(param_2 + 0x270);
  dVar28 = dVar6 + dVar6;
  dVar24 = dVar7 + dVar7;
  dVar27 = dVar5 * (dVar5 + dVar5);
  dVar8 = *(double *)(param_2 + 0x280);
  local_148 = *(double *)(param_2 + 0x288);
  dStack_140 = (1.0 - (dVar7 * dVar24 + dVar27)) * local_148;
  dStack_120 = *(double *)(param_2 + 0x290);
  local_118 = (1.0 - (dVar27 + dVar6 * dVar28)) * dStack_120;
  dVar3 = *(double *)(param_2 + 0x240) * dVar24;
  dVar27 = *(double *)(param_2 + 600);
  dVar25 = dVar24 * dVar27;
  dVar26 = (dVar5 + dVar5) * *(double *)(param_2 + 600);
  dVar27 = dVar28 * dVar27;
  dVar4 = (dVar28 * dVar5 + dVar25) * dVar8;
  local_138 = (dVar24 * dVar6 + dVar26) * local_148;
  local_128 = (dVar27 + dVar3) * dStack_120;
  local_158 = (dVar3 - dVar27) * dVar8;
  local_148 = (dVar28 * dVar5 - dVar25) * local_148;
  dStack_120 = (dVar24 * dVar6 - dVar26) * dStack_120;
  local_168._8_4_ = SUB84(dVar4,0);
  local_168._0_8_ = (1.0 - (dVar7 * dVar24 + dVar6 * dVar28)) * dVar8;
  local_168._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  uStack_150 = 0;
  uStack_130 = 0;
  uStack_110 = 0;
  uStack_f0 = 0x3ff0000000000000;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar19 + 0xc60);
  local_178 = param_1;
  local_170 = puVar13;
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_1435b9242;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_1435b96a6;
      goto LAB_1435b924b;
    }
  }
  else {
LAB_1435b9242:
    if (iVar10 != 0x10) {
LAB_1435b924b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar19 + 0xc60), iVar10 == 2))
        goto LAB_1435b96a6;
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_1435b96a6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar22 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar16 = (uint *)*puVar22;
        if (puVar16 != (uint *)0x0) goto LAB_1435b9427;
        while( true ) {
          uVar18 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar18 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar18 | 1;
            __tlregdtor(&LAB_1435c8f10);
          }
          lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar15 = *(undefined4 **)(lVar19 + 0x310);
          *(undefined8 *)(lVar19 + 0x310) = 0;
          if (puVar15 == (undefined4 *)0x0) {
            puVar15 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar15 = 0xffffffff;
          *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
          puVar15[0x12] = 0;
          *puVar22 = puVar15;
          FUN_140217a48(puVar22);
          puVar16 = (uint *)*puVar22;
LAB_1435b9427:
          puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar20 = (uint *)(puVar23 + 0x28);
          uVar18 = puVar16[0x12];
          if (puVar20 <= puVar16 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
            LOCK();
            uVar2 = *puVar16;
            *puVar16 = *puVar16 + uVar18 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar18) != 0xffffffff) break;
            puVar16 = (uint *)*puVar22;
            *puVar16 = 0xffffffff;
            *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
            puVar16[0x12] = 0;
            *puVar22 = puVar16;
            puVar23 = (undefined8 *)((longlong)puVar16 + 0x67U & 0xfffffffffffffff0);
            puVar20 = (uint *)(puVar23 + 0x28);
            uVar18 = 0;
            if (puVar20 <= puVar16 + 0x4000) {
              uVar18 = 1;
              goto LAB_1435b94a7;
            }
          }
        }
        uVar18 = uVar18 + 1;
LAB_1435b94a7:
        *(uint **)(puVar16 + 0x10) = puVar20;
        puVar16[0x12] = uVar18;
        iVar10 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14aa001d0;
        memcpy(puVar23 + 0x16,&local_178,0x90);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar18 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
            uVar21 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
            iVar10 = 0;
          }
          else {
            uVar21 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar21 = 5;
        }
        if (*(code **)(puVar23[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar23[0xe] + 0x18))(puVar23 + 0xe,puVar23 + 9);
        }
        puVar23[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar23[9] = puVar23;
        puVar23[10] = puVar23;
        lVar19 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar19 == 0) {
          uVar9 = 1;
          if ((char)uVar21 != '\x06') {
            uVar9 = uVar21;
          }
          uVar21 = uVar9;
          uVar17 = 0;
        }
        else {
          if ((char)uVar21 == '\x06') {
            uVar21 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
          }
          uVar17 = *(undefined8 *)(lVar19 + 0x30);
        }
        puVar23[0xf] = uVar17;
        puVar23[0x10] = uVar21 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar10;
        if (puVar23 == (undefined8 *)0x0) {
          local_e8[0] = (code *)CONCAT71(local_e8[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_e8[0] = (code *)CONCAT71(local_e8[0]._1_7_,1);
          FUN_1447439e4(puVar23);
          LOCK();
          piVar1 = (int *)(puVar23 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar23)(puVar23,1);
          }
        }
      }
      else {
        local_e8[0] = (code *)0x0;
        plVar14 = (longlong *)FUN_14001cc68(0xa0,0x10);
        *plVar14 = (longlong)&PTR_LAB_14aa00180;
        local_d8 = plVar14;
        memcpy(plVar14 + 2,&local_178,0x90);
        if (plVar14 != (longlong *)&DAT_fffffffffffffff0) {
          local_e8[0] = FUN_1435ccbb2;
        }
        local_188 = local_e8;
        FUN_14005a792(&DAT_14ca9a440,L"FAddVectorFieldCommand",&DAT_14caf3b8c);
        if (local_e8[0] != (code *)0x0) {
          plVar14 = local_d8;
          if (local_d8 == (longlong *)0x0) {
            plVar14 = local_c8;
          }
          (**(code **)(*plVar14 + 0x10))();
        }
      }
      goto LAB_1435b9328;
    }
  }
LAB_1435b96a6:
  FUN_147d95fc2(puVar13,local_168);
  FUN_147c0bb60(local_178 + 0x20,local_e8);
  *(int *)(local_170 + 0x39) = (int)local_e8[0];
  *(undefined8 **)(*(longlong *)(local_178 + 0x20) + (longlong)(int)local_e8[0] * 8) = local_170;
LAB_1435b9328:
  if ((local_a0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b977e FUN_1435b977e body=1322 status=ok
// SIG undefined FUN_1435b977e(void)

void FUN_1435b977e(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  code **local_78;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((DAT_14c7616a4 == 0) || (DAT_14ca84e1d != '\x01')) || ((DAT_14c873768 & 1) == 0)) ||
     (DAT_14ca84e19 != '\x01')) goto LAB_1435b9911;
  lVar4 = *(longlong *)(param_2 + 0x640);
  *(undefined8 *)(param_2 + 0x640) = 0;
  if ((lVar4 == 0) || (*(char *)(param_1 + 8) != '\0')) goto LAB_1435b9911;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1435b9815;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1435b981a;
      goto LAB_1435b9876;
    }
  }
  else {
LAB_1435b9815:
    if (iVar7 != 0x10) {
LAB_1435b9876:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_1435b981a;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_1435b981a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_1435b99d2;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_1435c8f10);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_1435b99d2:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x17);
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
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_1435b9a52;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_1435b9a52:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa00238;
        puVar16[0x15] = param_1;
        puVar16[0x16] = lVar4;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar7 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
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
          uVar6 = 1;
          if ((char)uVar17 != '\x06') {
            uVar6 = uVar17;
          }
          uVar17 = uVar6;
          uVar12 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
        local_48 = &PTR_LAB_14aa001e0;
        local_68[0] = FUN_1435cce5a;
        local_40 = param_1;
        local_38 = lVar4;
        FUN_14005a792(&DAT_14ca9a440,L"FRemoveVectorFieldCommand",&DAT_14caf3b90);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_1435b9911;
    }
  }
LAB_1435b981a:
  if (*(int *)(lVar4 + 0x1c8) != -1) {
    FUN_147c0bc3a(param_1 + 0x20);
    FUN_143778f62(lVar4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
  }
LAB_1435b9911:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435b9cba FUN_1435b9cba body=2152 status=ok
// SIG undefined FUN_1435b9cba(void)

void FUN_1435b9cba(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
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
  ulonglong uVar20;
  int iVar21;
  DWORD DVar22;
  DWORD DVar23;
  longlong *plVar24;
  undefined4 *puVar25;
  uint *puVar26;
  undefined8 uVar27;
  uint uVar28;
  uint *puVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined1 auStack_228 [32];
  undefined1 **local_208;
  longlong local_1f8;
  longlong local_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  undefined1 local_1b8;
  undefined7 uStack_1b7;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined1 *local_118 [2];
  longlong *local_108;
  longlong local_f8 [5];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if (((((DAT_14c7616a4 == 0) || (DAT_14ca84e1d != '\x01')) || ((DAT_14c873768 & 1) == 0)) ||
      ((DAT_14ca84e19 != '\x01' || (lVar4 = *(longlong *)(param_2 + 0x640), lVar4 == 0)))) ||
     (*(char *)(param_1 + 8) != '\0')) goto LAB_1435ba091;
  dStack_1c0 = *(double *)(param_2 + 0x170) + *(double *)(param_2 + 0x188);
  local_1c8 = *(double *)(param_2 + 0x168) + *(double *)(param_2 + 0x180);
  dStack_1d0 = *(double *)(param_2 + 0x160) + *(double *)(param_2 + 0x178);
  local_1d8 = *(double *)(param_2 + 0x170) - *(double *)(param_2 + 0x188);
  dStack_1e0 = *(double *)(param_2 + 0x168) - *(double *)(param_2 + 0x180);
  local_1e8 = *(double *)(param_2 + 0x160) - *(double *)(param_2 + 0x178);
  dVar14 = *(double *)(param_2 + 0x240);
  dVar15 = *(double *)(param_2 + 0x248);
  dVar16 = *(double *)(param_2 + 0x250);
  dVar10 = dVar15 + dVar15;
  dVar6 = dVar16 + dVar16;
  dVar12 = dVar14 * (dVar14 + dVar14);
  local_138 = *(undefined4 *)(param_2 + 0x270);
  uStack_134 = *(undefined4 *)(param_2 + 0x274);
  dVar17 = *(double *)(param_2 + 0x280);
  dVar18 = *(double *)(param_2 + 0x288);
  dVar11 = (1.0 - (dVar16 * dVar6 + dVar12)) * dVar18;
  dVar19 = *(double *)(param_2 + 0x290);
  local_158 = (1.0 - (dVar12 + dVar15 * dVar10)) * dVar19;
  dVar13 = *(double *)(param_2 + 0x240) * dVar6;
  dVar12 = *(double *)(param_2 + 600);
  dVar7 = dVar6 * dVar12;
  dVar8 = (dVar14 + dVar14) * *(double *)(param_2 + 600);
  dVar12 = dVar10 * dVar12;
  dVar9 = (dVar10 * dVar14 + dVar7) * dVar17;
  local_178 = (dVar6 * dVar15 + dVar8) * dVar18;
  local_198 = (dVar13 - dVar12) * dVar17;
  dVar8 = (dVar6 * dVar15 - dVar8) * dVar19;
  local_148 = *(undefined8 *)(param_2 + 0x260);
  uStack_140 = *(undefined8 *)(param_2 + 0x268);
  local_128 = *(undefined8 *)(param_2 + 0x628);
  local_1b8 = 1;
  local_1a8._8_4_ = SUB84(dVar9,0);
  local_1a8._0_8_ = (1.0 - (dVar16 * dVar6 + dVar15 * dVar10)) * dVar17;
  local_1a8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  uStack_190 = 0;
  local_188._8_4_ = SUB84(dVar11,0);
  local_188._0_8_ = (dVar10 * dVar14 - dVar7) * dVar18;
  local_188._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  uStack_170 = 0;
  local_168._8_4_ = SUB84(dVar8,0);
  local_168._0_8_ = (dVar12 + dVar13) * dVar19;
  local_168._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  uStack_150 = 0;
  uStack_130 = 0;
  uStack_12c = 0x3ff00000;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar21 = *(int *)(lVar5 + 0xc60);
  local_1f8 = param_1;
  local_1f0 = lVar4;
  if (DAT_14c86a9fc == 0) {
    if (iVar21 != 2) {
      if (iVar21 != 1) goto LAB_1435b9fab;
      DVar22 = FUN_140ad26c0();
      DVar23 = GetCurrentThreadId();
      if (DVar22 == DVar23) goto LAB_1435ba435;
      goto LAB_1435b9fb4;
    }
  }
  else {
LAB_1435b9fab:
    if (iVar21 != 0x10) {
LAB_1435b9fb4:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar21 = *(int *)(lVar5 + 0xc60), iVar21 == 2))
        goto LAB_1435ba435;
        if (iVar21 == 1) {
          DVar22 = FUN_140ad26c0();
          DVar23 = GetCurrentThreadId();
          if (DVar22 == DVar23) goto LAB_1435ba435;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar26 = (uint *)*puVar2;
        if (puVar26 != (uint *)0x0) goto LAB_1435ba1b2;
        while( true ) {
          uVar28 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar28 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar28 | 1;
            __tlregdtor(&LAB_1435c8f10);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar25 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar25 == (undefined4 *)0x0) {
            puVar25 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar25 = 0xffffffff;
          *(undefined4 **)(puVar25 + 0x10) = puVar25 + 0x16;
          puVar25[0x12] = 0;
          *puVar2 = puVar25;
          FUN_140217a48(puVar2);
          puVar26 = (uint *)*puVar2;
LAB_1435ba1b2:
          puVar31 = (undefined8 *)(*(longlong *)(puVar26 + 0x10) + 0xfU & 0xfffffffffffffff0);
          puVar29 = (uint *)(puVar31 + 0x32);
          uVar28 = puVar26[0x12];
          if (puVar29 <= puVar26 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar26 + 0x10) = puVar26 + 0x4000;
            LOCK();
            uVar3 = *puVar26;
            *puVar26 = *puVar26 + uVar28 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar28) != 0xffffffff) break;
            puVar26 = (uint *)*puVar2;
            *puVar26 = 0xffffffff;
            *(uint **)(puVar26 + 0x10) = puVar26 + 0x16;
            puVar26[0x12] = 0;
            *puVar2 = puVar26;
            puVar31 = (undefined8 *)((longlong)puVar26 + 0x67U & 0xfffffffffffffff0);
            puVar29 = (uint *)(puVar31 + 0x32);
            uVar28 = 0;
            if (puVar29 <= puVar26 + 0x4000) {
              uVar28 = 1;
              goto LAB_1435ba232;
            }
          }
        }
        uVar28 = uVar28 + 1;
LAB_1435ba232:
        *(uint **)(puVar26 + 0x10) = puVar29;
        puVar26[0x12] = uVar28;
        iVar21 = 0;
        FUN_1447247dc(puVar31,0);
        *puVar31 = &PTR_FUN_14aa002a8;
        memcpy(puVar31 + 0x16,&local_1f8,0xe0);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar28 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar28 < 2) {
            uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar28];
            iVar21 = 0;
          }
          else {
            uVar30 = 2;
          }
        }
        else {
          iVar21 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar30 = 5;
        }
        if (*(code **)(puVar31[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar31[0xe] + 0x18))(puVar31 + 0xe,puVar31 + 9);
        }
        puVar31[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar31[9] = puVar31;
        puVar31[10] = puVar31;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar20 = 1;
          if ((char)uVar30 != '\x06') {
            uVar20 = uVar30;
          }
          uVar30 = uVar20;
          uVar27 = 0;
        }
        else {
          if ((char)uVar30 == '\x06') {
            uVar30 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar27 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar31[0xf] = uVar27;
        puVar31[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar31 + 0x1c) = iVar21;
        if (puVar31 == (undefined8 *)0x0) {
          local_118[0] = (undefined1 *)CONCAT71(local_118[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar31 + 1) = *(int *)(puVar31 + 1) + 1;
          UNLOCK();
          local_118[0] = (undefined1 *)CONCAT71(local_118[0]._1_7_,1);
          FUN_1447439e4(puVar31);
          LOCK();
          piVar1 = (int *)(puVar31 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar31)(puVar31,1);
          }
        }
      }
      else {
        local_118[0] = (undefined1 *)0x0;
        plVar24 = (longlong *)FUN_14001cc68(0xf0,0x10);
        *plVar24 = (longlong)&PTR_LAB_14aa00250;
        local_108 = plVar24;
        memcpy(plVar24 + 2,&local_1f8,0xe0);
        if (plVar24 != (longlong *)&DAT_fffffffffffffff0) {
          local_118[0] = &LAB_1435cd072;
        }
        local_208 = local_118;
        FUN_14005a792(&DAT_14ca9a440,L"FUpdateVectorFieldCommand",&DAT_14caf3b94);
        if (local_118[0] != (undefined1 *)0x0) {
          plVar24 = local_108;
          if (local_108 == (longlong *)0x0) {
            plVar24 = local_f8;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
      }
      goto LAB_1435ba091;
    }
  }
LAB_1435ba435:
  *(ulonglong *)(lVar4 + 0x38) = CONCAT71(uStack_1b7,local_1b8);
  *(double *)(lVar4 + 0x28) = local_1c8;
  *(double *)(lVar4 + 0x30) = dStack_1c0;
  *(double *)(lVar4 + 0x18) = local_1d8;
  *(double *)(lVar4 + 0x20) = dStack_1d0;
  *(double *)(lVar4 + 8) = local_1e8;
  *(double *)(lVar4 + 0x10) = dStack_1e0;
  *(undefined4 *)(local_1f0 + 0x1c4) = (undefined4)local_128;
  *(undefined4 *)(local_1f0 + 0x1c0) = local_128._4_4_;
  FUN_147d95fc2(local_1f0,local_1a8);
LAB_1435ba091:
  if ((local_d0 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ba524 FUN_1435ba524 body=898 status=ok
// SIG undefined FUN_1435ba524(void)

void FUN_1435ba524(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined *puVar7;
  char cVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_51;
  undefined *local_50;
  longlong local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar8 = '\x01';
  if ((param_5 != '\0') && (0 < *(int *)((longlong)param_3 + 0xc))) {
    lVar6 = *param_3;
    if (*(char *)(lVar6 + 0x30e9) == '\0') {
      if ((*(char *)(lVar6 + 0x23ec) == '\0') && (*(char *)(lVar6 + 0x23e8) == '\0')) {
        cVar8 = *(char *)(lVar6 + 0x23eb);
      }
    }
    else {
      cVar8 = '\0';
    }
  }
  if ((((DAT_14c7616a4 != 0) && (DAT_14ca84e1d == '\x01')) && ((DAT_14c873768 & 1) != 0)) &&
     (cVar8 == '\0' && DAT_14ca84e19 == '\x01')) {
    lVar6 = *(longlong *)(*param_3 + 0x18);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_50,L"Renderer",1);
      puVar7 = local_50;
      uVar9 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar9,puVar7);
    }
    uVar9 = (**(code **)(*DAT_14cad8310 + 0x218))(DAT_14cad8310,*param_3);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar14 + 0x3a;
    if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
      FUN_140023dd8(puVar1,0x1d8);
      puVar14 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar14 + 0x3a;
    }
    *puVar1 = (ulonglong)puVar10;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
      FUN_14596f92a(&local_50);
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FEmptyShaderParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x7a6;
      local_78 = &local_50;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_50 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435cd65a);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
    local_50 = &DAT_14caf3b40;
    local_48 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_40 = &DAT_14c9e1d18;
    local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140068f1a(puVar14,&local_51,&local_50,0x10);
    puVar14[0x37] = param_1;
    puVar14[0x38] = lVar6;
    puVar14[0x39] = uVar9;
    *puVar14 = &PTR_FUN_14aa002c0;
    iVar5 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar5 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar5 * 8) = puVar14;
    *(int *)((longlong)puVar14 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar14);
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar11 = (longlong *)FUN_14001cc68(0x10,8);
          plVar11[1] = lVar6;
          plVar13 = DAT_14ca843c0;
          plVar12 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar11 = (longlong)plVar13;
              LOCK();
              bVar15 = plVar13 != DAT_14ca843c0;
              plVar12 = plVar11;
              if (bVar15) {
                plVar13 = DAT_14ca843c0;
                plVar12 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar12;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar11 = (longlong)plVar12;
              LOCK();
              bVar15 = plVar12 != DAT_14ca843c8;
              plVar13 = plVar11;
              if (bVar15) {
                plVar12 = DAT_14ca843c8;
                plVar13 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar13;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435ba8a8 FUN_1435ba8a8 body=838 status=ok
// SIG undefined FUN_1435ba8a8(void)

void FUN_1435ba8a8(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  char param_5)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined **local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_49;
  undefined *local_48;
  longlong local_40;
  undefined *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar7 = '\x01';
  if ((param_5 != '\0') && (0 < *(int *)((longlong)param_3 + 0xc))) {
    lVar6 = *param_3;
    if (*(char *)(lVar6 + 0x30e9) == '\0') {
      if ((*(char *)(lVar6 + 0x23ec) == '\0') && (*(char *)(lVar6 + 0x23e8) == '\0')) {
        cVar7 = *(char *)(lVar6 + 0x23eb);
      }
    }
    else {
      cVar7 = '\0';
    }
  }
  if ((((DAT_14c7616a4 != 0) && (DAT_14ca84e1d == '\x01')) && ((DAT_14c873768 & 1) != 0)) &&
     ((DAT_14ca84e19 == '\x01' &&
      (cVar7 == '\0' &&
       2 < (int)(&DAT_14ca814b8)
                [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0xa8) * 2) *
                 0xf])))) {
    lVar6 = *(longlong *)(*param_3 + 0x18);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    FUN_140069376(param_2);
    puVar1 = (ulonglong *)(param_2 + 0x70);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar12 + 0x39;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(puVar1,0x1d0);
      puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar12 + 0x39;
    }
    *puVar1 = (ulonglong)puVar8;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9e1d98) && (FUN_144b3d300(&DAT_14c9e1d98), DAT_14c9e1d98 == -1)) {
      FUN_14596f92a(&local_48);
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FEmptyShaderParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x7a6;
      local_78 = &local_48;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_48 != (undefined *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435cd65a);
      _Init_thread_footer(&DAT_14c9e1d98);
    }
    local_48 = &DAT_14caf3b50;
    local_40 = DAT_14c9e1d60;
    if (DAT_14c9e1d60 != 0) {
      LOCK();
      *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
      UNLOCK();
    }
    local_38 = &DAT_14c9e1d18;
    local_a8 = (wchar_t *)((ulonglong)local_a8 & 0xffffffffffffff00);
    FUN_140068f1a(puVar12,&local_49,&local_48,0x10);
    puVar12[0x37] = param_1;
    puVar12[0x38] = lVar6;
    *puVar12 = &PTR_FUN_14aa00300;
    iVar5 = *(int *)(param_2 + 0x170);
    *(uint *)(param_2 + 0x170) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x174) < iVar5 + 1U) {
      FUN_14470e57a(param_2 + 0x168,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar5 * 8) = puVar12;
    *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
    FUN_143204634(param_2,puVar12);
    if (lVar6 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar6 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar6 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar6 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar6;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar13) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435babf0 FUN_1435babf0 body=76 status=ok
// SIG undefined FUN_1435babf0(void)

longlong FUN_1435babf0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar5 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar5);
      lVar4 = (**(code **)*puVar3)(puVar3,param_2);
      if (lVar4 != 0) {
        return lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return 0;
}



// FUNCTION 1435bac3c FUN_1435bac3c body=80 status=ok
// SIG undefined FUN_1435bac3c(void)

void FUN_1435bac3c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2,param_3);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1435bac8c FUN_1435bac8c body=64 status=ok
// SIG undefined FUN_1435bac8c(void)

void FUN_1435bac8c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x20))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1435baccc FUN_1435baccc body=101 status=ok
// SIG undefined FUN_1435baccc(void)

void FUN_1435baccc(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3,param_4,param_5);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1435bad32 FUN_1435bad32 body=138 status=ok
// SIG undefined FUN_1435bad32(void)

void FUN_1435bad32(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2,&local_58,param_4);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435badbe FUN_1435badbe body=68 status=ok
// SIG undefined FUN_1435badbe(void)

undefined8 FUN_1435badbe(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x68))();
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 1435bae02 FUN_1435bae02 body=68 status=ok
// SIG undefined FUN_1435bae02(void)

undefined8 FUN_1435bae02(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x78))();
      if ((char)uVar3 != '\0') {
        return uVar3;
      }
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return uVar3;
}



// FUNCTION 1435bae46 FUN_1435bae46 body=156 status=ok
// SIG undefined FUN_1435bae46(void)

void FUN_1435bae46(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      local_68 = param_5;
      (**(code **)(*plVar3 + 0x88))(plVar3,param_2,&local_58,param_4);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435baee4 FUN_1435baee4 body=67 status=ok
// SIG undefined FUN_1435baee4(void)

void FUN_1435baee4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1435baf28 FUN_1435baf28 body=156 status=ok
// SIG undefined FUN_1435baf28(void)

void FUN_1435baf28(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      local_58 = *param_3;
      uStack_54 = param_3[1];
      uStack_50 = param_3[2];
      uStack_4c = param_3[3];
      local_68 = param_5;
      (**(code **)(*plVar3 + 0x90))(plVar3,param_2,&local_58,param_4);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435bafcc FUN_1435bafcc body=13 status=ok
// SIG undefined FUN_1435bafcc(void)

void FUN_1435bafcc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_147c0532e();
  return;
}



// FUNCTION 1435bafda FUN_1435bafda body=146 status=ok
// SIG undefined FUN_1435bafda(void)

void FUN_1435bafda(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  }
  lVar1 = *(longlong *)(lVar1 + 0x48);
  *(longlong *)(param_1 + 0x278) = lVar1;
  *(undefined8 *)(param_1 + 0x280) = **(undefined8 **)(lVar1 + 0x100);
  *(undefined8 *)(param_1 + 0x288) = **(undefined8 **)(lVar1 + 0x110);
  *(undefined8 *)(param_1 + 0x290) = **(undefined8 **)(lVar1 + 0x120);
  *(undefined8 *)(param_1 + 0x298) = **(undefined8 **)(lVar1 + 0x130);
  *(undefined8 *)(param_1 + 0x2a8) = **(undefined8 **)(lVar1 + 0x140);
  FUN_1435bb06c(param_1);
  FUN_147bf6a5c(param_1);
  return;
}



// FUNCTION 1435bb06c FUN_1435bb06c body=1475 status=ok
// SIG undefined FUN_1435bb06c(void)

void FUN_1435bb06c(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  byte local_78;
  void *local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar15 = param_1[1];
  lVar16 = **(longlong **)(lVar15 + 0x40);
  param_1[0x47] = *(longlong *)(*(longlong *)(lVar16 + 0x30) + 0x30);
  iVar9 = *(int *)((longlong)param_1 + 0x184);
  if (iVar9 == 0) {
    *(byte *)(param_1 + 0x2c) =
         *(byte *)(param_1 + 0x2c) & 0xbf | (*(byte *)(lVar15 + 0x37) & 2) << 5;
    *(byte *)((longlong)param_1 + 0x161) =
         *(byte *)((longlong)param_1 + 0x161) & 0xfd | *(byte *)(lVar15 + 0x37) >> 1 & 2;
    *(undefined1 *)((longlong)param_1 + 0x162) = *(undefined1 *)(lVar15 + 0x36);
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(lVar15 + 0x160);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(lVar15 + 0x164);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar15 + 0x168);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(lVar15 + 0x16c);
    *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)(lVar15 + 0x170);
    uVar10 = *(undefined4 *)(lVar15 + 0x17c);
    uVar5 = *(undefined4 *)(lVar15 + 0x180);
    uVar6 = *(undefined4 *)(lVar15 + 0x184);
    *(undefined4 *)(param_1 + 0x4b) = *(undefined4 *)(lVar15 + 0x178);
    *(undefined4 *)((longlong)param_1 + 0x25c) = uVar10;
    *(undefined4 *)(param_1 + 0x4c) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x264) = uVar6;
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(lVar15 + 0x188);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(lVar15 + 0x18c);
    pvVar11 = (void *)param_1[0x2f];
    local_88 = lVar16;
    if ((pvVar11 == (void *)0x0) || (iVar8 = (int)param_1[0x30], iVar8 < *(int *)(lVar15 + 0x174)))
    {
      pvVar11 = (void *)FUN_14001fdce(pvVar11,(longlong)*(int *)(lVar15 + 0x174),0);
      param_1[0x2f] = (longlong)pvVar11;
      iVar8 = *(int *)(param_1[1] + 0x174);
      *(int *)(param_1 + 0x30) = iVar8;
    }
    memset(pvVar11,0,(longlong)iVar8);
    lVar15 = param_1[1];
    iVar8 = *(int *)(lVar15 + 0x1a0);
    local_94 = iVar9;
    if ((longlong)iVar8 != 0) {
      lVar15 = *(longlong *)(lVar15 + 0x198);
      lVar16 = 0;
      do {
        plVar3 = *(longlong **)(lVar15 + lVar16);
        uVar12 = FUN_147bf7da6(param_1,plVar3);
        (**(code **)(*plVar3 + 0x2d0))(plVar3,param_1,uVar12);
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar8 * 8 != lVar16);
      lVar15 = param_1[1];
    }
    if ((longlong)*(int *)(lVar15 + 0x1b0) != 0) {
      lVar16 = *(longlong *)(lVar15 + 0x1a8);
      lVar15 = (longlong)*(int *)(lVar15 + 0x1b0) << 3;
      lVar14 = 0;
      local_90 = lVar15;
      do {
        plVar3 = *(longlong **)(lVar16 + lVar14);
        uVar12 = FUN_147c05556(param_1,plVar3);
        puVar13 = (undefined8 *)(**(code **)(*plVar3 + 0x370))(plVar3);
        if (puVar13 == (undefined8 *)0x0) {
          local_80 = 0;
          local_78 = local_78 & 0xf0 | 4;
          local_70 = (void *)0x0;
          uStack_68 = 0;
        }
        else {
          local_78 = *(byte *)(puVar13 + 1);
          local_80 = *puVar13;
          local_70 = (void *)0x0;
          uVar2 = *(uint *)(puVar13 + 3);
          pvVar11 = (void *)puVar13[2];
          uStack_68 = CONCAT44(uStack_68._4_4_,uVar2);
          if ((longlong)(int)uVar2 == 0) {
            uStack_68 = (ulonglong)uVar2;
            lVar15 = local_90;
          }
          else {
            FUN_144a06ca8(&local_70,uVar2,0);
            memcpy(local_70,pvVar11,(longlong)(int)uVar2 << 2);
            lVar15 = local_90;
          }
        }
        (**(code **)(*plVar3 + 0x368))(plVar3,param_1,uVar12,&local_80);
        if (local_70 != (void *)0x0) {
          FUN_1400020a8();
        }
        lVar14 = lVar14 + 8;
      } while (lVar15 != lVar14);
    }
    *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_1 + 0x184);
    iVar9 = (**(code **)(*param_1 + 0x78))(param_1);
    *(uint *)((longlong)param_1 + 0x184) =
         iVar9 + *(int *)((longlong)param_1 + 0x184) + 0xfU & 0xfffffff0;
    uVar10 = (**(code **)(*param_1 + 0x88))(param_1);
    *(undefined4 *)(param_1 + 0x31) = uVar10;
    lVar16 = local_88;
    iVar9 = local_94;
  }
  (**(code **)(*param_1 + 0x160))(param_1);
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  FUN_147c0561a(param_1);
  lVar14 = param_1[2];
  lVar4 = *(longlong *)(lVar14 + 0x268);
  lVar15 = *(longlong *)(lVar14 + 0x270);
  param_1[9] = *(longlong *)(lVar14 + 0x260);
  param_1[10] = lVar4;
  param_1[0xb] = lVar15;
  param_1[0x35] = param_1[9];
  param_1[0x36] = param_1[10];
  param_1[0x37] = param_1[0xb];
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  if (param_1[0x2d] == 0) {
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
    *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  }
  param_1[0x3d] = DAT_14c8464f0;
  lVar15 = DAT_14c8464e8;
  param_1[0x3b] = DAT_14c8464e0;
  param_1[0x3c] = lVar15;
  lVar15 = DAT_14c8464e8;
  param_1[0x38] = DAT_14c8464e0;
  param_1[0x39] = lVar15;
  param_1[0x3a] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  iVar8 = *(int *)(*(longlong *)(lVar16 + 0x30) + 0xd4);
  if (iVar8 == 0) {
    fVar17 = 1.0;
  }
  else {
    fVar17 = 0.99 / (float)(iVar8 + 1);
  }
  *(float *)(*(longlong *)(lVar16 + 0x30) + 0xd0) = fVar17;
  if (iVar9 == 0) {
    lVar15 = *(longlong *)(param_1[2] + 0xb0);
    if (lVar15 == 0) {
      lVar15 = FUN_1448abda6();
    }
    bVar1 = *(byte *)(lVar15 + 0x152);
    if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
       (0.0 < *(float *)(param_1[1] + 0x58))) {
      (**(code **)(*param_1 + 0x18))(param_1,0,1);
    }
    *(undefined4 *)(param_1 + 0x41) = 0;
    bVar7 = *(byte *)(*(longlong *)(lVar16 + 0x30) + 0x71) & 2;
    bVar1 = *(byte *)(param_1 + 0x2c);
    *(byte *)(param_1 + 0x2c) = bVar1 & 0xfd | bVar7;
    *(byte *)(param_1 + 0x2c) =
         bVar1 & 0xf9 | bVar7 | *(byte *)(*(longlong *)(lVar16 + 0x30) + 0x71) & 4;
    *(uint *)((longlong)param_1 + 0x164) = (uint)*(byte *)(*(longlong *)(lVar16 + 0x30) + 0x72);
    iVar9 = (int)param_1[0x40];
    lVar15 = param_1[1];
    iVar8 = *(int *)(lVar15 + 0x48);
    if (iVar9 < iVar8) {
      *(int *)(param_1 + 0x40) = iVar8;
      if ((uint)(*(int *)((longlong)param_1 + 0x204) - iVar9) < (uint)(iVar8 - iVar9)) {
        FUN_147c0e912(param_1 + 0x3f);
      }
      memset((void *)((longlong)iVar9 * 0x10 + param_1[0x3f]),0,(longlong)(iVar8 - iVar9) << 4);
      lVar15 = param_1[1];
      iVar8 = *(int *)(lVar15 + 0x48);
    }
    if (0 < iVar8) {
      lVar14 = 0;
      lVar16 = 0;
      do {
        lVar4 = param_1[0x3f];
        iVar9 = *(int *)(lVar4 + 8 + lVar14);
        iVar8 = *(int *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(lVar15 + 0x40) + lVar16 * 8) + 0x50) + 0xa0);
        if (iVar9 < iVar8) {
          *(int *)(lVar4 + 8 + lVar14) = iVar8;
          if ((uint)(*(int *)(lVar4 + 0xc + lVar14) - iVar9) < (uint)(iVar8 - iVar9)) {
            FUN_1401c3474((longlong *)(lVar4 + lVar14));
          }
          memset((void *)((longlong)iVar9 + *(longlong *)(lVar4 + lVar14)),0,
                 (longlong)(iVar8 - iVar9));
          lVar15 = param_1[1];
        }
        lVar16 = lVar16 + 1;
        lVar14 = lVar14 + 0x10;
      } while (lVar16 < *(int *)(lVar15 + 0x48));
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  *(undefined4 *)((longlong)param_1 + 0x20c) = 1;
  *(byte *)((longlong)param_1 + 0x161) = *(byte *)((longlong)param_1 + 0x161) & 0xf7;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435bb630 FUN_1435bb630 body=1016 status=ok
// SIG undefined FUN_1435bb630(void)

void FUN_1435bb630(longlong *param_1,float param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 in_RDX;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  int local_88;
  float local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_84 = param_2;
  if (param_1[2] == 0) goto LAB_1435bb7ba;
  lVar2 = param_1[3];
  (**(code **)(*param_1 + 0x28))(param_1,in_RDX,lVar2);
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    FUN_147bf6c08(param_1);
  }
  else {
    (**(code **)(*param_1 + 0xe0))(param_1);
    if (((*(byte *)(param_1 + 0x2c) & 0x30) != 0 || param_3 != '\0') ||
       (*(float *)(param_1 + 0x34) < 0.0)) {
      if ((*(byte *)((longlong)param_1 + 0x161) & 4) != 0) {
        FUN_147bf6c08(param_1);
      }
    }
    else {
      iVar10 = *(int *)(*(longlong *)(lVar2 + 0x30) + 0x114);
      if (((iVar10 == 0) || ((int)param_1[0x41] < iVar10)) ||
         (*(float *)((longlong)param_1 + 0x19c) <= (float)iVar10 * *(float *)(param_1 + 0x42) &&
          (float)iVar10 * *(float *)(param_1 + 0x42) != *(float *)((longlong)param_1 + 0x19c))) {
        fVar11 = (float)FUN_147a77524(*(longlong *)(lVar2 + 0x50) + 0x38,*(float *)(param_1 + 0x34),
                                      param_1[2],0);
        local_88 = 0;
        fVar12 = (float)(**(code **)(*param_1 + 0x98))(param_1,&local_84);
        fVar6 = local_84;
        fVar11 = fVar11 + fVar12;
        fVar13 = (float)(-(uint)(0.0 < local_84) & (uint)(1.0 / local_84));
        iVar10 = *(int *)((longlong)param_1 + 0x18c);
        iVar1 = (int)param_1[0x5b];
        if (((iVar1 - iVar10 != 0 && iVar10 <= iVar1) &&
            (fVar11 = (float)(-(uint)(fVar11 <= 0.0) & (uint)fVar13 |
                             ~-(uint)(fVar11 <= 0.0) & (uint)fVar11),
            (*(byte *)(param_1[0x4f] + 0x4c) & 1) != 0)) && (local_88 = iVar1, 0.0001 < local_84)) {
          fVar12 = fVar13 * (float)iVar1;
          fVar11 = fVar11 + fVar12;
        }
        param_2 = local_84;
        if (0.0 < fVar11) {
          fVar13 = *(float *)(param_1 + 0x33);
          fVar14 = local_84 * fVar11 + fVar13;
          iVar8 = (int)ROUND(fVar14 + fVar14 + -0.5) >> 1;
          iVar9 = iVar8;
          if (iVar8 <= local_88) {
            iVar9 = local_88;
          }
          fVar14 = fVar14 - (float)iVar8;
          if ((0.0001 < fVar12) && (fVar14 = fVar14 - fVar12 / (float)local_88, fVar14 <= 0.0)) {
            fVar14 = 0.0;
          }
          iVar8 = iVar9 + (uint)(iVar9 == 0);
          if (iVar10 != 0) {
            iVar8 = iVar9;
          }
          if (iVar1 < iVar8 + iVar10) {
            iVar8 = iVar1 - iVar10;
          }
          iVar10 = iVar10 + iVar8;
          if (iVar10 < *(int *)((longlong)param_1 + 0x194)) {
LAB_1435bb9d0:
            fVar11 = 1.0 / fVar11;
            local_a8 = param_1 + 9;
            local_a0 = &DAT_14c8464e0;
            local_98 = 0;
            FUN_147bf79e6(param_1,iVar8,(fVar13 * fVar11 + fVar6) - fVar11,fVar11);
            fVar13 = fVar14;
            if (0 < *(int *)((longlong)param_1 + 700)) {
              *(undefined4 *)((longlong)param_1 + 700) = 0;
            }
          }
          else {
            fVar12 = (float)iVar10;
            if (fVar12 < 0.0) {
              fVar12 = sqrtf(fVar12);
            }
            else {
              fVar12 = SQRT(fVar12);
            }
            cVar7 = (**(code **)(*param_1 + 0x18))(param_1,iVar10 + 1 + (int)fVar12,fVar6 < 0.25);
            if (cVar7 != '\0') goto LAB_1435bb9d0;
          }
          *(float *)(param_1 + 0x33) = fVar13;
          param_2 = local_84;
        }
      }
    }
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    param_1[0x47] = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x30);
    (**(code **)(*param_1 + 0x38))(param_1,local_84,lVar2);
    (**(code **)(*param_1 + 0x40))(param_1,local_84,lVar2);
    (**(code **)(*param_1 + 0x68))(param_1,local_84);
    if (param_3 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x2b4) = 0;
    }
    *(undefined4 *)((longlong)param_1 + 0x20c) = 1;
    *(int *)(param_1 + 0x57) = (int)param_1[0x57] + 1;
  }
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x45) + *(float *)(param_1 + 0x34);
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x48) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x244) = uVar3;
  *(undefined4 *)(param_1 + 0x49) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24c) = uVar5;
  param_1[0x4a] = DAT_14c8464f0;
LAB_1435bb7ba:
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435bba2a FUN_1435bba2a body=2642 status=ok
// SIG undefined FUN_1435bba2a(void)

void FUN_1435bba2a(longlong param_1,float param_2)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  byte bVar16;
  longlong lVar17;
  longlong lVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  undefined1 auStack_1f8 [32];
  double **local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  byte local_181;
  undefined4 local_180;
  float local_17c;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined4 local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar18 = *(longlong *)(param_1 + 0x10);
  local_17c = param_2;
  if (lVar18 != 0) {
    if ((((*(byte *)(lVar18 + 0x692) & 4) == 0) && (*(longlong *)(lVar18 + 0x668) != 0)) &&
       ((*(byte *)(*(longlong *)(lVar18 + 0x668) + 0xec) & 2) == 0)) {
      *(double *)(param_1 + 0x1e8) = DAT_14c8464f0;
      dVar9 = DAT_14c8464e8;
      *(double *)(param_1 + 0x1d8) = DAT_14c8464e0;
      *(double *)(param_1 + 0x1e0) = dVar9;
      dVar9 = DAT_14c8464e8;
      *(double *)(param_1 + 0x1c0) = DAT_14c8464e0;
      *(double *)(param_1 + 0x1c8) = dVar9;
      *(double *)(param_1 + 0x1d0) = DAT_14c8464f0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      uVar15 = *(undefined8 *)(lVar18 + 0x268);
      uVar6 = *(undefined8 *)(lVar18 + 0x270);
      *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)(lVar18 + 0x260);
      *(undefined8 *)(param_1 + 0x1e0) = uVar15;
      *(undefined8 *)(param_1 + 0x1e8) = uVar6;
      *(undefined4 *)(param_1 + 0x1c0) = *(undefined4 *)(param_1 + 0x1d8);
      *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x1dc);
      *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(param_1 + 0x1e0);
      *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x1e4);
      *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_1 + 0x1e8);
      *(undefined1 *)(param_1 + 0x1f0) = 1;
      local_180 = (undefined4)CONCAT71((int7)((ulonglong)*(undefined8 *)(param_1 + 0x1e8) >> 8),1);
    }
    else {
      local_180 = 0;
    }
    dVar9 = 0.0;
    dVar10 = 0.0;
    if (*(longlong *)(param_1 + 0x290) != 0) {
      FUN_147a777c8(*(longlong *)(param_1 + 0x290) + 0x40,&local_100,&local_108);
      dVar10 = (double)local_100._0_4_;
      dVar9 = (double)(float)local_108;
      lVar18 = *(longlong *)(param_1 + 0x10);
    }
    if (*(int *)(param_1 + 0x18c) < 1) {
      dVar9 = 1.0;
    }
    else {
      local_150 = *(undefined8 *)(lVar18 + 0x290);
      uVar20 = (undefined4)local_150;
      uVar22 = (undefined4)((ulonglong)local_150 >> 0x20);
      local_181 = *(byte *)(*(longlong *)(param_1 + 8) + 0x37);
      local_158 = (double)local_17c;
      local_160 = *(undefined8 *)(lVar18 + 0x280);
      uVar28 = (undefined4)local_160;
      uVar29 = (undefined4)((ulonglong)local_160 >> 0x20);
      local_168 = *(undefined8 *)(lVar18 + 0x288);
      uVar30 = (undefined4)local_168;
      uVar31 = (undefined4)((ulonglong)local_168 >> 0x20);
      local_170 = (undefined8 *)(param_1 + 0x1c0);
      local_178 = (undefined8 *)(param_1 + 0x1d8);
      fVar32 = 1.0;
      lVar18 = 0;
      do {
        bVar16 = local_181 & 1;
        lVar8 = *(longlong *)(param_1 + 0x168);
        lVar17 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar18 * 2) *
                 (longlong)*(int *)(param_1 + 0x188);
        pdVar1 = (double *)(lVar8 + lVar17);
        local_f4 = *(undefined4 *)(param_1 + 0x24);
        local_100 = (double *)0x0;
        local_108 = 0;
        local_110 = 0;
        local_118 = 0;
        local_120 = 0;
        local_128 = 0;
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_148 = 0;
        uVar7 = *(uint *)(lVar8 + 0x6c + lVar17);
        *(uint *)(lVar8 + 0x6c + lVar17) = uVar7 & 0xfdffffff;
        local_190 = &local_148;
        local_198 = &local_140;
        local_1a0 = &local_138;
        local_1a8 = &local_130;
        local_1b0 = &local_128;
        local_1b8 = &local_120;
        local_1c0 = &local_118;
        local_1c8 = &local_110;
        local_1d0 = &local_108;
        local_1d8 = &local_100;
        (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3e0))
                  (*(longlong **)(param_1 + 0x278),param_1,pdVar1,&local_f4);
        *(undefined8 *)(lVar8 + 0x10 + lVar17) = *(undefined8 *)(lVar8 + 0x28 + lVar17);
        puVar2 = (undefined8 *)(lVar8 + 0x18 + lVar17);
        uVar6 = puVar2[1];
        *(undefined8 *)(lVar8 + lVar17) = *puVar2;
        ((undefined8 *)(lVar8 + lVar17))[1] = uVar6;
        bVar16 = (byte)(uVar7 >> 0x19) & bVar16 == 0;
        dVar23 = DAT_14c8464e8;
        dVar25 = DAT_14c8464e0;
        dVar24 = DAT_14c8464f0;
        if (bVar16 != 1) {
          dVar23 = (double)*(float *)((longlong)pdVar1 + 0x44) * local_158;
          dVar25 = (double)*(float *)(pdVar1 + 8) * local_158;
          dVar24 = (double)*(float *)(pdVar1 + 9) * local_158;
        }
        dVar25 = dVar25 + pdVar1[3];
        pdVar1[3] = dVar25;
        pdVar1[4] = dVar23 + pdVar1[4];
        pdVar1[5] = dVar24 + pdVar1[5];
        fVar19 = 0.0;
        if (bVar16 == 0) {
          fVar19 = *(float *)((longlong)pdVar1 + 0x5c) * local_17c;
        }
        fVar19 = fVar19 + *(float *)((longlong)pdVar1 + 0x3c);
        *(float *)((longlong)pdVar1 + 0x3c) = fVar19;
        *pdVar1 = *(double *)(param_1 + 0x240) + *pdVar1;
        pdVar1[1] = *(double *)(param_1 + 0x248) + pdVar1[1];
        pdVar1[2] = *(double *)(param_1 + 0x250) + pdVar1[2];
        fVar3 = *(float *)(pdVar1 + 0xd);
        fVar4 = *(float *)((longlong)pdVar1 + 100);
        fVar5 = *(float *)(pdVar1 + 0xc);
        if ((char)local_180 != '\0') {
          if (*(char *)(param_1 + 0x1f0) == '\0') {
            lVar8 = lVar8 + lVar17;
            local_178[2] = *(undefined8 *)(lVar8 + 0x28);
            uVar6 = *(undefined8 *)(lVar8 + 0x20);
            *local_178 = *(undefined8 *)(lVar8 + 0x18);
            local_178[1] = uVar6;
            uVar6 = *(undefined8 *)(lVar8 + 0x18);
            uVar15 = *(undefined8 *)(lVar8 + 0x20);
            local_170[2] = *(undefined8 *)(lVar8 + 0x28);
            *local_170 = uVar6;
            local_170[1] = uVar15;
            *(undefined1 *)(param_1 + 0x1f0) = 1;
            dVar24 = *(double *)(param_1 + 0x1c0);
            uVar20 = (undefined4)*(undefined8 *)(param_1 + 0x1c8);
            uVar22 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20);
            dVar23 = *(double *)(param_1 + 0x1d0);
            dVar25 = *(double *)(param_1 + 0x1d8);
            dVar26 = *(double *)(param_1 + 0x1e0);
            dVar27 = *(double *)(param_1 + 0x1e8);
          }
          else {
            dVar23 = *(double *)(param_1 + 0x1c8);
            uVar20 = SUB84(dVar23,0);
            uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
            dVar24 = *(double *)(param_1 + 0x1c0);
            if (dVar25 <= *(double *)(param_1 + 0x1c0)) {
              dVar24 = dVar25;
            }
            *(double *)(param_1 + 0x1c0) = dVar24;
            dVar25 = pdVar1[4];
            if (dVar25 <= dVar23) {
              uVar20 = SUB84(dVar25,0);
              uVar22 = (undefined4)((ulonglong)dVar25 >> 0x20);
            }
            *(ulonglong *)(param_1 + 0x1c8) = CONCAT44(uVar22,uVar20);
            dVar23 = *(double *)(param_1 + 0x1d0);
            if (pdVar1[5] <= *(double *)(param_1 + 0x1d0)) {
              dVar23 = pdVar1[5];
            }
            *(double *)(param_1 + 0x1d0) = dVar23;
            dVar25 = *(double *)(param_1 + 0x1d8);
            if (*(double *)(param_1 + 0x1d8) <= pdVar1[3]) {
              dVar25 = pdVar1[3];
            }
            *(double *)(param_1 + 0x1d8) = dVar25;
            dVar26 = *(double *)(param_1 + 0x1e0);
            if (*(double *)(param_1 + 0x1e0) <= pdVar1[4]) {
              dVar26 = pdVar1[4];
            }
            *(double *)(param_1 + 0x1e0) = dVar26;
            dVar27 = *(double *)(param_1 + 0x1e8);
            if (*(double *)(param_1 + 0x1e8) <= pdVar1[5]) {
              dVar27 = pdVar1[5];
            }
            *(double *)(param_1 + 0x1e8) = dVar27;
          }
          dVar12 = pdVar1[3] + dVar10;
          dVar13 = pdVar1[4] + dVar10;
          dVar11 = pdVar1[5] + dVar10;
          if (dVar12 <= dVar24) {
            dVar24 = dVar12;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          dVar14 = (double)CONCAT44(uVar22,uVar20);
          if (dVar13 <= (double)CONCAT44(uVar22,uVar20)) {
            dVar14 = dVar13;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar11 <= dVar23) {
            dVar23 = dVar11;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar12) {
            dVar25 = dVar12;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar13) {
            dVar26 = dVar13;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar11) {
            dVar27 = dVar11;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          dVar11 = pdVar1[3] + dVar9;
          dVar12 = pdVar1[4] + dVar9;
          dVar13 = pdVar1[5] + dVar9;
          if (dVar11 <= dVar24) {
            dVar24 = dVar11;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          if (dVar12 <= dVar14) {
            dVar14 = dVar12;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar13 <= dVar23) {
            dVar23 = dVar13;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar11) {
            dVar25 = dVar11;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar12) {
            dVar26 = dVar12;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar13) {
            dVar27 = dVar13;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          dVar11 = local_100[2];
          dVar12 = *local_100;
          dVar13 = local_100[1];
          if (dVar12 <= dVar24) {
            dVar24 = dVar12;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          if (dVar13 <= dVar14) {
            dVar14 = dVar13;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar11 <= dVar23) {
            dVar23 = dVar11;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar12) {
            dVar25 = dVar12;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar13) {
            dVar26 = dVar13;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar11) {
            dVar27 = dVar11;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          dVar11 = *local_100 + dVar10;
          dVar12 = local_100[1] + dVar10;
          dVar13 = local_100[2] + dVar10;
          if (dVar11 <= dVar24) {
            dVar24 = dVar11;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          if (dVar12 <= dVar14) {
            dVar14 = dVar12;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar13 <= dVar23) {
            dVar23 = dVar13;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar11) {
            dVar25 = dVar11;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar12) {
            dVar26 = dVar12;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar13) {
            dVar27 = dVar13;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          dVar11 = *local_100 + dVar9;
          dVar12 = local_100[1] + dVar9;
          dVar13 = local_100[2] + dVar9;
          if (dVar11 <= dVar24) {
            dVar24 = dVar11;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          if (dVar12 <= dVar14) {
            dVar14 = dVar12;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar13 <= dVar23) {
            dVar23 = dVar13;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar11) {
            dVar25 = dVar11;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar12) {
            dVar26 = dVar12;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar13) {
            dVar27 = dVar13;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          dVar11 = local_100[9];
          dVar12 = local_100[7];
          dVar13 = local_100[8];
          if (dVar12 <= dVar24) {
            dVar24 = dVar12;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          if (dVar13 <= dVar14) {
            dVar14 = dVar13;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar11 <= dVar23) {
            dVar23 = dVar11;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar12) {
            dVar25 = dVar12;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar13) {
            dVar26 = dVar13;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar11) {
            dVar27 = dVar11;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          dVar11 = local_100[7] + dVar10;
          dVar12 = local_100[8] + dVar10;
          dVar13 = local_100[9] + dVar10;
          if (dVar11 <= dVar24) {
            dVar24 = dVar11;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          if (dVar12 <= dVar14) {
            dVar14 = dVar12;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar13 <= dVar23) {
            dVar23 = dVar13;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar11) {
            dVar25 = dVar11;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar12) {
            dVar26 = dVar12;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar13) {
            dVar27 = dVar13;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          dVar11 = local_100[7] + dVar9;
          dVar12 = local_100[8] + dVar9;
          dVar13 = local_100[9] + dVar9;
          if (dVar11 <= dVar24) {
            dVar24 = dVar11;
          }
          *(double *)(param_1 + 0x1c0) = dVar24;
          if (dVar12 <= dVar14) {
            dVar14 = dVar12;
          }
          *(double *)(param_1 + 0x1c8) = dVar14;
          if (dVar13 <= dVar23) {
            dVar23 = dVar13;
          }
          *(double *)(param_1 + 0x1d0) = dVar23;
          if (dVar25 <= dVar11) {
            dVar25 = dVar11;
          }
          *(double *)(param_1 + 0x1d8) = dVar25;
          if (dVar26 <= dVar12) {
            dVar26 = dVar12;
          }
          *(double *)(param_1 + 0x1e0) = dVar26;
          if (dVar27 <= dVar13) {
            dVar27 = dVar13;
          }
          *(double *)(param_1 + 0x1e8) = dVar27;
          fVar19 = *(float *)((longlong)pdVar1 + 0x3c);
          uVar20 = (undefined4)local_150;
          uVar22 = (undefined4)((ulonglong)local_150 >> 0x20);
          uVar28 = (undefined4)local_160;
          uVar29 = (undefined4)((ulonglong)local_160 >> 0x20);
          uVar30 = (undefined4)local_168;
          uVar31 = (undefined4)((ulonglong)local_168 >> 0x20);
        }
        uVar21 = FUN_1447c7e44(fVar19,0x40c90fdb);
        *(undefined4 *)((longlong)pdVar1 + 0x3c) = uVar21;
        dVar23 = ABS((double)fVar3 * (double)CONCAT44(uVar22,uVar20));
        dVar25 = ABS((double)fVar4 * (double)CONCAT44(uVar31,uVar30));
        dVar24 = ABS((double)fVar5 * (double)CONCAT44(uVar29,uVar28));
        if (dVar24 <= dVar25) {
          dVar24 = dVar25;
        }
        if (dVar24 <= dVar23) {
          dVar24 = dVar23;
        }
        if ((double)fVar32 <= dVar24) {
          fVar32 = (float)dVar24;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)(param_1 + 0x18c));
      dVar9 = (double)fVar32;
    }
    if ((char)local_180 != '\0') {
      *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) - dVar9;
      *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) - dVar9;
      *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) - dVar9;
      *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) + dVar9;
      *(double *)(param_1 + 0x1e0) = *(double *)(param_1 + 0x1e0) + dVar9;
      *(double *)(param_1 + 0x1e8) = *(double *)(param_1 + 0x1e8) + dVar9;
      *(undefined1 *)(param_1 + 0x1f0) = 1;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435bc52a FUN_1435bc52a body=274 status=ok
// SIG undefined FUN_1435bc52a(void)

void FUN_1435bc52a(longlong param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  ulonglong uVar10;
  
  iVar9 = *(int *)(param_1 + 0x18c);
  if (0 < iVar9) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    if ((*(longlong *)(lVar2 + 0x58) == 0) ||
       (pbVar5 = (byte *)FUN_147bf7da6(param_1), pbVar5 == (byte *)0x0)) {
      pbVar8 = (byte *)0x0;
    }
    else {
      pbVar8 = (byte *)0x0;
      if ((*pbVar5 & 2) != 0) {
        pbVar8 = pbVar5;
      }
    }
    iVar7 = iVar9 + 1;
    uVar10 = (ulonglong)(iVar9 - 1);
    do {
      lVar4 = *(longlong *)(param_1 + 0x170);
      uVar1 = *(ushort *)(lVar4 + uVar10 * 2);
      lVar6 = (longlong)*(int *)(param_1 + 0x188) * (ulonglong)uVar1;
      if (1.0 < *(float *)(*(longlong *)(param_1 + 0x168) + 0x90 + lVar6)) {
        if (pbVar8 != (byte *)0x0) {
          plVar3 = *(longlong **)(lVar2 + 0x58);
          (**(code **)(*plVar3 + 0x390))
                    (plVar3,param_1,pbVar8,*(longlong *)(param_1 + 0x168) + lVar6);
          lVar4 = *(longlong *)(param_1 + 0x170);
          iVar9 = *(int *)(param_1 + 0x18c);
        }
        *(undefined2 *)(lVar4 + uVar10 * 2) = *(undefined2 *)(lVar4 + -2 + (longlong)iVar9 * 2);
        *(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + (longlong)*(int *)(param_1 + 0x18c) * 2) =
             uVar1;
        iVar9 = *(int *)(param_1 + 0x18c) + -1;
        *(int *)(param_1 + 0x18c) = iVar9;
      }
      iVar7 = iVar7 + -1;
      uVar10 = uVar10 - 1;
    } while (1 < iVar7);
  }
  return;
}



// FUNCTION 1435bc63c FUN_1435bc63c body=246 status=ok
// SIG undefined FUN_1435bc63c(void)

undefined8 * FUN_1435bc63c(longlong *param_1,uint param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x118))(param_1,param_1[3]);
  if ((((cVar1 != '\0') && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) &&
      (*(uint *)((longlong)param_1 + 0x18c) < 0x801)) && (*(uint *)(param_1 + 0x31) < 0x5241)) {
    puVar2 = (undefined8 *)FUN_147bf8190(0x198);
    *(byte *)((longlong)puVar2 + 0xc) = *(byte *)((longlong)puVar2 + 0xc) & 0xfe;
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) & 0xfe;
    puVar2[3] = 0;
    *puVar2 = &PTR_FUN_14aa00640;
    FUN_147bf835c(puVar2 + 5);
    *(undefined4 *)(puVar2 + 0x32) = 0xffffffff;
    cVar1 = (**(code **)(*param_1 + 0x218))(param_1,puVar2 + 5);
    if (cVar1 != '\0') {
      *(uint *)((longlong)puVar2 + 0xc) =
           *(uint *)((longlong)puVar2 + 0xc) & 0xfffffffe | param_2 & 0xff;
      uVar3 = (**(code **)(*(longlong *)puVar2[0x11] + 0x2f0))();
      puVar2[3] = uVar3;
      *(byte *)(puVar2 + 4) = *(byte *)(puVar2 + 4) & 0xfe;
      puVar2[0x11] = 0;
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435bc732 FUN_1435bc732 body=1709 status=ok
// SIG undefined FUN_1435bc732(void)

undefined8 FUN_1435bc732(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong *plVar10;
  void *_Dst;
  undefined4 uVar11;
  undefined1 auStack_128 [32];
  double *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_6c;
  double local_68;
  double local_60;
  double local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < *(int *)(param_1 + 0x18c)) {
    cVar3 = FUN_1435bcde2();
    if (((cVar3 != '\0') && (*(longlong *)(param_1 + 0x18) != 0)) &&
       ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x2c) & 1) != 0)) {
      *(undefined4 *)(param_2 + 8) = 3;
      plVar10 = *(longlong **)(param_1 + 0x238);
      if (plVar10 == (longlong *)0x0) {
LAB_1435bc7d6:
        FUN_14003fbd6();
        plVar10 = DAT_14caea080;
      }
      else {
        cVar3 = (**(code **)(*plVar10 + 0x340))(plVar10,2);
        if (cVar3 == '\0') goto LAB_1435bc7d6;
      }
      *(longlong **)(param_1 + 0x238) = plVar10;
      *(longlong **)(param_2 + 0x60) = plVar10;
      *(undefined2 *)(param_2 + 0xbc) = 0;
      FUN_147bf7f00(param_1);
      *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x50);
      iVar9 = *(int *)(param_1 + 0x3b0);
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      plVar10 = (longlong *)(param_2 + 0xe8);
      *(undefined4 *)(param_2 + 0xf0) = 0;
      iVar5 = 0;
      if (*(int *)(param_2 + 0xf4) != iVar9) {
        FUN_14481578e(plVar10);
        iVar5 = *(int *)(param_2 + 0xf0);
        iVar9 = *(int *)(param_2 + 0xf4);
      }
      uVar1 = *(uint *)(param_1 + 0x3b0);
      *(uint *)(param_2 + 0xf0) = uVar1 + iVar5;
      if ((uint)(iVar9 - iVar5) < uVar1) {
        FUN_1446f48e2(plVar10);
      }
      memset((void *)((longlong)iVar5 * 4 + *plVar10),0,(longlong)(int)uVar1 << 2);
      if (0 < *(int *)(param_1 + 0x3b0)) {
        lVar6 = 0;
        do {
          *(undefined4 *)(*plVar10 + lVar6 * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x3a8) + lVar6 * 4);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_1 + 0x3b0));
      }
      local_d8 = (undefined8 *)&local_4c;
      local_4c = 0;
      local_c8 = (undefined8 *)(param_2 + 0x118);
      local_d0 = (undefined8 *)(param_2 + 0x114);
      local_e0 = (undefined8 *)(param_2 + 0x110);
      local_e8 = (undefined8 *)(param_2 + 0x10c);
      local_f0 = (undefined8 *)(param_2 + 0x108);
      local_f8 = (undefined8 *)(param_2 + 0x104);
      local_100 = (undefined8 *)(param_2 + 0x100);
      local_108 = (double *)(param_2 + 0xfc);
      (**(code **)(**(longlong **)(param_1 + 0x278) + 1000))
                (*(longlong **)(param_1 + 0x278),param_1,0,param_1 + 0x24);
      *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_1 + 0x3a0);
      *(bool *)(param_2 + 0x11f) = *(longlong *)(param_1 + 0x280) != 0;
      *(bool *)(param_2 + 0x120) = *(longlong *)(param_1 + 0x288) != 0;
      if (*(longlong *)(param_1 + 0x290) == 0) {
        *(undefined2 *)(param_2 + 0x11c) = 0;
        bVar4 = 0;
      }
      else {
        *(byte *)(param_2 + 0x11c) = *(byte *)(*(longlong *)(param_1 + 0x290) + 0x30) & 1;
        *(undefined1 *)(param_2 + 0x11d) = 0;
        bVar4 = *(byte *)(*(longlong *)(param_1 + 0x290) + 0x138) & 1;
      }
      *(byte *)(param_2 + 0x11e) = bVar4;
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x278) + 0x3c);
      iVar5 = 1;
      if (1 < iVar9) {
        iVar5 = iVar9;
      }
      *(int *)(param_2 + 0x124) = iVar5;
      *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x34);
      *(undefined4 *)(param_2 + 0x154) = *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x38);
      *(undefined1 *)(param_2 + 0x158) = *(undefined1 *)(*(longlong *)(param_1 + 0x278) + 0x90);
      *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 0x48);
      *(undefined8 *)(param_2 + 0x128) = 1;
      *(undefined1 **)(param_2 + 0x130) = &DAT_3f8000003f800000;
      lVar6 = *(longlong *)(param_1 + 0x290);
      if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x30) & 1) != 0)) {
        iVar9 = *(int *)(lVar6 + 0x34);
        if (iVar9 < 2) {
          iVar9 = 1;
        }
        *(int *)(param_2 + 0x128) = iVar9;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x290) + 0x180);
        iVar5 = 1;
        if (1 < iVar9) {
          iVar5 = iVar9;
        }
        *(int *)(param_2 + 300) = iVar5;
        uVar11 = FUN_147a77524(*(longlong *)(param_1 + 0x290) + 0x150,
                               *(undefined4 *)(param_1 + 0x1a0),0,0);
        *(undefined4 *)(param_2 + 0x134) = uVar11;
        uVar11 = FUN_147a77524(*(longlong *)(param_1 + 0x290) + 0xa0,
                               *(undefined4 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x10),0);
        *(undefined4 *)(param_2 + 0x130) = uVar11;
        local_100 = (undefined8 *)0x0;
        local_108 = (double *)((ulonglong)local_108 & 0xffffffff00000000);
        FUN_147a776dc(*(longlong *)(param_1 + 0x290) + 0xd8,&local_68,
                      *(undefined4 *)(param_1 + 0x1a0),0);
        *(float *)(param_2 + 0x138) = (float)local_68;
        *(float *)(param_2 + 0x13c) = (float)local_60;
        *(float *)(param_2 + 0x140) = (float)local_58;
        *(undefined4 *)(param_2 + 0x144) = *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x144);
        *(undefined4 *)(param_2 + 0x148) = *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x13c);
        *(byte *)(param_2 + 0x121) = *(byte *)(*(longlong *)(param_1 + 0x290) + 0x184) & 1;
        *(undefined4 *)(param_2 + 0x14c) = *(undefined4 *)(*(longlong *)(param_1 + 0x290) + 0x148);
      }
      *(undefined4 *)(param_2 + 0xdc) = 0;
      if (*(int *)(param_1 + 0x18c) < 1) {
LAB_1435bcbdd:
        uVar11 = 2;
      }
      else {
        lVar6 = 0;
        do {
          local_6c = *(undefined4 *)(param_1 + 0x24);
          local_68 = 0.0;
          local_78 = 0;
          local_80 = 0;
          local_88 = 0;
          local_90 = 0;
          local_98 = 0;
          local_a0 = 0;
          local_a8 = 0;
          local_b0 = 0;
          local_b8 = 0;
          local_c0 = &local_b8;
          local_c8 = &local_b0;
          local_d0 = &local_a8;
          local_d8 = &local_a0;
          local_e0 = &local_98;
          local_e8 = &local_90;
          local_f0 = &local_88;
          local_108 = &local_68;
          local_100 = &local_78;
          local_f8 = &local_80;
          (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3e0))
                    (*(longlong **)(param_1 + 0x278),param_1,
                     (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar6 * 2) *
                     (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168),&local_6c)
          ;
          iVar9 = *(int *)((longlong)local_68 + 0xa0);
          if (0 < iVar9) {
            iVar5 = *(int *)(param_2 + 0xdc);
            if (iVar5 == 0) {
              *(undefined4 *)(param_2 + 0xdc) = 2;
              iVar9 = *(int *)((longlong)local_68 + 0xa0);
              iVar5 = 2;
            }
            iVar2 = *(int *)(param_2 + 0x124);
            iVar5 = iVar9 * iVar2 + iVar5;
            iVar9 = iVar5 + iVar2 * 4 + -4;
            if (lVar6 != 0) {
              iVar9 = iVar5 + iVar2 * 4;
            }
            *(int *)(param_2 + 0xdc) = iVar9;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_1 + 0x18c));
        uVar11 = 4;
        if (*(int *)(param_2 + 0xdc) < 0x3a99) goto LAB_1435bcbdd;
      }
      *(undefined4 *)(param_2 + 0xe0) = uVar11;
      if (0 < *(int *)(param_2 + 0xc)) {
        _Dst = *(void **)(param_2 + 0x28);
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x188);
        lVar6 = 0;
        do {
          memcpy(_Dst,(void *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar6 * 2) *
                               (longlong)(int)uVar7 + *(longlong *)(param_1 + 0x168)),
                 (longlong)(int)uVar7);
          uVar7 = (ulonglong)*(int *)(param_1 + 0x188);
          _Dst = (void *)((longlong)_Dst + uVar7);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *(int *)(param_2 + 0xc));
      }
      *(byte *)(param_2 + 0x160) = *(byte *)(*(longlong *)(param_1 + 0x278) + 0xf8) & 1;
      *(byte *)(param_2 + 0x161) = *(byte *)(*(longlong *)(param_1 + 0x278) + 0xf8) >> 1 & 1;
      *(byte *)(param_2 + 0x162) = *(byte *)(*(longlong *)(param_1 + 0x278) + 0xf8) >> 2 & 1;
      uVar7 = CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x278) >> 8),
                       *(byte *)(*(longlong *)(param_1 + 0x278) + 0xf8) >> 3) & 0xffffffffffffff01;
      *(char *)(param_2 + 0x163) = (char)uVar7;
      uVar8 = CONCAT71((int7)(uVar7 >> 8),1);
      goto LAB_1435bc780;
    }
  }
  uVar8 = 0;
LAB_1435bc780:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435bcde2 FUN_1435bcde2 body=1137 status=ok
// SIG undefined FUN_1435bcde2(void)

undefined8 FUN_1435bcde2(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(longlong *)(param_1 + 8) == 0) || (*(int *)(param_1 + 0x18c) < 1)) ||
      ((*(byte *)(param_1 + 0x160) & 1) == 0)) ||
     ((lVar4 = *(longlong *)(param_1 + 0x18), lVar4 == 0 || ((*(byte *)(lVar4 + 0x2c) & 1) == 0))))
  {
    uVar8 = 0;
  }
  else {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18c);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x188);
    *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x164);
    *(undefined4 *)(param_2 + 0x40) = DAT_14c846358;
    *(undefined8 *)(param_2 + 0x38) = DAT_14c846350;
    lVar5 = *(longlong *)(param_1 + 0x10);
    if (lVar5 != 0) {
      dVar1 = *(double *)(lVar5 + 0x290);
      dVar2 = *(double *)(lVar5 + 0x288);
      *(float *)(param_2 + 0x38) = (float)*(double *)(lVar5 + 0x280);
      *(float *)(param_2 + 0x3c) = (float)dVar2;
      *(float *)(param_2 + 0x40) = (float)dVar1;
    }
    uVar13 = (longlong)*(int *)(param_1 + 0x188) * (longlong)*(int *)(param_1 + 0x194);
    FUN_147c04f5c(param_2 + 0x18,uVar13 & 0xffffffff);
    memcpy(*(void **)(param_2 + 0x28),*(void **)(param_1 + 0x168),uVar13);
    memcpy(*(void **)(param_2 + 0x30),*(void **)(param_1 + 0x170),
           (longlong)*(int *)(param_2 + 0x20) * 2);
    uVar8 = FUN_147c07fb8(*(undefined8 *)(lVar4 + 0x30));
    *(undefined8 *)(param_2 + 0x68) = uVar8;
    *(undefined8 *)(param_2 + 0x60) = 0;
    *(uint *)(param_2 + 0x88) =
         -(uint)(0.0001 < *(float *)(param_1 + 0x1a4)) & (uint)(1.0 / *(float *)(param_1 + 0x1a4));
    lVar5 = *(longlong *)(param_1 + 0x10);
    if ((lVar5 == 0) || ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1) != 0)) {
      local_30 = DAT_14c846338;
      local_38 = DAT_14c846330;
    }
    else {
      local_30 = *(undefined4 *)(lVar5 + 0x8d0);
      local_38 = *(undefined8 *)(lVar5 + 0x8c8);
    }
    *(undefined4 *)(param_2 + 0x94) = local_30;
    *(undefined8 *)(param_2 + 0x8c) = local_38;
    uVar7 = 0xffffffff;
    if ((*(byte *)(*(longlong *)(lVar4 + 0x30) + 0xc4) & 2) != 0) {
      uVar7 = *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + 0x120);
    }
    *(undefined4 *)(param_2 + 0x98) = uVar7;
    *(undefined1 *)(param_2 + 0xbe) = *(undefined1 *)(*(longlong *)(lVar4 + 0x30) + 0x70);
    *(byte *)(param_2 + 0xbc) = *(byte *)(*(longlong *)(lVar4 + 0x30) + 0x71) & 1;
    *(undefined1 *)(param_2 + 0xc0) = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x34);
    *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_2 + 0xac) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + 200);
    *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + 0xcc);
    *(byte *)(param_2 + 0x48) = *(byte *)(*(longlong *)(lVar4 + 0x30) + 0xc4) & 1;
    *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + 0xf0);
    lVar5 = *(longlong *)(lVar4 + 0x30);
    dVar1 = *(double *)(lVar5 + 0xe8);
    dVar2 = *(double *)(lVar5 + 0xe0);
    *(float *)(param_2 + 0x50) = (float)*(double *)(lVar5 + 0xd8);
    *(float *)(param_2 + 0x54) = (float)dVar2;
    *(float *)(param_2 + 0x58) = (float)dVar1;
    *(undefined1 *)(param_2 + 0xbd) = 0;
    if (((*(byte *)(param_1 + 0x161) & 2) != 0) &&
       (cVar3 = *(char *)(param_1 + 0x162), *(char *)(param_2 + 0xbf) = cVar3, cVar3 != '\0')) {
      *(undefined1 *)(param_2 + 0xbd) = 1;
    }
    if (0 < (longlong)*(int *)(lVar4 + 0x98)) {
      lVar5 = *(longlong *)(param_1 + 8);
      if (*(int *)(lVar5 + 0x68) != *(int *)(lVar5 + 0x94)) {
        uVar13 = *(ulonglong *)
                  (*(longlong *)(**(longlong **)(lVar5 + 0x40) + 0x90) + -8 +
                  (longlong)*(int *)(lVar4 + 0x98) * 8);
        uVar11 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
        lVar12 = lVar5 + 0x98;
        if (*(longlong *)(lVar5 + 0xa0) != 0) {
          lVar12 = *(longlong *)(lVar5 + 0xa0);
        }
        iVar14 = *(int *)(lVar12 + (ulonglong)
                                   (*(int *)(lVar5 + 0xa8) - 1U & (uVar11 >> 0x10 ^ uVar11)) * 4);
        if (iVar14 != -1) {
          do {
            puVar10 = (ulonglong *)(*(longlong *)(lVar5 + 0x60) + (longlong)iVar14 * 0x18);
            if (*puVar10 == uVar13) goto LAB_1435bd154;
            iVar14 = (int)puVar10[2];
          } while (iVar14 != -1);
        }
      }
      puVar10 = (ulonglong *)0x0;
LAB_1435bd154:
      puVar9 = puVar10 + 1;
      if (puVar10 == (ulonglong *)0x0) {
        puVar9 = (ulonglong *)0x0;
      }
      *(int *)(param_2 + 0x9c) = (int)*puVar9;
    }
    *(undefined1 *)(param_2 + 0xc1) = *(undefined1 *)(*(longlong *)(lVar4 + 0x30) + 0xc6);
    lVar5 = *(longlong *)(lVar4 + 0x30);
    dVar1 = *(double *)(lVar5 + 0x108);
    dVar2 = *(double *)(lVar5 + 0x100);
    *(float *)(param_2 + 0x70) = (float)*(double *)(lVar5 + 0xf8);
    *(float *)(param_2 + 0x74) = (float)dVar2;
    *(float *)(param_2 + 0x78) = (float)dVar1;
    lVar5 = *(longlong *)(lVar4 + 0x30);
    dVar1 = *(double *)(lVar5 + 0x138);
    dVar2 = *(double *)(lVar5 + 0x130);
    *(float *)(param_2 + 0x7c) = (float)*(double *)(lVar5 + 0x128);
    *(float *)(param_2 + 0x80) = (float)dVar2;
    *(float *)(param_2 + 0x84) = (float)dVar1;
    dVar1 = *(double *)(param_1 + 0x260);
    *(float *)(param_2 + 0xc4) = (float)*(double *)(param_1 + 600);
    *(float *)(param_2 + 200) = (float)dVar1;
    uVar6 = FUN_147c11fa2(*(undefined8 *)(lVar4 + 0x30));
    *(undefined1 *)(param_2 + 0xcc) = uVar6;
    *(byte *)(param_2 + 0xcd) = *(byte *)(*(longlong *)(lVar4 + 0x30) + 0x73) >> 1 & 1;
    *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(*(longlong *)(lVar4 + 0x30) + 0x38);
    lVar4 = *(longlong *)(lVar4 + 0x30);
    *(undefined4 *)(param_2 + 0xd4) = *(undefined4 *)(lVar4 + 0x3c);
    uVar8 = CONCAT71((int7)((ulonglong)lVar4 >> 8),1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435bd254 FUN_1435bd254 body=1314 status=ok
// SIG undefined FUN_1435bd254(void)

void FUN_1435bd254(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  size_t _Size;
  uint uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  
  uVar6 = *(uint *)(param_2 + 0x48);
  uVar12 = (ulonglong)uVar6;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar12);
  }
  plVar1 = (longlong *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0x108) = 0;
  iVar8 = 0;
  uVar7 = uVar6;
  if (*(uint *)(param_1 + 0x10c) != uVar6) {
    FUN_147c0bd90(plVar1);
    iVar8 = *(int *)(param_1 + 0x108);
    uVar7 = *(uint *)(param_1 + 0x10c);
  }
  *(uint *)(param_1 + 0x108) = iVar8 + uVar6;
  if (uVar7 - iVar8 < uVar6) {
    FUN_147c0bdf0(plVar1);
  }
  _Size = uVar12 * 8;
  iVar14 = 0;
  memset((void *)((longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x100)),0,_Size);
  plVar2 = (longlong *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = 0;
  uVar7 = uVar6;
  if (*(uint *)(param_1 + 0x11c) != uVar6) {
    FUN_147c0be76(plVar2);
    iVar14 = *(int *)(param_1 + 0x118);
    uVar7 = *(uint *)(param_1 + 0x11c);
  }
  *(uint *)(param_1 + 0x118) = iVar14 + uVar6;
  if (uVar7 - iVar14 < uVar6) {
    FUN_147c0bed6(plVar2);
  }
  iVar8 = 0;
  memset((void *)((longlong)iVar14 * 8 + *(longlong *)(param_1 + 0x110)),0,_Size);
  plVar3 = (longlong *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x128) = 0;
  uVar7 = uVar6;
  if (*(uint *)(param_1 + 300) != uVar6) {
    FUN_147c0bf5c(plVar3);
    iVar8 = *(int *)(param_1 + 0x128);
    uVar7 = *(uint *)(param_1 + 300);
  }
  *(uint *)(param_1 + 0x128) = uVar6 + iVar8;
  if (uVar7 - iVar8 < uVar6) {
    FUN_147c0bfbc(plVar3);
  }
  iVar14 = 0;
  memset((void *)((longlong)iVar8 * 8 + *(longlong *)(param_1 + 0x120)),0,_Size);
  plVar4 = (longlong *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x138) = 0;
  uVar7 = uVar6;
  if (*(uint *)(param_1 + 0x13c) != uVar6) {
    FUN_147c0c042(plVar4);
    iVar14 = *(int *)(param_1 + 0x138);
    uVar7 = *(uint *)(param_1 + 0x13c);
  }
  *(uint *)(param_1 + 0x138) = uVar6 + iVar14;
  if (uVar7 - iVar14 < uVar6) {
    FUN_147c0c0a2(plVar4);
  }
  iVar8 = 0;
  memset((void *)((longlong)iVar14 * 8 + *(longlong *)(param_1 + 0x130)),0,_Size);
  plVar5 = (longlong *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x148) = 0;
  uVar7 = uVar6;
  if (*(uint *)(param_1 + 0x14c) != uVar6) {
    FUN_147c0c042(plVar5);
    iVar8 = *(int *)(param_1 + 0x148);
    uVar7 = *(uint *)(param_1 + 0x14c);
  }
  *(uint *)(param_1 + 0x148) = iVar8 + uVar6;
  if (uVar7 - iVar8 < uVar6) {
    FUN_147c0c0a2(plVar5);
    memset((void *)((longlong)iVar8 * 8 + *plVar5),0,_Size);
  }
  else {
    memset((void *)((longlong)iVar8 * 8 + *plVar5),0,_Size);
    if (uVar6 == 0) {
      return;
    }
  }
  uVar13 = 0;
  do {
    if ((longlong)uVar13 < (longlong)*(int *)(param_2 + 0x48)) {
      lVar16 = *(longlong *)(*(longlong *)(param_2 + 0x40) + uVar13 * 8);
    }
    else {
      lVar16 = 0;
    }
    if (0 < *(int *)(lVar16 + 0x40)) {
      lVar15 = 0;
      do {
        plVar11 = *(longlong **)(*(longlong *)(lVar16 + 0x38) + lVar15 * 8);
        iVar8 = (**(code **)(*plVar11 + 0x2f8))(plVar11);
        if ((iVar8 != 2) || (-1 < (char)plVar11[5])) goto LAB_1435bd466;
        lVar9 = FUN_145b4eee8();
        if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
            != lVar9 + 0x30)) {
          lVar9 = FUN_145b4efd2();
          if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
              != lVar9 + 0x30)) {
            lVar9 = FUN_145b4edfe();
            if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                lVar9 + 0x30)) {
              lVar9 = FUN_145b4ed14();
              if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                  lVar9 + 0x30)) {
                if (plVar11 == (longlong *)0x0) {
LAB_1435bd5b9:
                  plVar11 = (longlong *)0x0;
                }
                else {
                  lVar9 = FUN_145b4ed14();
                  if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                      lVar9 + 0x30)) goto LAB_1435bd5b9;
                }
                if (((((*(byte *)((longlong)plVar11 + 0x34) & 1) != 0) ||
                     ((*(byte *)(plVar11 + 0x13) & 1) != 0)) ||
                    ((*(byte *)((longlong)plVar11 + 0x104) & 1) != 0)) &&
                   ((plVar10 = plVar4, (char)plVar11[6] == '\0' ||
                    (plVar10 = plVar5, (char)plVar11[6] == '\x01')))) goto LAB_1435bd4ab;
              }
            }
            else if (*(longlong *)(*plVar3 + uVar13 * 8) == 0) {
              plVar10 = plVar3;
              if (plVar11 != (longlong *)0x0) {
                lVar9 = FUN_145b4edfe();
                if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                    lVar9 + 0x30)) goto LAB_1435bd4ab;
              }
              goto LAB_1435bd4a9;
            }
          }
          else if (*(longlong *)(*plVar2 + uVar13 * 8) == 0) {
            plVar10 = plVar2;
            if (plVar11 != (longlong *)0x0) {
              lVar9 = FUN_145b4efd2();
              if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                  lVar9 + 0x30)) goto LAB_1435bd4ab;
            }
            goto LAB_1435bd4a9;
          }
        }
        else {
          if (*(longlong *)(*plVar1 + uVar13 * 8) != 0) goto LAB_1435bd466;
          plVar10 = plVar1;
          if (plVar11 == (longlong *)0x0) {
LAB_1435bd4a9:
            plVar11 = (longlong *)0x0;
          }
          else {
            lVar9 = FUN_145b4eee8();
            if ((*(int *)(plVar11[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                lVar9 + 0x30)) goto LAB_1435bd4a9;
          }
LAB_1435bd4ab:
          *(longlong **)(*plVar10 + uVar13 * 8) = plVar11;
        }
LAB_1435bd466:
        lVar15 = lVar15 + 1;
      } while (lVar15 < *(int *)(lVar16 + 0x40));
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == uVar12) {
      return;
    }
  } while( true );
}



// FUNCTION 1435bd783 FUN_1435bd783 body=47 status=ok
// SIG undefined FUN_1435bd783(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bd783(void)

{
  _DAT_14caf34d0 = &PTR_FUN_14aa00340;
  FUN_144725486(&DAT_14caf34d0);
  FUN_1463ef1f4(&DAT_14caf34d0);
  return;
}



// FUNCTION 1435bd7b2 FUN_1435bd7b2 body=47 status=ok
// SIG undefined FUN_1435bd7b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bd7b2(void)

{
  _DAT_14caf34f0 = &PTR_FUN_14aa00340;
  FUN_144725486(&DAT_14caf34f0);
  FUN_1463ef1f4(&DAT_14caf34f0);
  return;
}



// FUNCTION 1435bd81e FUN_1435bd81e body=29 status=ok
// SIG undefined FUN_1435bd81e(void)

undefined * FUN_1435bd81e(char param_1)

{
  undefined *puVar1;
  
  if (param_1 == '\0') {
    FUN_14610d210();
    puVar1 = &DAT_14caf3460;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



// FUNCTION 1435bd83b FUN_1435bd83b body=38 status=ok
// SIG undefined FUN_1435bd83b(void)

undefined4 * FUN_1435bd83b(char param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == '\0') {
    puVar1 = (undefined4 *)FUN_14001cc68(4,0x10);
    *puVar1 = 0;
  }
  else {
    puVar1 = (undefined4 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1435bd87a FUN_1435bd87a body=1271 status=ok
// SIG undefined FUN_1435bd87a(void)

void FUN_1435bd87a(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined1 local_58 [32];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (undefined1 *)0x0;
  local_30 = 0x400000000;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  if (DAT_14c872bf0 == '\x01') {
    uVar11 = 0;
    if ((DAT_14c872bf1 != '\x01') || ((DAT_14c8442b8 & 1) != 0)) goto LAB_1435bd931;
LAB_1435bd8ef:
    if ((DAT_14c760d84 == 0) || ((DAT_14ca84f5a & 1) == 0)) {
      cVar4 = FUN_1406917e6();
      uVar11 = 0;
      if ((cVar4 == '\0') || (uVar11 = 0, DAT_14c76194c == 0)) goto LAB_1435bd931;
    }
    else if (DAT_14c76194c == 0) goto LAB_1435bdca6;
    FUN_1447a8be9(param_2,param_1 + 0x40,local_58);
    uVar11 = local_30 & 0xffffffff;
    if (0 < (int)local_30) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar7 = (uint *)*puVar2;
      if (puVar7 != (uint *)0x0) goto LAB_1435bda18;
      while( true ) {
        uVar9 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar9 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar9 | 1;
          __tlregdtor(&LAB_1435c8f10);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar6 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar6 = 0xffffffff;
        *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar2 = puVar6;
        FUN_140217a48(puVar2);
        puVar7 = (uint *)*puVar2;
LAB_1435bda18:
        puVar14 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar12 = (uint *)(puVar14 + 0x16);
        uVar9 = puVar7[0x12];
        if (puVar12 <= puVar7 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
          LOCK();
          uVar3 = *puVar7;
          *puVar7 = *puVar7 + uVar9 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar9) != 0xffffffff) break;
          puVar7 = (uint *)*puVar2;
          *puVar7 = 0xffffffff;
          *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar2 = puVar7;
          puVar14 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
          puVar12 = (uint *)(puVar14 + 0x16);
          uVar9 = 0;
          if (puVar12 <= puVar7 + 0x4000) {
            uVar9 = 1;
            goto LAB_1435bda98;
          }
        }
      }
      uVar9 = uVar9 + 1;
LAB_1435bda98:
      *(uint **)(puVar7 + 0x10) = puVar12;
      puVar7[0x12] = uVar9;
      FUN_1447247dc(puVar14,local_58);
      *puVar14 = &PTR_FUN_14aa003b8;
      puVar14[0x15] = 0;
      if (param_1 == 0) {
        *(undefined4 *)(puVar14 + 0x15) = 0;
        iVar5 = 0;
      }
      else {
        uVar9 = *(uint *)(param_1 + 0xc);
        *(uint *)(puVar14 + 0x15) = uVar9;
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar15 = 0;
        }
        iVar5 = *(int *)(lVar15 + 0x10);
        if (*(int *)(lVar15 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar5 = *(int *)(lVar15 + 0x10);
          bVar16 = iVar5 == 0;
          if (bVar16) {
            *(int *)(lVar15 + 0x10) = iVar13;
            iVar5 = 0;
          }
          UNLOCK();
          if (bVar16) {
            iVar5 = iVar13;
          }
        }
      }
      *(int *)((longlong)puVar14 + 0xac) = iVar5;
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar14[0xf] = uVar8;
      puVar14[0x10] = 0xe80000527800b400;
      *(undefined4 *)((longlong)puVar14 + 0x1c) = 3;
      if (puVar14 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
      }
      puVar2 = *(undefined8 **)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar14;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      local_59 = 1;
      FUN_1447439e4(puVar14);
      uVar11 = local_30 & 0xffffffff;
    }
  }
  else {
    if (DAT_14c8442b8 == 0) goto LAB_1435bd8ef;
LAB_1435bdca6:
    uVar11 = 0;
  }
LAB_1435bd931:
  *(undefined1 *)(param_1 + 0x30) = 1;
  puVar10 = local_38;
  if (local_38 == (undefined1 *)0x0) {
    puVar10 = local_58;
  }
  FUN_144717c65(puVar10,uVar11);
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435bdd72 FUN_1435bdd72 body=69 status=ok
// SIG undefined FUN_1435bdd72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bdd72(void)

{
  _DAT_14caf3528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435bddb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3530,1);
  return;
}



// FUNCTION 1435bddb7 FUN_1435bddb7 body=69 status=ok
// SIG undefined FUN_1435bddb7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bddb7(void)

{
  _DAT_14caf3538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435bddf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3540,1);
  return;
}



// FUNCTION 1435bddfc FUN_1435bddfc body=69 status=ok
// SIG undefined FUN_1435bddfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bddfc(void)

{
  _DAT_14caf3550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435bde3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3558,1);
  return;
}



// FUNCTION 1435bde41 FUN_1435bde41 body=69 status=ok
// SIG undefined FUN_1435bde41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bde41(void)

{
  _DAT_14caf3568 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435bde83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3570,1);
  return;
}



// FUNCTION 1435bde86 FUN_1435bde86 body=69 status=ok
// SIG undefined FUN_1435bde86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bde86(void)

{
  _DAT_14caf3578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435bdec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3580,1);
  return;
}



// FUNCTION 1435bdecb FUN_1435bdecb body=69 status=ok
// SIG undefined FUN_1435bdecb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bdecb(void)

{
  _DAT_14caf3588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435bdf0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3590,1);
  return;
}



// FUNCTION 1435bdf10 FUN_1435bdf10 body=169 status=ok
// SIG undefined FUN_1435bdf10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435bdf10(void)

{
  DAT_14caf35e8 = 0;
  if (DAT_14caf35e0 != 0) {
    FUN_1400020a8();
  }
  DAT_14caf35a8 = 0;
  if (DAT_14caf35ac != 0) {
    FUN_14472eb64(&DAT_14caf35a0,0);
  }
  _DAT_14caf35d0 = 0xffffffff;
  _DAT_14caf35c8 = 0;
  if (0x80 < DAT_14caf35cc) {
    DAT_14caf35cc = 0x80;
    FUN_1446efbd8(&DAT_14caf35b0,0);
  }
  if (DAT_14caf35c0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf35a0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1435bdfca FUN_1435bdfca body=216 status=ok
// SIG undefined FUN_1435bdfca(void)

void FUN_1435bdfca(void)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1403de9f2(&DAT_14caf35f0,&local_38,&DAT_149e06196,1);
  FUN_1408d9e0e(&DAT_14caf35a0,0);
  uVar2 = 0;
  if ((longlong)(int)uStack_30 != 0) {
    lVar3 = (longlong)(int)uStack_30 << 4;
    lVar1 = local_38;
    do {
      FUN_147c0a94e(&DAT_14caf35a0,local_3c,lVar1,0);
      lVar1 = lVar1 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
    uVar2 = (int)uStack_30;
  }
  DAT_14caf3598 = DAT_14caf35d4 < DAT_14caf35a8;
  FUN_1447a1747(local_38,uVar2);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435be0a3 FUN_1435be0a3 body=69 status=ok
// SIG undefined FUN_1435be0a3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435be0a3(void)

{
  _DAT_14caf3600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435be0e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3608,1);
  return;
}



// FUNCTION 1435be0e8 FUN_1435be0e8 body=251 status=ok
// SIG undefined FUN_1435be0e8(void)

void FUN_1435be0e8(void)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14612b044(&local_28,0x10,1,0);
  uVar2 = (ulonglong)local_18;
  if ((-1 < (int)local_18) && ((int)local_18 < local_20)) {
    do {
      plVar1 = *(longlong **)(local_28 + (uVar2 & 0xffffffff) * 8);
      FUN_1435bf592(plVar1,0);
      (**(code **)(*plVar1 + 0xa60))(plVar1,1);
      *(byte *)((longlong)plVar1 + 0x692) = *(byte *)((longlong)plVar1 + 0x692) | 0x80;
      *(undefined4 *)(plVar1 + 0xeb) = 0;
      if (*(int *)((longlong)plVar1 + 0x75c) != 0) {
        FUN_147c0c404(plVar1 + 0xea);
      }
      FUN_147c01d18(plVar1);
      FUN_14072bb4a(plVar1);
      uVar2 = (longlong)(int)local_18;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        local_18 = (uint)uVar2;
        if ((longlong)local_20 <= (longlong)uVar2) break;
      } while (*(longlong *)(local_28 + uVar2 * 8) == 0);
    } while ((-2 < (longlong)uVar3) && ((int)local_18 < local_20));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435be1e4 FUN_1435be1e4 body=69 status=ok
// SIG undefined FUN_1435be1e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435be1e4(void)

{
  _DAT_14caf3610 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435be226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3618,1);
  return;
}



// FUNCTION 1435be22a FUN_1435be22a body=1456 status=ok
// SIG undefined FUN_1435be22a(void)

void FUN_1435be22a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_147c0c434((longlong *)(param_1 + 0x60));
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) != 0) {
    FUN_147c0c464(plVar1);
  }
  plVar3 = (longlong *)(param_1 + 0x80);
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) != 0) {
    FUN_147c0c464(plVar3);
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (*(int *)(param_1 + 0x9c) != 0) {
    FUN_147c0c494((longlong *)(param_1 + 0x90));
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_147c0c4c4((longlong *)(param_1 + 0xa0));
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (0 < *(int *)(param_1 + 0x40)) {
    plVar2 = (longlong *)(param_1 + 0x38);
    uVar13 = 0xffffffff;
    uVar11 = 0;
    local_68 = (longlong *)(param_1 + 0xa0);
    local_60 = (longlong *)(param_1 + 0x90);
    local_58 = (longlong *)(param_1 + 0x60);
    do {
      lVar4 = *(longlong *)(*plVar2 + uVar11 * 8);
      if (lVar4 != 0) {
        if ((*(byte *)(lVar4 + 0x28) & 1) != 0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
          iVar6 = *(int *)(param_1 + 0x78);
          *(uint *)(param_1 + 0x78) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x7c) < iVar6 + 1U) {
            FUN_147c0c4f4(plVar1,iVar6);
          }
          *(longlong *)(*plVar1 + (longlong)iVar6 * 8) = lVar4;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
        }
        if ((*(byte *)(lVar4 + 0x28) & 6) != 0) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
          iVar6 = *(int *)(param_1 + 0x88);
          *(uint *)(param_1 + 0x88) = iVar6 + 1U;
          if (*(uint *)(param_1 + 0x8c) < iVar6 + 1U) {
            FUN_147c0c4f4(plVar3,iVar6);
          }
          *(longlong *)(*plVar3 + (longlong)iVar6 * 8) = lVar4;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
        }
        lVar8 = FUN_1458d47c0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
          lVar8 = FUN_1459594b4();
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
            lVar8 = FUN_1459e8ade();
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
              lVar8 = FUN_1459e872e();
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) {
                lVar8 = FUN_1459591f2();
                if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar8 + 0x38) * 8) == lVar8 + 0x30)) {
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c(lVar4);
                  }
                  iVar6 = *(int *)(param_1 + 0xa8);
                  lVar8 = (longlong)iVar6;
                  *(uint *)(param_1 + 0xa8) = iVar6 + 1U;
                  plVar7 = local_68;
                  if (*(uint *)(param_1 + 0xac) < iVar6 + 1U) {
                    FUN_147c0c686(local_68,iVar6);
                    plVar7 = local_68;
                  }
                  goto LAB_1435be43a;
                }
              }
              else {
                if (DAT_14c950c29 == 1) {
                  FUN_1456cec3c(lVar4);
                }
                *(longlong *)(param_1 + 0x58) = lVar4;
              }
              goto LAB_1435be309;
            }
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar4);
            }
            iVar6 = *(int *)(param_1 + 0x98);
            lVar8 = (longlong)iVar6;
            *(uint *)(param_1 + 0x98) = iVar6 + 1U;
            plVar7 = local_60;
            if (*(uint *)(param_1 + 0x9c) < iVar6 + 1U) {
              FUN_147c0c600(local_60,iVar6);
              plVar7 = local_60;
            }
          }
          else {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar4);
            }
            iVar6 = *(int *)(param_1 + 0x68);
            lVar8 = (longlong)iVar6;
            *(uint *)(param_1 + 0x68) = iVar6 + 1U;
            plVar7 = local_58;
            if (*(uint *)(param_1 + 0x6c) < iVar6 + 1U) {
              FUN_147c0c57a(local_58,iVar6);
              plVar7 = local_58;
            }
          }
LAB_1435be43a:
          *(longlong *)(*plVar7 + lVar8 * 8) = lVar4;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
        }
        else {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
          *(longlong *)(param_1 + 0x48) = lVar4;
          if ((*(byte *)(lVar4 + 0x28) & 3) == 0) {
            uVar13 = uVar11 & 0xffffffff;
          }
        }
      }
LAB_1435be309:
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x40));
    lVar4 = *(longlong *)(param_1 + 0x58);
    if (lVar4 != 0) {
      local_50 = lVar4;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c();
      }
      FUN_147bfdeb2(plVar2,&local_50);
      local_50 = *(longlong *)(param_1 + 0x58);
      if ((local_50 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      FUN_147bfdf78(plVar2,&local_50);
    }
    uVar12 = (uint)uVar13;
    if (uVar12 != 0xffffffff) {
      iVar6 = *(int *)(param_1 + 0x40);
      if (~uVar12 + iVar6 != 0) {
        memmove((void *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar12 * 8),
                (void *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar12 * 8 + 8),
                (longlong)(int)(~uVar12 + iVar6) << 3);
        iVar6 = *(int *)(param_1 + 0x40);
      }
      *(int *)(param_1 + 0x40) = iVar6 + -1;
      FUN_147c0c70c(plVar2);
    }
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar8 = FUN_145b518f4();
    lVar4 = *(longlong *)(param_1 + 0x48);
    if ((((((lVar4 != 0) && (lVar8 != 0)) && (lVar9 = *(longlong *)(lVar4 + 0x10), lVar9 != 0)) &&
         (((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) &&
          ((*(longlong *)(lVar4 + 0x30) != 0 &&
           ((plVar1 = *(longlong **)(*(longlong *)(lVar4 + 0x30) + 0xe0), plVar1 != (longlong *)0x0
            && ((int)plVar1[1] != 0)))))))) && (*plVar1 != 0)) &&
       (lVar8 = *(longlong *)(param_1 + 0x20), lVar8 != 0)) {
      lVar9 = FUN_145b523ec();
      lVar8 = *(longlong *)(lVar8 + 0x10);
      if (((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
           lVar9 + 0x30)) && ((*(byte *)(lVar4 + 0x46) & 1) == 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        piVar5 = *(int **)(*(longlong *)**(undefined8 **)(lVar4 + 0xe0) + 0x30);
        piVar10 = (int *)(*(longlong *)**(undefined8 **)(lVar4 + 0xe0) + 0x10);
        if (piVar5 != (int *)0x0) {
          piVar10 = piVar5;
        }
        iVar6 = *piVar10;
        if (((-1 < (longlong)iVar6) && (iVar6 < *(int *)(lVar4 + 0x160))) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x158) + (longlong)iVar6 * 0x30), lVar4 != 0
           )) {
          lVar8 = *(longlong *)(param_1 + 0x30);
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar4);
          }
          *(longlong *)(lVar8 + 0x30) = lVar4;
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435be7dc FUN_1435be7dc body=513 status=ok
// SIG undefined FUN_1435be7dc(void)

bool FUN_1435be7dc(longlong param_1,longlong param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if ((int)uVar1 < 1) {
    uVar2 = *(uint *)(param_2 + 0x40);
    *(uint *)(param_1 + 0x40) = uVar2 + uVar1;
    if (*(int *)(param_1 + 0x44) - uVar1 < uVar2) {
      FUN_147c0c4f4((longlong *)(param_1 + 0x38),(ulonglong)uVar1);
    }
    memmove((void *)((longlong)*(void **)(param_1 + 0x38) + (longlong)(int)uVar2 * 8),
            *(void **)(param_1 + 0x38),(ulonglong)uVar1 * 8);
    memset(*(void **)(param_1 + 0x38),0,(longlong)(int)uVar2 << 3);
    *(uint *)(param_1 + 0x2c) =
         *(uint *)(param_1 + 0x2c) & 0xfffffffe | *(uint *)(param_2 + 0x2c) & 1;
    FUN_144757f48(param_1,8);
    lVar5 = (**(code **)(**(longlong **)(param_2 + 0x30) + 0x330))
                      (*(longlong **)(param_2 + 0x30),param_2,param_1,param_3,param_4,0);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x30) = lVar5;
    lVar5 = (**(code **)(**(longlong **)(param_2 + 0x50) + 0x330))
                      (*(longlong **)(param_2 + 0x50),param_2,param_1,param_3,param_4,0);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
    }
    *(longlong *)(param_1 + 0x50) = lVar5;
    plVar3 = *(longlong **)(param_2 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar3 + 0x330))(plVar3,param_2,param_1,param_3,param_4,0);
      if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar5);
      }
      *(longlong *)(param_1 + 0x48) = lVar5;
    }
    if (0 < *(int *)(param_2 + 0x40)) {
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x38) + lVar5 * 8);
        if (plVar3 == (longlong *)0x0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar5 * 8) = 0;
        }
        else {
          lVar6 = (**(code **)(*plVar3 + 0x330))(plVar3,param_2,param_1,param_3,param_4,0);
          lVar4 = *(longlong *)(param_1 + 0x38);
          if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar6);
          }
          *(longlong *)(lVar4 + lVar5 * 8) = lVar6;
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_2 + 0x40));
    }
  }
  return (int)uVar1 < 1;
}



// FUNCTION 1435be9de FUN_1435be9de body=557 status=ok
// SIG undefined FUN_1435be9de(void)

void FUN_1435be9de(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_68 = 0;
    uStack_60 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar4 = FUN_1400439fc(param_1,0,&local_39);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_58 = 0x4a56eb40;
  uStack_54 = 0x10f511dc;
  uStack_50 = 0x92d3347e;
  uStack_4c = 0xb2c96ae7;
  iVar5 = FUN_1448a256a(param_1);
  if (iVar5 < 2) {
    *(byte *)((longlong)param_1 + 0x37) = *(byte *)((longlong)param_1 + 0x37) | 1;
LAB_1435bea4c:
    if ((*(uint *)((longlong)param_1 + 0x5c) & 4) != 0) {
      *(uint *)((longlong)param_1 + 0x5c) = *(uint *)((longlong)param_1 + 0x5c) | 8;
    }
  }
  else if (iVar5 == 2) goto LAB_1435bea4c;
  if (0 < (int)param_1[9]) {
    lVar9 = 0;
    do {
      lVar1 = *(longlong *)(param_1[8] + lVar9 * 8);
      if (lVar1 != 0) {
        FUN_1400337aa(lVar1);
        AcquireSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
        ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9643a8);
        if ((*(longlong *)(lVar1 + 0x50) == 0) && (param_1[4] != 0)) {
          FUN_1405842b6();
        }
      }
      lVar9 = lVar9 + 1;
      uVar7 = (ulonglong)(int)param_1[9];
    } while (lVar9 < (longlong)uVar7);
    if (0 < (int)param_1[9]) {
      lVar9 = 0;
      do {
        if (*(longlong *)(param_1[8] + lVar9 * 8) != 0) {
          FUN_1400337aa();
          uVar7 = (ulonglong)*(uint *)(param_1 + 9);
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)uVar7);
      *(byte *)((longlong)param_1 + 0x37) = *(byte *)((longlong)param_1 + 0x37) | 0x10;
      if (0 < (int)uVar7) {
        lVar9 = 0;
        do {
          lVar1 = *(longlong *)(param_1[8] + lVar9 * 8);
          if (lVar1 != 0) {
            iVar5 = *(int *)(lVar1 + 0x40);
            if (0 < (longlong)iVar5) {
              iVar8 = -iVar5;
              uVar7 = (longlong)iVar5;
              do {
                lVar2 = *(longlong *)(lVar1 + 0x38);
                if (*(longlong *)(lVar2 + -8 + uVar7 * 8) == 0) {
                  uVar6 = *(uint *)(lVar1 + 0x40);
                  if (uVar7 != uVar6) {
                    memmove((void *)(lVar2 + uVar7 * 8 + -8),(void *)(lVar2 + uVar7 * 8),
                            (longlong)(int)(uVar6 + iVar8) << 3);
                    uVar6 = *(uint *)(lVar1 + 0x40);
                  }
                  *(uint *)(lVar1 + 0x40) = uVar6 - 1;
                  FUN_147c0c70c((longlong *)(lVar1 + 0x38));
                  FUN_14282b7b8(param_1);
                }
                iVar8 = iVar8 + 1;
                bVar3 = 1 < uVar7;
                uVar7 = uVar7 - 1;
              } while (bVar3);
              uVar7 = (ulonglong)*(uint *)(param_1 + 9);
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)uVar7);
      }
      goto LAB_1435beb88;
    }
  }
  *(byte *)((longlong)param_1 + 0x37) = *(byte *)((longlong)param_1 + 0x37) | 0x10;
LAB_1435beb88:
  if (param_1[4] != 0) {
    FUN_1405842b6();
  }
  fVar10 = *(float *)(param_1 + 0xb);
  if (1.0 <= fVar10) {
    fVar10 = 1.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  *(float *)(param_1 + 0xb) = fVar10;
  (**(code **)(*param_1 + 0x2b0))(param_1);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435bec0c FUN_1435bec0c body=345 status=ok
// SIG undefined FUN_1435bec0c(void)

ulonglong FUN_1435bec0c(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 unaff_RBP;
  ulonglong uVar7;
  bool bVar9;
  undefined4 uVar10;
  undefined7 uVar8;
  
  uVar8 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar7 = CONCAT71(uVar8,1);
  if (*(int *)(param_1 + 0x48) != 1) goto LAB_1435bec21;
  *(undefined4 *)(param_1 + 0x48) = 2;
  if (*(int *)(param_1 + 0x4c) == 1) {
    FUN_147c0c7ae((undefined8 *)(param_1 + 0x40));
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = 0;
  plVar5 = (longlong *)FUN_147bfe507(param_1);
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(plVar5);
  }
  *(longlong **)(lVar1 + 8) = plVar5;
  *(undefined4 *)(plVar5 + 5) = 1;
  *(byte *)(plVar5 + 0x16) = *(byte *)(plVar5 + 0x16) | 1;
  *(undefined4 *)((longlong)plVar5 + 0xb4) = 0;
  lVar1 = **(longlong **)(param_1 + 0x40);
  *(uint *)((longlong)plVar5 + 0x2c) =
       *(uint *)((longlong)plVar5 + 0x2c) & 0xfffffffe | *(uint *)(lVar1 + 0x2c) & 1;
  if (*(longlong *)(lVar1 + 0x48) == 0) {
    uVar10 = 0x41200000;
  }
  else {
    lVar6 = FUN_145b51720();
    lVar2 = *(longlong *)(lVar1 + 0x48);
    if (lVar2 == 0) {
LAB_1435bed61:
      bVar9 = false;
    }
    else {
      bVar9 = false;
      if ((lVar6 != 0) && (lVar3 = *(longlong *)(lVar2 + 0x10), bVar9 = false, lVar3 != 0)) {
        if (*(int *)(lVar3 + 0x38) < *(int *)(lVar6 + 0x38)) goto LAB_1435bed61;
        bVar9 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30;
      }
    }
    if (bVar9) {
      uVar10 = 0x42c80000;
    }
    else {
      uVar10 = 0x41200000;
    }
    if (lVar2 == 0) {
      uVar10 = 0x41200000;
    }
  }
  if (param_2 != '\0') {
    uVar10 = 0x42c80000;
  }
  uVar7 = CONCAT71(uVar8,1);
  cVar4 = (**(code **)(*plVar5 + 0x2a8))(plVar5,lVar1,uVar10,1);
  if (cVar4 == '\0') {
    uVar7 = 0;
  }
  else {
    FUN_14282b7b8(param_1);
  }
LAB_1435bec21:
  return uVar7 & 0xffffffff;
}



// FUNCTION 1435bed66 FUN_1435bed66 body=895 status=ok
// SIG undefined FUN_1435bed66(void)

void FUN_1435bed66(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_70;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_88 = 0;
    uStack_80 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar6 = FUN_1400439fc(param_1,0,&local_61);
  if (cVar6 != '\0') {
    (**(code **)(*param_1 + 0x268))();
  }
  *(byte *)((longlong)param_1 + 0xec) = *(byte *)((longlong)param_1 + 0xec) & 0xf7;
  *(byte *)((longlong)param_1 + 0xf2) = *(byte *)((longlong)param_1 + 0xf2) & 0xfe;
  bVar7 = *(byte *)((longlong)param_1 + 0x172) & 0xf9;
  *(byte *)((longlong)param_1 + 0x172) = bVar7;
  *(undefined2 *)(param_1 + 0x2e) = 0x300;
  lVar12 = (longlong)(int)param_1[0xd];
  if (lVar12 < 1) {
    bVar14 = false;
  }
  else {
    do {
      lVar1 = *(longlong *)(param_1[0xc] + -8 + lVar12 * 8);
      if (lVar1 != 0) {
        FUN_1400337aa(lVar1);
        lVar9 = FUN_145b523ec();
        if ((((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) ||
            ((*(byte *)(lVar1 + 0x37) & 0x40) == 0)) && (*(int *)(lVar1 + 0x48) != 0)) {
          lVar9 = **(longlong **)(lVar1 + 0x40);
          FUN_1400337aa(lVar9);
          if ((longlong)*(int *)(lVar1 + 0x48) != 0) {
            plVar13 = *(longlong **)(lVar1 + 0x40);
            local_70 = plVar13 + *(int *)(lVar1 + 0x48);
            do {
              lVar2 = *plVar13;
              if (lVar2 != 0) {
                if (0 < *(int *)(lVar9 + 0x40)) {
                  lVar11 = 0;
                  do {
                    lVar3 = *(longlong *)(lVar2 + 0x38);
                    if (*(longlong *)(lVar3 + lVar11 * 8) != 0) {
                      lVar10 = FUN_145b4f1a6();
                      lVar3 = *(longlong *)(lVar3 + lVar11 * 8);
                      if ((((lVar3 != 0) && (lVar10 != 0)) &&
                          ((lVar4 = *(longlong *)(lVar3 + 0x10), lVar4 != 0 &&
                           ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                            (*(longlong *)
                              (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                             == lVar10 + 0x30)))))) && ((*(byte *)(lVar3 + 0x140) & 1) != 0)) {
                        *(byte *)((longlong)param_1 + 0xec) =
                             *(byte *)((longlong)param_1 + 0xec) | 8;
                        break;
                      }
                    }
                    lVar11 = lVar11 + 1;
                  } while (lVar11 < *(int *)(lVar9 + 0x40));
                }
                if ((((*(byte *)(lVar9 + 0x2c) & 1) != 0) &&
                    (lVar2 = *(longlong *)(lVar9 + 0x30), lVar2 != 0)) &&
                   (*(int *)(lVar2 + 0x114) == 0)) {
                  *(byte *)((longlong)param_1 + 0xf2) = *(byte *)((longlong)param_1 + 0xf2) | 1;
                  if ((*(float *)(lVar2 + 0x74) == 0.0) && (!NAN(*(float *)(lVar2 + 0x74)))) {
                    plVar5 = *(longlong **)(lVar9 + 0x50);
                    *(byte *)((longlong)param_1 + 0x172) = *(byte *)((longlong)param_1 + 0x172) | 2;
                    fVar15 = (float)(**(code **)(*plVar5 + 0x398))();
                    if ((fVar15 == 0.0) &&
                       ((!NAN(fVar15) && ((*(byte *)((longlong)param_1 + 0xed) & 4) == 0)))) {
                      *(byte *)((longlong)param_1 + 0x172) =
                           *(byte *)((longlong)param_1 + 0x172) | 4;
                    }
                  }
                }
              }
              plVar13 = plVar13 + 1;
            } while (plVar13 != local_70);
          }
          bVar7 = *(byte *)(lVar1 + 0x35);
          if (*(byte *)((longlong)param_1 + 0xf3) < *(byte *)(lVar1 + 0x35)) {
            bVar7 = *(byte *)((longlong)param_1 + 0xf3);
          }
          if (*(byte *)(param_1 + 0x2e) < bVar7) {
            *(byte *)(param_1 + 0x2e) = bVar7;
          }
          if (bVar7 < *(byte *)((longlong)param_1 + 0x171)) {
            *(byte *)((longlong)param_1 + 0x171) = bVar7;
          }
        }
      }
      bVar14 = 1 < lVar12;
      lVar12 = lVar12 + -1;
    } while (bVar14);
    bVar7 = *(byte *)((longlong)param_1 + 0x172);
    bVar14 = *(char *)((longlong)param_1 + 0x171) != '\x03';
  }
  *(byte *)((longlong)param_1 + 0x172) = bVar7 & 0xfe | bVar14;
  if ((int)param_1[0x14] == 0) {
    if ((int)param_1[0xd] < 1) {
      *(undefined4 *)(param_1 + 0x14) = 1;
      if (*(int *)((longlong)param_1 + 0xa4) != 0) goto LAB_1435bef99;
    }
    else if ((*(longlong *)param_1[0xc] == 0) ||
            (uVar8 = *(uint *)(*(longlong *)param_1[0xc] + 0x48), *(uint *)(param_1 + 0x14) = uVar8,
            uVar8 <= *(uint *)((longlong)param_1 + 0xa4))) goto LAB_1435bef99;
    FUN_147c0d0ae(param_1 + 0x13);
  }
LAB_1435bef99:
  if ((((int)param_1[0x12] == 0) && (0 < (int)param_1[0xd])) && (*(longlong *)param_1[0xc] != 0)) {
    uVar8 = *(uint *)(*(longlong *)param_1[0xc] + 0x48);
    *(uint *)(param_1 + 0x12) = uVar8;
    if (*(uint *)((longlong)param_1 + 0x94) < uVar8) {
      FUN_14475e4ac(param_1 + 0x11,0);
      uVar8 = *(uint *)(param_1 + 0x12);
    }
    if (0 < (int)uVar8) {
      lVar12 = 0;
      do {
        *(float *)(param_1[0x11] + lVar12 * 4) = (float)(int)lVar12 * 2500.0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[0x12]);
    }
  }
  if (DAT_14c7616bc == 1) {
    FUN_147bffcda(param_1);
  }
  *(undefined1 *)(param_1 + 0x1b) = 1;
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435bf0e6 FUN_1435bf0e6 body=197 status=ok
// SIG undefined FUN_1435bf0e6(void)

void FUN_1435bf0e6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  *(byte *)(param_1 + 0xec) = *(byte *)(param_1 + 0xec) | 0xc0;
  iVar5 = *(int *)(param_1 + 0x68);
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x60) + lVar7 * 8);
      if (lVar1 != 0) {
        iVar6 = *(int *)(lVar1 + 0x48);
        if (0 < iVar6) {
          lVar9 = 0;
          do {
            lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x40) + lVar9 * 8);
            if ((lVar2 != 0) && (0 < *(int *)(lVar2 + 0x40))) {
              lVar8 = 0;
              do {
                plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0x38) + lVar8 * 8);
                if (plVar3 != (longlong *)0x0) {
                  cVar4 = (**(code **)(*plVar3 + 0x380))();
                  if (cVar4 == '\0') {
                    *(byte *)(param_1 + 0xec) = *(byte *)(param_1 + 0xec) & 0xbf;
                    cVar4 = FUN_1435bf1ab();
                    if (cVar4 == '\0') {
                      return;
                    }
                  }
                }
                lVar8 = lVar8 + 1;
              } while (lVar8 < *(int *)(lVar2 + 0x40));
              iVar6 = *(int *)(lVar1 + 0x48);
            }
            lVar9 = lVar9 + 1;
          } while (lVar9 < iVar6);
          iVar5 = *(int *)(param_1 + 0x68);
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar5);
  }
  FUN_1435bf1ab();
  return;
}



// FUNCTION 1435bf1ab FUN_1435bf1ab body=143 status=ok
// SIG undefined FUN_1435bf1ab(void)

undefined1 FUN_1435bf1ab(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3b64) {
    FUN_144b3d300(&DAT_14caf3b64);
    if (DAT_14caf3b64 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14caf3b60 = FUN_14054d46e(&DAT_14c846b20,L"LogThreadedParticleTicking");
      _Init_thread_footer(&DAT_14caf3b64);
    }
  }
  return DAT_14caf3b60;
}



// FUNCTION 1435bf23a FUN_1435bf23a body=49 status=ok
// SIG undefined FUN_1435bf23a(void)

void FUN_1435bf23a(void)

{
  FUN_144760e21(DAT_14caf3630,DAT_14caf3638);
  if (DAT_14caf3630 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435bf26c FUN_1435bf26c body=526 status=ok
// SIG undefined FUN_1435bf26c(void)

void FUN_1435bf26c(longlong *param_1,byte param_2,char param_3,char param_4)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1,0);
  }
  bVar6 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if (param_2 == 0) {
    if ((param_3 != '\0') && (lVar5 = param_1[0x11d], 0 < (longlong)(int)lVar5)) {
      lVar3 = param_1[0x11c];
      lVar9 = 0;
      iVar8 = 0;
      do {
        plVar4 = *(longlong **)(lVar3 + lVar9);
        if (((plVar4 != (longlong *)0x0) && (plVar4[3] != 0)) &&
           ((*(byte *)(plVar4[3] + 0x2c) & 1) != 0)) {
          bVar7 = *(byte *)(plVar4[1] + 0x35);
          bVar1 = *(byte *)(*(longlong *)(plVar4[1] + 0x20) + 0xf3);
          if (bVar1 < bVar7) {
            bVar7 = bVar1;
          }
          if (bVar7 < *(byte *)((longlong)param_1 + 0x69e)) {
            *(byte *)(plVar4 + 0x2c) = *(byte *)(plVar4 + 0x2c) & 0xfe;
            (**(code **)(*plVar4 + 0xf8))(plVar4,1);
            *(byte *)((longlong)plVar4 + 0x161) = *(byte *)((longlong)plVar4 + 0x161) | 4;
          }
          else {
            iVar8 = iVar8 + 1;
          }
        }
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar9);
      *(int *)(param_1 + 0x12e) = iVar8;
    }
    cVar2 = *(char *)(param_1[0xcd] + 0xf0);
    if (cVar2 == '\0') {
      if ((*(byte *)(param_1[0xcd] + 0xf2) & 1) != 0) goto LAB_1435bf418;
    }
    else if (cVar2 != '\x01') {
      if (cVar2 == '\x03') {
        FUN_147c00dae(param_1);
      }
      goto LAB_1435bf418;
    }
    FUN_1435bf47a(param_1);
  }
  else if ((param_3 != '\0') && (lVar5 = param_1[0x11d], 0 < (longlong)(int)lVar5)) {
    lVar3 = param_1[0x11c];
    lVar9 = 0;
    iVar8 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar9);
      if (plVar4 == (longlong *)0x0) {
LAB_1435bf328:
        iVar8 = iVar8 + 1;
      }
      else {
        bVar7 = *(byte *)(plVar4[1] + 0x35);
        bVar1 = *(byte *)(*(longlong *)(plVar4[1] + 0x20) + 0xf3);
        if (bVar1 < bVar7) {
          bVar7 = bVar1;
        }
        if (*(byte *)((longlong)param_1 + 0x69e) <= bVar7) {
          *(byte *)(plVar4 + 0x2c) = *(byte *)(plVar4 + 0x2c) | 1;
          (**(code **)(*plVar4 + 0xf8))(plVar4,0);
          *(byte *)((longlong)plVar4 + 0x161) = *(byte *)((longlong)plVar4 + 0x161) & 0xfb;
          goto LAB_1435bf328;
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar9);
    *(int *)(param_1 + 0x12e) = iVar8;
  }
LAB_1435bf418:
  if ((*(byte *)(param_1 + 0xd2) >> 4 & 1 | param_2) == bVar6) {
    return;
  }
  if (param_4 != '\0') {
    FUN_14342d162(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435bf477. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1);
  return;
}



// FUNCTION 1435bf47a FUN_1435bf47a body=228 status=ok
// SIG undefined FUN_1435bf47a(void)

void FUN_1435bf47a(longlong *param_1)

{
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1[0x16] == 0) {
    FUN_1448abda6(param_1);
  }
  local_20 = param_1;
  FUN_1447cd2ec(param_1 + 0x107);
  FUN_1435bf592(param_1,0);
  FUN_1402a37f2(param_1,0);
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  if (*(char *)((longlong)param_1 + 0x69c) == '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x69c) = 2;
  }
  else if (*(char *)((longlong)param_1 + 0x69c) != '\x01') {
    if ((*(byte *)((longlong)param_1 + 0x693) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
    if ((*(byte *)((longlong)param_1 + 0x691) & 0x20) == 0) {
      if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1435bf592 FUN_1435bf592 body=394 status=ok
// SIG undefined FUN_1435bf592(void)

void FUN_1435bf592(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (lVar5 == 0) {
    lVar5 = FUN_1448abda6(param_1);
  }
  if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
    FUN_147c0d426(param_1,0);
  }
  if (lVar5 == 0) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
    if (*(byte *)(lVar5 + 0x152) < 7) {
      bVar6 = 0x15 >> (*(byte *)(lVar5 + 0x152) & 0x1f);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x8e0);
  FUN_1402a37f2(param_1,0);
  iVar4 = *(int *)(param_1 + 0x8e8);
  if (((bVar6 & 1) == 0) && (param_2 == '\0')) {
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(*plVar1 + lVar5 * 8);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x58))();
          iVar4 = *(int *)(param_1 + 0x8e8);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
    }
  }
  else {
    if (0 < iVar4) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(*plVar1 + lVar5 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
          *(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + lVar5 * 8) = 0;
          iVar4 = *(int *)(param_1 + 0x8e8);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < iVar4);
    }
    *(undefined4 *)(param_1 + 0x8e8) = 0;
    if (*(int *)(param_1 + 0x8ec) != 0) {
      FUN_147c0d93a(plVar1);
    }
    FUN_147c01524(param_1);
  }
  if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
    bVar6 = *(byte *)(param_1 + 0x9d);
    if ((bVar6 & 1) == 0) {
LAB_1435bf6f5:
      *(byte *)(param_1 + 0x9d) = bVar6 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      return;
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      lVar5 = FUN_1448abda6(param_1);
      if (lVar5 == 0) {
        bVar6 = *(byte *)(param_1 + 0x9d);
        goto LAB_1435bf6f5;
      }
    }
  }
  return;
}



// FUNCTION 1435bf71c FUN_1435bf71c body=348 status=ok
// SIG undefined FUN_1435bf71c(void)

void FUN_1435bf71c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) || (param_1[0x106] == 0)) {
    if ((DAT_14c872bf0 == '\0') && (param_1[0x16] == 0)) {
      FUN_1448abda6(param_1);
      return;
    }
  }
  else if (((int)(uint)*(byte *)((longlong)param_1 + 0x1fc) <= DAT_14cb0cbf8) &&
          (plVar2 = param_1, DAT_14c7616a0 != '\0')) {
    for (; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[4]) {
      if ((*(uint *)(plVar2 + 1) & 0x30) != 0) {
        return;
      }
    }
    lVar1 = param_1[0xcd];
    if ((lVar1 != 0) &&
       (*(undefined4 *)((longlong)param_1 + 0x77c) = *(undefined4 *)(lVar1 + 0xe4),
       (*(byte *)(lVar1 + 0xed) & 1) != 0)) {
      uVar3 = *(int *)((longlong)param_1 + 0x8f4) * 0xbb38435 + 0x3619636b;
      *(uint *)((longlong)param_1 + 0x8f4) = uVar3;
      *(float *)((longlong)param_1 + 0x77c) =
           (*(float *)(lVar1 + 0xe4) - *(float *)(lVar1 + 0xe8)) *
           ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) + *(float *)(lVar1 + 0xe8);
    }
    (**(code **)(*param_1 + 0xbb0))(param_1);
    if ((((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) &&
        (*(undefined4 *)(param_1 + 0xe8) = 0, (*(byte *)((longlong)param_1 + 0x9e) & 0x18) == 8)) &&
       ((*(byte *)(param_1 + 0xd2) & 0x10) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001435bf84f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2b8))(param_1,1,0);
      return;
    }
  }
  return;
}



// FUNCTION 1435bf878 FUN_1435bf878 body=98 status=ok
// SIG undefined FUN_1435bf878(void)

void FUN_1435bf878(longlong param_1)

{
  byte bVar1;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    bVar1 = *(byte *)(param_1 + 0x692);
    *(byte *)(param_1 + 0x692) = bVar1 | 0x10;
    FUN_1435c0142(param_1,1);
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0xef | bVar1 & 0x10;
  }
  FUN_1400f7f2e(param_1);
  FUN_147c0d426(param_1,0);
  FUN_1435bf592(param_1,1);
  return;
}



// FUNCTION 1435bf8da FUN_1435bf8da body=972 status=ok
// SIG undefined FUN_1435bf8da(void)

undefined4
FUN_1435bf8da(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5,double *param_6,char **param_7)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  char **local_f8;
  char **local_f0;
  undefined4 *local_e8;
  char **local_e0;
  undefined4 local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  char *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*param_6 == 0.0) && (!NAN(*param_6))) {
    if ((param_6[1] == 0.0) && (!NAN(param_6[1]))) {
      if ((param_6[2] == 0.0) && (!NAN(param_6[2]))) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14caf3b70) {
          FUN_144b3d300();
          if (DAT_14caf3b70 == -1) {
            local_c0 = "ParticleCollision";
            local_b8 = CONCAT35(local_b8._5_3_,0x11);
            uVar2 = FUN_14001a6c0(&local_c0,1);
            DAT_14caf3b68 = (char *)(ulonglong)uVar2;
            _Init_thread_footer();
          }
        }
        local_9c = 0;
        local_b8 = 0;
        local_98 = 0x101;
        local_70 = 0;
        local_68 = 0x800000000;
        local_50 = 0;
        local_48 = 0x400000000;
        local_b0 = 1;
        local_a4 = 0;
        local_c0 = DAT_14caf3b68;
        local_af = 1;
        local_a0 = 0;
        local_ac = 0;
        uStack_aa = 0;
        if (param_3 != 0) {
          local_60 = *(undefined4 *)(param_3 + 0xc);
          local_48 = 0x400000001;
          local_b8 = *(undefined8 *)(param_3 + 0x18);
        }
        uStack_a9 = 1;
        uStack_a8 = 1;
        local_ad = 1;
        lVar3 = *(longlong *)(param_1 + 0xb0);
        if (lVar3 == 0) {
          lVar3 = FUN_1448abda6(param_1);
        }
        local_f0 = &local_c0;
        local_f8 = param_7;
        uVar1 = FUN_140526294(lVar3,param_2,param_5,param_4);
        goto LAB_1435bfa4e;
      }
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf3b80) {
    FUN_144b3d300();
    if (DAT_14caf3b80 == -1) {
      local_c0 = "ParticleCollision";
      local_b8 = CONCAT35(local_b8._5_3_,0x11);
      uVar2 = FUN_14001a6c0(&local_c0,1);
      DAT_14caf3b78 = (char *)(ulonglong)uVar2;
      _Init_thread_footer();
    }
  }
  local_9c = 0;
  local_b8 = 0;
  local_98 = 0x101;
  local_70 = 0;
  local_68 = 0x800000000;
  local_50 = 0;
  local_48 = 0x400000000;
  local_b0 = 0;
  local_a4 = 0;
  local_c0 = DAT_14caf3b78;
  local_af = 1;
  local_a0 = 0;
  local_ac = 0;
  uStack_aa = 0;
  uStack_a9 = 1;
  uStack_a8 = 1;
  if (param_3 != 0) {
    local_60 = *(undefined4 *)(param_3 + 0xc);
    local_48 = 0x400000001;
  }
  local_ad = 1;
  lVar3 = *(longlong *)(param_1 + 0xb0);
  if (lVar3 == 0) {
    lVar3 = FUN_1448abda6(param_1);
  }
  local_c4 = (float)param_6[2];
  local_c8 = (float)param_6[1];
  local_cc = (float)*param_6;
  local_e8 = &local_d0;
  local_d0 = 1;
  local_e0 = &local_c0;
  local_f0 = param_7;
  local_f8 = (char **)&DAT_14c8463d0;
  uVar1 = FUN_1479b44ee(lVar3,param_2,param_5,param_4);
LAB_1435bfa4e:
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435bfca8 FUN_1435bfca8 body=1028 status=ok
// SIG undefined FUN_1435bfca8(void)

void FUN_1435bfca8(longlong *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  byte local_79;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  byte *local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_79 = *(byte *)((longlong)param_1 + 0x692) >> 1 & 1;
  local_48 = &local_79;
  *(byte *)((longlong)param_1 + 0x692) = *(byte *)((longlong)param_1 + 0x692) | 2;
  local_78 = FUN_1435cdc36;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14aa003d0;
  local_50 = param_1;
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1,CONCAT71((int7)((ulonglong)local_48 >> 8),1));
  }
  lVar7 = param_1[0x16];
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6(param_1);
  }
  if ((*(longlong **)(lVar7 + 0x218) != (longlong *)0x0) &&
     (puVar8 = (undefined8 *)(**(code **)(**(longlong **)(lVar7 + 0x218) + 0x420))(),
     puVar8 != (undefined8 *)0x0)) {
    lVar9 = (**(code **)*puVar8)(puVar8,&DAT_14caf3c90);
    param_1[0x106] = lVar9;
  }
  iVar6 = DAT_14c9647dc;
  if (((*(byte *)((longlong)param_1 + 0x691) & 0x20) != 0) &&
     ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) {
    if (param_1[0x24] != 0) {
      puVar1 = (uint *)(param_1 + 0xfa);
      if ((((*(int *)((longlong)param_1 + 0x7d4) == 0) || (uVar3 = *puVar1, (int)uVar3 < 0)) ||
          (DAT_14c9647dc <= (int)uVar3)) ||
         (((lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar9 == 0 ||
           (*(int *)(lVar9 + 0x10) != *(int *)((longlong)param_1 + 0x7d4))) ||
          ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) {
        uVar3 = *(uint *)(param_1[0x24] + 0xc);
        *puVar1 = uVar3;
        if ((int)uVar3 < iVar6) {
          lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar6 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar14 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar14) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar6 = *(int *)(lVar9 + 0x10);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            *(int *)(lVar9 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar14) {
            iVar6 = iVar12;
          }
        }
        *(int *)((longlong)param_1 + 0x7d4) = iVar6;
      }
      lVar9 = param_1[0xfb];
      if (lVar9 == 0) {
        lVar9 = param_1[0x25];
        param_1[0xfb] = lVar9;
      }
      bVar2 = *(byte *)(lVar7 + 0x152);
      if ((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) {
        lVar7 = (longlong)*(int *)(param_1[0x24] + 0x140);
        if (lVar7 != 0) {
          lVar13 = 0;
          do {
            if (*(longlong **)(*(longlong *)(param_1[0x24] + 0x138) + lVar13) == param_1) {
              if ((((*(byte *)((longlong)param_1 + 0x9e) & 8) == 0) ||
                  ((((char)param_1[0xfc] != '\0' && (*(char *)((longlong)param_1 + 0x7e1) != '\0'))
                   && (*(char *)((longlong)param_1 + 0x7e2) != '\0')))) ||
                 ((lVar9 != param_1[0x25] || (cVar5 = FUN_1403e9e5e(puVar1), cVar5 == '\0')))) {
                local_80 = 0;
                (**(code **)(*param_1 + 0x4a0))(param_1);
              }
              goto LAB_1435bfed8;
            }
            lVar13 = lVar13 + 8;
          } while (lVar7 * 8 != lVar13);
        }
        FUN_140486fc4(param_1,0,0);
      }
    }
LAB_1435bfed8:
    param_1[0xff] = param_1[0x35];
    param_1[0xfd] = param_1[0x33];
    param_1[0xfe] = param_1[0x34];
    param_1[0x100] = param_1[0x36];
    param_1[0x101] = param_1[0x37];
    param_1[0x102] = param_1[0x38];
    *(int *)(param_1 + 0x103) = (int)param_1[0x39];
    *(undefined4 *)((longlong)param_1 + 0x81c) = *(undefined4 *)((longlong)param_1 + 0x1cc);
    *(int *)(param_1 + 0x104) = (int)param_1[0x3a];
    *(undefined4 *)((longlong)param_1 + 0x824) = *(undefined4 *)((longlong)param_1 + 0x1d4);
    param_1[0x105] = param_1[0x3b];
  }
  if (((DAT_14c7616f8 != 0) && (param_1[0xcd] != 0)) &&
     (((*(byte *)(param_1[0xcd] + 0xed) & 2) != 0 &&
      (((int)param_1[0xb] < 2 && ((int)param_1[0x28] == 0)))))) {
    *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfb;
  }
  FUN_1448aa298(param_1);
  if (((*(byte *)(param_1 + 0xd2) & 0x20) != 0) &&
     ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0)) {
    (**(code **)(*param_1 + 0x2a8))(param_1,1);
  }
  if ((int)param_1[0xe6] == -1) {
    *(undefined4 *)(param_1 + 0xe6) = 0;
  }
  if ((((param_1[0x22] == 0) && (param_1[0x15] == 0)) && (param_1[0x24] != 0)) &&
     ((*(uint *)(param_1[0x24] + 8) >> 0x1e & 1) == 0)) {
    lVar7 = FUN_14494250a();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x2e8);
    }
    param_1[0x22] = lVar7;
  }
  pcVar4 = local_78;
  pppuVar11 = local_68;
  if (local_68 == (undefined ***)0x0) {
    pppuVar11 = &local_58;
  }
  uVar10 = (*(code *)(*pppuVar11)[1])();
  (*pcVar4)(uVar10);
  if (local_78 != (code *)0x0) {
    pppuVar11 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar11 = local_68;
    }
    (*(code *)(*pppuVar11)[2])(pppuVar11);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435c00ae FUN_1435c00ae body=148 status=ok
// SIG undefined FUN_1435c00ae(void)

void FUN_1435c00ae(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1,1);
  }
  *(byte *)(param_1 + 0xd2) =
       *(byte *)(param_1 + 0xd2) & 0xdf |
       (~*(byte *)(param_1 + 0xd2) & *(byte *)((longlong)param_1 + 0x9e)) * '\x02' & 0x20;
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  bVar2 = 1;
  if ((*(byte *)((longlong)param_1 + 0x691) & 0x10) != 0) {
    lVar1 = param_1[0x16];
    if (lVar1 == 0) {
      lVar1 = FUN_1448abda6(param_1,1);
    }
    bVar2 = (*(byte *)(lVar1 + 0x155) & 0x20) >> 5;
  }
  FUN_1435bf592(param_1,bVar2);
  param_1[0x106] = 0;
  FUN_1447c0e7a(param_1);
  return;
}



// FUNCTION 1435c0142 FUN_1435c0142 body=556 status=ok
// SIG undefined FUN_1435c0142(void)

void FUN_1435c0142(longlong param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  LARGE_INTEGER LVar7;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0x960) == 0) ||
     ((*(byte *)(*(longlong *)(param_1 + 0x960) + 0xa0) & 1) != 0)) goto LAB_1435c032e;
  if (param_2 == '\0') {
    if ((DAT_14c86a9f8 == '\x01') &&
       (iVar2 = *(int *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
       , iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_1435c0365;
      }
    }
    else {
LAB_1435c0365:
      FUN_1435c17c6();
    }
    QueryPerformanceCounter(&local_38);
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if ((((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) || (DAT_14caf6068 < 1)) ||
       (((DAT_14c7616fc & 1) == 0 || (lVar6 = FUN_14005c7aa(lVar6), lVar6 == 0)))) {
      bVar3 = true;
      LVar7.QuadPart = -1;
      lVar6 = 0;
    }
    else {
      QueryPerformanceCounter(&local_38);
      bVar3 = false;
      LVar7 = local_38;
    }
    bVar1 = *(byte *)(param_1 + 0x694);
    while ((bVar1 & 1) != 0) {
      SwitchToThread();
      bVar1 = *(byte *)(param_1 + 0x694);
    }
  }
  else {
    FUN_1435c17c6();
    QueryPerformanceCounter(&local_38);
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if (((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) ||
       ((DAT_14caf6068 < 1 ||
        (((DAT_14c7616fc & 1) == 0 || (lVar6 = FUN_14005c7aa(lVar6), lVar6 == 0)))))) {
      bVar3 = true;
      LVar7.QuadPart = -1;
      lVar6 = 0;
    }
    else {
      QueryPerformanceCounter(&local_38);
      bVar3 = false;
      LVar7 = local_38;
    }
    bVar1 = *(byte *)(param_1 + 0x694);
    while ((bVar1 & 1) != 0) {
      SwitchToThread();
      bVar1 = *(byte *)(param_1 + 0x694);
    }
  }
  if ((LVar7.QuadPart != -1) && (QueryPerformanceCounter(&local_38), !bVar3)) {
    *(longlong *)(lVar6 + 0x30) =
         *(longlong *)(lVar6 + 0x30) + (local_38.QuadPart - (longlong)LVar7);
  }
  QueryPerformanceCounter(&local_38);
  FUN_1435c3904(param_1);
LAB_1435c032e:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c0370 FUN_1435c0370 body=189 status=ok
// SIG undefined FUN_1435c0370(void)

void FUN_1435c0370(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    bVar1 = *(byte *)(param_1 + 0x692);
    *(byte *)(param_1 + 0x692) = bVar1 | 0x10;
    FUN_1435c0142(param_1,0);
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0xef | bVar1 & 0x10;
  }
  if (DAT_14c7616a0 == '\0') {
    *(undefined8 *)(param_1 + 0x668) = 0;
  }
  else if ((*(longlong *)(param_1 + 0x668) != 0) &&
          ((*(byte *)(*(longlong *)(param_1 + 0x668) + 0xec) & 8) != 0)) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    lVar2 = *(longlong *)(param_1 + 0xa8);
    if (lVar2 != 0) {
      lVar3 = FUN_14143eef4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        *(undefined1 *)(lVar2 + 0x38) = 0;
      }
    }
  }
  FUN_1448f1f76(param_1,param_2);
  *(byte *)(param_1 + 0x691) = *(byte *)(param_1 + 0x691) | 4;
  return;
}



// FUNCTION 1435c042e FUN_1435c042e body=110 status=ok
// SIG undefined FUN_1435c042e(void)

void FUN_1435c042e(longlong param_1)

{
  byte bVar1;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    bVar1 = *(byte *)(param_1 + 0x692);
    *(byte *)(param_1 + 0x692) = bVar1 | 0x10;
    FUN_1435c0142(param_1,0);
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0xef | bVar1 & 0x10;
  }
  if (((*(byte *)(param_1 + 0x9e) & 0x10) != 0) && ((*(byte *)(param_1 + 0x692) & 0x10) == 0)) {
    FUN_14472bd78(param_1);
    return;
  }
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xfd;
  return;
}



// FUNCTION 1435c049c FUN_1435c049c body=331 status=ok
// SIG undefined FUN_1435c049c(void)

void FUN_1435c049c(longlong *param_1)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  LARGE_INTEGER LVar4;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = param_1[0x16];
  if ((((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 || (lVar3 = FUN_14005c7aa(lVar3), lVar3 == 0)))) {
    bVar2 = true;
    LVar4.QuadPart = -1;
    lVar3 = 0;
  }
  else {
    QueryPerformanceCounter(&local_38);
    bVar2 = false;
    LVar4 = local_38;
  }
  if (param_1[300] != 0) {
    bVar1 = *(byte *)((longlong)param_1 + 0x692);
    *(byte *)((longlong)param_1 + 0x692) = bVar1 | 0x10;
    FUN_1435c0142(param_1,0);
    *(byte *)((longlong)param_1 + 0x692) =
         *(byte *)((longlong)param_1 + 0x692) & 0xef | bVar1 & 0x10;
  }
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) & 0xfb;
  *(byte *)((longlong)param_1 + 0x693) = *(byte *)((longlong)param_1 + 0x693) | 0x10;
  if (param_1[0xb5] != 0) {
    if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
      if ((*(byte *)(param_1 + 0xd2) & 0x11) != 0) {
        FUN_1435f95a2(param_1[0xb5],0);
      }
    }
    else {
      (**(code **)(*param_1 + 0xba8))(param_1);
    }
  }
  *(byte *)((longlong)param_1 + 0x693) = *(byte *)((longlong)param_1 + 0x693) & 0xef;
  if ((LVar4.QuadPart != -1) && (QueryPerformanceCounter(&local_38), !bVar2)) {
    LOCK();
    *(longlong *)(lVar3 + 0x20) =
         *(longlong *)(lVar3 + 0x20) + (local_38.QuadPart - (longlong)LVar4);
    UNLOCK();
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435c05e8 FUN_1435c05e8 body=325 status=ok
// SIG undefined FUN_1435c05e8(void)

void FUN_1435c05e8(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  longlong *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x960) != 0) {
    bVar1 = *(byte *)(param_1 + 0x692);
    *(byte *)(param_1 + 0x692) = bVar1 | 0x10;
    FUN_1435c0142(param_1,0);
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0xef | bVar1 & 0x10;
  }
  if ((*(byte *)(param_1 + 0x691) & 1) != 0) {
    FUN_1435bf592(param_1,0);
  }
  if ((*(byte *)(param_1 + 0x9c) & 2) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xb0);
    if (((lVar4 != 0) || (lVar4 = FUN_1448abda6(param_1), lVar4 != 0)) &&
       (plVar2 = *(longlong **)(lVar4 + 0x218), plVar2 != (longlong *)0x0)) {
      pcVar3 = *(code **)(*plVar2 + 0x18);
      if (pcVar3 == FUN_1447fa51c) {
        local_30 = param_1;
        if ((*(byte *)(param_1 + 0x2d3) & 2) == 0) {
          local_40 = &local_30;
          local_38 = 1;
          pcVar3 = *(code **)(*plVar2 + 0x48);
          if (pcVar3 == FUN_14177bd6a) {
            local_20 = 1;
            local_1c = local_34;
            local_28 = local_40;
            FUN_1400e4416();
          }
          else {
            (*pcVar3)(plVar2,&local_40);
          }
        }
      }
      else {
        (*pcVar3)(plVar2,param_1);
      }
    }
    *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfd;
    *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) & 0xf0;
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435c072e FUN_1435c072e body=3759 status=ok
// SIG undefined FUN_1435c072e(void)

longlong FUN_1435c072e(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  double dVar4;
  byte bVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  uint uVar17;
  DWORD DVar18;
  DWORD DVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong *plVar23;
  undefined4 *puVar24;
  uint *puVar25;
  longlong lVar26;
  undefined ***pppuVar27;
  longlong lVar28;
  uint *puVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong *plVar32;
  int iVar33;
  longlong *plVar34;
  undefined8 *puVar35;
  int iVar36;
  longlong *plVar37;
  longlong lVar38;
  longlong lVar39;
  bool bVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auStack_138 [32];
  code **local_118;
  undefined4 local_110;
  undefined4 local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  code *local_d8 [2];
  undefined ***local_c8;
  undefined **local_b8;
  longlong local_b0;
  uint local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  bVar5 = *(byte *)(param_1 + 0x691);
  local_ec = param_2;
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_1448abda6(param_1);
  }
  local_118 = (code **)CONCAT71(local_118._1_7_,bVar5 >> 7);
  iVar33 = 0;
  FUN_147af13d2(local_e8);
  if (0 < (longlong)*(int *)(param_1 + 0x8e8)) {
    lVar28 = 0;
    do {
      lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x8e0) + lVar28 * 8);
      if (lVar20 != 0) {
        iVar33 = iVar33 + (uint)(0 < *(int *)(lVar20 + 0x18c));
      }
      lVar28 = lVar28 + 1;
    } while (*(int *)(param_1 + 0x8e8) != lVar28);
    if ((((*(byte *)(param_1 + 0x692) & 0x40) == 0) && (iVar33 == 0)) &&
       (*(char *)(param_1 + 0x69f) == '\0')) {
      lVar28 = 0;
      goto LAB_1435c1500;
    }
  }
  lVar28 = FUN_14001cc68(0xa0,0);
  *(undefined8 *)(lVar28 + 0x68) = 0;
  *(undefined8 *)(lVar28 + 0x70) = 0xc00000000;
  *(undefined8 *)(lVar28 + 0x98) = 0;
  lVar20 = *(longlong *)(param_1 + 0x668);
  if (lVar20 != 0) {
    dVar41 = *(double *)(lVar20 + 0x100) * *(double *)(param_1 + 0x280);
    dVar42 = *(double *)(lVar20 + 0x108) * *(double *)(param_1 + 0x288);
    dVar6 = *(double *)(lVar20 + 0x110) * *(double *)(param_1 + 0x290);
    dVar9 = *(double *)(param_1 + 0x240);
    dVar10 = *(double *)(param_1 + 0x248);
    dVar11 = *(double *)(param_1 + 0x250);
    dVar4 = *(double *)(param_1 + 600);
    dVar43 = dVar42 * dVar9 - dVar41 * dVar10;
    dVar44 = dVar6 * dVar10 - dVar42 * dVar11;
    dVar45 = dVar41 * dVar11 - dVar9 * dVar6;
    dVar44 = dVar44 + dVar44;
    dVar45 = dVar45 + dVar45;
    dVar43 = dVar43 + dVar43;
    dVar8 = (dVar11 * dVar44 - dVar9 * dVar43) + *(double *)(param_1 + 600) * dVar45 + dVar42 +
            *(double *)(param_1 + 0x268);
    dVar42 = *(double *)(param_1 + 0x270);
    auVar7._8_4_ = SUB84(dVar8,0);
    auVar7._0_8_ = (dVar43 * dVar10 - dVar45 * dVar11) + dVar4 * dVar44 + dVar41 +
                   *(double *)(param_1 + 0x260);
    auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    *(undefined1 (*) [16])(lVar28 + 0x78) = auVar7;
    *(double *)(lVar28 + 0x88) =
         dVar43 * dVar4 + dVar6 + (dVar45 * dVar9 - dVar44 * dVar10) + dVar42;
    *(undefined4 *)(lVar28 + 0x90) = *(undefined4 *)(lVar20 + 0x84);
  }
  lVar20 = *(longlong *)(param_1 + 0xb0);
  if (((lVar20 == 0) && (lVar20 = FUN_1448abda6(param_1), lVar20 == 0)) ||
     ((DAT_14caf6068 < 1 || ((DAT_14c7616fc & 1) == 0)))) {
    uVar21 = 0;
  }
  else {
    uVar21 = FUN_14005c7aa(lVar20);
  }
  *(undefined8 *)(lVar28 + 0x98) = uVar21;
  if (*(char *)(param_1 + 0x69f) == '\x01') {
    if (*(longlong *)(param_1 + 0x960) != 0) {
      FUN_1435c0142(param_1,1);
    }
    if (0 < (longlong)*(int *)(param_1 + 0x768)) {
      lVar20 = 0;
      do {
        lVar39 = *(longlong *)(*(longlong *)(param_1 + 0x760) + lVar20 * 8);
        if ((lVar39 != 0) && (*(int *)(lVar39 + 0x28) == *(int *)(param_1 + 0x770)))
        goto LAB_1435c0ab4;
        lVar20 = lVar20 + 1;
      } while (*(int *)(param_1 + 0x768) != lVar20);
    }
    lVar39 = FUN_147c01309(param_1);
    *(undefined4 *)(lVar39 + 0x28) = *(undefined4 *)(param_1 + 0x770);
    if ((lVar39 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar39);
    }
    iVar33 = *(int *)(param_1 + 0x768);
    *(uint *)(param_1 + 0x768) = iVar33 + 1U;
    if (*(uint *)(param_1 + 0x76c) < iVar33 + 1U) {
      FUN_147c0d55c((longlong *)(param_1 + 0x760),iVar33);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x760) + (longlong)iVar33 * 8) = lVar39;
    if ((lVar39 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar39);
    }
    FUN_14282b7b8(param_1);
LAB_1435c0ab4:
    plVar32 = (longlong *)(lVar39 + 0x30);
    iVar33 = *(int *)(lVar39 + 0x38);
    *(uint *)(lVar39 + 0x38) = iVar33 + 1U;
    if (*(uint *)(lVar39 + 0x3c) < iVar33 + 1U) {
      FUN_147c0d5e2(plVar32,iVar33);
    }
    puVar2 = (undefined8 *)(*plVar32 + (longlong)iVar33 * 0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    plVar32 = (longlong *)((longlong)iVar33 * 0x10 + *plVar32);
    FUN_14282b7b8(param_1);
  }
  else {
    if (*(char *)(param_1 + 0x69f) == '\x02') {
      if (0 < (longlong)*(int *)(param_1 + 0x768)) {
        lVar20 = 0;
        do {
          lVar39 = *(longlong *)(*(longlong *)(param_1 + 0x760) + lVar20 * 8);
          if ((lVar39 != 0) && (*(int *)(lVar39 + 0x28) == *(int *)(param_1 + 0x770))) {
            iVar33 = *(int *)(param_1 + 0x774);
            if ((-1 < (longlong)iVar33) && (iVar33 < *(int *)(lVar39 + 0x38))) {
              plVar32 = (longlong *)((longlong)iVar33 * 0x10 + *(longlong *)(lVar39 + 0x30));
              local_f8 = lVar28 + 8;
              *(undefined4 *)(lVar28 + 0x70) = 0;
              if (*(int *)(lVar28 + 0x74) < 0) {
                FUN_147c0bca4(local_f8,0);
              }
              iVar33 = (int)plVar32[1];
              if (iVar33 < 0) goto LAB_1435c1598;
              if (*(int *)(lVar28 + 0x74) < iVar33) {
                FUN_147c0bca4(local_f8);
                iVar33 = (int)plVar32[1];
              }
              if (0 < iVar33) {
                lVar39 = 8;
                lVar20 = 0;
                local_100 = lVar28;
                goto LAB_1435c0d84;
              }
            }
            break;
          }
          lVar20 = lVar20 + 1;
        } while (*(int *)(param_1 + 0x768) != lVar20);
      }
      goto LAB_1435c1500;
    }
    plVar32 = (longlong *)0x0;
  }
  if ((*(byte *)(param_1 + 0x692) & 0x20) != 0) goto LAB_1435c1500;
  local_f8 = lVar28 + 8;
  *(undefined4 *)(lVar28 + 0x70) = 0;
  if (*(int *)(lVar28 + 0x74) < 0) {
    FUN_147c0bca4(local_f8,0);
  }
  iVar33 = *(int *)(param_1 + 0x8e8);
  if (iVar33 < 0) {
LAB_1435c1598:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar33);
  }
  local_100 = lVar28;
  if (*(int *)(lVar28 + 0x74) < iVar33) {
    FUN_147c0bca4(local_f8);
    iVar33 = *(int *)(param_1 + 0x8e8);
  }
  lVar28 = local_100;
  uVar31 = 0;
  if (0 < iVar33) {
    lVar20 = 0;
    uVar31 = 0;
    do {
      uVar31 = (uVar31 + 1) - (uint)(*(longlong *)(param_1 + 0x5a8) == 0);
      plVar34 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar20 * 8);
      if ((plVar34 != (longlong *)0x0) &&
         (lVar39 = (**(code **)(*plVar34 + 0x120))(plVar34,0,local_ec), lVar39 != 0)) {
        *(byte *)(lVar39 + 0xc) = *(byte *)(lVar39 + 0xc) | 2;
        iVar33 = *(int *)(lVar28 + 0x70);
        uVar17 = iVar33 + 1;
        *(uint *)(lVar28 + 0x70) = uVar17;
        if (*(uint *)(lVar28 + 0x74) < uVar17) {
          FUN_147c0d4e6(local_f8);
        }
        lVar22 = *(longlong *)(lVar28 + 0x68);
        if (*(longlong *)(lVar28 + 0x68) == 0) {
          lVar22 = local_f8;
        }
        *(longlong *)(lVar22 + (longlong)iVar33 * 8) = lVar39;
        *(int *)(lVar39 + 0x10) = (int)lVar20;
        if (*(char *)(param_1 + 0x69f) == '\x01') {
          lVar22 = (**(code **)(*plVar34 + 0x128))(plVar34);
          lVar39 = plVar32[1];
          uVar17 = (int)lVar39 + 1;
          *(uint *)(plVar32 + 1) = uVar17;
          if (*(uint *)((longlong)plVar32 + 0xc) < uVar17) {
            FUN_147c0d668(plVar32);
          }
          lVar26 = *plVar32;
          lVar38 = (longlong)(int)lVar39 * 0x10;
          *(undefined8 *)(lVar26 + lVar38) = 0;
          ((undefined8 *)(lVar26 + lVar38))[1] = 0;
          lVar39 = *plVar32;
          *(undefined4 *)(lVar39 + lVar38) = *(undefined4 *)(lVar22 + 8);
          *(int *)(lVar39 + 4 + lVar38) = (int)lVar20;
          *(longlong *)(lVar39 + 8 + lVar38) = lVar22;
        }
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(param_1 + 0x8e8));
  }
  lVar20 = *(longlong *)(param_1 + 0x5a8);
  lVar28 = local_100;
  if ((lVar20 == 0) || (*(uint *)(lVar20 + 0x2a0) == uVar31)) goto LAB_1435c1500;
  lVar39 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar33 = *(int *)(lVar39 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar33 != 2) {
      if (iVar33 == 1) {
        DVar18 = FUN_140ad26c0();
        DVar19 = GetCurrentThreadId();
        bVar40 = DVar18 == DVar19;
      }
      else {
        bVar40 = iVar33 == 0x10;
      }
      lVar28 = local_100;
      if (!bVar40) goto LAB_1435c1143;
    }
  }
  else if (iVar33 != 0x10) {
LAB_1435c1143:
    lVar28 = local_100;
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar33 = *(int *)(lVar39 + 0xc60), iVar33 == 2))
      goto LAB_1435c0c9d;
      if (iVar33 == 1) {
        DVar18 = FUN_140ad26c0();
        DVar19 = GetCurrentThreadId();
        if (DVar18 == DVar19) goto LAB_1435c0c9d;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar25 = (uint *)*puVar2;
      if (puVar25 != (uint *)0x0) goto LAB_1435c1221;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_1435c8f10);
        }
        lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar24 = *(undefined4 **)(lVar28 + 0x310);
        *(undefined8 *)(lVar28 + 0x310) = 0;
        if (puVar24 == (undefined4 *)0x0) {
          puVar24 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar24 = 0xffffffff;
        *(undefined4 **)(puVar24 + 0x10) = puVar24 + 0x16;
        puVar24[0x12] = 0;
        *puVar2 = puVar24;
        FUN_140217a48(puVar2);
        puVar25 = (uint *)*puVar2;
LAB_1435c1221:
        puVar35 = (undefined8 *)(*(longlong *)(puVar25 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar29 = (uint *)(puVar35 + 0x17);
        uVar17 = puVar25[0x12];
        if (puVar29 <= puVar25 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar25 + 0x10) = puVar25 + 0x4000;
          LOCK();
          uVar3 = *puVar25;
          *puVar25 = *puVar25 + uVar17 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar17) != 0xffffffff) break;
          puVar25 = (uint *)*puVar2;
          *puVar25 = 0xffffffff;
          *(uint **)(puVar25 + 0x10) = puVar25 + 0x16;
          puVar25[0x12] = 0;
          *puVar2 = puVar25;
          puVar35 = (undefined8 *)((longlong)puVar25 + 0x5fU & 0xfffffffffffffff8);
          puVar29 = (uint *)(puVar35 + 0x17);
          uVar17 = 0;
          if (puVar29 <= puVar25 + 0x4000) {
            uVar17 = 1;
            goto LAB_1435c12a1;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_1435c12a1:
      *(uint **)(puVar25 + 0x10) = puVar29;
      puVar25[0x12] = uVar17;
      iVar33 = 0;
      FUN_1447247dc(puVar35,0);
      *puVar35 = &PTR_FUN_14aa00450;
      puVar35[0x15] = lVar20;
      *(uint *)(puVar35 + 0x16) = uVar31;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar31 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar31 < 2) {
          uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar31];
          iVar33 = 0;
        }
        else {
          uVar30 = 2;
        }
      }
      else {
        iVar33 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar30 = 5;
      }
      if (*(code **)(puVar35[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar35[0xe] + 0x18))(puVar35 + 0xe,puVar35 + 9);
      }
      lVar28 = local_100;
      puVar35[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar35[9] = puVar35;
      puVar35[10] = puVar35;
      lVar20 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar20 == 0) {
        uVar16 = 1;
        if ((char)uVar30 != '\x06') {
          uVar16 = uVar30;
        }
        uVar30 = uVar16;
        uVar21 = 0;
      }
      else {
        if ((char)uVar30 == '\x06') {
          uVar30 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
        }
        uVar21 = *(undefined8 *)(lVar20 + 0x30);
      }
      puVar35[0xf] = uVar21;
      puVar35[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar35 + 0x1c) = iVar33;
      if (puVar35 == (undefined8 *)0x0) {
        local_d8[0] = (code *)CONCAT71(local_d8[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar35 + 1) = *(int *)(puVar35 + 1) + 1;
        UNLOCK();
        local_d8[0] = (code *)CONCAT71(local_d8[0]._1_7_,1);
        FUN_1447439e4(puVar35);
        LOCK();
        piVar1 = (int *)(puVar35 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar35)(puVar35,1);
        }
      }
    }
    else {
      local_118 = local_d8;
      local_c8 = (undefined ***)0x0;
      local_b8 = &PTR_LAB_14aa003f0;
      local_d8[0] = FUN_1435cdc9c;
      local_b0 = lVar20;
      local_a8 = uVar31;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateMeshEmitterLODIndicesCmd",&DAT_14caf3bc8);
      if (local_d8[0] != (code *)0x0) {
        pppuVar27 = local_c8;
        if (local_c8 == (undefined ***)0x0) {
          pppuVar27 = &local_b8;
        }
        (*(code *)(*pppuVar27)[2])();
      }
    }
    goto LAB_1435c1500;
  }
LAB_1435c0c9d:
  plVar32 = (longlong *)(lVar20 + 0x298);
  iVar33 = *(int *)(lVar20 + 0x2a4);
  iVar36 = 0;
  *(undefined4 *)(lVar20 + 0x2a0) = 0;
  if (iVar33 < 0) {
    FUN_14481578e(plVar32);
    iVar36 = *(int *)(lVar20 + 0x2a0);
    iVar33 = *(int *)(lVar20 + 0x2a4);
  }
  *(uint *)(lVar20 + 0x2a0) = iVar36 + uVar31;
  if ((uint)(iVar33 - iVar36) < uVar31) {
    FUN_1446f48e2(plVar32);
  }
  memset((void *)((longlong)iVar36 * 4 + *plVar32),0,(ulonglong)uVar31 << 2);
LAB_1435c1500:
  FUN_147af14b0(local_e8);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return lVar28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1435c0d84:
  do {
    iVar33 = *(int *)(*plVar32 + -4 + lVar39);
    if (((longlong)iVar33 < 0) || (*(int *)(param_1 + 0x8e8) <= iVar33)) goto LAB_1435c0daa;
    lVar28 = *(longlong *)(*plVar32 + lVar39);
    if (4 < *(int *)(lVar28 + 8) - 1U) goto LAB_1435c0daa;
    lVar22 = *(longlong *)(*(longlong *)(param_1 + 0x8e0) + (longlong)iVar33 * 8);
    plVar34 = (longlong *)(lVar28 + 8);
    switch(*(int *)(lVar28 + 8)) {
    case 1:
      plVar23 = (longlong *)FUN_147bf8190(0x1b0);
      FUN_147c0117e(plVar23);
      plVar37 = plVar23 + 6;
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      *(undefined4 *)(plVar23 + 0x10) = *(undefined4 *)(lVar28 + 0x58);
      plVar34 = (longlong *)(lVar28 + 0x60);
      plVar37 = plVar23 + 0x11;
      for (lVar22 = 0xf; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      FUN_147c3075c(plVar23,0);
      break;
    case 2:
      plVar23 = (longlong *)FUN_14001cc68(0x180,0x10);
      FUN_147c3189c(plVar23,*(undefined8 *)(*(longlong *)(lVar22 + 0x18) + 0x30));
      plVar37 = plVar23 + 6;
      for (lVar26 = 10; lVar26 != 0; lVar26 = lVar26 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      *(undefined4 *)(plVar23 + 0x10) = *(undefined4 *)(lVar28 + 0x58);
      plVar34 = (longlong *)(lVar28 + 0x60);
      plVar37 = plVar23 + 0x11;
      for (lVar26 = 0xf; lVar26 != 0; lVar26 = lVar26 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      uVar12 = *(undefined4 *)(lVar28 + 0xd8);
      uVar13 = *(undefined4 *)(lVar28 + 0xdc);
      uVar14 = *(undefined4 *)(lVar28 + 0xe0);
      uVar15 = *(undefined4 *)(lVar28 + 0xe4);
      lVar26 = *(longlong *)(lVar28 + 0xe8);
      lVar38 = *(longlong *)(lVar28 + 0xf0);
      uVar21 = *(undefined8 *)(lVar28 + 0xfc);
      *(undefined8 *)((longlong)plVar23 + 0x11c) = *(undefined8 *)(lVar28 + 0xf4);
      *(undefined8 *)((longlong)plVar23 + 0x124) = uVar21;
      plVar23[0x22] = lVar26;
      plVar23[0x23] = lVar38;
      *(undefined4 *)(plVar23 + 0x20) = uVar12;
      *(undefined4 *)((longlong)plVar23 + 0x104) = uVar13;
      *(undefined4 *)(plVar23 + 0x21) = uVar14;
      *(undefined4 *)((longlong)plVar23 + 0x10c) = uVar15;
      if (lVar22 == 0) goto LAB_1435c0daa;
      lVar28 = *(longlong *)(lVar22 + 0x278);
      local_110 = *(undefined4 *)(lVar28 + 0x40);
      local_108 = local_ec;
      local_118 = (code **)(CONCAT71(local_118._1_7_,*(undefined1 *)(lVar28 + 0x44)) &
                           0xffffffffffffff01);
      FUN_147c3195a(plVar23,0,lVar22,*(undefined8 *)(lVar28 + 0x30));
      break;
    case 3:
      plVar23 = (longlong *)FUN_147bf8190(0x198);
      *(byte *)((longlong)plVar23 + 0xc) = *(byte *)((longlong)plVar23 + 0xc) & 0xfe;
      *(undefined4 *)(plVar23 + 2) = 0xffffffff;
      *(byte *)(plVar23 + 4) = *(byte *)(plVar23 + 4) & 0xfe;
      plVar23[3] = 0;
      *plVar23 = (longlong)&PTR_FUN_14aa00640;
      FUN_147bf835c(plVar23 + 5);
      *(undefined4 *)(plVar23 + 0x32) = 0xffffffff;
      plVar37 = plVar23 + 6;
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      *(undefined4 *)(plVar23 + 0x10) = *(undefined4 *)(lVar28 + 0x58);
      plVar34 = (longlong *)(lVar28 + 0x60);
      plVar37 = plVar23 + 0x11;
      for (lVar22 = 0xf; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      *(undefined4 *)(plVar23 + 0x21) = *(undefined4 *)(lVar28 + 0xe0);
      plVar23[0x20] = *(longlong *)(lVar28 + 0xd8);
      FUN_14054c6c4(plVar23 + 0x22,lVar28 + 0xe8);
      plVar34 = (longlong *)(lVar28 + 0xf8);
      plVar37 = plVar23 + 0x24;
      for (lVar22 = 0xd; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      *(undefined4 *)(plVar23 + 0x31) = *(undefined4 *)(lVar28 + 0x160);
      *(byte *)((longlong)plVar23 + 0xc) = *(byte *)((longlong)plVar23 + 0xc) & 0xfe;
      lVar28 = (**(code **)(*(longlong *)plVar23[0x11] + 0x2f0))();
      plVar23[3] = lVar28;
      *(byte *)(plVar23 + 4) = *(byte *)(plVar23 + 4) & 0xfe;
      plVar23[0x11] = 0;
      break;
    case 4:
      plVar23 = (longlong *)FUN_147bf8190(0x150);
      FUN_147c011fc(plVar23,*(undefined8 *)(*(longlong *)(lVar22 + 0x18) + 0x30));
      plVar37 = plVar23 + 10;
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      *(undefined4 *)(plVar23 + 0x14) = *(undefined4 *)(lVar28 + 0x58);
      plVar34 = (longlong *)(lVar28 + 0x60);
      plVar37 = plVar23 + 0x15;
      for (lVar22 = 0xf; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      uVar12 = *(undefined4 *)(lVar28 + 0xd8);
      uVar13 = *(undefined4 *)(lVar28 + 0xdc);
      uVar14 = *(undefined4 *)(lVar28 + 0xe0);
      uVar15 = *(undefined4 *)(lVar28 + 0xe4);
      lVar22 = *(longlong *)(lVar28 + 0xf0);
      plVar23[0x26] = *(longlong *)(lVar28 + 0xe8);
      plVar23[0x27] = lVar22;
      *(undefined4 *)(plVar23 + 0x24) = uVar12;
      *(undefined4 *)((longlong)plVar23 + 0x124) = uVar13;
      *(undefined4 *)(plVar23 + 0x25) = uVar14;
      *(undefined4 *)((longlong)plVar23 + 300) = uVar15;
      *(undefined4 *)(plVar23 + 0x28) = *(undefined4 *)(lVar28 + 0xf8);
      goto LAB_1435c1000;
    case 5:
      plVar23 = (longlong *)FUN_147bf8190(0x140);
      FUN_147c01286(plVar23,*(undefined8 *)(*(longlong *)(lVar22 + 0x18) + 0x30));
      plVar37 = plVar23 + 10;
      for (lVar22 = 10; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      *(undefined4 *)(plVar23 + 0x14) = *(undefined4 *)(lVar28 + 0x58);
      plVar34 = (longlong *)(lVar28 + 0x60);
      plVar37 = plVar23 + 0x15;
      for (lVar22 = 0xf; lVar22 != 0; lVar22 = lVar22 + -1) {
        *plVar37 = *plVar34;
        plVar34 = plVar34 + 1;
        plVar37 = plVar37 + 1;
      }
      uVar12 = *(undefined4 *)(lVar28 + 0xd8);
      uVar13 = *(undefined4 *)(lVar28 + 0xdc);
      uVar14 = *(undefined4 *)(lVar28 + 0xe0);
      uVar15 = *(undefined4 *)(lVar28 + 0xe4);
      lVar22 = *(longlong *)(lVar28 + 0xf0);
      plVar23[0x26] = *(longlong *)(lVar28 + 0xe8);
      plVar23[0x27] = lVar22;
      *(undefined4 *)(plVar23 + 0x24) = uVar12;
      *(undefined4 *)((longlong)plVar23 + 0x124) = uVar13;
      *(undefined4 *)(plVar23 + 0x25) = uVar14;
      *(undefined4 *)((longlong)plVar23 + 300) = uVar15;
LAB_1435c1000:
      (**(code **)(*plVar23 + 0x70))(plVar23,0);
    }
    lVar28 = local_100;
    if (plVar23 != (longlong *)0x0) {
      iVar33 = *(int *)(local_100 + 0x70);
      *(uint *)(local_100 + 0x70) = iVar33 + 1U;
      if (*(uint *)(local_100 + 0x74) < iVar33 + 1U) {
        FUN_147c0d4e6(local_f8,iVar33);
      }
      lVar22 = *(longlong *)(lVar28 + 0x68);
      if (*(longlong *)(lVar28 + 0x68) == 0) {
        lVar22 = local_f8;
      }
      *(longlong **)(lVar22 + (longlong)iVar33 * 8) = plVar23;
      *(int *)(plVar23 + 2) = (int)lVar20;
    }
LAB_1435c0daa:
    lVar20 = lVar20 + 1;
    lVar39 = lVar39 + 0x10;
    lVar28 = local_100;
  } while (lVar20 < (int)plVar32[1]);
  goto LAB_1435c1500;
}



// FUNCTION 1435c15de FUN_1435c15de body=85 status=ok
// SIG undefined FUN_1435c15de(void)

void FUN_1435c15de(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    uVar1 = FUN_1435c072e(param_1,*(undefined4 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x5a8) + 0x210) + 8));
    FUN_1435f95a2(*(undefined8 *)(param_1 + 0x5a8),uVar1);
    return;
  }
  return;
}



// FUNCTION 1435c1633 FUN_1435c1633 body=69 status=ok
// SIG undefined FUN_1435c1633(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c1633(void)

{
  _DAT_14caf3678 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c1675. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3680,1);
  return;
}



// FUNCTION 1435c1678 FUN_1435c1678 body=69 status=ok
// SIG undefined FUN_1435c1678(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c1678(void)

{
  _DAT_14caf3690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c16ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3698,1);
  return;
}



// FUNCTION 1435c16bd FUN_1435c16bd body=69 status=ok
// SIG undefined FUN_1435c16bd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c16bd(void)

{
  _DAT_14caf36a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c16ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf36b0,1);
  return;
}



// FUNCTION 1435c1702 FUN_1435c1702 body=106 status=ok
// SIG undefined FUN_1435c1702(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c1702(void)

{
  _DAT_14caf36d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf36e0,1);
  if (DAT_14caf36c8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14caf36b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1435c176c FUN_1435c176c body=90 status=ok
// SIG undefined FUN_1435c176c(void)

void FUN_1435c176c(void)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14caf3728;
  if (DAT_14caf3728 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14caf3728 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = &DAT_14caf36f8;
  if (DAT_14caf3718 != (undefined8 *)0x0) {
    puVar2 = DAT_14caf3718;
  }
  FUN_144717c65(puVar2,DAT_14caf3720);
  if (DAT_14caf3718 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1435c17c6 FUN_1435c17c6 body=1027 status=ok
// SIG undefined FUN_1435c17c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c17c6(void)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auStack_58 [47];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14caf3738 != 0) {
    plVar13 = DAT_14caf3718;
    if (DAT_14caf3718 == (longlong *)0x0) {
      plVar13 = &DAT_14caf36f8;
    }
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar6 = (uint *)*puVar2;
    if (puVar6 != (uint *)0x0) goto LAB_1435c18bd;
    while( true ) {
      uVar9 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar9 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar9 | 1;
        __tlregdtor(&LAB_1435c8f10);
      }
      lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar5 = *(undefined4 **)(lVar3 + 0x310);
      *(undefined8 *)(lVar3 + 0x310) = 0;
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar5 = 0xffffffff;
      *(undefined4 **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar2 = puVar5;
      FUN_140217a48(puVar2);
      puVar6 = (uint *)*puVar2;
LAB_1435c18bd:
      puVar12 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar10 = (uint *)(puVar12 + 0x16);
      uVar9 = puVar6[0x12];
      if (puVar10 <= puVar6 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
        LOCK();
        uVar8 = *puVar6;
        *puVar6 = *puVar6 + uVar9 + 1;
        UNLOCK();
        if ((uVar8 ^ uVar9) != 0xffffffff) break;
        puVar6 = (uint *)*puVar2;
        *puVar6 = 0xffffffff;
        *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
        puVar6[0x12] = 0;
        *puVar2 = puVar6;
        puVar12 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
        puVar10 = (uint *)(puVar12 + 0x16);
        uVar9 = 0;
        if (puVar10 <= puVar6 + 0x4000) {
          uVar9 = 1;
          goto LAB_1435c193d;
        }
      }
    }
    uVar9 = uVar9 + 1;
LAB_1435c193d:
    *(uint **)(puVar6 + 0x10) = puVar10;
    puVar6[0x12] = uVar9;
    FUN_1447247dc(puVar12,0);
    *puVar12 = &PTR_FUN_14aa00040;
    lVar3 = *plVar13;
    puVar12[0x15] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    uVar9 = DAT_14caf36f0;
    if (((DAT_14caf36e8 != 0x400) || (DAT_14c7585d8 != 0)) &&
       ((DAT_14caf36e8 != 0x800 || (DAT_14c7585dc != 0)))) {
      uVar9 = DAT_14caf36e8 | _DAT_14caf36ec;
    }
    uVar8 = uVar9 >> 10 & 3;
    if ((uVar9 >> 9 & 1) == 0 || uVar8 < 2) {
      uVar11 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
    }
    else {
      uVar11 = 2;
    }
    if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
    }
    puVar12[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar12[9] = puVar12;
    puVar12[10] = puVar12;
    lVar3 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar3 == 0) {
      uVar4 = 1;
      if ((char)uVar11 != '\x06') {
        uVar4 = uVar11;
      }
      uVar11 = uVar4;
      uVar7 = 0;
    }
    else {
      if ((char)uVar11 == '\x06') {
        uVar11 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
      }
      uVar7 = *(undefined8 *)(lVar3 + 0x30);
    }
    puVar12[0xf] = uVar7;
    puVar12[0x10] = uVar11 << 0x3b | 0xc00000527800b400;
    *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
    if (puVar12 == (undefined8 *)0x0) {
      local_29 = 1;
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
      UNLOCK();
      local_29 = 1;
      FUN_1447439e4(puVar12);
      LOCK();
      piVar1 = (int *)(puVar12 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar12)(puVar12,1);
      }
    }
    puVar2 = DAT_14caf3728;
    if (DAT_14caf3728 != (undefined8 *)0x0) {
      DAT_14caf3728 = (undefined8 *)0x0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    plVar13 = &DAT_14caf36f8;
    if (DAT_14caf3718 != (longlong *)0x0) {
      plVar13 = DAT_14caf3718;
    }
    FUN_144717c65(plVar13,DAT_14caf3720);
    DAT_14caf3720 = 0;
    if (DAT_14caf3724 != 0) {
      FUN_14473dbc4(&DAT_14caf36f8,0);
    }
    DAT_14caf3738 = 0;
    DAT_14caf3730 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c1bca FUN_1435c1bca body=254 status=ok
// SIG undefined FUN_1435c1bca(void)

void FUN_1435c1bca(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  if ((((DAT_14c7616f8 == 0) || (*(longlong *)(param_1 + 0x668) == 0)) ||
      ((*(byte *)(*(longlong *)(param_1 + 0x668) + 0xed) & 2) == 0)) ||
     (1 < *(int *)(param_1 + 0x58))) {
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x140) == 0;
  }
  bVar2 = (byte)(param_2 & 0xffffffff) & *(byte *)(param_1 + 0x9c);
  bVar4 = (~*(uint *)(param_1 + 0x698) & 0x3fffffff) != 0;
  bVar5 = -1 < (int)*(uint *)(param_1 + 0x698);
  if ((bVar3) || (bVar5 && bVar4)) {
    lVar1 = FUN_147c01a48(param_1);
    if (bVar3) {
      if (lVar1 != 0) {
        FUN_14493be0a(param_1,0);
        if (bVar2 != 0) {
          FUN_1435ec210(lVar1,param_1);
          return;
        }
        if (bVar5 && bVar4) {
          FUN_1435ec2d4(lVar1,param_1);
          return;
        }
        return;
      }
      goto LAB_1435c1c56;
    }
  }
  else {
    lVar1 = 0;
  }
  if (((!bVar5 || !bVar4) || lVar1 != 0) && (bVar5 && bVar4)) {
    FUN_1435ec2d4(lVar1,param_1);
  }
LAB_1435c1c56:
  FUN_14493be0a(param_1,CONCAT71((int7)((param_2 & 0xffffffff) >> 8),bVar2));
  return;
}



// FUNCTION 1435c1cc8 FUN_1435c1cc8 body=5912 status=ok
// SIG undefined FUN_1435c1cc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c1cc8(longlong *param_1,float param_2,undefined8 param_3,longlong param_4)

{
  undefined8 *puVar1;
  DWORD *pDVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong *plVar16;
  uint *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined *puVar20;
  longlong *plVar21;
  longlong lVar22;
  uint *puVar23;
  undefined8 unaff_RBX;
  LARGE_INTEGER LVar24;
  int *piVar25;
  undefined8 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  float fVar30;
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar39;
  undefined1 auVar38 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  float fVar44;
  double dVar45;
  undefined1 auStack_138 [32];
  byte local_118;
  uint local_104;
  LARGE_INTEGER local_100;
  longlong local_f8;
  longlong *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined1 local_d8 [16];
  LARGE_INTEGER local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  bVar7 = *(byte *)((longlong)param_1 + 0x691);
  lVar11 = param_1[0x16];
  if (lVar11 == 0) {
    lVar11 = FUN_1448abda6(param_1);
  }
  local_118 = bVar7 >> 7;
  FUN_147af13d2(local_d8,lVar11,0,0);
  (**(code **)(*param_1 + 0x400))(param_1);
  if ((param_1[0xcd] == 0) || (*(int *)(param_1[0xcd] + 0x68) == 0)) {
    (**(code **)(*param_1 + 0x3b0))(param_1,0);
    goto LAB_1435c1d78;
  }
  lVar11 = param_1[0x16];
  if ((((lVar11 == 0) && (lVar11 = FUN_1448abda6(param_1), lVar11 == 0)) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 ||
      (plVar21 = (longlong *)FUN_14005c7aa(lVar11), plVar21 == (longlong *)0x0)))) {
    uVar28 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
    plVar21 = (longlong *)0x0;
    LVar24.QuadPart = -1;
  }
  else {
    QueryPerformanceCounter(&local_c8);
    uVar28 = 0;
    LVar24 = local_c8;
  }
  uVar10 = *(uint *)((longlong)param_1 + 0x974);
  uVar9 = (int)(longlong)(param_2 * 1000.0) + uVar10;
  if (uVar9 < *(uint *)(param_1[0xcd] + 0xf4)) {
    *(uint *)((longlong)param_1 + 0x974) = uVar9;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x974) = 0;
    if (((char)param_1[0xd2] < '\0') &&
       (FUN_1435c33e2(param_1), (*(byte *)(param_1 + 0xd2) & 0x10) != 0)) {
      FUN_147c01c04((longlong)param_1 + 0xbb,param_1);
    }
    if (param_1[300] != 0) {
      FUN_1435c0142(param_1,1);
    }
    bVar7 = *(byte *)((longlong)param_1 + 0x691) >> 7;
    if (((*(byte *)((longlong)param_1 + 0x692) & 1) != bVar7) &&
       (*(byte *)((longlong)param_1 + 0x692) = bVar7 | *(byte *)((longlong)param_1 + 0x692) & 0xfe,
       (~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0)) {
      bVar7 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar7 & 1) != 0) {
        if ((param_1[0x16] != 0) || (lVar11 = FUN_1448abda6(param_1), lVar11 != 0))
        goto LAB_1435c1f17;
        bVar7 = *(byte *)((longlong)param_1 + 0x9d);
      }
      *(byte *)((longlong)param_1 + 0x9d) = bVar7 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140);
    }
LAB_1435c1f17:
    if ((*(byte *)((longlong)param_1 + 0x9e) & 0x18) == 0) {
      (**(code **)(*param_1 + 0x3b0))(param_1,0);
    }
    else {
      param_2 = (float)uVar10 / 1000.0 + param_2;
      *(float *)(param_1 + 0x12d) = param_2;
      lVar11 = param_1[0x16];
      if (lVar11 == 0) {
        lVar11 = FUN_1448abda6(param_1);
      }
      bVar7 = *(byte *)(param_1 + 0xd2);
      *(byte *)(param_1 + 0xd2) = bVar7 & 0xbf;
      if (DAT_14cb0cbf8 < (int)(uint)*(byte *)((longlong)param_1 + 0x1fc)) {
        if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) {
          FUN_1435c33e2(param_1);
          FUN_1448c6f34(param_1);
        }
      }
      else {
        if (DAT_14c761690 <= 0.0) {
          bVar19 = false;
        }
        else {
          dVar35 = (double)param_1[0x4e] * 1.52587890625e-05 + 0.5;
          dVar40 = (double)param_1[0x4d] * 1.52587890625e-05 + 0.5;
          dVar32 = (double)param_1[0x4c] * 1.52587890625e-05 + 0.5;
          auVar37._0_4_ = (float)dVar35;
          auVar37._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
          auVar37._8_8_ = 0;
          auVar42._0_4_ = (float)dVar40;
          auVar42._4_4_ = (int)((ulonglong)dVar40 >> 0x20);
          auVar42._8_8_ = 0;
          auVar33._0_4_ = (float)dVar32;
          auVar33._4_4_ = (int)((ulonglong)dVar32 >> 0x20);
          auVar33._8_8_ = 0;
          auVar33 = blendps(auVar33,ZEXT816(0),0xe);
          auVar33 = roundps(auVar33,auVar33,1);
          auVar42 = blendps(auVar42,ZEXT816(0),0xe);
          auVar42 = roundps(auVar42,auVar42,1);
          auVar37 = blendps(auVar37,ZEXT816(0),0xe);
          auVar37 = roundps(auVar37,auVar37,1);
          fVar30 = ABS(*(float *)(param_1 + 0x11a) - auVar37._0_4_);
          fVar44 = ABS(*(float *)((longlong)param_1 + 0x8cc) - auVar42._0_4_);
          fVar31 = ABS(*(float *)(param_1 + 0x119) - auVar33._0_4_);
          if (fVar31 <= fVar44) {
            fVar31 = fVar44;
          }
          if (fVar31 <= fVar30) {
            fVar31 = fVar30;
          }
          bVar19 = DAT_14c761690 <= fVar31;
        }
        if ((byte)((bVar7 & 0x40) >> 6 | bVar19) == 1) {
          FUN_147c00efa(param_1);
        }
        if ((*(byte *)((longlong)param_1 + 0x692) & 4) == 0) {
          cVar8 = FUN_1456cb7ec(param_1);
          if (cVar8 != '\0') goto LAB_1435c1f2e;
          fVar31 = *(float *)(param_1 + 0xe9) + param_2;
          *(float *)(param_1 + 0xe9) = fVar31;
          if (*(float *)(param_1[0xcd] + 0x80) <= fVar31 &&
              fVar31 != *(float *)(param_1[0xcd] + 0x80)) {
            *(undefined4 *)(param_1 + 0xe9) = 0;
            cVar8 = FUN_147c01c7e(param_1);
            if (cVar8 == '\0') {
              *(byte *)((longlong)param_1 + 0x692) = *(byte *)((longlong)param_1 + 0x692) | 0x40;
              (**(code **)(*param_1 + 0xba0))(param_1);
            }
            else {
              if ((*(byte *)((longlong)param_1 + 0x692) & 8) == 0) {
                pcVar12 = (char *)(param_1[0xcd] + 0xef);
              }
              else {
                pcVar12 = (char *)((longlong)param_1 + 0x69d);
              }
              if (*pcVar12 == '\0') {
                local_c8 = *(LARGE_INTEGER *)(param_1 + 0x4c);
                uStack_c0 = (double)param_1[0x4d];
                local_b8._0_8_ = param_1[0x4e];
                (**(code **)(*param_1 + 0xbc0))(param_1);
                (**(code **)(*param_1 + 0xbc8))(param_1);
              }
            }
          }
        }
        *(byte *)((longlong)param_1 + 0x692) = *(byte *)((longlong)param_1 + 0x692) & 0xdf;
        param_2 = param_2 * *(float *)(param_1 + 0xef);
        *(float *)(param_1 + 0x12d) = param_2;
        if ((1e-08 < ABS(param_2)) || (DAT_14c761694 == '\0')) {
          *(float *)(param_1 + 0xe8) = param_2 + *(float *)(param_1 + 0xe8);
          local_e8 = param_1 + 0x10b;
          *(undefined4 *)(param_1 + 0x10c) = 0;
          local_f8 = param_4;
          if (*(int *)((longlong)param_1 + 0x864) < 0) {
            FUN_1447a8aa0(local_e8);
          }
          local_104 = (uint)uVar28;
          plVar16 = param_1 + 0x10d;
          *(undefined4 *)(param_1 + 0x10e) = 0;
          local_100 = LVar24;
          local_f0 = plVar21;
          if (*(int *)((longlong)param_1 + 0x874) < 0) {
            FUN_14482f6fa(plVar16);
          }
          bVar7 = *(byte *)(lVar11 + 0x152);
          if (((bVar7 == 1) || ((bVar7 < 7 && ((0x68U >> (bVar7 & 0x1f) & 1) != 0)))) &&
             (0 < *(int *)(lVar11 + 0x238))) {
            lVar27 = 0;
            do {
              iVar3 = *(int *)(*(longlong *)(lVar11 + 0x230) + 4 + lVar27 * 8);
              if (((((iVar3 != 0) &&
                    (uVar10 = *(uint *)(*(longlong *)(lVar11 + 0x230) + lVar27 * 8),
                    -1 < (int)uVar10)) && ((int)uVar10 < DAT_14c9647dc)) &&
                  (((plVar21 = (longlong *)
                               ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                    plVar21 != (longlong *)0x0 && ((int)plVar21[2] == iVar3)) &&
                   (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 &&
                    ((plVar21 = (longlong *)*plVar21, plVar21 != (longlong *)0x0 &&
                     ((*(byte *)(plVar21 + 0x84) & 2) != 0)))))))) &&
                 (cVar8 = (**(code **)(*plVar21 + 0x6c8))(plVar21), cVar8 != '\0')) {
                (**(code **)(*plVar21 + 0x718))(plVar21,&local_c8,&local_a8);
                iVar3 = (int)param_1[0x10c];
                *(uint *)(param_1 + 0x10c) = iVar3 + 1U;
                if (*(uint *)((longlong)param_1 + 0x864) < iVar3 + 1U) {
                  FUN_1403e3958(local_e8,iVar3);
                }
                lVar13 = param_1[0x10b];
                *(undefined8 *)(lVar13 + 0x10 + (longlong)iVar3 * 0x18) = local_b8._0_8_;
                pDVar2 = (DWORD *)(lVar13 + (longlong)iVar3 * 0x18);
                *pDVar2 = local_c8.s.LowPart;
                pDVar2[1] = local_c8.s.HighPart;
                pDVar2[2] = (DWORD)uStack_c0;
                pDVar2[3] = uStack_c0._4_4_;
                lVar13 = param_1[0x10e];
                uVar10 = (int)lVar13 + 1;
                *(uint *)(param_1 + 0x10e) = uVar10;
                if (*(uint *)((longlong)param_1 + 0x874) < uVar10) {
                  FUN_14475e4ac(plVar16);
                }
                *(undefined4 *)(*plVar16 + (longlong)(int)lVar13 * 4) =
                     *(undefined4 *)((longlong)plVar21 + 0x494);
              }
              lVar27 = lVar27 + 1;
            } while ((int)lVar27 < *(int *)(lVar11 + 0x238));
          }
          lVar11 = local_f8;
          if ((*(byte *)(param_1[0xcd] + 0xec) & 1) != 0) {
            if (param_1[300] != 0) {
              FUN_1435c0142(param_1);
            }
            lVar27 = param_1[0x16];
            if (lVar27 == 0) {
              lVar27 = FUN_1448abda6(param_1);
              if (lVar27 == 0) goto LAB_1435c280b;
              lVar27 = param_1[0x16];
              if (lVar27 == 0) {
                lVar27 = FUN_1448abda6(param_1);
              }
            }
            if (*(longlong *)(lVar27 + 0x1f0) != 0) {
              lVar27 = param_1[0x16];
              if (lVar27 == 0) {
                lVar27 = FUN_1448abda6(param_1);
              }
              lVar13 = (longlong)*(int *)(*(longlong *)(lVar27 + 0x1f0) + 0x40);
              if (lVar13 != 0) {
                lVar22 = 0;
                do {
                  lVar4 = *(longlong *)
                           (*(longlong *)(*(longlong *)(lVar27 + 0x1f0) + 0x38) + lVar22);
                  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
                    plVar21 = *(longlong **)(lVar4 + 0x448);
                    if (plVar21 != (longlong *)0x0) {
                      (**(code **)(*plVar21 + 0x730))(plVar21,&local_c8);
                      dVar32 = (double)local_b8._0_8_ - (double)param_1[0x4e];
                      uStack_c0 = uStack_c0 - (double)param_1[0x4d];
                      dVar35 = (double)local_c8 - (double)param_1[0x4c];
                      dVar40 = dVar32 * dVar32 + dVar35 * dVar35 + uStack_c0 * uStack_c0;
                      if (9.99999993922529e-09 < dVar40) {
                        dVar40 = 1.0 / SQRT(dVar40);
                        dVar35 = dVar35 * dVar40;
                        uStack_c0 = uStack_c0 * dVar40;
                        dVar32 = dVar32 * dVar40;
                      }
                      dVar41 = -(double)param_1[0x48];
                      dVar43 = -(double)param_1[0x49];
                      dVar36 = (double)param_1[0x4a] * -1.0;
                      dVar39 = (double)param_1[0x4b] * 1.0;
                      dVar45 = dVar35 * dVar36 - dVar41 * dVar32;
                      dVar40 = uStack_c0 * dVar41 - dVar35 * dVar43;
                      dVar6 = dVar32 * dVar43 - uStack_c0 * dVar36;
                      dVar6 = dVar6 + dVar6;
                      dVar45 = dVar45 + dVar45;
                      dVar40 = dVar40 + dVar40;
                      dVar32 = dVar39 * dVar40 + dVar32 + (dVar45 * dVar41 - dVar6 * dVar43);
                      dVar41 = (dVar40 * dVar43 - dVar45 * dVar36) + dVar39 * dVar6 + dVar35;
                      dVar35 = (double)param_1[0x48] * dVar40 + dVar36 * dVar6 +
                               dVar39 * dVar45 + uStack_c0;
                      dVar40 = dVar41 * 0.0 + dVar35 * 0.0 + dVar32 + 1.0;
                      if (dVar40 < 9.999999974752427e-07) {
                        dVar32 = -DAT_14c8463b0;
                        dVar35 = -DAT_14c8463a8;
                        dVar41 = -DAT_14c8463a0;
                        dVar40 = 0.0;
                      }
                      dVar6 = dVar35 * 0.0 + dVar41 * -0.0;
                      dVar41 = dVar41 - dVar32 * 0.0;
                      dVar35 = dVar32 * 0.0 - dVar35;
                      dVar32 = dVar6 * dVar6 + dVar35 * dVar35;
                      dVar45 = dVar40 * dVar40 + dVar41 * dVar41;
                      auVar34._0_8_ = dVar32 + dVar45;
                      auVar34._8_8_ = dVar32 + dVar45;
                      uVar28 = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
                      auVar33 = sqrtpd(auVar34,auVar34);
                      auVar33 = divpd(_DAT_149934d80,auVar33);
                      auVar38._0_8_ = auVar33._0_8_ * dVar6;
                      auVar38._8_8_ = auVar33._8_8_ * dVar40;
                      local_c8.QuadPart =
                           (ulonglong)(dVar35 * auVar33._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
                      uStack_c0 = (double)((ulonglong)(dVar41 * auVar33._8_8_) & uVar28);
                      auVar5._8_4_ = (int)uVar28;
                      auVar5._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
                      auVar5._12_4_ = (int)(uVar28 >> 0x20);
                      local_b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar5);
                      FUN_1448052ee(&local_c8,&local_a8);
                      uVar28 = param_1[7];
                      if (uVar28 < 0xffffffff00000000) {
                        plVar21 = DAT_14c9980d0;
                        if (DAT_14c9980d8 == 0) {
                          plVar21 = (longlong *)0x0;
                        }
                        (**(code **)(*plVar21 + 0x58))(plVar21,param_1,uVar28,6);
                        lVar11 = local_f8;
                      }
                      else {
                        uVar10 = (uint)uVar28;
                        if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
                          puVar20 = &DAT_14c998070;
                          if (DAT_14c998080 != (undefined *)0x0) {
                            puVar20 = DAT_14c998080;
                          }
                          if ((*(uint *)(puVar20 + ((uint)(uVar28 >> 3) & 0xffffffc)) >>
                               (uVar10 & 0x1f) & 1) != 0) {
                            lVar27 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
                            puVar17 = *(uint **)(lVar27 + 0x18);
                            if (*(uint **)(lVar27 + 0x18) == (uint *)0x0) {
                              puVar17 = (uint *)(lVar27 + 8);
                            }
                            *puVar17 = *puVar17 | 0x40;
                            *(byte *)(lVar27 + 0x60) = *(byte *)(lVar27 + 0x60) | 1;
                          }
                        }
                      }
                      param_1[0x36] = (longlong)((double)param_1[0x36] + local_a8);
                      param_1[0x37] = (longlong)((double)param_1[0x37] + local_a0);
                      param_1[0x38] = (longlong)((double)param_1[0x38] + local_98);
                      dVar32 = (double)FUN_144719204(SUB84(local_a8,0),0x4076800000000000);
                      dVar32 = (double)(~-(ulonglong)(dVar32 < 0.0) & (ulonglong)dVar32 |
                                       (ulonglong)(dVar32 + 360.0) & -(ulonglong)(dVar32 < 0.0));
                      if ((dVar32 != 0.0) || (NAN(dVar32))) {
LAB_1435c2b01:
                        bVar19 = false;
                      }
                      else {
                        dVar32 = (double)FUN_144719204(SUB84(local_a0,0),0x4076800000000000);
                        dVar32 = (double)(~-(ulonglong)(dVar32 < 0.0) & (ulonglong)dVar32 |
                                         (ulonglong)(dVar32 + 360.0) & -(ulonglong)(dVar32 < 0.0));
                        if ((dVar32 != 0.0) || (NAN(dVar32))) goto LAB_1435c2b01;
                        dVar32 = (double)FUN_144719204(SUB84(local_98,0));
                        bVar19 = (double)(~-(ulonglong)(dVar32 < 0.0) & (ulonglong)dVar32 |
                                         (ulonglong)(dVar32 + 360.0) & -(ulonglong)(dVar32 < 0.0))
                                 == 0.0;
                      }
                      bVar7 = 2;
                      if (bVar19) {
                        bVar7 = *(byte *)((longlong)param_1 + 0x693) & 2;
                      }
                      *(byte *)((longlong)param_1 + 0x693) =
                           *(byte *)((longlong)param_1 + 0x693) & 0xfd | bVar7;
                    }
                    break;
                  }
                  lVar22 = lVar22 + 8;
                } while (lVar13 * 8 != lVar22);
              }
            }
          }
LAB_1435c280b:
          iVar3 = *(int *)((longlong)param_1 + 0x78c);
          FUN_145a44f49(param_1[0xf0],(int)param_1[0xf1]);
          *(undefined4 *)(param_1 + 0xf1) = 0;
          if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x78c) != 0)) {
            FUN_147c0d124(param_1 + 0xf0,0);
          }
          iVar3 = *(int *)((longlong)param_1 + 0x79c);
          FUN_145a44f18(param_1[0xf2],(int)param_1[0xf3]);
          plVar21 = local_f0;
          LVar24 = local_100;
          *(undefined4 *)(param_1 + 0xf3) = 0;
          uVar28 = (ulonglong)local_104;
          if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x79c) != 0)) {
            FUN_147c0d196(param_1 + 0xf2,0);
          }
          iVar3 = *(int *)((longlong)param_1 + 0x7ac);
          FUN_145a44f7a(param_1[0xf4],(int)param_1[0xf5]);
          *(undefined4 *)(param_1 + 0xf5) = 0;
          if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x7ac) != 0)) {
            FUN_147c0d204(param_1 + 0xf4,0);
          }
          iVar3 = *(int *)((longlong)param_1 + 0x7bc);
          FUN_145a44ee7(param_1[0xf6],(int)param_1[0xf7]);
          *(undefined4 *)(param_1 + 0xf7) = 0;
          if ((iVar3 < 0) && (*(int *)((longlong)param_1 + 0x7bc) != 0)) {
            FUN_147c0d6ee(param_1 + 0xf6);
          }
          *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
          *(byte *)((longlong)param_1 + 0x693) = *(byte *)((longlong)param_1 + 0x693) | 0x20;
          if (((int)*(uint *)(param_1 + 0xd3) < 0 || (~*(uint *)(param_1 + 0xd3) & 0x3fffffff) == 0)
             || ((*(byte *)((longlong)param_1 + 0x692) & 4) != 0)) {
            if ((lVar11 != 0) &&
               ((*(longlong *)(lVar11 + 0x20) != 0 &&
                ((*(byte *)(*(longlong *)(lVar11 + 0x20) + 1) & 0xfe) == 2)))) {
              bVar7 = *(byte *)(param_1 + 0xd2);
              if ((bVar7 & 8) == 0) {
                FUN_147c01f74(param_1);
                bVar7 = *(byte *)(param_1 + 0xd2);
              }
              if (((((bVar7 & 4) != 0) && (DAT_14caf3c9c == 0)) && (DAT_14c7616b8 != 0)) &&
                 (cVar8 = FUN_1447e0190(), cVar8 != '\0')) {
                FUN_1400cbe68(param_1);
                if (DAT_14caf36a0 == 0) {
                  puVar14 = (undefined8 *)0x0;
                  puVar26 = (undefined8 *)0x0;
                  piVar25 = (int *)0x0;
                  goto LAB_1435c2ec6;
                }
                if ((DAT_14caf3738 < DAT_14c761698) && (DAT_14caf3720 != 0)) {
                  plVar21 = &DAT_14caf36f8;
                  if (DAT_14caf3718 != (longlong *)0x0) {
                    plVar21 = DAT_14caf3718;
                  }
                  if ((*plVar21 == 0) || ((*(byte *)(*plVar21 + 0xa0) & 1) != 0))
                  goto LAB_1435c2a61;
                }
                else {
LAB_1435c2a61:
                  FUN_1435c17c6();
                }
                if (DAT_14caf3720 == 0) {
                  puVar14 = (undefined8 *)FUN_1446fac86(0xa8);
                  FUN_1447247dc(puVar14,0);
                  *puVar14 = &PTR_FUN_149e00300;
                  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
                  }
                  puVar14[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar14[9] = puVar14;
                  puVar14[10] = puVar14;
                  lVar11 = *(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  lVar27 = *(longlong *)(lVar11 + 0x2b8);
                  if (lVar27 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = *(undefined8 *)(lVar27 + 0x30);
                  }
                  puVar14[0xf] = uVar15;
                  puVar14[0x10] = 0xc80000527800c400;
                  *(undefined4 *)((longlong)puVar14 + 0x1c) = 2;
                  uVar10 = DAT_14caf3720;
                  lVar27 = (longlong)(int)DAT_14caf3720;
                  DAT_14caf3720 = DAT_14caf3720 + 1;
                  if (DAT_14caf3724 < DAT_14caf3720) {
                    FUN_14476a5c8(&DAT_14caf36f8,uVar10);
                  }
                  plVar21 = (longlong *)(lVar11 + 0x2b8);
                  plVar16 = DAT_14caf3718;
                  if (DAT_14caf3718 == (longlong *)0x0) {
                    plVar16 = &DAT_14caf36f8;
                  }
                  plVar16[lVar27] = (longlong)puVar14;
                  puVar14 = (undefined8 *)FUN_1446fac86(0xa8);
                  FUN_1447247dc(puVar14,0);
                  *puVar14 = &PTR_FUN_149e00300;
                  if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
                  }
                  puVar14[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar14[9] = puVar14;
                  puVar14[10] = puVar14;
                  lVar11 = *plVar21;
                  if (lVar11 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = *(undefined8 *)(lVar11 + 0x30);
                  }
                  puVar14[0xf] = uVar15;
                  puVar14[0x10] = 0xc80000527800c400;
                  *(undefined4 *)((longlong)puVar14 + 0x1c) = 2;
                  puVar26 = DAT_14caf3728;
                  if (DAT_14caf3728 != (undefined8 *)0x0) {
                    LOCK();
                    piVar25 = (int *)(DAT_14caf3728 + 1);
                    DAT_14caf3728 = puVar14;
                    *piVar25 = *piVar25 + -1;
                    UNLOCK();
                    puVar14 = DAT_14caf3728;
                    if (*piVar25 == 0) {
                      (**(code **)*puVar26)(puVar26,1);
                      puVar14 = DAT_14caf3728;
                    }
                  }
                  DAT_14caf3728 = puVar14;
                  plVar16 = &DAT_14caf36f8;
                  if (DAT_14caf3718 != (longlong *)0x0) {
                    plVar16 = DAT_14caf3718;
                  }
                  puVar14 = (undefined8 *)
                            (*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x308);
                  puVar17 = (uint *)*puVar14;
                  if (puVar17 != (uint *)0x0) goto LAB_1435c2cb8;
                  while( true ) {
                    uVar10 = *(uint *)(*(longlong *)
                                        ((longlong)ThreadLocalStoragePointer +
                                        (ulonglong)_tls_index * 8) + 0x318);
                    if ((uVar10 & 1) == 0) {
                      *(uint *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x318) = uVar10 | 1;
                      __tlregdtor(&LAB_1435c8f10);
                    }
                    lVar11 = *(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                    puVar18 = *(undefined4 **)(lVar11 + 0x310);
                    *(undefined8 *)(lVar11 + 0x310) = 0;
                    if (puVar18 == (undefined4 *)0x0) {
                      puVar18 = _aligned_malloc(0x10000,0x10000);
                    }
                    *puVar18 = 0xffffffff;
                    *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
                    puVar18[0x12] = 0;
                    *puVar14 = puVar18;
                    FUN_140217a48(puVar14);
                    puVar17 = (uint *)*puVar14;
LAB_1435c2cb8:
                    puVar26 = (undefined8 *)
                              (*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
                    puVar23 = (uint *)(puVar26 + 0x16);
                    uVar10 = puVar17[0x12];
                    if (puVar23 <= puVar17 + 0x4000) break;
                    while( true ) {
                      *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
                      LOCK();
                      uVar9 = *puVar17;
                      *puVar17 = *puVar17 + uVar10 + 1;
                      UNLOCK();
                      if ((uVar9 ^ uVar10) != 0xffffffff) break;
                      puVar17 = (uint *)*puVar14;
                      *puVar17 = 0xffffffff;
                      *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
                      puVar17[0x12] = 0;
                      *puVar14 = puVar17;
                      puVar26 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
                      puVar23 = (uint *)(puVar26 + 0x16);
                      uVar10 = 0;
                      if (puVar23 <= puVar17 + 0x4000) {
                        uVar10 = 1;
                        goto LAB_1435c2d38;
                      }
                    }
                  }
                  uVar10 = uVar10 + 1;
LAB_1435c2d38:
                  *(uint **)(puVar17 + 0x10) = puVar23;
                  puVar17[0x12] = uVar10;
                  FUN_1447247dc(puVar26,0);
                  *puVar26 = &PTR_FUN_14aa00050;
                  lVar11 = *plVar16;
                  puVar26[0x15] = lVar11;
                  if (lVar11 != 0) {
                    LOCK();
                    *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                    UNLOCK();
                  }
                  if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
                    (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
                  }
                  puVar26[0xe] = LowLevelTasks::
                                 TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                 ::
                                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                 ::vftable;
                  puVar26[9] = puVar26;
                  puVar26[10] = puVar26;
                  lVar11 = *plVar21;
                  if (lVar11 == 0) {
                    uVar15 = 0;
                  }
                  else {
                    uVar15 = *(undefined8 *)(lVar11 + 0x30);
                  }
                  puVar26[0xf] = uVar15;
                  puVar26[0x10] = 0xe80000527800b400;
                  *(undefined4 *)((longlong)puVar26 + 0x1c) = 3;
                  if (puVar26 == (undefined8 *)0x0) {
                    local_c8.s.LowPart._0_1_ = 1;
                    FUN_1447439e4(0);
                    LVar24 = local_100;
                  }
                  else {
                    LOCK();
                    *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
                    UNLOCK();
                    local_c8.s.LowPart._0_1_ = 1;
                    FUN_1447439e4(puVar26);
                    LVar24 = local_100;
                    LOCK();
                    piVar25 = (int *)(puVar26 + 1);
                    *piVar25 = *piVar25 + -1;
                    UNLOCK();
                    if (*piVar25 == 0) {
                      (**(code **)*puVar26)(puVar26,1);
                    }
                  }
                  DAT_14caf3730 = (int *)FUN_14001cc68(4,0x10);
                  *DAT_14caf3730 = 0;
                }
                puVar14 = DAT_14caf3728;
                if (DAT_14caf3728 != (undefined8 *)0x0) {
                  LOCK();
                  *(int *)(DAT_14caf3728 + 1) = *(int *)(DAT_14caf3728 + 1) + 1;
                  UNLOCK();
                }
                puVar26 = &DAT_14caf36f8;
                LOCK();
                *DAT_14caf3730 = *DAT_14caf3730 + 1;
                UNLOCK();
                DAT_14caf3738 = DAT_14caf3738 + 1;
                piVar25 = DAT_14caf3730;
LAB_1435c2ec6:
                puVar1 = (undefined8 *)
                         (*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
                         );
                puVar17 = (uint *)*puVar1;
                if (puVar17 != (uint *)0x0) goto LAB_1435c2f6d;
LAB_1435c2eed:
                uVar10 = *(uint *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0x318);
                if ((uVar10 & 1) == 0) {
                  *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318) = uVar10 | 1;
                  __tlregdtor(&LAB_1435c8f10);
                }
                lVar11 = *(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                puVar18 = *(undefined4 **)(lVar11 + 0x310);
                *(undefined8 *)(lVar11 + 0x310) = 0;
                if (puVar18 == (undefined4 *)0x0) {
                  puVar18 = _aligned_malloc(0x10000,0x10000);
                }
                *puVar18 = 0xffffffff;
                *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
                puVar18[0x12] = 0;
                *puVar1 = puVar18;
                FUN_140217a48(puVar1);
                puVar17 = (uint *)*puVar1;
LAB_1435c2f6d:
                uVar28 = *(longlong *)(puVar17 + 0x10) + 7;
                uVar10 = puVar17[0x12];
                do {
                  puVar29 = (undefined8 *)(uVar28 & 0xfffffffffffffff8);
                  if (puVar29 + 0x18 <= puVar17 + 0x4000) {
                    *(undefined8 **)(puVar17 + 0x10) = puVar29 + 0x18;
                    puVar17[0x12] = uVar10 + 1;
                    FUN_1447247dc(puVar29,puVar26);
                    lVar11 = local_f8;
                    *puVar29 = &PTR_FUN_14aa00460;
                    puVar29[0x15] = param_1;
                    puVar29[0x16] = puVar14;
                    if (puVar14 != (undefined8 *)0x0) {
                      LOCK();
                      *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
                      UNLOCK();
                    }
                    puVar29[0x17] = piVar25;
                    uVar10 = DAT_14caf36f0;
                    if (((DAT_14caf36e8 != 0x400) || (DAT_14c7585d8 != 0)) &&
                       ((DAT_14caf36e8 != 0x800 || (DAT_14c7585dc != 0)))) {
                      uVar10 = DAT_14caf36e8 | _DAT_14caf36ec;
                    }
                    uVar9 = uVar10 >> 10 & 3;
                    if ((uVar10 >> 9 & 1) == 0 || uVar9 < 2) {
                      bVar7 = (&DAT_149e38edc)[uVar9];
                    }
                    else {
                      bVar7 = 2;
                    }
                    uVar28 = (ulonglong)bVar7;
                    if (*(code **)(puVar29[0xe] + 0x18) != FUN_144713626) {
                      (**(code **)(puVar29[0xe] + 0x18))(puVar29 + 0xe,puVar29 + 9);
                    }
                    puVar29[0xe] = LowLevelTasks::
                                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                                   ::
                                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                                   ::vftable;
                    puVar29[9] = puVar29;
                    puVar29[10] = puVar29;
                    lVar27 = *(longlong *)
                              (*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x2b8);
                    if (lVar27 == 0) {
                      uVar28 = 1;
                      if (bVar7 != 6) {
                        uVar28 = (ulonglong)bVar7;
                      }
                      uVar15 = 0;
                    }
                    else {
                      if (bVar7 == 6) {
                        uVar28 = *(ulonglong *)(lVar27 + 0x38) >> 0x3b;
                      }
                      uVar15 = *(undefined8 *)(lVar27 + 0x30);
                    }
                    puVar29[0xf] = uVar15;
                    puVar29[0x10] = uVar28 << 0x3b | 0xc00000527800b400;
                    *(undefined4 *)((longlong)puVar29 + 0x1c) = 0;
                    if (puVar29 != (undefined8 *)0x0) {
                      LOCK();
                      *(int *)(puVar29 + 1) = *(int *)(puVar29 + 1) + 1;
                      UNLOCK();
                    }
                    local_c8.s.LowPart._0_1_ = 1;
                    FUN_1447439e4(puVar29);
                    puVar26 = (undefined8 *)param_1[300];
                    param_1[300] = (longlong)puVar29;
                    if (puVar26 != (undefined8 *)0x0) {
                      LOCK();
                      piVar25 = (int *)(puVar26 + 1);
                      *piVar25 = *piVar25 + -1;
                      UNLOCK();
                      if (*piVar25 == 0) {
                        (**(code **)*puVar26)(puVar26,1);
                      }
                    }
                    plVar21 = local_f0;
                    lVar11 = *(longlong *)(lVar11 + 0x20);
                    uVar28 = (ulonglong)local_104;
                    if (*(char *)(lVar11 + 1) == '\x03') {
                      puVar26 = (undefined8 *)**(undefined8 **)(lVar11 + 0x10);
LAB_1435c31d0:
                      if (puVar26 == (undefined8 *)0x0) {
                        puVar26 = (undefined8 *)0x0;
                      }
                      else {
                        LOCK();
                        *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
                        UNLOCK();
                      }
                    }
                    else {
                      puVar26 = (undefined8 *)0x0;
                      if ((lVar11 != 0) && (*(char *)(lVar11 + 1) == '\x02')) {
                        puVar26 = *(undefined8 **)(lVar11 + 0x10);
                        goto LAB_1435c31d0;
                      }
                    }
                    local_e0 = param_1[300];
                    if (local_e0 != 0) {
                      LOCK();
                      *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
                      UNLOCK();
                    }
                    FUN_14002c244(puVar26,&local_e0);
                    if (puVar26 != (undefined8 *)0x0) {
                      LOCK();
                      piVar25 = (int *)(puVar26 + 1);
                      *piVar25 = *piVar25 + -1;
                      UNLOCK();
                      if (*piVar25 == 0) {
                        (**(code **)*puVar26)(puVar26,1);
                      }
                    }
                    if (puVar14 != (undefined8 *)0x0) {
                      LOCK();
                      piVar25 = (int *)(puVar14 + 1);
                      *piVar25 = *piVar25 + -1;
                      UNLOCK();
                      if (*piVar25 == 0) {
                        (**(code **)*puVar14)(puVar14,1);
                      }
                    }
                    if (*DAT_14caf3688 == 0) {
                      *(undefined1 *)(param_1 + 9) = 2;
                    }
                    else {
                      *(undefined2 *)(param_1 + 9) = 0x400;
                    }
                    goto LAB_1435c29d4;
                  }
                  *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
                  LOCK();
                  uVar9 = *puVar17;
                  *puVar17 = *puVar17 + uVar10 + 1;
                  UNLOCK();
                  if ((uVar9 ^ uVar10) != 0xffffffff) goto LAB_1435c2eed;
                  puVar17 = (uint *)*puVar1;
                  *puVar17 = 0xffffffff;
                  *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
                  puVar17[0x12] = 0;
                  *puVar1 = puVar17;
                  uVar28 = (longlong)puVar17 + 0x5f;
                  uVar10 = 0;
                } while( true );
              }
            }
            if (DAT_14caf3c9c == 0) {
              FUN_1435c3640(param_1);
            }
            FUN_1435c3904(param_1);
          }
LAB_1435c29d4:
          if ((((*(byte *)(param_1 + 0x12f) & 1) != 0) &&
              ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) &&
             ((lVar11 = param_1[0x24], lVar11 == 0 ||
              (((*(byte *)(lVar11 + 0x9f) & 0x40) != 0 || ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0)
               ))))) {
            *(byte *)((longlong)param_1 + 0x693) = *(byte *)((longlong)param_1 + 0x693) | 1;
            FUN_1435c33e2(param_1);
          }
        }
      }
    }
  }
LAB_1435c1f2e:
  if (((double)LVar24.QuadPart != -NAN) &&
     (QueryPerformanceCounter(&local_c8), (char)uVar28 == '\0')) {
    plVar21[1] = plVar21[1] + (local_c8.QuadPart - (longlong)LVar24);
    *plVar21 = *plVar21 + 1;
  }
LAB_1435c1d78:
  FUN_147af14b0(local_d8);
  if ((local_90 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c33e2 FUN_1435c33e2 body=605 status=ok
// SIG undefined FUN_1435c33e2(void)

void FUN_1435c33e2(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_78 [32];
  byte local_58;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  local_58 = *(byte *)((longlong)param_1 + 0x691) >> 7;
  FUN_147af13d2(local_50,lVar4,0,0);
  for (plVar1 = param_1; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[4]) {
    if ((*(uint *)(plVar1 + 1) & 0x30) != 0) goto LAB_1435c360e;
  }
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (lVar4 == 0) {
    FUN_1435bf592(param_1,1);
    *(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) & 0x6d | 0x12;
    goto LAB_1435c360e;
  }
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0) {
    FUN_147c0d426(param_1,0);
  }
  *(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) & 0x6d | 0x12;
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x11d);
  if (0 < (int)*(uint *)(param_1 + 0x11d)) {
    lVar6 = 0;
    bVar7 = false;
    do {
      while (plVar1 = *(longlong **)(param_1[0x11c] + lVar6 * 8), plVar1 == (longlong *)0x0) {
LAB_1435c34f2:
        lVar6 = lVar6 + 1;
        if ((int)uVar5 <= lVar6) {
          if (!bVar7) goto LAB_1435c35cc;
          goto LAB_1435c3572;
        }
      }
      if ((*(byte *)(plVar1 + 0x2c) & 2) == 0) {
        (**(code **)(*plVar1 + 0x148))(plVar1);
        uVar5 = (ulonglong)*(uint *)(param_1 + 0x11d);
        goto LAB_1435c34f2;
      }
      if (0 < (int)uVar5) {
        lVar8 = 0;
        do {
          if ((lVar6 != lVar8) &&
             (plVar2 = *(longlong **)(param_1[0x11c] + lVar8 * 8), plVar2 != (longlong *)0x0)) {
            (**(code **)(*plVar2 + 0x170))(plVar2,plVar1);
            uVar5 = (ulonglong)*(uint *)(param_1 + 0x11d);
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)uVar5);
      }
      (**(code **)*plVar1)(plVar1,1);
      *(undefined8 *)(param_1[0x11c] + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
      uVar5 = (ulonglong)(int)param_1[0x11d];
      bVar7 = true;
    } while (lVar6 < (longlong)uVar5);
LAB_1435c3572:
    FUN_147c01524(param_1);
    if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
      bVar3 = *(byte *)((longlong)param_1 + 0x9d);
      if ((bVar3 & 1) != 0) {
        if ((param_1[0x16] != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0))
        goto LAB_1435c35cc;
        bVar3 = *(byte *)((longlong)param_1 + 0x9d);
      }
      *(byte *)((longlong)param_1 + 0x9d) = bVar3 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
    }
  }
LAB_1435c35cc:
  (**(code **)(*param_1 + 0x3b0))(param_1,1);
  fVar10 = (float)*(double *)(lVar4 + 0x6d0);
  *(float *)((longlong)param_1 + 0x3c4) = fVar10;
  lVar4 = param_1[0x15];
  if ((lVar4 != 0) && (fVar9 = (float)FUN_1449734f0(lVar4), fVar9 < fVar10)) {
    *(float *)(lVar4 + 0x1a8) = fVar10;
  }
LAB_1435c360e:
  FUN_147af14b0(local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c3640 FUN_1435c3640 body=707 status=ok
// SIG undefined FUN_1435c3640(void)

void FUN_1435c3640(longlong *param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  byte bVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined8 unaff_RDI;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  LARGE_INTEGER LVar16;
  undefined1 auStack_88 [32];
  byte local_68;
  undefined1 local_58 [16];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar1 = *(byte *)((longlong)param_1 + 0x691);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar5 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar5 != 2)) {
    uVar11 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),2);
    if (iVar5 != 1) goto LAB_1435c36a2;
    DVar6 = FUN_140ad26c0();
    DVar7 = GetCurrentThreadId();
    if (DVar6 != DVar7) goto LAB_1435c36a2;
  }
  uVar11 = 0;
LAB_1435c36a2:
  lVar8 = param_1[0x16];
  if (lVar8 == 0) {
    lVar8 = FUN_1448abda6(param_1);
  }
  local_68 = bVar1 >> 7;
  FUN_147af13d2(local_58,lVar8,0,uVar11);
  (**(code **)(*param_1 + 0x400))(param_1);
  lVar8 = param_1[0x16];
  if ((((lVar8 == 0) && (lVar8 = FUN_1448abda6(param_1), lVar8 == 0)) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 || (lVar8 = FUN_14005c7aa(lVar8), lVar8 == 0)))) {
    bVar4 = true;
    lVar8 = 0;
    LVar16.QuadPart = -1;
  }
  else {
    QueryPerformanceCounter(&local_48);
    bVar4 = false;
    LVar16 = local_48;
  }
  *(undefined4 *)(param_1 + 0x12e) = 0;
  iVar5 = (int)param_1[0x11d];
  if (0 < iVar5) {
    uVar14 = 0;
    do {
      plVar2 = *(longlong **)(param_1[0x11c] + uVar14 * 8);
      uVar15 = uVar14 + 1;
      lVar10 = (longlong)iVar5;
      if (((plVar2 != (longlong *)0x0) && (lVar3 = plVar2[1], lVar3 != 0)) &&
         ((lVar12 = plVar2[3], lVar12 != 0 && ((*(byte *)(lVar12 + 0x2c) & 1) != 0)))) {
        if (*(char *)((longlong)param_1 + 0x691) < '\0') {
          bVar1 = *(byte *)(*(longlong *)(lVar3 + 0x20) + 0xf3);
          bVar9 = *(byte *)(lVar3 + 0x35);
          if (bVar1 < *(byte *)(lVar3 + 0x35)) {
            bVar9 = bVar1;
          }
          if (bVar9 < *(byte *)((longlong)param_1 + 0x69e)) {
            (**(code **)(*plVar2 + 0xf8))(plVar2,CONCAT71((int7)((ulonglong)lVar3 >> 8),1));
            *(byte *)((longlong)plVar2 + 0x161) = *(byte *)((longlong)plVar2 + 0x161) | 4;
            if ((*(byte *)(plVar2[1] + 0x38) & 1) != 0) {
              *(byte *)(plVar2 + 0x2c) = *(byte *)(plVar2 + 0x2c) & 0xfe;
            }
          }
          else {
            *(int *)(param_1 + 0x12e) = (int)param_1[0x12e] + 1;
            (**(code **)(*plVar2 + 0xf8))(plVar2,0);
            *(byte *)((longlong)plVar2 + 0x161) = *(byte *)((longlong)plVar2 + 0x161) & 0xfb;
            *(byte *)(plVar2 + 0x2c) = *(byte *)(plVar2 + 0x2c) | 1;
          }
        }
        else {
          *(int *)(param_1 + 0x12e) = (int)param_1[0x12e] + 1;
        }
        uVar13 = CONCAT71((int7)((ulonglong)lVar12 >> 8),(char)param_1[0xd2]) & 0xffffffffffffff02;
        (**(code **)(*plVar2 + 0x20))
                  (plVar2,(int)param_1[0x12d],CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1));
        (**(code **)(*plVar2 + 0x210))(plVar2,uVar14 & 0xffffffff);
        *(int *)((longlong)param_1 + 0x96c) =
             *(int *)((longlong)param_1 + 0x96c) + *(int *)((longlong)plVar2 + 0x18c);
        iVar5 = (int)param_1[0x11d];
        lVar10 = (longlong)iVar5;
      }
      uVar14 = uVar15;
    } while ((longlong)uVar15 < lVar10);
  }
  if ((*(byte *)((longlong)param_1 + 0x694) & 1) != 0) {
    *(undefined1 *)((longlong)param_1 + 0x694) = 0;
  }
  if ((LVar16.QuadPart != -1) && (QueryPerformanceCounter(&local_48), !bVar4)) {
    LOCK();
    *(longlong *)(lVar8 + 0x10) =
         *(longlong *)(lVar8 + 0x10) + (local_48.QuadPart - (longlong)LVar16);
    UNLOCK();
  }
  FUN_147af14b0(local_58);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c3904 FUN_1435c3904 body=4175 status=ok
// SIG undefined FUN_1435c3904(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c3904(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auVar6 [16];
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
  undefined1 auVar18 [16];
  bool bVar19;
  char cVar20;
  int iVar21;
  DWORD DVar22;
  DWORD DVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  LARGE_INTEGER *pLVar27;
  byte bVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  bool bVar31;
  undefined8 unaff_RDI;
  byte bVar32;
  LARGE_INTEGER LVar33;
  bool bVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar39;
  undefined1 auVar38 [16];
  double dVar40;
  undefined1 in_XMM1 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  undefined1 in_XMM2 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 in_XMM3 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 in_XMM4 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 in_XMM5 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  LARGE_INTEGER LVar52;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  LARGE_INTEGER LVar55;
  double _X;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double _X_00;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar59 [16];
  LARGE_INTEGER LVar60;
  LONG LVar61;
  LARGE_INTEGER LVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  longlong lVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar75 [16];
  undefined1 auStack_168 [32];
  LARGE_INTEGER *local_148;
  undefined1 local_140;
  longlong local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER LStack_120;
  LARGE_INTEGER local_118;
  LARGE_INTEGER LStack_110;
  double local_108;
  LARGE_INTEGER local_100;
  char local_f8;
  undefined1 local_f0 [16];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  bVar32 = *(byte *)(param_1 + 0x691);
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar21 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar21 != 2)) {
    uVar25 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),2);
    if (iVar21 == 1) {
      DVar22 = FUN_140ad26c0();
      DVar23 = GetCurrentThreadId();
      if (DVar22 == DVar23) goto LAB_1435c494d;
    }
  }
  else {
LAB_1435c494d:
    uVar25 = 0;
  }
  lVar24 = *(longlong *)(param_1 + 0xb0);
  if (lVar24 == 0) {
    lVar24 = FUN_1448abda6(param_1);
  }
  local_148 = (LARGE_INTEGER *)CONCAT71(local_148._1_7_,bVar32 >> 7);
  FUN_147af13d2(local_f0,lVar24,0,uVar25 & 0xffffffff);
  lVar24 = *(longlong *)(param_1 + 0xb0);
  if ((((lVar24 == 0) && (lVar24 = FUN_1448abda6(param_1), lVar24 == 0)) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 || (lVar24 = FUN_14005c7aa(lVar24), lVar24 == 0)))) {
    bVar19 = true;
    lVar24 = 0;
    LVar33.QuadPart = -1;
  }
  else {
    QueryPerformanceCounter(&local_128);
    bVar19 = false;
    LVar33 = local_128;
  }
  auVar38 = _DAT_149931e80;
  bVar32 = *(byte *)(param_1 + 0x693);
  if (((bVar32 & 8) != 0) && ((longlong)*(int *)(param_1 + 0x850) != 0)) {
    uVar25 = (longlong)*(int *)(param_1 + 0x850) * 0xe0 - 0xe0U >> 5;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = uVar25;
    auVar42._8_4_ = SUB164(auVar41 * ZEXT816(0x2492492492492493),8);
    auVar42._0_8_ = uVar25 / 7;
    auVar42._12_4_ = (int)(uVar25 / 0x700000000);
    puVar29 = (undefined1 *)(*(longlong *)(param_1 + 0x848) + 0xdf8);
    uVar30 = 0;
    auVar41 = pmovsxbq(in_XMM1,0xf0e);
    auVar44 = pmovsxbq(in_XMM2,0xd0c);
    auVar46 = pmovsxbq(in_XMM3,0xb0a);
    auVar48 = pmovsxbq(in_XMM4,0x908);
    auVar50 = pmovsxbq(in_XMM5,0x706);
    auVar53 = pmovsxbq(unaff_XMM6,0x504);
    auVar56 = pmovsxbq(unaff_XMM7,0x302);
    auVar59 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar63._8_4_ = (int)uVar30;
      auVar63._0_8_ = uVar30;
      auVar63._12_4_ = (int)(uVar30 >> 0x20);
      auVar65 = auVar42 | auVar38;
      auVar67 = (auVar63 | auVar59) ^ auVar38;
      lVar26 = auVar65._0_8_;
      auVar68._0_8_ = -(ulonglong)(lVar26 < auVar67._0_8_);
      lVar66 = auVar65._8_8_;
      auVar68._8_8_ = -(ulonglong)(lVar66 < auVar67._8_8_);
      auVar75 = pshuflw(unaff_XMM14,auVar68,0xe8);
      auVar67._8_4_ = 0xffffffff;
      auVar67._0_8_ = 0xffffffffffffffff;
      auVar67._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar75 ^ auVar67,auVar75 ^ auVar67);
      if ((auVar67._0_4_ & 1) != 0) {
        puVar29[-0xd20] = 0;
      }
      auVar68 = packssdw(auVar68,auVar68);
      auVar75._8_4_ = 0xffffffff;
      auVar75._0_8_ = 0xffffffffffffffff;
      auVar75._12_4_ = 0xffffffff;
      auVar68 = packssdw(auVar68 ^ auVar75,auVar68 ^ auVar75);
      auVar68 = packsswb(auVar68,auVar68);
      if ((auVar68[1] & 1) != 0) {
        puVar29[-0xc40] = 0;
      }
      auVar68 = (auVar63 | auVar56) ^ auVar38;
      auVar69._0_8_ = -(ulonglong)(lVar26 < auVar68._0_8_);
      auVar69._8_8_ = -(ulonglong)(lVar66 < auVar68._8_8_);
      auVar67 = packssdw(auVar67,auVar69);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar6,auVar67 ^ auVar6);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[2] & 1) != 0) {
        puVar29[-0xb60] = 0;
      }
      auVar68 = pshufhw(auVar69,auVar69,0x84);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar68 = packssdw(auVar68 ^ auVar7,auVar68 ^ auVar7);
      auVar68 = packsswb(auVar68,auVar68);
      if ((auVar68[3] & 1) != 0) {
        puVar29[-0xa80] = 0;
      }
      auVar68 = (auVar63 | auVar53) ^ auVar38;
      auVar70._0_8_ = -(ulonglong)(lVar26 < auVar68._0_8_);
      auVar70._8_8_ = -(ulonglong)(lVar66 < auVar68._8_8_);
      auVar67 = pshuflw(auVar67,auVar70,0xe8);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar8,auVar67 ^ auVar8);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[4] & 1) != 0) {
        puVar29[-0x9a0] = 0;
      }
      auVar68 = packssdw(auVar70,auVar70);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar68 = packssdw(auVar68 ^ auVar9,auVar68 ^ auVar9);
      auVar68 = packsswb(auVar68,auVar68);
      if ((auVar68[5] & 1) != 0) {
        puVar29[-0x8c0] = 0;
      }
      auVar68 = (auVar63 | auVar50) ^ auVar38;
      auVar71._0_8_ = -(ulonglong)(lVar26 < auVar68._0_8_);
      auVar71._8_8_ = -(ulonglong)(lVar66 < auVar68._8_8_);
      auVar67 = packssdw(auVar67,auVar71);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar10,auVar67 ^ auVar10);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[6] & 1) != 0) {
        puVar29[-0x7e0] = 0;
      }
      auVar68 = pshufhw(auVar71,auVar71,0x84);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar68 = packssdw(auVar68 ^ auVar11,auVar68 ^ auVar11);
      auVar68 = packsswb(auVar68,auVar68);
      if ((auVar68[7] & 1) != 0) {
        puVar29[-0x700] = 0;
      }
      auVar68 = (auVar63 | auVar48) ^ auVar38;
      auVar72._0_8_ = -(ulonglong)(lVar26 < auVar68._0_8_);
      auVar72._8_8_ = -(ulonglong)(lVar66 < auVar68._8_8_);
      auVar67 = pshuflw(auVar67,auVar72,0xe8);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar12,auVar67 ^ auVar12);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[8] & 1) != 0) {
        puVar29[-0x620] = 0;
      }
      auVar68 = packssdw(auVar72,auVar72);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar68 = packssdw(auVar68 ^ auVar13,auVar68 ^ auVar13);
      auVar68 = packsswb(auVar68,auVar68);
      if ((auVar68[9] & 1) != 0) {
        puVar29[-0x540] = 0;
      }
      auVar68 = (auVar63 | auVar46) ^ auVar38;
      auVar73._0_8_ = -(ulonglong)(lVar26 < auVar68._0_8_);
      auVar73._8_8_ = -(ulonglong)(lVar66 < auVar68._8_8_);
      auVar67 = packssdw(auVar67,auVar73);
      auVar14._8_4_ = 0xffffffff;
      auVar14._0_8_ = 0xffffffffffffffff;
      auVar14._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar14,auVar67 ^ auVar14);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[10] & 1) != 0) {
        puVar29[-0x460] = 0;
      }
      auVar68 = pshufhw(auVar73,auVar73,0x84);
      auVar15._8_4_ = 0xffffffff;
      auVar15._0_8_ = 0xffffffffffffffff;
      auVar15._12_4_ = 0xffffffff;
      auVar68 = packssdw(auVar68 ^ auVar15,auVar68 ^ auVar15);
      auVar68 = packsswb(auVar68,auVar68);
      if ((auVar68[0xb] & 1) != 0) {
        puVar29[-0x380] = 0;
      }
      auVar68 = (auVar63 | auVar44) ^ auVar38;
      auVar74._0_8_ = -(ulonglong)(lVar26 < auVar68._0_8_);
      auVar74._8_8_ = -(ulonglong)(lVar66 < auVar68._8_8_);
      auVar67 = pshuflw(auVar67,auVar74,0xe8);
      auVar16._8_4_ = 0xffffffff;
      auVar16._0_8_ = 0xffffffffffffffff;
      auVar16._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar16,auVar67 ^ auVar16);
      unaff_XMM14 = packsswb(auVar67,auVar67);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar29[-0x2a0] = 0;
      }
      auVar67 = packssdw(auVar74,auVar74);
      auVar17._8_4_ = 0xffffffff;
      auVar17._0_8_ = 0xffffffffffffffff;
      auVar17._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar17,auVar67 ^ auVar17);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[0xd] & 1) != 0) {
        puVar29[-0x1c0] = 0;
      }
      auVar67 = (auVar63 | auVar41) ^ auVar38;
      auVar64._0_8_ = -(ulonglong)(lVar26 < auVar67._0_8_);
      auVar64._8_8_ = -(ulonglong)(lVar66 < auVar67._8_8_);
      auVar67 = packssdw(auVar65,auVar64);
      auVar65._8_4_ = 0xffffffff;
      auVar65._0_8_ = 0xffffffffffffffff;
      auVar65._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar65,auVar67 ^ auVar65);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[0xe] & 1) != 0) {
        puVar29[-0xe0] = 0;
      }
      auVar67 = pshufhw(auVar64,auVar64,0x84);
      auVar18._8_4_ = 0xffffffff;
      auVar18._0_8_ = 0xffffffffffffffff;
      auVar18._12_4_ = 0xffffffff;
      auVar67 = packssdw(auVar67 ^ auVar18,auVar67 ^ auVar18);
      auVar67 = packsswb(auVar67,auVar67);
      if ((auVar67[0xf] & 1) != 0) {
        *puVar29 = 0;
      }
      uVar30 = uVar30 + 0x10;
      puVar29 = puVar29 + 0xe00;
    } while ((uVar25 / 7 + 0x10 & 0xfffffffffffffff0) != uVar30);
    bVar32 = *(byte *)(param_1 + 0x693);
  }
  *(byte *)(param_1 + 0x693) = bVar32 & 0xf7;
  puVar2 = *(undefined8 **)(param_1 + 0x960);
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x960) = 0;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if ((*(byte *)(param_1 + 0x693) & 0x20) == 0) goto LAB_1435c4670;
  *(byte *)(param_1 + 0x693) = *(byte *)(param_1 + 0x693) & 0xdf;
  if (DAT_14caf3c9c == 0) {
    iVar21 = *(int *)(param_1 + 0x8e8);
    if (0 < iVar21) {
      lVar26 = 1;
      do {
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + -8 + lVar26 * 8);
        if ((((plVar3 != (longlong *)0x0) && ((*(byte *)(plVar3 + 0x2c) & 1) != 0)) &&
            (plVar3[1] != 0)) && ((plVar3[3] != 0 && ((*(byte *)(plVar3[3] + 0x2c) & 1) != 0)))) {
          uVar25 = CONCAT71((int7)(int3)((uint)iVar21 >> 8),*(undefined1 *)(param_1 + 0x690)) &
                   0xffffffffffffff02;
          (**(code **)(*plVar3 + 0x140))
                    (plVar3,*(undefined4 *)(param_1 + 0x968),
                     CONCAT71((int7)(uVar25 >> 8),(byte)uVar25 >> 1));
          iVar21 = *(int *)(param_1 + 0x8e8);
        }
        bVar5 = lVar26 < iVar21;
        lVar26 = lVar26 + 1;
      } while (bVar5);
    }
    lVar26 = *(longlong *)(param_1 + 0xb0);
    if (((lVar26 != 0) || (lVar26 = FUN_1448abda6(param_1), lVar26 != 0)) &&
       (plVar3 = *(longlong **)(lVar26 + 0x110), plVar3 != (longlong *)0x0)) {
      if (0 < *(int *)(param_1 + 0x788)) {
        (**(code **)(*plVar3 + 0x638))(plVar3,param_1,param_1 + 0x780);
      }
      if (0 < *(int *)(param_1 + 0x798)) {
        (**(code **)(*plVar3 + 0x640))(plVar3,param_1,param_1 + 0x790);
      }
      if (0 < *(int *)(param_1 + 0x7a8)) {
        (**(code **)(*plVar3 + 0x648))(plVar3,param_1,param_1 + 0x7a0);
      }
      if (0 < *(int *)(param_1 + 0x7b8)) {
        (**(code **)(*plVar3 + 0x650))(plVar3,param_1,param_1 + 0x7b0);
      }
    }
  }
  FUN_145a44eb6(*(undefined8 *)(param_1 + 0x7c0),*(undefined4 *)(param_1 + 0x7c8));
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  if (*(int *)(param_1 + 0x7cc) != 0) {
    FUN_147c0d276(param_1 + 0x7c0,0);
  }
  *(byte *)(param_1 + 0x691) = *(byte *)(param_1 + 0x691) & 0xfb;
  lVar26 = *(longlong *)(param_1 + 0xb0);
  if (lVar26 == 0) {
    lVar26 = FUN_1448abda6(param_1);
  }
  if (((((*(byte *)(param_1 + 0x9e) & 0x10) == 0) || ((*(byte *)(param_1 + 0x690) & 0x10) != 0)) ||
      (-1 < *(char *)(param_1 + 0x691))) ||
     ((*(int *)(param_1 + 0x970) != 0 ||
      ((float)*(double *)(lVar26 + 0x6d0) <
       *(float *)(param_1 + 0x744) + *(float *)(*(longlong *)(param_1 + 0x668) + 0xf8))))) {
    *(float *)(param_1 + 0x744) = (float)*(double *)(lVar26 + 0x6d0);
    if (*(longlong *)(param_1 + 0x960) != 0) {
      FUN_1435c0142(param_1,1);
    }
    if (*(char *)(param_1 + 0x69f) == '\0') {
      if (*(int *)(param_1 + 0x8e8) < 1) {
        bVar5 = true;
        bVar31 = false;
LAB_1435c420b:
        if ((*(longlong *)(param_1 + 0x668) != 0) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x668) + 0xed) & 4) != 0)) {
          FUN_1435c33e2(param_1);
        }
      }
      else {
        bVar5 = true;
        lVar26 = 0;
        bVar31 = false;
        bVar32 = 1;
        local_130 = lVar24;
        do {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar26 * 8);
          if (((plVar3 != (longlong *)0x0) && (lVar24 = plVar3[3], lVar24 != 0)) &&
             ((*(byte *)(plVar3 + 0x2c) & 1) != 0)) {
            bVar32 = bVar32 & (*(byte *)((longlong)plVar3 + 0x161) & 8) >> 3;
            if ((*(byte *)(lVar24 + 0x2c) & 1) == 0) {
              if (*(longlong *)(lVar24 + 0x20) != 0) {
                bVar34 = -1 < *(char *)(*(longlong *)(lVar24 + 0x20) + 0x37);
LAB_1435c4102:
                bVar5 = (bool)(bVar34 & bVar5);
              }
            }
            else if (*(int *)(*(longlong *)(lVar24 + 0x30) + 0x114) < 1) {
              cVar20 = (**(code **)(*plVar3 + 0x1f0))(plVar3);
              bVar28 = *(byte *)(param_1 + 0x690);
              if (cVar20 != '\0') goto LAB_1435c413c;
              if ((bVar28 & 0x10) != 0) {
                bVar34 = *(int *)((longlong)plVar3 + 0x18c) == 0;
                goto LAB_1435c4102;
              }
LAB_1435c41d2:
              bVar5 = false;
            }
            else {
              bVar28 = *(byte *)(param_1 + 0x690);
LAB_1435c413c:
              if ((~bVar28 & 0x12) == 0) {
                bVar5 = (bool)(bVar5 & *(int *)((longlong)plVar3 + 0x18c) == 0);
              }
              else {
                cVar20 = (**(code **)(*plVar3 + 0xd8))(plVar3);
                if (cVar20 == '\0') goto LAB_1435c41d2;
                if ((*(byte *)(plVar3 + 0x2c) & 4) != 0) {
                  iVar21 = *(int *)(param_1 + 0x8e8);
                  if (0 < iVar21) {
                    lVar24 = 0;
                    do {
                      if ((lVar26 != lVar24) &&
                         (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar24 * 8),
                         plVar4 != (longlong *)0x0)) {
                        (**(code **)(*plVar4 + 0x170))(plVar4,plVar3);
                        iVar21 = *(int *)(param_1 + 0x8e8);
                      }
                      lVar24 = lVar24 + 1;
                    } while (lVar24 < iVar21);
                  }
                  (**(code **)*plVar3)(plVar3,1);
                  *(undefined8 *)(*(longlong *)(param_1 + 0x8e0) + lVar26 * 8) = 0;
                  bVar31 = true;
                }
              }
            }
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < *(int *)(param_1 + 0x8e8));
        lVar24 = local_130;
        if (bVar32 != 0) goto LAB_1435c420b;
      }
      if (bVar31) {
        FUN_147c01524(param_1);
      }
      if (!bVar5) goto LAB_1435c4252;
      bVar32 = 1;
      if ((*(byte *)(param_1 + 0x690) & 1) == 0) {
        FUN_1435bf47a(param_1);
      }
    }
    else {
LAB_1435c4252:
      bVar32 = 0;
    }
    *(byte *)(param_1 + 0x690) = *(byte *)(param_1 + 0x690) & 0xfe | bVar32;
  }
  else {
    FUN_1435bf26c(param_1,0,1,0);
  }
  if (((((*(byte *)(param_1 + 0x692) & 4) == 0) && ((*(byte *)(param_1 + 0x690) & 1) == 0)) &&
      ((*(byte *)(*(longlong *)(param_1 + 0x668) + 0xec) & 2) == 0)) &&
     (bVar32 = *(byte *)(param_1 + 0x693), (bVar32 & 2) == 0)) {
    fVar35 = *(float *)(param_1 + 0x968) + *(float *)(param_1 + 0x738);
    *(float *)(param_1 + 0x738) = fVar35;
    if (fVar35 < *(float *)(param_1 + 0x73c) || fVar35 == *(float *)(param_1 + 0x73c)) {
      DVar22 = SUB84(DAT_14c8464e8,0);
      LVar61 = (LONG)((ulonglong)DAT_14c8464e8 >> 0x20);
      iVar21 = *(int *)(param_1 + 0x8e8);
      LVar62 = DAT_14c8464e0;
      LVar55 = DAT_14c8464f0;
      LVar60 = DAT_14c8464e0;
      dVar37 = DAT_14c8464e8;
      LVar52 = DAT_14c8464f0;
      if (0 < iVar21) {
        lVar26 = 0;
        cVar20 = '\0';
        do {
          plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar26 * 8);
          if (((plVar3 != (longlong *)0x0) && (plVar3[1] != 0)) &&
             ((plVar3[3] != 0 && ((*(byte *)(plVar3[3] + 0x2c) & 1) != 0)))) {
            (**(code **)(*plVar3 + 0x60))(plVar3,&local_128);
            if (local_f8 == '\0' || cVar20 == '\0') {
              if (local_f8 != '\0') {
                DVar22 = LStack_120.s.LowPart;
                LVar61 = LStack_120.s.HighPart;
                cVar20 = local_f8;
                LVar52 = local_100;
                LVar55 = local_118;
                dVar37 = local_108;
                LVar60 = LStack_110;
                LVar62 = local_128;
              }
            }
            else {
              if ((double)local_128 <= (double)LVar62) {
                LVar62 = local_128;
              }
              if ((double)LStack_120 <= (double)CONCAT44(LVar61,DVar22)) {
                DVar22 = LStack_120.s.LowPart;
                LVar61 = LStack_120.s.HighPart;
              }
              if ((double)local_118 <= (double)LVar55) {
                LVar55 = local_118;
              }
              if ((double)LVar60 <= (double)LStack_110) {
                LVar60 = LStack_110;
              }
              if (dVar37 <= local_108) {
                dVar37 = local_108;
              }
              if ((double)LVar52 <= (double)local_100) {
                LVar52 = local_100;
              }
            }
            iVar21 = *(int *)(param_1 + 0x8e8);
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 < iVar21);
      }
      dVar43 = *(double *)(param_1 + 0x160) - *(double *)(param_1 + 0x178);
      if ((dVar43 < (double)LVar62) &&
         (dVar36 = *(double *)(param_1 + 0x160) + *(double *)(param_1 + 0x178),
         (double)LVar62 < dVar36)) {
        dVar47 = *(double *)(param_1 + 0x168) - *(double *)(param_1 + 0x180);
        if ((dVar47 <= (double)CONCAT44(LVar61,DVar22) && (double)CONCAT44(LVar61,DVar22) != dVar47)
           && (dVar40 = *(double *)(param_1 + 0x168) + *(double *)(param_1 + 0x180),
              (double)CONCAT44(LVar61,DVar22) <= dVar40 && dVar40 != (double)CONCAT44(LVar61,DVar22)
              )) {
          dVar49 = *(double *)(param_1 + 0x170) - *(double *)(param_1 + 0x188);
          if ((((dVar49 < (double)LVar55) &&
               (dVar45 = *(double *)(param_1 + 0x170) + *(double *)(param_1 + 0x188),
               (double)LVar55 < dVar45)) && (dVar43 < (double)LVar60)) &&
             (((((double)LVar60 < dVar36 && (dVar47 < dVar37)) && (dVar37 < dVar40)) &&
              ((dVar49 < (double)LVar52 && ((double)LVar52 < dVar45)))))) goto LAB_1435c44bb;
        }
      }
      bVar32 = *(byte *)(param_1 + 0x693);
    }
    *(byte *)(param_1 + 0x693) = bVar32 | 2;
  }
LAB_1435c44bb:
  if ((*(byte *)(param_1 + 0x693) & 2) != 0) {
    auVar38 = *(undefined1 (*) [16])(param_1 + 0x1b0);
    dVar43 = auVar38._0_8_;
    dVar36 = auVar38._8_8_;
    dVar37 = *(double *)(param_1 + 0x1c0);
    pLVar27 = *(LARGE_INTEGER **)(param_1 + 0x230);
    if (pLVar27 == (LARGE_INTEGER *)0x0) {
      pLVar27 = (LARGE_INTEGER *)FUN_14001cc68(0x40,0x10);
      LVar62 = DAT_14c8463d8;
      *pLVar27 = DAT_14c8463d0;
      pLVar27[1] = LVar62;
      LVar62 = DAT_14c8463e8;
      pLVar27[2] = DAT_14c8463e0;
      pLVar27[3] = LVar62;
      LVar62 = DAT_14c846500;
      pLVar27[4] = DAT_14c8464f8;
      pLVar27[5] = LVar62;
      pLVar27[6] = DAT_14c846508;
      *(LARGE_INTEGER **)(param_1 + 0x230) = pLVar27;
    }
    auVar41 = _DAT_1499387d0;
    if ((((((double)pLVar27[4] != dVar43) || (NAN((double)pLVar27[4]) || NAN(dVar43))) ||
         ((double)pLVar27[5] != dVar36)) ||
        ((NAN((double)pLVar27[5]) || NAN(dVar36) || ((double)pLVar27[6] != dVar37)))) ||
       (NAN((double)pLVar27[6]) || NAN(dVar37))) {
      auVar53._8_8_ = 0;
      auVar53._0_8_ = dVar37;
      dVar47 = (double)DAT_1499387d0;
      dVar40 = DAT_1499387d0._8_8_;
      auVar38 = divpd(auVar38,_DAT_1499387d0);
      auVar42 = divpd(auVar53,_DAT_1499387d0);
      auVar38 = roundpd(auVar38,auVar38,3);
      auVar42 = roundpd(auVar42,auVar42,3);
      auVar57._0_8_ = dVar43 - auVar38._0_8_ * dVar47;
      auVar57._8_8_ = dVar36 - auVar38._8_8_ * dVar40;
      auVar56._0_8_ = dVar37 - auVar42._0_8_ * dVar47;
      auVar56._8_8_ = 0.0 - auVar42._8_8_ * dVar40;
      auVar54._0_8_ = auVar57._0_8_ + dVar47;
      auVar54._8_8_ = auVar57._8_8_ + dVar40;
      auVar50._0_8_ = auVar56._0_8_ + dVar47;
      auVar50._8_8_ = auVar56._8_8_ + dVar40;
      auVar38._8_8_ = -(ulonglong)(0.0 <= auVar57._8_8_);
      auVar38._0_8_ = -(ulonglong)(0.0 <= auVar57._0_8_);
      auVar42 = blendvpd(auVar54,auVar57,auVar38);
      auVar44._8_8_ = -(ulonglong)(0.0 <= auVar56._8_8_);
      auVar44._0_8_ = -(ulonglong)(0.0 <= auVar56._0_8_);
      auVar38 = blendvpd(auVar50,auVar56,auVar44);
      auVar59._0_8_ = auVar42._0_8_ + -360.0;
      auVar59._8_8_ = auVar42._8_8_ + -360.0;
      auVar51._0_8_ = auVar38._0_8_ + -360.0;
      auVar51._8_8_ = auVar38._8_8_ + 0.0;
      auVar46._8_8_ = -(ulonglong)(180.0 < auVar42._8_8_);
      auVar46._0_8_ = -(ulonglong)(180.0 < auVar42._0_8_);
      auVar42 = blendvpd(auVar42,auVar59,auVar46);
      auVar48._8_8_ = -(ulonglong)(180.0 < auVar38._8_8_);
      auVar48._0_8_ = -(ulonglong)(180.0 < auVar38._0_8_);
      auVar38 = blendvpd(auVar38,auVar51,auVar48);
      *(undefined1 (*) [16])(pLVar27 + 4) = auVar42;
      dVar37 = auVar38._0_8_;
      pLVar27[6].QuadPart = (LONGLONG)dVar37;
      auVar58._8_8_ = 0;
      auVar58._0_8_ = dVar37;
      auVar38 = divpd(auVar42,auVar41);
      auVar41 = divpd(auVar58,auVar41);
      auVar38 = roundpd(auVar38,auVar38,3);
      auVar41 = roundpd(auVar41,auVar41,3);
      dVar49 = (auVar42._0_8_ - auVar38._0_8_ * dVar47) * 0.008726646259971648;
      dVar45 = (auVar42._8_8_ - auVar38._8_8_ * dVar40) * 0.008726646259971648;
      _X = (dVar37 - auVar41._0_8_ * dVar47) * 0.008726646259971648;
      _X_00 = (0.0 - auVar41._8_8_ * dVar40) * 0.008726646259971648;
      dVar37 = sin(dVar49);
      dVar43 = sin(dVar45);
      dVar36 = sin(_X);
      sin(_X_00);
      dVar47 = cos(dVar49);
      dVar40 = cos(dVar45);
      dVar49 = cos(_X);
      cos(_X_00);
      *pLVar27 = (LARGE_INTEGER)(dVar37 * dVar43 * dVar49 - dVar47 * dVar40 * dVar36);
      pLVar27[1] = (LARGE_INTEGER)(-(dVar37 * dVar40 * dVar49) - dVar47 * dVar43 * dVar36);
      pLVar27[2] = (LARGE_INTEGER)(-(dVar40 * dVar37 * dVar36) + dVar43 * dVar47 * dVar49);
      pLVar27[3] = (LARGE_INTEGER)(dVar43 * dVar37 * dVar36 + dVar40 * dVar47 * dVar49);
    }
    local_128 = *pLVar27;
    LStack_120 = pLVar27[1];
    local_118 = pLVar27[2];
    LStack_110 = pLVar27[3];
    local_148 = &local_128;
    local_140 = 0;
    FUN_140092404(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),0);
    *(undefined4 *)(param_1 + 0x738) = 0;
    *(byte *)(param_1 + 0x693) = *(byte *)(param_1 + 0x693) & 0xfd;
  }
  if (*(char *)(param_1 + 0x6f0) == '\x01') {
    dVar43 = *(double *)(param_1 + 0x260);
    uVar39 = *(undefined8 *)(param_1 + 0x268);
    dVar37 = *(double *)(param_1 + 0x270);
    dVar36 = (double)(float)(-(uint)(0.0 < *(float *)(param_1 + 0x968)) &
                            (uint)(1.0 / *(float *)(param_1 + 0x968)));
    *(double *)(param_1 + 0x710) = (dVar43 - *(double *)(param_1 + 0x6f8)) * dVar36;
    *(double *)(param_1 + 0x718) =
         (*(double *)(param_1 + 0x268) - *(double *)(param_1 + 0x700)) * dVar36;
    *(double *)(param_1 + 0x720) = (dVar37 - *(double *)(param_1 + 0x708)) * dVar36;
  }
  else {
    *(LARGE_INTEGER *)(param_1 + 0x720) = DAT_14c8464f0;
    dVar37 = DAT_14c8464e8;
    *(LARGE_INTEGER *)(param_1 + 0x710) = DAT_14c8464e0;
    *(double *)(param_1 + 0x718) = dVar37;
    dVar43 = *(double *)(param_1 + 0x260);
    uVar39 = *(undefined8 *)(param_1 + 0x268);
    dVar37 = *(double *)(param_1 + 0x270);
  }
  *(undefined1 *)(param_1 + 0x6f0) = 1;
  *(double *)(param_1 + 0x6f8) = dVar43;
  *(undefined8 *)(param_1 + 0x700) = uVar39;
  *(double *)(param_1 + 0x708) = dVar37;
  bVar32 = *(byte *)(param_1 + 0x692);
  if ((char)bVar32 < '\0') {
    FUN_147c01d18(param_1);
    bVar32 = *(byte *)(param_1 + 0x692);
  }
  if ((bVar32 & 0x10) == 0) {
    FUN_1448c6f34(param_1);
  }
LAB_1435c4670:
  if (((double)LVar33.QuadPart != -NAN) && (QueryPerformanceCounter(&local_128), !bVar19)) {
    *(longlong *)(lVar24 + 0x18) =
         *(longlong *)(lVar24 + 0x18) + (local_128.QuadPart - (longlong)LVar33);
  }
  FUN_147af14b0(local_f0);
  if ((local_e0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c4954 FUN_1435c4954 body=804 status=ok
// SIG undefined FUN_1435c4954(void)

void FUN_1435c4954(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  
  for (lVar12 = param_1; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x20)) {
    if ((*(uint *)(lVar12 + 8) & 0x30) != 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x960) != 0) {
    FUN_1435c0142(param_1,1);
  }
  lVar12 = *(longlong *)(param_1 + 0x668);
  if (lVar12 != 0) {
    *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(lVar12 + 0x58);
    *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(lVar12 + 0x5c);
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) | 0x80;
    iVar4 = DAT_14cb0cbf8;
    cVar5 = FUN_147a0499e(param_1);
    plVar1 = (longlong *)(param_1 + 0x8e0);
    iVar10 = *(int *)(param_1 + 0x8e8);
    lVar12 = (longlong)*(int *)(*(longlong *)(param_1 + 0x668) + 0x68);
    FUN_147c01d60(plVar1);
    iVar9 = *(int *)(param_1 + 0x730);
    bVar3 = 0 < iVar9;
    *(byte *)(param_1 + 0x690) = *(byte *)(param_1 + 0x690) & (iVar10 != 0 | 0xfeU);
    if (lVar12 < 1) {
      if (iVar9 < 1) {
        return;
      }
    }
    else {
      lVar11 = 0;
      bVar6 = false;
      do {
        while (plVar2 = *(longlong **)
                         (*(longlong *)(*(longlong *)(param_1 + 0x668) + 0x60) + lVar11 * 8),
              plVar2 == (longlong *)0x0) {
LAB_1435c4af6:
          lVar11 = lVar11 + 1;
          if (lVar11 == lVar12) {
            if (!bVar6) goto joined_r0x0001435c4c6d;
            goto LAB_1435c4c58;
          }
        }
        if (iVar10 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = *(longlong **)(*plVar1 + lVar11 * 8);
        }
        if ((((int)(uint)*(byte *)(param_1 + 0x1fc) <= iVar4) &&
            ((*(uint *)((longlong)plVar2 + 0x5c) & 1 << ((byte)iVar4 & 0x1f)) != 0)) &&
           ((longlong)(int)plVar2[9] != 0)) {
          lVar8 = 0;
          do {
            if ((*(longlong *)(plVar2[8] + lVar8) != 0) &&
               ((*(byte *)(*(longlong *)(plVar2[8] + lVar8) + 0x2c) & 1) != 0)) {
              if (cVar5 != '\0') {
                if (plVar7 == (longlong *)0x0) {
                  plVar7 = (longlong *)(**(code **)(*plVar2 + 0x2a0))(plVar2);
                  *(longlong **)(*(longlong *)(param_1 + 0x8e0) + lVar11 * 8) = plVar7;
                  if (plVar7 == (longlong *)0x0) goto LAB_1435c4af6;
                }
                else {
                  (**(code **)(*plVar7 + 0xf8))(plVar7,0);
                  (**(code **)(*plVar7 + 0x100))(plVar7,0);
                }
                *(byte *)(plVar7 + 0x2c) = *(byte *)(plVar7 + 0x2c) | 1;
                (**(code **)(*plVar7 + 8))(plVar7,plVar2,param_1);
                (**(code **)(*plVar7 + 0x10))(plVar7);
                if ((int)plVar2[9] <= iVar9) {
                  iVar9 = (int)plVar2[9];
                }
                bVar3 = (bool)(bVar3 | iVar10 != 0);
                goto LAB_1435c4af6;
              }
              break;
            }
            lVar8 = lVar8 + 8;
          } while ((longlong)(int)plVar2[9] * 8 != lVar8);
        }
        if (plVar7 == (longlong *)0x0) goto LAB_1435c4af6;
        (**(code **)*plVar7)(plVar7);
        *(undefined8 *)(*plVar1 + lVar11 * 8) = 0;
        lVar11 = lVar11 + 1;
        bVar6 = true;
      } while (lVar11 != lVar12);
LAB_1435c4c58:
      FUN_147c01524(param_1);
joined_r0x0001435c4c6d:
      if (!bVar3) {
        return;
      }
    }
    if (iVar9 != *(int *)(param_1 + 0x730)) {
      *(int *)(param_1 + 0x730) = iVar9;
    }
    iVar10 = *(int *)(param_1 + 0x8e8);
    if (0 < iVar10) {
      lVar12 = 0;
      do {
        lVar11 = *(longlong *)(*plVar1 + lVar12 * 8);
        if (lVar11 != 0) {
          iVar10 = *(int *)(param_1 + 0x730);
          *(int *)(lVar11 + 0x20) = iVar10;
          iVar9 = *(int *)(*(longlong *)(lVar11 + 8) + 0x48);
          if (iVar9 <= iVar10) {
            iVar10 = iVar9 + -1;
            *(int *)(lVar11 + 0x20) = iVar10;
          }
          *(undefined8 *)(lVar11 + 0x18) =
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar11 + 8) + 0x40) + (longlong)iVar10 * 8);
          iVar10 = *(int *)(param_1 + 0x8e8);
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 < iVar10);
    }
  }
  return;
}



// FUNCTION 1435c4c78 FUN_1435c4c78 body=650 status=ok
// SIG undefined FUN_1435c4c78(void)

void FUN_1435c4c78(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  byte bVar7;
  bool bVar8;
  undefined4 uVar9;
  
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1,1);
  }
  if (DAT_14c7616a0 != '\x01') {
    param_1[0xcd] = 0;
    goto LAB_1435c4e16;
  }
  *(byte *)((longlong)param_1 + 0x692) = *(byte *)((longlong)param_1 + 0x692) | 0x80;
  plVar5 = param_1;
  if (param_1 == (longlong *)0x0) {
    bVar8 = false;
  }
  else {
    do {
      bVar8 = (*(uint *)(plVar5 + 1) & 0x30) != 0;
      if (bVar8) break;
      plVar1 = plVar5 + 4;
      plVar5 = (longlong *)*plVar1;
    } while ((longlong *)*plVar1 != (longlong *)0x0);
  }
  bVar3 = *(byte *)(param_1 + 0xd2);
  bVar7 = (~bVar3 & *(byte *)((longlong)param_1 + 0x9e)) * '\x02' & 0x20;
  *(byte *)(param_1 + 0xd2) = bVar3 & 0xde | bVar7;
  lVar6 = param_1[0xcd];
  if (lVar6 != param_2) {
    *(byte *)(param_1 + 0xd2) = bVar3 & 0xd2 | bVar7;
  }
  if (!bVar8) {
    FUN_1435bf592(param_1,lVar6 != param_2);
  }
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0xcd] = param_2;
    if (param_2 != 0) goto LAB_1435c4d32;
    uVar9 = 0;
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0xcd] = param_2;
LAB_1435c4d32:
    uVar9 = *(undefined4 *)(param_2 + 0x58);
  }
  *(undefined4 *)(param_1 + 0xe5) = uVar9;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  (**(code **)(*param_1 + 0x3b0))(param_1,0);
  if ((param_2 == 0) || ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0)) goto LAB_1435c4e16;
  if ((*(byte *)((longlong)param_1 + 0x9e) & 8) == 0) {
    if (bVar8 || (*(byte *)(param_1 + 0xd2) & 0x20) == 0) goto LAB_1435c4dad;
LAB_1435c4d99:
    (**(code **)(*param_1 + 0xa60))(param_1,0);
  }
  else {
    if (!bVar8) goto LAB_1435c4d99;
LAB_1435c4dad:
    FUN_1435bf71c();
  }
  if (((lVar6 != param_2) || (param_1[0xb5] == 0)) &&
     ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0)) {
    bVar3 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar3 & 1) != 0) {
      if ((param_1[0x16] != 0) || (lVar6 = FUN_1448abda6(), lVar6 != 0)) goto LAB_1435c4e16;
      bVar3 = *(byte *)((longlong)param_1 + 0x9d);
    }
    *(byte *)((longlong)param_1 + 0x9d) = bVar3 | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
LAB_1435c4e16:
  if ((((*(byte *)((longlong)param_1 + 0x9d) & 1) == 0) && ((int)param_1[0xcf] != 0)) &&
     ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0)) {
    *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 1;
    FUN_1401057d4(param_1);
    FUN_14010586c(&DAT_14cad0140,param_1);
  }
  *(undefined4 *)(param_1 + 0xcf) = 0;
  if (*(int *)((longlong)param_1 + 0x67c) != 0) {
    FUN_1474ba72a(param_1 + 0xce,0);
  }
  iVar4 = (int)param_1[0x11d];
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(param_1[0x11c] + lVar6 * 8);
      if (lVar2 != 0) {
        *(undefined4 *)(lVar2 + 0x20) = 0;
        iVar4 = (int)param_1[0x11d];
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  if ((((DAT_14c7616f8 != 0) && (param_1[0xcd] != 0)) &&
      ((*(byte *)(param_1[0xcd] + 0xed) & 2) != 0)) &&
     (((int)param_1[0xb] < 2 && ((int)param_1[0x28] == 0)))) {
    *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xfb;
  }
  return;
}



// FUNCTION 1435c4f02 FUN_1435c4f02 body=2142 status=ok
// SIG undefined FUN_1435c4f02(void)

void FUN_1435c4f02(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  char *pcVar12;
  longlong *plVar13;
  longlong lVar14;
  LARGE_INTEGER LVar15;
  byte bVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auStack_c8 [32];
  byte local_a8;
  LARGE_INTEGER local_98;
  longlong lStack_90;
  longlong local_88;
  undefined1 local_80 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = param_1[0x16];
  if ((((lVar10 == 0) && (lVar10 = FUN_1448abda6(param_1), lVar10 == 0)) || (DAT_14caf6068 < 1)) ||
     (((DAT_14c7616fc & 1) == 0 || (lVar10 = FUN_14005c7aa(lVar10), lVar10 == 0)))) {
    LVar15.QuadPart = 0xffffffffffffffff;
    bVar4 = true;
    lVar10 = 0;
  }
  else {
    QueryPerformanceCounter(&local_98);
    bVar4 = false;
    LVar15 = local_98;
  }
  plVar13 = param_1;
  if (param_1[300] != 0) {
    FUN_1435c0142(param_1,1);
  }
  for (; plVar13 != (longlong *)0x0; plVar13 = (longlong *)plVar13[4]) {
    if ((*(uint *)(plVar13 + 1) & 0x30) != 0) goto LAB_1435c501d;
  }
  if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) goto LAB_1435c501d;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar7 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1435c501d;
    bVar7 = DAT_14c8442b8 & 1;
  }
  if (bVar7 != 0) goto LAB_1435c501d;
  cVar5 = FUN_147bfddaa(param_1[0xcd]);
  if (cVar5 == '\0') {
    param_1[0xcd] = 0;
  }
  *(undefined1 *)(param_1 + 0xde) = 0;
  lVar11 = DAT_14c8464e8;
  param_1[0xdf] = DAT_14c8464e0;
  param_1[0xe0] = lVar11;
  param_1[0xe1] = DAT_14c8464f0;
  lVar11 = DAT_14c8464e8;
  param_1[0xe2] = DAT_14c8464e0;
  param_1[0xe3] = lVar11;
  param_1[0xe4] = DAT_14c8464f0;
  dVar20 = (double)param_1[0x4e] * 1.52587890625e-05 + 0.5;
  dVar22 = (double)param_1[0x4d] * 1.52587890625e-05 + 0.5;
  dVar18 = (double)param_1[0x4c] * 1.52587890625e-05 + 0.5;
  auVar21._0_4_ = (float)dVar20;
  auVar21._4_4_ = (int)((ulonglong)dVar20 >> 0x20);
  auVar21._8_8_ = 0;
  auVar23._0_4_ = (float)dVar22;
  auVar23._4_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar23._8_8_ = 0;
  auVar19._0_4_ = (float)dVar18;
  auVar19._4_4_ = (int)((ulonglong)dVar18 >> 0x20);
  auVar19._8_8_ = 0;
  auVar19 = blendps(auVar19,ZEXT816(0),0xe);
  auVar19 = roundps(auVar19,auVar19,1);
  auVar23 = blendps(auVar23,ZEXT816(0),0xe);
  auVar23 = roundps(auVar23,auVar23,1);
  auVar21 = blendps(auVar21,ZEXT816(0),0xe);
  auVar21 = roundps(auVar21,auVar21,1);
  *(int *)(param_1 + 0x119) = auVar19._0_4_;
  *(int *)((longlong)param_1 + 0x8cc) = auVar23._0_4_;
  *(int *)(param_1 + 0x11a) = auVar21._0_4_;
  lVar11 = param_1[0x16];
  if (lVar11 == 0) {
    lVar11 = FUN_1448abda6(param_1);
  }
  if ((((int)(uint)*(byte *)((longlong)param_1 + 0x1fc) <= DAT_14cb0cbf8) && (DAT_14c7616a0 != '\0')
      ) && (param_1[0xcd] != 0)) {
    bVar16 = *(byte *)(lVar11 + 0x152) < 7 & 0x6aU >> (*(byte *)(lVar11 + 0x152) & 0x1f);
    bVar7 = *(byte *)((longlong)param_1 + 0x693);
    bVar6 = bVar7 & 0xfb;
    *(byte *)((longlong)param_1 + 0x693) = bVar6;
    if (bVar16 == 1 && (*(byte *)((longlong)param_1 + 0x691) & 0x20) != 0) {
      if (((((*(int *)((longlong)param_1 + 0x7d4) == 0) ||
            (uVar1 = *(uint *)(param_1 + 0xfa), (int)uVar1 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar1 ||
            ((plVar13 = (longlong *)
                        ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)((longlong)param_1 + 0x7d4)))
            )))) || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (lVar2 = *plVar13, lVar2 == 0))
      {
        FUN_147c01e32(param_1,lVar11);
      }
      else {
        lVar3 = param_1[0x24];
        if (((lVar3 == lVar2) && (param_1[0x25] == param_1[0xfb])) &&
           ((longlong)*(int *)(lVar3 + 0x140) != 0)) {
          lVar14 = 0;
          do {
            if (*(longlong **)(*(longlong *)(lVar3 + 0x138) + lVar14) == param_1)
            goto LAB_1435c53f5;
            lVar14 = lVar14 + 8;
          } while ((longlong)*(int *)(lVar3 + 0x140) * 8 != lVar14);
        }
        *(byte *)((longlong)param_1 + 0x693) = bVar7;
        FUN_147c01e32(param_1,lVar11);
        param_1[0xff] = param_1[0x35];
        param_1[0xfd] = param_1[0x33];
        param_1[0xfe] = param_1[0x34];
        param_1[0x100] = param_1[0x36];
        param_1[0x101] = param_1[0x37];
        param_1[0x102] = param_1[0x38];
        param_1[0x103] = param_1[0x39];
        param_1[0x104] = param_1[0x3a];
        param_1[0x105] = param_1[0x3b];
        local_98.QuadPart =
             CONCAT44(local_98.s.HighPart,
                      CONCAT13(*(byte *)((longlong)param_1 + 0x691) >> 6,(int3)param_1[0xfc])) &
             0xffffffff01ffffff;
        (**(code **)(*param_1 + 0x490))(param_1,lVar2,&local_98,param_1[0xfb]);
        bVar6 = *(byte *)((longlong)param_1 + 0x693);
LAB_1435c53f5:
        *(byte *)((longlong)param_1 + 0x693) = bVar6 | 4;
        param_2 = '\x01';
      }
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
    if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
      *(float *)((longlong)param_1 + 0x744) = (float)*(double *)(lVar11 + 0x6d0);
      *(undefined1 *)((longlong)param_1 + 0x69e) = 0;
      FUN_147c0d426(param_1,1);
    }
    local_a8 = *(byte *)((longlong)param_1 + 0x691) >> 7;
    FUN_147af13d2(local_80,lVar11,0,0);
    if (param_2 != '\0') {
      *(byte *)((longlong)param_1 + 0x691) = *(byte *)((longlong)param_1 + 0x691) | 4;
    }
    *(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) & 0xec;
    FUN_1402a37f2(param_1,1);
    *(byte *)(param_1 + 0xd2) = *(byte *)(param_1 + 0xd2) & 0xdf;
    (**(code **)(*param_1 + 0x3b0))(param_1,1);
    if (bVar16 == 0) {
      *(byte *)((longlong)param_1 + 0x692) = *(byte *)((longlong)param_1 + 0x692) | 0x40;
      iVar9 = (int)param_1[0x11d];
      if (iVar9 == 0) goto LAB_1435c54f6;
      if (0 < iVar9) {
        lVar11 = 0;
        do {
          plVar13 = *(longlong **)(param_1[0x11c] + lVar11 * 8);
          if (plVar13 != (longlong *)0x0) {
            (**(code **)(*plVar13 + 0x58))();
            plVar13 = *(longlong **)(param_1[0x11c] + lVar11 * 8);
            (**(code **)(*plVar13 + 0xf8))(plVar13,0);
            (**(code **)(**(longlong **)(param_1[0x11c] + lVar11 * 8) + 0x100))();
            iVar9 = (int)param_1[0x11d];
          }
          lVar11 = lVar11 + 1;
        } while (lVar11 < iVar9);
      }
    }
    else {
      local_98 = *(LARGE_INTEGER *)(param_1 + 0x4c);
      lStack_90 = param_1[0x4d];
      local_88 = param_1[0x4e];
      uVar8 = (**(code **)(*param_1 + 0xbc0))(param_1);
      (**(code **)(*param_1 + 0xbc8))(param_1,uVar8);
      if ((((int)param_1[0x11d] == 0) || ((*(byte *)((longlong)param_1 + 0x9e) & 8) == 0)) ||
         ((*(byte *)((longlong)param_1 + 0x691) & 8) != 0)) {
LAB_1435c54f6:
        FUN_1435bf71c(param_1);
      }
    }
    *(byte *)((longlong)param_1 + 0x691) = *(byte *)((longlong)param_1 + 0x691) | 8;
    *(undefined4 *)((longlong)param_1 + 0x974) = 0;
    bVar7 = *(byte *)((longlong)param_1 + 0x692);
    if ((bVar7 & 8) == 0) {
      if (param_1[0xcd] != 0) {
        pcVar12 = (char *)(param_1[0xcd] + 0xef);
        goto LAB_1435c5535;
      }
    }
    else {
      pcVar12 = (char *)((longlong)param_1 + 0x69d);
LAB_1435c5535:
      if (*pcVar12 != '\x01') {
        local_98 = *(LARGE_INTEGER *)(param_1 + 0x4c);
        lStack_90 = param_1[0x4d];
        local_88 = param_1[0x4e];
        iVar9 = (**(code **)(*param_1 + 0xbc0))(param_1);
        if (iVar9 != (int)param_1[0xe6]) {
          FUN_1402a37f2(param_1,1);
          (**(code **)(*param_1 + 0x3b0))(param_1,1);
        }
        (**(code **)(*param_1 + 0xbc8))(param_1,iVar9);
        bVar7 = *(byte *)((longlong)param_1 + 0x692);
      }
    }
    if ((*(float *)(param_1 + 0xe5) != 0.0) || (NAN(*(float *)(param_1 + 0xe5)))) {
      *(byte *)((longlong)param_1 + 0x692) = bVar7 | 0x14;
      FUN_147c01dd8(param_1);
      fVar24 = *(float *)(param_1 + 0xe5);
      if (0.0 < fVar24) {
        fVar17 = *(float *)((longlong)param_1 + 0x72c);
        fVar25 = 0.0;
        do {
          (**(code **)(*param_1 + 0x3a0))(param_1);
          fVar25 = fVar25 + (float)(~-(uint)(0.0 < fVar17) & 0x3d03126f |
                                   (~-(uint)(fVar17 <= fVar24) & (uint)fVar24 |
                                   -(uint)(fVar17 <= fVar24) & (uint)fVar17) & -(uint)(0.0 < fVar17)
                                   );
        } while (fVar25 < *(float *)(param_1 + 0xe5));
      }
      *(undefined4 *)(param_1 + 0xe5) = 0;
      bVar7 = *(byte *)((longlong)param_1 + 0x692) & 0xeb | bVar7 & 0x10;
      *(byte *)((longlong)param_1 + 0x692) = bVar7;
    }
    if (((((bVar7 & 2) == 0) && (*(char *)((longlong)param_1 + 0x691) < '\0')) &&
        (*(byte *)(param_1[0xcd] + 0x170) < *(byte *)((longlong)param_1 + 0x69e))) &&
       ((fVar24 = *(float *)(param_1[0xcd] + 0xf8), fVar24 == 0.0 && (!NAN(fVar24))))) {
      FUN_1435bf26c(param_1,0,1,0);
    }
    FUN_147af14b0(local_80);
  }
  if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
    bVar7 = *(byte *)((longlong)param_1 + 0x9d);
    if ((bVar7 & 1) == 0) {
LAB_1435c51db:
      *(byte *)((longlong)param_1 + 0x9d) = bVar7 | 1;
      FUN_1401057d4(param_1);
      FUN_14010586c(&DAT_14cad0140,param_1);
      goto LAB_1435c51fa;
    }
    lVar11 = param_1[0x16];
    if (lVar11 == 0) {
      lVar11 = FUN_1448abda6(param_1);
      if (lVar11 != 0) goto LAB_1435c51fa;
      bVar7 = *(byte *)((longlong)param_1 + 0x9d);
      goto LAB_1435c51db;
    }
  }
  else {
LAB_1435c51fa:
    lVar11 = param_1[0x16];
    if (lVar11 == 0) {
      lVar11 = FUN_1448abda6(param_1);
    }
  }
  if (((*(byte *)(param_1 + 0xd2) & 0x10) == 0) &&
     (lVar11 != 0 && (*(byte *)(param_1 + 0xd2) & 1) == 0)) {
    fVar24 = (float)*(double *)(lVar11 + 0x6d0);
    *(float *)((longlong)param_1 + 0x3c4) = fVar24;
    lVar11 = param_1[0x15];
    if ((lVar11 != 0) && (fVar17 = (float)FUN_1449734f0(lVar11), fVar17 < fVar24)) {
      *(float *)(lVar11 + 0x1a8) = fVar24;
    }
  }
LAB_1435c501d:
  if ((LVar15.QuadPart != 0xffffffffffffffff) && (QueryPerformanceCounter(&local_98), !bVar4)) {
    LOCK();
    *(longlong *)(lVar10 + 0x28) =
         *(longlong *)(lVar10 + 0x28) + (local_98.QuadPart - (longlong)LVar15);
    UNLOCK();
  }
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435c5761 FUN_1435c5761 body=69 status=ok
// SIG undefined FUN_1435c5761(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c5761(void)

{
  _DAT_14caf3748 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c57a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3750,1);
  return;
}



// FUNCTION 1435c57a6 FUN_1435c57a6 body=101 status=ok
// SIG undefined FUN_1435c57a6(void)

void FUN_1435c57a6(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)((longlong)param_1 + 0x69c) != '\x02') {
    return;
  }
  if ((*(byte *)(param_1 + 0xd2) & 1) == 0) {
    *(undefined1 *)((longlong)param_1 + 0x69c) = 3;
                    /* WARNING: Could not recover jumptable at 0x0001435c57d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2b0))(param_1);
    return;
  }
  lVar1 = param_1[0x16];
  if (lVar1 == 0) {
    lVar1 = FUN_1448abda6(param_1);
  }
  FUN_143602bf2(lVar1 + 0x818,param_1);
  return;
}



// FUNCTION 1435c580c FUN_1435c580c body=176 status=ok
// SIG undefined FUN_1435c580c(void)

void FUN_1435c580c(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  uint uVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x6a0);
    lVar5 = (longlong)*(int *)(param_1 + 0x6a8);
    if (0 < lVar5) {
      puVar3 = (undefined4 *)(*plVar1 + 0xc);
      lVar4 = lVar5;
      do {
        if ((*(longlong *)(puVar3 + -3) == param_2) && (*(char *)(puVar3 + -1) == '\x01'))
        goto LAB_1435c589f;
        puVar3 = puVar3 + 0x38;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    uVar2 = *(int *)(param_1 + 0x6a8) + 1;
    *(uint *)(param_1 + 0x6a8) = uVar2;
    if (*(uint *)(param_1 + 0x6ac) < uVar2) {
      FUN_147c0c1bc(plVar1);
    }
    lVar5 = lVar5 * 0xe0;
    memset((void *)(*plVar1 + lVar5),0,0xe0);
    *(longlong *)(*plVar1 + lVar5) = param_2;
    *(undefined1 *)(*plVar1 + 8 + lVar5) = 1;
    puVar3 = (undefined4 *)(*plVar1 + lVar5 + 0xc);
LAB_1435c589f:
    *puVar3 = param_3;
  }
  return;
}



// FUNCTION 1435c58bc FUN_1435c58bc body=183 status=ok
// SIG undefined FUN_1435c58bc(void)

void FUN_1435c58bc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x6a0);
    lVar6 = (longlong)*(int *)(param_1 + 0x6a8);
    if (0 < lVar6) {
      puVar4 = (undefined8 *)(*plVar1 + 0x18);
      lVar5 = lVar6;
      do {
        if ((puVar4[-3] == param_2) && (*(char *)(puVar4 + -2) == '\x03')) goto LAB_1435c594e;
        puVar4 = puVar4 + 0x1c;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    uVar3 = *(int *)(param_1 + 0x6a8) + 1;
    *(uint *)(param_1 + 0x6a8) = uVar3;
    if (*(uint *)(param_1 + 0x6ac) < uVar3) {
      FUN_147c0c1bc(plVar1);
    }
    lVar6 = lVar6 * 0xe0;
    memset((void *)(*plVar1 + lVar6),0,0xe0);
    *(longlong *)(*plVar1 + lVar6) = param_2;
    *(undefined1 *)(*plVar1 + 8 + lVar6) = 3;
    puVar4 = (undefined8 *)(*plVar1 + lVar6 + 0x18);
LAB_1435c594e:
    puVar4[2] = param_3[2];
    uVar2 = param_3[1];
    *puVar4 = *param_3;
    puVar4[1] = uVar2;
  }
  return;
}



// FUNCTION 1435c5974 FUN_1435c5974 body=317 status=ok
// SIG undefined FUN_1435c5974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c5974(longlong param_1,longlong param_2,undefined1 (*param_3) [16])

{
  longlong *plVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  float fVar13;
  float fVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  if (param_2 != 0) {
    auVar11 = maxps(*param_3,_DAT_149e1a200);
    auVar11 = minps(auVar11,_DAT_149e1a210);
    fVar10 = auVar11._0_4_;
    fVar13 = auVar11._4_4_;
    fVar14 = auVar11._8_4_;
    auVar16._4_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar13 + -0x39000000) >> 0x14) * 4);
    auVar16._0_4_ =
         *(undefined4 *)(&DAT_149e1bee0 + (ulonglong)((int)fVar10 + 0xc7000000U >> 0x14) * 4);
    auVar15._0_4_ = (uint)fVar10 >> 0xc;
    auVar15._4_4_ = (uint)fVar13 >> 0xc;
    auVar15._8_4_ = (uint)fVar14 >> 0xc;
    auVar15._12_4_ = (uint)auVar11._12_4_ >> 0xc;
    auVar16._8_4_ =
         *(undefined4 *)
          (&DAT_149e1bee0 + (ulonglong)(ushort)((uint)((int)fVar14 + -0x39000000) >> 0x14) * 4);
    auVar16._12_4_ = 0;
    auVar16 = pmaddwd(auVar15 & _DAT_1499d1ec0 | _DAT_1499378f0,auVar16);
    auVar12._4_4_ = (int)(fVar13 * 0.0 + 0.5) | auVar16._4_4_ >> 0x10;
    auVar12._12_4_ = (int)(auVar11._12_4_ * 255.0 + 0.5) | auVar16._12_4_ >> 0x10;
    auVar12._0_4_ = (int)(fVar14 * 0.0 + 0.5) | auVar16._8_4_ >> 0x10;
    auVar12._8_4_ = (int)(fVar10 * 0.0 + 0.5) | auVar16._0_4_ >> 0x10;
    auVar11 = packssdw(auVar12,auVar12);
    sVar2 = auVar11._0_2_;
    sVar3 = auVar11._2_2_;
    sVar4 = auVar11._4_2_;
    sVar5 = auVar11._6_2_;
    plVar1 = (longlong *)(param_1 + 0x6a0);
    lVar9 = (longlong)*(int *)(param_1 + 0x6a8);
    if (0 < lVar9) {
      puVar7 = (undefined4 *)(*plVar1 + 0x48);
      lVar8 = lVar9;
      do {
        if ((*(longlong *)(puVar7 + -0x12) == param_2) && (*(char *)(puVar7 + -0x10) == '\x05'))
        goto LAB_1435c5a9a;
        puVar7 = puVar7 + 0x38;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar6 = *(int *)(param_1 + 0x6a8) + 1;
    *(uint *)(param_1 + 0x6a8) = uVar6;
    if (*(uint *)(param_1 + 0x6ac) < uVar6) {
      FUN_147c0c1bc(plVar1);
    }
    lVar9 = lVar9 * 0xe0;
    memset((void *)(*plVar1 + lVar9),0,0xe0);
    *(longlong *)(*plVar1 + lVar9) = param_2;
    *(undefined1 *)(*plVar1 + 8 + lVar9) = 5;
    puVar7 = (undefined4 *)(*plVar1 + lVar9 + 0x48);
LAB_1435c5a9a:
    *puVar7 = CONCAT13((0 < sVar5) * (sVar5 < 0x100) * auVar11[6] - (0xff < sVar5),
                       CONCAT12((0 < sVar4) * (sVar4 < 0x100) * auVar11[4] - (0xff < sVar4),
                                CONCAT11((0 < sVar3) * (sVar3 < 0x100) * auVar11[2] - (0xff < sVar3)
                                         ,(0 < sVar2) * (sVar2 < 0x100) * auVar11[0] -
                                          (0xff < sVar2))));
  }
  return;
}



// FUNCTION 1435c5ab2 FUN_1435c5ab2 body=203 status=ok
// SIG undefined FUN_1435c5ab2(void)

void FUN_1435c5ab2(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x6a0);
    lVar4 = (longlong)*(int *)(param_1 + 0x6a8);
    if (0 < lVar4) {
      plVar5 = (longlong *)(*plVar1 + 0x50);
      lVar3 = lVar4;
      do {
        if ((plVar5[-10] == param_2) && ((char)plVar5[-9] == '\x06')) goto LAB_1435c5b49;
        plVar5 = plVar5 + 0x1c;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = *(int *)(param_1 + 0x6a8) + 1;
    *(uint *)(param_1 + 0x6a8) = uVar2;
    if (*(uint *)(param_1 + 0x6ac) < uVar2) {
      FUN_147c0c1bc(plVar1);
    }
    lVar4 = lVar4 * 0xe0;
    memset((void *)(*plVar1 + lVar4),0,0xe0);
    *(longlong *)(*plVar1 + lVar4) = param_2;
    *(undefined1 *)(*plVar1 + 8 + lVar4) = 6;
    plVar5 = (longlong *)(*plVar1 + lVar4 + 0x50);
LAB_1435c5b49:
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *plVar5 = param_3;
  }
  return;
}



// FUNCTION 1435c5b7e FUN_1435c5b7e body=300 status=ok
// SIG undefined FUN_1435c5b7e(void)

void FUN_1435c5b7e(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x6a8);
    if (0 < lVar4) {
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x58);
      lVar2 = lVar4;
      do {
        if ((plVar5[-0xb] == param_2) && ((char)plVar5[-10] == '\a')) {
          if ((char)*(byte *)(param_1 + 0x692) < '\0') {
            bVar3 = 0x80;
          }
          else {
            bVar3 = (*plVar5 != param_3) << 7;
          }
          *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0x7f | bVar3;
          goto LAB_1435c5c76;
        }
        plVar5 = plVar5 + 0x1c;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
    uVar1 = *(int *)(param_1 + 0x6a8) + 1;
    *(uint *)(param_1 + 0x6a8) = uVar1;
    if (*(uint *)(param_1 + 0x6ac) < uVar1) {
      FUN_147c0c1bc();
    }
    lVar4 = lVar4 * 0xe0;
    memset((void *)(*(longlong *)(param_1 + 0x6a0) + lVar4),0,0xe0);
    *(longlong *)(*(longlong *)(param_1 + 0x6a0) + lVar4) = param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x6a0) + 8 + lVar4) = 7;
    if ((char)*(byte *)(param_1 + 0x692) < '\0') {
      bVar3 = 0x80;
    }
    else {
      bVar3 = (*(longlong *)(*(longlong *)(param_1 + 0x6a0) + 0x58 + lVar4) != param_3) << 7;
    }
    *(byte *)(param_1 + 0x692) = *(byte *)(param_1 + 0x692) & 0x7f | bVar3;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 0x6a0) + lVar4 + 0x58);
LAB_1435c5c76:
    if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_3);
    }
    *plVar5 = param_3;
  }
  return;
}



// FUNCTION 1435c5caa FUN_1435c5caa body=362 status=ok
// SIG undefined FUN_1435c5caa(void)

longlong FUN_1435c5caa(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
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
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = (**(code **)(*param_1 + 0xb90))();
  if (iVar1 != -1) {
    if (param_3 != 0) {
      (**(code **)(*param_1 + 0x638))(param_1,iVar1,param_3);
    }
    lVar2 = (**(code **)(*param_1 + 0x610))(param_1,iVar1);
    if (lVar2 != 0) {
      if (DAT_14caec470 == 0) {
        local_40 = &local_28;
        local_28 = FUN_1417df956;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1463eaa20;
        local_48 = &LAB_147bbd9ea;
        local_50 = FUN_1401cf6d7;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x330;
        FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
      }
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) {
        lVar2 = FUN_14090ceee(lVar2,param_1,0);
        (**(code **)(*param_1 + 0x638))(param_1,iVar1,lVar2);
      }
      goto LAB_1435c5d52;
    }
  }
  lVar2 = 0;
LAB_1435c5d52:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c5e16 FUN_1435c5e16 body=71 status=ok
// SIG undefined FUN_1435c5e16(void)

void FUN_1435c5e16(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xb90))();
  if (param_3 == 0 || iVar1 == -1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c5e5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))(param_1,iVar1,param_3,*(code **)(*param_1 + 0x638));
  return;
}



// FUNCTION 1435c5e5e FUN_1435c5e5e body=189 status=ok
// SIG undefined FUN_1435c5e5e(void)

void FUN_1435c5e5e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x28),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x28) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    FUN_147c0dea2(param_2,param_1 + 0x30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c5f1c FUN_1435c5f1c body=149 status=ok
// SIG undefined FUN_1435c5f1c(void)

void FUN_1435c5f1c(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x390);
  if ((*(char *)(lVar1 + 0x2cc) == '\x01') ||
     (*(undefined1 *)(lVar1 + 0x2cc) = 1, (~*(byte *)(lVar1 + 0x9c) & 3) != 0)) goto LAB_1435c5f8e;
  bVar2 = *(byte *)(lVar1 + 0x9d);
  if ((bVar2 & 1) != 0) {
    if (*(longlong *)(lVar1 + 0xb0) != 0) goto LAB_1435c5f8e;
    lVar3 = FUN_1448abda6(lVar1);
    if (lVar3 != 0) goto LAB_1435c5f8e;
    bVar2 = *(byte *)(lVar1 + 0x9d);
  }
  *(byte *)(lVar1 + 0x9d) = bVar2 | 1;
  FUN_1401057d4(lVar1);
  FUN_14010586c(&DAT_14cad0140,lVar1);
LAB_1435c5f8e:
  FUN_147beb9ac(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001435c5fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x3e0) + 0x60))(param_1 + 0x3e0);
  return;
}



// FUNCTION 1435c5fb2 FUN_1435c5fb2 body=71 status=ok
// SIG undefined FUN_1435c5fb2(void)

void FUN_1435c5fb2(longlong param_1)

{
  float fVar1;
  
  FUN_1401b2056();
  fVar1 = *(float *)(param_1 + 0x478);
  if ((fVar1 != 3.4028235e+38) || (NAN(fVar1))) {
    *(double *)(param_1 + 0x420) = (double)fVar1;
    *(undefined8 *)(param_1 + 0x438) = 0;
    *(undefined4 *)(param_1 + 0x478) = 0x7f7fffff;
  }
  return;
}



// FUNCTION 1435c5ff9 FUN_1435c5ff9 body=69 status=ok
// SIG undefined FUN_1435c5ff9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c5ff9(void)

{
  _DAT_14caf3770 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c603b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3778,1);
  return;
}



// FUNCTION 1435c603e FUN_1435c603e body=47 status=ok
// SIG undefined FUN_1435c603e(void)

void FUN_1435c603e(void)

{
  DAT_14caf3c38 = &PTR_FUN_14aa00480;
  FUN_144725486(&DAT_14caf3c38);
  FUN_145f96a94(&DAT_14caf3c38);
  return;
}



// FUNCTION 1435c6091 FUN_1435c6091 body=47 status=ok
// SIG undefined FUN_1435c6091(void)

void FUN_1435c6091(void)

{
  DAT_14caf3a68 = &PTR_FUN_14aa004b0;
  FUN_144725486(&DAT_14caf3a68);
  FUN_1463ef374(&DAT_14caf3a68);
  return;
}



// FUNCTION 1435c60c0 FUN_1435c60c0 body=786 status=ok
// SIG undefined FUN_1435c60c0(void)

void FUN_1435c60c0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong *plVar6;
  size_t sVar7;
  longlong *plVar8;
  char *_Str;
  ulonglong *puVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined2 local_50;
  undefined4 local_4e;
  undefined4 local_48;
  wchar_t *local_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf3a90) && (FUN_144b3d300(&DAT_14caf3a90), DAT_14caf3a90 == -1)) {
    DAT_14caf3a80 = 0x800000014a9ff660;
    local_80 = (char *)CONCAT44(local_80._4_4_,0x15);
    DAT_14caf3a88 = FUN_14577453c();
    DAT_14caf3a8c = '\x01';
    _Init_thread_footer(&DAT_14caf3a90);
  }
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14caf3a80 < 0) {
    _Str = (char *)(DAT_14caf3a80 & 0x7fffffffffffffff);
    if (DAT_14caf3a8c == '\x01') {
      FUN_1446f470e(&local_88,_Str,1);
    }
    else {
      local_80 = _Str;
      if (_Str == (char *)0x0) {
        local_78 = 0;
      }
      else {
        sVar7 = strlen(_Str);
        local_78 = (undefined4)sVar7;
      }
      FUN_14001c09c(&local_88,&local_80,1);
    }
    uVar4 = local_88 & 0xffffffff;
    local_30 = (ulonglong)DAT_14caf3a88 << 0x20;
    DAT_14caf3a80 = uVar4;
  }
  else {
    uVar4 = (ulonglong)DAT_14caf3a88 << 0x20;
    local_30 = DAT_14caf3a80 & 0xffffffff;
  }
  local_30 = local_30 | uVar4;
  local_4e = 0xff000200;
  local_80 = (char *)0x4000009;
  local_5c = 0x20000000200;
  local_54 = 0x10001;
  local_50 = 0x101;
  local_78 = 1;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0x3f800000;
  local_68 = 0x3f800000;
  local_60 = 0;
  local_48 = 0x70;
  local_40 = L"ParticleCurveTexture";
  local_38 = 0;
  local_28 = 0;
  local_64 = ~(-1 << bVar3);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_88,&DAT_14ca85100);
  puVar9 = (ulonglong *)(param_1 + 0x10);
  if (puVar9 != &local_88) {
    uVar4 = *puVar9;
    *puVar9 = local_88;
    local_88 = 0;
    if (uVar4 == 0) goto LAB_1435c62a0;
    LOCK();
    puVar1 = (uint *)(uVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(uVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(uVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = uVar4;
        plVar8 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar10 = plVar6 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar10) {
              plVar6 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  uVar4 = local_88;
  if (local_88 != 0) {
    LOCK();
    puVar1 = (uint *)(local_88 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_88 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_88 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = uVar4;
        plVar8 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar10 = plVar6 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar10) {
              plVar6 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_1435c62a0:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435c63d4 FUN_1435c63d4 body=312 status=ok
// SIG undefined FUN_1435c63d4(void)

undefined4 * FUN_1435c63d4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  ushort uVar1;
  byte bVar2;
  undefined8 *puVar3;
  void *_Dst;
  size_t _Size;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1435c643a;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if ((bVar2 == 0) && (*(int *)(param_3 + 1) != 0)) {
    FUN_147c04d40(param_1 + 0x18,param_2);
    uVar1 = *(ushort *)(param_2 + 1);
    if (uVar1 == 0) {
      return param_2;
    }
    puVar3 = (undefined8 *)FUN_147c04f1c(param_1 + 0x40);
    *(undefined4 *)(puVar3 + 1) = *param_2;
    *(undefined2 *)((longlong)puVar3 + 0xc) = *(undefined2 *)(param_2 + 1);
    _Size = (ulonglong)uVar1 << 2;
    _Dst = (void *)FUN_14001cc68(_Size,0);
    *puVar3 = _Dst;
    memcpy(_Dst,(void *)*param_3,_Size);
    return param_2;
  }
LAB_1435c643a:
  *param_2 = 0;
  *(undefined2 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 1435c650c FUN_1435c650c body=69 status=ok
// SIG undefined FUN_1435c650c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c650c(void)

{
  _DAT_14caf3a98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c654e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3aa0,1);
  return;
}



// FUNCTION 1435c6551 FUN_1435c6551 body=69 status=ok
// SIG undefined FUN_1435c6551(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c6551(void)

{
  _DAT_14caf3ab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435c6593. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3ab8,1);
  return;
}



// FUNCTION 1435c65a4 FUN_1435c65a4 body=41 status=ok
// SIG undefined FUN_1435c65a4(void)

void FUN_1435c65a4(void)

{
  DAT_14caf3b30 = 0;
  if (DAT_14caf3b28 != 0) {
    FUN_1400020a8();
  }
  FUN_146172fb2();
  return;
}



// FUNCTION 1435c65ce FUN_1435c65ce body=234 status=ok
// SIG undefined FUN_1435c65ce(void)

ulonglong FUN_1435c65ce(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 unaff_RBX;
  longlong lVar5;
  
  uVar1 = *(uint *)(DAT_14cb0d2b0 + 0xd98);
  if (param_2 <= uVar1 || (int)uVar1 < 1) {
    uVar2 = *(uint *)(param_1 + 0x194);
    if ((int)*(uint *)(param_1 + 0x194) < (int)param_2) {
      lVar5 = (longlong)(int)param_2;
      uVar3 = FUN_14001fdce(*(undefined8 *)(param_1 + 0x168),*(int *)(param_1 + 0x188) * lVar5,0);
      *(undefined8 *)(param_1 + 0x168) = uVar3;
      if (*(longlong *)(param_1 + 0x170) == 0) {
        *(undefined4 *)(param_1 + 0x194) = 0;
      }
      uVar3 = FUN_14001fdce(*(longlong *)(param_1 + 0x170),lVar5 * 2 + 2,0);
      *(undefined8 *)(param_1 + 0x170) = uVar3;
      lVar4 = (longlong)*(int *)(param_1 + 0x194);
      if (*(int *)(param_1 + 0x194) < (int)param_2) {
        do {
          *(short *)(*(longlong *)(param_1 + 0x170) + lVar4 * 2) = (short)lVar4;
          lVar4 = lVar4 + 1;
        } while (lVar5 != lVar4);
      }
      *(uint *)(param_1 + 0x194) = param_2;
      uVar2 = param_2;
    }
    if (param_3 != '\0') {
      if (*(int *)(*(longlong *)(param_1 + 8) + 0x48) < 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
      }
      if (*(int *)(lVar5 + 0xb4) < (int)uVar2) {
        *(uint *)(lVar5 + 0xb4) = uVar2;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2 <= uVar1 || (int)uVar1 < 1) & 0xffffffff
  ;
}



// FUNCTION 1435c66b8 FUN_1435c66b8 body=334 status=ok
// SIG undefined FUN_1435c66b8(void)

void FUN_1435c66b8(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined4 uVar4;
  
  fVar1 = *(float *)((longlong)param_1 + 0x19c);
  lVar2 = param_1[3];
  fVar3 = (float)(**(code **)(*param_1 + 0x28))(param_1,param_2,lVar2);
  if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
    FUN_147bf6c08(param_1);
  }
  else {
    (**(code **)(*param_1 + 0xe0))(param_1);
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
    param_1[0x47] = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x30);
    (**(code **)(*param_1 + 0x38))(param_1,param_2,lVar2);
    uVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,lVar2,param_3,fVar1 <= 0.0);
    *(undefined4 *)(param_1 + 0x33) = uVar4;
    (**(code **)(*param_1 + 0x40))(param_1,param_2,lVar2);
    if (0 < *(int *)((longlong)param_1 + 0x18c)) {
      (**(code **)(*param_1 + 0xa8))(param_1,param_2);
      (**(code **)(*param_1 + 0x68))(param_1,param_2);
    }
    (**(code **)(*param_1 + 0x48))(param_1,param_2,lVar2);
    FUN_147c05a7c(param_1);
    *(undefined4 *)((longlong)param_1 + 0x20c) = 1;
  }
  *(float *)(param_1 + 0x34) = fVar3 + *(float *)(param_1 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x1a4) = param_2;
  lVar2 = DAT_14c8464e8;
  param_1[0x48] = DAT_14c8464e0;
  param_1[0x49] = lVar2;
  param_1[0x4a] = DAT_14c8464f0;
  return;
}



// FUNCTION 1435c6806 FUN_1435c6806 body=82 status=ok
// SIG undefined FUN_1435c6806(void)

void FUN_1435c6806(longlong *param_1)

{
  if ((param_1[2] != 0) && (*(longlong *)(param_1[2] + 0xb0) == 0)) {
    FUN_1448abda6();
  }
  *(undefined8 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(byte *)(param_1 + 0x2c) = *(byte *)(param_1 + 0x2c) | 1;
                    /* WARNING: Could not recover jumptable at 0x0001435c6851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}



// FUNCTION 1435c6858 FUN_1435c6858 body=2182 status=ok
// SIG undefined FUN_1435c6858(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c6858(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined4 uVar40;
  double local_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  double local_178;
  double local_168;
  double local_158;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  
  lVar20 = *(longlong *)(param_1 + 0x10);
  if (lVar20 == 0) {
    return;
  }
  if (((*(byte *)(lVar20 + 0x692) & 4) == 0) && (*(longlong *)(lVar20 + 0x668) != 0)) {
    local_198 = *(double *)(lVar20 + 0x280);
    dStack_190 = *(double *)(lVar20 + 0x288);
    local_1a0 = *(double *)(lVar20 + 0x290);
    lVar22 = *(longlong *)(param_1 + 0x18);
    if ((*(byte *)(*(longlong *)(lVar20 + 0x668) + 0xec) & 2) == 0) {
      *(undefined8 *)(param_1 + 0x1e8) = DAT_14c8464f0;
      uVar14 = DAT_14c8464e8;
      *(undefined8 *)(param_1 + 0x1d8) = DAT_14c8464e0;
      *(undefined8 *)(param_1 + 0x1e0) = uVar14;
      uVar14 = DAT_14c8464e8;
      *(undefined8 *)(param_1 + 0x1c0) = DAT_14c8464e0;
      *(undefined8 *)(param_1 + 0x1c8) = uVar14;
      *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8464f0;
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      lVar20 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
      iVar17 = *(int *)(lVar20 + 0x40);
      bVar15 = true;
      bVar16 = true;
      if (iVar17 != 0) {
        iVar21 = 0;
        do {
          lVar5 = *(longlong *)(lVar20 + 0x38);
          if (*(longlong *)(lVar5 + (longlong)iVar21 * 8) != 0) {
            lVar19 = FUN_145b50b3e();
            lVar5 = *(longlong *)(lVar5 + (longlong)iVar21 * 8);
            if ((((lVar5 != 0) && (lVar19 != 0)) &&
                (lVar6 = *(longlong *)(lVar5 + 0x10), lVar6 != 0)) &&
               ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar6 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
                 == lVar19 + 0x30)))) {
              dVar8 = *(double *)(lVar5 + 0x30) + -0.5;
              local_1a8 = *(double *)(lVar5 + 0x38) + -0.5;
              goto LAB_1435c6992;
            }
          }
          iVar21 = iVar21 + 1;
        } while (iVar17 != iVar21);
      }
      goto LAB_1435c698b;
    }
  }
  else {
    local_198 = *(double *)(lVar20 + 0x280);
    dStack_190 = *(double *)(lVar20 + 0x288);
    local_1a0 = *(double *)(lVar20 + 0x290);
    lVar22 = *(longlong *)(param_1 + 0x18);
  }
  bVar16 = false;
LAB_1435c698b:
  bVar15 = bVar16;
  dVar8 = -0.5;
  local_1a8 = -0.5;
LAB_1435c6992:
  iVar17 = FUN_147c05fe0(param_1);
  bVar2 = *(byte *)(*(longlong *)(lVar22 + 0x30) + 0x71);
  if ((bVar2 & 1) == 0) {
    local_148 = DAT_14c846400;
    dStack_140 = DAT_14c846408;
    local_158 = DAT_14c846410;
    local_138._8_8_ = DAT_14c846428;
    local_138._0_8_ = DAT_14c846420;
    local_178 = DAT_14c846430;
    local_128._8_8_ = DAT_14c846448;
    local_128._0_8_ = DAT_14c846440;
    local_168 = DAT_14c846450;
    pdVar18 = (double *)&DAT_14c846460;
    local_118 = DAT_14c846470;
  }
  else {
    lVar20 = *(longlong *)(param_1 + 0x10);
    dVar11 = *(double *)(lVar20 + 0x240);
    dVar9 = *(double *)(lVar20 + 0x248);
    dVar10 = *(double *)(lVar20 + 0x250);
    local_118 = *(double *)(lVar20 + 0x270);
    local_158 = *(double *)(lVar20 + 0x280);
    dVar12 = *(double *)(lVar20 + 0x288);
    dVar34 = dVar9 + dVar9;
    dVar27 = dVar10 + dVar10;
    dVar32 = dVar11 * (dVar11 + dVar11);
    local_148 = (1.0 - (dVar10 * dVar27 + dVar9 * dVar34)) * local_158;
    dVar10 = (1.0 - (dVar10 * dVar27 + dVar32)) * dVar12;
    dVar13 = *(double *)(lVar20 + 0x290);
    local_168 = (1.0 - (dVar32 + dVar9 * dVar34)) * dVar13;
    dVar33 = *(double *)(lVar20 + 0x240) * dVar27;
    dVar32 = *(double *)(lVar20 + 600);
    dVar28 = dVar27 * dVar32;
    dVar30 = (dVar11 + dVar11) * *(double *)(lVar20 + 600);
    dVar32 = dVar34 * dVar32;
    dStack_140 = (dVar34 * dVar11 + dVar28) * local_158;
    local_178 = (dVar27 * dVar9 + dVar30) * dVar12;
    local_158 = (dVar33 - dVar32) * local_158;
    dVar9 = (dVar27 * dVar9 - dVar30) * dVar13;
    local_138._8_4_ = SUB84(dVar10,0);
    local_138._0_8_ = (dVar34 * dVar11 - dVar28) * dVar12;
    local_138._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_128._8_4_ = SUB84(dVar9,0);
    local_128._0_8_ = (dVar32 + dVar33) * dVar13;
    local_128._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    pdVar18 = (double *)(lVar20 + 0x260);
  }
  if (*(int *)(param_1 + 0x18c) < 1) {
    dVar12 = 4398046511104.0;
    uVar38 = 0;
    uVar39 = 0xc2900000;
    dVar9 = -4398046511104.0;
    dVar11 = dVar9;
    dVar10 = dVar12;
    dVar32 = dVar12;
  }
  else {
    dVar13 = *pdVar18;
    dVar27 = pdVar18[1];
    bVar3 = *(byte *)(*(longlong *)(param_1 + 8) + 0x37);
    lVar22 = (longlong)iVar17;
    uVar38 = 0;
    uVar39 = 0xc2900000;
    dVar9 = -4398046511104.0;
    dVar12 = 4398046511104.0;
    lVar20 = 0;
    dVar11 = dVar9;
    dVar10 = dVar12;
    dVar32 = dVar12;
    do {
      lVar5 = *(longlong *)(param_1 + 0x168);
      lVar19 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar20 * 2) *
               (longlong)*(int *)(param_1 + 0x188);
      pdVar18 = (double *)(lVar5 + lVar19);
      *(undefined8 *)(lVar5 + 0x10 + lVar19) = *(undefined8 *)(lVar5 + 0x28 + lVar19);
      puVar1 = (undefined8 *)(lVar5 + 0x18 + lVar19);
      uVar14 = puVar1[1];
      *(undefined8 *)(lVar5 + lVar19) = *puVar1;
      ((undefined8 *)(lVar5 + lVar19))[1] = uVar14;
      uVar4 = *(uint *)(lVar5 + 0x6c + lVar19);
      *(uint *)(lVar5 + 0x6c + lVar19) = uVar4 & 0xfdffffff;
      if (((uVar4 >> 0x1a & 1) == 0) && (((uVar4 >> 0x19 & 1) == 0 || ((bVar3 & 1) != 0)))) {
        if ((uVar4 >> 0x1c & 1) == 0) {
          dVar34 = (double)(*(float *)(pdVar18 + 9) * param_2) + pdVar18[5];
          dVar30 = (double)(*(float *)((longlong)pdVar18 + 0x44) * param_2) + pdVar18[4];
          dVar28 = (double)(*(float *)(pdVar18 + 8) * param_2) + pdVar18[3];
        }
        else {
          dVar28 = pdVar18[3];
          dVar30 = pdVar18[4];
          dVar34 = pdVar18[5];
        }
      }
      else {
        dVar28 = pdVar18[3];
        dVar30 = pdVar18[4];
        dVar34 = pdVar18[5];
      }
      dVar33 = 0.0;
      if (bVar15) {
        if (iVar17 == -1) {
          dVar29 = (double)*(float *)(pdVar18 + 0xd);
          dVar24 = (double)*(float *)((longlong)pdVar18 + 100);
          dVar25 = (double)*(float *)(pdVar18 + 0xc);
          uVar7 = DAT_149931180;
          uVar23 = (undefined4)DAT_149931180;
          uVar40 = DAT_149931180._4_4_;
          dVar36 = (double)((ulonglong)(local_1a0 * dVar29) & uVar7);
          dVar37 = (double)((ulonglong)(dStack_190 * dVar24) & uVar7);
          dVar33 = (double)((ulonglong)(local_198 * dVar25) & uVar7);
          if (dVar33 <= dVar37) {
            dVar33 = dVar37;
          }
          if (dVar33 <= dVar36) {
            dVar33 = dVar36;
          }
        }
        else {
          fVar35 = ABS(*(float *)((longlong)pdVar18 + lVar22 + 0x14));
          fVar31 = ABS(*(float *)((longlong)pdVar18 + lVar22 + 0x10));
          fVar26 = ABS(*(float *)((longlong)pdVar18 + lVar22 + 0xc));
          if (fVar26 <= fVar31) {
            fVar26 = fVar31;
          }
          if (fVar26 <= fVar35) {
            fVar26 = fVar35;
          }
          dVar29 = (double)*(float *)(pdVar18 + 0xd);
          dVar24 = (double)*(float *)((longlong)pdVar18 + 100);
          dVar25 = (double)*(float *)(pdVar18 + 0xc);
          uVar23 = 0xffffffff;
          uVar40 = 0x7fffffff;
          dVar33 = (double)fVar26;
        }
        dVar29 = (double)((ulonglong)(dVar29 * 0.0) & CONCAT44(uVar40,uVar23));
        dVar24 = (double)((ulonglong)(dVar24 * local_1a8) & CONCAT44(uVar40,uVar23));
        dVar25 = (double)((ulonglong)(dVar25 * dVar8) & CONCAT44(uVar40,uVar23));
        uVar23 = SUB84(dVar25,0);
        uVar40 = (undefined4)((ulonglong)dVar25 >> 0x20);
        if (dVar25 <= dVar24) {
          uVar23 = SUB84(dVar24,0);
          uVar40 = (undefined4)((ulonglong)dVar24 >> 0x20);
        }
        if ((double)CONCAT44(uVar40,uVar23) <= dVar29) {
          uVar23 = SUB84(dVar29,0);
          uVar40 = (undefined4)((ulonglong)dVar29 >> 0x20);
        }
        dVar33 = (double)CONCAT44(uVar40,uVar23) + dVar33;
      }
      dVar28 = dVar28 + *(double *)(param_1 + 0x240);
      dVar30 = dVar30 + *(double *)(param_1 + 0x248);
      dVar34 = dVar34 + *(double *)(param_1 + 0x250);
      *pdVar18 = *(double *)(param_1 + 0x240) + *pdVar18;
      pdVar18[1] = *(double *)(param_1 + 0x248) + pdVar18[1];
      pdVar18[2] = *(double *)(param_1 + 0x250) + pdVar18[2];
      pdVar18[3] = dVar28;
      pdVar18[4] = dVar30;
      pdVar18[5] = dVar34;
      uVar23 = FUN_1447c7e44(lVar5,0x40c90fdb);
      *(undefined4 *)((longlong)pdVar18 + 0x3c) = uVar23;
      dVar24 = (double)((ulonglong)uVar39 << 0x20);
      if (bVar15) {
        dVar24 = dVar28;
        dVar25 = dVar30;
        if ((bVar2 & 1) != 0) {
          dVar24 = dVar34 * (double)local_128._0_8_ +
                   dVar30 * (double)local_138._0_8_ + dVar28 * local_148 + dVar13;
          dVar25 = dVar34 * (double)local_128._8_8_ +
                   dVar30 * (double)local_138._8_8_ + dVar28 * dStack_140 + dVar27;
          dVar34 = dVar34 * local_168 + dVar28 * local_158 + dVar30 * local_178 + local_118;
        }
        if (dVar24 - dVar33 <= dVar32) {
          dVar32 = dVar24 - dVar33;
        }
        if (dVar9 <= dVar33 + dVar24) {
          dVar9 = dVar33 + dVar24;
        }
        if (dVar25 - dVar33 <= dVar10) {
          dVar10 = dVar25 - dVar33;
        }
        if (dVar11 <= dVar33 + dVar25) {
          dVar11 = dVar33 + dVar25;
        }
        if (dVar34 - dVar33 <= dVar12) {
          dVar12 = dVar34 - dVar33;
        }
        dVar33 = dVar33 + dVar34;
        dVar24 = (double)CONCAT44(uVar39,SUB84(dVar33,0));
        if ((double)CONCAT44(uVar39,uVar38) <= dVar33) {
          uVar38 = SUB84(dVar33,0);
          dVar24 = dVar33;
        }
      }
      uVar39 = (uint)((ulonglong)dVar24 >> 0x20);
      lVar20 = lVar20 + 1;
    } while (lVar20 < *(int *)(param_1 + 0x18c));
  }
  if (bVar15) {
    *(double *)(param_1 + 0x1c0) = dVar32;
    *(double *)(param_1 + 0x1c8) = dVar10;
    *(double *)(param_1 + 0x1d0) = dVar12;
    *(double *)(param_1 + 0x1d8) = dVar9;
    *(double *)(param_1 + 0x1e0) = dVar11;
    *(ulonglong *)(param_1 + 0x1e8) = CONCAT44(uVar39,uVar38);
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
                    /* WARNING: Read-only address (ram,0x000149931180) is written */
  return;
}



// FUNCTION 1435c70de FUN_1435c70de body=1275 status=ok
// SIG undefined FUN_1435c70de(void)

float FUN_1435c70de(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  byte bVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_158 [32];
  int *local_138;
  int *local_130;
  float *local_128;
  byte local_111;
  longlong local_110;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  int local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = param_1[3];
  fVar19 = *(float *)(param_1 + 0x33);
  fVar20 = 0.0;
  iVar11 = 0;
  local_e4 = param_2;
  if (0.0 < *(float *)(param_1[1] + 0x58)) {
    iVar11 = *(int *)(lVar1 + 0x68);
    if (iVar11 < 1) {
      bVar12 = 1;
      iVar8 = 0;
      fVar17 = 0.0;
LAB_1435c74fa:
      fVar20 = (float)FUN_147a77524(*(longlong *)(lVar1 + 0x50) + 0x68,(int)param_1[0x34],param_1[2]
                                    ,0);
      fVar18 = (float)FUN_147c2c0c2(*(undefined8 *)(lVar1 + 0x50));
      fVar15 = (float)FUN_147a77524(*(longlong *)(lVar1 + 0x50) + 0x38,(int)param_1[0x34],param_1[2]
                                    ,0);
      fVar20 = fVar15 * fVar18 * fVar20 + fVar17;
      fVar17 = 0.0;
      if (0.0 <= fVar20) {
        fVar17 = fVar20;
      }
    }
    else {
      local_110 = **(longlong **)(param_1[1] + 0x40);
      local_111 = 1;
      fVar17 = 0.0;
      lVar10 = 0;
      iVar8 = 0;
      bVar12 = 1;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x60) + lVar10 * 8);
        if ((plVar2 != (longlong *)0x0) && ((char)plVar2[5] < '\0')) {
          uVar6 = FUN_147bf6ddc(param_1,*(undefined8 *)
                                         (*(longlong *)(local_110 + 0x60) + lVar10 * 8));
          local_108 = 0;
          local_e8 = 0.0;
          local_128 = &local_e8;
          local_130 = &local_108;
          local_138._0_4_ = param_2;
          bVar5 = (**(code **)(*plVar2 + 0x388))(plVar2,param_1,uVar6,fVar19);
          local_111 = local_111 & bVar5;
          if (local_108 < 1) {
            local_108 = 0;
          }
          fVar20 = 0.0;
          if (0.0 <= local_e8) {
            fVar20 = local_e8;
          }
          fVar17 = fVar17 + fVar20;
          local_ec = 0;
          local_130 = &local_ec;
          local_138 = (int *)CONCAT44(local_138._4_4_,param_2);
          local_e8 = fVar20;
          bVar5 = (**(code **)(*plVar2 + 0x390))(plVar2,param_1,uVar6,fVar19);
          bVar12 = bVar12 & bVar5;
          iVar8 = iVar8 + local_ec;
          iVar11 = *(int *)(lVar1 + 0x68);
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < iVar11);
      if ((local_111 & 1) != 0) goto LAB_1435c74fa;
    }
    if (bVar12 != 0) {
      local_108 = 0;
      (**(code **)(*param_1 + 0x98))(param_1,&local_e4,&local_108);
      iVar8 = iVar8 + local_108;
    }
    fVar18 = (float)FUN_147bff2aa(param_1[1]);
    fVar20 = 0.0;
    if (0.0 <= fVar17 * fVar18) {
      fVar20 = fVar17 * fVar18;
    }
    iVar11 = -((int)ROUND(-0.5 - ((float)iVar8 * fVar18 + (float)iVar8 * fVar18)) >> 1);
  }
  fVar17 = local_e4;
  if ((0 < iVar11) || (0.0 < fVar20)) {
    fVar18 = local_e4 * fVar20 + fVar19;
    iVar9 = (int)ROUND(fVar18 + fVar18 + -0.5) >> 1;
    iVar8 = *(int *)((longlong)param_1 + 0x18c);
    iVar13 = iVar11 + iVar8 + iVar9;
    iVar3 = iVar9;
    if (DAT_14c761688 < iVar13) {
      iVar13 = DAT_14c761688 - iVar8;
      if (iVar13 < iVar11) {
        iVar11 = iVar13;
      }
      iVar3 = iVar13 - iVar11;
      if (iVar9 <= iVar13 - iVar11) {
        iVar3 = iVar9;
      }
      iVar13 = iVar8 + iVar11 + iVar3;
    }
    fVar15 = 0.0;
    if (((*(byte *)(param_1[1] + 0x37) & 1) != 0) && (0 < iVar11)) {
      fVar15 = 1.0 / (float)iVar11;
    }
    fVar16 = 0.0;
    if ((*(byte *)(param_1[1] + 0x37) & 1) != 0) {
      fVar16 = local_e4 * fVar15;
    }
    if (*(int *)((longlong)param_1 + 0x194) <= iVar13) {
      fVar14 = (float)iVar13;
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      if (fVar14 < 0.0) {
        fVar14 = sqrtf(fVar14);
      }
      else {
        fVar14 = SQRT(fVar14);
      }
      cVar4 = (**(code **)(*param_1 + 0x18))(param_1,(int)(fVar14 + 1.0) + iVar13,fVar17 < 0.05);
      if (cVar4 == '\0') goto LAB_1435c72a9;
    }
    fVar14 = (float)(-(uint)(0.0 < fVar20) & (uint)(1.0 / fVar20));
    fVar20 = fVar19 * fVar14;
    if ((*(longlong *)(lVar1 + 0x58) == 0) ||
       (pfVar7 = (float *)FUN_147bf7da6(), pfVar7 == (float *)0x0)) {
      pfVar7 = (float *)0x0;
    }
    else if ((((uint)*pfVar7 & 1) == 0) && (((uint)*pfVar7 & 8) == 0)) {
      pfVar7 = (float *)0x0;
    }
    fVar19 = fVar18 - (float)iVar9;
    local_f8 = param_1[0x1a];
    local_108 = (int)param_1[0x18];
    uStack_104 = *(undefined4 *)((longlong)param_1 + 0xc4);
    uStack_100 = (undefined4)param_1[0x19];
    uStack_fc = *(undefined4 *)((longlong)param_1 + 0xcc);
    local_130 = (int *)&DAT_14c8464e0;
    local_138 = &local_108;
    local_128 = pfVar7;
    FUN_147bf79e6(param_1,iVar3,(fVar20 + fVar17) - fVar14,fVar14);
    local_130 = (int *)&DAT_14c8464e0;
    local_138 = &local_108;
    local_128 = pfVar7;
    FUN_147bf79e6(param_1,iVar11,fVar16,fVar15);
  }
  else {
    fVar19 = *(float *)(param_1 + 0x33);
  }
LAB_1435c72a9:
  if ((local_e0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return fVar19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435c75da FUN_1435c75da body=667 status=ok
// SIG undefined FUN_1435c75da(void)

void FUN_1435c75da(longlong *param_1,char param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  byte *pbVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (0 < *(int *)param_1[2]) {
    plVar2 = (longlong *)*param_1;
    fVar13 = *(float *)param_1[1];
    lVar3 = **(longlong **)(plVar2[1] + 0x40);
    fVar15 = (float)(-(uint)(0.0 < *(float *)param_1[3]) & (uint)(1.0 / (float)*(int *)param_1[2]));
    fVar14 = 1.0;
    iVar9 = 0;
    do {
      lVar11 = plVar2[0x2d];
      if ((lVar11 == 0) || (plVar2[0x2e] == 0)) {
        if (DAT_14caf3b84 == '\0') {
          DAT_14caf3b84 = '\x01';
        }
        *(undefined4 *)((longlong)plVar2 + 0x18c) = 0;
        *(undefined4 *)param_1[2] = 0;
      }
      else {
        iVar12 = *(int *)((longlong)plVar2 + 0x18c);
        uVar1 = *(ushort *)(plVar2[0x2e] + (longlong)iVar12 * 2);
        if (*(int *)((longlong)plVar2 + 0x194) <= (int)(uint)uVar1) {
          FUN_147c0784e(plVar2);
          lVar11 = plVar2[0x2d];
          iVar12 = *(int *)((longlong)plVar2 + 0x18c);
          uVar1 = *(ushort *)(plVar2[0x2e] + (longlong)iVar12 * 2);
        }
        lVar8 = plVar2[0x31];
        *(int *)((longlong)plVar2 + 0x18c) = iVar12 + 1;
        if (param_2 != '\0') {
          *(float *)param_1[1] = *(float *)param_1[1] - *(float *)param_1[3];
          fVar14 = fVar14 - fVar15;
        }
        lVar11 = lVar11 + (longlong)(int)lVar8 * (ulonglong)uVar1;
        (**(code **)(*plVar2 + 200))(plVar2,lVar11,param_1[4],param_1[5]);
        lVar8 = *(longlong *)param_1[6];
        if (0 < *(int *)(lVar8 + 0x78)) {
          lVar10 = 0;
          do {
            plVar4 = *(longlong **)(*(longlong *)(lVar8 + 0x70) + lVar10 * 8);
            if ((char)plVar4[5] < '\0') {
              uVar6 = FUN_147bf6ddc(plVar2,*(undefined8 *)(*(longlong *)(lVar3 + 0x70) + lVar10 * 8)
                                   );
              (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar2,uVar6,fVar13,lVar11);
              iVar7 = _finite(*(double *)(lVar11 + 0x18));
              if ((iVar7 != 0) && (iVar7 = _finite(*(double *)(lVar11 + 0x20)), iVar7 != 0)) {
                _finite(*(double *)(lVar11 + 0x28));
              }
            }
            lVar10 = lVar10 + 1;
            lVar8 = *(longlong *)param_1[6];
          } while (lVar10 < *(int *)(lVar8 + 0x78));
        }
        (**(code **)(*plVar2 + 0xd0))(plVar2,lVar11,fVar14,fVar13);
        if (*(float *)(lVar11 + 0x90) <= 1.0) {
          pbVar5 = *(byte **)param_1[7];
          if ((pbVar5 != (byte *)0x0) && ((*pbVar5 & 1) != 0)) {
            (**(code **)(**(longlong **)(*(longlong *)param_1[6] + 0x58) + 0x388))
                      (*(longlong **)(*(longlong *)param_1[6] + 0x58),plVar2,pbVar5,lVar11);
          }
          if (param_2 == '\0') {
            fVar13 = fVar13 - *(float *)param_1[3];
            fVar14 = fVar14 - fVar15;
          }
        }
        else {
          (**(code **)(*plVar2 + 0xe8))(plVar2,iVar12);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)param_1[2]);
  }
  return;
}



// FUNCTION 1435c7876 FUN_1435c7876 body=390 status=ok
// SIG undefined FUN_1435c7876(void)

void FUN_1435c7876(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  bool bVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  iVar3 = *(int *)(param_1 + 0x18c);
  if (0 < (longlong)iVar3) {
    lVar1 = *(longlong *)(param_1 + 0x18);
    if ((*(longlong *)(lVar1 + 0x58) == 0) ||
       (pbVar4 = (byte *)FUN_147bf7da6(param_1), pbVar4 == (byte *)0x0)) {
      pbVar9 = (byte *)0x0;
    }
    else {
      pbVar9 = (byte *)0x0;
      if ((*pbVar4 & 2) != 0) {
        pbVar9 = pbVar4;
      }
    }
    bVar8 = false;
    lVar11 = (longlong)iVar3;
    do {
      lVar5 = *(longlong *)(param_1 + 0x170);
      uVar12 = (ulonglong)((int)lVar11 - 1);
      uVar7 = *(ushort *)(lVar5 + uVar12 * 2);
      if (*(int *)(param_1 + 0x194) <= (int)(uint)uVar7) {
        do {
          iVar10 = (int)lVar11;
          if (iVar10 < 2) goto LAB_1435c79c0;
          lVar11 = lVar11 + -1;
          uVar12 = (ulonglong)(iVar10 - 2);
          uVar7 = *(ushort *)(lVar5 + uVar12 * 2);
        } while (*(int *)(param_1 + 0x194) <= (int)(uint)uVar7);
        bVar8 = true;
      }
      lVar6 = (ulonglong)uVar7 * (longlong)*(int *)(param_1 + 0x188);
      if (1.0 < *(float *)(*(longlong *)(param_1 + 0x168) + 0x90 + lVar6)) {
        if (pbVar9 != (byte *)0x0) {
          plVar2 = *(longlong **)(lVar1 + 0x58);
          (**(code **)(*plVar2 + 0x390))
                    (plVar2,param_1,pbVar9,*(longlong *)(param_1 + 0x168) + lVar6);
          lVar5 = *(longlong *)(param_1 + 0x170);
          iVar3 = *(int *)(param_1 + 0x18c);
        }
        *(undefined2 *)(lVar5 + uVar12 * 2) = *(undefined2 *)(lVar5 + -2 + (longlong)iVar3 * 2);
        *(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + (longlong)*(int *)(param_1 + 0x18c) * 2) =
             uVar7;
        iVar3 = *(int *)(param_1 + 0x18c) + -1;
        *(int *)(param_1 + 0x18c) = iVar3;
      }
      iVar10 = (int)lVar11;
      lVar11 = lVar11 + -1;
    } while (1 < iVar10);
    if (bVar8) {
LAB_1435c79c0:
      FUN_147c0784e(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1435c79fc FUN_1435c79fc body=218 status=ok
// SIG undefined FUN_1435c79fc(void)

void FUN_1435c79fc(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte *pbVar3;
  longlong lVar4;
  int iVar5;
  ushort uVar6;
  
  iVar5 = *(int *)(param_1 + 0x18c);
  if (param_2 < iVar5) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 0x58);
    if (((plVar1 == (longlong *)0x0) ||
        (pbVar3 = (byte *)FUN_147bf7da6(param_1,plVar1), pbVar3 == (byte *)0x0)) ||
       ((*pbVar3 & 2) == 0)) {
      uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x170) + (longlong)param_2 * 2);
    }
    else {
      uVar6 = *(ushort *)(*(longlong *)(param_1 + 0x170) + (longlong)param_2 * 2);
      (**(code **)(*plVar1 + 0x390))
                (plVar1,param_1,pbVar3,
                 (longlong)*(int *)(param_1 + 0x188) * (ulonglong)uVar6 +
                 *(longlong *)(param_1 + 0x168));
      iVar5 = *(int *)(param_1 + 0x18c);
    }
    if (param_2 < iVar5 + -1) {
      lVar4 = (longlong)param_2;
      do {
        *(undefined2 *)(*(longlong *)(param_1 + 0x170) + lVar4 * 2) =
             *(undefined2 *)(*(longlong *)(param_1 + 0x170) + 2 + lVar4 * 2);
        lVar4 = lVar4 + 1;
        lVar2 = (longlong)*(int *)(param_1 + 0x18c) + -1;
      } while (lVar4 < lVar2);
    }
    else {
      lVar2 = (longlong)(iVar5 + -1);
    }
    *(ushort *)(*(longlong *)(param_1 + 0x170) + lVar2 * 2) = uVar6;
    *(int *)(param_1 + 0x18c) = *(int *)(param_1 + 0x18c) + -1;
  }
  return;
}



// FUNCTION 1435c7ad6 FUN_1435c7ad6 body=236 status=ok
// SIG undefined FUN_1435c7ad6(void)

void FUN_1435c7ad6(longlong param_1,char param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  if (((param_2 == '\0') || (*(longlong *)(lVar2 + 0x58) == 0)) ||
     (pbVar7 = (byte *)FUN_147bf7da6(param_1), pbVar7 == (byte *)0x0)) {
    pbVar9 = (byte *)0x0;
  }
  else {
    pbVar9 = (byte *)0x0;
    if ((*pbVar7 & 2) != 0) {
      pbVar9 = pbVar7;
    }
  }
  uVar6 = (ulonglong)*(int *)(param_1 + 0x18c);
  if (0 < (longlong)uVar6) {
    uVar10 = uVar6 + 1;
    do {
      iVar4 = (int)uVar6;
      lVar8 = *(longlong *)(param_1 + 0x170);
      uVar1 = *(ushort *)(lVar8 + -4 + uVar10 * 2);
      if (pbVar9 != (byte *)0x0) {
        plVar3 = *(longlong **)(lVar2 + 0x58);
        (**(code **)(*plVar3 + 0x390))
                  (plVar3,param_1,pbVar9,
                   (longlong)*(int *)(param_1 + 0x188) * (ulonglong)uVar1 +
                   *(longlong *)(param_1 + 0x168));
        lVar8 = *(longlong *)(param_1 + 0x170);
        iVar4 = *(int *)(param_1 + 0x18c);
      }
      *(undefined2 *)(lVar8 + -4 + uVar10 * 2) = *(undefined2 *)(lVar8 + -2 + (longlong)iVar4 * 2);
      *(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + (longlong)*(int *)(param_1 + 0x18c) * 2) =
           uVar1;
      uVar5 = *(int *)(param_1 + 0x18c) - 1;
      uVar6 = (ulonglong)uVar5;
      *(uint *)(param_1 + 0x18c) = uVar5;
      uVar10 = uVar10 - 1;
    } while (1 < uVar10);
  }
  *(undefined4 *)(param_1 + 400) = 0;
  return;
}



// FUNCTION 1435c7bc2 FUN_1435c7bc2 body=124 status=ok
// SIG undefined FUN_1435c7bc2(void)

undefined8 * FUN_1435c7bc2(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x118))(param_1,param_1[3]);
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    puVar2 = (undefined8 *)FUN_147bf8190(0x1b0);
    FUN_147c0117e(puVar2);
    cVar1 = (**(code **)(*param_1 + 0x218))(param_1,puVar2 + 5);
    if (cVar1 != '\0') {
      FUN_147c3075c(puVar2,param_2);
      return puVar2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435c7c3e FUN_1435c7c3e body=108 status=ok
// SIG undefined FUN_1435c7c3e(void)

undefined8 FUN_1435c7c3e(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  if ((0 < *(int *)(param_1 + 0x18c)) && (cVar1 = FUN_1435bcde2(), cVar1 != '\0')) {
    *(undefined4 *)(param_2 + 8) = 1;
    plVar2 = *(longlong **)(param_1 + 0x238);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar2 + 0x340))(plVar2,1), cVar1 == '\0')) {
      FUN_14003fbd6();
      plVar2 = DAT_14caea080;
    }
    *(longlong **)(param_1 + 0x238) = plVar2;
    *(longlong **)(param_2 + 0x60) = plVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1435c7caa FUN_1435c7caa body=74 status=ok
// SIG undefined FUN_1435c7caa(void)

void FUN_1435c7caa(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  FUN_147c0532e();
  if (*(int *)(param_2 + 0x48) < 1) {
    lVar1 = 0;
  }
  else {
    lVar1 = **(longlong **)(param_2 + 0x40);
  }
  *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)(lVar1 + 0x48);
  *(byte *)(param_1 + 0x280) = *(byte *)(param_2 + 0x37) >> 3 & 1;
  return;
}



// FUNCTION 1435c7cfa FUN_1435c7cfa body=1696 status=ok
// SIG undefined FUN_1435c7cfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435c7cfa(longlong param_1,float param_2)

{
  byte bVar1;
  double dVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  double *pdVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  ulonglong *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  undefined1 local_e8 [16];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((((*(byte *)(param_1 + 0x160) & 1) != 0) && (*(int *)(param_1 + 0x288) != 0)) &&
     (0 < *(int *)(param_1 + 0x18c))) {
    lVar4 = 0;
    do {
      lVar11 = *(longlong *)(param_1 + 0x168);
      lVar13 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar4 * 2) *
               (longlong)*(int *)(param_1 + 0x188);
      lVar14 = lVar11 + lVar13;
      iVar12 = *(int *)(param_1 + 0x284);
      lVar6 = (longlong)*(int *)(param_1 + 0x288);
      *(undefined4 *)(lVar6 + 0x30 + lVar14) = *(undefined4 *)(lVar11 + 0x3c + lVar13);
      *(undefined4 *)(lVar6 + 8 + lVar14) = *(undefined4 *)(lVar11 + 0x48 + lVar13);
      *(undefined8 *)(lVar6 + lVar14) = *(undefined8 *)(lVar11 + 0x40 + lVar13);
      *(undefined4 *)(lVar6 + 0x14 + lVar14) = *(undefined4 *)(lVar11 + 0x68 + lVar13);
      *(undefined8 *)(lVar6 + 0xc + lVar14) = *(undefined8 *)(lVar11 + 0x60 + lVar13);
      *(undefined4 *)(lVar6 + 0x20 + lVar14) = *(undefined4 *)((longlong)iVar12 + 0x20 + lVar14);
      *(undefined8 *)(lVar6 + 0x18 + lVar14) = *(undefined8 *)((longlong)iVar12 + 0x18 + lVar14);
      if ((longlong)*(int *)(param_1 + 0x40) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(undefined4 *)(lVar14 + 4 + (longlong)*(int *)(param_1 + 0x40));
      }
      lVar6 = lVar6 + lVar14;
      *(undefined4 *)(lVar6 + 0x34) = uVar16;
      lVar11 = (longlong)*(int *)(param_1 + 0x3c);
      if (lVar11 == 0) {
        *(undefined4 *)(lVar6 + 0x2c) = DAT_14c846338;
        uVar8 = DAT_14c846330;
      }
      else {
        *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)(lVar14 + 0x14 + lVar11);
        uVar8 = *(undefined8 *)(lVar14 + 0xc + lVar11);
      }
      *(undefined8 *)(lVar6 + 0x24) = uVar8;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x18c));
  }
  auVar3 = _DAT_149934d80;
  if (((*(char *)(param_1 + 0x280) == '\x01') && ((*(byte *)(param_1 + 0x160) & 1) != 0)) &&
     (0 < *(int *)(param_1 + 0x18c))) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar14 = 0;
    do {
      pdVar5 = (double *)
               ((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar14 * 2) *
                (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168));
      lVar6 = (longlong)*(int *)(param_1 + 0x284);
      *(undefined4 *)(lVar6 + 0x38 + (longlong)pdVar5) =
           *(undefined4 *)(lVar6 + 0x44 + (longlong)pdVar5);
      *(undefined8 *)(lVar6 + 0x30 + (longlong)pdVar5) =
           *(undefined8 *)(lVar6 + 0x3c + (longlong)pdVar5);
      lVar11 = *(longlong *)(lVar4 + 0x30);
      bVar1 = *(byte *)(lVar11 + 0x70);
      if (bVar1 - 3 < 2) {
        if (bVar1 == 4) {
          dVar2 = pdVar5[3];
          dVar18 = pdVar5[4];
          dVar19 = pdVar5[5];
        }
        else {
          dVar19 = (double)*(float *)(pdVar5 + 9);
          dVar18 = (double)*(float *)((longlong)pdVar5 + 0x44);
          dVar2 = (double)*(float *)(pdVar5 + 8);
          if (((bVar1 == 3) && ((*(byte *)(lVar11 + 199) & 1) != 0)) &&
             (lVar11 = (longlong)*(int *)(lVar4 + 0x98), 0 < lVar11)) {
            lVar13 = *(longlong *)(param_1 + 8);
            if (*(int *)(lVar13 + 0x68) != *(int *)(lVar13 + 0x94)) {
              uVar15 = *(ulonglong *)
                        (*(longlong *)(**(longlong **)(lVar13 + 0x40) + 0x90) + -8 + lVar11 * 8);
              uVar10 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              lVar11 = lVar13 + 0x98;
              if (*(longlong *)(lVar13 + 0xa0) != 0) {
                lVar11 = *(longlong *)(lVar13 + 0xa0);
              }
              iVar12 = *(int *)(lVar11 + (ulonglong)
                                         (*(int *)(lVar13 + 0xa8) - 1U & (uVar10 >> 0x10 ^ uVar10))
                                         * 4);
              if (iVar12 != -1) {
                do {
                  puVar9 = (ulonglong *)(*(longlong *)(lVar13 + 0x60) + (longlong)iVar12 * 0x18);
                  if (*puVar9 == uVar15) goto LAB_1435c8035;
                  iVar12 = (int)puVar9[2];
                } while (iVar12 != -1);
              }
            }
            puVar9 = (ulonglong *)0x0;
LAB_1435c8035:
            puVar7 = puVar9 + 1;
            if (puVar9 == (ulonglong *)0x0) {
              puVar7 = (ulonglong *)0x0;
            }
            uVar15 = (ulonglong)(uint)*puVar7;
            if (uVar15 != 0) {
              dVar19 = ((double)*(float *)((longlong)pdVar5 + uVar15 + 0x14) + pdVar5[5]) -
                       ((double)*(float *)((longlong)pdVar5 + uVar15 + 0x44) + pdVar5[2]);
              dVar18 = ((double)*(float *)((longlong)pdVar5 + uVar15 + 0x10) + pdVar5[4]) -
                       ((double)*(float *)((longlong)pdVar5 + uVar15 + 0x40) + pdVar5[1]);
              dVar2 = ((double)*(float *)((longlong)pdVar5 + uVar15 + 0xc) + pdVar5[3]) -
                      ((double)*(float *)((longlong)pdVar5 + uVar15 + 0x3c) + *pdVar5);
            }
          }
        }
        dVar20 = dVar19 * dVar19 + dVar2 * dVar2 + dVar18 * dVar18;
        if (9.99999993922529e-09 < dVar20) {
          dVar20 = 1.0 / SQRT(dVar20);
          dVar2 = dVar2 * dVar20;
          dVar18 = dVar18 * dVar20;
          dVar19 = dVar19 * dVar20;
        }
        dVar20 = dVar19 * 0.0 + dVar18 * 0.0 + dVar2 + 1.0;
        if (dVar20 < 9.999999974752427e-07) {
          dVar20 = 0.0;
          dVar19 = DAT_14c846398;
          dVar2 = DAT_14c846388;
          dVar18 = DAT_14c846390;
        }
        dVar24 = dVar18 - dVar2 * 0.0;
        dVar2 = dVar2 * 0.0 - dVar19;
        dVar18 = dVar19 * 0.0 + dVar18 * -0.0;
        dVar19 = dVar24 * dVar24 + dVar18 * dVar18;
        dVar23 = dVar20 * dVar20 + dVar2 * dVar2;
        auVar21._0_8_ = dVar19 + dVar23;
        auVar21._8_8_ = dVar19 + dVar23;
        uVar15 = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
        auVar22 = sqrtpd(auVar21,auVar21);
        auVar22 = divpd(auVar3,auVar22);
        auVar25._0_8_ = auVar22._0_8_ * dVar24;
        auVar25._8_8_ = auVar22._8_8_ * dVar20;
        local_f8 = (ulonglong)(dVar18 * auVar22._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
        uStack_f0 = (ulonglong)(dVar2 * auVar22._8_8_) & uVar15;
        auVar22._8_4_ = (int)uVar15;
        auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
        auVar22._12_4_ = (int)(uVar15 >> 0x20);
        local_e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar25,auVar22);
        FUN_1449413b4(&local_f8,&local_110);
        *(float *)((longlong)pdVar5 + lVar6 + 0x18) =
             (float)local_110 + *(float *)((longlong)pdVar5 + lVar6 + 0xc) +
             *(float *)((longlong)pdVar5 + lVar6 + 0x24);
        *(float *)((longlong)pdVar5 + lVar6 + 0x1c) =
             (float)local_108 + *(float *)((longlong)pdVar5 + lVar6 + 0x10) +
             *(float *)((longlong)pdVar5 + lVar6 + 0x28);
        fVar17 = (float)local_100 + *(float *)((longlong)pdVar5 + lVar6 + 0x14) +
                 *(float *)((longlong)pdVar5 + lVar6 + 0x2c);
LAB_1435c8241:
        *(float *)((longlong)pdVar5 + lVar6 + 0x20) = fVar17;
      }
      else if ((*(byte *)((longlong)pdVar5 + 0x6f) & 0x20) == 0) {
        fVar17 = *(float *)((longlong)pdVar5 + lVar6 + 0x14) +
                 *(float *)((longlong)pdVar5 + lVar6 + 0x2c);
        *(float *)((longlong)pdVar5 + lVar6 + 0x18) =
             *(float *)((longlong)pdVar5 + lVar6 + 0xc) +
             *(float *)((longlong)pdVar5 + lVar6 + 0x24);
        *(float *)((longlong)pdVar5 + lVar6 + 0x1c) =
             *(float *)((longlong)pdVar5 + lVar6 + 0x10) +
             *(float *)((longlong)pdVar5 + lVar6 + 0x28);
        goto LAB_1435c8241;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x18c));
  }
  FUN_1435c66b8(param_1);
  if (((*(char *)(param_1 + 0x280) == '\x01') && ((*(byte *)(param_1 + 0x160) & 1) != 0)) &&
     (0 < *(int *)(param_1 + 0x18c))) {
    lVar4 = 0;
    do {
      lVar14 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + lVar4 * 2) *
               (longlong)*(int *)(param_1 + 0x188) + *(longlong *)(param_1 + 0x168);
      lVar11 = (longlong)*(int *)(param_1 + 0x284);
      *(float *)(lVar11 + 0x24 + lVar14) =
           *(float *)(lVar11 + 0x30 + lVar14) * param_2 + *(float *)(lVar11 + 0x24 + lVar14);
      *(float *)(lVar11 + 0x28 + lVar14) =
           *(float *)(lVar11 + 0x34 + lVar14) * param_2 + *(float *)(lVar11 + 0x28 + lVar14);
      *(float *)(lVar11 + 0x2c + lVar14) =
           *(float *)(lVar11 + 0x38 + lVar14) * param_2 + *(float *)(lVar11 + 0x2c + lVar14);
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x18c));
  }
  if ((local_d0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435c839c FUN_1435c839c body=2094 status=ok
// SIG undefined FUN_1435c839c(void)

void FUN_1435c839c(longlong param_1,float param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined4 uVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  double local_1d0;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_178;
  double local_168;
  double local_158;
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  
  lVar18 = *(longlong *)(param_1 + 0x10);
  if (lVar18 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18c) < 1) {
    return;
  }
  if ((*(byte *)(lVar18 + 0x692) & 4) == 0) {
    if (*(longlong *)(lVar18 + 0x668) == 0) {
      bVar19 = false;
    }
    else {
      bVar19 = (*(byte *)(*(longlong *)(lVar18 + 0x668) + 0xec) & 2) == 0;
    }
    uVar36 = *(undefined4 *)(lVar18 + 0x280);
    uVar37 = *(undefined4 *)(lVar18 + 0x284);
    uVar38 = *(undefined4 *)(lVar18 + 0x288);
    uVar39 = *(undefined4 *)(lVar18 + 0x28c);
    local_1a8 = *(double *)(lVar18 + 0x290);
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x278) + 0x30);
    if (lVar10 != 0) {
      dVar24 = *(double *)(lVar10 + 0x200);
      dVar29 = *(double *)(lVar10 + 0x208);
      dVar30 = *(double *)(lVar10 + 0x210);
      dVar22 = *(double *)(lVar10 + 0x218);
      dVar26 = *(double *)(lVar10 + 0x220);
      uVar34 = (undefined4)*(undefined8 *)(lVar10 + 0x228);
      uVar35 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x228) >> 0x20);
      goto LAB_1435c84e2;
    }
  }
  else {
    uVar36 = *(undefined4 *)(lVar18 + 0x280);
    uVar37 = *(undefined4 *)(lVar18 + 0x284);
    uVar38 = *(undefined4 *)(lVar18 + 0x288);
    uVar39 = *(undefined4 *)(lVar18 + 0x28c);
    local_1a8 = *(double *)(lVar18 + 0x290);
    bVar19 = false;
  }
  uVar35 = 0;
  uVar34 = 0;
  dVar26 = 0.0;
  dVar22 = 0.0;
  dVar30 = 0.0;
  dVar29 = 0.0;
  dVar24 = 0.0;
LAB_1435c84e2:
  bVar7 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x71);
  if ((bVar7 & 1) == 0) {
    local_148 = DAT_14c846400;
    dStack_140 = DAT_14c846408;
    local_158 = DAT_14c846410;
    local_138._8_8_ = DAT_14c846428;
    local_138._0_8_ = DAT_14c846420;
    local_178 = DAT_14c846430;
    local_128._8_8_ = DAT_14c846448;
    local_128._0_8_ = DAT_14c846440;
    local_168 = DAT_14c846450;
    pdVar16 = (double *)&DAT_14c846460;
    local_118 = DAT_14c846470;
  }
  else {
    dVar5 = *(double *)(lVar18 + 0x240);
    dVar6 = *(double *)(lVar18 + 0x248);
    dVar11 = *(double *)(lVar18 + 0x250);
    local_118 = *(double *)(lVar18 + 0x270);
    dVar33 = dVar6 + dVar6;
    dVar14 = dVar11 + dVar11;
    dVar31 = dVar5 * (dVar5 + dVar5);
    local_148 = (1.0 - (dVar11 * dVar14 + dVar6 * dVar33)) * (double)CONCAT44(uVar37,uVar36);
    dVar11 = (1.0 - (dVar11 * dVar14 + dVar31)) * (double)CONCAT44(uVar39,uVar38);
    local_168 = (1.0 - (dVar31 + dVar6 * dVar33)) * local_1a8;
    dVar32 = *(double *)(lVar18 + 0x240) * dVar14;
    dVar31 = *(double *)(lVar18 + 600);
    dVar12 = dVar14 * dVar31;
    dVar13 = (dVar5 + dVar5) * *(double *)(lVar18 + 600);
    dVar31 = dVar33 * dVar31;
    dStack_140 = (dVar33 * dVar5 + dVar12) * (double)CONCAT44(uVar37,uVar36);
    local_178 = (dVar14 * dVar6 + dVar13) * (double)CONCAT44(uVar39,uVar38);
    dVar14 = (dVar14 * dVar6 - dVar13) * local_1a8;
    local_158 = (dVar32 - dVar31) * (double)CONCAT44(uVar37,uVar36);
    local_138._8_4_ = SUB84(dVar11,0);
    local_138._0_8_ = (dVar33 * dVar5 - dVar12) * (double)CONCAT44(uVar39,uVar38);
    local_138._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    local_128._8_4_ = SUB84(dVar14,0);
    local_128._0_8_ = (dVar31 + dVar32) * local_1a8;
    local_128._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
    pdVar16 = (double *)(lVar18 + 0x260);
  }
  dVar31 = *pdVar16;
  dVar11 = pdVar16[1];
  if (bVar19) {
    *(undefined8 *)(param_1 + 0x1e8) = DAT_14c8464f0;
    uVar15 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x1d8) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1e0) = uVar15;
    uVar15 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x1c0) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x1c8) = uVar15;
    *(undefined8 *)(param_1 + 0x1d0) = DAT_14c8464f0;
    *(undefined1 *)(param_1 + 0x1f0) = 0;
  }
  bVar8 = *(byte *)(*(longlong *)(param_1 + 8) + 0x37);
  dVar14 = (double)param_2;
  dVar13 = -4398046511104.0;
  dVar12 = 4398046511104.0;
  lVar18 = 0;
  local_1d0 = 4398046511104.0;
  local_1b8 = 4398046511104.0;
  local_1b0 = -4398046511104.0;
  local_1c0 = -4398046511104.0;
  do {
    while( true ) {
      lVar18 = lVar18 + 1;
      lVar10 = *(longlong *)(param_1 + 0x168);
      lVar17 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x170) + -2 + lVar18 * 2) *
               (longlong)*(int *)(param_1 + 0x188);
      pdVar16 = (double *)(lVar10 + lVar17);
      *(undefined8 *)(lVar10 + 0x10 + lVar17) = *(undefined8 *)(lVar10 + 0x28 + lVar17);
      puVar1 = (undefined8 *)(lVar10 + 0x18 + lVar17);
      uVar15 = puVar1[1];
      *(undefined8 *)(lVar10 + lVar17) = *puVar1;
      ((undefined8 *)(lVar10 + lVar17))[1] = uVar15;
      uVar9 = *(uint *)(lVar10 + 0x6c + lVar17);
      *(uint *)(lVar10 + 0x6c + lVar17) = uVar9 & 0xfdffffff;
      if (((uVar9 >> 0x1a & 1) == 0) && (((uVar9 >> 0x19 & 1) == 0 || ((bVar8 & 1) != 0)))) {
        if ((uVar9 >> 0x1c & 1) == 0) {
          dVar6 = (double)*(float *)(pdVar16 + 9) * dVar14 + pdVar16[5];
          dVar5 = (double)*(float *)((longlong)pdVar16 + 0x44) * dVar14 + pdVar16[4];
          dVar32 = (double)*(float *)(pdVar16 + 8) * dVar14 + pdVar16[3];
        }
        else {
          dVar32 = pdVar16[3];
          dVar5 = pdVar16[4];
          dVar6 = pdVar16[5];
        }
        fVar21 = *(float *)((longlong)pdVar16 + 0x3c);
        if ((uVar9 >> 0x1d & 1) == 0) {
          fVar21 = fVar21 + *(float *)((longlong)pdVar16 + 0x5c) * param_2;
        }
      }
      else {
        dVar32 = pdVar16[3];
        dVar5 = pdVar16[4];
        dVar6 = pdVar16[5];
        fVar21 = *(float *)((longlong)pdVar16 + 0x3c);
      }
      fVar2 = *(float *)(pdVar16 + 0xd);
      fVar3 = *(float *)(pdVar16 + 0xc);
      fVar4 = *(float *)((longlong)pdVar16 + 100);
      dVar5 = dVar5 + *(double *)(param_1 + 0x248);
      dVar6 = dVar6 + *(double *)(param_1 + 0x250);
      dVar32 = dVar32 + *(double *)(param_1 + 0x240);
      *pdVar16 = *(double *)(param_1 + 0x240) + *pdVar16;
      pdVar16[1] = *(double *)(param_1 + 0x248) + pdVar16[1];
      pdVar16[2] = *(double *)(param_1 + 0x250) + pdVar16[2];
      uVar20 = FUN_1447c7e44(fVar21,0x40c90fdb);
      *(undefined4 *)((longlong)pdVar16 + 0x3c) = uVar20;
      pdVar16[3] = dVar32;
      pdVar16[4] = dVar5;
      pdVar16[5] = dVar6;
      if (bVar19) break;
      if (*(int *)(param_1 + 0x18c) <= lVar18) {
        return;
      }
    }
    dVar33 = (double)fVar2 *
             (((double)CONCAT44(uVar35,uVar34) + dVar30) -
             (dVar30 - (double)CONCAT44(uVar35,uVar34))) * 0.5 * local_1a8;
    dVar23 = (double)fVar4 * ((dVar26 + dVar29) - (dVar29 - dVar26)) * 0.5 *
             (double)CONCAT44(uVar39,uVar38);
    dVar25 = (double)fVar3 * ((dVar22 + dVar24) - (dVar24 - dVar22)) * 0.5 *
             (double)CONCAT44(uVar37,uVar36);
    dVar28 = dVar5;
    dVar27 = dVar32;
    if ((bVar7 & 1) != 0) {
      dVar27 = dVar6 * (double)local_128._0_8_ +
               dVar5 * (double)local_138._0_8_ + dVar32 * local_148 + dVar31;
      dVar28 = dVar6 * (double)local_128._8_8_ +
               dVar5 * (double)local_138._8_8_ + dVar32 * dStack_140 + dVar11;
      dVar6 = dVar6 * local_168 + dVar32 * local_158 + dVar5 * local_178 + local_118;
    }
    dVar32 = dVar27 - dVar25;
    if (dVar32 <= local_1b8) {
      local_1b8 = dVar32;
    }
    dVar25 = dVar25 + dVar27;
    if (local_1c0 <= dVar25) {
      local_1c0 = dVar25;
    }
    dVar32 = dVar28 - dVar23;
    if (dVar32 <= local_1d0) {
      local_1d0 = dVar32;
    }
    dVar23 = dVar23 + dVar28;
    if (local_1b0 <= dVar23) {
      local_1b0 = dVar23;
    }
    dVar32 = dVar6 - dVar33;
    if (dVar32 <= dVar12) {
      dVar12 = dVar32;
    }
    dVar33 = dVar33 + dVar6;
    if (dVar13 <= dVar33) {
      dVar13 = dVar33;
    }
  } while (lVar18 < *(int *)(param_1 + 0x18c));
  *(double *)(param_1 + 0x1c0) = local_1b8;
  *(double *)(param_1 + 0x1c8) = local_1d0;
  *(double *)(param_1 + 0x1d0) = dVar12;
  *(double *)(param_1 + 0x1d8) = local_1c0;
  *(double *)(param_1 + 0x1e0) = local_1b0;
  *(double *)(param_1 + 0x1e8) = dVar13;
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  return;
}



// FUNCTION 1435c8bca FUN_1435c8bca body=160 status=ok
// SIG undefined FUN_1435c8bca(void)

uint FUN_1435c8bca(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = (ulonglong)*(int *)(*(longlong *)(param_1 + 8) + 0x48);
  if (0 < (longlong)uVar3) {
    uVar4 = 0;
    do {
      while (lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x40) + uVar4 * 8),
            lVar1 == 0) {
        uVar4 = uVar4 + 1;
        if (uVar3 <= uVar4) goto LAB_1435c8c26;
      }
      cVar2 = *(char *)(*(longlong *)(lVar1 + 0x30) + 0xc1);
      uVar4 = uVar4 + 1;
    } while ((uVar4 < uVar3) && (cVar2 == '\0'));
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x44);
      uVar5 = 8;
      goto LAB_1435c8c28;
    }
  }
LAB_1435c8c26:
  uVar5 = 0;
LAB_1435c8c28:
  *(uint *)(param_1 + 0x284) = *(int *)(param_1 + 0x44) + uVar5;
  uVar6 = uVar5 + 0x48;
  if ((*(longlong **)(param_1 + 0x278) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x278) + 0x3d0))(), cVar2 != '\0')) {
    *(uint *)(param_1 + 0x288) = uVar6 + *(int *)(param_1 + 0x44);
    uVar6 = uVar5 | 0x80;
  }
  return uVar6;
}



// FUNCTION 1435c8c6a FUN_1435c8c6a body=182 status=ok
// SIG undefined FUN_1435c8c6a(void)

undefined8 * FUN_1435c8c6a(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 *puVar3;
  
  lVar1 = param_1[3];
  cVar2 = (**(code **)(*param_1 + 0x118))(param_1,lVar1);
  if ((cVar2 != '\0') && ((*(byte *)(param_1 + 0x2c) & 1) != 0)) {
    puVar3 = (undefined8 *)FUN_147bf8190(0x180);
    FUN_147c3189c(puVar3,*(undefined8 *)(lVar1 + 0x30));
    cVar2 = (**(code **)(*param_1 + 0x218))(param_1,puVar3 + 5);
    if (cVar2 != '\0') {
      lVar1 = param_1[0x4f];
      FUN_147c3195a(puVar3,param_2,param_1,*(undefined8 *)(lVar1 + 0x30),*(byte *)(lVar1 + 0x44) & 1
                    ,*(undefined4 *)(lVar1 + 0x40),param_3);
      return puVar3;
    }
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1435c8d20 FUN_1435c8d20 body=496 status=ok
// SIG undefined FUN_1435c8d20(void)

undefined8 FUN_1435c8d20(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  cVar4 = FUN_1435bcde2();
  if (((cVar4 != '\0') && (lVar3 = *(longlong *)(param_1 + 0x18), lVar3 != 0)) &&
     ((*(byte *)(lVar3 + 0x2c) & 1) != 0)) {
    *(undefined4 *)(param_2 + 8) = 2;
    plVar7 = *(longlong **)(param_1 + 0x238);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar7 + 0x340))(plVar7,3), cVar4 == '\0')) {
      FUN_14003fbd6();
      plVar7 = DAT_14caea080;
    }
    *(longlong **)(param_2 + 0x60) = plVar7;
    *(longlong **)(param_1 + 0x238) = plVar7;
    *(byte *)(param_2 + 0xe8) = *(byte *)(*(longlong *)(lVar3 + 0x30) + 0xc2) & 1;
    *(uint *)(param_2 + 0xd8) = (uint)*(byte *)(*(longlong *)(lVar3 + 0x30) + 0xc1);
    *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 200);
    *(undefined4 *)(param_2 + 0xe4) = *(undefined4 *)(*(longlong *)(lVar3 + 0x30) + 0xcc);
    *(undefined4 *)(param_2 + 0xec) = *(undefined4 *)(param_1 + 0x284);
    *(undefined4 *)(param_2 + 0xf0) = *(undefined4 *)(param_1 + 0x288);
    *(undefined1 *)(param_2 + 0xf5) = *(undefined1 *)(param_1 + 0x280);
    *(undefined1 *)(param_2 + 0xf4) = *(undefined1 *)(*(longlong *)(param_1 + 0x278) + 0x45);
    *(undefined4 *)(param_2 + 0x40) = DAT_14c846358;
    *(undefined8 *)(param_2 + 0x38) = DAT_14c846350;
    lVar3 = *(longlong *)(param_1 + 0x10);
    if (((lVar3 != 0) &&
        ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x30) + 0x71) & 1) == 0)) &&
       (-1 < *(char *)(param_1 + 0x160))) {
      dVar1 = *(double *)(lVar3 + 0x290);
      dVar2 = *(double *)(lVar3 + 0x288);
      *(float *)(param_2 + 0x38) = (float)*(double *)(lVar3 + 0x280);
      *(float *)(param_2 + 0x3c) = (float)dVar2;
      *(float *)(param_2 + 0x40) = (float)dVar1;
    }
    if (((*(char *)(*(longlong *)(param_1 + 0x278) + 0xa8) == '\0') &&
        ((*(byte *)(param_1 + 0x161) & 2) != 0)) &&
       (cVar4 = *(char *)(param_1 + 0x162), *(char *)(param_2 + 0xbf) = cVar4, cVar4 != '\0')) {
      *(undefined1 *)(param_2 + 0xbd) = 1;
      bVar5 = *(char *)(param_1 + 0x162) - 1;
      if (bVar5 < 6) {
        lVar6 = (ulonglong)bVar5 * 4;
        uVar8 = *(undefined4 *)(&DAT_14aa00910 + lVar6);
        uVar10 = *(undefined4 *)(&DAT_14aa00928 + lVar6);
        uVar9 = *(undefined4 *)(&DAT_14aa00940 + lVar6);
      }
      else {
        uVar9 = 0x3f800000;
        uVar8 = 0;
        uVar10 = 0;
      }
      *(undefined4 *)(param_2 + 0xf8) = uVar8;
      *(undefined4 *)(param_2 + 0xfc) = uVar10;
      *(undefined4 *)(param_2 + 0x100) = uVar9;
    }
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  return 0;
}



// FUNCTION 1435c8f38 FUN_1435c8f38 body=282 status=ok
// SIG undefined FUN_1435c8f38(void)

undefined8 * FUN_1435c8f38(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435c9052 FUN_1435c9052 body=282 status=ok
// SIG undefined FUN_1435c9052(void)

undefined8 * FUN_1435c9052(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435c916c FUN_1435c916c body=12389 status=ok
// SIG undefined FUN_1435c916c(void)

/* WARNING: Removing unreachable block (ram,0x0001435c9559) */
/* WARNING: Removing unreachable block (ram,0x0001435caa4d) */

void FUN_1435c916c(void)

{
  int *piVar1;
  byte *pbVar2;
  byte *pbVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  byte bVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong *plVar23;
  char cVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  longlong *plVar29;
  undefined1 *puVar30;
  uint *puVar31;
  longlong *plVar32;
  longlong **pplVar33;
  int iVar34;
  undefined4 uVar35;
  ulonglong uVar36;
  longlong *plVar37;
  int iVar38;
  uint uVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong *plVar42;
  wchar_t *pwVar43;
  longlong lVar44;
  longlong *plVar45;
  longlong *plVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong *plVar49;
  longlong lVar50;
  ulonglong uVar51;
  ulonglong uVar52;
  undefined8 uVar53;
  longlong *plVar54;
  int iVar55;
  longlong lVar56;
  int iVar57;
  int iVar58;
  longlong *plVar59;
  byte bVar60;
  uint uVar61;
  uint uVar62;
  bool bVar63;
  float fVar64;
  undefined1 auStack_528 [32];
  int local_508;
  int local_4f4;
  longlong *local_4f0;
  longlong *local_4e8;
  ulonglong local_4e0;
  ulonglong local_4d8;
  ulonglong local_4d0;
  ulonglong local_4c8;
  uint local_4c0;
  uint local_4bc;
  ulonglong local_4b8;
  longlong *local_4b0;
  longlong local_4a8 [3];
  undefined8 local_490;
  longlong local_488;
  longlong *local_480;
  undefined8 uStack_478;
  uint local_470 [4];
  uint *local_460;
  uint local_458;
  uint local_454;
  int iStack_450;
  int local_44c;
  undefined1 local_448 [8];
  undefined1 *local_440;
  int local_438;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 uStack_414;
  undefined4 local_410;
  longlong local_408;
  undefined8 uStack_400;
  uint local_3f8 [4];
  uint *local_3e8;
  uint local_3e0;
  uint local_3dc;
  int iStack_3d8;
  int local_3d4;
  undefined1 local_3d0 [8];
  undefined1 *local_3c8;
  uint local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong local_3a8;
  longlong lStack_3a0;
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  longlong lStack_380;
  longlong *local_378;
  longlong *plStack_370;
  undefined2 *local_368;
  char cStack_360;
  undefined7 uStack_35f;
  longlong local_358;
  undefined4 local_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined8 local_338;
  undefined4 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined4 local_308;
  undefined2 local_158 [116];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_528;
  local_3e8 = (uint *)0x0;
  local_3e0 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3dc = 0x80;
  iStack_3d8 = -1;
  local_3d4 = 0;
  local_3c8 = (undefined1 *)0x0;
  local_3c0 = 0;
  FUN_14612b044(&local_488,0x10,1,0);
  uVar36 = uStack_478 & 0xffffffff;
  if ((-1 < (int)(uint)uStack_478) && ((int)(uint)uStack_478 < (int)local_480)) {
    do {
      plVar59 = *(longlong **)(local_488 + (uVar36 & 0xffffffff) * 8);
      plVar29 = (longlong *)plVar59[0x16];
      if (plVar29 == (longlong *)0x0) {
        plVar29 = (longlong *)FUN_1448abda6(plVar59);
      }
      iVar58 = iStack_3d8;
      uVar52 = uStack_400;
      uVar36 = plVar59[0xcd];
      uVar25 = ((uint)((ulonglong)plVar29 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar29 >> 4)) *
               -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      uVar25 = uVar25 >> 0x10 ^ uVar25;
      iVar34 = (int)uStack_400;
      local_4f0 = plVar59;
      if ((int)uStack_400 != local_3d4) {
        puVar30 = local_3c8;
        if (local_3c8 == (undefined1 *)0x0) {
          puVar30 = local_3d0;
        }
        iVar38 = *(int *)(puVar30 + (ulonglong)(local_3c0 - 1 & uVar25) * 4);
        while (iVar38 != -1) {
          lVar40 = local_408 + (longlong)iVar38 * 0x88;
          if (*(longlong **)(local_408 + (longlong)iVar38 * 0x88) == plVar29) {
            if (lVar40 != 0) goto LAB_1435c9a6a;
            break;
          }
          iVar38 = *(int *)(lVar40 + 0x80);
        }
      }
      local_4d0 = uVar36;
      if (local_3d4 == 0) {
        uStack_400 = CONCAT44(uStack_400._4_4_,(int)uStack_400 + 1);
        if (uStack_400._4_4_ == iVar34) {
          FUN_1401600aa(&local_408,uVar52 & 0xffffffff);
        }
        uVar62 = local_3e0;
        if (local_3e0 == 0) {
          iVar58 = -1;
        }
        else {
          iVar58 = local_3e0 + 0x1e;
          if (-1 < (int)(local_3e0 - 1)) {
            iVar58 = local_3e0 - 1;
          }
          iVar58 = iVar58 >> 5;
        }
        uVar26 = local_3e0 + 1;
        uVar61 = local_3e0 + 0x1f;
        if (-1 < (int)local_3e0) {
          uVar61 = local_3e0;
        }
        if ((int)uVar61 >> 5 == iVar58) {
          local_3e0 = uVar26;
        }
        else {
          if ((int)local_3dc <= (int)local_3e0) {
            if (local_3e0 + 0x20 < 0xa0) {
              local_3dc = 0x80;
            }
            else {
              uVar26 = local_3e0 + 0x20 >> 5;
              if (local_3dc + 0x1f < 0xa0) {
                uVar39 = 4;
                if (4 < uVar26) {
                  uVar39 = uVar26;
                }
              }
              else {
                uVar39 = uVar26 + (uVar26 * 3 >> 3) + 0x10;
              }
              uVar36 = (ulonglong)(uVar39 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar27 = (uint)(uVar36 + 0xf);
                  if (uVar39 < 0x1ffd) {
                    uVar36 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar27 >> 4]];
                  }
                  else {
                    uVar52 = uVar36 + 0xf & 0xfffffffffffffff0;
                    if (uVar52 < 0x7ff1) {
                      bVar60 = (&DAT_14c841e00)[uVar27 >> 4];
                      uVar47 = 0x32;
                      if (0x32 < bVar60) {
                        uVar47 = (ulonglong)bVar60;
                      }
                      uVar41 = 0x32 - (ulonglong)bVar60;
                      do {
                        uVar36 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar41 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar41 & 0xffffffff] & 0xf) == 0) goto LAB_1435ca082;
                        lVar40 = uVar47 + 1 + uVar41;
                        uVar41 = uVar41 - 1;
                      } while (lVar40 != 0x33);
                    }
                    uVar36 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar36 = 0x10;
                    }
                    uVar36 = -uVar36 & (uVar52 + uVar36) - 1;
                  }
                }
                else {
                  uVar36 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar36,0);
                }
              }
LAB_1435ca082:
              iVar58 = (int)(uVar36 >> 2);
              local_3dc = iVar58 << 5;
              if (iVar58 < (int)uVar26) {
                local_3dc = 0xffffffe0;
              }
            }
            FUN_1446efbd8(local_3f8,local_3e0);
            uVar26 = local_3e0 + 1;
          }
          uVar39 = uVar26 + 0x1f;
          if (-1 < (int)uVar26) {
            uVar39 = uVar26;
          }
          local_3e0 = uVar26;
          if ((int)uVar26 % 0x20 != 0) {
            puVar31 = local_3e8;
            if (local_3e8 == (uint *)0x0) {
              puVar31 = local_3f8;
            }
            bVar60 = -(char)((int)uVar26 % 0x20);
            puVar31[(int)uVar39 >> 5] =
                 (puVar31[(int)uVar39 >> 5] << (bVar60 & 0x1f)) >> (bVar60 & 0x1f);
          }
        }
        lVar40 = (longlong)iVar34;
        puVar31 = local_3e8;
        if (local_3e8 == (uint *)0x0) {
          puVar31 = local_3f8;
        }
        bVar60 = (byte)uVar62 & 0x1f;
        puVar31[(int)uVar61 >> 5] =
             puVar31[(int)uVar61 >> 5] & (-2 << bVar60 | 0xfffffffeU >> 0x20 - bVar60);
        iVar58 = iVar34;
      }
      else {
        lVar40 = (longlong)iStack_3d8;
        iStack_3d8 = *(int *)(local_408 + 4 + lVar40 * 0x88);
        local_3d4 = local_3d4 + -1;
        if (local_3d4 != 0) {
          *(undefined4 *)(local_408 + (longlong)iStack_3d8 * 0x88) = 0xffffffff;
        }
      }
      uVar62 = 1 << ((byte)iVar58 & 0x1f);
      puVar31 = local_3e8;
      if (local_3e8 == (uint *)0x0) {
        puVar31 = local_3f8;
      }
      iVar34 = iVar58 + 0x1f;
      if (-1 < iVar58) {
        iVar34 = iVar58;
      }
      puVar31[iVar34 >> 5] = puVar31[iVar34 >> 5] | uVar62;
      local_4e8 = (longlong *)(lVar40 * 0x88);
      plVar59 = (longlong *)(local_408 + (longlong)local_4e8);
      uStack_34c = 0x80;
      pplVar33 = (longlong **)(local_408 + 8 + (longlong)local_4e8);
      pplVar33[-1] = plVar29;
      pplVar33[4] = (longlong *)0x0;
      *(undefined4 *)(pplVar33 + 5) = 0;
      *pplVar33 = (longlong *)0x0;
      pplVar33[1] = (longlong *)0x0;
      *(undefined8 *)((longlong)pplVar33 + 0x2c) = 0xffffffff00000080;
      *(undefined4 *)((longlong)pplVar33 + 0x34) = 0;
      pplVar33[8] = (longlong *)0x0;
      *(undefined4 *)(pplVar33 + 9) = 0;
      if (pplVar33 != &local_378) {
        plVar59[3] = (longlong)local_368;
        plVar59[4] = CONCAT71(uStack_35f,cStack_360);
        plVar59[5] = 0;
        plVar59[6] = 0x8000000000;
        uStack_34c = 0;
        plVar59[7] = 0xffffffff;
      }
      *(undefined4 *)(plVar59 + 8) = local_340;
      plVar59[9] = 0;
      *(undefined4 *)(plVar59 + 10) = 0;
      *(undefined4 *)(plVar59 + 0xf) = 0;
      *(undefined4 *)(plVar59 + 0xd) = 0;
      *(undefined4 *)((longlong)plVar59 + 0x6c) = 0;
      *(undefined4 *)(plVar59 + 0xe) = 0;
      *(undefined4 *)((longlong)plVar59 + 0x74) = 0;
      *(undefined4 *)(plVar59 + 0xb) = 0;
      *(undefined4 *)((longlong)plVar59 + 0x5c) = 0;
      *(undefined4 *)(plVar59 + 0xc) = 0;
      *(undefined4 *)((longlong)plVar59 + 100) = 0;
      local_308 = 0;
      uStack_310 = 0;
      local_318 = 0;
      uStack_320 = 0;
      local_328 = 0;
      local_330 = 0;
      local_338 = 0;
      uStack_344 = 0;
      uStack_348 = 0xffffffff;
      local_350 = 0;
      local_358 = 0;
      plStack_370 = (longlong *)0x0;
      local_378 = (longlong *)0x0;
      FUN_1435cc1d2(&local_378,0);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      if (local_378 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar59 + 0x10) = 0xffffffff;
      uVar26 = (int)uStack_400 - local_3d4;
      uVar61 = 1;
      if (uVar26 != 1) {
        if ((int)uStack_400 != local_3d4) {
          puVar30 = local_3c8;
          if (local_3c8 == (undefined1 *)0x0) {
            puVar30 = local_3d0;
          }
          iVar38 = *(int *)(puVar30 + (ulonglong)(local_3c0 - 1 & uVar25) * 4);
          if (iVar38 != -1) {
            do {
              pvVar4 = (void *)(local_408 + (longlong)iVar38 * 0x88);
              if (*(longlong *)(local_408 + (longlong)iVar38 * 0x88) == *plVar59) {
                *(undefined4 *)((longlong)pvVar4 + 0x50) = 0;
                if (*(longlong *)((longlong)pvVar4 + 0x48) != 0) {
                  FUN_1400020a8();
                }
                FUN_1435cc1d2((longlong *)((longlong)pvVar4 + 8),0);
                if (*(longlong *)((longlong)pvVar4 + 0x28) != 0) {
                  FUN_1400020a8();
                }
                if (*(longlong *)((longlong)pvVar4 + 8) != 0) {
                  FUN_1400020a8();
                }
                memmove(pvVar4,plVar59,0x80);
                if (local_3d4 != 0) {
                  *(int *)(local_408 + (longlong)iStack_3d8 * 0x88) = iVar58;
                }
                *(undefined4 *)(local_408 + (longlong)local_4e8) = 0xffffffff;
                iVar38 = -1;
                if (0 < local_3d4) {
                  iVar38 = iStack_3d8;
                }
                *(int *)(local_408 + 4 + (longlong)local_4e8) = iVar38;
                iStack_3d8 = iVar58;
                local_3d4 = local_3d4 + 1;
                puVar31 = local_3e8;
                if (local_3e8 == (uint *)0x0) {
                  puVar31 = local_3f8;
                }
                puVar31[iVar34 >> 5] = puVar31[iVar34 >> 5] & (uVar62 ^ 0xffffffff);
                goto LAB_1435c9a50;
              }
              iVar38 = *(int *)((longlong)pvVar4 + 0x80);
            } while (iVar38 != -1);
          }
        }
        if (3 < uVar26) {
          uVar36 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
          lVar40 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          uVar61 = 1 << ((byte)lVar40 & 0x1f);
        }
      }
      if (((int)uVar26 < 1) || ((int)uVar61 <= (int)local_3c0)) {
        uVar25 = local_3c0 - 1 & uVar25;
        *(uint *)((longlong)plVar59 + 0x84) = uVar25;
        puVar30 = local_3c8;
        if (local_3c8 == (undefined1 *)0x0) {
          puVar30 = local_3d0;
        }
        *(undefined4 *)(plVar59 + 0x10) =
             *(undefined4 *)(puVar30 + ((longlong)(int)local_3c0 - 1U & (longlong)(int)uVar25) * 4);
        puVar30 = local_3c8;
        if (local_3c8 == (undefined1 *)0x0) {
          puVar30 = local_3d0;
        }
        *(int *)(puVar30 + ((longlong)(int)local_3c0 - 1U & (longlong)(int)uVar25) * 4) = iVar58;
      }
      else {
        local_3c0 = uVar61;
        if (local_3c8 == (undefined1 *)0x0) {
          puVar30 = (undefined1 *)0x0;
        }
        else {
          FUN_1446efa72(&local_3c8,0,0,4);
          puVar30 = local_3c8;
          if (local_3c0 == 0) goto LAB_1435c9a50;
        }
        uVar25 = local_3c0;
        if ((1 < local_3c0) || (puVar30 != (undefined1 *)0x0)) {
          uVar62 = 0;
          if (1 < local_3c0) {
            uVar62 = local_3c0;
          }
          FUN_1446efa72(&local_3c8,0,uVar62,4);
        }
        if (0 < (int)uVar25) {
          uVar62 = 0;
          do {
            puVar30 = local_3c8;
            if (local_3c8 == (undefined1 *)0x0) {
              puVar30 = local_3d0;
            }
            *(undefined4 *)(puVar30 + (ulonglong)(local_3c0 + 0x7fffffff & uVar62) * 4) = 0xffffffff
            ;
            uVar62 = uVar62 + 1;
          } while (uVar25 != uVar62);
        }
        if (local_3e0 == 0) {
          uVar52 = 1;
          uVar36 = 0;
          iVar34 = 0;
          uVar25 = 0;
        }
        else {
          puVar31 = local_3e8;
          if (local_3e8 == (uint *)0x0) {
            puVar31 = local_3f8;
          }
          uVar25 = *puVar31;
          if (uVar25 == 0) {
            iVar34 = local_3e0 + 0x1e;
            if (-1 < (int)(local_3e0 - 1)) {
              iVar34 = local_3e0 - 1;
            }
            uVar36 = 0;
            uVar52 = (ulonglong)(uint)(iVar34 >> 5);
            if (iVar34 >> 5 < 1) {
              uVar52 = uVar36;
            }
            iVar34 = 0;
            do {
              if (uVar52 == uVar36) goto LAB_1435c9a50;
              iVar34 = iVar34 + 0x20;
              uVar25 = puVar31[uVar36 + 1];
              uVar36 = uVar36 + 1;
            } while (uVar25 == 0);
          }
          else {
            uVar36 = 0;
            iVar34 = 0;
          }
          uVar52 = (ulonglong)(-uVar25 & uVar25);
          uVar47 = uVar52 * 2 + 1;
          lVar40 = 0x3f;
          if (uVar47 != 0) {
            for (; uVar47 >> lVar40 == 0; lVar40 = lVar40 + -1) {
            }
          }
          uVar25 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
          if ((int)local_3e0 <= (int)uVar25) {
            uVar25 = local_3e0;
          }
        }
        if ((int)uVar25 < (int)local_3e0) {
          uVar62 = 0xffffffff;
          do {
            lVar40 = (longlong)(int)uVar25 * 0x88;
            uVar26 = ((uint)(*(ulonglong *)(local_408 + lVar40) >> 0x14) & 0xffff ^
                     (uint)(*(ulonglong *)(local_408 + lVar40) >> 4)) * -0x7a143595;
            uVar26 = (uVar26 >> 0xd ^ uVar26) * -0x3d4d51cb;
            uVar47 = (longlong)(int)(uVar26 >> 0x10 ^ uVar26) & (longlong)(int)local_3c0 - 1U;
            iVar58 = (int)uVar47;
            *(int *)(local_408 + 0x84 + lVar40) = iVar58;
            puVar30 = local_3c8;
            if (local_3c8 == (undefined1 *)0x0) {
              puVar30 = local_3d0;
            }
            *(undefined4 *)(local_408 + 0x80 + lVar40) =
                 *(undefined4 *)(puVar30 + ((longlong)(int)local_3c0 - 1U & uVar47) * 4);
            puVar30 = local_3c8;
            if (local_3c8 == (undefined1 *)0x0) {
              puVar30 = local_3d0;
            }
            *(uint *)(puVar30 + ((longlong)iVar58 & (longlong)(int)local_3c0 - 1U) * 4) = uVar25;
            uVar62 = ~(uint)uVar52 & uVar62;
            puVar31 = local_3e8;
            if (local_3e8 == (uint *)0x0) {
              puVar31 = local_3f8;
            }
            iVar58 = (int)uVar36;
            lVar40 = (longlong)iVar58;
            uVar25 = puVar31[lVar40] & uVar62;
            if (uVar25 == 0) {
              iVar38 = local_3e0 + 0x1e;
              if (-1 < (int)(local_3e0 - 1)) {
                iVar38 = local_3e0 - 1;
              }
              iVar38 = iVar38 >> 5;
              iVar57 = iVar38;
              if (iVar38 < iVar58) {
                iVar57 = iVar58;
              }
              if (iVar38 <= iVar58) break;
              lVar50 = 0;
              while( true ) {
                iVar34 = iVar34 + 0x20;
                uVar25 = puVar31[lVar40 + lVar50 + 1];
                if (uVar25 != 0) break;
                lVar50 = lVar50 + 1;
                if (iVar57 - lVar40 == lVar50) goto LAB_1435c9a50;
              }
              uVar36 = (ulonglong)(iVar58 + (int)lVar50 + 1);
              uVar62 = 0xffffffff;
            }
            uVar52 = (ulonglong)(-uVar25 & uVar25);
            uVar47 = uVar52 * 2 + 1;
            lVar40 = 0x3f;
            if (uVar47 != 0) {
              for (; uVar47 >> lVar40 == 0; lVar40 = lVar40 + -1) {
              }
            }
            uVar25 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
          } while ((int)uVar25 < (int)local_3e0);
        }
      }
LAB_1435c9a50:
      lVar40 = local_408 + (longlong)local_4e8;
      uVar36 = local_4d0;
LAB_1435c9a6a:
      plVar59 = (longlong *)(lVar40 + 8);
      uVar25 = ((uint)(uVar36 >> 0x14) & 0xffff ^ (uint)(uVar36 >> 4)) * -0x7a143595;
      uVar25 = (uVar25 >> 0xd ^ uVar25) * -0x3d4d51cb;
      uVar25 = uVar25 >> 0x10 ^ uVar25;
      iVar58 = *(int *)(lVar40 + 0x10);
      iVar34 = *(int *)(lVar40 + 0x3c);
      if (iVar58 != iVar34) {
        lVar50 = lVar40 + 0x40;
        if (*(longlong *)(lVar40 + 0x48) != 0) {
          lVar50 = *(longlong *)(lVar40 + 0x48);
        }
        iVar38 = *(int *)(lVar50 + (ulonglong)(*(int *)(lVar40 + 0x50) - 1U & uVar25) * 4);
        if (iVar38 != -1) {
          do {
            lVar50 = *plVar59 + (longlong)iVar38 * 0x40;
            if (*(ulonglong *)(*plVar59 + (longlong)iVar38 * 0x40) == uVar36) {
              if (lVar50 != 0) goto LAB_1435c9ce8;
              break;
            }
            iVar38 = *(int *)(lVar50 + 0x38);
          } while (iVar38 != -1);
        }
      }
      if (iVar34 == 0) {
        *(int *)(lVar40 + 0x10) = iVar58 + 1;
        if (*(int *)(lVar40 + 0x14) == iVar58) {
          FUN_1406cd6a8(plVar59,iVar58);
        }
        iVar34 = *(int *)(lVar40 + 0x30);
        if (iVar34 == 0) {
          iVar38 = -1;
        }
        else {
          iVar38 = iVar34 + 0x1e;
          if (-1 < iVar34 + -1) {
            iVar38 = iVar34 + -1;
          }
          iVar38 = iVar38 >> 5;
        }
        lVar44 = lVar40 + 0x18;
        iVar57 = iVar34 + 1;
        iVar55 = iVar34 + 0x1f;
        if (-1 < iVar34) {
          iVar55 = iVar34;
        }
        if (iVar55 >> 5 == iVar38) {
          *(int *)(lVar40 + 0x30) = iVar57;
        }
        else {
          if (*(int *)(lVar40 + 0x34) <= iVar34) {
            iVar38 = iVar34;
            if (iVar34 + 0x20U < 0xa0) {
              iVar57 = 0x80;
            }
            else {
              uVar62 = iVar34 + 0x20U >> 5;
              if (*(int *)(lVar40 + 0x34) + 0x1fU < 0xa0) {
                uVar26 = 4;
                if (4 < uVar62) {
                  uVar26 = uVar62;
                }
              }
              else {
                uVar26 = uVar62 + (uVar62 * 3 >> 3) + 0x10;
              }
              uVar52 = (ulonglong)(uVar26 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar61 = (uint)(uVar52 + 0xf);
                  if (uVar26 < 0x1ffd) {
                    uVar52 = (ulonglong)
                             (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar61 >> 4]];
                  }
                  else {
                    uVar47 = uVar52 + 0xf & 0xfffffffffffffff0;
                    if (uVar47 < 0x7ff1) {
                      bVar60 = (&DAT_14c841e00)[uVar61 >> 4];
                      uVar41 = 0x32;
                      if (0x32 < bVar60) {
                        uVar41 = (ulonglong)bVar60;
                      }
                      uVar51 = 0x32 - (ulonglong)bVar60;
                      do {
                        uVar52 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar51 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar51 & 0xffffffff] & 0xf) == 0) goto LAB_1435ca126;
                        lVar50 = uVar41 + 1 + uVar51;
                        uVar51 = uVar51 - 1;
                      } while (lVar50 != 0x33);
                    }
                    uVar52 = (ulonglong)DAT_14c841df8;
                    if (DAT_14c841df8 < 0x11) {
                      uVar52 = 0x10;
                    }
                    uVar52 = -uVar52 & (uVar47 + uVar52) - 1;
                  }
                }
                else {
                  uVar52 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar52,0);
                  iVar38 = *(int *)(lVar40 + 0x30);
                }
              }
LAB_1435ca126:
              iVar28 = (int)(uVar52 >> 2);
              iVar57 = iVar28 << 5;
              if (iVar28 < (int)uVar62) {
                iVar57 = -0x20;
              }
            }
            *(int *)(lVar40 + 0x34) = iVar57;
            FUN_1446efbd8(lVar44,iVar38);
            iVar57 = *(int *)(lVar40 + 0x30) + 1;
          }
          iVar38 = iVar57 + 0x1f;
          if (-1 < iVar57) {
            iVar38 = iVar57;
          }
          *(int *)(lVar40 + 0x30) = iVar57;
          if (iVar57 % 0x20 != 0) {
            lVar50 = *(longlong *)(lVar40 + 0x28);
            if (*(longlong *)(lVar40 + 0x28) == 0) {
              lVar50 = lVar44;
            }
            bVar60 = -(char)(iVar57 % 0x20);
            *(uint *)(lVar50 + (longlong)(iVar38 >> 5) * 4) =
                 (uint)(*(int *)(lVar50 + (longlong)(iVar38 >> 5) * 4) << (bVar60 & 0x1f)) >>
                 (bVar60 & 0x1f);
          }
        }
        lVar50 = (longlong)iVar58;
        if (*(longlong *)(lVar40 + 0x28) != 0) {
          lVar44 = *(longlong *)(lVar40 + 0x28);
        }
        bVar60 = (byte)iVar34 & 0x1f;
        puVar31 = (uint *)(lVar44 + (longlong)(iVar55 >> 5) * 4);
        *puVar31 = *puVar31 & (-2 << bVar60 | 0xfffffffeU >> 0x20 - bVar60);
      }
      else {
        iVar58 = *(int *)(lVar40 + 0x38);
        lVar50 = (longlong)iVar58;
        iVar38 = *(int *)(*plVar59 + 4 + lVar50 * 0x40);
        *(int *)(lVar40 + 0x38) = iVar38;
        *(int *)(lVar40 + 0x3c) = iVar34 + -1;
        if (iVar34 + -1 != 0) {
          *(undefined4 *)(*plVar59 + (longlong)iVar38 * 0x40) = 0xffffffff;
        }
      }
      uVar62 = 1 << ((byte)iVar58 & 0x1f);
      iVar34 = 1;
      lVar44 = *(longlong *)(lVar40 + 0x28);
      if (*(longlong *)(lVar40 + 0x28) == 0) {
        lVar44 = lVar40 + 0x18;
      }
      iVar38 = iVar58 + 0x1f;
      if (-1 < iVar58) {
        iVar38 = iVar58;
      }
      puVar31 = (uint *)(lVar44 + (longlong)(iVar38 >> 5) * 4);
      *puVar31 = *puVar31 | uVar62;
      lVar44 = *plVar59;
      lVar50 = lVar50 * 0x40;
      puVar5 = (undefined8 *)(lVar44 + lVar50);
      *(ulonglong *)(lVar44 + lVar50) = uVar36;
      puVar6 = (undefined8 *)(lVar44 + 8 + lVar50);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)(lVar44 + 0x18 + lVar50);
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)(lVar44 + 0x28 + lVar50);
      *puVar6 = 0;
      puVar6[1] = 0;
      *(undefined4 *)(lVar44 + 0x38 + lVar50) = 0xffffffff;
      uVar26 = *(int *)(lVar40 + 0x10) - *(int *)(lVar40 + 0x3c);
      if (uVar26 == 1) {
LAB_1435c9c77:
        iVar38 = *(int *)(lVar40 + 0x50);
        if (iVar34 <= iVar38) goto LAB_1435c9c91;
        *(int *)(lVar40 + 0x50) = iVar34;
        FUN_1435cc3c2(plVar59);
      }
      else {
        if (*(int *)(lVar40 + 0x10) != *(int *)(lVar40 + 0x3c)) {
          lVar44 = lVar40 + 0x40;
          if (*(longlong *)(lVar40 + 0x48) != 0) {
            lVar44 = *(longlong *)(lVar40 + 0x48);
          }
          iVar34 = *(int *)(lVar44 + (ulonglong)(*(int *)(lVar40 + 0x50) - 1U & uVar25) * 4);
          if (iVar34 != -1) {
            do {
              puVar6 = (undefined8 *)(*plVar59 + (longlong)iVar34 * 0x40);
              if (*(ulonglong *)(*plVar59 + (longlong)iVar34 * 0x40) == uVar36) {
                if (puVar6[1] != 0) {
                  FUN_1400020a8();
                }
                uVar53 = *puVar5;
                uVar9 = puVar5[1];
                uVar10 = puVar5[2];
                uVar11 = puVar5[3];
                uVar12 = puVar5[4];
                uVar13 = puVar5[5];
                puVar6[6] = puVar5[6];
                puVar6[4] = uVar12;
                puVar6[5] = uVar13;
                puVar6[2] = uVar10;
                puVar6[3] = uVar11;
                *puVar6 = uVar53;
                puVar6[1] = uVar9;
                lVar44 = *plVar59;
                if (*(int *)(lVar40 + 0x3c) != 0) {
                  *(int *)(lVar44 + (longlong)*(int *)(lVar40 + 0x38) * 0x40) = iVar58;
                }
                *(undefined4 *)(lVar44 + lVar50) = 0xffffffff;
                if (*(int *)(lVar40 + 0x3c) < 1) {
                  uVar35 = 0xffffffff;
                }
                else {
                  uVar35 = *(undefined4 *)(lVar40 + 0x38);
                }
                *(undefined4 *)(lVar44 + lVar50 + 4) = uVar35;
                *(int *)(lVar40 + 0x38) = iVar58;
                *(int *)(lVar40 + 0x3c) = *(int *)(lVar40 + 0x3c) + 1;
                lVar44 = lVar40 + 0x18;
                if (*(longlong *)(lVar40 + 0x28) != 0) {
                  lVar44 = *(longlong *)(lVar40 + 0x28);
                }
                puVar31 = (uint *)(lVar44 + (longlong)(iVar38 >> 5) * 4);
                *puVar31 = *puVar31 & ~uVar62;
                goto LAB_1435c9cdd;
              }
              iVar34 = *(int *)(puVar6 + 7);
            } while (iVar34 != -1);
          }
        }
        iVar34 = 1;
        if (3 < uVar26) {
          uVar36 = (ulonglong)(uVar26 & 0xfffffffe) + 0xf;
          lVar44 = 0x3f;
          if (uVar36 != 0) {
            for (; uVar36 >> lVar44 == 0; lVar44 = lVar44 + -1) {
            }
          }
          iVar34 = 1 << ((byte)lVar44 & 0x1f);
        }
        if (0 < (int)uVar26) goto LAB_1435c9c77;
        iVar38 = *(int *)(lVar40 + 0x50);
LAB_1435c9c91:
        uVar25 = iVar38 - 1U & uVar25;
        *(uint *)((longlong)puVar5 + 0x3c) = uVar25;
        lVar44 = *(longlong *)(lVar40 + 0x48);
        if (*(longlong *)(lVar40 + 0x48) == 0) {
          lVar44 = lVar40 + 0x40;
        }
        *(undefined4 *)(puVar5 + 7) =
             *(undefined4 *)
              (lVar44 + ((longlong)*(int *)(lVar40 + 0x50) - 1U & (longlong)(int)uVar25) * 4);
        lVar44 = *(longlong *)(lVar40 + 0x48);
        if (*(longlong *)(lVar40 + 0x48) == 0) {
          lVar44 = lVar40 + 0x40;
        }
        *(int *)(lVar44 + ((longlong)*(int *)(lVar40 + 0x50) - 1U & (longlong)(int)uVar25) * 4) =
             iVar58;
      }
LAB_1435c9cdd:
      lVar50 = lVar50 + *plVar59;
LAB_1435c9ce8:
      plVar59 = local_4f0;
      plVar29 = (longlong *)(lVar50 + 8);
      iVar34 = *(int *)(lVar50 + 0x10);
      *(uint *)(lVar50 + 0x10) = iVar34 + 1U;
      if (*(uint *)(lVar50 + 0x14) < iVar34 + 1U) {
        FUN_1435cc674(plVar29,iVar34);
      }
      lVar48 = (longlong)iVar34 * 0x10;
      FUN_1435cc655(*plVar29 + lVar48);
      lVar44 = *plVar29;
      *(longlong **)(lVar44 + lVar48) = plVar59;
      *(int *)(lVar40 + 0x58) = *(int *)(lVar40 + 0x58) + 1;
      cVar24 = (**(code **)(*plVar59 + 0x3b8))(plVar59);
      if (cVar24 != '\0') {
        lVar44 = lVar44 + lVar48;
        iVar34 = FUN_147c021fc(plVar59);
        *(int *)(lVar44 + 0xc) = iVar34;
        if ((int)*(uint *)(plVar59 + 0xd3) < 0 || (~*(uint *)(plVar59 + 0xd3) & 0x3fffffff) == 0) {
          *(int *)(lVar50 + 0x18) = *(int *)(lVar50 + 0x18) + 1;
          *(int *)(lVar40 + 0x5c) = *(int *)(lVar40 + 0x5c) + 1;
        }
        else {
          *(int *)(lVar50 + 0x1c) = *(int *)(lVar50 + 0x1c) + 1;
          *(int *)(lVar40 + 0x60) = *(int *)(lVar40 + 0x60) + 1;
        }
        if (plVar59[0xcd] == 0) {
          *(int *)(lVar50 + 0x20) = *(int *)(lVar50 + 0x20) + 1;
          *(int *)(lVar40 + 100) = *(int *)(lVar40 + 100) + 1;
        }
        if ((int)plVar59[0x11d] == 0) {
          *(int *)(lVar50 + 0x30) = *(int *)(lVar50 + 0x30) + 1;
          *(int *)(lVar40 + 0x74) = *(int *)(lVar40 + 0x74) + 1;
        }
        bVar63 = (*(byte *)((longlong)plVar59 + 0x9e) & 0x10) != 0;
        if (!bVar63) {
          *(int *)(lVar50 + 0x24) = *(int *)(lVar50 + 0x24) + 1;
          *(int *)(lVar40 + 0x68) = *(int *)(lVar40 + 0x68) + 1;
        }
        *(bool *)(lVar44 + 8) = bVar63;
        bVar60 = FUN_147c00e22(plVar59);
        *(byte *)(lVar44 + 10) = bVar60 ^ 1;
        if ((bVar60 ^ 1) == 0) {
          *(int *)(lVar50 + 0x28) = *(int *)(lVar50 + 0x28) + 1;
          *(int *)(lVar40 + 0x6c) = *(int *)(lVar40 + 0x6c) + 1;
        }
        if (*(char *)((longlong)plVar59 + 0x691) < '\0') {
          lVar48 = (longlong)*(int *)(plVar59[0xcd] + 0x68);
          if (lVar48 == 0) {
            iVar58 = 0;
          }
          else {
            lVar56 = 0;
            iVar58 = 0;
            do {
              lVar8 = *(longlong *)(*(longlong *)(plVar59[0xcd] + 0x60) + lVar56);
              bVar60 = *(byte *)(lVar8 + 0x35);
              bVar7 = *(byte *)(*(longlong *)(lVar8 + 0x20) + 0xf3);
              if (bVar7 < bVar60) {
                bVar60 = bVar7;
              }
              iVar58 = (iVar58 + 1) - (uint)(bVar60 < *(byte *)((longlong)plVar59 + 0x69e));
              lVar56 = lVar56 + 8;
            } while (lVar48 * 8 != lVar56);
          }
          *(bool *)(lVar44 + 9) = iVar58 != 0;
          if (iVar34 == 0 && iVar58 == 0) {
            *(int *)(lVar50 + 0x2c) = *(int *)(lVar50 + 0x2c) + 1;
            *(int *)(lVar40 + 0x70) = *(int *)(lVar40 + 0x70) + 1;
          }
        }
        else {
          *(undefined1 *)(lVar44 + 9) = 1;
        }
      }
      uVar36 = (longlong)(int)(uint)uStack_478;
      do {
        uVar52 = uVar36;
        uVar36 = uVar52 + 1;
        uStack_478 = CONCAT44(uStack_478._4_4_,(int)uVar36);
        if ((longlong)(int)local_480 <= (longlong)uVar36) break;
      } while (*(longlong *)(local_488 + uVar36 * 8) == 0);
    } while ((-2 < (longlong)uVar52) && ((int)uVar36 < (int)local_480));
  }
  if (local_488 != 0) {
    FUN_1400020a8();
  }
  local_4e0 = (ulonglong)local_3e0;
  if (local_3e0 == 0) {
    local_4c8 = 1;
    local_4f4 = 0;
    uVar52 = 0;
    uVar36 = 0;
  }
  else {
    puVar31 = local_3e8;
    if (local_3e8 == (uint *)0x0) {
      puVar31 = local_3f8;
    }
    uVar25 = *puVar31;
    if (uVar25 == 0) {
      iVar34 = local_3e0 + 0x1e;
      if (-1 < (int)(local_3e0 - 1)) {
        iVar34 = local_3e0 - 1;
      }
      uVar52 = 0;
      uVar36 = (ulonglong)(uint)(iVar34 >> 5);
      if (iVar34 >> 5 < 1) {
        uVar36 = uVar52;
      }
      local_4f4 = 0;
      do {
        if (uVar36 == uVar52) goto LAB_1435ca3bd;
        local_4f4 = local_4f4 + 0x20;
        uVar25 = puVar31[uVar52 + 1];
        uVar52 = uVar52 + 1;
      } while (uVar25 == 0);
    }
    else {
      local_4f4 = 0;
      uVar52 = 0;
    }
    local_4c8 = (ulonglong)(-uVar25 & uVar25);
    uVar36 = local_4c8 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar36 != 0) {
      for (; uVar36 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    uVar25 = (local_4f4 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    uVar36 = (ulonglong)uVar25;
    if ((int)local_3e0 <= (int)uVar25) {
      uVar36 = local_4e0;
    }
  }
  if ((uint)uVar36 != local_3e0) {
    uVar25 = 0xffffffff;
    local_4d8 = uVar52;
    do {
      lVar40 = (longlong)(int)uVar36 * 0x88;
      plVar59 = (longlong *)(local_408 + lVar40);
      local_488 = *(longlong *)(local_408 + lVar40);
      local_460 = (uint *)0x0;
      local_458 = 0;
      local_480 = (longlong *)0x0;
      uStack_478 = 0;
      local_454 = 0x80;
      iStack_450 = -1;
      local_44c = 0;
      local_440 = (undefined1 *)0x0;
      local_438 = 0;
      local_4c0 = uVar25;
      if (&local_488 != plVar59) {
        iVar34 = (int)plVar59[10];
        if ((ulonglong)(longlong)iVar34 < 2) {
          if (iVar34 != 0) goto LAB_1435ca53e;
        }
        else {
          FUN_1446efa72(&local_440,0,iVar34,4);
LAB_1435ca53e:
          puVar30 = local_440;
          if (local_440 == (undefined1 *)0x0) {
            puVar30 = local_448;
          }
          plVar29 = plVar59 + 8;
          if ((longlong *)plVar59[9] != (longlong *)0x0) {
            plVar29 = (longlong *)plVar59[9];
          }
          memcpy(puVar30,plVar29,(longlong)iVar34 << 2);
        }
        uVar25 = *(uint *)(plVar59 + 2);
        plVar29 = (longlong *)(ulonglong)uVar25;
        local_438 = iVar34;
        FUN_1435cc1d2(&local_480,plVar29);
        iVar34 = (uint)uStack_478;
        uStack_478 = CONCAT44(uStack_478._4_4_,(uint)uStack_478 + uVar25);
        local_4f0 = plVar29;
        if (uStack_478._4_4_ - iVar34 < uVar25) {
          FUN_1406cd6a8(&local_480);
        }
        iStack_450 = (int)plVar59[7];
        local_44c = *(int *)((longlong)plVar59 + 0x3c);
        uVar25 = (int)plVar59[6] + 0x1fU & 0xffffffe0;
        local_458 = 0;
        if (((int)local_454 < (int)uVar25) || (0x80 < (int)local_454)) {
          if ((int)uVar25 < 0x81) {
            uVar25 = 0x80;
          }
          local_454 = uVar25;
          FUN_1446efbd8(local_470,0);
        }
        local_458 = *(uint *)(plVar59 + 6);
        if (local_458 != 0) {
          plVar29 = (longlong *)plVar59[5];
          if ((longlong *)plVar59[5] == (longlong *)0x0) {
            plVar29 = plVar59 + 3;
          }
          puVar31 = local_460;
          if (local_460 == (uint *)0x0) {
            puVar31 = local_470;
          }
          memcpy(puVar31,plVar29,(ulonglong)(local_458 + 0x1f >> 3 & 0xfffffffc));
        }
        plVar29 = local_480;
        if (0 < (int)local_4f0) {
          lVar40 = plVar59[1];
          local_4e8 = local_480 + 1;
          lVar50 = 0;
          plVar46 = (longlong *)0x0;
          plVar42 = local_4f0;
          do {
            plVar32 = (longlong *)plVar59[5];
            if ((longlong *)plVar59[5] == (longlong *)0x0) {
              plVar32 = plVar59 + 3;
            }
            if ((*(uint *)((longlong)plVar32 + ((ulonglong)plVar46 >> 5 & 0x7ffffff) * 4) >>
                 ((uint)plVar46 & 0x1f) & 1) == 0) {
              *(undefined4 *)((longlong)plVar29 + lVar50) = *(undefined4 *)(lVar40 + lVar50);
              *(undefined4 *)((longlong)plVar29 + lVar50 + 4) = *(undefined4 *)(lVar40 + 4 + lVar50)
              ;
            }
            else {
              *(undefined8 *)((longlong)plVar29 + lVar50) = *(undefined8 *)(lVar40 + lVar50);
              *(undefined8 *)((longlong)plVar29 + lVar50 + 8) = 0;
              iVar34 = *(int *)(lVar40 + 0x10 + lVar50);
              pvVar4 = *(void **)(lVar40 + 8 + lVar50);
              *(int *)((longlong)plVar29 + lVar50 + 0x10) = iVar34;
              if ((longlong)iVar34 == 0) {
                *(undefined4 *)((longlong)plVar29 + lVar50 + 0x14) = 0;
              }
              else {
                FUN_1435cc77a((longlong)local_4e8 + lVar50,iVar34);
                memcpy(*(void **)((longlong)plVar29 + lVar50 + 8),pvVar4,(longlong)iVar34 << 4);
                plVar42 = local_4f0;
              }
              puVar5 = (undefined8 *)(lVar40 + 0x18 + lVar50);
              uVar53 = *puVar5;
              uVar9 = puVar5[1];
              puVar5 = (undefined8 *)(lVar40 + 0x28 + lVar50);
              uVar10 = puVar5[1];
              puVar6 = (undefined8 *)((longlong)plVar29 + lVar50 + 0x28);
              *puVar6 = *puVar5;
              puVar6[1] = uVar10;
              puVar5 = (undefined8 *)((longlong)plVar29 + lVar50 + 0x18);
              *puVar5 = uVar53;
              puVar5[1] = uVar9;
              *(undefined8 *)((longlong)plVar29 + lVar50 + 0x38) =
                   *(undefined8 *)(lVar40 + 0x38 + lVar50);
            }
            plVar46 = (longlong *)((longlong)plVar46 + 1);
            lVar50 = lVar50 + 0x40;
          } while (plVar42 != plVar46);
        }
      }
      lVar40 = local_488;
      local_410 = (int)plVar59[0xf];
      local_420 = (int)plVar59[0xd];
      uStack_41c = *(undefined4 *)((longlong)plVar59 + 0x6c);
      uStack_418 = (int)plVar59[0xe];
      uStack_414 = *(undefined4 *)((longlong)plVar59 + 0x74);
      local_430 = (int)plVar59[0xb];
      uStack_42c = *(undefined4 *)((longlong)plVar59 + 0x5c);
      uStack_428 = (int)plVar59[0xc];
      uStack_424 = *(undefined4 *)((longlong)plVar59 + 100);
      local_4a8[0] = 0;
      local_4a8[1] = 0;
      if (local_488 == 0) goto LAB_1435ca933;
      switch(*(undefined1 *)(local_488 + 0x152)) {
      case 0:
        pwVar43 = L"None";
        goto LAB_1435ca7d3;
      case 1:
        pwVar43 = L"Game";
LAB_1435ca7d3:
        uVar53 = 4;
        break;
      case 2:
        pwVar43 = L"Editor";
        uVar53 = 6;
        break;
      case 3:
        pwVar43 = L"PIE";
        uVar53 = 3;
        break;
      case 4:
        pwVar43 = L"EditorPreview";
        uVar53 = 0xd;
        break;
      case 5:
        pwVar43 = L"GamePreview";
        uVar53 = 0xb;
        break;
      case 6:
        pwVar43 = L"GameRPC";
        uVar53 = 7;
        break;
      case 7:
        pwVar43 = L"Inactive";
        uVar53 = 8;
        break;
      default:
        goto switchD_1435ca752_default;
      }
      FUN_1400020e8(local_4a8,pwVar43,uVar53);
switchD_1435ca752_default:
      FUN_1400020e8(local_4a8,&DAT_149e895f6,3);
      local_3b8 = 0;
      uStack_3b0 = 0;
      FUN_14005eb28(&local_3b8,0x80);
      cStack_360 = '\0';
      local_378 = &local_358;
      local_368 = local_158;
      local_490 = *(undefined8 *)(*(longlong *)(lVar40 + 0x10) + 0x18);
      plStack_370 = local_378;
      FUN_14005eb5c(&local_490,&local_378);
      if (local_368 <= (undefined2 *)((longlong)plStack_370 + 2)) {
        FUN_140213274(&local_378,1);
      }
      *(undefined2 *)plStack_370 = 0x20;
      plStack_370 = (longlong *)((longlong)plStack_370 + 2);
      FUN_144750bde(lVar40,0,&local_378);
      FUN_1400020e8(&local_3b8,local_378,
                    (ulonglong)((longlong)plStack_370 - (longlong)local_378) >> 1);
      if (cStack_360 == '\x01') {
        FUN_1400020a8(local_378);
      }
      iVar34 = (int)uStack_3b0 + -1;
      if ((int)uStack_3b0 == 0) {
        iVar34 = 0;
      }
      FUN_1400020e8(local_4a8,local_3b8,iVar34);
      if (local_3b8 != 0) {
        FUN_1400020a8();
      }
LAB_1435ca933:
      iVar34 = local_44c;
      uVar36 = uStack_478;
      uVar25 = (uint)uStack_478;
      uVar62 = (uint)uStack_478 - local_44c;
      if (uVar62 != 0 && local_44c <= (int)(uint)uStack_478) {
        iVar38 = 0;
        uVar26 = (uint)uStack_478;
        iVar58 = iStack_450;
        if (local_44c != 0) {
          while (iVar38 = iVar58, iVar38 != -1) {
            iVar58 = *(int *)((longlong)local_480 + (longlong)iVar38 * 0x40 + 4);
            if (iVar38 < (int)uVar62) {
              plVar59 = local_480 + (longlong)iVar38 * 8;
              puVar31 = local_460;
              if (local_460 == (uint *)0x0) {
                puVar31 = local_470;
              }
              plVar29 = local_480 + (longlong)(int)(uVar26 - 1) * 8 + 8;
              uVar61 = uVar26;
              do {
                plVar42 = plVar29;
                uVar26 = uVar61 - 1;
                uVar39 = uVar61 + 0x1e;
                if (-1 < (int)uVar26) {
                  uVar39 = uVar26;
                }
                plVar29 = plVar42 + -8;
                uVar61 = uVar26;
              } while ((puVar31[(int)uVar39 >> 5] >> (uVar26 & 0x1f) & 1) == 0);
              lVar40 = plVar42[-8];
              lVar50 = plVar42[-7];
              lVar44 = plVar42[-6];
              lVar48 = plVar42[-5];
              lVar56 = plVar42[-4];
              lVar8 = plVar42[-3];
              lVar14 = plVar42[-1];
              plVar59[6] = plVar42[-2];
              plVar59[7] = lVar14;
              plVar59[4] = lVar56;
              plVar59[5] = lVar8;
              plVar59[2] = lVar44;
              plVar59[3] = lVar48;
              *plVar59 = lVar40;
              plVar59[1] = lVar50;
              puVar31 = local_460;
              if (local_460 == (uint *)0x0) {
                puVar31 = local_470;
              }
              iVar57 = iVar38 + 0x1f;
              if (-1 < iVar38) {
                iVar57 = iVar38;
              }
              puVar31[iVar57 >> 5] = puVar31[iVar57 >> 5] | 1 << ((byte)iVar38 & 0x1f);
            }
          }
          uStack_478 = CONCAT44(uStack_478._4_4_,uVar62);
          if (local_458 - uVar25 != 0) {
            puVar31 = local_460;
            if (local_460 == (uint *)0x0) {
              puVar31 = local_470;
            }
            local_508 = local_458 - uVar25;
            FUN_14493566c(puVar31,uVar62,puVar31,uVar36 & 0xffffffff);
            uVar62 = local_458 - iVar34;
          }
          uVar25 = uVar62 + 0x1f;
          if (-1 < (int)uVar62) {
            uVar25 = uVar62;
          }
          local_458 = uVar62;
          if ((int)uVar62 % 0x20 != 0) {
            puVar31 = local_460;
            if (local_460 == (uint *)0x0) {
              puVar31 = local_470;
            }
            bVar60 = -(char)((int)uVar62 % 0x20);
            puVar31[(int)uVar25 >> 5] =
                 (puVar31[(int)uVar25 >> 5] << (bVar60 & 0x1f)) >> (bVar60 & 0x1f);
          }
          iStack_450 = -1;
          local_44c = 0;
          iVar38 = 0;
          uVar25 = uStack_478._4_4_;
          if (uStack_478._4_4_ != (uint)uStack_478) {
            FUN_140b7ce44(&local_480);
            iVar38 = local_44c;
            uVar25 = (uint)uStack_478;
          }
        }
        plVar59 = local_480;
        uVar25 = uVar25 - iVar38;
        if (1 < (int)uVar25) {
          memset(&local_368,0,0x2f0);
          local_378 = plVar59;
          plStack_370 = plVar59 + (ulonglong)uVar25 * 8 + -8;
          fVar64 = logf((float)(int)uVar25);
          local_368 = (undefined2 *)CONCAT44(local_368._4_4_,(int)(longlong)(fVar64 + fVar64));
          pplVar33 = &local_378;
          do {
            plVar29 = *pplVar33;
            plVar59 = pplVar33[1];
            iVar34 = *(int *)(pplVar33 + 2);
            iVar58 = (int)((ulonglong)((longlong)plVar59 - (longlong)plVar29) >> 6);
            uVar25 = iVar58 + 1;
            plVar42 = plVar29;
            plVar46 = plVar59;
            if (iVar34 != 0) {
LAB_1435caba2:
              if (8 < (int)uVar25) {
                uVar36 = (ulonglong)(uVar25 >> 1);
                lVar40 = plVar29[uVar36 * 8];
                lVar50 = (plVar29 + uVar36 * 8)[1];
                lVar44 = plVar29[uVar36 * 8 + 2];
                lVar48 = (plVar29 + uVar36 * 8 + 2)[1];
                lVar56 = plVar29[uVar36 * 8 + 4];
                lVar8 = (plVar29 + uVar36 * 8 + 4)[1];
                lVar14 = plVar29[uVar36 * 8 + 6];
                lVar15 = (plVar29 + uVar36 * 8 + 6)[1];
                lVar16 = *plVar29;
                lVar17 = plVar29[1];
                lVar18 = plVar29[2];
                lVar19 = plVar29[3];
                lVar20 = plVar29[4];
                lVar21 = plVar29[5];
                lVar22 = plVar29[7];
                plVar29[uVar36 * 8 + 6] = plVar29[6];
                (plVar29 + uVar36 * 8 + 6)[1] = lVar22;
                plVar29[uVar36 * 8 + 4] = lVar20;
                (plVar29 + uVar36 * 8 + 4)[1] = lVar21;
                plVar29[uVar36 * 8 + 2] = lVar18;
                (plVar29 + uVar36 * 8 + 2)[1] = lVar19;
                plVar29[uVar36 * 8] = lVar16;
                (plVar29 + uVar36 * 8)[1] = lVar17;
                plVar29[6] = lVar14;
                plVar29[7] = lVar15;
                plVar29[4] = lVar56;
                plVar29[5] = lVar8;
                plVar29[2] = lVar44;
                plVar29[3] = lVar48;
                *plVar29 = lVar40;
                plVar29[1] = lVar50;
                plVar32 = plVar59 + 8;
                plVar37 = plVar29;
                do {
                  plVar23 = plVar37 + 8;
                  plVar54 = plVar37 + 8;
                  do {
                    plVar37 = plVar54;
                    plVar49 = plVar23;
                    if (plVar59 < plVar37) break;
                    plVar23 = plVar49 + 8;
                    plVar54 = plVar37 + 8;
                  } while ((float)((int)plVar29[3] + *(int *)((longlong)plVar29 + 0x1c)) +
                           (float)(int)plVar29[2] / 1000.0 <=
                           (float)((int)plVar37[3] + *(int *)((longlong)plVar37 + 0x1c)) +
                           (float)(int)plVar37[2] / 1000.0);
                  plVar23 = plVar32 + -0x10;
                  do {
                    plVar54 = plVar32;
                    plVar45 = plVar23;
                    plVar32 = plVar54 + -8;
                    if (plVar32 <= plVar29) break;
                    plVar23 = plVar45 + -8;
                  } while ((float)((int)plVar54[-5] + *(int *)((longlong)plVar54 + -0x24)) +
                           (float)(int)plVar54[-6] / 1000.0 <=
                           (float)((int)plVar29[3] + *(int *)((longlong)plVar29 + 0x1c)) +
                           (float)(int)plVar29[2] / 1000.0);
                  if (plVar32 < plVar37) goto LAB_1435cad94;
                  lVar40 = *plVar37;
                  lVar50 = plVar37[1];
                  lVar44 = plVar37[2];
                  lVar48 = plVar37[3];
                  lVar56 = plVar37[4];
                  lVar8 = plVar37[5];
                  lVar14 = plVar37[6];
                  lVar15 = plVar37[7];
                  lVar16 = *plVar32;
                  lVar17 = plVar54[-7];
                  lVar18 = plVar54[-6];
                  lVar19 = plVar54[-5];
                  lVar20 = plVar54[-4];
                  lVar21 = plVar54[-3];
                  lVar22 = plVar54[-1];
                  plVar37[6] = plVar54[-2];
                  plVar37[7] = lVar22;
                  plVar37[4] = lVar20;
                  plVar37[5] = lVar21;
                  plVar37[2] = lVar18;
                  plVar37[3] = lVar19;
                  *plVar37 = lVar16;
                  plVar37[1] = lVar17;
                  plVar54[-2] = lVar14;
                  plVar54[-1] = lVar15;
                  plVar54[-4] = lVar56;
                  plVar54[-3] = lVar8;
                  plVar54[-6] = lVar44;
                  plVar54[-5] = lVar48;
                  *plVar32 = lVar40;
                  plVar54[-7] = lVar50;
                } while( true );
              }
              for (; plVar42 = plVar29, plVar46 = plVar29, plVar29 < plVar59; plVar59 = plVar59 + -8
                  ) {
                while (plVar32 = plVar42, plVar42 = plVar46 + 8, plVar42 <= plVar59) {
                  piVar1 = (int *)((longlong)plVar46 + 0x5c);
                  plVar46 = plVar42;
                  if ((float)((int)plVar32[3] + *(int *)((longlong)plVar32 + 0x1c)) +
                      (float)(int)plVar32[2] / 1000.0 <=
                      (float)((int)plVar42[3] + *piVar1) + (float)(int)plVar42[2] / 1000.0) {
                    plVar42 = plVar32;
                  }
                }
                local_3b8 = *plVar32;
                uStack_3b0 = plVar32[1];
                local_3a8 = plVar32[2];
                lStack_3a0 = plVar32[3];
                local_398 = plVar32[4];
                lStack_390 = plVar32[5];
                local_388 = plVar32[6];
                lStack_380 = plVar32[7];
                lVar40 = *plVar59;
                lVar50 = plVar59[1];
                lVar44 = plVar59[2];
                lVar48 = plVar59[3];
                lVar56 = plVar59[4];
                lVar8 = plVar59[5];
                lVar14 = plVar59[7];
                plVar32[6] = plVar59[6];
                plVar32[7] = lVar14;
                plVar32[4] = lVar56;
                plVar32[5] = lVar8;
                plVar32[2] = lVar44;
                plVar32[3] = lVar48;
                *plVar32 = lVar40;
                plVar32[1] = lVar50;
                plVar59[6] = local_388;
                plVar59[7] = lStack_380;
                plVar59[4] = local_398;
                plVar59[5] = lStack_390;
                plVar59[2] = local_3a8;
                plVar59[3] = lStack_3a0;
                *plVar59 = local_3b8;
                plVar59[1] = uStack_3b0;
              }
              goto LAB_1435cb42f;
            }
LAB_1435caea2:
            if (uVar25 != 0) {
              iVar34 = (iVar58 - (iVar58 + -1 >> 0x1f)) + -1 >> 1;
              iVar58 = iVar34;
joined_r0x0001435caec5:
              do {
                iVar38 = iVar34 * 2 + 1;
                if (iVar38 < (int)uVar25) {
                  iVar57 = iVar34 * 2 + 2;
                  if (iVar57 < (int)uVar25) {
                    lVar40 = (longlong)iVar57;
                    lVar50 = (longlong)iVar38;
                    if ((float)((int)plVar29[lVar40 * 8 + 3] +
                               *(int *)((longlong)plVar29 + lVar40 * 0x40 + 0x1c)) +
                        (float)(int)plVar29[lVar40 * 8 + 2] / 1000.0 <=
                        (float)((int)plVar29[lVar50 * 8 + 3] +
                               *(int *)((longlong)plVar29 + lVar50 * 0x40 + 0x1c)) +
                        (float)(int)plVar29[lVar50 * 8 + 2] / 1000.0) {
                      iVar38 = iVar57;
                    }
                  }
                  lVar40 = (longlong)iVar34;
                  lVar50 = (longlong)iVar38;
                  if ((float)((int)plVar29[lVar50 * 8 + 3] +
                             *(int *)((longlong)plVar29 + lVar50 * 0x40 + 0x1c)) +
                      (float)(int)plVar29[lVar50 * 8 + 2] / 1000.0 <
                      (float)((int)plVar29[lVar40 * 8 + 3] +
                             *(int *)((longlong)plVar29 + lVar40 * 0x40 + 0x1c)) +
                      (float)(int)plVar29[lVar40 * 8 + 2] / 1000.0) {
                    plVar59 = plVar29 + lVar40 * 8;
                    plVar42 = plVar29 + lVar50 * 8;
                    local_3b8 = *plVar59;
                    uStack_3b0 = plVar59[1];
                    local_3a8 = plVar59[2];
                    lStack_3a0 = plVar59[3];
                    local_398 = plVar59[4];
                    lStack_390 = plVar59[5];
                    local_388 = plVar59[6];
                    lStack_380 = plVar59[7];
                    lVar40 = *plVar42;
                    lVar50 = plVar42[1];
                    lVar44 = plVar42[2];
                    lVar48 = plVar42[3];
                    lVar56 = plVar42[4];
                    lVar8 = plVar42[5];
                    lVar14 = plVar42[7];
                    plVar59[6] = plVar42[6];
                    plVar59[7] = lVar14;
                    plVar59[4] = lVar56;
                    plVar59[5] = lVar8;
                    plVar59[2] = lVar44;
                    plVar59[3] = lVar48;
                    *plVar59 = lVar40;
                    plVar59[1] = lVar50;
                    plVar42[6] = local_388;
                    plVar42[7] = lStack_380;
                    plVar42[4] = local_398;
                    plVar42[5] = lStack_390;
                    plVar42[2] = local_3a8;
                    plVar42[3] = lStack_3a0;
                    *plVar42 = local_3b8;
                    plVar42[1] = uStack_3b0;
                    iVar34 = iVar38;
                    goto joined_r0x0001435caec5;
                  }
                }
                bVar63 = iVar58 != 0;
                iVar34 = iVar58 + -1;
                iVar58 = iVar34;
              } while (bVar63);
              if (1 < (int)uVar25) {
                uVar36 = (ulonglong)uVar25 - 1;
                local_3b8 = *plVar29;
                uStack_3b0 = plVar29[1];
                local_3a8 = plVar29[2];
                lStack_3a0 = plVar29[3];
                local_398 = plVar29[4];
                lStack_390 = plVar29[5];
                local_388 = plVar29[6];
                lStack_380 = plVar29[7];
                lVar40 = plVar29[uVar36 * 8];
                lVar50 = (plVar29 + uVar36 * 8)[1];
                lVar44 = plVar29[uVar36 * 8 + 2];
                lVar48 = (plVar29 + uVar36 * 8 + 2)[1];
                lVar56 = plVar29[uVar36 * 8 + 4];
                lVar8 = (plVar29 + uVar36 * 8 + 4)[1];
                lVar14 = (plVar29 + uVar36 * 8 + 6)[1];
                plVar29[6] = plVar29[uVar36 * 8 + 6];
                plVar29[7] = lVar14;
                plVar29[4] = lVar56;
                plVar29[5] = lVar8;
                plVar29[2] = lVar44;
                plVar29[3] = lVar48;
                *plVar29 = lVar40;
                plVar29[1] = lVar50;
                plVar29[uVar36 * 8 + 6] = local_388;
                (plVar29 + uVar36 * 8 + 6)[1] = lStack_380;
                plVar29[uVar36 * 8 + 4] = local_398;
                (plVar29 + uVar36 * 8 + 4)[1] = lStack_390;
                plVar29[uVar36 * 8 + 2] = local_3a8;
                (plVar29 + uVar36 * 8 + 2)[1] = lStack_3a0;
                plVar29[uVar36 * 8] = local_3b8;
                (plVar29 + uVar36 * 8)[1] = uStack_3b0;
                if (uVar25 != 2) {
                  do {
                    iVar34 = 0;
                    iVar38 = 1;
                    iVar58 = 0;
                    do {
                      lVar40 = (longlong)(iVar34 + 2);
                      iVar57 = iVar38;
                      if ((lVar40 < (longlong)uVar36) &&
                         (lVar50 = (longlong)iVar38,
                         (float)((int)plVar29[lVar40 * 8 + 3] +
                                *(int *)((longlong)plVar29 + lVar40 * 0x40 + 0x1c)) +
                         (float)(int)plVar29[lVar40 * 8 + 2] / 1000.0 <=
                         (float)((int)plVar29[lVar50 * 8 + 3] +
                                *(int *)((longlong)plVar29 + lVar50 * 0x40 + 0x1c)) +
                         (float)(int)plVar29[lVar50 * 8 + 2] / 1000.0)) {
                        iVar57 = iVar34 + 2;
                      }
                      lVar40 = (longlong)iVar58;
                      lVar50 = (longlong)iVar57;
                      if ((float)((int)plVar29[lVar40 * 8 + 3] +
                                 *(int *)((longlong)plVar29 + lVar40 * 0x40 + 0x1c)) +
                          (float)(int)plVar29[lVar40 * 8 + 2] / 1000.0 <=
                          (float)((int)plVar29[lVar50 * 8 + 3] +
                                 *(int *)((longlong)plVar29 + lVar50 * 0x40 + 0x1c)) +
                          (float)(int)plVar29[lVar50 * 8 + 2] / 1000.0) break;
                      plVar59 = plVar29 + lVar40 * 8;
                      plVar42 = plVar29 + lVar50 * 8;
                      lVar40 = *plVar59;
                      lVar50 = plVar59[1];
                      lVar44 = plVar59[2];
                      lVar48 = plVar59[3];
                      lVar56 = plVar59[4];
                      lVar8 = plVar59[5];
                      lVar14 = plVar59[6];
                      lVar15 = plVar59[7];
                      lVar16 = *plVar42;
                      lVar17 = plVar42[1];
                      lVar18 = plVar42[2];
                      lVar19 = plVar42[3];
                      lVar20 = plVar42[4];
                      lVar21 = plVar42[5];
                      lVar22 = plVar42[7];
                      plVar59[6] = plVar42[6];
                      plVar59[7] = lVar22;
                      plVar59[4] = lVar20;
                      plVar59[5] = lVar21;
                      plVar59[2] = lVar18;
                      plVar59[3] = lVar19;
                      *plVar59 = lVar16;
                      plVar59[1] = lVar17;
                      plVar42[6] = lVar14;
                      plVar42[7] = lVar15;
                      plVar42[4] = lVar56;
                      plVar42[5] = lVar8;
                      plVar42[2] = lVar44;
                      plVar42[3] = lVar48;
                      *plVar42 = lVar40;
                      plVar42[1] = lVar50;
                      iVar34 = iVar57 * 2;
                      iVar38 = iVar57 * 2 + 1;
                      iVar58 = iVar57;
                    } while ((longlong)iVar38 < (longlong)uVar36);
                    uVar52 = uVar36 - 1;
                    local_3b8 = *plVar29;
                    uStack_3b0 = plVar29[1];
                    local_3a8 = plVar29[2];
                    lStack_3a0 = plVar29[3];
                    local_398 = plVar29[4];
                    lStack_390 = plVar29[5];
                    local_388 = plVar29[6];
                    lStack_380 = plVar29[7];
                    lVar40 = plVar29[uVar52 * 8];
                    lVar50 = (plVar29 + uVar52 * 8)[1];
                    lVar44 = plVar29[uVar52 * 8 + 2];
                    lVar48 = (plVar29 + uVar52 * 8 + 2)[1];
                    lVar56 = plVar29[uVar52 * 8 + 4];
                    lVar8 = (plVar29 + uVar52 * 8 + 4)[1];
                    lVar14 = (plVar29 + uVar52 * 8 + 6)[1];
                    plVar29[6] = plVar29[uVar52 * 8 + 6];
                    plVar29[7] = lVar14;
                    plVar29[4] = lVar56;
                    plVar29[5] = lVar8;
                    plVar29[2] = lVar44;
                    plVar29[3] = lVar48;
                    *plVar29 = lVar40;
                    plVar29[1] = lVar50;
                    plVar29[uVar52 * 8 + 6] = local_388;
                    (plVar29 + uVar52 * 8 + 6)[1] = lStack_380;
                    plVar29[uVar52 * 8 + 4] = local_398;
                    (plVar29 + uVar52 * 8 + 4)[1] = lStack_390;
                    plVar29[uVar52 * 8 + 2] = local_3a8;
                    (plVar29 + uVar52 * 8 + 2)[1] = lStack_3a0;
                    plVar29[uVar52 * 8] = local_3b8;
                    (plVar29 + uVar52 * 8)[1] = uStack_3b0;
                    bVar63 = 2 < uVar36;
                    uVar36 = uVar52;
                  } while (bVar63);
                }
              }
            }
LAB_1435cb42f:
            pplVar33 = pplVar33 + -3;
          } while (&local_378 <= pplVar33);
        }
      }
      FUN_1435cc3c2(&local_480);
      uVar25 = local_458;
      if (local_458 == 0) {
        uVar52 = 1;
        uVar47 = 0;
        uVar36 = 0;
        iVar34 = 0;
      }
      else {
        puVar31 = local_460;
        if (local_460 == (uint *)0x0) {
          puVar31 = local_470;
        }
        uVar62 = *puVar31;
        if (uVar62 == 0) {
          iVar34 = local_458 + 0x1e;
          if (-1 < (int)(local_458 - 1)) {
            iVar34 = local_458 - 1;
          }
          uVar47 = 0;
          uVar36 = (ulonglong)(uint)(iVar34 >> 5);
          if (iVar34 >> 5 < 1) {
            uVar36 = uVar47;
          }
          iVar34 = 0;
          do {
            if (uVar36 == uVar47) goto LAB_1435cb4dd;
            iVar34 = iVar34 + 0x20;
            uVar62 = puVar31[uVar47 + 1];
            uVar47 = uVar47 + 1;
          } while (uVar62 == 0);
        }
        else {
          uVar47 = 0;
          iVar34 = 0;
        }
        uVar52 = (ulonglong)(-uVar62 & uVar62);
        uVar36 = uVar52 * 2 + 1;
        lVar40 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        uVar62 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
        if ((int)local_458 <= (int)uVar62) {
          uVar62 = local_458;
        }
        uVar36 = (ulonglong)uVar62;
      }
      if ((uint)uVar36 == local_458) {
LAB_1435cb4dd:
        uVar41 = (ulonglong)local_458;
      }
      else {
        uVar62 = 0xffffffff;
        do {
          local_378 = (longlong *)0x0;
          plStack_370 = (longlong *)0x0;
          if (((local_480[(longlong)(int)uVar36 * 8] != 0) &&
              (uVar36 = (ulonglong)*(byte *)(local_480[(longlong)(int)uVar36 * 8] + 0x170),
              uVar36 < 4)) &&
             (FUN_14020fad6(&local_378,(&PTR_DAT_14aa00958)[uVar36]), local_378 != (longlong *)0x0))
          {
            FUN_1400020a8();
          }
          uVar62 = uVar62 & ~(uint)uVar52;
          puVar31 = local_460;
          if (local_460 == (uint *)0x0) {
            puVar31 = local_470;
          }
          uVar41 = (ulonglong)local_458;
          iVar58 = (int)uVar47;
          lVar40 = (longlong)iVar58;
          uVar26 = puVar31[lVar40] & uVar62;
          if (uVar26 == 0) {
            iVar38 = local_458 + 0x1e;
            if (-1 < (int)(local_458 - 1)) {
              iVar38 = local_458 - 1;
            }
            iVar38 = iVar38 >> 5;
            iVar34 = iVar34 + 0x20;
            iVar57 = iVar38;
            if (iVar38 < iVar58) {
              iVar57 = iVar58;
            }
            if (iVar58 < iVar38) {
              lVar50 = 0;
              do {
                uVar26 = puVar31[lVar40 + lVar50 + 1];
                if (uVar26 != 0) {
                  uVar47 = (ulonglong)(iVar58 + (int)lVar50 + 1);
                  uVar62 = 0xffffffff;
                  goto LAB_1435cb639;
                }
                iVar34 = iVar34 + 0x20;
                lVar50 = lVar50 + 1;
              } while (iVar57 - lVar40 != lVar50);
              uVar62 = 0xffffffff;
              iVar58 = iVar57;
            }
            uVar47 = (ulonglong)(iVar58 + 1);
            uVar36 = uVar41;
          }
          else {
LAB_1435cb639:
            uVar52 = (ulonglong)(-uVar26 & uVar26);
            uVar36 = uVar52 * 2 + 1;
            lVar40 = 0x3f;
            if (uVar36 != 0) {
              for (; uVar36 >> lVar40 == 0; lVar40 = lVar40 + -1) {
              }
            }
            uVar26 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
            uVar36 = (ulonglong)uVar26;
            if ((int)local_458 <= (int)uVar26) {
              uVar36 = uVar41;
            }
          }
        } while ((uint)uVar36 != uVar25);
      }
      iVar34 = (int)uVar41;
      if (iVar34 == 0) {
        uVar52 = 1;
        plVar59 = (longlong *)0x0;
        iVar58 = 0;
        uVar36 = 0;
      }
      else {
        puVar31 = local_460;
        if (local_460 == (uint *)0x0) {
          puVar31 = local_470;
        }
        uVar25 = *puVar31;
        if (uVar25 == 0) {
          iVar58 = iVar34 + 0x1e;
          if (-1 < iVar34 + -1) {
            iVar58 = iVar34 + -1;
          }
          plVar59 = (longlong *)0x0;
          plVar29 = (longlong *)(ulonglong)(uint)(iVar58 >> 5);
          if (iVar58 >> 5 < 1) {
            plVar29 = plVar59;
          }
          iVar58 = 0;
          do {
            if (plVar29 == plVar59) goto LAB_1435cb698;
            iVar58 = iVar58 + 0x20;
            uVar25 = puVar31[(longlong)plVar59 + 1];
            plVar59 = (longlong *)((longlong)plVar59 + 1);
          } while (uVar25 == 0);
        }
        else {
          plVar59 = (longlong *)0x0;
          iVar58 = 0;
        }
        uVar52 = (ulonglong)(-uVar25 & uVar25);
        uVar36 = uVar52 * 2 + 1;
        lVar40 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        uVar25 = (iVar58 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
        uVar36 = (ulonglong)uVar25;
        if (iVar34 <= (int)uVar25) {
          uVar36 = uVar41;
        }
      }
      if ((int)uVar36 != iVar34) {
        uVar25 = 0xffffffff;
        local_4b8 = uVar41;
        do {
          local_4f0 = (longlong *)CONCAT44(local_4f0._4_4_,iVar58);
          lVar40 = (longlong)(int)uVar36;
          local_4e8 = plVar59;
          local_4d0 = uVar52;
          local_4bc = uVar25;
          if ((0 < *(int *)((longlong)local_480 + lVar40 * 0x40 + 0x1c)) ||
             (0 < (int)local_480[lVar40 * 8 + 3])) {
            plVar59 = local_480 + lVar40 * 8;
            iVar34 = (int)plVar59[2];
            if (1 < (longlong)iVar34) {
              plVar29 = (longlong *)plVar59[1];
              local_4b0 = plVar59;
              memset(&local_368,0,0x2f0);
              plStack_370 = plVar29 + (longlong)iVar34 * 2 + -2;
              local_378 = plVar29;
              fVar64 = logf((float)iVar34);
              local_368 = (undefined2 *)CONCAT44(local_368._4_4_,(int)(longlong)(fVar64 + fVar64));
              pplVar33 = &local_378;
              do {
                plVar29 = *pplVar33;
                plVar59 = pplVar33[1];
                iVar34 = *(int *)(pplVar33 + 2);
                iVar58 = (int)((ulonglong)((longlong)plVar59 - (longlong)plVar29) >> 4);
                uVar36 = (ulonglong)(iVar58 + 1);
                plVar42 = plVar29;
                plVar46 = plVar59;
                if (iVar34 != 0) {
LAB_1435cb8af:
                  if (8 < (int)(uint)uVar36) {
                    uVar36 = (ulonglong)((uint)uVar36 >> 1);
                    lVar40 = plVar29[uVar36 * 2];
                    lVar50 = (plVar29 + uVar36 * 2)[1];
                    lVar44 = plVar29[1];
                    plVar29[uVar36 * 2] = *plVar29;
                    (plVar29 + uVar36 * 2)[1] = lVar44;
                    *plVar29 = lVar40;
                    plVar29[1] = lVar50;
                    plVar32 = plVar59 + 2;
                    plVar37 = plVar29;
                    do {
                      plVar23 = plVar37 + 2;
                      plVar54 = plVar37 + 2;
                      do {
                        plVar37 = plVar54;
                        plVar49 = plVar23;
                        if (plVar59 < plVar37) break;
                        plVar23 = plVar49 + 2;
                        plVar54 = plVar37 + 2;
                      } while ((byte)((*(byte *)((longlong)plVar37 + 10) ^ 1) +
                                     (*(byte *)((longlong)plVar37 + 9) ^ 1) +
                                     (*(byte *)(plVar37 + 1) ^ 1)) <=
                               (byte)((*(byte *)((longlong)plVar29 + 10) ^ 1) +
                                     (*(byte *)((longlong)plVar29 + 9) ^ 1) +
                                     (*(byte *)(plVar29 + 1) ^ 1)));
                      plVar23 = plVar32 + -4;
                      do {
                        plVar54 = plVar32;
                        plVar45 = plVar23;
                        plVar32 = plVar54 + -2;
                        if (plVar32 <= plVar29) break;
                        plVar23 = plVar45 + -2;
                      } while ((byte)((*(byte *)((longlong)plVar29 + 10) ^ 1) +
                                     (*(byte *)((longlong)plVar29 + 9) ^ 1) +
                                     (*(byte *)(plVar29 + 1) ^ 1)) <=
                               (byte)((*(byte *)((longlong)plVar54 + -6) ^ 1) +
                                     (*(byte *)((longlong)plVar54 + -7) ^ 1) +
                                     (*(byte *)(plVar54 + -1) ^ 1)));
                      if (plVar32 < plVar37) goto LAB_1435cb9ca;
                      lVar40 = *plVar37;
                      lVar50 = plVar37[1];
                      lVar44 = plVar54[-1];
                      *plVar37 = *plVar32;
                      plVar37[1] = lVar44;
                      *plVar32 = lVar40;
                      plVar54[-1] = lVar50;
                    } while( true );
                  }
                  for (; plVar42 = plVar29, plVar46 = plVar29, plVar29 < plVar59;
                      plVar59 = plVar59 + -2) {
                    while (plVar32 = plVar42, plVar42 = plVar46 + 2, plVar42 <= plVar59) {
                      pbVar2 = (byte *)((longlong)plVar46 + 0x19);
                      pbVar3 = (byte *)((longlong)plVar46 + 0x1a);
                      plVar46 = plVar42;
                      if ((byte)((*pbVar3 ^ 1) + (*pbVar2 ^ 1) + (*(byte *)(plVar42 + 1) ^ 1)) <=
                          (byte)((*(byte *)((longlong)plVar32 + 10) ^ 1) +
                                (*(byte *)((longlong)plVar32 + 9) ^ 1) +
                                (*(byte *)(plVar32 + 1) ^ 1))) {
                        plVar42 = plVar32;
                      }
                    }
                    local_3b8 = *plVar32;
                    uStack_3b0 = plVar32[1];
                    lVar50 = local_3b8;
                    lVar44 = uStack_3b0;
                    lVar40 = plVar59[1];
                    *plVar32 = *plVar59;
                    plVar32[1] = lVar40;
                    local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                    uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                    *(undefined4 *)plVar59 = (undefined4)local_3b8;
                    *(undefined4 *)((longlong)plVar59 + 4) = local_3b8._4_4_;
                    *(int *)(plVar59 + 1) = (int)uStack_3b0;
                    *(undefined4 *)((longlong)plVar59 + 0xc) = uStack_3b0._4_4_;
                    local_3b8 = lVar50;
                    uStack_3b0 = lVar44;
                  }
                  goto LAB_1435cbdc4;
                }
LAB_1435cba72:
                iVar34 = (int)uVar36;
                if (iVar34 != 0) {
                  iVar58 = (iVar58 - (iVar58 + -1 >> 0x1f)) + -1 >> 1;
                  iVar38 = iVar58;
joined_r0x0001435cba95:
                  do {
                    iVar57 = iVar58 * 2 + 1;
                    if (iVar57 < iVar34) {
                      iVar55 = iVar58 * 2 + 2;
                      if ((iVar55 < iVar34) &&
                         (lVar40 = (longlong)iVar55 * 0x10, lVar50 = (longlong)iVar57 * 0x10,
                         (byte)((*(byte *)((longlong)plVar29 + lVar50 + 10) ^ 1) +
                               (*(byte *)((longlong)plVar29 + lVar50 + 9) ^ 1) +
                               (*(byte *)(plVar29 + (longlong)iVar57 * 2 + 1) ^ 1)) <=
                         (byte)((*(byte *)((longlong)plVar29 + lVar40 + 10) ^ 1) +
                               (*(byte *)((longlong)plVar29 + lVar40 + 9) ^ 1) +
                               (*(byte *)(plVar29 + (longlong)iVar55 * 2 + 1) ^ 1)))) {
                        iVar57 = iVar55;
                      }
                      lVar40 = (longlong)iVar58;
                      lVar50 = (longlong)iVar57;
                      if ((byte)((*(byte *)((longlong)plVar29 + lVar40 * 0x10 + 10) ^ 1) +
                                (*(byte *)((longlong)plVar29 + lVar40 * 0x10 + 9) ^ 1) +
                                (*(byte *)(plVar29 + lVar40 * 2 + 1) ^ 1)) <
                          (byte)((*(byte *)((longlong)plVar29 + lVar50 * 0x10 + 10) ^ 1) +
                                (*(byte *)((longlong)plVar29 + lVar50 * 0x10 + 9) ^ 1) +
                                (*(byte *)(plVar29 + lVar50 * 2 + 1) ^ 1))) {
                        plVar59 = plVar29 + lVar40 * 2;
                        plVar42 = plVar29 + lVar50 * 2;
                        local_3b8 = *plVar59;
                        uStack_3b0 = plVar59[1];
                        lVar50 = local_3b8;
                        lVar44 = uStack_3b0;
                        lVar40 = plVar42[1];
                        *plVar59 = *plVar42;
                        plVar59[1] = lVar40;
                        local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                        uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                        *(undefined4 *)plVar42 = (undefined4)local_3b8;
                        *(undefined4 *)((longlong)plVar42 + 4) = local_3b8._4_4_;
                        *(int *)(plVar42 + 1) = (int)uStack_3b0;
                        *(undefined4 *)((longlong)plVar42 + 0xc) = uStack_3b0._4_4_;
                        iVar58 = iVar57;
                        local_3b8 = lVar50;
                        uStack_3b0 = lVar44;
                        goto joined_r0x0001435cba95;
                      }
                    }
                    bVar63 = iVar38 != 0;
                    iVar58 = iVar38 + -1;
                    iVar38 = iVar58;
                  } while (bVar63);
                  if (1 < iVar34) {
                    uVar36 = uVar36 - 1;
                    local_3b8 = *plVar29;
                    uStack_3b0 = plVar29[1];
                    lVar50 = local_3b8;
                    lVar44 = uStack_3b0;
                    lVar40 = (plVar29 + uVar36 * 2)[1];
                    *plVar29 = plVar29[uVar36 * 2];
                    plVar29[1] = lVar40;
                    local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                    uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                    plVar59 = plVar29 + uVar36 * 2;
                    *(undefined4 *)plVar59 = (undefined4)local_3b8;
                    *(undefined4 *)((longlong)plVar59 + 4) = local_3b8._4_4_;
                    *(int *)(plVar59 + 1) = (int)uStack_3b0;
                    *(undefined4 *)((longlong)plVar59 + 0xc) = uStack_3b0._4_4_;
                    local_3b8 = lVar50;
                    uStack_3b0 = lVar44;
                    if (iVar34 != 2) {
                      do {
                        iVar34 = 0;
                        iVar38 = 1;
                        iVar58 = 0;
                        do {
                          lVar40 = (longlong)(iVar34 + 2);
                          iVar57 = iVar38;
                          if ((lVar40 < (longlong)uVar36) &&
                             (lVar50 = (longlong)iVar38 * 0x10,
                             (byte)((*(byte *)((longlong)plVar29 + lVar50 + 10) ^ 1) +
                                   (*(byte *)((longlong)plVar29 + lVar50 + 9) ^ 1) +
                                   (*(byte *)(plVar29 + (longlong)iVar38 * 2 + 1) ^ 1)) <=
                             (byte)((*(byte *)((longlong)plVar29 + lVar40 * 0x10 + 10) ^ 1) +
                                   (*(byte *)((longlong)plVar29 + lVar40 * 0x10 + 9) ^ 1) +
                                   (*(byte *)(plVar29 + lVar40 * 2 + 1) ^ 1)))) {
                            iVar57 = iVar34 + 2;
                          }
                          lVar40 = (longlong)iVar58;
                          lVar50 = (longlong)iVar57;
                          if ((byte)((*(byte *)((longlong)plVar29 + lVar50 * 0x10 + 10) ^ 1) +
                                    (*(byte *)((longlong)plVar29 + lVar50 * 0x10 + 9) ^ 1) +
                                    (*(byte *)(plVar29 + lVar50 * 2 + 1) ^ 1)) <=
                              (byte)((*(byte *)((longlong)plVar29 + lVar40 * 0x10 + 10) ^ 1) +
                                    (*(byte *)((longlong)plVar29 + lVar40 * 0x10 + 9) ^ 1) +
                                    (*(byte *)(plVar29 + lVar40 * 2 + 1) ^ 1))) break;
                          plVar59 = plVar29 + lVar40 * 2;
                          plVar42 = plVar29 + lVar50 * 2;
                          lVar40 = *plVar59;
                          lVar50 = plVar59[1];
                          lVar44 = plVar42[1];
                          *plVar59 = *plVar42;
                          plVar59[1] = lVar44;
                          *plVar42 = lVar40;
                          plVar42[1] = lVar50;
                          iVar34 = iVar57 * 2;
                          iVar38 = iVar57 * 2 + 1;
                          iVar58 = iVar57;
                        } while ((longlong)iVar38 < (longlong)uVar36);
                        uVar52 = uVar36 - 1;
                        local_3b8 = *plVar29;
                        uStack_3b0 = plVar29[1];
                        lVar50 = local_3b8;
                        lVar44 = uStack_3b0;
                        lVar40 = (plVar29 + uVar52 * 2)[1];
                        *plVar29 = plVar29[uVar52 * 2];
                        plVar29[1] = lVar40;
                        local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
                        uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
                        plVar59 = plVar29 + uVar52 * 2;
                        *(undefined4 *)plVar59 = (undefined4)local_3b8;
                        *(undefined4 *)((longlong)plVar59 + 4) = local_3b8._4_4_;
                        *(int *)(plVar59 + 1) = (int)uStack_3b0;
                        *(undefined4 *)((longlong)plVar59 + 0xc) = uStack_3b0._4_4_;
                        bVar63 = 2 < uVar36;
                        uVar36 = uVar52;
                        local_3b8 = lVar50;
                        uStack_3b0 = lVar44;
                      } while (bVar63);
                    }
                  }
                }
LAB_1435cbdc4:
                pplVar33 = pplVar33 + -3;
              } while (&local_378 <= pplVar33);
              iVar34 = (int)local_4b0[2];
              plVar59 = local_4b0;
            }
            if (iVar34 != 0) {
              lVar40 = plVar59[1];
              lVar50 = 0;
              do {
                (**(code **)(**(longlong **)(lVar40 + lVar50) + 0x3b8))();
                lVar50 = lVar50 + 0x10;
              } while ((longlong)iVar34 * 0x10 != lVar50);
            }
          }
          uVar25 = local_4bc & ~(uint)local_4d0;
          puVar31 = local_460;
          if (local_460 == (uint *)0x0) {
            puVar31 = local_470;
          }
          iVar34 = (int)local_4e8;
          lVar40 = (longlong)iVar34;
          uVar62 = puVar31[lVar40] & uVar25;
          plVar59 = local_4e8;
          iVar58 = (int)local_4f0;
          if (uVar62 == 0) {
            iVar38 = local_458 + 0x1e;
            if (-1 < (int)(local_458 - 1)) {
              iVar38 = local_458 - 1;
            }
            iVar38 = iVar38 >> 5;
            iVar58 = (int)local_4f0 + 0x20;
            iVar57 = iVar38;
            if (iVar38 < iVar34) {
              iVar57 = iVar34;
            }
            if (iVar34 < iVar38) {
              lVar50 = 0;
              do {
                uVar62 = puVar31[lVar40 + lVar50 + 1];
                if (uVar62 != 0) {
                  uVar25 = 0xffffffff;
                  plVar59 = (longlong *)(ulonglong)(iVar34 + (int)lVar50 + 1);
                  goto LAB_1435cbea2;
                }
                iVar58 = iVar58 + 0x20;
                lVar50 = lVar50 + 1;
              } while (iVar57 - lVar40 != lVar50);
              uVar25 = 0xffffffff;
              iVar34 = iVar57;
            }
            plVar59 = (longlong *)(ulonglong)(iVar34 + 1);
            uVar52 = local_4d0;
            uVar62 = local_458;
          }
          else {
LAB_1435cbea2:
            uVar52 = (ulonglong)(-uVar62 & uVar62);
            uVar36 = uVar52 * 2 + 1;
            lVar40 = 0x3f;
            if (uVar36 != 0) {
              for (; uVar36 >> lVar40 == 0; lVar40 = lVar40 + -1) {
              }
            }
            uVar62 = (iVar58 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
            if ((int)local_458 <= (int)uVar62) {
              uVar62 = local_458;
            }
          }
          uVar36 = (ulonglong)uVar62;
        } while (uVar62 != (uint)local_4b8);
      }
LAB_1435cb698:
      if (local_4a8[0] != 0) {
        FUN_1400020a8();
      }
      uVar25 = local_4c0;
      local_438 = 0;
      if (local_440 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1435cc1d2(&local_480,0);
      if (local_460 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (local_480 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      uVar25 = uVar25 & ~(uint)local_4c8;
      puVar31 = local_3e8;
      if (local_3e8 == (uint *)0x0) {
        puVar31 = local_3f8;
      }
      iVar34 = (int)local_4d8;
      lVar40 = (longlong)iVar34;
      uVar62 = puVar31[lVar40] & uVar25;
      if (uVar62 == 0) {
        iVar58 = local_3e0 + 0x1e;
        if (-1 < (int)(local_3e0 - 1)) {
          iVar58 = local_3e0 - 1;
        }
        iVar58 = iVar58 >> 5;
        local_4f4 = local_4f4 + 0x20;
        iVar38 = iVar58;
        if (iVar58 < iVar34) {
          iVar38 = iVar34;
        }
        if (iVar34 < iVar58) {
          lVar50 = 0;
          do {
            uVar62 = puVar31[lVar40 + lVar50 + 1];
            if (uVar62 != 0) {
              local_4d8 = (ulonglong)(iVar34 + (int)lVar50 + 1);
              uVar25 = 0xffffffff;
              goto LAB_1435cb7a0;
            }
            local_4f4 = local_4f4 + 0x20;
            lVar50 = lVar50 + 1;
          } while (iVar38 - lVar40 != lVar50);
          uVar25 = 0xffffffff;
          lVar40 = (longlong)iVar38;
        }
        local_4d8 = lVar40 + 1;
        uVar36 = (ulonglong)local_3e0;
      }
      else {
LAB_1435cb7a0:
        local_4c8 = (ulonglong)(-uVar62 & uVar62);
        uVar36 = local_4c8 * 2 + 1;
        lVar40 = 0x3f;
        if (uVar36 != 0) {
          for (; uVar36 >> lVar40 == 0; lVar40 = lVar40 + -1) {
          }
        }
        uVar62 = (local_4f4 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
        uVar36 = (ulonglong)uVar62;
        if ((int)local_3e0 <= (int)uVar62) {
          uVar36 = (ulonglong)local_3e0;
        }
      }
    } while ((int)uVar36 != (int)local_4e0);
  }
LAB_1435ca3bd:
  local_3c0 = 0;
  if (local_3c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3e0 == 0) {
    uVar52 = 1;
    uVar36 = 0;
    iVar34 = 0;
    uVar25 = 0;
  }
  else {
    puVar31 = local_3e8;
    if (local_3e8 == (uint *)0x0) {
      puVar31 = local_3f8;
    }
    uVar25 = *puVar31;
    if (uVar25 == 0) {
      iVar34 = local_3e0 + 0x1e;
      if (-1 < (int)(local_3e0 - 1)) {
        iVar34 = local_3e0 - 1;
      }
      uVar36 = 0;
      uVar52 = (ulonglong)(uint)(iVar34 >> 5);
      if (iVar34 >> 5 < 1) {
        uVar52 = uVar36;
      }
      iVar34 = 0;
      do {
        if (uVar52 == uVar36) goto LAB_1435cc0ea;
        iVar34 = iVar34 + 0x20;
        uVar25 = puVar31[uVar36 + 1];
        uVar36 = uVar36 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar36 = 0;
      iVar34 = 0;
    }
    uVar52 = (ulonglong)(-uVar25 & uVar25);
    uVar47 = uVar52 * 2 + 1;
    lVar40 = 0x3f;
    if (uVar47 != 0) {
      for (; uVar47 >> lVar40 == 0; lVar40 = lVar40 + -1) {
      }
    }
    uVar25 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    if ((int)local_3e0 <= (int)uVar25) {
      uVar25 = local_3e0;
    }
  }
  if ((int)uVar25 < (int)local_3e0) {
    uVar62 = 0xffffffff;
    do {
      lVar50 = local_408;
      lVar40 = (longlong)(int)uVar25 * 0x88;
      *(undefined4 *)(local_408 + 0x50 + lVar40) = 0;
      if (*(longlong *)(local_408 + 0x48 + lVar40) != 0) {
        FUN_1400020a8();
      }
      plVar59 = (longlong *)(lVar50 + lVar40 + 8);
      FUN_1435cc1d2(plVar59,0);
      if (*(longlong *)(lVar50 + lVar40 + 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*plVar59 != 0) {
        FUN_1400020a8();
      }
      uVar62 = uVar62 & ~(uint)uVar52;
      puVar31 = local_3e8;
      if (local_3e8 == (uint *)0x0) {
        puVar31 = local_3f8;
      }
      iVar58 = (int)uVar36;
      lVar40 = (longlong)iVar58;
      uVar25 = puVar31[lVar40] & uVar62;
      if (uVar25 == 0) {
        iVar38 = local_3e0 + 0x1e;
        if (-1 < (int)(local_3e0 - 1)) {
          iVar38 = local_3e0 - 1;
        }
        iVar38 = iVar38 >> 5;
        iVar57 = iVar38;
        if (iVar38 < iVar58) {
          iVar57 = iVar58;
        }
        if (iVar38 <= iVar58) break;
        lVar50 = 0;
        while( true ) {
          iVar34 = iVar34 + 0x20;
          uVar25 = puVar31[lVar40 + lVar50 + 1];
          if (uVar25 != 0) break;
          lVar50 = lVar50 + 1;
          if (iVar57 - lVar40 == lVar50) goto LAB_1435cc0ea;
        }
        uVar36 = (ulonglong)(iVar58 + (int)lVar50 + 1);
        uVar62 = 0xffffffff;
      }
      uVar52 = (ulonglong)(-uVar25 & uVar25);
      uVar47 = uVar52 * 2 + 1;
      lVar40 = 0x3f;
      if (uVar47 != 0) {
        for (; uVar47 >> lVar40 == 0; lVar40 = lVar40 + -1) {
        }
      }
      uVar25 = (iVar34 - ((uint)lVar40 ^ 0x3f)) + 0x3e;
    } while ((int)uVar25 < (int)local_3e0);
  }
LAB_1435cc0ea:
  uVar36 = uStack_400 >> 0x20;
  uStack_400 = uStack_400 & 0xffffffff00000000;
  if ((int)uVar36 != 0) {
    FUN_144a544ac(&local_408,0);
  }
  iStack_3d8 = 0xffffffff;
  local_3d4 = 0;
  local_3e0 = 0;
  if (0x80 < local_3dc) {
    local_3dc = 0x80;
    FUN_1446efbd8(local_3f8,0);
  }
  if (local_3e8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_408 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1435cad94:
  local_3b8 = *plVar29;
  uStack_3b0 = plVar29[1];
  local_3a8 = plVar29[2];
  lStack_3a0 = plVar29[3];
  local_398 = plVar29[4];
  lStack_390 = plVar29[5];
  local_388 = plVar29[6];
  lStack_380 = plVar29[7];
  lVar40 = *plVar32;
  lVar50 = plVar54[-7];
  lVar44 = plVar54[-6];
  lVar48 = plVar54[-5];
  lVar56 = plVar54[-4];
  lVar8 = plVar54[-3];
  lVar14 = plVar54[-1];
  plVar29[6] = plVar54[-2];
  plVar29[7] = lVar14;
  plVar29[4] = lVar56;
  plVar29[5] = lVar8;
  plVar29[2] = lVar44;
  plVar29[3] = lVar48;
  *plVar29 = lVar40;
  plVar29[1] = lVar50;
  plVar54[-2] = local_388;
  plVar54[-1] = lStack_380;
  plVar54[-4] = local_398;
  plVar54[-3] = lStack_390;
  plVar54[-6] = local_3a8;
  plVar54[-5] = lStack_3a0;
  *plVar32 = local_3b8;
  plVar54[-7] = uStack_3b0;
  iVar34 = iVar34 + -1;
  plVar54 = plVar54 + -0x10;
  if ((longlong)plVar45 - (longlong)plVar42 < (longlong)plVar46 - (longlong)plVar49) {
    if (plVar37 < plVar59) {
      *pplVar33 = plVar37;
      pplVar33[1] = plVar59;
      *(int *)(pplVar33 + 2) = iVar34;
      pplVar33 = pplVar33 + 3;
    }
    plVar49 = plVar29;
    if (plVar32 <= plVar29 + 8) goto LAB_1435cb42f;
  }
  else {
    if (plVar29 + 8 < plVar32) {
      *pplVar33 = plVar29;
      pplVar33[1] = plVar54;
      *(int *)(pplVar33 + 2) = iVar34;
      pplVar33 = pplVar33 + 3;
    }
    plVar29 = plVar37;
    plVar45 = plVar59;
    plVar54 = plVar59;
    if (plVar59 <= plVar37) goto LAB_1435cb42f;
  }
  iVar58 = (int)((ulonglong)((longlong)plVar45 - (longlong)plVar49) >> 6);
  uVar25 = iVar58 + 1;
  plVar42 = plVar49;
  plVar59 = plVar54;
  plVar46 = plVar45;
  if (iVar34 == 0) goto LAB_1435caea2;
  goto LAB_1435caba2;
LAB_1435cb9ca:
  local_3b8 = *plVar29;
  uStack_3b0 = plVar29[1];
  lVar50 = local_3b8;
  lVar44 = uStack_3b0;
  lVar40 = plVar54[-1];
  *plVar29 = *plVar32;
  plVar29[1] = lVar40;
  local_3b8._4_4_ = (undefined4)((ulonglong)local_3b8 >> 0x20);
  uStack_3b0._4_4_ = (undefined4)((ulonglong)uStack_3b0 >> 0x20);
  *(undefined4 *)plVar32 = (undefined4)local_3b8;
  *(undefined4 *)((longlong)plVar54 + -0xc) = local_3b8._4_4_;
  *(int *)(plVar54 + -1) = (int)uStack_3b0;
  *(undefined4 *)((longlong)plVar54 + -4) = uStack_3b0._4_4_;
  iVar34 = iVar34 + -1;
  plVar54 = plVar54 + -4;
  local_3b8 = lVar50;
  uStack_3b0 = lVar44;
  if ((longlong)plVar45 - (longlong)plVar42 < (longlong)plVar46 - (longlong)plVar49) {
    if (plVar37 < plVar59) {
      *pplVar33 = plVar37;
      pplVar33[1] = plVar59;
      *(int *)(pplVar33 + 2) = iVar34;
      pplVar33 = pplVar33 + 3;
    }
    plVar49 = plVar29;
    if (plVar32 <= plVar29 + 2) goto LAB_1435cbdc4;
  }
  else {
    if (plVar29 + 2 < plVar32) {
      *pplVar33 = plVar29;
      pplVar33[1] = plVar54;
      *(int *)(pplVar33 + 2) = iVar34;
      pplVar33 = pplVar33 + 3;
    }
    plVar29 = plVar37;
    plVar54 = plVar59;
    plVar45 = plVar59;
    if (plVar59 <= plVar37) goto LAB_1435cbdc4;
  }
  iVar58 = (int)((ulonglong)((longlong)plVar45 - (longlong)plVar49) >> 4);
  uVar36 = (ulonglong)(iVar58 + 1);
  plVar42 = plVar49;
  plVar59 = plVar54;
  plVar46 = plVar45;
  if (iVar34 == 0) goto LAB_1435cba72;
  goto LAB_1435cb8af;
}



// FUNCTION 1435cc1d2 FUN_1435cc1d2 body=494 status=ok
// SIG undefined FUN_1435cc1d2(void)

void FUN_1435cc1d2(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_1435cc32e;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x40) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_1435cc32e;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1435cc32e:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 1435cc3c2 FUN_1435cc3c2 body=659 status=ok
// SIG undefined FUN_1435cc3c2(void)

void FUN_1435cc3c2(longlong *param_1)

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
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1435cc43d;
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
LAB_1435cc43d:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
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
      lVar13 = (longlong)iVar12 * 0x40;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x3c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x38 + lVar13) =
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



// FUNCTION 1435cc655 FUN_1435cc655 body=31 status=ok
// SIG undefined FUN_1435cc655(void)

void FUN_1435cc655(undefined8 *param_1)

{
  *param_1 = 0xdeadbeefdeadbeef;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return;
}



// FUNCTION 1435cc674 FUN_1435cc674 body=262 status=ok
// SIG undefined FUN_1435cc674(void)

void FUN_1435cc674(longlong param_1,int param_2)

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



// FUNCTION 1435cc77a FUN_1435cc77a body=216 status=ok
// SIG undefined FUN_1435cc77a(void)

void FUN_1435cc77a(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  
  uVar2 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar2 < 0x7ff1) {
        uVar2 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
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
  uVar4 = 0x7fffffff;
  iVar1 = (int)(uVar2 >> 4);
  if ((iVar1 < param_2) || (uVar4 = uVar2 >> 4 & 0xffffffff, 0 < iVar1)) {
    uVar3 = (undefined4)uVar4;
    FUN_1446f8d3c(param_1,0,uVar4,0x10,8);
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}



// FUNCTION 1435cc878 FUN_1435cc878 body=12 status=ok
// SIG undefined FUN_1435cc878(void)

void FUN_1435cc878(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435cc881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435cc884 FUN_1435cc884 body=29 status=ok
// SIG undefined FUN_1435cc884(void)

undefined8 FUN_1435cc884(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435cc8a2 FUN_1435cc8a2 body=282 status=ok
// SIG undefined FUN_1435cc8a2(void)

undefined8 * FUN_1435cc8a2(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435cc9bc FUN_1435cc9bc body=89 status=ok
// SIG undefined FUN_1435cc9bc(void)

ulonglong FUN_1435cc9bc(undefined8 *param_1)

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
    uVar3 = (**(code **)(*plVar2 + 0xa8))(plVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435cca0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)*param_1)(param_1,1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1435cca16 FUN_1435cca16 body=29 status=ok
// SIG undefined FUN_1435cca16(void)

undefined8 FUN_1435cca16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435cca48 FUN_1435cca48 body=93 status=ok
// SIG undefined FUN_1435cca48(void)

void FUN_1435cca48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa00870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa00110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1435ccaa6 FUN_1435ccaa6 body=93 status=ok
// SIG undefined FUN_1435ccaa6(void)

void FUN_1435ccaa6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aa00870;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aa00110;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1435ccb04 FUN_1435ccb04 body=126 status=ok
// SIG undefined FUN_1435ccb04(void)

void FUN_1435ccb04(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aa00870;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aa00110;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001435ccb73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1435ccb8c FUN_1435ccb8c body=38 status=ok
// SIG undefined FUN_1435ccb8c(void)

undefined8 FUN_1435ccb8c(longlong param_1)

{
  FUN_147c102ec(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1435ccbb2 FUN_1435ccbb2 body=120 status=ok
// SIG undefined FUN_1435ccbb2(void)

void FUN_1435ccbb2(longlong *param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_147d95fc2(param_1[1],param_1 + 2);
  FUN_147c0bb60(*param_1 + 0x20,local_28);
  *(undefined4 *)(param_1[1] + 0x1c8) = local_28[0];
  *(longlong *)(*(longlong *)(*param_1 + 0x20) + (longlong)*(int *)(param_1[1] + 0x1c8) * 8) =
       param_1[1];
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435ccc36 FUN_1435ccc36 body=29 status=ok
// SIG undefined FUN_1435ccc36(void)

void FUN_1435ccc36(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435ccc54 FUN_1435ccc54 body=29 status=ok
// SIG undefined FUN_1435ccc54(void)

undefined8 FUN_1435ccc54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435ccc72 FUN_1435ccc72 body=282 status=ok
// SIG undefined FUN_1435ccc72(void)

undefined8 * FUN_1435ccc72(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435ccd8c FUN_1435ccd8c body=185 status=ok
// SIG undefined FUN_1435ccd8c(void)

void FUN_1435ccd8c(longlong param_1)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  FUN_147d95fc2(*(undefined8 *)(param_1 + 0xb8),param_1 + 0xc0);
  FUN_147c0bb60(*(longlong *)(param_1 + 0xb0) + 0x20,local_28);
  *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + 0x1c8) = local_28[0];
  *(longlong *)
   (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x20) +
   (longlong)*(int *)(*(longlong *)(param_1 + 0xb8) + 0x1c8) * 8) = *(longlong *)(param_1 + 0xb8);
  if (param_1 != 0) {
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



// FUNCTION 1435cce5a FUN_1435cce5a body=71 status=ok
// SIG undefined FUN_1435cce5a(void)

void FUN_1435cce5a(longlong *param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1[1] + 0x1c8) != -1) {
    FUN_147c0bc3a(*param_1 + 0x20);
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      FUN_143778f62(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1435cceac FUN_1435cceac body=12 status=ok
// SIG undefined FUN_1435cceac(void)

void FUN_1435cceac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435cceb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435cceb8 FUN_1435cceb8 body=29 status=ok
// SIG undefined FUN_1435cceb8(void)

undefined8 FUN_1435cceb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435cced6 FUN_1435cced6 body=282 status=ok
// SIG undefined FUN_1435cced6(void)

undefined8 * FUN_1435cced6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435ccff0 FUN_1435ccff0 body=130 status=ok
// SIG undefined FUN_1435ccff0(void)

void FUN_1435ccff0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (*(int *)(param_1[0x16] + 0x1c8) != -1) {
    FUN_147c0bc3a(param_1[0x15] + 0x20);
    lVar2 = param_1[0x16];
    if (lVar2 != 0) {
      FUN_143778f62(lVar2);
      FUN_1400020a8(lVar2);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435cd039. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435cd0d8 FUN_1435cd0d8 body=29 status=ok
// SIG undefined FUN_1435cd0d8(void)

void FUN_1435cd0d8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1435cd0f6 FUN_1435cd0f6 body=29 status=ok
// SIG undefined FUN_1435cd0f6(void)

undefined8 FUN_1435cd0f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435cd114 FUN_1435cd114 body=282 status=ok
// SIG undefined FUN_1435cd114(void)

undefined8 * FUN_1435cd114(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435cd22e FUN_1435cd22e body=179 status=ok
// SIG undefined FUN_1435cd22e(void)

void FUN_1435cd22e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x17];
  *(undefined8 *)(lVar2 + 0x38) = param_1[0x1e];
  uVar3 = param_1[0x1d];
  *(undefined8 *)(lVar2 + 0x28) = param_1[0x1c];
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  uVar3 = param_1[0x1b];
  *(undefined8 *)(lVar2 + 0x18) = param_1[0x1a];
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar3 = param_1[0x19];
  *(undefined8 *)(lVar2 + 8) = param_1[0x18];
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined4 *)(param_1[0x17] + 0x1c4) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1[0x17] + 0x1c0) = *(undefined4 *)((longlong)param_1 + 0x184);
  FUN_147d95fc2(param_1[0x17],param_1 + 0x20);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435cd2d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435cd2e2 FUN_1435cd2e2 body=174 status=ok
// SIG undefined FUN_1435cd2e2(void)

undefined8 * FUN_1435cd2e2(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14aa002e0;
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



// FUNCTION 1435cd390 FUN_1435cd390 body=713 status=ok
// SIG undefined FUN_1435cd390(void)

void FUN_1435cd390(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 *_Src;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong local_c0;
  longlong *local_b8;
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
  puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar10 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar10 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar10 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar10;
  param_2[6] = (ulonglong)(puVar10 + 1);
  puVar10[1] = 0;
  *puVar10 = &PTR_FUN_14a1fb978;
  puVar10[3] = 0;
  *(int *)(puVar10 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x24) = 8;
  }
  else {
    plVar9 = &local_c0;
    if (local_b8 != (longlong *)0x0) {
      plVar9 = local_b8;
    }
    FUN_1446fe144(puVar10 + 2,local_b0,0);
    puVar6 = (undefined8 *)puVar10[3];
    if ((undefined8 *)puVar10[3] == (undefined8 *)0x0) {
      puVar6 = puVar10 + 2;
    }
    memcpy(puVar6,plVar9,(longlong)local_b0);
  }
  puVar10[0xd] = 0;
  *(int *)(puVar10 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar10 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar10 + 5,local_60,0);
    puVar6 = (undefined8 *)puVar10[0xd];
    if ((undefined8 *)puVar10[0xd] == (undefined8 *)0x0) {
      puVar6 = puVar10 + 5;
    }
    memcpy(puVar6,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar10 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar10 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar10 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar10 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar4 = *(longlong *)(param_1 + 0x1b8);
  FUN_1435d8c26(lVar4,param_2);
  FUN_147c10606(lVar4,param_2);
  local_c0 = 0;
  local_c8 = 0;
  FUN_1435d42d4(lVar4,param_2,0,&local_c0);
  lVar5 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_c0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_c0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_c0 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = lVar5;
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
  if ((*(byte *)((longlong)&DAT_14ca814c8 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar4 + 0xa8) * 2) * 0x3c
                + 1) & 2) != 0) {
    FUN_147c10606(lVar4,param_2);
    local_c8 = *(undefined8 *)(param_1 + 0x1c8);
    FUN_1435d42d4(lVar4,param_2,1,param_1 + 0x1c0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435cd666 FUN_1435cd666 body=174 status=ok
// SIG undefined FUN_1435cd666(void)

undefined8 * FUN_1435cd666(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14aa002e0;
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



// FUNCTION 1435cd714 FUN_1435cd714 body=174 status=ok
// SIG undefined FUN_1435cd714(void)

undefined8 * FUN_1435cd714(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14aa00320;
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



// FUNCTION 1435cd7c2 FUN_1435cd7c2 body=489 status=ok
// SIG undefined FUN_1435cd7c2(void)

void FUN_1435cd7c2(longlong param_1,ulonglong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar4 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar4 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar4;
  param_2[6] = (ulonglong)(puVar4 + 1);
  puVar4[1] = 0;
  *puVar4 = &PTR_FUN_14a1fb978;
  puVar4[3] = 0;
  *(int *)(puVar4 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x24) = 8;
  }
  else {
    puVar3 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar3 = local_b0;
    }
    FUN_1446fe144(puVar4 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar4[3];
    if ((undefined8 *)puVar4[3] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 2;
    }
    memcpy(puVar2,puVar3,(longlong)local_a8);
  }
  puVar4[0xd] = 0;
  *(int *)(puVar4 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar4 + 0x74) = 8;
  }
  else {
    puVar3 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar3 = local_a0;
    }
    FUN_1446fe1b8(puVar4 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar4[0xd];
    if ((undefined8 *)puVar4[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar4 + 5;
    }
    memcpy(puVar2,puVar3,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar4 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar4 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar4 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar4 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1b8);
  FUN_147c10606(uVar1,param_2);
  local_c8 = 0;
  FUN_1435d42d4(uVar1,param_2,2,param_1 + 0x1c0);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435cd9ac FUN_1435cd9ac body=174 status=ok
// SIG undefined FUN_1435cd9ac(void)

undefined8 * FUN_1435cd9ac(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14aa00320;
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



// FUNCTION 1435cda5a FUN_1435cda5a body=25 status=ok
// SIG undefined FUN_1435cda5a(void)

void FUN_1435cda5a(void)

{
  FUN_14610d210();
  FUN_14170c56a(&DAT_14caf3460);
  return;
}



// FUNCTION 1435cda74 FUN_1435cda74 body=282 status=ok
// SIG undefined FUN_1435cda74(void)

undefined8 * FUN_1435cda74(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435cdb8e FUN_1435cdb8e body=167 status=ok
// SIG undefined FUN_1435cdb8e(void)

void FUN_1435cdb8e(undefined8 *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  if (((*(int *)((longlong)param_1 + 0xac) != 0) &&
      (uVar2 = *(uint *)(param_1 + 0x15), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0xac))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((lVar3 = *plVar5, lVar3 != 0 &&
         (puVar4 = *(undefined8 **)(lVar3 + 0x38), puVar4 != (undefined8 *)0x0)))))) {
      *(undefined8 *)(lVar3 + 0x38) = 0;
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435cdc2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435cdc36 FUN_1435cdc36 body=29 status=ok
// SIG undefined FUN_1435cdc36(void)

void FUN_1435cdc36(longlong *param_1)

{
  *(byte *)(*param_1 + 0x692) = *(byte *)(*param_1 + 0x692) & 0xfd | *(char *)param_1[1] * '\x02';
  return;
}



// FUNCTION 1435cdc6c FUN_1435cdc6c body=5 status=ok
// SIG undefined FUN_1435cdc6c(void)

longlong FUN_1435cdc6c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1435cdc72 FUN_1435cdc72 body=12 status=ok
// SIG undefined FUN_1435cdc72(void)

void FUN_1435cdc72(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435cdc7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435cdc7e FUN_1435cdc7e body=29 status=ok
// SIG undefined FUN_1435cdc7e(void)

undefined8 FUN_1435cdc7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435cdc9c FUN_1435cdc9c body=149 status=ok
// SIG undefined FUN_1435cdc9c(void)

void FUN_1435cdc9c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    plVar1 = (longlong *)(lVar3 + 0x298);
    iVar4 = *(int *)(lVar3 + 0x2a4);
    iVar5 = 0;
    *(undefined4 *)(lVar3 + 0x2a0) = 0;
    if (iVar4 < 0) {
      FUN_14481578e(plVar1);
      iVar5 = *(int *)(lVar3 + 0x2a0);
      iVar4 = *(int *)(lVar3 + 0x2a4);
    }
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(lVar3 + 0x2a0) = uVar2 + iVar5;
    if ((uint)(iVar4 - iVar5) < uVar2) {
      FUN_1446f48e2(plVar1);
    }
    memset((void *)((longlong)iVar5 * 4 + *plVar1),0,(longlong)(int)uVar2 << 2);
    return;
  }
  return;
}



// FUNCTION 1435cdd3c FUN_1435cdd3c body=12 status=ok
// SIG undefined FUN_1435cdd3c(void)

void FUN_1435cdd3c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435cdd45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435cdd48 FUN_1435cdd48 body=29 status=ok
// SIG undefined FUN_1435cdd48(void)

undefined8 FUN_1435cdd48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435cdd66 FUN_1435cdd66 body=282 status=ok
// SIG undefined FUN_1435cdd66(void)

undefined8 * FUN_1435cdd66(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435cde80 FUN_1435cde80 body=207 status=ok
// SIG undefined FUN_1435cde80(void)

void * FUN_1435cde80(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  int iVar7;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  pvVar6 = (void *)(ulonglong)DAT_14c7585c8;
  lVar4 = param_1[0x15];
  if (lVar4 != 0) {
    plVar2 = (longlong *)(lVar4 + 0x298);
    iVar5 = *(int *)(lVar4 + 0x2a4);
    iVar7 = 0;
    *(undefined4 *)(lVar4 + 0x2a0) = 0;
    if (iVar5 < 0) {
      FUN_14481578e(plVar2);
      iVar7 = *(int *)(lVar4 + 0x2a0);
      iVar5 = *(int *)(lVar4 + 0x2a4);
    }
    uVar3 = *(uint *)(param_1 + 0x16);
    *(uint *)(lVar4 + 0x2a0) = uVar3 + iVar7;
    if ((uint)(iVar5 - iVar7) < uVar3) {
      FUN_1446f48e2(plVar2);
    }
    pvVar6 = memset((void *)((longlong)iVar7 * 4 + *plVar2),0,(longlong)(int)uVar3 << 2);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435cdf3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pvVar6 = (void *)(**(code **)*param_1)(param_1,1);
      return pvVar6;
    }
  }
  return pvVar6;
}



// FUNCTION 1435cdf50 FUN_1435cdf50 body=282 status=ok
// SIG undefined FUN_1435cdf50(void)

undefined8 * FUN_1435cdf50(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435ce06a FUN_1435ce06a body=1015 status=ok
// SIG undefined FUN_1435ce06a(void)

void FUN_1435ce06a(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_69;
  longlong local_68 [4];
  longlong *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar12 = *piVar1;
  if (iVar12 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar12 = *piVar1;
  }
  *piVar1 = 0x40000010;
  FUN_1435c3640(*param_1);
  local_48 = (longlong *)0x0;
  local_40 = 0x400000000;
  lVar4 = param_1[1];
  if (lVar4 != 0) {
    local_40 = 0x400000001;
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    local_68[0] = lVar4;
  }
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar7 = (uint *)*puVar2;
  if (puVar7 != (uint *)0x0) goto LAB_1435ce192;
  while( true ) {
    uVar9 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar9 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar9 | 1;
      __tlregdtor(&LAB_1435c8f10);
    }
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar6 = *(undefined4 **)(lVar4 + 0x310);
    *(undefined8 *)(lVar4 + 0x310) = 0;
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar6 = 0xffffffff;
    *(undefined4 **)(puVar6 + 0x10) = puVar6 + 0x16;
    puVar6[0x12] = 0;
    *puVar2 = puVar6;
    FUN_140217a48(puVar2);
    puVar7 = (uint *)*puVar2;
LAB_1435ce192:
    puVar11 = (undefined8 *)(*(longlong *)(puVar7 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar10 = (uint *)(puVar11 + 0x16);
    uVar9 = puVar7[0x12];
    if (puVar10 <= puVar7 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x4000;
      LOCK();
      uVar3 = *puVar7;
      *puVar7 = *puVar7 + uVar9 + 1;
      UNLOCK();
      if ((uVar3 ^ uVar9) != 0xffffffff) break;
      puVar7 = (uint *)*puVar2;
      *puVar7 = 0xffffffff;
      *(uint **)(puVar7 + 0x10) = puVar7 + 0x16;
      puVar7[0x12] = 0;
      *puVar2 = puVar7;
      puVar11 = (undefined8 *)((longlong)puVar7 + 0x5fU & 0xfffffffffffffff8);
      puVar10 = (uint *)(puVar11 + 0x16);
      uVar9 = 0;
      if (puVar10 <= puVar7 + 0x4000) {
        uVar9 = 1;
        goto LAB_1435ce212;
      }
    }
  }
  uVar9 = uVar9 + 1;
LAB_1435ce212:
  *(uint **)(puVar7 + 0x10) = puVar10;
  puVar7[0x12] = uVar9;
  FUN_1447247dc(puVar11,local_68);
  *puVar11 = &PTR_FUN_14aa00470;
  puVar11[0x15] = *param_1;
  if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
  }
  puVar11[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar11[9] = puVar11;
  puVar11[10] = puVar11;
  lVar4 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(lVar4 + 0x30);
  }
  puVar11[0xf] = uVar8;
  puVar11[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 3;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  local_69 = 1;
  FUN_1447439e4(puVar11);
  uVar8 = *param_2;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  local_78 = puVar11;
  FUN_14002c244(uVar8,&local_78);
  piVar5 = (int *)param_1[2];
  if (piVar5 != (int *)0x0) {
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      LOCK();
      *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + 1;
      UNLOCK();
      local_69 = 1;
      FUN_1447439e4();
      if (param_1[2] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    piVar5 = (int *)(puVar11 + 1);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  plVar13 = local_68;
  if (local_48 != (longlong *)0x0) {
    plVar13 = local_48;
  }
  FUN_144717c65(plVar13,local_40 & 0xffffffff);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  *piVar1 = iVar12;
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435ce462 FUN_1435ce462 body=282 status=ok
// SIG undefined FUN_1435ce462(void)

undefined8 * FUN_1435ce462(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435ce57c FUN_1435ce57c body=3552 status=ok
// SIG undefined FUN_1435ce57c(void)

void FUN_1435ce57c(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auVar7 [4];
  undefined1 uVar8;
  wchar_t *pwVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  wchar_t *_Dest;
  longlong lVar19;
  byte bVar20;
  undefined8 *puVar21;
  bool bVar22;
  undefined1 auStack_3f8 [32];
  int local_3d8;
  undefined8 **local_3d0;
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  longlong local_3a0;
  undefined8 *local_398;
  longlong local_390;
  undefined8 *local_388;
  longlong lStack_380;
  undefined4 local_378;
  undefined8 local_374;
  undefined8 uStack_36c;
  uint local_364;
  undefined1 local_360;
  undefined4 local_35c;
  wchar_t *local_358;
  undefined1 local_350 [8];
  undefined1 auStack_348 [11];
  undefined4 uStack_33d;
  byte bStack_339;
  undefined8 local_338;
  undefined8 local_330;
  undefined4 local_328;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_278 [16];
  undefined1 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined1 local_250 [7];
  undefined1 auStack_249 [5];
  undefined1 auStack_244 [3];
  undefined1 auStack_241 [5];
  byte abStack_23c [3];
  undefined1 uStack_239;
  undefined8 local_238;
  ulonglong uStack_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  ulonglong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined5 uStack_1a4;
  undefined3 uStack_19f;
  undefined5 uStack_19c;
  undefined8 uStack_197;
  undefined1 local_188 [8];
  undefined1 auStack_180 [8];
  undefined1 local_178 [4];
  byte bStack_174;
  undefined3 uStack_173;
  uint local_170;
  undefined8 uStack_168;
  undefined1 local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ushort local_88;
  undefined8 local_80;
  ushort local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  uVar8 = 5;
  if (DAT_14caf3c30 == '\0') {
    DAT_14caf3c30 = '\x01';
    uVar8 = 9;
  }
  local_3b8 = *(undefined8 *)(*param_1 + 0x10);
  lVar15 = 0x15;
  do {
    *(undefined1 (*) [16])(local_350 + lVar15 + 3) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)&uStack_33d + lVar15) = 0xffffffff;
    (&bStack_339 + lVar15)[0] = 0;
    (&bStack_339 + lVar15)[1] = 0;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd5);
  local_264 = 0;
  local_278 = (undefined1  [16])0x0;
  local_268 = 0;
  local_260 = 0xffffffff;
  uStack_25c = 0xffffffff;
  uStack_258 = 0xffffffff;
  uStack_254 = 0xffffffff;
  _local_250 = 0;
  auStack_249._1_4_ = auStack_249._1_4_ & 0xffffff00;
  _auStack_244 = 0;
  auStack_241._1_3_ = 0;
  local_330 = 0;
  local_328 = 0xffffffff;
  local_324 = 0;
  local_388 = &local_238;
  local_238 = 0xffffffffffffffff;
  uStack_230 = CONCAT44(uStack_230._4_4_,0xffffffff);
  uStack_220 = CONCAT31(uStack_220._1_3_,1);
  uStack_21c = 0;
  uStack_218 = 0x1000;
  uStack_214 = 0;
  local_208 = local_208 & 0xffffffffffffff00;
  lStack_380 = CONCAT44(lStack_380._4_4_,1);
  local_338 = local_3b8;
  local_323 = uVar8;
  local_228 = local_3b8;
  FUN_144760590(param_2,&local_388,0);
  _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
  pwVar9 = _Dest + 0xd;
  if ((wchar_t *)param_2[1] < pwVar9) {
    FUN_140023dd8(param_2,0x1c);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar9 = _Dest + 0xd;
  }
  *param_2 = (ulonglong)pwVar9;
  wcscpy(_Dest,L"InjectCurves");
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar21 + 0x23;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x120);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar21 + 0x23;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_FUN_14a217b50;
  memcpy(puVar21 + 2,&local_338,0xe8);
  puVar21[0x1f] = 0;
  puVar21[0x20] = CONCAT44(_auStack_244,auStack_249._1_4_);
  *(uint *)((longlong)puVar21 + 0x107) = CONCAT31(auStack_241._1_3_,auStack_241[0]);
  puVar21[0x22] = _Dest;
  lVar15 = 0x11;
  do {
    *(undefined8 *)(local_250 + lVar15 + 7) = 0;
    *(undefined8 *)(auStack_244 + lVar15 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar15) = 0;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd1);
  _local_178 = _local_178 & 0xffffff0000000000;
  lVar15 = 0xd9;
  do {
    *(undefined8 *)(local_250 + lVar15 + 7) = 0;
    *(undefined8 *)(auStack_244 + lVar15 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_239 + lVar15) = 0;
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0x199);
  local_b0 = 0;
  local_80 = 0;
  local_78 = local_78 & 0xff;
  local_a8 = (undefined1  [16])0x0;
  local_98 = (undefined1  [16])0x0;
  local_88 = local_88 & 0xff00;
  lVar15 = 0x15;
  do {
    if (*(longlong *)(local_350 + lVar15 + 3) == 0) break;
    *(longlong *)(local_250 + lVar15 + 3) = *(longlong *)(local_350 + lVar15 + 3);
    bVar2 = *(byte *)((longlong)&local_338 + lVar15);
    bVar20 = bVar2 >> 2;
    auStack_241[lVar15 + 4] = bVar20;
    abStack_23c[lVar15] = bVar2 & 3;
    *(undefined4 *)(auStack_244 + lVar15 + 3) = *(undefined4 *)((longlong)&uStack_33d + lVar15);
    *(uint *)(auStack_249 + lVar15 + 4) = (uint)(&bStack_339)[lVar15];
    iVar18 = (int)local_178 + 1;
    bVar2 = bStack_174 | bVar20 == 2;
    _local_178 = CONCAT14(bVar2,iVar18);
    if (*(longlong *)(auStack_348 + lVar15 + 3) != 0) {
      local_b0 = 1;
      uVar5 = *(undefined8 *)(auStack_249 + lVar15 + 4);
      *(undefined8 *)(local_188 + lVar15 + 3) = *(undefined8 *)(local_250 + lVar15 + 3);
      *(undefined8 *)(auStack_180 + lVar15 + 3) = uVar5;
      *(undefined8 *)(local_178 + lVar15 + 3) = *(undefined8 *)(auStack_241 + lVar15 + 4);
      *(longlong *)(local_188 + lVar15 + 3) = *(longlong *)(auStack_348 + lVar15 + 3);
    }
    lVar15 = lVar15 + 0x18;
  } while (lVar15 != 0xd5);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_a8 = ZEXT816(0);
  auVar7 = local_178;
  if (0 < (longlong)(int)local_178) {
    memcpy(param_2 + 0x15,&local_238,(longlong)(int)local_178 * 0x18);
  }
  *(undefined1 (*) [4])(param_2 + 0x14) = auVar7;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  *(undefined1 *)((longlong)param_2 + 0x17a) = 0;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfc | 2;
  local_1e8 = 0;
  local_1f8 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  uStack_200 = 0;
  uStack_218 = 0;
  uStack_214 = 0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_1dc = 0;
  uStack_1d4 = 0;
  local_1cc = 0;
  uStack_1c4 = 0;
  local_1bc = 0;
  uStack_1b4 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  uStack_19f = 0;
  uStack_19c = 0;
  uStack_197 = 0;
  local_188 = (undefined1  [8])0x0;
  auStack_180 = (undefined1  [8])0x0;
  _local_178 = 0;
  local_170 = 1;
  uStack_168 = 0;
  FUN_144b0e33a(param_2);
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar21 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar21 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_FUN_14a20cb90;
  *(undefined1 *)(puVar21 + 2) = 0;
  *(undefined1 (*) [16])((longlong)puVar21 + 0x14) = (undefined1  [16])0x0;
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar21 + 5;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x30);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar21 + 5;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_LAB_14a1e7fc8;
  puVar21[2] = 0;
  puVar21[3] = 0x4400000000000000;
  puVar21[4] = 0x3f80000044000000;
  local_1f8 = DAT_14c9c0d98;
  uStack_200 = DAT_14c9c0db0;
  local_208 = DAT_14c9c0d50;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_146085236();
  uVar11 = 0;
  FUN_1448e935e(uVar5,&local_388,&DAT_14caf3880,0);
  FUN_146085236();
  lVar15 = lStack_380;
  puVar10 = local_388;
  local_398 = local_388;
  local_390 = lStack_380;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_14608549c();
  FUN_1448e935e(uVar5,&local_388,&DAT_14caf39a8,0);
  FUN_14608549c();
  lVar19 = lStack_380;
  puVar21 = local_388;
  local_238 = DAT_14caf3a78;
  if (puVar10 != (undefined8 *)0x0) {
    lVar16 = (longlong)*(int *)((longlong)puVar10 + 0xd4);
    uVar11 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x50) + lVar16 * 8);
    if (uVar11 == 0) {
      uVar11 = FUN_1400bafc2(*(longlong *)(lVar15 + 8),lVar16,1);
    }
  }
  uStack_230 = uVar11;
  if (puVar21 == (undefined8 *)0x0) {
    lVar15 = 0;
  }
  else {
    lVar16 = (longlong)*(int *)((longlong)puVar21 + 0xd4);
    lVar15 = *(longlong *)(*(longlong *)(*(longlong *)(lVar19 + 8) + 0x50) + lVar16 * 8);
    if (lVar15 == 0) {
      lVar15 = FUN_1400bafc2(*(longlong *)(lVar19 + 8),lVar16,1);
    }
  }
  local_1e0 = 0;
  local_228 = lVar15;
  lVar15 = FUN_140028f18(param_2);
  if ((lVar15 != 0) && ((local_170 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = uStack_218;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uStack_214;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_210;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_210._4_4_;
    *(undefined4 *)(param_2 + 0x33) = (undefined4)local_228;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_228._4_4_;
    *(undefined4 *)(param_2 + 0x34) = uStack_220;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_21c;
    param_2[0x31] = local_238;
    param_2[0x32] = uStack_230;
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar21 + 4;
    if ((undefined8 *)param_2[1] < puVar10) {
      FUN_140023dd8(param_2);
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar21 + 4;
    }
    *param_2 = (ulonglong)puVar10;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar21;
    param_2[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a37d348;
    puVar21[2] = lVar15;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(undefined1 *)((longlong)puVar21 + 0x1c) = 1;
  }
  local_3c0 = (longlong)(int)param_1[2];
  if (local_3c0 < 1) {
    uVar17 = 0;
  }
  else {
    lVar15 = 0;
    uVar17 = 0;
    do {
      uVar17 = uVar17 + *(ushort *)(param_1[1] + 0xc + lVar15);
      lVar15 = lVar15 + 0x10;
    } while (local_3c0 * 0x10 != lVar15);
  }
  local_388 = (undefined8 *)0x0;
  lStack_380 = 0;
  local_378 = 1;
  local_374 = 0;
  uStack_36c = 0;
  local_364 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_360 = 0;
  local_35c = 0;
  local_358 = L"ScratchVertexBuffer";
  local_350 = (undefined1  [8])0x0;
  auStack_348._0_8_ = 0;
  iVar18 = uVar17 << 2;
  local_3b0._4_4_ = 0;
  uStack_3a8._0_4_ = 0x4004;
  local_3b0._0_4_ = iVar18;
  if ((uVar17 & 0x3fffffff) == 0) {
    FUN_14570b4be(param_2,&local_388,0x4004,0);
  }
  if (*(char *)((longlong)param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_3d0 = &local_388;
    local_3d8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_3a0,param_2,&local_3b0);
    *(undefined4 *)(local_3a0 + 0x18) = 8;
    FUN_14002049c(param_2,0);
  }
  else {
    local_3d0 = &local_388;
    local_3d8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_3a0,param_2,&local_3b0);
    *(undefined4 *)(local_3a0 + 0x18) = 8;
  }
  lVar15 = local_3a0;
  cVar3 = *(char *)((longlong)param_2 + 0x69);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_3d0 = (undefined8 **)CONCAT44(local_3d0._4_4_,1);
  local_3d8 = iVar18;
  lVar15 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar15,0);
  if (cVar3 == '\0') {
    FUN_14002049c(param_2,0);
  }
  if (0 < (int)local_3c0) {
    lVar19 = local_3c0 << 4;
    lVar16 = 0;
    uVar11 = 0;
    do {
      lVar6 = param_1[1];
      uVar4 = *(ushort *)(lVar6 + 0xc + lVar16);
      memcpy((void *)(lVar15 + uVar11 * 4),*(void **)(lVar6 + lVar16),(ulonglong)((uint)uVar4 * 4));
      FUN_1400020a8(*(undefined8 *)(lVar6 + lVar16));
      *(undefined8 *)(lVar6 + lVar16) = 0;
      uVar11 = (ulonglong)((int)uVar11 + (uint)uVar4);
      lVar16 = lVar16 + 0x10;
    } while (lVar19 != lVar16);
  }
  lVar15 = local_3a0;
  if (*(char *)((longlong)param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar15);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,local_3a0);
  }
  if (0 < (int)local_3c0) {
    lVar19 = local_3c0 << 4;
    lVar15 = 0;
    iVar18 = 0;
    do {
      lVar6 = local_3a0;
      lVar16 = param_1[1];
      uVar4 = *(ushort *)(lVar16 + 0xc + lVar15);
      uStack_3a8 = (double)((float)*(ushort *)(lVar16 + 10 + lVar15) * 0.001953125);
      local_3b0 = (double)((float)*(ushort *)(lVar16 + 8 + lVar15) * 0.001953125);
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar21 + 5;
      if ((undefined8 *)param_2[1] < puVar10) {
        FUN_140023dd8(param_2,0x30);
        puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar21 + 5;
      }
      *param_2 = (ulonglong)puVar10;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar21;
      param_2[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a1fb5a8;
      *(undefined4 *)(puVar21 + 2) = 0;
      puVar21[3] = lVar6;
      *(int *)(puVar21 + 4) = iVar18 * 4;
      uVar5 = DAT_14caf6058;
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar21 + 5;
      if ((undefined8 *)param_2[1] < puVar10) {
        FUN_140023dd8(param_2,0x30);
        puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar21 + 5;
      }
      *param_2 = (ulonglong)puVar10;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar21;
      param_2[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a1fb5a8;
      *(undefined4 *)(puVar21 + 2) = 1;
      puVar21[3] = uVar5;
      *(undefined4 *)(puVar21 + 4) = 0;
      if (local_398 == (undefined8 *)0x0) {
        lVar16 = 0;
      }
      else {
        lVar16 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_390 + 8) + 0x50) +
                  (longlong)*(int *)((longlong)local_398 + 0xd4) * 8);
        if (lVar16 == 0) {
          lVar16 = FUN_1400bafc2(*(longlong *)(local_390 + 8),
                                 (longlong)*(int *)((longlong)local_398 + 0xd4),1);
        }
      }
      FUN_147c0e5ae(param_2,&local_398,lVar16,&local_3b0);
      uVar5 = DAT_14caf6040;
      puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar21 + 6;
      if ((undefined8 *)param_2[1] < puVar10) {
        FUN_140023dd8(param_2,0x38);
        puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar10 = puVar21 + 6;
      }
      *param_2 = (ulonglong)puVar10;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar21;
      param_2[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_FUN_14a1fb5b0;
      puVar21[2] = uVar5;
      puVar21[3] = 0;
      puVar21[4] = 4;
      *(undefined4 *)(puVar21 + 5) = 2;
      uVar17 = (uint)uVar4;
      *(uint *)((longlong)puVar21 + 0x2c) = uVar17;
      iVar18 = iVar18 + uVar17;
      lVar15 = lVar15 + 0x10;
    } while (lVar19 != lVar15);
  }
  if (local_3a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_3a0 + 8);
    uVar17 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_3a0 + 8);
      LOCK();
      uVar17 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(local_3a0 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = local_3a0;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar22 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar22) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar22 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar22) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
  }
  puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar10 = puVar21 + 2;
  if ((undefined8 *)param_2[1] < puVar10) {
    FUN_140023dd8(param_2,0x18);
    puVar21 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar21 + 2;
  }
  *param_2 = (ulonglong)puVar10;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar21;
  param_2[6] = (ulonglong)(puVar21 + 1);
  puVar21[1] = 0;
  *puVar21 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
  *(undefined2 *)(param_2 + 0x2f) = 0;
  local_238 = 0xffffffffffffffff;
  uStack_230 = CONCAT44(uStack_230._4_4_,0xffffffff);
  local_228 = local_3b8;
  uStack_220 = CONCAT31(uStack_220._1_3_,1);
  uStack_21c = 0x1000;
  uStack_218 = 0x70;
  uStack_214 = 0;
  local_208 = local_208 & 0xffffffffffffff00;
  local_388 = &local_238;
  lStack_380 = CONCAT44(lStack_380._4_4_,1);
  FUN_144760590(param_2,&local_388,0);
  lVar15 = _local_250;
  if (_local_250 != 0) {
    LOCK();
    puVar1 = (uint *)(_local_250 + 8);
    uVar17 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar17 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(_local_250 + 8);
      LOCK();
      uVar17 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar17 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(_local_250 + 0xd);
        plVar12 = (longlong *)FUN_14001cc68(0x10,8);
        plVar12[1] = lVar15;
        plVar14 = DAT_14ca843c0;
        plVar13 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar12 = (longlong)plVar14;
            LOCK();
            bVar22 = plVar14 != DAT_14ca843c0;
            plVar13 = plVar12;
            if (bVar22) {
              plVar14 = DAT_14ca843c0;
              plVar13 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar13;
            UNLOCK();
          } while (bVar22);
        }
        else {
          do {
            *plVar12 = (longlong)plVar13;
            LOCK();
            bVar22 = plVar13 != DAT_14ca843c8;
            plVar14 = plVar12;
            if (bVar22) {
              plVar13 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar22);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435cf35e FUN_1435cf35e body=246 status=ok
// SIG undefined FUN_1435cf35e(void)

longlong * FUN_1435cf35e(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ef3234();
  local_30 = 1;
  local_38 = 0;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14caf37c8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1435cf466 FUN_1435cf466 body=12 status=ok
// SIG undefined FUN_1435cf466(void)

void FUN_1435cf466(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001435cf46f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1435cf472 FUN_1435cf472 body=57 status=ok
// SIG undefined FUN_1435cf472(void)

undefined8 * FUN_1435cf472(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14aa00560;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1435cf4ac FUN_1435cf4ac body=282 status=ok
// SIG undefined FUN_1435cf4ac(void)

undefined8 * FUN_1435cf4ac(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435c8f10);
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



// FUNCTION 1435cf5c6 FUN_1435cf5c6 body=99 status=ok
// SIG undefined FUN_1435cf5c6(void)

void FUN_1435cf5c6(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  FUN_1435ce57c(param_1 + 0x15,&DAT_14ca85100);
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001435cf61f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 1435cf629 FUN_1435cf629 body=3645 status=ok
// SIG undefined FUN_1435cf629(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435cf629(void)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  code *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1400b22c2(&local_a8,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_a8,&DAT_14caf3228);
  if (cVar2 == '\0') {
    _DAT_14caf3228 = 0;
    uRam000000014caf3230 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_d8._0_4_ = 4;
  FUN_140bd5914(&DAT_14caf3238,L"gbx.world.enablecascadelegacyfx",&local_a8,
                L"Set to true to enable legacy fx system Cascade.");
  atexit(FUN_1435b8090);
  DAT_14caf3270 = 0;
  DAT_14caf3278 = 0;
  DAT_14caf3250 = 0;
  _DAT_14caf3258 = 0;
  _DAT_14caf327c = 0xffffffff00000080;
  DAT_14caf3284 = 0;
  DAT_14caf3290 = 0;
  _DAT_14caf3298 = 0;
  atexit(FUN_1435b80d5);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8._0_4_ = 1;
  FUN_14078dbce(&DAT_14caf32a0,L"FX.TestGPUSort",&local_a8,
                L"Test GPU sort. 1: Small, 2: Large, 3: Exhaustive, 4: Random");
  atexit(FUN_1435b85cf);
  local_d8._0_4_ = 1;
  FUN_141471170(&DAT_14caf32b8,L"FX.VisualizeGPUSimulation",&DAT_14caf3c88,
                L"Visualize the current state of GPU simulation.\n0 = off\n1 = visualize particle state\n2 = visualize curve texture"
               );
  atexit(FUN_1435b8614);
  local_d8._0_4_ = 0x124;
  FUN_141471170(&DAT_14caf32c8,L"FX.AllowGPUSorting",&DAT_14c7616c0,
                L"Allow particles to be sorted on the GPU.");
  atexit(FUN_1435b8659);
  local_d8._0_4_ = 1;
  FUN_141471170(&DAT_14caf32d8,L"FX.FreezeGPUSimulation",&DAT_14caf3c98,
                L"Freeze particles simulated on the GPU.");
  atexit(FUN_1435b869e);
  local_d8._0_4_ = 1;
  FUN_141471170(&DAT_14caf32e8,L"FX.FreezeParticleSimulation",&DAT_14caf3c9c,
                L"Freeze particle simulation.");
  atexit(FUN_1435b86e3);
  local_d8._0_4_ = 0;
  FUN_141471170(&DAT_14caf32f8,L"FX.AllowAsyncTick",&DAT_14c7616b8,
                L"allow parallel ticking of particle systems.");
  atexit(FUN_1435b8728);
  local_d8._0_4_ = 1;
  FUN_1415c789c(&DAT_14caf3308,L"FX.ParticleSlackGPU",&DAT_14c7616a8,
                L"Amount of slack to allocate for GPU particles to prevent tile churn as percentage of total particles."
               );
  atexit(FUN_1435b876d);
  local_d8._0_4_ = 1;
  FUN_141471170(&DAT_14caf3318,L"FX.MaxParticleTilePreAllocation",&DAT_14c7616ac,
                L"Maximum tile preallocation for GPU particles.");
  atexit(FUN_1435b87b2);
  local_d8._0_4_ = 0;
  FUN_141471170(&DAT_14caf3328,L"FX.MaxCPUParticlesPerEmitter",&DAT_14c761688,
                L"Maximum number of CPU particles allowed per-emitter.");
  atexit(FUN_1435b87f7);
  local_d8._0_4_ = 0;
  FUN_141471170(&DAT_14caf3338,L"FX.MaxGPUParticlesSpawnedPerFrame",&DAT_14c7616b0,
                L"Maximum number of GPU particles allowed to spawn per-frame per-emitter.");
  atexit(FUN_1435b883c);
  local_d8._0_4_ = 1;
  FUN_141471170(&DAT_14caf3348,L"FX.GPUSpawnWarningThreshold",&DAT_14c76168c,
                L"Warning threshold for spawning of GPU particles.");
  atexit(FUN_1435b8881);
  local_d8._0_4_ = 1;
  FUN_1415c789c(&DAT_14caf3358,L"FX.GPUCollisionDepthBounds",&DAT_14c7616b4,
                L"Limits the depth bounds when searching for a collision plane.");
  atexit(FUN_1435b88c6);
  local_d8._0_4_ = 1;
  FUN_141471170(&DAT_14caf3368,L"FX.AllowCulling",&DAT_14c761684,L"Allow emitters to be culled.");
  atexit(FUN_1435b890b);
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_141471170(&DAT_14caf3378,L"FX.AllowGPUParticles",&DAT_14c7616a4,
                L"If true, allow the usage of GPU particles.");
  atexit(FUN_1435b8950);
  FUN_1446f470e(&DAT_14caf3c90,L"FFXSystem",1);
  uStack_a0 = FUN_145e41118;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf3450,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1435cda5a;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14caf34c8,6,&local_a8);
  _DAT_14caf34d8 = 0xffffffff;
  _DAT_14caf34dc = 0x105;
  DAT_14caf34de = 0;
  DAT_14caf34e0 = 0;
  DAT_14caf34e8 = 0;
  _DAT_14caf34d0 = &PTR_FUN_14aa00340;
  FUN_1463ef1b6(&DAT_14caf34d0);
  atexit(FUN_1435bd783);
  _DAT_14caf34f8 = 0xffffffff;
  _DAT_14caf34fc = 0x105;
  DAT_14caf34fe = 0;
  DAT_14caf3500 = 0;
  DAT_14caf3508 = 1;
  _DAT_14caf34f0 = &PTR_FUN_14aa00340;
  FUN_1463ef1b6(&DAT_14caf34f0);
  atexit(FUN_1435bd7b2);
  local_b8 = &LAB_1435bd7e2;
  local_c0 = &LAB_1435bd7f4;
  local_c8 = &LAB_1435bd805;
  local_d0 = FUN_1435bd81e;
  local_d8 = FUN_1435bd83b;
  FUN_141585c60(&DAT_14caf3ca0,L"FParticleBeamTrailVertexFactory",
                L"/Engine/Private/ParticleBeamTrailVertexFactory.ush",0x200a);
  atexit((_func_5014 *)&LAB_1435bd861);
  local_a8._0_4_ = 0x4a56eb40;
  local_a8._4_4_ = 0x10f511dc;
  uStack_a0._0_4_ = 0x92d3347e;
  uStack_a0._4_4_ = 0xb2c96ae7;
  _DAT_14caf3510 = 0x4a56eb40;
  uRam000000014caf3514 = 0x10f511dc;
  uRam000000014caf3518 = 0x92d3347e;
  uRam000000014caf351c = 0xb2c96ae7;
  FUN_141005458(&local_a8,3,L"ParticleSystemVer",0);
  atexit((_func_5014 *)&LAB_1435bd86d);
  local_d8._0_4_ = 0x40;
  FUN_141471170(&DAT_14caf3528,L"r.ParticleLODBias",&DAT_14caf3520,
                L"LOD bias for particle systems, default is 0");
  atexit(FUN_1435bdd72);
  local_a8._0_4_ = 0x40000000;
  local_d8._0_4_ = 0x40;
  FUN_140a6b41e(&DAT_14caf3538,L"fx.QualityLevelSpawnRateScaleReferenceLevel",&local_a8,
                L"Controls the reference level for quality level based spawn rate scaling. This is the FX quality level\nat which spawn rate is not scaled down; Spawn rate scaling will happen by each emitter\'s\nQualityLevelSpawnRateScale value for each reduction in level below the reference level.\n\nDefault = 2. Value should range from 0 to the maximum FX quality level."
               );
  atexit(FUN_1435bddb7);
  local_a8 = (code *)((ulonglong)local_a8._4_4_ << 0x20);
  local_d8._0_4_ = 4;
  FUN_140a6b41e(&DAT_14caf3550,L"fx.PruneEmittersOnCookByDetailMode",&local_a8,
                L"Whether to eliminate all emitters that don\'t match the detail mode.\nThis will only work if scalability settings affecting detail mode can not be changed at runtime (depends on platform).\n"
               );
  atexit(FUN_1435bddfc);
  local_d8._0_4_ = 0;
  FUN_1415c789c(&DAT_14caf3568,L"fx.LWCTileRecache",&DAT_14c761690,
                L"When we cross this number of LWC tiles from where we started the FX we need to recache the LWC tile to avoid artifacts.\nWhen this occurs the system may need to reset, cull particles too far away, or do some additional processing to handle it.\nSetting this value to 0 will remove this behavior but could introduce rendering & simulation artifacts.\n"
               );
  atexit(FUN_1435bde41);
  local_d8._0_4_ = 0;
  FUN_14153156c(&DAT_14caf3578,L"fx.Cascade.SkipZeroDeltaTime",&DAT_14c761694,
                L"When enabled a delta tick time of nearly 0.0 will cause us to skip the component update.\nThis fixes issue like PSA_Velocity aligned sprites, but could cause issues with things that rely on accurate velocities (i.e. TSR)."
               );
  atexit(FUN_1435bde86);
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_141471170(&DAT_14caf3588,L"r.PSOPrecache.CascadePrecachingTime",&DAT_14c7616bc,
                L"Controls when PSO precaching happens for Cascade systems:\n\t0: no precaching\n\t1: precaching at asset loading time (default)\n\t2: precaching at component loading time\n\t3: precaching at component proxy creation time"
               );
  atexit(FUN_1435bdecb);
  DAT_14caf35c0 = 0;
  _DAT_14caf35c8 = 0;
  DAT_14caf35a0 = 0;
  _DAT_14caf35a8 = 0;
  _DAT_14caf35cc = 0xffffffff00000080;
  DAT_14caf35d4 = 0;
  DAT_14caf35e0 = 0;
  DAT_14caf35e8 = 0;
  atexit(FUN_1435bdf10);
  DAT_14caf35f0 = 0;
  uRam000000014caf35f8 = 0;
  atexit((_func_5014 *)&LAB_1435bdfb9);
  local_a8 = (code *)0x0;
  uStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e170a0;
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
  *(longlong *)((longlong)local_a8 + 0x10) = lVar3;
  *(undefined ***)local_a8 = &PTR_FUN_149e17030;
  *(code **)((longlong)local_a8 + 0x18) = FUN_1435bdfca;
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0x40);
  local_d8 = (code *)&local_a8;
  FUN_1412c810e(&DAT_14caf3600,L"fx.Cascade.SetTemplateDenyList",&DAT_14caf35f0,
                L"Set the template deny List to use. (i.e. P_SystemA,P_SystemB)");
  if ((int)uStack_a0 == 0) {
LAB_1435cfded:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
    goto LAB_1435cfded;
  }
  atexit(FUN_1435be0a3);
  local_a8 = (code *)0x0;
  uStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)((longlong)local_a8 + 0x10) = lVar3;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_a8 + 0x18) = FUN_1435be0e8;
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14152bcb8(&DAT_14caf3610,L"FX.RestartAll",L"Restarts all particle system components",&local_a8
               );
  if ((int)uStack_a0 == 0) {
LAB_1435cfed9:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
    goto LAB_1435cfed9;
  }
  atexit(FUN_1435be1e4);
  DAT_14caf3630 = 0;
  _DAT_14caf3638 = 0;
  _DAT_14caf3640 = 2;
  atexit(FUN_1435bf23a);
  local_a8 = (code *)0x0;
  uStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)((longlong)local_a8 + 0x10) = lVar3;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_a8 + 0x18) = FUN_1415df485;
  FUN_141253d16(&DAT_14caf3660,&local_a8);
  if ((int)uStack_a0 == 0) {
LAB_1435cffc2:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
    goto LAB_1435cffc2;
  }
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14caf3678,L"FX.EarlyScheduleAsync",&local_a8,
                L"If 1, particle system components that can run async will be scheduled earlier in the frame"
               );
  atexit(FUN_1435c1633);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf3690,L"FX.BatchAsync",&DAT_14caf36a0,
                L"If 1, particle async tasks are batched because they often take less time than it takes to wake up a task thread. No effect on editor."
               );
  atexit(FUN_1435c1678);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf36a8,L"FX.BatchAsyncBatchSize",&DAT_14c761698,
                L"When FX.BatchAsync = 1, controls the number of particle systems grouped together for threading."
               );
  atexit(FUN_1435c16bd);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  local_d0 = (code *)CONCAT44(local_d0._4_4_,0x200);
  FUN_1412c7f16(&DAT_14caf36b8,L"TaskGraph.TaskPriorities.ParticleAsyncTask",
                L"Task and thread priority for FParticleAsyncTask.",0x400);
  atexit(FUN_1435c1702);
  DAT_14caf3718 = 0;
  _DAT_14caf3720 = 0x400000000;
  DAT_14caf3728 = 0;
  DAT_14caf3738 = 0;
  atexit(FUN_1435c176c);
  local_d8._0_4_ = 0x40;
  FUN_141471170(&DAT_14caf3748,L"fx.DeferrPSCDeactivation",&DAT_14caf3740,
                L"If > 0, all deactivations on Particle System Components is deferred until next tick."
               );
  atexit(FUN_1435c5761);
  local_a8 = (code *)0x0;
  uStack_a0._0_4_ = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  uStack_a0._0_4_ = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)((longlong)local_a8 + 0x10) = lVar3;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)((longlong)local_a8 + 0x18) = FUN_1435c916c;
  local_d8 = (code *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_14152bcb8(&DAT_14caf3770,L"fx.DumpPSCTickStateInfo",
                L"Dumps state information for all current Particle System Components.",&local_a8);
  if ((int)uStack_a0 != 0) {
    if (local_a8 == (code *)0x0) goto LAB_1435d01d8;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0._0_4_ = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1435d01d8:
  atexit(FUN_1435c5ff9);
  _DAT_14caf3c40 = 0xffffffff;
  _DAT_14caf3c44 = 0x105;
  DAT_14caf3c46 = 0;
  DAT_14caf3c38 = &PTR_FUN_14a9ff630;
  DAT_14caf3c48 = 0;
  FUN_1415e9422();
  DAT_14caf3c78 = 0;
  _DAT_14caf3c80 = 0;
  DAT_14caf3c38 = &PTR_FUN_14aa00480;
  FUN_1463ef238();
  atexit(FUN_1435c603e);
  uStack_a0 = FUN_145ef3234;
  local_a8 = (code *)&DAT_14152059c;
  FUN_14142a670(&DAT_14caf3808,&local_a8);
  uStack_a0 = FUN_146085236;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf3930,&local_a8);
  uStack_a0 = FUN_14608549c;
  local_a8 = (code *)&DAT_140a1b61a;
  FUN_1412df486(&DAT_14caf3a58,&local_a8);
  _DAT_14caf3a70 = 0xffffffff;
  _DAT_14caf3a74 = 0x105;
  DAT_14caf3a76 = 0;
  DAT_14caf3a78 = 0;
  DAT_14caf3a68 = &PTR_FUN_14aa004b0;
  FUN_1463ef280();
  atexit(FUN_1435c6091);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf3a98,L"r.Emitter.FastPoolEnable",&DAT_14caf3aa8,
                L"Should we use fast pools for emitters.\n 0: Don\'t pool anything\n 1: Pool the emitters bro (default)\n"
               );
  atexit(FUN_1435c650c);
  local_d8 = (code *)((ulonglong)local_d8 & 0xffffffff00000000);
  FUN_141471170(&DAT_14caf3ab0,L"r.Emitter.FastPoolMaxFreeSize",&DAT_14c76169c,
                L"Max free pool size to keep around without cleaning up.");
  atexit(FUN_1435c6551);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14caf3ac0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14caf3ac0,4000);
  atexit((_func_5014 *)&LAB_1435c6596);
  DAT_14caf3b08 = 0;
  DAT_14caf3b10 = 0;
  DAT_14caf3ae8 = 0;
  _DAT_14caf3af0 = 0;
  _DAT_14caf3b14 = 0xffffffff00000080;
  DAT_14caf3b1c = 0;
  DAT_14caf3b28 = 0;
  DAT_14caf3b30 = 0;
  atexit(FUN_1435c65a4);
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435d0468 FUN_1435d0468 body=69 status=ok
// SIG undefined FUN_1435d0468(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d0468(void)

{
  _DAT_14caf3d38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d04aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3d40,1);
  return;
}



// FUNCTION 1435d04ad FUN_1435d04ad body=69 status=ok
// SIG undefined FUN_1435d04ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d04ad(void)

{
  _DAT_14caf3d48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d04ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3d50,1);
  return;
}



// FUNCTION 1435d04f2 FUN_1435d04f2 body=69 status=ok
// SIG undefined FUN_1435d04f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d04f2(void)

{
  _DAT_14caf3d58 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d0534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3d60,1);
  return;
}



// FUNCTION 1435d0537 FUN_1435d0537 body=69 status=ok
// SIG undefined FUN_1435d0537(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d0537(void)

{
  _DAT_14caf3d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d0579. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3d70,1);
  return;
}



// FUNCTION 1435d057c FUN_1435d057c body=69 status=ok
// SIG undefined FUN_1435d057c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d057c(void)

{
  _DAT_14caf3d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d05be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3d80,1);
  return;
}



// FUNCTION 1435d05c1 FUN_1435d05c1 body=69 status=ok
// SIG undefined FUN_1435d05c1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d05c1(void)

{
  _DAT_14caf3d90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d0603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3d98,1);
  return;
}



// FUNCTION 1435d0606 FUN_1435d0606 body=69 status=ok
// SIG undefined FUN_1435d0606(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d0606(void)

{
  _DAT_14caf3da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d0648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3db0,1);
  return;
}



// FUNCTION 1435d064b FUN_1435d064b body=69 status=ok
// SIG undefined FUN_1435d064b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d064b(void)

{
  _DAT_14caf3dc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d068d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3dc8,1);
  return;
}



// FUNCTION 1435d0690 FUN_1435d0690 body=69 status=ok
// SIG undefined FUN_1435d0690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d0690(void)

{
  _DAT_14caf3dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435d06d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf3de0,1);
  return;
}



// FUNCTION 1435d06ed FUN_1435d06ed body=47 status=ok
// SIG undefined FUN_1435d06ed(void)

void FUN_1435d06ed(void)

{
  DAT_14caf4000 = &PTR_FUN_14aa042f0;
  FUN_144725486(&DAT_14caf4000);
  FUN_1463f0544(&DAT_14caf4000);
  return;
}



// FUNCTION 1435d0739 FUN_1435d0739 body=77 status=ok
// SIG undefined FUN_1435d0739(void)

void FUN_1435d0739(char param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  if (param_1 != '\x03') {
    if (param_1 == '\0') {
      FUN_147c0f45c(param_2,param_5,param_8,param_9,param_10);
    }
    return;
  }
  FUN_147c0f7ec(param_5,param_8);
  return;
}



// FUNCTION 1435d0786 FUN_1435d0786 body=51 status=ok
// SIG undefined FUN_1435d0786(void)

undefined * FUN_1435d0786(char param_1)

{
  undefined *puVar1;
  
  if (param_1 == '\x03') {
    FUN_14610d35a();
    puVar1 = &DAT_14caf3f90;
  }
  else if (param_1 == '\0') {
    FUN_145d2fcd2();
    puVar1 = &DAT_14caf3f20;
  }
  else {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



// FUNCTION 1435d07b9 FUN_1435d07b9 body=111 status=ok
// SIG undefined FUN_1435d07b9(void)

undefined8 * FUN_1435d07b9(char param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (param_1 == '\x03') {
    puVar1 = (undefined8 *)FUN_14001cc68(4,0x10);
    *(undefined4 *)puVar1 = 0;
  }
  else if (param_1 == '\0') {
    puVar1 = (undefined8 *)FUN_14001cc68(0x34,0x10);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    FUN_147c27054(puVar1,param_2);
  }
  else {
    puVar1 = (undefined8 *)0x0;
  }
  return puVar1;
}



// FUNCTION 1435d0888 FUN_1435d0888 body=47 status=ok
// SIG undefined FUN_1435d0888(void)

void FUN_1435d0888(void)

{
  DAT_14caf4780 = &PTR_FUN_14aa045e0;
  FUN_144725486(&DAT_14caf4780);
  FUN_1463f0816(&DAT_14caf4780);
  return;
}



// FUNCTION 1435d08b7 FUN_1435d08b7 body=47 status=ok
// SIG undefined FUN_1435d08b7(void)

void FUN_1435d08b7(void)

{
  DAT_14caf4798 = &PTR_FUN_14aa04640;
  FUN_144725486(&DAT_14caf4798);
  FUN_1463f094e(&DAT_14caf4798);
  return;
}



// FUNCTION 1435d08e6 FUN_1435d08e6 body=2452 status=ok
// SIG undefined FUN_1435d08e6(void)

void FUN_1435d08e6(ulonglong *param_1,ulonglong *param_2,int param_3,longlong *param_4,
                  longlong param_5,longlong *param_6,longlong param_7,byte param_8)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  byte *_Src;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_558 [32];
  float *local_538;
  byte local_525;
  int local_524;
  longlong local_520;
  longlong *local_518;
  longlong local_510;
  undefined8 local_508;
  undefined4 local_500;
  longlong local_4f0;
  longlong lStack_4e8;
  undefined1 local_4e0 [8];
  float local_4d8;
  float local_4d4;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  longlong lStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined8 auStack_460 [4];
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  longlong local_1b8;
  char local_1b0;
  undefined8 local_1a8;
  char local_1a0;
  undefined8 local_198;
  char local_190;
  undefined1 local_180 [8];
  undefined1 *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined1 local_168 [64];
  undefined1 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  byte local_108 [8];
  byte *local_100;
  undefined8 local_f8;
  longlong local_f0 [8];
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulonglong local_90;
  
  lVar25 = DAT_14caf3de8;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_558;
  iVar21 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_524 = param_3;
  local_518 = param_4;
  if (iVar21 == 0x40000002) {
    uVar14 = 0;
  }
  else {
    bVar27 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar21 != 2)) {
      if (iVar21 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar27 = DVar12 == DVar13;
      }
      else {
        bVar27 = false;
      }
    }
    uVar14 = (ulonglong)(bVar27 ^ 1);
  }
  if (*(int *)(lVar25 + uVar14 * 4) != 0) {
    local_100 = (byte *)0x0;
    local_f8 = 0x800000000;
    local_b0 = (longlong *)0x0;
    local_a8 = 0x800000000;
    local_a0 = 0;
    uStack_98 = 0;
    bVar27 = param_7 != 0;
    if (bVar27) {
      local_108[0] = *(byte *)(*(longlong *)(param_7 + 0x20) + 0x8a);
      local_f8 = 0x800000001;
      local_a8 = 0x800000001;
      local_f0[0] = param_7;
      local_a0 = local_108[0] + 1;
    }
    uVar14 = local_a8;
    uVar11 = (uint)bVar27;
    lVar25 = *param_6;
    if (lVar25 != 0) {
      bVar1 = *(byte *)(*(longlong *)(lVar25 + 0x20) + 0x8a);
      local_f8 = CONCAT44(local_f8._4_4_,bVar27 + 1);
      local_108[bVar27] = bVar1;
      lVar20 = (longlong)(int)local_a8;
      uVar11 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,uVar11);
      if (local_a8._4_4_ < uVar11) {
        FUN_1474146d2(local_f0,uVar14 & 0xffffffff);
      }
      plVar24 = local_f0;
      if (local_b0 != (longlong *)0x0) {
        plVar24 = local_b0;
      }
      plVar24[lVar20] = lVar25;
      iVar21 = bVar1 + 1;
      if (iVar21 <= local_a0) {
        iVar21 = local_a0;
      }
      uVar11 = (uint)local_f8;
      local_a0 = iVar21;
    }
    local_178 = (undefined1 *)0x0;
    local_170 = uVar11;
    if (uVar11 == 0) {
      local_16c = 8;
    }
    else {
      _Src = local_108;
      if (local_100 != (byte *)0x0) {
        _Src = local_100;
      }
      FUN_1446fe144(local_180,uVar11,0);
      puVar17 = local_178;
      if (local_178 == (undefined1 *)0x0) {
        puVar17 = local_180;
      }
      memcpy(puVar17,_Src,(longlong)(int)uVar11);
    }
    local_128 = (undefined1 *)0x0;
    lVar25 = (longlong)(int)local_a8;
    local_120 = (int)local_a8;
    if (lVar25 == 0) {
      local_11c = 8;
    }
    else {
      plVar24 = local_f0;
      if (local_b0 != (longlong *)0x0) {
        plVar24 = local_b0;
      }
      FUN_1446fe1b8(local_168,local_a8 & 0xffffffff,0);
      puVar17 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar17 = local_168;
      }
      memcpy(puVar17,plVar24,lVar25 << 3);
    }
    local_118 = CONCAT44(uStack_9c,local_a0);
    uStack_110 = uStack_98;
    FUN_1472bfb30(local_4e0,param_1);
    iVar21 = local_524;
    lVar20 = (longlong)
             (int)((uint)(*(float *)(DAT_14caf3da0 + 4) <= 0.0 | param_8) ^
                  *(uint *)(param_5 + 0xd0)) * 0x40;
    lVar22 = (longlong)local_524;
    uVar2 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar22 * 2) * 8);
    FUN_145e46ec0();
    FUN_1448e935e(uVar2,&local_4b8,&DAT_14caf4220,0);
    FUN_145e46ec0();
    lVar25 = CONCAT44(uStack_4b4,local_4b8);
    local_520 = lStack_4b0;
    uVar2 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar22 * 2) * 8);
    FUN_14608f480();
    FUN_1448e935e(uVar2,&local_4b8,&DAT_14caf4470,0);
    FUN_14608f480();
    local_4f0 = CONCAT44(uStack_4b4,local_4b8);
    lStack_4e8 = lStack_4b0;
    FUN_147c278ea(&local_4b8);
    lStack_4b0 = *(longlong *)(param_5 + 0x20 + lVar20);
    local_4a8 = DAT_14c9c0d80;
    local_4a0 = *(undefined8 *)(param_5 + 0x28 + lVar20);
    local_498 = DAT_14c9c0d80;
    local_490 = *(undefined8 *)(param_5 + 0xc0);
    local_488 = DAT_14c9c0d80;
    local_470 = DAT_14caf3c48;
    local_468 = (undefined4)DAT_14c9c0de0;
    uStack_464 = DAT_14c9c0de0._4_4_;
    local_440 = (undefined4)DAT_14c9c0de0;
    uStack_43c = DAT_14c9c0de0._4_4_;
    uStack_438 = (undefined4)DAT_14c9c0de0;
    uStack_434 = DAT_14c9c0de0._4_4_;
    local_430 = (undefined4)DAT_14c9c0de0;
    uStack_42c = DAT_14c9c0de0._4_4_;
    uStack_428 = (undefined4)DAT_14c9c0de0;
    uStack_424 = DAT_14c9c0de0._4_4_;
    local_480 = *(undefined8 *)(param_5 + 0x98);
    local_478 = DAT_14c9c0d80;
    lVar20 = FUN_1447e4f80();
    local_1b0 = '\x02';
    if (*(char *)(lVar20 + 0x41) != '\x03') {
      local_1b0 = *(char *)(lVar20 + 0x41);
    }
    local_1b8 = *param_6;
    puVar18 = &DAT_14caf4780;
    if (iVar21 < 2) {
      puVar18 = &DAT_14caf4798;
    }
    local_4b8 = DAT_14c7616b4;
    *param_2 = puVar18[2];
    if (lVar25 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_520 + 8) + 0x50) +
                (longlong)*(int *)(lVar25 + 0xd4) * 8);
      if (uVar14 == 0) {
        uVar14 = FUN_1400bafc2(*(longlong *)(local_520 + 8),(longlong)*(int *)(lVar25 + 0xd4),1);
      }
    }
    param_2[1] = uVar14;
    if (local_4f0 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lStack_4e8 + 8) + 0x50) +
                (longlong)*(int *)(local_4f0 + 0xd4) * 8);
      if (uVar14 == 0) {
        uVar14 = FUN_1400bafc2(*(longlong *)(lStack_4e8 + 8),(longlong)*(int *)(local_4f0 + 0xd4),1)
        ;
      }
    }
    param_2[2] = uVar14;
    *(undefined4 *)(param_2 + 0xb) = 0;
    lVar20 = FUN_140028f18(param_1,param_2);
    if ((lVar20 != 0) && ((*(byte *)((longlong)param_2 + 0xcb) & 0x10) == 0)) {
      uVar14 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar9 = param_2[3];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar10 = param_2[5];
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(int *)(param_1 + 0x35) = (int)param_2[4];
      *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar5;
      *(int *)(param_1 + 0x36) = (int)uVar10;
      *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar6;
      *(int *)(param_1 + 0x33) = (int)uVar8;
      *(undefined4 *)((longlong)param_1 + 0x19c) = uVar3;
      *(int *)(param_1 + 0x34) = (int)uVar9;
      *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar4;
      param_1[0x31] = uVar14;
      param_1[0x32] = uVar7;
      puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar15 + 4;
      if ((undefined8 *)param_1[1] < puVar18) {
        FUN_140023dd8(param_1,0x28);
        puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar15 + 4;
      }
      *param_1 = (ulonglong)puVar18;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar15;
      param_1[6] = (ulonglong)(puVar15 + 1);
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_14a37d348;
      puVar15[2] = lVar20;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined1 *)((longlong)puVar15 + 0x1c) = 1;
    }
    lVar20 = local_518[1];
    if (0 < (longlong)(int)lVar20) {
      local_525 = param_8 ^ 1;
      uVar14 = (ulonglong)local_525;
      local_510 = uVar14 * 8 + 0x28;
      lVar22 = 0x78;
      lVar23 = 0;
      do {
        lVar16 = *local_518;
        local_4c8 = *(undefined8 *)(lVar16 + lVar23 * 0xa0);
        local_4d8 = 4.0 / (float)*(int *)(param_5 + 0xe0);
        local_4d4 = 4.0 / (float)*(int *)(param_5 + 0xe4);
        local_4d0 = DAT_14c8461b4;
        if (*(char *)(param_5 + 0x110) == '\x01') {
          local_4d0 = CONCAT44((float)DAT_14c7616d0 / (float)*(int *)(param_5 + 0xe4),
                               (float)DAT_14c7616d0 / (float)*(int *)(param_5 + 0xe0));
        }
        lVar26 = lVar23 * 0xa0 + lVar16;
        local_400 = 0;
        local_3fc = *(undefined4 *)(lVar26 + 0x3c);
        local_418 = *(undefined4 *)(lVar26 + 0x20);
        local_414 = *(undefined4 *)(lVar26 + 0x24);
        local_410 = *(undefined4 *)(lVar26 + 0x28);
        local_40c = *(undefined4 *)(lVar26 + 0x2c);
        local_408 = 0;
        local_404 = 0;
        if ((local_525 & 0.0 < *(float *)(DAT_14caf3da0 + 4)) == 0) {
          local_408 = *(undefined4 *)(lVar26 + 0x30);
          local_404 = *(undefined4 *)(lVar26 + 0x34);
          local_400 = *(undefined4 *)(lVar26 + 0x38);
        }
        local_3f0 = *(undefined4 *)(lVar26 + 0x20 + local_510);
        local_3ec = *(undefined4 *)(lVar26 + uVar14 * 8 + 0x4c);
        local_3f8 = *(undefined8 *)(lVar26 + 0x40);
        local_508 = *(undefined8 *)(lVar26 + 0x5c);
        local_500 = *(undefined4 *)(lVar26 + 100);
        lVar19 = 0;
        do {
          auStack_460[lVar19] = *(undefined8 *)(lVar16 + lVar22 + lVar19 * 8);
          lVar19 = lVar19 + 1;
        } while (lVar19 != 4);
        local_3e8 = local_508;
        local_3e0 = local_500;
        FUN_145ef21da();
        local_1a0 = DAT_14caf40c9;
        if (DAT_14caf40c9 == '\x03') {
          local_1a0 = '\x02';
        }
        local_1a8 = *(undefined8 *)(lVar26 + 0x10);
        FUN_145ef0be0();
        local_190 = DAT_14caf4161;
        if (DAT_14caf4161 == '\x03') {
          local_190 = '\x02';
        }
        local_198 = *(undefined8 *)(lVar26 + 0x70);
        if (lVar25 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_520 + 8) + 0x50) +
                    (longlong)*(int *)(lVar25 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(local_520 + 8),(longlong)*(int *)(lVar25 + 0xd4),1)
            ;
          }
        }
        FUN_145e4712c();
        local_538 = &local_4d8;
        FUN_1449cc26b(param_1,lVar16,lVar25,&DAT_14caf5378);
        if (local_4f0 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_4e8 + 8) + 0x50) +
                    (longlong)*(int *)(local_4f0 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(lStack_4e8 + 8),
                                   (longlong)*(int *)(local_4f0 + 0xd4),1);
          }
        }
        FUN_145dc23c4();
        local_538 = (float *)&local_4b8;
        FUN_1449cc26b(param_1,lVar16,local_4f0,&DAT_14caf56d8);
        if (local_524 < 2) {
          FUN_1435d2779(param_1,*(undefined8 *)(lVar26 + 8));
        }
        else {
          FUN_1435d28df(param_1,*(int *)(lVar26 + 0x98) + 7U & 0xfffffff8);
        }
        lVar23 = lVar23 + 1;
        lVar22 = lVar22 + 0xa0;
      } while (lVar23 != (int)lVar20);
    }
    if (local_4f0 == 0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *(longlong *)
                (*(longlong *)(*(longlong *)(lStack_4e8 + 8) + 0x50) +
                (longlong)*(int *)(local_4f0 + 0xd4) * 8);
      if (lVar25 == 0) {
        lVar25 = FUN_1400bafc2(*(longlong *)(lStack_4e8 + 8),(longlong)*(int *)(local_4f0 + 0xd4),1)
        ;
      }
    }
    FUN_147c2796f(param_1,&local_4f0,lVar25);
    FUN_1471f3c22(local_4e0);
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_100 != (byte *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435d127b FUN_1435d127b body=2543 status=ok
// SIG undefined FUN_1435d127b(void)

void FUN_1435d127b(ulonglong *param_1,ulonglong *param_2,int param_3,longlong *param_4,
                  longlong param_5,longlong *param_6,undefined8 param_7,longlong param_8,
                  byte param_9)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  byte *_Src;
  longlong lVar27;
  bool bVar28;
  undefined1 auStack_758 [32];
  float *local_738;
  ulonglong local_730;
  int local_724;
  longlong local_720;
  longlong *local_718;
  longlong local_710;
  undefined8 local_708;
  undefined4 local_700;
  longlong local_6f0;
  longlong lStack_6e8;
  undefined1 local_6e0 [8];
  float local_6d8;
  float local_6d4;
  undefined8 local_6d0;
  undefined8 local_6c8;
  longlong local_4b8;
  longlong lStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined8 auStack_460 [4];
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined1 local_3d8 [496];
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  longlong local_1b8;
  char local_1b0;
  undefined8 local_1a8;
  char local_1a0;
  undefined8 local_198;
  char local_190;
  undefined1 local_180 [8];
  undefined1 *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined1 local_168 [64];
  undefined1 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  byte local_108 [8];
  byte *local_100;
  undefined8 local_f8;
  longlong local_f0 [8];
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulonglong local_90;
  
  lVar26 = DAT_14caf3de8;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_758;
  iVar22 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_718 = param_4;
  if (iVar22 == 0x40000002) {
    uVar25 = 0;
  }
  else {
    bVar28 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar22 != 2)) {
      if (iVar22 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar28 = DVar12 == DVar13;
      }
      else {
        bVar28 = false;
      }
    }
    uVar25 = (ulonglong)(bVar28 ^ 1);
  }
  if (*(int *)(lVar26 + uVar25 * 4) != 0) {
    local_100 = (byte *)0x0;
    local_f8 = 0x800000000;
    local_b0 = (longlong *)0x0;
    local_a8 = 0x800000000;
    local_a0 = 0;
    uStack_98 = 0;
    bVar28 = param_8 != 0;
    if (bVar28) {
      local_108[0] = *(byte *)(*(longlong *)(param_8 + 0x20) + 0x8a);
      local_f8 = 0x800000001;
      local_a8 = 0x800000001;
      local_f0[0] = param_8;
      local_a0 = local_108[0] + 1;
    }
    uVar25 = local_a8;
    uVar11 = (uint)bVar28;
    lVar26 = *param_6;
    if (lVar26 != 0) {
      bVar1 = *(byte *)(*(longlong *)(lVar26 + 0x20) + 0x8a);
      local_f8 = CONCAT44(local_f8._4_4_,bVar28 + 1);
      local_108[bVar28] = bVar1;
      lVar19 = (longlong)(int)local_a8;
      uVar11 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,uVar11);
      if (local_a8._4_4_ < uVar11) {
        FUN_1474146d2(local_f0,uVar25 & 0xffffffff);
      }
      plVar24 = local_f0;
      if (local_b0 != (longlong *)0x0) {
        plVar24 = local_b0;
      }
      plVar24[lVar19] = lVar26;
      iVar22 = bVar1 + 1;
      if (iVar22 <= local_a0) {
        iVar22 = local_a0;
      }
      uVar11 = (uint)local_f8;
      local_a0 = iVar22;
    }
    local_178 = (undefined1 *)0x0;
    local_170 = uVar11;
    if (uVar11 == 0) {
      local_16c = 8;
    }
    else {
      _Src = local_108;
      if (local_100 != (byte *)0x0) {
        _Src = local_100;
      }
      FUN_1446fe144(local_180,uVar11,0);
      puVar16 = local_178;
      if (local_178 == (undefined1 *)0x0) {
        puVar16 = local_180;
      }
      memcpy(puVar16,_Src,(longlong)(int)uVar11);
    }
    local_128 = (undefined1 *)0x0;
    lVar26 = (longlong)(int)local_a8;
    local_120 = (int)local_a8;
    if (lVar26 == 0) {
      local_11c = 8;
    }
    else {
      plVar24 = local_f0;
      if (local_b0 != (longlong *)0x0) {
        plVar24 = local_b0;
      }
      FUN_1446fe1b8(local_168,local_a8 & 0xffffffff,0);
      puVar16 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar16 = local_168;
      }
      memcpy(puVar16,plVar24,lVar26 << 3);
    }
    local_118 = CONCAT44(uStack_9c,local_a0);
    uStack_110 = uStack_98;
    FUN_1472bfb30(local_6e0,param_1);
    lVar19 = (longlong)
             (int)((uint)(*(float *)(DAT_14caf3da0 + 4) <= 0.0 | param_9) ^
                  *(uint *)(param_5 + 0xd0)) * 0x40;
    uVar25 = (ulonglong)param_3;
    uVar2 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + uVar25 * 2) * 8);
    local_730 = uVar25;
    local_724 = param_3;
    FUN_145e46ec0();
    FUN_1448e935e(uVar2,&local_4b8,&DAT_14caf4220,0);
    FUN_145e46ec0();
    lVar26 = local_4b8;
    local_720 = lStack_4b0;
    uVar2 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + uVar25 * 2) * 8);
    FUN_14608f6ec();
    FUN_1448e935e(uVar2,&local_4b8,&DAT_14caf4598,0);
    FUN_14608f6ec();
    local_6f0 = local_4b8;
    lStack_6e8 = lStack_4b0;
    FUN_147c278ea(&local_4b8);
    lStack_4b0 = *(longlong *)(param_5 + 0x20 + lVar19);
    local_4a8 = DAT_14c9c0d80;
    local_4a0 = *(undefined8 *)(param_5 + 0x28 + lVar19);
    local_498 = DAT_14c9c0d80;
    local_490 = *(undefined8 *)(param_5 + 0xc0);
    local_488 = DAT_14c9c0d80;
    local_470 = DAT_14caf3c48;
    local_468 = (undefined4)DAT_14c9c0de0;
    uStack_464 = DAT_14c9c0de0._4_4_;
    local_440 = (undefined4)DAT_14c9c0de0;
    uStack_43c = DAT_14c9c0de0._4_4_;
    uStack_438 = (undefined4)DAT_14c9c0de0;
    uStack_434 = DAT_14c9c0de0._4_4_;
    local_430 = (undefined4)DAT_14c9c0de0;
    uStack_42c = DAT_14c9c0de0._4_4_;
    uStack_428 = (undefined4)DAT_14c9c0de0;
    uStack_424 = DAT_14c9c0de0._4_4_;
    local_480 = *(undefined8 *)(param_5 + 0x98);
    local_478 = DAT_14c9c0d80;
    lVar19 = FUN_1447e4f80();
    local_1b0 = '\x02';
    if (*(char *)(lVar19 + 0x41) != '\x03') {
      local_1b0 = *(char *)(lVar19 + 0x41);
    }
    local_1b8 = *param_6;
    FUN_147c27ad8(&local_6d8,param_7);
    memcpy(local_3d8,&local_6d8,0x218);
    local_1e8 = DAT_14c9cfce8;
    local_1e0 = DAT_14c9cfce8;
    puVar17 = &DAT_14caf4780;
    if ((int)local_730 < 2) {
      puVar17 = &DAT_14caf4798;
    }
    local_1d8 = DAT_14c9cfda8;
    *param_2 = puVar17[2];
    if (lVar26 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_720 + 8) + 0x50) +
                (longlong)*(int *)(lVar26 + 0xd4) * 8);
      if (uVar25 == 0) {
        uVar25 = FUN_1400bafc2(*(longlong *)(local_720 + 8),(longlong)*(int *)(lVar26 + 0xd4),1);
      }
    }
    param_2[1] = uVar25;
    if (local_6f0 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lStack_6e8 + 8) + 0x50) +
                (longlong)*(int *)(local_6f0 + 0xd4) * 8);
      if (uVar25 == 0) {
        uVar25 = FUN_1400bafc2(*(longlong *)(lStack_6e8 + 8),(longlong)*(int *)(local_6f0 + 0xd4),1)
        ;
      }
    }
    param_2[2] = uVar25;
    *(undefined4 *)(param_2 + 0xb) = 0;
    lVar19 = FUN_140028f18(param_1,param_2);
    if ((lVar19 != 0) && ((*(byte *)((longlong)param_2 + 0xcb) & 0x10) == 0)) {
      uVar25 = *param_2;
      uVar3 = param_2[1];
      uVar8 = param_2[2];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar9 = param_2[3];
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar10 = param_2[5];
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(int *)(param_1 + 0x35) = (int)param_2[4];
      *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar6;
      *(int *)(param_1 + 0x36) = (int)uVar10;
      *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar7;
      *(int *)(param_1 + 0x33) = (int)uVar8;
      *(undefined4 *)((longlong)param_1 + 0x19c) = uVar4;
      *(int *)(param_1 + 0x34) = (int)uVar9;
      *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar5;
      param_1[0x31] = uVar25;
      param_1[0x32] = uVar3;
      puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar14 + 4;
      if ((undefined8 *)param_1[1] < puVar17) {
        FUN_140023dd8(param_1,0x28);
        puVar14 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar17 = puVar14 + 4;
      }
      *param_1 = (ulonglong)puVar17;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar14;
      param_1[6] = (ulonglong)(puVar14 + 1);
      puVar14[1] = 0;
      *puVar14 = &PTR_LAB_14a37d348;
      puVar14[2] = lVar19;
      *(undefined4 *)(puVar14 + 3) = 0;
      *(undefined1 *)((longlong)puVar14 + 0x1c) = 1;
    }
    lVar19 = local_718[1];
    if (0 < (longlong)(int)lVar19) {
      local_730 = CONCAT71(local_730._1_7_,param_9) ^ 1;
      lVar27 = (ulonglong)(param_9 ^ 1) * 8;
      local_710 = lVar27 + 0x28;
      lVar20 = 0x78;
      lVar21 = 0;
      do {
        lVar15 = *local_718;
        local_6c8 = *(undefined8 *)(lVar15 + lVar21 * 0xa0);
        local_6d8 = 4.0 / (float)*(int *)(param_5 + 0xe0);
        local_6d4 = 4.0 / (float)*(int *)(param_5 + 0xe4);
        local_6d0 = DAT_14c8461b4;
        if (*(char *)(param_5 + 0x110) == '\x01') {
          local_6d0 = CONCAT44((float)DAT_14c7616d0 / (float)*(int *)(param_5 + 0xe4),
                               (float)DAT_14c7616d0 / (float)*(int *)(param_5 + 0xe0));
        }
        lVar23 = lVar21 * 0xa0 + lVar15;
        local_400 = 0;
        local_3fc = *(undefined4 *)(lVar23 + 0x3c);
        local_418 = *(undefined4 *)(lVar23 + 0x20);
        local_414 = *(undefined4 *)(lVar23 + 0x24);
        local_410 = *(undefined4 *)(lVar23 + 0x28);
        local_40c = *(undefined4 *)(lVar23 + 0x2c);
        local_408 = 0;
        local_404 = 0;
        if (((byte)local_730 & 0.0 < *(float *)(DAT_14caf3da0 + 4)) == 0) {
          local_408 = *(undefined4 *)(lVar23 + 0x30);
          local_404 = *(undefined4 *)(lVar23 + 0x34);
          local_400 = *(undefined4 *)(lVar23 + 0x38);
        }
        local_3f0 = *(undefined4 *)(lVar23 + 0x20 + local_710);
        local_3ec = *(undefined4 *)(lVar23 + lVar27 + 0x4c);
        local_3f8 = *(undefined8 *)(lVar23 + 0x40);
        local_708 = *(undefined8 *)(lVar23 + 0x5c);
        local_700 = *(undefined4 *)(lVar23 + 100);
        lVar18 = 0;
        do {
          auStack_460[lVar18] = *(undefined8 *)(lVar15 + lVar20 + lVar18 * 8);
          lVar18 = lVar18 + 1;
        } while (lVar18 != 4);
        local_3e8 = local_708;
        local_3e0 = local_700;
        FUN_145ef21da();
        local_1a0 = DAT_14caf40c9;
        if (DAT_14caf40c9 == '\x03') {
          local_1a0 = '\x02';
        }
        local_1a8 = *(undefined8 *)(lVar23 + 0x10);
        FUN_145ef0be0();
        local_190 = DAT_14caf4161;
        if (DAT_14caf4161 == '\x03') {
          local_190 = '\x02';
        }
        local_198 = *(undefined8 *)(lVar23 + 0x70);
        if (lVar26 == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_720 + 8) + 0x50) +
                    (longlong)*(int *)(lVar26 + 0xd4) * 8);
          if (lVar15 == 0) {
            lVar15 = FUN_1400bafc2(*(longlong *)(local_720 + 8),(longlong)*(int *)(lVar26 + 0xd4),1)
            ;
          }
        }
        FUN_145e4712c();
        local_738 = &local_6d8;
        FUN_1449cc26b(param_1,lVar15,lVar26,&DAT_14caf5378);
        if (local_6f0 == 0) {
          lVar15 = 0;
        }
        else {
          lVar15 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_6e8 + 8) + 0x50) +
                    (longlong)*(int *)(local_6f0 + 0xd4) * 8);
          if (lVar15 == 0) {
            lVar15 = FUN_1400bafc2(*(longlong *)(lStack_6e8 + 8),
                                   (longlong)*(int *)(local_6f0 + 0xd4),1);
          }
        }
        FUN_145dc23c4();
        local_738 = (float *)&local_4b8;
        FUN_1449cc26b(param_1,lVar15,local_6f0,&DAT_14caf56d8);
        if (local_724 < 2) {
          FUN_1435d2779(param_1,*(undefined8 *)(lVar23 + 8));
        }
        else {
          FUN_1435d28df(param_1,*(int *)(lVar23 + 0x98) + 7U & 0xfffffff8);
        }
        lVar21 = lVar21 + 1;
        lVar20 = lVar20 + 0xa0;
      } while (lVar21 != (int)lVar19);
    }
    if (local_6f0 == 0) {
      lVar26 = 0;
    }
    else {
      lVar26 = *(longlong *)
                (*(longlong *)(*(longlong *)(lStack_6e8 + 8) + 0x50) +
                (longlong)*(int *)(local_6f0 + 0xd4) * 8);
      if (lVar26 == 0) {
        lVar26 = FUN_1400bafc2(*(longlong *)(lStack_6e8 + 8),(longlong)*(int *)(local_6f0 + 0xd4),1)
        ;
      }
    }
    FUN_147c27cc9(param_1,&local_6f0,lVar26);
    FUN_1471f3c22(local_6e0);
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_100 != (byte *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_758) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435d1c6b FUN_1435d1c6b body=2382 status=ok
// SIG undefined FUN_1435d1c6b(void)

void FUN_1435d1c6b(ulonglong *param_1,ulonglong *param_2,int param_3,longlong *param_4,
                  longlong param_5,longlong *param_6,longlong param_7,byte param_8)

{
  byte bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  uint uVar11;
  DWORD DVar12;
  DWORD DVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  byte *_Src;
  longlong lVar26;
  bool bVar27;
  undefined1 auStack_558 [32];
  float *local_538;
  byte local_525;
  int local_524;
  longlong local_520;
  longlong *local_518;
  longlong local_510;
  undefined8 local_508;
  undefined4 local_500;
  longlong local_4f0;
  longlong lStack_4e8;
  undefined1 local_4e0 [8];
  float local_4d8;
  float local_4d4;
  undefined8 local_4d0;
  undefined8 local_4c8;
  longlong local_4b8;
  longlong lStack_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined8 auStack_460 [4];
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined4 uStack_438;
  undefined4 uStack_434;
  undefined4 local_430;
  undefined4 uStack_42c;
  undefined4 uStack_428;
  undefined4 uStack_424;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined8 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined8 local_3e8;
  undefined4 local_3e0;
  undefined8 local_1a8;
  char local_1a0;
  undefined8 local_198;
  char local_190;
  undefined1 local_180 [8];
  undefined1 *local_178;
  uint local_170;
  undefined4 local_16c;
  undefined1 local_168 [64];
  undefined1 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  byte local_108 [8];
  byte *local_100;
  undefined8 local_f8;
  longlong local_f0 [8];
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  ulonglong local_90;
  
  lVar25 = DAT_14caf3de8;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_558;
  iVar21 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  local_524 = param_3;
  local_518 = param_4;
  if (iVar21 == 0x40000002) {
    uVar14 = 0;
  }
  else {
    bVar27 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar21 != 2)) {
      if (iVar21 == 1) {
        DVar12 = FUN_140ad26c0();
        DVar13 = GetCurrentThreadId();
        bVar27 = DVar12 == DVar13;
      }
      else {
        bVar27 = false;
      }
    }
    uVar14 = (ulonglong)(bVar27 ^ 1);
  }
  if (*(int *)(lVar25 + uVar14 * 4) != 0) {
    local_100 = (byte *)0x0;
    local_f8 = 0x800000000;
    local_b0 = (longlong *)0x0;
    local_a8 = 0x800000000;
    local_a0 = 0;
    uStack_98 = 0;
    bVar27 = param_7 != 0;
    if (bVar27) {
      local_108[0] = *(byte *)(*(longlong *)(param_7 + 0x20) + 0x8a);
      local_f8 = 0x800000001;
      local_a8 = 0x800000001;
      local_f0[0] = param_7;
      local_a0 = local_108[0] + 1;
    }
    uVar14 = local_a8;
    uVar11 = (uint)bVar27;
    lVar25 = *param_6;
    if (lVar25 != 0) {
      bVar1 = *(byte *)(*(longlong *)(lVar25 + 0x20) + 0x8a);
      local_f8 = CONCAT44(local_f8._4_4_,bVar27 + 1);
      local_108[bVar27] = bVar1;
      lVar20 = (longlong)(int)local_a8;
      uVar11 = (int)local_a8 + 1;
      local_a8 = CONCAT44(local_a8._4_4_,uVar11);
      if (local_a8._4_4_ < uVar11) {
        FUN_1474146d2(local_f0,uVar14 & 0xffffffff);
      }
      plVar24 = local_f0;
      if (local_b0 != (longlong *)0x0) {
        plVar24 = local_b0;
      }
      plVar24[lVar20] = lVar25;
      iVar21 = bVar1 + 1;
      if (iVar21 <= local_a0) {
        iVar21 = local_a0;
      }
      uVar11 = (uint)local_f8;
      local_a0 = iVar21;
    }
    local_178 = (undefined1 *)0x0;
    local_170 = uVar11;
    if (uVar11 == 0) {
      local_16c = 8;
    }
    else {
      _Src = local_108;
      if (local_100 != (byte *)0x0) {
        _Src = local_100;
      }
      FUN_1446fe144(local_180,uVar11,0);
      puVar17 = local_178;
      if (local_178 == (undefined1 *)0x0) {
        puVar17 = local_180;
      }
      memcpy(puVar17,_Src,(longlong)(int)uVar11);
    }
    local_128 = (undefined1 *)0x0;
    lVar25 = (longlong)(int)local_a8;
    local_120 = (int)local_a8;
    if (lVar25 == 0) {
      local_11c = 8;
    }
    else {
      plVar24 = local_f0;
      if (local_b0 != (longlong *)0x0) {
        plVar24 = local_b0;
      }
      FUN_1446fe1b8(local_168,local_a8 & 0xffffffff,0);
      puVar17 = local_128;
      if (local_128 == (undefined1 *)0x0) {
        puVar17 = local_168;
      }
      memcpy(puVar17,plVar24,lVar25 << 3);
    }
    local_118 = CONCAT44(uStack_9c,local_a0);
    uStack_110 = uStack_98;
    FUN_1472bfb30(local_4e0,param_1);
    iVar21 = local_524;
    lVar20 = (longlong)
             (int)((uint)(*(float *)(DAT_14caf3da0 + 4) <= 0.0 | param_8) ^
                  *(uint *)(param_5 + 0xd0)) * 0x40;
    lVar22 = (longlong)local_524;
    uVar2 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar22 * 2) * 8);
    FUN_145e46ec0();
    FUN_1448e935e(uVar2,&local_4b8,&DAT_14caf4220,0);
    FUN_145e46ec0();
    lVar25 = local_4b8;
    local_520 = lStack_4b0;
    uVar2 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar22 * 2) * 8);
    FUN_145dc22a2();
    FUN_1448e935e(uVar2,&local_4b8,&DAT_14caf4348,0);
    FUN_145dc22a2();
    local_4f0 = local_4b8;
    lStack_4e8 = lStack_4b0;
    FUN_147c278ea(&local_4b8);
    lStack_4b0 = *(longlong *)(param_5 + 0x20 + lVar20);
    local_4a8 = DAT_14c9c0d80;
    local_4a0 = *(undefined8 *)(param_5 + 0x28 + lVar20);
    local_498 = DAT_14c9c0d80;
    local_490 = *(undefined8 *)(param_5 + 0xc0);
    local_488 = DAT_14c9c0d80;
    local_470 = DAT_14caf3c48;
    local_468 = (undefined4)DAT_14c9c0de0;
    uStack_464 = DAT_14c9c0de0._4_4_;
    local_440 = (undefined4)DAT_14c9c0de0;
    uStack_43c = DAT_14c9c0de0._4_4_;
    uStack_438 = (undefined4)DAT_14c9c0de0;
    uStack_434 = DAT_14c9c0de0._4_4_;
    puVar18 = &DAT_14caf4780;
    if (iVar21 < 2) {
      puVar18 = &DAT_14caf4798;
    }
    local_430 = (undefined4)DAT_14c9c0de0;
    uStack_42c = DAT_14c9c0de0._4_4_;
    uStack_428 = (undefined4)DAT_14c9c0de0;
    uStack_424 = DAT_14c9c0de0._4_4_;
    *param_2 = puVar18[2];
    if (lVar25 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(local_520 + 8) + 0x50) +
                (longlong)*(int *)(lVar25 + 0xd4) * 8);
      if (uVar14 == 0) {
        uVar14 = FUN_1400bafc2(*(longlong *)(local_520 + 8),(longlong)*(int *)(lVar25 + 0xd4),1);
      }
    }
    param_2[1] = uVar14;
    if (local_4f0 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(lStack_4e8 + 8) + 0x50) +
                (longlong)*(int *)(local_4f0 + 0xd4) * 8);
      if (uVar14 == 0) {
        uVar14 = FUN_1400bafc2(*(longlong *)(lStack_4e8 + 8),(longlong)*(int *)(local_4f0 + 0xd4),1)
        ;
      }
    }
    param_2[2] = uVar14;
    *(undefined4 *)(param_2 + 0xb) = 0;
    lVar20 = FUN_140028f18(param_1,param_2);
    if ((lVar20 != 0) && ((*(byte *)((longlong)param_2 + 0xcb) & 0x10) == 0)) {
      uVar14 = *param_2;
      uVar3 = param_2[1];
      uVar8 = param_2[2];
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar9 = param_2[3];
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x24);
      uVar10 = param_2[5];
      uVar7 = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(int *)(param_1 + 0x35) = (int)param_2[4];
      *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar6;
      *(int *)(param_1 + 0x36) = (int)uVar10;
      *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar7;
      *(int *)(param_1 + 0x33) = (int)uVar8;
      *(undefined4 *)((longlong)param_1 + 0x19c) = uVar4;
      *(int *)(param_1 + 0x34) = (int)uVar9;
      *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar5;
      param_1[0x31] = uVar14;
      param_1[0x32] = uVar3;
      puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar18 = puVar15 + 4;
      if ((undefined8 *)param_1[1] < puVar18) {
        FUN_140023dd8(param_1,0x28);
        puVar15 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar18 = puVar15 + 4;
      }
      *param_1 = (ulonglong)puVar18;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar15;
      param_1[6] = (ulonglong)(puVar15 + 1);
      puVar15[1] = 0;
      *puVar15 = &PTR_LAB_14a37d348;
      puVar15[2] = lVar20;
      *(undefined4 *)(puVar15 + 3) = 0;
      *(undefined1 *)((longlong)puVar15 + 0x1c) = 1;
    }
    lVar20 = local_518[1];
    if (0 < (longlong)(int)lVar20) {
      local_525 = param_8 ^ 1;
      uVar14 = (ulonglong)local_525;
      local_510 = uVar14 * 8 + 0x28;
      lVar22 = 0x78;
      lVar23 = 0;
      do {
        lVar16 = *local_518;
        local_4c8 = *(undefined8 *)(lVar16 + lVar23 * 0xa0);
        local_4d8 = 4.0 / (float)*(int *)(param_5 + 0xe0);
        local_4d4 = 4.0 / (float)*(int *)(param_5 + 0xe4);
        local_4d0 = DAT_14c8461b4;
        if (*(char *)(param_5 + 0x110) == '\x01') {
          local_4d0 = CONCAT44((float)DAT_14c7616d0 / (float)*(int *)(param_5 + 0xe4),
                               (float)DAT_14c7616d0 / (float)*(int *)(param_5 + 0xe0));
        }
        lVar26 = lVar23 * 0xa0 + lVar16;
        local_400 = 0;
        local_3fc = *(undefined4 *)(lVar26 + 0x3c);
        local_418 = *(undefined4 *)(lVar26 + 0x20);
        local_414 = *(undefined4 *)(lVar26 + 0x24);
        local_410 = *(undefined4 *)(lVar26 + 0x28);
        local_40c = *(undefined4 *)(lVar26 + 0x2c);
        local_408 = 0;
        local_404 = 0;
        if ((local_525 & 0.0 < *(float *)(DAT_14caf3da0 + 4)) == 0) {
          local_408 = *(undefined4 *)(lVar26 + 0x30);
          local_404 = *(undefined4 *)(lVar26 + 0x34);
          local_400 = *(undefined4 *)(lVar26 + 0x38);
        }
        local_3f0 = *(undefined4 *)(lVar26 + 0x20 + local_510);
        local_3ec = *(undefined4 *)(lVar26 + uVar14 * 8 + 0x4c);
        local_3f8 = *(undefined8 *)(lVar26 + 0x40);
        local_508 = *(undefined8 *)(lVar26 + 0x5c);
        local_500 = *(undefined4 *)(lVar26 + 100);
        lVar19 = 0;
        do {
          auStack_460[lVar19] = *(undefined8 *)(lVar16 + lVar22 + lVar19 * 8);
          lVar19 = lVar19 + 1;
        } while (lVar19 != 4);
        local_3e8 = local_508;
        local_3e0 = local_500;
        FUN_145ef21da();
        local_1a0 = DAT_14caf40c9;
        if (DAT_14caf40c9 == '\x03') {
          local_1a0 = '\x02';
        }
        local_1a8 = *(undefined8 *)(lVar26 + 0x10);
        FUN_145ef0be0();
        local_190 = DAT_14caf4161;
        if (DAT_14caf4161 == '\x03') {
          local_190 = '\x02';
        }
        local_198 = *(undefined8 *)(lVar26 + 0x70);
        if (lVar25 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_520 + 8) + 0x50) +
                    (longlong)*(int *)(lVar25 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(local_520 + 8),(longlong)*(int *)(lVar25 + 0xd4),1)
            ;
          }
        }
        FUN_145e4712c();
        local_538 = &local_4d8;
        FUN_1449cc26b(param_1,lVar16,lVar25,&DAT_14caf5378);
        if (local_4f0 == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lStack_4e8 + 8) + 0x50) +
                    (longlong)*(int *)(local_4f0 + 0xd4) * 8);
          if (lVar16 == 0) {
            lVar16 = FUN_1400bafc2(*(longlong *)(lStack_4e8 + 8),
                                   (longlong)*(int *)(local_4f0 + 0xd4),1);
          }
        }
        FUN_145dc23c4();
        local_538 = (float *)&local_4b8;
        FUN_1449cc26b(param_1,lVar16,local_4f0,&DAT_14caf56d8);
        if (local_524 < 2) {
          FUN_1435d2779(param_1,*(undefined8 *)(lVar26 + 8));
        }
        else {
          FUN_1435d28df(param_1,*(int *)(lVar26 + 0x98) + 7U & 0xfffffff8);
        }
        lVar23 = lVar23 + 1;
        lVar22 = lVar22 + 0xa0;
      } while (lVar23 != (int)lVar20);
    }
    if (local_4f0 == 0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *(longlong *)
                (*(longlong *)(*(longlong *)(lStack_4e8 + 8) + 0x50) +
                (longlong)*(int *)(local_4f0 + 0xd4) * 8);
      if (lVar25 == 0) {
        lVar25 = FUN_1400bafc2(*(longlong *)(lStack_4e8 + 8),(longlong)*(int *)(local_4f0 + 0xd4),1)
        ;
      }
    }
    FUN_147c27e32(param_1,&local_4f0,lVar25);
    FUN_1471f3c22(local_4e0);
    if (local_b0 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_100 != (byte *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435d25ba FUN_1435d25ba body=447 status=ok
// SIG undefined FUN_1435d25ba(void)

void FUN_1435d25ba(longlong param_1,undefined8 param_2,longlong param_3,uint param_4,int param_5,
                  longlong param_6)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  cVar1 = *(char *)(param_1 + 0x69);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1,1);
  }
  lVar4 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,param_2,0,param_5 << 4,1);
  if (cVar1 == '\0') {
    FUN_14002049c(param_1);
  }
  if (0 < (int)param_4) {
    uVar2 = *(uint *)(param_6 + 0xe8);
    uVar3 = *(uint *)(param_6 + 0xec);
    lVar6 = 0;
    do {
      fVar7 = (float)((ulonglong)*(uint *)(param_3 + lVar6) % (ulonglong)*(uint *)(param_6 + 0xf0))
              / (float)uVar2;
      auVar9 = roundss(ZEXT816(0),ZEXT416((uint)fVar7),0xb);
      fVar8 = fVar7 - auVar9._0_4_;
      *(float *)(lVar4 + lVar6 * 4) = fVar8;
      auVar9 = roundps(ZEXT416((uint)fVar8),ZEXT416((uint)fVar7),3);
      auVar9._0_4_ = auVar9._0_4_ / (float)uVar3;
      auVar10 = roundss(ZEXT816(0),auVar9,0xb);
      *(float *)(lVar4 + 4 + lVar6 * 4) = auVar9._0_4_ - auVar10._0_4_;
      *(float *)(lVar4 + 8 + lVar6 * 4) =
           (float)((ulonglong)*(uint *)(param_3 + lVar6) / (ulonglong)*(uint *)(param_6 + 0xf0));
      lVar6 = lVar6 + 4;
    } while ((ulonglong)param_4 << 2 != lVar6);
  }
  if ((int)param_4 < param_5) {
    lVar6 = (longlong)param_5 - (longlong)(int)param_4;
    puVar5 = (undefined4 *)((longlong)(int)param_4 * 0x10 + lVar4 + 8);
    do {
      *(undefined8 *)(puVar5 + -2) = 0x42c8000042c80000;
      *puVar5 = 0;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (*(char *)(param_1 + 0x69) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001435d273c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,param_2);
    return;
  }
  FUN_14002049c(param_1,1);
  (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,param_2);
  FUN_14002049c(param_1,0);
  return;
}



// FUNCTION 1435d2779 FUN_1435d2779 body=358 status=ok
// SIG undefined FUN_1435d2779(void)

void FUN_1435d2779(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = DAT_14caf6058;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 5;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x30);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 5;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = uVar1;
  *(undefined4 *)(puVar2 + 4) = 0;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 5;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x30);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 5;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar2 + 2) = 1;
  puVar2[3] = param_2;
  *(undefined4 *)(puVar2 + 4) = 0;
  uVar1 = DAT_14caf6040;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 6;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x38);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 6;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb5b0;
  puVar2[2] = uVar1;
  puVar2[3] = 0;
  puVar2[4] = 4;
  *(undefined4 *)(puVar2 + 5) = 2;
  *(undefined4 *)((longlong)puVar2 + 0x2c) = param_3;
  return;
}



// FUNCTION 1435d28df FUN_1435d28df body=258 status=ok
// SIG undefined FUN_1435d28df(void)

void FUN_1435d28df(ulonglong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  uVar1 = DAT_14caf6058;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 5;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x30);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 5;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar2 + 2) = 0;
  puVar2[3] = uVar1;
  *(undefined4 *)(puVar2 + 4) = 0;
  uVar1 = DAT_14caf6040;
  puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 6;
  if ((undefined8 *)param_1[1] < puVar3) {
    FUN_140023dd8(param_1,0x38);
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 6;
  }
  iVar4 = param_2 + 7;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  *param_1 = (ulonglong)puVar3;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar2;
  param_1[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb5b0;
  puVar2[2] = uVar1;
  puVar2[3] = 0;
  puVar2[4] = 4;
  *(undefined4 *)(puVar2 + 5) = 0x10;
  *(int *)((longlong)puVar2 + 0x2c) = iVar4 >> 3;
  return;
}



// FUNCTION 1435d2a11 FUN_1435d2a11 body=47 status=ok
// SIG undefined FUN_1435d2a11(void)

void FUN_1435d2a11(void)

{
  DAT_14caf4bc0 = &PTR_FUN_14aa046b0;
  FUN_144725486(&DAT_14caf4bc0);
  FUN_1463f0ab2(&DAT_14caf4bc0);
  return;
}



// FUNCTION 1435d2a64 FUN_1435d2a64 body=47 status=ok
// SIG undefined FUN_1435d2a64(void)

void FUN_1435d2a64(void)

{
  DAT_14caf4ec0 = &PTR_FUN_14aa04710;
  FUN_144725486(&DAT_14caf4ec0);
  FUN_1463f0bdc(&DAT_14caf4ec0);
  return;
}



// FUNCTION 1435d2aac FUN_1435d2aac body=1829 status=ok
// SIG undefined FUN_1435d2aac(void)

void FUN_1435d2aac(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  uint uVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  code **local_b8;
  longlong *local_a8;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  longlong local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_3 == 0) goto LAB_1435d2cb5;
  LOCK();
  *(int *)(param_3 + 0x210) = *(int *)(param_3 + 0x210) + 1;
  UNLOCK();
  local_a0 = (void *)0x0;
  local_98 = *(int *)(param_2 + 1);
  lVar16 = (longlong)local_98;
  pvVar4 = (void *)*param_2;
  local_a8 = param_1;
  if (lVar16 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1447bda9e(&local_a0,local_98,0);
    memcpy(local_a0,pvVar4,lVar16 << 2);
  }
  LOCK();
  *(int *)(param_3 + 0x210) = *(int *)(param_3 + 0x210) + 1;
  UNLOCK();
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar15 = *(int *)(lVar16 + 0xc60);
  local_90 = param_3;
  if (DAT_14c86a9fc == 0) {
    if (iVar15 != 2) {
      if (iVar15 != 1) goto LAB_1435d2b67;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1435d3076;
      goto LAB_1435d2b70;
    }
LAB_1435d3076:
    FUN_144725486(local_a8 + 0x5a);
    FUN_144725486(local_a8 + 1);
    FUN_147c280b4(local_a8 + 0x5a,&DAT_14ca85100,&local_a0,*(undefined8 *)(*local_a8 + 0xa0));
    FUN_147c285e4(local_a8 + 1,&DAT_14ca85100,&local_a0,*(undefined8 *)(*local_a8 + 0xa0));
    lVar16 = local_a8[6];
    if (lVar16 != local_90) {
      local_a8[6] = local_90;
      if (local_90 != 0) {
        LOCK();
        *(int *)(local_90 + 0x210) = *(int *)(local_90 + 0x210) + 1;
        UNLOCK();
      }
      if (lVar16 != 0) {
        FUN_1435da7c2();
      }
    }
    local_a8[7] = local_90 + 0x18;
    plVar9 = (longlong *)local_a8[0x5f];
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9,&DAT_14ca85100);
    }
  }
  else {
LAB_1435d2b67:
    if (iVar15 == 0x10) goto LAB_1435d3076;
LAB_1435d2b70:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar15 = *(int *)(lVar16 + 0xc60), iVar15 == 2))
      goto LAB_1435d3076;
      if (iVar15 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1435d3076;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1435d2d8c;
      while( true ) {
        uVar6 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar6 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar6 | 1;
          __tlregdtor(&LAB_1435df720);
        }
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar16 + 0x310);
        *(undefined8 *)(lVar16 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_1435d2d8c:
        puVar14 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar13 = (uint *)(puVar14 + 0x19);
        uVar6 = puVar11[0x12];
        if (puVar13 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + uVar6 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar6) != 0xffffffff) break;
          puVar11 = (uint *)*puVar2;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          puVar14 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar13 = (uint *)(puVar14 + 0x19);
          uVar6 = 0;
          if (puVar13 <= puVar11 + 0x4000) {
            uVar6 = 1;
            goto LAB_1435d2e0c;
          }
        }
      }
      uVar6 = uVar6 + 1;
LAB_1435d2e0c:
      *(uint **)(puVar11 + 0x10) = puVar13;
      puVar11[0x12] = uVar6;
      FUN_1447247dc(puVar14,0);
      pvVar4 = local_a0;
      *puVar14 = &PTR_FUN_14aa047d8;
      puVar14[0x15] = local_a8;
      puVar14[0x16] = 0;
      lVar16 = (longlong)local_98;
      *(int *)(puVar14 + 0x17) = local_98;
      if (lVar16 == 0) {
        *(undefined4 *)((longlong)puVar14 + 0xbc) = 0;
      }
      else {
        FUN_1447bda9e(puVar14 + 0x16,local_98,0);
        memcpy((void *)puVar14[0x16],pvVar4,lVar16 << 2);
      }
      puVar14[0x18] = local_90;
      local_90 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar6 = DAT_14c7585c8 >> 10 & 3;
        iVar15 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar6 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar6];
          iVar15 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar15 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar14[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar14[0xe] + 0x18))(puVar14 + 0xe,puVar14 + 9);
      }
      puVar14[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar14[9] = puVar14;
      puVar14[10] = puVar14;
      lVar16 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar16 == 0) {
        uVar5 = 1;
        if ((char)uVar17 != '\x06') {
          uVar5 = uVar17;
        }
        uVar17 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar16 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar16 + 0x30);
      }
      puVar14[0xf] = uVar12;
      puVar14[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar14 + 0x1c) = iVar15;
      if (puVar14 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar14);
        LOCK();
        piVar1 = (int *)(puVar14 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar14)(puVar14,1);
        }
      }
    }
    else {
      local_88[0] = (code *)0x0;
      plVar9 = (longlong *)FUN_14001cc68(0x28,8);
      pvVar4 = local_a0;
      *plVar9 = (longlong)&PTR_LAB_14aa04770;
      plVar9[1] = (longlong)local_a8;
      plVar9[2] = 0;
      lVar16 = (longlong)local_98;
      *(int *)(plVar9 + 3) = local_98;
      local_78 = plVar9;
      if (lVar16 == 0) {
        *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
      }
      else {
        FUN_1447bda9e(plVar9 + 2,local_98,0);
        memcpy((void *)plVar9[2],pvVar4,lVar16 << 2);
      }
      plVar9[4] = local_90;
      local_90 = 0;
      if (plVar9 != (longlong *)&DAT_fffffffffffffff8) {
        local_88[0] = FUN_1435e5804;
      }
      local_b8 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"FInitParticleSimulationGPUCommand",&DAT_14caf5998);
      if (local_88[0] != (code *)0x0) {
        plVar9 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar9 = local_68;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
  }
  if (local_90 != 0) {
    FUN_1435da7c2();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1435da7c2(param_3);
LAB_1435d2cb5:
  *(undefined2 *)(param_1 + 0x62) = 0;
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435d31d2 FUN_1435d31d2 body=1509 status=ok
// SIG undefined FUN_1435d31d2(void)

void FUN_1435d31d2(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  void *_Dst;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  bool bVar22;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  void *local_70;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  void *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  _Dst = (void *)FUN_14001cc68(0x148);
  memset(_Dst,0,0x148);
  FUN_147c10198(_Dst);
  *(void **)(param_1 + 0xa0) = _Dst;
  cVar6 = DAT_14caf3d88;
  iVar8 = DAT_14c7616d0;
  iVar5 = DAT_14c7616c4;
  if ((((DAT_14c7616a4 == 0) || (DAT_14ca84e1d != '\x01')) || ((DAT_14c873768 & 1) == 0)) ||
     (DAT_14ca84e19 != '\x01')) goto LAB_1435d3243;
  bVar22 = DAT_14caf3d88 != '\0';
  iVar19 = DAT_14c7616c4;
  if (bVar22) {
    iVar19 = DAT_14c7616d0;
  }
  *(int *)((longlong)_Dst + 0xe0) = iVar19;
  iVar21 = DAT_14c7616c8;
  if (!bVar22) {
    iVar8 = DAT_14c7616c8;
  }
  iVar20 = iVar19 + 3;
  if (-1 < iVar19) {
    iVar20 = iVar19;
  }
  *(int *)((longlong)_Dst + 0xe4) = iVar8;
  *(int *)((longlong)_Dst + 0xe8) = iVar20 >> 2;
  iVar19 = iVar8 + 3;
  if (-1 < iVar8) {
    iVar19 = iVar8;
  }
  *(int *)((longlong)_Dst + 0xec) = iVar19 >> 2;
  iVar19 = (iVar19 >> 2) * (iVar20 >> 2);
  iVar8 = iVar5 + 3;
  if (-1 < iVar5) {
    iVar8 = iVar5;
  }
  iVar21 = (iVar8 >> 2) * iVar21;
  iVar8 = iVar21 + 3;
  if (-1 < iVar21) {
    iVar8 = iVar21;
  }
  *(int *)((longlong)_Dst + 0xf0) = iVar19;
  FUN_147c23922((longlong)_Dst + 0xf8,cVar6,iVar19,iVar8 >> 2);
  *(undefined4 *)((longlong)_Dst + 0x34) = 0;
  uVar13 = *(undefined8 *)((longlong)_Dst + 0xe0);
  *(undefined8 *)((longlong)_Dst + 0x38) = uVar13;
  *(undefined4 *)((longlong)_Dst + 0x74) = 1;
  *(undefined8 *)((longlong)_Dst + 0x78) = uVar13;
  *(undefined8 *)((longlong)_Dst + 0xa0) = uVar13;
  *(undefined8 *)((longlong)_Dst + 200) = uVar13;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  local_70 = _Dst;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_1435d3356;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1435d3711;
      goto LAB_1435d335f;
    }
  }
  else {
LAB_1435d3356:
    if (iVar8 != 0x10) {
LAB_1435d335f:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_1435d3711;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_1435d3711;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1435d34a3;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_1435df720);
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
          puVar12 = (uint *)*puVar2;
LAB_1435d34a3:
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
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x16);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1435d3523;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1435d3523:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14aa03c50;
        puVar18[0x15] = local_70;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa03be0;
        local_68[0] = &LAB_147c23b76;
        local_40 = _Dst;
        FUN_14005a792(&DAT_14ca9a440,L"FInitParticleSimulationResourcesCommand",&DAT_14caf5598);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar15 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar15 = &local_48;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_1435d3243;
    }
  }
LAB_1435d3711:
  FUN_147c2398a(&local_70,&DAT_14ca85100);
LAB_1435d3243:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435d37b8 FUN_1435d37b8 body=2843 status=ok
// SIG undefined FUN_1435d37b8(void)

void FUN_1435d37b8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined ***pppuVar9;
  uint *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  int *piVar24;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar3 = *(int *)(param_1 + 0x80);
  if (iVar3 == 0) {
    uVar15 = 0;
    uVar20 = 1;
    iVar16 = 0;
    iVar22 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x78);
    if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 0x68);
    }
    uVar17 = *puVar8;
    if (uVar17 == 0) {
      iVar16 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar16 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar23 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar23 = uVar15;
      }
      iVar16 = 0;
      do {
        if (uVar23 == uVar15) goto LAB_1435d393d;
        iVar16 = iVar16 + 0x20;
        uVar17 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar15 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar17 & uVar17);
    uVar23 = uVar20 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar22 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar22) {
      iVar22 = iVar3;
    }
  }
  if (iVar22 < iVar3) {
    uVar17 = 0xffffffff;
    do {
      *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar22 * 8) + 0x300) =
           0xffffffff;
      uVar17 = ~(uint)uVar20 & uVar17;
      puVar8 = *(uint **)(param_1 + 0x78);
      if (*(uint **)(param_1 + 0x78) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x68);
      }
      iVar3 = *(int *)(param_1 + 0x80);
      iVar22 = (int)uVar15;
      lVar11 = (longlong)iVar22;
      uVar21 = puVar8[lVar11] & uVar17;
      if (uVar21 == 0) {
        iVar18 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar18 = iVar3 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar22) {
          iVar19 = iVar22;
        }
        if (iVar18 <= iVar22) break;
        lVar13 = 0;
        while( true ) {
          iVar16 = iVar16 + 0x20;
          uVar21 = puVar8[lVar11 + lVar13 + 1];
          if (uVar21 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar19 - lVar11 == lVar13) goto LAB_1435d393d;
        }
        uVar15 = (ulonglong)(iVar22 + (int)lVar13 + 1);
        uVar17 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar21 & uVar21);
      uVar23 = uVar20 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar22 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar22 < iVar3);
  }
LAB_1435d393d:
  FUN_147c0ba8e(param_1 + 0x58,0);
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  plVar14 = *(longlong **)(param_1 + 0xa0);
  if (plVar14 == (longlong *)0x0) {
    piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    plVar14 = (longlong *)0x0;
  }
  else {
    piVar24 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar3 = *piVar24;
    if (DAT_14c86a9fc == 0) {
      if (iVar3 != 2) {
        if (iVar3 != 1) goto LAB_1435d398b;
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_1435d3990;
        goto LAB_1435d3a0a;
      }
LAB_1435d3990:
      (**(code **)(*plVar14 + 0x20))(plVar14);
      (**(code **)(plVar14[8] + 0x20))(plVar14 + 8);
      FUN_144725486(plVar14 + 0x10);
      FUN_144725486(plVar14 + 0x15);
    }
    else {
LAB_1435d398b:
      if (iVar3 == 0x10) goto LAB_1435d3990;
LAB_1435d3a0a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar24 == 2)) goto LAB_1435d3990;
        if (*piVar24 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          if (DVar4 == DVar5) goto LAB_1435d3990;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar8 = (uint *)*puVar2;
        if (puVar8 != (uint *)0x0) goto LAB_1435d3b81;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_1435df720);
          }
          lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar7 = *(undefined4 **)(lVar11 + 0x310);
          *(undefined8 *)(lVar11 + 0x310) = 0;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar7 = 0xffffffff;
          *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar2 = puVar7;
          FUN_140217a48(puVar2);
          puVar8 = (uint *)*puVar2;
LAB_1435d3b81:
          puVar12 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar12 + 0x16);
          uVar17 = puVar8[0x12];
          if (puVar10 <= puVar8 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
            LOCK();
            uVar21 = *puVar8;
            *puVar8 = *puVar8 + uVar17 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar17) != 0xffffffff) break;
            puVar8 = (uint *)*puVar2;
            *puVar8 = 0xffffffff;
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
            puVar8[0x12] = 0;
            *puVar2 = puVar8;
            puVar12 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
            puVar10 = (uint *)(puVar12 + 0x16);
            uVar17 = 0;
            if (puVar10 <= puVar8 + 0x4000) {
              uVar17 = 1;
              goto LAB_1435d3c01;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_1435d3c01:
        *(uint **)(puVar8 + 0x10) = puVar10;
        puVar8[0x12] = uVar17;
        iVar3 = 0;
        FUN_1447247dc(puVar12,0);
        *puVar12 = &PTR_FUN_14aa03cd8;
        puVar12[0x15] = plVar14;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
            iVar3 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar3 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
        }
        puVar12[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar12[9] = puVar12;
        puVar12[10] = puVar12;
        lVar11 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar11 == 0) {
          uVar23 = 1;
          if ((char)uVar15 != '\x06') {
            uVar23 = uVar15;
          }
          uVar15 = uVar23;
          uVar6 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
          }
          uVar6 = *(undefined8 *)(lVar11 + 0x30);
        }
        puVar12[0xf] = uVar6;
        puVar12[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar12 + 0x1c) = iVar3;
        if (puVar12 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar12);
          LOCK();
          piVar1 = (int *)(puVar12 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar12)(puVar12,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14aa03c60;
        local_78[0] = FUN_147c23c1a;
        local_50 = plVar14;
        FUN_14005a792(&DAT_14ca9a440,L"FReleaseParticleSimulationResourcesCommand",&DAT_14caf559c);
        if (local_78[0] != (code *)0x0) {
          pppuVar9 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar9 = &local_58;
          }
          (*(code *)(*pppuVar9)[2])();
        }
      }
    }
    plVar14 = *(longlong **)(param_1 + 0xa0);
  }
  iVar3 = *piVar24;
  if (DAT_14c86a9fc == 0) {
    if (iVar3 != 2) {
      if (iVar3 != 1) goto LAB_1435d3aba;
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1435d3ac3;
      goto LAB_1435d3e17;
    }
  }
  else {
LAB_1435d3aba:
    if (iVar3 != 0x10) {
LAB_1435d3e17:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar24 == 2)) goto LAB_1435d3ac3;
        if (*piVar24 == 1) {
          DVar4 = FUN_140ad26c0();
          DVar5 = GetCurrentThreadId();
          if (DVar4 == DVar5) goto LAB_1435d3ac3;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar8 = (uint *)*puVar2;
        if (puVar8 != (uint *)0x0) goto LAB_1435d3f81;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_1435df720);
          }
          lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar7 = *(undefined4 **)(lVar11 + 0x310);
          *(undefined8 *)(lVar11 + 0x310) = 0;
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar7 = 0xffffffff;
          *(undefined4 **)(puVar7 + 0x10) = puVar7 + 0x16;
          puVar7[0x12] = 0;
          *puVar2 = puVar7;
          FUN_140217a48(puVar2);
          puVar8 = (uint *)*puVar2;
LAB_1435d3f81:
          puVar12 = (undefined8 *)(*(longlong *)(puVar8 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar10 = (uint *)(puVar12 + 0x16);
          uVar17 = puVar8[0x12];
          if (puVar10 <= puVar8 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x4000;
            LOCK();
            uVar21 = *puVar8;
            *puVar8 = *puVar8 + uVar17 + 1;
            UNLOCK();
            if ((uVar21 ^ uVar17) != 0xffffffff) break;
            puVar8 = (uint *)*puVar2;
            *puVar8 = 0xffffffff;
            *(uint **)(puVar8 + 0x10) = puVar8 + 0x16;
            puVar8[0x12] = 0;
            *puVar2 = puVar8;
            puVar12 = (undefined8 *)((longlong)puVar8 + 0x5fU & 0xfffffffffffffff8);
            puVar10 = (uint *)(puVar12 + 0x16);
            uVar17 = 0;
            if (puVar10 <= puVar8 + 0x4000) {
              uVar17 = 1;
              goto LAB_1435d4001;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_1435d4001:
        *(uint **)(puVar8 + 0x10) = puVar10;
        puVar8[0x12] = uVar17;
        iVar3 = 0;
        FUN_1447247dc(puVar12,0);
        *puVar12 = &PTR_FUN_14aa03bc8;
        puVar12[0x15] = plVar14;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar17 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
            iVar3 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar3 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(puVar12[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar12[0xe] + 0x18))(puVar12 + 0xe,puVar12 + 9);
        }
        puVar12[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar12[9] = puVar12;
        puVar12[10] = puVar12;
        lVar11 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar11 == 0) {
          uVar23 = 1;
          if ((char)uVar15 != '\x06') {
            uVar23 = uVar15;
          }
          uVar15 = uVar23;
          uVar6 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar11 + 0x38) >> 0x3b;
          }
          uVar6 = *(undefined8 *)(lVar11 + 0x30);
        }
        puVar12[0xf] = uVar6;
        puVar12[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar12 + 0x1c) = iVar3;
        if (puVar12 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(puVar12);
          LOCK();
          piVar24 = (int *)(puVar12 + 1);
          *piVar24 = *piVar24 + -1;
          UNLOCK();
          if (*piVar24 == 0) {
            (**(code **)*puVar12)(puVar12,1);
          }
        }
      }
      else {
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14aa03b50;
        local_78[0] = FUN_147c23866;
        local_50 = plVar14;
        FUN_14005a792(&DAT_14ca9a440,L"FDestroyParticleSimulationResourcesCommand",&DAT_14caf5594);
        if (local_78[0] != (code *)0x0) {
          pppuVar9 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar9 = &local_58;
          }
          (*(code *)(*pppuVar9)[2])();
        }
      }
      goto LAB_1435d3eb0;
    }
  }
LAB_1435d3ac3:
  if (plVar14 != (longlong *)0x0) {
    FUN_147c23808(plVar14);
    FUN_1400020a8(plVar14);
  }
LAB_1435d3eb0:
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435d42d4 FUN_1435d42d4 body=17151 status=ok
// SIG undefined FUN_1435d42d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d42d4(longlong param_1,ulonglong *param_2,int param_3,longlong param_4,
                  undefined8 param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  size_t _Size;
  undefined4 uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [4];
  undefined1 uVar17;
  uint uVar18;
  DWORD DVar19;
  DWORD DVar20;
  undefined8 *puVar21;
  longlong *plVar22;
  longlong lVar23;
  void *pvVar24;
  wchar_t *pwVar25;
  longlong *plVar26;
  undefined1 *puVar27;
  longlong *plVar28;
  byte bVar29;
  int iVar30;
  ulonglong *puVar31;
  uint *puVar32;
  undefined8 *puVar33;
  byte bVar34;
  int iVar35;
  ulonglong uVar36;
  longlong lVar37;
  ulonglong uVar38;
  uint uVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  longlong lVar43;
  ulonglong *puVar44;
  int iVar45;
  wchar_t *pwVar46;
  int iVar47;
  int iVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  int iVar51;
  void *pvVar52;
  ulonglong uVar53;
  int iVar54;
  longlong lVar55;
  bool bVar56;
  float fVar57;
  undefined8 auStack_1078 [4];
  undefined8 auStack_1058 [28];
  undefined8 auStack_f78 [4];
  undefined8 auStack_f58 [223];
  undefined *puStack_860;
  undefined1 auStack_858 [32];
  undefined8 local_838;
  longlong local_830;
  undefined8 local_828;
  undefined8 local_820;
  int local_818;
  undefined1 local_810;
  longlong local_808;
  undefined8 *local_800;
  ulonglong *local_7f8;
  uint *local_7f0;
  longlong local_7e8;
  int local_7e0;
  uint local_7dc;
  ulonglong *local_7d8;
  uint *local_7d0;
  longlong local_7c8;
  longlong local_7c0;
  float local_7b4;
  longlong local_7b0;
  ulonglong *local_7a8;
  undefined4 local_7a0;
  ulonglong *local_798;
  undefined4 local_790;
  ulonglong *local_788;
  undefined4 local_780;
  undefined8 *local_778;
  undefined4 local_770;
  ulonglong *local_768;
  undefined4 local_760;
  longlong local_758;
  ulonglong uStack_750;
  longlong local_748;
  undefined8 uStack_740;
  longlong local_738;
  undefined8 uStack_730;
  ulonglong *local_720;
  undefined4 local_718;
  ulonglong *local_710;
  undefined4 local_708;
  longlong local_700;
  longlong local_6f8;
  undefined8 local_6f0;
  undefined8 local_6e8;
  undefined8 local_6e0;
  undefined8 *local_6d8;
  undefined1 local_6d0;
  undefined8 local_6cc;
  undefined4 local_6c4;
  undefined1 local_6b8;
  undefined8 local_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined8 local_6a0;
  undefined1 local_698 [4];
  undefined8 local_694;
  undefined4 local_68c;
  undefined1 local_680;
  undefined8 local_678;
  undefined1 local_670 [7];
  undefined1 auStack_669 [4];
  undefined1 auStack_665 [4];
  undefined1 auStack_661 [4];
  byte bStack_65d;
  undefined1 auStack_65c [4];
  ulonglong local_658;
  ulonglong uStack_650;
  undefined8 local_648;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined8 uStack_630;
  ulonglong local_628;
  undefined8 uStack_620;
  undefined8 local_618;
  longlong lStack_610;
  undefined8 local_608;
  undefined1 auStack_600 [4];
  undefined1 local_5fc [4];
  undefined1 auStack_5f8 [4];
  undefined1 auStack_5f4 [4];
  undefined1 auStack_5f0 [8];
  undefined1 auStack_5e8 [8];
  undefined1 auStack_5e0 [8];
  undefined1 auStack_5d8 [8];
  undefined1 auStack_5d0 [12];
  undefined5 uStack_5c4;
  undefined3 uStack_5bf;
  undefined5 uStack_5bc;
  undefined8 uStack_5b7;
  undefined1 local_5a8 [8];
  undefined1 auStack_5a0 [8];
  undefined1 local_598 [4];
  byte bStack_594;
  undefined3 uStack_593;
  uint local_590;
  undefined8 uStack_588;
  undefined8 auStack_508 [4];
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  ulonglong local_4c8;
  ulonglong uStack_4c0;
  ulonglong local_4b8;
  ulonglong uStack_4b0;
  undefined1 local_4a8;
  undefined1 local_4a7;
  longlong local_4a0;
  undefined1 local_498;
  undefined1 local_497;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 auStack_3c8 [13];
  longlong alStack_35d [2];
  undefined4 uStack_34d;
  byte bStack_349;
  longlong local_348 [24];
  ulonglong local_288;
  ulonglong local_280;
  byte local_278;
  undefined4 local_274;
  longlong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined1 uStack_24e;
  undefined1 local_248 [288];
  undefined1 *local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_858;
  fVar1 = *(float *)(DAT_14caf3da0 + 4);
  local_7f0 = *(uint **)(param_1 + 0xa0);
  uVar49 = (ulonglong)(int)local_7f0[0x34];
  local_7d0 = local_7f0 + uVar49 * 0x10;
  uVar50 = uVar49 ^ 1;
  local_800 = (undefined8 *)(uVar50 * 0x40);
  lVar43 = *(longlong *)(local_7f0 + uVar49 * 0x10 + 8);
  local_100 = *(longlong *)(local_7f0 + uVar49 * 0x10 + 10);
  local_118 = *(longlong *)(local_7f0 + 8 + uVar50 * 0x10);
  local_110 = *(undefined8 *)(local_7f0 + 10 + uVar50 * 0x10);
  local_128 = (undefined1 *)0x0;
  local_120 = 0x400000000;
  local_7dc = DAT_14c760da4;
  local_808 = param_1;
  local_7f8 = param_2;
  local_7e0 = param_3;
  local_7b0 = param_4;
  local_108 = lVar43;
  if (1 < DAT_14c760da4) {
    uVar40 = *(uint *)((longlong)param_2 + 0x17c);
    uVar39 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    iVar30 = 0x20;
    if ((uVar40 != 0) && (iVar30 = 0, uVar40 != 0)) {
      for (; (uVar40 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
      }
    }
    uVar42 = 0;
    if (uVar39 != 0) {
      for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
      }
    }
    do {
      uVar49 = local_120;
      if ((uVar40 >> (uVar42 & 0x1f) & 1) == 0) {
        lVar55 = (longlong)(int)local_120;
        uVar18 = (int)local_120 + 1;
        local_120 = CONCAT44(local_120._4_4_,uVar18);
        if (local_120._4_4_ < uVar18) {
          puStack_860 = (undefined *)0x1435d44d8;
          FUN_147c24680(local_248,uVar49 & 0xffffffff);
          param_1 = local_808;
        }
        puVar27 = local_128;
        if (local_128 == (undefined1 *)0x0) {
          puVar27 = local_248;
        }
        *(longlong *)(puVar27 + lVar55 * 0x48) = lVar43;
        if (lVar43 != 0) {
          LOCK();
          *(int *)(lVar43 + 8) = *(int *)(lVar43 + 8) + 1;
          UNLOCK();
        }
        *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x18) = 0;
        *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x20) = 0;
        *(undefined8 *)(puVar27 + lVar55 * 0x48 + 8) = 0;
        *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x10) = 0;
        *(int *)(puVar27 + lVar55 * 0x48 + 0x28) = iVar30;
        *(uint *)(puVar27 + lVar55 * 0x48 + 0x2c) = uVar42;
        *(undefined2 *)(puVar27 + lVar55 * 0x48 + 0x30) = 0;
        *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x38) = 0;
        *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x40) = 0;
      }
      lVar55 = local_100;
      uVar39 = uVar39 & ~(1 << ((byte)uVar42 & 0x1f));
      if (uVar39 == 0) {
        uVar42 = 0x20;
      }
      else {
        uVar42 = 0;
        if (uVar39 != 0) {
          for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
          }
        }
      }
    } while (uVar39 != 0);
    if (DAT_14c760da4 != 0) {
      uVar40 = *(uint *)((longlong)local_7f8 + 0x17c);
      uVar39 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      iVar30 = 0x20;
      if ((uVar40 != 0) && (iVar30 = 0, uVar40 != 0)) {
        for (; (uVar40 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
        }
      }
      uVar42 = 0;
      if (uVar39 != 0) {
        for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
        }
      }
      do {
        uVar49 = local_120;
        if ((uVar40 >> (uVar42 & 0x1f) & 1) == 0) {
          lVar43 = (longlong)(int)local_120;
          uVar18 = (int)local_120 + 1;
          local_120 = CONCAT44(local_120._4_4_,uVar18);
          if (local_120._4_4_ < uVar18) {
            puStack_860 = (undefined *)0x1435d6440;
            FUN_147c24680(local_248,uVar49 & 0xffffffff);
            param_1 = local_808;
          }
          puVar27 = local_128;
          if (local_128 == (undefined1 *)0x0) {
            puVar27 = local_248;
          }
          *(longlong *)(puVar27 + lVar43 * 0x48) = lVar55;
          if (lVar55 != 0) {
            LOCK();
            *(int *)(lVar55 + 8) = *(int *)(lVar55 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(puVar27 + lVar43 * 0x48 + 0x18) = 0;
          *(undefined8 *)(puVar27 + lVar43 * 0x48 + 0x20) = 0;
          *(undefined8 *)(puVar27 + lVar43 * 0x48 + 8) = 0;
          *(undefined8 *)(puVar27 + lVar43 * 0x48 + 0x10) = 0;
          *(int *)(puVar27 + lVar43 * 0x48 + 0x28) = iVar30;
          *(uint *)(puVar27 + lVar43 * 0x48 + 0x2c) = uVar42;
          *(undefined2 *)(puVar27 + lVar43 * 0x48 + 0x30) = 0;
          *(undefined8 *)(puVar27 + lVar43 * 0x48 + 0x38) = 0;
          *(undefined8 *)(puVar27 + lVar43 * 0x48 + 0x40) = 0;
        }
        uVar39 = uVar39 & ~(1 << ((byte)uVar42 & 0x1f));
        if (uVar39 == 0) {
          uVar42 = 0x20;
        }
        else {
          uVar42 = 0;
          if (uVar39 != 0) {
            for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
            }
          }
        }
      } while (uVar39 != 0);
    }
  }
  puVar44 = local_7f8;
  lVar43 = (longlong)local_7f0 + (longlong)local_800;
  if ((char)local_7d0[0xc] == '\0') {
    uVar39 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar40 = *(uint *)((longlong)local_7f8 + 0x17c);
    if (uVar40 != uVar39) {
      *(uint *)((longlong)local_7f8 + 0x17c) = uVar39;
      puVar21 = (undefined8 *)(*local_7f8 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 3;
      if ((undefined8 *)local_7f8[1] < puVar33) {
        puStack_860 = (undefined *)0x1435d4555;
        FUN_140023dd8(local_7f8,0x20);
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 3;
      }
      *puVar44 = (ulonglong)puVar33;
      *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
      *(undefined8 **)puVar44[6] = puVar21;
      puVar44[6] = (ulonglong)(puVar21 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar44 + 0x17c);
      puVar21[1] = 0;
      *puVar21 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar21 + 2) = uVar9;
    }
    puStack_860 = (undefined *)0x1435d45b9;
    FUN_147c106f2(local_348,2,&local_108,9);
    pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
    pwVar25 = pwVar46 + 0x1f;
    if ((wchar_t *)puVar44[1] < pwVar25) {
      puStack_860 = (undefined *)0x1435d45dc;
      FUN_140023dd8(puVar44,0x40);
      pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
      pwVar25 = pwVar46 + 0x1f;
    }
    *puVar44 = (ulonglong)pwVar25;
    puStack_860 = (undefined *)0x1435d45ff;
    wcscpy(pwVar46,L"GPUParticlesClearStateTextures");
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 0x23;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d4626;
      FUN_140023dd8(puVar44,0x120);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 0x23;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a217b50;
    puStack_860 = (undefined *)0x1435d467f;
    memcpy(puVar21 + 2,local_348,0xe8);
    puVar21[0x1f] = local_260;
    if (local_260 != 0) {
      LOCK();
      *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)puVar21 + 0x107) =
         CONCAT13(uStack_24e,CONCAT12(uStack_24f,CONCAT11(uStack_250,uStack_254._3_1_)));
    puVar21[0x20] = CONCAT44(uStack_254,local_258);
    puVar21[0x22] = pwVar46;
    lVar55 = 0x11;
    do {
      *(undefined8 *)(local_670 + lVar55 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar55) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar55 + 3) = 0;
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0xd1);
    _local_598 = _local_598 & 0xffffff0000000000;
    lVar55 = 0xd9;
    do {
      *(undefined8 *)(local_670 + lVar55 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar55) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar55 + 3) = 0;
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0x199);
    local_4d0._0_1_ = 0;
    local_4a0 = 0;
    local_497 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4a8 = 0;
    lVar55 = 0x15;
    do {
      if (*(longlong *)((longlong)alStack_35d + lVar55) == 0) break;
      *(longlong *)(local_670 + lVar55 + 3) = *(longlong *)((longlong)alStack_35d + lVar55);
      bVar29 = *(byte *)((longlong)local_348 + lVar55);
      bVar34 = bVar29 >> 2;
      auStack_65c[lVar55 + -1] = bVar34;
      auStack_65c[lVar55] = bVar29 & 3;
      *(undefined4 *)(auStack_661 + lVar55) = *(undefined4 *)((longlong)&uStack_34d + lVar55);
      *(uint *)(auStack_665 + lVar55) = (uint)(&bStack_349)[lVar55];
      _local_598 = CONCAT14(bStack_594 | bVar34 == 2,(int)local_598 + 1);
      lVar23 = *(longlong *)((longlong)alStack_35d + lVar55 + 8);
      if (lVar23 != 0) {
        local_4d0._0_1_ = 1;
        uVar11 = *(undefined8 *)(auStack_665 + lVar55);
        *(undefined8 *)(local_5a8 + lVar55 + 3) = *(undefined8 *)(local_670 + lVar55 + 3);
        *(undefined8 *)(auStack_5a0 + lVar55 + 3) = uVar11;
        *(undefined8 *)(local_598 + lVar55 + 3) = *(undefined8 *)(auStack_65c + lVar55 + -1);
        *(longlong *)(local_5a8 + lVar55 + 3) = lVar23;
      }
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0xd5);
    uVar17 = uStack_24f;
    lVar55 = local_260;
    local_4c8 = local_288;
    uStack_4c0 = CONCAT44(local_274,
                          CONCAT13(local_278,
                                   CONCAT12(local_278 >> 2,CONCAT11(local_278 >> 4,local_278 >> 6)))
                         ) & 0xffffffff030303ff;
    local_4a8 = local_278 >> 6 == 2;
    local_4a7 = (local_278 >> 2 & 3) == 2;
    if ((local_280 != 0) && (local_280 != local_288)) {
      uStack_4b0 = uStack_4c0;
      local_4b8 = local_280;
    }
    local_4a0 = local_260;
    local_498 = (undefined1)local_258;
    local_497 = uStack_24f;
    auVar16 = local_598;
    if (0 < (longlong)(int)local_598) {
      puStack_860 = (undefined *)0x1435d48fe;
      memcpy(puVar44 + 0x15,&local_658,(longlong)(int)local_598 * 0x18);
    }
    *(undefined1 (*) [4])(puVar44 + 0x14) = auVar16;
    puVar44[0x2d] = local_4c8;
    puVar44[0x2e] = uStack_4c0;
    bVar34 = *(byte *)((longlong)puVar44 + 0x17b) & 0xfe | lVar55 != 0;
    *(undefined1 *)((longlong)puVar44 + 0x17a) = uVar17;
    *(undefined1 *)(puVar44 + 0x2f) = uStack_24e;
    *(undefined1 *)((longlong)puVar44 + 0x179) = 0;
    bVar29 = bVar34 | 2;
    *(byte *)((longlong)puVar44 + 0x17b) = bVar29;
    if (uStack_254 != 0) {
      *(byte *)((longlong)puVar44 + 0x17b) = bVar34 | 10;
      puStack_860 = (undefined *)0x1435d497e;
      (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,puVar44,1);
      bVar29 = *(byte *)((longlong)puVar44 + 0x17b);
    }
    if ((bVar29 & 8) != 0) {
      puStack_860 = (undefined *)0x1435d82b2;
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,puVar44,1);
      *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xf7;
    }
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 2;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d83a0;
      FUN_140023dd8(puVar44,0x18);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 2;
    }
    lVar55 = local_260;
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xfd;
    *(undefined2 *)(puVar44 + 0x2f) = 0;
    *(undefined1 *)(local_7d0 + 0xc) = 1;
    if (local_260 != 0) {
      LOCK();
      puVar32 = (uint *)(local_260 + 8);
      uVar39 = *puVar32;
      *puVar32 = *puVar32 - 1;
      UNLOCK();
      if ((uVar39 & 0x3fffffff) == 1) {
        puVar32 = (uint *)(local_260 + 8);
        LOCK();
        uVar39 = *puVar32;
        *puVar32 = *puVar32 | 0x40000000;
        UNLOCK();
        if ((uVar39 >> 0x1e & 1) == 0) {
          bVar29 = *(byte *)(local_260 + 0xd);
          puStack_860 = (undefined *)0x1435d4a3a;
          plVar22 = (longlong *)FUN_14001cc68(0x10,8);
          plVar22[1] = lVar55;
          plVar28 = DAT_14ca843c0;
          plVar26 = DAT_14ca843c8;
          if ((bVar29 & 2) == 0) {
            do {
              *plVar22 = (longlong)plVar28;
              LOCK();
              bVar56 = plVar28 != DAT_14ca843c0;
              plVar26 = plVar22;
              if (bVar56) {
                plVar28 = DAT_14ca843c0;
                plVar26 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar26;
              UNLOCK();
            } while (bVar56);
          }
          else {
            do {
              *plVar22 = (longlong)plVar26;
              LOCK();
              bVar56 = plVar26 != DAT_14ca843c8;
              plVar28 = plVar22;
              if (bVar56) {
                plVar26 = DAT_14ca843c8;
                plVar28 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar28;
              UNLOCK();
            } while (bVar56);
          }
        }
      }
    }
    param_1 = local_808;
    if (*(uint *)((longlong)puVar44 + 0x17c) != uVar40) {
      *(uint *)((longlong)puVar44 + 0x17c) = uVar40;
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 3;
      if ((undefined8 *)puVar44[1] < puVar33) {
        puStack_860 = (undefined *)0x1435d4a9b;
        FUN_140023dd8(puVar44,0x20);
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 3;
      }
      *puVar44 = (ulonglong)puVar33;
      *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
      *(undefined8 **)puVar44[6] = puVar21;
      puVar44[6] = (ulonglong)(puVar21 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar44 + 0x17c);
      puVar21[1] = 0;
      *puVar21 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar21 + 2) = uVar9;
      param_1 = local_808;
    }
  }
  if (*(char *)(lVar43 + 0x30) == '\0') {
    uVar39 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uVar40 = *(uint *)((longlong)puVar44 + 0x17c);
    if (uVar40 != uVar39) {
      *(uint *)((longlong)puVar44 + 0x17c) = uVar39;
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 3;
      if ((undefined8 *)puVar44[1] < puVar33) {
        puStack_860 = (undefined *)0x1435d4b3d;
        FUN_140023dd8(puVar44,0x20);
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 3;
      }
      *puVar44 = (ulonglong)puVar33;
      *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
      *(undefined8 **)puVar44[6] = puVar21;
      puVar44[6] = (ulonglong)(puVar21 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar44 + 0x17c);
      puVar21[1] = 0;
      *puVar21 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar21 + 2) = uVar9;
    }
    local_658 = 0xffffffffffffffff;
    uStack_650 = CONCAT44(uStack_650._4_4_,0xffffffff);
    local_648 = (undefined8 *)local_118;
    uStack_640 = CONCAT31(uStack_640._1_3_,1);
    uStack_63c = 0x70;
    uStack_638 = 0x1000;
    uStack_634 = 0;
    local_628 = local_628 & 0xffffffffffffff00;
    uStack_620 = 0xffffffffffffffff;
    local_618 = CONCAT44(local_618._4_4_,0xffffffff);
    lStack_610 = local_110;
    local_608._0_4_ = CONCAT31(local_608._1_3_,1);
    local_608._4_4_ = 0x70;
    auStack_600 = (undefined1  [4])0x1000;
    _local_5fc = _local_5fc & 0xffffffff00000000;
    _auStack_5f4 = (uint5)(uint)auStack_5f4;
    local_708 = 2;
    puStack_860 = (undefined *)0x1435d4c06;
    local_710 = &local_658;
    FUN_144760590(puVar44,&local_710,0);
    lVar55 = 0x68;
    do {
      if (*(char *)((longlong)&local_658 + lVar55) == '\x01') {
        *(undefined1 *)((longlong)&local_658 + lVar55) = 0;
      }
      lVar55 = lVar55 + -0x38;
    } while (lVar55 != -8);
    puStack_860 = (undefined *)0x1435d4c44;
    FUN_147c106f2(local_348,2,&local_118,9);
    pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
    pwVar25 = pwVar46 + 0x27;
    if ((wchar_t *)puVar44[1] < pwVar25) {
      puStack_860 = (undefined *)0x1435d4c67;
      FUN_140023dd8(puVar44,0x50);
      pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
      pwVar25 = pwVar46 + 0x27;
    }
    *puVar44 = (ulonglong)pwVar25;
    puStack_860 = (undefined *)0x1435d4c8a;
    wcscpy(pwVar46,L"GPUParticlesClearPreviousStateTextures");
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 0x23;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d4cb1;
      FUN_140023dd8(puVar44,0x120);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 0x23;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a217b50;
    puStack_860 = (undefined *)0x1435d4d0a;
    memcpy(puVar21 + 2,local_348,0xe8);
    puVar44 = local_7f8;
    puVar21[0x1f] = local_260;
    if (local_260 != 0) {
      LOCK();
      *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)puVar21 + 0x107) =
         CONCAT13(uStack_24e,CONCAT12(uStack_24f,CONCAT11(uStack_250,uStack_254._3_1_)));
    puVar21[0x20] = CONCAT44(uStack_254,local_258);
    puVar21[0x22] = pwVar46;
    lVar55 = 0x11;
    do {
      *(undefined8 *)(local_670 + lVar55 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar55) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar55 + 3) = 0;
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0xd1);
    _local_598 = _local_598 & 0xffffff0000000000;
    lVar55 = 0xd9;
    do {
      *(undefined8 *)(local_670 + lVar55 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar55) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar55 + 3) = 0;
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0x199);
    local_4d0._0_1_ = 0;
    local_4a0 = 0;
    local_497 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4a8 = 0;
    lVar55 = 0x15;
    do {
      if (*(longlong *)((longlong)alStack_35d + lVar55) == 0) break;
      *(longlong *)(local_670 + lVar55 + 3) = *(longlong *)((longlong)alStack_35d + lVar55);
      bVar29 = *(byte *)((longlong)local_348 + lVar55);
      bVar34 = bVar29 >> 2;
      auStack_65c[lVar55 + -1] = bVar34;
      auStack_65c[lVar55] = bVar29 & 3;
      *(undefined4 *)(auStack_661 + lVar55) = *(undefined4 *)((longlong)&uStack_34d + lVar55);
      *(uint *)(auStack_665 + lVar55) = (uint)(&bStack_349)[lVar55];
      _local_598 = CONCAT14(bStack_594 | bVar34 == 2,(int)local_598 + 1);
      lVar23 = *(longlong *)((longlong)alStack_35d + lVar55 + 8);
      if (lVar23 != 0) {
        local_4d0._0_1_ = 1;
        uVar11 = *(undefined8 *)(auStack_665 + lVar55);
        *(undefined8 *)(local_5a8 + lVar55 + 3) = *(undefined8 *)(local_670 + lVar55 + 3);
        *(undefined8 *)(auStack_5a0 + lVar55 + 3) = uVar11;
        *(undefined8 *)(local_598 + lVar55 + 3) = *(undefined8 *)(auStack_65c + lVar55 + -1);
        *(longlong *)(local_5a8 + lVar55 + 3) = lVar23;
      }
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0xd5);
    uVar17 = uStack_24f;
    lVar55 = local_260;
    local_4c8 = local_288;
    uStack_4c0 = CONCAT44(local_274,
                          CONCAT13(local_278,
                                   CONCAT12(local_278 >> 2,CONCAT11(local_278 >> 4,local_278 >> 6)))
                         ) & 0xffffffff030303ff;
    local_4a8 = local_278 >> 6 == 2;
    local_4a7 = (local_278 >> 2 & 3) == 2;
    if ((local_280 != 0) && (local_280 != local_288)) {
      uStack_4b0 = uStack_4c0;
      local_4b8 = local_280;
    }
    local_4a0 = local_260;
    local_498 = (undefined1)local_258;
    local_497 = uStack_24f;
    auVar16 = local_598;
    if (0 < (longlong)(int)local_598) {
      puStack_860 = (undefined *)0x1435d4f8d;
      memcpy(local_7f8 + 0x15,&local_658,(longlong)(int)local_598 * 0x18);
    }
    *(undefined1 (*) [4])(puVar44 + 0x14) = auVar16;
    puVar44[0x2d] = local_4c8;
    puVar44[0x2e] = uStack_4c0;
    bVar34 = *(byte *)((longlong)puVar44 + 0x17b) & 0xfe | lVar55 != 0;
    *(undefined1 *)((longlong)puVar44 + 0x17a) = uVar17;
    *(undefined1 *)(puVar44 + 0x2f) = uStack_24e;
    *(undefined1 *)((longlong)puVar44 + 0x179) = 0;
    bVar29 = bVar34 | 2;
    *(byte *)((longlong)puVar44 + 0x17b) = bVar29;
    if (uStack_254 != 0) {
      *(byte *)((longlong)puVar44 + 0x17b) = bVar34 | 10;
      puStack_860 = (undefined *)0x1435d5008;
      (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,puVar44,1);
      bVar29 = *(byte *)((longlong)puVar44 + 0x17b);
    }
    if ((bVar29 & 8) != 0) {
      puStack_860 = (undefined *)0x1435d82de;
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,puVar44,1);
      *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xf7;
    }
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 2;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d83c7;
      FUN_140023dd8(puVar44,0x18);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 2;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xfd;
    *(undefined2 *)(puVar44 + 0x2f) = 0;
    local_658 = 0xffffffffffffffff;
    uStack_650 = CONCAT44(uStack_650._4_4_,0xffffffff);
    local_648 = (undefined8 *)local_118;
    uStack_640 = CONCAT31(uStack_640._1_3_,1);
    uStack_63c = 0x1000;
    uStack_638 = 0x70;
    uStack_634 = 0;
    local_628 = local_628 & 0xffffffffffffff00;
    uStack_620 = 0xffffffffffffffff;
    local_618 = CONCAT44(local_618._4_4_,0xffffffff);
    lStack_610 = local_110;
    local_608._0_4_ = CONCAT31(local_608._1_3_,1);
    local_608._4_4_ = 0x1000;
    auStack_600 = (undefined1  [4])0x70;
    _local_5fc = _local_5fc & 0xffffffff00000000;
    _auStack_5f4 = (uint5)(uint)auStack_5f4;
    local_718 = 2;
    puStack_860 = (undefined *)0x1435d511f;
    local_720 = &local_658;
    FUN_144760590(puVar44,&local_720,0);
    lVar55 = local_260;
    lVar23 = 0x68;
    do {
      if (*(char *)((longlong)&local_658 + lVar23) == '\x01') {
        *(undefined1 *)((longlong)&local_658 + lVar23) = 0;
      }
      lVar23 = lVar23 + -0x38;
    } while (lVar23 != -8);
    *(undefined1 *)(lVar43 + 0x30) = 1;
    if (local_260 != 0) {
      LOCK();
      puVar32 = (uint *)(local_260 + 8);
      uVar39 = *puVar32;
      *puVar32 = *puVar32 - 1;
      UNLOCK();
      if ((uVar39 & 0x3fffffff) == 1) {
        puVar32 = (uint *)(local_260 + 8);
        LOCK();
        uVar39 = *puVar32;
        *puVar32 = *puVar32 | 0x40000000;
        UNLOCK();
        if ((uVar39 >> 0x1e & 1) == 0) {
          bVar29 = *(byte *)(local_260 + 0xd);
          puStack_860 = (undefined *)0x1435d5188;
          plVar22 = (longlong *)FUN_14001cc68(0x10,8);
          plVar22[1] = lVar55;
          plVar28 = DAT_14ca843c0;
          plVar26 = DAT_14ca843c8;
          if ((bVar29 & 2) == 0) {
            do {
              *plVar22 = (longlong)plVar28;
              LOCK();
              bVar56 = plVar28 != DAT_14ca843c0;
              plVar26 = plVar22;
              if (bVar56) {
                plVar28 = DAT_14ca843c0;
                plVar26 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar26;
              UNLOCK();
            } while (bVar56);
          }
          else {
            do {
              *plVar22 = (longlong)plVar26;
              LOCK();
              bVar56 = plVar26 != DAT_14ca843c8;
              plVar28 = plVar22;
              if (bVar56) {
                plVar26 = DAT_14ca843c8;
                plVar28 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar28;
              UNLOCK();
            } while (bVar56);
          }
        }
      }
    }
    param_1 = local_808;
    if (*(uint *)((longlong)puVar44 + 0x17c) != uVar40) {
      *(uint *)((longlong)puVar44 + 0x17c) = uVar40;
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 3;
      if ((undefined8 *)puVar44[1] < puVar33) {
        puStack_860 = (undefined *)0x1435d51e5;
        FUN_140023dd8(puVar44,0x20);
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 3;
      }
      *puVar44 = (ulonglong)puVar33;
      *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
      *(undefined8 **)puVar44[6] = puVar21;
      puVar44[6] = (ulonglong)(puVar21 + 1);
      uVar9 = *(undefined4 *)((longlong)puVar44 + 0x17c);
      puVar21[1] = 0;
      *puVar21 = &PTR_FUN_14a1fb2c0;
      *(undefined4 *)(puVar21 + 2) = uVar9;
      param_1 = local_808;
    }
  }
  if (*(int *)(param_1 + 0x8c) < *(int *)(param_1 + 0x60)) {
    puStack_860 = (undefined *)0x1435d524c;
    FUN_147c107b4(&local_658);
    lVar43 = 0x29c;
    do {
      *(undefined4 *)((longlong)auStack_1058 + (lVar43 + 4) * 4) = DAT_14c846280;
      *(undefined4 *)((longlong)auStack_1058 + (lVar43 + 5) * 4) = DAT_14c846284;
      *(undefined4 *)((longlong)auStack_1058 + (lVar43 + 6) * 4) = DAT_14c846288;
      *(undefined4 *)((longlong)auStack_1058 + (lVar43 + 7) * 4) = DAT_14c84628c;
      *(undefined4 *)((longlong)auStack_1058 + lVar43 * 4) = DAT_14c846270;
      *(undefined4 *)((longlong)auStack_1058 + (lVar43 + 1) * 4) = DAT_14c846274;
      *(undefined4 *)((longlong)auStack_1058 + (lVar43 + 2) * 4) = DAT_14c846278;
      *(undefined4 *)((longlong)auStack_1058 + (lVar43 + 3) * 4) = DAT_14c84627c;
      *(undefined8 *)((longlong)auStack_1058 + (lVar43 + -4) * 4) = _DAT_14c846260;
      *(undefined8 *)((longlong)auStack_1058 + (lVar43 + -2) * 4) = _DAT_14c846268;
      *(undefined8 *)((longlong)auStack_1078 + lVar43 * 4) = _DAT_14c846250;
      *(undefined8 *)((longlong)auStack_1058 + (lVar43 + -6) * 4) = DAT_14c846258;
      *(undefined8 *)((longlong)auStack_f78 + lVar43 * 4) = _DAT_14c846250;
      *(undefined8 *)((longlong)auStack_f58 + (lVar43 + -6) * 4) = DAT_14c846258;
      *(undefined8 *)((longlong)auStack_f58 + (lVar43 + -4) * 4) = _DAT_14c846260;
      *(undefined8 *)((longlong)auStack_f58 + (lVar43 + -2) * 4) = _DAT_14c846268;
      *(undefined4 *)((longlong)auStack_f58 + lVar43 * 4) = DAT_14c846270;
      *(undefined4 *)((longlong)auStack_f58 + (lVar43 + 1) * 4) = DAT_14c846274;
      *(undefined4 *)((longlong)auStack_f58 + (lVar43 + 2) * 4) = DAT_14c846278;
      *(undefined4 *)((longlong)auStack_f58 + (lVar43 + 3) * 4) = DAT_14c84627c;
      *(undefined4 *)((longlong)auStack_f58 + (lVar43 + 4) * 4) = DAT_14c846280;
      *(undefined4 *)((longlong)auStack_f58 + (lVar43 + 5) * 4) = DAT_14c846284;
      *(undefined4 *)((longlong)auStack_f58 + (lVar43 + 6) * 4) = DAT_14c846288;
      *(undefined4 *)((longlong)auStack_f58 + (lVar43 + 7) * 4) = DAT_14c84628c;
      *(undefined8 *)(auStack_665 + lVar43 + 1) = 0x3f800000;
      *(undefined8 *)(auStack_65c + lVar43) = 0x3f80000000000000;
      *(undefined4 *)((longlong)&uStack_6a4 + lVar43) = 0;
      *(undefined4 *)(local_698 + lVar43 + -8) = 0;
      *(undefined4 *)(local_698 + lVar43 + -4) = 0;
      *(undefined4 *)(local_698 + lVar43) = 0x3f800000;
      lVar43 = lVar43 + 0x10;
    } while (lVar43 != 0x2dc);
    local_658 = local_658 & 0xffffffff00000000;
    puStack_860 = (undefined *)0x1435d52f5;
    FUN_1435d85d4(local_348);
    local_7c8 = local_348[0];
    param_1 = local_808;
  }
  else {
    local_7c8 = 0;
  }
  local_738 = 0;
  uStack_730 = 0;
  local_748 = 0;
  uStack_740 = 0;
  puVar44 = (ulonglong *)(param_1 + 0x68);
  local_758 = 0;
  uStack_750 = 0;
  iVar30 = *(int *)(param_1 + 0x80);
  uVar50 = 1;
  uVar49 = 0;
  iVar48 = 0;
  iVar54 = 0;
  local_7d8 = puVar44;
  if (iVar30 != 0) {
    puVar31 = *(ulonglong **)(param_1 + 0x78);
    if (*(ulonglong **)(param_1 + 0x78) == (ulonglong *)0x0) {
      puVar31 = puVar44;
    }
    uVar40 = (uint)*puVar31;
    if (uVar40 == 0) {
      iVar54 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar54 = iVar30 + -1;
      }
      uVar49 = 0;
      uVar50 = (ulonglong)(uint)(iVar54 >> 5);
      if (iVar54 >> 5 < 1) {
        uVar50 = uVar49;
      }
      iVar48 = 0;
      do {
        if (uVar50 == uVar49) goto LAB_1435d54df;
        iVar48 = iVar48 + 0x20;
        uVar40 = *(uint *)((longlong)puVar31 + uVar49 * 4 + 4);
        uVar49 = uVar49 + 1;
      } while (uVar40 == 0);
    }
    else {
      uVar49 = 0;
      iVar48 = 0;
    }
    uVar50 = (ulonglong)(-uVar40 & uVar40);
    uVar53 = uVar50 * 2 + 1;
    lVar43 = 0x3f;
    if (uVar53 != 0) {
      for (; uVar53 >> lVar43 == 0; lVar43 = lVar43 + -1) {
      }
    }
    iVar54 = (iVar48 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
    if (iVar30 <= iVar54) {
      iVar54 = iVar30;
    }
  }
  if (iVar54 < iVar30) {
    puVar31 = *(ulonglong **)(param_1 + 0x78);
    if (*(ulonglong **)(param_1 + 0x78) == (ulonglong *)0x0) {
      puVar31 = puVar44;
    }
    iVar51 = iVar30 + 0x1e;
    if (-1 < iVar30 + -1) {
      iVar51 = iVar30 + -1;
    }
    iVar51 = iVar51 >> 5;
    uVar40 = 0xffffffff;
    iVar35 = 0;
    iVar47 = 0;
    iVar45 = 0;
    do {
      lVar43 = *(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar54 * 8);
      if (((*(int *)(lVar43 + 0x304) == local_7e0) && (0 < *(int *)(lVar43 + 0x28))) &&
         (*(char *)(lVar43 + 0x313) == '\x01')) {
        iVar35 = iVar35 + 1;
        iVar47 = iVar47 + *(int *)(lVar43 + 0xe0);
        iVar45 = iVar45 + *(int *)(lVar43 + 0xd0);
      }
      uVar40 = uVar40 & ~(uint)uVar50;
      iVar54 = (int)uVar49;
      lVar43 = (longlong)iVar54;
      uVar39 = *(uint *)((longlong)puVar31 + lVar43 * 4) & uVar40;
      if (uVar39 == 0) {
        iVar41 = iVar51;
        if (iVar51 < iVar54) {
          iVar41 = iVar54;
        }
        if (iVar51 <= iVar54) break;
        lVar55 = 0;
        while( true ) {
          iVar48 = iVar48 + 0x20;
          uVar39 = *(uint *)((longlong)puVar31 + lVar55 * 4 + lVar43 * 4 + 4);
          if (uVar39 != 0) break;
          lVar55 = lVar55 + 1;
          if (iVar41 - lVar43 == lVar55) goto LAB_1435d54bb;
        }
        uVar49 = (ulonglong)(iVar54 + (int)lVar55 + 1);
        uVar40 = 0xffffffff;
      }
      uVar50 = (ulonglong)(-uVar39 & uVar39);
      uVar53 = uVar50 * 2 + 1;
      lVar43 = 0x3f;
      if (uVar53 != 0) {
        for (; uVar53 >> lVar43 == 0; lVar43 = lVar43 + -1) {
        }
      }
      iVar54 = (iVar48 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
    } while (iVar54 < iVar30);
LAB_1435d54bb:
    puStack_860 = (undefined *)0x1435d54c8;
    FUN_147c10824(&local_738,iVar35);
    puVar44 = local_7d8;
    if (iVar47 < 0) {
                    /* WARNING: Subroutine does not return */
      puStack_860 = (undefined *)0x1435d844d;
      FUN_1456afac4(iVar47);
    }
  }
  else {
LAB_1435d54df:
    iVar47 = 0;
    puStack_860 = (undefined *)0x1435d54f0;
    FUN_147c10824(&local_738,0);
    iVar45 = 0;
  }
  uVar49 = uStack_740 >> 0x20;
  uStack_740 = uStack_740 & 0xffffffff00000000;
  if ((int)uVar49 != iVar47) {
    puStack_860 = (undefined *)0x1435d551a;
    FUN_14480809c(&local_748,iVar47);
  }
  if (iVar45 < 0) {
                    /* WARNING: Subroutine does not return */
    puStack_860 = (undefined *)0x1435d8393;
    FUN_1456afac4(iVar45);
  }
  uVar49 = uStack_750 >> 0x20;
  uStack_750 = uStack_750 & 0xffffffff00000000;
  if ((int)uVar49 != iVar45) {
    puStack_860 = (undefined *)0x1435d554a;
    FUN_147c26560(&local_758,iVar45);
  }
  iVar30 = *(int *)(local_808 + 0x80);
  lVar43 = local_808;
  local_7b4 = fVar1;
  if (iVar30 == 0) {
    uVar53 = 1;
    uVar49 = 0;
    iVar54 = 0;
    iVar48 = 0;
  }
  else {
    puVar31 = *(ulonglong **)(local_808 + 0x78);
    if (*(ulonglong **)(local_808 + 0x78) == (ulonglong *)0x0) {
      puVar31 = puVar44;
    }
    uVar40 = (uint)*puVar31;
    if (uVar40 == 0) {
      iVar54 = iVar30 + 0x1e;
      if (-1 < iVar30 + -1) {
        iVar54 = iVar30 + -1;
      }
      uVar49 = 0;
      uVar50 = (ulonglong)(uint)(iVar54 >> 5);
      if (iVar54 >> 5 < 1) {
        uVar50 = uVar49;
      }
      iVar54 = 0;
      do {
        if (uVar50 == uVar49) goto LAB_1435d5d88;
        iVar54 = iVar54 + 0x20;
        uVar40 = *(uint *)((longlong)puVar31 + uVar49 * 4 + 4);
        uVar49 = uVar49 + 1;
      } while (uVar40 == 0);
    }
    else {
      uVar49 = 0;
      iVar54 = 0;
    }
    uVar53 = (ulonglong)(-uVar40 & uVar40);
    uVar50 = uVar53 * 2 + 1;
    lVar55 = 0x3f;
    if (uVar50 != 0) {
      for (; uVar50 >> lVar55 == 0; lVar55 = lVar55 + -1) {
      }
    }
    iVar48 = (iVar54 - ((uint)lVar55 ^ 0x3f)) + 0x3e;
    if (iVar30 <= iVar48) {
      iVar48 = iVar30;
    }
  }
  if (iVar48 < iVar30) {
    local_7f0 = (uint *)(local_808 + 0x30);
    uVar40 = 0xffffffff;
    do {
      uVar50 = uStack_730;
      lVar55 = *(longlong *)(*(longlong *)(lVar43 + 0x58) + (longlong)iVar48 * 8);
      if (((*(int *)(lVar55 + 0x304) == local_7e0) && (iVar48 = *(int *)(lVar55 + 0x28), 0 < iVar48)
          ) && (*(char *)(lVar55 + 0x313) == '\x01')) {
        local_7c0 = CONCAT44(local_7c0._4_4_,iVar54);
        uVar11 = *(undefined8 *)(lVar55 + 0x20);
        plVar28 = *(longlong **)(lVar55 + 0x38);
        lVar43 = (longlong)(int)uStack_730;
        uVar39 = (int)uStack_730 + 1;
        uStack_730 = CONCAT44(uStack_730._4_4_,uVar39);
        if (uStack_730._4_4_ < uVar39) {
          puStack_860 = (undefined *)0x1435d571c;
          FUN_147c28940(&local_738,uVar50 & 0xffffffff);
          iVar48 = *(int *)(lVar55 + 0x28);
        }
        lVar43 = lVar43 * 0xa0;
        uVar10 = *(undefined8 *)(lVar55 + 0x18);
        *(undefined8 *)(local_738 + lVar43) = uVar11;
        *(undefined8 *)(local_738 + 8 + lVar43) = uVar10;
        lVar23 = *plVar28;
        *(longlong *)(local_738 + 0x10 + lVar43) = lVar23;
        if (lVar23 != 0) {
          LOCK();
          *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
          UNLOCK();
        }
        local_800 = (undefined8 *)(local_738 + lVar43);
        puVar33 = (undefined8 *)(lVar55 + 0x40);
        puVar21 = local_800 + 4;
        for (lVar43 = 10; lVar43 != 0; lVar43 = lVar43 + -1) {
          *puVar21 = *puVar33;
          puVar33 = puVar33 + 1;
          puVar21 = puVar21 + 1;
        }
        local_800[0xe] = local_7c8;
        if (local_7c8 != 0) {
          LOCK();
          *(int *)(local_7c8 + 8) = *(int *)(local_7c8 + 8) + 1;
          UNLOCK();
        }
        *(int *)(local_800 + 0x13) = iVar48;
        uVar9 = *(undefined4 *)(DAT_14ca94db8 + 0x10);
        uVar12 = *(undefined4 *)(DAT_14ca94db8 + 0x14);
        *(undefined4 *)(local_800 + 0xf) = uVar9;
        *(undefined4 *)((longlong)local_800 + 0x7c) = uVar12;
        *(undefined4 *)(local_800 + 0x10) = uVar9;
        *(undefined4 *)((longlong)local_800 + 0x84) = uVar12;
        *(undefined4 *)(local_800 + 0x11) = uVar9;
        *(undefined4 *)((longlong)local_800 + 0x8c) = uVar12;
        *(undefined4 *)(local_800 + 0x12) = uVar9;
        *(undefined4 *)((longlong)local_800 + 0x94) = uVar12;
        puStack_860 = (undefined *)0x1435d57b8;
        local_7e8 = lVar55;
        FUN_147c107b4(&local_658);
        dVar2 = *(double *)(lVar55 + 0x90);
        dVar3 = *(double *)(lVar55 + 0x98);
        dVar4 = *(double *)(lVar55 + 0xa0);
        dVar5 = *(double *)(lVar55 + 0xa8);
        dVar6 = *(double *)(lVar55 + 0xb0);
        dVar7 = *(double *)(lVar55 + 0xb8);
        local_658 = local_658 & 0xffffffff00000000;
        plVar28 = *(longlong **)(lVar55 + 0xf0);
        if ((plVar28 != (longlong *)0x0) &&
           (*(float *)(lVar55 + 0x2b4) * *(float *)((longlong)plVar28 + 0x24) != 0.0)) {
          puStack_860 = (undefined *)0x1435d5830;
          (**(code **)(*plVar28 + 0x30))(plVar28,local_7f8,*(undefined4 *)(lVar55 + 0x78));
          local_800[0xf] = *(undefined8 *)(*(longlong *)(lVar55 + 0xf0) + 0x10);
          iVar30 = (uint)local_658;
          local_658 = CONCAT44(local_658._4_4_,(uint)local_658 + 1);
          local_838 = (undefined8 *)CONCAT44(local_838._4_4_,iVar30);
          puStack_860 = (undefined *)0x1435d5879;
          FUN_1435d86c8(&local_658,lVar55 + 0xf0,0x3f800000,0xbf800000);
        }
        fVar1 = *(float *)(*(longlong *)(lVar55 + 0x38) + 8);
        if (fVar1 == 0.0) {
LAB_1435d588d:
        }
        else {
          uVar9 = *(undefined4 *)(*(longlong *)(lVar55 + 0x38) + 0xc);
          iVar30 = *(int *)(local_808 + 0x48);
          if (iVar30 == 0) {
            uVar38 = 1;
            uVar50 = 0;
            iVar54 = 0;
            iVar48 = 0;
          }
          else {
            puVar32 = *(uint **)(local_808 + 0x40);
            if (*(uint **)(local_808 + 0x40) == (uint *)0x0) {
              puVar32 = local_7f0;
            }
            uVar39 = *puVar32;
            if (uVar39 == 0) {
              iVar54 = iVar30 + 0x1e;
              if (-1 < iVar30 + -1) {
                iVar54 = iVar30 + -1;
              }
              uVar50 = 0;
              uVar36 = (ulonglong)(uint)(iVar54 >> 5);
              if (iVar54 >> 5 < 1) {
                uVar36 = uVar50;
              }
              iVar54 = 0;
              do {
                if (uVar36 == uVar50) goto LAB_1435d588d;
                iVar54 = iVar54 + 0x20;
                uVar39 = puVar32[uVar50 + 1];
                uVar50 = uVar50 + 1;
              } while (uVar39 == 0);
            }
            else {
              uVar50 = 0;
              iVar54 = 0;
            }
            uVar38 = (ulonglong)(-uVar39 & uVar39);
            uVar36 = uVar38 * 2 + 1;
            lVar43 = 0x3f;
            if (uVar36 != 0) {
              for (; uVar36 >> lVar43 == 0; lVar43 = lVar43 + -1) {
              }
            }
            iVar48 = (iVar54 - ((uint)lVar43 ^ 0x3f)) + 0x3e;
            if (iVar30 <= iVar48) {
              iVar48 = iVar30;
            }
          }
          if ((int)(uint)local_658 < 4 && iVar48 < iVar30) {
            uVar39 = 0xffffffff;
            lVar43 = local_808;
            do {
              plVar28 = *(longlong **)(*(longlong *)(lVar43 + 0x20) + (longlong)iVar48 * 8);
              if ((((((dVar2 < (double)plVar28[4] || dVar2 == (double)plVar28[4]) &&
                     ((double)plVar28[1] <= dVar5)) &&
                    (dVar3 < (double)plVar28[5] || dVar3 == (double)plVar28[5])) &&
                   (((double)plVar28[2] <= dVar6 &&
                    (dVar4 < (double)plVar28[6] || dVar4 == (double)plVar28[6])))) &&
                  ((double)plVar28[3] <= dVar7)) &&
                 (*(float *)(*plVar28 + 0x24) * *(float *)((longlong)plVar28 + 0x1c4) != 0.0)) {
                local_800[(longlong)(int)(uint)local_658 + 0xf] = *(undefined8 *)(*plVar28 + 0x10);
                iVar30 = (uint)local_658;
                local_658 = CONCAT44(local_658._4_4_,(uint)local_658 + 1);
                local_838 = (undefined8 *)CONCAT44(local_838._4_4_,iVar30);
                puStack_860 = (undefined *)0x1435d59ec;
                FUN_1435d86c8(&local_658,plVar28,fVar1,uVar9);
                iVar30 = *(int *)(local_808 + 0x48);
                lVar43 = local_808;
              }
              uVar39 = uVar39 & ~(uint)uVar38;
              puVar32 = *(uint **)(lVar43 + 0x40);
              if (*(uint **)(lVar43 + 0x40) == (uint *)0x0) {
                puVar32 = local_7f0;
              }
              iVar48 = (int)uVar50;
              lVar55 = (longlong)iVar48;
              uVar42 = puVar32[lVar55] & uVar39;
              if (uVar42 == 0) {
                iVar45 = iVar30 + 0x1e;
                if (-1 < iVar30 + -1) {
                  iVar45 = iVar30 + -1;
                }
                iVar45 = iVar45 >> 5;
                iVar47 = iVar45;
                if (iVar45 < iVar48) {
                  iVar47 = iVar48;
                }
                if (iVar45 <= iVar48) goto LAB_1435d588d;
                lVar23 = 0;
                while( true ) {
                  iVar54 = iVar54 + 0x20;
                  uVar42 = puVar32[lVar55 + lVar23 + 1];
                  if (uVar42 != 0) break;
                  lVar23 = lVar23 + 1;
                  if (iVar47 - lVar55 == lVar23) goto LAB_1435d588d;
                }
                uVar50 = (ulonglong)(iVar48 + (int)lVar23 + 1);
                uVar39 = 0xffffffff;
              }
              uVar38 = (ulonglong)(-uVar42 & uVar42);
              uVar36 = uVar38 * 2 + 1;
              lVar55 = 0x3f;
              if (uVar36 != 0) {
                for (; uVar36 >> lVar55 == 0; lVar55 = lVar55 + -1) {
                }
              }
              iVar48 = (iVar54 - ((uint)lVar55 ^ 0x3f)) + 0x3e;
            } while ((iVar48 < iVar30) && ((int)(uint)local_658 < 4));
          }
        }
        puVar44 = local_7d8;
        lVar43 = local_7e8;
        if (0 < (int)(uint)local_658) {
          if ((uint)local_658 < 4) {
            iVar30 = (uint)local_658 - 1;
            lVar55 = (ulonglong)(uint)local_658 << 4;
            do {
              *(ulonglong *)(auStack_5d8 + lVar55 * 4) = CONCAT44(DAT_14c846284,DAT_14c846280);
              *(ulonglong *)(auStack_5d0 + lVar55 * 4) = CONCAT44(DAT_14c84628c,DAT_14c846288);
              *(ulonglong *)(auStack_5e8 + lVar55 * 4) = CONCAT44(DAT_14c846274,DAT_14c846270);
              *(ulonglong *)(auStack_5e0 + lVar55 * 4) = CONCAT44(DAT_14c84627c,DAT_14c846278);
              *(undefined8 *)(local_5fc + lVar55 * 4 + 4) = _DAT_14c846260;
              *(undefined8 *)(auStack_5f4 + lVar55 * 4 + 4) = _DAT_14c846268;
              *(undefined8 *)(auStack_600 + lVar55 * 4 + -8) = _DAT_14c846250;
              *(undefined8 *)(auStack_600 + lVar55 * 4) = DAT_14c846258;
              *(undefined8 *)((longlong)auStack_508 + lVar55 * 4) = _DAT_14c846250;
              *(undefined8 *)((longlong)auStack_508 + lVar55 * 4 + 8) = DAT_14c846258;
              *(undefined8 *)((longlong)auStack_508 + lVar55 * 4 + 0x10) = _DAT_14c846260;
              *(undefined8 *)((longlong)auStack_508 + lVar55 * 4 + 0x18) = _DAT_14c846268;
              *(ulonglong *)((longlong)&uStack_4e8 + lVar55 * 4) =
                   CONCAT44(DAT_14c846274,DAT_14c846270);
              *(ulonglong *)((longlong)&uStack_4e0 + lVar55 * 4) =
                   CONCAT44(DAT_14c84627c,DAT_14c846278);
              *(ulonglong *)((longlong)&uStack_4d8 + lVar55 * 4) =
                   CONCAT44(DAT_14c846284,DAT_14c846280);
              *(ulonglong *)((longlong)&local_4d0 + lVar55 * 4) =
                   CONCAT44(DAT_14c84628c,DAT_14c846288);
              *(undefined8 *)((longlong)auStack_3c8 + lVar55) = 0x3f800000;
              *(undefined8 *)((longlong)auStack_3c8 + lVar55 + 8) = 0x3f80000000000000;
              *(undefined8 *)((longlong)&uStack_408 + lVar55) = 0;
              *(undefined8 *)((longlong)&uStack_400 + lVar55) = 0x3f80000000000000;
              iVar30 = iVar30 + 1;
              lVar55 = lVar55 + 0x10;
            } while (iVar30 < 3);
          }
          puStack_860 = (undefined *)0x1435d5b70;
          FUN_1435d85d4(local_348,&local_658);
          lVar55 = local_800[0xe];
          local_800[0xe] = local_348[0];
          local_348[0] = 0;
          if (lVar55 != 0) {
            LOCK();
            puVar32 = (uint *)(lVar55 + 8);
            uVar39 = *puVar32;
            *puVar32 = *puVar32 - 1;
            UNLOCK();
            if ((uVar39 & 0x3fffffff) == 1) {
              puVar32 = (uint *)(lVar55 + 8);
              LOCK();
              uVar39 = *puVar32;
              *puVar32 = *puVar32 | 0x40000000;
              UNLOCK();
              if ((uVar39 >> 0x1e & 1) == 0) {
                bVar29 = *(byte *)(lVar55 + 0xd);
                puStack_860 = (undefined *)0x1435d5bcb;
                plVar22 = (longlong *)FUN_14001cc68(0x10,8);
                plVar22[1] = lVar55;
                plVar28 = DAT_14ca843c0;
                plVar26 = DAT_14ca843c8;
                lVar43 = local_7e8;
                if ((bVar29 & 2) == 0) {
                  do {
                    *plVar22 = (longlong)plVar28;
                    LOCK();
                    bVar56 = plVar28 != DAT_14ca843c0;
                    plVar26 = plVar22;
                    if (bVar56) {
                      plVar28 = DAT_14ca843c0;
                      plVar26 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar26;
                    UNLOCK();
                  } while (bVar56);
                }
                else {
                  do {
                    *plVar22 = (longlong)plVar26;
                    LOCK();
                    bVar56 = plVar26 != DAT_14ca843c8;
                    plVar28 = plVar22;
                    if (bVar56) {
                      plVar26 = DAT_14ca843c8;
                      plVar28 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar28;
                    UNLOCK();
                  } while (bVar56);
                }
              }
            }
            lVar55 = local_348[0];
            if (local_348[0] != 0) {
              LOCK();
              puVar32 = (uint *)(local_348[0] + 8);
              uVar39 = *puVar32;
              *puVar32 = *puVar32 - 1;
              UNLOCK();
              if ((uVar39 & 0x3fffffff) == 1) {
                puVar32 = (uint *)(local_348[0] + 8);
                LOCK();
                uVar39 = *puVar32;
                *puVar32 = *puVar32 | 0x40000000;
                UNLOCK();
                if ((uVar39 >> 0x1e & 1) == 0) {
                  bVar29 = *(byte *)(local_348[0] + 0xd);
                  puStack_860 = (undefined *)0x1435d5c33;
                  plVar22 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar22[1] = lVar55;
                  plVar28 = DAT_14ca843c0;
                  plVar26 = DAT_14ca843c8;
                  lVar43 = local_7e8;
                  if ((bVar29 & 2) == 0) {
                    do {
                      *plVar22 = (longlong)plVar28;
                      LOCK();
                      bVar56 = plVar28 != DAT_14ca843c0;
                      plVar26 = plVar22;
                      if (bVar56) {
                        plVar28 = DAT_14ca843c0;
                        plVar26 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar26;
                      UNLOCK();
                    } while (bVar56);
                  }
                  else {
                    do {
                      *plVar22 = (longlong)plVar26;
                      LOCK();
                      bVar56 = plVar26 != DAT_14ca843c8;
                      plVar28 = plVar22;
                      if (bVar56) {
                        plVar26 = DAT_14ca843c8;
                        plVar28 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar28;
                      UNLOCK();
                    } while (bVar56);
                  }
                }
              }
            }
          }
        }
        uVar50 = uStack_740;
        puVar33 = (undefined8 *)(lVar43 + 0xd8);
        uVar39 = *(uint *)(lVar43 + 0xe0);
        if ((longlong)(int)uVar39 != 0) {
          iVar30 = (uint)uStack_740;
          lVar55 = (longlong)(int)(uint)uStack_740;
          uStack_740 = CONCAT44(uStack_740._4_4_,(uint)uStack_740 + uVar39);
          local_800 = puVar33;
          if ((uint)(uStack_740._4_4_ - iVar30) < uVar39) {
            puStack_860 = (undefined *)0x1435d5ca3;
            FUN_1447808da(&local_748,uVar50 & 0xffffffff);
          }
          puStack_860 = (undefined *)0x1435d5cc6;
          memcpy((void *)(lVar55 * 4 + local_748),(void *)*local_800,(longlong)(int)uVar39 << 2);
          puVar33 = local_800;
        }
        *(undefined4 *)(lVar43 + 0xe0) = 0;
        if (*(int *)(lVar43 + 0xe4) < 0) {
          puStack_860 = (undefined *)0x1435d5ce5;
          FUN_14480809c(puVar33,0);
        }
        puStack_860 = (undefined *)0x1435d5cfc;
        FUN_147c1086a(&local_758,lVar43 + 200);
        *(undefined4 *)(lVar43 + 0xd0) = 0;
        if (*(int *)(lVar43 + 0xd4) < 0) {
          puStack_860 = (undefined *)0x1435d5d3f;
          FUN_147c26560(lVar43 + 200,0);
        }
        *(undefined8 *)(lVar43 + 0x68) = 0;
        *(undefined8 *)(lVar43 + 0x70) = 0;
        *(undefined4 *)(lVar43 + 0x78) = 0;
        iVar30 = *(int *)(local_808 + 0x80);
        lVar43 = local_808;
        iVar54 = (int)local_7c0;
      }
      uVar40 = uVar40 & ~(uint)uVar53;
      puVar31 = *(ulonglong **)(lVar43 + 0x78);
      if (*(ulonglong **)(lVar43 + 0x78) == (ulonglong *)0x0) {
        puVar31 = puVar44;
      }
      iVar48 = (int)uVar49;
      lVar55 = (longlong)iVar48;
      uVar39 = *(uint *)((longlong)puVar31 + lVar55 * 4) & uVar40;
      if (uVar39 == 0) {
        iVar45 = iVar30 + 0x1e;
        if (-1 < iVar30 + -1) {
          iVar45 = iVar30 + -1;
        }
        iVar45 = iVar45 >> 5;
        iVar47 = iVar45;
        if (iVar45 < iVar48) {
          iVar47 = iVar48;
        }
        if (iVar45 <= iVar48) break;
        lVar23 = 0;
        while( true ) {
          iVar54 = iVar54 + 0x20;
          uVar39 = *(uint *)((longlong)puVar31 + lVar23 * 4 + lVar55 * 4 + 4);
          if (uVar39 != 0) break;
          lVar23 = lVar23 + 1;
          if (iVar47 - lVar55 == lVar23) goto LAB_1435d5d88;
        }
        uVar49 = (ulonglong)(iVar48 + (int)lVar23 + 1);
        uVar40 = 0xffffffff;
      }
      uVar53 = (ulonglong)(-uVar39 & uVar39);
      uVar50 = uVar53 * 2 + 1;
      lVar55 = 0x3f;
      if (uVar50 != 0) {
        for (; uVar50 >> lVar55 == 0; lVar55 = lVar55 + -1) {
        }
      }
      iVar48 = (iVar54 - ((uint)lVar55 ^ 0x3f)) + 0x3e;
    } while (iVar48 < iVar30);
  }
LAB_1435d5d88:
  fVar1 = local_7b4;
  puVar44 = local_7f8;
  if ((uint)uStack_740 != 0 || (int)uStack_730 != 0) {
    puStack_860 = (undefined *)0x1435d5dc8;
    FUN_147c106f2(local_348,2,&local_108,5);
    pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
    pwVar25 = pwVar46 + 0x1e;
    if ((wchar_t *)puVar44[1] < pwVar25) {
      puStack_860 = (undefined *)0x1435d5deb;
      FUN_140023dd8(puVar44,0x3e);
      pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
      pwVar25 = pwVar46 + 0x1e;
    }
    *puVar44 = (ulonglong)pwVar25;
    puStack_860 = (undefined *)0x1435d5e0e;
    wcscpy(pwVar46,L"GPUParticles_SimulateAndClear");
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 0x23;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d5e35;
      FUN_140023dd8(puVar44,0x120);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 0x23;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a217b50;
    puStack_860 = (undefined *)0x1435d5e8e;
    memcpy(puVar21 + 2,local_348,0xe8);
    puVar21[0x1f] = local_260;
    if (local_260 != 0) {
      LOCK();
      *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)puVar21 + 0x107) =
         CONCAT13(uStack_24e,CONCAT12(uStack_24f,CONCAT11(uStack_250,uStack_254._3_1_)));
    puVar21[0x20] = CONCAT44(uStack_254,local_258);
    puVar21[0x22] = pwVar46;
    lVar43 = 0x11;
    do {
      *(undefined8 *)(local_670 + lVar43 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar43) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar43 + 3) = 0;
      lVar43 = lVar43 + 0x18;
    } while (lVar43 != 0xd1);
    _local_598 = _local_598 & 0xffffff0000000000;
    lVar43 = 0xd9;
    do {
      *(undefined8 *)(local_670 + lVar43 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar43) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar43 + 3) = 0;
      lVar43 = lVar43 + 0x18;
    } while (lVar43 != 0x199);
    local_4d0._0_1_ = 0;
    local_4a0 = 0;
    local_497 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4a8 = 0;
    lVar43 = 0x15;
    do {
      if (*(longlong *)((longlong)alStack_35d + lVar43) == 0) break;
      *(longlong *)(local_670 + lVar43 + 3) = *(longlong *)((longlong)alStack_35d + lVar43);
      bVar29 = *(byte *)((longlong)local_348 + lVar43);
      bVar34 = bVar29 >> 2;
      auStack_65c[lVar43 + -1] = bVar34;
      auStack_65c[lVar43] = bVar29 & 3;
      *(undefined4 *)(auStack_661 + lVar43) = *(undefined4 *)((longlong)&uStack_34d + lVar43);
      *(uint *)(auStack_665 + lVar43) = (uint)(&bStack_349)[lVar43];
      _local_598 = CONCAT14(bStack_594 | bVar34 == 2,(int)local_598 + 1);
      lVar55 = *(longlong *)((longlong)alStack_35d + lVar43 + 8);
      if (lVar55 != 0) {
        local_4d0._0_1_ = 1;
        uVar11 = *(undefined8 *)(auStack_665 + lVar43);
        *(undefined8 *)(local_5a8 + lVar43 + 3) = *(undefined8 *)(local_670 + lVar43 + 3);
        *(undefined8 *)(auStack_5a0 + lVar43 + 3) = uVar11;
        *(undefined8 *)(local_598 + lVar43 + 3) = *(undefined8 *)(auStack_65c + lVar43 + -1);
        *(longlong *)(local_5a8 + lVar43 + 3) = lVar55;
      }
      lVar43 = lVar43 + 0x18;
    } while (lVar43 != 0xd5);
    uVar17 = uStack_24f;
    lVar43 = local_260;
    local_4c8 = local_288;
    uStack_4c0 = CONCAT44(local_274,
                          CONCAT13(local_278,
                                   CONCAT12(local_278 >> 2,CONCAT11(local_278 >> 4,local_278 >> 6)))
                         ) & 0xffffffff030303ff;
    local_4a8 = local_278 >> 6 == 2;
    local_4a7 = (local_278 >> 2 & 3) == 2;
    if ((local_280 != 0) && (local_280 != local_288)) {
      uStack_4b0 = uStack_4c0;
      local_4b8 = local_280;
    }
    local_4a0 = local_260;
    local_498 = (undefined1)local_258;
    local_497 = uStack_24f;
    auVar16 = local_598;
    if (0 < (longlong)(int)local_598) {
      puStack_860 = (undefined *)0x1435d610a;
      memcpy(puVar44 + 0x15,&local_658,(longlong)(int)local_598 * 0x18);
    }
    *(undefined1 (*) [4])(puVar44 + 0x14) = auVar16;
    puVar44[0x2d] = local_4c8;
    puVar44[0x2e] = uStack_4c0;
    bVar29 = *(byte *)((longlong)puVar44 + 0x17b) & 0xfe | lVar43 != 0;
    *(undefined1 *)((longlong)puVar44 + 0x17a) = uVar17;
    *(undefined1 *)(puVar44 + 0x2f) = uStack_24e;
    *(undefined1 *)((longlong)puVar44 + 0x179) = 0;
    *(byte *)((longlong)puVar44 + 0x17b) = bVar29 | 2;
    if (uStack_254 != 0) {
      *(byte *)((longlong)puVar44 + 0x17b) = bVar29 | 10;
      puStack_860 = (undefined *)0x1435d618a;
      (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,puVar44,1);
    }
    local_618 = 0;
    lStack_610 = 0;
    local_628 = 0;
    uStack_620 = 0;
    uStack_638 = 0;
    uStack_634 = 0;
    uStack_630 = 0;
    local_648 = (undefined8 *)0x0;
    uStack_640 = 0;
    uStack_63c = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_608._0_4_ = 0;
    local_608._4_4_ = 0;
    _local_5fc = 0;
    _auStack_5f4 = 0;
    stack0xfffffffffffffa14 = 0;
    stack0xfffffffffffffa1c = 0;
    stack0xfffffffffffffa24 = 0;
    stack0xfffffffffffffa2c = 0;
    auStack_5d0._4_8_ = 0;
    uStack_5c4 = 0;
    uStack_5bf = 0;
    uStack_5bc = 0;
    uStack_5b7 = 0;
    local_5a8 = (undefined1  [8])0x0;
    auStack_5a0 = (undefined1  [8])0x0;
    _local_598 = 0;
    local_590 = 1;
    uStack_588 = 0;
    puStack_860 = (undefined *)0x1435d61fb;
    FUN_144b0e33a(puVar44);
    fVar57 = (float)*(int *)(*(longlong *)(local_808 + 0xa0) + 0xe0);
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 5;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d6233;
      FUN_140023dd8(puVar44,0x30);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 5;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_14a1e7fc8;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(float *)((longlong)puVar21 + 0x1c) = fVar57;
    *(float *)(puVar21 + 4) = fVar57;
    *(undefined4 *)((longlong)puVar21 + 0x24) = 0x3f800000;
    local_618 = DAT_14c9c0d98;
    uStack_620 = DAT_14c9c0db0;
    local_628 = DAT_14c9c0d50;
    if ((int)uStack_730 != 0) {
      local_820 = *(undefined8 *)(local_808 + 0xe8);
      local_838 = *(undefined8 **)(local_808 + 0xa0);
      local_810 = 0.0 < fVar1;
      local_818 = local_7e0;
      local_828 = param_5;
      local_830 = local_7b0;
      puStack_860 = (undefined *)0x1435d6325;
      FUN_147c0fcbb(puVar44,&local_658,*(undefined4 *)(local_808 + 0xa8));
    }
    lVar43 = DAT_14caf3de8;
    if ((uint)uStack_740 != 0) {
      lVar55 = *(longlong *)(local_808 + 0xa0);
      local_7f0 = (uint *)(longlong)*(int *)(local_808 + 0xa8);
      iVar30 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (((iVar30 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar30 == 2)) {
        uVar49 = 0;
      }
      else if (iVar30 == 1) {
        puStack_860 = (undefined *)0x1435d85bb;
        DVar19 = FUN_140ad26c0();
        puStack_860 = (undefined *)0x1435d85c3;
        DVar20 = GetCurrentThreadId();
        uVar49 = (ulonglong)(DVar19 != DVar20);
      }
      else {
        uVar49 = 1;
      }
      puVar13 = local_7f0;
      puVar32 = DAT_14caf6020;
      if (*(int *)(lVar43 + uVar49 * 4) != 0) {
        local_800 = DAT_14caf6028;
        uVar11 = *(undefined8 *)
                  (&DAT_14ca8c1f0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)local_7f0 * 2) * 8);
        puStack_860 = (undefined *)0x1435d64ac;
        FUN_145e46ec0();
        uVar49 = 0;
        puStack_860 = (undefined *)0x1435d64cc;
        FUN_1448e935e(uVar11,&local_6e8,&DAT_14caf4220);
        puStack_860 = (undefined *)0x1435d64d1;
        FUN_145e46ec0();
        lVar14 = local_6e0;
        lVar43 = local_6e8;
        uVar11 = *(undefined8 *)
                  (&DAT_14ca8c1f0 +
                  (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)puVar13 * 2) * 8);
        puStack_860 = (undefined *)0x1435d64f2;
        FUN_146085702();
        puStack_860 = (undefined *)0x1435d650f;
        FUN_1448e935e(uVar11,&local_6e8,&DAT_14caf46c0);
        puStack_860 = (undefined *)0x1435d6514;
        FUN_146085702();
        lVar15 = local_6e0;
        lVar23 = local_6e8;
        puVar33 = &DAT_14caf4780;
        if ((int)puVar13 < 2) {
          puVar33 = &DAT_14caf4798;
        }
        local_658 = puVar33[2];
        if (lVar43 != 0) {
          lVar37 = *(longlong *)(lVar14 + 8);
          uVar49 = *(ulonglong *)
                    (*(longlong *)(lVar37 + 0x50) + (longlong)*(int *)(lVar43 + 0xd4) * 8);
          if (uVar49 == 0) {
            puStack_860 = (undefined *)0x1435d6561;
            uVar49 = FUN_1400bafc2(lVar37,(longlong)*(int *)(lVar43 + 0xd4),1);
          }
        }
        uStack_650 = uVar49;
        if (lVar23 == 0) {
          lVar23 = 0;
        }
        else {
          lVar37 = (longlong)*(int *)(lVar23 + 0xd4);
          lVar23 = *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x50) + lVar37 * 8);
          if (lVar23 == 0) {
            puStack_860 = (undefined *)0x1435d65aa;
            lVar23 = FUN_1400bafc2(*(longlong *)(lVar15 + 8),lVar37,1);
          }
        }
        puVar44 = local_7f8;
        auStack_600 = (undefined1  [4])0x0;
        puStack_860 = (undefined *)0x1435d65ca;
        local_648 = (undefined8 *)lVar23;
        lVar23 = FUN_140028f18(local_7f8);
        if ((lVar23 != 0) && ((local_590 & 0x10000000) == 0)) {
          *(undefined4 *)(puVar44 + 0x35) = uStack_638;
          *(undefined4 *)((longlong)puVar44 + 0x1ac) = uStack_634;
          *(undefined4 *)(puVar44 + 0x36) = (undefined4)uStack_630;
          *(undefined4 *)((longlong)puVar44 + 0x1b4) = uStack_630._4_4_;
          *(undefined4 *)(puVar44 + 0x33) = (undefined4)local_648;
          *(undefined4 *)((longlong)puVar44 + 0x19c) = local_648._4_4_;
          *(undefined4 *)(puVar44 + 0x34) = uStack_640;
          *(undefined4 *)((longlong)puVar44 + 0x1a4) = uStack_63c;
          puVar44[0x31] = local_658;
          puVar44[0x32] = uStack_650;
          puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar21 + 4;
          if ((undefined8 *)puVar44[1] < puVar33) {
            puStack_860 = (undefined *)0x1435d8372;
            FUN_140023dd8(puVar44,0x28);
            puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar21 + 4;
          }
          *puVar44 = (ulonglong)puVar33;
          *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
          *(undefined8 **)puVar44[6] = puVar21;
          puVar44[6] = (ulonglong)(puVar21 + 1);
          puVar21[1] = 0;
          *puVar21 = &PTR_LAB_14a37d348;
          puVar21[2] = lVar23;
          *(undefined4 *)(puVar21 + 3) = 0;
          *(undefined1 *)((longlong)puVar21 + 0x1c) = 1;
        }
        local_7e8 = lVar14;
        if (0 < (int)(uint)uStack_740) {
          uVar49 = 0;
          uVar40 = (uint)uStack_740;
          do {
            uVar39 = 0x1000;
            if (uVar40 < 0x1000) {
              uVar39 = uVar40;
            }
            lVar23 = uVar49 * 4 + local_748;
            local_830 = lVar55;
            if ((int)local_7f0 < 2) {
              local_838 = (undefined8 *)CONCAT44(local_838._4_4_,uVar39);
              puStack_860 = (undefined *)0x1435d66d4;
              FUN_1435d25ba(puVar44,puVar32,lVar23,uVar39);
              local_6e8 = CONCAT44(4.0 / (float)*(int *)(lVar55 + 0xe4),
                                   4.0 / (float)*(int *)(lVar55 + 0xe0));
              local_6e0 = DAT_14c8461b4;
              if (*(char *)(lVar55 + 0x110) == '\x01') {
                local_6e0 = CONCAT44((float)DAT_14c7616d0 / (float)*(int *)(lVar55 + 0xe4),
                                     (float)DAT_14c7616d0 / (float)*(int *)(lVar55 + 0xe0));
              }
              local_6d8 = local_800;
              if (lVar43 == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = *(longlong *)
                          (*(longlong *)(*(longlong *)(local_7e8 + 8) + 0x50) +
                          (longlong)*(int *)(lVar43 + 0xd4) * 8);
                if (lVar23 == 0) {
                  puStack_860 = (undefined *)0x1435d6840;
                  lVar23 = FUN_1400bafc2(*(longlong *)(local_7e8 + 8),
                                         (longlong)*(int *)(lVar43 + 0xd4),1);
                }
              }
              puStack_860 = (undefined *)0x1435d6848;
              FUN_145e4712c();
              local_838 = &local_6e8;
              puStack_860 = (undefined *)0x1435d686a;
              FUN_1449cc26b(puVar44,lVar23,lVar43);
              puStack_860 = (undefined *)0x1435d6878;
              FUN_1435d2779(puVar44,puVar32,uVar39);
            }
            else {
              local_838 = (undefined8 *)(CONCAT44(local_838._4_4_,uVar39 + 7) & 0xffffffff00003ff8);
              puStack_860 = (undefined *)0x1435d678b;
              FUN_1435d25ba(puVar44,puVar32,lVar23,uVar39);
              local_6e8 = CONCAT44(4.0 / (float)*(int *)(lVar55 + 0xe4),
                                   4.0 / (float)*(int *)(lVar55 + 0xe0));
              local_6e0 = DAT_14c8461b4;
              if (*(char *)(lVar55 + 0x110) == '\x01') {
                local_6e0 = CONCAT44((float)DAT_14c7616d0 / (float)*(int *)(lVar55 + 0xe4),
                                     (float)DAT_14c7616d0 / (float)*(int *)(lVar55 + 0xe0));
              }
              local_6d8 = local_800;
              if (lVar43 == 0) {
                lVar23 = 0;
              }
              else {
                lVar23 = *(longlong *)
                          (*(longlong *)(*(longlong *)(local_7e8 + 8) + 0x50) +
                          (longlong)*(int *)(lVar43 + 0xd4) * 8);
                if (lVar23 == 0) {
                  puStack_860 = (undefined *)0x1435d689f;
                  lVar23 = FUN_1400bafc2(*(longlong *)(local_7e8 + 8),
                                         (longlong)*(int *)(lVar43 + 0xd4),1);
                }
              }
              puStack_860 = (undefined *)0x1435d68a7;
              FUN_145e4712c();
              puVar44 = local_7f8;
              local_838 = &local_6e8;
              puStack_860 = (undefined *)0x1435d68ce;
              FUN_1449cc26b(local_7f8,lVar23,lVar43);
              puStack_860 = (undefined *)0x1435d68d9;
              FUN_1435d28df(puVar44,uVar39 + 7 & 0x3ff8);
            }
            uVar49 = (ulonglong)((int)uVar49 + uVar39);
            uVar42 = uVar40 - uVar39;
            bVar56 = (int)uVar39 <= (int)uVar40;
            uVar40 = uVar42;
          } while (uVar42 != 0 && bVar56);
        }
      }
    }
    if ((*(byte *)((longlong)puVar44 + 0x17b) & 8) != 0) {
      puStack_860 = (undefined *)0x1435d8304;
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,puVar44,1);
      *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xf7;
    }
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 2;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d83e8;
      FUN_140023dd8(puVar44,0x18);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 2;
    }
    lVar55 = local_260;
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xfd;
    *(undefined2 *)(puVar44 + 0x2f) = 0;
    lVar43 = local_808;
    if (local_260 != 0) {
      LOCK();
      puVar32 = (uint *)(local_260 + 8);
      uVar40 = *puVar32;
      *puVar32 = *puVar32 - 1;
      UNLOCK();
      if ((uVar40 & 0x3fffffff) == 1) {
        puVar32 = (uint *)(local_260 + 8);
        LOCK();
        uVar40 = *puVar32;
        *puVar32 = *puVar32 | 0x40000000;
        UNLOCK();
        if ((uVar40 >> 0x1e & 1) == 0) {
          bVar29 = *(byte *)(local_260 + 0xd);
          puStack_860 = (undefined *)0x1435d6992;
          plVar22 = (longlong *)FUN_14001cc68(0x10,8);
          plVar22[1] = lVar55;
          plVar28 = DAT_14ca843c0;
          plVar26 = DAT_14ca843c8;
          lVar43 = local_808;
          if ((bVar29 & 2) == 0) {
            do {
              *plVar22 = (longlong)plVar28;
              LOCK();
              bVar56 = plVar28 != DAT_14ca843c0;
              plVar26 = plVar22;
              if (bVar56) {
                plVar28 = DAT_14ca843c0;
                plVar26 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar26;
              UNLOCK();
            } while (bVar56);
          }
          else {
            do {
              *plVar22 = (longlong)plVar26;
              LOCK();
              bVar56 = plVar26 != DAT_14ca843c8;
              plVar28 = plVar22;
              if (bVar56) {
                plVar26 = DAT_14ca843c8;
                plVar28 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar28;
              UNLOCK();
            } while (bVar56);
          }
        }
      }
    }
  }
  if ((uint)uStack_750 != 0) {
    local_678 = *(undefined8 *)(local_7d0 + 8);
    _local_670 = *(undefined8 *)(local_7d0 + 10);
    puVar33 = *(undefined8 **)(*(longlong *)(lVar43 + 0xa0) + 0x98);
    uVar11 = *(undefined8 *)(*(longlong *)(lVar43 + 0xa0) + 0xc0);
    puStack_860 = (undefined *)0x1435d6a1b;
    unique0x10006e79 = puVar33;
    unique0x10006e81 = uVar11;
    FUN_147c106f2(local_348,4,&local_678,5);
    local_768 = &local_658;
    local_658 = 0xffffffffffffffff;
    uStack_650 = CONCAT44(uStack_650._4_4_,0xffffffff);
    uStack_640 = CONCAT31(uStack_640._1_3_,1);
    uStack_63c = 0x70;
    uStack_638 = 0x1000;
    uStack_634 = 0;
    local_628 = local_628 & 0xffffffffffffff00;
    uStack_620 = 0xffffffffffffffff;
    local_618 = CONCAT44(local_618._4_4_,0xffffffff);
    local_608._0_4_ = CONCAT31(local_608._1_3_,1);
    local_608._4_4_ = 0x70;
    auStack_600 = (undefined1  [4])0x1000;
    _local_5fc = _local_5fc & 0xffffffff00000000;
    _auStack_5f4 = (uint5)(uint)auStack_5f4;
    local_760 = 2;
    puStack_860 = (undefined *)0x1435d6a91;
    local_648 = puVar33;
    lStack_610 = uVar11;
    FUN_144760590(puVar44,&local_768,0);
    lVar43 = 0x68;
    do {
      if (*(char *)((longlong)&local_658 + lVar43) == '\x01') {
        *(undefined1 *)((longlong)&local_658 + lVar43) = 0;
      }
      lVar43 = lVar43 + -0x38;
    } while (lVar43 != -8);
    pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
    pwVar25 = pwVar46 + 0x12;
    if ((wchar_t *)puVar44[1] < pwVar25) {
      puStack_860 = (undefined *)0x1435d6ad5;
      FUN_140023dd8(puVar44,0x26);
      pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
      pwVar25 = pwVar46 + 0x12;
    }
    *puVar44 = (ulonglong)pwVar25;
    puStack_860 = (undefined *)0x1435d6af8;
    wcscpy(pwVar46,L"ParticleInjection");
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 0x23;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d6b1f;
      FUN_140023dd8(puVar44,0x120);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 0x23;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a217b50;
    puStack_860 = (undefined *)0x1435d6b78;
    memcpy(puVar21 + 2,local_348,0xe8);
    puVar21[0x1f] = local_260;
    if (local_260 != 0) {
      LOCK();
      *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)puVar21 + 0x107) =
         CONCAT13(uStack_24e,CONCAT12(uStack_24f,CONCAT11(uStack_250,uStack_254._3_1_)));
    puVar21[0x20] = CONCAT44(uStack_254,local_258);
    puVar21[0x22] = pwVar46;
    lVar43 = 0x11;
    do {
      *(undefined8 *)(local_670 + lVar43 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar43) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar43 + 3) = 0;
      lVar43 = lVar43 + 0x18;
    } while (lVar43 != 0xd1);
    _local_598 = _local_598 & 0xffffff0000000000;
    lVar43 = 0xd9;
    do {
      *(undefined8 *)(local_670 + lVar43 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar43) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar43 + 3) = 0;
      lVar43 = lVar43 + 0x18;
    } while (lVar43 != 0x199);
    local_4d0._0_1_ = 0;
    local_4a0 = 0;
    local_497 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4a8 = 0;
    lVar43 = 0x15;
    do {
      if (*(longlong *)((longlong)alStack_35d + lVar43) == 0) break;
      *(longlong *)(local_670 + lVar43 + 3) = *(longlong *)((longlong)alStack_35d + lVar43);
      bVar29 = *(byte *)((longlong)local_348 + lVar43);
      bVar34 = bVar29 >> 2;
      auStack_65c[lVar43 + -1] = bVar34;
      auStack_65c[lVar43] = bVar29 & 3;
      *(undefined4 *)(auStack_661 + lVar43) = *(undefined4 *)((longlong)&uStack_34d + lVar43);
      *(uint *)(auStack_665 + lVar43) = (uint)(&bStack_349)[lVar43];
      _local_598 = CONCAT14(bStack_594 | bVar34 == 2,(int)local_598 + 1);
      lVar55 = *(longlong *)((longlong)alStack_35d + lVar43 + 8);
      if (lVar55 != 0) {
        local_4d0._0_1_ = 1;
        uVar11 = *(undefined8 *)(auStack_665 + lVar43);
        *(undefined8 *)(local_5a8 + lVar43 + 3) = *(undefined8 *)(local_670 + lVar43 + 3);
        *(undefined8 *)(auStack_5a0 + lVar43 + 3) = uVar11;
        *(undefined8 *)(local_598 + lVar43 + 3) = *(undefined8 *)(auStack_65c + lVar43 + -1);
        *(longlong *)(local_5a8 + lVar43 + 3) = lVar55;
      }
      lVar43 = lVar43 + 0x18;
    } while (lVar43 != 0xd5);
    uVar17 = uStack_24f;
    lVar43 = local_260;
    local_4c8 = local_288;
    uStack_4c0 = CONCAT44(local_274,
                          CONCAT13(local_278,
                                   CONCAT12(local_278 >> 2,CONCAT11(local_278 >> 4,local_278 >> 6)))
                         ) & 0xffffffff030303ff;
    local_4a8 = local_278 >> 6 == 2;
    local_4a7 = (local_278 >> 2 & 3) == 2;
    if ((local_280 != 0) && (local_280 != local_288)) {
      uStack_4b0 = uStack_4c0;
      local_4b8 = local_280;
    }
    local_4a0 = local_260;
    local_498 = (undefined1)local_258;
    local_497 = uStack_24f;
    auVar16 = local_598;
    if (0 < (longlong)(int)local_598) {
      puStack_860 = (undefined *)0x1435d6df4;
      memcpy(puVar44 + 0x15,&local_658,(longlong)(int)local_598 * 0x18);
    }
    *(undefined1 (*) [4])(puVar44 + 0x14) = auVar16;
    puVar44[0x2d] = local_4c8;
    puVar44[0x2e] = uStack_4c0;
    bVar29 = *(byte *)((longlong)puVar44 + 0x17b) & 0xfe | lVar43 != 0;
    *(undefined1 *)((longlong)puVar44 + 0x17a) = uVar17;
    *(undefined1 *)(puVar44 + 0x2f) = uStack_24e;
    *(undefined1 *)((longlong)puVar44 + 0x179) = 0;
    *(byte *)((longlong)puVar44 + 0x17b) = bVar29 | 2;
    if (uStack_254 != 0) {
      *(byte *)((longlong)puVar44 + 0x17b) = bVar29 | 10;
      puStack_860 = (undefined *)0x1435d6e74;
      (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,puVar44,1);
    }
    local_618 = 0;
    lStack_610 = 0;
    local_628 = 0;
    uStack_620 = 0;
    uStack_638 = 0;
    uStack_634 = 0;
    uStack_630 = 0;
    local_648 = (undefined8 *)0x0;
    uStack_640 = 0;
    uStack_63c = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_608._0_4_ = 0;
    local_608._4_4_ = 0;
    _local_5fc = 0;
    _auStack_5f4 = 0;
    stack0xfffffffffffffa14 = 0;
    stack0xfffffffffffffa1c = 0;
    stack0xfffffffffffffa24 = 0;
    stack0xfffffffffffffa2c = 0;
    auStack_5d0._4_8_ = 0;
    uStack_5c4 = 0;
    uStack_5bf = 0;
    uStack_5bc = 0;
    uStack_5b7 = 0;
    local_5a8 = (undefined1  [8])0x0;
    auStack_5a0 = (undefined1  [8])0x0;
    _local_598 = 0;
    local_590 = 1;
    uStack_588 = 0;
    puStack_860 = (undefined *)0x1435d6ee5;
    FUN_144b0e33a(puVar44);
    iVar30 = *(int *)(*(longlong *)(local_808 + 0xa0) + 0xe4);
    iVar54 = *(int *)(*(longlong *)(local_808 + 0xa0) + 0xe0);
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 5;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d6f26;
      FUN_140023dd8(puVar44,0x30);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 5;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    puVar21[2] = 0;
    *puVar21 = &PTR_LAB_14a1e7fc8;
    *(undefined4 *)(puVar21 + 3) = 0;
    *(float *)((longlong)puVar21 + 0x1c) = (float)iVar54;
    *(float *)(puVar21 + 4) = (float)iVar30;
    *(undefined4 *)((longlong)puVar21 + 0x24) = 0x3f800000;
    lVar43 = DAT_14caf3de8;
    local_618 = DAT_14c9c0d98;
    uStack_620 = DAT_14c9c0db0;
    local_628 = DAT_14c9c0d50;
    local_6f0 = *(undefined8 *)(local_808 + 0xa0);
    local_7c0 = (longlong)*(int *)(local_808 + 0xa8);
    iVar30 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (((iVar30 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar30 == 2)) {
      uVar49 = 0;
    }
    else if (iVar30 == 1) {
      puStack_860 = (undefined *)0x1435d8511;
      DVar19 = FUN_140ad26c0();
      puStack_860 = (undefined *)0x1435d8519;
      DVar20 = GetCurrentThreadId();
      uVar49 = (ulonglong)(DVar19 != DVar20);
    }
    else {
      uVar49 = 1;
    }
    if ((*(int *)(lVar43 + uVar49 * 4) != 0) && (0 < (int)(uint)uStack_750)) {
      local_7f0 = DAT_14caf6020;
      local_7d8 = puVar44 + 0x31;
      uVar49 = 0;
      uVar40 = (uint)uStack_750;
      do {
        uVar39 = 0x35e;
        if (uVar40 < 0x35e) {
          uVar39 = uVar40;
        }
        local_800 = (undefined8 *)CONCAT44(local_800._4_4_,(int)uVar49);
        pvVar52 = (void *)(uVar49 * 0x4c + local_758);
        cVar8 = *(char *)((longlong)puVar44 + 0x69);
        if (cVar8 == '\0') {
          puStack_860 = (undefined *)0x1435d7083;
          FUN_14002049c(puVar44,CONCAT71((int7)(uVar49 >> 8),1));
        }
        local_7e8 = CONCAT44(local_7e8._4_4_,uVar39);
        local_838 = (undefined8 *)
                    (CONCAT44(local_838._4_4_,uVar39 * 0x4c + 0xf) & 0xffffffff0003fff0);
        local_830 = CONCAT44(local_830._4_4_,1);
        puStack_860 = (undefined *)0x1435d70ba;
        pvVar24 = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,puVar44,local_7f0,0);
        if (cVar8 == '\0') {
          puStack_860 = (undefined *)0x1435d70cc;
          FUN_14002049c(puVar44,0);
        }
        puStack_860 = (undefined *)0x1435d70da;
        memcpy(pvVar24,pvVar52,(ulonglong)(uVar39 * 0x4c));
        if (*(char *)((longlong)puVar44 + 0x69) == '\0') {
          puStack_860 = (undefined *)0x1435d70ec;
          FUN_14002049c(puVar44,1);
          puStack_860 = (undefined *)0x1435d7104;
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar44,local_7f0);
          puStack_860 = (undefined *)0x1435d710e;
          FUN_14002049c(puVar44,0);
        }
        else {
          puStack_860 = (undefined *)0x1435d7128;
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,puVar44,local_7f0);
        }
        lVar43 = local_7c0;
        uVar11 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_7c0 * 2) * 8);
        puStack_860 = (undefined *)0x1435d7150;
        FUN_146085968();
        puStack_860 = (undefined *)0x1435d716d;
        FUN_1448e935e(uVar11,&local_6e8,&DAT_14caf48b0,0);
        puStack_860 = (undefined *)0x1435d7172;
        FUN_146085968();
        lVar23 = local_6e0;
        lVar55 = local_6e8;
        local_700 = local_6e8;
        local_6f8 = local_6e0;
        uVar11 = *(undefined8 *)
                  (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar43 * 2) * 8);
        puStack_860 = (undefined *)0x1435d71a4;
        FUN_146085bce();
        puStack_860 = (undefined *)0x1435d71b9;
        FUN_1448e935e(uVar11,&local_6e8,&DAT_14caf49d8,0);
        puStack_860 = (undefined *)0x1435d71be;
        FUN_146085bce();
        lVar14 = local_6e0;
        lVar43 = local_6e8;
        local_658 = DAT_14caf4bd0;
        if (lVar55 == 0) {
          uVar49 = 0;
        }
        else {
          lVar55 = (longlong)*(int *)(lVar55 + 0xd4);
          uVar49 = *(ulonglong *)(*(longlong *)(*(longlong *)(lVar23 + 8) + 0x50) + lVar55 * 8);
          if (uVar49 == 0) {
            puStack_860 = (undefined *)0x1435d7214;
            uVar49 = FUN_1400bafc2(*(longlong *)(lVar23 + 8),lVar55,1);
          }
        }
        uStack_650 = uVar49;
        if (lVar43 == 0) {
          lVar43 = 0;
        }
        else {
          lVar55 = (longlong)*(int *)(lVar43 + 0xd4);
          lVar43 = *(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 8) + 0x50) + lVar55 * 8);
          if (lVar43 == 0) {
            puStack_860 = (undefined *)0x1435d7246;
            lVar43 = FUN_1400bafc2(*(longlong *)(lVar14 + 8),lVar55,1);
          }
        }
        puVar44 = local_7f8;
        auStack_600 = (undefined1  [4])0x0;
        puStack_860 = (undefined *)0x1435d726e;
        local_648 = (undefined8 *)lVar43;
        lVar43 = FUN_140028f18(local_7f8,&local_658);
        if ((lVar43 != 0) && ((local_590 & 0x10000000) == 0)) {
          *(undefined4 *)(local_7d8 + 4) = uStack_638;
          *(undefined4 *)((longlong)local_7d8 + 0x24) = uStack_634;
          *(undefined4 *)(local_7d8 + 5) = (undefined4)uStack_630;
          *(undefined4 *)((longlong)local_7d8 + 0x2c) = uStack_630._4_4_;
          *(undefined4 *)(local_7d8 + 2) = (undefined4)local_648;
          *(undefined4 *)((longlong)local_7d8 + 0x14) = local_648._4_4_;
          *(undefined4 *)(local_7d8 + 3) = uStack_640;
          *(undefined4 *)((longlong)local_7d8 + 0x1c) = uStack_63c;
          *local_7d8 = local_658;
          local_7d8[1] = uStack_650;
          puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar21 + 4;
          if ((undefined8 *)puVar44[1] < puVar33) {
            puStack_860 = (undefined *)0x1435d74db;
            FUN_140023dd8(puVar44,0x28);
            puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
            puVar33 = puVar21 + 4;
          }
          *puVar44 = (ulonglong)puVar33;
          *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
          *(undefined8 **)puVar44[6] = puVar21;
          puVar44[6] = (ulonglong)(puVar21 + 1);
          puVar21[1] = 0;
          *puVar21 = &PTR_LAB_14a37d348;
          puVar21[2] = lVar43;
          *(undefined4 *)(puVar21 + 3) = 0;
          *(undefined1 *)((longlong)puVar21 + 0x1c) = 1;
        }
        if (local_700 == 0) {
          lVar43 = 0;
        }
        else {
          lVar43 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_6f8 + 8) + 0x50) +
                    (longlong)*(int *)(local_700 + 0xd4) * 8);
          if (lVar43 == 0) {
            puStack_860 = (undefined *)0x1435d7343;
            lVar43 = FUN_1400bafc2(*(longlong *)(local_6f8 + 8),(longlong)*(int *)(local_700 + 0xd4)
                                   ,1);
          }
        }
        puStack_860 = (undefined *)0x1435d735e;
        FUN_147c289d4(puVar44,&local_700,lVar43);
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 5;
        if ((undefined8 *)puVar44[1] < puVar33) {
          puStack_860 = (undefined *)0x1435d7382;
          FUN_140023dd8(puVar44);
          puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar21 + 5;
        }
        *puVar44 = (ulonglong)puVar33;
        *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
        *(undefined8 **)puVar44[6] = puVar21;
        puVar44[6] = (ulonglong)(puVar21 + 1);
        puVar21[1] = 0;
        *puVar21 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar21 + 2) = 0;
        puVar21[3] = local_7f0;
        *(undefined4 *)(puVar21 + 4) = 0;
        uVar11 = DAT_14caf6058;
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 5;
        if ((undefined8 *)puVar44[1] < puVar33) {
          puStack_860 = (undefined *)0x1435d73f3;
          FUN_140023dd8(puVar44,0x30);
          puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar21 + 5;
        }
        *puVar44 = (ulonglong)puVar33;
        *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
        *(undefined8 **)puVar44[6] = puVar21;
        puVar44[6] = (ulonglong)(puVar21 + 1);
        puVar21[1] = 0;
        *puVar21 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar21 + 2) = 1;
        puVar21[3] = uVar11;
        *(undefined4 *)(puVar21 + 4) = 0;
        uVar11 = DAT_14caf6040;
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 6;
        if ((undefined8 *)puVar44[1] < puVar33) {
          puStack_860 = (undefined *)0x1435d7465;
          FUN_140023dd8(puVar44,0x38);
          puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar21 + 6;
        }
        uVar40 = uVar40 - (int)local_7e8;
        *puVar44 = (ulonglong)puVar33;
        *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
        uVar49 = (ulonglong)(uint)((int)local_800 + (int)local_7e8);
        *(undefined8 **)puVar44[6] = puVar21;
        puVar44[6] = (ulonglong)(puVar21 + 1);
        puVar21[1] = 0;
        *puVar21 = &PTR_FUN_14a1fb5b0;
        puVar21[2] = uVar11;
        puVar21[3] = 0;
        puVar21[4] = 4;
        *(undefined4 *)(puVar21 + 5) = 2;
        *(int *)((longlong)puVar21 + 0x2c) = (int)local_7e8;
      } while (0 < (int)uVar40);
    }
    if ((*(byte *)((longlong)puVar44 + 0x17b) & 8) != 0) {
      puStack_860 = (undefined *)0x1435d8330;
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,puVar44,1);
      *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xf7;
    }
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 2;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d840f;
      FUN_140023dd8(puVar44,0x18);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 2;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xfd;
    *(undefined2 *)(puVar44 + 0x2f) = 0;
    local_778 = &local_6e8;
    local_6e8 = -1;
    local_6e0 = CONCAT44(local_6e0._4_4_,0xffffffff);
    local_6d8 = stack0xfffffffffffff998;
    local_6d0 = 1;
    local_6cc = 0x7000001000;
    local_6c4 = 0;
    local_6b8 = 0;
    local_6b0 = 0xffffffffffffffff;
    local_6a8 = 0xffffffff;
    local_6a0 = stack0xfffffffffffff9a0;
    local_698[0] = 1;
    local_694 = 0x7000001000;
    local_68c = 0;
    local_680 = 0;
    local_770 = 2;
    puStack_860 = (undefined *)0x1435d75e0;
    FUN_144760590(puVar44,&local_778,0);
    lVar43 = 0x68;
    do {
      if (*(char *)((longlong)&local_6e8 + lVar43) == '\x01') {
        *(undefined1 *)((longlong)&local_6e8 + lVar43) = 0;
      }
      lVar43 = lVar43 + -0x38;
    } while (lVar43 != -8);
    if ((1 < local_7dc) && (DAT_14c760da4 != 0)) {
      uVar40 = *(uint *)((longlong)local_7f8 + 0x17c);
      uVar39 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
      iVar30 = 0x20;
      if ((uVar40 != 0) && (iVar30 = 0, uVar40 != 0)) {
        for (; (uVar40 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
        }
      }
      lVar43 = *(longlong *)(*(longlong *)(local_808 + 0xa0) + 0x98);
      uVar42 = 0;
      if (uVar39 != 0) {
        for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
        }
      }
      lVar55 = local_808;
      do {
        uVar49 = local_120;
        if ((uVar40 >> (uVar42 & 0x1f) & 1) == 0) {
          lVar23 = (longlong)(int)local_120;
          uVar18 = (int)local_120 + 1;
          local_120 = CONCAT44(local_120._4_4_,uVar18);
          if (local_120._4_4_ < uVar18) {
            puStack_860 = (undefined *)0x1435d76f3;
            FUN_147c24680(local_248,uVar49 & 0xffffffff);
            lVar55 = local_808;
          }
          puVar27 = local_128;
          if (local_128 == (undefined1 *)0x0) {
            puVar27 = local_248;
          }
          *(longlong *)(puVar27 + lVar23 * 0x48) = lVar43;
          if (lVar43 != 0) {
            LOCK();
            *(int *)(lVar43 + 8) = *(int *)(lVar43 + 8) + 1;
            UNLOCK();
          }
          *(undefined8 *)(puVar27 + lVar23 * 0x48 + 0x18) = 0;
          *(undefined8 *)(puVar27 + lVar23 * 0x48 + 0x20) = 0;
          *(undefined8 *)(puVar27 + lVar23 * 0x48 + 8) = 0;
          *(undefined8 *)(puVar27 + lVar23 * 0x48 + 0x10) = 0;
          *(int *)(puVar27 + lVar23 * 0x48 + 0x28) = iVar30;
          *(uint *)(puVar27 + lVar23 * 0x48 + 0x2c) = uVar42;
          *(undefined2 *)(puVar27 + lVar23 * 0x48 + 0x30) = 0;
          *(undefined8 *)(puVar27 + lVar23 * 0x48 + 0x38) = 0;
          *(undefined8 *)(puVar27 + lVar23 * 0x48 + 0x40) = 0;
        }
        uVar39 = uVar39 & ~(1 << ((byte)uVar42 & 0x1f));
        if (uVar39 == 0) {
          uVar42 = 0x20;
        }
        else {
          uVar42 = 0;
          if (uVar39 != 0) {
            for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
            }
          }
        }
      } while (uVar39 != 0);
      if (DAT_14c760da4 != 0) {
        uVar40 = *(uint *)((longlong)local_7f8 + 0x17c);
        uVar39 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        iVar30 = 0x20;
        if ((uVar40 != 0) && (iVar30 = 0, uVar40 != 0)) {
          for (; (uVar40 >> iVar30 & 1) == 0; iVar30 = iVar30 + 1) {
          }
        }
        lVar43 = *(longlong *)(*(longlong *)(lVar55 + 0xa0) + 0xc0);
        uVar42 = 0;
        if (uVar39 != 0) {
          for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
          }
        }
        do {
          uVar49 = local_120;
          if ((uVar40 >> (uVar42 & 0x1f) & 1) == 0) {
            lVar55 = (longlong)(int)local_120;
            uVar18 = (int)local_120 + 1;
            local_120 = CONCAT44(local_120._4_4_,uVar18);
            if (local_120._4_4_ < uVar18) {
              puStack_860 = (undefined *)0x1435d8297;
              FUN_147c24680(local_248,uVar49 & 0xffffffff);
            }
            puVar27 = local_128;
            if (local_128 == (undefined1 *)0x0) {
              puVar27 = local_248;
            }
            *(longlong *)(puVar27 + lVar55 * 0x48) = lVar43;
            if (lVar43 != 0) {
              LOCK();
              *(int *)(lVar43 + 8) = *(int *)(lVar43 + 8) + 1;
              UNLOCK();
            }
            *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x18) = 0;
            *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x20) = 0;
            *(undefined8 *)(puVar27 + lVar55 * 0x48 + 8) = 0;
            *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x10) = 0;
            *(int *)(puVar27 + lVar55 * 0x48 + 0x28) = iVar30;
            *(uint *)(puVar27 + lVar55 * 0x48 + 0x2c) = uVar42;
            *(undefined2 *)(puVar27 + lVar55 * 0x48 + 0x30) = 0;
            *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x38) = 0;
            *(undefined8 *)(puVar27 + lVar55 * 0x48 + 0x40) = 0;
          }
          uVar39 = uVar39 & ~(1 << ((byte)uVar42 & 0x1f));
          if (uVar39 == 0) {
            uVar42 = 0x20;
          }
          else {
            uVar42 = 0;
            if (uVar39 != 0) {
              for (; (uVar39 >> uVar42 & 1) == 0; uVar42 = uVar42 + 1) {
              }
            }
          }
        } while (uVar39 != 0);
      }
    }
    lVar43 = local_260;
    puVar44 = local_7f8;
    if (local_260 != 0) {
      LOCK();
      puVar32 = (uint *)(local_260 + 8);
      uVar40 = *puVar32;
      *puVar32 = *puVar32 - 1;
      UNLOCK();
      if ((uVar40 & 0x3fffffff) == 1) {
        puVar32 = (uint *)(local_260 + 8);
        LOCK();
        uVar40 = *puVar32;
        *puVar32 = *puVar32 | 0x40000000;
        UNLOCK();
        if ((uVar40 >> 0x1e & 1) == 0) {
          bVar29 = *(byte *)(local_260 + 0xd);
          puStack_860 = (undefined *)0x1435d7746;
          plVar22 = (longlong *)FUN_14001cc68(0x10,8);
          plVar22[1] = lVar43;
          plVar28 = DAT_14ca843c0;
          plVar26 = DAT_14ca843c8;
          puVar44 = local_7f8;
          if ((bVar29 & 2) == 0) {
            do {
              *plVar22 = (longlong)plVar28;
              LOCK();
              bVar56 = plVar28 != DAT_14ca843c0;
              plVar26 = plVar22;
              if (bVar56) {
                plVar28 = DAT_14ca843c0;
                plVar26 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar26;
              UNLOCK();
            } while (bVar56);
          }
          else {
            do {
              *plVar22 = (longlong)plVar26;
              LOCK();
              bVar56 = plVar26 != DAT_14ca843c8;
              plVar28 = plVar22;
              if (bVar56) {
                plVar26 = DAT_14ca843c8;
                plVar28 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar28;
              UNLOCK();
            } while (bVar56);
          }
        }
      }
    }
  }
  local_658 = 0xffffffffffffffff;
  uStack_650 = CONCAT44(uStack_650._4_4_,0xffffffff);
  local_648 = (undefined8 *)local_108;
  uStack_640 = CONCAT31(uStack_640._1_3_,1);
  uStack_63c = 0x1000;
  uStack_638 = 0x70;
  uStack_634 = 0;
  local_628 = local_628 & 0xffffffffffffff00;
  uStack_620 = 0xffffffffffffffff;
  local_618 = CONCAT44(local_618._4_4_,0xffffffff);
  lStack_610 = local_100;
  local_608._0_4_ = CONCAT31(local_608._1_3_,1);
  local_608._4_4_ = 0x1000;
  auStack_600 = (undefined1  [4])0x70;
  _local_5fc = _local_5fc & 0xffffffff00000000;
  _auStack_5f4 = (uint5)(uint)auStack_5f4;
  local_780 = 2;
  puStack_860 = (undefined *)0x1435d77f3;
  local_788 = &local_658;
  FUN_144760590(puVar44,&local_788,0);
  lVar43 = 0x68;
  do {
    if (*(char *)((longlong)&local_658 + lVar43) == '\x01') {
      *(undefined1 *)((longlong)&local_658 + lVar43) = 0;
    }
    lVar43 = lVar43 + -0x38;
  } while (lVar43 != -8);
  if ((0.0 < fVar1) && ((int)uStack_730 != 0)) {
    lVar55 = *(longlong *)(local_808 + 0xa0);
    lVar23 = ((longlong)*(int *)(lVar55 + 0xd0) ^ 1U) * 0x40;
    lVar43 = lVar55 + lVar23;
    local_648 = *(undefined8 **)(lVar55 + 0x20 + lVar23);
    local_658 = 0xffffffffffffffff;
    uStack_650 = CONCAT44(uStack_650._4_4_,0xffffffff);
    uStack_640 = CONCAT31(uStack_640._1_3_,1);
    uStack_63c = 0x70;
    uStack_638 = 0x1000;
    uStack_634 = 0;
    local_628 = local_628 & 0xffffffffffffff00;
    lStack_610 = *(undefined8 *)(lVar55 + 0x28 + lVar23);
    uStack_620 = 0xffffffffffffffff;
    local_618 = CONCAT44(local_618._4_4_,0xffffffff);
    local_608._0_4_ = CONCAT31(local_608._1_3_,1);
    local_608._4_4_ = 0x70;
    auStack_600 = (undefined1  [4])0x1000;
    _local_5fc = _local_5fc & 0xffffffff00000000;
    _auStack_5f4 = (uint5)(uint)auStack_5f4;
    local_790 = 2;
    puStack_860 = (undefined *)0x1435d78ff;
    local_798 = &local_658;
    FUN_144760590(puVar44,&local_798,0);
    lVar55 = 0x68;
    do {
      if (*(char *)((longlong)&local_658 + lVar55) == '\x01') {
        *(undefined1 *)((longlong)&local_658 + lVar55) = 0;
      }
      lVar55 = lVar55 + -0x38;
    } while (lVar55 != -8);
    local_6e8 = *(longlong *)(lVar43 + 0x20);
    local_6e0 = *(longlong *)(lVar43 + 0x28);
    puStack_860 = (undefined *)0x1435d794c;
    FUN_147c106f2(local_348,2,&local_6e8,5);
    pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
    pwVar25 = pwVar46 + 0x1a;
    if ((wchar_t *)puVar44[1] < pwVar25) {
      puStack_860 = (undefined *)0x1435d796f;
      FUN_140023dd8(puVar44,0x36);
      pwVar46 = (wchar_t *)(*puVar44 + 1 & 0xfffffffffffffffe);
      pwVar25 = pwVar46 + 0x1a;
    }
    *puVar44 = (ulonglong)pwVar25;
    puStack_860 = (undefined *)0x1435d7992;
    wcscpy(pwVar46,L"ExecuteSimulationCommands");
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 0x23;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d79b9;
      FUN_140023dd8(puVar44,0x120);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 0x23;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a217b50;
    puStack_860 = (undefined *)0x1435d7a12;
    memcpy(puVar21 + 2,local_348,0xe8);
    puVar21[0x1f] = local_260;
    if (local_260 != 0) {
      LOCK();
      *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)puVar21 + 0x107) =
         CONCAT13(uStack_24e,CONCAT12(uStack_24f,CONCAT11(uStack_250,uStack_254._3_1_)));
    puVar21[0x20] = CONCAT44(uStack_254,local_258);
    puVar21[0x22] = pwVar46;
    lVar55 = 0x11;
    do {
      *(undefined8 *)(local_670 + lVar55 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar55) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar55 + 3) = 0;
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0xd1);
    _local_598 = _local_598 & 0xffffff0000000000;
    lVar55 = 0xd9;
    do {
      *(undefined8 *)(local_670 + lVar55 + 7) = 0;
      *(undefined8 *)(auStack_661 + lVar55) = 0xffffffff00000000;
      *(undefined2 *)(auStack_65c + lVar55 + 3) = 0;
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0x199);
    local_4d0._0_1_ = 0;
    local_4a0 = 0;
    local_497 = 0;
    local_4c8 = 0;
    uStack_4c0 = 0;
    local_4b8 = 0;
    uStack_4b0 = 0;
    local_4a8 = 0;
    lVar55 = 0x15;
    do {
      if (*(longlong *)((longlong)alStack_35d + lVar55) == 0) break;
      *(longlong *)(local_670 + lVar55 + 3) = *(longlong *)((longlong)alStack_35d + lVar55);
      bVar29 = *(byte *)((longlong)local_348 + lVar55);
      bVar34 = bVar29 >> 2;
      auStack_65c[lVar55 + -1] = bVar34;
      auStack_65c[lVar55] = bVar29 & 3;
      *(undefined4 *)(auStack_661 + lVar55) = *(undefined4 *)((longlong)&uStack_34d + lVar55);
      *(uint *)(auStack_665 + lVar55) = (uint)(&bStack_349)[lVar55];
      _local_598 = CONCAT14(bStack_594 | bVar34 == 2,(int)local_598 + 1);
      lVar23 = *(longlong *)((longlong)alStack_35d + lVar55 + 8);
      if (lVar23 != 0) {
        local_4d0._0_1_ = 1;
        uVar11 = *(undefined8 *)(auStack_665 + lVar55);
        *(undefined8 *)(local_5a8 + lVar55 + 3) = *(undefined8 *)(local_670 + lVar55 + 3);
        *(undefined8 *)(auStack_5a0 + lVar55 + 3) = uVar11;
        *(undefined8 *)(local_598 + lVar55 + 3) = *(undefined8 *)(auStack_65c + lVar55 + -1);
        *(longlong *)(local_5a8 + lVar55 + 3) = lVar23;
      }
      lVar55 = lVar55 + 0x18;
    } while (lVar55 != 0xd5);
    lVar55 = local_260;
    local_4c8 = local_288;
    uStack_4c0 = CONCAT44(local_274,
                          CONCAT13(local_278,
                                   CONCAT12(local_278 >> 2,CONCAT11(local_278 >> 4,local_278 >> 6)))
                         ) & 0xffffffff030303ff;
    local_4a8 = local_278 >> 6 == 2;
    local_4a7 = (local_278 >> 2 & 3) == 2;
    if ((local_280 != 0) && (local_280 != local_288)) {
      uStack_4b0 = uStack_4c0;
      local_4b8 = local_280;
    }
    local_4a0 = local_260;
    local_498 = (undefined1)local_258;
    local_497 = uStack_24f;
    auVar16 = local_598;
    if (0 < (longlong)(int)local_598) {
      puStack_860 = (undefined *)0x1435d7c91;
      memcpy(puVar44 + 0x15,&local_658,(longlong)(int)local_598 * 0x18);
    }
    *(undefined1 (*) [4])(puVar44 + 0x14) = auVar16;
    puVar44[0x2d] = local_4c8;
    puVar44[0x2e] = uStack_4c0;
    bVar29 = *(byte *)((longlong)puVar44 + 0x17b) & 0xfe | lVar55 != 0;
    *(undefined1 *)((longlong)puVar44 + 0x17a) = uStack_24f;
    *(undefined1 *)(puVar44 + 0x2f) = uStack_24e;
    *(undefined1 *)((longlong)puVar44 + 0x179) = 0;
    *(byte *)((longlong)puVar44 + 0x17b) = bVar29 | 2;
    if (uStack_254 != 0) {
      *(byte *)((longlong)puVar44 + 0x17b) = bVar29 | 10;
      puStack_860 = (undefined *)0x1435d7d11;
      (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,puVar44,1);
    }
    local_618 = 0;
    lStack_610 = 0;
    local_628 = 0;
    uStack_620 = 0;
    uStack_638 = 0;
    uStack_634 = 0;
    uStack_630 = 0;
    local_648 = (undefined8 *)0x0;
    uStack_640 = 0;
    uStack_63c = 0;
    local_658 = 0;
    uStack_650 = 0;
    local_608._0_4_ = 0;
    local_608._4_4_ = 0;
    _local_5fc = 0;
    _auStack_5f4 = 0;
    stack0xfffffffffffffa14 = 0;
    stack0xfffffffffffffa1c = 0;
    stack0xfffffffffffffa24 = 0;
    stack0xfffffffffffffa2c = 0;
    auStack_5d0._4_8_ = 0;
    uStack_5c4 = 0;
    uStack_5bf = 0;
    uStack_5bc = 0;
    uStack_5b7 = 0;
    local_5a8 = (undefined1  [8])0x0;
    auStack_5a0 = (undefined1  [8])0x0;
    _local_598 = 0;
    local_590 = 1;
    uStack_588 = 0;
    puStack_860 = (undefined *)0x1435d7d79;
    FUN_144b0e33a(puVar44,&local_658);
    local_618 = DAT_14c9c0d98;
    uStack_620 = DAT_14c9c0db0;
    local_628 = DAT_14c9c0d50;
    local_820 = *(undefined8 *)(local_808 + 0xe8);
    local_838 = *(undefined8 **)(local_808 + 0xa0);
    local_818 = local_7e0;
    local_828 = param_5;
    local_830 = local_7b0;
    local_810 = 0;
    puStack_860 = (undefined *)0x1435d7df8;
    FUN_147c0fcbb(puVar44,&local_658,*(undefined4 *)(local_808 + 0xa8),&local_738);
    if ((*(byte *)((longlong)puVar44 + 0x17b) & 8) != 0) {
      puStack_860 = (undefined *)0x1435d8357;
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,puVar44);
      *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xf7;
    }
    puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
    puVar33 = puVar21 + 2;
    if ((undefined8 *)puVar44[1] < puVar33) {
      puStack_860 = (undefined *)0x1435d8431;
      FUN_140023dd8(puVar44,0x18);
      puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
      puVar33 = puVar21 + 2;
    }
    *puVar44 = (ulonglong)puVar33;
    *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
    *(undefined8 **)puVar44[6] = puVar21;
    puVar44[6] = (ulonglong)(puVar21 + 1);
    puVar21[1] = 0;
    *puVar21 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)puVar44 + 0x17b) = *(byte *)((longlong)puVar44 + 0x17b) & 0xfd;
    *(undefined2 *)(puVar44 + 0x2f) = 0;
    local_648 = *(undefined8 **)(lVar43 + 0x20);
    local_658 = 0xffffffffffffffff;
    uStack_650 = CONCAT44(uStack_650._4_4_,0xffffffff);
    uStack_640 = CONCAT31(uStack_640._1_3_,1);
    uStack_63c = 0x1000;
    uStack_638 = 0x70;
    uStack_634 = 0;
    local_628 = local_628 & 0xffffffffffffff00;
    lStack_610 = *(longlong *)(lVar43 + 0x28);
    uStack_620 = 0xffffffffffffffff;
    local_618 = CONCAT44(local_618._4_4_,0xffffffff);
    local_608._0_4_ = CONCAT31(local_608._1_3_,1);
    local_608._4_4_ = 0x1000;
    auStack_600 = (undefined1  [4])0x70;
    _local_5fc = _local_5fc & 0xffffffff00000000;
    _auStack_5f4 = (uint5)(uint)auStack_5f4;
    local_7a0 = 2;
    puStack_860 = (undefined *)0x1435d7f0e;
    local_7a8 = &local_658;
    FUN_144760590(puVar44,&local_7a8,0);
    lVar43 = 0x68;
    do {
      if (*(char *)((longlong)&local_658 + lVar43) == '\x01') {
        *(undefined1 *)((longlong)&local_658 + lVar43) = 0;
      }
      lVar43 = lVar43 + -0x38;
    } while (lVar43 != -8);
    if (*(int *)(local_808 + 0xe0) == local_7e0) {
      iVar30 = (int)local_120;
      lVar43 = (longlong)(int)local_120;
      if (0 < lVar43) {
        puVar27 = local_128;
        if (local_128 == (undefined1 *)0x0) {
          puVar27 = local_248;
        }
        puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
        puVar33 = puVar21 + 4;
        if ((undefined8 *)puVar44[1] < puVar33) {
          puStack_860 = (undefined *)0x1435d7f8f;
          FUN_140023dd8(puVar44,0x28);
          puVar21 = (undefined8 *)(*puVar44 + 7 & 0xfffffffffffffff8);
          puVar33 = puVar21 + 4;
        }
        *puVar44 = (ulonglong)puVar33;
        *(int *)(puVar44 + 0xc) = (int)puVar44[0xc] + 1;
        *(undefined8 **)puVar44[6] = puVar21;
        puVar44[6] = (ulonglong)(puVar21 + 1);
        _Size = lVar43 * 0x48;
        pvVar24 = (void *)(*puVar44 + 7 & 0xfffffffffffffff8);
        pvVar52 = (void *)((longlong)pvVar24 + _Size);
        if ((void *)puVar44[1] < pvVar52) {
          puStack_860 = (undefined *)0x1435d7fe6;
          FUN_140023dd8(puVar44,(int)_Size + 8);
          pvVar24 = (void *)(*puVar44 + 7 & 0xfffffffffffffff8);
          pvVar52 = (void *)((longlong)pvVar24 + _Size);
        }
        *puVar44 = (ulonglong)pvVar52;
        puStack_860 = (undefined *)0x1435d8008;
        memcpy(pvVar24,puVar27,_Size);
        puVar21[1] = 0;
        *puVar21 = &PTR_FUN_14a2687f0;
        puVar21[2] = pvVar24;
        *(int *)(puVar21 + 3) = iVar30;
      }
    }
    if (local_260 != 0) {
      LOCK();
      puVar32 = (uint *)(local_260 + 8);
      uVar40 = *puVar32;
      *puVar32 = *puVar32 - 1;
      UNLOCK();
      if ((uVar40 & 0x3fffffff) == 1) {
        puVar32 = (uint *)(local_260 + 8);
        LOCK();
        uVar40 = *puVar32;
        *puVar32 = *puVar32 | 0x40000000;
        UNLOCK();
        if ((uVar40 >> 0x1e & 1) == 0) {
          bVar29 = *(byte *)(local_260 + 0xd);
          puStack_860 = (undefined *)0x1435d8060;
          plVar22 = (longlong *)FUN_14001cc68(0x10,8);
          plVar22[1] = local_260;
          plVar28 = DAT_14ca843c0;
          plVar26 = DAT_14ca843c8;
          if ((bVar29 & 2) == 0) {
            do {
              *plVar22 = (longlong)plVar28;
              LOCK();
              bVar56 = plVar28 != DAT_14ca843c0;
              plVar26 = plVar22;
              if (bVar56) {
                plVar28 = DAT_14ca843c0;
                plVar26 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar26;
              UNLOCK();
            } while (bVar56);
          }
          else {
            do {
              *plVar22 = (longlong)plVar26;
              LOCK();
              bVar56 = plVar26 != DAT_14ca843c8;
              plVar28 = plVar22;
              if (bVar56) {
                plVar26 = DAT_14ca843c8;
                plVar28 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar28;
              UNLOCK();
            } while (bVar56);
          }
        }
      }
    }
  }
  if (local_758 != 0) {
    puStack_860 = (undefined *)0x1435d8097;
    FUN_1400020a8();
  }
  if (local_748 != 0) {
    puStack_860 = (undefined *)0x1435d80a9;
    FUN_1400020a8();
  }
  puStack_860 = (undefined *)0x1435d80bd;
  FUN_147c2884e(local_738,uStack_730 & 0xffffffff);
  if (local_738 != 0) {
    puStack_860 = (undefined *)0x1435d80cf;
    FUN_1400020a8();
  }
  lVar43 = local_7c8;
  if (local_7c8 != 0) {
    LOCK();
    puVar32 = (uint *)(local_7c8 + 8);
    uVar40 = *puVar32;
    *puVar32 = *puVar32 - 1;
    UNLOCK();
    if ((uVar40 & 0x3fffffff) == 1) {
      puVar32 = (uint *)(local_7c8 + 8);
      LOCK();
      uVar40 = *puVar32;
      *puVar32 = *puVar32 | 0x40000000;
      UNLOCK();
      if ((uVar40 >> 0x1e & 1) == 0) {
        bVar29 = *(byte *)(local_7c8 + 0xd);
        puStack_860 = (undefined *)0x1435d8110;
        plVar22 = (longlong *)FUN_14001cc68(0x10,8);
        plVar22[1] = lVar43;
        plVar28 = DAT_14ca843c0;
        plVar26 = DAT_14ca843c8;
        if ((bVar29 & 2) == 0) {
          do {
            *plVar22 = (longlong)plVar28;
            LOCK();
            bVar56 = plVar28 != DAT_14ca843c0;
            plVar26 = plVar22;
            if (bVar56) {
              plVar28 = DAT_14ca843c0;
              plVar26 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar26;
            UNLOCK();
          } while (bVar56);
        }
        else {
          do {
            *plVar22 = (longlong)plVar26;
            LOCK();
            bVar56 = plVar26 != DAT_14ca843c8;
            plVar28 = plVar22;
            if (bVar56) {
              plVar26 = DAT_14ca843c8;
              plVar28 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar28;
            UNLOCK();
          } while (bVar56);
        }
      }
    }
  }
  puStack_860 = (undefined *)0x1435d8142;
  FUN_147c108ca(local_248);
  if ((local_f0 ^ (ulonglong)auStack_858) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_860 = &UNK_1435d81c7;
  FUN_144d8e3a0();
}



// FUNCTION 1435d85d4 FUN_1435d85d4 body=243 status=ok
// SIG undefined FUN_1435d85d4(void)

longlong * FUN_1435d85d4(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145ef0be0();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14caf4168);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1435d86c8 FUN_1435d86c8 body=1372 status=ok
// SIG undefined FUN_1435d86c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435d86c8(longlong param_1,longlong *param_2,float param_3,undefined8 param_4,uint param_5)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 uVar24;
  undefined1 in_XMM3 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auStack_1b8 [44];
  float local_18c;
  float local_188;
  float local_184;
  double local_180;
  double local_178;
  double local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar18 = *param_2;
  if (lVar18 != 0) {
    fVar27 = in_XMM3._0_4_;
    if ((fVar27 == -1.0) && (!NAN(fVar27))) {
      fVar27 = *(float *)(param_2 + 0x38);
      if (1.0 <= fVar27) {
        fVar27 = 1.0;
      }
      if (fVar27 <= 0.0) {
        fVar27 = 0.0;
      }
    }
    param_3 = *(float *)((longlong)param_2 + 0x1c4) * *(float *)(lVar18 + 0x24) * param_3;
    auVar22._0_8_ = (double)param_2[0x34] * 1.52587890625e-05 + 0.5;
    auVar22._8_8_ = 0;
    auVar25 = roundpd(in_XMM3,auVar22,1);
    local_180 = auVar25._0_8_ * 65536.0;
    auVar26._0_8_ = (double)param_2[0x35] * 1.52587890625e-05 + 0.5;
    auVar26._8_8_ = 0;
    auVar23._0_8_ = (double)param_2[0x36] * 1.52587890625e-05 + 0.5;
    auVar23._8_8_ = 0;
    auVar22 = roundpd(auVar23,auVar23,1);
    auVar23 = roundpd(auVar26,auVar26,1);
    local_178 = auVar23._0_8_ * 65536.0;
    lVar20 = (ulonglong)param_5 * 0x10;
    *(float *)(param_1 + 0x10 + lVar20) = (float)auVar25._0_8_;
    *(float *)(param_1 + 0x14 + lVar20) = (float)auVar23._0_8_;
    *(float *)(param_1 + 0x18 + lVar20) = (float)auVar22._0_8_;
    *(undefined4 *)(param_1 + 0x1c + lVar20) = 0x3f800000;
    local_170 = auVar22._0_8_ * 65536.0;
    FUN_14681244e(&local_168,&local_180,param_2 + 0x28);
    local_184 = param_3;
    if ((((((1e-08 < ABS(local_168)) || (1e-08 < ABS(local_164))) || (1e-08 < ABS(local_160))) ||
         ((1e-08 < ABS(local_158) || (1e-08 < ABS(local_154))))) ||
        ((1e-08 < ABS(local_150) || ((1e-08 < ABS(local_148) || (1e-08 < ABS(local_144))))))) ||
       (1e-08 < ABS(local_140))) {
      FUN_144906c86(&local_128,&local_168);
    }
    else {
      local_f8 = _DAT_14c846280;
      uStack_f0 = _DAT_14c846288;
      local_108 = _DAT_14c846270;
      uStack_100 = _DAT_14c846278;
      local_118 = _DAT_14c846260;
      uStack_110 = _DAT_14c846268;
      local_128 = _DAT_14c846250;
      uStack_120 = DAT_14c846258;
    }
    lVar19 = (ulonglong)param_5 * 0x40;
    puVar1 = (undefined8 *)(param_1 + 0x80 + lVar19);
    *puVar1 = local_f8;
    puVar1[1] = uStack_f0;
    puVar1 = (undefined8 *)(param_1 + 0x70 + lVar19);
    *puVar1 = local_108;
    puVar1[1] = uStack_100;
    puVar1 = (undefined8 *)(param_1 + 0x60 + lVar19);
    *puVar1 = local_118;
    puVar1[1] = uStack_110;
    puVar1 = (undefined8 *)(param_1 + 0x50 + lVar19);
    *puVar1 = local_128;
    puVar1[1] = uStack_120;
    local_18c = (float)(double)param_2[8];
    dVar2 = (double)param_2[9];
    dVar3 = (double)param_2[10];
    dVar4 = (double)param_2[0xb];
    dVar5 = (double)param_2[0xc];
    dVar6 = (double)param_2[0xd];
    dVar7 = (double)param_2[0xe];
    dVar8 = (double)param_2[0xf];
    dVar9 = (double)param_2[0x10];
    dVar10 = (double)param_2[0x11];
    dVar11 = (double)param_2[0x12];
    dVar12 = (double)param_2[0x13];
    dVar13 = (double)param_2[0x14];
    dVar14 = (double)param_2[0x15];
    dVar15 = (double)param_2[0x16];
    local_188 = (float)(double)param_2[0x17];
    *(float *)(param_1 + 0x150 + lVar19) = local_18c;
    *(float *)(param_1 + 0x154 + lVar19) = (float)dVar2;
    *(float *)(param_1 + 0x158 + lVar19) = (float)dVar3;
    *(float *)(param_1 + 0x15c + lVar19) = (float)dVar4;
    *(float *)(param_1 + 0x160 + lVar19) = (float)dVar5;
    *(float *)(param_1 + 0x164 + lVar19) = (float)dVar6;
    *(float *)(param_1 + 0x168 + lVar19) = (float)dVar7;
    *(float *)(param_1 + 0x16c + lVar19) = (float)dVar8;
    *(float *)(param_1 + 0x170 + lVar19) = (float)dVar9;
    *(float *)(param_1 + 0x174 + lVar19) = (float)dVar10;
    *(float *)(param_1 + 0x178 + lVar19) = (float)dVar11;
    *(float *)(param_1 + 0x17c + lVar19) = (float)dVar12;
    *(float *)(param_1 + 0x180 + lVar19) = (float)dVar13;
    *(float *)(param_1 + 0x184 + lVar19) = (float)dVar14;
    *(float *)(param_1 + 0x188 + lVar19) = (float)dVar15;
    *(float *)(param_1 + 0x18c + lVar19) = local_188;
    iVar16 = *(int *)(lVar18 + 0x20);
    iVar17 = *(int *)(lVar18 + 0x1c);
    *(float *)(param_1 + 0x290 + lVar20) = (float)*(int *)(lVar18 + 0x18);
    *(float *)(param_1 + 0x294 + lVar20) = (float)iVar17;
    *(float *)(param_1 + 0x298 + lVar20) = (float)iVar16;
    *(undefined4 *)(param_1 + 0x29c + lVar20) = 0;
    *(float *)(param_1 + 0x250 + lVar20) = local_184;
    *(float *)(param_1 + 0x254 + lVar20) = fVar27;
    *(undefined8 *)(param_1 + 600 + lVar20) = 0;
    uVar21 = 0;
    uVar24 = 0;
    if ((*(byte *)((longlong)param_2 + 0x1cc) & 1) != 0) {
      uVar24 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x2d0 + lVar20) = uVar24;
    uVar24 = 0;
    if ((*(byte *)((longlong)param_2 + 0x1cc) & 2) != 0) {
      uVar24 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x2d4 + lVar20) = uVar24;
    if ((*(byte *)((longlong)param_2 + 0x1cc) & 4) != 0) {
      uVar21 = 0x3f800000;
    }
    *(undefined4 *)(param_1 + 0x2d8 + lVar20) = uVar21;
  }
  if ((local_e0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435d8c26 FUN_1435d8c26 body=3405 status=ok
// SIG undefined FUN_1435d8c26(void)

void FUN_1435d8c26(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auVar6 [8];
  undefined1 auVar7 [8];
  undefined1 auVar8 [4];
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  void *_Dst;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  byte bVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  uint uVar26;
  wchar_t *_Dest;
  bool bVar27;
  undefined1 auStack_3e8 [32];
  uint local_3c8;
  undefined4 local_3c0;
  uint local_3b0;
  uint local_3ac;
  undefined8 local_3a8;
  uint local_39c;
  longlong *local_398;
  ulonglong *local_390;
  longlong local_388;
  undefined8 *local_380;
  undefined4 local_378;
  longlong local_370;
  longlong local_368;
  undefined1 local_360 [8];
  undefined1 local_358 [8];
  undefined8 local_350;
  byte local_348 [8];
  undefined8 local_340;
  undefined8 local_328;
  longlong local_288;
  longlong local_280;
  byte local_278;
  undefined4 local_274;
  longlong local_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined1 uStack_24e;
  undefined1 auStack_24d [5];
  undefined1 local_248 [7];
  undefined1 auStack_241 [4];
  byte abStack_23d [4];
  undefined1 uStack_239;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  ulonglong local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  ulonglong local_1dc;
  uint5 uStack_1d4;
  undefined3 uStack_1cf;
  undefined8 local_1cc;
  undefined8 uStack_1c4;
  undefined8 local_1bc;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined5 uStack_1a4;
  undefined3 uStack_19f;
  undefined5 uStack_19c;
  undefined8 uStack_197;
  undefined1 local_188 [8];
  undefined1 auStack_180 [8];
  undefined1 local_178 [4];
  byte bStack_174;
  undefined3 uStack_173;
  uint local_170;
  undefined8 uStack_168;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined1 local_88;
  undefined1 local_87;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_77;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  plVar25 = (longlong *)(param_1 + 200);
  if (*(int *)(param_1 + 0xd0) != 0) {
    lVar12 = *(longlong *)(param_1 + 0xa0);
    _local_248 = *(undefined8 *)(lVar12 + 0x98);
    unique0x00023e00 = *(undefined8 *)(lVar12 + 0xc0);
    FUN_147c106f2(local_348,2,local_248,5);
    local_340 = *(undefined8 *)(lVar12 + 0x98);
    local_328 = *(undefined8 *)(lVar12 + 0xc0);
    local_380 = &local_238;
    local_238 = 0xffffffffffffffff;
    uStack_230 = CONCAT44(uStack_230._4_4_,0xffffffff);
    uStack_220 = CONCAT31(uStack_220._1_3_,1);
    uStack_21c = 0;
    uStack_218 = 0x1000;
    uStack_214 = 0;
    local_208 = local_208 & 0xffffffffffffff00;
    uStack_200 = 0xffffffffffffffff;
    local_1f8 = CONCAT44(local_1f8._4_4_,0xffffffff);
    local_1e8 = CONCAT31(local_1e8._1_3_,1);
    uStack_1e4 = 0;
    uStack_1e0 = 0x1000;
    local_1dc = local_1dc & 0xffffffff00000000;
    uStack_1d4 = (uint5)(uint)uStack_1d4;
    local_378 = 2;
    local_228 = local_340;
    uStack_1f0 = local_328;
    FUN_144760590(param_2,&local_380,0);
    lVar12 = 0x68;
    do {
      if (*(char *)((longlong)&local_238 + lVar12) == '\x01') {
        *(undefined1 *)((longlong)&local_238 + lVar12) = 0;
      }
      lVar12 = lVar12 + -0x38;
    } while (lVar12 != -8);
    _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
    pwVar13 = _Dest + 0x18;
    if ((wchar_t *)param_2[1] < pwVar13) {
      FUN_140023dd8(param_2,0x32);
      _Dest = (wchar_t *)(*param_2 + 1 & 0xfffffffffffffffe);
      pwVar13 = _Dest + 0x18;
    }
    *param_2 = (ulonglong)pwVar13;
    wcscpy(_Dest,L"UpdateMultiGPUResources");
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar24 + 0x23;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x120);
      puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar24 + 0x23;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar24;
    param_2[6] = (ulonglong)(puVar24 + 1);
    puVar24[1] = 0;
    *puVar24 = &PTR_FUN_14a217b50;
    memcpy(puVar24 + 2,local_348,0xe8);
    lVar12 = local_260;
    puVar24[0x1f] = local_260;
    if (local_260 != 0) {
      LOCK();
      *(int *)(local_260 + 8) = *(int *)(local_260 + 8) + 1;
      UNLOCK();
    }
    *(uint *)((longlong)puVar24 + 0x107) =
         CONCAT13(uStack_24e,CONCAT12(uStack_24f,CONCAT11(uStack_250,uStack_254._3_1_)));
    puVar24[0x20] = CONCAT44(uStack_254,local_258);
    puVar24[0x22] = _Dest;
    lVar19 = 0x11;
    do {
      *(undefined8 *)(auStack_24d + lVar19 + 4) = 0;
      *(undefined8 *)(local_248 + lVar19 + 7) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar19) = 0;
      lVar19 = lVar19 + 0x18;
    } while (lVar19 != 0xd1);
    _local_178 = _local_178 & 0xffffff0000000000;
    lVar19 = 0xd9;
    do {
      *(undefined8 *)(auStack_24d + lVar19 + 4) = 0;
      *(undefined8 *)(local_248 + lVar19 + 7) = 0xffffffff00000000;
      *(undefined2 *)(&uStack_239 + lVar19) = 0;
      lVar19 = lVar19 + 0x18;
    } while (lVar19 != 0x199);
    local_b0 = 0;
    local_80 = 0;
    local_77 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    lVar19 = 0x15;
    do {
      if (*(longlong *)(local_360 + lVar19 + 3) == 0) break;
      *(longlong *)(auStack_24d + lVar19) = *(longlong *)(local_360 + lVar19 + 3);
      bVar20 = local_348[lVar19] >> 2;
      abStack_23d[lVar19] = bVar20;
      abStack_23d[lVar19 + 1] = local_348[lVar19] & 3;
      *(undefined4 *)(local_248 + lVar19 + 7) = *(undefined4 *)(local_348 + lVar19 + -5);
      *(uint *)(local_248 + lVar19 + 3) = (uint)local_348[lVar19 + -1];
      iVar2 = (int)local_178 + 1;
      bVar20 = bStack_174 | bVar20 == 2;
      _local_178 = CONCAT14(bVar20,iVar2);
      if (*(longlong *)(local_358 + lVar19 + 3) != 0) {
        local_b0 = 1;
        *(undefined8 *)(local_188 + lVar19 + 3) = *(undefined8 *)(auStack_24d + lVar19);
        *(undefined8 *)(auStack_180 + lVar19 + 3) = *(undefined8 *)(local_248 + lVar19 + 3);
        *(undefined8 *)(local_178 + lVar19 + 3) = *(undefined8 *)(abStack_23d + lVar19);
        *(longlong *)(local_188 + lVar19 + 3) = *(longlong *)(local_358 + lVar19 + 3);
      }
      lVar19 = lVar19 + 0x18;
    } while (lVar19 != 0xd5);
    local_a8 = local_288;
    uStack_a0 = CONCAT44(local_274,
                         CONCAT13(local_278,
                                  CONCAT12(local_278 >> 2,CONCAT11(local_278 >> 4,local_278 >> 6))))
                & 0xffffffff030303ff;
    local_88 = local_278 >> 6 == 2;
    local_87 = (local_278 >> 2 & 3) == 2;
    if ((local_280 != 0) && (local_280 != local_288)) {
      uStack_90 = uStack_a0;
      local_98 = local_280;
    }
    local_80 = local_260;
    local_78 = (undefined1)local_258;
    local_77 = uStack_24f;
    auVar8 = local_178;
    if (0 < (longlong)(int)local_178) {
      memcpy(param_2 + 0x15,&local_238,(longlong)(int)local_178 * 0x18);
    }
    *(undefined1 (*) [4])(param_2 + 0x14) = auVar8;
    *(undefined4 *)(param_2 + 0x2d) = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_2 + 0x16c) = local_a8._4_4_;
    *(undefined4 *)(param_2 + 0x2e) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0x174) = uStack_a0._4_4_;
    bVar20 = *(byte *)((longlong)param_2 + 0x17b) & 0xfe | lVar12 != 0;
    *(undefined1 *)((longlong)param_2 + 0x17a) = uStack_24f;
    *(undefined1 *)(param_2 + 0x2f) = uStack_24e;
    *(undefined1 *)((longlong)param_2 + 0x179) = 0;
    *(byte *)((longlong)param_2 + 0x17b) = bVar20 | 2;
    if (uStack_254 != 0) {
      *(byte *)((longlong)param_2 + 0x17b) = bVar20 | 10;
      (**(code **)(*DAT_14ca83900 + 0x298))(DAT_14ca83900,param_2,1);
    }
    iVar2 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0xe4);
    iVar4 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0xe0);
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar24 + 5;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x30);
      puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar24 + 5;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar24;
    param_2[6] = (ulonglong)(puVar24 + 1);
    puVar24[1] = 0;
    puVar24[2] = 0;
    *puVar24 = &PTR_LAB_14a1e7fc8;
    *(undefined4 *)(puVar24 + 3) = 0;
    *(float *)((longlong)puVar24 + 0x1c) = (float)iVar4;
    *(float *)(puVar24 + 4) = (float)iVar2;
    *(undefined4 *)((longlong)puVar24 + 0x24) = 0x3f800000;
    uVar18 = 0;
    local_1e8 = 0;
    uStack_1e4 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    uStack_200 = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    local_228 = 0;
    uStack_220 = 0;
    uStack_21c = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_1dc = 0;
    _uStack_1d4 = 0;
    local_1cc = 0;
    uStack_1c4 = 0;
    local_1bc = 0;
    uStack_1b4 = 0;
    local_1ac = 0;
    uStack_1a4 = 0;
    uStack_19f = 0;
    uStack_19c = 0;
    uStack_197 = 0;
    local_188 = (undefined1  [8])0x0;
    auStack_180 = (undefined1  [8])0x0;
    _local_178 = 0;
    local_170 = 1;
    uStack_168 = 0;
    FUN_144b0e33a(param_2,&local_238);
    lVar12 = DAT_14caf3de8;
    local_1f8 = DAT_14c9c0d98;
    uStack_200 = DAT_14c9c0db0;
    local_208 = DAT_14c9c0d50;
    local_360 = *(undefined1 (*) [8])(param_1 + 0xa0);
    local_388 = (longlong)*(int *)(param_1 + 0xa8);
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 != 0x40000002) {
      if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
        if (iVar2 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          uVar18 = (ulonglong)(DVar10 != DVar11);
        }
        else {
          uVar18 = 1;
        }
      }
      else {
        uVar18 = 0;
      }
    }
    if ((*(int *)(lVar12 + uVar18 * 4) != 0) &&
       (uVar23 = *(uint *)(param_1 + 0xd0), 0 < (int)uVar23)) {
      local_3a8 = DAT_14caf6020;
      local_390 = param_2 + 0x31;
      uVar9 = 0;
      local_398 = plVar25;
      do {
        uVar26 = 0x35e;
        if (uVar23 < 0x35e) {
          uVar26 = uVar23;
        }
        lVar12 = *plVar25;
        cVar3 = *(char *)((longlong)param_2 + 0x69);
        local_3b0 = uVar9;
        local_3ac = uVar23;
        if (cVar3 == '\0') {
          FUN_14002049c(param_2,1);
        }
        local_3c8 = uVar26 * 0x4c + 0xf & 0x3fff0;
        local_3c0 = 1;
        _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,local_3a8,0);
        if (cVar3 == '\0') {
          FUN_14002049c(param_2,0);
        }
        memcpy(_Dst,(void *)((ulonglong)uVar9 * 0x4c + lVar12),(ulonglong)(uVar26 * 0x4c));
        local_39c = uVar26;
        if (*(char *)((longlong)param_2 + 0x69) == '\0') {
          FUN_14002049c(param_2,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,local_3a8);
          FUN_14002049c(param_2,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,local_3a8);
        }
        lVar12 = local_388;
        uVar5 = *(undefined8 *)
                 (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_388 * 2) * 8);
        FUN_146085968();
        FUN_1448e935e(uVar5,local_358,&DAT_14caf48b0,0);
        FUN_146085968();
        lVar19 = local_350;
        auVar6 = local_358;
        local_370 = (longlong)local_358;
        local_368 = local_350;
        uVar5 = *(undefined8 *)
                 (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + lVar12 * 2) * 8);
        FUN_146085e34();
        FUN_1448e935e(uVar5,local_358,&DAT_14caf4b00,0);
        FUN_146085e34();
        lVar12 = local_350;
        auVar7 = local_358;
        uVar23 = local_3ac;
        local_238 = DAT_14caf4bd0;
        if (auVar6 == (undefined1  [8])0x0) {
          lVar22 = 0;
        }
        else {
          lVar21 = (longlong)*(int *)((longlong)auVar6 + 0xd4);
          lVar22 = *(longlong *)(*(longlong *)(*(longlong *)(lVar19 + 8) + 0x50) + lVar21 * 8);
          if (lVar22 == 0) {
            lVar22 = FUN_1400bafc2(*(longlong *)(lVar19 + 8),lVar21,1);
          }
        }
        plVar25 = local_398;
        uStack_230 = lVar22;
        if (auVar7 == (undefined1  [8])0x0) {
          lVar19 = 0;
        }
        else {
          lVar22 = (longlong)*(int *)((longlong)auVar7 + 0xd4);
          lVar19 = *(longlong *)(*(longlong *)(*(longlong *)(lVar12 + 8) + 0x50) + lVar22 * 8);
          if (lVar19 == 0) {
            lVar19 = FUN_1400bafc2(*(longlong *)(lVar12 + 8),lVar22,1);
          }
        }
        uStack_1e0 = 0;
        local_228 = lVar19;
        lVar12 = FUN_140028f18(param_2,&local_238);
        if ((lVar12 != 0) && ((local_170 & 0x10000000) == 0)) {
          *(undefined4 *)(local_390 + 4) = uStack_218;
          *(undefined4 *)((longlong)local_390 + 0x24) = uStack_214;
          *(undefined4 *)(local_390 + 5) = (undefined4)uStack_210;
          *(undefined4 *)((longlong)local_390 + 0x2c) = uStack_210._4_4_;
          *(undefined4 *)(local_390 + 2) = (undefined4)local_228;
          *(undefined4 *)((longlong)local_390 + 0x14) = local_228._4_4_;
          *(undefined4 *)(local_390 + 3) = uStack_220;
          *(undefined4 *)((longlong)local_390 + 0x1c) = uStack_21c;
          *(undefined4 *)local_390 = (undefined4)local_238;
          *(undefined4 *)((longlong)local_390 + 4) = local_238._4_4_;
          *(undefined4 *)(local_390 + 1) = (undefined4)uStack_230;
          *(undefined4 *)((longlong)local_390 + 0xc) = uStack_230._4_4_;
          puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar24 + 4;
          if ((undefined8 *)param_2[1] < puVar14) {
            FUN_140023dd8(param_2,0x28);
            puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar14 = puVar24 + 4;
          }
          *param_2 = (ulonglong)puVar14;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar24;
          param_2[6] = (ulonglong)(puVar24 + 1);
          puVar24[1] = 0;
          *puVar24 = &PTR_LAB_14a37d348;
          puVar24[2] = lVar12;
          *(undefined4 *)(puVar24 + 3) = 0;
          *(undefined1 *)((longlong)puVar24 + 0x1c) = 1;
        }
        uVar9 = local_3b0;
        if (local_370 == 0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_368 + 8) + 0x50) +
                    (longlong)*(int *)(local_370 + 0xd4) * 8);
          if (lVar12 == 0) {
            lVar12 = FUN_1400bafc2(*(longlong *)(local_368 + 8),(longlong)*(int *)(local_370 + 0xd4)
                                   ,1);
          }
        }
        FUN_147c289d4(param_2,&local_370,lVar12);
        puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar24 + 5;
        if ((undefined8 *)param_2[1] < puVar14) {
          FUN_140023dd8(param_2);
          puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar24 + 5;
        }
        *param_2 = (ulonglong)puVar14;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar24;
        param_2[6] = (ulonglong)(puVar24 + 1);
        puVar24[1] = 0;
        *puVar24 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar24 + 2) = 0;
        puVar24[3] = local_3a8;
        *(undefined4 *)(puVar24 + 4) = 0;
        uVar5 = DAT_14caf6058;
        puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar24 + 5;
        if ((undefined8 *)param_2[1] < puVar14) {
          FUN_140023dd8(param_2,0x30);
          puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar24 + 5;
        }
        *param_2 = (ulonglong)puVar14;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar24;
        param_2[6] = (ulonglong)(puVar24 + 1);
        puVar24[1] = 0;
        *puVar24 = &PTR_LAB_14a1fb5a8;
        *(undefined4 *)(puVar24 + 2) = 1;
        puVar24[3] = uVar5;
        *(undefined4 *)(puVar24 + 4) = 0;
        uVar5 = DAT_14caf6040;
        puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar24 + 6;
        if ((undefined8 *)param_2[1] < puVar14) {
          FUN_140023dd8(param_2,0x38);
          puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar24 + 6;
        }
        uVar23 = uVar23 - local_39c;
        *param_2 = (ulonglong)puVar14;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        uVar9 = uVar9 + local_39c;
        *(undefined8 **)param_2[6] = puVar24;
        param_2[6] = (ulonglong)(puVar24 + 1);
        puVar24[1] = 0;
        *puVar24 = &PTR_FUN_14a1fb5b0;
        puVar24[2] = uVar5;
        puVar24[3] = 0;
        puVar24[4] = 4;
        *(undefined4 *)(puVar24 + 5) = 2;
        *(uint *)((longlong)puVar24 + 0x2c) = local_39c;
      } while (0 < (int)uVar23);
    }
    if ((*(byte *)((longlong)param_2 + 0x17b) & 8) != 0) {
      (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_2,1);
      *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xf7;
    }
    puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar24 + 2;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x18);
      puVar24 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar24 + 2;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar24;
    param_2[6] = (ulonglong)(puVar24 + 1);
    puVar24[1] = 0;
    *puVar24 = &PTR_LAB_14a217b58;
    *(byte *)((longlong)param_2 + 0x17b) = *(byte *)((longlong)param_2 + 0x17b) & 0xfd;
    *(undefined2 *)(param_2 + 0x2f) = 0;
    if (local_260 != 0) {
      LOCK();
      puVar1 = (uint *)(local_260 + 8);
      uVar23 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar23 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_260 + 8);
        LOCK();
        uVar23 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar23 >> 0x1e & 1) == 0) {
          bVar20 = *(byte *)(local_260 + 0xd);
          plVar15 = (longlong *)FUN_14001cc68(0x10,8);
          plVar15[1] = local_260;
          plVar17 = DAT_14ca843c0;
          plVar16 = DAT_14ca843c8;
          if ((bVar20 & 2) == 0) {
            do {
              *plVar15 = (longlong)plVar17;
              LOCK();
              bVar27 = plVar17 != DAT_14ca843c0;
              plVar16 = plVar15;
              if (bVar27) {
                plVar17 = DAT_14ca843c0;
                plVar16 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar16;
              UNLOCK();
            } while (bVar27);
          }
          else {
            do {
              *plVar15 = (longlong)plVar16;
              LOCK();
              bVar27 = plVar16 != DAT_14ca843c8;
              plVar17 = plVar15;
              if (bVar27) {
                plVar16 = DAT_14ca843c8;
                plVar17 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar17;
              UNLOCK();
            } while (bVar27);
          }
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = 0;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_147c26560(plVar25,0);
  }
  *(undefined4 *)(param_1 + 0xe0) = 2;
  uVar23 = 3;
  do {
    uVar9 = uVar23 - 1;
    if (*(int *)(param_1 + 0x90 + (ulonglong)uVar9 * 4) != 0) {
      *(undefined4 *)(param_1 + 0xdc) = 0;
      if ((int)uVar9 < 1) goto LAB_1435d8ceb;
      uVar18 = 0;
      goto LAB_1435d8cd3;
    }
    *(uint *)(param_1 + 0xe0) = uVar23 - 2;
    uVar23 = uVar9;
  } while (1 < uVar9);
  *(undefined4 *)(param_1 + 0xdc) = 0;
  goto LAB_1435d8ceb;
  while( true ) {
    uVar18 = uVar18 + 1;
    *(int *)(param_1 + 0xdc) = (int)uVar18;
    if (uVar9 == uVar18) break;
LAB_1435d8cd3:
    if (*(int *)(param_1 + 0x90 + uVar18 * 4) != 0) break;
  }
LAB_1435d8ceb:
  if ((local_70 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435d9974 FUN_1435d9974 body=1292 status=ok
// SIG undefined FUN_1435d9974(void)

void FUN_1435d9974(longlong param_1,longlong param_2)

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
  longlong *plVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)(param_1 + 8) != '\0') goto LAB_1435d9ad6;
  local_78 = *(undefined8 *)(param_2 + 0x58);
  uStack_70 = *(undefined4 *)(param_1 + 0xa8);
  uStack_80 = DAT_14caf3c88;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_88 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1435d99e0;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1435d99e5;
      goto LAB_1435d9a16;
    }
  }
  else {
LAB_1435d99e0:
    if (iVar6 != 0x10) {
LAB_1435d9a16:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_1435d99e5;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_1435d99e5;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_1435d9b9b;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_1435df720);
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
LAB_1435d9b9b:
          puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar16 + 0x19);
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
            puVar14 = (uint *)(puVar16 + 0x19);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1435d9c1b;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1435d9c1b:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14aa04960;
        *(undefined4 *)(puVar16 + 0x15) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar16 + 0xac) = local_88._4_4_;
        *(undefined4 *)(puVar16 + 0x16) = uStack_80;
        *(undefined4 *)((longlong)puVar16 + 0xb4) = uStack_7c;
        *(undefined4 *)(puVar16 + 0x17) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar16 + 0xbc) = local_78._4_4_;
        *(undefined4 *)(puVar16 + 0x18) = uStack_70;
        *(undefined4 *)((longlong)puVar16 + 0xc4) = uStack_6c;
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
        local_68[0] = (undefined1 *)0x0;
        local_58 = (longlong *)FUN_14001cc68(0x28,8);
        *local_58 = (longlong)&PTR_LAB_14aa04900;
        *(undefined4 *)(local_58 + 3) = (undefined4)local_78;
        *(undefined4 *)((longlong)local_58 + 0x1c) = local_78._4_4_;
        *(undefined4 *)(local_58 + 4) = uStack_70;
        *(undefined4 *)((longlong)local_58 + 0x24) = uStack_6c;
        *(undefined4 *)(local_58 + 1) = (undefined4)local_88;
        *(undefined4 *)((longlong)local_58 + 0xc) = local_88._4_4_;
        *(undefined4 *)(local_58 + 2) = uStack_80;
        *(undefined4 *)((longlong)local_58 + 0x14) = uStack_7c;
        if (local_58 + 1 != (longlong *)0x0) {
          local_68[0] = &LAB_1435e6d9e;
        }
        local_98 = local_68;
        FUN_14005a792(&DAT_14ca9a440,L"FVisualizeGPUParticlesCommand",&DAT_14caf59a4);
        if (local_68[0] != (undefined1 *)0x0) {
          plVar13 = local_58;
          if (local_58 == (longlong *)0x0) {
            plVar13 = local_48;
          }
          (**(code **)(*plVar13 + 0x10))();
        }
      }
      goto LAB_1435d9ad6;
    }
  }
LAB_1435d99e5:
  FUN_1435e617c(&local_88,&DAT_14ca85100);
LAB_1435d9ad6:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435d9e81 FUN_1435d9e81 body=113 status=ok
// SIG undefined FUN_1435d9e81(void)

longlong FUN_1435d9e81(undefined8 param_1)

{
  longlong lVar1;
  
  if ((((DAT_14c7616a4 == 0) || (DAT_14ca84e1d != '\x01')) || ((DAT_14c873768 & 1) == 0)) ||
     (DAT_14ca84e19 != '\x01')) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14001cc68(0x220,0x10);
    FUN_147c10a3e(lVar1);
    LOCK();
    *(int *)(lVar1 + 0x210) = *(int *)(lVar1 + 0x210) + 1;
    UNLOCK();
    FUN_1435d9ef2(lVar1,param_1);
    FUN_140308182(lVar1,0);
  }
  return lVar1;
}



// FUNCTION 1435d9ef2 FUN_1435d9ef2 body=2091 status=ok
// SIG undefined FUN_1435d9ef2(void)

void FUN_1435d9ef2(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_68 [34];
  undefined4 local_46;
  undefined2 local_42;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1435c63d4(&DAT_14caf3c38,&local_46,param_2);
  *(undefined2 *)(param_1 + 0x2c) = local_42;
  *(undefined4 *)(param_1 + 0x28) = local_46;
  FUN_1435c63d4(&DAT_14caf3c38,&local_46,param_2 + 0x10);
  *(undefined2 *)(param_1 + 0x32) = local_42;
  *(undefined4 *)(param_1 + 0x2e) = local_46;
  FUN_1435c63d4(&DAT_14caf3c38,&local_46,param_2 + 0x20);
  *(undefined2 *)(param_1 + 0x38) = local_42;
  *(undefined4 *)(param_1 + 0x34) = local_46;
  uVar6 = 0x3f800000;
  uVar7 = 0x3f800000;
  if (*(ushort *)(param_1 + 0x2c) != 0) {
    uVar7 = 0;
  }
  *(float *)(param_1 + 0x40) = ((float)*(ushort *)(param_1 + 0x28) + 0.5) * 0.001953125;
  *(float *)(param_1 + 0x44) = ((float)*(ushort *)(param_1 + 0x2a) + 0.5) * 0.001953125;
  *(float *)(param_1 + 0x48) = (float)(int)(*(ushort *)(param_1 + 0x2c) - 1) * 0.001953125;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  dVar1 = *(double *)(param_2 + 0x48);
  dVar2 = *(double *)(param_2 + 0x40);
  dVar3 = *(double *)(param_2 + 0x38);
  *(float *)(param_1 + 0x50) = (float)*(double *)(param_2 + 0x30);
  *(float *)(param_1 + 0x54) = (float)dVar3;
  *(float *)(param_1 + 0x58) = (float)dVar2;
  *(float *)(param_1 + 0x5c) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x68);
  dVar2 = *(double *)(param_2 + 0x60);
  dVar3 = *(double *)(param_2 + 0x58);
  *(float *)(param_1 + 0x60) = (float)*(double *)(param_2 + 0x50);
  *(float *)(param_1 + 100) = (float)dVar3;
  *(float *)(param_1 + 0x68) = (float)dVar2;
  *(float *)(param_1 + 0x6c) = (float)dVar1;
  if (*(ushort *)(param_1 + 0x32) != 0) {
    uVar6 = 0;
  }
  *(float *)(param_1 + 0x70) = ((float)*(ushort *)(param_1 + 0x2e) + 0.5) * 0.001953125;
  *(float *)(param_1 + 0x74) = ((float)*(ushort *)(param_1 + 0x30) + 0.5) * 0.001953125;
  *(float *)(param_1 + 0x78) = (float)(int)(*(ushort *)(param_1 + 0x32) - 1) * 0.001953125;
  *(undefined4 *)(param_1 + 0x7c) = uVar6;
  dVar1 = *(double *)(param_2 + 0x88);
  dVar2 = *(double *)(param_2 + 0x80);
  dVar3 = *(double *)(param_2 + 0x78);
  *(float *)(param_1 + 0x80) = (float)*(double *)(param_2 + 0x70);
  *(float *)(param_1 + 0x84) = (float)dVar3;
  *(float *)(param_1 + 0x88) = (float)dVar2;
  *(float *)(param_1 + 0x8c) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0xa8);
  dVar2 = *(double *)(param_2 + 0xa0);
  dVar3 = *(double *)(param_2 + 0x98);
  *(float *)(param_1 + 0x90) = (float)*(double *)(param_2 + 0x90);
  *(float *)(param_1 + 0x94) = (float)dVar3;
  *(float *)(param_1 + 0x98) = (float)dVar2;
  *(float *)(param_1 + 0x9c) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x128);
  dVar2 = *(double *)(param_2 + 0x120);
  dVar3 = *(double *)(param_2 + 0x118);
  *(float *)(param_1 + 0xa0) = (float)*(double *)(param_2 + 0x110);
  *(float *)(param_1 + 0xa4) = (float)dVar3;
  *(float *)(param_1 + 0xa8) = (float)dVar2;
  *(float *)(param_1 + 0xac) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x108);
  dVar2 = *(double *)(param_2 + 0x100);
  dVar3 = *(double *)(param_2 + 0xf8);
  *(float *)(param_1 + 0xb0) = (float)*(double *)(param_2 + 0xf0);
  *(float *)(param_1 + 0xb4) = (float)dVar3;
  *(float *)(param_1 + 0xb8) = (float)dVar2;
  *(float *)(param_1 + 0xbc) = (float)dVar1;
  bVar4 = *(byte *)(param_2 + 0x219);
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  cVar5 = *(char *)(param_2 + 0x218);
  if (cVar5 == '\x03') {
    *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  }
  else if (bVar4 == 0) {
    if (cVar5 == '\0') {
      *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
    }
    else if (cVar5 == '\x01') {
      *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
    }
  }
  else {
    if (bVar4 - 7 < 3) {
      *(undefined4 *)(param_1 + 200) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0xc0) = 0x3f800000;
    }
    if (bVar4 == 9) {
      uVar6 = 0x3fc90fdb;
    }
    else {
      uVar6 = 0;
    }
    *(undefined4 *)(param_1 + 0xe4) = uVar6;
  }
  uVar6 = 0;
  uVar7 = 0;
  if ((*(byte *)(param_2 + 0x230) & 1) != 0) {
    uVar7 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xf8) = uVar7;
  uVar7 = 0;
  if ((*(byte *)(param_2 + 0x230) & 2) != 0) {
    uVar7 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xdc) = uVar7;
  fVar9 = 0.0;
  fVar8 = 0.0;
  if (*(char *)(param_2 + 0x218) == '\x06') {
    fVar8 = *(float *)(param_2 + 0x234) * *(float *)(param_2 + 0x234);
    fVar9 = *(float *)(param_2 + 0x238) * *(float *)(param_2 + 0x238) - fVar8;
    uVar6 = 0x3f800000;
    if (fVar9 <= 1.0) {
      fVar9 = 1.0;
    }
    fVar9 = 1.0 / fVar9;
    fVar8 = fVar8 * fVar9;
    *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar6;
  *(float *)(param_1 + 0xd4) = fVar9;
  *(float *)(param_1 + 0xd8) = fVar8;
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_2 + 0x214);
  dVar1 = *(double *)(param_2 + 0x228);
  *(float *)(param_1 + 0xf0) = (float)*(double *)(param_2 + 0x220);
  *(float *)(param_1 + 0xf4) = (float)dVar1;
  if (*(ushort *)(param_1 + 0x38) == 0) {
    uVar6 = 0x3f800000;
  }
  else {
    uVar6 = 0;
  }
  *(float *)(param_1 + 0x100) = ((float)*(ushort *)(param_1 + 0x34) + 0.5) * 0.001953125;
  *(float *)(param_1 + 0x104) = ((float)*(ushort *)(param_1 + 0x36) + 0.5) * 0.001953125;
  *(float *)(param_1 + 0x108) = (float)(int)(*(ushort *)(param_1 + 0x38) - 1) * 0.001953125;
  *(undefined4 *)(param_1 + 0x10c) = uVar6;
  dVar1 = *(double *)(param_2 + 200);
  dVar2 = *(double *)(param_2 + 0xc0);
  dVar3 = *(double *)(param_2 + 0xb8);
  *(float *)(param_1 + 0x110) = (float)*(double *)(param_2 + 0xb0);
  *(float *)(param_1 + 0x114) = (float)dVar3;
  *(float *)(param_1 + 0x118) = (float)dVar2;
  *(float *)(param_1 + 0x11c) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0xe8);
  dVar2 = *(double *)(param_2 + 0xe0);
  dVar3 = *(double *)(param_2 + 0xd8);
  *(float *)(param_1 + 0x120) = (float)*(double *)(param_2 + 0xd0);
  *(float *)(param_1 + 0x124) = (float)dVar3;
  *(float *)(param_1 + 0x128) = (float)dVar2;
  *(float *)(param_1 + 300) = (float)dVar1;
  uVar6 = *(undefined4 *)(param_2 + 0x1f0);
  uVar7 = *(undefined4 *)(param_2 + 0x1e0);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x134) = uVar7;
  *(undefined4 *)(param_1 + 0x138) = uVar6;
  *(undefined4 *)(param_1 + 0x13c) = 0x3f800000;
  uVar6 = *(undefined4 *)(param_2 + 500);
  uVar7 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x1ec);
  *(undefined4 *)(param_1 + 0x144) = uVar7;
  *(undefined4 *)(param_1 + 0x148) = uVar6;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x150) = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x98);
  dVar1 = *(double *)(param_2 + 0x140);
  dVar2 = *(double *)(param_2 + 0x138);
  *(float *)(param_1 + 0x180) = (float)*(double *)(param_2 + 0x130);
  *(float *)(param_1 + 0x184) = (float)dVar2;
  *(float *)(param_1 + 0x188) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x158);
  dVar2 = *(double *)(param_2 + 0x150);
  *(float *)(param_1 + 400) = (float)*(double *)(param_2 + 0x148);
  *(float *)(param_1 + 0x194) = (float)dVar2;
  *(float *)(param_1 + 0x198) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x170);
  dVar2 = *(double *)(param_2 + 0x168);
  *(float *)(param_1 + 0x1a0) = (float)*(double *)(param_2 + 0x160);
  *(float *)(param_1 + 0x1a4) = (float)dVar2;
  *(float *)(param_1 + 0x1a8) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x188);
  dVar2 = *(double *)(param_2 + 0x180);
  *(float *)(param_1 + 0x1b0) = (float)*(double *)(param_2 + 0x178);
  *(float *)(param_1 + 0x1b4) = (float)dVar2;
  *(float *)(param_1 + 0x1b8) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x1a0);
  dVar2 = *(double *)(param_2 + 0x198);
  *(float *)(param_1 + 0x1c0) = (float)*(double *)(param_2 + 400);
  *(float *)(param_1 + 0x1c4) = (float)dVar2;
  *(float *)(param_1 + 0x1c8) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x1b8);
  dVar2 = *(double *)(param_2 + 0x1b0);
  *(float *)(param_1 + 0x1d0) = (float)*(double *)(param_2 + 0x1a8);
  *(float *)(param_1 + 0x1d4) = (float)dVar2;
  *(float *)(param_1 + 0x1d8) = (float)dVar1;
  dVar1 = *(double *)(param_2 + 0x1d0);
  dVar2 = *(double *)(param_2 + 0x1c8);
  *(float *)(param_1 + 0x1e0) = (float)*(double *)(param_2 + 0x1c0);
  *(float *)(param_1 + 0x1e4) = (float)dVar2;
  *(float *)(param_1 + 0x1e8) = (float)dVar1;
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0x1f8);
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_2 + 0x1fc);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_2 + 0x200);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(param_2 + 0x208);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_2 + 0x20c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x1dc);
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435da71e FUN_1435da71e body=162 status=ok
// SIG undefined FUN_1435da71e(void)

void FUN_1435da71e(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  short local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(short *)(param_1 + 0x2c) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x28);
    local_14 = *(short *)(param_1 + 0x2c);
    FUN_147c04ddc(&DAT_14caf3c50);
  }
  if (*(short *)(param_1 + 0x32) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x2e);
    local_14 = *(short *)(param_1 + 0x32);
    FUN_147c04ddc(&DAT_14caf3c50);
  }
  if (*(short *)(param_1 + 0x38) != 0) {
    local_18 = *(undefined4 *)(param_1 + 0x34);
    local_14 = *(short *)(param_1 + 0x38);
    FUN_147c04ddc(&DAT_14caf3c50);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435da7c2 FUN_1435da7c2 body=1211 status=ok
// SIG undefined FUN_1435da7c2(void)

void FUN_1435da7c2(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
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
  longlong *local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  LOCK();
  plVar2 = param_1 + 0x42;
  *(int *)plVar2 = (int)*plVar2 + -1;
  UNLOCK();
  if ((int)*plVar2 != 0) goto LAB_1435da8f8;
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_1435da812;
    if (iVar7 != 1) goto LAB_1435da80d;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1435da812;
  }
  else {
LAB_1435da80d:
    if (iVar7 == 0x10) goto LAB_1435da812;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_1435da812:
      (**(code **)(*param_1 + 0x20))(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1435da812;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar3 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar3;
    if (puVar11 != (uint *)0x0) goto LAB_1435da9ba;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1435df720);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar3 = puVar10;
      FUN_140217a48(puVar3);
      puVar11 = (uint *)*puVar3;
LAB_1435da9ba:
      puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar17 + 0x16);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar4 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar4 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar3;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar3 = puVar11;
        puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_1435daa3a;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1435daa3a:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar17,0);
    *puVar17 = &PTR_FUN_14aa04290;
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar16 != '\x06') {
        uVar6 = uVar16;
      }
      uVar16 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar16 == '\x06') {
        uVar16 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
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
    local_48 = &PTR_LAB_14aa04270;
    local_68[0] = FUN_147c26f60;
    local_40 = param_1;
    FUN_14005a792(&DAT_14ca9a440,L"ReleaseCommand",&DAT_14caf5614);
    if (local_68[0] != (code *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_1435da8f8:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435dac96 FUN_1435dac96 body=409 status=ok
// SIG undefined FUN_1435dac96(void)

void FUN_1435dac96(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  longlong local_58;
  undefined4 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = &local_34;
  uVar1 = *(undefined8 *)(&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(param_1 + 0xc) * 8);
  local_60 = &local_40;
  local_58 = param_1;
  local_48 = param_3;
  local_40 = uVar1;
  local_34 = param_2;
  FUN_145dc22a2();
  lVar2 = 0;
  FUN_1448e935e(uVar1,&local_30,&DAT_14caf4348,0);
  FUN_145dc22a2();
  if (local_30 != 0) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_28 + 8) + 0x50) +
             (longlong)*(int *)(local_30 + 0xd4) * 8);
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(local_28 + 8),(longlong)*(int *)(local_30 + 0xd4),1);
    }
  }
  FUN_1435dae30(&local_60,lVar2);
  uVar1 = local_40;
  FUN_14608f480();
  lVar2 = 0;
  FUN_1448e935e(uVar1,&local_30,&DAT_14caf4470,0);
  FUN_14608f480();
  if (local_30 != 0) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_28 + 8) + 0x50) +
             (longlong)*(int *)(local_30 + 0xd4) * 8);
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(local_28 + 8),(longlong)*(int *)(local_30 + 0xd4),1);
    }
  }
  FUN_1435dae30(&local_60,lVar2);
  uVar1 = local_40;
  FUN_14608f6ec();
  lVar2 = 0;
  FUN_1448e935e(uVar1,&local_30,&DAT_14caf4598,0);
  FUN_14608f6ec();
  if (local_30 != 0) {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_28 + 8) + 0x50) +
             (longlong)*(int *)(local_30 + 0xd4) * 8);
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(local_28 + 8),(longlong)*(int *)(local_30 + 0xd4),1);
    }
  }
  FUN_1435dae30(&local_60,lVar2);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435dae30 FUN_1435dae30 body=602 status=ok
// SIG undefined FUN_1435dae30(void)

void FUN_1435dae30(undefined8 *param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_218 [32];
  undefined8 local_1f8;
  longlong local_1f0;
  undefined8 local_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  uVar4 = *(undefined8 *)*param_1;
  FUN_145e46ec0();
  lVar6 = 0;
  FUN_1448e935e(uVar4,&local_1f8,&DAT_14caf4220,0);
  FUN_145e46ec0();
  local_d0 = 0;
  uStack_c8 = 0;
  local_f0 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_bc = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  local_50 = 1;
  local_48 = 0;
  uStack_d8 = DAT_14c9c0d98;
  local_e0 = DAT_14c9c0db0;
  uStack_e8 = DAT_14c9c0d50;
  puVar7 = &DAT_14caf4780;
  if (*(int *)(param_1[1] + 8) < 2) {
    puVar7 = &DAT_14caf4798;
  }
  local_118 = puVar7[2];
  if (local_1f8 != 0) {
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(local_1f0 + 8) + 0x50) +
             (longlong)*(int *)(local_1f8 + 0xd4) * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(*(longlong *)(local_1f0 + 8),(longlong)*(int *)(local_1f8 + 0xd4),1);
    }
  }
  local_c0 = 0;
  local_110 = lVar6;
  uStack_108 = param_2;
  local_48 = (**(code **)(*DAT_14ca83900 + 0x2f8))(DAT_14ca83900,&local_118);
  local_bc = 2;
  uStack_b8 = 0xa01;
  uStack_b4 = 0;
  uStack_b0 = 9;
  uStack_ac = 0;
  uStack_a8 = 9;
  uStack_a4 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  uStack_77 = 0;
  uStack_90 = 0;
  local_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_a0 = 0;
  local_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_58 = CONCAT62(local_58._2_6_,1);
  local_70 = 0;
  local_58 = local_58 & 0xffffffffffff;
  local_68 = 0;
  uStack_60 = 0;
  memcpy((void *)((longlong)&local_1f8 + 6),&local_118,0xd8);
  plVar5 = (longlong *)param_1[3];
  uVar2 = *(uint *)param_1[2];
  iVar3 = (int)plVar5[1];
  *(uint *)(plVar5 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
    FUN_14069191a(plVar5,iVar3);
  }
  puVar1 = (undefined2 *)(*plVar5 + (longlong)iVar3 * 0x130);
  *puVar1 = 0x100;
  memcpy(puVar1 + 1,&local_1f8,0xde);
  *(undefined8 *)(puVar1 + 0x88) = 0;
  *(undefined8 *)(puVar1 + 0x8c) = 0x300000000;
  *(uint *)(puVar1 + 0x90) = uVar2 & 0x7fffffff;
  *(undefined8 *)(puVar1 + 0x94) = 0;
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435db0a4 FUN_1435db0a4 body=69 status=ok
// SIG undefined FUN_1435db0a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435db0a4(void)

{
  _DAT_14caf50a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435db0e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf50a8,1);
  return;
}



// FUNCTION 1435db0ea FUN_1435db0ea body=761 status=ok
// SIG undefined FUN_1435db0ea(void)

undefined8 FUN_1435db0ea(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  float fVar12;
  undefined4 uVar13;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = FUN_145a6b3a6();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (lVar9 = param_2,
     *(longlong *)
      (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
     != lVar4 + 0x30)) {
    lVar9 = 0;
  }
  lVar4 = FUN_1459588c0();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30) {
      lVar6 = param_2;
    }
  }
  lVar4 = FUN_145b3bf70();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30) {
      lVar8 = param_2;
    }
  }
  lVar4 = FUN_145b3c05a();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30) {
      lVar10 = param_2;
    }
  }
  param_4 = param_4 / 100.0;
  lVar4 = FUN_145b3be86();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      == lVar4 + 0x30)) {
    *(float *)(param_2 + 0x50) = *(float *)(param_2 + 0x50) * param_4;
    *(float *)(param_2 + 0x54) = param_4 * *(float *)(param_2 + 0x54);
    goto LAB_1435db2a1;
  }
  if (lVar10 != 0) {
    plVar11 = (longlong *)(lVar10 + 0x28);
    iVar1 = (*(code *)**(undefined8 **)(lVar10 + 0x28))(plVar11);
    if (0 < iVar1) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*plVar11 + 8))(plVar11);
        if (0 < iVar2) {
          iVar2 = 0;
          do {
            fVar12 = (float)(**(code **)(*plVar11 + 0x20))(plVar11,iVar2,iVar1);
            (**(code **)(*plVar11 + 0x70))(plVar11,iVar2,iVar1,fVar12 * param_4);
            iVar2 = iVar2 + 1;
            iVar3 = (**(code **)(*plVar11 + 8))(plVar11);
          } while (iVar2 < iVar3);
        }
        iVar1 = iVar1 + 1;
        iVar2 = (**(code **)*plVar11)(plVar11);
      } while (iVar1 < iVar2);
    }
    goto LAB_1435db2a1;
  }
  if (lVar9 == 0) {
    if (lVar6 != 0) {
      if (param_3 == 0) {
LAB_1435db2be:
        param_3 = 0;
      }
      else {
        lVar4 = FUN_1459588c0();
        if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1435db2be;
      }
      plVar11 = (longlong *)(param_3 + 0x28);
      iVar1 = (*(code *)**(undefined8 **)(param_3 + 0x28))(plVar11);
      if (0 < iVar1) {
        plVar7 = (longlong *)(lVar6 + 0x28);
        iVar1 = 0;
        do {
          uVar13 = (**(code **)(*plVar11 + 0x18))(plVar11,iVar1);
          (**(code **)(*plVar7 + 0x58))(plVar7,uVar13);
          iVar2 = (**(code **)(*plVar11 + 8))(plVar11);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              fVar12 = (float)(**(code **)(*plVar11 + 0x20))(plVar11,iVar2,iVar1);
              (**(code **)(*plVar7 + 0x70))(plVar7,iVar2,iVar1,fVar12 * param_4);
              iVar2 = iVar2 + 1;
              iVar3 = (**(code **)(*plVar11 + 8))(plVar11);
            } while (iVar2 < iVar3);
          }
          iVar1 = iVar1 + 1;
          iVar2 = (**(code **)*plVar11)(plVar11);
        } while (iVar1 < iVar2);
      }
      goto LAB_1435db2a1;
    }
    if (lVar8 == 0) {
      return 0;
    }
    lVar9 = lVar8 + 0x28;
    (**(code **)(*(longlong *)(lVar8 + 0x28) + 0x70))(lVar9,0,0,*(float *)(lVar8 + 0x38) * param_4);
    fVar12 = *(float *)(lVar8 + 0x3c);
    lVar4 = *(longlong *)(lVar8 + 0x28);
    uVar5 = 1;
  }
  else {
    if (param_3 == 0) {
LAB_1435db26a:
      param_3 = 0;
    }
    else {
      lVar4 = FUN_145a6b3a6();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) goto LAB_1435db26a;
    }
    fVar12 = *(float *)(param_3 + 0x38);
    lVar4 = *(longlong *)(lVar9 + 0x28);
    lVar9 = lVar9 + 0x28;
    uVar5 = 0;
  }
  (**(code **)(lVar4 + 0x70))(lVar9,uVar5,0,param_4 * fVar12);
LAB_1435db2a1:
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 2;
  return 1;
}



// FUNCTION 1435db3e4 FUN_1435db3e4 body=757 status=ok
// SIG undefined FUN_1435db3e4(void)

undefined8 FUN_1435db3e4(undefined8 param_1,longlong param_2,undefined8 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar4 = FUN_145a6b57e();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (lVar8 = param_2,
     *(longlong *)
      (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
     != lVar4 + 0x30)) {
    lVar8 = 0;
  }
  lVar4 = FUN_145b3c144();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30) {
      lVar7 = param_2;
    }
  }
  lVar4 = FUN_145b3c318();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    lVar10 = 0;
  }
  else {
    lVar10 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30) {
      lVar10 = param_2;
    }
  }
  lVar4 = FUN_145b3c402();
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) {
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) == lVar4 + 0x30) {
      lVar5 = param_2;
    }
  }
  param_4 = param_4 / 100.0;
  lVar4 = FUN_145b3c22e();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
      != lVar4 + 0x30)) {
    if (lVar5 != 0) {
      plVar6 = (longlong *)(lVar5 + 0x28);
      iVar1 = (*(code *)**(undefined8 **)(lVar5 + 0x28))(plVar6);
      if (0 < iVar1) {
        iVar1 = 0;
        do {
          iVar2 = (**(code **)(*plVar6 + 8))(plVar6);
          if (0 < iVar2) {
            iVar2 = 0;
            do {
              fVar11 = (float)(**(code **)(*plVar6 + 0x20))(plVar6,iVar2,iVar1);
              (**(code **)(*plVar6 + 0x70))(plVar6,iVar2,iVar1,fVar11 * param_4);
              iVar2 = iVar2 + 1;
              iVar3 = (**(code **)(*plVar6 + 8))(plVar6);
            } while (iVar2 < iVar3);
          }
          iVar1 = iVar1 + 1;
          iVar2 = (**(code **)*plVar6)(plVar6);
        } while (iVar1 < iVar2);
      }
      goto LAB_1435db5fc;
    }
    if (lVar8 == 0) {
      if (lVar7 != 0) {
        plVar6 = (longlong *)(lVar7 + 0x28);
        iVar1 = (*(code *)**(undefined8 **)(lVar7 + 0x28))(plVar6);
        if (0 < iVar1) {
          iVar1 = 0;
          do {
            iVar2 = (**(code **)(*plVar6 + 8))(plVar6);
            if (0 < iVar2) {
              iVar2 = 0;
              do {
                fVar11 = (float)(**(code **)(*plVar6 + 0x20))(plVar6,iVar2,iVar1);
                (**(code **)(*plVar6 + 0x70))(plVar6,iVar2,iVar1,fVar11 * param_4);
                iVar2 = iVar2 + 1;
                iVar3 = (**(code **)(*plVar6 + 8))(plVar6);
              } while (iVar2 < iVar3);
            }
            iVar1 = iVar1 + 1;
            iVar2 = (**(code **)*plVar6)(plVar6);
          } while (iVar1 < iVar2);
        }
        goto LAB_1435db5fc;
      }
      if (lVar10 == 0) {
        return 0;
      }
      dVar12 = (double)param_4;
      *(double *)(lVar10 + 0x50) = *(double *)(lVar10 + 0x50) * dVar12;
      *(double *)(lVar10 + 0x58) = *(double *)(lVar10 + 0x58) * dVar12;
      *(double *)(lVar10 + 0x60) = *(double *)(lVar10 + 0x60) * dVar12;
      *(double *)(lVar10 + 0x38) = *(double *)(lVar10 + 0x38) * dVar12;
      *(double *)(lVar10 + 0x40) = *(double *)(lVar10 + 0x40) * dVar12;
      pdVar9 = (double *)(lVar10 + 0x48);
    }
    else {
      *(double *)(lVar8 + 0x38) = *(double *)(lVar8 + 0x38) * (double)param_4;
      *(double *)(lVar8 + 0x40) = *(double *)(lVar8 + 0x40) * (double)param_4;
      pdVar9 = (double *)(lVar8 + 0x48);
    }
  }
  else {
    dVar12 = (double)param_4;
    *(double *)(param_2 + 0x90) = *(double *)(param_2 + 0x90) * dVar12;
    *(double *)(param_2 + 0x98) = *(double *)(param_2 + 0x98) * dVar12;
    *(double *)(param_2 + 0xa0) = *(double *)(param_2 + 0xa0) * dVar12;
    *(double *)(param_2 + 0xa8) = *(double *)(param_2 + 0xa8) * dVar12;
    *(double *)(param_2 + 0xb0) = *(double *)(param_2 + 0xb0) * dVar12;
    pdVar9 = (double *)(param_2 + 0xb8);
  }
  *pdVar9 = (double)param_4 * *pdVar9;
LAB_1435db5fc:
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) | 2;
  return 1;
}



// FUNCTION 1435db6da FUN_1435db6da body=282 status=ok
// SIG undefined FUN_1435db6da(void)

longlong *
FUN_1435db6da(longlong *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,char param_5,
             char param_6)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  longlong local_58 [3];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = (**(code **)(*param_1 + 0x338))();
  if (cVar1 == '\x01' && param_6 == '\0') {
    *(byte *)((longlong)param_1 + 0x2a) =
         *(byte *)((longlong)param_1 + 0x2a) | (byte)(1 << (*(byte *)(param_3 + 0x28) & 0x1f));
    plVar3 = param_1;
  }
  else {
    local_68 = 0xfff00007;
    local_70 = 0;
    local_78 = 0;
    plVar2 = (longlong *)FUN_14092e7b3(param_1,param_1[4],0,0xffffffff);
    plVar3 = (longlong *)0x0;
    if (((plVar2 != (longlong *)0x0) &&
        (*(char *)((longlong)plVar2 + 0x2a) = (char)(1 << (*(byte *)(param_3 + 0x28) & 0x1f)),
        plVar3 = plVar2, param_5 != '\0')) &&
       (cVar1 = (**(code **)(*plVar2 + 0x308))(plVar2,param_1,param_4,param_3), cVar1 == '\0')) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = param_1[3];
      FUN_1400348e2(local_58 + 2,local_58);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      plVar3 = (longlong *)0x0;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1435db7f5 FUN_1435db7f5 body=69 status=ok
// SIG undefined FUN_1435db7f5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435db7f5(void)

{
  _DAT_14caf50b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435db837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf50c0,1);
  return;
}



// FUNCTION 1435db83a FUN_1435db83a body=69 status=ok
// SIG undefined FUN_1435db83a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435db83a(void)

{
  _DAT_14caf50d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435db87c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf50d8,1);
  return;
}



// FUNCTION 1435db87f FUN_1435db87f body=69 status=ok
// SIG undefined FUN_1435db87f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435db87f(void)

{
  _DAT_14caf50f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435db8c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf50f8,1);
  return;
}



// FUNCTION 1435db8c4 FUN_1435db8c4 body=167 status=ok
// SIG undefined FUN_1435db8c4(void)

longlong * FUN_1435db8c4(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_3 + 0xb0);
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_3);
  }
  plVar3 = (longlong *)0x0;
  if ((*(longlong *)(lVar2 + 0x218) != 0) && (DAT_14c7616a4 != 0)) {
    if ((DAT_14ca84e1d == '\x01') && (((DAT_14c873768 & 1) != 0 && (DAT_14ca84e19 == '\x01')))) {
      uVar1 = *(undefined8 *)(param_3 + 0x830);
      plVar3 = (longlong *)FUN_14001cc68(0x360,0x10);
      FUN_147c10908(plVar3,uVar1,param_1 + 0x30);
      (**(code **)(*plVar3 + 8))(plVar3,param_2,param_3);
    }
    else {
      plVar3 = (longlong *)0x0;
    }
  }
  return plVar3;
}



// FUNCTION 1435db96c FUN_1435db96c body=369 status=ok
// SIG undefined FUN_1435db96c(void)

void FUN_1435db96c(longlong param_1,longlong param_2,ulonglong param_3,float param_4,
                  longlong param_5)

{
  float fVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  param_3 = param_3 & 0xffffffff;
  local_70 = 0;
  local_78 = 0;
  FUN_147a776dc(param_1 + 0x30,&local_68,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  *(float *)(param_5 + param_3) = (float)local_68;
  *(float *)(param_5 + 4 + param_3) = (float)local_60;
  *(float *)(param_5 + 8 + param_3) = (float)local_58;
  local_70 = 0;
  local_78 = 0;
  FUN_147a776dc(param_1 + 0x90,&local_68,*(undefined4 *)(param_2 + 0x1a0),
                *(undefined8 *)(param_2 + 0x10));
  *(float *)(param_5 + 0xc + param_3) = (float)local_68;
  *(float *)(param_5 + 0x10 + param_3) = (float)local_60;
  *(float *)(param_5 + 0x14 + param_3) = (float)local_58;
  fVar1 = (float)FUN_147a77524(param_1 + 0xf0,*(undefined4 *)(param_2 + 0x1a0),
                               *(undefined8 *)(param_2 + 0x10),0);
  *(int *)(param_5 + 0x18 + param_3) = (int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
  fVar1 = (float)FUN_147a77524(param_1 + 0x188,*(undefined4 *)(param_2 + 0x1a0),
                               *(undefined8 *)(param_2 + 0x10),0);
  *(float *)(param_5 + 0x1c + param_3) = fVar1;
  if (param_4 < fVar1) {
    *(uint *)(param_5 + 0x6c) = *(uint *)(param_5 + 0x6c) & 0x3fffffff | 0x40000000;
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435dbade FUN_1435dbade body=69 status=ok
// SIG undefined FUN_1435dbade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435dbade(void)

{
  _DAT_14caf5118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001435dbb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14caf5120,1);
  return;
}



// FUNCTION 1435dbb24 FUN_1435dbb24 body=8536 status=ok
// SIG undefined FUN_1435dbb24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1435dbb24(longlong *param_1,longlong *param_2,ulonglong param_3,float param_4)

{
  undefined1 (*pauVar1) [16];
  float fVar2;
  ushort uVar3;
  void *_Src;
  longlong lVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  uint *puVar7;
  undefined1 uVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  undefined4 uVar15;
  longlong lVar16;
  byte *pbVar17;
  ulonglong uVar18;
  longlong lVar19;
  double *pdVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  double *pdVar26;
  int iVar27;
  ulonglong uVar28;
  float *pfVar29;
  longlong lVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  float fVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auStack_4a8 [32];
  undefined1 *local_488;
  double *local_480;
  double *local_478;
  double *local_470;
  undefined2 *local_468;
  undefined1 *local_460;
  undefined1 *local_458;
  code **local_450;
  code *local_448;
  code *local_440;
  byte local_431;
  byte *local_430;
  longlong local_428;
  longlong local_420;
  float *local_418;
  double dStack_410;
  longlong local_400;
  longlong local_3f8;
  longlong local_3f0;
  int local_3e4;
  ulonglong local_3e0;
  longlong *local_3d8;
  ulonglong local_3d0;
  uint *local_3c8;
  double local_3c0;
  longlong local_3b8;
  undefined1 *local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  undefined8 uStack_390;
  double local_388;
  undefined8 uStack_380;
  double local_378;
  undefined8 uStack_370;
  double local_368;
  double dStack_360;
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined1 local_268 [4];
  float local_264;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double local_228;
  double dStack_220;
  double local_218;
  undefined4 local_1c4;
  undefined1 local_1b0 [24];
  undefined4 local_198;
  uint local_190;
  int local_18c;
  undefined8 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  code *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4a8;
  lVar16 = *(longlong *)(param_2[2] + 0xb0);
  if (lVar16 == 0) {
    lVar16 = FUN_1448abda6();
  }
  if ((*(int *)((longlong)param_2 + 0x18c) == 0) ||
     (((lVar16 != 0 && ((*(uint *)(param_1 + 0x37) & 1) != 0)) &&
      ((*(byte *)(lVar16 + 0x154) & 8) != 0)))) goto LAB_1435dbbfd;
  local_3b0 = *(undefined1 **)(param_2[2] + 0xa8);
  lVar22 = param_2[3];
  uVar12 = (**(code **)(*param_2 + 0x150))(param_2);
  uVar8 = (**(code **)(*param_2 + 0x158))(param_2);
  local_418 = (float *)CONCAT71(local_418._1_7_,uVar8);
  local_428 = param_2[2];
  if ((((*(byte *)(local_428 + 0x693) & 0x10) == 0) && (DAT_14c86a9f8 == '\x01')) &&
     (iVar27 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar27 != 2)) {
    local_3f0 = 0x900;
    if (iVar27 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      local_3f0 = 0x900;
      if (DVar13 == DVar14) goto LAB_1435dbd1a;
    }
  }
  else {
LAB_1435dbd1a:
    local_3f0 = 0x240;
  }
  pdVar26 = (double *)(local_428 + 0x40 + local_3f0);
  local_368 = *pdVar26;
  dStack_360 = pdVar26[1];
  local_3a0 = *(double *)(local_428 + 0x50 + local_3f0);
  local_420 = lVar22;
  if ((*(longlong *)(lVar22 + 0x58) == 0) ||
     (local_3c8 = (uint *)FUN_147bf7da6(), local_3c8 == (uint *)0x0)) {
    local_3c8 = (uint *)0x0;
  }
  else if (((*local_3c8 & 4) == 0) && ((*local_3c8 & 2) == 0)) {
    local_3c8 = (uint *)0x0;
  }
  pbVar17 = (byte *)FUN_147bf7da6(param_2,param_1);
  lVar22 = param_2[2];
  local_108 = (void *)0x0;
  local_100 = *(int *)(lVar22 + 0x870);
  lVar30 = (longlong)local_100;
  _Src = *(void **)(lVar22 + 0x868);
  if (lVar30 == 0) {
    local_fc = 0;
  }
  else {
    local_430 = pbVar17;
    FUN_1447c510a(&local_108,local_100,0);
    memcpy(local_108,_Src,lVar30 << 2);
    pbVar17 = local_430;
  }
  lVar30 = local_420;
  local_3e0 = (ulonglong)*(uint *)(lVar22 + 0x860);
  bVar11 = *(byte *)(lVar16 + 0x152);
  if ((bVar11 == 1) || ((bVar11 < 7 && ((0x68U >> (bVar11 & 0x1f) & 1) != 0)))) {
    if ((*(byte *)(param_1 + 0x37) & 2) == 0) {
LAB_1435dbec4:
      local_400 = lVar22;
      if ((*(float *)((longlong)param_1 + 0x1bc) <= 2097152.0 &&
           *(float *)((longlong)param_1 + 0x1bc) != 2097152.0) &&
         (7 < *(int *)((longlong)param_2 + 0x18c))) {
        bVar11 = *pbVar17;
        if (bVar11 == 0) {
          lVar22 = param_2[2];
          lVar19 = *(longlong *)(lVar22 + 0x668);
          local_430 = pbVar17;
          if ((lVar19 == 0) || ((*(byte *)(lVar19 + 0xec) & 2) == 0)) {
            if (((*(byte *)(lVar22 + 0x693) & 0x10) == 0) &&
               ((DAT_14c86a9f8 == '\x01' &&
                (iVar27 = *(int *)(*(longlong *)
                                    ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8
                                    ) + 0xc60), iVar27 != 2)))) {
              lVar19 = 0x878;
              if (iVar27 == 1) {
                uVar15 = FUN_140ad26c0();
                local_3f8 = CONCAT44(local_3f8._4_4_,uVar15);
                DVar13 = GetCurrentThreadId();
                if ((DWORD)local_3f8 == DVar13) goto LAB_1435dd82e;
              }
            }
            else {
LAB_1435dd82e:
              lVar19 = 0x160;
            }
            dVar42 = *(double *)(lVar22 + 0x10 + lVar19);
            dVar49 = *(double *)(lVar22 + 0x28 + lVar19);
            dVar54 = dVar42 + dVar49;
            dVar32 = *(double *)(lVar22 + 8 + lVar19);
            dVar34 = *(double *)(lVar22 + 0x20 + lVar19);
            dVar55 = dVar32 + dVar34;
            dVar40 = *(double *)(lVar22 + 0x18 + lVar19);
            dVar33 = *(double *)(lVar22 + lVar19) + dVar40;
            dVar42 = dVar42 - dVar49;
            dVar32 = dVar32 - dVar34;
            dVar40 = *(double *)(lVar22 + lVar19) - dVar40;
          }
          else if (*(char *)(lVar19 + 0xd8) == '\0') {
            dVar33 = 0.0;
            dVar55 = 0.0;
            dVar54 = 0.0;
            dVar42 = 0.0;
            dVar40 = 0.0;
            dVar32 = 0.0;
          }
          else {
            dVar46 = *(double *)(local_428 + local_3f0);
            dVar45 = ((double *)(local_428 + local_3f0))[1];
            dVar51 = *(double *)(local_428 + 0x10 + local_3f0);
            pdVar26 = (double *)(local_428 + 0x40 + local_3f0);
            dVar34 = *pdVar26;
            dVar48 = pdVar26[1];
            pdVar26 = (double *)(local_428 + 0x50 + local_3f0);
            dVar50 = *pdVar26;
            dVar33 = dVar51 + dVar51;
            dVar40 = dVar46 + dVar46;
            dVar55 = dVar45 + dVar45;
            dVar32 = *(double *)(local_428 + local_3f0) * dVar33;
            pdVar20 = (double *)(local_428 + 0x18 + local_3f0);
            dVar49 = *pdVar20;
            dVar42 = *pdVar20;
            dVar54 = dVar55 * dVar49;
            auVar41._0_8_ = (dVar54 + dVar32) * dVar50;
            auVar41._8_8_ =
                 (dVar40 * dVar42 + *(double *)(local_428 + local_3f0) * dVar40) * pdVar26[1];
            dVar49 = dVar33 * dVar49;
            dVar42 = dVar40 * dVar42;
            auVar38._0_8_ = (1.0 - (dVar33 * dVar51 + dVar55 * dVar45)) * dVar34;
            auVar38._8_8_ = (1.0 - (dVar33 * dVar51 + dVar40 * dVar46)) * dVar48;
            dVar52 = (dVar49 + dVar55 * dVar46) * dVar34;
            dVar35 = (dVar42 + dVar33 * dVar45) * dVar48;
            dVar34 = (dVar32 - dVar54) * dVar34;
            auVar56._0_8_ = dVar48 * (dVar55 * dVar46 - dVar49);
            auVar56._8_8_ = dVar50 * (dVar33 * dVar45 - dVar42);
            auVar41 = blendpd(auVar41,auVar56,2);
            auVar56 = blendpd(auVar56,auVar38,2);
            dVar50 = (1.0 - (dVar40 * dVar46 + dVar55 * dVar45)) * dVar50;
            dVar49 = (*(double *)(lVar19 + 0xa8) + *(double *)(lVar19 + 0xc0)) * 0.5;
            dVar54 = (*(double *)(lVar19 + 0xb0) + *(double *)(lVar19 + 200)) * 0.5;
            dVar42 = (*(double *)(lVar19 + 0xb8) + *(double *)(lVar19 + 0xd0)) * 0.5;
            dVar51 = (*(double *)(lVar19 + 0xc0) - *(double *)(lVar19 + 0xa8)) * 0.5;
            dVar48 = (*(double *)(lVar19 + 200) - *(double *)(lVar19 + 0xb0)) * 0.5;
            dVar43 = (*(double *)(lVar19 + 0xd0) - *(double *)(lVar19 + 0xb8)) * 0.5;
            pdVar26 = (double *)(local_428 + 0x20 + local_3f0);
            dVar46 = dVar42 * auVar41._0_8_ + dVar54 * auVar56._0_8_ + dVar49 * auVar38._0_8_ +
                     *pdVar26;
            dVar45 = dVar42 * auVar41._8_8_ + dVar54 * auVar56._8_8_ + dVar49 * dVar52 + pdVar26[1];
            uVar18 = DAT_149931180;
            uVar28 = DAT_149931180._8_8_;
            dVar33 = (double)((ulonglong)(dVar43 * auVar41._0_8_) & uVar18) +
                     (double)((ulonglong)(auVar56._0_8_ * dVar48) & uVar18) +
                     (double)((ulonglong)(dVar51 * auVar38._0_8_) & uVar18);
            dVar55 = (double)((ulonglong)(dVar43 * auVar41._8_8_) & uVar28) +
                     (double)((ulonglong)(auVar56._8_8_ * dVar48) & uVar28) +
                     (double)((ulonglong)(dVar51 * dVar52) & uVar28);
            dVar40 = dVar46 - dVar33;
            dVar32 = dVar45 - dVar55;
            dVar33 = dVar33 + dVar46;
            dVar55 = dVar55 + dVar45;
            dVar49 = dVar42 * dVar50 + dVar54 * dVar35 + dVar49 * dVar34 +
                     *(double *)(local_428 + 0x30 + local_3f0);
            dVar54 = (double)((ulonglong)(dVar48 * dVar35) & uVar18) +
                     (double)((ulonglong)(dVar51 * dVar34) & uVar18) +
                     (double)((ulonglong)(dVar43 * dVar50) & uVar18);
            dVar42 = dVar49 - dVar54;
            dVar54 = dVar54 + dVar49;
          }
          if (0 < (int)local_3e0) {
            pdVar26 = (double *)(*(longlong *)(local_400 + 0x858) + 0x10);
            uVar18 = 0;
            do {
              dVar49 = (double)((1.0 / *(float *)((longlong)local_108 + uVar18 * 4)) *
                               *(float *)((longlong)param_1 + 0x1bc));
              dVar49 = dVar49 * 0.07500000298023224 + dVar49;
              if (((((dVar40 - dVar49 < pdVar26[-2]) && (pdVar26[-2] < dVar33 + dVar49)) &&
                   (dVar32 - dVar49 < pdVar26[-1])) &&
                  ((pdVar26[-1] < dVar55 + dVar49 && (dVar42 - dVar49 < *pdVar26)))) &&
                 (*pdVar26 < dVar49 + dVar54)) {
                bVar11 = *local_430;
                pbVar17 = local_430;
                goto LAB_1435dbee8;
              }
              uVar18 = uVar18 + 1;
              pdVar26 = pdVar26 + 3;
            } while (local_3e0 != uVar18);
          }
          bVar11 = *local_430 + 1;
          if (0x1e < bVar11) {
            bVar11 = 0;
          }
          *local_430 = bVar11;
          goto LAB_1435dbe6c;
        }
LAB_1435dbee8:
        bVar9 = bVar11 + 1;
        if (0x1e < (byte)(bVar11 + 1)) {
          bVar9 = 0;
        }
        *pbVar17 = bVar9;
      }
      lVar22 = local_400;
      if (0 < *(int *)(local_400 + 0x860)) {
        lVar19 = 0;
        do {
          fVar31 = *(float *)((longlong)local_108 + lVar19 * 4);
          *(float *)((longlong)local_108 + lVar19 * 4) = fVar31 * fVar31;
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(local_400 + 0x860));
      }
      goto LAB_1435dbf27;
    }
    dVar42 = *(double *)(lVar16 + 0x6d0);
    lVar19 = param_2[2];
    if ((*(int *)(lVar19 + 0x3d4) < 0) &&
       ((lVar23 = *(longlong *)(lVar19 + 0xb0), lVar23 != 0 ||
        (local_430 = pbVar17, lVar23 = FUN_1448abda6(), pbVar17 = local_430, lVar23 != 0)))) {
      fVar31 = (float)*(double *)(lVar23 + 0x6d0);
    }
    else {
      fVar31 = *(float *)(lVar19 + 0x3c4);
    }
    if (dVar42 - (double)fVar31 <= (double)_DAT_14c7616d4) goto LAB_1435dbec4;
LAB_1435dbe6c:
    if (0 < (longlong)*(int *)((longlong)param_2 + 0x18c)) {
      lVar16 = param_2[0x2d];
      lVar22 = param_2[0x2e];
      lVar30 = param_2[0x31];
      uVar18 = (longlong)*(int *)((longlong)param_2 + 0x18c) + 1;
      do {
        uVar28 = (ulonglong)((uint)*(ushort *)(lVar22 + -4 + uVar18 * 2) * (int)lVar30);
        uVar12 = *(uint *)(lVar16 + 0x6c + uVar28);
        if ((uVar12 >> 0x1a & 1) == 0) {
          *(uint *)(lVar16 + 0x6c + uVar28) = uVar12 | 0x8000000;
        }
        uVar18 = uVar18 - 1;
      } while (1 < uVar18);
    }
  }
  else {
LAB_1435dbf27:
    local_400 = lVar22;
    if (0 < (longlong)*(int *)((longlong)param_2 + 0x18c)) {
      dVar42 = (double)*(float *)((longlong)param_1 + 0x1bc) *
               (double)*(float *)((longlong)param_1 + 0x1bc);
      lVar22 = param_2[0x2d];
      lVar19 = param_2[0x2e];
      local_3e4 = (int)param_2[0x31];
      local_3a8 = (double)param_4;
      local_2f8._8_8_ = dStack_360;
      local_2f8._0_8_ = dStack_360;
      local_431 = 0 < (int)uVar12 & (byte)local_418;
      local_3d0 = (ulonglong)uVar12;
      local_3d8 = param_1 + 0x29;
      lVar23 = (longlong)*(int *)((longlong)param_2 + 0x18c);
      local_430 = (byte *)(param_3 & 0xffffffff);
      local_3f8 = lVar19;
      local_3c0 = dVar42;
      local_3b8 = lVar22;
      iVar27 = local_3e4;
      do {
        uVar3 = *(ushort *)(lVar19 + -2 + lVar23 * 2);
        uVar18 = (ulonglong)(iVar27 * (uint)uVar3);
        uVar12 = *(uint *)(lVar22 + 0x6c + uVar18);
        if ((uVar12 & 0x3c000000) == 0) {
          pdVar26 = (double *)(uVar18 + lVar22);
          pfVar29 = (float *)(local_430 + (longlong)pdVar26);
          if ((uVar12 >> 0x1e & 1) != 0) {
            if (*(float *)(pdVar26 + 0x12) <= pfVar29[7] && pfVar29[7] != *(float *)(pdVar26 + 0x12)
               ) goto LAB_1435dd48d;
            *(uint *)((longlong)pdVar26 + 0x6c) = uVar12 & 0x83ffffff;
          }
          dVar34 = (double)*(float *)(pdVar26 + 9) * local_3a8 + pdVar26[5];
          dVar32 = (double)*(float *)((longlong)pdVar26 + 0x44) * local_3a8 + pdVar26[4];
          dVar49 = (double)*(float *)(pdVar26 + 8) * local_3a8 + pdVar26[3];
          if ((*(byte *)(*(longlong *)(lVar30 + 0x30) + 0x71) & 1) == 0) {
            local_118 = pdVar26[2];
            local_128 = *pdVar26;
            dStack_120 = pdVar26[1];
          }
          else {
            pdVar20 = (double *)(local_428 + 0x40 + local_3f0);
            dVar51 = *pdVar20;
            dVar48 = pdVar20[1];
            dVar49 = dVar49 * dVar51;
            dVar32 = dVar32 * dVar48;
            pdVar20 = (double *)(local_428 + 0x50 + local_3f0);
            dVar46 = *pdVar20;
            dVar34 = dVar34 * dVar46;
            dVar54 = pdVar20[1] * 0.0;
            pdVar20 = (double *)(local_428 + 0x18 + local_3f0);
            dVar40 = *pdVar20;
            dVar42 = *pdVar20;
            dVar52 = *(double *)(local_428 + local_3f0);
            dVar35 = ((double *)(local_428 + local_3f0))[1];
            pdVar20 = (double *)(local_428 + 0x10 + local_3f0);
            dVar43 = *pdVar20;
            dVar55 = pdVar20[1];
            dVar45 = dVar32 * dVar52 - dVar49 * dVar35;
            dVar44 = dVar34 * dVar35 - dVar32 * dVar43;
            dVar50 = dVar49 * dVar43 - dVar34 * dVar52;
            dVar55 = dVar54 * dVar55 - dVar54 * dVar55;
            dVar44 = dVar44 + dVar44;
            dVar50 = dVar50 + dVar50;
            dVar45 = dVar45 + dVar45;
            dStack_410 = dVar35 * (dVar55 + dVar55);
            dVar51 = *pdVar26 * dVar51;
            dVar48 = pdVar26[1] * dVar48;
            dVar46 = pdVar26[2] * dVar46;
            dVar55 = dVar48 * dVar52 - dVar35 * dVar51;
            dVar54 = dVar46 * dVar35 - dVar43 * dVar48;
            dVar33 = dVar51 * dVar43 - dVar52 * dVar46;
            dVar54 = dVar54 + dVar54;
            dVar33 = dVar33 + dVar33;
            dVar55 = dVar55 + dVar55;
            pdVar20 = (double *)(local_428 + 0x20 + local_3f0);
            local_128 = *pdVar20;
            dStack_120 = pdVar20[1];
            dVar49 = (dVar45 * dVar35 - dVar50 * dVar43) + dVar40 * dVar44 + dVar49 + local_128;
            dVar32 = (dVar43 * dVar44 - dVar52 * dVar45) + dVar42 * dVar50 + dVar32 + dStack_120;
            local_118 = *(double *)(local_428 + 0x30 + local_3f0);
            dVar34 = dVar45 * dVar40 + dVar34 + (dVar50 * dVar52 - dVar44 * dVar35) + local_118;
            local_128 = (dVar55 * dVar35 - dVar33 * dVar43) + dVar40 * dVar54 + dVar51 + local_128;
            dStack_120 = (dVar43 * dVar54 - dVar52 * dVar55) + dVar42 * dVar33 + dVar48 + dStack_120
            ;
            local_118 = dVar55 * dVar40 + dVar46 + (dVar33 * dVar52 - dVar54 * dVar35) + local_118;
            dVar42 = local_3c0;
          }
          local_138 = dVar34 - local_118;
          dStack_140 = dVar32 - dStack_120;
          local_148 = dVar49 - local_128;
          dVar40 = local_138 * local_138 + local_148 * local_148 + dStack_140 * dStack_140;
          if ((dVar40 != 1.0) || (NAN(dVar40))) {
            if (9.99999993922529e-09 <= dVar40) {
              dVar40 = 1.0 / SQRT(dVar40);
              local_138 = local_138 * dVar40;
              dStack_140 = dStack_140 * dVar40;
              local_148 = local_148 * dVar40;
            }
            else {
              local_138 = DAT_14c8464f0;
              local_148 = DAT_14c8464e0;
              dStack_140 = DAT_14c8464e8;
            }
          }
          dVar40 = (double)*(float *)(pdVar26 + 0xd) * local_3a0;
          dVar54 = (double)*(float *)((longlong)pdVar26 + 100) * (double)local_2f8._0_8_;
          dVar55 = (double)*(float *)(pdVar26 + 0xc) * local_368;
          local_168 = 0.0;
          dStack_160 = 0.0;
          local_158 = 0.0;
          local_418 = pfVar29;
          if (*(longlong *)(lVar30 + 0x48) != 0) {
            lVar19 = FUN_145b518f4();
            lVar22 = *(longlong *)(lVar30 + 0x48);
            if ((((lVar22 != 0) && (lVar19 != 0)) &&
                (lVar4 = *(longlong *)(lVar22 + 0x10), lVar4 != 0)) &&
               (((*(int *)(lVar19 + 0x38) <= *(int *)(lVar4 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8)
                  == lVar19 + 0x30)) && (lVar19 = *(longlong *)(lVar22 + 0x30), lVar19 != 0)))) {
              local_158 = *(double *)(lVar19 + 0x228);
              local_168 = *(double *)(lVar19 + 0x218);
              dStack_160 = *(double *)(lVar19 + 0x220);
              if ((*(byte *)(lVar22 + 0xac) & 4) != 0) {
                local_158 = local_158 * dVar40;
                dStack_160 = dStack_160 * dVar54;
                local_168 = local_168 * dVar55;
              }
            }
          }
          memset(local_268,0,0x100);
          local_198 = 0xffffffff;
          local_264 = 1.0;
          local_1c4 = 0xffffffff;
          local_228 = 0.0;
          dStack_220 = 0.0;
          local_218 = 0.0;
          dVar33 = 1.0 / (double)*(float *)(param_1 + 0x2f);
          local_270 = dVar40 * local_138 * dVar33 + dVar34;
          local_278 = dVar54 * dStack_140 * dVar33 + dVar32;
          local_280 = dVar33 * dVar55 * local_148 + dVar49;
          bVar11 = *(byte *)(lVar16 + 0x152);
          if (((bVar11 != 1) && ((6 < bVar11 || ((0x68U >> (bVar11 & 0x1f) & 1) == 0)))) ||
             (2097152.0 < *(float *)((longlong)param_1 + 0x1bc) ||
              *(float *)((longlong)param_1 + 0x1bc) == 2097152.0)) {
LAB_1435dc641:
            local_488 = local_3b0;
            if ((*(byte *)(param_1 + 0x37) & 4) == 0) {
              local_488 = (undefined1 *)0x0;
            }
            local_470 = &local_168;
            local_478 = &local_128;
            local_480 = &local_280;
            cVar10 = (**(code **)(*param_1 + 0x388))(param_1,param_2,pdVar26,local_268);
            lVar22 = local_3b8;
            lVar19 = local_3f8;
            lVar30 = local_420;
            iVar27 = local_3e4;
            if (cVar10 != '\0') {
              cVar10 = FUN_144a41512(local_1b0);
              if (cVar10 == '\0') {
LAB_1435dc725:
                if ((*(byte *)((longlong)param_1 + 0x17c) & 2) != 0) {
                  if (ABS(local_228) <= 9.999999747378752e-05) {
                    dVar40 = ABS(local_218);
                    if ((ABS(dStack_220) <= 9.999999747378752e-05) &&
                       (dVar40 <= 9.999999747378752e-05)) goto LAB_1435dc799;
                  }
                  else {
                    dVar40 = ABS(local_218);
                  }
                  if ((double)*(float *)(param_1 + 0x30) + dVar40 < 1.0) goto LAB_1435dc79d;
                }
LAB_1435dc799:
                local_418[6] = (float)((int)local_418[6] + -1);
              }
              else {
                if ((*(byte *)((longlong)param_1 + 0x17c) & 1) == 0) {
                  if ((*(byte *)(param_1 + 0x28) & 2) != 0) {
                    bVar11 = 1;
                    goto LAB_1435dd4e9;
                  }
                  goto LAB_1435dc725;
                }
                if (DAT_14caf64b8 == 0) {
                  local_f8 = FUN_141030f22;
                  local_440 = FUN_14081d0ea;
                  local_448 = FUN_142b4754c;
                  local_450 = &local_f8;
                  local_458 = &LAB_147c45ce0;
                  local_460 = &LAB_1463f1ff4;
                  local_468 = &DAT_149e063b2;
                  local_470 = (double *)&DAT_4000000000;
                  local_478 = (double *)CONCAT44(local_478._4_4_,0x10000004);
                  local_480 = (double *)CONCAT44(local_480._4_4_,8);
                  local_488 = (undefined1 *)CONCAT44(local_488._4_4_,0x428);
                  FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
                }
                bVar11 = FUN_140c792b6(local_1b0,DAT_14caf64b8);
                if ((*(byte *)(param_1 + 0x28) & 2) == 0) {
                  if (bVar11 == 0) goto LAB_1435dc725;
                }
                else {
                  bVar11 = bVar11 ^ 1;
LAB_1435dd4e9:
                  uVar21 = FUN_145959862();
                  cVar10 = FUN_140c792b6(local_1b0,uVar21);
                  lVar22 = local_3b8;
                  lVar19 = local_3f8;
                  lVar30 = local_420;
                  iVar27 = local_3e4;
                  if (cVar10 != '\0') goto LAB_1435dd48d;
                  if (bVar11 != 0) goto LAB_1435dc725;
                }
              }
LAB_1435dc79d:
              puVar7 = local_3c8;
              if ((int)local_418[6] < 1) {
                pdVar26[5] = local_248;
                auVar6._8_8_ = uStack_250;
                auVar6._0_8_ = local_258;
                *(undefined1 (*) [16])(pdVar26 + 3) = auVar6;
                if ((*(byte *)(*(longlong *)(local_420 + 0x30) + 0x71) & 1) != 0) {
                  pdVar20 = (double *)(local_428 + 0x20 + local_3f0);
                  dVar45 = pdVar26[3] - *pdVar20;
                  dVar51 = pdVar26[4] - pdVar20[1];
                  dVar46 = pdVar26[5] - *(double *)(local_428 + 0x30 + local_3f0);
                  dVar50 = *(double *)(local_428 + local_3f0);
                  dVar40 = -dVar50;
                  dVar55 = -((double *)(local_428 + local_3f0))[1];
                  pdVar20 = (double *)(local_428 + 0x10 + local_3f0);
                  dVar49 = *pdVar20 * -1.0;
                  dVar32 = pdVar20[1] * 1.0;
                  dVar33 = dVar45 * dVar49 - dVar40 * dVar46;
                  dVar34 = dVar51 * dVar40 - dVar45 * dVar55;
                  dVar54 = dVar46 * dVar55 - dVar51 * dVar49;
                  dVar54 = dVar54 + dVar54;
                  dVar33 = dVar33 + dVar33;
                  dVar34 = dVar34 + dVar34;
                  auVar38 = *(undefined1 (*) [16])(local_428 + 0x40 + local_3f0);
                  auVar41 = divpd(_DAT_149934d80,auVar38);
                  auVar37._0_8_ =
                       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_)) &
                               auVar41._0_8_) *
                       ((dVar34 * dVar55 - dVar33 * dVar49) + dVar32 * dVar54 + dVar45);
                  auVar37._8_8_ =
                       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._8_8_)) &
                               auVar41._8_8_) *
                       (dVar50 * dVar34 + dVar49 * dVar54 + dVar32 * dVar33 + dVar51);
                  dVar49 = *(double *)(local_428 + 0x50 + local_3f0);
                  *(undefined1 (*) [16])(pdVar26 + 3) = auVar37;
                  pdVar26[5] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar49)) &
                                       (ulonglong)(1.0 / dVar49)) *
                               (dVar32 * dVar34 + dVar46 + (dVar33 * dVar40 - dVar54 * dVar55));
                }
                switch((char)param_1[0x24]) {
                case '\0':
                  if ((local_3c8 != (uint *)0x0) && ((*local_3c8 & 2) != 0)) {
                    (**(code **)(**(longlong **)(local_420 + 0x58) + 0x390))
                              (*(longlong **)(local_420 + 0x58),param_2,local_3c8,pdVar26);
                  }
                  *(undefined2 *)(local_3f8 + (lVar23 + -1) * 2) =
                       *(undefined2 *)
                        (local_3f8 + -2 + (longlong)*(int *)((longlong)param_2 + 0x18c) * 2);
                  *(ushort *)(local_3f8 + -2 + (longlong)*(int *)((longlong)param_2 + 0x18c) * 2) =
                       uVar3;
                  *(int *)((longlong)param_2 + 0x18c) = *(int *)((longlong)param_2 + 0x18c) + -1;
                  break;
                case '\x01':
                  *(byte *)((longlong)pdVar26 + 0x6f) = *(byte *)((longlong)pdVar26 + 0x6f) | 4;
                  break;
                case '\x02':
                  *(byte *)((longlong)pdVar26 + 0x6f) = *(byte *)((longlong)pdVar26 + 0x6f) | 8;
                  break;
                case '\x03':
                  *(byte *)((longlong)pdVar26 + 0x6f) = *(byte *)((longlong)pdVar26 + 0x6f) | 0x10;
                  break;
                case '\x04':
                  *(byte *)((longlong)pdVar26 + 0x6f) = *(byte *)((longlong)pdVar26 + 0x6f) | 0x20;
                  break;
                case '\x05':
                  *(byte *)((longlong)pdVar26 + 0x6f) = *(byte *)((longlong)pdVar26 + 0x6f) | 0x30;
                }
              }
              else {
                local_388 = (double)*(float *)(pdVar26 + 9);
                uStack_380 = 0;
                local_398 = (double)*(float *)((longlong)pdVar26 + 0x44);
                uStack_390 = 0;
                local_378 = (double)*(float *)(pdVar26 + 8);
                uStack_370 = 0;
                dVar42 = local_3c0;
                if ((*(byte *)(*(longlong *)(local_420 + 0x30) + 0x71) & 1) == 0) {
                  fVar53 = *(float *)(pdVar26 + 7) * (float)local_218 +
                           *(float *)(pdVar26 + 6) * (float)local_228 +
                           *(float *)((longlong)pdVar26 + 0x34) * (float)dStack_220;
                  fVar53 = fVar53 + fVar53;
                  fVar31 = local_418[2];
                  fVar2 = local_418[1];
                  *(float *)(pdVar26 + 6) =
                       (*(float *)(pdVar26 + 6) - fVar53 * (float)local_228) * *local_418;
                  *(float *)((longlong)pdVar26 + 0x34) =
                       (*(float *)((longlong)pdVar26 + 0x34) - (float)dStack_220 * fVar53) * fVar2;
                  *(float *)(pdVar26 + 7) =
                       (*(float *)(pdVar26 + 7) - (float)local_218 * fVar53) * fVar31;
                  *(float *)((longlong)pdVar26 + 0x4c) =
                       *(float *)((longlong)pdVar26 + 0x4c) * local_418[3];
                  if (local_431 != 0) {
                    *(float *)((longlong)pdVar26 + local_3d0 + 0x3c) =
                         local_418[3] * *(float *)((longlong)pdVar26 + local_3d0 + 0x3c);
                    *(float *)((longlong)pdVar26 + local_3d0 + 0x40) =
                         local_418[4] * *(float *)((longlong)pdVar26 + local_3d0 + 0x40);
                    *(float *)((longlong)pdVar26 + local_3d0 + 0x44) =
                         local_418[5] * *(float *)((longlong)pdVar26 + local_3d0 + 0x44);
                  }
                  dVar40 = local_138 * local_218 + local_148 * local_228 + dStack_140 * dStack_220;
                  dVar40 = dVar40 + dVar40;
                  dVar49 = SQRT((dVar34 - local_118) * (dVar34 - local_118) +
                                (dVar49 - local_128) * (dVar49 - local_128) +
                                (dVar32 - dStack_120) * (dVar32 - dStack_120));
                  dVar32 = (double)local_418[2] * (local_138 - local_218 * dVar40) * dVar49;
                  dVar55 = (double)local_418[1] * (dStack_140 - dStack_220 * dVar40) * dVar49;
                  dVar49 = (double)*local_418 * (local_148 - dVar40 * local_228) * dVar49;
                  *(undefined4 *)(pdVar26 + 9) = DAT_14c846338;
                  pdVar26[8] = DAT_14c846330;
                  dVar34 = (double)(1.0 - local_264);
                  pdVar26[3] = dVar34 * dVar49 + pdVar26[3];
                  pdVar26[4] = dVar55 * dVar34 + pdVar26[4];
                  pdVar26[5] = dVar32 * dVar34 + pdVar26[5];
                  if ((((((*(byte *)(param_1 + 0x28) & 1) != 0) && (local_18c != 0)) &&
                       (-1 < (int)local_190)) &&
                      (((int)local_190 < DAT_14c9647dc &&
                       (plVar24 = (longlong *)
                                  ((ulonglong)((local_190 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_190 >> 0x10) * 8))
                       , plVar24 != (longlong *)0x0)))) &&
                     ((((int)plVar24[2] == local_18c &&
                       (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 &&
                        (plVar24 = (longlong *)*plVar24, plVar24 != (longlong *)0x0)))) &&
                      (cVar10 = (**(code **)(*plVar24 + 0x488))(plVar24), dVar42 = local_3c0,
                      puVar7 = local_3c8, cVar10 != '\0')))) {
                    dVar32 = dVar32 - local_388;
                    dVar55 = dVar55 - local_398;
                    dVar49 = dVar49 - local_378;
                    fVar31 = (float)FUN_147a77524(local_3d8);
                    local_2e0 = (double)fVar31;
                    local_2d0 = -dVar32 * local_2e0;
                    local_2d8 = -dVar55 * local_2e0;
                    local_2e0 = -dVar49 * local_2e0;
                    local_2c8 = local_258;
                    uStack_2c0 = uStack_250;
                    local_2b8 = local_248;
                    lVar22 = *plVar24;
                    pdVar20 = &local_2e0;
                    puVar25 = &local_2c8;
LAB_1435dd6af:
                    (**(code **)(lVar22 + 0x6b8))(plVar24,pdVar20,puVar25,local_178);
                    dVar42 = local_3c0;
                    puVar7 = local_3c8;
                  }
                }
                else {
                  dVar45 = *(double *)(local_428 + local_3f0);
                  dVar51 = ((double *)(local_428 + local_3f0))[1];
                  local_358 = *(undefined1 (*) [16])(local_428 + 0x10 + local_3f0);
                  dVar54 = local_358._0_8_;
                  pauVar1 = (undefined1 (*) [16])(local_428 + 0x40 + local_3f0);
                  dVar48 = *(double *)*pauVar1;
                  dVar52 = *(double *)(*pauVar1 + 8);
                  pdVar20 = (double *)(local_428 + 0x50 + local_3f0);
                  local_348 = *pdVar20;
                  dStack_340 = pdVar20[1];
                  pdVar20 = (double *)(local_428 + 0x18 + local_3f0);
                  dVar40 = *pdVar20;
                  dVar55 = *pdVar20;
                  dVar43 = (double)*(float *)(pdVar26 + 6) * dVar48;
                  dVar44 = (double)*(float *)((longlong)pdVar26 + 0x34) * dVar52;
                  dVar35 = (double)*(float *)(pdVar26 + 7) * local_348;
                  dVar33 = dVar44 * dVar45 - dVar51 * dVar43;
                  dVar50 = dVar35 * dVar51 - dVar54 * dVar44;
                  local_338._8_4_ = local_358._8_4_;
                  local_338._0_8_ = dVar45;
                  local_338._12_4_ = local_358._12_4_;
                  dVar46 = dVar43 * dVar54 - dVar45 * dVar35;
                  dVar50 = dVar50 + dVar50;
                  dVar46 = dVar46 + dVar46;
                  dVar33 = dVar33 + dVar33;
                  local_328._8_4_ = local_358._0_4_;
                  local_328._0_8_ = dVar51;
                  local_328._12_4_ = local_358._4_4_;
                  local_318._8_4_ = SUB84(dVar55,0);
                  local_318._0_8_ = dVar40;
                  local_318._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
                  dVar35 = dVar33 * dVar40 + dVar35 + (dVar46 * dVar45 - dVar50 * dVar51);
                  dVar40 = (dVar33 * dVar51 - dVar46 * dVar54) + dVar40 * dVar50 + dVar43;
                  dVar55 = (dVar54 * dVar50 - dVar45 * dVar33) + dVar55 * dVar46 + dVar44;
                  dVar33 = dVar35 * local_218 + dVar40 * local_228 + dStack_220 * dVar55;
                  dVar33 = dVar33 + dVar33;
                  dVar46 = (double)local_418[2] * (dVar35 - local_218 * dVar33);
                  dVar35 = (double)local_418[1] * (dVar55 - dStack_220 * dVar33);
                  dVar47 = (double)*local_418 * (dVar40 - dVar33 * local_228);
                  dVar33 = -dVar45;
                  dVar50 = -dVar51;
                  dVar54 = dVar54 * -1.0;
                  dVar40 = local_358._8_8_ * 1.0;
                  dVar44 = dVar47 * dVar54 - dVar33 * dVar46;
                  dVar55 = dVar35 * dVar33 - dVar50 * dVar47;
                  dVar43 = dVar46 * dVar50 - dVar54 * dVar35;
                  dVar43 = dVar43 + dVar43;
                  dVar44 = dVar44 + dVar44;
                  dVar55 = dVar55 + dVar55;
                  auVar38 = divpd(_DAT_149934d80,*pauVar1);
                  *(float *)(pdVar26 + 6) =
                       (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar48)) &
                                       auVar38._0_8_) *
                              ((dVar55 * dVar50 - dVar44 * dVar54) + dVar40 * dVar43 + dVar47));
                  *(float *)((longlong)pdVar26 + 0x34) =
                       (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar52)) &
                                       auVar38._8_8_) *
                              (dVar45 * dVar55 + dVar54 * dVar43 + dVar40 * dVar44 + dVar35));
                  *(float *)(pdVar26 + 7) =
                       (float)((double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_348)) &
                                       (ulonglong)(1.0 / local_348)) *
                              (dVar40 * dVar55 + dVar46 + (dVar44 * dVar33 - dVar43 * dVar50)));
                  *(float *)((longlong)pdVar26 + 0x4c) =
                       *(float *)((longlong)pdVar26 + 0x4c) * local_418[3];
                  if (local_431 != 0) {
                    *(float *)((longlong)pdVar26 + local_3d0 + 0x3c) =
                         local_418[3] * *(float *)((longlong)pdVar26 + local_3d0 + 0x3c);
                    *(float *)((longlong)pdVar26 + local_3d0 + 0x40) =
                         local_418[4] * *(float *)((longlong)pdVar26 + local_3d0 + 0x40);
                    *(float *)((longlong)pdVar26 + local_3d0 + 0x44) =
                         local_418[5] * *(float *)((longlong)pdVar26 + local_3d0 + 0x44);
                  }
                  dVar55 = local_138 * local_218 + local_148 * local_228 + dStack_140 * dStack_220;
                  dVar55 = dVar55 + dVar55;
                  dVar40 = SQRT((dVar34 - local_118) * (dVar34 - local_118) +
                                (dVar49 - local_128) * (dVar49 - local_128) +
                                (dVar32 - dStack_120) * (dVar32 - dStack_120));
                  dVar46 = (double)local_418[2] * (local_138 - local_218 * dVar55) * dVar40;
                  dVar50 = (double)local_418[1] * (dStack_140 - dStack_220 * dVar55) * dVar40;
                  dVar35 = (double)*local_418 * (local_148 - dVar55 * local_228) * dVar40;
                  *(undefined4 *)(pdVar26 + 9) = DAT_14c846338;
                  pdVar26[8] = DAT_14c846330;
                  dVar40 = (double)(1.0 - local_264);
                  pdVar20 = (double *)(local_428 + 0x20 + local_3f0);
                  dVar43 = (dVar49 + dVar40 * dVar35) - *pdVar20;
                  dVar44 = (dVar32 + dVar50 * dVar40) - pdVar20[1];
                  dVar36 = (dVar46 * dVar40 + dVar34) - *(double *)(local_428 + 0x30 + local_3f0);
                  dVar47 = *(double *)(local_428 + local_3f0);
                  dVar34 = -dVar47;
                  dVar40 = -((double *)(local_428 + local_3f0))[1];
                  pdVar20 = (double *)(local_428 + 0x10 + local_3f0);
                  dVar49 = *pdVar20 * -1.0;
                  dVar32 = pdVar20[1] * 1.0;
                  dVar33 = dVar43 * dVar49 - dVar34 * dVar36;
                  dVar55 = dVar44 * dVar34 - dVar40 * dVar43;
                  dVar54 = dVar36 * dVar40 - dVar49 * dVar44;
                  dVar54 = dVar54 + dVar54;
                  dVar33 = dVar33 + dVar33;
                  dVar55 = dVar55 + dVar55;
                  auVar38 = *(undefined1 (*) [16])(local_428 + 0x40 + local_3f0);
                  auVar41 = divpd(_DAT_149934d80,auVar38);
                  auVar39._0_8_ =
                       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._0_8_)) &
                               auVar41._0_8_) *
                       ((dVar55 * dVar40 - dVar33 * dVar49) + dVar32 * dVar54 + dVar43);
                  auVar39._8_8_ =
                       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar38._8_8_)) &
                               auVar41._8_8_) *
                       (dVar47 * dVar55 + dVar49 * dVar54 + dVar32 * dVar33 + dVar44);
                  dVar49 = *(double *)(local_428 + 0x50 + local_3f0);
                  *(undefined1 (*) [16])(pdVar26 + 3) = auVar39;
                  pdVar26[5] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar49)) &
                                       (ulonglong)(1.0 / dVar49)) *
                               (dVar32 * dVar55 + dVar36 + (dVar33 * dVar34 - dVar54 * dVar40));
                  local_308 = dVar48;
                  dStack_300 = dVar52;
                  if (((((*(byte *)(param_1 + 0x28) & 1) != 0) && (local_18c != 0)) &&
                      (-1 < (int)local_190)) &&
                     (((((int)local_190 < DAT_14c9647dc &&
                        (puVar25 = (undefined8 *)
                                   ((ulonglong)((local_190 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_190 >> 0x10) * 8)
                                   ), puVar25 != (undefined8 *)0x0)) &&
                       ((*(int *)(puVar25 + 2) == local_18c &&
                        (((*(uint *)(puVar25 + 1) & 0x10200000) == 0 &&
                         (plVar24 = (longlong *)*puVar25, plVar24 != (longlong *)0x0)))))) &&
                      (cVar10 = (**(code **)(*plVar24 + 0x488))(plVar24), dVar42 = local_3c0,
                      puVar7 = local_3c8, cVar10 != '\0')))) {
                    dVar48 = local_378 * dVar48;
                    dVar52 = local_398 * dVar52;
                    dVar40 = local_388 * local_348;
                    dVar55 = dVar52 * dVar45 - dVar48 * (double)local_328._0_8_;
                    dVar54 = dVar40 * dVar51 - dVar52 * (double)local_328._8_8_;
                    dVar42 = dVar48 * (double)local_358._0_8_ - (double)local_338._0_8_ * dVar40;
                    dVar54 = dVar54 + dVar54;
                    dVar42 = dVar42 + dVar42;
                    dVar55 = dVar55 + dVar55;
                    dVar34 = (double)local_358._0_8_ * dVar54;
                    dVar49 = (double)local_328._0_8_ * dVar54;
                    dVar32 = (double)local_328._8_8_ * dVar42;
                    dVar54 = dVar54 * (double)local_318._0_8_;
                    dVar33 = dVar42 * (double)local_318._8_8_;
                    dVar43 = dVar55 * (double)local_318._0_8_;
                    fVar31 = (float)FUN_147a77524(local_3d8);
                    local_2b0 = (double)fVar31;
                    local_2a0 = -(dVar46 - (dVar43 + dVar40 + (dVar42 * dVar45 - dVar49))) *
                                local_2b0;
                    local_2a8 = -(dVar50 - ((dVar34 - dVar45 * dVar55) + dVar33 + dVar52)) *
                                local_2b0;
                    local_2b0 = -(dVar35 - ((dVar55 * dVar51 - dVar32) + dVar54 + dVar48)) *
                                local_2b0;
                    local_298 = local_258;
                    uStack_290 = uStack_250;
                    local_288 = local_248;
                    lVar22 = *plVar24;
                    pdVar20 = &local_2b0;
                    puVar25 = &local_298;
                    goto LAB_1435dd6af;
                  }
                }
              }
              if ((puVar7 != (uint *)0x0) && ((*puVar7 & 4) != 0)) {
                local_478 = &local_148;
                local_488 = local_268;
                local_480 = pdVar26;
                (**(code **)(**(longlong **)(local_420 + 0x58) + 0x398))
                          (*(longlong **)(local_420 + 0x58),param_2,puVar7,local_418);
              }
              *(byte *)((longlong)pdVar26 + 0x6f) = *(byte *)((longlong)pdVar26 + 0x6f) | 0x80;
              lVar22 = local_3b8;
              lVar19 = local_3f8;
              lVar30 = local_420;
              iVar27 = local_3e4;
            }
          }
          else {
            if (0 < (int)local_3e0) {
              pdVar20 = (double *)(*(longlong *)(local_400 + 0x858) + 0x10);
              uVar18 = 0;
              do {
                if ((double)(float)((double)*(float *)((longlong)local_108 + uVar18 * 4) *
                                   ((*pdVar20 - local_270) * (*pdVar20 - local_270) +
                                   (pdVar20[-2] - local_280) * (pdVar20[-2] - local_280) +
                                   (pdVar20[-1] - local_278) * (pdVar20[-1] - local_278))) < dVar42)
                goto LAB_1435dc641;
                uVar18 = uVar18 + 1;
                pdVar20 = pdVar20 + 3;
              } while (local_3e0 != uVar18);
            }
            *(byte *)((longlong)pdVar26 + 0x6f) = *(byte *)((longlong)pdVar26 + 0x6f) | 8;
            lVar22 = local_3b8;
            lVar19 = local_3f8;
            iVar27 = local_3e4;
          }
        }
LAB_1435dd48d:
        bVar5 = 1 < lVar23;
        lVar23 = lVar23 + -1;
      } while (bVar5);
    }
  }
  if (local_108 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1435dbbfd:
  if ((local_f0 ^ (ulonglong)auStack_4a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435ddc7e FUN_1435ddc7e body=2913 status=ok
// SIG undefined FUN_1435ddc7e(void)

void FUN_1435ddc7e(longlong param_1,longlong *param_2,int param_3,undefined8 param_4,
                  longlong param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  byte bVar18;
  uint *puVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auStack_178 [32];
  uint local_158;
  double *local_150;
  double *local_148;
  undefined1 local_140;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  uint local_124;
  longlong local_120;
  uint local_114;
  uint local_110;
  uint local_10c;
  byte local_108;
  byte bStack_107;
  byte bStack_106;
  byte bStack_105;
  undefined4 uStack_104;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  int local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 local_b0;
  int local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar9 = (uint *)FUN_147bf7da6(param_2,param_1);
  if (puVar9 == (uint *)0x0) goto LAB_1435ddcea;
  lVar10 = FUN_147c05556(param_2,param_1);
  if (lVar10 == 0) {
    lVar10 = param_2[2] + 0x8f0;
  }
  FUN_1435de7e0(param_1,param_2,puVar9);
  if (((((puVar9[1] != 0) && (uVar4 = *puVar9, -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) &&
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar9[1])))) &&
     (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && (puVar9[0x12] != 0xffffffff)))) {
    if ((((*(uint *)(plVar13 + 1) & 0x10200000) != 0) ||
        (plVar13 = (longlong *)*plVar13, plVar13 == (longlong *)0x0)) ||
       (plVar11 = (longlong *)(**(code **)(*plVar13 + 0xa90))(plVar13), plVar11 == (longlong *)0x0))
    goto LAB_1435ddcea;
    lVar15 = *(longlong *)(*plVar11 + (longlong)(int)puVar9[0x12] * 8);
    local_a4 = -1;
    if (*(char *)(param_1 + 0x30) == '\x01') {
      iVar5 = *(int *)(lVar10 + 4);
      iVar20 = *(int *)(lVar15 + 0x18);
      uVar4 = iVar5 * 0xbb38435 + 0x3619636b;
      *(uint *)(lVar10 + 4) = uVar4;
      fVar23 = ((float)iVar20 + -1.0) * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0);
      lVar14 = (longlong)((int)ROUND(fVar23 + fVar23 + 0.5) >> 1) * 0xf8;
      iVar20 = *(int *)(*(longlong *)(lVar15 + 0x10) + 4 + lVar14);
      uVar4 = iVar5 * -0x4b9b4d07 + 0x9d6f2492;
      *(uint *)(lVar10 + 4) = uVar4;
      uVar4 = (int)((float)*(uint *)(*(longlong *)(lVar15 + 0x10) + 8 + lVar14) *
                   ((float)(uVar4 >> 9 | 0x3f800000) + -1.0)) * 3 + iVar20;
      puVar9[4] = uVar4;
      if (uVar4 == 0xffffffff) goto LAB_1435ddcea;
      local_120 = lVar15;
      local_130 = (**(code **)(**(longlong **)(lVar15 + 0x28) + 0x60))
                            (*(longlong **)(lVar15 + 0x28),uVar4);
      local_124 = (**(code **)(**(longlong **)(local_120 + 0x28) + 0x60))
                            (*(longlong **)(local_120 + 0x28),uVar4 + 1);
      local_134 = (**(code **)(**(longlong **)(local_120 + 0x28) + 0x60))
                            (*(longlong **)(local_120 + 0x28),uVar4 + 2);
      local_108 = 0xff;
      bStack_107 = 0xff;
      bStack_106 = 0xff;
      bStack_105 = 0xff;
      local_c0 = -1;
      local_150 = &local_e8;
      local_e8 = (double)CONCAT44(local_e8._4_4_,0xffffffff);
      local_158 = local_130;
      cVar3 = FUN_147c20746(param_1,param_2,puVar9,plVar13);
      if (cVar3 == '\0') {
        local_150 = (double *)&local_c0;
        local_158 = local_124;
        cVar3 = FUN_147c20746(param_1,param_2,puVar9,plVar13);
        if (cVar3 == '\0') {
          local_150 = (double *)&local_108;
          local_158 = local_134;
          cVar3 = FUN_147c20746(param_1,param_2,puVar9,plVar13);
          if (cVar3 == '\0') goto LAB_1435dddb9;
        }
      }
      iVar5 = CONCAT13(bStack_105,CONCAT12(bStack_106,CONCAT11(bStack_107,local_108)));
      local_a4 = local_e8._0_4_;
      if (local_e8._0_4_ < local_c0) {
        local_a4 = local_c0;
      }
      if (local_a4 < iVar5) {
        local_a4 = iVar5;
      }
    }
    else {
      if (*(char *)(param_1 + 0x30) != '\0') goto LAB_1435ddcea;
      uVar4 = *(int *)(lVar10 + 4) * 0xbb38435 + 0x3619636b;
      iVar5 = *(int *)(lVar15 + 0xec);
      *(uint *)(lVar10 + 4) = uVar4;
      uVar4 = (uint)(((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * (float)iVar5 + -1.0);
      puVar9[4] = uVar4;
      if (uVar4 == 0xffffffff) goto LAB_1435ddcea;
      local_150 = (double *)&local_a4;
      local_158 = uVar4;
      local_120 = lVar15;
      cVar3 = FUN_147c20746(param_1,param_2,puVar9,plVar13);
      if (cVar3 == '\0') goto LAB_1435dddb9;
    }
    local_124 = (**(code **)(*param_2 + 0x150))(param_2);
    if ((int)local_124 < 1) {
      local_130 = 0;
    }
    else {
      local_130 = (**(code **)(*param_2 + 0x158))(param_2);
    }
    local_148 = &local_e8;
    local_150 = (double *)&local_c0;
    local_140 = 1;
    puVar19 = puVar9;
    local_158 = uVar4;
    cVar3 = FUN_147c20842(param_1,param_2,puVar9,plVar13);
    if (cVar3 != '\0') {
      *(uint *)(param_5 + param_3) = uVar4;
      *(ulonglong *)(param_5 + 0x18) = CONCAT44(uStack_bc,local_c0);
      *(undefined8 *)(param_5 + 0x20) = uStack_b8;
      *(undefined8 *)(param_5 + 0x28) = local_b0;
      iVar5 = _finite(*(double *)(param_5 + 0x18));
      if ((iVar5 != 0) && (iVar5 = _finite(*(double *)(param_5 + 0x20)), iVar5 != 0)) {
        _finite(*(double *)(param_5 + 0x28));
      }
      if (((local_a4 != -1 & *(byte *)(param_1 + 0x50) >> 2) == 1) && (0 < (longlong)(int)puVar9[6])
         ) {
        puVar19 = *(uint **)(puVar9 + 8);
        uVar17 = 0;
        lVar15 = 0;
        do {
          if (*(int *)((longlong)puVar19 + uVar17) == local_a4) {
            if ((int)(~uVar17 >> 2) != 0) {
              lVar14 = *(longlong *)(puVar9 + 0x10);
              lVar15 = lVar15 >> 0x20;
              fVar23 = *(float *)(lVar14 + 8 + lVar15 * 0xc);
              fVar1 = *(float *)(lVar14 + 4 + lVar15 * 0xc);
              fVar2 = *(float *)(param_1 + 0x54);
              fVar24 = (*(float *)(lVar14 + lVar15 * 0xc) - *(float *)(param_5 + 0x30)) * fVar2 +
                       *(float *)(param_5 + 0x30);
              *(float *)(param_5 + 0x30) = fVar24;
              *(float *)(param_5 + 0x34) =
                   (fVar1 - *(float *)(param_5 + 0x34)) * fVar2 + *(float *)(param_5 + 0x34);
              *(float *)(param_5 + 0x38) =
                   (fVar23 - *(float *)(param_5 + 0x38)) * fVar2 + *(float *)(param_5 + 0x38);
              iVar5 = _finite((double)fVar24);
              if ((iVar5 != 0) && (iVar5 = _finite((double)*(float *)(param_5 + 0x34)), iVar5 != 0))
              {
                _finite((double)*(float *)(param_5 + 0x38));
              }
            }
            break;
          }
          lVar15 = lVar15 + 0x100000000;
          lVar14 = uVar17 + 4;
          uVar17 = uVar17 + 4;
        } while ((uint *)((longlong)puVar19 + lVar14) < puVar19 + (int)puVar9[6]);
      }
      lVar15 = local_120;
      uVar8 = *(uint *)(param_1 + 0xa8);
      if ((uVar8 & 1) != 0) {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          uVar6 = (**(code **)(**(longlong **)(local_120 + 0x28) + 0x60))
                            (*(longlong **)(local_120 + 0x28),uVar4);
          plVar11 = *(longlong **)(lVar15 + 0x28);
          local_128 = (**(code **)(*plVar11 + 0x60))(plVar11,uVar4 + 1);
          plVar11 = *(longlong **)(lVar15 + 0x28);
          local_134 = (**(code **)(*plVar11 + 0x60))(plVar11,uVar4 + 2);
          FUN_147a11258(plVar13,&local_108,uVar6);
          local_114 = (uint)local_108;
          local_110 = (uint)bStack_107;
          local_10c = (uint)bStack_106;
          local_12c = (uint)bStack_105;
          FUN_147a11258(plVar13,&local_108,local_128);
          iVar20 = local_108 + local_114;
          iVar5 = bStack_107 + local_110;
          local_128 = bStack_106 + local_10c;
          local_12c = bStack_105 + local_12c;
          FUN_147a11258(plVar13,&local_108,local_134);
          uVar16 = ((uint)bStack_106 + local_128) * 0x5556 >> 0x10;
          uVar12 = ((uint)bStack_107 + iVar5) * 0x5556 >> 0x10;
          uVar8 = ((uint)local_108 + iVar20) * 0x5556 >> 0x10;
          bVar18 = (byte)((bStack_105 + local_12c) * 0x5556 >> 0x10);
        }
        else if (*(char *)(param_1 + 0x30) == '\0') {
          FUN_147a11258(plVar13,&local_108,uVar4);
          uVar8 = CONCAT13(bStack_105,CONCAT12(bStack_106,CONCAT11(bStack_107,local_108)));
          uVar12 = uVar8 >> 8;
          uVar16 = uVar8 >> 0x10;
          bVar18 = bStack_105;
        }
        else {
          uVar8 = 0;
          uVar12 = 0;
          uVar16 = 0;
          bVar18 = (byte)puVar19;
        }
        uVar6 = (&DAT_14c758c60)[uVar12 & 0xff];
        uVar7 = (&DAT_14c758c60)[uVar8 & 0xff];
        *(undefined4 *)(param_5 + 0x70) = (&DAT_14c758c60)[uVar16 & 0xff];
        *(undefined4 *)(param_5 + 0x74) = uVar6;
        *(undefined4 *)(param_5 + 0x78) = uVar7;
        *(float *)(param_5 + 0x7c) = (float)bVar18 * 0.003921569;
        uVar6 = (&DAT_14c758c60)[uVar12 & 0xff];
        uVar7 = (&DAT_14c758c60)[uVar8 & 0xff];
        *(undefined4 *)(param_5 + 0x80) = (&DAT_14c758c60)[uVar16 & 0xff];
        *(undefined4 *)(param_5 + 0x84) = uVar6;
        *(undefined4 *)(param_5 + 0x88) = uVar7;
        *(float *)(param_5 + 0x8c) = (float)bVar18 * 0.003921569;
        uVar8 = *(uint *)(param_1 + 0xa8);
      }
      lVar15 = local_120;
      if ((uVar8 & 2) != 0) {
        if (*(char *)(param_1 + 0x30) == '\x01') {
          uVar6 = (**(code **)(**(longlong **)(local_120 + 0x28) + 0x60))
                            (*(longlong **)(local_120 + 0x28),uVar4);
          plVar11 = *(longlong **)(lVar15 + 0x28);
          local_134 = (**(code **)(*plVar11 + 0x60))(plVar11,uVar4 + 1);
          plVar11 = *(longlong **)(lVar15 + 0x28);
          uVar7 = (**(code **)(*plVar11 + 0x60))(plVar11,uVar4 + 2);
          FUN_147a1134e(plVar13,&local_108,uVar6,*(undefined4 *)(param_1 + 0xac));
          dVar30 = dStack_100;
          dVar26 = (double)CONCAT44(uStack_104,
                                    CONCAT13(bStack_105,
                                             CONCAT12(bStack_106,CONCAT11(bStack_107,local_108))));
          FUN_147a1134e(plVar13,&local_108,local_134,*(undefined4 *)(param_1 + 0xac));
          dVar32 = (double)CONCAT44(uStack_104,
                                    CONCAT13(bStack_105,
                                             CONCAT12(bStack_106,CONCAT11(bStack_107,local_108))));
          dVar30 = dVar30 + dStack_100;
          FUN_147a1134e(plVar13,&local_108,uVar7,*(undefined4 *)(param_1 + 0xac));
          dVar30 = (dVar30 + dStack_100) / 3.0;
          dVar26 = (dVar26 + dVar32 +
                   (double)CONCAT44(uStack_104,
                                    CONCAT13(bStack_105,
                                             CONCAT12(bStack_106,CONCAT11(bStack_107,local_108)))))
                   / 3.0;
        }
        else {
          dVar26 = DAT_14c8463f0;
          dVar30 = DAT_14c8463f8;
          if (*(char *)(param_1 + 0x30) == '\0') {
            FUN_147a1134e(plVar13,&local_108,uVar4,*(undefined4 *)(param_1 + 0xac));
            dVar26 = (double)CONCAT44(uStack_104,
                                      CONCAT13(bStack_105,
                                               CONCAT12(bStack_106,CONCAT11(bStack_107,local_108))))
            ;
            dVar30 = dStack_100;
          }
        }
        lVar15 = (longlong)(int)param_2[6];
        if (0 < lVar15) {
          *(float *)(param_5 + lVar15) = (float)dVar26;
          *(float *)(param_5 + 4 + lVar15) = (float)dVar30;
        }
      }
      if ((char)local_130 != '\0') {
        if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
          uVar4 = *(int *)(lVar10 + 4) * 0xbb38435 + 0x3619636b;
          *(uint *)(lVar10 + 4) = uVar4;
          dVar26 = DAT_14c8462d0;
          dVar31 = DAT_14c8462c8;
          dVar32 = DAT_14c8462c0;
          dVar30 = (double)(((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * 6.2831855) * 0.5;
          dVar21 = sin(dVar30);
          dVar22 = cos(dVar30);
          dVar32 = dVar32 * dVar21;
          dVar31 = dVar31 * dVar21;
          dVar26 = dVar26 * dVar21;
          dVar30 = local_e8 * dVar26;
          dVar28 = local_e8 * dVar31;
          dVar29 = local_e8 * dVar32;
          dVar25 = dVar32 * dStack_e0;
          dVar27 = dVar31 * dStack_e0;
          dVar21 = dVar26 * local_d8;
          local_e8 = dVar31 * local_d8 * -1.0 +
                     dVar26 * dStack_e0 + local_e8 * dVar22 * 1.0 + dVar32 * dStack_d0;
          dStack_e0 = dVar32 * local_d8 * 1.0 +
                      dVar22 * dStack_e0 + dVar30 * -1.0 + dVar31 * dStack_d0;
          local_d8 = dVar22 * local_d8 * 1.0 + ((dVar28 * 1.0 + dStack_d0 * dVar26) - dVar25);
          dStack_d0 = dVar21 * -1.0 + ((dVar29 * -1.0 + dStack_d0 * dVar22) - dVar27);
        }
        lVar10 = (longlong)(int)local_124;
        FUN_1449413b4(&local_e8,&local_108);
        if ((*(byte *)(*(longlong *)(param_2[3] + 0x30) + 0x71) & 1) == 0) {
          dVar26 = (double)CONCAT44(uStack_104,
                                    CONCAT13(bStack_105,
                                             CONCAT12(bStack_106,CONCAT11(bStack_107,local_108))));
        }
        else {
          lVar15 = param_2[2];
          dVar26 = (double)CONCAT44(uStack_104,
                                    CONCAT13(bStack_105,
                                             CONCAT12(bStack_106,CONCAT11(bStack_107,local_108))));
          dVar21 = -*(double *)(lVar15 + 0x240);
          dVar22 = -*(double *)(lVar15 + 0x248);
          dVar32 = *(double *)(lVar15 + 0x250) * -1.0;
          dVar31 = *(double *)(lVar15 + 600) * 1.0;
          dVar30 = dStack_100 * dVar21 - dVar26 * dVar22;
          dVar25 = local_f8 * dVar22 - dStack_100 * dVar32;
          dVar27 = dVar26 * dVar32 - dVar21 * local_f8;
          dVar25 = dVar25 + dVar25;
          dVar27 = dVar27 + dVar27;
          dVar30 = dVar30 + dVar30;
          local_f8 = dVar31 * dVar30 + local_f8 + (dVar27 * dVar21 - dVar25 * dVar22);
          dVar26 = (dVar30 * dVar22 - dVar27 * dVar32) + dVar31 * dVar25 + dVar26;
          dStack_100 = *(double *)(lVar15 + 0x240) * dVar30 + dVar32 * dVar25 +
                       dVar31 * dVar27 + dStack_100;
        }
        *(float *)(param_5 + 0x18 + lVar10) = (float)dVar26;
        *(float *)(param_5 + 0x1c + lVar10) = (float)dStack_100;
        *(float *)(param_5 + 0x20 + lVar10) = (float)local_f8;
        *(float *)(param_5 + 0xc + lVar10) = (float)dVar26;
        *(float *)(param_5 + 0x10 + lVar10) = (float)dStack_100;
        *(float *)(param_5 + 0x14 + lVar10) = (float)local_f8;
      }
      goto LAB_1435ddcea;
    }
  }
LAB_1435dddb9:
  *(undefined4 *)(param_5 + 0x90) = 0x3f8ccccd;
LAB_1435ddcea:
  if ((local_a0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435de7e0 FUN_1435de7e0 body=1563 status=ok
// SIG undefined FUN_1435de7e0(void)

void FUN_1435de7e0(longlong param_1,longlong param_2,uint *param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 == 0) || (plVar6 = *(longlong **)(param_2 + 0x10), plVar6 == (longlong *)0x0))
  goto LAB_1435deb12;
  local_58 = 0;
  (**(code **)(*plVar6 + 0xb60))(plVar6,*(undefined8 *)(param_1 + 0x58));
  if (param_3[3] == 0) {
LAB_1435deb5a:
    lVar14 = 0;
  }
  else {
    uVar3 = param_3[2];
    lVar14 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         ((*(uint *)(plVar6 + 2) != param_3[3] || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))))
      goto LAB_1435deb5a;
      lVar14 = *plVar6;
    }
  }
  if ((((param_3[1] != 0) && (uVar3 = *param_3, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
     && (((lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar11 != 0 &&
          (*(uint *)(lVar11 + 0x10) == param_3[1])) &&
         (((*(uint *)(lVar11 + 8) & 0x10200000) == 0 && (lVar14 == local_58))))))
  goto LAB_1435deb12;
  param_3[0] = 0;
  param_3[1] = 0;
  if (local_58 == 0) {
    param_3[2] = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(local_58 + 0xc);
    param_3[2] = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    uVar3 = *(uint *)(lVar14 + 0x10);
    if (*(uint *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar3 = *(uint *)(lVar14 + 0x10);
      bVar15 = uVar3 == 0;
      if (bVar15) {
        *(uint *)(lVar14 + 0x10) = uVar4;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar3 = uVar4;
      }
    }
  }
  lVar14 = local_58;
  param_3[3] = uVar3;
  if (local_58 == 0) goto LAB_1435deb12;
  lVar7 = FUN_1414199c4();
  lVar11 = *(longlong *)(lVar14 + 0x10);
  if ((*(int *)(lVar11 + 0x38) < *(int *)(lVar7 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
      lVar7 + 0x30)) {
    plVar6 = (longlong *)FUN_140849bbe(local_58);
  }
  else {
    plVar6 = *(longlong **)(lVar14 + 0x398);
  }
  if (((plVar6 != (longlong *)0x0) && (plVar6[0x16] != 0)) &&
     (*(longlong *)(plVar6[0x16] + 0x218) != 0)) {
    lVar14 = plVar6[0xcb];
    if (lVar14 == 0) {
      lVar14 = plVar6[0xcc];
      if ((DAT_14c950c29 == '\x01') && (lVar14 != 0)) goto LAB_1435ded9a;
      if (lVar14 != 0) goto LAB_1435de9b4;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
LAB_1435ded9a:
        FUN_1456cec3c(lVar14);
      }
LAB_1435de9b4:
      if (DAT_14cb06da8 == 0) {
        local_70 = &local_50;
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = &LAB_1464003b0;
        local_78 = &LAB_147d17bdf;
        local_80 = &LAB_1417edf22;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10000000;
        local_a0 = 8;
        local_a8 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
        plVar8 = (longlong *)(**(code **)(*plVar6 + 0xa90))(plVar6);
        plVar13 = (longlong *)plVar6[0xcb];
        if (plVar13 == (longlong *)0x0) {
          plVar13 = (longlong *)plVar6[0xcc];
          if ((DAT_14c950c29 == '\x01') && (plVar13 != (longlong *)0x0)) goto LAB_1435deda7;
          if (plVar13 != (longlong *)0x0) goto LAB_1435dea13;
LAB_1435dec23:
          plVar13 = (longlong *)0x0;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
LAB_1435deda7:
            FUN_1456cec3c(plVar13);
          }
LAB_1435dea13:
          if (DAT_14cb06da8 == 0) {
            local_70 = &local_50;
            local_50 = FUN_1449e2820;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1464003b0;
            local_78 = &LAB_147d17bdf;
            local_80 = &LAB_1417edf22;
            local_88 = L"Engine";
            local_90 = 0;
            local_98 = 0x10000000;
            local_a0 = 8;
            local_a8 = 0x588;
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          if ((*(int *)(plVar13[2] + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) !=
              DAT_14cb06da8 + 0x30)) goto LAB_1435dec23;
        }
        uVar4 = (**(code **)(*plVar13 + 0x428))(plVar13,0);
        uVar3 = *(uint *)(plVar8 + 1);
        if ((ulonglong)uVar3 != 0) {
          uVar9 = uVar3 - 1;
          if ((int)uVar4 < (int)(uVar3 - 1)) {
            uVar9 = uVar4;
          }
          uVar4 = 0;
          if (0 < (int)uVar9) {
            uVar4 = uVar9;
          }
          if ((int)uVar4 < (int)uVar3) {
            uVar12 = (ulonglong)uVar4;
            lVar14 = uVar12 << 0x20;
            do {
              if (*(int *)(*(longlong *)(*plVar8 + uVar12 * 8) + 0xec) != 0) {
                lVar11 = FUN_1417c143e(plVar6,uVar12 & 0xffffffff,0);
                lVar14 = *(longlong *)(*plVar8 + (lVar14 >> 0x1d));
                bVar10 = 1;
                if ((lVar11 != 0) && (*(int *)(lVar11 + 0x40) != 0)) {
                  bVar10 = *(byte *)(lVar11 + 0x20) ^ 1;
                }
                plVar13 = *(longlong **)(lVar14 + 0x28);
                if (plVar13 != (longlong *)0x0) {
                  iVar2 = *(int *)(lVar14 + 0xec);
                  iVar5 = (**(code **)(*plVar13 + 0x50))();
                  if (((lVar11 != 0) && (iVar2 != 0 && bVar10 == 0)) && (0 < iVar5)) {
                    param_3[0x12] = (uint)uVar12;
                    uVar3 = *(uint *)((longlong)plVar6 + 0xc);
                    *param_3 = uVar3;
                    if ((int)uVar3 < DAT_14c9647dc) {
                      lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                    }
                    else {
                      lVar14 = 0;
                    }
                    uVar3 = *(uint *)(lVar14 + 0x10);
                    if (*(uint *)(lVar14 + 0x10) == 0) {
                      LOCK();
                      iVar2 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar4 = DAT_14c964868 + 1;
                      bVar15 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar2;
                      if (bVar15) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar4);
                      }
                      LOCK();
                      uVar3 = *(uint *)(lVar14 + 0x10);
                      bVar15 = uVar3 == 0;
                      if (bVar15) {
                        *(uint *)(lVar14 + 0x10) = uVar4;
                        uVar3 = 0;
                      }
                      UNLOCK();
                      if (bVar15) {
                        uVar3 = uVar4;
                      }
                    }
                    param_3[1] = uVar3;
                    FUN_147c21574(param_1,param_2);
                    goto LAB_1435deb12;
                  }
                }
                break;
              }
              uVar12 = uVar12 + 1;
              lVar14 = lVar14 + 0x100000000;
            } while (uVar3 != uVar12);
          }
        }
      }
    }
  }
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0x10) + 0x690);
  *pbVar1 = *pbVar1 | 0x80;
LAB_1435deb12:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435dedfc FUN_1435dedfc body=1839 status=ok
// SIG undefined FUN_1435dedfc(void)

void FUN_1435dedfc(longlong param_1,longlong *param_2,int param_3,float param_4)

{
  double *pdVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined8 *local_200;
  double *local_1f8;
  undefined1 local_1f0;
  undefined4 local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_118;
  double local_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_228;
  puVar12 = (uint *)FUN_147bf7da6(param_2,param_1);
  FUN_1435de7e0(param_1,param_2,puVar12);
  if ((((puVar12[1] == 0) || (uVar11 = *puVar12, (int)uVar11 < 0)) || (DAT_14c9647dc <= (int)uVar11)
      ) || (((puVar13 = (undefined8 *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             puVar13 == (undefined8 *)0x0 || (*(uint *)(puVar13 + 2) != puVar12[1])) ||
            (((*(uint *)(puVar13 + 1) & 0x10200000) != 0 || (puVar12[0x12] == 0xffffffff))))))
  goto LAB_1435deee9;
  if ((*(uint *)(puVar13 + 1) & 0x10200000) == 0) {
    uVar19 = *puVar13;
  }
  else {
    uVar19 = 0;
  }
  uVar11 = *(uint *)(param_1 + 0x50);
  if (((uVar11 & 4) != 0) && (uVar7 = puVar12[5], 0 < (int)uVar7)) {
    fVar28 = (float)(-(uint)(0.0 < param_4) & (uint)(1.0 / param_4));
    lVar18 = 2;
    lVar14 = 0;
    do {
      if (*(int *)(*(longlong *)(puVar12 + 8) + lVar14 * 4) != -1) {
        FUN_1401ff402(uVar19,&local_178);
        lVar5 = *(longlong *)(puVar12 + 0xc);
        fVar2 = *(float *)(lVar5 + lVar18 * 4);
        fVar3 = *(float *)(lVar5 + -4 + lVar18 * 4);
        lVar17 = *(longlong *)(puVar12 + 0x10);
        *(float *)(lVar17 + -8 + lVar18 * 4) =
             ((float)local_118 - *(float *)(lVar5 + -8 + lVar18 * 4)) * fVar28;
        *(float *)(lVar17 + -4 + lVar18 * 4) = ((float)local_110 - fVar3) * fVar28;
        *(float *)(lVar17 + lVar18 * 4) = ((float)local_108 - fVar2) * fVar28;
        uVar7 = puVar12[5];
      }
      lVar14 = lVar14 + 1;
      lVar18 = lVar18 + 3;
    } while (lVar14 < (int)uVar7);
    uVar11 = *(uint *)(param_1 + 0x50);
  }
  if (((uVar11 & 1) == 0) || (param_2[0x2d] == 0)) goto LAB_1435deee9;
  iVar8 = (**(code **)(*param_2 + 0x150))(param_2);
  if (iVar8 < 1) {
    local_1dc = 0;
  }
  else {
    local_1dc = (**(code **)(*param_2 + 0x158))(param_2);
  }
  local_1b8 = param_2[2];
  if ((((*(byte *)(local_1b8 + 0x693) & 0x10) == 0) && (DAT_14c86a9f8 == '\x01')) &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    local_1d0 = 0x900;
    if (iVar4 == 1) {
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1435df0f9;
    }
  }
  else {
LAB_1435df0f9:
    local_1d0 = 0x240;
  }
  local_1c0 = FUN_147c05556(param_2,param_1);
  if (local_1c0 == 0) {
    local_1c0 = param_2[2] + 0x8f0;
  }
  if (0 < (longlong)*(int *)((longlong)param_2 + 0x18c)) {
    lVar14 = param_2[0x2d];
    lVar18 = param_2[0x2e];
    lVar5 = param_2[0x31];
    local_1b0 = (longlong)param_3;
    local_1c8 = (longlong)iVar8;
    uVar15 = (longlong)*(int *)((longlong)param_2 + 0x18c) + 1;
    local_1d8 = lVar18;
    do {
      uVar16 = (ulonglong)((uint)*(ushort *)(lVar18 + -4 + uVar15 * 2) * (int)lVar5);
      if ((*(byte *)(lVar14 + 0x6f + uVar16) & 4) == 0) {
        lVar17 = uVar16 + lVar14;
        local_208 = *(undefined4 *)(lVar17 + local_1b0);
        local_1f8 = &local_178;
        local_200 = &local_190;
        local_1f0 = 0;
        cVar6 = FUN_147c20842(param_1,param_2,puVar12,uVar19);
        lVar18 = local_1d8;
        if (cVar6 != '\0') {
          *(undefined8 *)(lVar17 + 0x18) = local_190;
          *(undefined8 *)(lVar17 + 0x20) = uStack_188;
          *(undefined8 *)(lVar17 + 0x28) = local_180;
          iVar8 = _finite(*(double *)(lVar17 + 0x18));
          if ((iVar8 != 0) && (iVar8 = _finite(*(double *)(lVar17 + 0x20)), iVar8 != 0)) {
            _finite(*(double *)(lVar17 + 0x28));
          }
          lVar18 = local_1d8;
          if ((char)local_1dc != '\0') {
            if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
              uVar11 = *(int *)(local_1c0 + 4) * 0xbb38435 + 0x3619636b;
              *(uint *)(local_1c0 + 4) = uVar11;
              dVar29 = DAT_14c8462d0;
              dVar30 = DAT_14c8462c8;
              dVar27 = DAT_14c8462c0;
              dVar25 = (double)(((float)(uVar11 >> 9 | 0x3f800000) + -1.0) * 6.2831855) * 0.5;
              dVar20 = sin(dVar25);
              dVar21 = cos(dVar25);
              dVar27 = dVar27 * dVar20;
              dVar30 = dVar30 * dVar20;
              dVar29 = dVar29 * dVar20;
              dVar25 = local_178 * dVar29;
              dVar24 = local_178 * dVar30;
              dVar26 = local_178 * dVar27;
              dVar22 = dVar27 * dStack_170;
              dVar23 = dVar30 * dStack_170;
              dVar20 = dVar29 * local_168;
              local_178 = dVar30 * local_168 * -1.0 +
                          dVar29 * dStack_170 + local_178 * dVar21 * 1.0 + dVar27 * dStack_160;
              dStack_170 = dVar27 * local_168 * 1.0 +
                           dVar21 * dStack_170 + dVar25 * -1.0 + dVar30 * dStack_160;
              local_168 = dVar21 * local_168 * 1.0 + ((dVar24 * 1.0 + dStack_160 * dVar29) - dVar22)
              ;
              dStack_160 = dVar20 * -1.0 + ((dVar26 * -1.0 + dStack_160 * dVar21) - dVar23);
            }
            FUN_1449413b4(&local_178,&local_1a8);
            dVar25 = local_198;
            dVar27 = local_1a8;
            dVar30 = dStack_1a0;
            if ((*(byte *)(*(longlong *)(param_2[3] + 0x30) + 0x71) & 1) != 0) {
              dVar29 = *(double *)(local_1b8 + local_1d0);
              dVar25 = -dVar29;
              dVar27 = -((double *)(local_1b8 + local_1d0))[1];
              pdVar1 = (double *)(local_1b8 + 0x10 + local_1d0);
              dVar20 = *pdVar1 * -1.0;
              dVar21 = pdVar1[1] * 1.0;
              dVar30 = dStack_1a0 * dVar25 - local_1a8 * dVar27;
              dVar22 = local_198 * dVar27 - dStack_1a0 * dVar20;
              dVar23 = local_1a8 * dVar20 - dVar25 * local_198;
              dVar22 = dVar22 + dVar22;
              dVar23 = dVar23 + dVar23;
              dVar30 = dVar30 + dVar30;
              dVar25 = dVar21 * dVar30 + local_198 + (dVar23 * dVar25 - dVar22 * dVar27);
              dVar27 = (dVar30 * dVar27 - dVar23 * dVar20) + dVar21 * dVar22 + local_1a8;
              dVar30 = dVar29 * dVar30 + dVar20 * dVar22 + dVar21 * dVar23 + dStack_1a0;
            }
            *(float *)(lVar17 + 0x18 + local_1c8) = (float)dVar27;
            *(float *)(lVar17 + 0x1c + local_1c8) = (float)dVar30;
            *(float *)(lVar17 + 0x20 + local_1c8) = (float)dVar25;
            lVar18 = local_1d8;
          }
        }
      }
      uVar15 = uVar15 - 1;
    } while (1 < uVar15);
  }
LAB_1435deee9:
  if ((local_f0 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1435df55c FUN_1435df55c body=221 status=ok
// SIG undefined FUN_1435df55c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1435df55c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined2 local_3c;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_4c = *(undefined8 *)(param_1 + 0x38);
  local_3e = 0;
  local_70 = 9;
  local_3c = 0xff00;
  local_44 = 0x10001;
  local_40 = 0x101;
  local_68 = DAT_14ca83a58;
  local_64 = _DAT_14ca83a5c;
  uStack_5c = _DAT_14ca83a64;
  local_50 = 0;
  local_38 = 0x70;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  local_3d = param_4;
  local_30 = param_3;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,param_2,&DAT_14ca85100,&local_70);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435df63a FUN_1435df63a body=229 status=ok
// SIG undefined FUN_1435df63a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1435df63a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  uint local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined2 local_3d;
  undefined1 local_3b;
  undefined4 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_54 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_30 = *(undefined8 *)(param_1 + 0x10);
  local_4c = *(undefined8 *)(param_1 + 0x20);
  local_3e = 0;
  local_70 = 0x4000009;
  local_3d = 2;
  local_44 = 0x10001;
  local_40 = 0x101;
  local_68 = DAT_14ca83a58;
  local_64 = _DAT_14ca83a5c;
  uStack_5c = _DAT_14ca83a64;
  local_50 = 0;
  local_3b = 0xff;
  local_38 = 0x1000;
  local_28 = 0;
  uStack_20 = 0;
  local_18 = 0;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,param_2,&DAT_14ca85100);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435df748 FUN_1435df748 body=282 status=ok
// SIG undefined FUN_1435df748(void)

undefined8 * FUN_1435df748(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435df720);
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



// FUNCTION 1435df862 FUN_1435df862 body=282 status=ok
// SIG undefined FUN_1435df862(void)

undefined8 * FUN_1435df862(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435df720);
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



// FUNCTION 1435df97c FUN_1435df97c body=282 status=ok
// SIG undefined FUN_1435df97c(void)

undefined8 * FUN_1435df97c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1435df720);
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



// FUNCTION 1435dfa96 FUN_1435dfa96 body=61 status=ok
// SIG undefined FUN_1435dfa96(void)

void FUN_1435dfa96(longlong *param_1)

{
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  (**(code **)(*(longlong *)(*param_1 + 0x40) + 0x20))(*param_1 + 0x40);
  FUN_144725486(*param_1 + 0x80);
  FUN_144725486(*param_1 + 0xa8);
  return;
}



// FUNCTION 1435dfad4 FUN_1435dfad4 body=2280 status=ok
// SIG undefined FUN_1435dfad4(void)

void FUN_1435dfad4(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  void *pvVar17;
  undefined ***pppuVar18;
  uint *puVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1435bb06c();
  uVar6 = 0;
  lVar21 = **(longlong **)(param_1 + 0x288);
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  if (lVar21 != 0) {
    uVar6 = *(undefined4 *)(**(longlong **)(param_1 + 0x288) + 0x114);
  }
  *(undefined4 *)(param_1 + 0x34c) = uVar6;
  *(undefined4 *)(param_1 + 0x340) = 0;
  uVar15 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x8f4) * 0xbb38435 + 0x3619636b;
  *(uint *)(*(longlong *)(param_1 + 0x10) + 0x8f4) = uVar15;
  iVar16 = (int)((float)(uVar15 >> 9 | 0x3f800000) + -1.0);
  *(int *)(param_1 + 0x344) = iVar16;
  uVar15 = iVar16 * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x348) = uVar15;
  *(float *)(param_1 + 0x350) = (float)(uVar15 >> 9 | 0x3f800000) + -1.0;
  lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x280) + 0xa0);
  puVar10 = &DAT_14c846330;
  if (((*(byte *)(**(longlong **)(param_1 + 0x288) + 0x71) & 1) == 0) &&
     ((*(byte *)(**(longlong **)(param_1 + 0x288) + 0x73) & 4) != 0)) {
    puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x8c8);
  }
  *(undefined4 *)(lVar21 + 0xdc) = *(undefined4 *)(puVar10 + 1);
  *(undefined8 *)(lVar21 + 0xd4) = *puVar10;
  iVar16 = FUN_147c25452(param_1);
  if (*(int *)(param_1 + 0x2a0) < iVar16) {
    do {
      iVar7 = FUN_147c2561a(lVar21 + 0xf8);
      if (iVar7 == -1) break;
      iVar2 = *(int *)(param_1 + 0x2a0);
      uVar15 = iVar2 + 1;
      *(uint *)(param_1 + 0x2a0) = uVar15;
      if (*(uint *)(param_1 + 0x2a4) < uVar15) {
        FUN_1447808da(param_1 + 0x298);
      }
      *(int *)(*(longlong *)(param_1 + 0x298) + (longlong)iVar2 * 4) = iVar7;
      iVar7 = *(int *)(param_1 + 0x2d0);
      uVar15 = iVar7 + 1;
      *(uint *)(param_1 + 0x2d0) = uVar15;
      if (*(uint *)(param_1 + 0x2d4) < uVar15) {
        FUN_14475e4ac(param_1 + 0x2c8);
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x2c8) + (longlong)iVar7 * 4) = 0;
    } while (*(int *)(param_1 + 0x2a0) < iVar16);
  }
  lVar21 = **(longlong **)(*(longlong *)(param_1 + 8) + 0x40);
  if (lVar21 == 0) {
    iVar16 = *(int *)(param_1 + 0x2a0);
LAB_1435dfcad:
    if (*(int *)(param_1 + 0x2c0) != iVar16) goto LAB_1435dfd54;
  }
  else {
    iVar16 = *(int *)(param_1 + 0x2a0);
    if ((*(byte *)(*(longlong *)(lVar21 + 0x48) + 0x5c4) & 1) == 0) goto LAB_1435dfcad;
LAB_1435dfd54:
    *(int *)(param_1 + 0x2c0) = iVar16;
    uVar15 = iVar16 + 0x1f;
    if (0x1f < uVar15) {
      uVar20 = uVar15 >> 5;
      if (*(int *)(param_1 + 0x2c4) + 0x1fU >> 5 < uVar20) {
        if ((0x9f < uVar15) || (*(longlong *)(param_1 + 0x2b8) != 0)) {
          uVar23 = 0;
          if (0x9f < uVar15) {
            uVar23 = uVar20;
          }
          FUN_1446efa72(param_1 + 0x2b8,0,uVar23,4);
        }
        *(uint *)(param_1 + 0x2c4) = uVar15 & 0xffffffe0;
      }
      pvVar17 = *(void **)(param_1 + 0x2b8);
      if (*(void **)(param_1 + 0x2b8) == (void *)0x0) {
        pvVar17 = (void *)(param_1 + 0x2a8);
      }
      if (uVar15 < 0x120) {
        uVar20 = uVar15 >> 3 & 0x3c;
      }
      else {
        uVar20 = uVar20 << 2;
      }
      memset(pvVar17,0,(ulonglong)uVar20);
      iVar16 = *(int *)(param_1 + 0x2c0);
      iVar7 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar7 = iVar16;
      }
      if (iVar16 % 0x20 != 0) {
        pvVar17 = (void *)(param_1 + 0x2a8);
        if (*(void **)(param_1 + 0x2b8) != (void *)0x0) {
          pvVar17 = *(void **)(param_1 + 0x2b8);
        }
        bVar14 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)pvVar17 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar17 + (longlong)(iVar7 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    FUN_147c254c0(param_1);
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x290) + 0x310) = 1;
  lVar21 = *(longlong *)(param_1 + 0x280);
  if (*(char *)(lVar21 + 8) == '\0') {
    lVar3 = *(longlong *)(param_1 + 0x290);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar16 = *(int *)(lVar4 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar16 != 2) {
        if (iVar16 != 1) goto LAB_1435dfd06;
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1435dfd0f;
        goto LAB_1435dfe5c;
      }
    }
    else {
LAB_1435dfd06:
      if (iVar16 != 0x10) {
LAB_1435dfe5c:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar4 + 0xc60), iVar16 == 2))
          goto LAB_1435dfd0f;
          if (iVar16 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_1435dfd0f;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar10 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar12 = (uint *)*puVar10;
          if (puVar12 != (uint *)0x0) goto LAB_1435e0087;
          while( true ) {
            uVar15 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar15 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar15 | 1;
              __tlregdtor(&LAB_1435df720);
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
            *puVar10 = puVar11;
            FUN_140217a48(puVar10);
            puVar12 = (uint *)*puVar10;
LAB_1435e0087:
            puVar22 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar22 + 0x17);
            uVar15 = puVar12[0x12];
            if (puVar19 <= puVar12 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar20 = *puVar12;
              *puVar12 = *puVar12 + uVar15 + 1;
              UNLOCK();
              if ((uVar20 ^ uVar15) != 0xffffffff) break;
              puVar12 = (uint *)*puVar10;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *puVar10 = puVar12;
              puVar22 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar22 + 0x17);
              uVar15 = 0;
              if (puVar19 <= puVar12 + 0x4000) {
                uVar15 = 1;
                goto LAB_1435e0107;
              }
            }
          }
          uVar15 = uVar15 + 1;
LAB_1435e0107:
          *(uint **)(puVar12 + 0x10) = puVar19;
          puVar12[0x12] = uVar15;
          iVar16 = 0;
          FUN_1447247dc(puVar22,0);
          *puVar22 = &PTR_FUN_14aa04848;
          puVar22[0x15] = lVar21;
          puVar22[0x16] = lVar3;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar15 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
              uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            }
            else {
              uVar24 = 2;
            }
          }
          else {
            iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar24 = 5;
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
          lVar21 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar21 == 0) {
            uVar5 = 1;
            if ((char)uVar24 != '\x06') {
              uVar5 = uVar24;
            }
            uVar24 = uVar5;
            uVar13 = 0;
          }
          else {
            if ((char)uVar24 == '\x06') {
              uVar24 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
            }
            uVar13 = *(undefined8 *)(lVar21 + 0x30);
          }
          puVar22[0xf] = uVar13;
          puVar22[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar22 + 0x1c) = iVar16;
          if (puVar22 == (undefined8 *)0x0) {
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
            UNLOCK();
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(puVar22);
            LOCK();
            piVar1 = (int *)(puVar22 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar22)(puVar22,1);
            }
          }
        }
        else {
          local_98 = local_88;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14aa047f0;
          local_88[0] = FUN_1435e5ba4;
          local_60 = lVar21;
          local_58 = lVar3;
          FUN_14005a792(&DAT_14ca9a440,L"FAddGPUSimulationCommand",&DAT_14caf599c);
          if (local_88[0] != (code *)0x0) {
            pppuVar18 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar18 = &local_68;
            }
            (*(code *)(*pppuVar18)[2])();
          }
        }
        goto LAB_1435dfeff;
      }
    }
LAB_1435dfd0f:
    if (*(int *)(lVar3 + 0x300) == -1) {
      FUN_147c28654(lVar21 + 0x58,local_88);
      *(int *)(lVar3 + 0x300) = (int)local_88[0];
      *(longlong *)(*(longlong *)(lVar21 + 0x58) + (longlong)(int)local_88[0] * 8) = lVar3;
      piVar1 = (int *)(lVar21 + 0x90 + (longlong)*(int *)(lVar3 + 0x304) * 4);
      *piVar1 = *piVar1 + 1;
    }
  }
LAB_1435dfeff:
  if (**(longlong **)(param_1 + 0x288) == 0) {
    FUN_14003fbd6();
    lVar21 = DAT_14caea080;
    if ((DAT_14caea080 != 0) && (DAT_14c950c29 != '\0')) goto LAB_1435dff3c;
  }
  else {
    lVar21 = *(longlong *)(**(longlong **)(param_1 + 0x288) + 0x30);
    if ((DAT_14c950c29 == '\x01') && (lVar21 != 0)) {
LAB_1435dff3c:
      FUN_1456cec3c(lVar21);
    }
  }
  *(longlong *)(param_1 + 0x238) = lVar21;
  FUN_1435e3956(param_1);
  lVar21 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb0);
  if (lVar21 == 0) {
    lVar21 = FUN_1448abda6();
    if (lVar21 == 0) {
      *(undefined4 *)(param_1 + 0x278) = 0;
      iVar16 = 0;
      goto LAB_1435dffb1;
    }
  }
  uVar15 = *(uint *)(lVar21 + 0xc);
  *(uint *)(param_1 + 0x278) = uVar15;
  if ((int)uVar15 < DAT_14c9647dc) {
    lVar21 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
  }
  else {
    lVar21 = 0;
  }
  iVar16 = *(int *)(lVar21 + 0x10);
  if (*(int *)(lVar21 + 0x10) == 0) {
    LOCK();
    iVar16 = DAT_14c964868 + 1;
    UNLOCK();
    iVar7 = DAT_14c964868 + 1;
    bVar25 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar16;
    if (bVar25) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar16 = *(int *)(lVar21 + 0x10);
    bVar25 = iVar16 == 0;
    if (bVar25) {
      *(int *)(lVar21 + 0x10) = iVar7;
      iVar16 = 0;
    }
    UNLOCK();
    if (bVar25) {
      iVar16 = iVar7;
    }
  }
LAB_1435dffb1:
  *(int *)(param_1 + 0x27c) = iVar16;
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1435e03be FUN_1435e03be body=1387 status=ok
// SIG undefined FUN_1435e03be(void)

void FUN_1435e03be(longlong *param_1,undefined8 param_2,char param_3)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  float local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int local_84;
  ulonglong local_80;
  
  fVar18 = (float)param_2;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = param_1 + 0x5d;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
    FUN_147c26560(plVar5,0);
  }
  if (((((DAT_14caf3c98 == 0) && (DAT_14caf3c9c == 0)) && (DAT_14c7616a4 != 0)) &&
      ((DAT_14ca84e1d == '\x01' && ((DAT_14c873768 & 1) != 0)))) && (DAT_14ca84e19 == '\x01')) {
    lVar3 = param_1[3];
    fVar13 = (float)(**(code **)(*param_1 + 0x28))(param_1,fVar18,lVar3);
    *(byte *)(param_1[0x52] + 0x313) = *(byte *)(param_1 + 0x2c) & 1;
    if ((*(byte *)(param_1 + 0x2c) & 1) == 0) {
      *(float *)(param_1 + 0x34) = fVar13 + *(float *)(param_1 + 0x34);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_e8);
    }
    lVar4 = param_1[2];
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x692) & 4) != 0)) {
      fVar14 = *(float *)(lVar4 + 0x728) - *(float *)((longlong)param_1 + 0x19c);
      if (*(float *)(param_1[0x51] + 0x1fc) <= fVar14 && fVar14 != *(float *)(param_1[0x51] + 0x1fc)
         ) {
        param_3 = '\x01';
      }
    }
    local_84 = FUN_147c2578c(param_1);
    (**(code **)(*param_1 + 0x38))(param_1,fVar18,lVar3);
    if (*(int *)((longlong)param_1 + 0x34c) == 0) {
      bVar6 = false;
    }
    else {
      bVar6 = *(int *)((longlong)param_1 + 0x34c) <= (int)param_1[0x41];
    }
    if ((((*(byte *)(param_1 + 0x2c) & 0x30) != 0 || param_3 != '\0') ||
         *(float *)(param_1 + 0x34) < 0.0) || (bVar6)) {
      if ((*(byte *)((longlong)param_1 + 0x161) & 4) != 0) {
        FUN_147bf6c08(param_1);
      }
    }
    else {
      local_90 = 0;
      uStack_8c = 0;
      uStack_88 = 0;
      local_9c = fVar18;
      (**(code **)(*param_1 + 0x98))(param_1,&local_9c,&local_90);
      local_90 = local_90 + (int)param_1[0x62];
      fVar14 = 0.0;
      iVar9 = local_90 - DAT_14c7616b0;
      if (iVar9 != 0 && DAT_14c7616b0 <= local_90) {
        local_90 = DAT_14c7616b0;
        fVar14 = (float)iVar9;
      }
      local_c0 = param_1 + 0x61;
      FUN_147c25826(param_1,&local_9c,param_2);
      iVar9 = (int)local_9c + (int)param_1[0x60];
      fVar15 = (float)FUN_147bff2aa(param_1[1]);
      iVar9 = (int)((float)iVar9 * fVar15);
      local_90 = (int)((float)local_90 * fVar15);
      lVar4 = param_1[0x5e];
      FUN_147c259b6(param_1,local_90 + (int)lVar4 + iVar9);
      local_c8 = *(undefined8 *)(param_1[0x50] + 0xa0);
      local_90 = FUN_1435e40f6(param_1,plVar5,local_90,&local_84);
      lVar8 = param_1[0x5e];
      local_c8 = *(undefined8 *)(param_1[0x50] + 0xa0);
      fVar15 = (float)FUN_1435e40f6(param_1,plVar5,iVar9,&local_84);
      *(float *)(param_1 + 0x33) = fVar14 + *(float *)(param_1 + 0x33);
      local_9c = fVar15;
      if (0 < local_90) {
        local_a0 = uStack_88;
        local_a8 = CONCAT44(uStack_8c,local_90);
        FUN_147c259f2(param_1,(longlong)(int)lVar4 * 0x4c + param_1[0x5d],&local_a8,local_c0);
      }
      if (0 < (int)fVar15) {
        local_b0 = local_94;
        local_b8 = CONCAT44(uStack_98,local_9c);
        FUN_147c259f2(param_1,(longlong)(int)lVar8 * 0x4c + param_1[0x5d],&local_b8,param_1 + 0x5f);
      }
      *(undefined4 *)(param_1 + 0x60) = 0;
      if (*(int *)((longlong)param_1 + 0x304) < 0) {
        FUN_147c26560(param_1 + 0x5f,0);
      }
      *(undefined4 *)(param_1 + 0x62) = 0;
      if (*(int *)((longlong)param_1 + 0x314) < 0) {
        FUN_147c26560(local_c0,0);
      }
      lVar4 = param_1[2];
      if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x692) & 4) != 0)) {
        FUN_147c26260(param_1,((longlong)(int)param_1[0x5e] -
                              ((longlong)(int)fVar15 + (longlong)local_90)) * 0x4c + param_1[0x5d],
                      (longlong)(int)fVar15 + (longlong)local_90,
                      *(float *)(lVar4 + 0x728) - *(float *)((longlong)param_1 + 0x19c));
      }
    }
    FUN_147c263c6(param_1);
    plVar5 = (longlong *)param_1[0x51];
    if (*(longlong *)(*plVar5 + 0x30) != 0) {
      param_1[0x47] = *(longlong *)(*plVar5 + 0x30);
    }
    dVar16 = (double)fVar18;
    dVar1 = (double)plVar5[0x1c];
    dVar2 = (double)plVar5[0x1b];
    param_1[99] = (longlong)(dVar16 * (double)plVar5[0x1a] + (double)param_1[99]);
    param_1[100] = (longlong)(dVar2 * dVar16 + (double)param_1[100]);
    param_1[0x65] = (longlong)(dVar1 * dVar16 + (double)param_1[0x65]);
    fVar14 = (*(float *)(param_1 + 0x34) - *(float *)((longlong)plVar5 + 0x144)) *
             *(float *)(plVar5 + 0x28);
    fVar14 = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar14);
    auVar17 = roundss(ZEXT816(0),ZEXT416((uint)fVar14),0xb);
    uVar10 = (uint)fVar14;
    uVar12 = *(byte *)((longlong)plVar5 + 0x159) - 1;
    uVar7 = uVar12;
    if (uVar10 < uVar12) {
      uVar7 = uVar10;
    }
    uVar11 = uVar10 + 1;
    if (uVar12 <= uVar10 + 1) {
      uVar11 = uVar12;
    }
    fVar15 = *(float *)(plVar5[0x29] +
                       (longlong)(int)(uVar7 * *(byte *)((longlong)plVar5 + 0x15a)) * 4);
    *(float *)(param_1 + 0x66) =
         (*(float *)(plVar5[0x29] +
                    (longlong)(int)(uVar11 * *(byte *)((longlong)plVar5 + 0x15a)) * 4) - fVar15) *
         (fVar14 - auVar17._0_4_) + fVar15;
    *(float *)((longlong)param_1 + 0x334) = fVar18;
    *(int *)((longlong)param_1 + 0x18c) = local_84 << 4;
    *(float *)(param_1 + 0x34) = fVar13 + *(float *)(param_1 + 0x34);
    (**(code **)(*param_1 + 0x68))(param_1,fVar18);
    (**(code **)(*param_1 + 0x48))(param_1,fVar18,lVar3);
    if (*(char *)(param_1[0x52] + 0x310) == '\x01') {
      FUN_1435d2aac(param_1[0x52],param_1 + 0x53,*(undefined8 *)(param_1[0x51] + 0x340));
    }
    FUN_147c05a7c(param_1);
  }
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


