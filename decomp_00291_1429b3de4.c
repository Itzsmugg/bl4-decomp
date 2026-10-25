// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1429b3de4 FUN_1429b3de4 body=69 status=ok
// SIG undefined FUN_1429b3de4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b3de4(void)

{
  _DAT_14c993b08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b3e26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b10,1);
  return;
}



// FUNCTION 1429b3e29 FUN_1429b3e29 body=69 status=ok
// SIG undefined FUN_1429b3e29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b3e29(void)

{
  _DAT_14c993b18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b3e6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b20,1);
  return;
}



// FUNCTION 1429b3e6e FUN_1429b3e6e body=69 status=ok
// SIG undefined FUN_1429b3e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b3e6e(void)

{
  _DAT_14c993b28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b3eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b30,1);
  return;
}



// FUNCTION 1429b3eb3 FUN_1429b3eb3 body=69 status=ok
// SIG undefined FUN_1429b3eb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b3eb3(void)

{
  _DAT_14c993b38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b3ef5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b40,1);
  return;
}



// FUNCTION 1429b3ef8 FUN_1429b3ef8 body=69 status=ok
// SIG undefined FUN_1429b3ef8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b3ef8(void)

{
  _DAT_14c993b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b3f3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b50,1);
  return;
}



// FUNCTION 1429b3f9c FUN_1429b3f9c body=80 status=ok
// SIG undefined FUN_1429b3f9c(void)

undefined8 * FUN_1429b3f9c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b3ff8 FUN_1429b3ff8 body=77 status=ok
// SIG undefined FUN_1429b3ff8(void)

undefined8 * FUN_1429b3ff8(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b40a4 FUN_1429b40a4 body=105 status=ok
// SIG undefined FUN_1429b40a4(void)

void FUN_1429b40a4(undefined8 *param_1,longlong *param_2,double param_3)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(*param_2 + 0x1c) | 0x40;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar1;
  *(byte *)((longlong)param_1 + 0x1d) = bVar1;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_149f55aa0;
  lVar2 = *param_2;
  param_1[5] = lVar2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    lVar2 = param_1[5];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar2 + 0x19);
  param_1[4] = param_3;
  param_1[2] = param_3 + *(double *)(lVar2 + 0x10);
  return;
}



// FUNCTION 1429b410e FUN_1429b410e body=77 status=ok
// SIG undefined FUN_1429b410e(void)

undefined8 * FUN_1429b410e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b41c6 FUN_1429b41c6 body=105 status=ok
// SIG undefined FUN_1429b41c6(void)

void FUN_1429b41c6(undefined8 *param_1,longlong *param_2,double param_3)

{
  byte bVar1;
  longlong lVar2;
  
  bVar1 = *(byte *)(*param_2 + 0x1c) | 0x40;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar1;
  *(byte *)((longlong)param_1 + 0x1d) = bVar1;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_149f55c30;
  lVar2 = *param_2;
  param_1[5] = lVar2;
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
    lVar2 = param_1[5];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar2 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar2 + 0x19);
  param_1[4] = param_3;
  param_1[2] = param_3 + *(double *)(lVar2 + 0x10);
  return;
}



// FUNCTION 1429b4230 FUN_1429b4230 body=80 status=ok
// SIG undefined FUN_1429b4230(void)

undefined8 * FUN_1429b4230(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b4286 FUN_1429b4286 body=42 status=ok
// SIG undefined FUN_1429b4286(void)

void FUN_1429b4286(undefined4 *param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_14482d6a4(*param_2,param_3,*param_1,*(longlong *)(param_1 + 2),
                *(undefined4 *)(*(longlong *)(param_1 + 2) + 8));
  return;
}



// FUNCTION 1429b437a FUN_1429b437a body=3900 status=ok
// SIG undefined FUN_1429b437a(void)

void FUN_1429b437a(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  uint *puVar12;
  undefined1 *puVar13;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong *local_2a0;
  longlong *local_298;
  ulonglong local_290;
  undefined8 local_288;
  ulonglong local_280;
  ulonglong local_278;
  longlong local_270;
  ulonglong local_268;
  undefined8 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238 [2];
  undefined8 *local_228;
  undefined1 *local_1f8 [2];
  undefined8 *local_1e8;
  undefined1 local_1b8 [32];
  undefined1 *local_198;
  undefined8 local_190;
  undefined8 *local_188 [2];
  undefined8 local_178;
  undefined **local_168;
  longlong local_160;
  undefined4 local_158;
  longlong local_150;
  undefined8 *local_148 [2];
  undefined8 *local_138;
  undefined1 local_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8 [2];
  undefined8 local_c8;
  undefined **local_b8;
  longlong local_b0;
  int local_a8;
  int local_a4;
  longlong local_a0;
  undefined1 local_90 [32];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar16 = *param_1;
  lVar5 = *(longlong *)(*(longlong *)(lVar16 + 8) + (longlong)(int)param_1[1] * 8);
  local_2a0 = param_1;
  local_260 = param_3;
  FUN_1429aacee(lVar5);
  iVar4 = *(int *)(lVar5 + 0x18);
  iVar18 = *(int *)(lVar16 + 0x20);
  if (iVar4 < 0) {
    iVar6 = (iVar4 - iVar18 / 2) + 1;
  }
  else {
    iVar6 = iVar18 / 2 + iVar4;
  }
  uVar7 = iVar6 / iVar18;
  uVar19 = 1;
  if (1 < (int)uVar7) {
    uVar19 = (ulonglong)uVar7;
  }
  local_278 = (longlong)(iVar4 + (int)uVar19 + -1) / (longlong)(int)uVar19 & 0xffffffff;
  iVar18 = *(int *)(lVar5 + 0x98);
  iVar6 = *(int *)(lVar16 + 0x24);
  if (iVar18 < 0) {
    iVar8 = (iVar18 - iVar6 / 2) + 1;
  }
  else {
    iVar8 = iVar6 / 2 + iVar18;
  }
  uVar9 = iVar8 / iVar6;
  local_298 = (longlong *)CONCAT44(local_298._4_4_,uVar9);
  local_290 = 1;
  if (1 < (int)uVar9) {
    local_290 = (ulonglong)uVar9;
  }
  local_280 = (longlong)(iVar18 + (int)local_290 + -1) / (longlong)(int)local_290 & 0xffffffff;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x400000000;
  local_2b0 = lVar16;
  local_2a8 = lVar5;
  if (4 < (int)uVar7) {
    FUN_14473dbc4(local_90,uVar19);
  }
  local_268 = uVar19;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      iVar8 = iVar6 + (int)local_278;
      local_a4 = iVar4;
      if (iVar8 < iVar4) {
        local_a4 = iVar8;
      }
      local_a0 = local_2a0[2];
      local_c8 = 0;
      local_b8 = &PTR_LAB_149f55f10;
      local_b0 = local_2a8;
      local_d8[0] = &LAB_1429b52ec;
      local_2b8 = 0xff;
      local_a8 = iVar6;
      FUN_14014aede(local_148,local_d8);
      uVar19 = local_68;
      lVar16 = (longlong)(int)local_68;
      uVar7 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar7);
      if (local_68._4_4_ < uVar7) {
        FUN_14476a5c8(local_90,uVar19 & 0xffffffff);
      }
      puVar13 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar13 = local_90;
      }
      *(undefined8 **)(puVar13 + lVar16 * 8) = local_148[0];
      if (local_148[0] != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_148[0] + 1) = *(int *)(local_148[0] + 1) + 1;
        UNLOCK();
        if (local_148[0] != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_148[0] + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_148[0])(local_148[0],1);
          }
        }
      }
      iVar6 = iVar8;
    } while (iVar8 < iVar4);
  }
  puVar2 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar12 = (uint *)*puVar2;
  if (puVar12 != (uint *)0x0) goto LAB_1429b4669;
LAB_1429b45e9:
  uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318);
  if ((uVar7 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar7 | 1;
    __tlregdtor(&LAB_1429b3f75);
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
  puVar12 = (uint *)*puVar2;
LAB_1429b4669:
  uVar19 = *(longlong *)(puVar12 + 0x10) + 7;
  uVar7 = puVar12[0x12];
  while( true ) {
    puVar17 = (undefined8 *)(uVar19 & 0xfffffffffffffff8);
    if (puVar17 + 0x16 <= puVar12 + 0x4000) break;
    *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
    LOCK();
    uVar9 = *puVar12;
    *puVar12 = *puVar12 + uVar7 + 1;
    UNLOCK();
    if ((uVar9 ^ uVar7) != 0xffffffff) goto LAB_1429b45e9;
    puVar12 = (uint *)*puVar2;
    *puVar12 = 0xffffffff;
    *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
    puVar12[0x12] = 0;
    *puVar2 = puVar12;
    uVar19 = (longlong)puVar12 + 0x5f;
    uVar7 = 0;
  }
  *(undefined8 **)(puVar12 + 0x10) = puVar17 + 0x16;
  puVar12[0x12] = uVar7 + 1;
  FUN_1447247dc(puVar17,local_90);
  *puVar17 = &PTR_FUN_149f56280;
  *(undefined4 *)(puVar17 + 0x15) = 0xff;
  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
  }
  puVar17[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar17[9] = puVar17;
  puVar17[10] = puVar17;
  local_270 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(local_270 + 0x2b8) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*(longlong *)(local_270 + 0x2b8) + 0x30);
  }
  puVar17[0xf] = uVar11;
  local_288 = 0xc80000527800b400;
  puVar17[0x10] = 0xc80000527800b400;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
  if (puVar17 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
    UNLOCK();
  }
  local_148[0] = (undefined8 *)CONCAT71(local_148[0]._1_7_,1);
  local_240 = puVar17;
  FUN_1447439e4(puVar17);
  local_e8 = (undefined1 *)0x0;
  local_e0 = 0x400000000;
  if (4 < (int)local_298) {
    FUN_14473dbc4(local_108,local_290);
  }
  if (0 < iVar18) {
    iVar6 = 0;
    do {
      iVar15 = (int)local_280 + iVar6;
      iVar8 = iVar18;
      if (iVar15 < iVar18) {
        iVar8 = iVar15;
      }
      lVar16 = local_2a0[2];
      local_148[0] = (undefined8 *)0x0;
      local_138 = (undefined8 *)0x0;
      local_138 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_138 = &PTR_LAB_149f55f30;
      local_138[1] = local_2b0;
      local_138[2] = local_2a8;
      *(int *)(local_138 + 3) = iVar6;
      *(int *)((longlong)local_138 + 0x1c) = iVar8;
      local_138[4] = lVar16;
      if (local_138 + 1 != (longlong *)0x0) {
        local_148[0] = (undefined8 *)&LAB_1429b5470;
      }
      local_2b8 = 0xff;
      FUN_140e6df44(local_188,local_148);
      uVar19 = local_e0;
      lVar16 = (longlong)(int)local_e0;
      uVar7 = (int)local_e0 + 1;
      local_e0 = CONCAT44(local_e0._4_4_,uVar7);
      if (local_e0._4_4_ < uVar7) {
        FUN_14476a5c8(local_108,uVar19 & 0xffffffff);
      }
      puVar13 = local_e8;
      if (local_e8 == (undefined1 *)0x0) {
        puVar13 = local_108;
      }
      *(undefined8 **)(puVar13 + lVar16 * 8) = local_188[0];
      if (local_188[0] != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_188[0] + 1) = *(int *)(local_188[0] + 1) + 1;
        UNLOCK();
        if (local_188[0] != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_188[0] + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_188[0])(local_188[0],1);
          }
        }
      }
      iVar6 = iVar15;
    } while (iVar15 < iVar18);
  }
  plVar3 = (longlong *)(local_270 + 0x2b8);
  puVar12 = (uint *)*puVar2;
  if (puVar12 != (uint *)0x0) goto LAB_1429b4a15;
LAB_1429b4995:
  uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318);
  if ((uVar7 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar7 | 1;
    __tlregdtor(&LAB_1429b3f75);
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
  puVar12 = (uint *)*puVar2;
LAB_1429b4a15:
  uVar19 = *(longlong *)(puVar12 + 0x10) + 7;
  uVar7 = puVar12[0x12];
  while( true ) {
    puVar17 = (undefined8 *)(uVar19 & 0xfffffffffffffff8);
    if (puVar17 + 0x16 <= puVar12 + 0x4000) break;
    *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
    LOCK();
    uVar9 = *puVar12;
    *puVar12 = *puVar12 + uVar7 + 1;
    UNLOCK();
    if ((uVar9 ^ uVar7) != 0xffffffff) goto LAB_1429b4995;
    puVar12 = (uint *)*puVar2;
    *puVar12 = 0xffffffff;
    *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
    puVar12[0x12] = 0;
    *puVar2 = puVar12;
    uVar19 = (longlong)puVar12 + 0x5f;
    uVar7 = 0;
  }
  *(undefined8 **)(puVar12 + 0x10) = puVar17 + 0x16;
  puVar12[0x12] = uVar7 + 1;
  FUN_1447247dc(puVar17,local_108);
  *puVar17 = &PTR_FUN_149f56280;
  *(undefined4 *)(puVar17 + 0x15) = 0xff;
  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
  }
  puVar17[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar17[9] = puVar17;
  puVar17[10] = puVar17;
  lVar16 = *plVar3;
  if (lVar16 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(lVar16 + 0x30);
  }
  puVar17[0xf] = uVar11;
  puVar17[0x10] = local_288;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
  if (puVar17 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
    UNLOCK();
  }
  local_188[0] = (undefined8 *)CONCAT71(local_188[0]._1_7_,1);
  local_298 = plVar3;
  local_248 = puVar17;
  FUN_1447439e4(puVar17,local_188);
  local_158 = (undefined4)local_2a0[1];
  local_150 = local_2a0[2];
  local_178 = 0;
  local_168 = &PTR_LAB_149f55f50;
  local_160 = local_2b0;
  local_188[0] = (undefined8 *)&LAB_1429b54d0;
  local_2b8 = 0xff;
  FUN_140e6df44(&local_250,local_188);
  local_198 = (undefined1 *)0x0;
  local_190 = 0x400000000;
  if (4 < (uint)((int)local_290 + (int)local_268)) {
    FUN_14473dbc4(local_1b8);
  }
  if (0 < iVar18) {
    iVar6 = 0;
    do {
      iVar15 = (int)local_280 + iVar6;
      iVar8 = iVar18;
      if (iVar15 < iVar18) {
        iVar8 = iVar15;
      }
      lVar16 = local_2a0[2];
      local_1f8[0] = (undefined1 *)0x0;
      local_1e8 = (undefined8 *)0x0;
      local_1e8 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_1e8 = &PTR_LAB_149f55f70;
      local_1e8[1] = local_2b0;
      local_1e8[2] = local_2a8;
      *(int *)(local_1e8 + 3) = iVar6;
      *(int *)((longlong)local_1e8 + 0x1c) = iVar8;
      local_1e8[4] = lVar16;
      if (local_1e8 + 1 != (longlong *)0x0) {
        local_1f8[0] = &LAB_1429b5518;
      }
      local_2b8 = 0xff;
      FUN_140e6df44(local_238,local_1f8);
      uVar19 = local_190;
      lVar16 = (longlong)(int)local_190;
      uVar7 = (int)local_190 + 1;
      local_190 = CONCAT44(local_190._4_4_,uVar7);
      if (local_190._4_4_ < uVar7) {
        FUN_14476a5c8(local_1b8,uVar19 & 0xffffffff);
      }
      puVar13 = local_198;
      if (local_198 == (undefined1 *)0x0) {
        puVar13 = local_1b8;
      }
      *(undefined8 **)(puVar13 + lVar16 * 8) = local_238[0];
      if (local_238[0] != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_238[0] + 1) = *(int *)(local_238[0] + 1) + 1;
        UNLOCK();
        if (local_238[0] != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_238[0] + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_238[0])(local_238[0],1);
          }
        }
      }
      iVar6 = iVar15;
    } while (iVar15 < iVar18);
  }
  if (0 < iVar4) {
    iVar18 = 0;
    do {
      iVar8 = (int)local_278 + iVar18;
      iVar6 = iVar4;
      if (iVar8 < iVar4) {
        iVar6 = iVar8;
      }
      lVar16 = local_2a0[2];
      local_238[0] = (undefined8 *)0x0;
      local_228 = (undefined8 *)0x0;
      local_228 = (undefined8 *)FUN_14001cc68(0x28,8);
      *local_228 = &PTR_LAB_149f55f90;
      local_228[1] = local_2b0;
      local_228[2] = local_2a8;
      *(int *)(local_228 + 3) = iVar18;
      *(int *)((longlong)local_228 + 0x1c) = iVar6;
      local_228[4] = lVar16;
      if (local_228 + 1 != (longlong *)0x0) {
        local_238[0] = (undefined8 *)&LAB_1429b5578;
      }
      local_2b8 = 0xff;
      FUN_140e6df44(&local_258,local_238);
      uVar19 = local_190;
      lVar16 = (longlong)(int)local_190;
      uVar7 = (int)local_190 + 1;
      local_190 = CONCAT44(local_190._4_4_,uVar7);
      if (local_190._4_4_ < uVar7) {
        FUN_14476a5c8(local_1b8,uVar19 & 0xffffffff);
      }
      puVar13 = local_198;
      if (local_198 == (undefined1 *)0x0) {
        puVar13 = local_1b8;
      }
      *(undefined8 **)(puVar13 + lVar16 * 8) = local_258;
      if (local_258 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(local_258 + 1) = *(int *)(local_258 + 1) + 1;
        UNLOCK();
        if (local_258 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_258 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*local_258)(local_258,1);
          }
        }
      }
      iVar18 = iVar8;
    } while (iVar8 < iVar4);
  }
  puVar12 = (uint *)*puVar2;
  if (puVar12 != (uint *)0x0) goto LAB_1429b4f08;
  while( true ) {
    uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318);
    if ((uVar7 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar7 | 1;
      __tlregdtor(&LAB_1429b3f75);
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
    puVar12 = (uint *)*puVar2;
LAB_1429b4f08:
    puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar14 = (uint *)(puVar17 + 0x16);
    uVar7 = puVar12[0x12];
    if (puVar14 <= puVar12 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
      LOCK();
      uVar9 = *puVar12;
      *puVar12 = *puVar12 + uVar7 + 1;
      UNLOCK();
      if ((uVar9 ^ uVar7) != 0xffffffff) break;
      puVar12 = (uint *)*puVar2;
      *puVar12 = 0xffffffff;
      *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar2 = puVar12;
      puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar17 + 0x16);
      uVar7 = 0;
      if (puVar14 <= puVar12 + 0x4000) {
        uVar7 = 1;
        goto LAB_1429b4f8a;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1429b4f8a:
  *(uint **)(puVar12 + 0x10) = puVar14;
  puVar12[0x12] = uVar7;
  FUN_1447247dc(puVar17,local_1b8);
  *puVar17 = &PTR_FUN_149f56280;
  *(undefined4 *)(puVar17 + 0x15) = 0xff;
  if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
  }
  puVar17[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar17[9] = puVar17;
  puVar17[10] = puVar17;
  if (*local_298 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = *(undefined8 *)(*local_298 + 0x30);
  }
  puVar17[0xf] = uVar11;
  puVar17[0x10] = local_288;
  *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
  if (puVar17 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
    UNLOCK();
  }
  local_258 = (undefined8 *)CONCAT71(local_258._1_7_,1);
  FUN_1447439e4(puVar17,&local_258);
  uVar11 = *local_260;
  local_258 = puVar17;
  if (puVar17 == (undefined8 *)0x0) {
    FUN_14002c244(uVar11,&local_258);
  }
  else {
    LOCK();
    *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
    UNLOCK();
    FUN_14002c244(uVar11,&local_258);
    LOCK();
    piVar1 = (int *)(puVar17 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar17)(puVar17,1);
    }
  }
  puVar13 = local_1b8;
  if (local_198 != (undefined1 *)0x0) {
    puVar13 = local_198;
  }
  FUN_144717c65(puVar13,local_190 & 0xffffffff);
  if (local_198 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_250 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_250 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_250)(local_250,1);
    }
  }
  if (local_248 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_248 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_248)(local_248,1);
    }
  }
  puVar13 = local_108;
  if (local_e8 != (undefined1 *)0x0) {
    puVar13 = local_e8;
  }
  FUN_144717c65(puVar13,local_e0 & 0xffffffff);
  if (local_e8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_240 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_240 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_240)(local_240,1);
    }
  }
  puVar13 = local_90;
  if (local_70 != (undefined1 *)0x0) {
    puVar13 = local_70;
  }
  FUN_144717c65(puVar13,local_68 & 0xffffffff);
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429b52ce FUN_1429b52ce body=29 status=ok
// SIG undefined FUN_1429b52ce(void)

undefined8 FUN_1429b52ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b531a FUN_1429b531a body=29 status=ok
// SIG undefined FUN_1429b531a(void)

undefined8 FUN_1429b531a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b5338 FUN_1429b5338 body=282 status=ok
// SIG undefined FUN_1429b5338(void)

undefined8 * FUN_1429b5338(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_1429b3f75);
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



// FUNCTION 1429b5494 FUN_1429b5494 body=29 status=ok
// SIG undefined FUN_1429b5494(void)

void FUN_1429b5494(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1429b54b2 FUN_1429b54b2 body=29 status=ok
// SIG undefined FUN_1429b54b2(void)

undefined8 FUN_1429b54b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b54fa FUN_1429b54fa body=29 status=ok
// SIG undefined FUN_1429b54fa(void)

undefined8 FUN_1429b54fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b553c FUN_1429b553c body=29 status=ok
// SIG undefined FUN_1429b553c(void)

void FUN_1429b553c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1429b555a FUN_1429b555a body=29 status=ok
// SIG undefined FUN_1429b555a(void)

undefined8 FUN_1429b555a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b559a FUN_1429b559a body=29 status=ok
// SIG undefined FUN_1429b559a(void)

void FUN_1429b559a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1429b55b8 FUN_1429b55b8 body=29 status=ok
// SIG undefined FUN_1429b55b8(void)

undefined8 FUN_1429b55b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1429b55d5 FUN_1429b55d5 body=1378 status=ok
// SIG undefined FUN_1429b55d5(void)

void FUN_1429b55d5(void)

{
  FUN_1415c789c(&DAT_14c993890,L"p.ClosestIntersectionStepSizeMultiplier",&DAT_14c75f154,
                L"When raycasting we use this multiplier to substep the travel distance along the ray. Smaller number gives better accuracy at higher cost"
                ,0);
  atexit(FUN_1429b1fbc);
  FUN_14153156c(&DAT_14c993990,L"p.Chaos.Collision.UnionBVH.Enabled",&DAT_14c75f1a4,
                L"Set to false to disable use of BVH during collision detection (without affecting creations and serialization)"
                ,0);
  atexit(FUN_1429b2001);
  FUN_141471170(&DAT_14c9939a0,L"p.Chaos.Collision.UnionBVH.NumShapes",&DAT_14c75f1ac,
                L"If a geometry hierarchy has this many shapes, wrap it in a BVH for collision detection (negative to disable BVH)"
                ,0);
  atexit(FUN_1429b2046);
  FUN_141471170(&DAT_14c9939b0,L"p.Chaos.Collision.UnionBVH.MaxDepth",&DAT_14c75f1a8,
                L"The allowed depth of the BVH when used to wrap a shape hiererchy",0);
  atexit(FUN_1429b208b);
  FUN_1415c789c(&DAT_14c9939c0,L"p.Chaos.Collision.UnionBVH.SplitBias",&DAT_14c75f15c,&DAT_149dfb77a
                ,0);
  atexit(FUN_1429b20d0);
  FUN_14153156c(&DAT_14c9939d0,L"p.Chaos.Collision.UnionBVH.UseOptimizedCountLeafObjects",
                &DAT_14c75f158,&DAT_149dfb77a,0);
  atexit(FUN_1429b2115);
  FUN_141471170(&DAT_14c9939e0,L"p.Chaos.Solver.IslandGroups.ParallelMode",&DAT_14c75f160,
                L"0: Single-Threaded; 1: Parallel-For; 2: Tasks",0);
  atexit(FUN_1429b21d7);
  FUN_1415c789c(&DAT_14c9939f0,L"p.Chaos.Solver.IslandGroups.WorkerMultiplier",&DAT_14c75f164,
                L"Total number of island groups in the solver will be NumWorkerThreads * WorkerThreadMultiplier. [def:1]"
                ,0);
  atexit(FUN_1429b221c);
  FUN_141471170(&DAT_14c993a08,L"p.Chaos.Solver.IslandGroups.MaxWorkers",&DAT_14c993a00,
                L"The maximum number of worker threads to use (0 means unlimited)",0);
  atexit(FUN_1429b2261);
  FUN_141471170(&DAT_14c993a18,L"p.Chaos.Solver.IslandGroups.MinConstraintsPerWorker",&DAT_14c75f168
                ,L"The minimum number of constraints we want per worker thread",0);
  atexit(FUN_1429b22a6);
  FUN_141471170(&DAT_14c993a28,L"p.Chaos.Solver.IslandGroups.MinBodiesPerWorker",&DAT_14c75f16c,
                L"The minimum number of bodies we want per worker thread",0);
  atexit(FUN_1429b22eb);
  FUN_14153156c(&DAT_14c993a40,L"p.Chaos.ConstraintGraph.Validate",&DAT_14c993a38,
                L"Enable per-tick ConstraintGraph validation checks/assertions",0);
  atexit(FUN_1429b2b66);
  FUN_14153156c(&DAT_14c993a50,L"p.Chaos.Solver.Sleep.Enabled",&DAT_14c75f170,&DAT_149dfb77a,0);
  atexit(FUN_1429b2bab);
  FUN_141471170(&DAT_14c993a60,L"p.Chaos.Solver.Sleep.Defaults.SleepCounterThreshold",&DAT_14c75f174
                ,L"Default counter threshold for sleeping.[def:20]",0);
  atexit(FUN_1429b2bf0);
  FUN_1415c789c(&DAT_14c993a70,L"p.Chaos.Solver.Sleep.Defaults.LinearSleepThreshold",&DAT_14c75f178,
                L"Default linear threshold for sleeping.[def:0.001]",0);
  atexit(FUN_1429b2c35);
  FUN_1415c789c(&DAT_14c993a80,L"p.Chaos.Solver.Sleep.Defaults.AngularSleepThreshold",&DAT_14c75f17c
                ,L"Default angular threshold for sleeping.[def:0.0087]",0);
  atexit(FUN_1429b2c7a);
  FUN_1415c789c(&DAT_14c993a98,L"p.Chaos.Solver.Sleep.AngularSleepThresholdSize",&DAT_14c993a90,
                L"Scales the angular threshold based on size (0 to disable size based scaling)",0);
  atexit(FUN_1429b2cbf);
  FUN_141471170(&DAT_14c993aa8,L"p.Chaos.Solver.Sleep.IsolatedParticle.CounterMultiplier",
                &DAT_14c75f180,
                L"A multiplier applied to SleepCounterThreshold for floating particles",0);
  atexit(FUN_1429b2d04);
  FUN_1415c789c(&DAT_14c993ab8,L"p.Chaos.Solver.Sleep.IsolatedParticle.LinearMultiplier",
                &DAT_14c75f184,
                L"A multiplier applied to SleepLinearThreshold for floating particles",0);
  atexit(FUN_1429b2d49);
  FUN_1415c789c(&DAT_14c993ac8,L"p.Chaos.Solver.Sleep.IsolatedParticle.AngularMultiplier",
                &DAT_14c75f188,
                L"A multiplier applied to SleepAngularThreshold for floating particles",0);
  atexit(FUN_1429b2d8e);
  FUN_14153156c(&DAT_14c993ad8,L"p.Chaos.Solver.ComputeIterationSettings.Enabled",&DAT_14c75f18c,
                L"Recompute iteration settings every time an island is changed",0);
  atexit(FUN_1429b2dd3);
  FUN_1415c789c(&DAT_14c993ae8,L"p.Chaos.Joint.DegenerateRotationLimit",&DAT_14c75f198,
                L"Cosine of the swing angle that is considered degerenerate (default Cos(176deg))",0
               );
  atexit(FUN_1429b3d5a);
  FUN_1415c789c(&DAT_14c993af8,L"p.Chaos.Joint.VelProjectionAlpha",&DAT_14c75f1a0,
                L"How much of the velocity correction to apply during projection. Equivalent to (1-damping) for projection velocity delta"
                ,0);
  atexit(FUN_1429b3d9f);
  FUN_14153156c(&DAT_14c993b08,L"p.Chaos.Joint.DisableSoftLimits",&DAT_14c993b58,
                L"Disable soft limits (for debugging only)",0);
  atexit(FUN_1429b3de4);
  FUN_14153156c(&DAT_14c993b18,L"p.Chaos.Joint.Plasticity.ClampToLimits",&DAT_14c75f18d,
                L"Clamp drive position targets to defined limits after plasticity computation",0);
  atexit(FUN_1429b3e29);
  FUN_1415c789c(&DAT_14c993b28,L"p.Chaos.Joint.LinearVelocityThresholdToApplyRestitution",
                &DAT_14c75f194,
                L"Apply restitution only if initial velocity is higher than this threshold (used in Quasipbd)"
                ,0);
  atexit(FUN_1429b3e6e);
  FUN_1415c789c(&DAT_14c993b38,L"p.Chaos.Joint.AngularVelocityThresholdToApplyRestitution",
                &DAT_14c75f19c,
                L"Apply restitution only if initial velocity is higher than this threshold (used in Quasipbd)"
                ,0);
  atexit(FUN_1429b3eb3);
  FUN_141471170(&DAT_14c993b48,L"p.Chaos.Joint.MultiDimension",&DAT_14c75f190,&DAT_149dfb77a,0);
  atexit(FUN_1429b3ef8);
  return;
}



// FUNCTION 1429b5b38 FUN_1429b5b38 body=70 status=ok
// SIG undefined FUN_1429b5b38(void)

void FUN_1429b5b38(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_146dc2c50(param_1,*(undefined4 *)(**(longlong **)(lVar1 + lVar3) + 0x18));
      lVar3 = lVar3 + 8;
    } while ((longlong)(int)lVar2 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1429b5b7e FUN_1429b5b7e body=172 status=ok
// SIG undefined FUN_1429b5b7e(void)

void FUN_1429b5b7e(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if (0 < (int)uVar1) {
    lVar8 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x18) + uVar7 * 4);
      lVar3 = FUN_146de953c(*(undefined8 *)(param_1 + 0x10),uVar2);
      uVar5 = *(undefined8 *)(lVar3 + 8);
      puVar4 = (undefined8 *)FUN_146de953c(*(undefined8 *)(param_1 + 0x10),uVar2);
      uVar6 = *puVar4;
      uVar5 = FUN_1448f7274(param_2,uVar5);
      uVar6 = FUN_1448f7274(param_2,uVar6);
      if (*(char *)(*(longlong *)(param_1 + 0x10) + 0x60) == '\x01') {
        puVar4 = (undefined8 *)(uVar7 * 0xfd0 + *(longlong *)(param_1 + 0x28));
      }
      else {
        puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + lVar8);
      }
      *puVar4 = uVar5;
      puVar4[3] = uVar6;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x4b0;
    } while (uVar1 != uVar7);
  }
  return;
}



// FUNCTION 1429b5c2e FUN_1429b5c2e body=765 status=ok
// SIG undefined FUN_1429b5c2e(void)

void FUN_1429b5c2e(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  double dVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  dVar2 = *(double *)(lVar8 + 0x50);
  uVar12 = SUB84(dVar2,0);
  uVar13 = (undefined4)((ulonglong)dVar2 >> 0x20);
  iVar6 = *(int *)(lVar8 + 0x58);
  if (param_4 - iVar6 != 0 && iVar6 <= param_4) {
    dVar11 = (double)param_3 / (double)(param_4 - iVar6);
    if (1.0 <= dVar11) {
      dVar11 = 1.0;
    }
    if (dVar11 <= 0.0) {
      dVar11 = 0.0;
    }
    dVar2 = (dVar2 - *(double *)(lVar8 + 0x48)) * dVar11 + *(double *)(lVar8 + 0x48);
  }
  iVar4 = *(int *)(param_1 + 0x30);
  if (0 < iVar4) {
    if (1.0 <= dVar2) {
      dVar2 = 1.0;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x28);
      if ((*(char *)(lVar3 + 0xfc0 + lVar7) == '\0') &&
         ((0.0 < *(double *)(lVar3 + 0x238 + lVar7) || (0.0 < *(double *)(lVar3 + 0x240 + lVar7)))))
      {
        lVar1 = lVar7 + lVar3;
        uVar5 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4));
        uVar5 = FUN_146dc2a5f(lVar1,lVar7 + lVar3 + 0x18,lVar8 + 0x20,uVar5,param_3,param_4);
        FUN_146db7a3c(lVar1,uVar5,param_2);
        FUN_146db9fa2(lVar1,param_2,dVar2,lVar8 + 0x20);
        iVar4 = *(int *)(param_1 + 0x30);
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0xfd0;
    } while (lVar9 < iVar4);
    lVar8 = *(longlong *)(param_1 + 0x10);
    uVar12 = (undefined4)*(undefined8 *)(lVar8 + 0x50);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x50) >> 0x20);
    iVar6 = *(int *)(lVar8 + 0x58);
  }
  dVar2 = (double)CONCAT44(uVar13,uVar12);
  if (param_4 - iVar6 != 0 && iVar6 <= param_4) {
    dVar2 = (double)param_3 / (double)(param_4 - iVar6);
    if (1.0 <= dVar2) {
      dVar2 = 1.0;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    dVar2 = ((double)CONCAT44(uVar13,uVar12) - *(double *)(lVar8 + 0x48)) * dVar2 +
            *(double *)(lVar8 + 0x48);
  }
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    if (1.0 <= dVar2) {
      dVar2 = 1.0;
    }
    if (dVar2 <= 0.0) {
      dVar2 = 0.0;
    }
    lVar7 = 0;
    lVar9 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x38);
      if ((*(char *)(lVar3 + 0x4a0 + lVar7) == '\0') &&
         ((0.0 < *(double *)(lVar3 + 0x220 + lVar7) || (0.0 < *(double *)(lVar3 + 0x228 + lVar7)))))
      {
        lVar1 = lVar3 + lVar7;
        uVar5 = FUN_146de952a(*(undefined8 *)(param_1 + 0x10),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x18) + lVar9 * 4));
        FUN_146dc4120(lVar1);
        dVar10 = (double)FUN_146dc2a5f(lVar1,lVar3 + lVar7 + 0x18,lVar8 + 0x20,uVar5,param_3,param_4
                                      );
        dVar11 = *(double *)(lVar3 + lVar7 + 0x1d0);
        if ((dVar11 != dVar10) || (NAN(dVar11) || NAN(dVar10))) {
          *(double *)(lVar3 + 0x1d0 + lVar7) = dVar10;
          FUN_146dc4da6(lVar1);
        }
        dVar11 = *(double *)(lVar3 + 0x1d8 + lVar7);
        if ((dVar11 != 1.0) || (NAN(dVar11))) {
          *(undefined8 *)(lVar3 + 0x1d8 + lVar7) = 0x3ff0000000000000;
          FUN_146dc4ee6(lVar1);
        }
        FUN_146dc63d2(lVar1,dVar2,lVar8 + 0x20,uVar5);
        iVar6 = *(int *)(param_1 + 0x40);
      }
      lVar9 = lVar9 + 1;
      lVar7 = lVar7 + 0x4b0;
    } while (lVar9 < iVar6);
  }
  return;
}



// FUNCTION 1429b5f2c FUN_1429b5f2c body=1388 status=ok
// SIG undefined FUN_1429b5f2c(void)

void FUN_1429b5f2c(longlong param_1,uint param_2,uint param_3,longlong param_4,longlong param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  float *pfVar5;
  double dVar6;
  longlong lVar7;
  double *pdVar8;
  double *pdVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_208 [32];
  double local_1e8;
  double local_1e0;
  double local_1d8;
  undefined8 local_1d0;
  double local_1c8 [4];
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_188;
  double local_180;
  double local_178;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar10 = (ulonglong)param_3;
  uVar11 = (ulonglong)param_2;
  dVar13 = *(double *)(param_1 + 0x100 + uVar10 * 0x18);
  dVar12 = dVar13 - *(double *)(param_1 + 0x100 + uVar11 * 0x18);
  dVar3 = *(double *)(param_1 + 0xf8 + uVar10 * 0x18);
  dVar15 = dVar3 - *(double *)(param_1 + 0xf8 + uVar11 * 0x18);
  dVar4 = *(double *)(param_1 + 0xf0 + uVar10 * 0x18);
  dVar14 = dVar4 - *(double *)(param_1 + 0xf0 + uVar11 * 0x18);
  dVar6 = dVar12 * dVar12 + dVar14 * dVar14 + dVar15 * dVar15;
  if (*(double *)(param_1 + 0x3f0) * *(double *)(param_1 + 0x3f0) < dVar6) {
    puVar1 = (undefined8 *)(param_1 + uVar10 * 0x18);
    uVar11 = -(ulonglong)(*(double *)(param_4 + 0x48) < 0.0);
    dVar16 = (double)(~uVar11 & (ulonglong)*(double *)(param_4 + 0x48) |
                     *(ulonglong *)(param_5 + 0xc0) & uVar11) * *(double *)(param_1 + 1000);
    local_1d0 = *(undefined8 *)(param_1 + 0x220 + uVar10 * 8);
    lVar2 = param_1 + uVar10 * 0x80;
    pdVar8 = (double *)(lVar2 + 0x230);
    pdVar9 = local_1c8;
    for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar9 = *pdVar8;
      pdVar8 = pdVar8 + 1;
      pdVar9 = pdVar9 + 1;
    }
    pfVar5 = (float *)*puVar1;
    local_1d8 = dVar13 - ((double)pfVar5[2] + *(double *)(pfVar5 + 0x48));
    local_1e0 = dVar3 - ((double)pfVar5[1] + *(double *)(pfVar5 + 0x46));
    local_1e8 = dVar4 - ((double)*pfVar5 + *(double *)(pfVar5 + 0x44));
    FUN_146db4c70(&local_148);
    if ((((((9.99999993922529e-09 < ABS(local_148)) || (9.99999993922529e-09 < ABS(local_140))) ||
          (9.99999993922529e-09 < ABS(local_138))) ||
         ((9.99999993922529e-09 < ABS(local_128) || (9.99999993922529e-09 < ABS(local_120))))) ||
        ((9.99999993922529e-09 < ABS(local_118) ||
         ((9.99999993922529e-09 < ABS(local_108) || (9.99999993922529e-09 < ABS(local_100))))))) ||
       (9.99999993922529e-09 < ABS(local_f8))) {
      FUN_14007522e(local_1c8,&local_148);
    }
    else {
      pdVar8 = (double *)&DAT_14c846400;
      pdVar9 = local_1c8;
      for (lVar7 = 0x10; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar9 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar9 = pdVar9 + 1;
      }
    }
    dVar3 = (dVar12 * local_188 + dVar14 * local_1c8[0] + dVar15 * local_1a8) * dVar16;
    dVar4 = (local_180 * dVar12 + local_1c8[1] * dVar14 + local_1a0 * dVar15) * dVar16;
    dVar16 = (local_178 * dVar12 + local_1c8[2] * dVar14 + local_198 * dVar15) * dVar16;
    local_1c8[2] = -*(double *)(param_1 + 0x220 + uVar10 * 8);
    local_1c8[0] = dVar3 * local_1c8[2];
    local_1c8[1] = dVar4 * local_1c8[2];
    local_1c8[2] = local_1c8[2] * dVar16;
    pfVar5 = (float *)*puVar1;
    dVar14 = (double)puVar1[0x20] - ((double)pfVar5[2] + *(double *)(pfVar5 + 0x48));
    dVar13 = (double)puVar1[0x1e] - ((double)*pfVar5 + *(double *)(pfVar5 + 0x44));
    dVar15 = (double)puVar1[0x1f] - ((double)pfVar5[1] + *(double *)(pfVar5 + 0x46));
    dVar12 = dVar3 * dVar15 - dVar13 * dVar4;
    dVar13 = dVar16 * dVar13 - dVar14 * dVar3;
    dVar14 = dVar4 * dVar14 - dVar15 * dVar16;
    local_1d8 = *(double *)(lVar2 + 0x280) * dVar12 +
                *(double *)(lVar2 + 0x240) * dVar14 + *(double *)(lVar2 + 0x260) * dVar13;
    local_1e0 = *(double *)(lVar2 + 0x278) * dVar12 +
                *(double *)(lVar2 + 0x238) * dVar14 + *(double *)(lVar2 + 600) * dVar13;
    local_1e8 = dVar12 * *(double *)(lVar2 + 0x270) +
                dVar14 * *(double *)(lVar2 + 0x230) + dVar13 * *(double *)(lVar2 + 0x250);
    FUN_146dcd180(param_1,param_3);
    if (param_2 != 0) {
      dVar16 = -dVar16;
      dVar4 = -dVar4;
      dVar3 = -dVar3;
    }
    *(double *)(param_1 + 0x330) = dVar3 + *(double *)(param_1 + 0x330);
    *(double *)(param_1 + 0x338) = dVar4 + *(double *)(param_1 + 0x338);
    *(double *)(param_1 + 0x340) = dVar16 + *(double *)(param_1 + 0x340);
    dVar13 = *(double *)(param_1 + 0x360);
    if (*(double *)(param_1 + 0x360) <= dVar6) {
      dVar13 = dVar6;
    }
    *(double *)(param_1 + 0x360) = dVar13;
  }
  if ((local_c0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429b649a FUN_1429b649a body=2021 status=ok
// SIG undefined FUN_1429b649a(void)

void FUN_1429b649a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  float *pfVar3;
  double dVar4;
  longlong lVar5;
  double *pdVar6;
  double *pdVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_328 [32];
  double local_308;
  double local_300;
  double local_2f8;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 local_260;
  double local_258 [4];
  double local_238;
  double local_230;
  double local_228;
  double local_218;
  double local_210;
  double local_208;
  double local_1d8 [4];
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_198;
  double local_190;
  double local_188;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  dVar9 = (double)param_1[0x20];
  dVar10 = (double)param_1[0x23] - dVar9;
  dVar1 = (double)param_1[0x1e];
  dVar2 = (double)param_1[0x1f];
  dVar11 = (double)param_1[0x22] - dVar2;
  dVar12 = (double)param_1[0x21] - dVar1;
  dVar4 = dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
  if ((double)param_1[0x7e] * (double)param_1[0x7e] < dVar4) {
    uVar8 = -(ulonglong)(*(double *)(param_2 + 0x48) < 0.0);
    dVar13 = (double)(~uVar8 & (ulonglong)*(double *)(param_2 + 0x48) |
                     *(ulonglong *)(param_3 + 0xc0) & uVar8) * (double)param_1[0x7d];
    local_2d8 = (double)param_1[0x44];
    pdVar6 = (double *)(param_1 + 0x46);
    pdVar7 = local_1d8;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar7 = pdVar7 + 1;
    }
    pfVar3 = (float *)*param_1;
    local_258[2] = dVar9 - ((double)pfVar3[2] + *(double *)(pfVar3 + 0x48));
    local_258[1] = dVar2 - ((double)pfVar3[1] + *(double *)(pfVar3 + 0x46));
    local_258[0] = dVar1 - ((double)*pfVar3 + *(double *)(pfVar3 + 0x44));
    FUN_146db4c70(&local_158,local_258,local_1d8,&local_2d8);
    local_2f0 = (double)param_1[0x45];
    pdVar6 = (double *)(param_1 + 0x56);
    pdVar7 = local_258;
    for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar7 = pdVar7 + 1;
    }
    pfVar3 = (float *)param_1[3];
    local_2c8 = (double)param_1[0x23] - ((double)pfVar3[2] + *(double *)(pfVar3 + 0x48));
    local_2d0 = (double)param_1[0x22] - ((double)pfVar3[1] + *(double *)(pfVar3 + 0x46));
    local_2d8 = (double)param_1[0x21] - ((double)*pfVar3 + *(double *)(pfVar3 + 0x44));
    FUN_146db4c70(local_1d8,&local_2d8);
    local_288 = local_108 + local_188;
    local_2a8 = local_128 + local_1a8;
    local_2c8 = local_148 + local_1d8[2];
    local_290 = local_110 + local_190;
    local_2b0 = local_130 + local_1b0;
    local_2d0 = local_150 + local_1d8[1];
    local_298 = local_118 + local_198;
    local_2b8 = local_138 + local_1b8;
    local_2d8 = local_158 + local_1d8[0];
    local_278 = 0;
    uStack_270 = 0;
    local_268 = 0;
    local_260 = 0x3ff0000000000000;
    local_2c0 = 0;
    local_2a0 = 0;
    local_280 = 0;
    if ((((((9.99999993922529e-09 < ABS(local_2d8)) || (9.99999993922529e-09 < ABS(local_2d0))) ||
          (9.99999993922529e-09 < ABS(local_2c8))) ||
         ((9.99999993922529e-09 < ABS(local_2b8) || (9.99999993922529e-09 < ABS(local_2b0))))) ||
        ((9.99999993922529e-09 < ABS(local_2a8) ||
         ((9.99999993922529e-09 < ABS(local_298) || (9.99999993922529e-09 < ABS(local_290))))))) ||
       (9.99999993922529e-09 < ABS(local_288))) {
      FUN_14007522e(local_258,&local_2d8);
    }
    else {
      pdVar6 = (double *)&DAT_14c846400;
      pdVar7 = local_258;
      for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
        *pdVar7 = *pdVar6;
        pdVar6 = pdVar6 + 1;
        pdVar7 = pdVar7 + 1;
      }
    }
    dVar1 = (dVar10 * local_218 + dVar12 * local_258[0] + dVar11 * local_238) * dVar13;
    dVar2 = (local_210 * dVar10 + local_258[1] * dVar12 + local_230 * dVar11) * dVar13;
    dVar13 = (local_208 * dVar10 + local_258[2] * dVar12 + local_228 * dVar11) * dVar13;
    local_258[2] = (double)param_1[0x44];
    local_258[0] = dVar1 * local_258[2];
    local_258[1] = dVar2 * local_258[2];
    local_258[2] = local_258[2] * dVar13;
    local_2c8 = -(double)param_1[0x45];
    local_2d8 = dVar1 * local_2c8;
    local_2d0 = dVar2 * local_2c8;
    local_2c8 = local_2c8 * dVar13;
    pfVar3 = (float *)*param_1;
    dVar12 = (double)param_1[0x20] - ((double)pfVar3[2] + *(double *)(pfVar3 + 0x48));
    dVar9 = (double)param_1[0x1f] - ((double)pfVar3[1] + *(double *)(pfVar3 + 0x46));
    dVar10 = (double)param_1[0x1e] - ((double)*pfVar3 + *(double *)(pfVar3 + 0x44));
    dVar11 = dVar10 * dVar2 - dVar1 * dVar9;
    dVar10 = dVar12 * dVar1 - dVar13 * dVar10;
    dVar9 = dVar9 * dVar13 - dVar2 * dVar12;
    local_2e0 = (double)param_1[0x50] * dVar11 +
                (double)param_1[0x48] * dVar9 + (double)param_1[0x4c] * dVar10;
    local_2e8 = (double)param_1[0x4f] * dVar11 +
                (double)param_1[0x47] * dVar9 + (double)param_1[0x4b] * dVar10;
    local_2f0 = dVar11 * (double)param_1[0x4e] +
                dVar9 * (double)param_1[0x46] + dVar10 * (double)param_1[0x4a];
    pfVar3 = (float *)param_1[3];
    dVar12 = (double)param_1[0x23] - ((double)pfVar3[2] + *(double *)(pfVar3 + 0x48));
    dVar9 = (double)param_1[0x22] - ((double)pfVar3[1] + *(double *)(pfVar3 + 0x46));
    dVar11 = (double)param_1[0x21] - ((double)*pfVar3 + *(double *)(pfVar3 + 0x44));
    dVar10 = dVar1 * dVar9 - dVar11 * dVar2;
    dVar11 = dVar13 * dVar11 - dVar12 * dVar1;
    dVar9 = dVar2 * dVar12 - dVar9 * dVar13;
    local_2f8 = (double)param_1[0x60] * dVar10 +
                (double)param_1[0x58] * dVar9 + (double)param_1[0x5c] * dVar11;
    local_300 = (double)param_1[0x5f] * dVar10 +
                (double)param_1[0x57] * dVar9 + (double)param_1[0x5b] * dVar11;
    local_308 = dVar10 * (double)param_1[0x5e] +
                dVar9 * (double)param_1[0x56] + dVar11 * (double)param_1[0x5a];
    FUN_146dcd098(param_1);
    FUN_1429b6c80(param_1,&local_2f0,&local_308);
    param_1[0x66] = dVar1 + (double)param_1[0x66];
    param_1[0x67] = dVar2 + (double)param_1[0x67];
    param_1[0x68] = dVar13 + (double)param_1[0x68];
    dVar9 = (double)param_1[0x6c];
    if ((double)param_1[0x6c] <= dVar4) {
      dVar9 = dVar4;
    }
    param_1[0x6c] = dVar9;
  }
  if ((local_d0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429b6c80 FUN_1429b6c80 body=151 status=ok
// SIG undefined FUN_1429b6c80(void)

void FUN_1429b6c80(longlong *param_1,double *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  float *pfVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_e8 [32];
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  ulonglong uStack_a0;
  
  if (0.0 < (double)param_1[0x44]) {
    dVar4 = param_2[2];
    dVar5 = param_2[1];
    lVar8 = *param_1;
    *(float *)(lVar8 + 0x10) = (float)*param_2 + *(float *)(lVar8 + 0x10);
    *(float *)(lVar8 + 0x14) = (float)dVar5 + *(float *)(lVar8 + 0x14);
    *(float *)(lVar8 + 0x18) = (float)dVar4 + *(float *)(lVar8 + 0x18);
  }
  if (0.0 < (double)param_1[0x45]) {
    dVar4 = param_3[2];
    dVar5 = param_3[1];
    lVar8 = param_1[3];
    *(float *)(lVar8 + 0x10) = (float)*param_3 + *(float *)(lVar8 + 0x10);
    *(float *)(lVar8 + 0x14) = (float)dVar5 + *(float *)(lVar8 + 0x14);
    *(float *)(lVar8 + 0x18) = (float)dVar4 + *(float *)(lVar8 + 0x18);
    FUN_146dc4120();
    return;
  }
  uStack_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (9.99999993922529e-09 < (double)param_1[0x44]) {
    pfVar9 = (float *)*param_1;
    fVar1 = pfVar9[2];
    fVar2 = pfVar9[1];
    fVar3 = *pfVar9;
    dVar4 = *(double *)(pfVar9 + 0x48);
    dVar5 = *(double *)(pfVar9 + 0x46);
    dVar14 = *(double *)(pfVar9 + 0x44);
    FUN_14013713e(pfVar9,&dStack_c8);
    dVar15 = (double)param_1[0xc];
    dVar6 = (double)param_1[0xb];
    dVar7 = (double)param_1[10];
    dVar12 = dStack_c0 * dVar15 - dVar6 * dStack_b8;
    dVar12 = dVar12 + dVar12;
    dVar13 = dStack_c8 * dVar6 - dVar7 * dStack_c0;
    dVar13 = dVar13 + dVar13;
    dVar16 = dStack_b8 * dVar7 - dVar15 * dStack_c8;
    dVar16 = dVar16 + dVar16;
    param_1[0x1e] =
         (longlong)
         ((dStack_c0 * dVar13 - dVar16 * dStack_b8) + dVar12 * dStack_b0 + dVar7 +
         (double)fVar3 + dVar14);
    param_1[0x1f] =
         (longlong)
         ((dStack_b8 * dVar12 - dVar13 * dStack_c8) + dStack_b0 * dVar16 + dVar6 +
         (double)fVar2 + dVar5);
    param_1[0x20] =
         (longlong)
         ((dStack_c8 * dVar16 - dVar12 * dStack_c0) + dStack_b0 * dVar13 + dVar15 +
         (double)fVar1 + dVar4);
    dVar14 = (double)param_1[6];
    dVar15 = (double)param_1[7];
    dVar6 = (double)param_1[8];
    dVar7 = (double)param_1[9];
    dVar4 = dVar14 * dStack_b8 * 1.0 +
            dVar7 * dStack_c0 + dVar6 * dStack_c8 * -1.0 + dVar15 * dStack_b0;
    dVar5 = dVar6 * dStack_b8 * -1.0 +
            ((dStack_c8 * dVar14 * -1.0 + dStack_b0 * dVar7) - dVar15 * dStack_c0);
    auVar10._8_4_ = SUB84(dVar4,0);
    auVar10._0_8_ =
         dVar15 * dStack_b8 * -1.0 +
         dVar6 * dStack_c0 + dVar7 * dStack_c8 * 1.0 + dVar14 * dStack_b0;
    auVar10._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x24) = auVar10;
    auVar11._8_4_ = SUB84(dVar5,0);
    auVar11._0_8_ =
         dVar7 * dStack_b8 * 1.0 +
         ((dStack_c8 * dVar15 * 1.0 + dStack_b0 * dVar6) - dVar14 * dStack_c0);
    auVar11._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x26) = auVar11;
  }
  if ((double)param_1[0x45] <= 9.99999993922529e-09) {
    dVar4 = (double)param_1[0x28];
    dVar5 = (double)param_1[0x29];
    dVar14 = (double)param_1[0x2a];
    dVar15 = (double)param_1[0x2b];
  }
  else {
    pfVar9 = (float *)param_1[3];
    fVar1 = pfVar9[2];
    fVar2 = pfVar9[1];
    fVar3 = *pfVar9;
    dVar4 = *(double *)(pfVar9 + 0x48);
    dVar5 = *(double *)(pfVar9 + 0x46);
    dVar14 = *(double *)(pfVar9 + 0x44);
    FUN_14013713e(pfVar9,&dStack_c8);
    dVar15 = (double)param_1[0x18];
    dVar6 = (double)param_1[0x17];
    dVar7 = (double)param_1[0x16];
    dVar12 = dStack_c0 * dVar15 - dVar6 * dStack_b8;
    dVar12 = dVar12 + dVar12;
    dVar13 = dStack_c8 * dVar6 - dVar7 * dStack_c0;
    dVar13 = dVar13 + dVar13;
    dVar16 = dStack_b8 * dVar7 - dVar15 * dStack_c8;
    dVar16 = dVar16 + dVar16;
    param_1[0x21] =
         (longlong)
         ((dStack_c0 * dVar13 - dVar16 * dStack_b8) + dVar12 * dStack_b0 + dVar7 +
         (double)fVar3 + dVar14);
    param_1[0x22] =
         (longlong)
         ((dStack_b8 * dVar12 - dVar13 * dStack_c8) + dStack_b0 * dVar16 + dVar6 +
         (double)fVar2 + dVar5);
    param_1[0x23] =
         (longlong)
         ((dStack_c8 * dVar16 - dVar12 * dStack_c0) + dStack_b0 * dVar13 + dVar15 +
         (double)fVar1 + dVar4);
    dVar15 = (double)param_1[0x12];
    dVar6 = (double)param_1[0x13];
    dVar7 = (double)param_1[0x14];
    dVar12 = (double)param_1[0x15];
    dVar4 = dVar6 * dStack_b8 * -1.0 +
            dVar7 * dStack_c0 + dVar12 * dStack_c8 * 1.0 + dVar15 * dStack_b0;
    dVar5 = dVar15 * dStack_b8 * 1.0 +
            dVar12 * dStack_c0 + dVar7 * dStack_c8 * -1.0 + dVar6 * dStack_b0;
    dVar14 = dVar12 * dStack_b8 * 1.0 +
             ((dStack_c8 * dVar6 * 1.0 + dStack_b0 * dVar7) - dVar15 * dStack_c0);
    dVar15 = dVar7 * dStack_b8 * -1.0 +
             ((dStack_c8 * dVar15 * -1.0 + dStack_b0 * dVar12) - dVar6 * dStack_c0);
  }
  dVar6 = (double)(&DAT_149931160)
                  [0.0 <= (double)param_1[0x27] * dVar15 +
                          (double)param_1[0x26] * dVar14 +
                          (double)param_1[0x24] * dVar4 + (double)param_1[0x25] * dVar5];
  param_1[0x28] = (longlong)(dVar4 * dVar6);
  param_1[0x29] = (longlong)(dVar5 * dVar6);
  param_1[0x2a] = (longlong)(dVar14 * dVar6);
  param_1[0x2b] = (longlong)(dVar15 * dVar6);
  if ((uStack_a0 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b6d18 FUN_1429b6d18 body=2132 status=ok
// SIG undefined FUN_1429b6d18(void)

void FUN_1429b6d18(undefined8 *param_1,double param_2,double param_3,double param_4,char param_5,
                  double *param_6,double param_7,double param_8,double *param_9)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_258 [40];
  double local_230;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  double local_218;
  double local_210;
  double local_208;
  double local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 uStack_140;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  pfVar1 = (float *)*param_1;
  pfVar2 = (float *)param_1[3];
  local_230 = *param_6;
  local_200 = param_6[1];
  local_208 = param_6[2];
  local_188 = 0.0;
  if (9.999999747378752e-05 < param_4) {
    local_188 = param_8 * param_2 +
                (((double)param_1[0x20] - (double)param_1[0x2e]) -
                ((double)param_1[0x23] - (double)param_1[0x31])) * local_208 +
                (((double)param_1[0x1e] - (double)param_1[0x2c]) -
                ((double)param_1[0x21] - (double)param_1[0x2f])) * local_230 +
                (((double)param_1[0x1f] - (double)param_1[0x2d]) -
                ((double)param_1[0x22] - (double)param_1[0x30])) * local_200;
  }
  local_210 = (double)param_1[0x44];
  local_148 = (double)param_1[0x45];
  uStack_140 = 0;
  local_21c = pfVar1[2];
  local_224 = *pfVar1;
  local_220 = pfVar1[1];
  local_1c8 = *(double *)(pfVar1 + 0x48);
  local_1d0 = *(double *)(pfVar1 + 0x46);
  local_1d8 = *(double *)(pfVar1 + 0x44);
  local_228 = *pfVar2;
  local_1f0 = *(double *)(pfVar2 + 0x48);
  local_1a8 = (double)param_1[0x46];
  local_198 = (double)param_1[0x47];
  local_1b8 = (double)param_1[0x48];
  local_1b0 = (double)param_1[0x4a];
  local_1a0 = (double)param_1[0x4b];
  local_1c0 = (double)param_1[0x4c];
  local_180 = (double)param_1[0x4e];
  local_178 = (double)param_1[0x4f];
  local_168 = (double)param_1[0x50];
  local_1e8 = (double)param_1[0x5a];
  local_1e0 = (double)param_1[0x5b];
  local_1f8 = (double)param_1[0x5c];
  local_158 = (double)param_1[0x5e];
  local_160 = (double)param_1[0x5f];
  local_170 = (double)param_1[0x60];
  if (param_5 == '\0') {
    local_218 = 1.0;
  }
  else {
    local_218 = 1.0 / (local_210 + local_148);
  }
  dVar8 = (double)param_1[0x21] - (*(double *)(pfVar2 + 0x44) + (double)local_228);
  dVar6 = (double)param_1[0x22] - (*(double *)(pfVar2 + 0x46) + (double)pfVar2[1]);
  dVar9 = dVar8 * local_200 - local_230 * dVar6;
  dVar4 = (double)param_1[0x23] - (local_1f0 + (double)pfVar2[2]);
  dVar7 = dVar6 * local_208 - local_200 * dVar4;
  dVar5 = dVar4 * local_230 - local_208 * dVar8;
  dVar6 = local_170 * dVar9 + (double)param_1[0x58] * dVar7 + local_1f8 * dVar5;
  local_130 = local_158 * dVar9 + (double)param_1[0x56] * dVar7 + local_1e8 * dVar5;
  local_128 = local_160 * dVar9 + (double)param_1[0x57] * dVar7 + local_1e0 * dVar5;
  dVar10 = (double)param_1[0x1e] - (local_1d8 + (double)local_224);
  dVar8 = (double)param_1[0x1f] - (local_1d0 + (double)local_220);
  dVar11 = dVar10 * local_200 - local_230 * dVar8;
  dVar4 = (double)param_1[0x20] - (local_1c8 + (double)local_21c);
  dVar3 = dVar8 * local_208 - local_200 * dVar4;
  dVar8 = dVar4 * local_230 - local_208 * dVar10;
  local_108 = local_168 * dVar11 + local_1b8 * dVar3 + local_1c0 * dVar8;
  local_118 = local_180 * dVar11 + local_1a8 * dVar3 + local_1b0 * dVar8;
  local_110 = local_178 * dVar11 + local_198 * dVar3 + local_1a0 * dVar8;
  dVar4 = param_3 * local_218 * param_2 * param_2;
  dVar10 = param_4 * local_218 * param_2;
  dVar8 = ((dVar4 * param_7 - local_188 * dVar10) - *param_9) *
          (1.0 / ((dVar10 + dVar4) *
                  (dVar11 * local_108 + dVar3 * local_118 + dVar8 * local_110 + local_210 +
                   local_148 + dVar9 * dVar6 + dVar7 * local_130 + dVar5 * local_128) + 1.0)) *
          (double)param_1[0x7d];
  local_d8 = local_210 * dVar8;
  local_e8 = local_230 * local_d8;
  local_e0 = local_200 * local_d8;
  local_d8 = local_d8 * local_208;
  local_f0 = -local_148 * dVar8;
  local_100 = local_230 * local_f0;
  local_f8 = local_200 * local_f0;
  local_f0 = local_f0 * local_208;
  local_118 = local_118 * dVar8;
  local_110 = local_110 * dVar8;
  local_108 = local_108 * dVar8;
  local_120 = -dVar8;
  local_130 = local_130 * local_120;
  local_128 = local_128 * local_120;
  local_120 = local_120 * dVar6;
  local_190 = param_4;
  local_150 = param_2;
  FUN_146dcd098(param_1);
  FUN_1429b6c80(param_1,&local_118,&local_130);
  *param_9 = *param_9 + dVar8;
  dVar4 = param_6[1];
  dVar6 = param_6[2];
  param_1[0x66] = *param_6 * dVar8 + (double)param_1[0x66];
  param_1[0x67] = dVar4 * dVar8 + (double)param_1[0x67];
  param_1[0x68] = dVar8 * dVar6 + (double)param_1[0x68];
  if ((local_d0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b756e FUN_1429b756e body=1048 status=ok
// SIG undefined FUN_1429b756e(void)

void FUN_1429b756e(longlong param_1,uint param_2,uint param_3,double param_4,double param_5,
                  double param_6,char param_7,double *param_8,double param_9,double param_10,
                  double param_11,double *param_12)

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
  double dVar11;
  longlong lVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_138 [40];
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar13 = (ulonglong)param_3;
  lVar12 = uVar13 * 0x80;
  dVar1 = *param_8;
  dVar2 = param_8[1];
  dVar3 = *(double *)(param_1 + 0x260 + lVar12);
  dVar15 = *(double *)(param_1 + 0x240 + lVar12);
  dVar4 = param_8[2];
  dVar14 = *(double *)(param_1 + 0x280 + lVar12);
  dVar5 = *(double *)(param_1 + 600 + lVar12);
  dVar6 = *(double *)(param_1 + 0x238 + lVar12);
  dVar7 = *(double *)(param_1 + 0x278 + lVar12);
  dVar8 = *(double *)(param_1 + 0x250 + lVar12);
  dVar9 = *(double *)(param_1 + 0x230 + lVar12);
  dVar10 = *(double *)(param_1 + 0x270 + lVar12);
  dVar11 = 0.0;
  if (9.999999747378752e-05 < param_6) {
    FUN_140185264(&local_f8,param_1 + 400 + (ulonglong)param_2 * 0x20,
                  param_1 + (ulonglong)param_2 * 0x20 + 0x120,0x3ff0000000000000);
    FUN_140185264(&local_110,param_1 + 400 + uVar13 * 0x20,param_1 + uVar13 * 0x20 + 0x120,
                  0x3ff0000000000000);
    dVar11 = param_10 * param_4 +
             (local_e8 - local_100) * dVar4 +
             (local_f8 - local_110) * dVar1 + (local_f0 - local_108) * dVar2;
  }
  dVar3 = (dVar14 * dVar4 + dVar15 * dVar1 + dVar3 * dVar2) * dVar4 +
          (dVar10 * dVar4 + dVar9 * dVar1 + dVar8 * dVar2) * dVar1 +
          (dVar7 * dVar4 + dVar6 * dVar1 + dVar5 * dVar2) * dVar2;
  dVar15 = 1.0;
  if (param_7 != '\0') {
    dVar15 = 1.0 / dVar3;
  }
  dVar14 = param_5 * dVar15 * param_4 * param_4;
  param_4 = param_6 * dVar15 * param_4;
  dVar15 = *param_12;
  dVar14 = ((dVar14 * param_9 - dVar11 * param_4) - dVar15) *
           (1.0 / ((param_4 + dVar14) * dVar3 + 1.0)) * *(double *)(param_1 + 1000);
  if (9.99999993922529e-09 < param_11) {
    if (param_11 - dVar15 <= dVar14) {
      dVar14 = param_11 - dVar15;
    }
    if (dVar14 <= -param_11 - dVar15) {
      dVar14 = -param_11 - dVar15;
    }
  }
  dVar3 = dVar3 * -dVar14;
  lVar12 = *(longlong *)(param_1 + uVar13 * 0x18);
  *(float *)(lVar12 + 0x10) = (float)(dVar1 * dVar3) + *(float *)(lVar12 + 0x10);
  *(float *)(lVar12 + 0x14) = (float)(dVar2 * dVar3) + *(float *)(lVar12 + 0x14);
  *(float *)(lVar12 + 0x18) = (float)(dVar4 * dVar3) + *(float *)(lVar12 + 0x18);
  FUN_146dc4678(param_1,param_3);
  *param_12 = *param_12 + dVar14;
  dVar14 = (double)(int)(-(uint)(param_2 != 0) | 1) * dVar14;
  dVar1 = param_8[1];
  dVar2 = param_8[2];
  *(double *)(param_1 + 0x348) = *param_8 * dVar14 + *(double *)(param_1 + 0x348);
  *(double *)(param_1 + 0x350) = dVar1 * dVar14 + *(double *)(param_1 + 0x350);
  *(double *)(param_1 + 0x358) = dVar14 * dVar2 + *(double *)(param_1 + 0x358);
  if ((local_e0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b7988 FUN_1429b7988 body=1141 status=ok
// SIG undefined FUN_1429b7988(void)

void FUN_1429b7988(longlong param_1,double param_2,double param_3,double param_4,char param_5,
                  double *param_6,double param_7,double param_8,double param_9,double *param_10)

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
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar1 = *param_6;
  dVar2 = param_6[1];
  dVar3 = param_6[2];
  dVar5 = (*(double *)(param_1 + 0x280) * dVar3 +
          *(double *)(param_1 + 0x240) * dVar1 + *(double *)(param_1 + 0x260) * dVar2) * dVar3 +
          (*(double *)(param_1 + 0x270) * dVar3 +
          *(double *)(param_1 + 0x230) * dVar1 + *(double *)(param_1 + 0x250) * dVar2) * dVar1 +
          (*(double *)(param_1 + 0x278) * dVar3 +
          *(double *)(param_1 + 0x238) * dVar1 + *(double *)(param_1 + 600) * dVar2) * dVar2;
  dVar6 = (*(double *)(param_1 + 0x300) * dVar3 +
          *(double *)(param_1 + 0x2c0) * dVar1 + *(double *)(param_1 + 0x2e0) * dVar2) * dVar3 +
          (*(double *)(param_1 + 0x2f0) * dVar3 +
          *(double *)(param_1 + 0x2b0) * dVar1 + *(double *)(param_1 + 0x2d0) * dVar2) * dVar1 +
          (*(double *)(param_1 + 0x2f8) * dVar3 +
          *(double *)(param_1 + 0x2b8) * dVar1 + *(double *)(param_1 + 0x2d8) * dVar2) * dVar2;
  dVar7 = 0.0;
  if (9.999999747378752e-05 < param_4) {
    FUN_140185264(&local_e8,param_1 + 400,param_1 + 0x120,0x3ff0000000000000);
    FUN_140185264(&local_100,param_1 + 0x1b0,param_1 + 0x140,0x3ff0000000000000);
    dVar7 = param_8 * param_2 +
            (local_d8 - local_f0) * dVar3 +
            (local_e8 - local_100) * dVar1 + (local_e0 - local_f8) * dVar2;
  }
  dVar8 = dVar5 + dVar6;
  dVar9 = 1.0;
  if (param_5 != '\0') {
    dVar9 = 1.0 / dVar8;
  }
  dVar4 = param_3 * dVar9 * param_2 * param_2;
  param_2 = param_4 * dVar9 * param_2;
  dVar9 = *param_10;
  dVar7 = ((dVar4 * param_7 - dVar7 * param_2) - dVar9) *
          (1.0 / ((param_2 + dVar4) * dVar8 + 1.0)) * *(double *)(param_1 + 1000);
  if (9.99999993922529e-09 < param_9) {
    if (param_9 - dVar9 <= dVar7) {
      dVar7 = param_9 - dVar9;
    }
    if (dVar7 <= -param_9 - dVar9) {
      dVar7 = -param_9 - dVar9;
    }
  }
  dVar5 = dVar5 * dVar7;
  local_d8 = dVar3 * dVar5;
  local_e0 = dVar2 * dVar5;
  local_e8 = dVar5 * dVar1;
  dVar6 = dVar6 * -dVar7;
  local_f0 = dVar3 * dVar6;
  local_f8 = dVar2 * dVar6;
  local_100 = dVar6 * dVar1;
  FUN_1429b6c80(param_1);
  *param_10 = *param_10 + dVar7;
  dVar1 = param_6[1];
  dVar2 = param_6[2];
  *(double *)(param_1 + 0x348) = *param_6 * dVar7 + *(double *)(param_1 + 0x348);
  *(double *)(param_1 + 0x350) = dVar1 * dVar7 + *(double *)(param_1 + 0x350);
  *(double *)(param_1 + 0x358) = dVar7 * dVar2 + *(double *)(param_1 + 0x358);
  if ((local_d0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b7e00 FUN_1429b7e00 body=69 status=ok
// SIG undefined FUN_1429b7e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b7e00(void)

{
  _DAT_14c993b60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b7e42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b68,1);
  return;
}



// FUNCTION 1429b7e45 FUN_1429b7e45 body=69 status=ok
// SIG undefined FUN_1429b7e45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b7e45(void)

{
  _DAT_14c993b78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b7e87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b80,1);
  return;
}



// FUNCTION 1429b7e8a FUN_1429b7e8a body=69 status=ok
// SIG undefined FUN_1429b7e8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b7e8a(void)

{
  _DAT_14c993b88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b7ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993b90,1);
  return;
}



// FUNCTION 1429b7ecf FUN_1429b7ecf body=69 status=ok
// SIG undefined FUN_1429b7ecf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b7ecf(void)

{
  _DAT_14c993b98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b7f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993ba0,1);
  return;
}



// FUNCTION 1429b7f14 FUN_1429b7f14 body=69 status=ok
// SIG undefined FUN_1429b7f14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b7f14(void)

{
  _DAT_14c993ba8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b7f56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993bb0,1);
  return;
}



// FUNCTION 1429b7f59 FUN_1429b7f59 body=69 status=ok
// SIG undefined FUN_1429b7f59(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b7f59(void)

{
  _DAT_14c993bb8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b7f9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993bc0,1);
  return;
}



// FUNCTION 1429b7f9e FUN_1429b7f9e body=69 status=ok
// SIG undefined FUN_1429b7f9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b7f9e(void)

{
  _DAT_14c993bc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b7fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993bd0,1);
  return;
}



// FUNCTION 1429b7fe4 FUN_1429b7fe4 body=415 status=ok
// SIG undefined FUN_1429b7fe4(void)

ulonglong FUN_1429b7fe4(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                       undefined4 param_5,undefined8 param_6,undefined4 *param_7,undefined4 *param_8
                       )

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_228 [47];
  undefined1 local_1f9;
  undefined8 *local_1f8;
  undefined4 *local_1f0;
  undefined1 *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8 [2];
  undefined1 local_1d0 [8];
  undefined1 local_1c8 [72];
  undefined1 local_180 [144];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_78 [2];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_90 = (longlong)*(int *)(param_2 + 1) * 3;
  local_98 = *param_2;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_1d0[0] = 0;
  local_b8 = uVar2;
  local_b0 = (longlong)iVar1 * 3;
  FUN_146ddcf80(local_1c8);
  local_1d0[0] = 0;
  local_bc = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  local_d8 = (longlong)param_4;
  local_d0 = param_5;
  FUN_146ddd1fc(local_1c8,param_1);
  FUN_146ddd254(&local_f0,local_180);
  local_1d0[0] = 1;
  local_bc = 0x101;
  local_c0 = 0;
  local_1f0 = local_1d8;
  local_1d8[0] = 0;
  local_1f8 = local_78;
  local_1e8 = &local_1f9;
  local_1e0 = &local_b8;
  local_78[0] = uVar2;
  local_68 = (longlong)iVar1 * 3;
  FUN_146ddd334();
  FUN_146ddd3ec(local_1d0,&local_98,&local_b8);
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = local_c8;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = local_cc;
  }
  bVar3 = local_c0 == 0;
  FUN_146ddcf46();
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)local_180 >> 8),bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b8184 FUN_1429b8184 body=413 status=ok
// SIG undefined FUN_1429b8184(void)

ulonglong FUN_1429b8184(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                       undefined4 param_5,undefined8 param_6,undefined4 *param_7,undefined4 *param_8
                       )

{
  int iVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 auStack_288 [39];
  undefined1 local_261;
  undefined8 *local_260;
  undefined4 *local_258;
  undefined1 *local_250;
  undefined8 *local_248;
  undefined4 local_240 [2];
  undefined1 local_238 [8];
  undefined1 local_230 [72];
  undefined1 local_1e8 [144];
  undefined1 local_158 [104];
  int local_f0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  int local_c0;
  undefined2 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_78 [2];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_90 = (longlong)*(int *)(param_2 + 1) * 3;
  local_98 = *param_2;
  iVar1 = *(int *)(param_3 + 1);
  uVar2 = *param_3;
  local_b8 = uVar2;
  local_b0 = (longlong)iVar1 * 3;
  FUN_146dde642(local_238);
  local_d8 = (longlong)param_4;
  local_d0 = param_5;
  FUN_146ddd1fc(local_230,param_1);
  FUN_146dde7a2(local_158,local_1e8);
  FUN_146dde888(local_158,local_1e8);
  local_238[0] = 1;
  local_bc = 0x101;
  local_c0 = local_f0;
  local_258 = local_240;
  local_240[0] = 0;
  local_260 = local_78;
  local_250 = &local_261;
  local_248 = &local_b8;
  local_78[0] = uVar2;
  local_68 = (longlong)iVar1 * 3;
  FUN_146ddd334();
  FUN_146de2182(local_238,&local_98,&local_b8);
  if (param_7 != (undefined4 *)0x0) {
    *param_7 = local_c8;
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = local_cc;
  }
  bVar3 = local_c0 == 0;
  FUN_146dde5f0();
  if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)local_238 >> 8),bVar3) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b8322 FUN_1429b8322 body=69 status=ok
// SIG undefined FUN_1429b8322(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b8322(void)

{
  _DAT_14c993be0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b8364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993be8,1);
  return;
}



// FUNCTION 1429b8367 FUN_1429b8367 body=69 status=ok
// SIG undefined FUN_1429b8367(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b8367(void)

{
  _DAT_14c993bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b83a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993bf8,1);
  return;
}



// FUNCTION 1429b83ac FUN_1429b83ac body=69 status=ok
// SIG undefined FUN_1429b83ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b83ac(void)

{
  _DAT_14c993c08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b83ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993c10,1);
  return;
}



// FUNCTION 1429b83f1 FUN_1429b83f1 body=69 status=ok
// SIG undefined FUN_1429b83f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b83f1(void)

{
  _DAT_14c993c20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b8433. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993c28,1);
  return;
}



// FUNCTION 1429b8436 FUN_1429b8436 body=69 status=ok
// SIG undefined FUN_1429b8436(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b8436(void)

{
  _DAT_14c993c38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b8478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993c40,1);
  return;
}



// FUNCTION 1429b847b FUN_1429b847b body=69 status=ok
// SIG undefined FUN_1429b847b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b847b(void)

{
  _DAT_14c993c50 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b84bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993c58,1);
  return;
}



// FUNCTION 1429b84c0 FUN_1429b84c0 body=69 status=ok
// SIG undefined FUN_1429b84c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b84c0(void)

{
  _DAT_14c993c68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b8502. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993c70,1);
  return;
}



// FUNCTION 1429b8506 FUN_1429b8506 body=64 status=ok
// SIG undefined FUN_1429b8506(void)

void FUN_1429b8506(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  lVar2 = *(longlong *)(param_1 + 0x48);
  *(undefined1 *)(param_1 + 0x78) = param_2;
  *(uint *)(param_1 + 0xc) = uVar1 | 1;
  if ((lVar2 != 0 && uVar1 == 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    FUN_144821112(*(longlong *)(lVar2 + 8) + 0x70,lVar2,*(uint *)(param_1 + 8) >> 3);
    return;
  }
  return;
}



// FUNCTION 1429b8546 FUN_1429b8546 body=69 status=ok
// SIG undefined FUN_1429b8546(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b8546(void)

{
  _DAT_14c993c80 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b8588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993c88,1);
  return;
}



// FUNCTION 1429b858b FUN_1429b858b body=45 status=ok
// SIG undefined FUN_1429b858b(void)

void FUN_1429b858b(void)

{
  longlong lVar1;
  
  lVar1 = DAT_14c993de0;
  if (DAT_14c993de0 != 0) {
    FUN_140191cfe(DAT_14c993de0);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1429b85b8 FUN_1429b85b8 body=457 status=ok
// SIG undefined FUN_1429b85b8(void)

void FUN_1429b85b8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = *(int *)(param_1 + 0x90);
  if ((iVar5 < 1) || (*(int *)(param_1 + 0x10) <= DAT_14c75f1c4)) {
    if ((*(int *)(param_1 + 0x60) < 2) ||
       (ABS(*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x6c)) <= 0.0001)) {
      if (0 < *(int *)(param_1 + 0x10)) {
        uVar2 = **(undefined4 **)(param_1 + 0x58);
        iVar5 = 0;
        do {
          FUN_144b04f14(param_1,param_2,iVar5,uVar2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x10));
      }
    }
    else if (0 < *(int *)(param_1 + 0x10)) {
      uVar6 = 0;
      do {
        FUN_144b04f14(param_1,param_2,uVar6 & 0xffffffff,
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x58) +
                       (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x48) + uVar6) * 4));
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x10));
    }
  }
  else if ((*(int *)(param_1 + 0x60) < 2) ||
          (ABS(*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x6c)) <= 0.0001)) {
    if (iVar5 != 1) {
      uVar2 = **(undefined4 **)(param_1 + 0x58);
      uVar6 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + uVar6 * 4);
        lVar4 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        lVar1 = (longlong)iVar3 * 4;
        FUN_14193fe00(*(undefined8 *)(param_2 + 0xa8),
                      (longlong)iVar3 * 0xc + *(longlong *)(param_1 + 8),
                      lVar1 + *(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x30) + lVar1,
                      uVar2,*(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar4) - iVar3);
      } while (iVar5 - 1 != uVar6);
    }
  }
  else if (iVar5 != 1) {
    uVar6 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + uVar6 * 4);
      lVar4 = (longlong)iVar3;
      lVar1 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      FUN_14193fee0(*(undefined8 *)(param_2 + 0xa8),lVar4 * 0xc + *(longlong *)(param_1 + 8),
                    lVar4 * 4 + *(longlong *)(param_1 + 0x20),
                    *(longlong *)(param_1 + 0x30) + lVar4 * 4,*(longlong *)(param_1 + 0x48) + lVar4,
                    *(undefined8 *)(param_1 + 0x58),
                    *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar1) - iVar3);
    } while (iVar5 - 1 != uVar6);
  }
  return;
}



// FUNCTION 1429b8782 FUN_1429b8782 body=485 status=ok
// SIG undefined FUN_1429b8782(void)

void FUN_1429b8782(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  iVar5 = *(int *)(param_1 + 0x90);
  if ((iVar5 < 1) || (*(int *)(param_1 + 0x10) <= DAT_14c75f1c4)) {
    if ((*(int *)(param_1 + 0x60) < 2) ||
       (ABS(*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x6c)) <= 0.0001)) {
      if (0 < *(int *)(param_1 + 0x10)) {
        uVar2 = **(undefined4 **)(param_1 + 0x58);
        iVar5 = 0;
        do {
          FUN_146dd9f6a(param_1,param_2,iVar5,uVar2);
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_1 + 0x10));
      }
    }
    else if (0 < *(int *)(param_1 + 0x10)) {
      uVar6 = 0;
      do {
        FUN_146dd9f6a(param_1,param_2,uVar6 & 0xffffffff,
                      *(undefined4 *)
                       (*(longlong *)(param_1 + 0x58) +
                       (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x48) + uVar6) * 4));
        uVar6 = uVar6 + 1;
      } while ((longlong)uVar6 < (longlong)*(int *)(param_1 + 0x10));
    }
  }
  else if ((*(int *)(param_1 + 0x60) < 2) ||
          (ABS(*(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x6c)) <= 0.0001)) {
    if (iVar5 != 1) {
      uVar2 = **(undefined4 **)(param_1 + 0x58);
      uVar6 = 0;
      do {
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + uVar6 * 4);
        lVar4 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        lVar1 = (longlong)iVar3 * 4;
        FUN_14193fe00((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                      (longlong)iVar3 * 0xc + *(longlong *)(param_1 + 8),
                      lVar1 + *(longlong *)(param_1 + 0x20),*(longlong *)(param_1 + 0x30) + lVar1,
                      uVar2,*(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar4) - iVar3);
      } while (iVar5 - 1 != uVar6);
    }
  }
  else if (iVar5 != 1) {
    uVar6 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(param_1 + 0x88) + uVar6 * 4);
      lVar4 = (longlong)iVar3;
      lVar1 = uVar6 * 4;
      uVar6 = uVar6 + 1;
      FUN_14193fee0((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                    *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                    lVar4 * 0xc + *(longlong *)(param_1 + 8),
                    lVar4 * 4 + *(longlong *)(param_1 + 0x20),
                    *(longlong *)(param_1 + 0x30) + lVar4 * 4,*(longlong *)(param_1 + 0x48) + lVar4,
                    *(undefined8 *)(param_1 + 0x58),
                    *(int *)(*(longlong *)(param_1 + 0x88) + 4 + lVar1) - iVar3);
    } while (iVar5 - 1 != uVar6);
  }
  return;
}



// FUNCTION 1429b8967 FUN_1429b8967 body=69 status=ok
// SIG undefined FUN_1429b8967(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b8967(void)

{
  _DAT_14c993d88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b89a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993d90,1);
  return;
}



// FUNCTION 1429b89ac FUN_1429b89ac body=664 status=ok
// SIG undefined FUN_1429b89ac(void)

void FUN_1429b89ac(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*(int *)(param_1 + 0x50) < 2) {
    bVar8 = false;
  }
  else {
    bVar8 = 0.0001 < ABS(*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0xd0) < 2) {
    bVar10 = false;
  }
  else {
    bVar10 = 0.0001 < ABS(*(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xdc));
  }
  iVar7 = *(int *)(param_1 + 0x128);
  if (iVar7 < 1) {
    iVar4 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
    if (DAT_14c75f1c8 < iVar4) {
      if ((bVar8 | bVar10) != 1) {
        if (iVar7 == 1) {
          return;
        }
        uVar2 = **(undefined4 **)(param_1 + 0x48);
        uVar3 = **(undefined4 **)(param_1 + 200);
        uVar11 = 0;
        do {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x120) + uVar11 * 4);
          lVar5 = (longlong)iVar4;
          lVar6 = uVar11 * 4;
          uVar11 = uVar11 + 1;
          FUN_14199c5a0(*(undefined8 *)(param_2 + 0xa8),lVar5 * 0x10 + *(longlong *)(param_1 + 8),
                        lVar5 * 4 + *(longlong *)(param_1 + 0xf8),
                        *(longlong *)(param_1 + 0x108) + lVar5,uVar2,uVar3,
                        *(int *)(*(longlong *)(param_1 + 0x120) + 4 + lVar6) - iVar4);
        } while (iVar7 - 1 != uVar11);
        return;
      }
      if (iVar7 == 1) {
        return;
      }
      uVar11 = 0;
      do {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x120) + uVar11 * 4);
        lVar6 = (longlong)iVar4;
        if (bVar10 == false) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0xb8) + lVar6;
        }
        if (bVar8 == false) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(param_1 + 0x38) + lVar6;
        }
        lVar1 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        FUN_14199c6a0(*(undefined8 *)(param_2 + 0xa8),lVar6 * 0x10 + *(longlong *)(param_1 + 8),
                      lVar6 * 4 + *(longlong *)(param_1 + 0xf8),
                      *(longlong *)(param_1 + 0x108) + lVar6,bVar8,lVar9,
                      *(undefined8 *)(param_1 + 0x48),bVar10,lVar5,*(undefined8 *)(param_1 + 200),
                      *(int *)(*(longlong *)(param_1 + 0x120) + 4 + lVar1) - iVar4);
      } while (iVar7 - 1 != uVar11);
      return;
    }
  }
  uVar2 = **(undefined4 **)(param_1 + 0x48);
  uVar3 = **(undefined4 **)(param_1 + 200);
  if (bVar8 == false && bVar10 == false) {
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        FUN_144b05272(param_1,param_2,iVar7,uVar2,uVar3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
  }
  else if (0 < iVar4) {
    uVar11 = 0;
    do {
      uVar13 = uVar2;
      if (bVar8 != false) {
        uVar13 = *(undefined4 *)
                  (*(longlong *)(param_1 + 0x48) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x38) + uVar11) * 4);
      }
      uVar12 = uVar3;
      if (bVar10 != false) {
        uVar12 = *(undefined4 *)
                  (*(longlong *)(param_1 + 200) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0xb8) + uVar11) * 4);
      }
      FUN_144b05272(param_1,param_2,uVar11 & 0xffffffff,uVar13,uVar12);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1429b8c44 FUN_1429b8c44 body=698 status=ok
// SIG undefined FUN_1429b8c44(void)

void FUN_1429b8c44(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (*(int *)(param_1 + 0x50) < 2) {
    bVar8 = false;
  }
  else {
    bVar8 = 0.0001 < ABS(*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x5c));
  }
  if (*(int *)(param_1 + 0xd0) < 2) {
    bVar10 = false;
  }
  else {
    bVar10 = 0.0001 < ABS(*(float *)(param_1 + 0xd8) - *(float *)(param_1 + 0xdc));
  }
  iVar7 = *(int *)(param_1 + 0x128);
  if (iVar7 < 1) {
    iVar4 = *(int *)(param_1 + 0x10);
  }
  else {
    iVar4 = *(int *)(param_1 + 0x10);
    if (DAT_14c75f1c8 < iVar4) {
      if ((bVar8 | bVar10) != 1) {
        if (iVar7 == 1) {
          return;
        }
        uVar2 = **(undefined4 **)(param_1 + 0x48);
        uVar3 = **(undefined4 **)(param_1 + 200);
        uVar11 = 0;
        do {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x120) + uVar11 * 4);
          lVar5 = (longlong)iVar4;
          lVar6 = uVar11 * 4;
          uVar11 = uVar11 + 1;
          FUN_14199c5a0((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                        *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                        lVar5 * 0x10 + *(longlong *)(param_1 + 8),
                        lVar5 * 4 + *(longlong *)(param_1 + 0xf8),
                        *(longlong *)(param_1 + 0x108) + lVar5,uVar2,uVar3,
                        *(int *)(*(longlong *)(param_1 + 0x120) + 4 + lVar6) - iVar4);
        } while (iVar7 - 1 != uVar11);
        return;
      }
      if (iVar7 == 1) {
        return;
      }
      uVar11 = 0;
      do {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x120) + uVar11 * 4);
        lVar6 = (longlong)iVar4;
        if (bVar10 == false) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0xb8) + lVar6;
        }
        if (bVar8 == false) {
          lVar9 = 0;
        }
        else {
          lVar9 = *(longlong *)(param_1 + 0x38) + lVar6;
        }
        lVar1 = uVar11 * 4;
        uVar11 = uVar11 + 1;
        FUN_14199c6a0((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                      lVar6 * 0x10 + *(longlong *)(param_1 + 8),
                      lVar6 * 4 + *(longlong *)(param_1 + 0xf8),
                      *(longlong *)(param_1 + 0x108) + lVar6,bVar8,lVar9,
                      *(undefined8 *)(param_1 + 0x48),bVar10,lVar5,*(undefined8 *)(param_1 + 200),
                      *(int *)(*(longlong *)(param_1 + 0x120) + 4 + lVar1) - iVar4);
      } while (iVar7 - 1 != uVar11);
      return;
    }
  }
  uVar2 = **(undefined4 **)(param_1 + 0x48);
  uVar3 = **(undefined4 **)(param_1 + 200);
  if (bVar8 == false && bVar10 == false) {
    if (0 < iVar4) {
      iVar7 = 0;
      do {
        FUN_146dda6a8(param_1,param_2,iVar7,uVar2,uVar3);
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(param_1 + 0x10));
    }
  }
  else if (0 < iVar4) {
    uVar11 = 0;
    do {
      uVar13 = uVar2;
      if (bVar8 != false) {
        uVar13 = *(undefined4 *)
                  (*(longlong *)(param_1 + 0x48) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x38) + uVar11) * 4);
      }
      uVar12 = uVar3;
      if (bVar10 != false) {
        uVar12 = *(undefined4 *)
                  (*(longlong *)(param_1 + 200) +
                  (ulonglong)*(byte *)(*(longlong *)(param_1 + 0xb8) + uVar11) * 4);
      }
      FUN_146dda6a8(param_1,param_2,uVar11 & 0xffffffff,uVar13,uVar12);
      uVar11 = uVar11 + 1;
    } while ((longlong)uVar11 < (longlong)*(int *)(param_1 + 0x10));
  }
  return;
}



// FUNCTION 1429b8efe FUN_1429b8efe body=69 status=ok
// SIG undefined FUN_1429b8efe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b8efe(void)

{
  _DAT_14c993d98 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429b8f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993da0,1);
  return;
}



// FUNCTION 1429b8f44 FUN_1429b8f44 body=273 status=ok
// SIG undefined FUN_1429b8f44(void)

void FUN_1429b8f44(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x110) = iVar1;
    if ((uint)(*(int *)(param_1 + 0x114) - iVar2) < (uint)(iVar1 - iVar2)) {
      FUN_1401c3474(param_1 + 0x108);
    }
  }
  else {
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x110) = iVar1;
      FUN_1403ed828();
    }
  }
  if (*(int *)(param_1 + 0x98) < 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (0.0001 < ABS(*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0xa4))) {
      FUN_14199c900(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x108),
                    *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x90),uVar3);
      return;
    }
  }
  FUN_14199c820(*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x108),
                CONCAT44(uVar4,**(undefined4 **)(param_1 + 0x90)),CONCAT44(uVar5,uVar3));
  return;
}



// FUNCTION 1429b9056 FUN_1429b9056 body=305 status=ok
// SIG undefined FUN_1429b9056(void)

void FUN_1429b9056(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar5;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x110);
  if (iVar2 < iVar1) {
    *(int *)(param_1 + 0x110) = iVar1;
    if ((uint)(*(int *)(param_1 + 0x114) - iVar2) < (uint)(iVar1 - iVar2)) {
      FUN_1401c3474(param_1 + 0x108);
    }
  }
  else {
    if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar1);
    }
    if (iVar1 < iVar2) {
      *(int *)(param_1 + 0x110) = iVar1;
      FUN_1403ed828();
    }
  }
  if (*(int *)(param_1 + 0x98) < 2) {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x10);
    if (0.0001 < ABS(*(float *)(param_1 + 0xa0) - *(float *)(param_1 + 0xa4))) {
      FUN_14199c900((longlong)*(int *)(param_2 + 0x10) * 0xc +
                    *(longlong *)(*(longlong *)(param_2 + 8) + 0x28),*(undefined8 *)(param_1 + 8),
                    *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x108),
                    *(undefined8 *)(param_1 + 0x80),*(undefined8 *)(param_1 + 0x90),uVar3);
      return;
    }
  }
  FUN_14199c820((longlong)*(int *)(param_2 + 0x10) * 0xc +
                *(longlong *)(*(longlong *)(param_2 + 8) + 0x28),*(undefined8 *)(param_1 + 8),
                *(undefined8 *)(param_1 + 0xf8),*(undefined8 *)(param_1 + 0x108),
                CONCAT44(uVar4,**(undefined4 **)(param_1 + 0x90)),CONCAT44(uVar5,uVar3));
  return;
}



// FUNCTION 1429b9188 FUN_1429b9188 body=177 status=ok
// SIG undefined FUN_1429b9188(void)

byte FUN_1429b9188(longlong param_1)

{
  byte bVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x140);
  bVar1 = 1;
  if ((((fVar2 == 0.0) && (!NAN(fVar2))) &&
      (fVar2 = fVar2 + *(float *)(param_1 + 0x144), fVar2 == 0.0)) && (!NAN(fVar2))) {
    if (*(float *)(param_1 + 0x168) <= 0.0) {
      bVar1 = 0;
    }
    else if ((((*(float *)(param_1 + 0xe0) <= 0.0) && (*(float *)(param_1 + 0xe4) == 0.0)) &&
             ((!NAN(*(float *)(param_1 + 0xe4)) &&
              ((*(float *)(param_1 + 0x110) <= 0.0 && (*(float *)(param_1 + 0x114) == 0.0)))))) &&
            ((!NAN(*(float *)(param_1 + 0x114)) &&
             ((((*(float *)(param_1 + 0x80) <= 0.0 && (*(float *)(param_1 + 0x84) == 0.0)) &&
               (!NAN(*(float *)(param_1 + 0x84)))) && (*(float *)(param_1 + 0xb0) <= 0.0)))))) {
      bVar1 = -(*(float *)(param_1 + 0xb4) != 0.0) & 1;
    }
  }
  return bVar1;
}



// FUNCTION 1429b923a FUN_1429b923a body=456 status=ok
// SIG undefined FUN_1429b923a(void)

void FUN_1429b923a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  longlong *local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = (longlong *)*param_2;
  if (plVar7 == (longlong *)0x0) goto LAB_1429b93c8;
  lVar4 = *param_1;
  iVar3 = (int)param_1[3];
  if (iVar3 == 0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    if (*(char *)((longlong)plVar7 + 0x1c) == '\x05') {
      FUN_146daf3bc(plVar7,*(undefined8 *)param_1[2]);
    }
  }
  else {
    if (iVar3 == 2) {
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_98);
    }
    else {
      if (iVar3 != 1) {
        plVar7 = (longlong *)0x0;
        goto LAB_1429b9317;
      }
      (**(code **)(*plVar7 + 0x28))(plVar7,&local_98);
    }
    if ((local_98 != (longlong *)0x0) && (*(char *)((longlong)local_98 + 0x1c) == '\x05')) {
      FUN_146daf3bc(local_98,*(undefined8 *)param_1[2]);
    }
    plVar5 = (longlong *)*param_2;
    plVar7 = local_98;
    if (plVar5 != local_98) {
      *param_2 = (longlong)local_98;
      if (local_98 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_98 + 1) = (int)local_98[1] + 1;
        UNLOCK();
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar5 + 0xc) == 0)) {
          (**(code **)*plVar5)(plVar5,1);
        }
      }
    }
  }
LAB_1429b9317:
  dStack_80 = (double)*(float *)(lVar4 + 0x4c);
  local_88 = (double)*(float *)(lVar4 + 0x48);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  dStack_90 = (double)*(float *)(lVar4 + 0x44);
  local_98 = (longlong *)(double)*(float *)(lVar4 + 0x40);
  local_78 = *(undefined8 *)(lVar4 + 0x20);
  uStack_70 = *(undefined8 *)(lVar4 + 0x28);
  local_68 = *(undefined8 *)(lVar4 + 0x30);
  uStack_60 = 0;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0x3ff0000000000000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
  local_a0 = *(undefined8 **)(lVar4 + 0x50);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_a0 + 1) = *(int *)(local_a0 + 1) + 1;
    UNLOCK();
  }
  FUN_1400ed869(lVar4 + 0x78,&local_a0,&local_98,uVar6);
  if (local_a0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((*piVar2 == 0) && (*(int *)((longlong)local_a0 + 0xc) == 0)) {
      (**(code **)*local_a0)(local_a0,1);
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar7 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if (((int)*plVar5 == 0) && (*(int *)((longlong)plVar7 + 0xc) == 0)) {
      (**(code **)*plVar7)(plVar7,1);
    }
  }
LAB_1429b93c8:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b9404 FUN_1429b9404 body=1903 status=ok
// SIG undefined FUN_1429b9404(void)

float * FUN_1429b9404(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                     undefined4 *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_120;
  float local_11c;
  float local_118;
  
  fVar18 = param_3[2];
  fVar12 = param_2[2];
  local_120 = fVar18 - fVar12;
  fVar23 = *param_3;
  fVar20 = param_3[1];
  fVar17 = *param_2;
  fVar15 = param_2[1];
  local_11c = fVar20 - fVar15;
  local_118 = fVar23 - fVar17;
  fVar1 = local_120 * local_120 + local_118 * local_118 + local_11c * local_11c;
  if ((fVar1 != 1.0) || (NAN(fVar1))) {
    if (fVar1 < 1e-08) {
      local_118 = (float)DAT_14c846330;
      local_11c = DAT_14c846330._4_4_;
      local_120 = DAT_14c846338;
    }
    else {
      fVar1 = 1.0 / SQRT(fVar1);
      local_120 = local_120 * fVar1;
      local_11c = local_11c * fVar1;
      local_118 = local_118 * fVar1;
    }
  }
  fVar8 = fVar18 - param_4[2];
  fVar25 = fVar20 - param_4[1];
  fVar10 = fVar23 - *param_4;
  fVar22 = fVar12 - param_4[2];
  fVar1 = fVar15 - param_4[1];
  fVar6 = fVar17 - *param_4;
  fVar14 = fVar6 * fVar25 - fVar10 * fVar1;
  fVar16 = fVar22 * fVar10 - fVar8 * fVar6;
  fVar2 = fVar1 * fVar8 - fVar25 * fVar22;
  fVar9 = SQRT(fVar14 * fVar14 + fVar2 * fVar2 + fVar16 * fVar16);
  fVar12 = fVar12 - param_5[2];
  fVar15 = fVar15 - param_5[1];
  fVar17 = fVar17 - *param_5;
  fVar18 = fVar18 - param_5[2];
  fVar20 = fVar20 - param_5[1];
  fVar23 = fVar23 - *param_5;
  fVar5 = fVar23 * fVar15 - fVar17 * fVar20;
  fVar24 = fVar18 * fVar17 - fVar12 * fVar23;
  fVar11 = fVar20 * fVar12 - fVar15 * fVar18;
  fVar7 = SQRT(fVar5 * fVar5 + fVar11 * fVar11 + fVar24 * fVar24);
  fVar26 = 0.0;
  if (1e-08 < fVar7) {
    fVar5 = fVar5 / fVar7;
    fVar24 = fVar24 / fVar7;
  }
  else {
    fVar24 = 0.0;
    fVar5 = 0.0;
  }
  fVar2 = (float)(-(uint)(1e-08 < fVar9) & (uint)(fVar2 / fVar9));
  if (1e-08 < fVar9) {
    fVar14 = fVar14 / fVar9;
    fVar16 = fVar16 / fVar9;
  }
  else {
    fVar16 = 0.0;
    fVar14 = 0.0;
  }
  fVar19 = (float)(-(uint)(1e-08 < fVar7) & (uint)(fVar11 / fVar7));
  fVar11 = fVar14 * fVar5 + fVar2 * fVar19 + fVar16 * fVar24;
  if (1.0 <= fVar11) {
    fVar11 = 1.0;
  }
  if (fVar11 <= -1.0) {
    fVar11 = -1.0;
  }
  fVar3 = (fVar19 * fVar16 - fVar2 * fVar24) * local_120 +
          (fVar24 * fVar14 - fVar16 * fVar5) * local_118 +
          (fVar5 * fVar2 - fVar14 * fVar19) * local_11c;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= -1.0) {
    fVar3 = -1.0;
  }
  fVar13 = 0.0;
  fVar21 = 0.0;
  if (1e-08 < fVar9) {
    fVar21 = ((local_118 * fVar24 - fVar19 * local_11c) * fVar11 - fVar5 * fVar3) / fVar9;
    fVar13 = ((local_120 * fVar19 - fVar5 * local_118) * fVar11 - fVar24 * fVar3) / fVar9;
    fVar26 = ((local_11c * fVar5 - fVar24 * local_120) * fVar11 - fVar19 * fVar3) / fVar9;
  }
  if (fVar7 <= 1e-08) {
    fVar7 = 0.0;
    fVar5 = 0.0;
    fVar9 = 0.0;
  }
  else {
    fVar9 = ((fVar2 * local_11c - local_118 * fVar16) * fVar11 - fVar14 * fVar3) / fVar7;
    fVar5 = ((fVar14 * local_118 - local_120 * fVar2) * fVar11 - fVar16 * fVar3) / fVar7;
    fVar7 = ((fVar16 * local_120 - local_11c * fVar14) * fVar11 - fVar2 * fVar3) / fVar7;
  }
  fVar14 = fVar10 * fVar13 - fVar26 * fVar25;
  fVar10 = fVar8 * fVar26 - fVar21 * fVar10;
  fVar8 = fVar25 * fVar21 - fVar13 * fVar8;
  fVar16 = fVar26 * fVar1 - fVar6 * fVar13;
  fVar2 = fVar21 * fVar6 - fVar22 * fVar26;
  fVar1 = fVar13 * fVar22 - fVar1 * fVar21;
  fVar6 = fVar17 * fVar5 - fVar7 * fVar15;
  fVar17 = fVar12 * fVar7 - fVar9 * fVar17;
  fVar15 = fVar15 * fVar9 - fVar5 * fVar12;
  fVar12 = fVar7 * fVar20 - fVar23 * fVar5;
  fVar23 = fVar9 * fVar23 - fVar18 * fVar7;
  fVar18 = fVar5 * fVar18 - fVar20 * fVar9;
  *param_1 = fVar8 + fVar18;
  param_1[1] = fVar10 + fVar23;
  param_1[2] = fVar14 + fVar12;
  param_1[3] = fVar1 + fVar15;
  param_1[4] = fVar2 + fVar17;
  param_1[5] = fVar16 + fVar6;
  param_1[6] = -fVar8 - fVar1;
  param_1[7] = -fVar10 - fVar2;
  param_1[8] = -fVar14 - fVar16;
  param_1[9] = -fVar18 - fVar15;
  param_1[10] = -fVar23 - fVar17;
  param_1[0xb] = -fVar12 - fVar6;
  if (param_6 != (undefined4 *)0x0) {
    uVar4 = FUN_144a7ed88(fVar3,fVar11);
    *param_6 = uVar4;
  }
  return param_1;
}



// FUNCTION 1429b9b73 FUN_1429b9b73 body=1111 status=ok
// SIG undefined FUN_1429b9b73(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b9b73(void)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  FUN_141471170(&DAT_14c993b60,L"p.LevelSetOutputFailedDebugData",&DAT_14c993b5c,
                L"Output debug obj files for level set and mesh when error tolerances are too high")
  ;
  atexit(FUN_1429b7e00);
  local_58 = 0;
  FUN_141471170(&DAT_14c993b78,L"p.LevelSetFailureOnHighError",&DAT_14c993b70,
                L"Set level sets with high error to null in the solver");
  atexit(FUN_1429b7e45);
  local_58 = 0;
  FUN_1415c789c(&DAT_14c993b88,L"p.LevelSetAvgDistErrorTolerance",&DAT_14c75f1b0,
                L"Error tolerance for average distance between the triangles and generated levelset.  Note this is a fraction of the average bounding box dimensions."
               );
  atexit(FUN_1429b7e8a);
  local_58 = 0;
  FUN_1415c789c(&DAT_14c993b98,L"p.LevelSetMaxDistErrorTolerance",&DAT_14c75f1b4,
                L"Max error for the highest error triangle generated from a levelset.  Note this is a fraction of the average bounding box dimensions."
               );
  atexit(FUN_1429b7ecf);
  local_58 = 0;
  FUN_1415c789c(&DAT_14c993ba8,L"p.LevelSetAvgAngleErrorTolerance",&DAT_14c75f1b8,
                L"Average error in of the mesh normal and computed normal on the level set.");
  atexit(FUN_1429b7f14);
  local_58 = 0;
  FUN_141471170(&DAT_14c993bb8,L"p.LevelsetOverlapSphereSamples",&DAT_14c75f1bc,
                L"Number of spiral points to generate for levelset-sphere overlaps");
  atexit(FUN_1429b7f59);
  local_58 = 0;
  FUN_141471170(&DAT_14c993bc8,L"p.LevelsetOverlapCapsuleSamples",&DAT_14c75f1c0,
                L"Number of spiral points to generate for levelset-capsule overlaps");
  atexit(FUN_1429b7f9e);
  local_58 = 0;
  FUN_141471170(&DAT_14c993be0,L"p.Chaos.LinearSystem.Preconditioner",&DAT_14c993bd8,
                L"0 = Diagonal, 1 = IncompleteCholesky");
  atexit(FUN_1429b8322);
  local_44._0_1_ = 1;
  local_58 = 1;
  FUN_140bd5914(&DAT_14c993bf0,L"p.Chaos.NewtonEvolution.UseNestedParallelFor",&local_44,
                &DAT_149dfb77a);
  atexit(FUN_1429b8367);
  local_44._0_1_ = 1;
  local_58 = 1;
  FUN_140bd5914(&DAT_14c993c08,L"p.Chaos.NewtonEvolution.FastPositionBasedFriction",&local_44,
                &DAT_149dfb77a);
  atexit(FUN_1429b83ac);
  local_44 = CONCAT31(local_44._1_3_,1);
  local_58 = 1;
  FUN_140bd5914(&DAT_14c993c20,L"p.Chaos.NewtonEvolution.UseSmoothTimeStep",&local_44,&DAT_149dfb77a
               );
  atexit(FUN_1429b83f1);
  local_44 = 300;
  local_58 = 1;
  FUN_14078dbce(&DAT_14c993c38,L"p.Chaos.NewtonEvolution.MinParallelBatchSize",&local_44,
                &DAT_149dfb77a);
  atexit(FUN_1429b8436);
  local_44 = local_44 & 0xffffff00;
  local_58 = 1;
  FUN_140bd5914(&DAT_14c993c50,L"p.Chaos.NewtonEvolution.WriteCCDContacts",&local_44,
                L"Write CCD collision contacts and normals potentially causing the CCD collision threads to lock, allowing for debugging of these contacts."
               );
  atexit(FUN_1429b847b);
  local_44 = local_44 & 0xffffff00;
  local_58 = 1;
  FUN_140bd5914(&DAT_14c993c68,L"p.Chaos.NewtonEvolution.ParalleIntegrate",&local_44,
                L"Run the integration step in parallel for.");
  atexit(FUN_1429b84c0);
  local_58 = 0;
  FUN_14153156c(&DAT_14c993c80,L"p.Chaos.Geometry.ForceDeepCopyAccess",&DAT_14c993c90,
                L"Whether we always use a deep copy when modifying particle geometry");
  atexit(FUN_1429b8546);
  DAT_14c993de8 = 0;
  DAT_14c993df0 = 0;
  DAT_14c993df8 = 0;
  _DAT_14c993e00 = 0;
  DAT_14c993e08 = 0;
  _DAT_14c993ca0 = DAT_14c8463d0;
  uRam000000014c993ca8 = DAT_14c8463d8;
  _DAT_14c993cb0 = DAT_14c8463e0;
  uRam000000014c993cb8 = DAT_14c8463e8;
  _DAT_14c993d30 = 0;
  _DAT_14c993cc0 = 0;
  uRam000000014c993cc8 = 0;
  _DAT_14c993cd0 = 0;
  uRam000000014c993cd8 = 0;
  _DAT_14c993ce0 = 0;
  uRam000000014c993ce8 = 0;
  _DAT_14c993cf0 = 0;
  uRam000000014c993cf8 = 0;
  _DAT_14c993d00 = 0;
  uRam000000014c993d08 = 0;
  _DAT_14c993d10 = 0;
  uRam000000014c993d18 = 0;
  _DAT_14c993d20 = 0;
  uRam000000014c993d28 = 0;
  _DAT_14c993d38 = 0x3ff0000000000000;
  DAT_14c993de0 = 0;
  atexit(FUN_1429b858b);
  _DAT_14c993d60 = 0;
  _DAT_14c993d68 = 0;
  _DAT_14c993d40 = 0;
  uRam000000014c993d48 = 0;
  _DAT_14c993d50 = 0;
  _DAT_14c993d6c = 0x3f800000;
  local_58 = 0;
  FUN_141471170(&DAT_14c993d88,L"p.Chaos.AxialSpring.ParallelConstraintCount",&DAT_14c75f1c4,
                L"If we have more constraints than this, use parallel-for in Apply.");
  atexit(FUN_1429b8967);
  local_58 = 0;
  FUN_141471170(&DAT_14c993d98,L"p.Chaos.Bending.ParallelConstraintCount",&DAT_14c75f1c8,
                L"If we have more constraints than this, use parallel-for in Apply.");
  atexit(FUN_1429b8efe);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429b9fcc FUN_1429b9fcc body=69 status=ok
// SIG undefined FUN_1429b9fcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429b9fcc(void)

{
  _DAT_14c993ff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba00e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c993ff8,1);
  return;
}



// FUNCTION 1429ba011 FUN_1429ba011 body=69 status=ok
// SIG undefined FUN_1429ba011(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba011(void)

{
  _DAT_14c994000 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994008,1);
  return;
}



// FUNCTION 1429ba056 FUN_1429ba056 body=69 status=ok
// SIG undefined FUN_1429ba056(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba056(void)

{
  _DAT_14c994010 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994018,1);
  return;
}



// FUNCTION 1429ba09b FUN_1429ba09b body=69 status=ok
// SIG undefined FUN_1429ba09b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba09b(void)

{
  _DAT_14c994020 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba0dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994028,1);
  return;
}



// FUNCTION 1429ba0e0 FUN_1429ba0e0 body=69 status=ok
// SIG undefined FUN_1429ba0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba0e0(void)

{
  _DAT_14c994030 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba122. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994038,1);
  return;
}



// FUNCTION 1429ba125 FUN_1429ba125 body=69 status=ok
// SIG undefined FUN_1429ba125(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba125(void)

{
  _DAT_14c994040 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba167. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994048,1);
  return;
}



// FUNCTION 1429ba16a FUN_1429ba16a body=69 status=ok
// SIG undefined FUN_1429ba16a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba16a(void)

{
  _DAT_14c994050 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994058,1);
  return;
}



// FUNCTION 1429ba1af FUN_1429ba1af body=69 status=ok
// SIG undefined FUN_1429ba1af(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba1af(void)

{
  _DAT_14c994060 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994068,1);
  return;
}



// FUNCTION 1429ba1f4 FUN_1429ba1f4 body=69 status=ok
// SIG undefined FUN_1429ba1f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba1f4(void)

{
  _DAT_14c994078 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba236. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994080,1);
  return;
}



// FUNCTION 1429ba239 FUN_1429ba239 body=69 status=ok
// SIG undefined FUN_1429ba239(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba239(void)

{
  _DAT_14c994090 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba27b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994098,1);
  return;
}



// FUNCTION 1429ba27e FUN_1429ba27e body=69 status=ok
// SIG undefined FUN_1429ba27e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba27e(void)

{
  _DAT_14c9940a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9940a8,1);
  return;
}



// FUNCTION 1429ba2c3 FUN_1429ba2c3 body=69 status=ok
// SIG undefined FUN_1429ba2c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba2c3(void)

{
  _DAT_14c9940b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba305. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9940c0,1);
  return;
}



// FUNCTION 1429ba308 FUN_1429ba308 body=69 status=ok
// SIG undefined FUN_1429ba308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba308(void)

{
  _DAT_14c9940d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba34a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9940d8,1);
  return;
}



// FUNCTION 1429ba34d FUN_1429ba34d body=69 status=ok
// SIG undefined FUN_1429ba34d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba34d(void)

{
  _DAT_14c9940e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9940e8,1);
  return;
}



// FUNCTION 1429ba392 FUN_1429ba392 body=69 status=ok
// SIG undefined FUN_1429ba392(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba392(void)

{
  _DAT_14c9940f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba3d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994100,1);
  return;
}



// FUNCTION 1429ba3d7 FUN_1429ba3d7 body=69 status=ok
// SIG undefined FUN_1429ba3d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba3d7(void)

{
  _DAT_14c994108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994110,1);
  return;
}



// FUNCTION 1429ba41c FUN_1429ba41c body=69 status=ok
// SIG undefined FUN_1429ba41c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba41c(void)

{
  _DAT_14c994118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba45e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994120,1);
  return;
}



// FUNCTION 1429ba461 FUN_1429ba461 body=69 status=ok
// SIG undefined FUN_1429ba461(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ba461(void)

{
  _DAT_14c994130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ba4a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994138,1);
  return;
}



// FUNCTION 1429ba4a6 FUN_1429ba4a6 body=802 status=ok
// SIG undefined FUN_1429ba4a6(void)

void FUN_1429ba4a6(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8 [13];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  iVar3 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x58);
    lVar16 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar16);
      if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x375) & 1) != 0)) {
        plVar6 = *(longlong **)(lVar5 + 0xe0);
        bVar8 = *(byte *)((longlong)plVar6 + 0xc) < 2 || plVar6 == (longlong *)0x0;
        lVar10 = *plVar6;
        lVar11 = (longlong)(int)plVar6[1];
        if (bVar8) {
LAB_1429ba587:
          lVar9 = 0x48;
        }
        else {
          cVar2 = *(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xb + lVar11 * 0x10);
          lVar9 = 0x548;
          if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_1429ba587;
        }
        lVar14 = lVar11 * 0x10;
        if (bVar8) {
LAB_1429ba5b7:
          lVar15 = 0x28;
        }
        else {
          cVar2 = *(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xb + lVar14);
          lVar15 = 0x530;
          if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_1429ba5b7;
        }
        lVar9 = *(longlong *)(lVar10 + lVar9);
        dVar7 = (double)*(float *)(lVar9 + 0xc + lVar14);
        plVar6 = *(longlong **)(lVar5 + 0xe8);
        dVar17 = (double)*(float *)(lVar9 + 4 + lVar14);
        local_148._8_4_ = SUB84(dVar17,0);
        local_148._0_8_ = (double)*(float *)(lVar9 + lVar14);
        local_148._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        local_138._8_4_ = SUB84(dVar7,0);
        local_138._0_8_ = (double)*(float *)(lVar9 + 8 + lVar14);
        local_138._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        puVar1 = (undefined4 *)(*(longlong *)(lVar10 + lVar15) + lVar11 * 0x18);
        local_128 = *puVar1;
        uStack_124 = puVar1[1];
        uStack_120 = puVar1[2];
        uStack_11c = puVar1[3];
        local_118 = *(undefined8 *)(*(longlong *)(lVar10 + lVar15) + 0x10 + lVar11 * 0x18);
        uStack_110 = 0;
        local_108 = 0x3ff0000000000000;
        uStack_100 = 0x3ff0000000000000;
        local_f8 = 0x3ff0000000000000;
        uStack_f0 = 0;
        FUN_1447dc19e(lVar5 + 0x20,local_e8,local_148);
        bVar8 = *(byte *)((longlong)plVar6 + 0xc) < 2 || plVar6 == (longlong *)0x0;
        lVar10 = *plVar6;
        lVar11 = (longlong)(int)plVar6[1];
        if (bVar8) {
LAB_1429ba687:
          lVar9 = 0x48;
        }
        else {
          cVar2 = *(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xb + lVar11 * 0x10);
          lVar9 = 0x548;
          if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_1429ba687;
        }
        lVar9 = *(longlong *)(lVar10 + lVar9);
        lVar14 = lVar11 * 0x10;
        dVar7 = (double)*(float *)(lVar9 + 0xc + lVar14);
        dVar17 = (double)*(float *)(lVar9 + 4 + lVar14);
        if (bVar8) {
LAB_1429ba6e0:
          lVar15 = 0x28;
        }
        else {
          cVar2 = *(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xb + lVar14);
          lVar15 = 0x530;
          if ((cVar2 != '\x01') && (cVar2 != '\x04')) goto LAB_1429ba6e0;
        }
        local_1a8._8_4_ = SUB84(dVar17,0);
        local_1a8._0_8_ = (double)*(float *)(lVar9 + lVar14);
        local_1a8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
        local_198._8_4_ = SUB84(dVar7,0);
        local_198._0_8_ = (double)*(float *)(lVar9 + 8 + lVar14);
        local_198._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        puVar1 = (undefined4 *)(*(longlong *)(lVar10 + lVar15) + lVar11 * 0x18);
        local_188 = *puVar1;
        uStack_184 = puVar1[1];
        uStack_180 = puVar1[2];
        uStack_17c = puVar1[3];
        local_178 = *(undefined8 *)(*(longlong *)(lVar10 + lVar15) + 0x10 + lVar11 * 0x18);
        uStack_170 = 0;
        local_168 = 0x3ff0000000000000;
        uStack_160 = 0x3ff0000000000000;
        local_158 = 0x3ff0000000000000;
        uStack_150 = 0;
        FUN_1447dc19e(lVar5 + 0x80,local_148,local_1a8);
        *(undefined4 *)(lVar5 + 300) = 0;
        puVar12 = local_e8;
        puVar13 = (undefined8 *)(lVar5 + 0x170);
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        puVar12 = (undefined8 *)local_148;
        puVar13 = (undefined8 *)(lVar5 + 0x1d0);
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar13 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar13 = puVar13 + 1;
        }
        FUN_1449c337b(lVar5,local_e8,local_148,param_2);
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar3 * 8 != lVar16);
  }
  if ((local_80 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429ba7ca FUN_1429ba7ca body=1912 status=ok
// SIG undefined FUN_1429ba7ca(void)

void FUN_1429ba7ca(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  longlong *plVar27;
  bool bVar28;
  float fVar29;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong *local_360;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong lStack_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*(char *)(param_1 + 0xc0) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_388);
  }
  local_360 = (longlong *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = 0;
  local_368 = param_1;
  if (*(int *)(param_1 + 0x94) < 0) {
    FUN_146ded776(local_360);
  }
  cVar4 = DAT_14c75f2d8;
  lVar9 = local_368;
  local_358 = param_2;
  if ((longlong)*(int *)(param_2 + 0xb8) != 0) {
    plVar14 = *(longlong **)(param_2 + 0xb0);
    plVar6 = plVar14 + *(int *)(param_2 + 0xb8);
    local_350 = (longlong)*(int *)(local_368 + 0x18) << 4;
    plVar8 = local_360;
    do {
      lVar10 = *plVar14;
      if ((*(byte *)(lVar10 + 0x90) & 8) == 0) {
        lVar26 = lVar10 + 0x10;
        if (*(longlong *)(lVar10 + 0x60) != 0) {
          lVar26 = *(longlong *)(lVar10 + 0x60);
        }
        lVar10 = (longlong)*(int *)(lVar26 + 8 + local_350);
        if (lVar10 != 0) {
          lVar26 = *(longlong *)(lVar26 + local_350);
          lVar24 = 0;
          do {
            lVar1 = **(longlong **)(lVar26 + lVar24);
            if (((cVar4 == '\0') || ((*(ushort *)(lVar1 + 0x374) & 0x102) != 0)) ||
               (*(int *)(lVar1 + 0x14c) < *(int *)(lVar9 + 0x78))) {
              iVar16 = *(int *)(lVar9 + 0x90);
              *(uint *)(lVar9 + 0x90) = iVar16 + 1U;
              if (*(uint *)(lVar9 + 0x94) < iVar16 + 1U) {
                FUN_1462863f6(plVar8,iVar16);
                lVar9 = local_368;
                plVar8 = local_360;
              }
              *(longlong *)(*plVar8 + (longlong)iVar16 * 8) = lVar1;
            }
            lVar24 = lVar24 + 8;
          } while (lVar10 * 8 != lVar24);
        }
      }
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar6);
  }
  lVar10 = local_358;
  iVar16 = *(int *)(lVar9 + 0x90);
  if ((longlong)iVar16 != 0) {
    lVar9 = *(longlong *)(local_368 + 0x88);
    lVar26 = 0;
    do {
      FUN_1400d2a94(lVar10,*(undefined8 *)(lVar9 + lVar26));
      lVar26 = lVar26 + 8;
    } while ((longlong)iVar16 * 8 != lVar26);
  }
  *(undefined4 *)(local_368 + 0x90) = 0;
  if (*(int *)(local_368 + 0x94) < 0) {
    FUN_146ded776(local_360);
  }
  iVar16 = *(int *)(local_368 + 0x60);
  lVar9 = local_368;
  if ((longlong)iVar16 != 0) {
    lVar10 = *(longlong *)(local_368 + 0x58);
    lVar26 = 0;
    plVar6 = local_360;
    do {
      lVar24 = *(longlong *)(lVar10 + lVar26);
      if ((*(longlong *)(lVar24 + 0x10) == 0) && ((*(ushort *)(lVar24 + 0x374) & 0x102) == 0)) {
        iVar12 = *(int *)(lVar9 + 0x90);
        *(uint *)(lVar9 + 0x90) = iVar12 + 1U;
        if (*(uint *)(lVar9 + 0x94) < iVar12 + 1U) {
          FUN_1462863f6(plVar6,iVar12);
          plVar6 = local_360;
          lVar9 = local_368;
        }
        *(longlong *)(*plVar6 + (longlong)iVar12 * 8) = lVar24;
      }
      lVar26 = lVar26 + 8;
    } while ((longlong)iVar16 * 8 != lVar26);
  }
  uVar21 = *(uint *)(lVar9 + 0x90);
  lVar10 = *(longlong *)(lVar9 + 0x88);
  if (1 < (int)uVar21 && *(char *)(lVar9 + 0xc4) == '\0') {
    memset(local_338,0,0x2f0);
    lStack_340 = lVar10 + (ulonglong)uVar21 * 8 + -8;
    local_348 = lVar10;
    fVar29 = logf((float)(int)uVar21);
    local_338[0] = (int)(longlong)(fVar29 + fVar29);
    plVar6 = &local_348;
    do {
      plVar8 = (longlong *)*plVar6;
      plVar14 = (longlong *)plVar6[1];
      iVar16 = (int)plVar6[2];
      iVar12 = (int)((ulonglong)((longlong)plVar14 - (longlong)plVar8) >> 3);
      uVar22 = (ulonglong)(iVar12 + 1);
      plVar11 = plVar8;
      plVar20 = plVar14;
      if (iVar16 != 0) {
LAB_1429baa65:
        if (8 < (int)(uint)uVar22) {
          uVar21 = (uint)uVar22 >> 1;
          lVar9 = plVar8[uVar21];
          plVar8[uVar21] = *plVar8;
          *plVar8 = lVar9;
          plVar23 = plVar14 + 1;
          plVar7 = plVar8;
          do {
            plVar5 = plVar7 + 1;
            plVar15 = plVar7 + 1;
            do {
              plVar27 = plVar15;
              plVar7 = plVar5;
              if (plVar14 < plVar7) break;
              uVar22 = *(ulonglong *)(*plVar8 + 0x158);
              uVar13 = *(ulonglong *)(*plVar7 + 0x158);
              bVar28 = uVar22 < uVar13;
              if (uVar22 == uVar13) {
                bVar28 = *(ulonglong *)(*plVar8 + 0x160) < *(ulonglong *)(*plVar7 + 0x160);
              }
              plVar5 = plVar7 + 1;
              plVar15 = plVar27 + 1;
            } while (!bVar28);
            plVar5 = plVar23 + -2;
            do {
              plVar15 = plVar23;
              plVar25 = plVar5;
              plVar23 = plVar15 + -1;
              if (plVar23 <= plVar8) break;
              uVar22 = *(ulonglong *)(*plVar23 + 0x158);
              uVar13 = *(ulonglong *)(*plVar8 + 0x158);
              bVar28 = uVar22 < uVar13;
              if (uVar22 == uVar13) {
                bVar28 = *(ulonglong *)(*plVar23 + 0x160) < *(ulonglong *)(*plVar8 + 0x160);
              }
              plVar5 = plVar25 + -1;
            } while (!bVar28);
            if (plVar23 < plVar7) goto LAB_1429bab43;
            lVar9 = *plVar7;
            *plVar7 = *plVar23;
            *plVar23 = lVar9;
          } while( true );
        }
        if (plVar8 < plVar14) {
          do {
            plVar11 = plVar8;
            if (plVar8 + 1 <= plVar14) {
              plVar20 = plVar8 + 1;
              lVar9 = *plVar8;
              do {
                lVar10 = *plVar20;
                bVar28 = *(ulonglong *)(lVar9 + 0x158) < *(ulonglong *)(lVar10 + 0x158);
                if (*(ulonglong *)(lVar9 + 0x158) == *(ulonglong *)(lVar10 + 0x158)) {
                  bVar28 = *(ulonglong *)(lVar9 + 0x160) < *(ulonglong *)(lVar10 + 0x160);
                }
                plVar23 = plVar20;
                if (!bVar28) {
                  lVar10 = lVar9;
                  plVar23 = plVar11;
                }
                plVar11 = plVar23;
                plVar20 = plVar20 + 1;
                lVar9 = lVar10;
              } while (plVar20 <= plVar14);
            }
            lVar9 = *plVar11;
            *plVar11 = *plVar14;
            *plVar14 = lVar9;
            plVar14 = plVar14 + -1;
          } while (plVar8 < plVar14);
        }
        goto LAB_1429bae49;
      }
LAB_1429babd6:
      iVar16 = (int)uVar22;
      if (iVar16 != 0) {
        iVar12 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
        iVar19 = iVar12;
joined_r0x0001429babfd:
        do {
          iVar18 = iVar12 * 2 + 1;
          if (iVar18 < iVar16) {
            iVar17 = iVar12 * 2 + 2;
            if (iVar17 < iVar16) {
              uVar13 = *(ulonglong *)(plVar8[iVar17] + 0x158);
              uVar2 = *(ulonglong *)(plVar8[iVar18] + 0x158);
              bVar28 = uVar13 < uVar2;
              if (uVar13 == uVar2) {
                bVar28 = *(ulonglong *)(plVar8[iVar17] + 0x160) <
                         *(ulonglong *)(plVar8[iVar18] + 0x160);
              }
              if (!bVar28) {
                iVar18 = iVar17;
              }
            }
            lVar9 = plVar8[iVar18];
            lVar10 = plVar8[iVar12];
            bVar28 = *(ulonglong *)(lVar10 + 0x158) < *(ulonglong *)(lVar9 + 0x158);
            if (*(ulonglong *)(lVar10 + 0x158) == *(ulonglong *)(lVar9 + 0x158)) {
              bVar28 = *(ulonglong *)(lVar10 + 0x160) < *(ulonglong *)(lVar9 + 0x160);
            }
            if (bVar28) {
              plVar8[iVar12] = lVar9;
              plVar8[iVar18] = lVar10;
              iVar12 = iVar18;
              goto joined_r0x0001429babfd;
            }
          }
          bVar28 = iVar19 != 0;
          iVar12 = iVar19 + -1;
          iVar19 = iVar12;
        } while (bVar28);
        if (1 < iVar16) {
          lVar9 = *plVar8;
          *plVar8 = plVar8[uVar22 - 1];
          plVar8[uVar22 - 1] = lVar9;
          if (iVar16 != 2) {
            do {
              uVar13 = uVar22 - 1;
              iVar16 = 0;
              iVar19 = 1;
              iVar12 = 0;
              do {
                iVar16 = iVar16 + 2;
                iVar18 = iVar19;
                if ((longlong)iVar16 < (longlong)uVar13) {
                  uVar2 = *(ulonglong *)(plVar8[iVar16] + 0x158);
                  uVar3 = *(ulonglong *)(plVar8[iVar19] + 0x158);
                  bVar28 = uVar2 < uVar3;
                  if (uVar2 == uVar3) {
                    bVar28 = *(ulonglong *)(plVar8[iVar16] + 0x160) <
                             *(ulonglong *)(plVar8[iVar19] + 0x160);
                  }
                  if (!bVar28) {
                    iVar18 = iVar16;
                  }
                }
                lVar9 = plVar8[iVar18];
                lVar10 = plVar8[iVar12];
                bVar28 = *(ulonglong *)(lVar10 + 0x158) < *(ulonglong *)(lVar9 + 0x158);
                if (*(ulonglong *)(lVar10 + 0x158) == *(ulonglong *)(lVar9 + 0x158)) {
                  bVar28 = *(ulonglong *)(lVar10 + 0x160) < *(ulonglong *)(lVar9 + 0x160);
                }
                if (!bVar28) break;
                plVar8[iVar12] = lVar9;
                plVar8[iVar18] = lVar10;
                iVar16 = iVar18 * 2;
                iVar19 = iVar18 * 2 + 1;
                iVar12 = iVar18;
              } while ((longlong)iVar19 < (longlong)uVar13);
              lVar9 = *plVar8;
              *plVar8 = plVar8[uVar22 - 2];
              plVar8[uVar22 - 2] = lVar9;
              uVar22 = uVar13;
            } while (2 < uVar13);
          }
        }
      }
LAB_1429bae49:
      plVar6 = plVar6 + -3;
    } while (&local_348 <= plVar6);
    uVar21 = *(uint *)(local_368 + 0x90);
    lVar10 = *(longlong *)(local_368 + 0x88);
    lVar9 = local_368;
  }
  lVar26 = local_358;
  if (uVar21 != 0) {
    lVar24 = 0;
    do {
      lVar1 = *(longlong *)(lVar10 + lVar24);
      local_348 = *(longlong *)(lVar1 + 0xe0);
      lStack_340 = *(longlong *)(lVar1 + 0xe8);
      FUN_14081f6d4(lVar26,*(undefined4 *)(lVar9 + 0x18),lVar1,&local_348);
      lVar24 = lVar24 + 8;
      lVar9 = local_368;
    } while ((longlong)(int)uVar21 * 8 != lVar24);
  }
  *(undefined4 *)(lVar9 + 0x90) = 0;
  if (*(int *)(lVar9 + 0x94) < 0) {
    FUN_146ded776(local_360);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1429bab43:
  lVar9 = *plVar8;
  *plVar8 = *plVar23;
  *plVar23 = lVar9;
  iVar16 = iVar16 + -1;
  plVar15 = plVar15 + -2;
  if ((longlong)plVar25 - (longlong)plVar11 < (longlong)plVar20 - (longlong)plVar27) {
    if (plVar7 < plVar14) {
      *plVar6 = (longlong)plVar7;
      plVar6[1] = (longlong)plVar14;
      *(int *)(plVar6 + 2) = iVar16;
      plVar6 = plVar6 + 3;
    }
    plVar27 = plVar8;
    if (plVar23 <= plVar8 + 1) goto LAB_1429bae49;
  }
  else {
    if (plVar8 + 1 < plVar23) {
      *plVar6 = (longlong)plVar8;
      plVar6[1] = (longlong)plVar15;
      *(int *)(plVar6 + 2) = iVar16;
      plVar6 = plVar6 + 3;
    }
    plVar8 = plVar7;
    plVar15 = plVar14;
    plVar25 = plVar14;
    if (plVar14 <= plVar7) goto LAB_1429bae49;
  }
  iVar12 = (int)((ulonglong)((longlong)plVar25 - (longlong)plVar27) >> 3);
  uVar22 = (ulonglong)(iVar12 + 1);
  plVar14 = plVar15;
  plVar11 = plVar27;
  plVar20 = plVar25;
  if (iVar16 == 0) goto LAB_1429babd6;
  goto LAB_1429baa65;
}



// FUNCTION 1429baf60 FUN_1429baf60 body=1339 status=ok
// SIG undefined FUN_1429baf60(void)

void FUN_1429baf60(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,longlong param_8)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  int local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int *local_98;
  int *piStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = *(int *)(param_4 + 0x10);
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    if (*(int *)(param_1 + 0x94) < 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      FUN_1408e9306(param_1 + 0x88,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    if (*(int *)(param_1 + 0xa4) < 0) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      FUN_140163800(param_1 + 0x98,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    if (*(int *)(param_1 + 0xb4) < 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      FUN_14475e67c(param_1 + 0xa8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (*(int *)(param_1 + 0x144) < 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      FUN_146def604(param_1 + 0x138);
    }
    else {
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    if (*(int *)(param_1 + 0x154) < 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      FUN_14481578e(param_1 + 0x148,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    if (*(int *)(param_1 + 0x164) < 0) {
      *(undefined4 *)(param_1 + 0x160) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_148);
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x170);
    local_f8 = param_2;
    if (iVar4 != *(int *)(param_1 + 0x17c)) {
      local_a8 = 0;
      piStack_90 = (int *)0x0;
      local_88 = 0;
      uStack_80 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      uStack_a0 = 0x8000000000;
      local_98 = (int *)&DAT_ffffffff;
      FUN_146de7c64(param_1 + 0x168,&local_c8);
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1407b1382(&local_c8);
      iVar4 = *(int *)(param_1 + 0x17c);
    }
    *(bool *)(param_1 + 0x180) =
         iVar2 == *(int *)(param_8 + 8) &&
         *(int *)(param_1 + 0x178) + iVar4 == *(int *)(param_7 + 8);
    iVar2 = *(int *)(param_4 + 0x2d0);
    if (*(int *)(param_4 + 0x2d0) == 0) {
      iVar2 = iVar4;
    }
    local_100 = param_1 + 0x88;
    iVar3 = iVar2 * 3;
    FUN_1412883ce(local_100,iVar3,1);
    local_108 = param_1 + 0x98;
    FUN_140aacae8(local_108,iVar3,1);
    local_120 = (longlong *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb0);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) {
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0xb0) = iVar3;
        FUN_1403ed828(local_120);
      }
    }
    else {
      *(int *)(param_1 + 0xb0) = iVar3;
      if ((uint)(*(int *)(param_1 + 0xb4) - iVar4) < (uint)(iVar3 - iVar4)) {
        FUN_1401c3474(local_120);
      }
    }
    local_118 = param_1 + 0x138;
    FUN_146de7d06(local_118,iVar3);
    plVar1 = (longlong *)(param_1 + 0x148);
    iVar4 = *(int *)(param_1 + 0x150);
    if (iVar4 < iVar2) {
      *(int *)(param_1 + 0x150) = iVar2;
      if ((uint)(*(int *)(param_1 + 0x154) - iVar4) < (uint)(iVar2 - iVar4)) {
        FUN_1446f48e2(plVar1);
      }
    }
    else {
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (iVar2 < iVar4) {
        *(int *)(param_1 + 0x150) = iVar2;
        FUN_14479f406(plVar1);
      }
    }
    local_110 = plVar1;
    FUN_141087922(param_1 + 0x158,iVar2,1);
    local_d8 = 0;
    local_cc = 0;
    local_d0 = 0;
    if (*(undefined8 **)(param_1 + 0xc0) == (undefined8 *)0x0) {
      local_e0 = 0;
    }
    else {
      local_d8 = *(int *)(param_1 + 0x17c) + *(int *)(param_1 + 0x178);
      local_e0 = **(undefined8 **)(param_1 + 0xc0);
    }
    local_70 = &local_e0;
    local_e8 = &local_c8;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,param_3);
    uStack_b0 = param_5;
    local_a8 = param_6;
    uStack_a0 = local_f8;
    local_98 = &local_cc;
    piStack_90 = &local_d0;
    local_88 = CONCAT44(local_88._4_4_,3);
    uStack_80 = param_7;
    local_78 = param_8;
    local_f0 = &LAB_146defe50;
    local_c8 = param_1;
    local_b8 = param_4;
    FUN_1400bd65e(iVar2,&local_f0,0);
    iVar4 = local_cc;
    FUN_146d845a0(local_100,local_cc,0);
    FUN_140627580(local_108,iVar4,0);
    plVar1 = local_120;
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 < iVar4) {
      *(int *)(param_1 + 0xb0) = iVar4;
      if ((uint)(*(int *)(param_1 + 0xb4) - iVar2) < (uint)(iVar4 - iVar2)) {
        FUN_1401c3474(local_120);
      }
      memset((void *)((longlong)iVar2 + *plVar1),0,(longlong)(iVar4 - iVar2));
    }
    else {
      if (iVar4 < 0) goto LAB_1429bb4b1;
      if (iVar4 < iVar2) {
        *(int *)(param_1 + 0xb0) = iVar4;
      }
    }
    FUN_146de7d4e(local_118);
    iVar4 = local_d0;
    plVar1 = local_110;
    iVar2 = *(int *)(param_1 + 0x150);
    if (iVar2 < local_d0) {
      uVar5 = local_d0 - iVar2;
      *(int *)(param_1 + 0x150) = local_d0;
      if ((uint)(*(int *)(param_1 + 0x154) - iVar2) < uVar5) {
        FUN_1446f48e2(local_110);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(longlong)(int)uVar5 << 2);
    }
    else {
      if (local_d0 < 0) {
LAB_1429bb4b1:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (local_d0 < iVar2) {
        *(int *)(param_1 + 0x150) = local_d0;
      }
    }
    FUN_146d84902(param_1 + 0x158,iVar4,0);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429bb4c2 FUN_1429bb4c2 body=1345 status=ok
// SIG undefined FUN_1429bb4c2(void)

void FUN_1429bb4c2(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,ulonglong param_7,longlong param_8)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_148 [40];
  longlong *local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined4 local_d8;
  int local_d0;
  int local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  int *local_98;
  int *piStack_90;
  longlong local_88;
  ulonglong uStack_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar2 = *(int *)(param_4 + 0x10);
  if ((iVar2 == 0) && (*(char *)(param_1 + 0x40) == '\0')) {
    if (*(int *)(param_1 + 0x94) < 0) {
      *(undefined4 *)(param_1 + 0x90) = 0;
      FUN_1408e9306(param_1 + 0x88,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x90) = 0;
    }
    if (*(int *)(param_1 + 0xa4) < 0) {
      *(undefined4 *)(param_1 + 0xa0) = 0;
      FUN_140163800(param_1 + 0x98,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xa0) = 0;
    }
    if (*(int *)(param_1 + 0xb4) < 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      FUN_14475e67c(param_1 + 0xa8,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    if (*(int *)(param_1 + 0x144) < 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      FUN_146def604(param_1 + 0x138);
    }
    else {
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    if (*(int *)(param_1 + 0x154) < 0) {
      *(undefined4 *)(param_1 + 0x150) = 0;
      FUN_14481578e(param_1 + 0x148,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    if (*(int *)(param_1 + 0x164) < 0) {
      *(undefined4 *)(param_1 + 0x160) = 0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_148);
    }
    *(undefined4 *)(param_1 + 0x160) = 0;
  }
  else {
    local_f8 = param_6;
    iVar4 = *(int *)(param_1 + 0x170);
    if (iVar4 != *(int *)(param_1 + 0x17c)) {
      local_a8 = 0;
      piStack_90 = (int *)0x0;
      local_88 = 0;
      uStack_80 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      lStack_a0 = 0x8000000000;
      local_98 = (int *)&DAT_ffffffff;
      FUN_146de7c64(param_1 + 0x168,&local_c8);
      uStack_80 = uStack_80 & 0xffffffff00000000;
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      FUN_1407b1382(&local_c8);
      iVar4 = *(int *)(param_1 + 0x17c);
    }
    *(bool *)(param_1 + 0x180) =
         iVar2 == *(int *)(param_8 + 8) &&
         *(int *)(param_1 + 0x178) + iVar4 == *(int *)(param_7 + 8);
    iVar2 = *(int *)(param_4 + 0x2d0);
    if (*(int *)(param_4 + 0x2d0) == 0) {
      iVar2 = iVar4;
    }
    local_100 = param_1 + 0x88;
    iVar3 = iVar2 * 3;
    FUN_1412883ce(local_100,iVar3,1);
    local_108 = param_1 + 0x98;
    FUN_140aacae8(local_108,iVar3,1);
    local_120 = (longlong *)(param_1 + 0xa8);
    iVar4 = *(int *)(param_1 + 0xb0);
    if (iVar3 - iVar4 == 0 || iVar3 < iVar4) {
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3);
      }
      if (iVar3 < iVar4) {
        *(int *)(param_1 + 0xb0) = iVar3;
        FUN_1403ed828(local_120);
      }
    }
    else {
      *(int *)(param_1 + 0xb0) = iVar3;
      if ((uint)(*(int *)(param_1 + 0xb4) - iVar4) < (uint)(iVar3 - iVar4)) {
        FUN_1401c3474(local_120);
      }
    }
    local_118 = param_1 + 0x138;
    FUN_146de7d06(local_118,iVar3);
    plVar1 = (longlong *)(param_1 + 0x148);
    iVar4 = *(int *)(param_1 + 0x150);
    if (iVar4 < iVar2) {
      *(int *)(param_1 + 0x150) = iVar2;
      if ((uint)(*(int *)(param_1 + 0x154) - iVar4) < (uint)(iVar2 - iVar4)) {
        FUN_1446f48e2(plVar1);
      }
    }
    else {
      if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar2);
      }
      if (iVar2 < iVar4) {
        *(int *)(param_1 + 0x150) = iVar2;
        FUN_14479f406(plVar1);
      }
    }
    local_110 = plVar1;
    FUN_141087922(param_1 + 0x158,iVar2,1);
    local_d8 = 0;
    local_cc = 0;
    local_d0 = 0;
    if (*(longlong **)(param_1 + 0xc0) == (longlong *)0x0) {
      local_e0 = 0;
    }
    else {
      local_d8 = *(undefined4 *)(param_2 + 0x14);
      local_e0 = (longlong)*(int *)(param_2 + 0x10) * 0xc + **(longlong **)(param_1 + 0xc0);
    }
    local_70 = &local_e0;
    local_e8 = &local_c8;
    uStack_c0 = CONCAT44(uStack_c0._4_4_,param_3);
    uStack_b0 = param_5;
    local_a8 = local_f8;
    local_98 = &local_cc;
    piStack_90 = &local_d0;
    local_88 = CONCAT44(local_88._4_4_,3);
    uStack_80 = param_7;
    local_78 = param_8;
    local_f0 = &LAB_146df2266;
    local_c8 = param_1;
    local_b8 = param_4;
    lStack_a0 = param_2;
    FUN_1400bd65e(iVar2,&local_f0,0);
    iVar4 = local_cc;
    FUN_146d845a0(local_100,local_cc,0);
    FUN_140627580(local_108,iVar4,0);
    plVar1 = local_120;
    iVar2 = *(int *)(param_1 + 0xb0);
    if (iVar2 < iVar4) {
      *(int *)(param_1 + 0xb0) = iVar4;
      if ((uint)(*(int *)(param_1 + 0xb4) - iVar2) < (uint)(iVar4 - iVar2)) {
        FUN_1401c3474(local_120);
      }
      memset((void *)((longlong)iVar2 + *plVar1),0,(longlong)(iVar4 - iVar2));
    }
    else {
      if (iVar4 < 0) goto LAB_1429bba19;
      if (iVar4 < iVar2) {
        *(int *)(param_1 + 0xb0) = iVar4;
      }
    }
    FUN_146de7d4e(local_118);
    iVar4 = local_d0;
    plVar1 = local_110;
    iVar2 = *(int *)(param_1 + 0x150);
    if (iVar2 < local_d0) {
      uVar5 = local_d0 - iVar2;
      *(int *)(param_1 + 0x150) = local_d0;
      if ((uint)(*(int *)(param_1 + 0x154) - iVar2) < uVar5) {
        FUN_1446f48e2(local_110);
      }
      memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(longlong)(int)uVar5 << 2);
    }
    else {
      if (local_d0 < 0) {
LAB_1429bba19:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar4);
      }
      if (local_d0 < iVar2) {
        *(int *)(param_1 + 0x150) = local_d0;
      }
    }
    FUN_146d84902(param_1 + 0x158,iVar4,0);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429bba2a FUN_1429bba2a body=2170 status=ok
// SIG undefined FUN_1429bba2a(void)

void FUN_1429bba2a(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  float *pfVar12;
  float *pfVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  iVar15 = *(int *)(param_1 + 0x90);
  if (0 < iVar15) {
    lVar6 = *(longlong *)(param_1 + 0xa8);
    lVar7 = *(longlong *)(param_2 + 0x28);
    lVar8 = *(longlong *)(param_2 + 0xa8);
    pfVar19 = (float *)(*(longlong *)(param_1 + 0x98) + 8);
    piVar11 = (int *)(*(longlong *)(param_1 + 0x88) + 0xc);
    uVar14 = 0;
    do {
      lVar9 = (longlong)piVar11[-3];
      lVar17 = (longlong)piVar11[-2];
      lVar16 = (longlong)piVar11[-1];
      lVar10 = (longlong)*piVar11;
      fVar40 = *(float *)(lVar8 + 0xc + lVar17 * 0x10);
      fVar31 = pfVar19[-2];
      fVar37 = pfVar19[-1];
      fVar36 = *(float *)(lVar8 + 0xc + lVar16 * 0x10);
      fVar27 = *(float *)(lVar8 + 0xc + lVar10 * 0x10);
      fVar1 = *pfVar19;
      fVar39 = fVar27 * fVar1 + fVar40 * fVar31 + fVar36 * fVar37;
      fVar2 = *(float *)(lVar8 + 0xc + lVar9 * 0x10);
      fVar41 = fVar2 + fVar39;
      if (1e-07 < fVar41) {
        pfVar18 = (float *)(lVar17 * 0x10 + lVar8);
        pfVar20 = (float *)(lVar16 * 0x10 + lVar8);
        pfVar12 = (float *)(lVar10 * 0x10 + lVar8);
        fVar21 = (float)FUN_146de7dae(fVar27,uVar14 & 0xffffffff);
        fVar3 = *pfVar18;
        fVar4 = pfVar18[1];
        fVar5 = pfVar18[2];
        fVar28 = pfVar12[2] - fVar5;
        fVar24 = pfVar12[1] - fVar4;
        fVar22 = *pfVar12 - fVar3;
        fVar30 = pfVar20[2] - fVar5;
        fVar23 = pfVar20[1] - fVar4;
        fVar33 = *pfVar20 - fVar3;
        fVar34 = fVar33 * fVar24 - fVar22 * fVar23;
        fVar33 = fVar30 * fVar22 - fVar28 * fVar33;
        fVar22 = fVar23 * fVar28 - fVar30 * fVar24;
        fVar23 = fVar34 * fVar34 + fVar22 * fVar22 + fVar33 * fVar33;
        if (*(char *)(lVar6 + uVar14) == '\x01') {
          if (((fVar23 != 1.0) || (fVar24 = fVar22, fVar30 = fVar34, fVar38 = fVar33, NAN(fVar23)))
             && (fVar24 = (float)DAT_14c846330, fVar30 = DAT_14c846338, fVar38 = DAT_14c846330._4_4_
                , 1e-08 <= fVar23)) {
            fVar23 = 1.0 / SQRT(fVar23);
            fVar24 = fVar22 * fVar23;
            fVar30 = fVar34 * fVar23;
            fVar38 = fVar33 * fVar23;
          }
          fVar28 = -fVar24;
          fVar30 = -fVar30;
          fVar24 = -fVar38;
        }
        else if (((fVar23 != 1.0) ||
                 (fVar28 = fVar22, fVar30 = fVar34, fVar24 = fVar33, NAN(fVar23))) &&
                (fVar28 = (float)DAT_14c846330, fVar30 = DAT_14c846338, fVar24 = DAT_14c846330._4_4_
                , 1e-08 <= fVar23)) {
          fVar23 = 1.0 / SQRT(fVar23);
          fVar28 = fVar22 * fVar23;
          fVar30 = fVar34 * fVar23;
          fVar24 = fVar33 * fVar23;
        }
        pfVar13 = (float *)(lVar9 * 0x10 + lVar8);
        fVar34 = *pfVar12 * fVar1 + *pfVar20 * fVar37 + fVar3 * fVar31;
        fVar33 = pfVar12[1] * fVar1 + pfVar20[1] * fVar37 + fVar4 * fVar31;
        fVar23 = pfVar12[2] * fVar1 + pfVar20[2] * fVar37 + fVar5 * fVar31;
        fVar3 = pfVar13[2];
        fVar4 = *pfVar13;
        fVar5 = pfVar13[1];
        fVar22 = (fVar3 - fVar23) * fVar30 + (fVar4 - fVar34) * fVar28 + (fVar5 - fVar33) * fVar24;
        if (fVar22 <= fVar21) {
          fVar35 = 0.0;
          fVar38 = 0.0;
          if (*(char *)(*(longlong *)(param_1 + 0x138) + uVar14) != '\x01') {
            fVar38 = *(float *)(param_1 + 0x3c);
          }
          fVar21 = fVar21 - fVar22;
          fVar22 = *(float *)(param_1 + 0x38) * fVar21;
          fVar29 = (fVar22 * fVar30) / fVar41;
          fVar25 = (fVar24 * fVar22) / fVar41;
          fVar22 = (fVar28 * fVar22) / fVar41;
          fVar26 = 0.0;
          fVar32 = 0.0;
          if (0.0 < fVar38) {
            fVar39 = fVar2 - fVar39;
            fVar34 = fVar39 * fVar22 +
                     ((fVar4 - *(float *)(lVar7 + lVar9 * 0xc)) -
                     (fVar34 - (*(float *)(lVar7 + lVar10 * 0xc) * fVar1 +
                               *(float *)(lVar7 + lVar16 * 0xc) * fVar37 +
                               *(float *)(lVar7 + lVar17 * 0xc) * fVar31)));
            fVar33 = fVar39 * fVar25 +
                     ((fVar5 - *(float *)(lVar7 + 4 + lVar9 * 0xc)) -
                     (fVar33 - (*(float *)(lVar7 + 4 + lVar10 * 0xc) * fVar1 +
                               *(float *)(lVar7 + 4 + lVar16 * 0xc) * fVar37 +
                               *(float *)(lVar7 + 4 + lVar17 * 0xc) * fVar31)));
            fVar37 = fVar39 * fVar29 +
                     ((fVar3 - *(float *)(lVar7 + 8 + lVar9 * 0xc)) -
                     (fVar23 - (fVar1 * *(float *)(lVar7 + 8 + lVar10 * 0xc) +
                               fVar37 * *(float *)(lVar7 + 8 + lVar16 * 0xc) +
                               fVar31 * *(float *)(lVar7 + 8 + lVar17 * 0xc))));
            fVar31 = fVar37 * fVar30 + fVar34 * fVar28 + fVar24 * fVar33;
            fVar37 = fVar37 - fVar31 * fVar30;
            fVar33 = fVar33 - fVar24 * fVar31;
            fVar34 = fVar34 - fVar28 * fVar31;
            fVar31 = SQRT(fVar37 * fVar37 + fVar34 * fVar34 + fVar33 * fVar33);
            fVar21 = fVar21 * fVar38;
            if (fVar31 <= fVar21) {
              fVar21 = fVar31;
            }
            fVar31 = (float)(-(uint)(fVar31 < 1e-08) & 0x80000000 |
                            ~-(uint)(fVar31 < 1e-08) & (uint)(-fVar21 / fVar31));
            fVar32 = (fVar31 * fVar37) / fVar41;
            fVar26 = (fVar33 * fVar31) / fVar41;
            fVar35 = (fVar34 * fVar31) / fVar41;
          }
          fVar29 = fVar29 + fVar32;
          fVar25 = fVar25 + fVar26;
          fVar22 = fVar22 + fVar35;
          *pfVar13 = fVar4 + fVar2 * fVar22;
          pfVar13[1] = fVar5 + fVar2 * fVar25;
          pfVar13[2] = fVar3 + fVar2 * fVar29;
          fVar40 = fVar40 * pfVar19[-2];
          *pfVar18 = *pfVar18 - fVar22 * fVar40;
          pfVar18[1] = pfVar18[1] - fVar25 * fVar40;
          pfVar18[2] = pfVar18[2] - fVar40 * fVar29;
          fVar36 = fVar36 * pfVar19[-1];
          *pfVar20 = *pfVar20 - fVar22 * fVar36;
          pfVar20[1] = pfVar20[1] - fVar25 * fVar36;
          pfVar20[2] = pfVar20[2] - fVar36 * fVar29;
          fVar27 = fVar27 * *pfVar19;
          *pfVar12 = *pfVar12 - fVar22 * fVar27;
          pfVar12[1] = pfVar12[1] - fVar25 * fVar27;
          pfVar12[2] = pfVar12[2] - fVar27 * fVar29;
          iVar15 = *(int *)(param_1 + 0x90);
        }
      }
      uVar14 = uVar14 + 1;
      pfVar19 = pfVar19 + 3;
      piVar11 = piVar11 + 4;
    } while ((longlong)uVar14 < (longlong)iVar15);
  }
  return;
}



// FUNCTION 1429bc2a4 FUN_1429bc2a4 body=550 status=ok
// SIG undefined FUN_1429bc2a4(void)

void FUN_1429bc2a4(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x28) < 1) || (ABS(*(float *)(param_1 + 0x34)) <= 0.0001)) {
      fVar3 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x44);
      fVar4 = fVar3;
      if (fVar3 <= 0.0001) {
        fVar4 = 0.0001;
      }
      if ((*(int *)(param_1 + 0x70) < 1) || (ABS(*(float *)(param_1 + 0x7c)) <= 0.0001)) {
        FUN_141b03e90(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x28),
                      *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),
                      **(undefined8 **)(param_1 + 0xb8),fVar3,1.0 / fVar4,fVar3 * -10.0,
                      *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x78),iVar1);
      }
      else {
        FUN_141b04070(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x28),
                      *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),
                      **(undefined8 **)(param_1 + 0xb8),fVar3,1.0 / fVar4,fVar3 * -10.0,
                      *(undefined4 *)(param_1 + 0x48),param_1 + 0x78,*(undefined8 *)(param_1 + 0x68)
                      ,*(undefined4 *)(param_1 + 0x178),iVar1);
      }
    }
    else {
      if (*(int *)(param_1 + 0x70) < 1) {
        bVar2 = false;
      }
      else {
        bVar2 = 0.0001 < ABS(*(float *)(param_1 + 0x7c));
      }
      FUN_141b04280(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x28),
                    *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),
                    **(undefined8 **)(param_1 + 0xb8),param_1 + 0x30,*(undefined8 *)(param_1 + 0x20)
                    ,*(undefined4 *)(param_1 + 0x44),0x3f800000,&DAT_41200000,
                    *(undefined4 *)(param_1 + 0x48),bVar2,param_1 + 0x78,
                    *(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x178),iVar1);
    }
  }
  return;
}



// FUNCTION 1429bc4ca FUN_1429bc4ca body=2161 status=ok
// SIG undefined FUN_1429bc4ca(void)

void FUN_1429bc4ca(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  float *pfVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  iVar15 = *(int *)(param_1 + 0x90);
  if (0 < iVar15) {
    lVar17 = (longlong)*(int *)(param_2 + 0x10) * 0x10 +
             *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa8);
    lVar8 = (longlong)*(int *)(param_2 + 0x10) * 0xc +
            *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
    pfVar19 = (float *)(*(longlong *)(param_1 + 0x98) + 8);
    piVar10 = (int *)(*(longlong *)(param_1 + 0x88) + 0xc);
    uVar13 = 0;
    do {
      lVar7 = (longlong)piVar10[-3];
      lVar16 = (longlong)piVar10[-2];
      lVar14 = (longlong)piVar10[-1];
      lVar9 = (longlong)*piVar10;
      fVar40 = *(float *)(lVar17 + 0xc + lVar16 * 0x10);
      fVar31 = pfVar19[-2];
      fVar37 = pfVar19[-1];
      fVar36 = *(float *)(lVar17 + 0xc + lVar14 * 0x10);
      fVar27 = *(float *)(lVar17 + 0xc + lVar9 * 0x10);
      fVar1 = *pfVar19;
      fVar39 = fVar27 * fVar1 + fVar40 * fVar31 + fVar36 * fVar37;
      fVar2 = *(float *)(lVar17 + 0xc + lVar7 * 0x10);
      fVar41 = fVar2 + fVar39;
      if (1e-07 < fVar41) {
        pfVar20 = (float *)(lVar16 * 0x10 + lVar17);
        pfVar18 = (float *)(lVar14 * 0x10 + lVar17);
        pfVar11 = (float *)(lVar9 * 0x10 + lVar17);
        fVar21 = (float)FUN_146de7dae(fVar27,uVar13 & 0xffffffff);
        fVar3 = *pfVar20;
        fVar4 = pfVar20[1];
        fVar5 = pfVar20[2];
        fVar28 = pfVar11[2] - fVar5;
        fVar24 = pfVar11[1] - fVar4;
        fVar22 = *pfVar11 - fVar3;
        fVar30 = pfVar18[2] - fVar5;
        fVar23 = pfVar18[1] - fVar4;
        fVar33 = *pfVar18 - fVar3;
        fVar34 = fVar33 * fVar24 - fVar22 * fVar23;
        fVar33 = fVar30 * fVar22 - fVar28 * fVar33;
        fVar22 = fVar23 * fVar28 - fVar30 * fVar24;
        fVar23 = fVar34 * fVar34 + fVar22 * fVar22 + fVar33 * fVar33;
        if (*(char *)(lVar6 + uVar13) == '\x01') {
          if (((fVar23 != 1.0) || (fVar24 = fVar22, fVar28 = fVar34, fVar30 = fVar33, NAN(fVar23)))
             && (fVar24 = (float)DAT_14c846330, fVar28 = DAT_14c846338, fVar30 = DAT_14c846330._4_4_
                , 1e-08 <= fVar23)) {
            fVar23 = 1.0 / SQRT(fVar23);
            fVar24 = fVar22 * fVar23;
            fVar28 = fVar34 * fVar23;
            fVar30 = fVar33 * fVar23;
          }
          fVar24 = -fVar24;
          fVar28 = -fVar28;
          fVar30 = -fVar30;
        }
        else if (((fVar23 != 1.0) ||
                 (fVar24 = fVar22, fVar28 = fVar34, fVar30 = fVar33, NAN(fVar23))) &&
                (fVar24 = (float)DAT_14c846330, fVar28 = DAT_14c846338, fVar30 = DAT_14c846330._4_4_
                , 1e-08 <= fVar23)) {
          fVar23 = 1.0 / SQRT(fVar23);
          fVar24 = fVar22 * fVar23;
          fVar28 = fVar34 * fVar23;
          fVar30 = fVar33 * fVar23;
        }
        pfVar12 = (float *)(lVar7 * 0x10 + lVar17);
        fVar34 = *pfVar11 * fVar1 + *pfVar18 * fVar37 + fVar3 * fVar31;
        fVar33 = pfVar11[1] * fVar1 + pfVar18[1] * fVar37 + fVar4 * fVar31;
        fVar23 = pfVar11[2] * fVar1 + pfVar18[2] * fVar37 + fVar5 * fVar31;
        fVar3 = pfVar12[2];
        fVar4 = *pfVar12;
        fVar5 = pfVar12[1];
        fVar22 = (fVar3 - fVar23) * fVar28 + (fVar4 - fVar34) * fVar24 + (fVar5 - fVar33) * fVar30;
        if (fVar22 <= fVar21) {
          fVar35 = 0.0;
          fVar38 = 0.0;
          if (*(char *)(*(longlong *)(param_1 + 0x138) + uVar13) != '\x01') {
            fVar38 = *(float *)(param_1 + 0x3c);
          }
          fVar21 = fVar21 - fVar22;
          fVar22 = *(float *)(param_1 + 0x38) * fVar21;
          fVar29 = (fVar22 * fVar28) / fVar41;
          fVar25 = (fVar30 * fVar22) / fVar41;
          fVar22 = (fVar24 * fVar22) / fVar41;
          fVar26 = 0.0;
          fVar32 = 0.0;
          if (0.0 < fVar38) {
            fVar39 = fVar2 - fVar39;
            fVar34 = fVar39 * fVar22 +
                     ((fVar4 - *(float *)(lVar8 + lVar7 * 0xc)) -
                     (fVar34 - (*(float *)(lVar8 + lVar9 * 0xc) * fVar1 +
                               *(float *)(lVar8 + lVar14 * 0xc) * fVar37 +
                               *(float *)(lVar8 + lVar16 * 0xc) * fVar31)));
            fVar33 = fVar39 * fVar25 +
                     ((fVar5 - *(float *)(lVar8 + 4 + lVar7 * 0xc)) -
                     (fVar33 - (*(float *)(lVar8 + 4 + lVar9 * 0xc) * fVar1 +
                               *(float *)(lVar8 + 4 + lVar14 * 0xc) * fVar37 +
                               *(float *)(lVar8 + 4 + lVar16 * 0xc) * fVar31)));
            fVar37 = fVar39 * fVar29 +
                     ((fVar3 - *(float *)(lVar8 + 8 + lVar7 * 0xc)) -
                     (fVar23 - (fVar1 * *(float *)(lVar8 + 8 + lVar9 * 0xc) +
                               fVar37 * *(float *)(lVar8 + 8 + lVar14 * 0xc) +
                               fVar31 * *(float *)(lVar8 + 8 + lVar16 * 0xc))));
            fVar31 = fVar37 * fVar28 + fVar34 * fVar24 + fVar30 * fVar33;
            fVar37 = fVar37 - fVar31 * fVar28;
            fVar33 = fVar33 - fVar30 * fVar31;
            fVar34 = fVar34 - fVar24 * fVar31;
            fVar31 = SQRT(fVar37 * fVar37 + fVar34 * fVar34 + fVar33 * fVar33);
            fVar21 = fVar21 * fVar38;
            if (fVar31 <= fVar21) {
              fVar21 = fVar31;
            }
            fVar31 = (float)(-(uint)(fVar31 < 1e-08) & 0x80000000 |
                            ~-(uint)(fVar31 < 1e-08) & (uint)(-fVar21 / fVar31));
            fVar32 = (fVar31 * fVar37) / fVar41;
            fVar26 = (fVar33 * fVar31) / fVar41;
            fVar35 = (fVar34 * fVar31) / fVar41;
          }
          fVar29 = fVar29 + fVar32;
          fVar25 = fVar25 + fVar26;
          fVar22 = fVar22 + fVar35;
          *pfVar12 = fVar4 + fVar2 * fVar22;
          pfVar12[1] = fVar5 + fVar2 * fVar25;
          pfVar12[2] = fVar3 + fVar2 * fVar29;
          fVar40 = fVar40 * pfVar19[-2];
          *pfVar20 = *pfVar20 - fVar22 * fVar40;
          pfVar20[1] = pfVar20[1] - fVar25 * fVar40;
          pfVar20[2] = pfVar20[2] - fVar40 * fVar29;
          fVar36 = fVar36 * pfVar19[-1];
          *pfVar18 = *pfVar18 - fVar22 * fVar36;
          pfVar18[1] = pfVar18[1] - fVar25 * fVar36;
          pfVar18[2] = pfVar18[2] - fVar36 * fVar29;
          fVar27 = fVar27 * *pfVar19;
          *pfVar11 = *pfVar11 - fVar22 * fVar27;
          pfVar11[1] = pfVar11[1] - fVar25 * fVar27;
          pfVar11[2] = pfVar11[2] - fVar27 * fVar29;
          iVar15 = *(int *)(param_1 + 0x90);
        }
      }
      uVar13 = uVar13 + 1;
      pfVar19 = pfVar19 + 3;
      piVar10 = piVar10 + 4;
    } while ((longlong)uVar13 < (longlong)iVar15);
  }
  return;
}



// FUNCTION 1429bcd3c FUN_1429bcd3c body=618 status=ok
// SIG undefined FUN_1429bcd3c(void)

void FUN_1429bcd3c(longlong param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_1 + 0x150);
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x28) < 1) || (ABS(*(float *)(param_1 + 0x34)) <= 0.0001)) {
      fVar3 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x44);
      fVar4 = fVar3;
      if (fVar3 <= 0.0001) {
        fVar4 = 0.0001;
      }
      if ((*(int *)(param_1 + 0x70) < 1) || (ABS(*(float *)(param_1 + 0x7c)) <= 0.0001)) {
        FUN_141b03e90((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                      (longlong)*(int *)(param_2 + 0x10) * 0xc +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0x28),
                      *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),
                      **(undefined8 **)(param_1 + 0xb8),fVar3,1.0 / fVar4,fVar3 * -10.0,
                      *(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x78),iVar1);
      }
      else {
        FUN_141b04070((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                      (longlong)*(int *)(param_2 + 0x10) * 0xc +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0x28),
                      *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),
                      **(undefined8 **)(param_1 + 0xb8),fVar3,1.0 / fVar4,fVar3 * -10.0,
                      *(undefined4 *)(param_1 + 0x48),param_1 + 0x78,*(undefined8 *)(param_1 + 0x68)
                      ,*(undefined4 *)(param_1 + 0x178),iVar1);
      }
    }
    else {
      if (*(int *)(param_1 + 0x70) < 1) {
        bVar2 = false;
      }
      else {
        bVar2 = 0.0001 < ABS(*(float *)(param_1 + 0x7c));
      }
      FUN_141b04280((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                    *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                    (longlong)*(int *)(param_2 + 0x10) * 0xc +
                    *(longlong *)(*(longlong *)(param_2 + 8) + 0x28),
                    *(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x158),
                    **(undefined8 **)(param_1 + 0xb8),param_1 + 0x30,*(undefined8 *)(param_1 + 0x20)
                    ,*(undefined4 *)(param_1 + 0x44),0x3f800000,&DAT_41200000,
                    *(undefined4 *)(param_1 + 0x48),bVar2,param_1 + 0x78,
                    *(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x178),iVar1);
    }
  }
  return;
}



// FUNCTION 1429bcfa6 FUN_1429bcfa6 body=69 status=ok
// SIG undefined FUN_1429bcfa6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429bcfa6(void)

{
  _DAT_14c994140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429bcfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994148,1);
  return;
}



// FUNCTION 1429bcfeb FUN_1429bcfeb body=69 status=ok
// SIG undefined FUN_1429bcfeb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429bcfeb(void)

{
  _DAT_14c994158 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429bd02d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994160,1);
  return;
}



// FUNCTION 1429bd030 FUN_1429bd030 body=69 status=ok
// SIG undefined FUN_1429bd030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429bd030(void)

{
  _DAT_14c994170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429bd072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994178,1);
  return;
}



// FUNCTION 1429bd075 FUN_1429bd075 body=69 status=ok
// SIG undefined FUN_1429bd075(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429bd075(void)

{
  _DAT_14c994188 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429bd0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994190,1);
  return;
}



// FUNCTION 1429bd0ba FUN_1429bd0ba body=69 status=ok
// SIG undefined FUN_1429bd0ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429bd0ba(void)

{
  _DAT_14c9941a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429bd0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9941a8,1);
  return;
}



// FUNCTION 1429bd0ff FUN_1429bd0ff body=69 status=ok
// SIG undefined FUN_1429bd0ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429bd0ff(void)

{
  _DAT_14c9941b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429bd141. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9941c0,1);
  return;
}



// FUNCTION 1429bd144 FUN_1429bd144 body=159 status=ok
// SIG undefined FUN_1429bd144(void)

void FUN_1429bd144(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  *(int *)(param_1 + 0x108) = param_2;
  iVar1 = *(int *)(param_1 + 0x100);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if (0 < (int)*(uint *)(param_1 + 0x1a0)) {
    uVar5 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(param_1 + 0x198) + uVar5 * 4);
      iVar4 = -iVar1;
      if (-iVar1 < 0) {
        iVar4 = iVar1;
      }
      if (param_2 < iVar4) {
        FUN_144a1a59e((longlong *)(param_1 + 0x198),uVar5,
                      CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1));
        return;
      }
      uVar5 = uVar5 + 1;
    } while (*(uint *)(param_1 + 0x1a0) != uVar5);
  }
  return;
}



// FUNCTION 1429bd1e4 FUN_1429bd1e4 body=3170 status=ok
// SIG undefined FUN_1429bd1e4(void)

void FUN_1429bd1e4(float *param_1,float param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  code *pcVar11;
  longlong *plVar12;
  byte *pbVar13;
  uint uVar14;
  float fVar15;
  DWORD DVar16;
  DWORD DVar17;
  undefined8 uVar18;
  float *pfVar19;
  LPCRITICAL_SECTION p_Var20;
  float **ppfVar21;
  float *pfVar22;
  longlong *plVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 uVar29;
  int iVar30;
  longlong lVar31;
  uint uVar32;
  ulonglong uVar33;
  byte bVar34;
  longlong lVar35;
  uint *puVar36;
  bool bVar37;
  undefined1 auVar38 [16];
  undefined1 auStack_2c8 [32];
  float *local_2a8;
  int local_2a0;
  byte local_28a;
  char local_289;
  float *local_288;
  float *local_280;
  float *local_278;
  undefined4 local_26c;
  int *local_268;
  undefined1 *local_260;
  float **local_258;
  code *local_250;
  float **local_248;
  code *local_240;
  float **local_238;
  float *local_230;
  undefined8 local_228;
  float **local_220;
  float local_218;
  code *local_210;
  float **local_208;
  code *local_200;
  float **local_1f8;
  float *local_1f0;
  float **local_1e8;
  float *local_1e0;
  float *local_1d8;
  float *local_1d0;
  float *local_1c8;
  float *local_1c0;
  float *local_1b8;
  float *local_1b0;
  LPCRITICAL_SECTION local_1a8;
  code *local_1a0;
  float **local_198;
  float *local_190;
  code **local_188;
  float **local_180;
  code *local_178;
  float **local_170;
  float local_168 [2];
  float *local_160;
  float *local_158;
  float *local_150;
  float *local_148;
  float *local_140;
  float *local_138;
  float *local_130;
  float *local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  longlong local_e8;
  undefined4 local_e0;
  float *local_d8;
  float *local_d0;
  LPCRITICAL_SECTION local_c8;
  float *local_c0;
  code **local_b8;
  float *local_b0;
  float **local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  param_1[0x118] = param_1[0x118] + param_2;
  pbVar13 = DAT_14c994150;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar30 = *piVar1;
  if (iVar30 == 0x40000002) {
    bVar34 = *DAT_14c994150 ^ 1;
LAB_1429bd2b2:
    iVar30 = 0x40000002;
    uVar25 = 0;
    lVar27 = DAT_14c9941c8;
  }
  else {
    if (DAT_14c86a9f8 == 0) {
      bVar34 = *DAT_14c994150 ^ 1;
    }
    else if (iVar30 == 2) {
      bVar34 = *DAT_14c994150 ^ 1;
      iVar30 = 2;
    }
    else {
      if (iVar30 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        bVar37 = DVar16 == DVar17;
        iVar30 = *piVar1;
      }
      else {
        bVar37 = false;
      }
      bVar34 = pbVar13[bVar37 ^ 1] ^ 1;
      if (iVar30 == 0x40000002) goto LAB_1429bd2b2;
    }
    lVar27 = DAT_14c9941c8;
    bVar37 = true;
    if (((DAT_14c86a9f8 & 1) != 0) && (iVar30 != 2)) {
      if (iVar30 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        bVar37 = DVar16 == DVar17;
        iVar30 = *piVar1;
      }
      else {
        bVar37 = false;
      }
    }
    uVar25 = (ulonglong)(bVar37 ^ 1);
  }
  lVar31 = DAT_14c994198;
  uVar29 = 0x7fffffff;
  if (*(char *)(lVar27 + uVar25) == '\x01') {
    if (iVar30 == 0x40000002) {
      iVar30 = 0x40000002;
      uVar25 = 0;
    }
    else {
      bVar37 = true;
      if ((DAT_14c86a9f8 == 1) && (iVar30 != 2)) {
        if (iVar30 == 1) {
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          bVar37 = DVar16 == DVar17;
          iVar30 = *piVar1;
        }
        else {
          bVar37 = false;
        }
      }
      uVar25 = (ulonglong)(bVar37 ^ 1);
    }
    uVar29 = *(undefined4 *)(lVar31 + uVar25 * 4);
  }
  lVar27 = DAT_14c9941b0;
  if (iVar30 == 0x40000002) {
    uVar25 = 0;
  }
  else {
    bVar37 = true;
    if ((DAT_14c86a9f8 == 1) && (iVar30 != 2)) {
      if (iVar30 == 1) {
        DVar16 = FUN_140ad26c0();
        DVar17 = GetCurrentThreadId();
        bVar37 = DVar16 == DVar17;
      }
      else {
        bVar37 = false;
      }
    }
    uVar25 = (ulonglong)(bVar37 ^ 1);
  }
  local_289 = *(char *)(lVar27 + uVar25);
  local_278 = param_1 + 0x36;
  local_198 = &local_230;
  local_228 = (float *)CONCAT44(uVar29,param_2);
  local_1a0 = FUN_1429be6d8;
  local_128 = (float *)0x0;
  uStack_120 = 0x800000000;
  fVar15 = param_1[0x3a];
  uStack_120._0_4_ = 0;
  local_28a = bVar34;
  local_26c = uVar29;
  local_268 = piVar1;
  local_230 = param_1;
  if ((longlong)(int)fVar15 != 0) {
    lVar27 = *(longlong *)(param_1 + 0x38);
    lVar31 = 0;
    uVar25 = 0;
    do {
      uVar24 = uStack_120;
      uVar33 = (ulonglong)*(int *)(lVar27 + lVar31);
      if ((longlong)uVar33 < 1) {
        uVar33 = (ulonglong)(uint)-*(int *)(lVar27 + lVar31);
      }
      else {
        lVar35 = (longlong)(int)uStack_120;
        uVar14 = (int)uStack_120 + 1;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar14);
        if (uStack_120._4_4_ < uVar14) {
          FUN_146d8b45e(local_168,uVar24 & 0xffffffff);
        }
        pfVar19 = local_128;
        if (local_128 == (float *)0x0) {
          pfVar19 = local_168;
        }
        *(ulonglong *)(pfVar19 + lVar35 * 2) = uVar25 | uVar33 << 0x20;
      }
      lVar31 = lVar31 + 4;
      uVar25 = uVar33 & 0xffffffff;
    } while ((longlong)(int)fVar15 * 4 != lVar31);
  }
  local_1e8 = &local_c0;
  local_c0 = local_278;
  local_b8 = &local_1a0;
  local_b0 = local_168;
  local_1f0 = (float *)FUN_144b0610c;
  FUN_1400bd65e((int)uStack_120,&local_1f0,local_28a);
  if (local_128 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_1 + 0x100) != 0) && ((longlong)(int)param_1[0x68] != 0)) {
    pfVar22 = *(float **)(param_1 + 0x66);
    pfVar19 = pfVar22 + (int)param_1[0x68];
    fVar15 = 0.0;
    local_280 = pfVar19;
    do {
      fVar10 = *pfVar22;
      if ((int)fVar10 < 1) {
        fVar10 = (float)-(int)fVar10;
      }
      else if ((int)fVar15 < (int)fVar10) {
        uVar25 = (ulonglong)(uint)fVar15;
        lVar27 = uVar25 * 0xc + 8;
        lVar31 = uVar25 << 4;
        local_288 = pfVar22;
        do {
          lVar35 = *(longlong *)(param_1 + 100);
          lVar28 = *(longlong *)(param_1 + 0x70);
          puVar8 = (undefined8 *)(*(longlong *)(lVar35 + 0x48) + lVar31);
          uVar18 = puVar8[1];
          auVar38._8_8_ = 0;
          auVar38._0_8_ = *(ulonglong *)(*(longlong *)(lVar35 + 0x28) + -8 + lVar27);
          auVar38 = insertps(auVar38,*(undefined4 *)(*(longlong *)(lVar35 + 0x28) + lVar27),0x28);
          puVar9 = (undefined8 *)(lVar28 + -0x20 + lVar27 * 4);
          *puVar9 = *puVar8;
          puVar9[1] = uVar18;
          *(undefined1 (*) [16])(lVar28 + -0x10 + lVar27 * 4) = auVar38;
          puVar8 = (undefined8 *)(lVar28 + lVar27 * 4);
          *puVar8 = &DAT_3f8000003f800000;
          puVar8[1] = 0x3f800000;
          local_168[0] = (float)uVar25;
          local_c0 = (float *)CONCAT44(local_c0._4_4_,param_1[0x118]);
          local_1f0 = (float *)CONCAT44(local_1f0._4_4_,param_2);
          pcVar11 = *(code **)(param_1 + 0x100);
          pfVar19 = *(float **)(param_1 + 0x104);
          if (*(float **)(param_1 + 0x104) == (float *)0x0) {
            pfVar19 = param_1 + 0x108;
          }
          uVar18 = (**(code **)(*(longlong *)pfVar19 + 8))();
          local_2a8 = local_168;
          (*pcVar11)(uVar18,lVar35,&local_1f0,&local_c0);
          uVar25 = uVar25 + 1;
          lVar27 = lVar27 + 0xc;
          lVar31 = lVar31 + 0x10;
          pfVar22 = local_288;
          pfVar19 = local_280;
        } while ((uint)fVar10 != uVar25);
      }
      fVar15 = fVar10;
      pfVar22 = pfVar22 + 1;
    } while (pfVar22 != pfVar19);
  }
  memset(*(void **)(param_1 + 0x76),0,(longlong)(int)param_1[0x78]);
  if ((longlong)(int)param_1[0xd0] != 0) {
    puVar36 = *(uint **)(param_1 + 0xce);
    pfVar19 = (float *)(puVar36 + (int)param_1[0xd0]);
    uVar14 = 0;
    local_288 = pfVar19;
    do {
      uVar32 = *puVar36;
      if ((int)uVar32 < 1) {
        uVar32 = -uVar32;
      }
      else if ((int)uVar14 < (int)uVar32) {
        uVar25 = (ulonglong)uVar14 << 6 | 0x20;
        do {
          lVar27 = **(longlong **)(param_1 + 0xcc);
          pcVar11 = *(code **)(lVar27 + -0x20 + uVar25);
          plVar12 = *(longlong **)(lVar27 + -0x10 + uVar25);
          plVar23 = (longlong *)(lVar27 + uVar25);
          if (plVar12 != (longlong *)0x0) {
            plVar23 = plVar12;
          }
          local_168[0] = param_2;
          uVar18 = (**(code **)(*plVar23 + 8))();
          (*pcVar11)(uVar18,param_1 + 8,local_168);
          uVar14 = uVar14 + 1;
          uVar25 = uVar25 + 0x40;
          pfVar19 = local_288;
        } while (uVar32 != uVar14);
      }
      puVar36 = puVar36 + 1;
      uVar14 = uVar32;
    } while ((float *)puVar36 != pfVar19);
  }
  local_288 = param_1 + 0x86;
  param_1[0x88] = 0.0;
  if ((int)param_1[0x89] < 0) {
    FUN_140163800(local_288,0);
  }
  pfVar19 = param_1 + 0x8a;
  param_1[0x8c] = 0.0;
  if ((int)param_1[0x8d] < 0) {
    FUN_140163800(pfVar19,0);
  }
  pfVar22 = param_1 + 0x76;
  pfVar2 = param_1 + 0x8e;
  param_1[0x90] = 0.0;
  if ((int)param_1[0x91] < 0) {
    FUN_14482f6fa(pfVar2,0);
  }
  pfVar3 = param_1 + 0xac;
  pfVar4 = param_1 + 0xa6;
  pfVar5 = param_1 + 0x7c;
  pfVar6 = param_1 + 0x82;
  pfVar7 = param_1 + 100;
  local_168[0] = (float)CONCAT31(local_168[0]._1_3_,1);
  p_Var20 = (LPCRITICAL_SECTION)0x0;
  local_108 = 0;
  local_100 = 0;
  local_128 = (float *)0x0;
  uStack_120 = 0;
  local_fc = 0x80;
  uStack_f8 = 0xffffffff;
  local_f4 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_1d0 = pfVar19;
  local_160 = pfVar7;
  local_158 = pfVar22;
  local_150 = local_288;
  local_148 = pfVar19;
  local_140 = pfVar2;
  local_138 = pfVar6;
  local_130 = pfVar5;
  local_d8 = pfVar4;
  local_d0 = pfVar3;
  if (local_289 != '\0') {
    local_280 = pfVar19;
    p_Var20 = (LPCRITICAL_SECTION)FUN_14001cc68(0x28,0x10);
    InitializeCriticalSection(p_Var20);
    SetCriticalSectionSpinCount(p_Var20,4000);
    local_1d0 = local_280;
  }
  local_1e8 = (float **)(param_1 + 0x70);
  local_1f0 = pfVar7;
  local_1e0 = pfVar22;
  local_1d8 = local_288;
  local_1c8 = pfVar6;
  local_1c0 = pfVar5;
  local_1b8 = pfVar4;
  local_1b0 = pfVar3;
  local_c8 = p_Var20;
  if (local_289 == '\0') {
    p_Var20 = (LPCRITICAL_SECTION)0x0;
  }
  else {
    p_Var20 = (LPCRITICAL_SECTION)FUN_14001cc68(0x28,0x10);
    InitializeCriticalSection(p_Var20);
    SetCriticalSectionSpinCount(p_Var20,4000);
  }
  uVar25 = CONCAT71((int7)((ulonglong)pfVar22 >> 8),local_28a);
  local_1a8 = p_Var20;
  if (0 < (int)param_1[0x110]) {
    local_288 = param_1 + 0xd6;
    local_280 = param_1 + 0xe0;
    iVar30 = 0;
    do {
      local_1f8 = &local_c0;
      local_b8 = (code **)CONCAT44(local_b8._4_4_,param_2);
      local_200 = FUN_1429bfbb6;
      local_c0 = param_1;
      FUN_1400bd508(local_288,&local_200,uVar25 & 0xffffffff);
      local_220 = &local_1f0;
      local_208 = &local_230;
      local_210 = FUN_1429bfc5e;
      local_80 = (float **)0x0;
      local_78 = 0x800000000;
      uVar24 = 0;
      lVar27 = 0;
      local_230 = param_1;
      local_228 = local_168;
      local_218 = param_2;
      if ((longlong)(int)param_1[0x3a] != 0) {
        lVar31 = *(longlong *)(param_1 + 0x38);
        lVar27 = (longlong)(int)param_1[0x3a] * 4;
        lVar35 = 0;
        uVar25 = 0;
        do {
          uVar24 = local_78;
          uVar33 = (ulonglong)*(int *)(lVar31 + lVar35);
          if ((longlong)uVar33 < 1) {
            uVar33 = (ulonglong)(uint)-*(int *)(lVar31 + lVar35);
          }
          else {
            lVar28 = (longlong)(int)local_78;
            uVar14 = (int)local_78 + 1;
            local_78 = CONCAT44(local_78._4_4_,uVar14);
            if (local_78._4_4_ < uVar14) {
              FUN_146d8b45e(&local_c0,uVar24 & 0xffffffff);
            }
            ppfVar21 = local_80;
            if (local_80 == (float **)0x0) {
              ppfVar21 = &local_c0;
            }
            ppfVar21[lVar28] = (float *)(uVar25 | uVar33 << 0x20);
          }
          lVar35 = lVar35 + 4;
          uVar25 = uVar33 & 0xffffffff;
        } while (lVar27 != lVar35);
        uVar24 = local_78 & 0xffffffff;
      }
      local_190 = local_278;
      local_188 = &local_210;
      local_170 = &local_190;
      local_178 = FUN_144b0610c;
      uVar25 = CONCAT71((int7)((ulonglong)lVar27 >> 8),local_28a);
      local_180 = &local_c0;
      FUN_1400bd65e(uVar24,&local_178,uVar25 & 0xffffffff);
      if (local_80 != (float **)0x0) {
        FUN_1400020a8();
      }
      local_b8 = (code **)CONCAT44(local_b8._4_4_,param_2);
      local_240 = FUN_1429bfcd0;
      local_238 = &local_c0;
      local_c0 = param_1;
      FUN_1400bd508(local_280,&local_240,uVar25 & 0xffffffff);
      iVar30 = iVar30 + 1;
    } while (iVar30 < (int)param_1[0x110]);
  }
  local_248 = &local_c0;
  local_b8 = (code **)CONCAT44(local_b8._4_4_,param_2);
  local_250 = FUN_1429bfd78;
  local_c0 = param_1;
  FUN_1400bd508(param_1 + 0xea,&local_250,uVar25 & 0xffffffff);
  fVar15 = param_1[0x3a];
  if ((longlong)(int)fVar15 != 0) {
    lVar27 = *(longlong *)(param_1 + 0x38);
    lVar31 = 0;
    iVar30 = 0;
    do {
      iVar26 = *(int *)(lVar27 + lVar31);
      if (iVar26 < 1) {
        iVar26 = -iVar26;
      }
      else {
        lVar35 = *(longlong *)local_278;
        local_2a8 = (float *)CONCAT44(local_2a8._4_4_,iVar30);
        local_2a0 = iVar26;
        FUN_141b09450(*(undefined8 *)(lVar35 + 0x48),*(undefined8 *)(lVar35 + 0x28),
                      *(undefined8 *)(lVar35 + 0xa8));
      }
      lVar31 = lVar31 + 4;
      iVar30 = iVar26;
    } while ((longlong)(int)fVar15 * 4 != lVar31);
  }
  lVar27 = DAT_14c994168;
  iVar30 = *local_268;
  if ((iVar30 == 0x40000002) || (DAT_14c86a9f8 != 1)) {
    uVar24 = 0;
  }
  else if (iVar30 == 2) {
    uVar24 = 0;
  }
  else if (iVar30 == 1) {
    DVar16 = FUN_140ad26c0();
    DVar17 = GetCurrentThreadId();
    uVar24 = (ulonglong)(DVar16 != DVar17);
  }
  else {
    uVar24 = 1;
  }
  if ((*(char *)(lVar27 + uVar24) == '\0') && (0.0 < param_1[0x115])) {
    local_b8 = (code **)CONCAT44(local_b8._4_4_,param_2);
    local_260 = &LAB_1429bfe20;
    local_258 = &local_c0;
    local_c0 = local_168;
    FUN_146de92a8(local_278,&local_260,uVar25 & 0xffffffff,local_26c);
  }
  p_Var20 = local_1a8;
  if (local_1a8 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(local_1a8);
    FUN_1400020a8(p_Var20);
  }
  p_Var20 = local_c8;
  if (local_c8 != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(local_c8);
    FUN_1400020a8(p_Var20);
  }
  local_e0 = 0;
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  uVar25 = uStack_120 >> 0x20;
  uStack_120 = uStack_120 & 0xffffffff00000000;
  if ((int)uVar25 != 0) {
    FUN_1407f13e6(&local_128,0);
  }
  uStack_f8 = 0xffffffff;
  local_f4 = 0;
  local_100 = 0;
  if (0x80 < local_fc) {
    local_fc = 0x80;
    FUN_1446efbd8(local_118,0);
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_128 != (float *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429bde48 FUN_1429bde48 body=159 status=ok
// SIG undefined FUN_1429bde48(void)

void FUN_1429bde48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)param_2[1];
  if ((undefined8 *)*param_2 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)*param_2;
  }
  lVar4 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  if (puVar1 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *puVar1;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar2 = *(uint *)(param_1 + 0x18) | 0x100;
  *(uint *)(param_1 + 0x18) = uVar2;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if (*(longlong *)(lVar4 + 8) != 0) {
    FUN_144a78688(*(longlong *)(lVar4 + 8) + 0x70);
    uVar2 = *(uint *)(param_1 + 0x18);
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  *(longlong *)(param_1 + 0x30) = *param_2;
  *(longlong *)(param_1 + 0x38) = param_2[1];
  *(uint *)(param_1 + 0x18) = uVar2 | 0x200;
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
    FUN_144a78688(*(longlong *)(lVar4 + 8) + 0x70);
    return;
  }
  return;
}



// FUNCTION 1429bdee8 FUN_1429bdee8 body=7 status=ok
// SIG undefined FUN_1429bdee8(void)

undefined4 FUN_1429bdee8(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x100);
}



// FUNCTION 1429bdef0 FUN_1429bdef0 body=1852 status=ok
// SIG undefined FUN_1429bdef0(void)

void FUN_1429bdef0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  ulonglong uVar30;
  undefined4 *puVar31;
  undefined8 *puVar32;
  uint *puVar33;
  longlong lVar34;
  longlong lVar35;
  int iVar36;
  longlong lVar37;
  bool bVar38;
  bool bVar39;
  undefined1 auStack_128 [32];
  longlong local_108;
  uint local_100;
  uint local_fc;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_68 = 0;
  uStack_60 = 0;
  iVar24 = *(int *)(param_1 + 0x120);
  if (-1 < iVar24) {
    if (iVar24 != 0) {
      FUN_14481578e(&local_68);
    }
    if (0 < *(int *)(param_1 + 0x100)) {
      iVar24 = 0;
      do {
        lVar29 = (longlong)(int)uStack_60;
        uVar16 = (int)uStack_60 + 1;
        uStack_60 = CONCAT44(uStack_60._4_4_,uVar16);
        if (uStack_60._4_4_ < uVar16) {
          FUN_1446f48e2(&local_68);
        }
        *(int *)(local_68 + lVar29 * 4) = iVar24;
        iVar24 = iVar24 + 1;
      } while (iVar24 < *(int *)(param_1 + 0x100));
    }
    uVar30 = (ulonglong)(int)uStack_60;
    if (0 < (longlong)uVar30) {
      local_f8 = local_68;
      uVar17 = 1;
      do {
        if (uVar17 < uVar30) {
          iVar24 = *(int *)(local_68 + -4 + uVar17 * 4);
          iVar21 = *(int *)(local_68 + uVar17 * 4);
          lVar29 = *(longlong *)(param_1 + 0x108);
          lVar34 = (longlong)iVar21 * 0x58;
          lVar35 = (longlong)iVar24 * 0x58;
          iVar25 = *(int *)(lVar29 + lVar35);
          iVar36 = *(int *)(lVar29 + lVar34);
          bVar39 = SBORROW4(iVar36,iVar25);
          bVar38 = iVar36 - iVar25 < 0;
          if (iVar36 == iVar25) {
            iVar25 = *(int *)(lVar29 + 4 + lVar35);
            iVar36 = *(int *)(lVar29 + 4 + lVar34);
            bVar39 = SBORROW4(iVar36,iVar25);
            bVar38 = iVar36 - iVar25 < 0;
            if (iVar36 == iVar25) {
              iVar36 = *(int *)(lVar29 + 8 + lVar34);
              iVar25 = *(int *)(lVar29 + 8 + lVar35);
              bVar39 = SBORROW4(iVar36,iVar25);
              bVar38 = iVar36 - iVar25 < 0;
            }
          }
          if (bVar39 != bVar38) {
            *(int *)(local_68 + -4 + uVar17 * 4) = iVar21;
            *(int *)(local_68 + uVar17 * 4) = iVar24;
          }
        }
        uVar18 = uVar17 + 1;
        uVar17 = uVar17 + 2;
      } while (uVar18 < uVar30);
      if (2 < (int)uStack_60) {
        local_d0 = local_68 + 4;
        uVar17 = 2;
        do {
          local_e0 = uVar17;
          iVar24 = (int)local_e0;
          local_fc = iVar24 * 2;
          local_b8 = (longlong)(int)local_fc;
          local_c0 = local_b8 * 4;
          lVar29 = 0;
          local_f0 = local_d0;
          do {
            local_d8 = lVar29;
            uVar16 = (int)uStack_60 - (int)local_d8;
            if ((int)local_fc <= (int)uVar16) {
              uVar16 = local_fc;
            }
            if (iVar24 < (int)uVar16 && 0 < iVar24) {
              local_e8 = local_68 + local_d8 * 4;
              iVar21 = 0;
              uVar17 = local_e0;
              while( true ) {
                iVar36 = (int)uVar17;
                piVar2 = (int *)(local_e8 + (longlong)iVar36 * 4);
                iVar25 = 0;
                if (iVar36 - iVar21 != 0 && iVar21 <= iVar36) {
                  lVar29 = *(longlong *)(param_1 + 0x108);
                  piVar3 = (int *)(lVar29 + (longlong)*piVar2 * 0x58);
                  iVar7 = *piVar3;
                  iVar25 = 0;
                  uVar26 = iVar36 - iVar21;
                  do {
                    iVar9 = (uVar26 >> 1) + iVar25;
                    lVar34 = (longlong)
                             *(int *)(local_e8 + (longlong)iVar21 * 4 + (longlong)iVar9 * 4) * 0x58;
                    iVar6 = *(int *)(lVar29 + lVar34);
                    bVar39 = SBORROW4(iVar7,iVar6);
                    bVar38 = iVar7 - iVar6 < 0;
                    if (iVar7 == iVar6) {
                      iVar6 = *(int *)(lVar29 + 4 + lVar34);
                      iVar8 = piVar3[1];
                      bVar39 = SBORROW4(iVar8,iVar6);
                      bVar38 = iVar8 - iVar6 < 0;
                      if (iVar8 == iVar6) {
                        iVar6 = *(int *)(lVar29 + 8 + lVar34);
                        bVar39 = SBORROW4(piVar3[2],iVar6);
                        bVar38 = piVar3[2] - iVar6 < 0;
                      }
                    }
                    if (bVar39 == bVar38) {
                      iVar25 = iVar9 + (uVar26 & 1);
                    }
                    bVar38 = 1 < uVar26;
                    uVar26 = uVar26 >> 1;
                  } while (bVar38);
                }
                iVar25 = iVar25 + iVar21;
                local_100 = uVar16;
                if (iVar36 - iVar25 == 0 || iVar36 < iVar25) break;
                uVar26 = uVar16 - iVar36;
                if (uVar26 == 0 || (int)uVar16 < iVar36) {
                  iVar21 = 0;
                }
                else {
                  local_b0 = (longlong)iVar25;
                  piVar3 = (int *)(local_e8 + local_b0 * 4);
                  lVar29 = *(longlong *)(param_1 + 0x108);
                  uVar18 = (ulonglong)*piVar3;
                  piVar4 = (int *)(lVar29 + uVar18 * 0x58);
                  iVar7 = *piVar4;
                  iVar21 = 0;
                  uVar17 = (ulonglong)uVar26;
                  do {
                    uVar17 = uVar17 >> 1;
                    uVar20 = (uint)uVar17 + iVar21;
                    lVar34 = (longlong)piVar2[uVar20] * 0x58;
                    iVar9 = *(int *)(lVar29 + lVar34);
                    bVar39 = SBORROW4(iVar9,iVar7);
                    bVar38 = iVar9 - iVar7 < 0;
                    if (iVar9 == iVar7) {
                      iVar9 = piVar4[1];
                      iVar6 = *(int *)(lVar29 + 4 + lVar34);
                      bVar39 = SBORROW4(iVar6,iVar9);
                      bVar38 = iVar6 - iVar9 < 0;
                      if (iVar6 == iVar9) {
                        iVar9 = *(int *)(lVar29 + 8 + lVar34);
                        bVar39 = SBORROW4(iVar9,piVar4[2]);
                        bVar38 = iVar9 - piVar4[2] < 0;
                      }
                    }
                    if (bVar39 != bVar38) {
                      iVar21 = uVar20 + (uVar26 & 1);
                    }
                    bVar38 = 1 < uVar26;
                    uVar26 = (uint)uVar17;
                  } while (bVar38);
                  uVar17 = (ulonglong)(uint)(iVar36 + iVar21);
                  if (0 < iVar21) {
                    puVar22 = (uint *)(piVar3 + (iVar36 - iVar25));
                    puVar33 = (uint *)(local_f0 + local_b0 * 4);
                    puVar27 = puVar22;
                    do {
                      puVar23 = puVar27 + 1;
                      puVar33[-1] = *puVar27;
                      *puVar27 = (uint)uVar18;
                      if (puVar23 == (uint *)(piVar3 + ((iVar36 + iVar21) - iVar25))) {
                        puVar23 = puVar22;
                        if (puVar33 == puVar22) break;
                      }
                      else if (puVar33 == puVar22) {
                        puVar22 = puVar23;
                      }
                      uVar18 = (ulonglong)*puVar33;
                      puVar33 = puVar33 + 1;
                      puVar27 = puVar23;
                    } while( true );
                  }
                }
                if (((int)uVar16 <= (int)uVar17) ||
                   (iVar21 = iVar25 + iVar21 + 1, (int)uVar17 <= iVar21)) break;
              }
            }
            local_f0 = local_f0 + local_c0;
            lVar29 = local_d8 + local_b8;
          } while (local_d8 + local_b8 < (longlong)uVar30);
          uVar17 = (ulonglong)local_fc;
          local_c8 = uVar30;
        } while ((int)local_fc < (int)uStack_60);
      }
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_108 = param_1;
    iVar24 = (int)uStack_60;
    if (-1 < (int)uStack_60) {
      plVar1 = (longlong *)(param_1 + 0x118);
      lVar29 = param_1;
      if ((int)uStack_60 != 0) {
        FUN_146dfaba0(&local_78);
        iVar24 = (int)uStack_60;
        if ((int)uStack_60 < 0) goto LAB_1429be625;
        lVar29 = local_108;
        if ((int)uStack_60 != 0) {
          FUN_146dfabf6(&local_88);
          iVar24 = (int)uStack_60;
          if ((int)uStack_60 < 0) goto LAB_1429be625;
          lVar29 = local_108;
          if ((int)uStack_60 != 0) {
            FUN_146dfac6a(&local_98);
            lVar29 = local_108;
            iVar24 = (int)uStack_60;
            if ((int)uStack_60 < 0) goto LAB_1429be625;
            if ((int)uStack_60 != 0) {
              FUN_146dfacca(&local_a8);
              if (0 < (int)uStack_60) {
                lVar34 = 0;
                do {
                  uVar30 = uStack_70;
                  lVar37 = (longlong)*(int *)(local_68 + lVar34 * 4);
                  lVar29 = *plVar1;
                  lVar35 = (longlong)(int)uStack_70;
                  uVar16 = (int)uStack_70 + 1;
                  uStack_70 = CONCAT44(uStack_70._4_4_,uVar16);
                  if (uStack_70._4_4_ < uVar16) {
                    FUN_1408ca1f0(&local_78,uVar30 & 0xffffffff);
                  }
                  uVar30 = uStack_80;
                  *(undefined8 *)(local_78 + lVar35 * 8) = *(undefined8 *)(lVar29 + lVar37 * 8);
                  lVar29 = *(longlong *)(local_108 + 0xe8);
                  lVar35 = (longlong)(int)uStack_80;
                  uVar16 = (int)uStack_80 + 1;
                  uStack_80 = CONCAT44(uStack_80._4_4_,uVar16);
                  if (uStack_80._4_4_ < uVar16) {
                    FUN_14033361a(&local_88,uVar30 & 0xffffffff);
                  }
                  memcpy((void *)(lVar35 * 0x310 + local_88),(void *)(lVar37 * 0x310 + lVar29),0x310
                        );
                  uVar30 = uStack_90;
                  puVar31 = (undefined4 *)(lVar37 * 0x10 + *(longlong *)(local_108 + 0xf8));
                  lVar29 = (longlong)(int)uStack_90;
                  uVar16 = (int)uStack_90 + 1;
                  uStack_90 = CONCAT44(uStack_90._4_4_,uVar16);
                  if (uStack_90._4_4_ < uVar16) {
                    FUN_1408ca0e2(&local_98,uVar30 & 0xffffffff);
                  }
                  uVar30 = uStack_a0;
                  uVar10 = puVar31[1];
                  uVar11 = puVar31[2];
                  uVar12 = puVar31[3];
                  puVar5 = (undefined4 *)(local_98 + lVar29 * 0x10);
                  *puVar5 = *puVar31;
                  puVar5[1] = uVar10;
                  puVar5[2] = uVar11;
                  puVar5[3] = uVar12;
                  lVar29 = *(longlong *)(local_108 + 0x108);
                  lVar35 = (longlong)(int)uStack_a0;
                  uVar16 = (int)uStack_a0 + 1;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar16);
                  if (uStack_a0._4_4_ < uVar16) {
                    FUN_1408ca352(&local_a8,uVar30 & 0xffffffff);
                  }
                  puVar28 = (undefined8 *)(lVar37 * 0x58 + lVar29);
                  puVar32 = (undefined8 *)(lVar35 * 0x58 + local_a8);
                  for (lVar19 = 0xb; lVar19 != 0; lVar19 = lVar19 + -1) {
                    *puVar32 = *puVar28;
                    puVar28 = puVar28 + 1;
                    puVar32 = puVar32 + 1;
                  }
                  *(int *)(*(longlong *)(*plVar1 + lVar37 * 8) + 0x18) = (int)lVar34;
                  lVar34 = lVar34 + 1;
                  lVar29 = local_108;
                } while (lVar34 < (int)uStack_60);
              }
            }
          }
        }
      }
      lVar34 = *plVar1;
      uVar13 = *(undefined8 *)(param_1 + 0x120);
      *plVar1 = local_78;
      *(ulonglong *)(param_1 + 0x120) = uStack_70;
      lVar35 = *(longlong *)(lVar29 + 0xe8);
      uVar14 = *(undefined8 *)(lVar29 + 0xf0);
      *(longlong *)(lVar29 + 0xe8) = local_88;
      *(ulonglong *)(lVar29 + 0xf0) = uStack_80;
      lVar37 = *(longlong *)(lVar29 + 0xf8);
      uVar15 = *(undefined8 *)(lVar29 + 0x100);
      *(longlong *)(lVar29 + 0xf8) = local_98;
      *(ulonglong *)(lVar29 + 0x100) = uStack_90;
      local_58 = *(longlong *)(lVar29 + 0x108);
      uStack_50 = *(undefined8 *)(lVar29 + 0x110);
      *(longlong *)(lVar29 + 0x108) = local_a8;
      *(ulonglong *)(lVar29 + 0x110) = uStack_a0;
      local_a8 = local_58;
      uStack_a0 = uStack_50;
      local_98 = lVar37;
      uStack_90 = uVar15;
      local_88 = lVar35;
      uStack_80 = uVar14;
      local_78 = lVar34;
      uStack_70 = uVar13;
      if (local_58 != 0) {
        FUN_1400020a8();
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
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  }
LAB_1429be625:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar24);
}



// FUNCTION 1429be62e FUN_1429be62e body=54 status=ok
// SIG undefined FUN_1429be62e(void)

void FUN_1429be62e(longlong param_1)

{
  if (*(char *)(param_1 + 0x129) == '\x01') {
    if (*(char *)(param_1 + 0x62) == '\x01') {
      FUN_146de9646(param_1);
      FUN_1429bdef0(param_1);
    }
    *(undefined1 *)(param_1 + 0x129) = 0;
  }
  return;
}



// FUNCTION 1429be6d8 FUN_1429be6d8 body=5232 status=ok
// SIG undefined FUN_1429be6d8(void)

void FUN_1429be6d8(longlong *param_1,undefined8 param_2,int *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  longlong local_158;
  undefined4 local_150;
  int local_148;
  int local_134;
  longlong local_130;
  int local_128 [2];
  longlong *local_120;
  int local_118 [2];
  longlong *local_110;
  int local_108;
  int local_104;
  longlong local_100;
  int *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 *local_d8;
  undefined8 local_d0;
  int *local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  int local_b0 [2];
  longlong *local_a8;
  int local_9c;
  undefined4 local_98;
  undefined1 local_94 [12];
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar8 = *param_4;
  iVar2 = *param_3;
  lVar4 = *param_1;
  lVar12 = (longlong)iVar2;
  lVar10 = (longlong)*(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
  cVar5 = FUN_1429b9188(lVar10 * 400 + *(longlong *)(lVar4 + 0x268));
  lVar9 = *(longlong *)(lVar4 + 0x280);
  lVar13 = *(longlong *)(lVar4 + 0x2e0);
  fVar18 = *(float *)(lVar13 + lVar10 * 4);
  lVar10 = *(longlong *)(lVar9 + lVar10 * 0x40);
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  fVar1 = *(float *)(param_1 + 1);
  local_100 = lVar4;
  local_9c = iVar2;
  if (cVar5 == '\0') {
    if (fVar18 <= 0.0) {
      if (lVar10 == 0) {
        local_128[0] = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
        lVar10 = (longlong)local_128[0];
        lVar12 = lVar10 * 0xc + *(longlong *)(lVar4 + 0x250);
        local_98 = *(undefined4 *)(lVar13 + lVar10 * 4);
        fVar17 = 0.0;
        lVar13 = lVar10 * 400 + *(longlong *)(lVar4 + 0x268);
        local_9c = 0x42700000;
        fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar10 * 4);
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar16 = 0.0;
        local_118[0] = iVar2;
        if ((fVar18 <= 0.9999) && (fVar17 = 1.0, fVar16 = fVar1, 1e-08 < fVar18)) {
          fVar18 = logf(1.0 - fVar18);
          fVar17 = expf(fVar1 * fVar18 * 60.0);
          fVar16 = (fVar17 + -1.0) / (fVar18 * 60.0);
        }
        local_f0 = lVar9 + lVar10 * 0x40;
        local_e8 = lVar12;
        local_e0 = lVar13;
        if (*(char *)(lVar4 + 0x464) == '\x01') {
          iVar8 = iVar8 - iVar2;
          bVar11 = iVar8 < iVar3;
          local_a8 = &local_100;
          local_f8 = local_118;
          local_d0 = (int *)CONCAT44(fVar16,fVar17);
          local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
          piVar7 = local_b0;
          pcVar6 = (code *)&LAB_146df6e10;
        }
        else {
          iVar8 = iVar8 - iVar2;
          local_c0 = fVar17;
          local_bc = fVar16;
          if (*(char *)(lVar4 + 0x465) == '\x01') {
            bVar11 = iVar8 < iVar3;
            local_a8 = &local_100;
            local_f8 = local_118;
            local_d0 = &local_9c;
            local_c8 = local_128;
            piVar7 = local_b0;
            pcVar6 = (code *)&LAB_146df6f14;
            local_b8 = fVar1;
          }
          else {
            bVar11 = iVar8 < iVar3;
            local_a8 = &local_100;
            local_f8 = local_118;
            local_d0 = &local_9c;
            local_c8 = local_128;
            piVar7 = local_b0;
            pcVar6 = (code *)&LAB_146df7198;
            local_b8 = fVar1;
          }
        }
      }
      else {
        local_104 = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
        lVar10 = (longlong)local_104;
        lVar12 = lVar10 * 0xc + *(longlong *)(lVar4 + 0x250);
        local_98 = *(undefined4 *)(lVar13 + lVar10 * 4);
        fVar17 = 0.0;
        lVar13 = lVar10 * 400 + *(longlong *)(lVar4 + 0x268);
        local_108 = 0x42700000;
        fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar10 * 4);
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar16 = 0.0;
        if ((fVar18 <= 0.9999) && (fVar17 = 1.0, fVar16 = fVar1, 1e-08 < fVar18)) {
          fVar18 = logf(1.0 - fVar18);
          fVar17 = expf(fVar1 * fVar18 * 60.0);
          fVar16 = (fVar17 + -1.0) / (fVar18 * 60.0);
        }
        local_f0 = lVar9 + lVar10 * 0x40;
        local_e8 = lVar12;
        local_e0 = lVar13;
        if (*(char *)(lVar4 + 0x464) == '\x01') {
          iVar8 = iVar8 - iVar2;
          bVar11 = iVar8 < iVar3;
          local_a8 = &local_100;
          local_f8 = &local_9c;
          local_d0 = (int *)CONCAT44(fVar16,fVar17);
          local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
          piVar7 = local_b0;
          pcVar6 = (code *)&LAB_146df67ca;
        }
        else {
          iVar8 = iVar8 - iVar2;
          local_c0 = fVar17;
          local_bc = fVar16;
          if (*(char *)(lVar4 + 0x465) == '\x01') {
            bVar11 = iVar8 < iVar3;
            local_110 = &local_100;
            local_f8 = &local_9c;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_118;
            pcVar6 = (code *)&LAB_146df68ce;
            local_b8 = fVar1;
          }
          else {
            bVar11 = iVar8 < iVar3;
            local_120 = &local_100;
            local_f8 = &local_9c;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_128;
            pcVar6 = (code *)&LAB_146df6bd8;
            local_b8 = fVar1;
          }
        }
      }
    }
    else {
      iVar8 = iVar8 - iVar2;
      local_148 = iVar8;
      if (lVar10 == 0) {
        local_104 = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
        lVar10 = (longlong)local_104;
        lVar14 = lVar10 * 0xc + *(longlong *)(lVar4 + 0x250);
        lVar15 = lVar10 * 400 + *(longlong *)(lVar4 + 0x268);
        local_98 = *(undefined4 *)(lVar13 + lVar10 * 4);
        local_158 = *(longlong *)(lVar4 + 0xb0) + lVar12 * 4;
        local_160 = lVar12 * 4 + *(longlong *)(lVar4 + 0x98);
        local_168 = *(longlong *)(lVar4 + 0x68) + lVar12 * 0xc;
        local_150 = 0;
        local_134 = iVar3;
        FUN_141ba54c0(local_94,local_88,local_7c,lVar12 * 0xc + *(longlong *)(lVar4 + 0x48));
        local_108 = 0x42700000;
        fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar10 * 4);
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar16 = 0.0;
        fVar17 = 0.0;
        if ((fVar18 <= 0.9999) && (fVar16 = 1.0, fVar17 = fVar1, 1e-08 < fVar18)) {
          fVar18 = logf(1.0 - fVar18);
          fVar16 = expf(fVar1 * fVar18 * 60.0);
          fVar17 = (fVar16 + -1.0) / (fVar18 * 60.0);
        }
        local_f0 = lVar9 + lVar10 * 0x40;
        local_e8 = lVar14;
        local_e0 = lVar15;
        if (*(char *)(lVar4 + 0x464) == '\x01') {
          bVar11 = iVar8 < local_134;
          local_a8 = &local_100;
          local_f8 = &local_9c;
          local_d0 = (int *)CONCAT44(fVar17,fVar16);
          local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
          piVar7 = local_b0;
          pcVar6 = (code *)&LAB_146df620e;
        }
        else {
          local_c0 = fVar16;
          local_bc = fVar17;
          if (*(char *)(lVar4 + 0x465) == '\x01') {
            bVar11 = iVar8 < local_134;
            local_110 = &local_100;
            local_f8 = &local_9c;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_118;
            pcVar6 = (code *)&LAB_146df6312;
            local_b8 = fVar1;
          }
          else {
            bVar11 = iVar8 < local_134;
            local_120 = &local_100;
            local_f8 = &local_9c;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_128;
            pcVar6 = (code *)&LAB_146df65d8;
            local_b8 = fVar1;
          }
        }
      }
      else {
        local_104 = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
        lVar10 = (longlong)local_104;
        lVar14 = lVar10 * 0xc + *(longlong *)(lVar4 + 0x250);
        lVar15 = lVar10 * 400 + *(longlong *)(lVar4 + 0x268);
        local_98 = *(undefined4 *)(lVar13 + lVar10 * 4);
        local_158 = *(longlong *)(lVar4 + 0xb0) + lVar12 * 4;
        local_160 = lVar12 * 4 + *(longlong *)(lVar4 + 0x98);
        local_168 = *(longlong *)(lVar4 + 0x68) + lVar12 * 0xc;
        local_150 = 0;
        local_134 = iVar3;
        FUN_141ba54c0(local_94,local_88,local_7c,lVar12 * 0xc + *(longlong *)(lVar4 + 0x48));
        local_108 = 0x42700000;
        fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar10 * 4);
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar16 = 0.0;
        fVar17 = 0.0;
        if ((fVar18 <= 0.9999) && (fVar16 = 1.0, fVar17 = fVar1, 1e-08 < fVar18)) {
          fVar18 = logf(1.0 - fVar18);
          fVar16 = expf(fVar1 * fVar18 * 60.0);
          fVar17 = (fVar16 + -1.0) / (fVar18 * 60.0);
        }
        local_f0 = lVar9 + lVar10 * 0x40;
        local_e8 = lVar14;
        local_e0 = lVar15;
        if (*(char *)(lVar4 + 0x464) == '\x01') {
          bVar11 = iVar8 < local_134;
          local_a8 = &local_100;
          local_f8 = &local_9c;
          local_d0 = (int *)CONCAT44(fVar17,fVar16);
          local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
          piVar7 = local_b0;
          pcVar6 = (code *)&LAB_146df5b9a;
        }
        else {
          local_c0 = fVar16;
          local_bc = fVar17;
          if (*(char *)(lVar4 + 0x465) == '\x01') {
            bVar11 = iVar8 < local_134;
            local_110 = &local_100;
            local_f8 = &local_9c;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_118;
            pcVar6 = (code *)&LAB_146df5c9e;
            local_b8 = fVar1;
          }
          else {
            bVar11 = iVar8 < local_134;
            local_120 = &local_100;
            local_f8 = &local_9c;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_128;
            pcVar6 = (code *)&LAB_146df5fc0;
            local_b8 = fVar1;
          }
        }
      }
    }
  }
  else {
    lVar13 = lVar4 + 0x20;
    if (0.0 < fVar18) {
      local_130 = lVar9;
      if (lVar10 == 0) {
        local_104 = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
        lVar9 = (longlong)local_104;
        lVar14 = lVar9 * 0xc + *(longlong *)(lVar4 + 0x250);
        lVar10 = lVar9 * 400 + *(longlong *)(lVar4 + 0x268);
        local_134 = iVar3;
        FUN_1429e736a(lVar10,lVar13,fVar1);
        local_98 = *(undefined4 *)(*(longlong *)(lVar4 + 0x2e0) + lVar9 * 4);
        iVar8 = iVar8 - iVar2;
        local_158 = *(longlong *)(lVar4 + 0xb0) + lVar12 * 4;
        local_160 = lVar12 * 4 + *(longlong *)(lVar4 + 0x98);
        local_168 = *(longlong *)(lVar4 + 0x68) + lVar12 * 0xc;
        local_150 = 0;
        local_148 = iVar8;
        FUN_141ba54c0(local_94,local_88,local_7c,lVar12 * 0xc + *(longlong *)(lVar4 + 0x48));
        local_f0 = local_130;
        local_108 = 0x42700000;
        fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar9 * 4);
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar16 = 0.0;
        fVar17 = 0.0;
        if ((fVar18 <= 0.9999) && (fVar16 = 1.0, fVar17 = fVar1, 1e-08 < fVar18)) {
          fVar18 = logf(1.0 - fVar18);
          fVar16 = expf(fVar1 * fVar18 * 60.0);
          fVar17 = (fVar16 + -1.0) / (fVar18 * 60.0);
        }
        local_f0 = local_f0 + lVar9 * 0x40;
        local_e8 = lVar14;
        local_e0 = lVar10;
        if (*(char *)(lVar4 + 0x464) == '\x01') {
          bVar11 = iVar8 < local_134;
          local_a8 = &local_100;
          local_d0 = (int *)CONCAT44(fVar17,fVar16);
          local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
          piVar7 = local_b0;
          pcVar6 = (code *)&LAB_146df4ba2;
        }
        else {
          local_c0 = fVar16;
          local_bc = fVar17;
          if (*(char *)(lVar4 + 0x465) == '\x01') {
            bVar11 = iVar8 < local_134;
            local_110 = &local_100;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_118;
            pcVar6 = (code *)&LAB_146df4ca6;
            local_b8 = fVar1;
          }
          else {
            bVar11 = iVar8 < local_134;
            local_120 = &local_100;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_128;
            pcVar6 = (code *)&LAB_146df4f90;
            local_b8 = fVar1;
          }
        }
      }
      else {
        local_104 = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
        lVar9 = (longlong)local_104;
        lVar14 = lVar9 * 0xc + *(longlong *)(lVar4 + 0x250);
        lVar10 = lVar9 * 400 + *(longlong *)(lVar4 + 0x268);
        local_134 = iVar3;
        FUN_1429e736a(lVar10,lVar13,fVar1);
        local_98 = *(undefined4 *)(*(longlong *)(lVar4 + 0x2e0) + lVar9 * 4);
        iVar8 = iVar8 - iVar2;
        local_158 = *(longlong *)(lVar4 + 0xb0) + lVar12 * 4;
        local_160 = lVar12 * 4 + *(longlong *)(lVar4 + 0x98);
        local_168 = *(longlong *)(lVar4 + 0x68) + lVar12 * 0xc;
        local_150 = 0;
        local_148 = iVar8;
        FUN_141ba54c0(local_94,local_88,local_7c,lVar12 * 0xc + *(longlong *)(lVar4 + 0x48));
        local_f0 = local_130;
        local_108 = 0x42700000;
        fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar9 * 4);
        if (1.0 <= fVar18) {
          fVar18 = 1.0;
        }
        if (fVar18 <= 0.0) {
          fVar18 = 0.0;
        }
        fVar16 = 0.0;
        fVar17 = 0.0;
        if ((fVar18 <= 0.9999) && (fVar16 = 1.0, fVar17 = fVar1, 1e-08 < fVar18)) {
          fVar18 = logf(1.0 - fVar18);
          fVar16 = expf(fVar1 * fVar18 * 60.0);
          fVar17 = (fVar16 + -1.0) / (fVar18 * 60.0);
        }
        local_f0 = local_f0 + lVar9 * 0x40;
        local_e8 = lVar14;
        local_e0 = lVar10;
        if (*(char *)(lVar4 + 0x464) == '\x01') {
          bVar11 = iVar8 < local_134;
          local_a8 = &local_100;
          local_d0 = (int *)CONCAT44(fVar17,fVar16);
          local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
          piVar7 = local_b0;
          pcVar6 = (code *)&LAB_146df476c;
        }
        else {
          local_c0 = fVar16;
          local_bc = fVar17;
          if (*(char *)(lVar4 + 0x465) == '\x01') {
            bVar11 = iVar8 < local_134;
            local_110 = &local_100;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_118;
            pcVar6 = (code *)&LAB_146df4870;
            local_b8 = fVar1;
          }
          else {
            bVar11 = iVar8 < local_134;
            local_120 = &local_100;
            local_d0 = &local_108;
            local_c8 = &local_104;
            piVar7 = local_128;
            pcVar6 = FUN_144b06372;
            local_b8 = fVar1;
          }
        }
      }
      local_d8 = &local_98;
      local_f8 = &local_9c;
      *(code **)piVar7 = pcVar6;
      goto LAB_1429bfb06;
    }
    if (lVar10 == 0) {
      local_104 = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
      lVar10 = (longlong)local_104;
      lVar14 = lVar10 * 0xc + *(longlong *)(lVar4 + 0x250);
      lVar12 = lVar10 * 400 + *(longlong *)(lVar4 + 0x268);
      local_134 = iVar3;
      FUN_1429e736a(lVar12,lVar13,fVar1);
      local_98 = *(undefined4 *)(*(longlong *)(lVar4 + 0x2e0) + lVar10 * 4);
      local_108 = 0x42700000;
      fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar10 * 4);
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar16 = 0.0;
      fVar17 = 0.0;
      if ((fVar18 <= 0.9999) && (fVar16 = 1.0, fVar17 = fVar1, 1e-08 < fVar18)) {
        fVar18 = logf(1.0 - fVar18);
        fVar16 = expf(fVar1 * fVar18 * 60.0);
        fVar17 = (fVar16 + -1.0) / (fVar18 * 60.0);
      }
      local_f0 = lVar9 + lVar10 * 0x40;
      local_e8 = lVar14;
      local_e0 = lVar12;
      if (*(char *)(lVar4 + 0x464) == '\x01') {
        iVar8 = iVar8 - iVar2;
        bVar11 = iVar8 < local_134;
        local_a8 = &local_100;
        local_f8 = &local_9c;
        local_d0 = (int *)CONCAT44(fVar17,fVar16);
        local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
        piVar7 = local_b0;
        pcVar6 = (code *)&LAB_146df55c4;
      }
      else {
        iVar8 = iVar8 - iVar2;
        local_c0 = fVar16;
        local_bc = fVar17;
        if (*(char *)(lVar4 + 0x465) == '\x01') {
          bVar11 = iVar8 < local_134;
          local_110 = &local_100;
          local_f8 = &local_9c;
          local_d0 = &local_108;
          local_c8 = &local_104;
          piVar7 = local_118;
          pcVar6 = (code *)&LAB_146df56c8;
          local_b8 = fVar1;
        }
        else {
          bVar11 = iVar8 < local_134;
          local_120 = &local_100;
          local_f8 = &local_9c;
          local_d0 = &local_108;
          local_c8 = &local_104;
          piVar7 = local_128;
          pcVar6 = (code *)&LAB_146df599a;
          local_b8 = fVar1;
        }
      }
    }
    else {
      local_104 = *(int *)(*(longlong *)(lVar4 + 0x208) + lVar12 * 4);
      lVar10 = (longlong)local_104;
      lVar14 = lVar10 * 0xc + *(longlong *)(lVar4 + 0x250);
      lVar12 = lVar10 * 400 + *(longlong *)(lVar4 + 0x268);
      local_134 = iVar3;
      FUN_1429e736a(lVar12,lVar13,fVar1);
      local_98 = *(undefined4 *)(*(longlong *)(lVar4 + 0x2e0) + lVar10 * 4);
      local_108 = 0x42700000;
      fVar18 = *(float *)(*(longlong *)(lVar4 + 0x2c8) + lVar10 * 4);
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      fVar16 = 0.0;
      fVar17 = 0.0;
      if ((fVar18 <= 0.9999) && (fVar16 = 1.0, fVar17 = fVar1, 1e-08 < fVar18)) {
        fVar18 = logf(1.0 - fVar18);
        fVar16 = expf(fVar1 * fVar18 * 60.0);
        fVar17 = (fVar16 + -1.0) / (fVar18 * 60.0);
      }
      local_f0 = lVar9 + lVar10 * 0x40;
      local_e8 = lVar14;
      local_e0 = lVar12;
      if (*(char *)(lVar4 + 0x464) == '\x01') {
        iVar8 = iVar8 - iVar2;
        bVar11 = iVar8 < local_134;
        local_a8 = &local_100;
        local_f8 = &local_9c;
        local_d0 = (int *)CONCAT44(fVar17,fVar16);
        local_c8 = (int *)CONCAT44(local_c8._4_4_,fVar1);
        piVar7 = local_b0;
        pcVar6 = (code *)&LAB_146df51a6;
      }
      else {
        iVar8 = iVar8 - iVar2;
        local_c0 = fVar16;
        local_bc = fVar17;
        if (*(char *)(lVar4 + 0x465) == '\x01') {
          bVar11 = iVar8 < local_134;
          local_110 = &local_100;
          local_f8 = &local_9c;
          local_d0 = &local_108;
          local_c8 = &local_104;
          piVar7 = local_118;
          pcVar6 = (code *)&LAB_146df52aa;
          local_b8 = fVar1;
        }
        else {
          bVar11 = iVar8 < local_134;
          local_120 = &local_100;
          local_f8 = &local_9c;
          local_d0 = &local_108;
          local_c8 = &local_104;
          piVar7 = local_128;
          pcVar6 = FUN_144b0677e;
          local_b8 = fVar1;
        }
      }
    }
  }
  local_d8 = &local_98;
  *(code **)piVar7 = pcVar6;
LAB_1429bfb06:
  FUN_1400bd65e(iVar8,piVar7,bVar11);
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429bfb4a FUN_1429bfb4a body=106 status=ok
// SIG undefined FUN_1429bfb4a(void)

void FUN_1429bfb4a(undefined8 *param_1,int *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined4 local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_1[2] + 0x40);
  if (lVar1 == 0) {
    lVar1 = param_1[2];
  }
  local_10 = *(undefined4 *)(lVar1 + (longlong)*param_2 * 8);
  local_c = *(undefined4 *)(lVar1 + 4 + (longlong)*param_2 * 8);
  (**(code **)param_1[1])(((undefined8 *)param_1[1])[1],*(undefined8 *)*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429bfbb6 FUN_1429bfbb6 body=167 status=ok
// SIG undefined FUN_1429bfbb6(void)

void FUN_1429bfbb6(longlong *param_1,longlong *param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  if (iVar1 < *param_4) {
    lVar2 = *param_1;
    iVar8 = *param_4 - iVar1;
    uVar9 = (longlong)iVar1 << 6 | 0x20;
    do {
      lVar3 = *param_2;
      local_44 = (undefined4)param_1[1];
      pcVar4 = *(code **)(lVar3 + -0x20 + uVar9);
      plVar5 = *(longlong **)(lVar3 + -0x10 + uVar9);
      plVar7 = (longlong *)(lVar3 + uVar9);
      if (plVar5 != (longlong *)0x0) {
        plVar7 = plVar5;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,lVar2 + 0x20,&local_44);
      uVar9 = uVar9 + 0x40;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429bfc5e FUN_1429bfc5e body=114 status=ok
// SIG undefined FUN_1429bfc5e(void)

void FUN_1429bfc5e(longlong *param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  if (*(char *)(*(longlong *)(*param_1 + 0x2f8) +
               (longlong)*(int *)(*(longlong *)(*param_1 + 0x208) + (longlong)*param_3 * 4)) == '\0'
     ) {
    if (*(char *)param_1[1] == '\x01') {
      FUN_14172bb22();
    }
    else if (*(longlong *)((char *)param_1[1] + 0xa0) == 0) {
      FUN_146df757c();
    }
    else {
      FUN_146df7492();
    }
  }
  else {
    FUN_146df7382(param_1[2],param_2,(int)param_1[3],(longlong)*param_3,*param_4);
  }
  return;
}



// FUNCTION 1429bfcd0 FUN_1429bfcd0 body=167 status=ok
// SIG undefined FUN_1429bfcd0(void)

void FUN_1429bfcd0(longlong *param_1,longlong *param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  if (iVar1 < *param_4) {
    lVar2 = *param_1;
    iVar8 = *param_4 - iVar1;
    uVar9 = (longlong)iVar1 << 6 | 0x20;
    do {
      lVar3 = *param_2;
      local_44 = (undefined4)param_1[1];
      pcVar4 = *(code **)(lVar3 + -0x20 + uVar9);
      plVar5 = *(longlong **)(lVar3 + -0x10 + uVar9);
      plVar7 = (longlong *)(lVar3 + uVar9);
      if (plVar5 != (longlong *)0x0) {
        plVar7 = plVar5;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,lVar2 + 0x20,&local_44);
      uVar9 = uVar9 + 0x40;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429bfd78 FUN_1429bfd78 body=167 status=ok
// SIG undefined FUN_1429bfd78(void)

void FUN_1429bfd78(longlong *param_1,longlong *param_2,int *param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  if (iVar1 < *param_4) {
    lVar2 = *param_1;
    iVar8 = *param_4 - iVar1;
    uVar9 = (longlong)iVar1 << 6 | 0x20;
    do {
      lVar3 = *param_2;
      local_44 = (undefined4)param_1[1];
      pcVar4 = *(code **)(lVar3 + -0x20 + uVar9);
      plVar5 = *(longlong **)(lVar3 + -0x10 + uVar9);
      plVar7 = (longlong *)(lVar3 + uVar9);
      if (plVar5 != (longlong *)0x0) {
        plVar7 = plVar5;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*pcVar4)(uVar6,lVar2 + 0x20,&local_44);
      uVar9 = uVar9 + 0x40;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429bfe2b FUN_1429bfe2b body=1245 status=ok
// SIG undefined FUN_1429bfe2b(void)

void FUN_1429bfe2b(void)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  FUN_141471170(&DAT_14c993ff0,L"p.CollisionParticlesBVHDepth",&DAT_14c75f1f0,
                L"The maximum depth for collision particles bvh");
  atexit(FUN_1429b9fcc);
  local_48 = 0;
  FUN_141471170(&DAT_14c994000,L"p.ConstraintBPBVHDepth",&DAT_14c75f1cc,
                L"The maximum depth for constraint bvh");
  atexit(FUN_1429ba011);
  local_48 = 0;
  FUN_141471170(&DAT_14c994010,L"p.BPTreeOfGrids",&DAT_14c75f1d0,
                L"Whether to use a seperate tree of grids for bp");
  atexit(FUN_1429ba056);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c994020,L"p.CollisionFriction",&DAT_14c75f1d4,
                L"Collision friction for all contacts if >= 0");
  atexit(FUN_1429ba09b);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c994030,L"p.CollisionRestitution",&DAT_14c75f1d8,
                L"Collision restitution for all contacts if >= 0");
  atexit(FUN_1429ba0e0);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c994040,L"p.CollisionAngularFriction",&DAT_14c75f1dc,
                L"Collision angular friction for all contacts if >= 0");
  atexit(FUN_1429ba125);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c994050,L"p.CollisionBaseFrictionImpulse",&DAT_14c75f1e0,
                L"Collision base friction position impulse for all contacts if >= 0");
  atexit(FUN_1429ba16a);
  local_48 = 0;
  FUN_141471170(&DAT_14c994060,L"p.EnableCollisions",&DAT_14c75f1e4,
                L"Enable/Disable collisions on the Chaos solver.");
  atexit(FUN_1429ba1af);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c994078,L"p.DefaultCollisionFriction",&DAT_14c994070,
                L"Collision friction default value if no materials are found.");
  atexit(FUN_1429ba1f4);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c994090,L"p.DefaultCollisionRestitution",&DAT_14c994088,
                L"Collision restitution default value if no materials are found.");
  atexit(FUN_1429ba239);
  local_48 = 0;
  FUN_1415c789c(&DAT_14c9940a0,L"p.CollisionRestitutionThreshold",&DAT_14c75f1e8,
                L"Collision restitution threshold override if >= 0 (units of acceleration)");
  atexit(FUN_1429ba27e);
  local_48 = 0;
  FUN_141471170(&DAT_14c9940b8,L"p.CollisionCanAlwaysDisableContacts",&DAT_14c9940b0,
                L"Collision culling will always be able to permanently disable contacts");
  atexit(FUN_1429ba2c3);
  local_48 = 0;
  FUN_141471170(&DAT_14c9940d0,L"p.CollisionCanNeverDisableContacts",&DAT_14c9940c8,
                L"Collision culling will never be able to permanently disable contacts");
  atexit(FUN_1429ba308);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9940e0,L"p.Chaos.Collision.AllowParticleTracking",&DAT_14c75f1ec,
                L"Allow particles to track their collisions constraints when their DoBufferCollisions flag is enable [def:true]"
               );
  atexit(FUN_1429ba34d);
  local_48 = 0;
  FUN_14153156c(&DAT_14c9940f8,L"p.Chaos.Collision.EnableEdgeCollisionPruning",&DAT_14c75f1ed,
                &DAT_149dfb77a);
  atexit(FUN_1429ba392);
  local_48 = 0;
  FUN_14153156c(&DAT_14c994108,L"p.Chaos.Collision.EnableMeshCollisionPruning",&DAT_14c75f1ee,
                &DAT_149dfb77a);
  atexit(FUN_1429ba3d7);
  local_48 = 0;
  FUN_14153156c(&DAT_14c994118,L"p.Chaos.Collision.EnableSubSurfaceCollisionPruning",&DAT_14c9940f0,
                &DAT_149dfb77a);
  atexit(FUN_1429ba41c);
  local_48 = 0;
  FUN_14153156c(&DAT_14c994130,L"p.Chaos.Collision.DebugDrawProbeDetection",&DAT_14c994128,
                L"Draw probe constraint detection.");
  atexit(FUN_1429ba461);
  local_34._0_1_ = 1;
  local_48 = 1;
  FUN_140bd5914(&DAT_14c994140,L"p.Chaos.PBDEvolution.UseNestedParallelFor",&local_34,&DAT_149dfb77a
               );
  atexit(FUN_1429bcfa6);
  local_34._0_1_ = 1;
  local_48 = 1;
  FUN_140bd5914(&DAT_14c994158,L"p.Chaos.PBDEvolution.FastPositionBasedFriction",&local_34,
                &DAT_149dfb77a);
  atexit(FUN_1429bcfeb);
  local_34 = CONCAT31(local_34._1_3_,1);
  local_48 = 1;
  FUN_140bd5914(&DAT_14c994170,L"p.Chaos.PBDEvolution.UseSmoothTimeStep",&local_34,&DAT_149dfb77a);
  atexit(FUN_1429bd030);
  local_34 = 300;
  local_48 = 1;
  FUN_14078dbce(&DAT_14c994188,L"p.Chaos.PBDEvolution.MinParallelBatchSize",&local_34,&DAT_149dfb77a
               );
  atexit(FUN_1429bd075);
  local_34 = local_34 & 0xffffff00;
  local_48 = 1;
  FUN_140bd5914(&DAT_14c9941a0,L"p.Chaos.PBDEvolution.WriteCCDContacts",&local_34,
                L"Write CCD collision contacts and normals potentially causing the CCD collision threads to lock, allowing for debugging of these contacts."
               );
  atexit(FUN_1429bd0ba);
  local_34 = local_34 & 0xffffff00;
  local_48 = 1;
  FUN_140bd5914(&DAT_14c9941b8,L"p.Chaos.PBDEvolution.ParalleIntegrate",&local_34,
                L"Run the integration step in parallel for.");
  atexit(FUN_1429bd0ff);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c030c FUN_1429c030c body=553 status=ok
// SIG undefined FUN_1429c030c(void)

void FUN_1429c030c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x38) < 2) ||
     (ABS(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x44)) <= 0.0001)) {
    uVar2 = **(undefined4 **)(param_1 + 0x30);
    if ((*(int *)(param_1 + 0x80) < 2) ||
       (ABS(*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x8c)) <= 0.0001)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
      if (lVar4 != 0) {
        uVar1 = **(undefined4 **)(param_1 + 0x78);
        lVar3 = **(longlong **)(param_1 + 8);
        lVar5 = 0;
        do {
          FUN_141b2a2b0(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(lVar3 + lVar5),uVar2,uVar1,
                        *(undefined4 *)(lVar3 + 8 + lVar5),*(undefined4 *)(param_1 + 0x10));
          lVar5 = lVar5 + 0x10;
        } while (lVar4 * 0x10 != lVar5);
      }
    }
    else {
      lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
      if (lVar4 != 0) {
        lVar3 = **(longlong **)(param_1 + 8);
        lVar5 = 0;
        do {
          FUN_141b2a380(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(lVar3 + lVar5),uVar2,
                        *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x78),
                        *(undefined4 *)(lVar3 + 8 + lVar5),*(undefined4 *)(param_1 + 0x10));
          lVar5 = lVar5 + 0x10;
        } while (lVar4 * 0x10 != lVar5);
      }
    }
  }
  else if ((*(int *)(param_1 + 0x80) < 2) ||
          (ABS(*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x8c)) <= 0.0001)) {
    lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar4 != 0) {
      uVar2 = **(undefined4 **)(param_1 + 0x78);
      lVar3 = **(longlong **)(param_1 + 8);
      lVar5 = 0;
      do {
        FUN_141b2a580(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(lVar3 + lVar5),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),uVar2,
                      *(undefined4 *)(lVar3 + 8 + lVar5),*(undefined4 *)(param_1 + 0x10));
        lVar5 = lVar5 + 0x10;
      } while (lVar4 * 0x10 != lVar5);
    }
  }
  else {
    lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar4 != 0) {
      lVar3 = **(longlong **)(param_1 + 8);
      lVar5 = 0;
      do {
        FUN_141b2a470(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(lVar3 + lVar5),
                      *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x78),
                      *(undefined4 *)(lVar3 + 8 + lVar5),*(undefined4 *)(param_1 + 0x10));
        lVar5 = lVar5 + 0x10;
      } while (lVar4 * 0x10 != lVar5);
    }
  }
  return;
}



// FUNCTION 1429c0536 FUN_1429c0536 body=609 status=ok
// SIG undefined FUN_1429c0536(void)

void FUN_1429c0536(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x38) < 2) ||
     (ABS(*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x44)) <= 0.0001)) {
    uVar2 = **(undefined4 **)(param_1 + 0x30);
    if ((*(int *)(param_1 + 0x80) < 2) ||
       (ABS(*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x8c)) <= 0.0001)) {
      lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
      if (lVar4 != 0) {
        uVar1 = **(undefined4 **)(param_1 + 0x78);
        lVar3 = **(longlong **)(param_1 + 8);
        lVar5 = 0;
        do {
          FUN_141b2a2b0((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                        *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                        *(undefined8 *)(lVar3 + lVar5),uVar2,uVar1,
                        *(undefined4 *)(lVar3 + 8 + lVar5),*(undefined4 *)(param_1 + 0x10));
          lVar5 = lVar5 + 0x10;
        } while (lVar4 * 0x10 != lVar5);
      }
    }
    else {
      lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
      if (lVar4 != 0) {
        lVar3 = **(longlong **)(param_1 + 8);
        lVar5 = 0;
        do {
          FUN_141b2a380((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                        *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                        *(undefined8 *)(lVar3 + lVar5),uVar2,*(undefined8 *)(param_1 + 0x68),
                        *(undefined8 *)(param_1 + 0x78),*(undefined4 *)(lVar3 + 8 + lVar5),
                        *(undefined4 *)(param_1 + 0x10));
          lVar5 = lVar5 + 0x10;
        } while (lVar4 * 0x10 != lVar5);
      }
    }
  }
  else if ((*(int *)(param_1 + 0x80) < 2) ||
          (ABS(*(float *)(param_1 + 0x88) - *(float *)(param_1 + 0x8c)) <= 0.0001)) {
    lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar4 != 0) {
      uVar2 = **(undefined4 **)(param_1 + 0x78);
      lVar3 = **(longlong **)(param_1 + 8);
      lVar5 = 0;
      do {
        FUN_141b2a580((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                      *(undefined8 *)(lVar3 + lVar5),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30),uVar2,*(undefined4 *)(lVar3 + 8 + lVar5),
                      *(undefined4 *)(param_1 + 0x10));
        lVar5 = lVar5 + 0x10;
      } while (lVar4 * 0x10 != lVar5);
    }
  }
  else {
    lVar4 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
    if (lVar4 != 0) {
      lVar3 = **(longlong **)(param_1 + 8);
      lVar5 = 0;
      do {
        FUN_141b2a470((longlong)*(int *)(param_2 + 0x10) * 0x10 +
                      *(longlong *)(*(longlong *)(param_2 + 8) + 0xa8),
                      *(undefined8 *)(lVar3 + lVar5),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x68),
                      *(undefined8 *)(param_1 + 0x78),*(undefined4 *)(lVar3 + 8 + lVar5),
                      *(undefined4 *)(param_1 + 0x10));
        lVar5 = lVar5 + 0x10;
      } while (lVar4 * 0x10 != lVar5);
    }
  }
  return;
}



// FUNCTION 1429c0797 FUN_1429c0797 body=69 status=ok
// SIG undefined FUN_1429c0797(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0797(void)

{
  _DAT_14c994210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c07d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994218,1);
  return;
}



// FUNCTION 1429c07dc FUN_1429c07dc body=69 status=ok
// SIG undefined FUN_1429c07dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c07dc(void)

{
  _DAT_14c994220 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c081e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994228,1);
  return;
}



// FUNCTION 1429c0821 FUN_1429c0821 body=69 status=ok
// SIG undefined FUN_1429c0821(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0821(void)

{
  _DAT_14c994230 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0863. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994238,1);
  return;
}



// FUNCTION 1429c0866 FUN_1429c0866 body=69 status=ok
// SIG undefined FUN_1429c0866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0866(void)

{
  _DAT_14c994240 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c08a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994248,1);
  return;
}



// FUNCTION 1429c08ab FUN_1429c08ab body=69 status=ok
// SIG undefined FUN_1429c08ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c08ab(void)

{
  _DAT_14c994250 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c08ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994258,1);
  return;
}



// FUNCTION 1429c08f0 FUN_1429c08f0 body=69 status=ok
// SIG undefined FUN_1429c08f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c08f0(void)

{
  _DAT_14c994260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994268,1);
  return;
}



// FUNCTION 1429c0935 FUN_1429c0935 body=69 status=ok
// SIG undefined FUN_1429c0935(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0935(void)

{
  _DAT_14c994278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994280,1);
  return;
}



// FUNCTION 1429c097a FUN_1429c097a body=69 status=ok
// SIG undefined FUN_1429c097a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c097a(void)

{
  _DAT_14c994290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c09bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994298,1);
  return;
}



// FUNCTION 1429c09bf FUN_1429c09bf body=69 status=ok
// SIG undefined FUN_1429c09bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c09bf(void)

{
  _DAT_14c9942a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0a01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9942b0,1);
  return;
}



// FUNCTION 1429c0a04 FUN_1429c0a04 body=69 status=ok
// SIG undefined FUN_1429c0a04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0a04(void)

{
  _DAT_14c9942c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9942c8,1);
  return;
}



// FUNCTION 1429c0a49 FUN_1429c0a49 body=69 status=ok
// SIG undefined FUN_1429c0a49(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0a49(void)

{
  _DAT_14c9942d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0a8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9942d8,1);
  return;
}



// FUNCTION 1429c0a8e FUN_1429c0a8e body=69 status=ok
// SIG undefined FUN_1429c0a8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0a8e(void)

{
  _DAT_14c9942e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9942e8,1);
  return;
}



// FUNCTION 1429c0ad3 FUN_1429c0ad3 body=69 status=ok
// SIG undefined FUN_1429c0ad3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0ad3(void)

{
  _DAT_14c9942f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0b15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9942f8,1);
  return;
}



// FUNCTION 1429c0b18 FUN_1429c0b18 body=69 status=ok
// SIG undefined FUN_1429c0b18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c0b18(void)

{
  _DAT_14c994300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c0b5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994308,1);
  return;
}



// FUNCTION 1429c0b5e FUN_1429c0b5e body=2444 status=ok
// SIG undefined FUN_1429c0b5e(void)

/* WARNING: Type propagation algorithm not settling */

longlong ****
FUN_1429c0b5e(longlong param_1,int param_2,undefined8 *param_3,longlong *****param_4,
             undefined8 param_5,double *param_6,undefined8 param_7)

{
  longlong *plVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong **pplVar6;
  longlong **pplVar7;
  longlong *plVar8;
  longlong *****ppppplVar9;
  longlong ****pppplVar10;
  int iVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ushort uVar20;
  ulonglong uVar21;
  undefined4 uVar22;
  undefined8 unaff_RBP;
  undefined7 uVar24;
  ulonglong uVar23;
  ushort uVar25;
  int iVar26;
  byte bVar27;
  longlong lVar28;
  int iVar29;
  ulonglong uVar30;
  byte bVar31;
  ulonglong uVar32;
  float fVar33;
  undefined1 auStack_178 [32];
  longlong *****local_158;
  byte local_149;
  ulonglong local_148;
  int local_140;
  int local_13c;
  longlong *local_138;
  longlong *****local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong ****local_108;
  undefined8 *local_100;
  longlong ****local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_a0 = param_4[5];
  if (local_a0 == (longlong ****)0x0) {
    local_158 = (longlong *****)&local_98;
    local_98 = CONCAT44(local_98._4_4_,0x10000);
    FUN_14043bbba(*(undefined8 *)(param_1 + 0x18),&local_108,1,param_7);
    local_a0 = (longlong ****)*local_108;
    if (local_108 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140a36458(*(undefined8 *)(param_1 + 0x18),local_a0);
  *(undefined4 *)((*local_a0)[0x58] + (longlong)*(int *)(local_a0 + 1) * 2) = 0x7fffffff;
  local_118 = param_1 + 0x28;
  FUN_140a3609c(local_118,&local_108,&local_a0,0);
  *(byte *)((longlong)(*local_a0)[0xd0] + (longlong)*(int *)(local_a0 + 1)) =
       *(byte *)((longlong)(*local_a0)[0xd0] + (longlong)*(int *)(local_a0 + 1)) & 0xfe;
  uVar22 = *(undefined4 *)(param_3 + 1);
  iVar26 = *(int *)(local_a0 + 1);
  pplVar6 = (*local_a0)[0xb5];
  pplVar6[(longlong)iVar26 * 2] = (longlong *)0x0;
  *(undefined4 *)(pplVar6 + (longlong)iVar26 * 2 + 1) = uVar22;
  *(int *)((longlong)(*local_a0)[0xbb] + (longlong)*(int *)(local_a0 + 1) * 4) = param_2;
  *(undefined4 *)((longlong)(*local_a0)[0xca] + (longlong)*(int *)(local_a0 + 1) * 4) = 0;
  FUN_1402bf4a4(param_1,local_a0);
  *(byte *)((longlong)(*local_a0)[0xd0] + (longlong)*(int *)(local_a0 + 1)) =
       *(byte *)((longlong)(*local_a0)[0xd0] + (longlong)*(int *)(local_a0 + 1)) & 0xfd |
       *(char *)(param_4 + 9) * '\x02';
  plVar1 = (longlong *)(param_1 + 200);
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar15 = ((uint)((ulonglong)local_a0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_a0 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    lVar14 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x108);
    }
    iVar26 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x110) - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
    if (iVar26 != -1) {
      lVar14 = *plVar1;
      iVar29 = iVar26;
      do {
        if (*(longlong *****)(lVar14 + (longlong)iVar29 * 0x20) == local_a0) goto LAB_1429c0f12;
        iVar29 = *(int *)((longlong)iVar29 * 0x20 + lVar14 + 0x18);
      } while (iVar29 != -1);
    }
  }
  local_108 = (longlong ****)&local_a0;
  local_100 = param_3;
  FUN_140c6236c(plVar1);
  goto LAB_1429c0d89;
  while (iVar26 = *(int *)(lVar28 + 0x18), iVar26 != -1) {
LAB_1429c0f12:
    lVar28 = lVar14 + (longlong)iVar26 * 0x20;
    if (*(longlong *****)(lVar14 + (longlong)iVar26 * 0x20) == local_a0) goto LAB_1429c1438;
  }
  lVar28 = 0;
LAB_1429c1438:
  if ((undefined8 *)(lVar28 + 8) != param_3) {
    if (*(longlong *)(lVar28 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar28 + 8) = *param_3;
    *param_3 = 0;
    *(undefined4 *)(lVar28 + 0x10) = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(lVar28 + 0x14) = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
  }
LAB_1429c0d89:
  uVar30 = 0;
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar15 = ((uint)((ulonglong)local_a0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_a0 >> 4)) *
             -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    lVar14 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x108);
    }
    iVar26 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x110) - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
    if (iVar26 != -1) {
      do {
        lVar14 = *plVar1 + (longlong)iVar26 * 0x20;
        if (*(longlong *****)(*plVar1 + (longlong)iVar26 * 0x20) == local_a0) goto LAB_1429c0e15;
        iVar26 = *(int *)(lVar14 + 0x18);
      } while (iVar26 != -1);
    }
  }
  lVar14 = 0;
LAB_1429c0e15:
  local_108 = *(longlong *****)(lVar14 + 8);
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_100 = (undefined8 *)CONCAT44(local_100._4_4_,*(undefined4 *)(lVar14 + 0x10));
  FUN_1405039ea(&local_98,&local_108);
  FUN_14172a61a(*(undefined8 *)(param_1 + 0x18),&local_98);
  uVar12 = (ulonglong)local_70;
  uVar24 = (undefined7)((ulonglong)unaff_RBP >> 8);
  local_148 = uVar12;
  local_138 = plVar1;
  local_130 = param_4;
  if (local_70 == 0) {
    uVar21 = 1;
    iVar26 = 0;
    uVar19 = 0;
  }
  else {
    puVar13 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar13 = local_88;
    }
    uVar15 = *puVar13;
    if (uVar15 == 0) {
      iVar26 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar26 = local_70 - 1;
      }
      uVar30 = 0;
      uVar19 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar19 = uVar30;
      }
      iVar26 = 0;
      do {
        if (uVar19 == uVar30) goto LAB_1429c0f3a;
        iVar26 = iVar26 + 0x20;
        uVar15 = puVar13[uVar30 + 1];
        uVar30 = uVar30 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar30 = 0;
      iVar26 = 0;
    }
    uVar21 = (ulonglong)(-uVar15 & uVar15);
    uVar19 = uVar21 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar15 = (iVar26 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    uVar19 = (ulonglong)uVar15;
    if ((int)local_70 <= (int)uVar15) {
      uVar19 = uVar12;
    }
  }
  if ((uint)uVar19 == local_70) {
LAB_1429c0f3a:
    uVar22 = (undefined4)CONCAT71(uVar24,1);
    uVar20 = 4;
    uVar25 = 0;
  }
  else {
    local_120 = param_1 + 0x78;
    uVar15 = 0xffffffff;
    uVar23 = CONCAT71(uVar24,1);
    bVar27 = 0;
    bVar31 = 1;
    uVar32 = uVar12;
    local_13c = param_2;
    local_128 = param_1;
    do {
      plVar1 = *(longlong **)(local_98 + (longlong)(int)uVar19 * 0x10);
      lVar14 = (longlong)(int)plVar1[1] * 0x10;
      local_149 = *(char *)(*(longlong *)(*plVar1 + 0x2c0) + 0xb + lVar14) == '\x01';
      uVar20 = *(ushort *)(*(longlong *)(*plVar1 + 0x2c0) + 8 + lVar14);
      local_140 = iVar26;
      if ((plVar1 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar1 + 0xc))) {
        uVar23 = uVar23 & 0xffffffff;
        local_110 = uVar30;
        FUN_14016dd9c(local_118,plVar1);
        FUN_14016de36(local_120,plVar1);
        *(undefined4 *)(*(longlong *)(*plVar1 + 0x5d8) + (longlong)(int)plVar1[1] * 4) = 0;
        *(longlong *****)(*(longlong *)(*plVar1 + 0x5a8) + (longlong)(int)plVar1[1] * 0x10) =
             local_a0;
        *(float *)((longlong)(*local_a0)[0xca] + (longlong)*(int *)(local_a0 + 1) * 4) =
             *(float *)((longlong)(*local_a0)[0xca] + (longlong)*(int *)(local_a0 + 1) * 4) +
             *(float *)(*(longlong *)(*plVar1 + 0x650) + (longlong)(int)plVar1[1] * 4);
        FUN_1402bf4a4(local_128,local_a0);
        fVar33 = *(float *)((longlong)(*local_a0)[0xc4] + (longlong)*(int *)(local_a0 + 1) * 4);
        fVar2 = *(float *)(*(longlong *)(*plVar1 + 0x620) + (longlong)(int)plVar1[1] * 4);
        if (fVar33 <= fVar2) {
          fVar33 = fVar2;
        }
        *(float *)((longlong)(*local_a0)[0xc4] + (longlong)*(int *)(local_a0 + 1) * 4) = fVar33;
        iVar26 = *(int *)((*local_a0)[0x58] + (longlong)*(int *)(local_a0 + 1) * 2);
        iVar29 = *(int *)(*(longlong *)(*plVar1 + 0x2c0) + (longlong)(int)plVar1[1] * 0x10);
        if (iVar26 < iVar29) {
          iVar29 = iVar26;
        }
        *(int *)((*local_a0)[0x58] + (longlong)*(int *)(local_a0 + 1) * 2) = iVar29;
        uVar12 = (ulonglong)local_70;
        uVar30 = local_110;
        uVar32 = local_148;
      }
      uVar15 = uVar15 & ~(uint)uVar21;
      puVar13 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar13 = local_88;
      }
      iVar29 = (int)uVar30;
      lVar14 = (longlong)iVar29;
      uVar16 = puVar13[lVar14] & uVar15;
      iVar11 = (int)uVar12;
      iVar26 = local_140;
      if (uVar16 == 0) {
        iVar17 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar17 = iVar11 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar26 = local_140 + 0x20;
        iVar18 = iVar17;
        if (iVar17 < iVar29) {
          iVar18 = iVar29;
        }
        if (iVar29 < iVar17) {
          lVar28 = 0;
          do {
            uVar16 = puVar13[lVar14 + lVar28 + 1];
            if (uVar16 != 0) {
              uVar30 = (ulonglong)(iVar29 + (int)lVar28 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1429c1164;
            }
            iVar26 = iVar26 + 0x20;
            lVar28 = lVar28 + 1;
          } while (iVar18 - lVar14 != lVar28);
          uVar15 = 0xffffffff;
          iVar29 = iVar18;
        }
        uVar30 = (ulonglong)(iVar29 + 1);
        uVar19 = uVar12;
        uVar32 = local_148;
      }
      else {
LAB_1429c1164:
        uVar21 = (ulonglong)(-uVar16 & uVar16);
        uVar19 = uVar21 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar16 = (iVar26 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        uVar19 = (ulonglong)uVar16;
        if (iVar11 <= (int)uVar16) {
          uVar19 = uVar12;
        }
      }
      uVar23 = CONCAT71((int7)(uVar23 >> 8),(byte)uVar23 & local_149);
      uVar22 = (undefined4)uVar23;
      bVar31 = bVar31 & (byte)((uVar20 & 4) >> 2);
      bVar27 = bVar27 | (byte)(uVar20 >> 9) & 1;
    } while ((int)uVar19 != (int)uVar32);
    uVar20 = (ushort)bVar31 << 2;
    uVar25 = (ushort)bVar27 << 9;
    param_1 = local_128;
    param_2 = local_13c;
  }
  if ((int)uStack_90 - local_64 != 0) {
    *(float *)((longlong)(*local_a0)[0xca] + (longlong)*(int *)(local_a0 + 1) * 4) =
         *(float *)((longlong)(*local_a0)[0xca] + (longlong)*(int *)(local_a0 + 1) * 4) /
         (float)((int)uStack_90 - local_64);
    FUN_1402bf4a4(param_1,local_a0);
    FUN_1403f4a1c(*local_a0,*(undefined4 *)(local_a0 + 1),uVar22);
    *(ushort *)((*local_a0)[0x58] + (longlong)*(int *)(local_a0 + 1) * 2 + 1) =
         uVar20 | *(ushort *)((*local_a0)[0x58] + (longlong)*(int *)(local_a0 + 1) * 2 + 1) & 0xfffb
    ;
    *(ushort *)((*local_a0)[0x58] + (longlong)*(int *)(local_a0 + 1) * 2 + 1) =
         uVar25 | *(ushort *)((*local_a0)[0x58] + (longlong)*(int *)(local_a0 + 1) * 2 + 1) & 0xfdff
    ;
  }
  if (param_6 == (double *)0x0) {
    FUN_1429c14eb(local_a0,&local_98);
    FUN_14172a7c0(&local_108,local_a0,1);
  }
  else {
    plVar8 = (longlong *)param_6[5];
    plVar1 = (longlong *)param_6[6];
    iVar26 = *(int *)(local_a0 + 1);
    pplVar7 = (*local_a0)[5];
    pplVar6 = pplVar7 + (longlong)iVar26 * 3;
    *pplVar6 = (longlong *)param_6[4];
    pplVar6[1] = plVar8;
    pplVar7[(longlong)iVar26 * 3 + 2] = plVar1;
    dVar3 = param_6[3];
    dVar4 = param_6[2];
    dVar5 = param_6[1];
    lVar14 = (longlong)*(int *)(local_a0 + 1);
    pplVar6 = (*local_a0)[9];
    *(float *)(pplVar6 + lVar14 * 2) = (float)*param_6;
    *(float *)((longlong)pplVar6 + lVar14 * 0x10 + 4) = (float)dVar5;
    *(float *)(pplVar6 + lVar14 * 2 + 1) = (float)dVar4;
    *(float *)((longlong)pplVar6 + lVar14 * 0x10 + 0xc) = (float)dVar3;
    FUN_1429c14eb(local_a0,&local_98);
  }
  ppppplVar9 = local_130;
  plVar1 = local_138;
  FUN_140a357a8(local_a0,local_138,*(undefined8 *)(param_1 + 0x18));
  local_158 = ppppplVar9;
  FUN_1429c1c96(local_a0,&local_98,plVar1,param_5);
  FUN_1409ee4e2(param_1,local_a0,ppppplVar9);
  pppplVar10 = local_a0;
  if (0 < param_2) {
    local_108 = (longlong ****)0x0;
    local_100 = (undefined8 *)CONCAT44(local_100._4_4_,1);
    FUN_140509e62(&local_108,1,0);
    *local_108 = (longlong ***)pppplVar10;
    local_158 = &local_108;
    FUN_146cb7fae(param_1 + 0x118,param_1 + 0x178,param_2,1);
    if (local_108 != (longlong ****)0x0) {
      FUN_1400020a8();
    }
  }
  pppplVar10 = local_a0;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140a356f6(&local_98);
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return pppplVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c14eb FUN_1429c14eb body=1961 status=ok
// SIG undefined FUN_1429c14eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c14eb(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  int iVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  uint uVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  longlong lVar31;
  longlong lVar32;
  int iVar33;
  ulonglong uVar34;
  uint uVar35;
  uint uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  longlong *local_368;
  uint *local_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_2f8 [4];
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298 [12];
  longlong local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
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
  undefined8 local_150;
  undefined8 local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  uVar37 = 0;
  uVar38 = 0x3ff00000;
  uVar45 = 0;
  uVar46 = 0;
  uVar51 = 0;
  uVar52 = 0;
  uVar55 = 0;
  uVar56 = 0;
  uVar43 = 0;
  uVar44 = 0;
  uVar47 = 0;
  uVar48 = 0;
  uVar49 = 0;
  uVar50 = 0;
  uVar53 = 0;
  uVar54 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uVar39 = 0;
  uVar40 = 0;
  uVar28 = 0;
  uVar20 = 0;
  if (*(int *)((longlong)param_2 + 0x34) < (int)param_2[1]) {
    lVar31 = (longlong)(int)param_1[1];
    lVar25 = *(longlong *)(*param_1 + 0x48);
    lVar32 = lVar31 * 0x10;
    dVar9 = (double)*(float *)(lVar25 + 0xc + lVar32);
    lVar24 = *(longlong *)(*param_1 + 0x28);
    dVar10 = (double)*(float *)(lVar25 + 4 + lVar32);
    local_228._8_4_ = SUB84(dVar10,0);
    local_228._0_8_ = (double)*(float *)(lVar25 + lVar32);
    local_228._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    local_218._8_4_ = SUB84(dVar9,0);
    local_218._0_8_ = (double)*(float *)(lVar25 + 8 + lVar32);
    local_218._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
    puVar29 = (undefined8 *)(lVar24 + lVar31 * 0x18);
    local_208 = *puVar29;
    uStack_200 = puVar29[1];
    local_1f8 = *(undefined8 *)(lVar24 + 0x10 + lVar31 * 0x18);
    uStack_1f0 = 0;
    local_1e8 = 0x3ff0000000000000;
    uStack_1e0 = 0x3ff0000000000000;
    local_1d8 = 0x3ff0000000000000;
    uStack_1d0 = 0;
    iVar26 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    local_238 = 0;
    uStack_230 = 0;
    if (iVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar26);
    }
    FUN_14172b414(&local_238);
    local_360 = (uint *)(param_2 + 2);
    iVar26 = (int)param_2[5];
    local_368 = param_1;
    if (iVar26 == 0) {
      uVar34 = 1;
      uVar27 = 0;
      iVar33 = 0;
      iVar19 = 0;
    }
    else {
      puVar21 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar21 = local_360;
      }
      uVar28 = *puVar21;
      if (uVar28 == 0) {
        iVar19 = iVar26 + 0x1e;
        if (-1 < iVar26 + -1) {
          iVar19 = iVar26 + -1;
        }
        uVar27 = 0;
        uVar34 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar34 = uVar27;
        }
        iVar33 = 0;
        do {
          if (uVar34 == uVar27) goto LAB_1429c16ef;
          iVar33 = iVar33 + 0x20;
          uVar28 = puVar21[uVar27 + 1];
          uVar27 = uVar27 + 1;
        } while (uVar28 == 0);
      }
      else {
        uVar27 = 0;
        iVar33 = 0;
      }
      uVar34 = (ulonglong)(-uVar28 & uVar28);
      uVar2 = uVar34 * 2 + 1;
      lVar25 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
        }
      }
      iVar19 = (iVar33 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
      if (iVar26 <= iVar19) {
        iVar19 = iVar26;
      }
    }
    if (iVar19 != iVar26) {
      uVar28 = 0xffffffff;
      local_380 = param_2;
      do {
        local_378 = CONCAT44(local_378._4_4_,iVar33);
        plVar8 = *(longlong **)(*local_380 + (longlong)iVar19 * 0x10);
        lVar31 = (longlong)(int)plVar8[1];
        lVar25 = *(longlong *)(*plVar8 + 0x28);
        lVar24 = *(longlong *)(*plVar8 + 0x48);
        lVar32 = lVar31 * 0x10;
        dVar9 = (double)*(float *)(lVar24 + 0xc + lVar32);
        dVar10 = (double)*(float *)(lVar24 + 4 + lVar32);
        local_1c8._8_4_ = SUB84(dVar10,0);
        local_1c8._0_8_ = (double)*(float *)(lVar24 + lVar32);
        local_1c8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        local_1b8._8_4_ = SUB84(dVar9,0);
        local_1b8._0_8_ = (double)*(float *)(lVar24 + 8 + lVar32);
        local_1b8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        puVar1 = (undefined4 *)(lVar25 + lVar31 * 0x18);
        local_1a8 = *puVar1;
        uStack_1a4 = puVar1[1];
        uStack_1a0 = puVar1[2];
        uStack_19c = puVar1[3];
        local_198 = *(undefined8 *)(lVar25 + 0x10 + lVar31 * 0x18);
        uStack_190 = 0;
        local_188 = 0x3ff0000000000000;
        uStack_180 = 0x3ff0000000000000;
        local_178 = 0x3ff0000000000000;
        uStack_170 = 0;
        FUN_1449437a2(local_1c8,local_2f8,local_228);
        puVar29 = local_2f8;
        puVar30 = local_298;
        for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
          *puVar30 = *puVar29;
          puVar29 = puVar29 + 1;
          puVar30 = puVar30 + 1;
        }
        lVar31 = (longlong)(int)plVar8[1];
        lVar25 = *(longlong *)(*plVar8 + 0x3e0);
        lVar24 = *(longlong *)(*plVar8 + 0x3f8);
        puVar29 = (undefined8 *)(lVar24 + lVar31 * 0x20);
        local_2f8[0] = *puVar29;
        local_2f8[1] = puVar29[1];
        puVar29 = (undefined8 *)(lVar24 + 0x10 + lVar31 * 0x20);
        local_2f8[2] = *puVar29;
        local_2f8[3] = puVar29[1];
        puVar1 = (undefined4 *)(lVar25 + lVar31 * 0x18);
        local_2d8 = *puVar1;
        uStack_2d4 = puVar1[1];
        uStack_2d0 = puVar1[2];
        uStack_2cc = puVar1[3];
        local_2c8 = *(undefined8 *)(lVar25 + 0x10 + lVar31 * 0x18);
        uStack_2c0 = 0;
        local_2b8 = 0x3ff0000000000000;
        uStack_2b0 = 0x3ff0000000000000;
        local_2a8 = 0x3ff0000000000000;
        uStack_2a0 = 0;
        FUN_1447dc19e(local_2f8,&local_358,local_298);
        uVar2 = uStack_230;
        uVar18 = local_328;
        uVar17 = local_330;
        uVar16 = local_338;
        uVar15 = uStack_340;
        uVar14 = local_348;
        uVar13 = uStack_350;
        uVar12 = local_358;
        lVar24 = (longlong)(int)plVar8[1];
        lVar25 = *(longlong *)(*plVar8 + 0x368);
        uVar6 = *(undefined8 *)(*(longlong *)(*plVar8 + 0x3b0) + lVar24 * 8);
        fVar3 = *(float *)(lVar25 + 8 + lVar24 * 0xc);
        fVar4 = *(float *)(lVar25 + 4 + lVar24 * 0xc);
        fVar5 = *(float *)(lVar25 + lVar24 * 0xc);
        lVar25 = (longlong)(int)uStack_230;
        uVar20 = (int)uStack_230 + 1;
        uStack_230 = CONCAT44(uStack_230._4_4_,uVar20);
        if (uStack_230._4_4_ < uVar20) {
          FUN_14076cc58(&local_238,uVar2 & 0xffffffff);
        }
        lVar25 = lVar25 * 0xd0;
        *(undefined8 *)(local_238 + lVar25) = uVar6;
        *(undefined8 *)(local_238 + 8 + lVar25) = 0;
        *(undefined8 *)(local_238 + 0x10 + lVar25) = uVar16;
        *(undefined8 *)(local_238 + 0x18 + lVar25) = uVar17;
        *(undefined8 *)(local_238 + 0x20 + lVar25) = uVar18;
        puVar29 = (undefined8 *)(local_238 + 0x30 + lVar25);
        *puVar29 = uVar12;
        puVar29[1] = uVar13;
        puVar29 = (undefined8 *)(local_238 + 0x40 + lVar25);
        *puVar29 = uVar14;
        puVar29[1] = uVar15;
        *(double *)(local_238 + 0x50 + lVar25) = (double)fVar5;
        puVar29 = (undefined8 *)(local_238 + 0x58 + lVar25);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)(local_238 + 0x68 + lVar25);
        *puVar29 = 0;
        puVar29[1] = 0;
        *(double *)(local_238 + 0x78 + lVar25) = (double)fVar4;
        puVar29 = (undefined8 *)(local_238 + 0x80 + lVar25);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)(local_238 + 0x90 + lVar25);
        *puVar29 = 0;
        puVar29[1] = 0;
        *(double *)(local_238 + 0xa0 + lVar25) = (double)fVar3;
        puVar29 = (undefined8 *)(local_238 + 0xa8 + lVar25);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)(local_238 + 0xb8 + lVar25);
        *puVar29 = 0;
        puVar29[1] = 0;
        *(undefined8 *)(local_238 + 200 + lVar25) = 0x3ff0000000000000;
        uVar28 = uVar28 & ~(uint)uVar34;
        puVar21 = (uint *)local_380[4];
        if ((uint *)local_380[4] == (uint *)0x0) {
          puVar21 = local_360;
        }
        iVar7 = (int)local_380[5];
        iVar19 = (int)uVar27;
        lVar25 = (longlong)iVar19;
        uVar20 = puVar21[lVar25] & uVar28;
        iVar33 = (uint)local_378;
        if (uVar20 == 0) {
          iVar22 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar22 = iVar7 + -1;
          }
          iVar22 = iVar22 >> 5;
          iVar33 = (uint)local_378 + 0x20;
          iVar23 = iVar22;
          if (iVar22 < iVar19) {
            iVar23 = iVar19;
          }
          if (iVar19 < iVar22) {
            lVar24 = 0;
            do {
              uVar20 = puVar21[lVar25 + lVar24 + 1];
              if (uVar20 != 0) {
                uVar27 = (ulonglong)(iVar19 + (int)lVar24 + 1);
                uVar28 = 0xffffffff;
                goto LAB_1429c1c40;
              }
              iVar33 = iVar33 + 0x20;
              lVar24 = lVar24 + 1;
            } while (iVar23 - lVar25 != lVar24);
            uVar28 = 0xffffffff;
            iVar19 = iVar23;
          }
          uVar27 = (ulonglong)(iVar19 + 1);
          iVar19 = iVar7;
        }
        else {
LAB_1429c1c40:
          uVar34 = (ulonglong)(-uVar20 & uVar20);
          uVar2 = uVar34 * 2 + 1;
          lVar25 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar25 == 0; lVar25 = lVar25 + -1) {
            }
          }
          iVar19 = (iVar33 - ((uint)lVar25 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar19) {
            iVar19 = iVar7;
          }
        }
      } while (iVar19 != iVar26);
    }
LAB_1429c16ef:
    FUN_141729c66(local_1c8,&local_238);
    uVar44 = uStack_1a4;
    uVar43 = local_1a8;
    uVar45 = local_1c8._0_4_;
    uVar46 = local_1c8._4_4_;
    uVar51 = local_1b8._0_4_;
    uVar52 = local_1b8._4_4_;
    uVar55 = local_1b8._8_4_;
    uVar56 = local_1b8._12_4_;
    uVar47 = (undefined4)local_198;
    uVar48 = (undefined4)((ulonglong)local_198 >> 0x20);
    uVar49 = (undefined4)uStack_190;
    uVar50 = (undefined4)((ulonglong)uStack_190 >> 0x20);
    uVar53 = (undefined4)local_188;
    uVar54 = (undefined4)((ulonglong)local_188 >> 0x20);
    uVar37 = (undefined4)uStack_180;
    uVar38 = (undefined4)((ulonglong)uStack_180 >> 0x20);
    uVar39 = (uint)local_178;
    uVar40 = (uint)((ulonglong)local_178 >> 0x20);
    uVar41 = (uint)local_150;
    uVar42 = (uint)((ulonglong)local_150 >> 0x20);
    param_1 = local_368;
    uVar28 = (uint)local_128;
    uVar20 = (uint)((ulonglong)local_128 >> 0x20);
    if (local_238 != 0) {
      local_378 = local_128;
      uStack_370 = 0;
      FUN_1400020a8();
      param_1 = local_368;
      uVar28 = (uint)local_378;
      uVar20 = local_378._4_4_;
    }
  }
  lVar24 = (longlong)(int)param_1[1];
  lVar25 = *(longlong *)(*param_1 + 0x3e0);
  *(ulonglong *)(lVar25 + lVar24 * 0x18) = CONCAT44(uVar52,uVar51);
  *(ulonglong *)(lVar25 + 8 + lVar24 * 0x18) = CONCAT44(uVar56,uVar55);
  *(ulonglong *)(lVar25 + 0x10 + lVar24 * 0x18) = CONCAT44(uVar44,uVar43);
  lVar25 = *(longlong *)(*param_1 + 0x3f8);
  lVar24 = (longlong)(int)param_1[1] * 0x20;
  *(ulonglong *)(lVar25 + lVar24) = CONCAT44(uVar48,uVar47);
  *(ulonglong *)(lVar25 + 8 + lVar24) = CONCAT44(uVar50,uVar49);
  *(ulonglong *)(lVar25 + 0x10 + lVar24) = CONCAT44(uVar54,uVar53);
  *(ulonglong *)(lVar25 + 0x18 + lVar24) = CONCAT44(uVar38,uVar37);
  *(ulonglong *)(*(longlong *)(*param_1 + 0x3b0) + (longlong)(int)param_1[1] * 8) =
       CONCAT44(uVar46,uVar45);
  uVar35 = (uint)DAT_149931180;
  uVar36 = DAT_149931180._4_4_;
  *(ulonglong *)(*(longlong *)(*param_1 + 0x3c8) + (longlong)(int)param_1[1] * 8) =
       ~-(ulonglong)((double)(CONCAT44(uVar46,uVar45) & DAT_149931180) <= 1e-08) &
       (ulonglong)(1.0 / (double)CONCAT44(uVar46,uVar45));
  lVar24 = (longlong)(int)param_1[1];
  lVar25 = *(longlong *)(*param_1 + 0x368);
  *(float *)(lVar25 + lVar24 * 0xc) = (float)(double)CONCAT44(uVar40,uVar39);
  *(float *)(lVar25 + 4 + lVar24 * 0xc) = (float)(double)CONCAT44(uVar42,uVar41);
  *(float *)(lVar25 + 8 + lVar24 * 0xc) = (float)(double)CONCAT44(uVar20,uVar28);
  dVar9 = DAT_14c8464f0;
  dVar10 = DAT_14c8464e8;
  dVar11 = DAT_14c8464e0;
  if (((1e-08 < (double)CONCAT44(uVar40 & uVar36,uVar39 & uVar35)) &&
      (1e-08 < (double)CONCAT44(uVar42 & uVar36,uVar41 & uVar35))) &&
     (1e-08 < (double)CONCAT44(uVar36 & uVar20,uVar35 & uVar28))) {
    dVar9 = 1.0 / (double)CONCAT44(uVar20,uVar28);
    dVar10 = 1.0 / (double)CONCAT44(uVar42,uVar41);
    dVar11 = 1.0 / (double)CONCAT44(uVar40,uVar39);
  }
  lVar24 = (longlong)(int)param_1[1];
  lVar25 = *(longlong *)(*param_1 + 0x380);
  *(float *)(lVar25 + lVar24 * 0xc) = (float)dVar11;
  *(float *)(lVar25 + 4 + lVar24 * 0xc) = (float)dVar10;
  *(float *)(lVar25 + 8 + lVar24 * 0xc) = (float)dVar9;
  if ((local_f0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429c1c96 FUN_1429c1c96 body=5435 status=ok
// SIG undefined FUN_1429c1c96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c1c96(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  bool bVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  void *_Src;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  double *pdVar23;
  int iVar24;
  double *pdVar25;
  int iVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  uint *puVar30;
  int iVar31;
  ulonglong uVar32;
  longlong *plVar33;
  ulonglong uVar34;
  undefined4 uVar35;
  undefined4 uVar37;
  double dVar36;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStack_3b8 [32];
  undefined4 local_398;
  undefined1 local_390;
  undefined4 local_37c;
  uint local_378;
  int local_374;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  ulonglong local_358;
  uint *local_350;
  longlong *local_348;
  ulonglong local_340;
  undefined8 *local_338;
  undefined1 local_330 [16];
  undefined1 local_320 [8];
  longlong local_318;
  int local_304 [3];
  longlong local_2f8;
  ulonglong uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double local_2d0;
  double dStack_2c8;
  double local_2c0;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  longlong local_228;
  undefined8 uStack_220;
  void *local_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_198 = 0;
  uStack_190 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  iVar22 = (int)param_2[1];
  iVar17 = iVar22 - *(int *)((longlong)param_2 + 0x34);
  if (iVar17 < 0) {
LAB_1429c30c9:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar17);
  }
  iVar16 = iVar22;
  if (iVar17 != 0) {
    FUN_140836c88(&local_198);
    iVar16 = (int)param_2[1];
    iVar22 = *(int *)((longlong)param_2 + 0x34);
  }
  iVar17 = iVar16 - iVar22;
  if (iVar17 < 0) goto LAB_1429c30c9;
  if ((int)uStack_1a0._4_4_ < iVar17) {
    FUN_140836c88(&local_1a8);
    iVar16 = (int)param_2[1];
    iVar22 = *(int *)((longlong)param_2 + 0x34);
    iVar17 = iVar16 - iVar22;
  }
  lVar27 = (longlong)(int)param_1[1];
  lVar19 = *(longlong *)(*param_1 + 0x48);
  lVar28 = lVar27 * 0x10;
  dVar36 = (double)*(float *)(lVar19 + 0xc + lVar28);
  dVar6 = (double)*(float *)(lVar19 + 4 + lVar28);
  lVar18 = *(longlong *)(*param_1 + 0x28);
  local_208._8_4_ = SUB84(dVar6,0);
  local_208._0_8_ = (double)*(float *)(lVar19 + lVar28);
  local_208._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_1f8._8_4_ = SUB84(dVar36,0);
  local_1f8._0_8_ = (double)*(float *)(lVar19 + 8 + lVar28);
  local_1f8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  puVar14 = (undefined8 *)(lVar18 + lVar27 * 0x18);
  local_1e8 = *puVar14;
  uStack_1e0 = puVar14[1];
  local_1d8 = *(undefined8 *)(lVar18 + 0x10 + lVar27 * 0x18);
  uStack_1d0 = 0;
  local_1c8 = 0x3ff0000000000000;
  uStack_1c0 = 0x3ff0000000000000;
  local_1b8 = 0x3ff0000000000000;
  uStack_1b0 = 0;
  local_218 = (void *)0x0;
  uStack_210 = 0;
  local_228 = 0;
  uStack_220 = 0;
  if (iVar17 < 0) goto LAB_1429c30c9;
  if (iVar16 != iVar22) {
    FUN_14043d0a6(&local_228);
  }
  local_370 = param_1;
  local_360 = param_4;
  if (*param_4 == 0) {
    local_37c = 0;
    if ((*(char *)(param_5 + 0xd) == '\x01') && (*(longlong *)(param_5 + 0x20) == 0))
    goto LAB_1429c1e72;
  }
  else if (*(longlong *)(param_5 + 0x20) == 0) {
LAB_1429c1e72:
    puVar13 = (uint *)(param_2 + 2);
    iVar22 = (int)param_2[5];
    iVar17 = 0;
    if (iVar22 == 0) {
      uVar21 = 1;
      uVar32 = 0;
      iVar26 = 0;
      iVar16 = 0;
    }
    else {
      puVar30 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar30 = puVar13;
      }
      uVar12 = *puVar30;
      if (uVar12 == 0) {
        iVar16 = iVar22 + 0x1e;
        if (-1 < iVar22 + -1) {
          iVar16 = iVar22 + -1;
        }
        uVar32 = 0;
        uVar21 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar21 = uVar32;
        }
        iVar26 = 0;
        do {
          if (uVar21 == uVar32) {
            iVar17 = 0;
            goto LAB_1429c1fe0;
          }
          iVar26 = iVar26 + 0x20;
          uVar12 = puVar30[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar32 = 0;
        iVar26 = 0;
      }
      uVar21 = (ulonglong)(-uVar12 & uVar12);
      uVar34 = uVar21 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar34 != 0) {
        for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar16 = (iVar26 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar22 <= iVar16) {
        iVar16 = iVar22;
      }
    }
    if (iVar16 != iVar22) {
      if ((uint *)param_2[4] != (uint *)0x0) {
        puVar13 = (uint *)param_2[4];
      }
      iVar31 = iVar22 + 0x1e;
      if (-1 < iVar22 + -1) {
        iVar31 = iVar22 + -1;
      }
      iVar31 = iVar31 >> 5;
      uVar12 = 0xffffffff;
      iVar17 = 0;
      do {
        plVar33 = *(longlong **)(*param_2 + (longlong)iVar16 * 0x10);
        lVar19 = *(longlong *)(*(longlong *)(*plVar33 + 0x4a0) + (longlong)(int)plVar33[1] * 8);
        iVar16 = 0;
        if (lVar19 != 0) {
          iVar16 = *(int *)(lVar19 + 0x18);
        }
        iVar17 = iVar17 + iVar16;
        uVar12 = uVar12 & ~(uint)uVar21;
        iVar16 = (int)uVar32;
        lVar19 = (longlong)iVar16;
        uVar11 = puVar13[lVar19] & uVar12;
        if (uVar11 == 0) {
          iVar24 = iVar31;
          if (iVar31 < iVar16) {
            iVar24 = iVar16;
          }
          if (iVar31 <= iVar16) break;
          lVar18 = 0;
          while( true ) {
            iVar26 = iVar26 + 0x20;
            uVar11 = puVar13[lVar19 + lVar18 + 1];
            if (uVar11 != 0) break;
            lVar18 = lVar18 + 1;
            if (iVar24 - lVar19 == lVar18) goto LAB_1429c1fd8;
          }
          uVar32 = (ulonglong)(iVar16 + (int)lVar18 + 1);
          uVar12 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar11 & uVar11);
        uVar34 = uVar21 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar16 = (iVar26 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar22);
LAB_1429c1fd8:
      if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar17);
      }
    }
LAB_1429c1fe0:
    local_37c = (undefined4)CONCAT71((int7)((ulonglong)puVar13 >> 8),1);
    if ((int)uStack_210._4_4_ < iVar17) {
      FUN_140268ec4(&local_218);
    }
  }
  else {
    local_37c = 0;
  }
  uVar12 = *(uint *)(param_2 + 5);
  local_348 = param_3;
  if (uVar12 == 0) {
    uVar21 = 1;
    uVar32 = 0;
    iVar22 = 0;
    uVar11 = 0;
  }
  else {
    puVar13 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_2 + 2);
    }
    uVar11 = *puVar13;
    if (uVar11 == 0) {
      iVar22 = uVar12 + 0x1e;
      if (-1 < (int)(uVar12 - 1)) {
        iVar22 = uVar12 - 1;
      }
      uVar32 = 0;
      uVar21 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar21 = uVar32;
      }
      iVar22 = 0;
      do {
        if (uVar21 == uVar32) goto LAB_1429c208c;
        iVar22 = iVar22 + 0x20;
        uVar11 = puVar13[uVar32 + 1];
        uVar32 = uVar32 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar32 = 0;
      iVar22 = 0;
    }
    uVar21 = (ulonglong)(-uVar11 & uVar11);
    uVar34 = uVar21 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar11 = (iVar22 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)uVar12 <= (int)uVar11) {
      uVar11 = uVar12;
    }
  }
  if (uVar11 == uVar12) {
LAB_1429c208c:
    uVar34 = 0;
  }
  else {
    uVar29 = 0xffffffff;
    uVar34 = 0;
    local_368 = param_2;
    local_358 = (ulonglong)uVar12;
    local_350 = (uint *)(param_2 + 2);
    do {
      plVar33 = *(longlong **)(*local_368 + (longlong)(int)uVar11 * 0x10);
      pdVar23 = (double *)&DAT_14c846480;
      pdVar25 = (double *)local_188;
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar25 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        pdVar25 = pdVar25 + 1;
      }
      lVar19 = *plVar33;
      lVar18 = (longlong)(int)plVar33[1];
      local_378 = uVar29;
      local_374 = iVar22;
      if (((plVar33 == (longlong *)0x0) || (*(byte *)((longlong)plVar33 + 0xc) < 3)) ||
         ((*(byte *)(*(longlong *)(lVar19 + 0x680) + lVar18) & 8) == 0)) {
        lVar27 = *(longlong *)(lVar19 + 0x48);
        lVar28 = lVar18 * 0x10;
        dVar36 = (double)*(float *)(lVar27 + 0xc + lVar28);
        dVar6 = (double)*(float *)(lVar27 + 4 + lVar28);
        local_288._8_4_ = SUB84(dVar6,0);
        local_288._0_8_ = (double)*(float *)(lVar27 + lVar28);
        local_288._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        local_278._8_4_ = SUB84(dVar36,0);
        local_278._0_8_ = (double)*(float *)(lVar27 + 8 + lVar28);
        local_278._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
        puVar2 = (undefined4 *)(*(longlong *)(lVar19 + 0x28) + lVar18 * 0x18);
        local_268 = *puVar2;
        uStack_264 = puVar2[1];
        uStack_260 = puVar2[2];
        uStack_25c = puVar2[3];
        local_258 = *(undefined8 *)(*(longlong *)(lVar19 + 0x28) + 0x10 + lVar18 * 0x18);
        uStack_250 = 0;
        local_248 = 1.0;
        dStack_240 = 1.0;
        local_238 = 1.0;
        uStack_230 = 0;
        pdVar23 = &local_2e8;
        FUN_1449437a2(local_288,pdVar23,local_208);
      }
      else {
        pdVar23 = (double *)(lVar18 * 0x60 + *(longlong *)(lVar19 + 0x5c0));
      }
      pdVar25 = (double *)local_188;
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar25 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        pdVar25 = pdVar25 + 1;
      }
      lVar19 = *(longlong *)(*(longlong *)(*plVar33 + 0x60) + (longlong)(int)plVar33[1] * 8);
      if (lVar19 != 0) {
        lVar18 = FUN_14001cc68(0xc0,0x10);
        local_288._0_8_ = lVar19;
        LOCK();
        *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
        UNLOCK();
        FUN_14010f5c4(lVar18,local_288,local_188);
        if (lVar18 != 0) {
          LOCK();
          *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
          UNLOCK();
        }
        if ((undefined8 *)local_288._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_288._0_8_ + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)(local_288._0_8_ + 0xc) == 0)) {
            (*(code *)**(undefined8 **)local_288._0_8_)(local_288._0_8_,1);
          }
        }
        uVar4 = uStack_190;
        lVar19 = (longlong)(int)uStack_190;
        uVar12 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar12);
        if (uStack_190._4_4_ < uVar12) {
          FUN_140619960(&local_198,uVar4 & 0xffffffff);
        }
        *(longlong *)(local_198 + lVar19 * 8) = lVar18;
        lVar19 = *(longlong *)(*(longlong *)(*plVar33 + 0x60) + (longlong)(int)plVar33[1] * 8);
        lVar18 = FUN_14001cc68(0xc0,0x10);
        local_288._0_8_ = lVar19;
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          UNLOCK();
        }
        FUN_14010f5c4(lVar18,local_288,local_188);
        if (lVar18 != 0) {
          LOCK();
          *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
          UNLOCK();
        }
        if ((undefined8 *)local_288._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_288._0_8_ + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)(local_288._0_8_ + 0xc) == 0)) {
            (*(code *)**(undefined8 **)local_288._0_8_)(local_288._0_8_,1);
          }
        }
        uVar4 = uStack_1a0;
        lVar19 = (longlong)(int)uStack_1a0;
        uVar12 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar12);
        if (uStack_1a0._4_4_ < uVar12) {
          FUN_140619960(&local_1a8,uVar4 & 0xffffffff);
        }
        uVar4 = uStack_220;
        *(longlong *)(local_1a8 + lVar19 * 8) = lVar18;
        lVar19 = (longlong)(int)uStack_220;
        uVar12 = (int)uStack_220 + 1;
        uStack_220 = CONCAT44(uStack_220._4_4_,uVar12);
        if (uStack_220._4_4_ < uVar12) {
          FUN_1406b7a4a(&local_228,uVar4 & 0xffffffff);
        }
        *(longlong **)(local_228 + lVar19 * 8) = plVar33;
      }
      plVar15 = (longlong *)0x0;
      if (2 < *(byte *)((longlong)plVar33 + 0xc)) {
        plVar15 = plVar33;
      }
      pdVar23 = (double *)local_188;
      pdVar25 = (double *)((longlong)(int)plVar15[1] * 0x60 + *(longlong *)(*plVar15 + 0x5c0));
      for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
        *pdVar25 = *pdVar23;
        pdVar23 = pdVar23 + 1;
        pdVar25 = pdVar25 + 1;
      }
      lVar19 = *plVar33;
      iVar22 = (int)plVar33[1];
      if ((char)local_37c != '\0') {
        lVar18 = *(longlong *)(lVar19 + 0x4a0);
        lVar27 = *(longlong *)(lVar18 + (longlong)iVar22 * 8);
        if ((lVar27 != 0) && (*(int *)(lVar27 + 0x18) != 0)) {
          uVar12 = 0;
          local_340 = uVar34;
          do {
            uVar34 = uStack_210;
            pdVar23 = (double *)(*(longlong *)(lVar27 + 0x28) + (longlong)(int)uVar12 * 0x18);
            dVar6 = *pdVar23 * local_148;
            dVar8 = pdVar23[1] * dStack_140;
            dVar36 = *(double *)(*(longlong *)(lVar27 + 0x28) + 0x10 + (longlong)(int)uVar12 * 0x18)
                     * local_138;
            dVar38 = dVar8 * (double)local_188._0_8_ - dVar6 * (double)local_188._8_8_;
            dVar39 = dVar36 * (double)local_188._8_8_ - dVar8 * (double)local_178._0_8_;
            dVar40 = dVar6 * (double)local_178._0_8_ - (double)local_188._0_8_ * dVar36;
            dVar39 = dVar39 + dVar39;
            dVar40 = dVar40 + dVar40;
            dVar38 = dVar38 + dVar38;
            dVar6 = (dVar38 * (double)local_188._8_8_ - dVar40 * (double)local_178._0_8_) +
                    (double)local_178._8_8_ * dVar39 + dVar6 + local_168;
            dVar8 = ((double)local_178._0_8_ * dVar39 - (double)local_188._0_8_ * dVar38) +
                    (double)local_178._8_8_ * dVar40 + dVar8 + dStack_160;
            dVar36 = dVar38 * (double)local_178._8_8_ + dVar36 +
                     (dVar40 * (double)local_188._0_8_ - dVar39 * (double)local_188._8_8_) +
                     local_158;
            lVar19 = (longlong)(int)(uint)uStack_210;
            uVar11 = (uint)uStack_210 + 1;
            uStack_210 = CONCAT44(uStack_210._4_4_,uVar11);
            if (uStack_210._4_4_ < uVar11) {
              FUN_14026a4e8(&local_218,uVar34 & 0xffffffff);
            }
            auVar7._8_4_ = SUB84(dVar8,0);
            auVar7._0_8_ = dVar6;
            auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
            *(undefined1 (*) [16])((longlong)local_218 + lVar19 * 0x18) = auVar7;
            *(double *)((longlong)local_218 + lVar19 * 0x18 + 0x10) = dVar36;
            uVar12 = uVar12 + 1;
            lVar27 = *(longlong *)(lVar18 + (longlong)iVar22 * 8);
          } while (uVar12 < *(uint *)(lVar27 + 0x18));
          lVar19 = *plVar33;
          iVar22 = (int)plVar33[1];
          uVar34 = local_340;
        }
      }
      lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x60) + (longlong)iVar22 * 8);
      if (lVar19 != 0) {
        uVar34 = CONCAT71((int7)(uVar34 >> 8),(byte)uVar34 | *(char *)(lVar19 + 0x1c) == '\a');
      }
      uVar29 = local_378 & ~(uint)uVar21;
      puVar13 = (uint *)local_368[4];
      if ((uint *)local_368[4] == (uint *)0x0) {
        puVar13 = local_350;
      }
      uVar12 = *(uint *)(local_368 + 5);
      iVar17 = (int)uVar32;
      lVar19 = (longlong)iVar17;
      uVar11 = puVar13[lVar19] & uVar29;
      iVar22 = local_374;
      if (uVar11 == 0) {
        iVar16 = uVar12 + 0x1e;
        if (-1 < (int)(uVar12 - 1)) {
          iVar16 = uVar12 - 1;
        }
        iVar16 = iVar16 >> 5;
        iVar22 = local_374 + 0x20;
        iVar26 = iVar16;
        if (iVar16 < iVar17) {
          iVar26 = iVar17;
        }
        if (iVar17 < iVar16) {
          lVar18 = 0;
          do {
            uVar11 = puVar13[lVar19 + lVar18 + 1];
            if (uVar11 != 0) {
              uVar32 = (ulonglong)(iVar17 + (int)lVar18 + 1);
              uVar29 = 0xffffffff;
              goto LAB_1429c2683;
            }
            iVar22 = iVar22 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar26 - lVar19 != lVar18);
          uVar29 = 0xffffffff;
          iVar17 = iVar26;
        }
        uVar32 = (ulonglong)(iVar17 + 1);
        uVar11 = uVar12;
      }
      else {
LAB_1429c2683:
        uVar21 = (ulonglong)(-uVar11 & uVar11);
        uVar4 = uVar21 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar11 = (iVar22 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar12 <= (int)uVar11) {
          uVar11 = uVar12;
        }
      }
    } while (uVar11 != (uint)local_358);
  }
  plVar33 = local_370;
  lVar18 = local_370[1];
  lVar19 = *(longlong *)(*local_370 + 0x5f0);
  if ((int)uStack_1a0 == 0) {
LAB_1429c20e2:
    lVar27 = 0;
  }
  else {
    lVar27 = FUN_14001cc68(0xd0,0x10);
    FUN_14014eed0(lVar27,&local_1a8,&local_228);
    if (lVar27 == 0) goto LAB_1429c20e2;
    LOCK();
    *(int *)(lVar27 + 8) = *(int *)(lVar27 + 8) + 1;
    UNLOCK();
  }
  puVar14 = *(undefined8 **)(lVar19 + (longlong)(int)lVar18 * 8);
  *(longlong *)(lVar19 + (longlong)(int)lVar18 * 8) = lVar27;
  if (puVar14 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar14 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar14 + 0xc) == 0)) {
      (**(code **)*puVar14)();
    }
  }
  _Src = local_218;
  plVar15 = local_360;
  local_2f8 = 0;
  uStack_2f0 = 0;
  if (*(longlong *)(param_5 + 0x20) == 0) {
    if (*(char *)(param_5 + 0xc) == '\x01') {
      if ((longlong)(int)(uint)uStack_210 == 0) {
        local_288 = ZEXT816(0);
      }
      else {
        local_178._8_4_ = 0xffffffff;
        local_178._12_4_ = 0xffefffff;
        local_188._0_4_ = 0xffffffff;
        local_188._4_4_ = 0x7fefffff;
        lVar19 = 0;
        local_178._0_8_ = 1.79769313486232e+308;
        local_168 = -1.79769313486232e+308;
        local_188._8_4_ = local_188._0_4_;
        local_188._12_4_ = local_188._4_4_;
        uVar42 = local_178._8_4_;
        uVar41 = local_178._12_4_;
        do {
          dVar36 = *(double *)((longlong)local_218 + lVar19 + 0x10);
          if (dVar36 <= (double)local_178._0_8_) {
            local_178._0_8_ = dVar36;
          }
          dVar6 = *(double *)((longlong)local_218 + lVar19);
          uVar44 = (undefined4)((ulonglong)dVar6 >> 0x20);
          dVar8 = *(double *)((longlong)local_218 + lVar19 + 8);
          if (dVar8 <= (double)CONCAT44(local_188._12_4_,local_188._8_4_)) {
            local_188._8_4_ = SUB84(dVar8,0);
            local_188._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          }
          if (dVar6 <= (double)CONCAT44(local_188._4_4_,local_188._0_4_)) {
            local_188._0_4_ = SUB84(dVar6,0);
            local_188._4_4_ = uVar44;
          }
          if ((double)CONCAT44(uVar41,uVar42) <= dVar36) {
            uVar42 = SUB84(dVar36,0);
            uVar41 = (int)((ulonglong)dVar36 >> 0x20);
          }
          if (local_168 <= dVar8) {
            local_168 = dVar8;
          }
          if ((double)CONCAT44(local_178._12_4_,local_178._8_4_) <= dVar6) {
            local_178._8_4_ = SUB84(dVar6,0);
            local_178._12_4_ = uVar44;
          }
          lVar19 = lVar19 + 0x18;
        } while ((longlong)(int)(uint)uStack_210 * 0x18 != lVar19);
        dStack_160 = (double)CONCAT44(uVar41,uVar42);
        FUN_146dfc8cf(local_288,&local_218,local_188,SUB84((double)_DAT_14c75f244,0));
        plVar33 = local_370;
        plVar15 = local_360;
      }
    }
    else {
      lVar19 = (longlong)(int)(uint)uStack_210;
      auVar10._4_4_ = local_288._12_4_;
      auVar10._0_4_ = (uint)uStack_210;
      auVar10._8_8_ = 0;
      local_288 = auVar10 << 0x40;
      if (lVar19 == 0) {
        local_288 = ZEXT416((uint)uStack_210) << 0x40;
      }
      else {
        FUN_145ceb326(local_288,uStack_210 & 0xffffffff,0);
        memcpy((void *)local_288._0_8_,_Src,lVar19 * 0x18);
      }
    }
    if (local_2f8 != 0) {
      FUN_1400020a8();
    }
    local_2f8 = local_288._0_8_;
    uStack_2f0 = local_288._8_8_;
  }
  if (*plVar15 == 0) {
    if ((int)uStack_190 == 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_188._8_8_;
      local_188 = auVar9 << 0x40;
      plVar15 = (longlong *)*plVar33;
      uVar42 = (undefined4)plVar33[1];
      lVar19 = *plVar15;
LAB_1429c2dbd:
      (**(code **)(lVar19 + 0x10))(plVar15,uVar42,local_188);
      if ((undefined8 *)local_188._0_8_ != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_188._0_8_ + 8);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)(local_188._0_8_ + 0xc) == 0)) {
          (*(code *)**(undefined8 **)local_188._0_8_)(local_188._0_8_,1);
        }
      }
    }
    else if (DAT_14c9943a0 == 0) {
      if ((int)uStack_190 != 1) {
        lVar19 = FUN_14001cc68(0xd0,0x10);
        FUN_14014eed0(lVar19,&local_198,&local_228);
        local_188._0_8_ = lVar19;
        if (lVar19 != 0) {
          LOCK();
          *(int *)(lVar19 + 8) = *(int *)(lVar19 + 8) + 1;
          UNLOCK();
        }
        plVar15 = (longlong *)*plVar33;
        uVar42 = (undefined4)plVar33[1];
        lVar19 = *plVar15;
        goto LAB_1429c2dbd;
      }
      (**(code **)(*(longlong *)*plVar33 + 0x10))((longlong *)*plVar33,(int)plVar33[1],local_198);
    }
    else {
      local_288 = ZEXT816(0);
      FUN_14014eed0(local_188,&local_198,local_288);
      if (local_288._0_8_ != 0) {
        FUN_1400020a8();
      }
      local_2d8 = local_148;
      local_2e8 = local_158;
      dStack_2e0 = dStack_150;
      local_2c0 = dStack_130;
      local_2d0 = dStack_140;
      dStack_2c8 = local_138;
      dVar36 = dStack_130 - local_148;
      dVar8 = local_138 - dStack_150;
      dVar6 = dStack_140 - local_158;
      dVar38 = dVar6;
      if ((dVar8 <= dVar6 || dVar36 <= dVar6) && (dVar38 = dVar8, dVar36 <= dVar8)) {
        dVar38 = dVar36;
      }
      dVar40 = (double)_DAT_14c75f238;
      if (dVar40 <= dVar38) {
        local_304[0] = (int)(dVar6 / dVar40);
        local_304[1] = (int)(dVar8 / dVar40);
        local_304[2] = (int)(dVar36 / dVar40);
        lVar19 = 0;
        do {
          iVar22 = local_304[lVar19];
          if (DAT_14c75f234 <= local_304[lVar19]) {
            iVar22 = DAT_14c75f234;
          }
          if (iVar22 < DAT_14c75f230) {
            iVar22 = DAT_14c75f230;
          }
          local_304[lVar19] = iVar22;
          lVar19 = lVar19 + 1;
        } while (lVar19 != 3);
        FUN_1400b22c2(local_330,&DAT_149e02088);
        FUN_146dfc44e(local_320,local_330);
        local_398 = DAT_14c75f23c;
        FUN_146cb3ec4(local_288,&local_2e8,&local_2d0,local_304);
        puVar14 = (undefined8 *)FUN_14001cc68(0x120,0x10);
        local_390 = 0;
        local_398 = 0;
        FUN_146dd1bc4(puVar14,local_320,local_288,local_188);
        if (*(longlong *)(param_5 + 0x20) == 0) {
          uVar21 = (ulonglong)(int)(uint)uStack_2f0;
          if (0 < (longlong)uVar21) {
            uVar42 = SUB84(local_248,0);
            uVar41 = (int)((ulonglong)local_248 >> 0x20);
            if ((local_248 <= local_238 || local_248 <= dStack_240) &&
               (uVar42 = SUB84(dStack_240,0), uVar41 = (int)((ulonglong)dStack_240 >> 0x20),
               dStack_240 <= local_238)) {
              uVar42 = SUB84(local_238,0);
              uVar41 = (int)((ulonglong)local_238 >> 0x20);
            }
            iVar22 = -(uint)uStack_2f0;
            lVar19 = uVar21 * 0x18;
            do {
              lVar19 = lVar19 + -0x18;
              if ((DAT_14c75f240 < (int)(uint)uStack_2f0) &&
                 (dVar36 = (double)FUN_146dd48fc(puVar14,local_2f8 + lVar19),
                 dVar36 < -(double)CONCAT44(uVar41,uVar42))) {
                if (uVar21 != (uStack_2f0 & 0xffffffff)) {
                  iVar17 = iVar22 + (uint)uStack_2f0;
                  if (0 < iVar17) {
                    iVar17 = 1;
                  }
                  memmove((void *)(local_2f8 + lVar19),
                          (void *)(local_2f8 + (longlong)(int)((uint)uStack_2f0 - iVar17) * 0x18),
                          (longlong)iVar17 * 0x18);
                }
                uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(uint)uStack_2f0 + -1);
                FUN_1411223a0(&local_2f8);
              }
              iVar22 = iVar22 + 1;
              bVar5 = 1 < uVar21;
              uVar21 = uVar21 - 1;
            } while (bVar5);
          }
        }
        plVar33 = local_370;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        local_338 = puVar14;
        (**(code **)(*(longlong *)*local_370 + 0x10))
                  ((longlong *)*local_370,(int)local_370[1],&local_338);
        if (local_338 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_338 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)local_338 + 0xc) == 0)) {
            (**(code **)*local_338)(local_338,1);
          }
        }
        if (local_318 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        puVar14 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        puVar14[1] = 0;
        *(undefined2 *)(puVar14 + 3) = 0x101;
        *(undefined1 *)((longlong)puVar14 + 0x1a) = 1;
        *(undefined2 *)((longlong)puVar14 + 0x1c) = 0;
        *puVar14 = &PTR_FUN_149f48e60;
        puVar14[4] = 0;
        puVar14[5] = 0;
        puVar14[6] = 0;
        puVar14[2] = SQRT(dVar36 * dVar36 + dVar6 * dVar6 + dVar8 * dVar8) * 0.5;
        local_288._0_8_ = puVar14;
        if (puVar14 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar14 + 1) = *(int *)(puVar14 + 1) + 1;
          UNLOCK();
        }
        (**(code **)(*(longlong *)*plVar33 + 0x10))((longlong *)*plVar33,(int)plVar33[1],local_288);
        if ((undefined8 *)local_288._0_8_ != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_288._0_8_ + 8);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)(local_288._0_8_ + 0xc) == 0)) {
            (*(code *)**(undefined8 **)local_288._0_8_)(local_288._0_8_,1);
          }
        }
      }
      FUN_1407cb3d6(local_188);
    }
  }
  else {
    FUN_1429c9720(plVar33,plVar15,param_5 + 0x30);
  }
  lVar19 = *(longlong *)(param_5 + 0x20);
  if (lVar19 == 0) {
    FUN_14096ada2();
    if ((uint)uStack_2f0 != 0) {
      lVar27 = plVar33[1];
      lVar19 = *(longlong *)(*plVar33 + 0x4a0);
      lVar18 = *(longlong *)(lVar19 + (longlong)(int)lVar27 * 8);
      *(uint *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + (uint)uStack_2f0;
      iVar22 = *(int *)(lVar18 + 0x10);
      if ((longlong)iVar22 != 0) {
        lVar18 = *(longlong *)(lVar18 + 8);
        lVar28 = 0;
        do {
          plVar15 = *(longlong **)(lVar18 + lVar28);
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 8))();
          }
          lVar28 = lVar28 + 8;
        } while ((longlong)iVar22 * 8 != lVar28);
      }
      if (0 < (int)(uint)uStack_2f0) {
        lVar18 = 0;
        do {
          lVar28 = *(longlong *)(*(longlong *)(lVar19 + (longlong)(int)lVar27 * 8) + 0x28);
          *(undefined8 *)(lVar28 + 0x10 + lVar18) = *(undefined8 *)(local_2f8 + 0x10 + lVar18);
          puVar2 = (undefined4 *)(local_2f8 + lVar18);
          uVar42 = puVar2[1];
          uVar41 = puVar2[2];
          uVar44 = puVar2[3];
          puVar3 = (undefined4 *)(lVar28 + lVar18);
          *puVar3 = *puVar2;
          puVar3[1] = uVar42;
          puVar3[2] = uVar41;
          puVar3[3] = uVar44;
          lVar18 = lVar18 + 0x18;
        } while ((ulonglong)(uint)uStack_2f0 * 0x18 != lVar18);
      }
    }
    if ((char)local_37c != '\0') {
      FUN_140b8800e(*(undefined8 *)
                     (*(longlong *)(*(longlong *)(*plVar33 + 0x4a0) + (longlong)(int)plVar33[1] * 8)
                     + 0x40),0,0,0);
    }
  }
  else {
    lVar18 = *(longlong *)(*(longlong *)(*plVar33 + 0x4a0) + (longlong)(int)plVar33[1] * 8);
    if ((lVar18 != lVar19) &&
       (*(longlong *)(*(longlong *)(*plVar33 + 0x4a0) + (longlong)(int)plVar33[1] * 8) = lVar19,
       lVar18 != 0)) {
      FUN_140191cfe(lVar18);
      FUN_1400020a8(lVar18);
    }
  }
  lVar19 = *plVar33;
  lVar20 = (longlong)(int)plVar33[1];
  lVar18 = *(longlong *)(lVar19 + 0x48);
  lVar27 = lVar20 * 0x10;
  dVar36 = (double)*(float *)(lVar18 + 0xc + lVar27);
  dVar6 = (double)*(float *)(lVar18 + 4 + lVar27);
  lVar28 = lVar20 * 0x18;
  local_188._8_4_ = SUB84(dVar6,0);
  local_188._0_8_ = (double)*(float *)(lVar18 + lVar27);
  local_188._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_178._8_4_ = SUB84(dVar36,0);
  local_178._0_8_ = (double)*(float *)(lVar18 + 8 + lVar27);
  local_178._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  puVar14 = (undefined8 *)(*(longlong *)(lVar19 + 0x28) + lVar28);
  local_168 = (double)*puVar14;
  dStack_160 = (double)puVar14[1];
  local_158 = *(double *)(*(longlong *)(lVar19 + 0x28) + 0x10 + lVar28);
  dStack_150 = 0.0;
  local_148 = 1.0;
  dStack_140 = 1.0;
  local_138 = 1.0;
  dStack_130 = 0.0;
  lVar18 = *(longlong *)(lVar19 + 0xf8);
  iVar22 = *(int *)(lVar18 + 0x10 + lVar28);
  lVar27 = *(longlong *)(lVar18 + 8 + lVar28);
  lVar18 = lVar18 + lVar28;
  if (lVar27 != 0) {
    lVar18 = lVar27;
  }
  if ((longlong)iVar22 < 1) {
    uVar42 = 0;
    uVar44 = 0;
    uVar35 = 0;
    uVar37 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar49 = 0;
    uVar50 = 0;
    dVar8 = 0.0;
    dVar6 = 0.0;
    dVar36 = 0.0;
    uVar41 = uVar42;
    uVar43 = uVar44;
    if (iVar22 == 0) goto LAB_1429c2b73;
  }
  else {
    uVar35 = 0xffffffff;
    uVar37 = 0x7fefffff;
    uVar41 = 0xffffffff;
    uVar43 = 0xffefffff;
  }
  lVar27 = 0;
  uVar42 = uVar35;
  uVar44 = uVar37;
  uVar45 = uVar41;
  uVar46 = uVar43;
  uVar47 = uVar41;
  uVar48 = uVar43;
  uVar49 = uVar35;
  uVar50 = uVar37;
  uVar51 = uVar35;
  uVar52 = uVar37;
  do {
    lVar28 = *(longlong *)(lVar18 + lVar27);
    if ((*(byte *)(lVar28 + 8) & 3) == 0) {
      FUN_146e22506(lVar28,local_188);
    }
    else {
      FUN_1447269c8(lVar28,local_188);
    }
    lVar28 = *(longlong *)(lVar18 + lVar27);
    dVar36 = *(double *)(lVar28 + 0x28);
    if (dVar36 <= (double)CONCAT44(uVar50,uVar49)) {
      uVar49 = SUB84(dVar36,0);
      uVar50 = (undefined4)((ulonglong)dVar36 >> 0x20);
    }
    dVar36 = *(double *)(lVar28 + 0x20);
    if (dVar36 <= (double)CONCAT44(uVar52,uVar51)) {
      uVar51 = SUB84(dVar36,0);
      uVar52 = (undefined4)((ulonglong)dVar36 >> 0x20);
    }
    dVar36 = *(double *)(lVar28 + 0x18);
    if (dVar36 <= (double)CONCAT44(uVar44,uVar42)) {
      uVar42 = SUB84(dVar36,0);
      uVar44 = (undefined4)((ulonglong)dVar36 >> 0x20);
    }
    dVar36 = *(double *)(lVar28 + 0x40);
    if ((double)CONCAT44(uVar43,uVar41) <= dVar36) {
      uVar41 = SUB84(dVar36,0);
      uVar43 = (undefined4)((ulonglong)dVar36 >> 0x20);
    }
    dVar36 = *(double *)(lVar28 + 0x38);
    if ((double)CONCAT44(uVar46,uVar45) <= dVar36) {
      uVar45 = SUB84(dVar36,0);
      uVar46 = (undefined4)((ulonglong)dVar36 >> 0x20);
    }
    dVar36 = *(double *)(lVar28 + 0x30);
    if ((double)CONCAT44(uVar48,uVar47) <= dVar36) {
      uVar47 = SUB84(dVar36,0);
      uVar48 = (undefined4)((ulonglong)dVar36 >> 0x20);
    }
    lVar27 = lVar27 + 8;
  } while ((longlong)iVar22 * 8 != lVar27);
  dVar8 = (double)CONCAT44(uVar48,uVar47) + 0.0;
  dVar6 = (double)CONCAT44(uVar46,uVar45) + 0.0;
  dVar36 = (double)CONCAT44(uVar43,uVar41) + 0.0;
LAB_1429c2b73:
  lVar19 = *(longlong *)(lVar19 + 0x140);
  lVar20 = lVar20 * 0x30;
  *(ulonglong *)(lVar19 + lVar20) = CONCAT44(uVar44,uVar42);
  *(ulonglong *)(lVar19 + 8 + lVar20) = CONCAT44(uVar52,uVar51);
  *(ulonglong *)(lVar19 + 0x10 + lVar20) = CONCAT44(uVar50,uVar49);
  *(double *)(lVar19 + 0x18 + lVar20) = dVar8;
  *(double *)(lVar19 + 0x20 + lVar20) = dVar6;
  *(double *)(lVar19 + 0x28 + lVar20) = dVar36;
  FUN_140b31ff4(plVar33,uVar34 & 0xffffff01);
  if ((int)local_348[1] != *(int *)((longlong)local_348 + 0x34)) {
    uVar12 = ((uint)((ulonglong)plVar33 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar33 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    plVar15 = local_348 + 7;
    if ((longlong *)local_348[8] != (longlong *)0x0) {
      plVar15 = (longlong *)local_348[8];
    }
    iVar22 = *(int *)((longlong)plVar15 +
                     (ulonglong)((int)local_348[9] - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4);
    if (iVar22 != -1) {
      do {
        lVar19 = *local_348 + (longlong)iVar22 * 0x20;
        if (*(longlong **)(*local_348 + (longlong)iVar22 * 0x20) == plVar33) goto LAB_1429c2c2b;
        iVar22 = *(int *)(lVar19 + 0x18);
      } while (iVar22 != -1);
    }
  }
  lVar19 = 0;
LAB_1429c2c2b:
  FUN_1429c98c0(plVar33,lVar19 + 8);
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  if (local_218 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_144756766(local_1a8,uStack_1a0 & 0xffffffff);
  if (local_1a8 != 0) {
    FUN_1400020a8();
  }
  FUN_144756766(local_198,uStack_190 & 0xffffffff);
  if (local_198 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c31d2 FUN_1429c31d2 body=888 status=ok
// SIG undefined FUN_1429c31d2(void)

void FUN_1429c31d2(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = param_2;
  if ((param_2 != (longlong *)0x0) && ((int)param_3[1] != 0)) {
    uVar5 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    plVar6 = (longlong *)FUN_1429d374a(param_1 + 200,uVar5 >> 0x10 ^ uVar5,&local_b8);
    *(float *)(*(longlong *)(*local_b8 + 0x650) + (longlong)(int)local_b8[1] * 4) =
         (float)(int)plVar6[1] *
         *(float *)(*(longlong *)(*local_b8 + 0x650) + (longlong)(int)local_b8[1] * 4);
    uVar5 = *(uint *)(param_3 + 1);
    local_a8 = 0;
    if ((longlong)(int)uVar5 != 0) {
      iVar8 = (int)plVar6[1];
      *(uint *)(plVar6 + 1) = iVar8 + uVar5;
      if ((uint)(*(int *)((longlong)plVar6 + 0xc) - iVar8) < uVar5) {
        FUN_1406b7a4a(plVar6,iVar8);
      }
      memcpy((void *)((longlong)iVar8 * 8 + *plVar6),(void *)*param_3,(longlong)(int)uVar5 << 3);
      local_a8 = (undefined4)param_3[1];
    }
    local_b0 = *param_3;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_1405039ea();
    lVar4 = param_3[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_3;
      lVar10 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar10);
        if ((plVar3 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar3 + 0xc))) {
          plVar9 = *(longlong **)(*(longlong *)(*plVar3 + 0x5a8) + (longlong)(int)plVar3[1] * 0x10);
          if (plVar9 != (longlong *)0x0) {
            if (*(byte *)((longlong)plVar9 + 0xc) < 3) {
              plVar9 = (longlong *)0x0;
            }
            if ((plVar9 != (longlong *)0x0) && (plVar9 != local_b8)) {
              FUN_146dfb7fc(param_1,plVar3);
            }
          }
          FUN_14016dd9c(param_1 + 0x28,plVar3);
          FUN_14016de36(param_1 + 0x78,plVar3);
          *(longlong **)(*(longlong *)(*plVar3 + 0x5a8) + (longlong)(int)plVar3[1] * 0x10) =
               local_b8;
          *(float *)(*(longlong *)(*local_b8 + 0x650) + (longlong)(int)local_b8[1] * 4) =
               *(float *)(*(longlong *)(*local_b8 + 0x650) + (longlong)(int)local_b8[1] * 4) +
               *(float *)(*(longlong *)(*plVar3 + 0x650) + (longlong)(int)plVar3[1] * 4);
          iVar8 = *(int *)(*(longlong *)(*plVar3 + 0x2c0) + (longlong)(int)plVar3[1] * 0x10);
          lVar7 = (longlong)(int)local_b8[1] * 0x10;
          iVar1 = *(int *)(*(longlong *)(*local_b8 + 0x2c0) + lVar7);
          if (iVar1 < iVar8) {
            iVar8 = iVar1;
          }
          *(int *)(*(longlong *)(*local_b8 + 0x2c0) + lVar7) = iVar8;
        }
        local_b0 = *(longlong *)(*(longlong *)(*plVar3 + 200) + (longlong)(int)plVar3[1] * 8);
        FUN_140123484((longlong)(int)local_b8[1] * 0x50 + *(longlong *)(*local_b8 + 0x608),local_9c,
                      &local_b0,0);
        if (*(longlong *)(*(longlong *)(*local_b8 + 200) + (longlong)(int)local_b8[1] * 8) == 0) {
          *(undefined8 *)(*(longlong *)(*local_b8 + 200) + (longlong)(int)local_b8[1] * 8) =
               *(undefined8 *)(*(longlong *)(*plVar3 + 200) + (longlong)(int)plVar3[1] * 8);
        }
        FUN_14016e00e(*(undefined8 *)(param_1 + 0x18),plVar3);
        FUN_1456cc230(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x2c8),plVar3,1);
        lVar10 = lVar10 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar10);
    }
    lVar4 = plVar6[1];
    *(int *)(*(longlong *)(*local_b8 + 0x5a8) + 8 + (longlong)(int)local_b8[1] * 0x10) = (int)lVar4;
    *(float *)(*(longlong *)(*local_b8 + 0x650) + (longlong)(int)local_b8[1] * 4) =
         *(float *)(*(longlong *)(*local_b8 + 0x650) + (longlong)(int)local_b8[1] * 4) /
         (float)(int)lVar4;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140a356f6(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c354c FUN_1429c354c body=956 status=ok
// SIG undefined FUN_1429c354c(void)

void FUN_1429c354c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint *puVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStack_88 [32];
  uint *local_68;
  undefined8 *local_60;
  uint local_58 [4];
  uint *local_48;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == (longlong *)0x0) goto LAB_1429c35a4;
  lVar9 = *param_2;
  lVar6 = (longlong)(int)param_2[1];
  puVar3 = *(undefined8 **)(*(longlong *)(lVar9 + 0x60) + lVar6 * 8);
  if ((puVar3 != (undefined8 *)0x0) && (DAT_14c9932b4 == '\x01')) {
    uVar13 = 0;
    if ((*(char *)((longlong)puVar3 + 0x1c) == '\x0f') ||
       (*(char *)((longlong)puVar3 + 0x1c) == '\x05')) {
      local_48 = (uint *)0x0;
      local_3c = 0x80;
      local_40 = *(int *)(*(longlong *)(lVar9 + 0xf8) + 0x10 + lVar6 * 0x18);
      uVar14 = local_40 + 0x1f;
      if (0x1f < uVar14) {
        if (uVar14 < 0xa0) {
          puVar11 = local_58;
LAB_1429c385d:
          uVar14 = uVar14 >> 3 & 0xfffffffc;
          iVar12 = (int)CONCAT71((int7)((ulonglong)uVar13 >> 8),0xff);
        }
        else {
          uVar13 = 0;
          FUN_14499171c(local_58,0,uVar14 >> 5,4);
          local_3c = uVar14 & 0xffffffe0;
          puVar11 = local_48;
          if (local_48 == (uint *)0x0) {
            puVar11 = local_58;
          }
          if (uVar14 < 0x120) goto LAB_1429c385d;
          uVar14 = (uVar14 >> 5) << 2;
          iVar12 = (int)CONCAT71((int7)((ulonglong)uVar13 >> 8),0xff);
        }
        memset(puVar11,iVar12,(ulonglong)uVar14);
        iVar12 = local_40 + 0x1f;
        if (-1 < local_40) {
          iVar12 = local_40;
        }
        if (local_40 % 0x20 != 0) {
          puVar11 = local_48;
          if (local_48 == (uint *)0x0) {
            puVar11 = local_58;
          }
          bVar8 = -(char)(local_40 % 0x20);
          puVar11[iVar12 >> 5] = (puVar11[iVar12 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
        }
      }
      lVar9 = *param_2;
      lVar15 = (longlong)(int)param_2[1];
      lVar6 = *(longlong *)(*(longlong *)(lVar9 + 200) + lVar15 * 8);
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0x1c) != 2)) {
        uVar5 = FUN_140196188(param_1 + 0x118,param_2);
        lVar6 = FUN_1401961f6(param_1 + 0x118,uVar5);
        if (lVar6 != 0) {
          iVar12 = *(int *)(*(longlong *)(lVar9 + 0xf8) + 0x10 + lVar15 * 0x18);
          if ((iVar12 == *(int *)(lVar6 + 0x18)) && (iVar12 != 0)) {
            lVar9 = *(longlong *)(lVar6 + 0x10);
            lVar6 = (longlong)iVar12 << 3;
            uVar10 = 0;
            do {
              plVar4 = *(longlong **)(lVar9 + uVar10 * 8);
              if ((((plVar4 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar4 + 0xc))) &&
                  (lVar15 = *(longlong *)
                             (*(longlong *)(*plVar4 + 200) + (longlong)(int)plVar4[1] * 8),
                  lVar15 != 0)) && (*(int *)(lVar15 + 0x1c) == 2)) {
                uVar14 = 1 << ((byte)uVar10 & 0x1f);
                puVar11 = local_48;
                if (local_48 == (uint *)0x0) {
                  puVar11 = local_58;
                }
                uVar16 = uVar10 >> 5 & 0x7ffffff;
                if ((*(byte *)(lVar15 + 0x1c2) & 0x40) == 0) {
                  uVar14 = ~uVar14 & puVar11[uVar16];
                }
                else {
                  uVar14 = uVar14 | puVar11[uVar16];
                }
                puVar11[uVar16] = uVar14;
              }
              uVar10 = uVar10 + 1;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
        }
      }
      else if (*(int *)(*(longlong *)(lVar9 + 0xf8) + 0x10 + lVar15 * 0x18) == 1) {
        puVar11 = local_48;
        if (local_48 == (uint *)0x0) {
          puVar11 = local_58;
        }
        *puVar11 = *(byte *)(lVar6 + 0x1c2) >> 6 & 1 | *puVar11 & 0xfffffffe;
      }
      if (*(int *)(puVar3 + 0xd) < 2) {
        bVar17 = false;
      }
      else {
        if (*(longlong *)(*(longlong *)(*param_2 + 0x698) + (longlong)(int)param_2[1] * 8) == 0) {
          puVar7 = (undefined8 *)FUN_14001cc68(0x160,0x10);
          *puVar7 = FUN_146e0edb8;
          puVar7[1] = 0;
          FUN_146d83648(puVar7 + 2);
          lVar9 = *(longlong *)(*(longlong *)(*param_2 + 0x698) + (longlong)(int)param_2[1] * 8);
          *(undefined8 **)(*(longlong *)(*param_2 + 0x698) + (longlong)(int)param_2[1] * 8) =
               puVar7 + 2;
          if (lVar9 != 0) {
            (**(code **)(lVar9 + -0x10))(lVar9 + -0x10);
          }
        }
        lVar9 = *param_2;
        lVar15 = (longlong)(int)param_2[1];
        uVar13 = *(undefined8 *)(*(longlong *)(lVar9 + 0x698) + lVar15 * 8);
        lVar6 = *(longlong *)(lVar9 + 0x2c0);
        uVar2 = *(undefined1 *)(lVar6 + 0xb + lVar15 * 0x10);
        lVar9 = *(longlong *)(lVar9 + 0xf8);
        LOCK();
        *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
        UNLOCK();
        local_68 = local_58;
        local_60 = puVar3;
        FUN_1429a6b3c(uVar13,&local_60,lVar15 * 0x18 + lVar9,
                      CONCAT71((int7)((ulonglong)lVar6 >> 8),uVar2));
        if (local_60 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_60 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)local_60 + 0xc) == 0)) {
            (**(code **)*local_60)(local_60,1);
          }
        }
        bVar17 = *(int *)(*(longlong *)
                           (*(longlong *)(*param_2 + 0x698) + (longlong)(int)param_2[1] * 8) + 8) !=
                 0;
      }
      if (local_48 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (bVar17) goto LAB_1429c35a4;
      lVar9 = *param_2;
      lVar6 = (longlong)(int)param_2[1];
    }
  }
  lVar15 = *(longlong *)(*(longlong *)(lVar9 + 0x698) + lVar6 * 8);
  if (lVar15 != 0) {
    *(undefined8 *)(*(longlong *)(lVar9 + 0x698) + lVar6 * 8) = 0;
    (**(code **)(lVar15 + -0x10))(lVar15 + -0x10);
  }
LAB_1429c35a4:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c390a FUN_1429c390a body=3115 status=ok
// SIG undefined FUN_1429c390a(void)

void FUN_1429c390a(ulonglong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint *puVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  longlong *plVar31;
  ulonglong uVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  uint local_120;
  uint local_11c;
  undefined8 local_118;
  undefined8 local_110;
  ulonglong local_108;
  uint local_fc;
  longlong local_f8;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong *local_d8;
  undefined4 local_cc;
  undefined4 local_c8 [2];
  ulonglong *local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar7 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  local_108 = param_1;
  local_d8 = param_2;
  plVar9 = (longlong *)FUN_1429d374a(param_1 + 200,uVar7 >> 0x10 ^ uVar7,&local_d8);
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  lVar28 = *local_d8;
  lVar16 = (longlong)(int)local_d8[1];
  iVar21 = (int)plVar9[1];
  fVar34 = (float)iVar21 * *(float *)(*(longlong *)(lVar28 + 0x650) + lVar16 * 4);
  uVar23 = (ulonglong)(int)param_3[1];
  if (uVar23 != 0) {
    param_3 = (longlong *)*param_3;
    plVar31 = param_3 + uVar23;
    do {
      if ((longlong)(int)plVar9[1] != 0) {
        plVar4 = (longlong *)*param_3;
        iVar21 = 1;
        uVar23 = 0;
        lVar28 = 0;
LAB_1429c3a30:
        if (*(longlong **)(*plVar9 + uVar23) != plVar4) goto code_r0x0001429c3a36;
        if (iVar21 != 0 && plVar4 != (longlong *)0x0) {
          uVar23 = *(ulonglong *)(*(longlong *)(*plVar4 + 200) + (longlong)(int)plVar4[1] * 8);
          FUN_1401236ea(&local_b8,local_c8);
          *local_c0 = uVar23;
          *(undefined4 *)(local_c0 + 1) = 0xffffffff;
          local_cc = local_c8[0];
          uVar7 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
          uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          uVar7 = uVar7 >> 0x10 ^ uVar7;
          local_128 = 0;
          local_118 = local_c0;
          cVar6 = FUN_1401235ce(&local_b8,uVar7);
          if (cVar6 == '\0') {
            uVar8 = (int)uStack_b0 - local_84;
            iVar22 = 1;
            if (3 < uVar8) {
              uVar23 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
              lVar16 = 0x3f;
              if (uVar23 != 0) {
                for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
                }
              }
              iVar22 = 1 << ((byte)lVar16 & 0x1f);
            }
            if (((int)uVar8 < 1) || (iVar22 <= local_70)) {
              uVar7 = local_70 - 1U & uVar7;
              *(uint *)((longlong)local_118 + 0xc) = uVar7;
              puVar20 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar20 = local_80;
              }
              *(undefined4 *)(local_118 + 1) =
                   *(undefined4 *)(puVar20 + ((longlong)local_70 - 1U & (longlong)(int)uVar7) * 4);
              puVar20 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar20 = local_80;
              }
              *(undefined4 *)(puVar20 + ((longlong)local_70 - 1U & (longlong)(int)uVar7) * 4) =
                   local_cc;
            }
            else {
              local_70 = iVar22;
              FUN_1401239a4(&local_b8);
            }
          }
          FUN_140a35b70(local_108,plVar4,local_d8);
          if (2 < *(byte *)((longlong)plVar4 + 0xc)) {
            fVar34 = fVar34 - *(float *)(*(longlong *)(*plVar4 + 0x650) +
                                        (longlong)(int)plVar4[1] * 4);
          }
          iVar22 = (int)plVar9[1];
          uVar7 = iVar22 - iVar21;
          uVar23 = (ulonglong)uVar7;
          if (uVar7 != 0) {
            if (0 < (int)uVar7) {
              uVar7 = 1;
            }
            uVar23 = (longlong)(int)uVar7 << 3;
            memmove((void *)(*plVar9 + (lVar28 >> 0x20) * 8),
                    (void *)(*plVar9 + (longlong)(int)(iVar22 - uVar7) * 8),uVar23);
            iVar22 = (int)plVar9[1];
          }
          *(int *)(plVar9 + 1) = iVar22 + -1;
          FUN_1400ca182(plVar9);
          lVar28 = *(longlong *)(local_108 + 0x18);
          lVar16 = *plVar4;
          lVar24 = (longlong)(int)plVar4[1];
          if ((*(byte *)((longlong)plVar4 + 0xc) < 2) ||
             (uVar23 = lVar24 * 0x10,
             *(char *)(*(longlong *)(lVar16 + 0x2c0) + 0xd + uVar23) != '\x01')) {
LAB_1429c3bf1:
            if ((*(char *)(*(longlong *)(lVar16 + 0xe0) + lVar24) != '\0') || (DAT_14c9978a0 != 0))
            {
              local_ec = *(undefined4 *)(*(longlong *)(lVar16 + 0x80) + lVar24 * 4);
              puVar10 = (undefined8 *)FUN_1447eab44(lVar28 + 0x360);
              *(undefined1 *)(puVar10 + 8) = 2;
              local_e8 = *plVar4;
              local_e0 = (longlong)(int)plVar4[1];
              lVar16 = *(longlong *)(local_e8 + 0xf8) + local_e0 * 0x18;
              lVar24 = *(longlong *)(lVar16 + 8);
              if (*(longlong *)(lVar16 + 8) == 0) {
                lVar24 = lVar16;
              }
              if ((longlong)*(int *)(lVar16 + 0x10) == 0) {
                local_110 = (ulonglong)local_110._4_4_ << 0x20;
                local_118 = (ulonglong *)((ulonglong)local_118._4_4_ << 0x20);
                uVar8 = 0;
                local_fc = 0;
                local_11c = 0;
                local_120 = 0;
                uVar7 = 0;
                uVar23 = 0;
              }
              else {
                lVar17 = (longlong)*(int *)(lVar16 + 0x10) * 8;
                lVar16 = 0;
                local_fc = 0;
                uVar8 = 0;
                local_118 = (ulonglong *)((ulonglong)local_118._4_4_ << 0x20);
                local_110 = (ulonglong)local_110._4_4_ << 0x20;
                do {
                  lVar5 = *(longlong *)(lVar24 + lVar16);
                  if ((lVar5 != 0) &&
                     ((*(byte *)(lVar5 + 0x71 + (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0) * 8) &
                      2) != 0)) {
                    uVar23 = (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0);
                    local_110 = CONCAT44(local_110._4_4_,
                                         (uint)local_110 | *(uint *)(lVar5 + 0x48 + uVar23 * 8));
                    local_118 = (ulonglong *)
                                CONCAT44(local_118._4_4_,
                                         (uint)local_118 | *(uint *)(lVar5 + 0x4c + uVar23 * 8));
                    uVar8 = uVar8 | *(uint *)(lVar5 + 0x50 + uVar23 * 8);
                    local_fc = local_fc | *(uint *)(lVar5 + 0x54 + uVar23 * 8);
                  }
                  lVar16 = lVar16 + 8;
                } while (lVar17 != lVar16);
                lVar16 = 0;
                local_11c = 0;
                local_120 = 0;
                uVar7 = 0;
                uVar23 = 0;
                do {
                  lVar5 = *(longlong *)(lVar24 + lVar16);
                  if ((lVar5 != 0) &&
                     ((*(byte *)(lVar5 + 0x71 + (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0) * 8) &
                      5) != 0)) {
                    uVar13 = (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0);
                    uVar23 = (ulonglong)((uint)uVar23 | *(uint *)(lVar5 + 0x58 + uVar13 * 8));
                    uVar7 = uVar7 | *(uint *)(lVar5 + 0x5c + uVar13 * 8);
                    local_120 = local_120 | *(uint *)(lVar5 + 0x60 + uVar13 * 8);
                    local_11c = local_11c | *(uint *)(lVar5 + 100 + uVar13 * 8);
                  }
                  lVar16 = lVar16 + 8;
                  local_f8 = lVar24;
                } while (lVar17 != lVar16);
              }
              uVar3 = *(undefined4 *)(*(longlong *)(local_e8 + 0x80) + local_e0 * 4);
              *puVar10 = *(undefined8 *)(*(longlong *)(local_e8 + 0xb0) + local_e0 * 8);
              puVar10[1] = plVar4;
              *(undefined4 *)(puVar10 + 2) = uVar3;
              *(uint *)((longlong)puVar10 + 0x14) = (uint)local_110;
              *(uint *)(puVar10 + 3) = (uint)local_118;
              *(uint *)((longlong)puVar10 + 0x1c) = uVar8;
              *(uint *)(puVar10 + 4) = local_fc;
              *(int *)((longlong)puVar10 + 0x24) = (int)uVar23;
              *(uint *)(puVar10 + 5) = uVar7;
              *(uint *)((longlong)puVar10 + 0x2c) = local_120;
              *(uint *)(puVar10 + 6) = local_11c;
              *(undefined1 *)((longlong)puVar10 + 0x34) = 1;
              *(undefined2 *)(puVar10 + 7) =
                   *(undefined2 *)(*(longlong *)(*plVar4 + 0x170) + (longlong)(int)plVar4[1] * 2);
              uVar23 = CONCAT71((int7)(uVar23 >> 8),1);
              puVar11 = (undefined8 *)FUN_1447eab44(lVar28 + 0x380,local_ec,uVar23);
              for (lVar28 = 9; lVar28 != 0; lVar28 = lVar28 + -1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              }
              lVar28 = *(longlong *)(local_108 + 0x18);
            }
          }
          else if ((*(byte *)((longlong)plVar4 + 0xc) != 2) &&
                  ((puVar14 = *(ulonglong **)(*(longlong *)(lVar16 + 0x5a8) + uVar23),
                   puVar14 != (ulonglong *)0x0 && (2 < *(byte *)((longlong)puVar14 + 0xc))))) {
            uVar23 = *puVar14;
            if (((*(byte *)(*(longlong *)(uVar23 + 0x680) + (longlong)(int)puVar14[1]) & 1) != 0) &&
               (plVar1 = (longlong *)(uVar23 + 200), uVar23 = *(ulonglong *)(lVar16 + 200),
               *(longlong *)(*plVar1 + (longlong)(int)puVar14[1] * 8) ==
               *(longlong *)(uVar23 + lVar24 * 8))) goto LAB_1429c3bf1;
          }
          uVar23 = CONCAT71((int7)(uVar23 >> 8),1);
          FUN_1456cc230(*(undefined8 *)(lVar28 + 0x2c8),plVar4);
        }
      }
LAB_1429c3a55:
      param_3 = param_3 + 1;
    } while (param_3 != plVar31);
    iVar21 = (int)plVar9[1];
    lVar28 = *local_d8;
    lVar16 = (longlong)(int)local_d8[1];
  }
  *(int *)(*(longlong *)(lVar28 + 0x5a8) + 8 + lVar16 * 0x10) = iVar21;
  if ((int)plVar9[1] == 0) {
    *(undefined4 *)(*(longlong *)(*local_d8 + 0x650) + (longlong)(int)local_d8[1] * 4) = 0;
    FUN_1402136b6((longlong)(int)local_d8[1] * 0x50 + *(longlong *)(*local_d8 + 0x608),0);
  }
  else {
    *(float *)(*(longlong *)(*local_d8 + 0x650) + (longlong)(int)local_d8[1] * 4) =
         fVar34 / (float)(int)plVar9[1];
    lVar28 = plVar9[1];
    if ((longlong)(int)lVar28 != 0) {
      lVar16 = *plVar9;
      lVar24 = 0;
      do {
        FUN_14172aa72(&local_b8,
                      *(undefined8 *)
                       (*(longlong *)(**(longlong **)(lVar16 + lVar24) + 200) +
                       (longlong)(int)(*(longlong **)(lVar16 + lVar24))[1] * 8));
        if ((int)uStack_b0 == local_84) break;
        bVar33 = (longlong)(int)lVar28 * 8 + -8 != lVar24;
        lVar24 = lVar24 + 8;
      } while (bVar33);
    }
    uVar7 = local_90;
    if (local_90 == 0) {
      uVar29 = 1;
      iVar21 = 0;
      uVar13 = 0;
      uVar32 = 0;
    }
    else {
      puVar12 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar12 = local_a8;
      }
      uVar8 = *puVar12;
      if (uVar8 == 0) {
        iVar21 = local_90 + 0x1e;
        if (-1 < (int)(local_90 - 1)) {
          iVar21 = local_90 - 1;
        }
        uVar32 = 0;
        uVar13 = (ulonglong)(uint)(iVar21 >> 5);
        if (iVar21 >> 5 < 1) {
          uVar13 = uVar32;
        }
        iVar21 = 0;
        do {
          if (uVar13 == uVar32) goto LAB_1429c408e;
          iVar21 = iVar21 + 0x20;
          uVar8 = puVar12[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar8 == 0);
      }
      else {
        iVar21 = 0;
        uVar32 = 0;
      }
      uVar29 = (ulonglong)(-uVar8 & uVar8);
      uVar13 = uVar29 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      uVar8 = (iVar21 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
      if ((int)local_90 <= (int)uVar8) {
        uVar8 = local_90;
      }
      uVar13 = (ulonglong)uVar8;
    }
    if ((uint)uVar13 != local_90) {
      uVar8 = 0xffffffff;
      do {
        FUN_14172aa72((longlong)(int)local_d8[1] * 0x50 + *(longlong *)(*local_d8 + 0x608),
                      *(undefined8 *)(local_b8 + (longlong)(int)uVar13 * 0x10));
        uVar8 = ~(uint)uVar29 & uVar8;
        puVar12 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar12 = local_a8;
        }
        uVar13 = (ulonglong)local_90;
        iVar22 = (int)uVar32;
        lVar28 = (longlong)iVar22;
        uVar25 = puVar12[lVar28] & uVar8;
        if (uVar25 == 0) {
          uVar25 = local_90 - 1;
          uVar26 = local_90 + 0x1e;
          if (-1 < (int)uVar25) {
            uVar26 = uVar25;
          }
          iVar18 = (int)uVar26 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar19 = iVar18;
          if (iVar18 < iVar22) {
            iVar19 = iVar22;
          }
          if (iVar22 < iVar18) {
            lVar16 = 0;
            do {
              uVar25 = puVar12[lVar28 + lVar16 + 1];
              if (uVar25 != 0) {
                uVar32 = (ulonglong)(iVar22 + (int)lVar16 + 1);
                uVar8 = 0xffffffff;
                goto LAB_1429c4212;
              }
              iVar21 = iVar21 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar19 - lVar28 != lVar16);
            uVar8 = 0xffffffff;
            uVar25 = 0;
            iVar22 = iVar19;
          }
          uVar32 = (ulonglong)(iVar22 + 1);
          uVar23 = (ulonglong)uVar25;
        }
        else {
LAB_1429c4212:
          uVar29 = (ulonglong)(-uVar25 & uVar25);
          uVar23 = uVar29 * 2 + 1;
          lVar28 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar28 == 0; lVar28 = lVar28 + -1) {
            }
          }
          uVar25 = (iVar21 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
          if ((int)local_90 <= (int)uVar25) {
            uVar25 = local_90;
          }
          uVar13 = (ulonglong)uVar25;
          uVar23 = uVar13;
        }
      } while ((uint)uVar13 != uVar7);
    }
LAB_1429c408e:
    if ((int)uStack_b0 != local_84) {
      uVar13 = *(ulonglong *)(*(longlong *)(*local_d8 + 200) + (longlong)(int)local_d8[1] * 8);
      uVar7 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      puVar20 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar20 = local_80;
      }
      uVar23 = (ulonglong)(local_70 - 1U & (uVar7 >> 0x10 ^ uVar7));
      iVar21 = *(int *)(puVar20 + uVar23 * 4);
      if (iVar21 != -1) {
        uVar23 = *(ulonglong *)
                  (*(longlong *)(**(longlong **)*plVar9 + 200) +
                  (longlong)(int)(*(longlong **)*plVar9)[1] * 8);
        do {
          if (*(ulonglong *)(local_b8 + (longlong)iVar21 * 0x10) == uVar13) {
            *(ulonglong *)(*(longlong *)(*local_d8 + 200) + (longlong)(int)local_d8[1] * 8) = uVar23
            ;
            break;
          }
          iVar21 = *(int *)((longlong)iVar21 * 0x10 + local_b8 + 8);
        } while (iVar21 != -1);
      }
    }
  }
  plVar9 = local_d8;
  lVar28 = *(longlong *)(local_108 + 0x18);
  bVar2 = *(byte *)((longlong)local_d8 + 0xc);
  lVar24 = CONCAT71((int7)(uVar23 >> 8),1 < bVar2);
  lVar16 = *local_d8;
  lVar17 = (longlong)(int)local_d8[1];
  if ((local_d8 != (longlong *)0x0 && 1 < bVar2) &&
     (lVar24 = lVar17 * 0x10, *(char *)(*(longlong *)(lVar16 + 0x2c0) + 0xd + lVar24) == '\x01')) {
    if ((bVar2 < 3) ||
       ((plVar31 = *(longlong **)(*(longlong *)(lVar16 + 0x5a8) + lVar24),
        plVar31 == (longlong *)0x0 || (*(byte *)((longlong)plVar31 + 0xc) < 3))))
    goto LAB_1429c44a7;
    if (((*(byte *)(*(longlong *)(*plVar31 + 0x680) + (longlong)(int)plVar31[1]) & 1) == 0) ||
       (lVar24 = *(longlong *)(lVar16 + 200),
       *(longlong *)(*(longlong *)(*plVar31 + 200) + (longlong)(int)plVar31[1] * 8) !=
       *(longlong *)(lVar24 + lVar17 * 8))) goto LAB_1429c44a7;
  }
  if ((*(char *)(*(longlong *)(lVar16 + 0xe0) + lVar17) != '\0') || (DAT_14c9978a0 != 0)) {
    uVar3 = *(undefined4 *)(*(longlong *)(lVar16 + 0x80) + lVar17 * 4);
    local_108 = CONCAT44(local_108._4_4_,uVar3);
    puVar14 = (ulonglong *)
              FUN_1447eab44(lVar28 + 0x360,uVar3,CONCAT71((int7)((ulonglong)lVar24 >> 8),1));
    *(undefined1 *)(puVar14 + 8) = 2;
    lVar16 = *plVar9;
    lVar24 = (longlong)(int)plVar9[1];
    local_110 = *(ulonglong *)(*(longlong *)(lVar16 + 0xb0) + lVar24 * 8);
    uVar3 = *(undefined4 *)(*(longlong *)(lVar16 + 0x80) + lVar24 * 4);
    local_118 = (ulonglong *)CONCAT44(local_118._4_4_,uVar3);
    lVar16 = *(longlong *)(lVar16 + 0xf8) + lVar24 * 0x18;
    lVar24 = *(longlong *)(lVar16 + 8);
    if (*(longlong *)(lVar16 + 8) == 0) {
      lVar24 = lVar16;
    }
    if ((longlong)*(int *)(lVar16 + 0x10) == 0) {
      local_11c = 0;
      local_120 = 0;
      uVar25 = 0;
      uVar26 = 0;
      uVar8 = 0;
      uVar27 = 0;
      uVar30 = 0;
      uVar7 = 0;
      uVar23 = local_110;
    }
    else {
      lVar17 = (longlong)*(int *)(lVar16 + 0x10) * 8;
      lVar16 = 0;
      uVar26 = 0;
      uVar25 = 0;
      local_120 = 0;
      uVar23 = 0;
      do {
        lVar5 = *(longlong *)(lVar24 + lVar16);
        if ((lVar5 != 0) &&
           ((*(byte *)(lVar5 + 0x71 + (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0) * 8) & 2) != 0))
        {
          uVar13 = (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0);
          uVar26 = uVar26 | *(uint *)(lVar5 + 0x48 + uVar13 * 8);
          uVar25 = uVar25 | *(uint *)(lVar5 + 0x4c + uVar13 * 8);
          local_120 = local_120 | *(uint *)(lVar5 + 0x50 + uVar13 * 8);
          uVar23 = (ulonglong)((uint)uVar23 | *(uint *)(lVar5 + 0x54 + uVar13 * 8));
        }
        lVar16 = lVar16 + 8;
      } while (lVar17 != lVar16);
      local_11c = (uint)uVar23;
      lVar16 = 0;
      uVar8 = 0;
      uVar27 = 0;
      uVar30 = 0;
      uVar7 = 0;
      do {
        lVar5 = *(longlong *)(lVar24 + lVar16);
        if (lVar5 != 0) {
          uVar23 = (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0);
          if ((*(byte *)(lVar5 + 0x71 + uVar23 * 8) & 5) != 0) {
            uVar23 = (ulonglong)((*(uint *)(lVar5 + 8) & 3) == 0);
            uVar8 = uVar8 | *(uint *)(lVar5 + 0x58 + uVar23 * 8);
            uVar27 = uVar27 | *(uint *)(lVar5 + 0x5c + uVar23 * 8);
            uVar30 = uVar30 | *(uint *)(lVar5 + 0x60 + uVar23 * 8);
            uVar7 = uVar7 | *(uint *)(lVar5 + 100 + uVar23 * 8);
          }
        }
        lVar16 = lVar16 + 8;
      } while (lVar17 != lVar16);
    }
    *puVar14 = local_110;
    puVar14[1] = (ulonglong)plVar9;
    *(undefined4 *)(puVar14 + 2) = uVar3;
    *(uint *)((longlong)puVar14 + 0x14) = uVar26;
    *(uint *)(puVar14 + 3) = uVar25;
    *(uint *)((longlong)puVar14 + 0x1c) = local_120;
    *(uint *)(puVar14 + 4) = local_11c;
    *(uint *)((longlong)puVar14 + 0x24) = uVar8;
    *(uint *)(puVar14 + 5) = uVar27;
    *(uint *)((longlong)puVar14 + 0x2c) = uVar30;
    *(uint *)(puVar14 + 6) = uVar7;
    *(undefined1 *)((longlong)puVar14 + 0x34) = 1;
    *(undefined2 *)(puVar14 + 7) =
         *(undefined2 *)(*(longlong *)(*plVar9 + 0x170) + (longlong)(int)plVar9[1] * 2);
    puVar15 = (ulonglong *)
              FUN_1447eab44(lVar28 + 0x380,local_108 & 0xffffffff,CONCAT71((int7)(uVar23 >> 8),1));
    for (lVar28 = 9; lVar28 != 0; lVar28 = lVar28 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
  }
LAB_1429c44a7:
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14014a700(&local_b8);
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001429c3a36:
  lVar28 = lVar28 + 0x100000000;
  iVar21 = iVar21 + 1;
  uVar23 = uVar23 + 8;
  if ((longlong)(int)plVar9[1] * 8 == uVar23) goto LAB_1429c3a55;
  goto LAB_1429c3a30;
}



// FUNCTION 1429c4536 FUN_1429c4536 body=69 status=ok
// SIG undefined FUN_1429c4536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c4536(void)

{
  _DAT_14c994318 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c4578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994320,1);
  return;
}



// FUNCTION 1429c457c FUN_1429c457c body=565 status=ok
// SIG undefined FUN_1429c457c(void)

undefined8 *
FUN_1429c457c(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [64];
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if ((int)param_3[1] == 0) goto LAB_1429c45d7;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar1 = *(undefined1 *)(param_1 + 0x371);
  *(undefined1 *)(param_1 + 0x371) = param_4;
  lVar5 = param_3[1];
  if ((longlong)(int)lVar5 == 0) {
LAB_1429c4722:
    *(undefined1 *)(param_1 + 0x371) = uVar1;
    local_50 = 0;
  }
  else {
    lVar2 = *param_3;
    lVar8 = 0;
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar8);
      if ((plVar3 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar3 + 0xc))) {
        lVar4 = *plVar3;
        lVar6 = (longlong)(int)plVar3[1] * 0x10;
        if (*(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xd + lVar6) == '\x01') {
          lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x5a8) + lVar6);
          if (lVar6 != 0) {
            if ((lVar7 != 0) && (lVar6 != lVar7)) goto LAB_1429c4743;
            *(undefined4 *)(*(longlong *)(lVar4 + 0x638) + (longlong)(int)plVar3[1] * 4) =
                 0x7f7fffff;
            FUN_1402bf4a4(param_1,plVar3);
            *(undefined4 *)(*(longlong *)(*plVar3 + 0x650) + (longlong)(int)plVar3[1] * 4) =
                 *(undefined4 *)(*(longlong *)(*plVar3 + 0x638) + (longlong)(int)plVar3[1] * 4);
            lVar7 = *(longlong *)(*(longlong *)(*plVar3 + 0x5a8) + (longlong)(int)plVar3[1] * 0x10);
          }
        }
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar8);
    if (lVar7 == 0) goto LAB_1429c4722;
LAB_1429c4743:
    if (*(byte *)(lVar7 + 0xc) < 3) {
      lVar7 = 0;
    }
    FUN_1429c47b2(param_1,local_e8,lVar7,0);
    FUN_146dfb94a(param_2,local_e8);
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_140a356f6(local_e8);
    *(undefined1 *)(param_1 + 0x371) = uVar1;
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_146dfc5fc(&local_98);
LAB_1429c45d7:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c47b2 FUN_1429c47b2 body=147 status=ok
// SIG undefined FUN_1429c47b2(void)

undefined8 *
FUN_1429c47b2(longlong param_1,undefined8 *param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_3 + 0x5a8) + (longlong)(int)param_3[1] * 0x10);
  if (((lVar1 != 0) && (2 < *(byte *)(lVar1 + 0xc))) &&
     (iVar2 = FUN_140196188(param_1 + 0x118), iVar2 == -1)) {
    param_2[4] = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    param_2[8] = 0;
    *(undefined4 *)(param_2 + 9) = 0;
    return param_2;
  }
  FUN_140a334c6(param_1,param_2,param_3,param_4,1);
  return param_2;
}



// FUNCTION 1429c4846 FUN_1429c4846 body=27 status=ok
// SIG undefined FUN_1429c4846(void)

undefined8 FUN_1429c4846(undefined8 param_1,undefined8 param_2)

{
  FUN_140a334c6();
  return param_2;
}



// FUNCTION 1429c4862 FUN_1429c4862 body=272 status=ok
// SIG undefined FUN_1429c4862(void)

void FUN_1429c4862(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_78 [64];
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != (longlong *)0x0) {
    pbVar1 = (byte *)(*(longlong *)(*param_2 + 0x680) + (longlong)(int)param_2[1]);
    *pbVar1 = *pbVar1 & 0xfb;
    plVar2 = *(longlong **)(*(longlong *)(*param_2 + 0x5a8) + (longlong)(int)param_2[1] * 0x10);
    if ((((plVar2 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar2 + 0xc))) &&
        (lVar3 = *(longlong *)(*(longlong *)(*plVar2 + 200) + (longlong)(int)plVar2[1] * 8),
        lVar3 != 0)) && (*(int *)(lVar3 + 0x1c) != 0xc)) {
      FUN_1429c4862(param_1,plVar2,param_3);
    }
    local_88 = (undefined8 *)0x0;
    local_80 = 1;
    FUN_140509e62(&local_88,1,0);
    *local_88 = param_2;
    FUN_1429c457c(param_1,local_78,&local_88,param_3);
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_140a356f6(local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c4973 FUN_1429c4973 body=69 status=ok
// SIG undefined FUN_1429c4973(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c4973(void)

{
  _DAT_14c994328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c49b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994330,1);
  return;
}



// FUNCTION 1429c49b8 FUN_1429c49b8 body=69 status=ok
// SIG undefined FUN_1429c49b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c49b8(void)

{
  _DAT_14c994338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c49fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994340,1);
  return;
}



// FUNCTION 1429c49fd FUN_1429c49fd body=69 status=ok
// SIG undefined FUN_1429c49fd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c49fd(void)

{
  _DAT_14c994348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c4a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994350,1);
  return;
}



// FUNCTION 1429c4a42 FUN_1429c4a42 body=69 status=ok
// SIG undefined FUN_1429c4a42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c4a42(void)

{
  _DAT_14c994358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c4a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994360,1);
  return;
}



// FUNCTION 1429c4a88 FUN_1429c4a88 body=5762 status=ok
// SIG undefined FUN_1429c4a88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c4a88(LARGE_INTEGER param_1,double param_2,longlong param_3)

{
  ulonglong uVar1;
  double dVar2;
  LARGE_INTEGER LVar3;
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
  LARGE_INTEGER LVar14;
  LARGE_INTEGER LVar15;
  LARGE_INTEGER LVar16;
  undefined8 uVar17;
  LARGE_INTEGER *pLVar18;
  undefined8 *puVar19;
  byte bVar20;
  uint uVar21;
  undefined4 uVar22;
  LARGE_INTEGER *pLVar23;
  uint *puVar24;
  longlong *plVar25;
  undefined8 uVar26;
  int *piVar27;
  undefined8 *puVar28;
  byte bVar29;
  longlong lVar30;
  longlong *plVar31;
  LARGE_INTEGER *pLVar32;
  LARGE_INTEGER *pLVar33;
  int *piVar34;
  void *_Dst;
  longlong lVar35;
  ulonglong uVar36;
  LARGE_INTEGER *pLVar37;
  uint uVar38;
  int iVar39;
  LARGE_INTEGER *pLVar40;
  ulonglong uVar41;
  longlong *plVar42;
  longlong lVar43;
  LARGE_INTEGER *pLVar44;
  LARGE_INTEGER *pLVar45;
  DWORD DVar46;
  uint uVar47;
  uint *puVar48;
  int iVar49;
  int iVar50;
  LARGE_INTEGER *pLVar51;
  int iVar52;
  LARGE_INTEGER *pLVar53;
  int iVar54;
  longlong *plVar55;
  longlong lVar56;
  undefined8 *puVar57;
  uint uVar58;
  ulonglong uVar59;
  int iVar60;
  LARGE_INTEGER *pLVar61;
  int iVar62;
  bool bVar63;
  float fVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  undefined1 auStack_498 [32];
  int local_478;
  LARGE_INTEGER *local_470;
  uint *local_468;
  uint local_45c;
  ulonglong local_458;
  int *local_450;
  LARGE_INTEGER *local_448;
  undefined4 local_440;
  LARGE_INTEGER local_438;
  undefined8 uStack_430;
  char local_421;
  undefined8 local_420;
  char *local_418;
  LARGE_INTEGER local_410;
  LARGE_INTEGER local_408;
  LARGE_INTEGER *local_400;
  LARGE_INTEGER *local_3f8;
  int local_3f0;
  LARGE_INTEGER local_108;
  LARGE_INTEGER LStack_100;
  LARGE_INTEGER local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_498;
  QueryPerformanceCounter(&local_408);
  QueryPerformanceCounter(&local_408);
  if (DAT_14c994368 == 1) {
    *(int *)param_1 = *(int *)param_1 + 1;
    *(int *)(param_1.QuadPart + 4) =
         *(int *)(param_1.QuadPart + 4) + *(int *)(param_1.QuadPart + 0xc);
    *(int *)(param_1.QuadPart + 8) =
         *(int *)(param_1.QuadPart + 8) + *(int *)(param_1.QuadPart + 0x10);
  }
  ((int *)(param_1.QuadPart + 0xc))[0] = 0;
  ((int *)(param_1.QuadPart + 0xc))[1] = 0;
  if (*(int *)(param_1.QuadPart + 0xd0) != *(int *)(param_1.QuadPart + 0xfc)) {
    if (DAT_14c75f204 == 0) {
      if (*(char *)(param_1.QuadPart + 0x370) == '\x01') {
        lVar56 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x18) + 0x2c8);
        lVar30 = *(longlong *)(lVar56 + 0x40);
        if (0 < *(int *)(lVar30 + 0x628)) {
          lVar35 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar30 + 0x620) + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < *(int *)(lVar30 + 0x628));
        }
        lVar56 = *(longlong *)(lVar56 + 0x38);
        if (0 < *(int *)(lVar56 + 0x628)) {
          lVar30 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar56 + 0x620) + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < *(int *)(lVar56 + 0x628));
        }
        *(undefined1 *)(param_1.QuadPart + 0x370) = 0;
      }
    }
    else {
      if (9.99999993922529e-09 < param_2) {
        fVar64 = (float)(1.0 / param_2);
      }
      else {
        fVar64 = 1.0;
      }
      local_438.s.LowPart = (DWORD)fVar64;
      if (*(char *)(param_1.QuadPart + 0x370) == '\x01') {
        lVar56 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x18) + 0x2c8);
        lVar30 = *(longlong *)(lVar56 + 0x40);
        if (0 < *(int *)(lVar30 + 0x628)) {
          lVar35 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar30 + 0x620) + lVar35 * 4) = 0;
            lVar35 = lVar35 + 1;
          } while (lVar35 < *(int *)(lVar30 + 0x628));
        }
        lVar56 = *(longlong *)(lVar56 + 0x38);
        if (0 < *(int *)(lVar56 + 0x628)) {
          lVar30 = 0;
          do {
            *(undefined4 *)(*(longlong *)(lVar56 + 0x620) + lVar30 * 4) = 0;
            lVar30 = lVar30 + 1;
          } while (lVar30 < *(int *)(lVar56 + 0x628));
        }
        *(undefined1 *)(param_1.QuadPart + 0x370) = 0;
      }
      iVar62 = *(int *)(param_3 + 0x60);
      if ((longlong)iVar62 != 0) {
        lVar56 = *(longlong *)(param_3 + 0x58);
        lVar30 = 0;
        do {
          local_108 = (LARGE_INTEGER)((LARGE_INTEGER *)(lVar56 + lVar30))->QuadPart;
          if (((int *)local_108.QuadPart != (int *)0x0) &&
             ((*(byte *)(local_108.QuadPart + 0x375) & 0x40) == 0)) {
            plVar42 = *(longlong **)(local_108.QuadPart + 0xe0);
            plVar25 = (longlong *)0x0;
            if (2 < *(byte *)((longlong)plVar42 + 0xc)) {
              plVar25 = plVar42;
            }
            plVar31 = *(longlong **)(local_108.QuadPart + 0xe8);
            plVar55 = (longlong *)0x0;
            if (2 < *(byte *)((longlong)plVar31 + 0xc)) {
              plVar55 = plVar31;
            }
            if (plVar25 != (longlong *)0x0 || plVar55 != (longlong *)0x0) {
              if (*(byte *)((longlong)plVar42 + 0xc) < 2) {
                plVar42 = (longlong *)0x0;
              }
              if (*(byte *)((longlong)plVar31 + 0xc) < 2) {
                plVar31 = (longlong *)0x0;
              }
              if (DAT_14c75f228 == '\x01') {
                dVar67 = 0.0;
                dVar65 = 0.0;
                dVar66 = 0.0;
                dVar4 = 0.0;
                if (plVar42 != (longlong *)0x0) {
                  lVar43 = (longlong)(int)plVar42[1];
                  lVar35 = *(longlong *)(*plVar42 + 0x560);
                  dVar4 = (double)*(float *)(lVar35 + 8 + lVar43 * 0xc);
                  dVar66 = (double)*(float *)(lVar35 + 4 + lVar43 * 0xc);
                  dVar65 = (double)*(float *)(lVar35 + lVar43 * 0xc);
                }
                dVar68 = 0.0;
                dVar69 = 0.0;
                if (plVar31 != (longlong *)0x0) {
                  lVar43 = (longlong)(int)plVar31[1];
                  lVar35 = *(longlong *)(*plVar31 + 0x560);
                  dVar69 = (double)*(float *)(lVar35 + 8 + lVar43 * 0xc);
                  dVar68 = (double)*(float *)(lVar35 + 4 + lVar43 * 0xc);
                  dVar67 = (double)*(float *)(lVar35 + lVar43 * 0xc);
                }
                lVar35 = (longlong)*(int *)(local_108.QuadPart + 0x16c);
                if (lVar35 == -1) {
                  dVar2 = 0.0;
                  dVar5 = 0.0;
                  dVar10 = 1.0;
                }
                else {
                  piVar34 = (int *)(local_108.QuadPart + 0x3f8);
                  if (*(int **)(local_108.QuadPart + 0x5a8) != (int *)0x0) {
                    piVar34 = *(int **)(local_108.QuadPart + 0x5a8);
                  }
                  dVar5 = (double)(float)piVar34[lVar35 * 0x1b + 8];
                  dVar6 = (double)(float)piVar34[lVar35 * 0x1b + 7];
                  dVar9 = (double)(float)piVar34[lVar35 * 0x1b + 6];
                  dVar11 = *(double *)(local_108.QuadPart + 0x1d0);
                  dVar12 = *(double *)(local_108.QuadPart + 0x1d8);
                  dVar13 = *(double *)(local_108.QuadPart + 0x1e0);
                  dVar2 = *(double *)(local_108.QuadPart + 0x1e8);
                  dVar70 = dVar9 * dVar13 - dVar11 * dVar5;
                  dVar7 = dVar6 * dVar11 - dVar12 * dVar9;
                  dVar8 = dVar5 * dVar12 - dVar13 * dVar6;
                  dVar8 = dVar8 + dVar8;
                  dVar70 = dVar70 + dVar70;
                  dVar7 = dVar7 + dVar7;
                  dVar10 = dVar7 * dVar2 + dVar5 + (dVar70 * dVar11 - dVar8 * dVar12);
                  dVar2 = (dVar7 * dVar12 - dVar70 * dVar13) + dVar2 * dVar8 + dVar9;
                  dVar5 = (dVar13 * dVar8 - dVar11 * dVar7) +
                          *(double *)(local_108.QuadPart + 0x1e8) * dVar70 + dVar6;
                }
                if ((dVar5 * (dVar66 - dVar68) + (dVar65 - dVar67) * dVar2 +
                     (dVar4 - dVar69) * dVar10 <= (double)-DAT_14c75f22c) ||
                   (*(float *)(local_108.QuadPart + 0x128) * *(float *)(local_108.QuadPart + 0x128)
                    + *(float *)(local_108.QuadPart + 0x120) *
                      *(float *)(local_108.QuadPart + 0x120) +
                      *(float *)(local_108.QuadPart + 0x124) *
                      *(float *)(local_108.QuadPart + 0x124) <= 0.0)) {
LAB_1429c4f8a:
                  local_400 = &local_108;
                  local_420 = (LARGE_INTEGER *)0x0;
                  local_408 = param_1;
                  local_3f8 = &local_438;
                  if (plVar25 != (longlong *)0x0) {
                    FUN_1429c88f2(&local_408,plVar25,&local_420);
                    *(byte *)(param_1.QuadPart + 0x370) =
                         *(byte *)(param_1.QuadPart + 0x370) | 0.0 < (float)local_420;
                  }
                  if (plVar55 != (longlong *)0x0) {
                    FUN_1429c88f2(&local_408,plVar55,(longlong)&local_420 + 4);
                    *(byte *)(param_1.QuadPart + 0x370) =
                         *(byte *)(param_1.QuadPart + 0x370) | 0.0 < local_420._4_4_;
                  }
                }
              }
              else if (_DAT_14c75f224 <=
                       SQRT(*(float *)(local_108.QuadPart + 0x128) *
                            *(float *)(local_108.QuadPart + 0x128) +
                            *(float *)(local_108.QuadPart + 0x120) *
                            *(float *)(local_108.QuadPart + 0x120) +
                            *(float *)(local_108.QuadPart + 0x124) *
                            *(float *)(local_108.QuadPart + 0x124))) goto LAB_1429c4f8a;
            }
          }
          lVar30 = lVar30 + 8;
        } while ((longlong)iVar62 * 8 != lVar30);
      }
    }
    local_418 = &local_421;
    local_421 = '\0';
    local_420 = &local_438;
    local_438.QuadPart = 0;
    uStack_430 = 0;
    local_470 = (LARGE_INTEGER *)(param_1.QuadPart + 0x78);
    uVar38 = *(uint *)(param_1.QuadPart + 0x80);
    iVar62 = *(int *)(param_1.QuadPart + 0xac);
    local_410 = param_1;
    if (iVar62 < (int)uVar38) {
      iVar50 = 0;
      if (iVar62 != 0) {
        iVar60 = uVar38 - iVar62;
        iVar49 = iVar60;
        if (*(int *)(param_1.QuadPart + 0xa8) != -1) {
          lVar56 = *(longlong *)(param_1.QuadPart + 0x78);
          iVar52 = *(int *)(param_1.QuadPart + 0xa8);
          uVar21 = uVar38;
          do {
            iVar39 = *(int *)(lVar56 + 4 + (longlong)iVar52 * 0x18);
            if (iVar52 < iVar60) {
              puVar28 = (undefined8 *)(lVar56 + (longlong)iVar52 * 0x18);
              piVar34 = *(int **)(param_1.QuadPart + 0x98);
              if (*(int **)(param_1.QuadPart + 0x98) == (int *)0x0) {
                piVar34 = (int *)(param_1.QuadPart + 0x88);
              }
              puVar19 = (undefined8 *)(lVar56 + 0x18 + (longlong)(int)(uVar21 - 1) * 0x18);
              uVar47 = uVar21;
              do {
                puVar57 = puVar19;
                uVar21 = uVar47 - 1;
                uVar58 = uVar47 + 0x1e;
                if (-1 < (int)uVar21) {
                  uVar58 = uVar21;
                }
                puVar19 = puVar57 + -3;
                uVar47 = uVar21;
              } while (((uint)piVar34[(int)uVar58 >> 5] >> (uVar21 & 0x1f) & 1) == 0);
              uVar26 = puVar57[-3];
              uVar17 = puVar57[-2];
              puVar28[2] = puVar57[-1];
              *puVar28 = uVar26;
              puVar28[1] = uVar17;
              piVar34 = *(int **)(param_1.QuadPart + 0x98);
              if (*(int **)(param_1.QuadPart + 0x98) == (int *)0x0) {
                piVar34 = (int *)(param_1.QuadPart + 0x88);
              }
              iVar54 = iVar52 + 0x1f;
              if (-1 < iVar52) {
                iVar54 = iVar52;
              }
              piVar34[iVar54 >> 5] = piVar34[iVar54 >> 5] | 1 << ((byte)iVar52 & 0x1f);
            }
            iVar52 = iVar39;
          } while (iVar39 != -1);
          iVar52 = *(int *)(param_1.QuadPart + 0x80) - uVar38;
          if (iVar52 != 0) {
            _Dst = (void *)((longlong)iVar60 * 0x18 + *(longlong *)(param_1.QuadPart + 0x78));
            memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar62 * 0x18),(longlong)iVar52 * 0x18)
            ;
            iVar49 = *(int *)(param_1.QuadPart + 0x80) - iVar62;
          }
        }
        *(int *)(param_1.QuadPart + 0x80) = iVar49;
        iVar49 = *(int *)(param_1.QuadPart + 0xa0) - uVar38;
        if (iVar49 != 0) {
          piVar34 = *(int **)(param_1.QuadPart + 0x98);
          if (*(int **)(param_1.QuadPart + 0x98) == (int *)0x0) {
            piVar34 = (int *)(param_1.QuadPart + 0x88);
          }
          local_478 = iVar49;
          FUN_14493566c(piVar34,iVar60,piVar34,uVar38);
          iVar60 = *(int *)(param_1.QuadPart + 0xa0) - iVar62;
        }
        iVar62 = iVar60 + 0x1f;
        if (-1 < iVar60) {
          iVar62 = iVar60;
        }
        *(int *)(param_1.QuadPart + 0xa0) = iVar60;
        if (iVar60 % 0x20 != 0) {
          piVar34 = (int *)(param_1.QuadPart + 0x88);
          if (*(int **)(param_1.QuadPart + 0x98) != (int *)0x0) {
            piVar34 = *(int **)(param_1.QuadPart + 0x98);
          }
          bVar20 = -(char)(iVar60 % 0x20);
          piVar34[iVar62 >> 5] = (uint)(piVar34[iVar62 >> 5] << (bVar20 & 0x1f)) >> (bVar20 & 0x1f);
        }
        ((int *)(param_1.QuadPart + 0xa8))[0] = -1;
        ((int *)(param_1.QuadPart + 0xa8))[1] = 0;
        uVar38 = *(uint *)(param_1.QuadPart + 0x84);
        if (uVar38 != *(uint *)(param_1.QuadPart + 0x80)) {
          FUN_144727cd0(local_470);
          uVar38 = *(uint *)(param_1.QuadPart + 0x80);
          iVar50 = *(int *)(param_1.QuadPart + 0xac);
        }
      }
      uVar38 = uVar38 - iVar50;
      if (1 < (int)uVar38) {
        LVar3 = (LARGE_INTEGER)local_470->QuadPart;
        memset(&local_3f8,0,0x2f0);
        local_400 = (LARGE_INTEGER *)((int *)(LVar3.QuadPart + (ulonglong)uVar38 * 0x18) + -6);
        local_408 = LVar3;
        fVar64 = logf((float)(int)uVar38);
        local_3f8 = (LARGE_INTEGER *)CONCAT44(local_3f8._4_4_,(int)(longlong)(fVar64 + fVar64));
        pLVar23 = &local_408;
        do {
          pLVar33 = (LARGE_INTEGER *)pLVar23->QuadPart;
          pLVar44 = (LARGE_INTEGER *)pLVar23[1].QuadPart;
          DVar46 = pLVar23[2].s.LowPart;
          iVar62 = (int)((ulonglong)((longlong)pLVar44 - (longlong)pLVar33) >> 3) * -0x55555555;
          uVar36 = (ulonglong)(iVar62 + 1);
          pLVar40 = pLVar33;
          pLVar53 = pLVar44;
          if (DVar46 != 0) {
LAB_1429c5103:
            if (8 < (int)(uint)uVar36) {
              uVar36 = (ulonglong)((uint)uVar36 >> 1);
              LVar3 = pLVar33[uVar36 * 3 + 2];
              LVar14 = pLVar33[uVar36 * 3];
              LVar15 = (pLVar33 + uVar36 * 3)[1];
              pLVar33[uVar36 * 3 + 2] = pLVar33[2];
              LVar16 = pLVar33[1];
              pLVar33[uVar36 * 3] = *pLVar33;
              (pLVar33 + uVar36 * 3)[1] = LVar16;
              pLVar33[2] = LVar3;
              *pLVar33 = LVar14;
              pLVar33[1] = LVar15;
              pLVar51 = pLVar44 + 3;
              pLVar32 = pLVar33;
              do {
                pLVar18 = pLVar32 + 3;
                pLVar45 = pLVar32 + 3;
                do {
                  pLVar32 = pLVar45;
                  pLVar37 = pLVar18;
                  if (pLVar44 < pLVar32) break;
                  pLVar18 = pLVar37 + 3;
                  pLVar45 = pLVar32 + 3;
                } while (pLVar32[1].QuadPart <= pLVar33[1].QuadPart);
                pLVar18 = pLVar51 + -6;
                do {
                  pLVar45 = pLVar51;
                  pLVar61 = pLVar18;
                  pLVar51 = pLVar45 + -3;
                  if (pLVar51 <= pLVar33) break;
                  pLVar18 = pLVar61 + -3;
                } while (pLVar33[1].QuadPart <= pLVar45[-2].QuadPart);
                if (pLVar51 < pLVar32) goto LAB_1429c51f2;
                LVar3 = pLVar32[2];
                LVar14 = *pLVar32;
                LVar15 = pLVar32[1];
                pLVar32[2] = pLVar45[-1];
                LVar16 = pLVar45[-2];
                *pLVar32 = *pLVar51;
                pLVar32[1] = LVar16;
                pLVar45[-1] = LVar3;
                *pLVar51 = LVar14;
                pLVar45[-2] = LVar15;
              } while( true );
            }
            for (; pLVar53 = pLVar33, pLVar40 = pLVar33, pLVar33 < pLVar44; pLVar44 = pLVar44 + -3)
            {
              while (pLVar51 = pLVar53, pLVar40 = pLVar40 + 3, pLVar40 <= pLVar44) {
                pLVar53 = pLVar40;
                if (pLVar40[1].QuadPart <= pLVar51[1].QuadPart) {
                  pLVar53 = pLVar51;
                }
              }
              local_f8 = pLVar51[2];
              local_108 = *pLVar51;
              LStack_100 = pLVar51[1];
              pLVar51[2] = pLVar44[2];
              LVar3 = pLVar44[1];
              *pLVar51 = *pLVar44;
              pLVar51[1] = LVar3;
              pLVar44[2] = local_f8;
              *pLVar44 = local_108;
              pLVar44[1] = LStack_100;
            }
            goto LAB_1429c5586;
          }
LAB_1429c52c1:
          iVar50 = (int)uVar36;
          if (iVar50 != 0) {
            iVar62 = (iVar62 - (iVar62 + -1 >> 0x1f)) + -1 >> 1;
            iVar49 = iVar62;
joined_r0x0001429c52e4:
            do {
              iVar60 = iVar62 * 2 + 1;
              if (iVar60 < iVar50) {
                iVar52 = iVar62 * 2 + 2;
                if ((iVar52 < iVar50) &&
                   (pLVar33[(longlong)iVar60 * 3 + 1].QuadPart <=
                    pLVar33[(longlong)iVar52 * 3 + 1].QuadPart)) {
                  iVar60 = iVar52;
                }
                if (pLVar33[(longlong)iVar62 * 3 + 1].QuadPart <
                    pLVar33[(longlong)iVar60 * 3 + 1].QuadPart) {
                  pLVar44 = pLVar33 + (longlong)iVar62 * 3;
                  pLVar40 = pLVar33 + (longlong)iVar60 * 3;
                  local_f8 = pLVar44[2];
                  local_108 = *pLVar44;
                  LStack_100 = pLVar44[1];
                  pLVar44[2] = pLVar40[2];
                  LVar3 = pLVar40[1];
                  *pLVar44 = *pLVar40;
                  pLVar44[1] = LVar3;
                  pLVar40[2] = local_f8;
                  *pLVar40 = local_108;
                  pLVar40[1] = LStack_100;
                  iVar62 = iVar60;
                  goto joined_r0x0001429c52e4;
                }
              }
              bVar63 = iVar49 != 0;
              iVar62 = iVar49 + -1;
              iVar49 = iVar62;
            } while (bVar63);
            if (1 < iVar50) {
              uVar36 = uVar36 - 1;
              local_f8 = pLVar33[2];
              local_108 = *pLVar33;
              LStack_100 = pLVar33[1];
              pLVar33[2] = pLVar33[uVar36 * 3 + 2];
              LVar3 = (pLVar33 + uVar36 * 3)[1];
              *pLVar33 = pLVar33[uVar36 * 3];
              pLVar33[1] = LVar3;
              pLVar33[uVar36 * 3 + 2] = local_f8;
              pLVar33[uVar36 * 3] = local_108;
              (pLVar33 + uVar36 * 3)[1] = LStack_100;
              if (iVar50 != 2) {
                do {
                  iVar62 = 0;
                  iVar49 = 1;
                  iVar50 = 0;
                  do {
                    iVar62 = iVar62 + 2;
                    iVar60 = iVar49;
                    if (((longlong)iVar62 < (longlong)uVar36) &&
                       (pLVar33[(longlong)iVar49 * 3 + 1].QuadPart <=
                        pLVar33[(longlong)iVar62 * 3 + 1].QuadPart)) {
                      iVar60 = iVar62;
                    }
                    if (pLVar33[(longlong)iVar60 * 3 + 1].QuadPart <=
                        pLVar33[(longlong)iVar50 * 3 + 1].QuadPart) break;
                    pLVar44 = pLVar33 + (longlong)iVar50 * 3;
                    pLVar40 = pLVar33 + (longlong)iVar60 * 3;
                    LVar3 = pLVar44[2];
                    LVar14 = *pLVar44;
                    LVar15 = pLVar44[1];
                    pLVar44[2] = pLVar40[2];
                    LVar16 = pLVar40[1];
                    *pLVar44 = *pLVar40;
                    pLVar44[1] = LVar16;
                    pLVar40[2] = LVar3;
                    *pLVar40 = LVar14;
                    pLVar40[1] = LVar15;
                    iVar62 = iVar60 * 2;
                    iVar49 = iVar60 * 2 + 1;
                    iVar50 = iVar60;
                  } while ((longlong)iVar49 < (longlong)uVar36);
                  uVar41 = uVar36 - 1;
                  local_f8 = pLVar33[2];
                  local_108 = *pLVar33;
                  LStack_100 = pLVar33[1];
                  pLVar33[2] = pLVar33[uVar41 * 3 + 2];
                  LVar3 = (pLVar33 + uVar41 * 3)[1];
                  *pLVar33 = pLVar33[uVar41 * 3];
                  pLVar33[1] = LVar3;
                  pLVar33[uVar41 * 3 + 2] = local_f8;
                  pLVar33[uVar41 * 3] = local_108;
                  (pLVar33 + uVar41 * 3)[1] = LStack_100;
                  bVar63 = 2 < uVar36;
                  uVar36 = uVar41;
                } while (bVar63);
              }
            }
          }
LAB_1429c5586:
          pLVar23 = pLVar23 + -3;
        } while (&local_408 <= pLVar23);
      }
    }
    FUN_14493d890(local_470);
    puVar48 = (uint *)(param_1.QuadPart + 0x88);
    uVar38 = *(uint *)(param_1.QuadPart + 0xa0);
    uVar36 = (ulonglong)uVar38;
    local_468 = puVar48;
    if (uVar38 == 0) {
      uVar59 = 1;
      uVar41 = 0;
      iVar62 = 0;
      uVar21 = 0;
    }
    else {
      puVar24 = *(uint **)(param_1.QuadPart + 0x98);
      if (*(uint **)(param_1.QuadPart + 0x98) == (uint *)0x0) {
        puVar24 = puVar48;
      }
      uVar21 = *puVar24;
      if (uVar21 == 0) {
        iVar62 = uVar38 + 0x1e;
        if (-1 < (int)(uVar38 - 1)) {
          iVar62 = uVar38 - 1;
        }
        uVar41 = 0;
        uVar59 = (ulonglong)(uint)(iVar62 >> 5);
        if (iVar62 >> 5 < 1) {
          uVar59 = uVar41;
        }
        iVar62 = 0;
        do {
          if (uVar59 == uVar41) goto LAB_1429c563e;
          iVar62 = iVar62 + 0x20;
          uVar21 = puVar24[uVar41 + 1];
          uVar41 = uVar41 + 1;
        } while (uVar21 == 0);
      }
      else {
        uVar41 = 0;
        iVar62 = 0;
      }
      uVar59 = (ulonglong)(-uVar21 & uVar21);
      uVar1 = uVar59 * 2 + 1;
      lVar56 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar56 == 0; lVar56 = lVar56 + -1) {
        }
      }
      uVar21 = (iVar62 - ((uint)lVar56 ^ 0x3f)) + 0x3e;
      if ((int)uVar38 <= (int)uVar21) {
        uVar21 = uVar38;
      }
    }
    if (uVar21 != uVar38) {
      local_450 = (int *)(param_1.QuadPart + 0x118);
      uVar38 = 0xffffffff;
      do {
        piVar34 = local_450;
        plVar42 = *(longlong **)
                   (*(longlong *)(param_1.QuadPart + 0x78) + (longlong)(int)uVar21 * 0x18);
        iVar50 = (int)plVar42[2];
        if (((-1 < (longlong)iVar50) &&
            (lVar56 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x18) + 0x2c8),
            iVar50 < *(int *)(lVar56 + 0x700))) &&
           (*(longlong **)(*(longlong *)(lVar56 + 0x6f8) + (longlong)iVar50 * 8) == plVar42)) {
          uVar22 = FUN_140196188(local_450,plVar42);
          plVar25 = (longlong *)FUN_1401961f6(piVar34,uVar22);
          if (plVar25 == (longlong *)0x0) {
            bVar63 = false;
          }
          else {
            bVar63 = (longlong *)*plVar25 != plVar42;
          }
          lVar56 = (longlong)(int)plVar42[1] * 0x10;
          puVar48 = local_468;
          if (((bVar63) || (*(char *)(*(longlong *)(*plVar42 + 0x2c0) + 0xd + lVar56) == '\0')) &&
             (0 < *(int *)(*(longlong *)(*plVar42 + 0x5a8) + 8 + lVar56))) {
            if ((plVar25 == (longlong *)0x0) || ((longlong *)*plVar25 != plVar42)) {
LAB_1429c5812:
              FUN_1429c610c(&local_420,plVar42);
              puVar48 = local_468;
            }
            else if ((longlong)(int)plVar25[3] != 0) {
              plVar31 = (longlong *)plVar25[2];
              plVar25 = plVar31 + (int)plVar25[3];
              uVar26 = 0;
              local_458 = uVar36;
LAB_1429c58ff:
              local_45c = (uint)uVar26;
              do {
                plVar55 = (longlong *)*plVar31;
                if ((plVar55 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar55 + 0xc))) {
                  if (*(int *)(*(longlong *)(*plVar55 + 0x5a8) + 8 +
                              (longlong)(int)plVar55[1] * 0x10) < 1) goto LAB_1429c5956;
                  FUN_1429c610c(&local_420);
                  uVar36 = local_458;
                  puVar48 = local_468;
                }
                plVar31 = plVar31 + 1;
                if (plVar31 == plVar25) {
                  if ((local_45c & 1) == 0) break;
                  goto LAB_1429c5812;
                }
              } while( true );
            }
          }
        }
        uVar38 = uVar38 & ~(uint)uVar59;
        puVar24 = *(uint **)(param_1.QuadPart + 0x98);
        if (*(uint **)(param_1.QuadPart + 0x98) == (uint *)0x0) {
          puVar24 = puVar48;
        }
        uVar47 = *(uint *)(param_1.QuadPart + 0xa0);
        iVar50 = (int)uVar41;
        lVar56 = (longlong)iVar50;
        uVar21 = puVar24[lVar56] & uVar38;
        if (uVar21 == 0) {
          iVar49 = uVar47 + 0x1e;
          if (-1 < (int)(uVar47 - 1)) {
            iVar49 = uVar47 - 1;
          }
          iVar49 = iVar49 >> 5;
          iVar62 = iVar62 + 0x20;
          iVar60 = iVar49;
          if (iVar49 < iVar50) {
            iVar60 = iVar50;
          }
          if (iVar50 < iVar49) {
            lVar30 = 0;
            do {
              uVar21 = puVar24[lVar56 + lVar30 + 1];
              if (uVar21 != 0) {
                uVar41 = (ulonglong)(iVar50 + (int)lVar30 + 1);
                uVar38 = 0xffffffff;
                goto LAB_1429c58a8;
              }
              iVar62 = iVar62 + 0x20;
              lVar30 = lVar30 + 1;
            } while (iVar60 - lVar56 != lVar30);
            uVar38 = 0xffffffff;
            iVar50 = iVar60;
          }
          uVar41 = (ulonglong)(iVar50 + 1);
          puVar48 = local_468;
          uVar21 = uVar47;
        }
        else {
LAB_1429c58a8:
          uVar59 = (ulonglong)(-uVar21 & uVar21);
          uVar1 = uVar59 * 2 + 1;
          lVar56 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar56 == 0; lVar56 = lVar56 + -1) {
            }
          }
          uVar21 = (iVar62 - ((uint)lVar56 ^ 0x3f)) + 0x3e;
          if ((int)uVar47 <= (int)uVar21) {
            uVar21 = uVar47;
          }
        }
      } while (uVar21 != (uint)uVar36);
    }
LAB_1429c563e:
    plVar42 = *(longlong **)(param_1.QuadPart + 0x498);
    if ((plVar42 != (longlong *)0x0) && (lVar56 = plVar42[1], (longlong)(int)lVar56 != 0)) {
      lVar30 = *plVar42;
      lVar35 = 0;
      do {
        local_408 = param_1;
        local_400 = &local_438;
        (**(code **)(**(longlong **)(lVar30 + lVar35) + 0x90))
                  (*(longlong **)(lVar30 + lVar35),&local_408);
        lVar35 = lVar35 + 8;
      } while ((longlong)(int)lVar56 * 8 != lVar35);
    }
    piVar34 = (int *)(param_1.QuadPart + 0x118);
    FUN_14298e9e8(piVar34);
    if (*(int *)(param_1.QuadPart + 0x80) != *(int *)(param_1.QuadPart + 0xac)) {
      piVar27 = (int *)(param_1.QuadPart + 0xb0);
      if (*(int **)(param_1.QuadPart + 0xb8) != (int *)0x0) {
        piVar27 = *(int **)(param_1.QuadPart + 0xb8);
      }
      iVar62 = *(int *)(param_1.QuadPart + 0xc0);
      iVar50 = iVar62 + 3;
      if (-1 < iVar62) {
        iVar50 = iVar62;
      }
      if (*(int *)(param_1.QuadPart + 0x80) - *(int *)(param_1.QuadPart + 0xac) < iVar50 >> 2) {
        iVar62 = *(int *)(param_1.QuadPart + 0xa0);
        if (iVar62 == 0) {
          uVar36 = 0;
          uVar41 = 1;
          iVar50 = 0;
          iVar49 = 0;
        }
        else {
          puVar48 = *(uint **)(param_1.QuadPart + 0x98);
          if (*(uint **)(param_1.QuadPart + 0x98) == (uint *)0x0) {
            puVar48 = local_468;
          }
          uVar38 = *puVar48;
          if (uVar38 == 0) {
            iVar50 = iVar62 + 0x1e;
            if (-1 < iVar62 + -1) {
              iVar50 = iVar62 + -1;
            }
            uVar36 = 0;
            uVar41 = (ulonglong)(uint)(iVar50 >> 5);
            if (iVar50 >> 5 < 1) {
              uVar41 = uVar36;
            }
            iVar49 = 0;
            do {
              if (uVar41 == uVar36) goto LAB_1429c5ecb;
              iVar49 = iVar49 + 0x20;
              uVar38 = puVar48[uVar36 + 1];
              uVar36 = uVar36 + 1;
            } while (uVar38 == 0);
          }
          else {
            uVar36 = 0;
            iVar49 = 0;
          }
          uVar41 = (ulonglong)(-uVar38 & uVar38);
          uVar59 = uVar41 * 2 + 1;
          lVar56 = 0x3f;
          if (uVar59 != 0) {
            for (; uVar59 >> lVar56 == 0; lVar56 = lVar56 + -1) {
            }
          }
          iVar50 = (iVar49 - ((uint)lVar56 ^ 0x3f)) + 0x3e;
          if (iVar62 <= iVar50) {
            iVar50 = iVar62;
          }
        }
        if (iVar50 != iVar62) {
          uVar38 = 0xffffffff;
          do {
            piVar27[*(int *)(*(longlong *)(param_1.QuadPart + 0x78) + 0x14 + (longlong)iVar50 * 0x18
                            )] = -1;
            uVar38 = ~(uint)uVar41 & uVar38;
            puVar48 = *(uint **)(param_1.QuadPart + 0x98);
            if (*(uint **)(param_1.QuadPart + 0x98) == (uint *)0x0) {
              puVar48 = local_468;
            }
            iVar60 = *(int *)(param_1.QuadPart + 0xa0);
            iVar50 = (int)uVar36;
            lVar56 = (longlong)iVar50;
            uVar21 = puVar48[lVar56] & uVar38;
            if (uVar21 == 0) {
              iVar52 = iVar60 + 0x1e;
              if (-1 < iVar60 + -1) {
                iVar52 = iVar60 + -1;
              }
              iVar52 = iVar52 >> 5;
              iVar49 = iVar49 + 0x20;
              iVar39 = iVar52;
              if (iVar52 < iVar50) {
                iVar39 = iVar50;
              }
              if (iVar50 < iVar52) {
                lVar30 = 0;
                do {
                  uVar21 = puVar48[lVar56 + lVar30 + 1];
                  if (uVar21 != 0) {
                    uVar36 = (ulonglong)(iVar50 + (int)lVar30 + 1);
                    uVar38 = 0xffffffff;
                    goto LAB_1429c5c93;
                  }
                  iVar49 = iVar49 + 0x20;
                  lVar30 = lVar30 + 1;
                } while (iVar39 - lVar56 != lVar30);
                uVar38 = 0xffffffff;
                iVar50 = iVar39;
              }
              uVar36 = (ulonglong)(iVar50 + 1);
              iVar50 = iVar60;
            }
            else {
LAB_1429c5c93:
              uVar41 = (ulonglong)(-uVar21 & uVar21);
              uVar59 = uVar41 * 2 + 1;
              lVar56 = 0x3f;
              if (uVar59 != 0) {
                for (; uVar59 >> lVar56 == 0; lVar56 = lVar56 + -1) {
                }
              }
              iVar50 = (iVar49 - ((uint)lVar56 ^ 0x3f)) + 0x3e;
              if (iVar60 <= iVar50) {
                iVar50 = iVar60;
              }
            }
          } while (iVar50 != iVar62);
        }
      }
      else if (0 < iVar62) {
        lVar56 = 0;
        do {
          piVar27[lVar56] = -1;
          lVar56 = lVar56 + 1;
        } while (lVar56 < *(int *)(param_1.QuadPart + 0xc0));
      }
LAB_1429c5ecb:
      *(int *)(param_1.QuadPart + 0x80) = 0;
      if (*(int *)(param_1.QuadPart + 0x84) < 0) {
        FUN_144727cd0(local_470,0);
      }
      ((int *)(param_1.QuadPart + 0xa8))[0] = -1;
      ((int *)(param_1.QuadPart + 0xa8))[1] = 0;
      *(int *)(param_1.QuadPart + 0xa0) = 0;
    }
    if ((*(char *)(param_1.QuadPart + 0x370) != '\0') || (local_421 == '\x01')) {
      if (DAT_14c75f218 == 1) {
        if ((int)uStack_430 < 1) {
          lVar56 = 1;
        }
        else {
          iVar62 = 0;
          lVar56 = 0;
          do {
            lVar30 = lVar56;
            local_408 = (LARGE_INTEGER)
                        ((LARGE_INTEGER *)(local_438.QuadPart + lVar30 * 8))->QuadPart;
            local_448 = &local_408;
            local_440 = 1;
            bVar20 = FUN_1429c628c(param_1.QuadPart,&local_448);
            bVar29 = DAT_14c75f21c <= iVar62 + 1 & bVar20;
            if (bVar29 != 0) break;
            if (bVar20 != 0) {
              iVar62 = iVar62 + 1;
            }
            lVar56 = lVar30 + 1;
          } while (lVar30 + 1 < (longlong)(int)uStack_430);
          lVar56 = 1;
          if (bVar29 != 0) {
            lVar56 = lVar30 + 1;
          }
        }
        if (0 < DAT_14c75f220) {
          lVar30 = 0;
          iVar62 = DAT_14c75f220;
          do {
            if ((longlong)(int)uStack_430 <= lVar56 + lVar30) break;
            local_108 = (LARGE_INTEGER)
                        ((LARGE_INTEGER *)(local_438.QuadPart + lVar56 * 8 + lVar30 * 8))->QuadPart;
            if ((int *)local_108.QuadPart != (int *)0x0) {
              iVar50 = *(int *)(local_108.QuadPart + 0x10);
              if (((-1 < (longlong)iVar50) &&
                  (lVar35 = *(longlong *)(*(longlong *)(param_1.QuadPart + 0x18) + 0x2c8),
                  iVar50 < *(int *)(lVar35 + 0x700))) &&
                 (*(int **)(*(longlong *)(lVar35 + 0x6f8) + (longlong)iVar50 * 8) ==
                  (int *)local_108.QuadPart)) {
                QueryPerformanceCounter(&local_408);
                local_408.QuadPart = local_408.QuadPart & 0xffffffff;
                uVar38 = ((uint)((ulonglong)local_108.QuadPart >> 0x14) & 0xffff ^
                         (uint)((ulonglong)local_108.QuadPart >> 4)) * -0x7a143595;
                uVar38 = (uVar38 >> 0xd ^ uVar38) * -0x3d4d51cb;
                FUN_1402bf58e(local_470,uVar38 >> 0x10 ^ uVar38,&local_108,&local_408);
                iVar62 = DAT_14c75f220;
              }
            }
            lVar30 = lVar30 + 1;
          } while (lVar30 < iVar62);
        }
      }
      else {
        local_108.QuadPart = 0;
        LStack_100.QuadPart = 0;
        FUN_146e0f982(&local_408,
                      *(longlong *)(*(longlong *)(param_1.QuadPart + 0x18) + 0x2c8) + 0x5f8);
        if (local_3f8 == (LARGE_INTEGER *)0x0) {
          uVar22 = 0;
          local_408.QuadPart = 0;
        }
        else {
          do {
            plVar42 = *(longlong **)(local_3f8[0x13].QuadPart + (longlong)local_3f0 * 8);
            if (((plVar42 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar42 + 0xc))) &&
               (0 < *(int *)(*(longlong *)(*plVar42 + 0x5a8) + 8 + (longlong)(int)plVar42[1] * 0x10)
               )) {
              uVar22 = FUN_140196188(piVar34,plVar42);
              puVar28 = (undefined8 *)FUN_1401961f6(piVar34,uVar22);
              LVar3 = LStack_100;
              if ((puVar28 == (undefined8 *)0x0) || ((longlong *)*puVar28 != plVar42)) {
                uVar22 = LStack_100._0_4_;
                uVar38 = LStack_100._0_4_ + 1;
                LStack_100.s.LowPart = uVar38;
                if ((uint)LStack_100._4_4_ < uVar38) {
                  FUN_14043c6b4(&local_108,LVar3.QuadPart & 0xffffffff);
                }
                *(longlong **)(local_108.QuadPart + (longlong)(int)uVar22 * 8) = plVar42;
              }
              else {
                iVar62 = *(int *)(puVar28 + 3);
                if ((longlong)iVar62 != 0) {
                  lVar56 = puVar28[2];
                  lVar30 = 0;
                  do {
                    LVar3 = LStack_100;
                    plVar42 = *(longlong **)(lVar56 + lVar30);
                    if (((plVar42 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar42 + 0xc)))
                       && (0 < *(int *)(*(longlong *)(*plVar42 + 0x5a8) + 8 +
                                       (longlong)(int)plVar42[1] * 0x10))) {
                      lVar35 = (longlong)(int)LStack_100._0_4_;
                      uVar38 = LStack_100._0_4_ + 1;
                      LStack_100.s.LowPart = uVar38;
                      if ((uint)LStack_100._4_4_ < uVar38) {
                        FUN_14043c6b4(&local_108,LVar3.QuadPart & 0xffffffff);
                      }
                      *(longlong **)(local_108.QuadPart + lVar35 * 8) = plVar42;
                    }
                    lVar30 = lVar30 + 8;
                  } while ((longlong)iVar62 * 8 != lVar30);
                }
              }
            }
            FUN_146dfbb08(&local_408);
          } while (local_3f8 != (LARGE_INTEGER *)0x0);
          local_408 = local_108;
          uVar22 = LStack_100._0_4_;
        }
        local_400 = (LARGE_INTEGER *)CONCAT44(local_400._4_4_,uVar22);
        FUN_1429c628c(param_1.QuadPart);
        if ((int *)local_108.QuadPart != (int *)0x0) {
          FUN_1400020a8();
        }
      }
      if (DAT_14c75f200 == '\x01') {
        FUN_14298c568(piVar34);
      }
    }
    if (local_438.QuadPart != 0) {
      FUN_1400020a8();
    }
  }
  QueryPerformanceCounter(&local_408);
  if ((local_f0 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1429c51f2:
  local_f8 = pLVar33[2];
  local_108 = *pLVar33;
  LStack_100 = pLVar33[1];
  pLVar33[2] = pLVar45[-1];
  LVar3 = pLVar45[-2];
  *pLVar33 = *pLVar51;
  pLVar33[1] = LVar3;
  pLVar45[-1] = local_f8;
  *pLVar51 = local_108;
  pLVar45[-2] = LStack_100;
  DVar46 = DVar46 - 1;
  pLVar45 = pLVar45 + -6;
  if ((longlong)pLVar61 - (longlong)pLVar40 < (longlong)pLVar53 - (longlong)pLVar37) {
    if (pLVar32 < pLVar44) {
      pLVar23->QuadPart = (LONGLONG)pLVar32;
      pLVar23[1].QuadPart = (LONGLONG)pLVar44;
      pLVar23[2].s.LowPart = DVar46;
      pLVar23 = pLVar23 + 3;
    }
    pLVar37 = pLVar33;
    if (pLVar51 <= pLVar33 + 3) goto LAB_1429c5586;
  }
  else {
    if (pLVar33 + 3 < pLVar51) {
      pLVar23->QuadPart = (LONGLONG)pLVar33;
      pLVar23[1].QuadPart = (LONGLONG)pLVar45;
      pLVar23[2].s.LowPart = DVar46;
      pLVar23 = pLVar23 + 3;
    }
    pLVar33 = pLVar32;
    pLVar45 = pLVar44;
    pLVar61 = pLVar44;
    if (pLVar44 <= pLVar32) goto LAB_1429c5586;
  }
  iVar62 = (int)((ulonglong)((longlong)pLVar61 - (longlong)pLVar37) >> 3) * -0x55555555;
  uVar36 = (ulonglong)(iVar62 + 1);
  pLVar40 = pLVar37;
  pLVar44 = pLVar45;
  pLVar53 = pLVar61;
  if (DVar46 == 0) goto LAB_1429c52c1;
  goto LAB_1429c5103;
LAB_1429c5956:
  plVar31 = plVar31 + 1;
  uVar26 = CONCAT71((int7)((ulonglong)*(longlong *)(*plVar55 + 0x5a8) >> 8),1);
  if (plVar31 == plVar25) goto LAB_1429c5812;
  goto LAB_1429c58ff;
}



// FUNCTION 1429c610c FUN_1429c610c body=383 status=ok
// SIG undefined FUN_1429c610c(void)

void FUN_1429c610c(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  
  lVar1 = param_1[2];
  if (*(int *)(lVar1 + 0xd0) == *(int *)(lVar1 + 0xfc)) {
    return;
  }
  uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  lVar5 = lVar1 + 0x100;
  if (*(longlong *)(lVar1 + 0x108) != 0) {
    lVar5 = *(longlong *)(lVar1 + 0x108);
  }
  iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar1 + 0x110) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
  if (iVar6 == -1) {
    return;
  }
  while (lVar5 = *(longlong *)(lVar1 + 200) + (longlong)iVar6 * 0x20,
        *(ulonglong *)(*(longlong *)(lVar1 + 200) + (longlong)iVar6 * 0x20) != param_2) {
    iVar6 = *(int *)(lVar5 + 0x18);
    if (iVar6 == -1) {
      return;
    }
  }
  if ((lVar5 + 8U & 0xfffffffffffffff7) == 0) {
    return;
  }
  iVar6 = *(int *)(lVar5 + 0x10);
  if ((longlong)iVar6 == 0) {
    return;
  }
  lVar5 = *(longlong *)(lVar5 + 8);
  lVar7 = 0;
  bVar8 = false;
  do {
    plVar2 = *(longlong **)(lVar5 + lVar7);
    if ((plVar2 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar2 + 0xc))) {
      lVar3 = *plVar2;
      lVar9 = (longlong)(int)plVar2[1];
      if (*(float *)(*(longlong *)(lVar3 + 0x650) + lVar9 * 4) <= 0.0) {
        *(undefined4 *)(*(longlong *)(lVar3 + 0x620) + lVar9 * 4) = 0x7f7fffff;
        *(undefined1 *)(lVar1 + 0x370) = 1;
      }
      else {
        if ((*(float *)(*(longlong *)(lVar3 + 0x638) + lVar9 * 4) <= 0.0) &&
           (*(float *)(*(longlong *)(lVar3 + 0x620) + lVar9 * 4) <= 0.0)) goto LAB_1429c6251;
        *(undefined1 *)param_1[1] = 1;
      }
      bVar8 = true;
    }
LAB_1429c6251:
    lVar7 = lVar7 + 8;
    if ((longlong)iVar6 * 8 == lVar7) {
      if (bVar8) {
        param_1 = (longlong *)*param_1;
        iVar6 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar6 + 1U) {
          FUN_14043c6b4(param_1,iVar6);
        }
        *(ulonglong *)(*param_1 + (longlong)iVar6 * 8) = param_2;
      }
      return;
    }
  } while( true );
}



// FUNCTION 1429c628c FUN_1429c628c body=886 status=ok
// SIG undefined FUN_1429c628c(void)

ulonglong FUN_1429c628c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong *plVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint *puVar18;
  uint uVar19;
  ulonglong uVar20;
  int iVar21;
  bool bVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  int local_90;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + (int)param_2[1];
  plVar1 = (longlong *)(param_1 + 0x438);
  FUN_140bb6f28(plVar1);
  lVar24 = param_2[1];
  if ((longlong)(int)lVar24 != 0) {
    lVar23 = *param_2;
    bVar22 = false;
    lVar25 = 0;
    do {
      plVar8 = *(longlong **)(lVar23 + lVar25);
      if (*(int *)(*(longlong *)(*plVar8 + 0x5a8) + 8 + (longlong)(int)plVar8[1] * 0x10) != 0) {
        FUN_1429c47b2(param_1,local_98,plVar8,0);
        bVar9 = local_64 < local_90;
        local_50 = 0;
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        bVar22 = (bool)(bVar22 | bVar9);
        FUN_140a356f6(local_98);
      }
      lVar25 = lVar25 + 8;
    } while ((longlong)(int)lVar24 * 8 != lVar25);
    if (bVar22) {
      FUN_14298e9e8(param_1 + 0x118);
      uVar11 = CONCAT71((int7)((ulonglong)local_98 >> 8),1);
      if (0.0 < DAT_14c75f20c) {
        iVar7 = *(int *)(param_1 + 0x460);
        if (iVar7 == 0) {
          uVar17 = 1;
          uVar16 = 0;
          iVar10 = 0;
          iVar15 = 0;
        }
        else {
          puVar18 = *(uint **)(param_1 + 0x458);
          if (*(uint **)(param_1 + 0x458) == (uint *)0x0) {
            puVar18 = (uint *)(param_1 + 0x448);
          }
          uVar19 = *puVar18;
          if (uVar19 == 0) {
            iVar10 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar10 = iVar7 + -1;
            }
            uVar16 = 0;
            uVar20 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar20 = uVar16;
            }
            iVar10 = 0;
            do {
              if (uVar20 == uVar16) goto LAB_1429c6390;
              iVar10 = iVar10 + 0x20;
              uVar19 = puVar18[uVar16 + 1];
              uVar16 = uVar16 + 1;
            } while (uVar19 == 0);
          }
          else {
            uVar16 = 0;
            iVar10 = 0;
          }
          uVar17 = (ulonglong)(-uVar19 & uVar19);
          uVar20 = uVar17 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar15 = (iVar10 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar15) {
            iVar15 = iVar7;
          }
        }
        if (iVar15 != iVar7) {
          uVar19 = 0xffffffff;
          iVar21 = iVar7;
          do {
            plVar8 = *(longlong **)(*plVar1 + (longlong)iVar15 * 0x40);
            if (plVar8 != (longlong *)0x0) {
              lVar25 = *plVar1 + (longlong)iVar15 * 0x40;
              dVar2 = *(double *)(lVar25 + 0x30);
              dVar3 = *(double *)(lVar25 + 0x20);
              dVar4 = *(double *)(lVar25 + 0x28);
              lVar23 = (longlong)(int)plVar8[1];
              lVar24 = *(longlong *)(*plVar8 + 0x278);
              dVar5 = *(double *)(lVar25 + 0x18);
              dVar6 = *(double *)(lVar25 + 0x10);
              *(float *)(lVar24 + lVar23 * 0xc) =
                   (float)((double)*(float *)(lVar24 + lVar23 * 0xc) + *(double *)(lVar25 + 8));
              *(float *)(lVar24 + 4 + lVar23 * 0xc) =
                   (float)((double)*(float *)(lVar24 + 4 + lVar23 * 0xc) + dVar6);
              *(float *)(lVar24 + 8 + lVar23 * 0xc) =
                   (float)((double)*(float *)(lVar24 + 8 + lVar23 * 0xc) + dVar5);
              lVar23 = (longlong)(int)plVar8[1];
              lVar24 = *(longlong *)(*plVar8 + 0x290);
              *(float *)(lVar24 + lVar23 * 0xc) =
                   (float)((double)*(float *)(lVar24 + lVar23 * 0xc) + dVar3);
              *(float *)(lVar24 + 4 + lVar23 * 0xc) =
                   (float)((double)*(float *)(lVar24 + 4 + lVar23 * 0xc) + dVar4);
              *(float *)(lVar24 + 8 + lVar23 * 0xc) =
                   (float)((double)*(float *)(lVar24 + 8 + lVar23 * 0xc) + dVar2);
              iVar21 = *(int *)(param_1 + 0x460);
            }
            uVar19 = uVar19 & ~(uint)uVar17;
            puVar18 = *(uint **)(param_1 + 0x458);
            if (*(uint **)(param_1 + 0x458) == (uint *)0x0) {
              puVar18 = (uint *)(param_1 + 0x448);
            }
            iVar15 = (int)uVar16;
            lVar24 = (longlong)iVar15;
            uVar12 = puVar18[lVar24] & uVar19;
            if (uVar12 == 0) {
              iVar13 = iVar21 + 0x1e;
              if (-1 < iVar21 + -1) {
                iVar13 = iVar21 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar15) {
                iVar14 = iVar15;
              }
              if (iVar15 < iVar13) {
                lVar23 = 0;
                do {
                  uVar12 = puVar18[lVar24 + lVar23 + 1];
                  if (uVar12 != 0) {
                    uVar16 = (ulonglong)(iVar15 + (int)lVar23 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_1429c65b6;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar23 = lVar23 + 1;
                } while (iVar14 - lVar24 != lVar23);
                uVar19 = 0xffffffff;
                lVar24 = (longlong)iVar14;
              }
              uVar16 = lVar24 + 1U & 0xffffffff;
              iVar15 = iVar21;
            }
            else {
LAB_1429c65b6:
              uVar17 = (ulonglong)(-uVar12 & uVar12);
              uVar20 = uVar17 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar15 = (iVar10 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (iVar21 <= iVar15) {
                iVar15 = iVar21;
              }
            }
          } while (iVar15 != iVar7);
        }
      }
      goto LAB_1429c6390;
    }
  }
  uVar11 = 0;
LAB_1429c6390:
  FUN_140bb6f28(plVar1);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1429c6604 FUN_1429c6604 body=580 status=ok
// SIG undefined FUN_1429c6604(void)

void FUN_1429c6604(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  undefined1 local_59;
  void *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((longlong)(int)param_2[1] != 0) {
    puVar9 = (ulonglong *)*param_2;
    puVar7 = puVar9 + (int)param_2[1];
    plVar6 = (longlong *)(param_1 + 1000);
    lVar8 = param_1 + 0x420;
    local_70 = lVar8;
    local_68 = plVar6;
    do {
      uVar1 = *puVar9;
      if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
        uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar5 = *(longlong *)(param_1 + 0x428);
        if (*(longlong *)(param_1 + 0x428) == 0) {
          lVar5 = lVar8;
        }
        iVar4 = *(int *)(lVar5 + (ulonglong)
                                 (*(int *)(param_1 + 0x430) - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        if (iVar4 != -1) {
          do {
            lVar5 = *plVar6 + (longlong)iVar4 * 0x20;
            if (*(ulonglong *)(*plVar6 + (longlong)iVar4 * 0x20) == uVar1) {
              if (lVar5 != 0) {
                local_58 = (void *)0x0;
                local_50 = *(int *)(lVar5 + 0x10);
                lVar10 = (longlong)local_50;
                pvVar2 = *(void **)(lVar5 + 8);
                if (lVar10 != 0) {
                  FUN_14172b2d6(&local_58,local_50,0);
                  memcpy(local_58,pvVar2,lVar10 << 3);
                  pvVar2 = local_58;
                  lVar8 = (longlong)local_50;
                  if (lVar8 != 0) {
                    lVar5 = 0;
                    do {
                      local_59 = 0;
                      FUN_1400c73fa(param_1,*(undefined8 *)((longlong)pvVar2 + lVar5),&local_59);
                      lVar5 = lVar5 + 8;
                      plVar6 = local_68;
                    } while (lVar8 * 8 != lVar5);
                  }
                  lVar8 = local_70;
                  if (local_58 != (void *)0x0) {
                    FUN_1400020a8(local_58);
                    lVar8 = local_70;
                  }
                }
              }
              break;
            }
            iVar4 = *(int *)(lVar5 + 0x18);
          } while (iVar4 != -1);
        }
      }
      if (*(int *)(param_1 + 0x3f0) != *(int *)(param_1 + 0x41c)) {
        uVar3 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        lVar5 = *(longlong *)(param_1 + 0x428);
        if (*(longlong *)(param_1 + 0x428) == 0) {
          lVar5 = lVar8;
        }
        iVar4 = *(int *)(lVar5 + ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) &
                                 (longlong)*(int *)(param_1 + 0x430) - 1U) * 4);
        if (iVar4 != -1) {
          do {
            if (*(ulonglong *)(*plVar6 + (longlong)iVar4 * 0x20) == uVar1) {
              FUN_146e0f8f4(plVar6);
              lVar8 = local_70;
              break;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x20 + *plVar6 + 0x18);
            lVar8 = local_70;
          } while (iVar4 != -1);
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429c684a FUN_1429c684a body=356 status=ok
// SIG undefined FUN_1429c684a(void)

longlong * FUN_1429c684a(longlong param_1,ulonglong param_2,double *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x108);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar7 != -1) {
      while (lVar4 = *(longlong *)(param_1 + 200) + (longlong)iVar7 * 0x20,
            *(ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar7 * 0x20) != param_2) {
        iVar7 = *(int *)(lVar4 + 0x18);
        if (iVar7 == -1) {
          return (longlong *)0x0;
        }
      }
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      if (lVar4 == -8) {
        return (longlong *)0x0;
      }
      if ((longlong)*(int *)(lVar4 + 0x10) != 0) {
        dVar9 = 1.79769313486232e+308;
        lVar6 = 0;
        plVar5 = (longlong *)0x0;
        do {
          plVar1 = *(longlong **)(*(longlong *)(lVar4 + 8) + lVar6);
          lVar8 = (longlong)(int)plVar1[1];
          lVar2 = *(longlong *)(*plVar1 + 0x28);
          dVar10 = *(double *)(lVar2 + 0x10 + lVar8 * 0x18) - param_3[2];
          dVar12 = *(double *)(lVar2 + lVar8 * 0x18) - *param_3;
          dVar11 = *(double *)(lVar2 + 8 + lVar8 * 0x18) - param_3[1];
          dVar11 = dVar10 * dVar10 + dVar12 * dVar12 + dVar11 * dVar11;
          if (dVar9 <= dVar11) {
            dVar11 = dVar9;
            plVar1 = plVar5;
          }
          plVar5 = plVar1;
          dVar9 = dVar11;
          lVar6 = lVar6 + 8;
        } while ((longlong)*(int *)(lVar4 + 0x10) * 8 != lVar6);
        return plVar5;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1429c69ae FUN_1429c69ae body=771 status=ok
// SIG undefined FUN_1429c69ae(void)

void FUN_1429c69ae(undefined8 param_1,longlong param_2,double param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined8 local_d0;
  code *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong uStack_b0;
  double local_a0;
  longlong local_98;
  longlong **pplStack_90;
  double *local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (DAT_14c75f1fc != 0) {
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    if (1.0 <= param_3) {
      param_3 = 1.0;
    }
    local_b8 = (longlong *)0x0;
    uStack_b0 = 0;
    uVar9 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    pplStack_90 = (longlong **)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_a0 = param_3;
    FUN_146dfc274(&local_b8,&local_98,*(undefined4 *)(param_2 + 8));
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_146cc37f0(&local_98);
    local_88 = &local_a0;
    local_c8 = FUN_1429d380c;
    local_c0 = &local_98;
    local_98 = param_2;
    pplStack_90 = &local_b8;
    FUN_1400bd65e(*(undefined4 *)(param_2 + 8),&local_c8,0);
    if ((longlong)(int)uStack_b0 != 0) {
      local_d8 = local_b8 + (longlong)(int)uStack_b0 * 10;
      plVar11 = local_b8;
      local_d0 = param_4;
      do {
        iVar2 = (int)plVar11[5];
        if (iVar2 == 0) {
          uVar9 = 1;
          uVar15 = 0;
          iVar10 = 0;
          iVar4 = 0;
        }
        else {
          puVar5 = (uint *)plVar11[4];
          if ((uint *)plVar11[4] == (uint *)0x0) {
            puVar5 = (uint *)(plVar11 + 2);
          }
          uVar6 = *puVar5;
          if (uVar6 == 0) {
            iVar4 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar4 = iVar2 + -1;
            }
            uVar15 = 0;
            uVar9 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar9 = uVar15;
            }
            iVar10 = 0;
            do {
              if (uVar9 == uVar15) goto LAB_1429c6b70;
              iVar10 = iVar10 + 0x20;
              uVar6 = puVar5[uVar15 + 1];
              uVar15 = uVar15 + 1;
            } while (uVar6 == 0);
          }
          else {
            uVar15 = 0;
            iVar10 = 0;
          }
          uVar9 = (ulonglong)(-uVar6 & uVar6);
          uVar1 = uVar9 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar4) {
            iVar4 = iVar2;
          }
        }
        if (iVar4 != iVar2) {
          uVar6 = 0xffffffff;
          do {
            lVar13 = *(longlong *)(*plVar11 + (longlong)iVar4 * 0x18);
            lVar14 = *(longlong *)(*plVar11 + 8 + (longlong)iVar4 * 0x18);
            if (*(byte *)(lVar13 + 0xc) < 3) {
              lVar13 = 0;
            }
            if (*(byte *)(lVar14 + 0xc) < 3) {
              lVar14 = 0;
            }
            FUN_1429c8ddb(lVar13,lVar14,local_d0,param_5);
            uVar6 = ~(uint)uVar9 & uVar6;
            puVar5 = (uint *)plVar11[4];
            if ((uint *)plVar11[4] == (uint *)0x0) {
              puVar5 = (uint *)(plVar11 + 2);
            }
            iVar3 = (int)plVar11[5];
            iVar4 = (int)uVar15;
            lVar13 = (longlong)iVar4;
            uVar12 = puVar5[lVar13] & uVar6;
            if (uVar12 == 0) {
              iVar7 = iVar3 + 0x1e;
              if (-1 < iVar3 + -1) {
                iVar7 = iVar3 + -1;
              }
              iVar7 = iVar7 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar8 = iVar7;
              if (iVar7 < iVar4) {
                iVar8 = iVar4;
              }
              if (iVar4 < iVar7) {
                lVar14 = 0;
                do {
                  uVar12 = puVar5[lVar13 + lVar14 + 1];
                  if (uVar12 != 0) {
                    uVar15 = (ulonglong)(iVar4 + (int)lVar14 + 1);
                    uVar6 = 0xffffffff;
                    goto LAB_1429c6c35;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar14 = lVar14 + 1;
                } while (iVar8 - lVar13 != lVar14);
                uVar6 = 0xffffffff;
                iVar4 = iVar8;
              }
              uVar15 = (ulonglong)(iVar4 + 1);
              iVar4 = iVar3;
            }
            else {
LAB_1429c6c35:
              uVar9 = (ulonglong)(-uVar12 & uVar12);
              uVar1 = uVar9 * 2 + 1;
              lVar13 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                }
              }
              iVar4 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
              if (iVar3 <= iVar4) {
                iVar4 = iVar3;
              }
            }
          } while (iVar4 != iVar2);
        }
LAB_1429c6b70:
        plVar11 = plVar11 + 10;
      } while (plVar11 != local_d8);
      uVar9 = uStack_b0 & 0xffffffff;
    }
    FUN_146e0fb73(local_b8,uVar9);
    if (local_b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429c6cb2 FUN_1429c6cb2 body=1508 status=ok
// SIG undefined FUN_1429c6cb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c6cb2(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_ec [4];
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined4 *local_c8;
  ulonglong uStack_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f8 = param_4;
  if (DAT_14c994288 == 0) {
    local_c8 = (undefined4 *)0x0;
    uStack_c0 = (ulonglong)*(uint *)(param_2 + 1);
    if ((*(uint *)(param_2 + 1) != 0) && (FUN_1403e3958(&local_c8,0), 0 < (int)param_2[1])) {
      lVar9 = 0;
      puVar12 = local_c8;
      do {
        plVar3 = *(longlong **)(*param_2 + lVar9 * 8);
        lVar14 = (longlong)(int)plVar3[1];
        lVar18 = *(longlong *)(*plVar3 + 0x28);
        *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(lVar18 + 0x10 + lVar14 * 0x18);
        puVar1 = (undefined4 *)(lVar18 + lVar14 * 0x18);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar12 = *puVar1;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        lVar9 = lVar9 + 1;
        puVar12 = puVar12 + 6;
      } while (lVar9 < (int)param_2[1]);
    }
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_c0);
    local_b8 = local_c8;
    FUN_1403b092e(&local_b8,&local_d8,1,0x3f1a36e2e0000000);
    local_98 = 0;
    local_90 = 0;
    local_b8 = (undefined4 *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    if ((int)uStack_d0 < 1) goto LAB_1429c722b;
    lVar14 = 0;
    lVar18 = local_d8;
    lVar9 = local_d8;
    iVar8 = (int)uStack_d0;
    do {
      lVar13 = lVar14 * 0x10;
      if (0 < *(int *)(lVar9 + 8 + lVar13)) {
        lVar19 = 0;
        do {
          uVar10 = *(ulonglong *)(*param_2 + lVar14 * 8);
          uVar11 = *(ulonglong *)
                    (*param_2 + (longlong)*(int *)(*(longlong *)(lVar9 + lVar13) + lVar19 * 4) * 8);
          local_e0 = uVar10;
          local_e8 = uVar11;
          if (uVar10 < uVar11) {
            local_e0 = uVar11;
            local_e8 = uVar10;
          }
          if ((int)uStack_b0 != local_84) {
            uVar16 = ((uint)(local_e0 >> 0x14) & 0xffff ^ (uint)(local_e0 >> 4)) * -0x7a143595;
            uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
            uVar17 = ((uint)(local_e8 >> 0x14) & 0xffff ^ (uint)(local_e8 >> 4)) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            uVar17 = uVar17 >> 0x10 ^ uVar17;
            puVar15 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            iVar8 = *(int *)(puVar15 +
                            (ulonglong)
                            (local_70 - 1U &
                            (uVar17 * 0x40 + (uVar16 >> 0x10 ^ uVar16) + (uVar17 >> 2) + 0x9e3779b9
                            ^ uVar17)) * 4);
            while (iVar8 != -1) {
              puVar2 = (ulonglong *)(local_b8 + (longlong)iVar8 * 6);
              if ((*puVar2 == local_e8) &&
                 (*(ulonglong *)(local_b8 + (longlong)iVar8 * 6 + 2) == local_e0)) {
                if (puVar2 != (ulonglong *)0x0) goto LAB_1429c6f60;
                break;
              }
              iVar8 = (int)puVar2[2];
            }
          }
          if (*(byte *)(uVar10 + 0xc) < 3) {
            uVar10 = 0;
          }
          if (*(byte *)(uVar11 + 0xc) < 3) {
            uVar11 = 0;
          }
          FUN_1429c8ddb(uVar10,uVar11,local_f8,param_5);
          FUN_146e10226(&local_b8,local_ec,&local_e8);
          lVar18 = local_d8;
LAB_1429c6f60:
          lVar19 = lVar19 + 1;
          lVar9 = lVar18;
        } while (lVar19 < *(int *)(lVar18 + 8 + lVar13));
        iVar8 = (int)uStack_d0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar8);
  }
  else {
    local_c8 = (undefined4 *)0x0;
    uStack_c0 = (ulonglong)*(uint *)(param_2 + 1);
    if ((*(uint *)(param_2 + 1) != 0) && (FUN_1403e3958(&local_c8,0), 0 < (int)param_2[1])) {
      lVar9 = 0;
      puVar12 = local_c8;
      do {
        plVar3 = *(longlong **)(*param_2 + lVar9 * 8);
        lVar14 = (longlong)(int)plVar3[1];
        lVar18 = *(longlong *)(*plVar3 + 0x28);
        *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(lVar18 + 0x10 + lVar14 * 0x18);
        puVar1 = (undefined4 *)(lVar18 + lVar14 * 0x18);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *puVar12 = *puVar1;
        puVar12[1] = uVar4;
        puVar12[2] = uVar5;
        puVar12[3] = uVar6;
        lVar9 = lVar9 + 1;
        puVar12 = puVar12 + 6;
      } while (lVar9 < (int)param_2[1]);
    }
    local_d8 = 0;
    uStack_d0 = 0;
    uStack_b0 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_c0);
    local_b8 = local_c8;
    FUN_1403b092e(&local_b8,&local_d8,1,0x3f1a36e2e0000000);
    local_98 = 0;
    local_90 = 0;
    local_b8 = (undefined4 *)0x0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = (undefined1 *)0x0;
    local_70 = 0;
    if ((int)uStack_d0 < 1) goto LAB_1429c722b;
    lVar18 = 0;
    lVar9 = local_d8;
    iVar8 = (int)uStack_d0;
    do {
      lVar14 = lVar18 * 0x10;
      if (0 < *(int *)(lVar9 + 8 + lVar14)) {
        lVar13 = 0;
        do {
          uVar10 = *(ulonglong *)(*param_2 + lVar18 * 8);
          uVar11 = *(ulonglong *)
                    (*param_2 + (longlong)*(int *)(*(longlong *)(lVar9 + lVar14) + lVar13 * 4) * 8);
          local_e0 = uVar10;
          local_e8 = uVar11;
          if (uVar10 < uVar11) {
            local_e0 = uVar11;
            local_e8 = uVar10;
          }
          if ((int)uStack_b0 != local_84) {
            uVar16 = ((uint)(local_e0 >> 0x14) & 0xffff ^ (uint)(local_e0 >> 4)) * -0x7a143595;
            uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
            uVar17 = ((uint)(local_e8 >> 0x14) & 0xffff ^ (uint)(local_e8 >> 4)) * -0x7a143595;
            uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
            uVar17 = uVar17 >> 0x10 ^ uVar17;
            puVar15 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            iVar8 = *(int *)(puVar15 +
                            (ulonglong)
                            (local_70 - 1U &
                            (uVar17 * 0x40 + (uVar16 >> 0x10 ^ uVar16) + (uVar17 >> 2) + 0x9e3779b9
                            ^ uVar17)) * 4);
            while (iVar8 != -1) {
              puVar2 = (ulonglong *)(local_b8 + (longlong)iVar8 * 6);
              if ((*puVar2 == local_e8) &&
                 (*(ulonglong *)(local_b8 + (longlong)iVar8 * 6 + 2) == local_e0)) {
                if (puVar2 != (ulonglong *)0x0) goto LAB_1429c71a0;
                break;
              }
              iVar8 = (int)puVar2[2];
            }
          }
          cVar7 = FUN_1429d41d3(uVar10,uVar11,(double)_DAT_14c9942a0);
          if (cVar7 != '\0') {
            if (*(byte *)(uVar10 + 0xc) < 3) {
              uVar10 = 0;
            }
            if (*(byte *)(uVar11 + 0xc) < 3) {
              uVar11 = 0;
            }
            FUN_1429c8ddb(uVar10,uVar11,local_f8,param_5);
            FUN_146e10226(&local_b8,local_ec,&local_e8);
          }
LAB_1429c71a0:
          lVar13 = lVar13 + 1;
          lVar9 = local_d8;
        } while (lVar13 < *(int *)(local_d8 + 8 + lVar14));
        iVar8 = (int)uStack_d0;
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < iVar8);
  }
  local_70 = 0;
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_1429c722b:
  FUN_146cc37f0(&local_b8);
  FUN_144716727(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429c7298 FUN_1429c7298 body=852 status=ok
// SIG undefined FUN_1429c7298(void)

void FUN_1429c7298(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined1 local_ec [4];
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  undefined4 *local_c8;
  ulonglong uStack_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  undefined1 local_80 [8];
  undefined1 *local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = (ulonglong)*(uint *)(param_2 + 1);
  local_f8 = param_4;
  if ((*(uint *)(param_2 + 1) != 0) && (FUN_1403e3958(&local_c8,0), 0 < (int)param_2[1])) {
    lVar9 = 0;
    puVar12 = local_c8;
    do {
      plVar3 = *(longlong **)(*param_2 + lVar9 * 8);
      lVar17 = (longlong)(int)plVar3[1];
      lVar14 = *(longlong *)(*plVar3 + 0x28);
      *(undefined8 *)(puVar12 + 4) = *(undefined8 *)(lVar14 + 0x10 + lVar17 * 0x18);
      puVar1 = (undefined4 *)(lVar14 + lVar17 * 0x18);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar12 = *puVar1;
      puVar12[1] = uVar4;
      puVar12[2] = uVar5;
      puVar12[3] = uVar6;
      lVar9 = lVar9 + 1;
      puVar12 = puVar12 + 6;
    } while (lVar9 < (int)param_2[1]);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  uStack_b0 = CONCAT44(uStack_b0._4_4_,(undefined4)uStack_c0);
  local_b8 = local_c8;
  FUN_1403b092e(&local_b8,&local_d8,1,0x3f1a36e2e0000000);
  local_98 = 0;
  local_90 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0;
  if (0 < (int)uStack_d0) {
    lVar14 = 0;
    lVar9 = local_d8;
    iVar8 = (int)uStack_d0;
    do {
      lVar17 = lVar14 * 0x10;
      if (0 < *(int *)(lVar9 + 8 + lVar17)) {
        lVar16 = 0;
        do {
          uVar13 = *(ulonglong *)(*param_2 + lVar14 * 8);
          uVar18 = *(ulonglong *)
                    (*param_2 + (longlong)*(int *)(*(longlong *)(lVar9 + lVar17) + lVar16 * 4) * 8);
          local_e0 = uVar13;
          local_e8 = uVar18;
          if (uVar13 < uVar18) {
            local_e0 = uVar18;
            local_e8 = uVar13;
          }
          if ((int)uStack_b0 != local_84) {
            uVar10 = ((uint)(local_e0 >> 0x14) & 0xffff ^ (uint)(local_e0 >> 4)) * -0x7a143595;
            uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
            uVar11 = ((uint)(local_e8 >> 0x14) & 0xffff ^ (uint)(local_e8 >> 4)) * -0x7a143595;
            uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
            uVar11 = uVar11 >> 0x10 ^ uVar11;
            puVar15 = local_78;
            if (local_78 == (undefined1 *)0x0) {
              puVar15 = local_80;
            }
            iVar8 = *(int *)(puVar15 +
                            (ulonglong)
                            (local_70 - 1U &
                            (uVar11 * 0x40 + (uVar10 >> 0x10 ^ uVar10) + (uVar11 >> 2) + 0x9e3779b9
                            ^ uVar11)) * 4);
            while (iVar8 != -1) {
              puVar2 = (ulonglong *)(local_b8 + (longlong)iVar8 * 6);
              if ((*puVar2 == local_e8) &&
                 (*(ulonglong *)(local_b8 + (longlong)iVar8 * 6 + 2) == local_e0)) {
                if (puVar2 != (ulonglong *)0x0) goto LAB_1429c74f1;
                break;
              }
              iVar8 = (int)puVar2[2];
            }
          }
          cVar7 = FUN_1429d41d3(uVar13,uVar18,*(undefined8 *)(param_3 + 0x18));
          if (cVar7 != '\0') {
            if (*(byte *)(uVar13 + 0xc) < 3) {
              uVar13 = 0;
            }
            if (*(byte *)(uVar18 + 0xc) < 3) {
              uVar18 = 0;
            }
            FUN_1429c8ddb(uVar13,uVar18,local_f8,param_5);
            FUN_146e10226(&local_b8,local_ec,&local_e8);
          }
LAB_1429c74f1:
          lVar16 = lVar16 + 1;
          lVar9 = local_d8;
        } while (lVar16 < *(int *)(local_d8 + 8 + lVar17));
        iVar8 = (int)uStack_d0;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar8);
    local_70 = 0;
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146cc37f0(&local_b8);
  FUN_144716727(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429c75ee FUN_1429c75ee body=4659 status=ok
// SIG undefined FUN_1429c75ee(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1429c75ee(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong **pplVar16;
  byte bVar17;
  longlong lVar18;
  int *piVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  longlong *plVar23;
  int iVar24;
  uint uVar25;
  longlong *plVar26;
  ulonglong uVar27;
  longlong *plVar28;
  longlong *plVar29;
  ulonglong *puVar30;
  longlong lVar31;
  longlong *plVar32;
  int iVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong *plVar36;
  uint uVar37;
  int iVar38;
  longlong *plVar39;
  int iVar40;
  longlong *plVar41;
  uint uVar42;
  longlong lVar43;
  uint uVar44;
  undefined1 *puVar45;
  ulonglong *puVar46;
  bool bVar47;
  float fVar48;
  undefined1 auStack_468 [32];
  longlong *local_448;
  longlong local_440;
  undefined8 local_438;
  ulonglong local_430;
  longlong *local_428;
  undefined8 uStack_420;
  longlong **local_410;
  longlong *local_408;
  longlong *local_400;
  longlong local_3f8;
  ulonglong uStack_3f0;
  longlong *local_3e8;
  ulonglong uStack_3e0;
  longlong local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_3c8 [16];
  undefined1 *local_3b8;
  uint local_3b0;
  uint local_3ac;
  int iStack_3a8;
  int local_3a4;
  undefined1 local_3a0 [8];
  undefined1 *local_398;
  int local_390;
  longlong *local_388;
  longlong *local_380;
  undefined4 local_378 [188];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_468;
  local_3e8 = (longlong *)0x0;
  uStack_3e0 = (ulonglong)*(uint *)(param_2 + 1);
  local_448 = param_2;
  local_440 = param_1;
  local_438 = param_4;
  if ((*(uint *)(param_2 + 1) != 0) && (FUN_1403e3958(&local_3e8,0), 0 < (int)local_448[1])) {
    lVar18 = 0;
    plVar26 = local_3e8;
    do {
      plVar21 = *(longlong **)(*local_448 + lVar18 * 8);
      lVar34 = (longlong)(int)plVar21[1];
      lVar22 = *(longlong *)(*plVar21 + 0x28);
      plVar26[2] = *(longlong *)(lVar22 + 0x10 + lVar34 * 0x18);
      puVar1 = (undefined4 *)(lVar22 + lVar34 * 0x18);
      uVar5 = puVar1[1];
      uVar6 = puVar1[2];
      uVar7 = puVar1[3];
      *(undefined4 *)plVar26 = *puVar1;
      *(undefined4 *)((longlong)plVar26 + 4) = uVar5;
      *(undefined4 *)(plVar26 + 1) = uVar6;
      *(undefined4 *)((longlong)plVar26 + 0xc) = uVar7;
      lVar18 = lVar18 + 1;
      plVar26 = plVar26 + 3;
    } while (lVar18 < (int)local_448[1]);
  }
  plVar26 = local_448;
  local_3f8 = 0;
  uStack_3f0 = 0;
  local_380 = (longlong *)CONCAT44(local_380._4_4_,(undefined4)uStack_3e0);
  local_388 = local_3e8;
  FUN_1403b092e(&local_388,&local_3f8,1,0x3f1a36e2e0000000);
  local_3b8 = (undefined1 *)0x0;
  local_3b0 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3ac = 0x80;
  iStack_3a8 = -1;
  local_3a4 = 0;
  local_398 = (undefined1 *)0x0;
  local_390 = 0;
  uVar42 = *(uint *)(plVar26 + 1);
  if ((longlong)(int)uVar42 != 0) {
    if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar42);
    }
    uVar11 = (ulonglong)uVar42;
    FUN_1446f4a44(&local_3d8);
    iVar33 = (int)uStack_3d0;
    lVar18 = (longlong)(int)uStack_3d0;
    uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(int)uStack_3d0 + uVar42);
    if ((uint)(uStack_3d0._4_4_ - iVar33) < uVar42) {
      FUN_1447711aa(&local_3d8);
    }
    if (iVar33 < (int)uVar42) {
      piVar19 = (int *)(uVar11 * 0x20 + local_3d8 + -0x1c);
      uVar12 = uVar11;
      do {
        uVar20 = uVar12 - 1;
        if (local_3a4 == 0) {
          iVar33 = (int)uVar20;
        }
        else {
          iVar33 = (int)uVar12 + -1;
          *(int *)(local_3d8 + (longlong)iStack_3a8 * 0x20) = iVar33;
        }
        piVar19[-1] = -1;
        iVar24 = -1;
        if (0 < local_3a4) {
          iVar24 = iStack_3a8;
        }
        *piVar19 = iVar24;
        local_3a4 = local_3a4 + 1;
        piVar19 = piVar19 + -8;
        uVar12 = uVar20;
        iStack_3a8 = iVar33;
      } while (lVar18 < (longlong)uVar20);
    }
    puVar45 = (undefined1 *)(uVar11 + 0x1f >> 5);
    uVar44 = (uint)puVar45;
    puVar13 = local_3b8;
    local_3b0 = uVar42;
    if (local_3ac + 0x1f >> 5 < uVar44) {
      puVar13 = (undefined1 *)0x0;
      if (local_3b8 != (undefined1 *)0x0 || 0x80 < uVar42) {
        if (0x80 < uVar42) {
          puVar13 = puVar45;
        }
        FUN_1446efa72(&local_3b8,0,puVar13,4);
        puVar13 = local_3b8;
      }
      local_3ac = (uint)(uVar11 + 0x1f) & 0xffffffe0;
    }
    plVar26 = local_448;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = local_3c8;
    }
    if (uVar42 < 0x101) {
      uVar44 = uVar44 + (uVar44 == 0);
    }
    memset(puVar13,0,(ulonglong)(uVar44 << 2));
    uVar44 = local_3b0 + 0x1f;
    if (-1 < (int)local_3b0) {
      uVar44 = local_3b0;
    }
    if ((int)local_3b0 % 0x20 != 0) {
      puVar13 = local_3b8;
      if (local_3b8 == (undefined1 *)0x0) {
        puVar13 = local_3c8;
      }
      bVar17 = -(char)((int)local_3b0 % 0x20);
      *(uint *)(puVar13 + (longlong)((int)uVar44 >> 5) * 4) =
           (uint)(*(int *)(puVar13 + (longlong)((int)uVar44 >> 5) * 4) << (bVar17 & 0x1f)) >>
           (bVar17 & 0x1f);
    }
    iVar33 = 1;
    if (3 < uVar42) {
      uVar42 = (uVar42 | 1) + 0xe;
      iVar33 = 0x1f;
      if (uVar42 != 0) {
        for (; uVar42 >> iVar33 == 0; iVar33 = iVar33 + -1) {
        }
      }
      iVar33 = 1 << ((byte)iVar33 & 0x1f);
    }
    if ((local_390 == 0) || (local_390 < iVar33)) {
      local_390 = iVar33;
      FUN_1429d3c92();
    }
    lVar18 = (longlong)(int)plVar26[1];
    if (lVar18 != 0) {
      puVar30 = (ulonglong *)*plVar26;
      puVar46 = puVar30 + lVar18;
      do {
        iVar33 = iStack_3a8;
        uVar12 = uStack_3d0;
        uVar11 = *puVar30;
        if (local_3a4 == 0) {
          iVar33 = (int)uStack_3d0;
          uStack_3d0 = CONCAT44(uStack_3d0._4_4_,(int)uStack_3d0 + 1);
          if (uStack_3d0._4_4_ == iVar33) {
            FUN_1447711aa(&local_3d8,uVar12 & 0xffffffff);
          }
          uVar42 = local_3b0;
          if (local_3b0 == 0) {
            iVar24 = -1;
          }
          else {
            iVar24 = local_3b0 + 0x1e;
            if (-1 < (int)(local_3b0 - 1)) {
              iVar24 = local_3b0 - 1;
            }
            iVar24 = iVar24 >> 5;
          }
          uVar44 = local_3b0 + 1;
          uVar37 = local_3b0 + 0x1f;
          if (-1 < (int)local_3b0) {
            uVar37 = local_3b0;
          }
          if ((int)uVar37 >> 5 == iVar24) {
            local_3b0 = uVar44;
          }
          else {
            if ((int)local_3ac <= (int)local_3b0) {
              if (local_3b0 + 0x20 < 0xa0) {
                local_3ac = 0x80;
              }
              else {
                uVar44 = local_3b0 + 0x20 >> 5;
                if (local_3ac + 0x1f < 0xa0) {
                  uVar25 = 4;
                  if (4 < uVar44) {
                    uVar25 = uVar44;
                  }
                }
                else {
                  uVar25 = uVar44 + (uVar44 * 3 >> 3) + 0x10;
                }
                uVar12 = (ulonglong)(uVar25 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar10 = (uint)(uVar12 + 0xf);
                    if (uVar25 < 0x1ffd) {
                      uVar12 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
                    }
                    else {
                      uVar20 = (ulonglong)(uVar10 & 0xfffffff0);
                      if (uVar20 < 0x7ff1) {
                        bVar17 = (&DAT_14c841e00)[uVar10 >> 4];
                        uVar27 = 0x32;
                        if (0x32 < bVar17) {
                          uVar27 = (ulonglong)bVar17;
                        }
                        uVar35 = 0x32 - (ulonglong)bVar17;
                        do {
                          uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar35 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar35 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1429c7d26;
                          lVar18 = uVar27 + 1 + uVar35;
                          uVar35 = uVar35 - 1;
                        } while (lVar18 != 0x33);
                      }
                      uVar12 = (ulonglong)DAT_14c841df8;
                      if (DAT_14c841df8 < 0x11) {
                        uVar12 = 0x10;
                      }
                      uVar12 = -uVar12 & (uVar20 + uVar12) - 1;
                    }
                  }
                  else {
                    local_430 = (ulonglong)uVar44;
                    uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
                    uVar44 = (uint)local_430;
                  }
                }
LAB_1429c7d26:
                iVar24 = (int)(uVar12 >> 2);
                local_3ac = iVar24 << 5;
                if (iVar24 < (int)uVar44) {
                  local_3ac = 0xffffffe0;
                }
              }
              FUN_1446efbd8(local_3c8,local_3b0);
              uVar44 = local_3b0 + 1;
            }
            uVar25 = uVar44 + 0x1f;
            if (-1 < (int)uVar44) {
              uVar25 = uVar44;
            }
            local_3b0 = uVar44;
            if ((int)uVar44 % 0x20 != 0) {
              puVar13 = local_3b8;
              if (local_3b8 == (undefined1 *)0x0) {
                puVar13 = local_3c8;
              }
              bVar17 = -(char)((int)uVar44 % 0x20);
              *(uint *)(puVar13 + (longlong)((int)uVar25 >> 5) * 4) =
                   (uint)(*(int *)(puVar13 + (longlong)((int)uVar25 >> 5) * 4) << (bVar17 & 0x1f))
                   >> (bVar17 & 0x1f);
            }
          }
          lVar18 = (longlong)iVar33;
          puVar13 = local_3b8;
          if (local_3b8 == (undefined1 *)0x0) {
            puVar13 = local_3c8;
          }
          bVar17 = (byte)uVar42 & 0x1f;
          *(uint *)(puVar13 + (longlong)((int)uVar37 >> 5) * 4) =
               *(uint *)(puVar13 + (longlong)((int)uVar37 >> 5) * 4) &
               (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
        }
        else {
          lVar18 = (longlong)iStack_3a8;
          iStack_3a8 = *(int *)(local_3d8 + 4 + lVar18 * 0x20);
          local_3a4 = local_3a4 + -1;
          if (local_3a4 != 0) {
            *(undefined4 *)(local_3d8 + (longlong)iStack_3a8 * 0x20) = 0xffffffff;
          }
        }
        uVar42 = 1 << ((byte)iVar33 & 0x1f);
        puVar13 = local_3b8;
        if (local_3b8 == (undefined1 *)0x0) {
          puVar13 = local_3c8;
        }
        iVar24 = iVar33 + 0x1f;
        if (-1 < iVar33) {
          iVar24 = iVar33;
        }
        *(uint *)(puVar13 + (longlong)(iVar24 >> 5) * 4) =
             *(uint *)(puVar13 + (longlong)(iVar24 >> 5) * 4) | uVar42;
        lVar18 = lVar18 * 0x20;
        puVar1 = (undefined4 *)(local_3d8 + lVar18);
        *(ulonglong *)(local_3d8 + lVar18) = uVar11;
        *(ulonglong *)(local_3d8 + 8 + lVar18) = uVar11;
        *(undefined4 *)(local_3d8 + 0x10 + lVar18) = 1;
        *(undefined4 *)(local_3d8 + 0x18 + lVar18) = 0xffffffff;
        uVar44 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar44 = (uVar44 >> 0xd ^ uVar44) * -0x3d4d51cb;
        uVar44 = uVar44 >> 0x10 ^ uVar44;
        uVar37 = (int)uStack_3d0 - local_3a4;
        if (1 < uVar37) {
          puVar13 = local_398;
          if (local_398 == (undefined1 *)0x0) {
            puVar13 = local_3a0;
          }
          iVar38 = *(int *)(puVar13 + (ulonglong)(local_390 - 1U & uVar44) * 4);
          while (iVar38 != -1) {
            puVar2 = (undefined4 *)(local_3d8 + (longlong)iVar38 * 0x20);
            if (*(ulonglong *)(local_3d8 + (longlong)iVar38 * 0x20) == uVar11) {
              uVar5 = *puVar1;
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              uVar8 = puVar1[3];
              *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
              *puVar2 = uVar5;
              puVar2[1] = uVar6;
              puVar2[2] = uVar7;
              puVar2[3] = uVar8;
              if (local_3a4 != 0) {
                *(int *)(local_3d8 + (longlong)iStack_3a8 * 0x20) = iVar33;
              }
              *(undefined4 *)(local_3d8 + lVar18) = 0xffffffff;
              iVar38 = -1;
              if (0 < local_3a4) {
                iVar38 = iStack_3a8;
              }
              *(int *)(local_3d8 + 4 + lVar18) = iVar38;
              iStack_3a8 = iVar33;
              local_3a4 = local_3a4 + 1;
              puVar13 = local_3b8;
              if (local_3b8 == (undefined1 *)0x0) {
                puVar13 = local_3c8;
              }
              *(uint *)(puVar13 + (longlong)(iVar24 >> 5) * 4) =
                   *(uint *)(puVar13 + (longlong)(iVar24 >> 5) * 4) & (uVar42 ^ 0xffffffff);
              goto LAB_1429c7c32;
            }
            iVar38 = puVar2[6];
          }
        }
        iVar24 = 1;
        if (3 < uVar37) {
          uVar11 = (ulonglong)(uVar37 & 0xfffffffe) + 0xf;
          lVar18 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar24 = 1 << ((byte)lVar18 & 0x1f);
        }
        if (((int)uVar37 < 1) || (iVar24 <= local_390)) {
          uVar44 = local_390 - 1U & uVar44;
          puVar1[7] = uVar44;
          puVar13 = local_398;
          if (local_398 == (undefined1 *)0x0) {
            puVar13 = local_3a0;
          }
          puVar1[6] = *(undefined4 *)
                       (puVar13 + ((longlong)local_390 - 1U & (longlong)(int)uVar44) * 4);
          puVar13 = local_398;
          if (local_398 == (undefined1 *)0x0) {
            puVar13 = local_3a0;
          }
          *(int *)(puVar13 + ((longlong)local_390 - 1U & (longlong)(int)uVar44) * 4) = iVar33;
        }
        else {
          local_390 = iVar24;
          FUN_1429d3c92(&local_3d8);
        }
LAB_1429c7c32:
        puVar30 = puVar30 + 1;
      } while (puVar30 != puVar46);
      iVar33 = (int)local_448[1];
      local_410 = &local_400;
      local_408 = &local_3d8;
      local_400 = local_408;
      if (0 < iVar33) {
        lVar18 = 0;
        do {
          plVar26 = *(longlong **)(*local_448 + lVar18 * 8);
          plVar21 = (longlong *)0x0;
          if (2 < *(byte *)((longlong)plVar26 + 0xc)) {
            plVar21 = plVar26;
          }
          lVar22 = (longlong)(int)plVar21[1] * 0x10;
          lVar34 = (longlong)*(int *)(*(longlong *)(*plVar21 + 0x668) + 8 + lVar22);
          if (lVar34 != 0) {
            puVar46 = *(ulonglong **)(*(longlong *)(*plVar21 + 0x668) + lVar22);
            puVar30 = puVar46 + lVar34 * 2;
            do {
              if ((int)uStack_3d0 != local_3a4) {
                uVar11 = *puVar46;
                uVar42 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
                uVar42 = (uVar42 >> 0xd ^ uVar42) * -0x3d4d51cb;
                puVar13 = local_398;
                if (local_398 == (undefined1 *)0x0) {
                  puVar13 = local_3a0;
                }
                for (iVar33 = *(int *)(puVar13 +
                                      (ulonglong)(local_390 - 1U & (uVar42 >> 0x10 ^ uVar42)) * 4);
                    iVar33 != -1; iVar33 = *(int *)((longlong)iVar33 * 0x20 + local_3d8 + 0x18)) {
                  if (*(ulonglong *)(local_3d8 + (longlong)iVar33 * 0x20) == uVar11) {
                    FUN_1429c90cc(&local_410,plVar26);
                    break;
                  }
                }
              }
              puVar46 = puVar46 + 2;
            } while (puVar46 != puVar30);
            iVar33 = (int)local_448[1];
          }
          lVar18 = lVar18 + 1;
        } while (lVar18 < iVar33);
      }
      goto LAB_1429c7f54;
    }
  }
  local_408 = &local_3d8;
  local_410 = &local_400;
  local_400 = local_408;
LAB_1429c7f54:
  plVar26 = local_448;
  local_428 = (longlong *)0x0;
  uStack_420 = 0;
  if ((int)uStack_3f0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_3f0 & 0xffffffff);
  }
  if ((uStack_3f0 & 0xffffffff) != 0) {
    FUN_1429d3f26(&local_428);
    if (0 < (int)uStack_3f0) {
      dVar3 = *(double *)(local_440 + 0x488);
      lVar18 = 0;
      iVar33 = (int)uStack_3f0;
      do {
        lVar22 = (longlong)*(int *)(local_3f8 + 8 + lVar18 * 0x10);
        if (lVar22 != 0) {
          local_440 = *(longlong *)(*plVar26 + lVar18 * 8);
          lVar34 = *(longlong *)(local_3f8 + lVar18 * 0x10);
          lVar43 = 0;
          do {
            lVar15 = local_440;
            lVar14 = (longlong)*(int *)(lVar34 + lVar43);
            if (lVar18 <= lVar14) {
              lVar31 = *(longlong *)(*plVar26 + lVar14 * 8);
              dVar4 = ((double)local_3e8[lVar14 * 3 + 2] - (double)local_3e8[lVar18 * 3 + 2]) *
                      ((double)local_3e8[lVar14 * 3 + 2] - (double)local_3e8[lVar18 * 3 + 2]) +
                      ((double)local_3e8[lVar14 * 3 + 1] - (double)local_3e8[lVar18 * 3 + 1]) *
                      ((double)local_3e8[lVar14 * 3 + 1] - (double)local_3e8[lVar18 * 3 + 1]) +
                      ((double)local_3e8[lVar14 * 3] - (double)local_3e8[lVar18 * 3]) *
                      ((double)local_3e8[lVar14 * 3] - (double)local_3e8[lVar18 * 3]);
              if (dVar3 * 250000.0 <= dVar4) {
                lVar15 = FUN_1429c93e6(&local_400,local_440);
                lVar14 = FUN_1429c93e6(&local_400);
                uVar11 = uStack_420;
                plVar26 = local_448;
                if (lVar15 != lVar14) {
                  lVar15 = (longlong)(int)uStack_420;
                  uVar42 = (int)uStack_420 + 1;
                  uStack_420 = CONCAT44(uStack_420._4_4_,uVar42);
                  if (uStack_420._4_4_ < uVar42) {
                    FUN_1429d4068(&local_428,uVar11 & 0xffffffff);
                  }
                  local_428[lVar15 * 3] = local_440;
                  local_428[lVar15 * 3 + 1] = lVar31;
                  local_428[lVar15 * 3 + 2] = (longlong)dVar4;
                  plVar26 = local_448;
                }
              }
              else {
                FUN_1429c90cc(&local_410,local_440,lVar31);
                lVar14 = 0;
                if (2 < *(byte *)(lVar15 + 0xc)) {
                  lVar14 = lVar15;
                }
                if (*(byte *)(lVar31 + 0xc) < 3) {
                  lVar31 = 0;
                }
                FUN_1429c8ddb(lVar14,lVar31,local_438,param_5);
              }
            }
            lVar43 = lVar43 + 4;
          } while (lVar22 << 2 != lVar43);
          iVar33 = (int)uStack_3f0;
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 < iVar33);
    }
  }
  plVar26 = local_428;
  iVar33 = (int)uStack_420;
  lVar18 = (longlong)(int)uStack_420;
  if (1 < lVar18) {
    memset(local_378,0,0x2f0);
    local_388 = plVar26;
    local_380 = plVar26 + lVar18 * 3 + -3;
    fVar48 = logf((float)iVar33);
    local_378[0] = (int)(longlong)(fVar48 + fVar48);
    pplVar16 = &local_388;
    do {
      plVar21 = *pplVar16;
      plVar26 = pplVar16[1];
      iVar33 = *(int *)(pplVar16 + 2);
      iVar24 = (int)((ulonglong)((longlong)plVar26 - (longlong)plVar21) >> 3) * -0x55555555;
      uVar42 = iVar24 + 1;
      plVar29 = plVar21;
      plVar41 = plVar26;
      if (iVar33 != 0) {
LAB_1429c81ac:
        if (8 < (int)uVar42) {
          uVar11 = (ulonglong)(uVar42 >> 1);
          lVar18 = plVar21[uVar11 * 3 + 2];
          lVar22 = plVar21[uVar11 * 3];
          lVar34 = (plVar21 + uVar11 * 3)[1];
          plVar21[uVar11 * 3 + 2] = plVar21[2];
          lVar43 = plVar21[1];
          plVar21[uVar11 * 3] = *plVar21;
          (plVar21 + uVar11 * 3)[1] = lVar43;
          plVar21[2] = lVar18;
          *plVar21 = lVar22;
          plVar21[1] = lVar34;
          plVar39 = plVar26 + 3;
          plVar23 = plVar21;
          do {
            plVar9 = plVar23 + 3;
            plVar36 = plVar23 + 3;
            do {
              plVar23 = plVar36;
              plVar32 = plVar9;
              if (plVar26 < plVar23) break;
              plVar9 = plVar32 + 3;
              plVar36 = plVar23 + 3;
            } while ((double)plVar23[2] < (double)plVar21[2] ||
                     (double)plVar23[2] == (double)plVar21[2]);
            plVar9 = plVar39 + -6;
            do {
              plVar36 = plVar39;
              plVar28 = plVar9;
              plVar39 = plVar36 + -3;
              if (plVar39 <= plVar21) break;
              plVar9 = plVar28 + -3;
            } while ((double)plVar21[2] < (double)plVar36[-1] ||
                     (double)plVar21[2] == (double)plVar36[-1]);
            if (plVar39 < plVar23) goto LAB_1429c82a2;
            lVar18 = plVar23[2];
            lVar22 = *plVar23;
            lVar34 = plVar23[1];
            plVar23[2] = plVar36[-1];
            lVar43 = plVar36[-2];
            *plVar23 = *plVar39;
            plVar23[1] = lVar43;
            plVar36[-1] = lVar18;
            *plVar39 = lVar22;
            plVar36[-2] = lVar34;
          } while( true );
        }
        for (; plVar41 = plVar21, plVar29 = plVar21, plVar21 < plVar26; plVar26 = plVar26 + -3) {
          while (plVar39 = plVar41, plVar29 = plVar29 + 3, plVar29 <= plVar26) {
            plVar41 = plVar29;
            if ((double)plVar29[2] < (double)plVar39[2] || (double)plVar29[2] == (double)plVar39[2])
            {
              plVar41 = plVar39;
            }
          }
          local_78 = plVar39[2];
          local_88 = *plVar39;
          uStack_80 = plVar39[1];
          lVar22 = local_88;
          lVar34 = uStack_80;
          plVar39[2] = plVar26[2];
          lVar18 = plVar26[1];
          *plVar39 = *plVar26;
          plVar39[1] = lVar18;
          plVar26[2] = local_78;
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          *(undefined4 *)plVar26 = (undefined4)local_88;
          *(undefined4 *)((longlong)plVar26 + 4) = local_88._4_4_;
          *(undefined4 *)(plVar26 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plVar26 + 0xc) = uStack_80._4_4_;
          local_88 = lVar22;
          uStack_80 = lVar34;
        }
        goto LAB_1429c864f;
      }
LAB_1429c8371:
      if (uVar42 != 0) {
        iVar33 = (iVar24 - (iVar24 + -1 >> 0x1f)) + -1 >> 1;
        iVar24 = iVar33;
joined_r0x0001429c8394:
        do {
          iVar38 = iVar33 * 2 + 1;
          if (iVar38 < (int)uVar42) {
            iVar40 = iVar33 * 2 + 2;
            if ((iVar40 < (int)uVar42) &&
               ((double)plVar21[(longlong)iVar38 * 3 + 2] <
                (double)plVar21[(longlong)iVar40 * 3 + 2] ||
                (double)plVar21[(longlong)iVar38 * 3 + 2] ==
                (double)plVar21[(longlong)iVar40 * 3 + 2])) {
              iVar38 = iVar40;
            }
            if ((double)plVar21[(longlong)iVar33 * 3 + 2] <=
                (double)plVar21[(longlong)iVar38 * 3 + 2] &&
                (double)plVar21[(longlong)iVar38 * 3 + 2] !=
                (double)plVar21[(longlong)iVar33 * 3 + 2]) {
              plVar26 = plVar21 + (longlong)iVar33 * 3;
              plVar29 = plVar21 + (longlong)iVar38 * 3;
              local_78 = plVar26[2];
              local_88 = *plVar26;
              uStack_80 = plVar26[1];
              lVar22 = local_88;
              lVar34 = uStack_80;
              plVar26[2] = plVar29[2];
              lVar18 = plVar29[1];
              *plVar26 = *plVar29;
              plVar26[1] = lVar18;
              plVar29[2] = local_78;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              *(undefined4 *)plVar29 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar29 + 4) = local_88._4_4_;
              *(undefined4 *)(plVar29 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar29 + 0xc) = uStack_80._4_4_;
              iVar33 = iVar38;
              local_88 = lVar22;
              uStack_80 = lVar34;
              goto joined_r0x0001429c8394;
            }
          }
          bVar47 = iVar24 != 0;
          iVar33 = iVar24 + -1;
          iVar24 = iVar33;
        } while (bVar47);
        if (1 < (int)uVar42) {
          uVar11 = (ulonglong)uVar42 - 1;
          local_78 = plVar21[2];
          local_88 = *plVar21;
          uStack_80 = plVar21[1];
          lVar22 = local_88;
          lVar34 = uStack_80;
          plVar21[2] = plVar21[uVar11 * 3 + 2];
          lVar18 = (plVar21 + uVar11 * 3)[1];
          *plVar21 = plVar21[uVar11 * 3];
          plVar21[1] = lVar18;
          plVar21[uVar11 * 3 + 2] = local_78;
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          plVar26 = plVar21 + uVar11 * 3;
          *(undefined4 *)plVar26 = (undefined4)local_88;
          *(undefined4 *)((longlong)plVar26 + 4) = local_88._4_4_;
          *(undefined4 *)(plVar26 + 1) = (undefined4)uStack_80;
          *(undefined4 *)((longlong)plVar26 + 0xc) = uStack_80._4_4_;
          local_88 = lVar22;
          uStack_80 = lVar34;
          if (uVar42 != 2) {
            do {
              iVar33 = 0;
              iVar38 = 1;
              iVar24 = 0;
              do {
                iVar33 = iVar33 + 2;
                iVar40 = iVar38;
                if (((longlong)iVar33 < (longlong)uVar11) &&
                   ((double)plVar21[(longlong)iVar38 * 3 + 2] <
                    (double)plVar21[(longlong)iVar33 * 3 + 2] ||
                    (double)plVar21[(longlong)iVar38 * 3 + 2] ==
                    (double)plVar21[(longlong)iVar33 * 3 + 2])) {
                  iVar40 = iVar33;
                }
                if ((double)plVar21[(longlong)iVar40 * 3 + 2] <
                    (double)plVar21[(longlong)iVar24 * 3 + 2] ||
                    (double)plVar21[(longlong)iVar40 * 3 + 2] ==
                    (double)plVar21[(longlong)iVar24 * 3 + 2]) break;
                plVar26 = plVar21 + (longlong)iVar24 * 3;
                plVar29 = plVar21 + (longlong)iVar40 * 3;
                lVar18 = plVar26[2];
                lVar22 = *plVar26;
                lVar34 = plVar26[1];
                plVar26[2] = plVar29[2];
                lVar43 = plVar29[1];
                *plVar26 = *plVar29;
                plVar26[1] = lVar43;
                plVar29[2] = lVar18;
                *plVar29 = lVar22;
                plVar29[1] = lVar34;
                iVar33 = iVar40 * 2;
                iVar38 = iVar40 * 2 + 1;
                iVar24 = iVar40;
              } while ((longlong)iVar38 < (longlong)uVar11);
              uVar12 = uVar11 - 1;
              local_78 = plVar21[2];
              local_88 = *plVar21;
              uStack_80 = plVar21[1];
              lVar22 = local_88;
              lVar34 = uStack_80;
              plVar21[2] = plVar21[uVar12 * 3 + 2];
              lVar18 = (plVar21 + uVar12 * 3)[1];
              *plVar21 = plVar21[uVar12 * 3];
              plVar21[1] = lVar18;
              plVar21[uVar12 * 3 + 2] = local_78;
              local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
              uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
              plVar26 = plVar21 + uVar12 * 3;
              *(undefined4 *)plVar26 = (undefined4)local_88;
              *(undefined4 *)((longlong)plVar26 + 4) = local_88._4_4_;
              *(undefined4 *)(plVar26 + 1) = (undefined4)uStack_80;
              *(undefined4 *)((longlong)plVar26 + 0xc) = uStack_80._4_4_;
              bVar47 = 2 < uVar11;
              uVar11 = uVar12;
              local_88 = lVar22;
              uStack_80 = lVar34;
            } while (bVar47);
          }
        }
      }
LAB_1429c864f:
      pplVar16 = pplVar16 + -3;
    } while (&local_388 <= pplVar16);
  }
  if ((int)uStack_420 != 0) {
    plVar26 = local_428 + (longlong)(int)uStack_420 * 3;
    plVar21 = local_428;
    do {
      lVar18 = *plVar21;
      lVar22 = plVar21[1];
      lVar34 = FUN_1429c93e6(&local_400,lVar18);
      lVar43 = FUN_1429c93e6(&local_400,lVar22);
      if (lVar34 != lVar43) {
        FUN_1429c90cc(&local_410,lVar18,lVar22);
        if (*(byte *)(lVar18 + 0xc) < 3) {
          lVar18 = 0;
        }
        if (*(byte *)(lVar22 + 0xc) < 3) {
          lVar22 = 0;
        }
        FUN_1429c8ddb(lVar18,lVar22,local_438,param_5);
      }
      plVar21 = plVar21 + 3;
    } while (plVar21 != plVar26);
  }
  if (local_428 != (longlong *)0x0) {
    FUN_1400020a8(local_428);
  }
  local_390 = 0;
  if (local_398 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar11 = uStack_3d0 >> 0x20;
  uStack_3d0 = uStack_3d0 & 0xffffffff00000000;
  if ((int)uVar11 != 0) {
    FUN_1446f4a44(&local_3d8,0);
  }
  iStack_3a8 = 0xffffffff;
  local_3a4 = 0;
  local_3b0 = 0;
  if (0x80 < local_3ac) {
    local_3ac = 0x80;
    FUN_1446efbd8(local_3c8,0);
  }
  if (local_3b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_3d8 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_3f8,uStack_3f0 & 0xffffffff);
  if (local_3f8 != 0) {
    FUN_1400020a8();
  }
  if (local_3e8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1429c82a2:
  local_78 = plVar21[2];
  local_88 = *plVar21;
  uStack_80 = plVar21[1];
  lVar22 = local_88;
  lVar34 = uStack_80;
  plVar21[2] = plVar36[-1];
  lVar18 = plVar36[-2];
  *plVar21 = *plVar39;
  plVar21[1] = lVar18;
  plVar36[-1] = local_78;
  local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  *(undefined4 *)plVar39 = (undefined4)local_88;
  *(undefined4 *)((longlong)plVar36 + -0x14) = local_88._4_4_;
  *(undefined4 *)(plVar36 + -2) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)plVar36 + -0xc) = uStack_80._4_4_;
  iVar33 = iVar33 + -1;
  plVar36 = plVar36 + -6;
  local_88 = lVar22;
  uStack_80 = lVar34;
  if ((longlong)plVar28 - (longlong)plVar29 < (longlong)plVar41 - (longlong)plVar32) {
    if (plVar23 < plVar26) {
      *pplVar16 = plVar23;
      pplVar16[1] = plVar26;
      *(int *)(pplVar16 + 2) = iVar33;
      pplVar16 = pplVar16 + 3;
    }
    plVar32 = plVar21;
    if (plVar39 <= plVar21 + 3) goto LAB_1429c864f;
  }
  else {
    if (plVar21 + 3 < plVar39) {
      *pplVar16 = plVar21;
      pplVar16[1] = plVar36;
      *(int *)(pplVar16 + 2) = iVar33;
      pplVar16 = pplVar16 + 3;
    }
    plVar21 = plVar23;
    plVar28 = plVar26;
    plVar36 = plVar26;
    if (plVar26 <= plVar23) goto LAB_1429c864f;
  }
  iVar24 = (int)((ulonglong)((longlong)plVar28 - (longlong)plVar32) >> 3) * -0x55555555;
  uVar42 = iVar24 + 1;
  plVar29 = plVar32;
  plVar26 = plVar36;
  plVar41 = plVar28;
  if (iVar33 == 0) goto LAB_1429c8371;
  goto LAB_1429c81ac;
}



// FUNCTION 1429c8823 FUN_1429c8823 body=69 status=ok
// SIG undefined FUN_1429c8823(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c8823(void)

{
  _DAT_14c994370 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c8865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994378,1);
  return;
}



// FUNCTION 1429c8868 FUN_1429c8868 body=69 status=ok
// SIG undefined FUN_1429c8868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c8868(void)

{
  _DAT_14c994380 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c88aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994388,1);
  return;
}



// FUNCTION 1429c88ad FUN_1429c88ad body=69 status=ok
// SIG undefined FUN_1429c88ad(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c88ad(void)

{
  _DAT_14c994390 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c88ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994398,1);
  return;
}



// FUNCTION 1429c88f2 FUN_1429c88f2 body=1256 status=ok
// SIG undefined FUN_1429c88f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c88f2(longlong *param_1,longlong *param_2,float *param_3)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  int local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *param_1;
  FUN_144b043a4(*(undefined8 *)param_1[1],&local_98);
  lVar6 = *(longlong *)param_1[1];
  fVar19 = SQRT(*(float *)(lVar6 + 0x128) * *(float *)(lVar6 + 0x128) +
                *(float *)(lVar6 + 0x120) * *(float *)(lVar6 + 0x120) +
                *(float *)(lVar6 + 0x124) * *(float *)(lVar6 + 0x124));
  if ((fVar19 <= 1e-08) || (iVar4 = _finite((double)fVar19), iVar4 == 0)) goto LAB_1429c8d8a;
  lVar6 = *param_2;
  lVar10 = (longlong)(int)param_2[1];
  lVar12 = *(longlong *)(*(longlong *)(lVar6 + 200) + lVar10 * 8);
  if (lVar12 == 0) {
    plVar8 = param_2 + 1;
    plVar7 = param_2;
LAB_1429c8b34:
    param_2 = plVar7;
    if (*(int *)(*(longlong *)(lVar6 + 0x5a8) + 8 + lVar10 * 0x10) != 0) {
LAB_1429c8b4e:
      lVar12 = *(longlong *)(lVar6 + 0x548);
      lVar11 = lVar10 * 0x10;
      dVar17 = (double)*(float *)(lVar12 + 4 + lVar11);
      dVar13 = (double)*(float *)(lVar12 + lVar11);
      pdVar1 = (double *)(*(longlong *)(lVar6 + 0x530) + lVar10 * 0x18);
      local_88 = local_88 - *(double *)(*(longlong *)(lVar6 + 0x530) + 0x10 + lVar10 * 0x18);
      local_98 = local_98 - *pdVar1;
      dStack_90 = dStack_90 - pdVar1[1];
      dVar18 = -dVar17;
      dVar15 = (double)*(float *)(lVar12 + 8 + lVar11) * -1.0;
      dVar16 = (double)*(float *)(lVar12 + 0xc + lVar11) * 1.0;
      dVar17 = -dVar17;
      dVar20 = local_98 * dVar15 - -dVar13 * local_88;
      dVar14 = dStack_90 * -dVar13 - dVar17 * local_98;
      dVar3 = local_88 * dVar18 - dVar15 * dStack_90;
      dVar3 = dVar3 + dVar3;
      dVar20 = dVar20 + dVar20;
      dVar14 = dVar14 + dVar14;
      local_a0 = dVar16 * dVar14 + local_88 + (dVar20 * -dVar13 - dVar3 * dVar17);
      local_b0 = (dVar14 * dVar18 - dVar20 * dVar15) + dVar16 * dVar3 + local_98;
      local_a8 = dVar13 * dVar14 + dVar15 * dVar3 + dVar16 * dVar20 + dStack_90;
      dVar14 = (double)_DAT_14c75f1f8;
      local_c8 = local_b0 - dVar14;
      local_c0 = local_a8 - dVar14;
      local_b8 = local_a0 - dVar14;
      local_b0 = local_b0 + dVar14;
      local_a8 = local_a8 + dVar14;
      local_a0 = local_a0 + dVar14;
      lVar6 = *(longlong *)(*(longlong *)(*param_2 + 0x5f0) + (longlong)(int)*plVar8 * 8);
      if (lVar6 != 0) {
        FUN_14172967e(lVar6,&local_d8,&local_c8);
        lVar6 = local_d8;
        if ((longlong)local_d0 != 0) {
          lVar12 = 0;
          do {
            plVar8 = *(longlong **)(lVar6 + lVar12);
            if ((plVar8 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar8 + 0xc))) {
              *(float *)(*(longlong *)(*plVar8 + 0x620) + (longlong)(int)plVar8[1] * 4) =
                   *(float *)(*(longlong *)(*plVar8 + 0x620) + (longlong)(int)plVar8[1] * 4) +
                   fVar19;
              FUN_1402bf4a4(lVar2);
              *param_3 = *param_3 + fVar19;
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)local_d0 * 8 != lVar12);
        }
        if (local_d8 != 0) {
          FUN_1400020a8(local_d8);
        }
      }
      goto LAB_1429c8d8a;
    }
LAB_1429c8d65:
    *(float *)(*(longlong *)(lVar6 + 0x620) + lVar10 * 4) =
         *(float *)(*(longlong *)(lVar6 + 0x620) + lVar10 * 4) + fVar19;
  }
  else {
    if (*(int *)(lVar12 + 0x1c) == 0xc) {
      if ((*(byte *)(lVar12 + 0x40) & 2) == 0) goto LAB_1429c8d8a;
      uVar5 = FUN_140196188(lVar2 + 0x118,param_2);
      lVar6 = FUN_1401961f6(lVar2 + 0x118,uVar5);
      if ((lVar6 == 0) ||
         ((((uVar9 = *(uint *)(*(longlong *)
                                (*(longlong *)param_1[1] + 0x100 +
                                (ulonglong)
                                (*(longlong **)(*(longlong *)param_1[1] + 0xe8) == param_2) * 8) + 8
                              ) >> 3, *(int *)(lVar6 + 0x18) <= (int)uVar9 ||
            (plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar9 * 8),
            plVar7 == (longlong *)0x0)) &&
           (plVar7 = (longlong *)FUN_1429c684a(lVar2,param_2,&local_98), plVar7 == (longlong *)0x0))
          || (*(byte *)((longlong)plVar7 + 0xc) < 3)))) goto LAB_1429c8d8a;
      lVar6 = *plVar7;
      plVar8 = plVar7 + 1;
      lVar10 = (longlong)(int)plVar7[1];
      lVar12 = *(longlong *)(*(longlong *)(lVar6 + 200) + lVar10 * 8);
      param_2 = plVar7;
      if (lVar12 == 0) goto LAB_1429c8b34;
    }
    else {
      plVar8 = param_2 + 1;
    }
    plVar7 = param_2;
    if (*(int *)(lVar12 + 0x1c) != 2) goto LAB_1429c8b34;
    if ((*(byte *)(lVar12 + 0x1c2) & 0x10) == 0) goto LAB_1429c8d8a;
    if (*(char *)(lVar12 + 399) == '\x01') {
      fVar19 = fVar19 * *(float *)param_1[2];
    }
    if (*(int *)(*(longlong *)(lVar6 + 0x5a8) + 8 + lVar10 * 0x10) == 0) goto LAB_1429c8d65;
    if ((*(byte *)(lVar12 + 0x1c3) & 1) == 0) goto LAB_1429c8b4e;
    param_2 = (longlong *)FUN_1429c684a(lVar2,param_2,&local_98);
    if ((param_2 == (longlong *)0x0) || (*(byte *)((longlong)param_2 + 0xc) < 3))
    goto LAB_1429c8d8a;
    *(float *)(*(longlong *)(*param_2 + 0x620) + (longlong)(int)param_2[1] * 4) =
         *(float *)(*(longlong *)(*param_2 + 0x620) + (longlong)(int)param_2[1] * 4) + fVar19;
  }
  FUN_1402bf4a4(lVar2,param_2);
  *param_3 = fVar19 + *param_3;
LAB_1429c8d8a:
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429c8ddb FUN_1429c8ddb body=753 status=ok
// SIG undefined FUN_1429c8ddb(void)

void FUN_1429c8ddb(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  
  if (param_1 == param_2) {
    return;
  }
  if (param_4 == (longlong *)0x0 || param_3 == (longlong *)0x0) goto LAB_1429c8fc8;
  if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar2 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_3[8];
    }
    uVar5 = (int)param_3[9] - 1;
    iVar9 = *(int *)((longlong)plVar2 + (ulonglong)((uVar1 >> 0x10 ^ uVar1) & uVar5) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong **)(*param_3 + (longlong)iVar9 * 0x10) == param_1) {
          bVar12 = true;
          goto LAB_1429c8ee6;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + *param_3 + 8);
      } while (iVar9 != -1);
    }
    uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    iVar9 = *(int *)((longlong)plVar2 + (ulonglong)(uVar5 & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar9 != -1) {
      do {
        bVar12 = *(longlong **)(*param_3 + (longlong)iVar9 * 0x10) == param_2;
        if (bVar12) break;
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + *param_3 + 8);
      } while (iVar9 != -1);
      goto LAB_1429c8ee6;
    }
  }
  bVar12 = false;
LAB_1429c8ee6:
  if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
    uVar1 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar2 = param_4 + 7;
    if ((longlong *)param_4[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_4[8];
    }
    uVar5 = (int)param_4[9] - 1;
    iVar9 = *(int *)((longlong)plVar2 + (ulonglong)((uVar1 >> 0x10 ^ uVar1) & uVar5) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong **)(*param_4 + (longlong)iVar9 * 0x10) == param_1) goto LAB_1429c8fc0;
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + *param_4 + 8);
      } while (iVar9 != -1);
    }
    uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    iVar9 = *(int *)((longlong)plVar2 + (ulonglong)(uVar5 & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar9 != -1) {
      do {
        if (*(longlong **)(*param_4 + (longlong)iVar9 * 0x10) == param_2) goto LAB_1429c8fc0;
        iVar9 = *(int *)((longlong)iVar9 * 0x10 + *param_4 + 8);
      } while (iVar9 != -1);
    }
  }
  return;
LAB_1429c8fc0:
  if (!bVar12) {
    return;
  }
LAB_1429c8fc8:
  fVar13 = (*(float *)(*(longlong *)(*param_1 + 0x650) + (longlong)(int)param_1[1] * 4) +
           *(float *)(*(longlong *)(*param_2 + 0x650) + (longlong)(int)param_2[1] * 4)) * 0.5;
  lVar8 = *(longlong *)(*param_1 + 0x668);
  puVar7 = (undefined8 *)((longlong)(int)param_2[1] * 0x10 + *(longlong *)(*param_2 + 0x668));
  lVar3 = (longlong)(int)param_1[1] * 0x10;
  puVar4 = *(undefined8 **)(lVar8 + lVar3);
  iVar9 = *(int *)(lVar8 + 8 + lVar3);
  lVar11 = (longlong)iVar9;
  if (lVar11 != 0) {
    lVar6 = lVar11 << 4;
    puVar10 = puVar4;
    do {
      if ((longlong *)*puVar10 == param_2) {
        if (puVar10 != (undefined8 *)0x0) goto LAB_1429c9069;
        break;
      }
      puVar10 = puVar10 + 2;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)(lVar8 + lVar3);
  *(uint *)(puVar10 + 1) = iVar9 + 1U;
  if (*(uint *)((longlong)puVar10 + 0xc) < iVar9 + 1U) {
    FUN_141725732(puVar10,iVar9);
    puVar4 = (undefined8 *)*puVar10;
  }
  puVar4[lVar11 * 2] = param_2;
  *(float *)(puVar4 + lVar11 * 2 + 1) = fVar13;
LAB_1429c9069:
  puVar4 = (undefined8 *)*puVar7;
  iVar9 = *(int *)(puVar7 + 1);
  lVar8 = (longlong)iVar9;
  if (lVar8 != 0) {
    lVar3 = lVar8 << 4;
    puVar10 = puVar4;
    do {
      if ((longlong *)*puVar10 == param_1) {
        if (puVar10 != (undefined8 *)0x0) {
          return;
        }
        break;
      }
      puVar10 = puVar10 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *(uint *)(puVar7 + 1) = iVar9 + 1U;
  if (*(uint *)((longlong)puVar7 + 0xc) < iVar9 + 1U) {
    FUN_141725732(puVar7,iVar9);
    puVar4 = (undefined8 *)*puVar7;
  }
  puVar4[lVar8 * 2] = param_1;
  *(float *)(puVar4 + lVar8 * 2 + 1) = fVar13;
  return;
}



// FUNCTION 1429c90cc FUN_1429c90cc body=793 status=ok
// SIG undefined FUN_1429c90cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c90cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  
  uVar2 = FUN_1429c93e6(*param_1);
  uVar3 = FUN_1429c93e6(*param_1,param_3);
  if (uVar2 != uVar3) {
    plVar1 = (longlong *)param_1[1];
    uVar4 = uVar3;
    if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
      lVar5 = 0;
    }
    else {
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      uVar9 = (int)plVar1[9] - 1;
      iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar9) * 4);
      if (iVar8 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar8 * 0x20) == uVar2) goto LAB_1429c9185;
          iVar8 = *(int *)(lVar5 + 0x18);
        } while (iVar8 != -1);
      }
      lVar5 = 0;
LAB_1429c9185:
      uVar6 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar9) * 4);
      if (iVar8 != -1) {
        do {
          lVar11 = *plVar1 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar8 * 0x20) == uVar3) goto LAB_1429c91ea;
          iVar8 = *(int *)(lVar11 + 0x18);
        } while (iVar8 != -1);
      }
      lVar11 = 0;
LAB_1429c91ea:
      if (*(int *)(lVar11 + 0x10) < *(int *)(lVar5 + 0x10)) {
        uVar4 = uVar2;
        uVar2 = uVar3;
      }
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar9) * 4);
      if (iVar8 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar8 * 0x20) == uVar2) goto LAB_1429c9259;
          iVar8 = *(int *)(lVar5 + 0x18);
        } while (iVar8 != -1);
      }
      lVar5 = 0;
    }
LAB_1429c9259:
    *(ulonglong *)(lVar5 + 8) = uVar4;
    plVar1 = (longlong *)param_1[1];
    iVar8 = _DAT_00000010;
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      uVar9 = (int)plVar1[9] - 1;
      iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((uVar6 >> 0x10 ^ uVar6) & uVar9) * 4);
      if (iVar8 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar8 * 0x20) == uVar2) goto LAB_1429c92ef;
          iVar8 = *(int *)(lVar5 + 0x18);
        } while (iVar8 != -1);
      }
      lVar5 = 0;
LAB_1429c92ef:
      iVar8 = *(int *)(lVar5 + 0x10);
      uVar6 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      iVar10 = *(int *)((longlong)plVar7 + (ulonglong)(uVar9 & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar10 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar10 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar10 * 0x20) == uVar4) goto LAB_1429c9350;
          iVar10 = *(int *)(lVar5 + 0x18);
        } while (iVar10 != -1);
      }
    }
    lVar5 = 0;
LAB_1429c9350:
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + iVar8;
    plVar1 = (longlong *)param_1[1];
    if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
      uVar6 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      plVar7 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar7 = (longlong *)plVar1[8];
      }
      iVar8 = *(int *)((longlong)plVar7 +
                      (ulonglong)((int)plVar1[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
      if (iVar8 != -1) {
        do {
          lVar5 = *plVar1 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar8 * 0x20) == uVar2) goto LAB_1429c93d6;
          iVar8 = *(int *)(lVar5 + 0x18);
        } while (iVar8 != -1);
      }
    }
    lVar5 = 0;
LAB_1429c93d6:
    *(undefined4 *)(lVar5 + 0x10) = 0;
  }
  return;
}



// FUNCTION 1429c93e6 FUN_1429c93e6 body=343 status=ok
// SIG undefined FUN_1429c93e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1429c93e6(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    plVar1 = (longlong *)*param_1;
    if ((int)plVar1[1] == *(int *)((longlong)plVar1 + 0x34)) {
      if (_DAT_00000008 == param_2) {
        return param_2;
      }
      puVar9 = (ulonglong *)&DAT_00000008;
    }
    else {
      uVar5 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      plVar6 = plVar1 + 7;
      if ((longlong *)plVar1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar1[8];
      }
      uVar7 = (int)plVar1[9] - 1;
      iVar8 = *(int *)((longlong)plVar6 + (ulonglong)((uVar5 >> 0x10 ^ uVar5) & uVar7) * 4);
      if (iVar8 == -1) {
        if (_DAT_00000008 == param_2) {
          return param_2;
        }
        lVar3 = 0;
        uVar10 = _DAT_00000008;
      }
      else {
        lVar2 = *plVar1;
        iVar4 = iVar8;
        do {
          lVar3 = lVar2 + (longlong)iVar4 * 0x20;
          if (*(ulonglong *)(lVar2 + (longlong)iVar4 * 0x20) == param_2) goto LAB_1429c9491;
          iVar4 = *(int *)(lVar3 + 0x18);
        } while (iVar4 != -1);
        lVar3 = 0;
LAB_1429c9491:
        if (*(ulonglong *)(lVar3 + 8) == param_2) {
          return param_2;
        }
        do {
          lVar3 = lVar2 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(lVar2 + (longlong)iVar8 * 0x20) == param_2) goto LAB_1429c94b9;
          iVar8 = *(int *)(lVar3 + 0x18);
        } while (iVar8 != -1);
        lVar3 = 0;
LAB_1429c94b9:
        uVar10 = *(ulonglong *)(lVar3 + 8);
      }
      puVar9 = (ulonglong *)(lVar3 + 8);
      uVar5 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      iVar8 = *(int *)((longlong)plVar6 + (ulonglong)((uVar5 >> 0x10 ^ uVar5) & uVar7) * 4);
      if (iVar8 != -1) {
        do {
          lVar3 = *plVar1 + (longlong)iVar8 * 0x20;
          if (*(ulonglong *)(*plVar1 + (longlong)iVar8 * 0x20) == uVar10) goto LAB_1429c9528;
          iVar8 = *(int *)(lVar3 + 0x18);
        } while (iVar8 != -1);
      }
    }
    lVar3 = 0;
LAB_1429c9528:
    param_2 = *(ulonglong *)(lVar3 + 8);
    *puVar9 = param_2;
  } while( true );
}



// FUNCTION 1429c953d FUN_1429c953d body=69 status=ok
// SIG undefined FUN_1429c953d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c953d(void)

{
  _DAT_14c9943a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c957f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9943b0,1);
  return;
}



// FUNCTION 1429c9582 FUN_1429c9582 body=69 status=ok
// SIG undefined FUN_1429c9582(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9582(void)

{
  _DAT_14c9943b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c95c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9943c0,1);
  return;
}



// FUNCTION 1429c95c7 FUN_1429c95c7 body=69 status=ok
// SIG undefined FUN_1429c95c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c95c7(void)

{
  _DAT_14c9943c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9609. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9943d0,1);
  return;
}



// FUNCTION 1429c960c FUN_1429c960c body=69 status=ok
// SIG undefined FUN_1429c960c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c960c(void)

{
  _DAT_14c9943d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c964e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9943e0,1);
  return;
}



// FUNCTION 1429c9651 FUN_1429c9651 body=69 status=ok
// SIG undefined FUN_1429c9651(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9651(void)

{
  _DAT_14c9943e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9943f0,1);
  return;
}



// FUNCTION 1429c9696 FUN_1429c9696 body=69 status=ok
// SIG undefined FUN_1429c9696(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9696(void)

{
  _DAT_14c9943f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c96d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994400,1);
  return;
}



// FUNCTION 1429c96db FUN_1429c96db body=69 status=ok
// SIG undefined FUN_1429c96db(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c96db(void)

{
  _DAT_14c994408 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c971d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994410,1);
  return;
}



// FUNCTION 1429c9720 FUN_1429c9720 body=392 status=ok
// SIG undefined FUN_1429c9720(void)

void FUN_1429c9720(undefined8 *param_1,longlong *param_2,double *param_3)

{
  int *piVar1;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1 != (undefined8 *)0x0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)
     ) {
    if ((*(char *)((longlong)param_2 + 0x1c) != '\x06') &&
       (((ABS(*param_3 - DAT_14c846510) <= 9.999999747378752e-05 &&
         (ABS(param_3[1] - DAT_14c846518) <= 9.999999747378752e-05)) &&
        (ABS(param_3[2] - DAT_14c846520) <= 9.999999747378752e-05)))) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    if (((9.999999747378752e-05 < ABS(*param_3 - DAT_14c846510)) ||
        (9.999999747378752e-05 < ABS(param_3[1] - DAT_14c846518))) ||
       (9.999999747378752e-05 < ABS(param_3[2] - DAT_14c846520))) {
      local_38 = param_3[2];
      local_48 = *param_3;
      dStack_40 = param_3[1];
      (**(code **)(*param_2 + 0x40))(param_2,&local_50,&local_48);
    }
    else {
      (**(code **)(*param_2 + 0x38))(param_2,&local_50);
    }
    (**(code **)(*(longlong *)*param_1 + 0x10))
              ((longlong *)*param_1,*(undefined4 *)(param_1 + 1),&local_50);
    if (local_50 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_50 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_50 + 0xc) == 0)) {
        (**(code **)*local_50)(local_50,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429c98c0 FUN_1429c98c0 body=548 status=ok
// SIG undefined FUN_1429c98c0(void)

void FUN_1429c98c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar13 = (longlong *)*param_2;
    plVar1 = plVar13 + (int)param_2[1];
    do {
      lVar17 = *(longlong *)(*(longlong *)*plVar13 + 0xf8) +
               (longlong)(int)((longlong *)*plVar13)[1] * 0x18;
      lVar15 = *(longlong *)(lVar17 + 8);
      if (*(longlong *)(lVar17 + 8) == 0) {
        lVar15 = lVar17;
      }
      if ((longlong)*(int *)(lVar17 + 0x10) != 0) {
        lVar16 = 0;
        do {
          lVar12 = *(longlong *)(lVar15 + lVar16);
          if (lVar12 != 0) {
            uVar14 = (ulonglong)((*(uint *)(lVar12 + 8) & 3) == 0);
            iVar2 = *(int *)(lVar12 + 0x58 + uVar14 * 8);
            iVar3 = *(int *)(lVar12 + 0x5c + uVar14 * 8);
            iVar4 = *(int *)(lVar12 + 0x60 + uVar14 * 8);
            iVar5 = *(int *)(lVar12 + 100 + uVar14 * 8);
            if ((((iVar2 != 0) || (iVar3 != 0)) || (iVar4 != 0)) || (iVar5 != 0)) {
              lVar17 = *(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18;
              lVar15 = *(longlong *)(lVar17 + 8);
              if (*(longlong *)(lVar17 + 8) == 0) {
                lVar15 = lVar17;
              }
              iVar6 = *(int *)(lVar17 + 0x10);
              if ((longlong)iVar6 == 0) {
                return;
              }
              uVar14 = (ulonglong)((*(uint *)(lVar12 + 8) & 3) == 0);
              uVar7 = *(undefined4 *)(lVar12 + 0x48 + uVar14 * 8);
              uVar8 = *(undefined4 *)(lVar12 + 0x4c + uVar14 * 8);
              uVar9 = *(undefined4 *)(lVar12 + 0x50 + uVar14 * 8);
              uVar10 = *(undefined4 *)(lVar12 + 0x54 + uVar14 * 8);
              lVar17 = 0;
              do {
                lVar16 = *(longlong *)(lVar15 + lVar17);
                if ((*(uint *)(lVar16 + 8) & 3) == 0) {
                  lVar12 = *(longlong *)(lVar16 + 0x48);
                  *(undefined4 *)(lVar16 + 0x50) = uVar7;
                  *(undefined4 *)(lVar16 + 0x54) = uVar8;
                  *(undefined4 *)(lVar16 + 0x58) = uVar9;
                  *(undefined4 *)(lVar16 + 0x5c) = uVar10;
                  uVar11 = *(uint *)(lVar16 + 0xc);
                  *(uint *)(lVar16 + 0xc) = uVar11 | 1;
                  if ((lVar12 != 0 && uVar11 == 0) && (*(longlong *)(lVar12 + 8) != 0)) {
                    FUN_144821112(*(longlong *)(lVar12 + 8) + 0x70,lVar12,*(uint *)(lVar16 + 8) >> 3
                                 );
                  }
                }
                else {
                  *(undefined4 *)(lVar16 + 0x48) = uVar7;
                  *(undefined4 *)(lVar16 + 0x4c) = uVar8;
                  *(undefined4 *)(lVar16 + 0x50) = uVar9;
                  *(undefined4 *)(lVar16 + 0x54) = uVar10;
                }
                lVar16 = *(longlong *)(lVar15 + lVar17);
                if ((*(uint *)(lVar16 + 8) & 3) == 0) {
                  lVar12 = *(longlong *)(lVar16 + 0x48);
                  *(int *)(lVar16 + 0x60) = iVar2;
                  *(int *)(lVar16 + 100) = iVar3;
                  *(int *)(lVar16 + 0x68) = iVar4;
                  *(int *)(lVar16 + 0x6c) = iVar5;
                  uVar11 = *(uint *)(lVar16 + 0xc);
                  *(uint *)(lVar16 + 0xc) = uVar11 | 1;
                  if ((lVar12 != 0 && uVar11 == 0) && (*(longlong *)(lVar12 + 8) != 0)) {
                    FUN_144821112(*(longlong *)(lVar12 + 8) + 0x70,lVar12,*(uint *)(lVar16 + 8) >> 3
                                 );
                  }
                }
                else {
                  *(int *)(lVar16 + 0x58) = iVar2;
                  *(int *)(lVar16 + 0x5c) = iVar3;
                  *(int *)(lVar16 + 0x60) = iVar4;
                  *(int *)(lVar16 + 100) = iVar5;
                }
                lVar17 = lVar17 + 8;
              } while ((longlong)iVar6 * 8 != lVar17);
              return;
            }
          }
          lVar16 = lVar16 + 8;
        } while ((longlong)*(int *)(lVar17 + 0x10) * 8 != lVar16);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  return;
}



// FUNCTION 1429c9ae4 FUN_1429c9ae4 body=69 status=ok
// SIG undefined FUN_1429c9ae4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9ae4(void)

{
  _DAT_14c994418 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994420,1);
  return;
}



// FUNCTION 1429c9b29 FUN_1429c9b29 body=69 status=ok
// SIG undefined FUN_1429c9b29(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9b29(void)

{
  _DAT_14c994428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994430,1);
  return;
}



// FUNCTION 1429c9b6e FUN_1429c9b6e body=69 status=ok
// SIG undefined FUN_1429c9b6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9b6e(void)

{
  _DAT_14c994438 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994440,1);
  return;
}



// FUNCTION 1429c9bb3 FUN_1429c9bb3 body=69 status=ok
// SIG undefined FUN_1429c9bb3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9bb3(void)

{
  _DAT_14c994448 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994450,1);
  return;
}



// FUNCTION 1429c9bf8 FUN_1429c9bf8 body=69 status=ok
// SIG undefined FUN_1429c9bf8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9bf8(void)

{
  _DAT_14c994458 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9c3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994460,1);
  return;
}



// FUNCTION 1429c9c3d FUN_1429c9c3d body=69 status=ok
// SIG undefined FUN_1429c9c3d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9c3d(void)

{
  _DAT_14c994468 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9c7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994470,1);
  return;
}



// FUNCTION 1429c9c82 FUN_1429c9c82 body=69 status=ok
// SIG undefined FUN_1429c9c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9c82(void)

{
  _DAT_14c994478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994480,1);
  return;
}



// FUNCTION 1429c9cc7 FUN_1429c9cc7 body=69 status=ok
// SIG undefined FUN_1429c9cc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9cc7(void)

{
  _DAT_14c994488 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9d09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994490,1);
  return;
}



// FUNCTION 1429c9d0c FUN_1429c9d0c body=69 status=ok
// SIG undefined FUN_1429c9d0c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9d0c(void)

{
  _DAT_14c994498 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9d4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9944a0,1);
  return;
}



// FUNCTION 1429c9d51 FUN_1429c9d51 body=69 status=ok
// SIG undefined FUN_1429c9d51(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9d51(void)

{
  _DAT_14c9944a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9d93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9944b0,1);
  return;
}



// FUNCTION 1429c9d96 FUN_1429c9d96 body=69 status=ok
// SIG undefined FUN_1429c9d96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9d96(void)

{
  _DAT_14c9944b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9944c0,1);
  return;
}



// FUNCTION 1429c9ddb FUN_1429c9ddb body=69 status=ok
// SIG undefined FUN_1429c9ddb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9ddb(void)

{
  _DAT_14c9944c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9e1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9944d0,1);
  return;
}



// FUNCTION 1429c9e20 FUN_1429c9e20 body=69 status=ok
// SIG undefined FUN_1429c9e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9e20(void)

{
  _DAT_14c9944d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9e62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9944e0,1);
  return;
}



// FUNCTION 1429c9e65 FUN_1429c9e65 body=69 status=ok
// SIG undefined FUN_1429c9e65(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9e65(void)

{
  _DAT_14c9944e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9944f0,1);
  return;
}



// FUNCTION 1429c9eaa FUN_1429c9eaa body=69 status=ok
// SIG undefined FUN_1429c9eaa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9eaa(void)

{
  _DAT_14c9944f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994500,1);
  return;
}



// FUNCTION 1429c9eef FUN_1429c9eef body=69 status=ok
// SIG undefined FUN_1429c9eef(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9eef(void)

{
  _DAT_14c994508 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9f31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994510,1);
  return;
}



// FUNCTION 1429c9f34 FUN_1429c9f34 body=69 status=ok
// SIG undefined FUN_1429c9f34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9f34(void)

{
  _DAT_14c994518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994520,1);
  return;
}



// FUNCTION 1429c9f79 FUN_1429c9f79 body=69 status=ok
// SIG undefined FUN_1429c9f79(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9f79(void)

{
  _DAT_14c994528 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429c9fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994530,1);
  return;
}



// FUNCTION 1429c9fbe FUN_1429c9fbe body=69 status=ok
// SIG undefined FUN_1429c9fbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429c9fbe(void)

{
  _DAT_14c994538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ca000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994540,1);
  return;
}



// FUNCTION 1429ca003 FUN_1429ca003 body=69 status=ok
// SIG undefined FUN_1429ca003(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429ca003(void)

{
  _DAT_14c994548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429ca045. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994550,1);
  return;
}



// FUNCTION 1429ca048 FUN_1429ca048 body=2476 status=ok
// SIG undefined FUN_1429ca048(void)

void FUN_1429ca048(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  undefined4 uVar24;
  longlong lVar25;
  int iVar26;
  uint uVar27;
  longlong *plVar28;
  byte bVar29;
  undefined1 auStack_1d8 [32];
  ushort local_1b8;
  undefined1 local_1b0;
  undefined1 local_1a8;
  char local_199;
  longlong local_198;
  undefined8 *local_190;
  longlong *local_188;
  longlong *local_180;
  longlong local_178;
  longlong *local_170;
  uint local_168;
  uint local_164;
  ulonglong local_160;
  uint *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined1 local_13a [2];
  undefined8 *local_138;
  longlong *local_130;
  undefined4 *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  int aiStack_e0 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_188 = param_2;
  uVar7 = (**(code **)(*(longlong *)*param_1 + 0x18))();
  aiStack_e0[0x1a] = 0;
  aiStack_e0[0x1b] = 0;
  aiStack_e0[0x1c] = 0;
  aiStack_e0[0x1d] = 0;
  aiStack_e0[0x16] = 0;
  aiStack_e0[0x17] = 0;
  aiStack_e0[0x18] = 0;
  aiStack_e0[0x19] = 0;
  aiStack_e0[0x12] = 0;
  aiStack_e0[0x13] = 0;
  aiStack_e0[0x14] = 0;
  aiStack_e0[0x15] = 0;
  aiStack_e0[0xe] = 0;
  aiStack_e0[0xf] = 0;
  aiStack_e0[0x10] = 0;
  aiStack_e0[0x11] = 0;
  aiStack_e0[10] = 0;
  aiStack_e0[0xb] = 0;
  aiStack_e0[0xc] = 0;
  aiStack_e0[0xd] = 0;
  aiStack_e0[6] = 0;
  aiStack_e0[7] = 0;
  aiStack_e0[8] = 0;
  aiStack_e0[9] = 0;
  aiStack_e0[2] = 0;
  aiStack_e0[3] = 0;
  aiStack_e0[4] = 0;
  aiStack_e0[5] = 0;
  local_e8 = 0;
  aiStack_e0[0] = 0;
  aiStack_e0[1] = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_199 = *(char *)((longlong)param_1 + 0x22);
  local_190 = param_1;
  local_170 = param_3;
  if (param_3 != (longlong *)0x0 && local_199 == '\x01') {
    (**(code **)(*param_3 + 0x68))(param_3);
  }
  plVar12 = (longlong *)local_190[1];
  uVar27 = *(uint *)(plVar12 + 5);
  if (uVar27 == 0) {
    uVar17 = 1;
    uVar21 = 0;
    iVar26 = 0;
    uVar8 = 0;
  }
  else {
    puVar9 = (uint *)plVar12[4];
    if ((uint *)plVar12[4] == (uint *)0x0) {
      puVar9 = (uint *)(plVar12 + 2);
    }
    uVar8 = *puVar9;
    if (uVar8 == 0) {
      iVar26 = uVar27 + 0x1e;
      if (-1 < (int)(uVar27 - 1)) {
        iVar26 = uVar27 - 1;
      }
      uVar21 = 0;
      uVar17 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar17 = uVar21;
      }
      iVar26 = 0;
      do {
        if (uVar17 == uVar21) {
          bVar29 = 0;
          goto LAB_1429ca1a2;
        }
        iVar26 = iVar26 + 0x20;
        uVar8 = puVar9[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar21 = 0;
      iVar26 = 0;
    }
    uVar17 = (ulonglong)(-uVar8 & uVar8);
    uVar14 = uVar17 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar8 = (iVar26 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar27 <= (int)uVar8) {
      uVar8 = uVar27;
    }
  }
  bVar29 = 0;
  if (uVar8 != uVar27) {
    local_164 = uVar7 & 0xff;
    uVar7 = 0xffffffff;
    local_180 = plVar12;
    local_160 = (ulonglong)uVar27;
    local_158 = (uint *)(plVar12 + 2);
    bVar6 = 0;
    do {
      local_198 = CONCAT44(local_198._4_4_,uVar7);
      uVar1 = *(ushort *)(*plVar12 + (longlong)(int)uVar8 * 0x18);
      local_150 = *(undefined8 *)(*plVar12 + 8 + (longlong)(int)uVar8 * 0x18);
      uVar7 = (uint)((byte)uVar1 & 7);
      if ((local_164 >> uVar7 & 1) == 0) {
        uVar7 = 0;
      }
      plVar10 = (longlong *)(**(code **)(*local_188 + 0xc0))(local_188,uVar1);
      local_178 = CONCAT44(local_178._4_4_,iVar26);
      if (local_170 == (longlong *)0x0) {
        plVar28 = (longlong *)0x0;
      }
      else {
        plVar13 = (longlong *)(**(code **)(*local_170 + 0xc0))(local_170,uVar1);
        if (plVar13 == (longlong *)0x0) {
          plVar28 = (longlong *)0x0;
          plVar12 = local_180;
        }
        else {
          cVar5 = (**(code **)(*plVar13 + 0x20))(plVar13);
          plVar28 = (longlong *)0x0;
          plVar12 = local_180;
          if (cVar5 == '\0') {
            plVar28 = plVar13;
          }
        }
      }
      bVar29 = bVar6;
      if (plVar10 == (longlong *)0x0) {
LAB_1429ca90e:
        uVar7 = (uint)local_198;
      }
      else {
        if (local_199 == '\0') {
LAB_1429ca73e:
          cVar5 = (**(code **)(*plVar10 + 8))(plVar10);
          if (cVar5 == '\0') {
            (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined1 *)(local_190 + 4));
            cVar5 = (**(code **)(*plVar10 + 8))(plVar10);
            uVar7 = (uint)local_198;
            bVar29 = 1;
            if ((cVar5 != '\0') && (bVar29 = bVar6, plVar28 != (longlong *)0x0)) {
              (**(code **)(*plVar28 + 0x30))(plVar28,plVar10);
              bVar29 = (**(code **)(*plVar28 + 8))(plVar28);
              bVar29 = bVar6 | bVar29 ^ 1;
            }
            goto LAB_1429ca912;
          }
          if ((plVar28 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar28 + 8))(plVar28), cVar5 != '\0')) {
            uVar14 = (ulonglong)(uVar7 << 4);
            plVar12 = (longlong *)((longlong)&local_e8 + uVar14);
            iVar20 = *(int *)((longlong)aiStack_e0 + uVar14);
            iVar26 = (uVar1 >> 3) + 1;
            if (iVar20 < iVar26) {
              *(int *)((longlong)aiStack_e0 + uVar14) = iVar26;
              local_168 = uVar7;
              if ((uint)(*(int *)((longlong)aiStack_e0 + uVar14 + 4) - iVar20) <
                  (uint)(iVar26 - iVar20)) {
                FUN_14172b4fa(plVar12,iVar20);
              }
              FUN_1429d431b((longlong)iVar20 * 0x10 + *plVar12,iVar26 - iVar20);
              uVar7 = local_168;
            }
            lVar18 = *plVar12;
            lVar25 = (ulonglong)(uVar1 >> 3) * 0x10;
            *(undefined8 *)(lVar18 + lVar25) = local_150;
            *(undefined8 *)(lVar18 + 8 + lVar25) = 0;
            cVar5 = (**(code **)(*(longlong *)*local_190 + 8))((longlong *)*local_190,uVar7);
            uVar4 = uStack_f0;
            uVar14 = uStack_100;
            if (cVar5 == '\0') {
              iVar26 = (int)uStack_100;
              uVar7 = (int)uStack_100 + 1;
              uStack_100 = CONCAT44(uStack_100._4_4_,uVar7);
              lVar18 = local_108;
              if (uStack_100._4_4_ < uVar7) {
                FUN_140310156(&local_108,uVar14 & 0xffffffff);
                lVar18 = local_108;
              }
            }
            else {
              iVar26 = (int)uStack_f0;
              uVar7 = (int)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar7);
              lVar18 = local_f8;
              if (uStack_f0._4_4_ < uVar7) {
                FUN_140310156(&local_f8,uVar4 & 0xffffffff);
                lVar18 = local_f8;
              }
            }
            *(ushort *)(lVar18 + (longlong)iVar26 * 2) = uVar1;
            plVar12 = local_180;
            goto LAB_1429ca90e;
          }
        }
        else {
          cVar5 = (**(code **)(*plVar10 + 0x18))(plVar10);
          if ((cVar5 != '\0') || (DAT_14c75f288 != 1)) {
            (**(code **)(*plVar10 + 0x68))(plVar10);
            goto LAB_1429ca73e;
          }
          (**(code **)(*plVar10 + 8))(plVar10);
          if (plVar28 == (longlong *)0x0) goto LAB_1429ca90e;
          (**(code **)(*plVar28 + 0x30))(plVar28,plVar10);
          (**(code **)(*plVar28 + 8))(plVar28);
        }
        uVar7 = (uint)local_198;
        uVar24 = 0xffffffff;
        if (*(char *)(local_190 + 4) == '\0') {
          uVar24 = DAT_14c75f26c;
        }
        (**(code **)(*plVar28 + 0x38))(plVar28,plVar10,uVar24);
        cVar5 = (**(code **)(*plVar28 + 8))(plVar28);
        if (cVar5 == '\0') {
          bVar29 = 1;
        }
      }
LAB_1429ca912:
      uVar7 = uVar7 & ~(uint)uVar17;
      puVar9 = (uint *)plVar12[4];
      if ((uint *)plVar12[4] == (uint *)0x0) {
        puVar9 = local_158;
      }
      uVar27 = *(uint *)(plVar12 + 5);
      iVar20 = (int)uVar21;
      lVar18 = (longlong)iVar20;
      uVar8 = puVar9[lVar18] & uVar7;
      iVar26 = (int)local_178;
      if (uVar8 == 0) {
        iVar15 = uVar27 + 0x1e;
        if (-1 < (int)(uVar27 - 1)) {
          iVar15 = uVar27 - 1;
        }
        iVar15 = iVar15 >> 5;
        iVar26 = (int)local_178 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar20) {
          iVar16 = iVar20;
        }
        if (iVar20 < iVar15) {
          lVar25 = 0;
          do {
            uVar8 = puVar9[lVar18 + lVar25 + 1];
            if (uVar8 != 0) {
              uVar21 = (ulonglong)(iVar20 + (int)lVar25 + 1);
              uVar7 = 0xffffffff;
              goto LAB_1429ca993;
            }
            iVar26 = iVar26 + 0x20;
            lVar25 = lVar25 + 1;
          } while (iVar16 - lVar18 != lVar25);
          uVar7 = 0xffffffff;
          iVar20 = iVar16;
        }
        uVar21 = (ulonglong)(iVar20 + 1);
        plVar12 = local_180;
        uVar8 = uVar27;
      }
      else {
LAB_1429ca993:
        uVar17 = (ulonglong)(-uVar8 & uVar8);
        uVar14 = uVar17 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        uVar8 = (iVar26 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if ((int)uVar27 <= (int)uVar8) {
          uVar8 = uVar27;
        }
      }
      bVar6 = bVar29;
    } while (uVar8 != (uint)local_160);
  }
LAB_1429ca1a2:
  plVar12 = local_188;
  if (local_199 != '\0') {
    if ((longlong)(int)uStack_f0 != 0) {
      local_198 = local_f8;
      local_178 = (longlong)(int)uStack_f0 * 2;
      lVar18 = 0;
      do {
        uVar27 = (uint)*(ushort *)(local_198 + lVar18);
        uVar7 = uVar27 & 7;
        uVar1 = *(ushort *)(local_198 + lVar18) >> 3;
        lVar25 = *(longlong *)((longlong)&local_e8 + (ulonglong)(uVar7 << 4));
        lVar22 = (ulonglong)uVar1 * 0x10;
        local_128 = (undefined4 *)0x0;
        lVar19 = *(longlong *)(lVar25 + 8 + lVar22);
        puVar11 = (undefined4 *)(*(longlong *)(lVar25 + lVar22) + 0x18);
        if (lVar19 != 0) {
          puVar11 = (undefined4 *)(lVar19 + 8);
        }
        local_118 = *puVar11;
        uStack_120 = 1;
        FUN_14172b4fa(&local_128);
        puVar11 = (undefined4 *)(lVar25 + lVar22);
        uVar24 = puVar11[1];
        uVar2 = puVar11[2];
        uVar3 = puVar11[3];
        *local_128 = *puVar11;
        local_128[1] = uVar24;
        local_128[2] = uVar2;
        local_128[3] = uVar3;
        local_1a8 = 0;
        local_1b0 = 0;
        local_1b8 = CONCAT11(local_1b8._1_1_,*(undefined1 *)(local_190 + 4));
        (**(code **)(*(longlong *)*local_190 + 0x10))
                  ((longlong *)*local_190,&local_130,&local_128,uVar7);
        (**(code **)(*local_130 + 0x28))();
        plVar12 = local_188;
        if ((((local_170 != (longlong *)0x0) &&
             (plVar10 = (longlong *)(**(code **)(*local_170 + 0xc0))(local_170,uVar27),
             plVar12 = local_188, plVar10 != (longlong *)0x0)) &&
            (cVar5 = (**(code **)(*plVar10 + 0x20))(plVar10), cVar5 == '\0')) &&
           (cVar5 = (**(code **)(*local_130 + 8))(), cVar5 != '\0')) {
          (**(code **)(*plVar10 + 0x30))(plVar10,local_130);
          uVar24 = 0xffffffff;
          if (*(char *)(local_190 + 4) == '\0') {
            uVar24 = DAT_14c75f26c;
          }
          (**(code **)(*plVar10 + 0x38))(plVar10,local_130,uVar24);
          bVar6 = (**(code **)(*plVar10 + 8))(plVar10);
          bVar29 = bVar29 | bVar6 ^ 1;
        }
        bVar6 = (**(code **)(*local_130 + 8))();
        if (((*(byte *)(plVar12 + 2) >> uVar7 & 1) != 0) &&
           ((**(code **)(*plVar12 + 0xb8))(plVar12,&local_138,uVar27),
           local_138 != (undefined8 *)0x0)) {
          (**(code **)*local_138)(local_138,1);
        }
        local_1b8 = uVar1;
        (**(code **)(*plVar12 + 0xb0))(plVar12,local_13a,&local_130,uVar7);
        if (local_130 != (longlong *)0x0) {
          (**(code **)*local_130)(local_130,1);
        }
        if (local_128 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        bVar29 = bVar29 | bVar6 ^ 1;
        lVar18 = lVar18 + 2;
      } while (local_178 != lVar18);
    }
  }
  *(byte *)((longlong)plVar12 + 0x11) = ~bVar29 & 1;
  if ((bVar29 & 1) == 0) {
    lVar18 = (longlong)(int)uStack_100;
    if (lVar18 != 0) {
      lVar19 = 0;
      local_198 = local_108;
      lVar25 = local_108;
      do {
        uVar27 = (uint)*(ushort *)(lVar25 + lVar19);
        uVar7 = uVar27 & 7;
        uVar1 = *(ushort *)(lVar25 + lVar19) >> 3;
        if ((int)(uint)uVar1 < *(int *)((longlong)aiStack_e0 + (ulonglong)(uVar7 << 4))) {
          lVar25 = *(longlong *)((longlong)&local_e8 + (ulonglong)(uVar7 << 4));
          lVar23 = (ulonglong)uVar1 * 0x10;
          local_128 = (undefined4 *)0x0;
          lVar22 = *(longlong *)(lVar25 + 8 + lVar23);
          puVar11 = (undefined4 *)(*(longlong *)(lVar25 + lVar23) + 0x18);
          if (lVar22 != 0) {
            puVar11 = (undefined4 *)(lVar22 + 8);
          }
          local_118 = *puVar11;
          uStack_120 = 1;
          FUN_14172b4fa(&local_128);
          puVar11 = (undefined4 *)(lVar25 + lVar23);
          uVar24 = puVar11[1];
          uVar2 = puVar11[2];
          uVar3 = puVar11[3];
          *local_128 = *puVar11;
          local_128[1] = uVar24;
          local_128[2] = uVar2;
          local_128[3] = uVar3;
          local_1a8 = 0;
          local_1b0 = 0;
          local_1b8 = CONCAT11(local_1b8._1_1_,*(undefined1 *)(local_190 + 4));
          (**(code **)(*(longlong *)*local_190 + 0x10))
                    ((longlong *)*local_190,&local_130,&local_128,uVar7);
          if (((local_170 != (longlong *)0x0) &&
              (plVar12 = (longlong *)(**(code **)(*local_170 + 0xc0))(local_170,uVar27),
              plVar12 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar12 + 0x20))(plVar12), cVar5 == '\0')) {
            (**(code **)(*plVar12 + 0x98))(plVar12,local_130);
          }
          plVar12 = local_188;
          if (((*(byte *)(local_188 + 2) >> uVar7 & 1) != 0) &&
             ((**(code **)(*local_188 + 0xb8))(local_188,&local_148,uVar27),
             local_148 != (undefined8 *)0x0)) {
            (**(code **)*local_148)(local_148,1);
          }
          local_1b8 = uVar1;
          (**(code **)(*plVar12 + 0xb0))(plVar12,local_13a,&local_130,uVar7);
          if (local_130 != (longlong *)0x0) {
            (**(code **)*local_130)(local_130,1);
          }
          lVar25 = local_198;
          if (local_128 != (undefined4 *)0x0) {
            FUN_1400020a8();
            lVar25 = local_198;
          }
        }
        lVar19 = lVar19 + 2;
      } while (lVar18 * 2 != lVar19);
    }
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  lVar18 = 0x80;
  do {
    if (*(longlong *)((longlong)&local_f8 + lVar18) != 0) {
      FUN_1400020a8();
    }
    lVar18 = lVar18 + -0x10;
  } while (lVar18 != 0);
  if ((local_60 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429ca9f6 FUN_1429ca9f6 body=126 status=ok
// SIG undefined FUN_1429ca9f6(void)

void FUN_1429ca9f6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x428);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x420);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0x708);
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined4 *)(lVar2 + lVar4));
      lVar4 = lVar4 + 4;
    } while ((longlong)iVar1 * 4 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (-1 < *(int *)(param_1 + 0x42c)) {
    return;
  }
  FUN_1409caef4(param_1 + 0x420,0);
  return;
}



// FUNCTION 1429caab2 FUN_1429caab2 body=176 status=ok
// SIG undefined FUN_1429caab2(void)

void FUN_1429caab2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_1402a31f8();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_146c9c908();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x160);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x158);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_146e042b0();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1429cab8a FUN_1429cab8a body=575 status=ok
// SIG undefined FUN_1429cab8a(void)

void FUN_1429cab8a(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong *plVar2;
  undefined1 **ppuVar3;
  int iVar4;
  undefined1 **ppuVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_128 [32];
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 *local_d0;
  longlong *local_c8;
  undefined1 *local_c0;
  undefined8 ***local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  longlong **local_a0;
  longlong *local_98;
  int local_90;
  undefined1 *local_88;
  undefined8 ***local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x18) * 0x38;
    lVar8 = *(longlong *)(param_1 + 0x10) + 0x10;
    do {
      *(undefined4 *)(lVar8 + -8) = 0;
      if (*(int *)(lVar8 + -4) < 0) {
        FUN_146e0520a(lVar8 + -0x10,0);
      }
      if (*(int *)(lVar8 + 0xc) < 0) {
        *(undefined4 *)(lVar8 + 8) = 0;
        FUN_14018d42e(lVar8);
      }
      else {
        *(undefined4 *)(lVar8 + 8) = 0;
      }
      *(undefined8 *)(lVar8 + 0x10) = 0;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      *(undefined8 *)(lVar8 + 0x20) = 0;
      lVar8 = lVar8 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x150) = 0;
  local_e8 = param_5;
  local_e0 = param_6;
  local_78 = &local_108;
  iVar1 = (int)param_2[1];
  local_108 = param_1;
  local_100 = param_3;
  local_f8 = param_4;
  local_f0 = param_1;
  local_d8 = param_2;
  if (0 < iVar1) {
    lVar7 = 0;
    lVar8 = 0;
    iVar6 = 0;
    do {
      plVar2 = *(longlong **)(*param_2 + 8 + lVar7);
      if (plVar2 == (longlong *)0x0) {
        plVar2 = (longlong *)(*param_2 + lVar7);
        iVar4 = *(int *)(*plVar2 + 0x18);
        if (iVar4 != 0) {
          local_c0 = &LAB_146e05f82;
          local_d0 = &LAB_146e05efc;
          ppuVar3 = &local_d0;
          ppuVar5 = &local_c0;
          local_c8 = &local_f0;
          local_b8 = &local_a0;
          local_98 = plVar2;
          goto LAB_1429cad6b;
        }
      }
      else {
        iVar4 = (int)plVar2[1];
        if (iVar4 != 0) {
          local_88 = &LAB_146e05ea6;
          local_b0 = &LAB_146e05efc;
          ppuVar3 = &local_b0;
          ppuVar5 = &local_88;
          local_a8 = &local_f0;
          local_98 = plVar2;
          local_80 = &local_a0;
LAB_1429cad6b:
          local_a0 = &local_78;
          local_90 = iVar6;
          FUN_1402643e4(iVar4,ppuVar3,ppuVar5,0);
          iVar6 = iVar6 + iVar4;
          iVar1 = (int)param_2[1];
        }
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < iVar1);
  }
  if ((local_70 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429cadca FUN_1429cadca body=2901 status=ok
// SIG undefined FUN_1429cadca(void)

void FUN_1429cadca(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulonglong *puVar4;
  double *pdVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  byte bVar15;
  longlong *plVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  double dVar22;
  undefined1 auStack_2d8 [32];
  undefined4 local_2b8;
  longlong local_2b0;
  longlong *local_2a8;
  int local_29c;
  longlong *local_298;
  longlong local_290;
  longlong local_288;
  ulonglong local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined8 local_268;
  uint local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  longlong local_228;
  longlong *plStack_220;
  undefined8 uStack_218;
  int iStack_210;
  undefined4 uStack_20c;
  int local_208;
  int local_204;
  int local_200;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [9];
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 *local_138;
  double *local_130;
  double local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [3];
  longlong *plStack_e0;
  longlong lStack_d8;
  ulonglong local_d0;
  int iStack_c8;
  int iStack_c4;
  undefined8 local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  lVar7 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_2b0 = param_1;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_14479f570(lVar7,0);
  }
  local_2a8 = (longlong *)(local_2b0 + 0xa8);
  *(undefined4 *)(local_2b0 + 0xb0) = 0;
  if (*(int *)(local_2b0 + 0xb4) < 0) {
    FUN_146cab798(local_2a8,0);
  }
  *(undefined1 *)(local_2b0 + 0xc0) = 1;
  if (*(int *)(param_2 + 0x10) != 0) {
    local_f8[0] = 0;
    local_f8[1] = 0;
    local_108 = 0;
    uStack_100 = 0;
    FUN_146e05fce(local_f8,*(int *)(param_2 + 0x10),1);
    iVar10 = *(int *)(param_2 + 0x10);
    iVar8 = (int)uStack_100;
    lVar13 = (longlong)(int)uStack_100;
    if ((int)uStack_100 < iVar10) {
      uStack_100 = CONCAT44(uStack_100._4_4_,iVar10);
      uVar20 = iVar10 - iVar8;
      if ((uint)(uStack_100._4_4_ - iVar8) < uVar20) {
        FUN_1401c3474(&local_108);
      }
      memset((void *)(lVar13 + local_108),0,(longlong)(int)uVar20);
    }
    else {
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if (iVar10 < (int)uStack_100) {
        uStack_100 = CONCAT44(uStack_100._4_4_,iVar10);
        FUN_1403ed828();
      }
    }
    local_120 = *(undefined8 *)(local_2b0 + 0xb8);
    local_138 = &local_120;
    local_118 = 0;
    local_110 = 0;
    local_130 = &local_128;
    local_128 = 0.0;
    local_150 = &local_108;
    local_140 = local_2a8;
    local_1a8[3] = 1.79769313486232e+308;
    local_1a8[4] = 1.79769313486232e+308;
    local_1a8[5] = 1.79769313486232e+308;
    local_1a8[6] = -1.79769313486232e+308;
    local_1a8[7] = -1.79769313486232e+308;
    local_1a8[8] = -1.79769313486232e+308;
    local_160 = param_2;
    local_158 = local_f8;
    local_148 = lVar7;
    dVar22 = (double)FUN_1429cb922(&local_160,local_1a8 + 3,1);
    if (DAT_14c992790 != 0) {
      plStack_e0 = (longlong *)0x0;
      lStack_d8 = 0;
      local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
      iStack_c8 = 0;
      local_f8[2] = param_2;
      FUN_14008b454(local_f8 + 2);
      if (lStack_d8 != 0) {
        lVar21 = 0;
        bVar11 = false;
        lVar13 = lStack_d8;
        lVar12 = local_2b0;
        do {
          if (*(char *)(local_108 + lVar21) == '\x01') {
            lVar17 = lVar21 * 0x30;
            puVar1 = (undefined8 *)(local_f8[0] + lVar17);
            local_1a8[0] = *(double *)(local_f8[0] + lVar17) / dVar22;
            local_1a8[1] = *(double *)(local_f8[0] + 8 + lVar17) / dVar22;
            local_1a8[2] = *(double *)(local_f8[0] + 0x10 + lVar17) / dVar22;
            lVar17 = 0;
            do {
              if (10000000.0 < ABS(local_1a8[lVar17])) {
                *(undefined1 *)(local_108 + lVar21) = 0;
                lVar17 = *(longlong *)(lVar13 + 0x58);
                lVar9 = (longlong)(int)local_d0 * 0x38;
                local_1b8 = *(undefined8 *)(lVar17 + lVar9);
                uStack_1b0 = ((undefined8 *)(lVar17 + lVar9))[1];
                iVar10 = *(int *)(lVar17 + 0x10 + lVar9);
                local_208 = *(int *)(lVar17 + 0x34 + lVar9);
                plVar14 = (longlong *)(lVar17 + 0x14 + lVar9);
                local_228 = *plVar14;
                plStack_220 = (longlong *)plVar14[1];
                plVar14 = (longlong *)(lVar17 + 0x24 + lVar9);
                uStack_218 = *plVar14;
                iStack_210 = (int)plVar14[1];
                uStack_20c = *(undefined4 *)((longlong)plVar14 + 0xc);
                iVar8 = *(int *)(lVar12 + 0x18);
                local_1c8 = puVar1[2];
                local_1d8 = *puVar1;
                uStack_1d0 = puVar1[1];
                local_1e8 = puVar1[5];
                local_1f8 = *(uint *)(puVar1 + 3);
                uStack_1f4 = *(uint *)((longlong)puVar1 + 0x1c);
                uStack_1f0 = *(uint *)(puVar1 + 4);
                uStack_1ec = *(uint *)((longlong)puVar1 + 0x24);
                *(uint *)(lVar12 + 0x18) = iVar8 + 1U;
                if (*(uint *)(lVar12 + 0x1c) < iVar8 + 1U) {
                  FUN_14479f6b8(lVar7,iVar8);
                  lVar12 = local_2b0;
                }
                lVar17 = *(longlong *)(lVar12 + 0x10);
                lVar9 = (longlong)iVar8 * 0x68;
                *(undefined8 *)(lVar17 + lVar9) = local_1b8;
                ((undefined8 *)(lVar17 + lVar9))[1] = uStack_1b0;
                *(int *)(lVar17 + 0x10 + lVar9) = iVar10;
                *(int *)(lVar17 + 0x34 + lVar9) = local_208;
                puVar3 = (undefined4 *)(lVar17 + 0x24 + lVar9);
                *puVar3 = (undefined4)uStack_218;
                puVar3[1] = uStack_218._4_4_;
                puVar3[2] = iStack_210;
                puVar3[3] = uStack_20c;
                plVar14 = (longlong *)(lVar17 + 0x14 + lVar9);
                *plVar14 = local_228;
                plVar14[1] = (longlong)plStack_220;
                puVar1 = (undefined8 *)(lVar17 + 0x38 + lVar9);
                *puVar1 = local_1d8;
                puVar1[1] = uStack_1d0;
                *(undefined8 *)(lVar17 + 0x48 + lVar9) = local_1c8;
                puVar2 = (uint *)(lVar17 + 0x50 + lVar9);
                *puVar2 = local_1f8;
                puVar2[1] = uStack_1f4;
                puVar2[2] = uStack_1f0;
                puVar2[3] = uStack_1ec;
                *(undefined8 *)(lVar17 + 0x60 + lVar9) = local_1e8;
                if (*(int *)(lVar12 + 0xb0) <= iVar10) {
                  FUN_146cab80a(local_2a8,(iVar10 - *(int *)(lVar12 + 0xb0)) + 1);
                  lVar12 = local_2b0;
                }
                lVar9 = (longlong)iVar10 * 0x24;
                *(undefined1 *)(*local_2a8 + 0x20 + lVar9) = 1;
                lVar17 = *local_2a8;
                *(int *)(lVar17 + lVar9) = iVar8;
                *(undefined4 *)(lVar17 + 4 + lVar9) = 0xffffffff;
                puVar1 = (undefined8 *)(lVar17 + 8 + lVar9);
                *puVar1 = 0;
                puVar1[1] = 0;
                *(undefined8 *)(lVar17 + 0x18 + lVar9) = 0;
                bVar11 = true;
                break;
              }
              lVar17 = lVar17 + 1;
            } while (lVar17 != 3);
          }
          if (plStack_e0 == (longlong *)0x0) {
            local_d0._0_4_ = (int)local_d0 + 1;
            if (iStack_c4 <= (int)local_d0) {
LAB_1429cb2a4:
              iStack_c8 = iStack_c8 + 1;
              FUN_14008b454(local_f8 + 2);
              lVar13 = lStack_d8;
              lVar12 = local_2b0;
            }
          }
          else {
            lVar13 = (longlong)(int)local_c0;
            iVar10 = (int)local_c0 + 1;
            local_c0 = CONCAT44(local_c0._4_4_,iVar10);
            if ((int)plStack_e0[1] <= iVar10) goto LAB_1429cb2a4;
            plVar14 = *(longlong **)(*plStack_e0 + 8 + lVar13 * 8);
            lVar13 = *plVar14;
            lStack_d8 = lVar13;
            local_d0 = CONCAT44(local_d0._4_4_,(int)plVar14[1]);
          }
          lVar21 = lVar21 + 1;
        } while (lVar13 != 0);
        if (bVar11) {
          dVar22 = (double)FUN_1429cb922(&local_160,local_1a8 + 3,0);
        }
      }
    }
    iVar10 = param_3;
    iVar8 = param_3;
    iVar6 = param_3;
    if (0.0 < dVar22) {
      iVar10 = (int)((local_1a8[6] - local_1a8[3]) / dVar22);
      iVar8 = (int)((local_1a8[7] - local_1a8[4]) / dVar22);
      iVar6 = (int)((local_1a8[8] - local_1a8[5]) / dVar22);
    }
    local_1d8 = CONCAT44(iVar8 + 1,iVar10 + 1);
    uStack_1d0 = CONCAT44(uStack_1d0._4_4_,iVar6 + 1);
    lVar7 = 0;
    do {
      iVar10 = *(int *)((longlong)&local_1d8 + lVar7 * 4);
      iVar8 = iVar10;
      if (param_3 <= iVar10) {
        iVar8 = param_3;
      }
      if (param_3 < iVar10 || iVar8 < 0) {
        if (iVar8 < 0) {
          iVar8 = param_3;
        }
        *(int *)((longlong)&local_1d8 + lVar7 * 4) = iVar8;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != 3);
    local_2b8 = 0;
    FUN_146cb3ec4(local_f8 + 2,local_1a8 + 3,local_1a8 + 6,&local_1d8);
    lVar7 = local_2b0;
    local_298 = (longlong *)(local_2b0 + 0x20);
    plVar14 = local_f8 + 2;
    plVar16 = local_298;
    for (lVar13 = 0xb; lVar13 != 0; lVar13 = lVar13 + -1) {
      *plVar16 = *plVar14;
      plVar14 = plVar14 + 1;
      plVar16 = plVar16 + 1;
    }
    lStack_d8 = 0;
    local_d0 = 0;
    local_f8[2] = *(longlong *)(local_2b0 + 0x50);
    plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,*(int *)(local_2b0 + 0x58));
    bVar15 = 1;
    FUN_146cb0608(&lStack_d8,
                  *(int *)(local_2b0 + 0x54) * *(int *)(local_2b0 + 0x50) *
                  *(int *)(local_2b0 + 0x58),1);
    *(undefined4 *)(lVar7 + 0x80) = plStack_e0._0_4_;
    *(longlong *)(lVar7 + 0x78) = local_f8[2];
    FUN_146cab152(lVar7 + 0x88,&lStack_d8);
    FUN_146ca597f(lStack_d8,local_d0 & 0xffffffff);
    if (lStack_d8 != 0) {
      FUN_1400020a8();
    }
    plStack_220 = (longlong *)0x0;
    uStack_218 = 0;
    iStack_210 = -1;
    local_208 = 0;
    local_228 = param_2;
    FUN_14008b454(&local_228);
    lVar7 = local_2b0;
    if (uStack_218 != 0) {
      dVar22 = 0.0;
      lVar12 = 0;
      lVar13 = uStack_218;
      do {
        lVar21 = local_f8[0];
        plVar14 = local_298;
        if (*(char *)(local_108 + lVar12) == '\x01') {
          plVar16 = (longlong *)(local_f8[0] + lVar12 * 0x30);
          local_128 = local_128 + 1.0;
          local_288 = lVar12;
          FUN_146c9c584(local_298,&local_1f8,plVar16);
          lVar21 = lVar21 + lVar12 * 0x30;
          FUN_146c9c584(plVar14,&local_1b8,(ulonglong *)(lVar21 + 0x18));
          lVar7 = *(longlong *)(lVar13 + 0x58);
          lVar12 = (longlong)iStack_210 * 0x38;
          local_1a8[0] = *(double *)(lVar7 + lVar12);
          local_1a8[1] = ((double *)(lVar7 + lVar12))[1];
          local_29c = *(int *)(lVar7 + 0x10 + lVar12);
          puVar1 = (undefined8 *)(lVar7 + 0x14 + lVar12);
          local_258 = *puVar1;
          uStack_250 = puVar1[1];
          puVar3 = (undefined4 *)(lVar7 + 0x24 + lVar12);
          local_248 = *puVar3;
          uStack_244 = puVar3[1];
          uStack_240 = puVar3[2];
          uStack_23c = puVar3[3];
          local_238 = *(undefined4 *)(lVar7 + 0x34 + lVar12);
          local_f8[2] = CONCAT44(uStack_1f4,local_1f8);
          plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,uStack_1f0);
          local_260 = (uint)uStack_1b0;
          local_268 = local_1b8;
          local_290 = lVar13;
          if (*(int *)(local_2b0 + 0xb0) <= local_29c) {
            FUN_146cab80a(local_2a8,(local_29c - *(int *)(local_2b0 + 0xb0)) + 1);
          }
          lVar13 = (longlong)local_29c * 0x24;
          *(undefined1 *)(*local_2a8 + 0x20 + lVar13) = 1;
          lVar7 = *local_2a8;
          *(undefined8 *)(lVar7 + lVar13) = 0xffffffffffffffff;
          *(undefined4 *)(lVar7 + 0x10 + lVar13) = plStack_e0._0_4_;
          *(longlong *)(lVar7 + 8 + lVar13) = local_f8[2];
          *(uint *)(lVar7 + 0x1c + lVar13) = local_260;
          *(undefined8 *)(lVar7 + 0x14 + lVar13) = local_268;
          lVar13 = local_290;
          lVar12 = local_288;
          lVar7 = local_2b0;
          if ((int)local_1f8 <= (int)local_1b8) {
            iVar10 = (int)local_1b8;
            iVar8 = local_1b8._4_4_;
            uVar20 = local_1f8;
            iVar6 = local_29c;
            do {
              uVar19 = (ulonglong)uVar20;
              uVar18 = uVar20;
              if ((int)uStack_1f4 <= iVar8) {
                uVar20 = uStack_1f4;
                iVar10 = (uint)uStack_1b0;
                local_280 = uVar19;
                do {
                  lVar13 = (longlong)(int)uStack_1f0;
                  if ((int)uStack_1f0 <= iVar10) {
                    iVar10 = uStack_1f0 - 1;
                    do {
                      lVar12 = *(longlong *)(lVar7 + 0x88);
                      lVar17 = ((longlong)(int)(*(int *)(lVar7 + 0x7c) * (int)uVar19 + uVar20) *
                                (longlong)*(int *)(lVar7 + 0x80) + lVar13) * 0x10;
                      lStack_d8 = plVar16[2];
                      local_f8[2] = *plVar16;
                      plStack_e0 = (longlong *)plVar16[1];
                      local_c0 = *(undefined8 *)(lVar21 + 0x28);
                      local_d0 = *(ulonglong *)(lVar21 + 0x18);
                      iStack_c8 = *(int *)(lVar21 + 0x20);
                      iStack_c4 = *(int *)(lVar21 + 0x24);
                      local_260 = uStack_1f0;
                      local_268 = CONCAT44(uStack_1f4,local_1f8);
                      local_270 = (uint)uStack_1b0;
                      local_278 = local_1b8;
                      iVar8 = *(int *)(lVar12 + 8 + lVar17);
                      *(uint *)(lVar12 + 8 + lVar17) = iVar8 + 1U;
                      if (*(uint *)(lVar12 + 0xc + lVar17) < iVar8 + 1U) {
                        FUN_146cb08ea((longlong *)(lVar12 + lVar17),iVar8);
                        lVar7 = local_2b0;
                        uVar19 = local_280;
                        iVar6 = local_29c;
                      }
                      lVar12 = *(longlong *)(lVar12 + lVar17);
                      lVar17 = (longlong)iVar8 * 0x80;
                      *(longlong *)(lVar12 + 0x10 + lVar17) = lStack_d8;
                      *(longlong *)(lVar12 + lVar17) = local_f8[2];
                      ((longlong *)(lVar12 + lVar17))[1] = (longlong)plStack_e0;
                      *(undefined8 *)(lVar12 + 0x28 + lVar17) = local_c0;
                      puVar4 = (ulonglong *)(lVar12 + 0x18 + lVar17);
                      *puVar4 = local_d0;
                      puVar4[1] = CONCAT44(iStack_c4,iStack_c8);
                      pdVar5 = (double *)(lVar12 + 0x30 + lVar17);
                      *pdVar5 = local_1a8[0];
                      pdVar5[1] = local_1a8[1];
                      *(int *)(lVar12 + 0x40 + lVar17) = iVar6;
                      *(undefined4 *)(lVar12 + 100 + lVar17) = local_238;
                      puVar1 = (undefined8 *)(lVar12 + 0x54 + lVar17);
                      *puVar1 = CONCAT44(uStack_244,local_248);
                      puVar1[1] = CONCAT44(uStack_23c,uStack_240);
                      puVar3 = (undefined4 *)(lVar12 + 0x44 + lVar17);
                      *puVar3 = (undefined4)local_258;
                      puVar3[1] = local_258._4_4_;
                      puVar3[2] = (undefined4)uStack_250;
                      puVar3[3] = uStack_250._4_4_;
                      *(uint *)(lVar12 + 0x70 + lVar17) = local_260;
                      *(undefined8 *)(lVar12 + 0x68 + lVar17) = local_268;
                      *(undefined4 *)(lVar12 + 0x7c + lVar17) = local_270;
                      *(undefined8 *)(lVar12 + 0x74 + lVar17) = local_278;
                      dVar22 = dVar22 + 1.0;
                      iVar10 = iVar10 + 1;
                      lVar13 = lVar13 + 1;
                    } while (iVar10 < (int)(uint)uStack_1b0);
                    iVar8 = local_1b8._4_4_;
                    iVar10 = (uint)uStack_1b0;
                  }
                  uVar18 = (uint)uVar19;
                  bVar11 = (int)uVar20 < iVar8;
                  uVar20 = uVar20 + 1;
                } while (bVar11);
                iVar10 = (int)local_1b8;
              }
              uVar20 = uVar18 + 1;
              lVar13 = local_290;
              lVar12 = local_288;
            } while ((int)uVar18 < iVar10);
          }
        }
        if (plStack_220 == (longlong *)0x0) {
          iStack_210 = iStack_210 + 1;
          if (local_204 <= iStack_210) {
LAB_1429cb870:
            local_208 = local_208 + 1;
            FUN_14008b454(&local_228);
            lVar13 = uStack_218;
            lVar7 = local_2b0;
          }
        }
        else {
          lVar13 = (longlong)local_200;
          local_200 = local_200 + 1;
          if ((int)plStack_220[1] <= local_200) goto LAB_1429cb870;
          plVar14 = *(longlong **)(*plStack_220 + 8 + lVar13 * 8);
          iStack_210 = (int)plVar14[1];
          lVar13 = *plVar14;
          uStack_218 = lVar13;
        }
        lVar12 = lVar12 + 1;
      } while (lVar13 != 0);
      bVar15 = -(dVar22 == 0.0) & 1;
    }
    *(byte *)(lVar7 + 0xc0) = bVar15;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429cb922 FUN_1429cb922 body=1261 status=ok
// SIG undefined FUN_1429cb922(void)

ulonglong FUN_1429cb922(undefined8 *param_1,double *param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  double dVar20;
  double dVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 auStack_198 [44];
  int local_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  longlong *local_118;
  longlong lStack_110;
  int local_108;
  int local_100;
  int local_fc;
  int local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *param_2 = 1.79769313486232e+308;
  param_2[1] = 1.79769313486232e+308;
  param_2[2] = 1.79769313486232e+308;
  param_2[3] = -1.79769313486232e+308;
  param_2[4] = -1.79769313486232e+308;
  param_2[5] = -1.79769313486232e+308;
  *(undefined8 *)param_1[6] = 0;
  local_120 = *param_1;
  local_118 = (longlong *)0x0;
  lStack_110 = 0;
  local_108 = -1;
  local_100 = 0;
  FUN_14008b454(&local_120);
  dVar8 = 0.0;
  dVar3 = 0.0;
  if (lStack_110 != 0) {
    lVar13 = 0;
    lVar15 = 0;
    lVar11 = lStack_110;
    do {
      uVar19 = 0xffefffff;
      uVar18 = 0xffffffff;
      uVar17 = 0x7fefffff;
      uVar16 = 0xffffffff;
      lVar6 = *(longlong *)param_1[1];
      if (param_3 == '\0') {
        lVar10 = *(longlong *)param_1[2];
        if (*(char *)(lVar10 + lVar15) == '\x01') {
LAB_1429cba77:
          *(undefined1 *)(lVar10 + lVar15) = 1;
          dVar3 = param_2[2];
          uVar16 = SUB84(dVar3,0);
          uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar21 = *(double *)(lVar6 + 0x10 + lVar13);
          if (dVar21 <= dVar3) {
            uVar16 = SUB84(dVar21,0);
            uVar17 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          dVar3 = *param_2;
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar21 = *(double *)(lVar6 + 8 + lVar13);
          dVar20 = param_2[1];
          if (dVar21 <= param_2[1]) {
            dVar20 = dVar21;
          }
          dVar21 = *(double *)(lVar6 + lVar13);
          if (dVar21 <= dVar3) {
            uVar18 = SUB84(dVar21,0);
            uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          *param_2 = (double)CONCAT44(uVar19,uVar18);
          param_2[1] = dVar20;
          param_2[2] = (double)CONCAT44(uVar17,uVar16);
          dVar3 = param_2[5];
          uVar16 = SUB84(dVar3,0);
          uVar17 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar21 = *(double *)(lVar6 + 0x28 + lVar13);
          if (dVar3 <= dVar21) {
            uVar16 = SUB84(dVar21,0);
            uVar17 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          dVar3 = param_2[4];
          uVar18 = SUB84(dVar3,0);
          uVar19 = (undefined4)((ulonglong)dVar3 >> 0x20);
          dVar21 = *(double *)(lVar6 + 0x20 + lVar13);
          if (dVar3 <= dVar21) {
            uVar18 = SUB84(dVar21,0);
            uVar19 = (undefined4)((ulonglong)dVar21 >> 0x20);
          }
          dVar3 = *(double *)(lVar6 + 0x18 + lVar13);
          dVar21 = param_2[3];
          if (param_2[3] <= dVar3) {
            dVar21 = dVar3;
          }
          param_2[3] = dVar21;
          param_2[4] = (double)CONCAT44(uVar19,uVar18);
          param_2[5] = (double)CONCAT44(uVar17,uVar16);
          dVar8 = dVar8 + ((*(double *)(lVar6 + 0x18 + lVar13) - *(double *)(lVar6 + lVar13)) +
                           (*(double *)(lVar6 + 0x20 + lVar13) - *(double *)(lVar6 + 8 + lVar13)) +
                          (*(double *)(lVar6 + 0x28 + lVar13) - *(double *)(lVar6 + 0x10 + lVar13)))
                          * 0.3333333333333333;
          *(double *)param_1[6] = *(double *)param_1[6] + 1.0;
        }
      }
      else {
        cVar9 = FUN_146e060fa(param_1[5],&lStack_110,lVar6 + lVar13);
        lVar10 = *(longlong *)param_1[2];
        if (cVar9 != '\0') goto LAB_1429cba77;
        *(undefined1 *)(lVar10 + lVar15) = 0;
        lVar10 = *(longlong *)(lVar11 + 0x58);
        lVar12 = (longlong)local_108 * 0x38;
        local_138 = *(undefined8 *)(lVar10 + lVar12);
        uStack_130 = ((undefined8 *)(lVar10 + lVar12))[1];
        iVar14 = *(int *)(lVar10 + 0x10 + lVar12);
        local_148 = *(undefined4 *)(lVar10 + 0x34 + lVar12);
        puVar1 = (undefined4 *)(lVar10 + 0x14 + lVar12);
        local_168 = *puVar1;
        uStack_164 = puVar1[1];
        uStack_160 = puVar1[2];
        uStack_15c = puVar1[3];
        puVar1 = (undefined4 *)(lVar10 + 0x24 + lVar12);
        local_158 = *puVar1;
        uStack_154 = puVar1[1];
        uStack_150 = puVar1[2];
        uStack_14c = puVar1[3];
        uVar22 = uVar16;
        uVar23 = uVar17;
        uVar24 = uVar16;
        uVar25 = uVar17;
        uVar26 = uVar18;
        uVar27 = uVar19;
        uVar28 = uVar18;
        uVar29 = uVar19;
        if (*(char *)(*(longlong *)(lVar11 + 0x28) + (longlong)local_108) == '\x01') {
          uVar18 = (undefined4)*(undefined8 *)(lVar6 + lVar13);
          uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + lVar13) >> 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 8 + lVar13);
          uVar26 = (undefined4)uVar4;
          uVar27 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x10 + lVar13);
          uVar28 = (undefined4)uVar4;
          uVar29 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x18 + lVar13);
          uVar22 = (undefined4)uVar4;
          uVar23 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x20 + lVar13);
          uVar16 = (undefined4)uVar4;
          uVar17 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar4 = *(undefined8 *)(lVar6 + 0x28 + lVar13);
          uVar24 = (undefined4)uVar4;
          uVar25 = (undefined4)((ulonglong)uVar4 >> 0x20);
        }
        plVar7 = (longlong *)param_1[3];
        iVar5 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar5 + 1U) {
          local_16c = iVar14;
          FUN_14479f6b8(plVar7,iVar5);
          iVar14 = local_16c;
        }
        lVar6 = *plVar7;
        lVar10 = (longlong)iVar5 * 0x68;
        *(undefined8 *)(lVar6 + lVar10) = local_138;
        ((undefined8 *)(lVar6 + lVar10))[1] = uStack_130;
        *(int *)(lVar6 + 0x10 + lVar10) = iVar14;
        puVar1 = (undefined4 *)(lVar6 + 0x14 + lVar10);
        *puVar1 = local_168;
        puVar1[1] = uStack_164;
        puVar1[2] = uStack_160;
        puVar1[3] = uStack_15c;
        puVar1 = (undefined4 *)(lVar6 + 0x24 + lVar10);
        *puVar1 = local_158;
        puVar1[1] = uStack_154;
        puVar1[2] = uStack_150;
        puVar1[3] = uStack_14c;
        *(undefined4 *)(lVar6 + 0x34 + lVar10) = local_148;
        *(ulonglong *)(lVar6 + 0x38 + lVar10) = CONCAT44(uVar19,uVar18);
        *(ulonglong *)(lVar6 + 0x40 + lVar10) = CONCAT44(uVar27,uVar26);
        *(ulonglong *)(lVar6 + 0x48 + lVar10) = CONCAT44(uVar29,uVar28);
        *(ulonglong *)(lVar6 + 0x50 + lVar10) = CONCAT44(uVar23,uVar22);
        *(ulonglong *)(lVar6 + 0x58 + lVar10) = CONCAT44(uVar17,uVar16);
        *(ulonglong *)(lVar6 + 0x60 + lVar10) = CONCAT44(uVar25,uVar24);
        plVar7 = (longlong *)param_1[4];
        if ((int)plVar7[1] <= iVar14) {
          local_16c = iVar14;
          FUN_146cab80a(plVar7,(iVar14 - (int)plVar7[1]) + 1);
          iVar14 = local_16c;
        }
        lVar10 = (longlong)iVar14 * 0x24;
        *(undefined1 *)(*plVar7 + 0x20 + lVar10) = 1;
        lVar6 = *plVar7;
        *(int *)(lVar6 + lVar10) = iVar5;
        *(undefined4 *)(lVar6 + 4 + lVar10) = 0xffffffff;
        puVar2 = (undefined8 *)(lVar6 + 8 + lVar10);
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined8 *)(lVar6 + 0x18 + lVar10) = 0;
      }
      if (local_118 == (longlong *)0x0) {
        local_108 = local_108 + 1;
        if (local_fc <= local_108) {
LAB_1429cbd51:
          local_100 = local_100 + 1;
          FUN_14008b454(&local_120);
          lVar11 = lStack_110;
        }
      }
      else {
        lVar11 = (longlong)local_f8;
        local_f8 = local_f8 + 1;
        if ((int)local_118[1] <= local_f8) goto LAB_1429cbd51;
        plVar7 = *(longlong **)(*local_118 + 8 + lVar11 * 8);
        local_108 = (int)plVar7[1];
        lVar11 = *plVar7;
        lStack_110 = lVar11;
      }
      lVar13 = lVar13 + 0x30;
      lVar15 = lVar15 + 1;
      dVar3 = dVar8;
    } while (lVar11 != 0);
  }
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return -(ulonglong)(0.0 < *(double *)param_1[6]) & (ulonglong)(dVar3 / *(double *)param_1[6]);
}



// FUNCTION 1429cbe10 FUN_1429cbe10 body=149 status=ok
// SIG undefined FUN_1429cbe10(void)

void FUN_1429cbe10(longlong param_1,char param_2)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    if (*(int *)(param_1 + 0x160) != 0) {
      *(undefined4 *)(param_1 + 0x144) = 0;
      QueryPerformanceCounter(&local_20);
      *(double *)(param_1 + 0x148) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
      FUN_14479dcac(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429cbec2 FUN_1429cbec2 body=228 status=ok
// SIG undefined FUN_1429cbec2(void)

ulonglong FUN_1429cbec2(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar4 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (param_2 != -1) {
    if (DAT_14c75efd0 == '\x01') {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x154);
      *(int *)(lVar2 + 0x154) = iVar1 + 1;
      if (iVar1 < DAT_14c75efdc) {
        QueryPerformanceCounter(&local_20);
        if (1e-08 < ABS(*(double *)(lVar2 + 0x148))) {
          if ((double)DAT_14c75efd8 <
              ((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(lVar2 + 0x148))
          {
            uVar3 = 0;
          }
        }
      }
      else {
        *(undefined4 *)(lVar2 + 0x154) = 0;
      }
    }
    else {
      uVar3 = CONCAT71(uVar4,param_3 < param_2 || param_2 < 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429cbfa8 FUN_1429cbfa8 body=674 status=ok
// SIG undefined FUN_1429cbfa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429cbfa8(longlong param_1,int param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = (longlong)param_2 * 0x70;
  lVar7 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar9);
  if (*(uint *)(*(longlong *)(param_1 + 0x20) + lVar7 * 0x48 + 0x38) < 2) {
    local_78 = param_3[6];
    local_a8 = *param_3;
    uStack_a0 = param_3[1];
    local_98 = param_3[2];
    uStack_90 = param_3[3];
    local_88 = *(undefined4 *)(param_3 + 4);
    uStack_84 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_80 = *(undefined4 *)(param_3 + 5);
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0x2c);
    FUN_1429cc24c();
    lVar7 = *(longlong *)(param_1 + 0x10);
    iVar3 = *(int *)(lVar7 + 0x68 + lVar9);
    if ((longlong)iVar3 == -1) {
      *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
    }
    else {
      lVar9 = (longlong)iVar3 * 0x70;
      iVar4 = *(int *)(lVar7 + 0x68 + lVar9);
      iVar5 = *(int *)(lVar7 + lVar9 + 0x60 +
                      (ulonglong)(*(int *)(lVar7 + 0x60 + lVar9) == param_2) * 4);
      if ((longlong)iVar4 == -1) {
        *(int *)(param_1 + 0x4c) = iVar5;
      }
      else {
        lVar10 = (longlong)iVar4 * 0x70;
        *(int *)(lVar7 + lVar10 + 0x60 + (ulonglong)(*(int *)(lVar7 + 0x60 + lVar10) != iVar3) * 4)
             = iVar5;
        lVar7 = *(longlong *)(param_1 + 0x10);
      }
      *(int *)(lVar7 + 0x68 + (longlong)iVar5 * 0x70) = iVar4;
      FUN_1429cc2d4(param_1,iVar5,0);
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar9) = *(undefined4 *)(param_1 + 0x50)
      ;
      *(int *)(param_1 + 0x50) = iVar3;
    }
    FUN_1429cc408(param_1,param_2);
  }
  else {
    local_38 = param_3[6];
    local_68 = *param_3;
    uStack_60 = param_3[1];
    local_58 = param_3[2];
    uStack_50 = param_3[3];
    local_48 = *(undefined4 *)(param_3 + 4);
    uStack_44 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_40 = *(undefined4 *)(param_3 + 5);
    uStack_3c = *(undefined4 *)((longlong)param_3 + 0x2c);
    FUN_1429cc24c();
    lVar10 = *(longlong *)(param_1 + 0x20);
    *(undefined8 *)(lVar10 + lVar7 * 0x48) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar10 + 8 + lVar7 * 0x48) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar10 + 0x10 + lVar7 * 0x48) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar10 + 0x18 + lVar7 * 0x48) = 0xffefffffffffffff;
    *(undefined8 *)(lVar10 + 0x20 + lVar7 * 0x48) = 0xffefffffffffffff;
    *(undefined8 *)(lVar10 + 0x28 + lVar7 * 0x48) = 0xffefffffffffffff;
    lVar8 = (longlong)*(int *)(lVar10 + 0x38 + lVar7 * 0x48);
    if (lVar8 != 0) {
      pdVar1 = (double *)(lVar10 + lVar7 * 0x48);
      dVar6 = pdVar1[6];
      dVar11 = 1.79769313486232e+308;
      dVar12 = -1.79769313486232e+308;
      lVar10 = 0;
      uVar13 = 0xffffffff;
      uVar14 = 0xffefffff;
      dVar15 = -1.79769313486232e+308;
      dVar16 = 1.79769313486232e+308;
      dVar17 = 1.79769313486232e+308;
      do {
        dVar2 = *(double *)((longlong)dVar6 + 0x48 + lVar10);
        if (dVar2 <= dVar17) {
          dVar17 = dVar2;
        }
        dVar2 = *(double *)((longlong)dVar6 + 0x40 + lVar10);
        if (dVar2 <= dVar16) {
          dVar16 = dVar2;
        }
        dVar2 = *(double *)((longlong)dVar6 + 0x38 + lVar10);
        if (dVar2 <= dVar11) {
          dVar11 = dVar2;
        }
        *pdVar1 = dVar11;
        pdVar1[1] = dVar16;
        pdVar1[2] = dVar17;
        dVar2 = *(double *)((longlong)dVar6 + 0x60 + lVar10);
        if (dVar15 <= dVar2) {
          dVar15 = dVar2;
        }
        dVar2 = *(double *)((longlong)dVar6 + 0x58 + lVar10);
        if ((double)CONCAT44(uVar14,uVar13) <= dVar2) {
          uVar13 = SUB84(dVar2,0);
          uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
        }
        dVar2 = *(double *)((longlong)dVar6 + 0x50 + lVar10);
        if (dVar12 <= dVar2) {
          dVar12 = dVar2;
        }
        pdVar1[3] = dVar12;
        pdVar1[4] = (double)CONCAT44(uVar14,uVar13);
        pdVar1[5] = dVar15;
        lVar10 = lVar10 + 0x68;
      } while (lVar8 * 0x68 - lVar10 != 0);
    }
    lVar10 = *(longlong *)(param_1 + 0x10);
    lVar8 = *(longlong *)(param_1 + 0x20);
    dVar6 = *(double *)(lVar8 + 8 + lVar7 * 0x48);
    dVar17 = (double)_DAT_14c75efe0;
    dVar11 = *(double *)(lVar8 + 0x10 + lVar7 * 0x48);
    dVar12 = *(double *)(lVar8 + 0x18 + lVar7 * 0x48);
    dVar15 = *(double *)(lVar8 + 0x20 + lVar7 * 0x48);
    dVar16 = *(double *)(lVar8 + 0x28 + lVar7 * 0x48);
    *(double *)(lVar10 + lVar9) = *(double *)(lVar8 + lVar7 * 0x48) - dVar17;
    *(double *)(lVar10 + 8 + lVar9) = dVar6 - dVar17;
    *(double *)(lVar10 + 0x10 + lVar9) = dVar11 - dVar17;
    *(double *)(lVar10 + 0x18 + lVar9) = dVar12 + dVar17;
    *(double *)(lVar10 + 0x20 + lVar9) = dVar15 + dVar17;
    *(double *)(lVar10 + 0x28 + lVar9) = dVar17 + dVar16;
    FUN_1429cc2d4(param_1,param_2,0);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429cc24c FUN_1429cc24c body=136 status=ok
// SIG undefined FUN_1429cc24c(void)

void FUN_1429cc24c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 0x38);
  if (0 < (int)uVar5) {
    lVar1 = *(longlong *)(param_1 + 0x30);
    piVar4 = (int *)(lVar1 + 0x10);
    uVar3 = 0;
    do {
      if (*piVar4 == *(int *)(param_2 + 0x10)) {
        if (uVar5 - 1 != (int)uVar3) {
          iVar6 = (uVar5 - 1) - (int)uVar3;
          iVar2 = 1;
          if (iVar6 < 1) {
            iVar2 = iVar6;
          }
          memmove(piVar4 + -4,(void *)(lVar1 + (ulonglong)(uVar5 - iVar2) * 0x68),
                  (longlong)iVar2 * 0x68);
          uVar5 = *(uint *)(param_1 + 0x38);
        }
        *(uint *)(param_1 + 0x38) = uVar5 - 1;
        FUN_144aa423e((longlong *)(param_1 + 0x30));
        break;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 0x1a;
    } while (uVar5 != uVar3);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 1429cc2d4 FUN_1429cc2d4 body=307 status=ok
// SIG undefined FUN_1429cc2d4(void)

void FUN_1429cc2d4(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  iVar4 = *(int *)(lVar8 + 0x68 + (longlong)param_2 * 0x70);
  if (iVar4 != param_2 && iVar4 != -1) {
    do {
      iVar9 = iVar4;
      lVar12 = (longlong)iVar9 * 0x70;
      lVar1 = lVar8 + lVar12;
      lVar10 = (longlong)param_2 * 0x70;
      uVar5 = (uint)(*(int *)(lVar8 + 0x60 + lVar12) != param_2);
      uVar11 = (ulonglong)(uVar5 * 0x30);
      *(undefined8 *)(uVar11 + 0x10 + lVar1) = *(undefined8 *)(lVar8 + 0x10 + lVar10);
      uVar7 = ((undefined8 *)(lVar8 + lVar10))[1];
      *(undefined8 *)(uVar11 + lVar1) = *(undefined8 *)(lVar8 + lVar10);
      ((undefined8 *)(uVar11 + lVar1))[1] = uVar7;
      *(undefined8 *)(uVar11 + 0x28 + lVar1) = *(undefined8 *)(lVar8 + 0x28 + lVar10);
      puVar2 = (undefined4 *)(lVar8 + 0x18 + lVar10);
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(uVar11 + 0x18 + lVar1);
      *puVar3 = *puVar2;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x10);
      if ((*(byte *)(lVar8 + 0x6c + lVar10) & 1) == 0) {
        lVar10 = lVar10 + lVar8;
        lVar8 = lVar8 + lVar12;
        uVar11 = (ulonglong)(uVar5 * 0x30);
        dVar16 = *(double *)(uVar11 + 0x10 + lVar8);
        uVar13 = SUB84(dVar16,0);
        uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar15 = *(double *)(lVar10 + 0x40);
        if (dVar15 <= dVar16) {
          uVar13 = SUB84(dVar15,0);
          uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        dVar16 = *(double *)(uVar11 + 8 + lVar8);
        if (*(double *)(lVar10 + 0x38) <= dVar16) {
          dVar16 = *(double *)(lVar10 + 0x38);
        }
        dVar15 = *(double *)(uVar11 + lVar8);
        if (*(double *)(lVar10 + 0x30) <= *(double *)(uVar11 + lVar8)) {
          dVar15 = *(double *)(lVar10 + 0x30);
        }
        *(double *)(uVar11 + lVar8) = dVar15;
        *(double *)(uVar11 + 8 + lVar8) = dVar16;
        *(ulonglong *)(uVar11 + 0x10 + lVar8) = CONCAT44(uVar14,uVar13);
        dVar16 = *(double *)(uVar11 + 0x28 + lVar8);
        uVar13 = SUB84(dVar16,0);
        uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar15 = *(double *)(lVar10 + 0x58);
        if (dVar16 <= dVar15) {
          uVar13 = SUB84(dVar15,0);
          uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        dVar16 = *(double *)(uVar11 + 0x20 + lVar8);
        if (dVar16 <= *(double *)(lVar10 + 0x50)) {
          dVar16 = *(double *)(lVar10 + 0x50);
        }
        dVar15 = *(double *)(uVar11 + 0x18 + lVar8);
        if (dVar15 <= *(double *)(lVar10 + 0x48)) {
          dVar15 = *(double *)(lVar10 + 0x48);
        }
        *(double *)(uVar11 + 0x18 + lVar8) = dVar15;
        *(double *)(uVar11 + 0x20 + lVar8) = dVar16;
        *(ulonglong *)(uVar11 + 0x28 + lVar8) = CONCAT44(uVar14,uVar13);
      }
      if (param_3 != '\0') {
        FUN_1429cc474(param_1,iVar9,0);
      }
      lVar8 = *(longlong *)(param_1 + 0x10);
      iVar4 = *(int *)(lVar8 + 0x68 + lVar12);
    } while ((iVar4 != -1) && (param_2 = iVar9, iVar9 != iVar4));
  }
  return;
}



// FUNCTION 1429cc408 FUN_1429cc408 body=107 status=ok
// SIG undefined FUN_1429cc408(void)

void FUN_1429cc408(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20) +
          (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + (longlong)param_2 * 0x70) * 0x48
  ;
  if (*(int *)(lVar1 + 0x3c) < 0) {
    *(undefined4 *)(lVar1 + 0x38) = 0;
    FUN_14479f570(lVar1 + 0x30,0);
  }
  else {
    *(undefined4 *)(lVar1 + 0x38) = 0;
  }
  *(undefined1 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + (longlong)param_2 * 0x70) =
       *(undefined4 *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = param_2;
  return;
}



// FUNCTION 1429cc474 FUN_1429cc474 body=1104 status=ok
// SIG undefined FUN_1429cc474(void)

void FUN_1429cc474(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar17 = (longlong)param_2 * 0x70;
  lVar16 = lVar8 + lVar17;
  dVar31 = 0.0;
  iVar22 = -1;
  uVar25 = 0;
  iVar21 = -1;
  bVar9 = true;
  do {
    bVar26 = bVar9;
    lVar18 = (longlong)*(int *)(lVar16 + 0x60 + (uVar25 ^ 1) * 4) * 0x70;
    if ((*(byte *)(lVar8 + 0x6c + lVar18) & 1) == 0) {
      lVar19 = lVar8 + lVar18;
      lVar24 = uVar25 * 0x30;
      dVar32 = *(double *)(lVar16 + lVar24);
      dVar30 = *(double *)(lVar16 + 8 + lVar24);
      dVar3 = *(double *)(lVar16 + 0x10 + lVar24);
      dVar4 = *(double *)(lVar16 + 0x18 + lVar24);
      dVar5 = *(double *)(lVar16 + 0x20 + lVar24);
      lVar23 = (uVar25 ^ 1) * 0x30;
      dVar11 = *(double *)(lVar16 + 0x28 + lVar23) - *(double *)(lVar16 + 0x10 + lVar23);
      dVar6 = *(double *)(lVar16 + 0x28 + lVar24);
      dVar10 = *(double *)(lVar16 + 0x20 + lVar23) - *(double *)(lVar16 + 8 + lVar23);
      dVar12 = *(double *)(lVar16 + 0x18 + lVar23) - *(double *)(lVar16 + lVar23);
      dVar10 = dVar10 * dVar11 + dVar12 * dVar10 + dVar11 * dVar12;
      lVar23 = 0;
      dVar11 = dVar31;
      iVar20 = iVar21;
      do {
        iVar7 = *(int *)(lVar18 + lVar8 + 0x60 + lVar23);
        uVar15 = (ulonglong)
                 ((uint)(*(int *)(lVar8 + 0x60 +
                                 (longlong)*(int *)(lVar8 + 0x68 + (longlong)iVar7 * 0x70) * 0x70)
                        == iVar7) * 0x30);
        uVar28 = SUB84(dVar3,0);
        uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x10 + uVar15);
        if (dVar31 <= dVar3) {
          uVar28 = SUB84(dVar31,0);
          uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar35 = SUB84(dVar30,0);
        uVar36 = (undefined4)((ulonglong)dVar30 >> 0x20);
        dVar31 = *(double *)(lVar19 + 8 + uVar15);
        if (dVar31 <= dVar30) {
          uVar35 = SUB84(dVar31,0);
          uVar36 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar37 = SUB84(dVar32,0);
        uVar38 = (undefined4)((ulonglong)dVar32 >> 0x20);
        dVar31 = *(double *)(lVar19 + uVar15);
        if (dVar31 <= dVar32) {
          uVar37 = SUB84(dVar31,0);
          uVar38 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar39 = SUB84(dVar6,0);
        uVar40 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x28 + uVar15);
        if (dVar6 <= dVar31) {
          uVar39 = SUB84(dVar31,0);
          uVar40 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar33 = SUB84(dVar5,0);
        uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x20 + uVar15);
        if (dVar5 <= dVar31) {
          uVar33 = SUB84(dVar31,0);
          uVar34 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        dVar12 = (double)CONCAT44(uVar40,uVar39) - (double)CONCAT44(uVar29,uVar28);
        uVar28 = SUB84(dVar4,0);
        uVar29 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x18 + uVar15);
        if (dVar4 <= dVar31) {
          uVar28 = SUB84(dVar31,0);
          uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        dVar31 = (double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar36,uVar35);
        dVar13 = (double)CONCAT44(uVar29,uVar28) - (double)CONCAT44(uVar38,uVar37);
        dVar31 = dVar31 * dVar12 + dVar13 * dVar31 + dVar12 * dVar13;
        dVar31 = (dVar31 + dVar31) - (dVar10 + dVar10);
        iVar21 = *(int *)(lVar16 + 0x60 + uVar25 * 4);
        if (dVar11 <= dVar31) {
          dVar31 = dVar11;
          iVar7 = iVar22;
          iVar21 = iVar20;
        }
        iVar22 = iVar7;
        lVar23 = lVar23 + 4;
        dVar11 = dVar31;
        iVar20 = iVar21;
      } while (lVar23 != 8);
    }
    uVar25 = 1;
    bVar9 = false;
  } while (bVar26);
  if ((iVar22 != -1) && (iVar22 != param_2)) {
    iVar20 = *(int *)(lVar8 + 0x68 + (longlong)iVar22 * 0x70);
    if (iVar21 != iVar20) {
      lVar19 = (longlong)iVar20 * 0x70;
      bVar26 = *(int *)(lVar8 + 0x60 + lVar19) != iVar22;
      bVar27 = *(int *)(lVar8 + 0x60 +
                       (longlong)*(int *)(lVar8 + 0x68 + (longlong)iVar21 * 0x70) * 0x70) == iVar21;
      bVar9 = !bVar27;
      *(int *)(lVar16 + 0x60 + (ulonglong)bVar9 * 4) = iVar22;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)iVar22 * 0x70) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)iVar21 * 0x70) = iVar20;
      *(int *)(*(longlong *)(param_1 + 0x10) + lVar19 + 0x60 + (ulonglong)bVar26 * 4) = iVar21;
      lVar16 = *(longlong *)(param_1 + 0x10) + lVar17;
      uVar25 = (ulonglong)((uint)bVar9 * 0x30);
      local_e8 = *(undefined8 *)(uVar25 + 0x10 + lVar16);
      local_f8 = *(undefined8 *)(uVar25 + lVar16);
      uStack_f0 = ((undefined8 *)(uVar25 + lVar16))[1];
      local_d0 = *(undefined8 *)(uVar25 + 0x28 + lVar16);
      puVar1 = (undefined8 *)(uVar25 + 0x18 + lVar16);
      local_e0 = *puVar1;
      uStack_d8 = puVar1[1];
      lVar18 = *(longlong *)(param_1 + 0x10) + lVar19;
      lVar8 = (ulonglong)bVar26 * 0x30;
      *(undefined8 *)(uVar25 + 0x10 + lVar16) = *(undefined8 *)(lVar18 + 0x10 + lVar8);
      uVar14 = ((undefined8 *)(lVar18 + lVar8))[1];
      *(undefined8 *)(uVar25 + lVar16) = *(undefined8 *)(lVar18 + lVar8);
      ((undefined8 *)(uVar25 + lVar16))[1] = uVar14;
      *(undefined8 *)(uVar25 + 0x28 + lVar16) = *(undefined8 *)(lVar18 + 0x28 + lVar8);
      puVar1 = (undefined8 *)(lVar18 + 0x18 + lVar8);
      uVar14 = puVar1[1];
      puVar2 = (undefined8 *)(uVar25 + 0x18 + lVar16);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      lVar16 = *(longlong *)(param_1 + 0x10) + lVar19;
      *(undefined8 *)(lVar16 + lVar8) = local_f8;
      ((undefined8 *)(lVar16 + lVar8))[1] = uStack_f0;
      *(undefined8 *)(lVar16 + 0x10 + lVar8) = local_e8;
      puVar1 = (undefined8 *)(lVar16 + 0x18 + lVar8);
      *puVar1 = local_e0;
      puVar1[1] = uStack_d8;
      *(undefined8 *)(lVar16 + 0x28 + lVar8) = local_d0;
      lVar8 = *(longlong *)(param_1 + 0x10);
      lVar16 = lVar8 + lVar17;
      lVar18 = (ulonglong)bVar27 * 0x30;
      *(undefined8 *)(lVar16 + 0x10 + lVar18) = *(undefined8 *)(lVar8 + 0x10 + lVar19);
      uVar14 = ((undefined8 *)(lVar8 + lVar19))[1];
      *(undefined8 *)(lVar16 + lVar18) = *(undefined8 *)(lVar8 + lVar19);
      ((undefined8 *)(lVar16 + lVar18))[1] = uVar14;
      puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar19);
      uVar14 = puVar1[1];
      puVar2 = (undefined8 *)(lVar16 + 0x18 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      *(undefined8 *)(lVar16 + 0x28 + lVar18) = *(undefined8 *)(lVar8 + 0x28 + lVar19);
      lVar16 = *(longlong *)(param_1 + 0x10);
      lVar17 = lVar17 + lVar16;
      dVar31 = *(double *)(lVar17 + 0x10 + lVar18);
      uVar28 = SUB84(dVar31,0);
      uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar32 = *(double *)(lVar16 + 0x40 + lVar19);
      if (dVar32 <= dVar31) {
        uVar28 = SUB84(dVar32,0);
        uVar29 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      dVar31 = *(double *)(lVar17 + 8 + lVar18);
      dVar32 = *(double *)(lVar16 + 0x38 + lVar19);
      if (dVar32 <= dVar31) {
        dVar31 = dVar32;
      }
      dVar32 = *(double *)(lVar16 + 0x30 + lVar19);
      dVar30 = *(double *)(lVar17 + lVar18);
      if (dVar32 <= *(double *)(lVar17 + lVar18)) {
        dVar30 = dVar32;
      }
      *(double *)(lVar17 + lVar18) = dVar30;
      *(double *)(lVar17 + 8 + lVar18) = dVar31;
      *(ulonglong *)(lVar17 + 0x10 + lVar18) = CONCAT44(uVar29,uVar28);
      dVar31 = *(double *)(lVar17 + 0x28 + lVar18);
      uVar28 = SUB84(dVar31,0);
      uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar32 = *(double *)(lVar16 + 0x58 + lVar19);
      if (dVar31 <= dVar32) {
        uVar28 = SUB84(dVar32,0);
        uVar29 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      dVar31 = *(double *)(lVar17 + 0x18 + lVar18);
      dVar32 = *(double *)(lVar17 + 0x20 + lVar18);
      dVar30 = *(double *)(lVar16 + 0x50 + lVar19);
      if (dVar32 <= dVar30) {
        dVar32 = dVar30;
      }
      dVar30 = *(double *)(lVar16 + 0x48 + lVar19);
      if (dVar31 <= dVar30) {
        dVar31 = dVar30;
      }
      *(double *)(lVar17 + 0x18 + lVar18) = dVar31;
      *(double *)(lVar17 + 0x20 + lVar18) = dVar32;
      *(ulonglong *)(lVar17 + 0x28 + lVar18) = CONCAT44(uVar29,uVar28);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
  local_100 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429cc8c6 FUN_1429cc8c6 body=1279 status=ok
// SIG undefined FUN_1429cc8c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1429cc8c6(longlong param_1,int *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  double dVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_e8 [40];
  int local_c0;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)(param_1 + 0x4c) == -1) {
    FUN_1429ccf2c(param_1,param_2,param_3,param_4);
    *(int *)(param_1 + 0x4c) = *param_2;
  }
  else {
    iVar10 = FUN_144a483ec(param_1,param_4,&local_49);
    if (local_49 == '\x01') {
      lVar19 = (longlong)iVar10 * 0x70;
      lVar15 = *(longlong *)(param_1 + 0x20);
      local_c0 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar19);
      lVar12 = (longlong)local_c0;
      puVar1 = (undefined8 *)(lVar15 + lVar12 * 0x48);
      local_88 = param_3[6];
      local_b8 = *param_3;
      uStack_b0 = param_3[1];
      local_a8 = *(undefined4 *)(param_3 + 2);
      uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x14);
      uStack_a0 = *(undefined4 *)(param_3 + 3);
      uStack_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
      local_98 = *(undefined4 *)(param_3 + 4);
      uStack_94 = *(undefined4 *)((longlong)param_3 + 0x24);
      uStack_90 = *(undefined4 *)(param_3 + 5);
      uStack_8c = *(undefined4 *)((longlong)param_3 + 0x2c);
      local_70 = param_4[2];
      local_80 = *param_4;
      uStack_78 = param_4[1];
      local_68 = *(undefined4 *)(param_4 + 3);
      uStack_64 = *(undefined4 *)((longlong)param_4 + 0x1c);
      uStack_60 = *(undefined4 *)(param_4 + 4);
      uStack_5c = *(undefined4 *)((longlong)param_4 + 0x24);
      local_58 = param_4[5];
      iVar7 = *(int *)(puVar1 + 7);
      *(uint *)(puVar1 + 7) = iVar7 + 1U;
      local_bc = iVar10;
      if (*(uint *)((longlong)puVar1 + 0x3c) < iVar7 + 1U) {
        FUN_14479f6b8(lVar15 + lVar12 * 0x48 + 0x30,iVar7);
      }
      iVar10 = local_bc;
      lVar15 = puVar1[6];
      lVar13 = (longlong)iVar7 * 0x68;
      *(undefined8 *)(lVar15 + 0x30 + lVar13) = local_88;
      puVar3 = (undefined8 *)(lVar15 + 0x20 + lVar13);
      *puVar3 = CONCAT44(uStack_94,local_98);
      puVar3[1] = CONCAT44(uStack_8c,uStack_90);
      puVar3 = (undefined8 *)(lVar15 + 0x10 + lVar13);
      *puVar3 = CONCAT44(uStack_a4,local_a8);
      puVar3[1] = CONCAT44(uStack_9c,uStack_a0);
      *(undefined8 *)(lVar15 + lVar13) = local_b8;
      ((undefined8 *)(lVar15 + lVar13))[1] = uStack_b0;
      *(undefined8 *)(lVar15 + 0x48 + lVar13) = local_70;
      puVar3 = (undefined8 *)(lVar15 + 0x38 + lVar13);
      *puVar3 = local_80;
      puVar3[1] = uStack_78;
      puVar3 = (undefined8 *)(lVar15 + 0x50 + lVar13);
      *puVar3 = CONCAT44(uStack_64,local_68);
      puVar3[1] = CONCAT44(uStack_5c,uStack_60);
      *(undefined8 *)(lVar15 + 0x60 + lVar13) = local_58;
      *puVar1 = 0x7fefffffffffffff;
      puVar1[1] = 0x7fefffffffffffff;
      puVar1[2] = 0x7fefffffffffffff;
      puVar1[3] = 0xffefffffffffffff;
      puVar1[4] = 0xffefffffffffffff;
      puVar1[5] = 0xffefffffffffffff;
      if ((longlong)*(int *)(puVar1 + 7) != 0) {
        lVar15 = puVar1[6];
        uVar20 = 0xffffffff;
        uVar22 = 0x7fefffff;
        uVar24 = 0xffffffff;
        uVar25 = 0xffefffff;
        lVar13 = 0;
        dVar26 = -1.79769313486232e+308;
        dVar27 = 1.79769313486232e+308;
        dVar28 = 1.79769313486232e+308;
        uVar21 = uVar24;
        uVar23 = uVar25;
        do {
          dVar5 = *(double *)(lVar15 + 0x48 + lVar13);
          if (dVar5 <= dVar28) {
            dVar28 = dVar5;
          }
          dVar5 = *(double *)(lVar15 + 0x40 + lVar13);
          if (dVar5 <= dVar27) {
            dVar27 = dVar5;
          }
          dVar5 = *(double *)(lVar15 + 0x38 + lVar13);
          if (dVar5 <= (double)CONCAT44(uVar22,uVar20)) {
            uVar20 = SUB84(dVar5,0);
            uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          *puVar1 = CONCAT44(uVar22,uVar20);
          puVar1[1] = dVar27;
          puVar1[2] = dVar28;
          dVar5 = *(double *)(lVar15 + 0x60 + lVar13);
          if (dVar26 <= dVar5) {
            dVar26 = dVar5;
          }
          dVar5 = *(double *)(lVar15 + 0x58 + lVar13);
          if ((double)CONCAT44(uVar23,uVar21) <= dVar5) {
            uVar21 = SUB84(dVar5,0);
            uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          dVar5 = *(double *)(lVar15 + 0x50 + lVar13);
          if ((double)CONCAT44(uVar25,uVar24) <= dVar5) {
            uVar24 = SUB84(dVar5,0);
            uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          puVar1[3] = CONCAT44(uVar25,uVar24);
          puVar1[4] = CONCAT44(uVar23,uVar21);
          puVar1[5] = dVar26;
          lVar13 = lVar13 + 0x68;
        } while ((longlong)*(int *)(puVar1 + 7) * 0x68 - lVar13 != 0);
      }
      *(undefined1 *)(puVar1 + 8) = 1;
      lVar15 = *(longlong *)(param_1 + 0x20);
      *(undefined8 *)(lVar15 + lVar12 * 0x48) = 0x7fefffffffffffff;
      *(undefined8 *)(lVar15 + 8 + lVar12 * 0x48) = 0x7fefffffffffffff;
      *(undefined8 *)(lVar15 + 0x10 + lVar12 * 0x48) = 0x7fefffffffffffff;
      *(undefined8 *)(lVar15 + 0x18 + lVar12 * 0x48) = 0xffefffffffffffff;
      *(undefined8 *)(lVar15 + 0x20 + lVar12 * 0x48) = 0xffefffffffffffff;
      *(undefined8 *)(lVar15 + 0x28 + lVar12 * 0x48) = 0xffefffffffffffff;
      lVar17 = (longlong)*(int *)(lVar15 + 0x38 + lVar12 * 0x48);
      lVar13 = 0;
      if (lVar17 != 0) {
        puVar1 = (undefined8 *)(lVar15 + lVar12 * 0x48);
        lVar15 = puVar1[6];
        uVar20 = 0xffffffff;
        uVar22 = 0x7fefffff;
        uVar24 = 0xffffffff;
        uVar25 = 0xffefffff;
        lVar13 = 0;
        dVar26 = -1.79769313486232e+308;
        dVar27 = 1.79769313486232e+308;
        dVar28 = 1.79769313486232e+308;
        uVar21 = uVar24;
        uVar23 = uVar25;
        do {
          dVar5 = *(double *)(lVar15 + 0x48 + lVar13);
          if (dVar5 <= dVar28) {
            dVar28 = dVar5;
          }
          dVar5 = *(double *)(lVar15 + 0x40 + lVar13);
          if (dVar5 <= dVar27) {
            dVar27 = dVar5;
          }
          dVar5 = *(double *)(lVar15 + 0x38 + lVar13);
          if (dVar5 <= (double)CONCAT44(uVar22,uVar20)) {
            uVar20 = SUB84(dVar5,0);
            uVar22 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          *puVar1 = CONCAT44(uVar22,uVar20);
          puVar1[1] = dVar27;
          puVar1[2] = dVar28;
          dVar5 = *(double *)(lVar15 + 0x60 + lVar13);
          if (dVar26 <= dVar5) {
            dVar26 = dVar5;
          }
          dVar5 = *(double *)(lVar15 + 0x58 + lVar13);
          if ((double)CONCAT44(uVar23,uVar21) <= dVar5) {
            uVar21 = SUB84(dVar5,0);
            uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          dVar5 = *(double *)(lVar15 + 0x50 + lVar13);
          if ((double)CONCAT44(uVar25,uVar24) <= dVar5) {
            uVar24 = SUB84(dVar5,0);
            uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
          }
          puVar1[3] = CONCAT44(uVar25,uVar24);
          puVar1[4] = CONCAT44(uVar23,uVar21);
          puVar1[5] = dVar26;
          lVar13 = lVar13 + 0x68;
        } while (lVar17 * 0x68 - lVar13 != 0);
      }
      lVar15 = *(longlong *)(param_1 + 0x10);
      lVar17 = *(longlong *)(param_1 + 0x20);
      dVar27 = *(double *)(lVar17 + 8 + lVar12 * 0x48);
      dVar8 = (double)_DAT_14c75efe0;
      dVar28 = *(double *)(lVar17 + 0x10 + lVar12 * 0x48);
      dVar26 = *(double *)(lVar17 + 0x18 + lVar12 * 0x48);
      dVar5 = *(double *)(lVar17 + 0x20 + lVar12 * 0x48);
      dVar6 = *(double *)(lVar17 + 0x28 + lVar12 * 0x48);
      *(double *)(lVar15 + lVar19) = *(double *)(lVar17 + lVar12 * 0x48) - dVar8;
      *(double *)(lVar15 + 8 + lVar19) = dVar27 - dVar8;
      *(double *)(lVar15 + 0x10 + lVar19) = dVar28 - dVar8;
      *(double *)(lVar15 + 0x18 + lVar19) = dVar26 + dVar8;
      *(double *)(lVar15 + 0x20 + lVar19) = dVar5 + dVar8;
      *(double *)(lVar15 + 0x28 + lVar19) = dVar8 + dVar6;
      FUN_1429cc2d4(param_1,local_bc,CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
      *param_2 = iVar10;
      param_2[1] = local_c0;
    }
    else {
      FUN_1429ccf2c(param_1,param_2,param_3,param_4);
      lVar13 = (longlong)iVar10 * 0x70;
      iVar7 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar13);
      iVar11 = FUN_1429cd488(param_1);
      lVar15 = *(longlong *)(param_1 + 0x10);
      lVar19 = (longlong)iVar11 * 0x70;
      pdVar2 = (double *)(lVar15 + lVar19);
      *(int *)(lVar15 + 0x68 + lVar19) = iVar7;
      *(int *)(lVar15 + 0x60 + lVar19) = iVar10;
      iVar16 = *param_2;
      *(int *)(lVar15 + 100 + lVar19) = iVar16;
      lVar12 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(lVar15 + 0x10 + lVar19) = *(undefined8 *)(lVar12 + 0x10 + lVar13);
      uVar9 = ((undefined8 *)(lVar12 + lVar13))[1];
      *(undefined8 *)(lVar15 + lVar19) = *(undefined8 *)(lVar12 + lVar13);
      ((undefined8 *)(lVar15 + lVar19))[1] = uVar9;
      *(undefined8 *)(lVar15 + 0x28 + lVar19) = *(undefined8 *)(lVar12 + 0x28 + lVar13);
      puVar1 = (undefined8 *)(lVar12 + 0x18 + lVar13);
      uVar9 = puVar1[1];
      puVar3 = (undefined8 *)(lVar15 + 0x18 + lVar19);
      *puVar3 = *puVar1;
      puVar3[1] = uVar9;
      lVar15 = *(longlong *)(param_1 + 0x10);
      if ((*(byte *)(lVar15 + 0x6c + lVar13) & 1) == 0) {
        lVar15 = lVar15 + lVar13;
        dVar27 = pdVar2[2];
        uVar21 = SUB84(dVar27,0);
        uVar23 = (undefined4)((ulonglong)dVar27 >> 0x20);
        dVar28 = *(double *)(lVar15 + 0x40);
        if (dVar28 <= dVar27) {
          uVar21 = SUB84(dVar28,0);
          uVar23 = (undefined4)((ulonglong)dVar28 >> 0x20);
        }
        dVar27 = *pdVar2;
        uVar20 = SUB84(dVar27,0);
        uVar22 = (undefined4)((ulonglong)dVar27 >> 0x20);
        dVar28 = pdVar2[1];
        uVar24 = SUB84(dVar28,0);
        uVar25 = (undefined4)((ulonglong)dVar28 >> 0x20);
        dVar26 = *(double *)(lVar15 + 0x38);
        if (dVar26 <= dVar28) {
          uVar24 = SUB84(dVar26,0);
          uVar25 = (undefined4)((ulonglong)dVar26 >> 0x20);
        }
        dVar28 = *(double *)(lVar15 + 0x30);
        if (dVar28 <= dVar27) {
          uVar20 = SUB84(dVar28,0);
          uVar22 = (undefined4)((ulonglong)dVar28 >> 0x20);
        }
        *pdVar2 = (double)CONCAT44(uVar22,uVar20);
        pdVar2[1] = (double)CONCAT44(uVar25,uVar24);
        pdVar2[2] = (double)CONCAT44(uVar23,uVar21);
        dVar27 = pdVar2[5];
        uVar21 = SUB84(dVar27,0);
        uVar23 = (undefined4)((ulonglong)dVar27 >> 0x20);
        dVar28 = *(double *)(lVar15 + 0x58);
        if (dVar27 <= dVar28) {
          uVar21 = SUB84(dVar28,0);
          uVar23 = (undefined4)((ulonglong)dVar28 >> 0x20);
        }
        dVar27 = pdVar2[4];
        uVar20 = SUB84(dVar27,0);
        uVar22 = (undefined4)((ulonglong)dVar27 >> 0x20);
        dVar28 = *(double *)(lVar15 + 0x50);
        if (dVar27 <= dVar28) {
          uVar20 = SUB84(dVar28,0);
          uVar22 = (undefined4)((ulonglong)dVar28 >> 0x20);
        }
        dVar27 = pdVar2[3];
        uVar24 = SUB84(dVar27,0);
        uVar25 = (undefined4)((ulonglong)dVar27 >> 0x20);
        dVar28 = *(double *)(lVar15 + 0x48);
        if (dVar27 <= dVar28) {
          uVar24 = SUB84(dVar28,0);
          uVar25 = (undefined4)((ulonglong)dVar28 >> 0x20);
        }
        pdVar2[3] = (double)CONCAT44(uVar25,uVar24);
        pdVar2[4] = (double)CONCAT44(uVar22,uVar20);
        pdVar2[5] = (double)CONCAT44(uVar23,uVar21);
        iVar16 = *param_2;
        lVar15 = *(longlong *)(param_1 + 0x10);
      }
      uVar18 = (longlong)iVar16 * 0x70;
      pdVar2[8] = *(double *)(lVar15 + 0x10 + uVar18);
      dVar27 = ((double *)(lVar15 + uVar18))[1];
      pdVar2[6] = *(double *)(lVar15 + uVar18);
      pdVar2[7] = dVar27;
      puVar4 = (undefined4 *)(lVar15 + 0x18 + uVar18);
      uVar21 = puVar4[1];
      uVar23 = puVar4[2];
      uVar20 = puVar4[3];
      *(undefined4 *)(pdVar2 + 9) = *puVar4;
      *(undefined4 *)((longlong)pdVar2 + 0x4c) = uVar21;
      *(undefined4 *)(pdVar2 + 10) = uVar23;
      *(undefined4 *)((longlong)pdVar2 + 0x54) = uVar20;
      pdVar2[0xb] = *(double *)(lVar15 + 0x28 + uVar18);
      if (iVar7 == -1) {
        piVar14 = (int *)(param_1 + 0x4c);
      }
      else {
        lVar15 = *(longlong *)(param_1 + 0x10);
        uVar18 = (ulonglong)
                 (*(int *)(lVar15 + 0x60 + (longlong)*(int *)(lVar15 + 0x68 + lVar13) * 0x70) !=
                 iVar10);
        piVar14 = (int *)((longlong)iVar7 * 0x70 + lVar15 + uVar18 * 4 + 0x60);
      }
      *piVar14 = iVar11;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar13) = iVar11;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)*param_2 * 0x70) = iVar11;
      FUN_1429cc2d4(param_1,iVar11,CONCAT71((int7)(uVar18 >> 8),1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429ccdc6 FUN_1429ccdc6 body=356 status=ok
// SIG undefined FUN_1429ccdc6(void)

void FUN_1429ccdc6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined4 local_250;
  undefined1 local_248;
  undefined1 local_240;
  undefined1 local_238;
  longlong local_228 [3];
  undefined1 local_210 [480];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_228[0] = 0;
  local_228[1] = 0;
  iVar1 = *(int *)(param_1 + 0x118) + *(int *)(param_1 + 0x40);
  if (0 < (longlong)*(int *)(param_1 + 0x30)) {
    lVar2 = 0;
    do {
      iVar1 = iVar1 + *(int *)(*(longlong *)(param_1 + 0x20) + 0x38 + lVar2);
      lVar2 = lVar2 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0x30) * 0x48 != lVar2);
  }
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14479f570(local_228);
  }
  FUN_146c9de8c(local_228,param_1 + 0x38);
  FUN_146c9de8c(local_228,param_1 + 0x110);
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar2 = 0x30;
    lVar3 = 0;
    do {
      FUN_146c9de8c(local_228,*(longlong *)(param_1 + 0x20) + lVar2);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x48;
    } while (lVar3 < *(int *)(param_1 + 0x30));
  }
  local_238 = 1;
  local_240 = 0;
  local_248 = 0;
  local_258 = 0x40f86a0000000000;
  local_250 = 0;
  FUN_146e08386(local_210,local_228,0xc,0x10);
  FUN_1404845ce(param_1,local_210);
  *(undefined1 *)(param_1 + 0x189) = 1;
  FUN_140d9df70(local_210);
  if (local_228[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429ccf2c FUN_1429ccf2c body=1371 status=ok
// SIG undefined FUN_1429ccf2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1429ccf2c(longlong param_1,int *param_2,undefined8 *param_3,double *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double *pdVar4;
  byte *pbVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_148 [36];
  int local_124;
  ulonglong local_120;
  int *local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8;
  longlong local_e0;
  int local_d8;
  undefined4 local_d4;
  undefined1 local_d0;
  undefined8 *local_c8;
  ulonglong uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  double local_80;
  double dStack_78;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  iVar14 = *(int *)(param_1 + 0x54);
  lVar13 = (longlong)iVar14;
  if (lVar13 == -1) {
    uVar8 = *(uint *)(param_1 + 0x30);
    plVar1 = (longlong *)(param_1 + 0x10);
    iVar14 = *(int *)(param_1 + 0x18);
    lVar13 = (longlong)iVar14;
    *(int *)(param_1 + 0x18) = iVar14 + 1;
    local_118 = param_2;
    if (*(int *)(param_1 + 0x1c) == iVar14) {
      FUN_14008b9bc(plVar1,iVar14);
    }
    *(uint *)(*plVar1 + 0x60 + lVar13 * 0x70) = uVar8;
    pbVar5 = (byte *)(*plVar1 + 0x6c + lVar13 * 0x70);
    *pbVar5 = *pbVar5 | 1;
    local_88 = param_3[6];
    local_b8 = *param_3;
    uStack_b0 = param_3[1];
    local_a8 = *(undefined4 *)(param_3 + 2);
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_a0 = *(undefined4 *)(param_3 + 3);
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_98 = *(undefined4 *)(param_3 + 4);
    uStack_94 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_90 = *(undefined4 *)(param_3 + 5);
    uStack_8c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_80 = *param_4;
    dStack_78 = param_4[1];
    local_70 = param_4[2];
    local_68 = param_4[3];
    uStack_60 = param_4[4];
    local_58 = param_4[5];
    local_c8 = (undefined8 *)0x0;
    uStack_c0 = 1;
    iVar12 = 0;
    local_124 = iVar14;
    local_120 = (ulonglong)uVar8;
    FUN_14479f6b8(&local_c8,0);
    puVar2 = local_c8;
    local_c8[6] = local_88;
    *(undefined4 *)(local_c8 + 4) = local_98;
    *(undefined4 *)((longlong)local_c8 + 0x24) = uStack_94;
    *(undefined4 *)(local_c8 + 5) = uStack_90;
    *(undefined4 *)((longlong)local_c8 + 0x2c) = uStack_8c;
    *(undefined4 *)(local_c8 + 2) = local_a8;
    *(undefined4 *)((longlong)local_c8 + 0x14) = uStack_a4;
    *(undefined4 *)(local_c8 + 3) = uStack_a0;
    *(undefined4 *)((longlong)local_c8 + 0x1c) = uStack_9c;
    *local_c8 = local_b8;
    local_c8[1] = uStack_b0;
    local_c8[7] = local_80;
    local_c8[8] = dStack_78;
    local_c8[9] = local_70;
    *(undefined4 *)(local_c8 + 10) = (undefined4)local_68;
    *(undefined4 *)((longlong)local_c8 + 0x54) = local_68._4_4_;
    *(undefined4 *)(local_c8 + 0xb) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)local_c8 + 0x5c) = uStack_60._4_4_;
    local_c8[0xc] = local_58;
    local_110 = 0x7fefffffffffffff;
    local_108 = 1.79769313486232e+308;
    local_100 = 1.79769313486232e+308;
    local_f8 = 0xffefffffffffffff;
    local_f0 = 0xffefffffffffffff;
    local_e8 = -1.79769313486232e+308;
    local_e0 = 0;
    local_d8 = (int)uStack_c0;
    if ((int)uStack_c0 == 0) {
      local_d4 = 0;
    }
    else {
      FUN_1446fc50a(&local_e0,uStack_c0 & 0xffffffff,0);
      FUN_1446fc4ab(local_e0,puVar2);
      iVar12 = local_d8;
    }
    param_2 = local_118;
    local_d0 = 0;
    local_110 = 0x7fefffffffffffff;
    local_108 = 1.79769313486232e+308;
    local_100 = 1.79769313486232e+308;
    local_f8 = 0xffefffffffffffff;
    local_f0 = 0xffefffffffffffff;
    local_e8 = -1.79769313486232e+308;
    iVar10 = (int)local_120;
    if (iVar12 != 0) {
      uVar17 = 0xffffffff;
      uVar18 = 0x7fefffff;
      uVar15 = 0xffffffff;
      uVar16 = 0xffefffff;
      lVar11 = 0;
      local_e8 = -1.79769313486232e+308;
      local_108 = 1.79769313486232e+308;
      local_100 = 1.79769313486232e+308;
      uVar19 = uVar15;
      uVar20 = uVar16;
      do {
        dVar23 = *(double *)(local_e0 + 0x48 + lVar11);
        if (dVar23 <= local_100) {
          local_100 = dVar23;
        }
        dVar23 = *(double *)(local_e0 + 0x40 + lVar11);
        if (dVar23 <= local_108) {
          local_108 = dVar23;
        }
        dVar23 = *(double *)(local_e0 + 0x38 + lVar11);
        if (dVar23 <= (double)CONCAT44(uVar18,uVar17)) {
          uVar17 = SUB84(dVar23,0);
          uVar18 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar23 = *(double *)(local_e0 + 0x60 + lVar11);
        if (local_e8 <= dVar23) {
          local_e8 = dVar23;
        }
        dVar23 = *(double *)(local_e0 + 0x58 + lVar11);
        if ((double)CONCAT44(uVar20,uVar19) <= dVar23) {
          uVar19 = SUB84(dVar23,0);
          uVar20 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        dVar23 = *(double *)(local_e0 + 0x50 + lVar11);
        if ((double)CONCAT44(uVar16,uVar15) <= dVar23) {
          uVar15 = SUB84(dVar23,0);
          uVar16 = (undefined4)((ulonglong)dVar23 >> 0x20);
        }
        lVar11 = lVar11 + 0x68;
      } while ((longlong)iVar12 * 0x68 - lVar11 != 0);
      local_110 = CONCAT44(uVar18,uVar17);
      local_f8 = CONCAT44(uVar16,uVar15);
      local_f0 = CONCAT44(uVar20,uVar19);
    }
    FUN_14172add2(param_1 + 0x20,&local_110);
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    iVar14 = local_124;
    if (local_c8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x54) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar13 * 0x70);
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar13 * 0x70);
    local_88 = param_3[6];
    local_b8 = *param_3;
    uStack_b0 = param_3[1];
    local_a8 = *(undefined4 *)(param_3 + 2);
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_a0 = *(undefined4 *)(param_3 + 3);
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_98 = *(undefined4 *)(param_3 + 4);
    uStack_94 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_90 = *(undefined4 *)(param_3 + 5);
    uStack_8c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_70 = param_4[2];
    local_80 = *param_4;
    dStack_78 = param_4[1];
    local_68 = param_4[3];
    uStack_60 = param_4[4];
    local_58 = param_4[5];
    lVar11 = *(longlong *)(param_1 + 0x20);
    puVar2 = (undefined8 *)(lVar11 + (longlong)iVar10 * 0x48);
    iVar12 = *(int *)(puVar2 + 7);
    *(uint *)(puVar2 + 7) = iVar12 + 1U;
    if (*(uint *)((longlong)puVar2 + 0x3c) < iVar12 + 1U) {
      FUN_14479f6b8(lVar11 + (longlong)iVar10 * 0x48 + 0x30,iVar12);
    }
    lVar11 = puVar2[6];
    lVar9 = (longlong)iVar12 * 0x68;
    *(undefined8 *)(lVar11 + 0x30 + lVar9) = local_88;
    puVar3 = (undefined8 *)(lVar11 + 0x20 + lVar9);
    *puVar3 = CONCAT44(uStack_94,local_98);
    puVar3[1] = CONCAT44(uStack_8c,uStack_90);
    puVar3 = (undefined8 *)(lVar11 + 0x10 + lVar9);
    *puVar3 = CONCAT44(uStack_a4,local_a8);
    puVar3[1] = CONCAT44(uStack_9c,uStack_a0);
    *(undefined8 *)(lVar11 + lVar9) = local_b8;
    ((undefined8 *)(lVar11 + lVar9))[1] = uStack_b0;
    *(double *)(lVar11 + 0x48 + lVar9) = local_70;
    pdVar4 = (double *)(lVar11 + 0x38 + lVar9);
    *pdVar4 = local_80;
    pdVar4[1] = dStack_78;
    pdVar4 = (double *)(lVar11 + 0x50 + lVar9);
    *pdVar4 = local_68;
    pdVar4[1] = uStack_60;
    *(double *)(lVar11 + 0x60 + lVar9) = local_58;
    *puVar2 = 0x7fefffffffffffff;
    puVar2[1] = 0x7fefffffffffffff;
    puVar2[2] = 0x7fefffffffffffff;
    puVar2[3] = 0xffefffffffffffff;
    puVar2[4] = 0xffefffffffffffff;
    puVar2[5] = 0xffefffffffffffff;
    if ((longlong)*(int *)(puVar2 + 7) != 0) {
      lVar11 = puVar2[6];
      uVar15 = 0xffffffff;
      uVar16 = 0x7fefffff;
      uVar17 = 0xffffffff;
      uVar18 = 0xffefffff;
      lVar9 = 0;
      dVar21 = -1.79769313486232e+308;
      dVar23 = 1.79769313486232e+308;
      dVar24 = 1.79769313486232e+308;
      uVar19 = uVar17;
      uVar20 = uVar18;
      do {
        dVar6 = *(double *)(lVar11 + 0x48 + lVar9);
        if (dVar6 <= dVar24) {
          dVar24 = dVar6;
        }
        dVar6 = *(double *)(lVar11 + 0x40 + lVar9);
        if (dVar6 <= dVar23) {
          dVar23 = dVar6;
        }
        dVar6 = *(double *)(lVar11 + 0x38 + lVar9);
        if (dVar6 <= (double)CONCAT44(uVar16,uVar15)) {
          uVar15 = SUB84(dVar6,0);
          uVar16 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        *puVar2 = CONCAT44(uVar16,uVar15);
        puVar2[1] = dVar23;
        puVar2[2] = dVar24;
        dVar6 = *(double *)(lVar11 + 0x60 + lVar9);
        if (dVar21 <= dVar6) {
          dVar21 = dVar6;
        }
        dVar6 = *(double *)(lVar11 + 0x58 + lVar9);
        if ((double)CONCAT44(uVar20,uVar19) <= dVar6) {
          uVar19 = SUB84(dVar6,0);
          uVar20 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        dVar6 = *(double *)(lVar11 + 0x50 + lVar9);
        if ((double)CONCAT44(uVar18,uVar17) <= dVar6) {
          uVar17 = SUB84(dVar6,0);
          uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
        }
        puVar2[3] = CONCAT44(uVar18,uVar17);
        puVar2[4] = CONCAT44(uVar20,uVar19);
        puVar2[5] = dVar21;
        lVar9 = lVar9 + 0x68;
      } while ((longlong)*(int *)(puVar2 + 7) * 0x68 - lVar9 != 0);
    }
    *(undefined1 *)(puVar2 + 8) = 1;
  }
  dVar23 = param_4[1];
  dVar24 = param_4[2];
  dVar22 = (double)_DAT_14c75efe0;
  dVar21 = param_4[3];
  dVar6 = param_4[4];
  dVar7 = param_4[5];
  lVar11 = *(longlong *)(param_1 + 0x10);
  lVar13 = lVar13 * 0x70;
  *(double *)(lVar11 + lVar13) = *param_4 - dVar22;
  *(double *)(lVar11 + 8 + lVar13) = dVar23 - dVar22;
  *(double *)(lVar11 + 0x10 + lVar13) = dVar24 - dVar22;
  *(double *)(lVar11 + 0x18 + lVar13) = dVar21 + dVar22;
  *(double *)(lVar11 + 0x20 + lVar13) = dVar6 + dVar22;
  *(double *)(lVar11 + 0x28 + lVar13) = dVar22 + dVar7;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar13) = 0xffffffff;
  *param_2 = iVar14;
  param_2[1] = iVar10;
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429cd488 FUN_1429cd488 body=89 status=ok
// SIG undefined FUN_1429cd488(void)

ulonglong FUN_1429cd488(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x50);
  if (uVar3 == 0xffffffffffffffff) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar3 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x1c) == uVar2) {
      FUN_14008b9bc((longlong *)(param_1 + 0x10),uVar2);
    }
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + (longlong)(int)uVar2 * 0x70);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  else {
    *(undefined4 *)(param_1 + 0x50) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + uVar3 * 0x70);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1429cd4e2 FUN_1429cd4e2 body=2368 status=ok
// SIG undefined FUN_1429cd4e2(void)

void FUN_1429cd4e2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  LARGE_INTEGER LVar5;
  double dVar6;
  int iVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  LARGE_INTEGER LVar17;
  LARGE_INTEGER LVar18;
  LARGE_INTEGER LVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong lVar25;
  LARGE_INTEGER *pLVar26;
  LARGE_INTEGER *pLVar27;
  DWORD DVar28;
  DWORD DVar29;
  LONG LVar30;
  LONG LVar31;
  LARGE_INTEGER LVar32;
  LARGE_INTEGER LVar33;
  LARGE_INTEGER LVar34;
  LARGE_INTEGER LVar35;
  double dVar36;
  DWORD DVar37;
  LONG LVar38;
  undefined1 auStack_1f8 [40];
  longlong *local_1d0;
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER LStack_150;
  LARGE_INTEGER local_148;
  DWORD local_140;
  undefined4 uStack_13c;
  DWORD DStack_138;
  undefined4 uStack_134;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128 [3];
  LARGE_INTEGER LStack_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER LStack_100;
  LARGE_INTEGER local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar21 = *(uint *)(param_2 + 1);
  uVar23 = (ulonglong)uVar21;
  uVar9 = (longlong)(int)uVar21 / (longlong)*(int *)(param_1 + 0x130);
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar9 & 0xffffffff,
                  (longlong)(int)uVar21 % (longlong)*(int *)(param_1 + 0x130) & 0xffffffff);
  }
  lVar22 = param_1 + 0x158;
  if (*(int *)(param_1 + 0x164) < (int)uVar9) {
    FUN_14481578e(lVar22,uVar9 & 0xffffffff);
  }
  iVar7 = *(int *)(param_1 + 0x170);
  if ((longlong)iVar7 == 0) {
    local_1c4 = FUN_14008b8b4(param_1 + 0x178,1);
  }
  else {
    local_1c4 = *(int *)(*(longlong *)(param_1 + 0x168) + -4 + (longlong)iVar7 * 4);
    *(int *)(param_1 + 0x170) = iVar7 + -1;
    FUN_14479f406(param_1 + 0x168);
  }
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar23);
  }
  lVar1 = *(longlong *)(param_1 + 0x178) + (longlong)local_1c4 * 0xf8;
  lVar25 = *(longlong *)(param_1 + 0x178) + (longlong)local_1c4 * 0xf8 + 0x38;
  if (*(int *)(lVar1 + 0x44) < (int)uVar21) {
    FUN_14479f570(lVar25,uVar21);
  }
  local_1d0 = (longlong *)(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (*(int *)(param_1 + 0x11c) < 0) {
    FUN_14479f570(local_1d0,0);
  }
  FUN_144936aaa(param_1 + 0x20);
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14008b684(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  if (*(int *)(param_1 + 0x44) < 0) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_14479f570(param_1 + 0x38,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
  FUN_1402a3552(param_1 + 0x58);
  if (*(int *)(param_1 + 0xb4) < 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_14481578e(param_1 + 0xa8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(int *)(param_1 + 0xc4) < 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
    FUN_14481578e(param_1 + 0xb8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1402a31f8();
  }
  local_1c0 = param_1 + 0x120;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  if (*(int *)(param_1 + 300) < 0) {
    FUN_14008b768(local_1c0,0);
  }
  *(undefined4 *)(param_1 + 0x144) = 0;
  QueryPerformanceCounter(local_128);
  *(double *)(param_1 + 0x148) = (double)local_128[0].QuadPart * DAT_14c83f420 + 16777216.0;
  iVar7 = DAT_14c75efb8;
  dVar12 = (double)DAT_14c75efb8;
  *(double *)(param_1 + 0xd0) = dVar12;
  dVar10 = 1.0;
  if (0 < iVar7) {
    dVar10 = 1.0 / dVar12;
  }
  *(double *)(param_1 + 0xd8) = dVar10;
  *(undefined4 *)(param_1 + 0xe0) = DAT_14c75efbc;
  *(undefined4 *)(param_1 + 0xe4) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0xe8) = DAT_14c75efc4;
  local_1b0 = lVar22;
  local_1a8 = uVar23;
  if (*(char *)(param_1 + 0x48) == '\x01') {
    if ((longlong)(int)param_2[1] != 0) {
      pLVar26 = (LARGE_INTEGER *)*param_2;
      pLVar27 = pLVar26 + (longlong)(int)param_2[1] * 0xd;
      do {
        local_f8 = pLVar26[6];
        local_128[0] = *pLVar26;
        local_128[1] = pLVar26[1];
        local_128[2] = pLVar26[2];
        LStack_110 = pLVar26[3];
        local_108 = pLVar26[4];
        LStack_100 = pLVar26[5];
        local_148 = pLVar26[9];
        local_158 = pLVar26[7];
        LStack_150 = pLVar26[8];
        local_130 = pLVar26[0xc];
        local_140 = pLVar26[10].s.LowPart;
        uStack_13c = *(undefined4 *)((longlong)pLVar26 + 0x54);
        DStack_138 = pLVar26[0xb].s.LowPart;
        uStack_134 = *(undefined4 *)((longlong)pLVar26 + 0x5c);
        FUN_14006a09c(param_1,local_128,&local_158,1);
        pLVar26 = pLVar26 + 0xd;
      } while (pLVar26 != pLVar27);
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined8 *)(lVar1 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x28) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x30) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    local_1b8 = lVar25;
    if ((longlong)(int)param_2[1] != 0) {
      puVar24 = (undefined8 *)*param_2;
      local_1a0 = puVar24 + (longlong)(int)param_2[1] * 0xd;
      do {
        local_168 = *puVar24;
        uStack_160 = puVar24[1];
        iVar7 = *(int *)(puVar24 + 2);
        local_188 = *(undefined8 *)((longlong)puVar24 + 0x24);
        uStack_180 = *(undefined8 *)((longlong)puVar24 + 0x2c);
        local_178 = *(undefined4 *)((longlong)puVar24 + 0x34);
        local_198 = *(undefined8 *)((longlong)puVar24 + 0x14);
        uStack_190 = *(undefined8 *)((longlong)puVar24 + 0x1c);
        local_128[2].s = *(LARGE_INTEGER *)&((LARGE_INTEGER *)(puVar24 + 9))->s;
        local_128[0] = *(LARGE_INTEGER *)(puVar24 + 7);
        local_128[1] = *(LARGE_INTEGER *)(puVar24 + 8);
        LStack_100.s = *(LARGE_INTEGER *)&((LARGE_INTEGER *)(puVar24 + 0xc))->s;
        LStack_110 = *(LARGE_INTEGER *)(puVar24 + 10);
        local_108 = *(LARGE_INTEGER *)(puVar24 + 0xb);
        lVar22 = 0;
        do {
          LVar5 = local_128[lVar22 + 3];
          if ((double)LVar5 < (double)local_128[lVar22]) {
LAB_1429cdbfe:
            local_128[0].QuadPart = -0x10000000000001;
            local_128[1].QuadPart = -0x10000000000001;
            local_128[2].QuadPart = -0x10000000000001;
            LStack_110.QuadPart = 0x7fefffffffffffff;
            local_108.s.LowPart = 0xffffffff;
            local_108.s.HighPart = 0x7fefffff;
            LStack_100.QuadPart = 0x7fefffffffffffff;
            goto LAB_1429cdc42;
          }
          iVar20 = _finite((double)local_128[lVar22]);
          if (iVar20 == 0) goto LAB_1429cdbfe;
          iVar20 = _finite((double)LVar5);
          LVar33 = LStack_100;
          LVar35 = local_108;
          LVar19 = LStack_110;
          LVar18 = local_128[2];
          LVar17 = local_128[1];
          LVar5 = local_128[0];
          if (iVar20 == 0) goto LAB_1429cdbfe;
          lVar22 = lVar22 + 1;
        } while (lVar22 != 3);
        DVar37 = LStack_100.s.LowPart;
        LVar38 = LStack_100.s.HighPart;
        DVar29 = local_128[2].s.LowPart;
        LVar31 = local_128[2].s.HighPart;
        dVar10 = (double)LStack_100 - (double)local_128[2];
        dVar12 = (double)local_108 - (double)local_128[1];
        dVar14 = (double)LStack_110 - (double)local_128[0];
        dVar6 = dVar14;
        if ((dVar14 <= dVar10 || dVar14 <= dVar12) && (dVar6 = dVar12, dVar12 <= dVar10)) {
          dVar6 = dVar10;
        }
        if (*(double *)(param_1 + 0x138) <= dVar6 && dVar6 != *(double *)(param_1 + 0x138)) {
LAB_1429cdc42:
          uVar8 = *(undefined4 *)(param_1 + 0x118);
          if (*(int *)(param_1 + 0x128) <= iVar7) {
            FUN_14008b974(local_1c0,(iVar7 - *(int *)(param_1 + 0x128)) + 1);
          }
          lVar25 = (longlong)iVar7 * 0x18;
          *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 0x14 + lVar25) = 1;
          lVar22 = *(longlong *)(param_1 + 0x120);
          *(undefined4 *)(lVar22 + lVar25) = uVar8;
          puVar3 = (undefined4 *)(lVar22 + 4 + lVar25);
          *puVar3 = 0xffffffff;
          puVar3[1] = 0xffffffff;
          puVar3[2] = 0xffffffff;
          puVar3[3] = 0xffffffff;
          iVar20 = *(int *)(param_1 + 0x118);
          *(uint *)(param_1 + 0x118) = iVar20 + 1U;
          if (*(uint *)(param_1 + 0x11c) < iVar20 + 1U) {
            FUN_14479f6b8(local_1d0,iVar20);
          }
          lVar22 = *local_1d0;
          lVar25 = (longlong)iVar20 * 0x68;
          *(undefined8 *)(lVar22 + lVar25) = local_168;
          ((undefined8 *)(lVar22 + lVar25))[1] = uStack_160;
          *(int *)(lVar22 + 0x10 + lVar25) = iVar7;
          *(undefined4 *)(lVar22 + 0x34 + lVar25) = local_178;
          puVar3 = (undefined4 *)(lVar22 + 0x24 + lVar25);
          *puVar3 = (undefined4)local_188;
          puVar3[1] = local_188._4_4_;
          puVar3[2] = (undefined4)uStack_180;
          puVar3[3] = uStack_180._4_4_;
          puVar2 = (undefined8 *)(lVar22 + 0x14 + lVar25);
          *puVar2 = local_198;
          puVar2[1] = uStack_190;
          pLVar26 = (LARGE_INTEGER *)(lVar22 + 0x38 + lVar25);
          *pLVar26 = local_128[0];
          pLVar26[1] = local_128[1];
          ((LARGE_INTEGER *)(lVar22 + 0x48 + lVar25))->s = (_struct_19)local_128[2];
          pDVar4 = (DWORD *)(lVar22 + 0x50 + lVar25);
          *pDVar4 = LStack_110.s.LowPart;
          pDVar4[1] = LStack_110.s.HighPart;
          pDVar4[2] = local_108._0_4_;
          pDVar4[3] = local_108._4_4_;
          ((LARGE_INTEGER *)(lVar22 + 0x60 + lVar25))->s = (_struct_19)LStack_100;
        }
        else {
          iVar20 = *(int *)(lVar1 + 0x40);
          uVar21 = iVar20 + 1;
          *(uint *)(lVar1 + 0x40) = uVar21;
          if (*(uint *)(lVar1 + 0x44) < uVar21) {
            FUN_14479f6b8(local_1b8,iVar20);
          }
          lVar22 = *(longlong *)(lVar1 + 0x38);
          lVar25 = (longlong)iVar20 * 0x68;
          *(undefined8 *)(lVar22 + lVar25) = local_168;
          ((undefined8 *)(lVar22 + lVar25))[1] = uStack_160;
          *(int *)(lVar22 + 0x10 + lVar25) = iVar7;
          *(undefined4 *)(lVar22 + 0x34 + lVar25) = local_178;
          puVar2 = (undefined8 *)(lVar22 + 0x24 + lVar25);
          *puVar2 = local_188;
          puVar2[1] = uStack_180;
          puVar2 = (undefined8 *)(lVar22 + 0x14 + lVar25);
          *puVar2 = local_198;
          puVar2[1] = uStack_190;
          ((LARGE_INTEGER *)(lVar22 + 0x48 + lVar25))->s = (_struct_19)local_128[2];
          pLVar26 = (LARGE_INTEGER *)(lVar22 + 0x38 + lVar25);
          *pLVar26 = local_128[0];
          pLVar26[1] = local_128[1];
          pLVar26 = (LARGE_INTEGER *)(lVar22 + 0x50 + lVar25);
          pLVar26->s = (_struct_19)LStack_110;
          pLVar26[1].s = (_struct_19)local_108;
          ((LARGE_INTEGER *)(lVar22 + 0x60 + lVar25))->s = (_struct_19)LStack_100;
          dVar11 = (double)(int)uVar21;
          dVar6 = *(double *)(lVar1 + 0x18);
          DVar28 = SUB84(dVar6,0);
          LVar30 = (LONG)((ulonglong)dVar6 >> 0x20);
          if ((double)LVar18 <= dVar6) {
            DVar28 = DVar29;
            LVar30 = LVar31;
          }
          LVar34 = *(LARGE_INTEGER *)(lVar1 + 0x10);
          if ((double)LVar17 <= (double)*(LARGE_INTEGER *)(lVar1 + 0x10)) {
            LVar34 = LVar17;
          }
          LVar32 = *(LARGE_INTEGER *)(lVar1 + 8);
          if ((double)LVar5 <= (double)*(LARGE_INTEGER *)(lVar1 + 8)) {
            LVar32 = LVar5;
          }
          *(LARGE_INTEGER *)(lVar1 + 8) = LVar32;
          *(LARGE_INTEGER *)(lVar1 + 0x10) = LVar34;
          *(ulonglong *)(lVar1 + 0x18) = CONCAT44(LVar30,DVar28);
          dVar6 = *(double *)(lVar1 + 0x30);
          DVar29 = SUB84(dVar6,0);
          LVar31 = (LONG)((ulonglong)dVar6 >> 0x20);
          if (dVar6 <= (double)LVar33) {
            DVar29 = DVar37;
            LVar31 = LVar38;
          }
          LVar33 = *(LARGE_INTEGER *)(lVar1 + 0x28);
          if ((double)*(LARGE_INTEGER *)(lVar1 + 0x28) <= (double)LVar35) {
            LVar33 = LVar35;
          }
          LVar35 = *(LARGE_INTEGER *)(lVar1 + 0x20);
          if ((double)*(LARGE_INTEGER *)(lVar1 + 0x20) <= (double)LVar19) {
            LVar35 = LVar19;
          }
          *(LARGE_INTEGER *)(lVar1 + 0x20) = LVar35;
          *(LARGE_INTEGER *)(lVar1 + 0x28) = LVar33;
          *(ulonglong *)(lVar1 + 0x30) = CONCAT44(LVar31,DVar29);
          dVar6 = dVar10 * 0.5 + (double)LVar18;
          dVar13 = dVar12 * 0.5 + (double)LVar17;
          dVar14 = dVar14 * 0.5 + (double)LVar5;
          dVar36 = dVar6 - *(double *)(lVar1 + 0x58);
          dVar10 = dVar13 - *(double *)(lVar1 + 0x50);
          dVar12 = dVar14 - *(double *)(lVar1 + 0x48);
          dVar16 = dVar12 / dVar11 + *(double *)(lVar1 + 0x48);
          *(double *)(lVar1 + 0x48) = dVar16;
          dVar15 = dVar10 / dVar11 + *(double *)(lVar1 + 0x50);
          *(double *)(lVar1 + 0x50) = dVar15;
          dVar11 = dVar36 / dVar11 + *(double *)(lVar1 + 0x58);
          *(double *)(lVar1 + 0x58) = dVar11;
          *(double *)(lVar1 + 0x60) = (dVar14 - dVar16) * dVar12 + *(double *)(lVar1 + 0x60);
          *(double *)(lVar1 + 0x68) = (dVar13 - dVar15) * dVar10 + *(double *)(lVar1 + 0x68);
          *(double *)(lVar1 + 0x70) = (dVar6 - dVar11) * dVar36 + *(double *)(lVar1 + 0x70);
        }
        puVar24 = puVar24 + 0xd;
      } while (puVar24 != local_1a0);
    }
    *(int *)(param_1 + 0x144) = (int)local_1a8;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    iVar7 = *(int *)(param_1 + 0x160);
    *(uint *)(param_1 + 0x160) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x164) < iVar7 + 1U) {
      FUN_1446f48e2(local_1b0,iVar7);
    }
    *(int *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar7 * 4) = local_1c4;
    FUN_14479dcac(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429cde24 FUN_1429cde24 body=2761 status=ok
// SIG undefined FUN_1429cde24(void)

void FUN_1429cde24(longlong param_1,LARGE_INTEGER param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  LARGE_INTEGER *pLVar5;
  double dVar6;
  int iVar7;
  double *pdVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  LARGE_INTEGER LVar16;
  LARGE_INTEGER LVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  double dVar23;
  longlong lVar24;
  longlong lVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  LARGE_INTEGER LVar29;
  double dVar30;
  LARGE_INTEGER LVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined1 auStack_238 [40];
  longlong local_210;
  longlong *local_208;
  int local_1fc;
  longlong local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  LARGE_INTEGER local_168;
  LARGE_INTEGER LStack_160;
  longlong local_158;
  int iStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  ulonglong uStack_140;
  undefined8 local_138;
  LARGE_INTEGER local_128 [2];
  double dStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar21 = *(uint *)(param_2.QuadPart + 0x10);
  uVar9 = (longlong)(int)uVar21 / (longlong)*(int *)(param_1 + 0x128);
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar9 & 0xffffffff,
                  (longlong)(int)uVar21 % (longlong)*(int *)(param_1 + 0x128) & 0xffffffff);
  }
  if (*(int *)(param_1 + 0x15c) < (int)uVar9) {
    FUN_14481578e(param_1 + 0x150,uVar9 & 0xffffffff);
  }
  local_1fc = FUN_146e09e18(param_1);
  if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4((ulonglong)uVar21);
  }
  local_210 = *(longlong *)(param_1 + 0x170) + (longlong)local_1fc * 0xf8;
  lVar22 = *(longlong *)(param_1 + 0x170) + (longlong)local_1fc * 0xf8 + 0x38;
  if (*(int *)(local_210 + 0x44) < (int)uVar21) {
    FUN_14479f570(lVar22,uVar21);
  }
  local_208 = (longlong *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) < 0) {
    FUN_14479f570(local_208,0);
  }
  iVar20 = *(int *)(param_1 + 0x2c);
  FUN_146e04599(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar20 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_146e045c2(param_1 + 0x20,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14008b684(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_14479f570(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1402a3552(param_1 + 0x50);
  if (*(int *)(param_1 + 0xac) < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_14481578e(param_1 + 0xa0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_14481578e(param_1 + 0xb0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_146e042b0();
  }
  local_1f8 = param_1 + 0x118;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) < 0) {
    FUN_14008b768(local_1f8,0);
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  QueryPerformanceCounter(&local_168);
  *(double *)(param_1 + 0x140) = (double)local_168.QuadPart * DAT_14c83f420 + 16777216.0;
  iVar20 = DAT_14c75efb8;
  dVar11 = (double)DAT_14c75efb8;
  *(double *)(param_1 + 200) = dVar11;
  dVar23 = 1.0;
  if (0 < iVar20) {
    dVar23 = 1.0 / dVar11;
  }
  *(double *)(param_1 + 0xd0) = dVar23;
  *(undefined4 *)(param_1 + 0xd8) = DAT_14c75efbc;
  *(undefined4 *)(param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0xe0) = DAT_14c75efc4;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    local_128[1].QuadPart = 0;
    dStack_118 = 0.0;
    local_110 = (double)CONCAT44(local_110._4_4_,0xffffffff);
    uStack_108 = (double)((ulonglong)uStack_108 & 0xffffffff00000000);
    local_128[0] = param_2;
    FUN_14008b454(local_128);
    if (dStack_118 != 0.0) {
      dVar23 = dStack_118;
      do {
        iVar20 = (int)local_110;
        lVar24 = (longlong)(int)local_110;
        lVar22 = *(longlong *)((longlong)dVar23 + 0x58);
        lVar19 = lVar24 * 0x38;
        local_138 = *(undefined8 *)(lVar22 + 0x30 + lVar19);
        local_168 = *(LARGE_INTEGER *)(lVar22 + lVar19);
        LStack_160 = ((LARGE_INTEGER *)(lVar22 + lVar19))[1];
        plVar1 = (longlong *)(lVar22 + 0x10 + lVar19);
        local_158 = *plVar1;
        iStack_150 = (int)plVar1[1];
        uStack_14c = *(undefined4 *)((longlong)plVar1 + 0xc);
        puVar2 = (ulonglong *)(lVar22 + 0x20 + lVar19);
        local_148 = *puVar2;
        uStack_140 = puVar2[1];
        lVar22 = *(longlong *)((longlong)dVar23 + 0x40);
        lVar19 = lVar24 * 0x30;
        local_188 = *(undefined8 *)(lVar22 + 0x10 + lVar19);
        local_198 = *(undefined8 *)(lVar22 + lVar19);
        uStack_190 = ((undefined8 *)(lVar22 + lVar19))[1];
        local_170 = *(undefined8 *)(lVar22 + 0x28 + lVar19);
        puVar3 = (undefined4 *)(lVar22 + 0x18 + lVar19);
        local_180 = *puVar3;
        uStack_17c = puVar3[1];
        uStack_178 = puVar3[2];
        uStack_174 = puVar3[3];
        FUN_1429cf068(param_1,&local_168,&local_198,
                      *(undefined1 *)(*(longlong *)((longlong)dVar23 + 0x28) + lVar24));
        if ((longlong *)local_128[1].QuadPart == (longlong *)0x0) {
          local_110 = (double)CONCAT44(local_110._4_4_,iVar20 + 1);
          if (uStack_108._4_4_ <= iVar20 + 1) {
LAB_1429ce26b:
            uStack_108 = (double)CONCAT44(uStack_108._4_4_,(int)uStack_108 + 1);
            FUN_14008b454(local_128);
            dVar23 = dStack_118;
          }
        }
        else {
          lVar22 = (longlong)local_100._0_4_;
          iVar20 = local_100._0_4_ + 1;
          local_100 = (double)CONCAT44(local_100._4_4_,iVar20);
          if (*(int *)(local_128[1].QuadPart + 8) <= iVar20) goto LAB_1429ce26b;
          pdVar8 = *(double **)(*(longlong *)local_128[1] + 8 + lVar22 * 8);
          dVar23 = *pdVar8;
          local_110 = (double)CONCAT44(local_110._4_4_,*(undefined4 *)(pdVar8 + 1));
          dStack_118 = dVar23;
        }
      } while (dVar23 != 0.0);
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined8 *)(local_210 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)(local_210 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)(local_210 + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)(local_210 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)(local_210 + 0x28) = 0xffefffffffffffff;
    *(undefined8 *)(local_210 + 0x30) = 0xffefffffffffffff;
    *(undefined8 *)(local_210 + 0x48) = 0;
    *(undefined8 *)(local_210 + 0x50) = 0;
    *(undefined8 *)(local_210 + 0x58) = 0;
    *(undefined8 *)(local_210 + 0x60) = 0;
    *(undefined8 *)(local_210 + 0x68) = 0;
    *(undefined8 *)(local_210 + 0x70) = 0;
    LStack_160.QuadPart = 0;
    local_158 = 0;
    iStack_150 = -1;
    local_148 = local_148 & 0xffffffff00000000;
    local_1f0 = param_1 + 0x150;
    local_1e8 = (ulonglong)uVar21;
    local_1e0 = lVar22;
    local_168 = param_2;
    FUN_14008b454(&local_168);
    lVar22 = local_158;
    iVar20 = iStack_150;
    while (iStack_150 = iVar20, lVar22 != 0) {
      lVar25 = (longlong)iVar20;
      lVar19 = *(longlong *)(lVar22 + 0x58);
      lVar24 = lVar25 * 0x38;
      local_1a8 = *(undefined8 *)(lVar19 + lVar24);
      uStack_1a0 = ((undefined8 *)(lVar19 + lVar24))[1];
      iVar7 = *(int *)(lVar19 + 0x10 + lVar24);
      local_1b8 = *(undefined4 *)(lVar19 + 0x34 + lVar24);
      puVar4 = (undefined8 *)(lVar19 + 0x24 + lVar24);
      local_1c8 = *puVar4;
      uStack_1c0 = puVar4[1];
      puVar4 = (undefined8 *)(lVar19 + 0x14 + lVar24);
      local_1d8 = *puVar4;
      uStack_1d0 = puVar4[1];
      lVar19 = *(longlong *)(lVar22 + 0x40);
      lVar24 = lVar25 * 0x30;
      dStack_118 = *(double *)(lVar19 + 0x10 + lVar24);
      local_128[0] = *(LARGE_INTEGER *)(lVar19 + lVar24);
      local_128[1] = ((LARGE_INTEGER *)(lVar19 + lVar24))[1];
      local_100 = *(double *)(lVar19 + 0x28 + lVar24);
      pdVar8 = (double *)(lVar19 + 0x18 + lVar24);
      local_110 = *pdVar8;
      uStack_108 = pdVar8[1];
      if (*(char *)(*(longlong *)(lVar22 + 0x28) + lVar25) == '\x01') {
        lVar19 = 0;
        do {
          dVar23 = (double)(&local_110)[lVar19];
          if (((dVar23 < (double)local_128[lVar19]) ||
              (iVar18 = _finite((double)local_128[lVar19]), iVar18 == 0)) ||
             (iVar18 = _finite(dVar23), dVar30 = local_100, dVar32 = uStack_108, dVar11 = local_110,
             dVar23 = dStack_118, LVar17 = local_128[1], LVar16 = local_128[0], iVar18 == 0))
          goto LAB_1429ce733;
          lVar19 = lVar19 + 1;
        } while (lVar19 != 3);
        uVar34 = SUB84(local_100,0);
        uVar9 = (ulonglong)local_100 >> 0x20;
        uVar27 = SUB84(dStack_118,0);
        uVar15 = (ulonglong)dStack_118 >> 0x20;
        dVar12 = local_100 - dStack_118;
        dVar13 = uStack_108 - (double)local_128[1];
        dVar14 = local_110 - (double)local_128[0];
        dVar6 = dVar14;
        if ((dVar14 <= dVar12 || dVar14 <= dVar13) && (dVar6 = dVar13, dVar13 <= dVar12)) {
          dVar6 = dVar12;
        }
        if (*(double *)(param_1 + 0x130) <= dVar6 && dVar6 != *(double *)(param_1 + 0x130))
        goto LAB_1429ce777;
        iVar18 = *(int *)(local_210 + 0x40);
        uVar21 = iVar18 + 1;
        *(uint *)(local_210 + 0x40) = uVar21;
        if (*(uint *)(local_210 + 0x44) < uVar21) {
          FUN_14479f6b8(local_1e0,iVar18);
        }
        lVar19 = *(longlong *)(local_210 + 0x38);
        lVar24 = (longlong)iVar18 * 0x68;
        *(undefined8 *)(lVar19 + lVar24) = local_1a8;
        ((undefined8 *)(lVar19 + lVar24))[1] = uStack_1a0;
        *(int *)(lVar19 + 0x10 + lVar24) = iVar7;
        *(undefined4 *)(lVar19 + 0x34 + lVar24) = local_1b8;
        puVar4 = (undefined8 *)(lVar19 + 0x24 + lVar24);
        *puVar4 = local_1c8;
        puVar4[1] = uStack_1c0;
        puVar4 = (undefined8 *)(lVar19 + 0x14 + lVar24);
        *puVar4 = local_1d8;
        puVar4[1] = uStack_1d0;
        *(double *)(lVar19 + 0x48 + lVar24) = dStack_118;
        pLVar5 = (LARGE_INTEGER *)(lVar19 + 0x38 + lVar24);
        *pLVar5 = local_128[0];
        pLVar5[1] = local_128[1];
        pdVar8 = (double *)(lVar19 + 0x50 + lVar24);
        *pdVar8 = local_110;
        pdVar8[1] = uStack_108;
        *(double *)(lVar19 + 0x60 + lVar24) = local_100;
        dVar10 = (double)(int)uVar21;
        dVar6 = *(double *)(local_210 + 0x18);
        uVar26 = SUB84(dVar6,0);
        uVar28 = (int)((ulonglong)dVar6 >> 0x20);
        if (dVar23 <= dVar6) {
          uVar26 = uVar27;
          uVar28 = (int)uVar15;
        }
        LVar31 = *(LARGE_INTEGER *)(local_210 + 0x10);
        if ((double)LVar17 <= (double)*(LARGE_INTEGER *)(local_210 + 0x10)) {
          LVar31 = LVar17;
        }
        LVar29 = *(LARGE_INTEGER *)(local_210 + 8);
        if ((double)LVar16 <= (double)*(LARGE_INTEGER *)(local_210 + 8)) {
          LVar29 = LVar16;
        }
        *(LARGE_INTEGER *)(local_210 + 8) = LVar29;
        *(LARGE_INTEGER *)(local_210 + 0x10) = LVar31;
        *(ulonglong *)(local_210 + 0x18) = CONCAT44(uVar28,uVar26);
        dVar6 = *(double *)(local_210 + 0x30);
        uVar27 = SUB84(dVar6,0);
        uVar26 = (int)((ulonglong)dVar6 >> 0x20);
        if (dVar6 <= dVar30) {
          uVar27 = uVar34;
          uVar26 = (int)uVar9;
        }
        dVar30 = *(double *)(local_210 + 0x28);
        if (*(double *)(local_210 + 0x28) <= dVar32) {
          dVar30 = dVar32;
        }
        dVar32 = *(double *)(local_210 + 0x20);
        if (*(double *)(local_210 + 0x20) <= dVar11) {
          dVar32 = dVar11;
        }
        *(double *)(local_210 + 0x20) = dVar32;
        *(double *)(local_210 + 0x28) = dVar30;
        *(ulonglong *)(local_210 + 0x30) = CONCAT44(uVar26,uVar27);
        dVar23 = dVar12 * 0.5 + dVar23;
        dVar30 = dVar13 * 0.5 + (double)LVar17;
        dVar12 = dVar14 * 0.5 + (double)LVar16;
        dVar33 = dVar23 - *(double *)(local_210 + 0x58);
        dVar11 = dVar30 - *(double *)(local_210 + 0x50);
        dVar32 = dVar12 - *(double *)(local_210 + 0x48);
        dVar6 = dVar32 / dVar10 + *(double *)(local_210 + 0x48);
        *(double *)(local_210 + 0x48) = dVar6;
        dVar14 = dVar11 / dVar10 + *(double *)(local_210 + 0x50);
        *(double *)(local_210 + 0x50) = dVar14;
        dVar13 = dVar33 / dVar10 + *(double *)(local_210 + 0x58);
        *(double *)(local_210 + 0x58) = dVar13;
        *(double *)(local_210 + 0x60) = (dVar12 - dVar6) * dVar32 + *(double *)(local_210 + 0x60);
        *(double *)(local_210 + 0x68) = (dVar30 - dVar14) * dVar11 + *(double *)(local_210 + 0x68);
        *(double *)(local_210 + 0x70) = (dVar23 - dVar13) * dVar33 + *(double *)(local_210 + 0x70);
      }
      else {
LAB_1429ce733:
        local_128[0].QuadPart = -0x10000000000001;
        local_128[1].QuadPart = -0x10000000000001;
        dStack_118 = -1.79769313486232e+308;
        local_110 = 1.79769313486232e+308;
        uStack_108 = 1.79769313486232e+308;
        local_100 = 1.79769313486232e+308;
LAB_1429ce777:
        uVar27 = *(undefined4 *)(param_1 + 0x110);
        if (*(int *)(param_1 + 0x120) <= iVar7) {
          FUN_14008b974(local_1f8,(iVar7 - *(int *)(param_1 + 0x120)) + 1);
        }
        lVar24 = (longlong)iVar7 * 0x18;
        *(undefined1 *)(*(longlong *)(param_1 + 0x118) + 0x14 + lVar24) = 1;
        lVar19 = *(longlong *)(param_1 + 0x118);
        *(undefined4 *)(lVar19 + lVar24) = uVar27;
        puVar3 = (undefined4 *)(lVar19 + 4 + lVar24);
        *puVar3 = 0xffffffff;
        puVar3[1] = 0xffffffff;
        puVar3[2] = 0xffffffff;
        puVar3[3] = 0xffffffff;
        iVar18 = *(int *)(param_1 + 0x110);
        *(uint *)(param_1 + 0x110) = iVar18 + 1U;
        if (*(uint *)(param_1 + 0x114) < iVar18 + 1U) {
          FUN_14479f6b8(local_208,iVar18);
        }
        lVar19 = *local_208;
        lVar24 = (longlong)iVar18 * 0x68;
        *(undefined8 *)(lVar19 + lVar24) = local_1a8;
        ((undefined8 *)(lVar19 + lVar24))[1] = uStack_1a0;
        *(int *)(lVar19 + 0x10 + lVar24) = iVar7;
        *(undefined4 *)(lVar19 + 0x34 + lVar24) = local_1b8;
        puVar3 = (undefined4 *)(lVar19 + 0x24 + lVar24);
        *puVar3 = (undefined4)local_1c8;
        puVar3[1] = local_1c8._4_4_;
        puVar3[2] = (undefined4)uStack_1c0;
        puVar3[3] = uStack_1c0._4_4_;
        puVar4 = (undefined8 *)(lVar19 + 0x14 + lVar24);
        *puVar4 = local_1d8;
        puVar4[1] = uStack_1d0;
        pLVar5 = (LARGE_INTEGER *)(lVar19 + 0x38 + lVar24);
        *pLVar5 = local_128[0];
        pLVar5[1] = local_128[1];
        *(double *)(lVar19 + 0x48 + lVar24) = dStack_118;
        puVar3 = (undefined4 *)(lVar19 + 0x50 + lVar24);
        *puVar3 = (int)local_110;
        puVar3[1] = local_110._4_4_;
        puVar3[2] = (int)uStack_108;
        puVar3[3] = uStack_108._4_4_;
        *(double *)(lVar19 + 0x60 + lVar24) = local_100;
      }
      if ((longlong *)LStack_160.QuadPart == (longlong *)0x0) {
        iStack_150 = iVar20 + 1;
        iVar20 = iStack_150;
        if (local_148._4_4_ <= iStack_150) {
LAB_1429ce8b1:
          local_148 = CONCAT44(local_148._4_4_,(int)local_148 + 1);
          FUN_14008b454(&local_168);
          lVar22 = local_158;
          iVar20 = iStack_150;
        }
      }
      else {
        lVar22 = (longlong)(int)uStack_140;
        iVar20 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,iVar20);
        if (*(int *)(LStack_160.QuadPart + 8) <= iVar20) goto LAB_1429ce8b1;
        plVar1 = *(longlong **)(*(longlong *)LStack_160 + 8 + lVar22 * 8);
        iVar20 = (int)plVar1[1];
        lVar22 = *plVar1;
        local_158 = lVar22;
      }
    }
    *(int *)(param_1 + 0x13c) = (int)local_1e8;
    *(undefined8 *)(local_210 + 0x78) = 0;
    iVar20 = *(int *)(param_1 + 0x158);
    *(uint *)(param_1 + 0x158) = iVar20 + 1U;
    if (*(uint *)(param_1 + 0x15c) < iVar20 + 1U) {
      FUN_1446f48e2(local_1f0,iVar20);
    }
    *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar20 * 4) = local_1fc;
    FUN_146e09e6a(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429ce8f0 FUN_1429ce8f0 body=151 status=ok
// SIG undefined FUN_1429ce8f0(void)

void FUN_1429ce8f0(longlong param_1,char param_2)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    if (param_2 != '\0') {
      *(undefined4 *)(param_1 + 0x138) = 0;
    }
    if (*(int *)(param_1 + 0x158) != 0) {
      *(undefined4 *)(param_1 + 0x13c) = 0;
      QueryPerformanceCounter(&local_20);
      *(double *)(param_1 + 0x140) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
      FUN_146e09e6a(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429ce988 FUN_1429ce988 body=1758 status=ok
// SIG undefined FUN_1429ce988(void)

undefined8 FUN_1429ce988(longlong param_1,longlong param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 *local_78;
  uint *local_70;
  undefined4 local_64;
  longlong local_60;
  uint *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(param_1 + 0x180) = 1;
  lVar5 = (longlong)*(int *)(param_2 + 0x10);
  if ((lVar5 < 0) || (*(int *)(param_1 + 0x120) <= *(int *)(param_2 + 0x10))) {
    uVar7 = 0;
    goto LAB_1429cea8d;
  }
  lVar6 = *(longlong *)(param_1 + 0x118);
  puVar1 = (uint *)(lVar6 + lVar5 * 0x18);
  uVar7 = 0;
  if ((puVar1 == (uint *)0x0) || (*(char *)(lVar6 + 0x14 + lVar5 * 0x18) == '\0'))
  goto LAB_1429cea8d;
  uVar8 = *puVar1;
  if (uVar8 == 0xffffffff) {
    uVar8 = puVar1[1];
    uVar11 = (ulonglong)(int)uVar8;
    if (uVar11 == 0xffffffffffffffff) {
      if ((longlong)(int)puVar1[2] != -1) {
        if (*(char *)(param_1 + 0x40) == '\x01') {
          uVar11 = (ulonglong)puVar1[4];
          lVar5 = param_1;
          goto LAB_1429ceaef;
        }
        FUN_142988d80((longlong)(int)puVar1[2] * 200 + *(longlong *)(param_1 + 0x20),param_2);
      }
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0xc0);
      if (lVar5 == 0) {
        if ((((*(double *)(param_1 + 200) <= 0.0) || (*(int *)(param_1 + 0xd8) < 1)) ||
            (*(int *)(param_1 + 0xdc) < 1)) || (*(int *)(param_1 + 0xe0) < 1)) {
          iVar4 = *(int *)(param_1 + 0x38);
          if ((int)(uVar8 + 1) < iVar4) {
            *(uint *)(lVar6 + 4 +
                     (longlong)
                     *(int *)((longlong)iVar4 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x30)) * 0x18
                     ) = uVar8;
            uVar8 = puVar1[1];
            iVar4 = *(int *)(param_1 + 0x38);
          }
          iVar10 = ~uVar8 + iVar4;
          if (iVar10 != 0) {
            iVar12 = 1;
            if (iVar10 < 1) {
              iVar12 = iVar10;
            }
            lVar5 = *(longlong *)(param_1 + 0x30);
            goto LAB_1429cec5d;
          }
        }
        else {
          uVar9 = puVar1[3];
          local_4c = uVar8;
          if ((longlong)(int)uVar9 == -1) {
            local_58 = &local_4c;
            dVar15 = *(double *)(param_1 + 0xd0);
            lVar5 = *(longlong *)(param_1 + 0x30);
            lVar6 = uVar11 * 0x68;
            dVar20 = *(double *)(lVar5 + 0x38 + lVar6) * dVar15;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
            auVar22 = roundpd(auVar22,auVar22,1);
            dVar20 = *(double *)(lVar5 + 0x50 + lVar6) * dVar15;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
            auVar24 = roundpd(auVar24,auVar24,1);
            local_90 = (longlong)auVar24._0_8_;
            local_60 = param_1;
            if ((longlong)auVar22._0_8_ <= local_90) {
              dVar20 = *(double *)(lVar5 + lVar6 + 0x40) * dVar15;
              auVar17._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
              auVar17._8_8_ = 0;
              auVar17 = roundpd(auVar17,auVar17,1);
              dVar15 = dVar15 * *(double *)(lVar5 + lVar6 + 0x58);
              auVar19._8_8_ = 0;
              auVar19._0_8_ = ABS(dVar15) * 2.220446049250313e-16 + dVar15;
              auVar24 = roundpd(auVar19,auVar19,1);
              lVar5 = (longlong)auVar22._0_8_;
              do {
                if ((longlong)auVar17._0_8_ <= (longlong)auVar24._0_8_) {
                  uVar8 = ((uint)lVar5 & 0xff00) << 8 | (uint)lVar5 & 0xff;
                  uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                  uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                  lVar6 = (longlong)auVar17._0_8_;
                  do {
                    uVar9 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
                    uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                    uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                    cVar3 = FUN_146e0c894(&local_60,
                                          (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                          (uVar8 * 2 | uVar8) & 0x55555555);
                    if (cVar3 == '\0') goto LAB_1429cee37;
                    lVar6 = lVar6 + 1;
                  } while ((longlong)auVar24._0_8_ + 1 != lVar6);
                }
                bVar14 = lVar5 != local_90;
                lVar5 = lVar5 + 1;
              } while (bVar14);
            }
          }
          else {
            iVar4 = *(int *)(param_1 + 0xb8);
            if ((int)(uVar9 + 1) < iVar4) {
              *(uint *)(lVar6 + 0xc +
                       (longlong)
                       *(int *)(*(longlong *)(param_1 + 0x30) + 0x10 +
                               (longlong)
                               *(int *)(*(longlong *)(param_1 + 0xb0) + -4 + (longlong)iVar4 * 4) *
                               0x68) * 0x18) = uVar9;
              iVar4 = *(int *)(param_1 + 0xb8);
            }
            iVar10 = ~uVar9 + iVar4;
            if (iVar10 != 0) {
              iVar12 = 1;
              if (iVar10 < 1) {
                iVar12 = iVar10;
              }
              memmove((void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar9 * 4),
                      (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(iVar4 - iVar12) * 4),
                      (longlong)iVar12 << 2);
              iVar4 = *(int *)(param_1 + 0xb8);
            }
            *(int *)(param_1 + 0xb8) = iVar4 + -1;
            FUN_14479f406(param_1 + 0xb0);
          }
LAB_1429cee37:
          iVar4 = *(int *)(param_1 + 0x38);
          if ((int)(local_4c + 1) < iVar4) {
            lVar5 = (longlong)iVar4 + -1;
            local_64 = (undefined4)lVar5;
            lVar6 = *(longlong *)(param_1 + 0x30);
            lVar13 = (longlong)*(int *)((longlong)iVar4 * 0x68 + -0x58 + lVar6);
            local_88 = lVar13 * 3;
            lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x118) + 0xc + lVar13 * 0x18);
            if (lVar13 == -1) {
              local_78 = &local_64;
              local_70 = &local_4c;
              dVar15 = *(double *)(param_1 + 0xd0);
              lVar5 = lVar5 * 0x68;
              dVar20 = *(double *)(lVar6 + 0x38 + lVar5) * dVar15;
              auVar21._8_8_ = 0;
              auVar21._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
              auVar22 = roundpd(auVar21,auVar21,1);
              dVar20 = *(double *)(lVar6 + 0x50 + lVar5) * dVar15;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
              auVar24 = roundpd(auVar23,auVar23,1);
              local_90 = (longlong)auVar24._0_8_;
              local_80 = param_1;
              if ((longlong)auVar22._0_8_ <= local_90) {
                dVar20 = *(double *)(lVar6 + lVar5 + 0x40) * dVar15;
                auVar18._0_8_ = ABS(dVar20) * 2.220446049250313e-16 + dVar20;
                auVar18._8_8_ = 0;
                auVar19 = roundpd(auVar18,auVar18,1);
                dVar15 = dVar15 * *(double *)(lVar6 + lVar5 + 0x58);
                auVar16._8_8_ = 0;
                auVar16._0_8_ = ABS(dVar15) * 2.220446049250313e-16 + dVar15;
                auVar24 = roundpd(auVar16,auVar16,1);
                lVar5 = (longlong)auVar22._0_8_;
                do {
                  if ((longlong)auVar19._0_8_ <= (longlong)auVar24._0_8_) {
                    uVar8 = ((uint)lVar5 & 0xff00) << 8 | (uint)lVar5 & 0xff;
                    uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                    uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                    lVar6 = (longlong)auVar19._0_8_;
                    do {
                      uVar9 = ((uint)lVar6 & 0xff00) << 8 | (uint)lVar6 & 0xff;
                      uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
                      uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
                      cVar3 = FUN_146e0c9d4(&local_80,
                                            (uVar9 * 2 | uVar9 * 4) & 0xaaaaaaaa |
                                            (uVar8 * 2 | uVar8) & 0x55555555);
                      if (cVar3 == '\0') goto LAB_1429cf028;
                      lVar6 = lVar6 + 1;
                    } while ((longlong)auVar24._0_8_ + 1 != lVar6);
                  }
                  bVar14 = lVar5 != local_90;
                  lVar5 = lVar5 + 1;
                } while (bVar14);
              }
            }
            else {
              *(uint *)(*(longlong *)(param_1 + 0xb0) + lVar13 * 4) = local_4c;
            }
LAB_1429cf028:
            *(uint *)(*(longlong *)(param_1 + 0x118) + 4 + local_88 * 8) = local_4c;
            iVar4 = *(int *)(param_1 + 0x38);
          }
          iVar10 = ~local_4c + iVar4;
          if (iVar10 != 0) {
            iVar12 = 1;
            if (iVar10 < 1) {
              iVar12 = iVar10;
            }
            lVar5 = *(longlong *)(param_1 + 0x30);
            uVar8 = local_4c;
LAB_1429cec5d:
            memmove((void *)((longlong)(int)uVar8 * 0x68 + lVar5),
                    (void *)((longlong)(iVar4 - iVar12) * 0x68 + lVar5),(longlong)iVar12 * 0x68);
            iVar4 = *(int *)(param_1 + 0x38);
          }
        }
        lVar5 = param_1 + 0x30;
        *(int *)(param_1 + 0x38) = iVar4 + -1;
        goto LAB_1429cea81;
      }
LAB_1429ceaef:
      FUN_1429d1af8(lVar5,uVar11,param_2);
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x110);
    if ((int)(uVar8 + 1) < iVar4) {
      *(uint *)(lVar6 + (longlong)
                        *(int *)((longlong)iVar4 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x108)) *
                        0x18) = uVar8;
      uVar8 = *puVar1;
      iVar4 = *(int *)(param_1 + 0x110);
    }
    lVar5 = param_1 + 0x108;
    iVar10 = ~uVar8 + iVar4;
    if (iVar10 != 0) {
      iVar12 = 1;
      if (iVar10 < 1) {
        iVar12 = iVar10;
      }
      memmove((void *)((longlong)(int)uVar8 * 0x68 + *(longlong *)(param_1 + 0x108)),
              (void *)((longlong)(iVar4 - iVar12) * 0x68 + *(longlong *)(param_1 + 0x108)),
              (longlong)iVar12 * 0x68);
      iVar4 = *(int *)(param_1 + 0x110);
    }
    *(int *)(param_1 + 0x110) = iVar4 + -1;
LAB_1429cea81:
    FUN_144aa423e(lVar5);
  }
  lVar6 = (longlong)*(int *)(param_2 + 0x10);
  lVar5 = lVar6;
  if ((-1 < lVar6) && (*(int *)(param_2 + 0x10) < *(int *)(param_1 + 0x120))) {
    lVar13 = *(longlong *)(param_1 + 0x118);
    lVar5 = lVar6 * 3;
    puVar2 = (undefined4 *)(lVar13 + lVar6 * 0x18);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0xffffffff;
    puVar2[2] = 0xffffffff;
    puVar2[3] = 0xffffffff;
    *(undefined4 *)(lVar13 + 0x10 + lVar6 * 0x18) = 0xffffffff;
    *(undefined1 *)(lVar13 + 0x14 + lVar6 * 0x18) = 0;
  }
  *(undefined1 *)(param_1 + 0x181) = 1;
  uVar7 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
LAB_1429cea8d:
  *(undefined1 *)(param_1 + 0x180) = 0;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1429cf068 FUN_1429cf068 body=6719 status=ok
// SIG undefined FUN_1429cf068(void)

ulonglong FUN_1429cf068(longlong param_1,longlong *param_2,double *param_3,char param_4)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  double *pdVar23;
  longlong lVar24;
  undefined8 unaff_R12;
  undefined7 uVar25;
  uint *puVar26;
  bool bVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar37 [16];
  double dVar36;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined1 auStack_1c8 [36];
  uint local_1a4;
  longlong local_1a0;
  longlong *local_198;
  undefined8 local_190;
  longlong *local_188;
  double *local_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  double local_160;
  longlong local_158;
  double *local_150;
  undefined8 local_148;
  uint *puStack_140;
  longlong *local_138;
  double adStack_130 [3];
  longlong local_118;
  double local_110;
  double dStack_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  longlong local_d8;
  uint *local_d0;
  uint local_c4;
  longlong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined1 *)(param_1 + 0x180) = 1;
  if (param_4 == '\0') {
LAB_1429cf133:
    bVar27 = false;
  }
  else {
    dVar28 = param_3[3];
    uVar68 = SUB84(dVar28,0);
    uVar70 = (undefined4)((ulonglong)dVar28 >> 0x20);
    if ((dVar28 < *param_3) || (iVar8 = _finite(*param_3), iVar8 == 0)) goto LAB_1429cf133;
    uVar20 = 0;
    bVar27 = false;
    do {
      iVar8 = _finite((double)CONCAT44(uVar70,uVar68));
      if ((iVar8 == 0) || (bVar27 = 1 < uVar20, uVar20 == 2)) break;
      dVar28 = param_3[uVar20 + 4];
      uVar68 = SUB84(dVar28,0);
      uVar70 = (undefined4)((ulonglong)dVar28 >> 0x20);
      if (dVar28 < param_3[uVar20 + 1]) break;
      iVar8 = _finite(param_3[uVar20 + 1]);
      uVar20 = uVar20 + 1;
    } while (iVar8 != 0);
  }
  plVar17 = (longlong *)(param_1 + 0x118);
  uVar11 = *(uint *)(param_2 + 2);
  uVar20 = (ulonglong)uVar11;
  iVar8 = *(int *)(param_1 + 0x120);
  if ((int)uVar11 < iVar8 && -1 < (int)uVar11) {
    plVar22 = (longlong *)(uVar20 * 3);
    puVar26 = (uint *)(*plVar17 + uVar20 * 0x18);
    if ((puVar26 == (uint *)0x0) || (*(char *)(*plVar17 + 0x14 + uVar20 * 0x18) == '\0'))
    goto LAB_1429cf21d;
    lVar9 = (longlong)(int)puVar26[2];
    uVar25 = (undefined7)((ulonglong)unaff_R12 >> 8);
    uVar20 = CONCAT71(uVar25,1);
    if (lVar9 != -1) {
      if (bVar27) {
        if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
          lVar16 = *(longlong *)(param_1 + 0x20);
          lVar24 = lVar9 * 200;
          lVar14 = lVar16 + lVar24;
          plVar22 = *(longlong **)(lVar16 + 0x30 + lVar24);
          local_138 = plVar22;
          plVar1 = (longlong *)(lVar16 + 0x20 + lVar24);
          local_148 = *plVar1;
          puStack_140 = (uint *)plVar1[1];
          pdVar23 = (double *)(lVar16 + 0x38 + lVar24);
          adStack_130[0] = *pdVar23;
          adStack_130[1] = pdVar23[1];
          adStack_130[2] = *(double *)(lVar16 + 0x48 + lVar24);
          lVar16 = 0;
          do {
            dVar28 = param_3[lVar16];
            if ((dVar28 < (double)(&local_148)[lVar16]) ||
               (adStack_130[lVar16] <= dVar28 && dVar28 != adStack_130[lVar16])) goto LAB_1429cffaa;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          lVar16 = 3;
          do {
            dVar28 = param_3[lVar16];
            if ((dVar28 < (&local_160)[lVar16]) ||
               ((double)(&local_148)[lVar16] <= dVar28 && dVar28 != (double)(&local_148)[lVar16]))
            goto LAB_1429cffaa;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 6);
        }
        else {
          lVar14 = (longlong)(int)puVar26[4] * 0x70 + *(longlong *)(param_1 + 0x10);
          lVar16 = 0;
          do {
            dVar28 = param_3[lVar16];
            if ((dVar28 < *(double *)(lVar14 + lVar16 * 8)) ||
               (pdVar23 = (double *)(lVar14 + 0x18 + lVar16 * 8),
               *pdVar23 <= dVar28 && dVar28 != *pdVar23)) goto LAB_1429cf6fd;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 3);
          lVar16 = 3;
          do {
            dVar28 = param_3[lVar16];
            if ((dVar28 < *(double *)(lVar14 + -0x18 + lVar16 * 8)) ||
               (pdVar23 = (double *)(lVar14 + lVar16 * 8), *pdVar23 <= dVar28 && dVar28 != *pdVar23)
               ) goto LAB_1429cf6fd;
            lVar16 = lVar16 + 1;
          } while (lVar16 != 6);
          lVar14 = lVar9 * 200 + *(longlong *)(param_1 + 0x20);
        }
        uVar20 = CONCAT71(uVar25,1);
        FUN_142988e06(lVar14,param_2,param_3,CONCAT71((int7)((ulonglong)plVar22 >> 8),1));
        goto LAB_1429d0843;
      }
      if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
LAB_1429cffaa:
        FUN_142988d80(lVar9 * 200 + *(longlong *)(param_1 + 0x20),param_2);
        puVar26[2] = 0xffffffff;
      }
      else {
LAB_1429cf6fd:
        FUN_1429d1af8(param_1,puVar26[4],param_2);
        puVar26[2] = 0xffffffff;
        puVar26[4] = 0xffffffff;
      }
    }
  }
  else {
LAB_1429cf21d:
    if (iVar8 <= (int)uVar11) {
      FUN_14008b974(plVar17,(uVar11 - iVar8) + 1);
    }
    *(undefined1 *)(*plVar17 + 0x14 + (longlong)(int)uVar11 * 0x18) = 1;
    puVar26 = (uint *)((longlong)(int)uVar11 * 0x18 + *plVar17);
    uVar20 = 0;
  }
  *(undefined1 *)(param_1 + 0x181) = 1;
  uVar11 = (uint)uVar20;
  if (bVar27) {
    dVar28 = param_3[5];
    uVar69 = SUB84(dVar28,0);
    uVar71 = (undefined4)((ulonglong)dVar28 >> 0x20);
    dVar63 = param_3[2];
    uVar72 = SUB84(dVar63,0);
    uVar73 = (undefined4)((ulonglong)dVar63 >> 0x20);
    dVar28 = dVar28 - dVar63;
    dVar63 = param_3[4];
    dVar3 = *param_3;
    dVar4 = param_3[1];
    dVar35 = dVar63 - dVar4;
    dVar5 = param_3[3];
    dVar36 = dVar5 - dVar3;
    if ((dVar36 <= dVar35 || dVar36 <= dVar28) && (dVar36 = dVar35, dVar35 <= dVar28)) {
      dVar36 = dVar28;
    }
    uVar68 = SUB84(dVar63,0);
    uVar70 = (int)((ulonglong)dVar63 >> 0x20);
    uVar74 = SUB84(dVar5,0);
    uVar75 = (int)((ulonglong)dVar5 >> 0x20);
    uVar76 = SUB84(dVar4,0);
    uVar77 = (int)((ulonglong)dVar4 >> 0x20);
    uVar78 = SUB84(dVar3,0);
    uVar79 = (int)((ulonglong)dVar3 >> 0x20);
    if (dVar36 < *(double *)(param_1 + 0x130) || dVar36 == *(double *)(param_1 + 0x130)) {
      pdVar23 = param_3 + 3;
      uVar12 = puVar26[1];
      lVar9 = (longlong)(int)uVar12;
      if (lVar9 == -1) {
        if (*(char *)(param_1 + 0x40) == '\x01') {
          FUN_1429d216a(param_1,&local_148,param_2,param_3);
          puVar26[4] = (uint)local_148;
          puVar26[2] = local_148._4_4_;
        }
        else {
          lVar9 = *(longlong *)(param_1 + 0xc0);
          if (lVar9 != 0) goto LAB_1429cfed7;
          local_118 = param_2[6];
          local_148 = *param_2;
          puStack_140 = (uint *)param_2[1];
          local_138 = (longlong *)param_2[2];
          adStack_130[0] = (double)param_2[3];
          adStack_130[1] = (double)param_2[4];
          adStack_130[2] = (double)param_2[5];
          local_100 = param_3[2];
          local_110 = *param_3;
          dStack_108 = param_3[1];
          local_f8 = *pdVar23;
          dStack_f0 = param_3[4];
          local_e8 = param_3[5];
          uVar12 = *(uint *)(param_1 + 0x38);
          *(uint *)(param_1 + 0x38) = uVar12 + 1;
          if (*(uint *)(param_1 + 0x3c) < uVar12 + 1) {
            FUN_14479f6b8(param_1 + 0x30,uVar12);
          }
          lVar9 = *(longlong *)(param_1 + 0x30);
          lVar14 = (longlong)(int)uVar12 * 0x68;
          *(longlong *)(lVar9 + 0x30 + lVar14) = local_118;
          pdVar23 = (double *)(lVar9 + 0x20 + lVar14);
          *pdVar23 = adStack_130[1];
          pdVar23[1] = adStack_130[2];
          plVar17 = (longlong *)(lVar9 + 0x10 + lVar14);
          *plVar17 = (longlong)local_138;
          plVar17[1] = (longlong)adStack_130[0];
          *(longlong *)(lVar9 + lVar14) = local_148;
          ((longlong *)(lVar9 + lVar14))[1] = (longlong)puStack_140;
          *(double *)(lVar9 + 0x48 + lVar14) = local_100;
          pdVar23 = (double *)(lVar9 + 0x38 + lVar14);
          *pdVar23 = local_110;
          pdVar23[1] = dStack_108;
          pdVar23 = (double *)(lVar9 + 0x50 + lVar14);
          *pdVar23 = local_f8;
          pdVar23[1] = dStack_f0;
          *(double *)(lVar9 + 0x60 + lVar14) = local_e8;
          puVar26[1] = uVar12;
          if ((((*(longlong *)(param_1 + 0xc0) != 0) || (*(double *)(param_1 + 200) <= 0.0)) ||
              (*(int *)(param_1 + 0xd8) < 1)) ||
             ((uVar10 = (ulonglong)*(int *)(param_1 + 0xdc), (longlong)uVar10 < 1 ||
              (*(int *)(param_1 + 0xe0) < 1)))) goto LAB_1429d0779;
          local_d8 = CONCAT44(local_d8._4_4_,uVar12);
          dVar28 = *(double *)(param_1 + 0xd0);
          auVar38._8_8_ = 0;
          auVar38._0_8_ = ABS(*param_3 * dVar28) * 2.220446049250313e-16 + *param_3 * dVar28;
          auVar38 = roundpd(auVar38,auVar38,1);
          lVar9 = (longlong)auVar38._0_8_;
          auVar54._8_8_ = 0;
          auVar54._0_8_ = ABS(param_3[3] * dVar28) * 2.220446049250313e-16 + param_3[3] * dVar28;
          auVar38 = roundpd(auVar54,auVar54,1);
          local_1a0 = (longlong)auVar38._0_8_;
          if (local_1a0 < lVar9) {
LAB_1429d08af:
            local_c4 = (uint)local_c4._1_3_ << 8;
LAB_1429d08b7:
            *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
            local_1a4 = uVar11;
          }
          else {
            auVar57._8_8_ = 0;
            auVar57._0_8_ = ABS(param_3[1] * dVar28) * 2.220446049250313e-16 + param_3[1] * dVar28;
            auVar38 = roundpd(auVar57,auVar57,1);
            local_198 = (longlong *)(longlong)auVar38._0_8_;
            auVar56._8_8_ = 0;
            auVar56._0_8_ = ABS(dVar28 * param_3[4]) * 2.220446049250313e-16 + dVar28 * param_3[4];
            auVar38 = roundpd(auVar56,auVar56,1);
            lVar14 = (longlong)auVar38._0_8_;
            if (lVar14 < (longlong)local_198) goto LAB_1429d08af;
            uVar20 = (local_1a0 - lVar9) + 1;
            uVar18 = (lVar14 - (longlong)local_198) + 1;
            uVar19 = uVar18 * uVar20;
            bVar27 = uVar19 - uVar10 == 0;
            local_c4 = CONCAT31(local_c4._1_3_,
                                ((uVar19 < uVar10 || bVar27) && uVar18 <= uVar10) &&
                                uVar20 <= uVar10);
            if ((uVar19 >= uVar10 && !bVar27 || uVar18 > uVar10) || uVar20 > uVar10)
            goto LAB_1429d08b7;
            puStack_140 = &local_c4;
            local_1a4 = uVar11;
            local_148 = param_1;
            do {
              uVar11 = ((uint)lVar9 & 0xff00) << 8 | (uint)lVar9 & 0xff;
              uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
              uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
              plVar17 = local_198;
              do {
                uVar13 = ((uint)plVar17 & 0xff00) << 8 | (uint)plVar17 & 0xff;
                uVar13 = (uVar13 << 4 | uVar13) & 0xf0f0f0f;
                uVar13 = (uVar13 * 4 | uVar13) & 0x33333333;
                cVar7 = FUN_146e0d2a6(&local_148,
                                      (uVar13 * 2 | uVar13 * 4) & 0xaaaaaaaa |
                                      (uVar11 * 2 | uVar11) & 0x55555555);
                if (cVar7 == '\0') goto LAB_1429d08bd;
                plVar17 = (longlong *)((longlong)plVar17 + 1);
              } while ((longlong *)(lVar14 + 1) != plVar17);
              bVar27 = lVar9 != local_1a0;
              lVar9 = lVar9 + 1;
            } while (bVar27);
          }
LAB_1429d08bd:
          if ((char)local_c4 == '\x01') {
            local_b8 = (uint *)&local_d8;
            dVar28 = *(double *)(param_1 + 0xd0);
            auVar60._8_8_ = 0;
            auVar60._0_8_ = ABS(*param_3 * dVar28) * 2.220446049250313e-16 + *param_3 * dVar28;
            auVar38 = roundpd(auVar60,auVar60,1);
            auVar61._8_8_ = 0;
            auVar61._0_8_ = ABS(param_3[3] * dVar28) * 2.220446049250313e-16 + param_3[3] * dVar28;
            auVar54 = roundpd(auVar61,auVar61,1);
            local_1a0 = (longlong)auVar54._0_8_;
            uVar11 = 0xffffffff;
            if (local_1a0 < (longlong)auVar38._0_8_) {
              uVar20 = (ulonglong)local_1a4;
              local_c0 = param_1;
            }
            else {
              auVar62._8_8_ = 0;
              auVar62._0_8_ = ABS(param_3[1] * dVar28) * 2.220446049250313e-16 + param_3[1] * dVar28
              ;
              auVar56 = roundpd(auVar62,auVar62,1);
              auVar34._8_8_ = 0;
              auVar34._0_8_ = ABS(dVar28 * param_3[4]) * 2.220446049250313e-16 + dVar28 * param_3[4]
              ;
              auVar54 = roundpd(auVar34,auVar34,1);
              lVar9 = (longlong)auVar38._0_8_;
              local_c0 = param_1;
              do {
                if ((longlong)auVar56._0_8_ <= (longlong)auVar54._0_8_) {
                  uVar11 = ((uint)lVar9 & 0xff00) << 8 | (uint)lVar9 & 0xff;
                  uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                  uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                  lVar14 = (longlong)auVar56._0_8_;
                  do {
                    uVar12 = ((uint)lVar14 & 0xff00) << 8 | (uint)lVar14 & 0xff;
                    uVar12 = (uVar12 << 4 | uVar12) & 0xf0f0f0f;
                    uVar12 = (uVar12 * 4 | uVar12) & 0x33333333;
                    cVar7 = FUN_146e0d32a(&local_c0,
                                          (uVar12 * 2 | uVar12 * 4) & 0xaaaaaaaa |
                                          (uVar11 * 2 | uVar11) & 0x55555555);
                    if (cVar7 == '\0') goto LAB_1429d0a94;
                    lVar14 = lVar14 + 1;
                  } while ((longlong)auVar54._0_8_ + 1 != lVar14);
                }
                bVar27 = lVar9 != local_1a0;
                lVar9 = lVar9 + 1;
              } while (bVar27);
LAB_1429d0a94:
              uVar20 = (ulonglong)local_1a4;
              uVar11 = 0xffffffff;
            }
          }
          else {
            uVar11 = *(uint *)(param_1 + 0xb8);
            *(uint *)(param_1 + 0xb8) = uVar11 + 1;
            uVar20 = (ulonglong)local_1a4;
            if (*(uint *)(param_1 + 0xbc) < uVar11 + 1) {
              FUN_1446f48e2((longlong *)(param_1 + 0xb0),uVar11);
            }
            *(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar11 * 4) = uVar12;
          }
          puVar26[3] = uVar11;
        }
      }
      else {
        lVar14 = *(longlong *)(param_1 + 0xc0);
        if (lVar14 == 0) {
          if (((0.0 < *(double *)(param_1 + 200)) && (0 < *(int *)(param_1 + 0xd8))) &&
             ((0 < *(int *)(param_1 + 0xdc) && (0 < *(int *)(param_1 + 0xe0))))) {
            uVar13 = puVar26[3];
            local_c4 = uVar12;
            if (uVar13 == 0xffffffff) {
              lVar14 = lVar9 * 0x68 + *(longlong *)(param_1 + 0x30);
              local_150 = (double *)(lVar14 + 0x38);
              puStack_140 = &local_c4;
              dVar28 = *(double *)(param_1 + 0xd0);
              auVar37._8_8_ = 0;
              auVar37._0_8_ = ABS(*local_150 * dVar28) * 2.220446049250313e-16 + *local_150 * dVar28
              ;
              auVar38 = roundpd(auVar37,auVar37,1);
              plVar17 = (longlong *)(longlong)auVar38._0_8_;
              dVar36 = *(double *)(lVar14 + 0x40) * dVar28;
              auVar39._8_8_ = 0;
              auVar39._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
              auVar38 = roundpd(auVar39,auVar39,1);
              local_1a0 = (longlong)auVar38._0_8_;
              dVar36 = *(double *)(lVar14 + 0x50) * dVar28;
              auVar40._8_8_ = 0;
              auVar40._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
              auVar38 = roundpd(auVar40,auVar40,1);
              local_188 = (longlong *)(longlong)auVar38._0_8_;
              dVar36 = *(double *)(lVar14 + 0x58) * dVar28;
              auVar41._8_8_ = 0;
              auVar41._0_8_ = ABS(dVar36) * 2.220446049250313e-16 + dVar36;
              auVar38 = roundpd(auVar41,auVar41,1);
              local_170 = (longlong *)(longlong)auVar38._0_8_;
              auVar42._0_8_ = ABS(dVar3 * dVar28) * 2.220446049250313e-16 + dVar3 * dVar28;
              auVar42._8_8_ = 0;
              auVar38 = roundpd(auVar42,auVar42,1);
              local_160 = (double)(longlong)auVar38._0_8_;
              auVar43._0_8_ = ABS(dVar4 * dVar28) * 2.220446049250313e-16 + dVar4 * dVar28;
              auVar43._8_8_ = 0;
              auVar38 = roundpd(auVar43,auVar43,1);
              lVar14 = (longlong)auVar38._0_8_;
              auVar44._0_8_ = ABS(dVar5 * dVar28) * 2.220446049250313e-16 + dVar5 * dVar28;
              auVar44._8_8_ = 0;
              auVar38 = roundpd(auVar44,auVar44,1);
              local_168 = (longlong)auVar38._0_8_;
              auVar29._0_8_ = ABS(dVar63 * dVar28) * 2.220446049250313e-16 + dVar63 * dVar28;
              auVar29._8_8_ = 0;
              auVar38 = roundpd(auVar29,auVar29,1);
              local_1a4 = uVar11;
              local_180 = pdVar23;
              local_178 = lVar9;
              local_148 = param_1;
              if (((local_168 < (longlong)local_188 ||
                   (local_1a0 < lVar14 || (longlong)plVar17 < (longlong)local_160)) ||
                   (longlong)auVar38._0_8_ < (longlong)local_170) &&
                 ((longlong)plVar17 <= (longlong)local_188)) {
                lVar9 = (longlong)local_170 + 1;
                local_158 = lVar14;
                do {
                  if (local_1a0 <= (longlong)local_170) {
                    bVar27 = (longlong)plVar17 < (longlong)local_160;
                    bVar6 = local_168 < (longlong)plVar17;
                    uVar11 = ((uint)plVar17 & 0xff00) << 8 | (uint)plVar17 & 0xff;
                    uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                    uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                    local_190 = CONCAT44(local_190._4_4_,uVar11 * 2 | uVar11) & 0xffffffff55555555;
                    lVar16 = local_1a0;
                    local_198 = plVar17;
                    do {
                      if (((longlong)auVar38._0_8_ < lVar16) ||
                         (lVar16 < lVar14 || (bVar6 || bVar27))) {
                        uVar11 = ((uint)lVar16 & 0xff00) << 8 | (uint)lVar16 & 0xff;
                        uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                        uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                        cVar7 = FUN_146e0d55c(&local_148,
                                              (uVar11 * 2 | uVar11 * 4) & 0xaaaaaaaa |
                                              (uint)local_190);
                        plVar17 = local_198;
                        lVar14 = local_158;
                        if (cVar7 == '\0') goto LAB_1429cfa3f;
                      }
                      lVar16 = lVar16 + 1;
                    } while (lVar9 != lVar16);
                  }
                  bVar27 = plVar17 != local_188;
                  plVar17 = (longlong *)((longlong)plVar17 + 1);
                } while (bVar27);
              }
LAB_1429cfa3f:
              local_b8 = &local_c4;
              dVar28 = *(double *)(param_1 + 0xd0);
              auVar45._8_8_ = 0;
              auVar45._0_8_ = ABS(*param_3 * dVar28) * 2.220446049250313e-16 + *param_3 * dVar28;
              auVar38 = roundpd(auVar45,auVar45,1);
              plVar17 = (longlong *)(longlong)auVar38._0_8_;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = ABS(param_3[1] * dVar28) * 2.220446049250313e-16 + param_3[1] * dVar28
              ;
              auVar38 = roundpd(auVar46,auVar46,1);
              local_1a0 = (longlong)auVar38._0_8_;
              auVar47._8_8_ = 0;
              auVar47._0_8_ = ABS(param_3[3] * dVar28) * 2.220446049250313e-16 + param_3[3] * dVar28
              ;
              auVar38 = roundpd(auVar47,auVar47,1);
              plVar22 = (longlong *)(longlong)auVar38._0_8_;
              auVar48._8_8_ = 0;
              auVar48._0_8_ = ABS(param_3[4] * dVar28) * 2.220446049250313e-16 + param_3[4] * dVar28
              ;
              auVar38 = roundpd(auVar48,auVar48,1);
              local_188 = (longlong *)(longlong)auVar38._0_8_;
              auVar49._8_8_ = 0;
              auVar49._0_8_ = ABS(*local_150 * dVar28) * 2.220446049250313e-16 + *local_150 * dVar28
              ;
              auVar38 = roundpd(auVar49,auVar49,1);
              local_160 = (double)(longlong)auVar38._0_8_;
              auVar50._8_8_ = 0;
              auVar50._0_8_ =
                   ABS(local_150[1] * dVar28) * 2.220446049250313e-16 + local_150[1] * dVar28;
              auVar38 = roundpd(auVar50,auVar50,1);
              lVar9 = (longlong)auVar38._0_8_;
              auVar51._8_8_ = 0;
              auVar51._0_8_ =
                   ABS(local_150[3] * dVar28) * 2.220446049250313e-16 + local_150[3] * dVar28;
              auVar38 = roundpd(auVar51,auVar51,1);
              local_168 = (longlong)auVar38._0_8_;
              auVar30._8_8_ = 0;
              auVar30._0_8_ =
                   ABS(dVar28 * local_150[4]) * 2.220446049250313e-16 + dVar28 * local_150[4];
              auVar38 = roundpd(auVar30,auVar30,1);
              uVar13 = 0xffffffff;
              local_c0 = param_1;
              if ((((longlong)plVar22 <= local_168 &&
                   (lVar9 <= local_1a0 && (longlong)local_160 <= (longlong)plVar17)) &&
                   (longlong)local_188 <= (longlong)auVar38._0_8_) ||
                 ((longlong)plVar22 < (longlong)plVar17)) goto LAB_1429cfeb3;
              lVar14 = (longlong)local_188 + 1;
              local_170 = plVar22;
              local_158 = lVar9;
              do {
                if (local_1a0 <= (longlong)local_188) {
                  bVar27 = (longlong)plVar17 < (longlong)local_160;
                  bVar6 = local_168 < (longlong)plVar17;
                  uVar11 = ((uint)plVar17 & 0xff00) << 8 | (uint)plVar17 & 0xff;
                  uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                  uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                  local_190 = CONCAT44(local_190._4_4_,uVar11 * 2 | uVar11) & 0xffffffff55555555;
                  lVar16 = local_1a0;
                  local_198 = plVar17;
                  do {
                    if (((longlong)auVar38._0_8_ < lVar16) || (lVar16 < lVar9 || (bVar6 || bVar27)))
                    {
                      uVar11 = ((uint)lVar16 & 0xff00) << 8 | (uint)lVar16 & 0xff;
                      uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                      uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                      cVar7 = FUN_146e0d69c(&local_c0,
                                            (uVar11 * 2 | uVar11 * 4) & 0xaaaaaaaa | (uint)local_190
                                           );
                      plVar17 = local_198;
                      plVar22 = local_170;
                      lVar9 = local_158;
                      if (cVar7 == '\0') {
                        local_d0 = &local_c4;
                        dVar28 = *(double *)(param_1 + 0xd0);
                        auVar52._8_8_ = 0;
                        auVar52._0_8_ =
                             ABS(*param_3 * dVar28) * 2.220446049250313e-16 + *param_3 * dVar28;
                        auVar38 = roundpd(auVar52,auVar52,1);
                        auVar53._8_8_ = 0;
                        auVar53._0_8_ =
                             ABS(param_3[3] * dVar28) * 2.220446049250313e-16 + param_3[3] * dVar28;
                        auVar54 = roundpd(auVar53,auVar53,1);
                        local_198 = (longlong *)(longlong)auVar54._0_8_;
                        local_d8 = param_1;
                        if ((longlong)local_198 < (longlong)auVar38._0_8_) goto LAB_1429cfe7b;
                        auVar55._8_8_ = 0;
                        auVar55._0_8_ =
                             ABS(param_3[1] * dVar28) * 2.220446049250313e-16 + param_3[1] * dVar28;
                        auVar56 = roundpd(auVar55,auVar55,1);
                        auVar31._8_8_ = 0;
                        auVar31._0_8_ =
                             ABS(dVar28 * param_3[4]) * 2.220446049250313e-16 + dVar28 * param_3[4];
                        auVar54 = roundpd(auVar31,auVar31,1);
                        local_190 = (ulonglong)auVar54._0_8_;
                        local_1a0 = local_190 + 1;
                        plVar17 = (longlong *)(longlong)auVar38._0_8_;
                        goto LAB_1429cfdc4;
                      }
                    }
                    lVar16 = lVar16 + 1;
                  } while (lVar14 != lVar16);
                }
                bVar27 = plVar17 != plVar22;
                plVar17 = (longlong *)((longlong)plVar17 + 1);
              } while (bVar27);
              uVar20 = (ulonglong)local_1a4;
              uVar13 = 0xffffffff;
              lVar9 = local_178;
              pdVar23 = local_180;
            }
            goto LAB_1429d06fb;
          }
          goto LAB_1429d06ff;
        }
        lVar16 = *(longlong *)(lVar14 + 0x10) + lVar9 * 0x70;
        lVar24 = 0;
        do {
          dVar28 = param_3[lVar24];
          if ((dVar28 < *(double *)(lVar16 + lVar24 * 8)) ||
             (pdVar23 = (double *)(lVar16 + 0x18 + lVar24 * 8),
             *pdVar23 <= dVar28 && dVar28 != *pdVar23)) goto LAB_1429cf6e0;
          lVar24 = lVar24 + 1;
        } while (lVar24 != 3);
        lVar24 = 3;
        do {
          dVar28 = param_3[lVar24];
          if ((dVar28 < *(double *)(lVar16 + -0x18 + lVar24 * 8)) ||
             (pdVar23 = (double *)(lVar16 + lVar24 * 8), *pdVar23 <= dVar28 && dVar28 != *pdVar23))
          goto LAB_1429cf6e0;
          lVar24 = lVar24 + 1;
        } while (lVar24 != 6);
        FUN_142988e06((longlong)*(int *)(*(longlong *)(lVar14 + 0x10) + 0x60 + lVar9 * 0x70) * 200 +
                      *(longlong *)(lVar14 + 0x20),param_2,param_3,1);
      }
      goto LAB_1429d0779;
    }
  }
  else {
    uVar69 = 0xffffffff;
    uVar71 = 0x7fefffff;
    uVar72 = 0xffffffff;
    uVar73 = 0xffefffff;
    uVar68 = uVar69;
    uVar70 = uVar71;
    uVar74 = uVar69;
    uVar75 = uVar71;
    uVar76 = uVar72;
    uVar77 = uVar73;
    uVar78 = uVar72;
    uVar79 = uVar73;
  }
  plVar22 = (longlong *)(param_1 + 0x108);
  if ((longlong)(int)*puVar26 == -1) {
    local_118 = param_2[6];
    local_148 = *param_2;
    puStack_140 = (uint *)param_2[1];
    local_138 = (longlong *)param_2[2];
    adStack_130[0] = (double)param_2[3];
    adStack_130[1] = (double)param_2[4];
    adStack_130[2] = (double)param_2[5];
    uVar12 = *(uint *)(param_1 + 0x110);
    *(uint *)(param_1 + 0x110) = uVar12 + 1;
    if (*(uint *)(param_1 + 0x114) < uVar12 + 1) {
      FUN_14479f6b8(plVar22,uVar12);
    }
    lVar9 = *plVar22;
    lVar14 = (longlong)(int)uVar12 * 0x68;
    *(longlong *)(lVar9 + 0x30 + lVar14) = local_118;
    pdVar23 = (double *)(lVar9 + 0x20 + lVar14);
    *pdVar23 = adStack_130[1];
    pdVar23[1] = adStack_130[2];
    plVar22 = (longlong *)(lVar9 + 0x10 + lVar14);
    *plVar22 = (longlong)local_138;
    plVar22[1] = (longlong)adStack_130[0];
    *(longlong *)(lVar9 + lVar14) = local_148;
    ((longlong *)(lVar9 + lVar14))[1] = (longlong)puStack_140;
    *(ulonglong *)(lVar9 + 0x38 + lVar14) = CONCAT44(uVar79,uVar78);
    *(ulonglong *)(lVar9 + 0x40 + lVar14) = CONCAT44(uVar77,uVar76);
    *(ulonglong *)(lVar9 + 0x48 + lVar14) = CONCAT44(uVar73,uVar72);
    *(ulonglong *)(lVar9 + 0x50 + lVar14) = CONCAT44(uVar75,uVar74);
    *(ulonglong *)(lVar9 + 0x58 + lVar14) = CONCAT44(uVar70,uVar68);
    *(ulonglong *)(lVar9 + 0x60 + lVar14) = CONCAT44(uVar71,uVar69);
    *puVar26 = uVar12;
  }
  else {
    lVar9 = *plVar22;
    lVar14 = (longlong)(int)*puVar26 * 0x68;
    *(ulonglong *)(lVar9 + 0x38 + lVar14) = CONCAT44(uVar79,uVar78);
    *(ulonglong *)(lVar9 + 0x40 + lVar14) = CONCAT44(uVar77,uVar76);
    *(ulonglong *)(lVar9 + 0x48 + lVar14) = CONCAT44(uVar73,uVar72);
    *(ulonglong *)(lVar9 + 0x50 + lVar14) = CONCAT44(uVar75,uVar74);
    *(ulonglong *)(lVar9 + 0x58 + lVar14) = CONCAT44(uVar70,uVar68);
    *(ulonglong *)(lVar9 + 0x60 + lVar14) = CONCAT44(uVar71,uVar69);
    if (DAT_14c75efec != 0) {
      lVar9 = *plVar22;
      lVar14 = (longlong)(int)*puVar26 * 0x68;
      *(undefined4 *)(lVar9 + 0x14 + lVar14) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(int *)(lVar9 + 0x18 + lVar14) = (int)param_2[3];
      *(undefined4 *)(lVar9 + 0x1c + lVar14) = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(lVar9 + 0x20 + lVar14) = (int)param_2[4];
      *(undefined4 *)(lVar9 + 0x24 + lVar14) = *(undefined4 *)((longlong)param_2 + 0x24);
      *(int *)(lVar9 + 0x28 + lVar14) = (int)param_2[5];
      *(undefined4 *)(lVar9 + 0x2c + lVar14) = *(undefined4 *)((longlong)param_2 + 0x2c);
      *(int *)(lVar9 + 0x30 + lVar14) = (int)param_2[6];
    }
  }
  uVar12 = puVar26[1];
  lVar9 = (longlong)(int)uVar12;
  if (lVar9 != -1) {
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      if ((((*(double *)(param_1 + 200) <= 0.0) || (*(int *)(param_1 + 0xd8) < 1)) ||
          (*(int *)(param_1 + 0xdc) < 1)) || (*(int *)(param_1 + 0xe0) < 1)) {
        iVar8 = *(int *)(param_1 + 0x38);
        if ((int)(uVar12 + 1) < iVar8) {
          *(uint *)(*(longlong *)(param_1 + 0x118) + 4 +
                   (longlong)
                   *(int *)((longlong)iVar8 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x30)) * 0x18)
               = uVar12;
          uVar12 = puVar26[1];
          iVar8 = *(int *)(param_1 + 0x38);
        }
        plVar22 = (longlong *)(param_1 + 0x30);
        iVar15 = ~uVar12 + iVar8;
        if (iVar15 != 0) {
          iVar21 = 1;
          if (iVar15 < 1) {
            iVar21 = iVar15;
          }
          memmove((void *)((longlong)(int)uVar12 * 0x68 + *(longlong *)(param_1 + 0x30)),
                  (void *)((longlong)(iVar8 - iVar21) * 0x68 + *(longlong *)(param_1 + 0x30)),
                  (longlong)iVar21 * 0x68);
          iVar8 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = iVar8 + -1;
      }
      else {
        uVar13 = puVar26[3];
        local_d8 = CONCAT44(local_d8._4_4_,uVar12);
        if ((longlong)(int)uVar13 == -1) {
          local_b8 = (uint *)&local_d8;
          dVar28 = *(double *)(param_1 + 0xd0);
          lVar14 = *(longlong *)(param_1 + 0x30);
          lVar9 = lVar9 * 0x68;
          dVar63 = *(double *)(lVar14 + 0x38 + lVar9) * dVar28;
          auVar64._8_8_ = 0;
          auVar64._0_8_ = ABS(dVar63) * 2.220446049250313e-16 + dVar63;
          auVar38 = roundpd(auVar64,auVar64,1);
          dVar63 = *(double *)(lVar14 + 0x50 + lVar9) * dVar28;
          auVar65._8_8_ = 0;
          auVar65._0_8_ = ABS(dVar63) * 2.220446049250313e-16 + dVar63;
          auVar54 = roundpd(auVar65,auVar65,1);
          local_1a0 = (longlong)auVar54._0_8_;
          local_1a4 = uVar11;
          local_c0 = param_1;
          if ((longlong)auVar38._0_8_ <= local_1a0) {
            dVar63 = *(double *)(lVar14 + lVar9 + 0x40) * dVar28;
            auVar58._0_8_ = ABS(dVar63) * 2.220446049250313e-16 + dVar63;
            auVar58._8_8_ = 0;
            auVar56 = roundpd(auVar58,auVar58,1);
            dVar28 = dVar28 * *(double *)(lVar14 + lVar9 + 0x58);
            auVar32._8_8_ = 0;
            auVar32._0_8_ = ABS(dVar28) * 2.220446049250313e-16 + dVar28;
            auVar54 = roundpd(auVar32,auVar32,1);
            local_198 = (longlong *)(longlong)auVar54._0_8_;
            lVar9 = (longlong)local_198 + 1;
            lVar14 = (longlong)auVar38._0_8_;
            do {
              if ((longlong)auVar56._0_8_ <= (longlong)local_198) {
                uVar11 = ((uint)lVar14 & 0xff00) << 8 | (uint)lVar14 & 0xff;
                uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                lVar16 = (longlong)auVar56._0_8_;
                do {
                  uVar12 = ((uint)lVar16 & 0xff00) << 8 | (uint)lVar16 & 0xff;
                  uVar12 = (uVar12 << 4 | uVar12) & 0xf0f0f0f;
                  uVar12 = (uVar12 * 4 | uVar12) & 0x33333333;
                  cVar7 = FUN_146e0c894(&local_c0,
                                        (uVar12 * 2 | uVar12 * 4) & 0xaaaaaaaa |
                                        (uVar11 * 2 | uVar11) & 0x55555555);
                  if (cVar7 == '\0') goto LAB_1429d046c;
                  lVar16 = lVar16 + 1;
                } while (lVar9 != lVar16);
              }
              bVar27 = lVar14 != local_1a0;
              lVar14 = lVar14 + 1;
            } while (bVar27);
          }
        }
        else {
          iVar8 = *(int *)(param_1 + 0xb8);
          if ((int)(uVar13 + 1) < iVar8) {
            *(uint *)(*(longlong *)(param_1 + 0x118) + 0xc +
                     (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x30) + 0x10 +
                             (longlong)
                             *(int *)(*(longlong *)(param_1 + 0xb0) + -4 + (longlong)iVar8 * 4) *
                             0x68) * 0x18) = uVar13;
            iVar8 = *(int *)(param_1 + 0xb8);
          }
          iVar15 = ~uVar13 + iVar8;
          local_1a4 = uVar11;
          if (iVar15 != 0) {
            iVar21 = 1;
            if (iVar15 < 1) {
              iVar21 = iVar15;
            }
            memmove((void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar13 * 4),
                    (void *)(*(longlong *)(param_1 + 0xb0) + (longlong)(iVar8 - iVar21) * 4),
                    (longlong)iVar21 << 2);
            iVar8 = *(int *)(param_1 + 0xb8);
          }
          *(int *)(param_1 + 0xb8) = iVar8 + -1;
          FUN_14479f406(param_1 + 0xb0);
        }
LAB_1429d046c:
        plVar22 = (longlong *)(param_1 + 0x30);
        iVar8 = *(int *)(param_1 + 0x38);
        if ((int)((uint)local_d8 + 1) < iVar8) {
          lVar9 = (longlong)iVar8 + -1;
          local_c4 = (uint)lVar9;
          lVar14 = *plVar22;
          lVar16 = (longlong)*(int *)((longlong)iVar8 * 0x68 + -0x58 + lVar14);
          local_190 = lVar16 * 3;
          lVar16 = (longlong)*(int *)(*plVar17 + 0xc + lVar16 * 0x18);
          local_198 = plVar22;
          if (lVar16 == -1) {
            puStack_140 = &local_c4;
            local_138 = &local_d8;
            dVar28 = *(double *)(param_1 + 0xd0);
            lVar9 = lVar9 * 0x68;
            dVar63 = *(double *)(lVar14 + 0x38 + lVar9) * dVar28;
            auVar66._8_8_ = 0;
            auVar66._0_8_ = ABS(dVar63) * 2.220446049250313e-16 + dVar63;
            auVar38 = roundpd(auVar66,auVar66,1);
            dVar63 = *(double *)(lVar14 + 0x50 + lVar9) * dVar28;
            auVar67._8_8_ = 0;
            auVar67._0_8_ = ABS(dVar63) * 2.220446049250313e-16 + dVar63;
            auVar54 = roundpd(auVar67,auVar67,1);
            local_1a0 = (longlong)auVar54._0_8_;
            local_148 = param_1;
            if ((longlong)auVar38._0_8_ <= local_1a0) {
              dVar63 = *(double *)(lVar14 + lVar9 + 0x40) * dVar28;
              auVar59._0_8_ = ABS(dVar63) * 2.220446049250313e-16 + dVar63;
              auVar59._8_8_ = 0;
              auVar56 = roundpd(auVar59,auVar59,1);
              dVar28 = dVar28 * *(double *)(lVar14 + lVar9 + 0x58);
              auVar33._8_8_ = 0;
              auVar33._0_8_ = ABS(dVar28) * 2.220446049250313e-16 + dVar28;
              auVar54 = roundpd(auVar33,auVar33,1);
              lVar9 = (longlong)auVar38._0_8_;
              do {
                if ((longlong)auVar56._0_8_ <= (longlong)auVar54._0_8_) {
                  uVar11 = ((uint)lVar9 & 0xff00) << 8 | (uint)lVar9 & 0xff;
                  uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
                  uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
                  lVar14 = (longlong)auVar56._0_8_;
                  do {
                    uVar12 = ((uint)lVar14 & 0xff00) << 8 | (uint)lVar14 & 0xff;
                    uVar12 = (uVar12 << 4 | uVar12) & 0xf0f0f0f;
                    uVar12 = (uVar12 * 4 | uVar12) & 0x33333333;
                    cVar7 = FUN_146e0c9d4(&local_148,
                                          (uVar12 * 2 | uVar12 * 4) & 0xaaaaaaaa |
                                          (uVar11 * 2 | uVar11) & 0x55555555);
                    if (cVar7 == '\0') goto LAB_1429d0679;
                    lVar14 = lVar14 + 1;
                  } while ((longlong)auVar54._0_8_ + 1 != lVar14);
                }
                bVar27 = lVar9 != local_1a0;
                lVar9 = lVar9 + 1;
              } while (bVar27);
            }
          }
          else {
            *(uint *)(*(longlong *)(param_1 + 0xb0) + lVar16 * 4) = (uint)local_d8;
          }
LAB_1429d0679:
          *(uint *)(*(longlong *)(param_1 + 0x118) + 4 + local_190 * 8) = (uint)local_d8;
          iVar8 = *(int *)(param_1 + 0x38);
          plVar22 = local_198;
        }
        iVar15 = ~(uint)local_d8 + iVar8;
        uVar20 = (ulonglong)local_1a4;
        if (iVar15 != 0) {
          iVar21 = 1;
          if (iVar15 < 1) {
            iVar21 = iVar15;
          }
          memmove((void *)((longlong)(int)(uint)local_d8 * 0x68 + *(longlong *)(param_1 + 0x30)),
                  (void *)((longlong)(iVar8 - iVar21) * 0x68 + *(longlong *)(param_1 + 0x30)),
                  (longlong)iVar21 * 0x68);
          iVar8 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x38) = iVar8 + -1;
      }
      FUN_144aa423e(plVar22);
    }
    else {
      FUN_1429d1af8(*(longlong *)(param_1 + 0xc0),lVar9,param_2);
    }
    puVar26[1] = 0xffffffff;
    puVar26 = puVar26 + 3;
    goto LAB_1429d0818;
  }
  goto LAB_1429d0820;
LAB_1429cf6e0:
  FUN_1429d1af8(lVar14,lVar9,param_2);
  lVar9 = *(longlong *)(param_1 + 0xc0);
LAB_1429cfed7:
  FUN_1429d216a(lVar9,&local_148,param_2,param_3);
  puVar26[1] = (uint)local_148;
  goto LAB_1429d0779;
LAB_1429cfdc4:
  do {
    if ((longlong)auVar56._0_8_ <= (longlong)local_190) {
      uVar11 = ((uint)plVar17 & 0xff00) << 8 | (uint)plVar17 & 0xff;
      uVar11 = (uVar11 << 4 | uVar11) & 0xf0f0f0f;
      uVar11 = (uVar11 * 4 | uVar11) & 0x33333333;
      lVar9 = (longlong)auVar56._0_8_;
      do {
        uVar12 = ((uint)lVar9 & 0xff00) << 8 | (uint)lVar9 & 0xff;
        uVar12 = (uVar12 << 4 | uVar12) & 0xf0f0f0f;
        uVar12 = (uVar12 * 4 | uVar12) & 0x33333333;
        cVar7 = FUN_146e0d8dc(&local_d8,
                              (uVar12 * 2 | uVar12 * 4) & 0xaaaaaaaa |
                              (uVar11 * 2 | uVar11) & 0x55555555);
        if (cVar7 == '\0') goto LAB_1429cfe7b;
        lVar9 = lVar9 + 1;
      } while (local_1a0 != lVar9);
    }
    bVar27 = plVar17 != local_198;
    plVar17 = (longlong *)((longlong)plVar17 + 1);
  } while (bVar27);
LAB_1429cfe7b:
  uVar13 = *(uint *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = uVar13 + 1;
  if (*(uint *)(param_1 + 0xbc) < uVar13 + 1) {
    FUN_1446f48e2((longlong *)(param_1 + 0xb0),uVar13);
  }
  *(uint *)(*(longlong *)(param_1 + 0xb0) + (longlong)(int)uVar13 * 4) = local_c4;
LAB_1429cfeb3:
  uVar20 = (ulonglong)local_1a4;
  lVar9 = local_178;
  pdVar23 = local_180;
LAB_1429d06fb:
  puVar26[3] = uVar13;
LAB_1429d06ff:
  lVar14 = *(longlong *)(param_1 + 0x30);
  lVar9 = lVar9 * 0x68;
  *(double *)(lVar14 + 0x48 + lVar9) = param_3[2];
  dVar28 = param_3[1];
  pdVar2 = (double *)(lVar14 + 0x38 + lVar9);
  *pdVar2 = *param_3;
  pdVar2[1] = dVar28;
  *(double *)(lVar14 + 0x60 + lVar9) = pdVar23[2];
  dVar28 = pdVar23[1];
  pdVar2 = (double *)(lVar14 + 0x50 + lVar9);
  *pdVar2 = *pdVar23;
  pdVar2[1] = dVar28;
  if (DAT_14c75efec != 0) {
    lVar14 = *(longlong *)(param_1 + 0x30);
    *(undefined4 *)(lVar14 + 0x14 + lVar9) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)(lVar14 + 0x18 + lVar9) = (int)param_2[3];
    *(undefined4 *)(lVar14 + 0x1c + lVar9) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(int *)(lVar14 + 0x20 + lVar9) = (int)param_2[4];
    *(undefined4 *)(lVar14 + 0x24 + lVar9) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(int *)(lVar14 + 0x28 + lVar9) = (int)param_2[5];
    *(undefined4 *)(lVar14 + 0x2c + lVar9) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(int *)(lVar14 + 0x30 + lVar9) = (int)param_2[6];
  }
LAB_1429d0779:
  uVar11 = *puVar26;
  if (uVar11 != 0xffffffff) {
    iVar8 = *(int *)(param_1 + 0x110);
    if ((int)(uVar11 + 1) < iVar8) {
      *(uint *)(*(longlong *)(param_1 + 0x118) +
               (longlong)*(int *)((longlong)iVar8 * 0x68 + -0x58 + *(longlong *)(param_1 + 0x108)) *
               0x18) = uVar11;
      uVar11 = *puVar26;
      iVar8 = *(int *)(param_1 + 0x110);
    }
    iVar15 = ~uVar11 + iVar8;
    if (iVar15 != 0) {
      iVar21 = 1;
      if (iVar15 < 1) {
        iVar21 = iVar15;
      }
      memmove((void *)((longlong)(int)uVar11 * 0x68 + *(longlong *)(param_1 + 0x108)),
              (void *)((longlong)(iVar8 - iVar21) * 0x68 + *(longlong *)(param_1 + 0x108)),
              (longlong)iVar21 * 0x68);
      iVar8 = *(int *)(param_1 + 0x110);
    }
    *(int *)(param_1 + 0x110) = iVar8 + -1;
    FUN_144aa423e(param_1 + 0x108);
LAB_1429d0818:
    *puVar26 = 0xffffffff;
  }
LAB_1429d0820:
  if (((*(longlong *)(param_1 + 0xc0) == 0) && (*(char *)(param_1 + 0x40) == '\0')) &&
     (DAT_14c75efe4 < *(int *)(param_1 + 0x38))) {
    FUN_1429d2408(param_1);
  }
LAB_1429d0843:
  *(undefined1 *)(param_1 + 0x180) = 0;
  if ((local_b0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
}



// FUNCTION 1429d0aa8 FUN_1429d0aa8 body=3013 status=ok
// SIG undefined FUN_1429d0aa8(void)

void FUN_1429d0aa8(longlong param_1,longlong *param_2,undefined1 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  longlong lVar9;
  int iVar10;
  double *pdVar11;
  int iVar12;
  double *pdVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  byte bVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  double dVar27;
  undefined1 auStack_2b8 [32];
  undefined4 local_298;
  longlong local_288;
  longlong *local_280;
  int local_274;
  double *local_270;
  longlong *local_268;
  longlong local_260;
  double *local_258;
  ulonglong local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined8 local_238;
  uint local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  uint local_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint uStack_1ec;
  undefined8 local_1e8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  double local_1a8 [9];
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 *local_138;
  double *local_130;
  double local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 uStack_100;
  longlong local_f8 [3];
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar9 = param_1 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_288 = param_1;
  if (*(int *)(param_1 + 0x1c) < 0) {
    FUN_14479f570(lVar9,0);
  }
  local_280 = (longlong *)(local_288 + 0xa8);
  *(undefined4 *)(local_288 + 0xb0) = 0;
  if (*(int *)(local_288 + 0xb4) < 0) {
    FUN_146cab798(local_280,0);
  }
  *(undefined1 *)(local_288 + 0xc0) = 1;
  if ((int)param_2[1] == 0) goto LAB_1429d0b4e;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_108 = 0;
  uStack_100 = 0;
  FUN_146e05fce(local_f8,(int)param_2[1],1);
  iVar18 = (int)param_2[1];
  iVar10 = (int)uStack_100;
  lVar15 = (longlong)(int)uStack_100;
  if ((int)uStack_100 < iVar18) {
    uStack_100 = CONCAT44(uStack_100._4_4_,iVar18);
    uVar24 = iVar18 - iVar10;
    if ((uint)(uStack_100._4_4_ - iVar10) < uVar24) {
      FUN_1401c3474(&local_108);
    }
    memset((void *)(lVar15 + local_108),0,(longlong)(int)uVar24);
  }
  else {
    if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    if (iVar18 < (int)uStack_100) {
      uStack_100 = CONCAT44(uStack_100._4_4_,iVar18);
      FUN_1403ed828();
    }
  }
  local_120 = *(undefined8 *)(local_288 + 0xb8);
  local_138 = &local_120;
  local_130 = &local_128;
  local_128 = 0.0;
  local_150 = &local_108;
  local_140 = local_280;
  local_1a8[3] = 1.79769313486232e+308;
  local_1a8[4] = 1.79769313486232e+308;
  local_1a8[5] = 1.79769313486232e+308;
  local_1a8[6] = -1.79769313486232e+308;
  local_1a8[7] = -1.79769313486232e+308;
  local_1a8[8] = -1.79769313486232e+308;
  local_160 = param_2;
  local_158 = local_f8;
  local_148 = lVar9;
  local_118 = param_3;
  local_110 = param_4;
  dVar27 = (double)FUN_1429d1670(&local_160,local_1a8 + 3,1);
  iVar18 = param_5;
  iVar10 = param_5;
  iVar12 = param_5;
  if ((DAT_14c992790 == 0) || ((longlong)(int)param_2[1] == 0)) {
LAB_1429d10be:
    if (0.0 < dVar27) {
      iVar18 = (int)((local_1a8[8] - local_1a8[5]) / dVar27);
      iVar10 = (int)((local_1a8[7] - local_1a8[4]) / dVar27);
      iVar12 = (int)((local_1a8[6] - local_1a8[3]) / dVar27);
    }
  }
  else {
    puVar25 = (undefined8 *)*param_2;
    puVar26 = puVar25 + (longlong)(int)param_2[1] * 0xd;
    lVar23 = 0;
    bVar8 = false;
    lVar15 = local_288;
    do {
      if (*(char *)(local_108 + lVar23) == '\x01') {
        lVar20 = lVar23 * 0x30;
        puVar1 = (undefined8 *)(local_f8[0] + lVar20);
        local_1a8[0] = *(double *)(local_f8[0] + lVar20) / dVar27;
        local_1a8[1] = *(double *)(local_f8[0] + 8 + lVar20) / dVar27;
        local_1a8[2] = *(double *)(local_f8[0] + 0x10 + lVar20) / dVar27;
        lVar20 = 0;
        do {
          if (10000000.0 < ABS(local_1a8[lVar20])) {
            *(undefined1 *)(local_108 + lVar23) = 0;
            local_1b8 = *puVar25;
            uStack_1b0 = puVar25[1];
            iVar6 = *(int *)(puVar25 + 2);
            local_c8 = *(undefined4 *)((longlong)puVar25 + 0x34);
            local_d8 = *(longlong *)((longlong)puVar25 + 0x24);
            uStack_d0 = *(ulonglong *)((longlong)puVar25 + 0x2c);
            local_f8[2] = *(undefined8 *)((longlong)puVar25 + 0x14);
            uStack_e0 = *(undefined8 *)((longlong)puVar25 + 0x1c);
            iVar7 = *(int *)(lVar15 + 0x18);
            local_1c8 = puVar1[2];
            local_1d8 = *puVar1;
            uStack_1d0 = puVar1[1];
            local_1e8 = puVar1[5];
            local_1f8 = *(uint *)(puVar1 + 3);
            uStack_1f4 = *(uint *)((longlong)puVar1 + 0x1c);
            uStack_1f0 = *(uint *)(puVar1 + 4);
            uStack_1ec = *(uint *)((longlong)puVar1 + 0x24);
            *(uint *)(lVar15 + 0x18) = iVar7 + 1U;
            if (*(uint *)(lVar15 + 0x1c) < iVar7 + 1U) {
              FUN_14479f6b8(lVar9,iVar7);
              lVar15 = local_288;
            }
            lVar20 = *(longlong *)(lVar15 + 0x10);
            lVar14 = (longlong)iVar7 * 0x68;
            *(undefined8 *)(lVar20 + lVar14) = local_1b8;
            ((undefined8 *)(lVar20 + lVar14))[1] = uStack_1b0;
            *(int *)(lVar20 + 0x10 + lVar14) = iVar6;
            *(undefined4 *)(lVar20 + 0x34 + lVar14) = local_c8;
            puVar4 = (undefined4 *)(lVar20 + 0x24 + lVar14);
            *puVar4 = (undefined4)local_d8;
            puVar4[1] = local_d8._4_4_;
            puVar4[2] = (undefined4)uStack_d0;
            puVar4[3] = uStack_d0._4_4_;
            puVar1 = (undefined8 *)(lVar20 + 0x14 + lVar14);
            *puVar1 = local_f8[2];
            puVar1[1] = uStack_e0;
            puVar1 = (undefined8 *)(lVar20 + 0x38 + lVar14);
            *puVar1 = local_1d8;
            puVar1[1] = uStack_1d0;
            *(undefined8 *)(lVar20 + 0x48 + lVar14) = local_1c8;
            puVar2 = (uint *)(lVar20 + 0x50 + lVar14);
            *puVar2 = local_1f8;
            puVar2[1] = uStack_1f4;
            puVar2[2] = uStack_1f0;
            puVar2[3] = uStack_1ec;
            *(undefined8 *)(lVar20 + 0x60 + lVar14) = local_1e8;
            if (*(int *)(lVar15 + 0xb0) <= iVar6) {
              FUN_146cab80a(local_280,(iVar6 - *(int *)(lVar15 + 0xb0)) + 1);
              lVar15 = local_288;
            }
            lVar14 = (longlong)iVar6 * 0x24;
            *(undefined1 *)(*local_280 + 0x20 + lVar14) = 1;
            lVar20 = *local_280;
            *(int *)(lVar20 + lVar14) = iVar7;
            *(undefined4 *)(lVar20 + 4 + lVar14) = 0xffffffff;
            puVar1 = (undefined8 *)(lVar20 + 8 + lVar14);
            *puVar1 = 0;
            puVar1[1] = 0;
            *(undefined8 *)(lVar20 + 0x18 + lVar14) = 0;
            bVar8 = true;
            break;
          }
          lVar20 = lVar20 + 1;
        } while (lVar20 != 3);
      }
      lVar23 = lVar23 + 1;
      puVar25 = puVar25 + 0xd;
    } while (puVar25 != puVar26);
    if (!bVar8) goto LAB_1429d10be;
    local_1a8[3] = 1.79769313486232e+308;
    local_1a8[4] = 1.79769313486232e+308;
    local_1a8[5] = 1.79769313486232e+308;
    local_1a8[6] = -1.79769313486232e+308;
    local_1a8[7] = -1.79769313486232e+308;
    local_1a8[8] = -1.79769313486232e+308;
    *local_130 = 0.0;
    dVar27 = 0.0;
    if ((longlong)(int)local_160[1] != 0) {
      lVar9 = (longlong)(int)local_160[1] * 0x68;
      lVar15 = 0x28;
      lVar23 = 0;
      dVar27 = 0.0;
      do {
        if (*(char *)(*local_150 + lVar23) == '\x01') {
          lVar20 = *local_158;
          *(undefined1 *)(*local_150 + lVar23) = 1;
          dVar5 = *(double *)(lVar20 + -0x18 + lVar15);
          if (dVar5 <= local_1a8[5]) {
            local_1a8[5] = dVar5;
          }
          dVar5 = *(double *)(lVar20 + -0x20 + lVar15);
          if (dVar5 <= local_1a8[4]) {
            local_1a8[4] = dVar5;
          }
          dVar5 = *(double *)(lVar20 + -0x28 + lVar15);
          if (dVar5 <= local_1a8[3]) {
            local_1a8[3] = dVar5;
          }
          if (local_1a8[8] <= *(double *)(lVar20 + lVar15)) {
            local_1a8[8] = *(double *)(lVar20 + lVar15);
          }
          dVar5 = *(double *)(lVar20 + -8 + lVar15);
          if (local_1a8[7] <= dVar5) {
            local_1a8[7] = dVar5;
          }
          dVar5 = *(double *)(lVar20 + -0x10 + lVar15);
          if (local_1a8[6] <= dVar5) {
            local_1a8[6] = dVar5;
          }
          dVar27 = dVar27 + ((*(double *)(lVar20 + -0x10 + lVar15) -
                             *(double *)(lVar20 + -0x28 + lVar15)) +
                             (*(double *)(lVar20 + -8 + lVar15) -
                             *(double *)(lVar20 + -0x20 + lVar15)) +
                            (*(double *)(lVar20 + lVar15) - *(double *)(lVar20 + -0x18 + lVar15))) *
                            0.3333333333333333;
          *local_130 = *local_130 + 1.0;
        }
        lVar23 = lVar23 + 1;
        lVar15 = lVar15 + 0x30;
        lVar9 = lVar9 + -0x68;
      } while (lVar9 != 0);
    }
    if (0.0 < *local_130) {
      dVar27 = dVar27 / *local_130;
      goto LAB_1429d10be;
    }
  }
  local_1d8 = CONCAT44(iVar10 + 1,iVar12 + 1);
  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,iVar18 + 1);
  lVar9 = 0;
  do {
    iVar18 = *(int *)((longlong)&local_1d8 + lVar9 * 4);
    iVar10 = iVar18;
    if (param_5 <= iVar18) {
      iVar10 = param_5;
    }
    if (param_5 < iVar18 || iVar10 < 0) {
      if (iVar10 < 0) {
        iVar10 = param_5;
      }
      *(int *)((longlong)&local_1d8 + lVar9 * 4) = iVar10;
    }
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  local_298 = 0;
  FUN_146cb3ec4(local_f8 + 2,local_1a8 + 3,local_1a8 + 6);
  lVar9 = local_288;
  local_268 = (longlong *)(local_288 + 0x20);
  plVar16 = local_f8 + 2;
  plVar19 = local_268;
  for (lVar15 = 0xb; lVar15 != 0; lVar15 = lVar15 + -1) {
    *plVar19 = *plVar16;
    plVar16 = plVar16 + 1;
    plVar19 = plVar19 + 1;
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_f8[2] = *(longlong *)(local_288 + 0x50);
  uStack_e0 = CONCAT44(uStack_e0._4_4_,*(int *)(local_288 + 0x58));
  bVar17 = 1;
  FUN_146cb0608(&local_d8,
                *(int *)(local_288 + 0x54) * *(int *)(local_288 + 0x50) * *(int *)(local_288 + 0x58)
                ,1);
  *(undefined4 *)(lVar9 + 0x80) = (undefined4)uStack_e0;
  *(longlong *)(lVar9 + 0x78) = local_f8[2];
  FUN_146cab152(lVar9 + 0x88,&local_d8);
  FUN_146ca597f(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  lVar9 = local_288;
  if ((longlong)(int)param_2[1] != 0) {
    pdVar11 = (double *)*param_2;
    pdVar13 = pdVar11 + (longlong)(int)param_2[1] * 0xd;
    dVar27 = 0.0;
    lVar15 = 0;
    local_270 = pdVar13;
    do {
      lVar23 = local_f8[0];
      plVar16 = local_268;
      if (*(char *)(local_108 + lVar15) == '\x01') {
        puVar25 = (undefined8 *)(local_f8[0] + lVar15 * 0x30);
        local_128 = local_128 + 1.0;
        local_260 = lVar15;
        FUN_146c9c584(local_268,&local_1f8,puVar25);
        lVar23 = lVar23 + lVar15 * 0x30;
        FUN_146c9c584(plVar16,&local_1b8,(ulonglong *)(lVar23 + 0x18));
        local_1a8[0] = *pdVar11;
        local_1a8[1] = pdVar11[1];
        local_274 = *(int *)(pdVar11 + 2);
        local_228 = *(undefined8 *)((longlong)pdVar11 + 0x14);
        uStack_220 = *(undefined8 *)((longlong)pdVar11 + 0x1c);
        local_218 = *(undefined4 *)((longlong)pdVar11 + 0x24);
        uStack_214 = *(undefined4 *)(pdVar11 + 5);
        uStack_210 = *(undefined4 *)((longlong)pdVar11 + 0x2c);
        uStack_20c = *(undefined4 *)(pdVar11 + 6);
        local_208 = *(undefined4 *)((longlong)pdVar11 + 0x34);
        local_f8[2] = CONCAT44(uStack_1f4,local_1f8);
        uStack_e0 = CONCAT44(uStack_e0._4_4_,uStack_1f0);
        local_230 = (uint)uStack_1b0;
        local_238 = local_1b8;
        local_258 = pdVar11;
        if (*(int *)(local_288 + 0xb0) <= local_274) {
          FUN_146cab80a(local_280,(local_274 - *(int *)(local_288 + 0xb0)) + 1);
        }
        lVar15 = (longlong)local_274 * 0x24;
        *(undefined1 *)(*local_280 + 0x20 + lVar15) = 1;
        lVar9 = *local_280;
        *(undefined8 *)(lVar9 + lVar15) = 0xffffffffffffffff;
        *(undefined4 *)(lVar9 + 0x10 + lVar15) = (undefined4)uStack_e0;
        *(longlong *)(lVar9 + 8 + lVar15) = local_f8[2];
        *(uint *)(lVar9 + 0x1c + lVar15) = local_230;
        *(undefined8 *)(lVar9 + 0x14 + lVar15) = local_238;
        pdVar11 = local_258;
        pdVar13 = local_270;
        lVar9 = local_288;
        lVar15 = local_260;
        if ((int)local_1f8 <= (int)local_1b8) {
          iVar18 = (int)local_1b8;
          iVar10 = local_1b8._4_4_;
          uVar24 = local_1f8;
          iVar12 = local_274;
          do {
            uVar22 = (ulonglong)uVar24;
            uVar21 = uVar24;
            if ((int)uStack_1f4 <= iVar10) {
              uVar24 = uStack_1f4;
              iVar18 = (uint)uStack_1b0;
              local_250 = uVar22;
              do {
                lVar15 = (longlong)(int)uStack_1f0;
                if ((int)uStack_1f0 <= iVar18) {
                  iVar18 = uStack_1f0 - 1;
                  do {
                    lVar20 = *(longlong *)(lVar9 + 0x88);
                    lVar14 = ((longlong)(int)(*(int *)(lVar9 + 0x7c) * (int)uVar22 + uVar24) *
                              (longlong)*(int *)(lVar9 + 0x80) + lVar15) * 0x10;
                    local_d8 = puVar25[2];
                    local_f8[2] = *puVar25;
                    uStack_e0 = puVar25[1];
                    local_c0 = *(undefined8 *)(lVar23 + 0x28);
                    uStack_d0 = *(ulonglong *)(lVar23 + 0x18);
                    local_c8 = *(undefined4 *)(lVar23 + 0x20);
                    uStack_c4 = *(undefined4 *)(lVar23 + 0x24);
                    local_230 = uStack_1f0;
                    local_238 = CONCAT44(uStack_1f4,local_1f8);
                    local_240 = (uint)uStack_1b0;
                    local_248 = local_1b8;
                    iVar10 = *(int *)(lVar20 + 8 + lVar14);
                    *(uint *)(lVar20 + 8 + lVar14) = iVar10 + 1U;
                    if (*(uint *)(lVar20 + 0xc + lVar14) < iVar10 + 1U) {
                      FUN_146cb08ea((longlong *)(lVar20 + lVar14),iVar10);
                      lVar9 = local_288;
                      uVar22 = local_250;
                      iVar12 = local_274;
                    }
                    lVar20 = *(longlong *)(lVar20 + lVar14);
                    lVar14 = (longlong)iVar10 * 0x80;
                    *(longlong *)(lVar20 + 0x10 + lVar14) = local_d8;
                    *(undefined8 *)(lVar20 + lVar14) = local_f8[2];
                    ((undefined8 *)(lVar20 + lVar14))[1] = uStack_e0;
                    *(undefined8 *)(lVar20 + 0x28 + lVar14) = local_c0;
                    puVar3 = (ulonglong *)(lVar20 + 0x18 + lVar14);
                    *puVar3 = uStack_d0;
                    puVar3[1] = CONCAT44(uStack_c4,local_c8);
                    pdVar11 = (double *)(lVar20 + 0x30 + lVar14);
                    *pdVar11 = local_1a8[0];
                    pdVar11[1] = local_1a8[1];
                    *(int *)(lVar20 + 0x40 + lVar14) = iVar12;
                    *(undefined4 *)(lVar20 + 100 + lVar14) = local_208;
                    puVar26 = (undefined8 *)(lVar20 + 0x54 + lVar14);
                    *puVar26 = CONCAT44(uStack_214,local_218);
                    puVar26[1] = CONCAT44(uStack_20c,uStack_210);
                    puVar4 = (undefined4 *)(lVar20 + 0x44 + lVar14);
                    *puVar4 = (undefined4)local_228;
                    puVar4[1] = local_228._4_4_;
                    puVar4[2] = (undefined4)uStack_220;
                    puVar4[3] = uStack_220._4_4_;
                    *(uint *)(lVar20 + 0x70 + lVar14) = local_230;
                    *(undefined8 *)(lVar20 + 0x68 + lVar14) = local_238;
                    *(undefined4 *)(lVar20 + 0x7c + lVar14) = local_240;
                    *(undefined8 *)(lVar20 + 0x74 + lVar14) = local_248;
                    dVar27 = dVar27 + 1.0;
                    iVar18 = iVar18 + 1;
                    lVar15 = lVar15 + 1;
                  } while (iVar18 < (int)(uint)uStack_1b0);
                  iVar10 = local_1b8._4_4_;
                  iVar18 = (uint)uStack_1b0;
                }
                uVar21 = (uint)uVar22;
                bVar8 = (int)uVar24 < iVar10;
                uVar24 = uVar24 + 1;
              } while (bVar8);
              iVar18 = (int)local_1b8;
            }
            uVar24 = uVar21 + 1;
            pdVar11 = local_258;
            pdVar13 = local_270;
            lVar15 = local_260;
          } while ((int)uVar21 < iVar18);
        }
      }
      lVar15 = lVar15 + 1;
      pdVar11 = pdVar11 + 0xd;
    } while (pdVar11 != pdVar13);
    bVar17 = -(dVar27 == 0.0) & 1;
  }
  *(byte *)(lVar9 + 0xc0) = bVar17;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
LAB_1429d0b4e:
  if ((local_90 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429d1670 FUN_1429d1670 body=1158 status=ok
// SIG undefined FUN_1429d1670(void)

ulonglong FUN_1429d1670(longlong *param_1,double *param_2,char param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  double *pdVar14;
  longlong *plVar15;
  double dVar16;
  double dVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  double dVar30;
  undefined1 auStack_168 [35];
  char local_145;
  int local_144;
  longlong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *param_2 = 1.79769313486232e+308;
  param_2[1] = 1.79769313486232e+308;
  param_2[2] = 1.79769313486232e+308;
  param_2[3] = -1.79769313486232e+308;
  param_2[4] = -1.79769313486232e+308;
  param_2[5] = -1.79769313486232e+308;
  *(undefined8 *)param_1[6] = 0;
  lVar19 = (longlong)(int)((longlong *)*param_1)[1];
  dVar17 = 0.0;
  dVar16 = 0.0;
  if (lVar19 != 0) {
    lVar12 = *(longlong *)*param_1;
    lVar19 = lVar19 * 0x68;
    lVar21 = 0x28;
    lVar24 = 0;
    lVar22 = 0;
    local_145 = param_3;
    local_140 = lVar19;
    do {
      lVar13 = *(longlong *)param_1[1];
      if (param_3 == '\0') {
        lVar20 = *(longlong *)param_1[2];
        if (*(char *)(lVar20 + lVar22) == '\x01') goto LAB_1429d1974;
      }
      else {
        pdVar1 = (double *)(lVar13 + lVar21);
        pdVar14 = (double *)param_1[5];
        local_100 = *(double *)(lVar12 + 0x60 + lVar24);
        pdVar2 = (double *)(lVar12 + 0x50 + lVar24);
        local_110 = *pdVar2;
        uStack_108 = pdVar2[1];
        pdVar2 = (double *)(lVar12 + 0x38 + lVar24);
        dVar16 = *pdVar2;
        dVar30 = pdVar2[1];
        pdVar1[-3] = *(double *)(lVar12 + 0x48 + lVar24);
        pdVar1[-5] = dVar16;
        pdVar1[-4] = dVar30;
        *pdVar1 = local_100;
        pdVar1[-2] = local_110;
        pdVar1[-1] = uStack_108;
        dVar16 = *pdVar1 - pdVar1[-3];
        dVar29 = pdVar1[-1] - pdVar1[-4];
        dVar30 = pdVar1[-2] - pdVar1[-5];
        if ((dVar30 <= dVar29 || dVar30 <= dVar16) && (dVar30 = dVar29, dVar29 <= dVar16)) {
          dVar30 = dVar16;
        }
        lVar20 = *(longlong *)param_1[2];
        if (dVar30 < *pdVar14) {
LAB_1429d1974:
          *(undefined1 *)(lVar20 + lVar22) = 1;
          dVar16 = param_2[2];
          uVar25 = SUB84(dVar16,0);
          uVar26 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar30 = *(double *)(lVar13 + -0x18 + lVar21);
          if (dVar30 <= dVar16) {
            uVar25 = SUB84(dVar30,0);
            uVar26 = (undefined4)((ulonglong)dVar30 >> 0x20);
          }
          dVar16 = *param_2;
          uVar27 = SUB84(dVar16,0);
          uVar28 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar30 = *(double *)(lVar13 + -0x20 + lVar21);
          dVar29 = param_2[1];
          if (dVar30 <= param_2[1]) {
            dVar29 = dVar30;
          }
          dVar30 = *(double *)(lVar13 + -0x28 + lVar21);
          if (dVar30 <= dVar16) {
            uVar27 = SUB84(dVar30,0);
            uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
          }
          *param_2 = (double)CONCAT44(uVar28,uVar27);
          param_2[1] = dVar29;
          param_2[2] = (double)CONCAT44(uVar26,uVar25);
          dVar16 = param_2[5];
          uVar25 = SUB84(dVar16,0);
          uVar26 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar30 = *(double *)(lVar13 + lVar21);
          if (dVar16 <= dVar30) {
            uVar25 = SUB84(dVar30,0);
            uVar26 = (undefined4)((ulonglong)dVar30 >> 0x20);
          }
          dVar16 = param_2[4];
          uVar27 = SUB84(dVar16,0);
          uVar28 = (undefined4)((ulonglong)dVar16 >> 0x20);
          dVar30 = *(double *)(lVar13 + -8 + lVar21);
          if (dVar16 <= dVar30) {
            uVar27 = SUB84(dVar30,0);
            uVar28 = (undefined4)((ulonglong)dVar30 >> 0x20);
          }
          dVar16 = *(double *)(lVar13 + -0x10 + lVar21);
          dVar30 = param_2[3];
          if (param_2[3] <= dVar16) {
            dVar30 = dVar16;
          }
          param_2[3] = dVar30;
          param_2[4] = (double)CONCAT44(uVar28,uVar27);
          param_2[5] = (double)CONCAT44(uVar26,uVar25);
          dVar17 = dVar17 + ((*(double *)(lVar13 + -0x10 + lVar21) -
                             *(double *)(lVar13 + -0x28 + lVar21)) +
                             (*(double *)(lVar13 + -8 + lVar21) -
                             *(double *)(lVar13 + -0x20 + lVar21)) +
                            (*(double *)(lVar13 + lVar21) - *(double *)(lVar13 + -0x18 + lVar21))) *
                            0.3333333333333333;
          *(double *)param_1[6] = *(double *)param_1[6] + 1.0;
        }
        else {
          *(undefined1 *)(lVar20 + lVar22) = 0;
          local_138 = *(undefined8 *)(lVar12 + lVar24);
          uStack_130 = ((undefined8 *)(lVar12 + lVar24))[1];
          iVar23 = *(int *)(lVar12 + 0x10 + lVar24);
          uVar18 = (ulonglong)uStack_108 >> 0x20;
          uStack_108 = (double)CONCAT44((int)uVar18,*(undefined4 *)(lVar12 + 0x34 + lVar24));
          puVar3 = (undefined4 *)(lVar12 + 0x14 + lVar24);
          local_128 = *puVar3;
          uStack_124 = puVar3[1];
          uStack_120 = puVar3[2];
          uStack_11c = puVar3[3];
          puVar3 = (undefined4 *)(lVar12 + 0x24 + lVar24);
          uStack_118 = *puVar3;
          uStack_114 = puVar3[1];
          local_110 = *(double *)(puVar3 + 2);
          plVar15 = (longlong *)param_1[3];
          iVar11 = (int)plVar15[1];
          uVar5 = *(undefined8 *)(lVar13 + -0x28 + lVar21);
          uVar6 = *(undefined8 *)(lVar13 + -0x20 + lVar21);
          uVar7 = *(undefined8 *)(lVar13 + -0x18 + lVar21);
          uVar8 = *(undefined8 *)(lVar13 + -0x10 + lVar21);
          uVar9 = *(undefined8 *)(lVar13 + -8 + lVar21);
          uVar10 = *(undefined8 *)(lVar13 + lVar21);
          *(uint *)(plVar15 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)plVar15 + 0xc) < iVar11 + 1U) {
            local_144 = iVar23;
            FUN_14479f6b8(plVar15,iVar11);
            param_3 = local_145;
            lVar19 = local_140;
            iVar23 = local_144;
          }
          lVar13 = *plVar15;
          lVar20 = (longlong)iVar11 * 0x68;
          *(undefined8 *)(lVar13 + lVar20) = local_138;
          ((undefined8 *)(lVar13 + lVar20))[1] = uStack_130;
          *(int *)(lVar13 + 0x10 + lVar20) = iVar23;
          puVar3 = (undefined4 *)(lVar13 + 0x14 + lVar20);
          *puVar3 = local_128;
          puVar3[1] = uStack_124;
          puVar3[2] = uStack_120;
          puVar3[3] = uStack_11c;
          puVar3 = (undefined4 *)(lVar13 + 0x24 + lVar20);
          *puVar3 = uStack_118;
          puVar3[1] = uStack_114;
          puVar3[2] = (undefined4)local_110;
          puVar3[3] = local_110._4_4_;
          *(undefined4 *)(lVar13 + 0x34 + lVar20) = (undefined4)uStack_108;
          *(undefined8 *)(lVar13 + 0x38 + lVar20) = uVar5;
          *(undefined8 *)(lVar13 + 0x40 + lVar20) = uVar6;
          *(undefined8 *)(lVar13 + 0x48 + lVar20) = uVar7;
          *(undefined8 *)(lVar13 + 0x50 + lVar20) = uVar8;
          *(undefined8 *)(lVar13 + 0x58 + lVar20) = uVar9;
          *(undefined8 *)(lVar13 + 0x60 + lVar20) = uVar10;
          plVar15 = (longlong *)param_1[4];
          if ((int)plVar15[1] <= iVar23) {
            local_144 = iVar23;
            FUN_146cab80a(plVar15,(iVar23 - (int)plVar15[1]) + 1);
            param_3 = local_145;
            lVar19 = local_140;
            iVar23 = local_144;
          }
          lVar20 = (longlong)iVar23 * 0x24;
          *(undefined1 *)(*plVar15 + 0x20 + lVar20) = 1;
          lVar13 = *plVar15;
          *(int *)(lVar13 + lVar20) = iVar11;
          *(undefined4 *)(lVar13 + 4 + lVar20) = 0xffffffff;
          puVar4 = (undefined8 *)(lVar13 + 8 + lVar20);
          *puVar4 = 0;
          puVar4[1] = 0;
          *(undefined8 *)(lVar13 + 0x18 + lVar20) = 0;
        }
      }
      lVar22 = lVar22 + 1;
      lVar21 = lVar21 + 0x30;
      lVar24 = lVar24 + 0x68;
      dVar16 = dVar17;
    } while (lVar19 != lVar24);
  }
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return -(ulonglong)(0.0 < *(double *)param_1[6]) & (ulonglong)(dVar16 / *(double *)param_1[6]);
}



// FUNCTION 1429d1af8 FUN_1429d1af8 body=235 status=ok
// SIG undefined FUN_1429d1af8(void)

void FUN_1429d1af8(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar5 = (longlong)param_2 * 0x70;
  FUN_142988d80((longlong)*(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar5) * 200 +
                *(longlong *)(param_1 + 0x20),param_3);
  lVar4 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(lVar4 + 0x68 + lVar5);
  if ((longlong)iVar1 == -1) {
    *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  }
  else {
    lVar7 = (longlong)iVar1 * 0x70;
    iVar2 = *(int *)(lVar4 + 0x68 + lVar7);
    iVar3 = *(int *)(lVar4 + lVar7 + 0x60 +
                    (ulonglong)(*(int *)(lVar4 + 0x60 + lVar7) == param_2) * 4);
    if ((longlong)iVar2 == -1) {
      *(int *)(param_1 + 0x44) = iVar3;
    }
    else {
      lVar6 = (longlong)iVar2 * 0x70;
      *(int *)(lVar4 + lVar6 + 0x60 + (ulonglong)(*(int *)(lVar4 + 0x60 + lVar6) != iVar1) * 4) =
           iVar3;
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    *(int *)(lVar4 + 0x68 + (longlong)iVar3 * 0x70) = iVar2;
    FUN_1429d1be4(param_1,iVar3,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar7) = *(undefined4 *)(param_1 + 0x48);
    *(int *)(param_1 + 0x48) = iVar1;
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  FUN_146c9c908((longlong)*(int *)(lVar4 + 0x60 + lVar5) * 200 + *(longlong *)(param_1 + 0x20));
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + lVar5) = *(undefined4 *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = param_2;
  return;
}



// FUNCTION 1429d1be4 FUN_1429d1be4 body=307 status=ok
// SIG undefined FUN_1429d1be4(void)

void FUN_1429d1be4(longlong param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  double dVar15;
  double dVar16;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  iVar4 = *(int *)(lVar8 + 0x68 + (longlong)param_2 * 0x70);
  if (iVar4 != param_2 && iVar4 != -1) {
    do {
      iVar9 = iVar4;
      lVar12 = (longlong)iVar9 * 0x70;
      lVar1 = lVar8 + lVar12;
      lVar10 = (longlong)param_2 * 0x70;
      uVar5 = (uint)(*(int *)(lVar8 + 0x60 + lVar12) != param_2);
      uVar11 = (ulonglong)(uVar5 * 0x30);
      *(undefined8 *)(uVar11 + 0x10 + lVar1) = *(undefined8 *)(lVar8 + 0x10 + lVar10);
      uVar7 = ((undefined8 *)(lVar8 + lVar10))[1];
      *(undefined8 *)(uVar11 + lVar1) = *(undefined8 *)(lVar8 + lVar10);
      ((undefined8 *)(uVar11 + lVar1))[1] = uVar7;
      *(undefined8 *)(uVar11 + 0x28 + lVar1) = *(undefined8 *)(lVar8 + 0x28 + lVar10);
      puVar2 = (undefined4 *)(lVar8 + 0x18 + lVar10);
      uVar13 = puVar2[1];
      uVar14 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(uVar11 + 0x18 + lVar1);
      *puVar3 = *puVar2;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x10);
      if ((*(byte *)(lVar8 + 0x6c + lVar10) & 1) == 0) {
        lVar10 = lVar10 + lVar8;
        lVar8 = lVar8 + lVar12;
        uVar11 = (ulonglong)(uVar5 * 0x30);
        dVar16 = *(double *)(uVar11 + 0x10 + lVar8);
        uVar13 = SUB84(dVar16,0);
        uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar15 = *(double *)(lVar10 + 0x40);
        if (dVar15 <= dVar16) {
          uVar13 = SUB84(dVar15,0);
          uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        dVar16 = *(double *)(uVar11 + 8 + lVar8);
        if (*(double *)(lVar10 + 0x38) <= dVar16) {
          dVar16 = *(double *)(lVar10 + 0x38);
        }
        dVar15 = *(double *)(uVar11 + lVar8);
        if (*(double *)(lVar10 + 0x30) <= *(double *)(uVar11 + lVar8)) {
          dVar15 = *(double *)(lVar10 + 0x30);
        }
        *(double *)(uVar11 + lVar8) = dVar15;
        *(double *)(uVar11 + 8 + lVar8) = dVar16;
        *(ulonglong *)(uVar11 + 0x10 + lVar8) = CONCAT44(uVar14,uVar13);
        dVar16 = *(double *)(uVar11 + 0x28 + lVar8);
        uVar13 = SUB84(dVar16,0);
        uVar14 = (undefined4)((ulonglong)dVar16 >> 0x20);
        dVar15 = *(double *)(lVar10 + 0x58);
        if (dVar16 <= dVar15) {
          uVar13 = SUB84(dVar15,0);
          uVar14 = (undefined4)((ulonglong)dVar15 >> 0x20);
        }
        dVar16 = *(double *)(uVar11 + 0x20 + lVar8);
        if (dVar16 <= *(double *)(lVar10 + 0x50)) {
          dVar16 = *(double *)(lVar10 + 0x50);
        }
        dVar15 = *(double *)(uVar11 + 0x18 + lVar8);
        if (dVar15 <= *(double *)(lVar10 + 0x48)) {
          dVar15 = *(double *)(lVar10 + 0x48);
        }
        *(double *)(uVar11 + 0x18 + lVar8) = dVar15;
        *(double *)(uVar11 + 0x20 + lVar8) = dVar16;
        *(ulonglong *)(uVar11 + 0x28 + lVar8) = CONCAT44(uVar14,uVar13);
      }
      if (param_3 != '\0') {
        FUN_1429d1d18(param_1,iVar9,0);
      }
      lVar8 = *(longlong *)(param_1 + 0x10);
      iVar4 = *(int *)(lVar8 + 0x68 + lVar12);
    } while ((iVar4 != -1) && (param_2 = iVar9, iVar9 != iVar4));
  }
  return;
}



// FUNCTION 1429d1d18 FUN_1429d1d18 body=1104 status=ok
// SIG undefined FUN_1429d1d18(void)

void FUN_1429d1d18(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  bool bVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined1 auStack_128 [40];
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar17 = (longlong)param_2 * 0x70;
  lVar16 = lVar8 + lVar17;
  dVar31 = 0.0;
  iVar22 = -1;
  uVar25 = 0;
  iVar21 = -1;
  bVar9 = true;
  do {
    bVar26 = bVar9;
    lVar18 = (longlong)*(int *)(lVar16 + 0x60 + (uVar25 ^ 1) * 4) * 0x70;
    if ((*(byte *)(lVar8 + 0x6c + lVar18) & 1) == 0) {
      lVar19 = lVar8 + lVar18;
      lVar24 = uVar25 * 0x30;
      dVar32 = *(double *)(lVar16 + lVar24);
      dVar30 = *(double *)(lVar16 + 8 + lVar24);
      dVar3 = *(double *)(lVar16 + 0x10 + lVar24);
      dVar4 = *(double *)(lVar16 + 0x18 + lVar24);
      dVar5 = *(double *)(lVar16 + 0x20 + lVar24);
      lVar23 = (uVar25 ^ 1) * 0x30;
      dVar11 = *(double *)(lVar16 + 0x28 + lVar23) - *(double *)(lVar16 + 0x10 + lVar23);
      dVar6 = *(double *)(lVar16 + 0x28 + lVar24);
      dVar10 = *(double *)(lVar16 + 0x20 + lVar23) - *(double *)(lVar16 + 8 + lVar23);
      dVar12 = *(double *)(lVar16 + 0x18 + lVar23) - *(double *)(lVar16 + lVar23);
      dVar10 = dVar10 * dVar11 + dVar12 * dVar10 + dVar11 * dVar12;
      lVar23 = 0;
      dVar11 = dVar31;
      iVar20 = iVar21;
      do {
        iVar7 = *(int *)(lVar18 + lVar8 + 0x60 + lVar23);
        uVar15 = (ulonglong)
                 ((uint)(*(int *)(lVar8 + 0x60 +
                                 (longlong)*(int *)(lVar8 + 0x68 + (longlong)iVar7 * 0x70) * 0x70)
                        == iVar7) * 0x30);
        uVar28 = SUB84(dVar3,0);
        uVar29 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x10 + uVar15);
        if (dVar31 <= dVar3) {
          uVar28 = SUB84(dVar31,0);
          uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar35 = SUB84(dVar30,0);
        uVar36 = (undefined4)((ulonglong)dVar30 >> 0x20);
        dVar31 = *(double *)(lVar19 + 8 + uVar15);
        if (dVar31 <= dVar30) {
          uVar35 = SUB84(dVar31,0);
          uVar36 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar37 = SUB84(dVar32,0);
        uVar38 = (undefined4)((ulonglong)dVar32 >> 0x20);
        dVar31 = *(double *)(lVar19 + uVar15);
        if (dVar31 <= dVar32) {
          uVar37 = SUB84(dVar31,0);
          uVar38 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar39 = SUB84(dVar6,0);
        uVar40 = (undefined4)((ulonglong)dVar6 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x28 + uVar15);
        if (dVar6 <= dVar31) {
          uVar39 = SUB84(dVar31,0);
          uVar40 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        uVar33 = SUB84(dVar5,0);
        uVar34 = (undefined4)((ulonglong)dVar5 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x20 + uVar15);
        if (dVar5 <= dVar31) {
          uVar33 = SUB84(dVar31,0);
          uVar34 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        dVar12 = (double)CONCAT44(uVar40,uVar39) - (double)CONCAT44(uVar29,uVar28);
        uVar28 = SUB84(dVar4,0);
        uVar29 = (undefined4)((ulonglong)dVar4 >> 0x20);
        dVar31 = *(double *)(lVar19 + 0x18 + uVar15);
        if (dVar4 <= dVar31) {
          uVar28 = SUB84(dVar31,0);
          uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
        }
        dVar31 = (double)CONCAT44(uVar34,uVar33) - (double)CONCAT44(uVar36,uVar35);
        dVar13 = (double)CONCAT44(uVar29,uVar28) - (double)CONCAT44(uVar38,uVar37);
        dVar31 = dVar31 * dVar12 + dVar13 * dVar31 + dVar12 * dVar13;
        dVar31 = (dVar31 + dVar31) - (dVar10 + dVar10);
        iVar21 = *(int *)(lVar16 + 0x60 + uVar25 * 4);
        if (dVar11 <= dVar31) {
          dVar31 = dVar11;
          iVar7 = iVar22;
          iVar21 = iVar20;
        }
        iVar22 = iVar7;
        lVar23 = lVar23 + 4;
        dVar11 = dVar31;
        iVar20 = iVar21;
      } while (lVar23 != 8);
    }
    uVar25 = 1;
    bVar9 = false;
  } while (bVar26);
  if ((iVar22 != -1) && (iVar22 != param_2)) {
    iVar20 = *(int *)(lVar8 + 0x68 + (longlong)iVar22 * 0x70);
    if (iVar21 != iVar20) {
      lVar19 = (longlong)iVar20 * 0x70;
      bVar26 = *(int *)(lVar8 + 0x60 + lVar19) != iVar22;
      bVar27 = *(int *)(lVar8 + 0x60 +
                       (longlong)*(int *)(lVar8 + 0x68 + (longlong)iVar21 * 0x70) * 0x70) == iVar21;
      bVar9 = !bVar27;
      *(int *)(lVar16 + 0x60 + (ulonglong)bVar9 * 4) = iVar22;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)iVar22 * 0x70) = param_2;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)iVar21 * 0x70) = iVar20;
      *(int *)(*(longlong *)(param_1 + 0x10) + lVar19 + 0x60 + (ulonglong)bVar26 * 4) = iVar21;
      lVar16 = *(longlong *)(param_1 + 0x10) + lVar17;
      uVar25 = (ulonglong)((uint)bVar9 * 0x30);
      local_e8 = *(undefined8 *)(uVar25 + 0x10 + lVar16);
      local_f8 = *(undefined8 *)(uVar25 + lVar16);
      uStack_f0 = ((undefined8 *)(uVar25 + lVar16))[1];
      local_d0 = *(undefined8 *)(uVar25 + 0x28 + lVar16);
      puVar1 = (undefined8 *)(uVar25 + 0x18 + lVar16);
      local_e0 = *puVar1;
      uStack_d8 = puVar1[1];
      lVar18 = *(longlong *)(param_1 + 0x10) + lVar19;
      lVar8 = (ulonglong)bVar26 * 0x30;
      *(undefined8 *)(uVar25 + 0x10 + lVar16) = *(undefined8 *)(lVar18 + 0x10 + lVar8);
      uVar14 = ((undefined8 *)(lVar18 + lVar8))[1];
      *(undefined8 *)(uVar25 + lVar16) = *(undefined8 *)(lVar18 + lVar8);
      ((undefined8 *)(uVar25 + lVar16))[1] = uVar14;
      *(undefined8 *)(uVar25 + 0x28 + lVar16) = *(undefined8 *)(lVar18 + 0x28 + lVar8);
      puVar1 = (undefined8 *)(lVar18 + 0x18 + lVar8);
      uVar14 = puVar1[1];
      puVar2 = (undefined8 *)(uVar25 + 0x18 + lVar16);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      lVar16 = *(longlong *)(param_1 + 0x10) + lVar19;
      *(undefined8 *)(lVar16 + lVar8) = local_f8;
      ((undefined8 *)(lVar16 + lVar8))[1] = uStack_f0;
      *(undefined8 *)(lVar16 + 0x10 + lVar8) = local_e8;
      puVar1 = (undefined8 *)(lVar16 + 0x18 + lVar8);
      *puVar1 = local_e0;
      puVar1[1] = uStack_d8;
      *(undefined8 *)(lVar16 + 0x28 + lVar8) = local_d0;
      lVar8 = *(longlong *)(param_1 + 0x10);
      lVar16 = lVar8 + lVar17;
      lVar18 = (ulonglong)bVar27 * 0x30;
      *(undefined8 *)(lVar16 + 0x10 + lVar18) = *(undefined8 *)(lVar8 + 0x10 + lVar19);
      uVar14 = ((undefined8 *)(lVar8 + lVar19))[1];
      *(undefined8 *)(lVar16 + lVar18) = *(undefined8 *)(lVar8 + lVar19);
      ((undefined8 *)(lVar16 + lVar18))[1] = uVar14;
      puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar19);
      uVar14 = puVar1[1];
      puVar2 = (undefined8 *)(lVar16 + 0x18 + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      *(undefined8 *)(lVar16 + 0x28 + lVar18) = *(undefined8 *)(lVar8 + 0x28 + lVar19);
      lVar16 = *(longlong *)(param_1 + 0x10);
      lVar17 = lVar17 + lVar16;
      dVar31 = *(double *)(lVar17 + 0x10 + lVar18);
      uVar28 = SUB84(dVar31,0);
      uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar32 = *(double *)(lVar16 + 0x40 + lVar19);
      if (dVar32 <= dVar31) {
        uVar28 = SUB84(dVar32,0);
        uVar29 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      dVar31 = *(double *)(lVar17 + 8 + lVar18);
      dVar32 = *(double *)(lVar16 + 0x38 + lVar19);
      if (dVar32 <= dVar31) {
        dVar31 = dVar32;
      }
      dVar32 = *(double *)(lVar16 + 0x30 + lVar19);
      dVar30 = *(double *)(lVar17 + lVar18);
      if (dVar32 <= *(double *)(lVar17 + lVar18)) {
        dVar30 = dVar32;
      }
      *(double *)(lVar17 + lVar18) = dVar30;
      *(double *)(lVar17 + 8 + lVar18) = dVar31;
      *(ulonglong *)(lVar17 + 0x10 + lVar18) = CONCAT44(uVar29,uVar28);
      dVar31 = *(double *)(lVar17 + 0x28 + lVar18);
      uVar28 = SUB84(dVar31,0);
      uVar29 = (undefined4)((ulonglong)dVar31 >> 0x20);
      dVar32 = *(double *)(lVar16 + 0x58 + lVar19);
      if (dVar31 <= dVar32) {
        uVar28 = SUB84(dVar32,0);
        uVar29 = (undefined4)((ulonglong)dVar32 >> 0x20);
      }
      dVar31 = *(double *)(lVar17 + 0x18 + lVar18);
      dVar32 = *(double *)(lVar17 + 0x20 + lVar18);
      dVar30 = *(double *)(lVar16 + 0x50 + lVar19);
      if (dVar32 <= dVar30) {
        dVar32 = dVar30;
      }
      dVar30 = *(double *)(lVar16 + 0x48 + lVar19);
      if (dVar31 <= dVar30) {
        dVar31 = dVar30;
      }
      *(double *)(lVar17 + 0x18 + lVar18) = dVar31;
      *(double *)(lVar17 + 0x20 + lVar18) = dVar32;
      *(ulonglong *)(lVar17 + 0x28 + lVar18) = CONCAT44(uVar29,uVar28);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
  local_100 = param_1;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429d216a FUN_1429d216a body=668 status=ok
// SIG undefined FUN_1429d216a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1429d216a(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_68 [47];
  char local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x44) == -1) {
    FUN_1429d2596(param_1,param_2,param_3,param_4);
    *(int *)(param_1 + 0x44) = *param_2;
  }
  else {
    iVar12 = FUN_146e0cda8(param_1,param_4,&local_39);
    if (local_39 == '\x01') {
      lVar14 = (longlong)iVar12 * 0x70;
      lVar16 = *(longlong *)(param_1 + 0x10);
      lVar9 = *(longlong *)(param_1 + 0x20);
      iVar8 = *(int *)(lVar16 + 0x60 + lVar14);
      lVar18 = (longlong)iVar8 * 200;
      dVar23 = *(double *)(lVar9 + 0x28 + lVar18);
      dVar24 = (double)_DAT_14c75efe0;
      dVar22 = *(double *)(lVar9 + 0x30 + lVar18);
      dVar5 = *(double *)(lVar9 + 0x38 + lVar18);
      dVar6 = *(double *)(lVar9 + 0x40 + lVar18);
      dVar7 = *(double *)(lVar9 + 0x48 + lVar18);
      *(double *)(lVar16 + lVar14) = *(double *)(lVar9 + 0x20 + lVar18) - dVar24;
      *(double *)(lVar16 + 8 + lVar14) = dVar23 - dVar24;
      *(double *)(lVar16 + 0x10 + lVar14) = dVar22 - dVar24;
      *(double *)(lVar16 + 0x18 + lVar14) = dVar5 + dVar24;
      *(double *)(lVar16 + 0x20 + lVar14) = dVar6 + dVar24;
      *(double *)(lVar16 + 0x28 + lVar14) = dVar24 + dVar7;
      FUN_1429d1be4(param_1,iVar12,CONCAT71((int7)((ulonglong)lVar18 >> 8),1));
      *param_2 = iVar12;
      param_2[1] = iVar8;
    }
    else {
      FUN_1429d2596(param_1,param_2,param_3,param_4);
      lVar18 = (longlong)iVar12 * 0x70;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar18);
      iVar13 = FUN_1429d299c(param_1);
      lVar16 = *(longlong *)(param_1 + 0x10);
      lVar14 = (longlong)iVar13 * 0x70;
      pdVar1 = (double *)(lVar16 + lVar14);
      *(int *)(lVar16 + 0x68 + lVar14) = iVar8;
      *(int *)(lVar16 + 0x60 + lVar14) = iVar12;
      iVar17 = *param_2;
      *(int *)(lVar16 + 100 + lVar14) = iVar17;
      lVar9 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(lVar16 + 0x10 + lVar14) = *(undefined8 *)(lVar9 + 0x10 + lVar18);
      uVar11 = ((undefined8 *)(lVar9 + lVar18))[1];
      *(undefined8 *)(lVar16 + lVar14) = *(undefined8 *)(lVar9 + lVar18);
      ((undefined8 *)(lVar16 + lVar14))[1] = uVar11;
      *(undefined8 *)(lVar16 + 0x28 + lVar14) = *(undefined8 *)(lVar9 + 0x28 + lVar18);
      puVar2 = (undefined8 *)(lVar9 + 0x18 + lVar18);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar16 + 0x18 + lVar14);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      lVar16 = *(longlong *)(param_1 + 0x10);
      if ((*(byte *)(lVar16 + 0x6c + lVar18) & 1) == 0) {
        lVar16 = lVar16 + lVar18;
        dVar23 = pdVar1[2];
        uVar20 = SUB84(dVar23,0);
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar22 = *(double *)(lVar16 + 0x40);
        if (dVar22 <= dVar23) {
          uVar20 = SUB84(dVar22,0);
          uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        dVar23 = pdVar1[1];
        if (*(double *)(lVar16 + 0x38) <= pdVar1[1]) {
          dVar23 = *(double *)(lVar16 + 0x38);
        }
        dVar22 = *pdVar1;
        if (*(double *)(lVar16 + 0x30) <= *pdVar1) {
          dVar22 = *(double *)(lVar16 + 0x30);
        }
        *pdVar1 = dVar22;
        pdVar1[1] = dVar23;
        pdVar1[2] = (double)CONCAT44(uVar21,uVar20);
        dVar23 = pdVar1[5];
        uVar20 = SUB84(dVar23,0);
        uVar21 = (undefined4)((ulonglong)dVar23 >> 0x20);
        dVar22 = *(double *)(lVar16 + 0x58);
        if (dVar23 <= dVar22) {
          uVar20 = SUB84(dVar22,0);
          uVar21 = (undefined4)((ulonglong)dVar22 >> 0x20);
        }
        dVar23 = pdVar1[4];
        if (pdVar1[4] <= *(double *)(lVar16 + 0x50)) {
          dVar23 = *(double *)(lVar16 + 0x50);
        }
        dVar22 = pdVar1[3];
        if (pdVar1[3] <= *(double *)(lVar16 + 0x48)) {
          dVar22 = *(double *)(lVar16 + 0x48);
        }
        pdVar1[3] = dVar22;
        pdVar1[4] = dVar23;
        pdVar1[5] = (double)CONCAT44(uVar21,uVar20);
        iVar17 = *param_2;
        lVar16 = *(longlong *)(param_1 + 0x10);
      }
      uVar19 = (longlong)iVar17 * 0x70;
      pdVar1[8] = *(double *)(lVar16 + 0x10 + uVar19);
      dVar23 = ((double *)(lVar16 + uVar19))[1];
      pdVar1[6] = *(double *)(lVar16 + uVar19);
      pdVar1[7] = dVar23;
      puVar4 = (undefined4 *)(lVar16 + 0x18 + uVar19);
      uVar20 = puVar4[1];
      uVar21 = puVar4[2];
      uVar10 = puVar4[3];
      *(undefined4 *)(pdVar1 + 9) = *puVar4;
      *(undefined4 *)((longlong)pdVar1 + 0x4c) = uVar20;
      *(undefined4 *)(pdVar1 + 10) = uVar21;
      *(undefined4 *)((longlong)pdVar1 + 0x54) = uVar10;
      pdVar1[0xb] = *(double *)(lVar16 + 0x28 + uVar19);
      if (iVar8 == -1) {
        piVar15 = (int *)(param_1 + 0x44);
      }
      else {
        lVar16 = *(longlong *)(param_1 + 0x10);
        uVar19 = (ulonglong)
                 (*(int *)(lVar16 + 0x60 + (longlong)*(int *)(lVar16 + 0x68 + lVar18) * 0x70) !=
                 iVar12);
        piVar15 = (int *)((longlong)iVar8 * 0x70 + lVar16 + uVar19 * 4 + 0x60);
      }
      *piVar15 = iVar13;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar18) = iVar13;
      *(int *)(*(longlong *)(param_1 + 0x10) + 0x68 + (longlong)*param_2 * 0x70) = iVar13;
      FUN_1429d1be4(param_1,iVar13,CONCAT71((int7)(uVar19 >> 8),1));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429d2408 FUN_1429d2408 body=395 status=ok
// SIG undefined FUN_1429d2408(void)

void FUN_1429d2408(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  undefined4 local_240;
  undefined1 local_238;
  undefined1 local_230;
  undefined1 local_228;
  longlong local_218 [2];
  undefined1 local_208 [472];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_218[0] = 0;
  local_218[1] = 0;
  iVar1 = *(int *)(param_1 + 0x110) + *(int *)(param_1 + 0x38);
  if (0 < (longlong)*(int *)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar3 = 0;
    do {
      iVar1 = iVar1 + *(int *)(lVar2 + 0x18 + lVar3) +
              *(int *)(lVar2 + 0x54 + lVar3) * *(int *)(lVar2 + 0x50 + lVar3) *
              *(int *)(lVar2 + 0x58 + lVar3) * *(int *)(lVar2 + 0x90 + lVar3) +
              *(int *)(lVar2 + 0xa0 + lVar3);
      lVar3 = lVar3 + 200;
    } while ((longlong)*(int *)(param_1 + 0x28) * 200 - lVar3 != 0);
  }
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_14479f570(local_218);
  }
  FUN_146c9de8c(local_218,param_1 + 0x30);
  FUN_146c9de8c(local_218,param_1 + 0x108);
  if (0 < *(int *)(param_1 + 0x28)) {
    lVar2 = 0;
    lVar3 = 0;
    do {
      FUN_146c9db4e(*(longlong *)(param_1 + 0x20) + lVar2,local_218);
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 200;
    } while (lVar3 < *(int *)(param_1 + 0x28));
  }
  local_228 = 1;
  local_230 = 0;
  local_238 = 0;
  local_248 = 0x40f86a0000000000;
  local_240 = 0;
  FUN_146e0da1c(local_208,local_218,0xc,0x10);
  FUN_146e0dbbe(param_1,local_208);
  *(undefined1 *)(param_1 + 0x181) = 1;
  FUN_146e09caa(local_208);
  if (local_218[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429d2596 FUN_1429d2596 body=1028 status=ok
// SIG undefined FUN_1429d2596(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1429d2596(longlong param_1,int *param_2,undefined8 *param_3,double *param_4)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  double dVar16;
  undefined1 auStack_1d8 [32];
  undefined4 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8;
  undefined **local_1a0;
  undefined4 local_198;
  undefined2 local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180 [11];
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  double local_90;
  double dStack_88;
  double local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar11 = *(int *)(param_1 + 0x4c);
  lVar14 = (longlong)iVar11;
  if (lVar14 == -1) {
    iVar15 = *(int *)(param_1 + 0x28);
    iVar11 = *(int *)(param_1 + 0x18);
    lVar14 = (longlong)iVar11;
    *(int *)(param_1 + 0x18) = iVar11 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar11) {
      FUN_14008b9bc((longlong *)(param_1 + 0x10),iVar11);
    }
    local_1b0 = (longlong *)(param_1 + 0x20);
    *(int *)(*(longlong *)(param_1 + 0x10) + 0x60 + lVar14 * 0x70) = iVar15;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + lVar14 * 0x70);
    *pbVar1 = *pbVar1 | 1;
    local_98 = param_3[6];
    local_c8 = *param_3;
    uStack_c0 = param_3[1];
    local_b8 = *(undefined4 *)(param_3 + 2);
    uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x14);
    uStack_b0 = *(undefined4 *)(param_3 + 3);
    uStack_ac = *(undefined4 *)((longlong)param_3 + 0x1c);
    local_a8 = *(undefined4 *)(param_3 + 4);
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_a0 = *(undefined4 *)(param_3 + 5);
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
    local_90 = *param_4;
    dStack_88 = param_4[1];
    local_80 = param_4[2];
    local_78 = *(undefined4 *)(param_4 + 3);
    uStack_74 = *(undefined4 *)((longlong)param_4 + 0x1c);
    uStack_70 = *(undefined4 *)(param_4 + 4);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0x24);
    local_68 = param_4[5];
    local_d8 = (undefined8 *)0x0;
    uStack_d0 = 1;
    local_1a8 = (longlong *)(param_1 + 0x10);
    FUN_14479f6b8(&local_d8,0);
    plVar8 = local_1b0;
    local_d8[6] = local_98;
    *(undefined4 *)(local_d8 + 4) = local_a8;
    *(undefined4 *)((longlong)local_d8 + 0x24) = uStack_a4;
    *(undefined4 *)(local_d8 + 5) = uStack_a0;
    *(undefined4 *)((longlong)local_d8 + 0x2c) = uStack_9c;
    *(undefined4 *)(local_d8 + 2) = local_b8;
    *(undefined4 *)((longlong)local_d8 + 0x14) = uStack_b4;
    *(undefined4 *)(local_d8 + 3) = uStack_b0;
    *(undefined4 *)((longlong)local_d8 + 0x1c) = uStack_ac;
    *local_d8 = local_c8;
    local_d8[1] = uStack_c0;
    local_d8[9] = local_80;
    local_d8[7] = local_90;
    local_d8[8] = dStack_88;
    *(undefined4 *)(local_d8 + 10) = local_78;
    *(undefined4 *)((longlong)local_d8 + 0x54) = uStack_74;
    *(undefined4 *)(local_d8 + 0xb) = uStack_70;
    *(undefined4 *)((longlong)local_d8 + 0x5c) = uStack_6c;
    local_d8[0xc] = local_68;
    local_198 = 0;
    local_194 = 1;
    local_1a0 = &PTR_FUN_149f48460;
    local_128 = 0;
    local_120 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0x40f86a0000000000;
    local_1b8 = 0xf;
    FUN_1429d0aa8(&local_1a0,&local_d8,0,0);
    iVar7 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar7 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar7 + 1U) {
      FUN_146e0b0be(plVar8,iVar7);
    }
    puVar9 = (undefined8 *)(*plVar8 + (longlong)iVar7 * 200);
    *(undefined4 *)(puVar9 + 1) = 0;
    *(undefined2 *)((longlong)puVar9 + 0xc) = 1;
    *puVar9 = &PTR_FUN_149f48460;
    puVar9[2] = 0;
    puVar9[2] = local_190;
    local_190 = 0;
    *(undefined4 *)(puVar9 + 3) = (undefined4)uStack_188;
    *(undefined4 *)((longlong)puVar9 + 0x1c) = uStack_188._4_4_;
    uStack_188 = 0;
    puVar12 = local_180;
    puVar13 = puVar9 + 4;
    for (lVar10 = 0xb; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
    *(undefined4 *)(puVar9 + 0x10) = local_120;
    puVar9[0xf] = local_128;
    puVar9[0x11] = 0;
    puVar9[0x11] = local_118;
    local_118 = 0;
    *(undefined4 *)(puVar9 + 0x12) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)puVar9 + 0x94) = uStack_110._4_4_;
    uStack_110 = 0;
    puVar9[0x13] = 0;
    puVar9[0x13] = local_108;
    local_108 = 0;
    *(undefined4 *)(puVar9 + 0x14) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)puVar9 + 0xa4) = uStack_100._4_4_;
    uStack_100 = 0;
    puVar9[0x15] = 0;
    puVar9[0x15] = local_f8;
    local_f8 = 0;
    *(undefined4 *)(puVar9 + 0x16) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)puVar9 + 0xb4) = uStack_f0._4_4_;
    uStack_f0 = 0;
    puVar9[0x17] = local_e8;
    *(undefined1 *)(puVar9 + 0x18) = local_e0;
    FUN_146ca5918(&local_1a0);
    if (local_d8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    lVar10 = *local_1a8;
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(lVar10 + 100 + lVar14 * 0x70);
    iVar15 = *(int *)(lVar10 + 0x60 + lVar14 * 0x70);
  }
  dVar2 = param_4[1];
  dVar3 = param_4[2];
  dVar16 = (double)_DAT_14c75efe0;
  dVar4 = param_4[3];
  dVar5 = param_4[4];
  dVar6 = param_4[5];
  lVar14 = lVar14 * 0x70;
  *(double *)(lVar10 + lVar14) = *param_4 - dVar16;
  *(double *)(lVar10 + 8 + lVar14) = dVar2 - dVar16;
  *(double *)(lVar10 + 0x10 + lVar14) = dVar3 - dVar16;
  *(double *)(lVar10 + 0x18 + lVar14) = dVar4 + dVar16;
  *(double *)(lVar10 + 0x20 + lVar14) = dVar5 + dVar16;
  *(double *)(lVar10 + 0x28 + lVar14) = dVar16 + dVar6;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x68 + lVar14) = 0xffffffff;
  *param_2 = iVar11;
  param_2[1] = iVar15;
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429d299c FUN_1429d299c body=89 status=ok
// SIG undefined FUN_1429d299c(void)

ulonglong FUN_1429d299c(longlong param_1)

{
  byte *pbVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)*(int *)(param_1 + 0x48);
  if (uVar3 == 0xffffffffffffffff) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar3 = (ulonglong)uVar2;
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (*(uint *)(param_1 + 0x1c) == uVar2) {
      FUN_14008b9bc((longlong *)(param_1 + 0x10),uVar2);
    }
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x6c + (longlong)(int)uVar2 * 0x70);
    *pbVar1 = *pbVar1 & 0xfe;
  }
  else {
    *(undefined4 *)(param_1 + 0x48) =
         *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 100 + uVar3 * 0x70);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1429d29f6 FUN_1429d29f6 body=2352 status=ok
// SIG undefined FUN_1429d29f6(void)

void FUN_1429d29f6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  DWORD *pDVar4;
  LARGE_INTEGER LVar5;
  double dVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  LARGE_INTEGER LVar16;
  LARGE_INTEGER LVar17;
  LARGE_INTEGER LVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  undefined8 *puVar22;
  uint uVar23;
  ulonglong uVar24;
  LARGE_INTEGER *pLVar25;
  longlong lVar26;
  LARGE_INTEGER *pLVar27;
  DWORD DVar28;
  DWORD DVar29;
  LONG LVar30;
  LONG LVar31;
  LARGE_INTEGER LVar32;
  LARGE_INTEGER LVar33;
  LARGE_INTEGER LVar34;
  LARGE_INTEGER LVar35;
  double dVar36;
  DWORD DVar37;
  LONG LVar38;
  undefined1 auStack_1f8 [40];
  longlong *local_1d0;
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  ulonglong local_1a8;
  undefined8 *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  LARGE_INTEGER local_158;
  LARGE_INTEGER LStack_150;
  LARGE_INTEGER local_148;
  DWORD local_140;
  undefined4 uStack_13c;
  DWORD DStack_138;
  undefined4 uStack_134;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128 [3];
  LARGE_INTEGER LStack_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER LStack_100;
  LARGE_INTEGER local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  *(undefined1 *)(param_1 + 0xc) = 0;
  uVar23 = *(uint *)(param_2 + 1);
  uVar24 = (ulonglong)uVar23;
  uVar8 = (longlong)(int)uVar23 / (longlong)*(int *)(param_1 + 0x128);
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar8 & 0xffffffff,
                  (longlong)(int)uVar23 % (longlong)*(int *)(param_1 + 0x128) & 0xffffffff);
  }
  lVar26 = param_1 + 0x150;
  if (*(int *)(param_1 + 0x15c) < (int)uVar8) {
    FUN_14481578e(lVar26,uVar8 & 0xffffffff);
  }
  iVar19 = FUN_146e09e18(param_1);
  if ((int)uVar23 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar24);
  }
  lVar1 = *(longlong *)(param_1 + 0x170) + (longlong)iVar19 * 0xf8;
  local_1c0 = *(longlong *)(param_1 + 0x170) + (longlong)iVar19 * 0xf8 + 0x38;
  if (*(int *)(lVar1 + 0x44) < (int)uVar23) {
    FUN_14479f570(local_1c0,uVar23);
  }
  local_1d0 = (longlong *)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)(param_1 + 0x114) < 0) {
    FUN_14479f570(local_1d0,0);
  }
  iVar20 = *(int *)(param_1 + 0x2c);
  FUN_146e04599(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((iVar20 < 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    FUN_146e045c2(param_1 + 0x20,0);
  }
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14008b684(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x44) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  if (*(int *)(param_1 + 0x3c) < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN_14479f570(param_1 + 0x30,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_1402a3552(param_1 + 0x50);
  if (*(int *)(param_1 + 0xac) < 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
    FUN_14481578e(param_1 + 0xa0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  if (*(int *)(param_1 + 0xbc) < 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
    FUN_14481578e(param_1 + 0xb0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_146e042b0();
  }
  local_1b8 = param_1 + 0x118;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0;
  if (*(int *)(param_1 + 0x124) < 0) {
    FUN_14008b768(local_1b8,0);
  }
  *(undefined4 *)(param_1 + 0x13c) = 0;
  QueryPerformanceCounter(local_128);
  *(double *)(param_1 + 0x140) = (double)local_128[0].QuadPart * DAT_14c83f420 + 16777216.0;
  iVar20 = DAT_14c75efb8;
  dVar11 = (double)DAT_14c75efb8;
  *(double *)(param_1 + 200) = dVar11;
  dVar9 = 1.0;
  if (0 < iVar20) {
    dVar9 = 1.0 / dVar11;
  }
  *(double *)(param_1 + 0xd0) = dVar9;
  *(undefined4 *)(param_1 + 0xd8) = DAT_14c75efbc;
  *(undefined4 *)(param_1 + 0xdc) = DAT_14c75efc0;
  *(undefined4 *)(param_1 + 0xe0) = DAT_14c75efc4;
  local_1c4 = iVar19;
  local_1b0 = lVar26;
  local_1a8 = uVar24;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((longlong)(int)param_2[1] != 0) {
      pLVar25 = (LARGE_INTEGER *)*param_2;
      pLVar27 = pLVar25 + (longlong)(int)param_2[1] * 0xd;
      do {
        local_f8 = pLVar25[6];
        local_128[0] = *pLVar25;
        local_128[1] = pLVar25[1];
        local_128[2] = pLVar25[2];
        LStack_110 = pLVar25[3];
        local_108 = pLVar25[4];
        LStack_100 = pLVar25[5];
        local_148 = pLVar25[9];
        local_158 = pLVar25[7];
        LStack_150 = pLVar25[8];
        local_130 = pLVar25[0xc];
        local_140 = pLVar25[10].s.LowPart;
        uStack_13c = *(undefined4 *)((longlong)pLVar25 + 0x54);
        DStack_138 = pLVar25[0xb].s.LowPart;
        uStack_134 = *(undefined4 *)((longlong)pLVar25 + 0x5c);
        FUN_1429cf068(param_1,local_128,&local_158,1);
        pLVar25 = pLVar25 + 0xd;
      } while (pLVar25 != pLVar27);
    }
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined8 *)(lVar1 + 8) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x10) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x18) = 0x7fefffffffffffff;
    *(undefined8 *)(lVar1 + 0x20) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x28) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x30) = 0xffefffffffffffff;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    if ((longlong)(int)param_2[1] != 0) {
      puVar22 = (undefined8 *)*param_2;
      local_1a0 = puVar22 + (longlong)(int)param_2[1] * 0xd;
      do {
        local_168 = *puVar22;
        uStack_160 = puVar22[1];
        iVar19 = *(int *)(puVar22 + 2);
        local_188 = *(undefined8 *)((longlong)puVar22 + 0x24);
        uStack_180 = *(undefined8 *)((longlong)puVar22 + 0x2c);
        local_178 = *(undefined4 *)((longlong)puVar22 + 0x34);
        local_198 = *(undefined8 *)((longlong)puVar22 + 0x14);
        uStack_190 = *(undefined8 *)((longlong)puVar22 + 0x1c);
        local_128[2].s = *(LARGE_INTEGER *)&((LARGE_INTEGER *)(puVar22 + 9))->s;
        local_128[0] = *(LARGE_INTEGER *)(puVar22 + 7);
        local_128[1] = *(LARGE_INTEGER *)(puVar22 + 8);
        LStack_100.s = *(LARGE_INTEGER *)&((LARGE_INTEGER *)(puVar22 + 0xc))->s;
        LStack_110 = *(LARGE_INTEGER *)(puVar22 + 10);
        local_108 = *(LARGE_INTEGER *)(puVar22 + 0xb);
        lVar26 = 0;
        do {
          LVar5 = local_128[lVar26 + 3];
          if ((double)LVar5 < (double)local_128[lVar26]) {
LAB_1429d3189:
            local_128[0].QuadPart = -0x10000000000001;
            local_128[1].QuadPart = -0x10000000000001;
            local_128[2].QuadPart = -0x10000000000001;
            LStack_110.QuadPart = 0x7fefffffffffffff;
            local_108.s.LowPart = 0xffffffff;
            local_108.s.HighPart = 0x7fefffff;
            LStack_100.QuadPart = 0x7fefffffffffffff;
            goto LAB_1429d31cd;
          }
          iVar20 = _finite((double)local_128[lVar26]);
          if (iVar20 == 0) goto LAB_1429d3189;
          iVar20 = _finite((double)LVar5);
          LVar33 = LStack_100;
          LVar35 = local_108;
          LVar18 = LStack_110;
          LVar17 = local_128[2];
          LVar16 = local_128[1];
          LVar5 = local_128[0];
          if (iVar20 == 0) goto LAB_1429d3189;
          lVar26 = lVar26 + 1;
        } while (lVar26 != 3);
        DVar37 = LStack_100.s.LowPart;
        LVar38 = LStack_100.s.HighPart;
        DVar29 = local_128[2].s.LowPart;
        LVar31 = local_128[2].s.HighPart;
        dVar9 = (double)LStack_100 - (double)local_128[2];
        dVar11 = (double)local_108 - (double)local_128[1];
        dVar13 = (double)LStack_110 - (double)local_128[0];
        dVar6 = dVar13;
        if ((dVar13 <= dVar9 || dVar13 <= dVar11) && (dVar6 = dVar11, dVar11 <= dVar9)) {
          dVar6 = dVar9;
        }
        if (*(double *)(param_1 + 0x130) <= dVar6 && dVar6 != *(double *)(param_1 + 0x130)) {
LAB_1429d31cd:
          uVar7 = *(undefined4 *)(param_1 + 0x110);
          if (*(int *)(param_1 + 0x120) <= iVar19) {
            FUN_14008b974(local_1b8,(iVar19 - *(int *)(param_1 + 0x120)) + 1);
          }
          lVar21 = (longlong)iVar19 * 0x18;
          *(undefined1 *)(*(longlong *)(param_1 + 0x118) + 0x14 + lVar21) = 1;
          lVar26 = *(longlong *)(param_1 + 0x118);
          *(undefined4 *)(lVar26 + lVar21) = uVar7;
          puVar3 = (undefined4 *)(lVar26 + 4 + lVar21);
          *puVar3 = 0xffffffff;
          puVar3[1] = 0xffffffff;
          puVar3[2] = 0xffffffff;
          puVar3[3] = 0xffffffff;
          iVar20 = *(int *)(param_1 + 0x110);
          *(uint *)(param_1 + 0x110) = iVar20 + 1U;
          if (*(uint *)(param_1 + 0x114) < iVar20 + 1U) {
            FUN_14479f6b8(local_1d0,iVar20);
          }
          lVar26 = *local_1d0;
          lVar21 = (longlong)iVar20 * 0x68;
          *(undefined8 *)(lVar26 + lVar21) = local_168;
          ((undefined8 *)(lVar26 + lVar21))[1] = uStack_160;
          *(int *)(lVar26 + 0x10 + lVar21) = iVar19;
          *(undefined4 *)(lVar26 + 0x34 + lVar21) = local_178;
          puVar3 = (undefined4 *)(lVar26 + 0x24 + lVar21);
          *puVar3 = (undefined4)local_188;
          puVar3[1] = local_188._4_4_;
          puVar3[2] = (undefined4)uStack_180;
          puVar3[3] = uStack_180._4_4_;
          puVar2 = (undefined8 *)(lVar26 + 0x14 + lVar21);
          *puVar2 = local_198;
          puVar2[1] = uStack_190;
          pLVar25 = (LARGE_INTEGER *)(lVar26 + 0x38 + lVar21);
          *pLVar25 = local_128[0];
          pLVar25[1] = local_128[1];
          ((LARGE_INTEGER *)(lVar26 + 0x48 + lVar21))->s = (_struct_19)local_128[2];
          pDVar4 = (DWORD *)(lVar26 + 0x50 + lVar21);
          *pDVar4 = LStack_110.s.LowPart;
          pDVar4[1] = LStack_110.s.HighPart;
          pDVar4[2] = local_108._0_4_;
          pDVar4[3] = local_108._4_4_;
          ((LARGE_INTEGER *)(lVar26 + 0x60 + lVar21))->s = (_struct_19)LStack_100;
        }
        else {
          iVar20 = *(int *)(lVar1 + 0x40);
          uVar23 = iVar20 + 1;
          *(uint *)(lVar1 + 0x40) = uVar23;
          if (*(uint *)(lVar1 + 0x44) < uVar23) {
            FUN_14479f6b8(local_1c0,iVar20);
          }
          lVar26 = *(longlong *)(lVar1 + 0x38);
          lVar21 = (longlong)iVar20 * 0x68;
          *(undefined8 *)(lVar26 + lVar21) = local_168;
          ((undefined8 *)(lVar26 + lVar21))[1] = uStack_160;
          *(int *)(lVar26 + 0x10 + lVar21) = iVar19;
          *(undefined4 *)(lVar26 + 0x34 + lVar21) = local_178;
          puVar2 = (undefined8 *)(lVar26 + 0x24 + lVar21);
          *puVar2 = local_188;
          puVar2[1] = uStack_180;
          puVar2 = (undefined8 *)(lVar26 + 0x14 + lVar21);
          *puVar2 = local_198;
          puVar2[1] = uStack_190;
          ((LARGE_INTEGER *)(lVar26 + 0x48 + lVar21))->s = (_struct_19)local_128[2];
          pLVar25 = (LARGE_INTEGER *)(lVar26 + 0x38 + lVar21);
          *pLVar25 = local_128[0];
          pLVar25[1] = local_128[1];
          pLVar25 = (LARGE_INTEGER *)(lVar26 + 0x50 + lVar21);
          pLVar25->s = (_struct_19)LStack_110;
          pLVar25[1].s = (_struct_19)local_108;
          ((LARGE_INTEGER *)(lVar26 + 0x60 + lVar21))->s = (_struct_19)LStack_100;
          dVar10 = (double)(int)uVar23;
          dVar6 = *(double *)(lVar1 + 0x18);
          DVar28 = SUB84(dVar6,0);
          LVar30 = (LONG)((ulonglong)dVar6 >> 0x20);
          if ((double)LVar17 <= dVar6) {
            DVar28 = DVar29;
            LVar30 = LVar31;
          }
          LVar34 = *(LARGE_INTEGER *)(lVar1 + 0x10);
          if ((double)LVar16 <= (double)*(LARGE_INTEGER *)(lVar1 + 0x10)) {
            LVar34 = LVar16;
          }
          LVar32 = *(LARGE_INTEGER *)(lVar1 + 8);
          if ((double)LVar5 <= (double)*(LARGE_INTEGER *)(lVar1 + 8)) {
            LVar32 = LVar5;
          }
          *(LARGE_INTEGER *)(lVar1 + 8) = LVar32;
          *(LARGE_INTEGER *)(lVar1 + 0x10) = LVar34;
          *(ulonglong *)(lVar1 + 0x18) = CONCAT44(LVar30,DVar28);
          dVar6 = *(double *)(lVar1 + 0x30);
          DVar29 = SUB84(dVar6,0);
          LVar31 = (LONG)((ulonglong)dVar6 >> 0x20);
          if (dVar6 <= (double)LVar33) {
            DVar29 = DVar37;
            LVar31 = LVar38;
          }
          LVar33 = *(LARGE_INTEGER *)(lVar1 + 0x28);
          if ((double)*(LARGE_INTEGER *)(lVar1 + 0x28) <= (double)LVar35) {
            LVar33 = LVar35;
          }
          LVar35 = *(LARGE_INTEGER *)(lVar1 + 0x20);
          if ((double)*(LARGE_INTEGER *)(lVar1 + 0x20) <= (double)LVar18) {
            LVar35 = LVar18;
          }
          *(LARGE_INTEGER *)(lVar1 + 0x20) = LVar35;
          *(LARGE_INTEGER *)(lVar1 + 0x28) = LVar33;
          *(ulonglong *)(lVar1 + 0x30) = CONCAT44(LVar31,DVar29);
          dVar6 = dVar9 * 0.5 + (double)LVar17;
          dVar12 = dVar11 * 0.5 + (double)LVar16;
          dVar13 = dVar13 * 0.5 + (double)LVar5;
          dVar36 = dVar6 - *(double *)(lVar1 + 0x58);
          dVar9 = dVar12 - *(double *)(lVar1 + 0x50);
          dVar11 = dVar13 - *(double *)(lVar1 + 0x48);
          dVar15 = dVar11 / dVar10 + *(double *)(lVar1 + 0x48);
          *(double *)(lVar1 + 0x48) = dVar15;
          dVar14 = dVar9 / dVar10 + *(double *)(lVar1 + 0x50);
          *(double *)(lVar1 + 0x50) = dVar14;
          dVar10 = dVar36 / dVar10 + *(double *)(lVar1 + 0x58);
          *(double *)(lVar1 + 0x58) = dVar10;
          *(double *)(lVar1 + 0x60) = (dVar13 - dVar15) * dVar11 + *(double *)(lVar1 + 0x60);
          *(double *)(lVar1 + 0x68) = (dVar12 - dVar14) * dVar9 + *(double *)(lVar1 + 0x68);
          *(double *)(lVar1 + 0x70) = (dVar6 - dVar10) * dVar36 + *(double *)(lVar1 + 0x70);
        }
        puVar22 = puVar22 + 0xd;
      } while (puVar22 != local_1a0);
    }
    *(int *)(param_1 + 0x13c) = (int)local_1a8;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    iVar19 = *(int *)(param_1 + 0x158);
    *(uint *)(param_1 + 0x158) = iVar19 + 1U;
    if (*(uint *)(param_1 + 0x15c) < iVar19 + 1U) {
      FUN_1446f48e2(local_1b0,iVar19);
    }
    *(int *)(*(longlong *)(param_1 + 0x150) + (longlong)iVar19 * 4) = local_1c4;
    FUN_146e09e6a(param_1);
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429d3328 FUN_1429d3328 body=1058 status=ok
// SIG undefined FUN_1429d3328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d3328(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar22 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong lVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar38 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar15 = (ulonglong)param_2 - 1;
    auVar17._8_4_ = (int)lVar15;
    auVar17._0_8_ = lVar15;
    auVar17._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    uVar16 = 0;
    auVar18 = pmovsxbq(in_XMM1,0xf0e);
    auVar19 = pmovsxbq(in_XMM2,0xd0c);
    auVar20 = pmovsxbq(in_XMM3,0xb0a);
    auVar21 = pmovsxbq(in_XMM4,0x908);
    auVar22 = pmovsxbq(in_XMM5,0x706);
    auVar23 = pmovsxbq(unaff_XMM6,0x504);
    auVar24 = pmovsxbq(unaff_XMM7,0x302);
    auVar25 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar26._8_4_ = (int)uVar16;
      auVar26._0_8_ = uVar16;
      auVar26._12_4_ = (int)(uVar16 >> 0x20);
      auVar28 = auVar17 ^ auVar14;
      auVar30 = (auVar26 | auVar25) ^ auVar14;
      lVar15 = auVar28._0_8_;
      auVar31._0_8_ = -(ulonglong)(lVar15 < auVar30._0_8_);
      lVar29 = auVar28._8_8_;
      auVar31._8_8_ = -(ulonglong)(lVar29 < auVar30._8_8_);
      auVar38 = pshuflw(unaff_XMM14,auVar31,0xe8);
      auVar30._8_4_ = 0xffffffff;
      auVar30._0_8_ = 0xffffffffffffffff;
      auVar30._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar38 ^ auVar30,auVar38 ^ auVar30);
      if ((auVar30._0_4_ & 1) != 0) {
        *(undefined1 *)(param_1 + 4 + uVar16 * 8) = 0;
      }
      auVar31 = packssdw(auVar31,auVar31);
      auVar38._8_4_ = 0xffffffff;
      auVar38._0_8_ = 0xffffffffffffffff;
      auVar38._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar38,auVar31 ^ auVar38);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[1] & 1) != 0) {
        *(undefined1 *)(param_1 + 0xc + uVar16 * 8) = 0;
      }
      auVar31 = (auVar26 | auVar24) ^ auVar14;
      auVar32._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar32._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar32);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar1,auVar30 ^ auVar1);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[2] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x14 + uVar16 * 8) = 0;
      }
      auVar31 = pshufhw(auVar32,auVar32,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar2,auVar31 ^ auVar2);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[3] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x1c + uVar16 * 8) = 0;
      }
      auVar31 = (auVar26 | auVar23) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar33,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar3,auVar30 ^ auVar3);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[4] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x24 + uVar16 * 8) = 0;
      }
      auVar31 = packssdw(auVar33,auVar33);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar4,auVar31 ^ auVar4);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[5] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x2c + uVar16 * 8) = 0;
      }
      auVar31 = (auVar26 | auVar22) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar34);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar5,auVar30 ^ auVar5);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[6] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x34 + uVar16 * 8) = 0;
      }
      auVar31 = pshufhw(auVar34,auVar34,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar6,auVar31 ^ auVar6);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[7] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x3c + uVar16 * 8) = 0;
      }
      auVar31 = (auVar26 | auVar21) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar35,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar7,auVar30 ^ auVar7);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[8] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x44 + uVar16 * 8) = 0;
      }
      auVar31 = packssdw(auVar35,auVar35);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar8,auVar31 ^ auVar8);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[9] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x4c + uVar16 * 8) = 0;
      }
      auVar31 = (auVar26 | auVar20) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = packssdw(auVar30,auVar36);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar9,auVar30 ^ auVar9);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[10] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x54 + uVar16 * 8) = 0;
      }
      auVar31 = pshufhw(auVar36,auVar36,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar10,auVar31 ^ auVar10);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xb] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x5c + uVar16 * 8) = 0;
      }
      auVar31 = (auVar26 | auVar19) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar15 < auVar31._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar29 < auVar31._8_8_);
      auVar30 = pshuflw(auVar30,auVar37,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar11,auVar30 ^ auVar11);
      unaff_XMM14 = packsswb(auVar30,auVar30);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        *(undefined1 *)(param_1 + 100 + uVar16 * 8) = 0;
      }
      auVar30 = packssdw(auVar37,auVar37);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar12,auVar30 ^ auVar12);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xd] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x6c + uVar16 * 8) = 0;
      }
      auVar30 = (auVar26 | auVar18) ^ auVar14;
      auVar27._0_8_ = -(ulonglong)(lVar15 < auVar30._0_8_);
      auVar27._8_8_ = -(ulonglong)(lVar29 < auVar30._8_8_);
      auVar30 = packssdw(auVar28,auVar27);
      auVar28._8_4_ = 0xffffffff;
      auVar28._0_8_ = 0xffffffffffffffff;
      auVar28._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar28,auVar30 ^ auVar28);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xe] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x74 + uVar16 * 8) = 0;
      }
      auVar30 = pshufhw(auVar27,auVar27,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar30 = packssdw(auVar30 ^ auVar13,auVar30 ^ auVar13);
      auVar30 = packsswb(auVar30,auVar30);
      if ((auVar30[0xf] & 1) != 0) {
        *(undefined1 *)(param_1 + 0x7c + uVar16 * 8) = 0;
      }
      uVar16 = uVar16 + 0x10;
    } while (((ulonglong)param_2 + 0xf & 0xfffffffffffffff0) != uVar16);
  }
  return;
}



// FUNCTION 1429d374a FUN_1429d374a body=192 status=ok
// SIG undefined FUN_1429d374a(void)

longlong FUN_1429d374a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x20) == *param_3) {
          if (lVar3 != 0) goto LAB_1429d37b6;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x18);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_146e0ec90(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x20 + *param_1;
LAB_1429d37b6:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1429d380c FUN_1429d380c body=1157 status=ok
// SIG undefined FUN_1429d380c(void)

void FUN_1429d380c(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_258 [40];
  longlong local_230;
  ulonglong local_228;
  longlong local_220;
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong *local_1b8;
  longlong *plStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar15 = *param_2;
  plVar3 = *(longlong **)(*(longlong *)*param_1 + (longlong)iVar15 * 8);
  lVar4 = *plVar3;
  lVar16 = (longlong)(int)plVar3[1];
  lVar14 = *(longlong *)(*(longlong *)(lVar4 + 0x60) + lVar16 * 8);
  if ((lVar14 != 0) && (*(char *)(lVar14 + 0x1a) == '\x01')) {
    local_230 = (longlong)iVar15 * 0x50 + *(longlong *)param_1[1];
    lVar14 = *(longlong *)(lVar4 + 0x48);
    lVar17 = lVar16 * 0x10;
    dStack_140 = (double)*(float *)(lVar14 + 0xc + lVar17);
    local_148 = (double)*(float *)(lVar14 + 8 + lVar17);
    dStack_150 = (double)*(float *)(lVar14 + 4 + lVar17);
    local_158 = (double)*(float *)(lVar14 + lVar17);
    puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x28) + lVar16 * 0x18);
    local_138 = *puVar1;
    uStack_134 = puVar1[1];
    uStack_130 = puVar1[2];
    uStack_12c = puVar1[3];
    local_128 = *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 0x10 + lVar16 * 0x18);
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    uStack_110 = 0x3ff0000000000000;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0;
    iVar15 = iVar15 + 1;
    iVar18 = (int)((longlong *)*param_1)[1];
    uVar13 = iVar18 - iVar15;
    if (uVar13 != 0 && iVar15 <= iVar18) {
      local_220 = (longlong)iVar15;
      local_228 = (ulonglong)uVar13;
      uVar19 = 0;
      do {
        plVar5 = *(longlong **)(uVar19 * 8 + *(longlong *)*param_1 + local_220 * 8);
        lVar4 = *plVar5;
        lVar14 = (longlong)(int)plVar5[1];
        if (*(longlong *)(*(longlong *)(lVar4 + 0x4a0) + lVar14 * 8) != 0) {
          lVar16 = *(longlong *)(lVar4 + 0x48);
          lVar17 = lVar14 * 0x10;
          dStack_200 = (double)*(float *)(lVar16 + 0xc + lVar17);
          local_208 = (double)*(float *)(lVar16 + 8 + lVar17);
          dVar22 = (double)*(float *)(lVar16 + 4 + lVar17);
          local_218._8_4_ = SUB84(dVar22,0);
          local_218._0_8_ = (double)*(float *)(lVar16 + lVar17);
          local_218._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
          puVar1 = (undefined4 *)(*(longlong *)(lVar4 + 0x28) + lVar14 * 0x18);
          local_1f8 = *puVar1;
          uStack_1f4 = puVar1[1];
          uStack_1f0 = puVar1[2];
          uStack_1ec = puVar1[3];
          local_1e8 = *(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 0x10 + lVar14 * 0x18);
          uStack_1e0 = 0;
          local_1d8 = 0x3ff0000000000000;
          uStack_1d0 = 0x3ff0000000000000;
          local_1c8 = 0x3ff0000000000000;
          uStack_1c0 = 0;
          FUN_1449437a2(&local_158,&local_1b8,local_218);
          dVar12 = local_188;
          dVar11 = dStack_190;
          dVar10 = local_198;
          dVar9 = dStack_1a0;
          dVar22 = local_1a8;
          plVar8 = plStack_1b0;
          plVar7 = local_1b8;
          iVar15 = *(int *)(*(longlong *)
                             (*(longlong *)(*plVar5 + 0x4a0) + (longlong)(int)plVar5[1] * 8) + 0x18)
          ;
          if (iVar15 != 0) {
            iVar18 = 0;
            do {
              lVar4 = *(longlong *)
                       (*(longlong *)(*(longlong *)(*plVar5 + 0x4a0) + (longlong)(int)plVar5[1] * 8)
                       + 0x28);
              lVar14 = (longlong)iVar18;
              pdVar2 = (double *)(lVar4 + lVar14 * 0x18);
              dVar23 = *pdVar2;
              dVar24 = pdVar2[1];
              dVar25 = *(double *)(lVar4 + 0x10 + lVar14 * 0x18);
              dVar20 = dVar24 * (double)plVar7 - (double)plVar8 * dVar23;
              dVar21 = dVar25 * (double)plVar8 - dVar22 * dVar24;
              dVar25 = dVar23 * dVar22 - dVar25 * (double)plVar7;
              dVar21 = dVar21 + dVar21;
              dVar25 = dVar25 + dVar25;
              dVar20 = dVar20 + dVar20;
              dVar23 = (dVar20 * (double)plVar8 - dVar25 * dVar22) + dVar9 * dVar21 + dVar23 +
                       dVar10;
              dVar24 = (dVar22 * dVar21 - (double)plVar7 * dVar20) + dVar9 * dVar25 + dVar24 +
                       dVar11;
              local_208 = dVar20 * dVar9 + *(double *)(lVar4 + 0x10 + lVar14 * 0x18) +
                          (dVar25 * (double)plVar7 - dVar21 * (double)plVar8) + dVar12;
              plVar6 = *(longlong **)(*(longlong *)(*plVar3 + 0x60) + (longlong)(int)plVar3[1] * 8);
              dVar25 = *(double *)param_1[2];
              local_208 = local_208 - dVar25 * local_208;
              local_218._8_8_ = dVar24 - dVar25 * dVar24;
              local_218._0_8_ = dVar23 - dVar25 * dVar23;
              dVar25 = (double)(**(code **)(*plVar6 + 0x70))(plVar6,local_218,&local_1b8);
              if (dVar25 < 0.0) {
                local_1b8 = plVar3;
                plStack_1b0 = plVar5;
                FUN_146e0fdec(local_230,local_218,&local_1b8);
                break;
              }
              iVar18 = iVar18 + 1;
            } while (iVar15 != iVar18);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 != local_228);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1429d3c92 FUN_1429d3c92 body=659 status=ok
// SIG undefined FUN_1429d3c92(void)

void FUN_1429d3c92(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1429d3d0d;
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
LAB_1429d3d0d:
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
      lVar13 = (longlong)iVar12 * 0x20;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1429d3f26 FUN_1429d3f26 body=321 status=ok
// SIG undefined FUN_1429d3f26(void)

undefined8 FUN_1429d3f26(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x555) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x1ffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1429d3f8b;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0x1ffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
    }
  }
LAB_1429d3f8b:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar6 / 0x18)) {
    uVar4 = uVar6 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar5;
}



// FUNCTION 1429d4068 FUN_1429d4068 body=363 status=ok
// SIG undefined FUN_1429d4068(void)

void FUN_1429d4068(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1429d40fe;
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
LAB_1429d40fe:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1429d41d3 FUN_1429d41d3 body=327 status=ok
// SIG undefined FUN_1429d41d3(void)

undefined8 FUN_1429d41d3(longlong *param_1,longlong *param_2,double param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_58 [32];
  double local_38;
  double adStack_30 [4];
  double local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0 && param_1 != (longlong *)0x0) {
    lVar3 = *(longlong *)(*param_1 + 0x140);
    lVar7 = (longlong)(int)param_1[1] * 0x30;
    pdVar1 = (double *)(lVar3 + 0x18 + lVar7);
    local_38 = *(double *)(lVar3 + lVar7) - param_3;
    adStack_30[0] = ((double *)(lVar3 + lVar7))[1] - param_3;
    adStack_30[1] = *(double *)(lVar3 + 0x10 + lVar7) - param_3;
    adStack_30[2] = *pdVar1 + param_3;
    adStack_30[3] = pdVar1[1] + param_3;
    local_10 = param_3 + *(double *)(lVar3 + 0x28 + lVar7);
    lVar3 = *(longlong *)(*param_2 + 0x140);
    lVar7 = (longlong)(int)param_2[1] * 0x30;
    pdVar1 = (double *)(lVar3 + 0x18 + lVar7);
    if (local_38 < *pdVar1 || local_38 == *pdVar1) {
      if (*(double *)(lVar3 + lVar7) <= adStack_30[2]) {
        lVar5 = lVar3 + lVar7 + 0x20;
        uVar4 = 0;
        do {
          uVar8 = uVar4;
          if (uVar8 == 2) break;
          pdVar1 = (double *)(lVar5 + uVar8 * 8);
          if (*pdVar1 <= adStack_30[uVar8] && adStack_30[uVar8] != *pdVar1) break;
          dVar2 = *(double *)(lVar3 + lVar7 + 8 + uVar8 * 8);
          uVar4 = uVar8 + 1;
        } while (dVar2 < adStack_30[uVar8 + 3] || dVar2 == adStack_30[uVar8 + 3]);
        uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1 < uVar8);
        goto LAB_1429d42c5;
      }
    }
  }
  uVar6 = 0;
LAB_1429d42c5:
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1429d431b FUN_1429d431b body=19 status=ok
// SIG undefined FUN_1429d431b(void)

void FUN_1429d431b(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 4);
    return;
  }
  return;
}



// FUNCTION 1429d4355 FUN_1429d4355 body=2448 status=ok
// SIG undefined FUN_1429d4355(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4355(void)

{
  FUN_141471170(&DAT_14c994210,L"p.Chaos.PBDLongRangeConstraints.MinParallelBatchSize",
                &DAT_14c75f1f4,
                L"The minimum number of long range tethers in a batch to process in parallel.",1);
  atexit(FUN_1429c0797);
  FUN_1415c789c(&DAT_14c994220,L"p.ClusterDistanceThreshold",&DAT_14c75f1f8,
                L"How close a cluster child must be to a contact to break off",0);
  atexit(FUN_1429c07dc);
  FUN_141471170(&DAT_14c994230,L"p.UseConnectivity",&DAT_14c75f1fc,
                L"Whether to use connectivity graph when breaking up clusters",0);
  atexit(FUN_1429c0821);
  FUN_14153156c(&DAT_14c994240,L"p.Chaos.CheckForInterclusterEdgesOnRelease",&DAT_14c75f200,
                L"Whether to check for intercluster edges when removing a child from its parent cluster so that we can add the particle back into a cluster union."
                ,0);
  atexit(FUN_1429c0866);
  FUN_14153156c(&DAT_14c994250,L"p.Chaos.OnlyUseInterclusterEdgesAttachedToMainParticles",
                &DAT_14c75f201,
                L"If true, an intercluster edge must be directly attached to a main particle for the particle to remain a part of the cluster union."
                ,0);
  atexit(FUN_1429c08ab);
  FUN_141471170(&DAT_14c994260,L"p.ComputeClusterCollisionStrains",&DAT_14c75f204,
                L"Whether to use collision constraints when processing clustering.",0);
  atexit(FUN_1429c08f0);
  FUN_141471170(&DAT_14c994278,L"p.DeactivateClusterChildren",&DAT_14c994270,
                L"If children should be decativated when broken and put into another cluster.",0);
  atexit(FUN_1429c0935);
  FUN_141471170(&DAT_14c994290,L"p.UseBoundingBoxForConnectionGraphFiltering",&DAT_14c994288,
                L"when on, use bounding box overlaps to filter connection during the connection graph generation [def: 0]"
                ,0);
  atexit(FUN_1429c097a);
  FUN_1415c789c(&DAT_14c9942a8,L"p.BoundingBoxMarginForConnectionGraphFiltering",&DAT_14c9942a0,
                L"when UseBoundingBoxForConnectionGraphFiltering is on, the margin to use for the oevrlap test [def: 0]"
                ,0);
  atexit(FUN_1429c09bf);
  FUN_141471170(&DAT_14c9942c0,L"p.GraphPropagationBasedCollisionImpulseProcessing",&DAT_14c9942b8,
                L"when processing collision impulse toc ompute strain, pick the closest child from the impact point and propagate using the connection graph [def: 0]"
                ,0);
  atexit(FUN_1429c0a04);
  FUN_1415c789c(&DAT_14c9942d0,L"p.GraphPropagationBasedCollisionFactor",&DAT_14c75f208,
                L"when p.GraphPropagationBasedCollisionImpulseProcessing is on, the percentage [0-1] of remaining damage that is distributed to the connected pieces"
                ,0);
  atexit(FUN_1429c0a49);
  FUN_1415c789c(&DAT_14c9942e0,L"p.RestoreBreakingMomentumPercent",&DAT_14c75f20c,
                L"When a rigid cluster is broken, objects that its in contact with will receive an impulse to restore this percent of their momentum prior to the break."
                ,0);
  atexit(FUN_1429c0a8e);
  FUN_141471170(&DAT_14c9942f0,L"p.Clustering.ParticleReleaseThrottlingMinCount",&DAT_14c75f210,
                L"Minimum number of active geometry collection to reach before clustering start to disable a percentage of the released particle per cluster"
                ,0);
  atexit(FUN_1429c0ad3);
  FUN_141471170(&DAT_14c994300,L"p.Clustering.ParticleReleaseThrottlingMaxCount",&DAT_14c75f214,
                L"Maximum number of active geometry collection to reach before all released clustering disable all released particle instantly"
                ,0);
  atexit(FUN_1429c0b18);
  FUN_141471170(&DAT_14c994318,L"p.UnionsHaveCollisionParticles",&DAT_14c994310,&DAT_149dfb77a,0);
  atexit(FUN_1429c4536);
  FUN_141471170(&DAT_14c994328,L"p.chaos.clustering.breakonlystrained",&DAT_14c75f218,
                L"If enabled we only process strained clusters for breaks, if disabled all clusters are traversed and checked"
                ,0);
  atexit(FUN_1429c4973);
  FUN_141471170(&DAT_14c994338,L"p.Chaos.Clustering.PerAdvanceBreaksAllowed",&DAT_14c75f21c,
                L"Number of breaks allowed to occur for each invokation of AdvanceClustering",0);
  atexit(FUN_1429c49b8);
  FUN_141471170(&DAT_14c994348,L"p.Chaos.Clustering.PerAdvanceBreaksRescheduleLimit",&DAT_14c75f220,
                L"Number of breaks allowed to be rescheduled for next frame if any ",0);
  atexit(FUN_1429c49fd);
  FUN_141471170(&DAT_14c994358,L"p.Chaos.Clustering.DumpClusterAndReleaseStats",&DAT_14c994368,
                L"Report the number of cluster processes and released particles per frame, on/off 1/0"
                ,0);
  atexit(FUN_1429c4a42);
  FUN_1415c789c(&DAT_14c994370,L"p.chaos.MinImpulseForStrainEval",&DAT_14c75f224,
                L"Minimum accumulated impulse before accumulating for strain eval ",0);
  atexit(FUN_1429c8823);
  FUN_14153156c(&DAT_14c994380,L"p.chaos.UseContactSpeedForStrainEval",&DAT_14c75f228,
                L"Whether to use contact speed to discard contacts when updating cluster strain (true: use speed, false: use impulse)"
                ,0);
  atexit(FUN_1429c8868);
  FUN_1415c789c(&DAT_14c994390,L"p.chaos.MinContactSpeedForStrainEval",&DAT_14c75f22c,
                L"Minimum speed at the contact before accumulating for strain eval ",0);
  atexit(FUN_1429c88ad);
  FUN_141471170(&DAT_14c9943a8,L"p.UseLevelsetCollision",&DAT_14c9943a0,
                L"Whether unioned objects use levelsets",0);
  atexit(FUN_1429c953d);
  FUN_141471170(&DAT_14c9943b8,L"p.MinLevelsetDimension",&DAT_14c75f230,
                L"The minimum number of cells on a single level set axis",0);
  atexit(FUN_1429c9582);
  FUN_141471170(&DAT_14c9943c8,L"p.MaxLevelsetDimension",&DAT_14c75f234,
                L"The maximum number of cells on a single level set axis",0);
  atexit(FUN_1429c95c7);
  FUN_1415c789c(&DAT_14c9943d8,L"p.MinLevelsetSize",&DAT_14c75f238,
                L"The minimum size on the smallest axis to use a level set",0);
  atexit(FUN_1429c960c);
  FUN_141471170(&DAT_14c9943e8,L"p.LevelsetGhostCells",&DAT_14c75f23c,
                L"Increase the level set grid by this many ghost cells",0);
  atexit(FUN_1429c9651);
  FUN_141471170(&DAT_14c9943f8,L"p.MinCleanedPointsBeforeRemovingInternals",&DAT_14c75f240,
                L"If we only have this many clean points, don\'t bother removing internal points as the object is likely very small"
                ,0);
  atexit(FUN_1429c9696);
  FUN_1415c789c(&DAT_14c994408,L"p.ClusterSnapDistance",&DAT_14c75f244,&DAT_149dfb77a,0);
  atexit(FUN_1429c96db);
  FUN_141471170(&DAT_14c994418,L"p.ChaosRigidsEvolutionApplyAllowEarlyOut",&DAT_14c75f248,
                L"Allow Chaos Rigids Evolution apply iterations to early out when resolved.[def:1]",
                0);
  atexit(FUN_1429c9ae4);
  FUN_141471170(&DAT_14c994428,L"p.ChaosRigidsEvolutionApplyPushoutAllowEarlyOut",&DAT_14c75f24c,
                L"Allow Chaos Rigids Evolution apply-pushout iterations to early out when resolved.[def:1]"
                ,0);
  atexit(FUN_1429c9b29);
  FUN_141471170(&DAT_14c994438,L"p.ChaosNumPushOutIterationsOverride",&DAT_14c75f250,
                L"Override for num push out iterations if >= 0 [def:-1]",0);
  atexit(FUN_1429c9b6e);
  FUN_141471170(&DAT_14c994448,L"p.ChaosNumContactIterationsOverride",&DAT_14c75f254,
                L"Override for num contact iterations if >= 0. [def:-1]",0);
  atexit(FUN_1429c9bb3);
  FUN_141471170(&DAT_14c994458,L"p.FixBadAccelerationStructureRemoval",&DAT_14c75f258,&DAT_149dfb77a
                ,0);
  atexit(FUN_1429c9bf8);
  FUN_141471170(&DAT_14c994468,L"p.Chaos.AccelerationStructureIsolateQueryOnlyObjects",
                &DAT_14c994578,
                L"Set to 1: QueryOnly Objects will not be moved to acceleration structures on the Physics Thread"
                ,0);
  atexit(FUN_1429c9c3d);
  FUN_141471170(&DAT_14c994478,L"p.Chaos.AccelerationStructureSplitStaticDynamic",&DAT_14c75f288,
                L"Set to 1: Sort Dynamic and Static bodies into seperate acceleration structures, any other value will disable the feature"
                ,0);
  atexit(FUN_1429c9c82);
  FUN_141471170(&DAT_14c994488,L"p.Chaos.AccelerationStructureUseDynamicTree",&DAT_14c75f25c,
                L"Use a dynamic BVH tree structure for dynamic objects",0);
  atexit(FUN_1429c9cc7);
  FUN_141471170(&DAT_14c994498,L"p.Chaos.AccelerationStructureUseDirtyTreeInsteadOfGrid",
                &DAT_14c75f260,
                L"Use a dynamic tree structure for dirty elements instead of a 2D grid",0);
  atexit(FUN_1429c9d0c);
  FUN_141471170(&DAT_14c9944a8,L"p.Chaos.AccelerationStructureCacheOverlappingLeaves",&DAT_14c75f264
                ,
                L"Set to 1: Cache the overlapping leaves for faster overlap query, any other value will disable the feature"
                ,0);
  atexit(FUN_1429c9d51);
  FUN_141471170(&DAT_14c9944b8,L"p.Chaos.AccelerationStructureTimeSlicingMaxQueueSizeBeforeForce",
                &DAT_14c75f268,
                L"If the update queue reaches this limit, time slicing will be disabled, and the acceleration structure will be built at once"
                ,0);
  atexit(FUN_1429c9d96);
  FUN_141471170(&DAT_14c9944c8,L"p.Chaos.AccelerationStructureTimeSlicingMaxBytesCopy",
                &DAT_14c75f26c,
                L"The Maximum number of bytes to copy to the external acceleration structure during Copy Time Slicing"
                ,0);
  atexit(FUN_1429c9ddb);
  _DAT_14c994558 = 0x2300000001;
  _DAT_14c994560 = 0xc800000005;
  DAT_14c994568 = 500;
  DAT_14c99456c = 200;
  _DAT_14c994570 = 0x47c35000;
  DAT_14c994574 = 4000;
  FUN_141471170(&DAT_14c9944d8,L"p.BroadphaseType",&DAT_14c994558,&DAT_149dfb77a,0);
  atexit(FUN_1429c9e20);
  FUN_141471170(&DAT_14c9944e8,L"p.BoundingVolumeNumCells",&DAT_14c99455c,&DAT_149dfb77a,0);
  atexit(FUN_1429c9e65);
  FUN_141471170(&DAT_14c9944f8,L"p.MaxChildrenInLeaf",&DAT_14c994560,&DAT_149dfb77a,0);
  atexit(FUN_1429c9eaa);
  FUN_141471170(&DAT_14c994508,L"p.MaxTreeDepth",&DAT_14c994564,&DAT_149dfb77a,0);
  atexit(FUN_1429c9eef);
  FUN_141471170(&DAT_14c994518,L"p.AABBMaxChildrenInLeaf",&DAT_14c994568,&DAT_149dfb77a,0);
  atexit(FUN_1429c9f34);
  FUN_141471170(&DAT_14c994528,L"p.AABBMaxTreeDepth",&DAT_14c99456c,&DAT_149dfb77a,0);
  atexit(FUN_1429c9f79);
  FUN_1415c789c(&DAT_14c994538,L"p.MaxPayloadSize",&DAT_14c994570,&DAT_149dfb77a,0);
  atexit(FUN_1429c9fbe);
  FUN_141471170(&DAT_14c994548,L"p.IterationsPerTimeSlice",&DAT_14c994574,&DAT_149dfb77a,0);
  atexit(FUN_1429ca003);
  return;
}



// FUNCTION 1429d4ce8 FUN_1429d4ce8 body=69 status=ok
// SIG undefined FUN_1429d4ce8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4ce8(void)

{
  _DAT_14c994580 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4d2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994588,1);
  return;
}



// FUNCTION 1429d4d2d FUN_1429d4d2d body=69 status=ok
// SIG undefined FUN_1429d4d2d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4d2d(void)

{
  _DAT_14c994590 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4d6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994598,1);
  return;
}



// FUNCTION 1429d4d72 FUN_1429d4d72 body=69 status=ok
// SIG undefined FUN_1429d4d72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4d72(void)

{
  _DAT_14c9945a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4db4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9945a8,1);
  return;
}



// FUNCTION 1429d4db7 FUN_1429d4db7 body=69 status=ok
// SIG undefined FUN_1429d4db7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4db7(void)

{
  _DAT_14c9945b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4df9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9945c0,1);
  return;
}



// FUNCTION 1429d4dfc FUN_1429d4dfc body=69 status=ok
// SIG undefined FUN_1429d4dfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4dfc(void)

{
  _DAT_14c9945c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4e3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9945d0,1);
  return;
}



// FUNCTION 1429d4e41 FUN_1429d4e41 body=69 status=ok
// SIG undefined FUN_1429d4e41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4e41(void)

{
  _DAT_14c9945e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4e83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9945e8,1);
  return;
}



// FUNCTION 1429d4e86 FUN_1429d4e86 body=69 status=ok
// SIG undefined FUN_1429d4e86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4e86(void)

{
  _DAT_14c9945f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9945f8,1);
  return;
}



// FUNCTION 1429d4ecb FUN_1429d4ecb body=69 status=ok
// SIG undefined FUN_1429d4ecb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4ecb(void)

{
  _DAT_14c994600 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4f0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994608,1);
  return;
}



// FUNCTION 1429d4f10 FUN_1429d4f10 body=69 status=ok
// SIG undefined FUN_1429d4f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4f10(void)

{
  _DAT_14c994618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4f52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994620,1);
  return;
}



// FUNCTION 1429d4f55 FUN_1429d4f55 body=69 status=ok
// SIG undefined FUN_1429d4f55(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4f55(void)

{
  _DAT_14c994630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4f97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994638,1);
  return;
}



// FUNCTION 1429d4f9a FUN_1429d4f9a body=69 status=ok
// SIG undefined FUN_1429d4f9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4f9a(void)

{
  _DAT_14c994648 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d4fdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994650,1);
  return;
}



// FUNCTION 1429d4fdf FUN_1429d4fdf body=69 status=ok
// SIG undefined FUN_1429d4fdf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d4fdf(void)

{
  _DAT_14c994660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d5021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994668,1);
  return;
}



// FUNCTION 1429d5024 FUN_1429d5024 body=69 status=ok
// SIG undefined FUN_1429d5024(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d5024(void)

{
  _DAT_14c994670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d5066. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994678,1);
  return;
}



// FUNCTION 1429d5069 FUN_1429d5069 body=69 status=ok
// SIG undefined FUN_1429d5069(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d5069(void)

{
  _DAT_14c994680 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d50ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994688,1);
  return;
}



// FUNCTION 1429d50ae FUN_1429d50ae body=69 status=ok
// SIG undefined FUN_1429d50ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d50ae(void)

{
  _DAT_14c994690 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d50f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994698,1);
  return;
}



// FUNCTION 1429d50f3 FUN_1429d50f3 body=69 status=ok
// SIG undefined FUN_1429d50f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d50f3(void)

{
  _DAT_14c9946a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d5135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9946a8,1);
  return;
}



// FUNCTION 1429d5138 FUN_1429d5138 body=69 status=ok
// SIG undefined FUN_1429d5138(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d5138(void)

{
  _DAT_14c9946b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d517a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9946c0,1);
  return;
}



// FUNCTION 1429d517d FUN_1429d517d body=69 status=ok
// SIG undefined FUN_1429d517d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d517d(void)

{
  _DAT_14c9946c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d51bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9946d0,1);
  return;
}



// FUNCTION 1429d51c2 FUN_1429d51c2 body=69 status=ok
// SIG undefined FUN_1429d51c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d51c2(void)

{
  _DAT_14c9946d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d5204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9946e0,1);
  return;
}



// FUNCTION 1429d5207 FUN_1429d5207 body=69 status=ok
// SIG undefined FUN_1429d5207(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d5207(void)

{
  _DAT_14c9946e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d5249. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9946f0,1);
  return;
}



// FUNCTION 1429d524c FUN_1429d524c body=69 status=ok
// SIG undefined FUN_1429d524c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d524c(void)

{
  _DAT_14c9946f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d528e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994700,1);
  return;
}



// FUNCTION 1429d5291 FUN_1429d5291 body=69 status=ok
// SIG undefined FUN_1429d5291(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d5291(void)

{
  _DAT_14c994710 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d52d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994718,1);
  return;
}



// FUNCTION 1429d52d6 FUN_1429d52d6 body=69 status=ok
// SIG undefined FUN_1429d52d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d52d6(void)

{
  _DAT_14c994728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d5318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994730,1);
  return;
}



// FUNCTION 1429d531b FUN_1429d531b body=69 status=ok
// SIG undefined FUN_1429d531b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1429d531b(void)

{
  _DAT_14c994738 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001429d535d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c994740,1);
  return;
}


