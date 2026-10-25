// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14390d40e FUN_14390d40e body=126 status=ok
// SIG undefined FUN_14390d40e(void)

void FUN_14390d40e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80960;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390d47d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390d494 FUN_14390d494 body=19 status=ok
// SIG undefined FUN_14390d494(void)

undefined1 FUN_14390d494(undefined8 param_1,undefined8 param_2)

{
  FUN_14807ae16(param_2);
  return 1;
}



// FUNCTION 14390d4a8 FUN_14390d4a8 body=29 status=ok
// SIG undefined FUN_14390d4a8(void)

undefined8 FUN_14390d4a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390d4da FUN_14390d4da body=93 status=ok
// SIG undefined FUN_14390d4da(void)

void FUN_14390d4da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad809d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390d538 FUN_14390d538 body=93 status=ok
// SIG undefined FUN_14390d538(void)

void FUN_14390d538(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad809d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390d596 FUN_14390d596 body=126 status=ok
// SIG undefined FUN_14390d596(void)

void FUN_14390d596(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad809d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390d605. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390d622 FUN_14390d622 body=25 status=ok
// SIG undefined FUN_14390d622(void)

undefined8 FUN_14390d622(longlong param_1,undefined8 param_2)

{
  FUN_143907d48(param_2,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390d63c FUN_14390d63c body=29 status=ok
// SIG undefined FUN_14390d63c(void)

undefined8 FUN_14390d63c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390d66e FUN_14390d66e body=93 status=ok
// SIG undefined FUN_14390d66e(void)

void FUN_14390d66e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390d6cc FUN_14390d6cc body=93 status=ok
// SIG undefined FUN_14390d6cc(void)

void FUN_14390d6cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad80a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14390d72a FUN_14390d72a body=126 status=ok
// SIG undefined FUN_14390d72a(void)

void FUN_14390d72a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad80a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014390d799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14390d7b6 FUN_14390d7b6 body=25 status=ok
// SIG undefined FUN_14390d7b6(void)

undefined8 FUN_14390d7b6(longlong param_1,undefined8 param_2)

{
  FUN_143908296(param_2,*(undefined4 *)(param_1 + 0x20));
  return 1;
}



// FUNCTION 14390d7e8 FUN_14390d7e8 body=31 status=ok
// SIG undefined FUN_14390d7e8(void)

undefined8 FUN_14390d7e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390d834 FUN_14390d834 body=12 status=ok
// SIG undefined FUN_14390d834(void)

void FUN_14390d834(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014390d83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14390d840 FUN_14390d840 body=29 status=ok
// SIG undefined FUN_14390d840(void)

undefined8 FUN_14390d840(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390d85e FUN_14390d85e body=282 status=ok
// SIG undefined FUN_14390d85e(void)

undefined8 * FUN_14390d85e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14390a065);
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



// FUNCTION 14390d978 FUN_14390d978 body=117 status=ok
// SIG undefined FUN_14390d978(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14390d978(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480914a8(_DAT_000000a8 + 0x60,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480914a8(param_1[0x15] + 0x60,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390d9e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14390d9ee FUN_14390d9ee body=4144 status=ok
// SIG undefined FUN_14390d9ee(void)

void FUN_14390d9ee(int *param_1,undefined8 param_2,undefined1 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  byte bVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong lVar26;
  undefined1 uVar27;
  int iVar28;
  undefined1 *puVar29;
  ulonglong uVar30;
  void *pvVar31;
  ulonglong uVar32;
  longlong lVar33;
  undefined4 *puVar34;
  size_t sVar35;
  bool bVar36;
  undefined1 auStack_728 [32];
  undefined8 *local_708;
  longlong local_700;
  undefined8 local_6f8;
  undefined4 local_6f0;
  int local_6ec;
  undefined4 local_6e8;
  undefined8 local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined8 local_6b8;
  ulonglong uStack_6b0;
  longlong local_6a8;
  ulonglong local_648;
  ulonglong local_640;
  longlong local_130;
  uint local_128;
  uint local_124;
  longlong local_120;
  uint local_118;
  uint local_114;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_728;
  FUN_14808621c();
  *(undefined1 *)(param_1 + 0x42) = *param_3;
  *param_1 = *(int *)(param_3 + 0xa8);
  param_1[1] = *(int *)(param_3 + 4);
  param_1[2] = *(int *)(param_3 + 8);
  param_1[3] = *(int *)(param_3 + 0xc);
  iVar28 = *(int *)(param_3 + 0x14);
  iVar7 = *(int *)(param_3 + 0x18);
  iVar8 = *(int *)(param_3 + 0x1c);
  iVar9 = *(int *)(param_3 + 0x20);
  iVar10 = *(int *)(param_3 + 0x24);
  iVar11 = *(int *)(param_3 + 0x28);
  iVar12 = *(int *)(param_3 + 0x2c);
  iVar13 = *(int *)(param_3 + 0x30);
  iVar14 = *(int *)(param_3 + 0x34);
  iVar15 = *(int *)(param_3 + 0x38);
  iVar16 = *(int *)(param_3 + 0x3c);
  param_1[4] = *(int *)(param_3 + 0x10);
  param_1[5] = iVar28;
  param_1[6] = iVar7;
  param_1[7] = iVar8;
  param_1[8] = iVar9;
  param_1[9] = iVar10;
  param_1[10] = iVar11;
  param_1[0xb] = iVar12;
  param_1[0xc] = iVar13;
  param_1[0xd] = iVar14;
  param_1[0xe] = iVar15;
  param_1[0xf] = iVar16;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_3 + 0x40);
  param_1[0x13] = *(int *)(param_3 + 0x4c);
  param_1[0x14] = *(int *)(param_3 + 0x50);
  param_1[0x15] = *(int *)(param_3 + 0x54);
  param_1[0x16] = *(int *)(param_3 + 0x58);
  param_1[0x17] = *(int *)(param_3 + 0x5c);
  local_6f8 = param_2;
  FUN_1407779ba(&local_6b8,param_2,iVar13,0);
  local_6ec = param_1[1] * 3 + (uint)(param_1[1] * 3 == 0);
  local_6e0 = 0;
  local_6f0 = 4;
  local_6e8 = 0x8109;
  local_6c8 = 0;
  uStack_6d0._0_4_ = 0x4109;
  local_6d8 = (longlong *)CONCAT44(*param_1 * 2 + (uint)(*param_1 * 2 == 0),DAT_14c873968);
  local_700 = FUN_1447f2a09(&local_6b8,param_1 + 0x18,&local_6d8,L"NiagaraDynamicMeshSectionBuffer")
  ;
  local_6c8 = 0;
  uStack_6d0._0_4_ = 0x4109;
  local_6d8 = (longlong *)CONCAT44(*param_1 * 2 + (uint)(*param_1 * 2 == 0),DAT_14c873968);
  FUN_1447f2a09(&local_6b8,param_1 + 0x1a,&local_6d8,L"NiagaraDynamicMeshSectionBuffer");
  lVar19 = FUN_1447f2a09(&local_6b8,param_1 + 0x1c,&local_6f0,L"NiagaraDynamicMeshIndexBuffer");
  local_6c8 = 0;
  uStack_6d0 = CONCAT44(uStack_6d0._4_4_,0x4109);
  local_6d8 = (longlong *)
              CONCAT44((*(uint *)(param_3 + 0x48) >> 2) +
                       (uint)(*(uint *)(param_3 + 0x48) >> 2 == 0),DAT_14c873968);
  lVar20 = FUN_1447f2a09(&local_6b8,param_1 + 0x1e,&local_6d8,L"NiagaraDynamicMeshVertexBuffer");
  FUN_148091e5a(param_1 + 0x44);
  if (*param_1 != 0) {
    *(undefined1 *)((longlong)param_1 + 0x10a) = 1;
    uVar30 = (ulonglong)(uint)(*(int *)(param_3 + 0xa8) * 8);
    uVar32 = local_648 + 0xf & 0xfffffffffffffff0;
    uVar22 = uVar32 + uVar30;
    if (local_640 < uVar22) {
      FUN_140023dd8(&local_648);
      uVar32 = local_648 + 0xf & 0xfffffffffffffff0;
      uVar22 = uVar32 + uVar30;
    }
    if (0 < param_1[0x46]) {
      lVar21 = 0xc;
      lVar26 = 8;
      lVar33 = 0;
      do {
        lVar4 = *(longlong *)(param_3 + 0xa0);
        lVar5 = *(longlong *)(param_1 + 0x44);
        puVar2 = (undefined4 *)(lVar4 + lVar26);
        *(undefined4 *)(lVar5 + -0x18 + lVar21 * 2) = puVar2[1];
        *(int *)(lVar5 + -0x14 + lVar21 * 2) = puVar2[-2] * 3;
        puVar34 = (undefined4 *)(lVar4 + lVar26);
        if ((char)param_1[0x42] != '\0') {
          puVar34 = puVar2 + -1;
        }
        *(undefined4 *)(lVar5 + -0x10 + lVar21 * 2) = *puVar34;
        *(undefined4 *)(lVar5 + -0xc + lVar21 * 2) = 0;
        *(int *)(lVar5 + -8 + lVar21 * 2) = param_1[2];
        *(undefined2 *)(lVar5 + -4 + lVar21 * 2) = 0;
        *(undefined1 *)(lVar5 + -2 + lVar21 * 2) = 0;
        *(undefined1 *)(lVar5 + lVar21 * 2) = 0;
        *(undefined4 *)(uVar32 + lVar33 * 8) = puVar2[-1];
        *(undefined4 *)(uVar32 + 4 + lVar33 * 8) = *puVar2;
        lVar33 = lVar33 + 1;
        lVar21 = lVar21 + 0xe;
        lVar26 = lVar26 + 0x10;
      } while (lVar33 < param_1[0x46]);
    }
    lVar21 = (longlong)(int)local_128;
    local_128 = local_128 + 1;
    local_648 = uVar22;
    if (local_124 < local_128) {
      FUN_144775ac8(&local_130);
    }
    lVar21 = lVar21 * 0x120;
    *(undefined2 *)(local_130 + lVar21) = 0;
    *(longlong *)(local_130 + 8 + lVar21) = local_700;
    *(ulonglong *)(local_130 + 0x10 + lVar21) = uVar32;
    *(ulonglong *)(local_130 + 0x18 + lVar21) = uVar30;
    *(undefined8 *)(local_130 + 0x20 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x30 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x60 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x70 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xa0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xb0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xe0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xf0 + lVar21) = 0;
    *(byte *)(local_700 + 0x24) = *(byte *)(local_700 + 0x24) | 0x80;
  }
  sVar35 = (size_t)*(int *)(param_3 + 0x70);
  if (0 < (longlong)sVar35) {
    puVar6 = *(undefined1 **)(param_3 + 0x68);
    puVar29 = param_3 + ((longlong)puVar6 >> 0x18) + 0x68;
    if (((ulonglong)puVar6 & 1) == 0) {
      puVar29 = puVar6;
    }
    pvVar31 = (void *)(local_648 + 0xf & 0xfffffffffffffff0);
    uVar22 = (longlong)pvVar31 + sVar35;
    if (local_640 < uVar22) {
      FUN_140023dd8(&local_648,*(int *)(param_3 + 0x70) + 0x10);
      pvVar31 = (void *)(local_648 + 0xf & 0xfffffffffffffff0);
      uVar22 = (longlong)pvVar31 + sVar35;
    }
    local_648 = uVar22;
    memcpy(pvVar31,puVar29,sVar35);
    lVar21 = (longlong)(int)local_128;
    local_128 = local_128 + 1;
    if (local_124 < local_128) {
      FUN_144775ac8(&local_130);
    }
    lVar21 = lVar21 * 0x120;
    *(undefined2 *)(local_130 + lVar21) = 0;
    *(longlong *)(local_130 + 8 + lVar21) = lVar19;
    *(void **)(local_130 + 0x10 + lVar21) = pvVar31;
    *(size_t *)(local_130 + 0x18 + lVar21) = sVar35;
    *(undefined8 *)(local_130 + 0x20 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x30 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x60 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x70 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xa0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xb0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xe0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xf0 + lVar21) = 0;
    *(byte *)(lVar19 + 0x24) = *(byte *)(lVar19 + 0x24) | 0x80;
  }
  sVar35 = (size_t)*(int *)(param_3 + 0x90);
  if (0 < (longlong)sVar35) {
    puVar6 = *(undefined1 **)(param_3 + 0x88);
    puVar29 = param_3 + ((longlong)puVar6 >> 0x18) + 0x88;
    if (((ulonglong)puVar6 & 1) == 0) {
      puVar29 = puVar6;
    }
    pvVar31 = (void *)(local_648 + 0xf & 0xfffffffffffffff0);
    uVar22 = (longlong)pvVar31 + sVar35;
    if (local_640 < uVar22) {
      FUN_140023dd8(&local_648,*(int *)(param_3 + 0x90) + 0x10);
      pvVar31 = (void *)(local_648 + 0xf & 0xfffffffffffffff0);
      uVar22 = (longlong)pvVar31 + sVar35;
    }
    local_648 = uVar22;
    memcpy(pvVar31,puVar29,sVar35);
    lVar21 = (longlong)(int)local_128;
    local_128 = local_128 + 1;
    if (local_124 < local_128) {
      FUN_144775ac8(&local_130);
    }
    lVar21 = lVar21 * 0x120;
    *(undefined2 *)(local_130 + lVar21) = 0;
    *(longlong *)(local_130 + 8 + lVar21) = lVar20;
    *(void **)(local_130 + 0x10 + lVar21) = pvVar31;
    *(size_t *)(local_130 + 0x18 + lVar21) = sVar35;
    *(undefined8 *)(local_130 + 0x20 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x30 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x60 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0x70 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xa0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xb0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xe0 + lVar21) = 0;
    *(undefined8 *)(local_130 + 0xf0 + lVar21) = 0;
    *(byte *)(lVar20 + 0x24) = *(byte *)(lVar20 + 0x24) | 0x80;
  }
  local_6d8 = (longlong *)0x0;
  uStack_6d0 = 0;
  if (lVar19 == 0) {
    iVar28 = 0;
  }
  else {
    uStack_6d0 = 1;
    FUN_144904f42(&local_6d8,0);
    *local_6d8 = lVar19;
    *(undefined4 *)(local_6d8 + 1) = 0x78;
    *(undefined1 *)((longlong)local_6d8 + 0xc) = 1;
    iVar28 = (int)uStack_6d0;
  }
  if (lVar20 != 0) {
    uStack_6d0 = CONCAT44(uStack_6d0._4_4_,iVar28 + 1U);
    if (uStack_6d0._4_4_ < iVar28 + 1U) {
      FUN_144904f42(&local_6d8,iVar28);
    }
    lVar19 = (longlong)iVar28;
    local_6d8[lVar19 * 2] = lVar20;
    *(undefined4 *)(local_6d8 + lVar19 * 2 + 1) = 0x78;
    *(undefined1 *)((longlong)local_6d8 + lVar19 * 0x10 + 0xc) = 1;
    iVar28 = (int)uStack_6d0;
  }
  if (iVar28 != 0) {
    plVar24 = local_6d8 + (longlong)iVar28 * 2;
    plVar25 = local_6d8;
    do {
      bVar18 = 1;
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
         (bVar18 = *(byte *)((longlong)plVar25 + 0xc) & 3, DAT_14ca84e99 != '\0')) {
        bVar18 = 1;
      }
      lVar19 = *plVar25;
      if ((*(byte *)(lVar19 + 0x20) & 0xc) == 0) {
        lVar20 = plVar25[1];
        if ((*(byte *)(lVar19 + 0x20) & 0x10) != 0) {
          FUN_140069376(&local_6b8);
        }
        uVar3 = local_118;
        lVar21 = (longlong)(int)local_118;
        local_118 = local_118 + 1;
        if (local_114 < local_118) {
          FUN_1400f155a(&local_120,uVar3);
        }
        *(longlong *)(local_120 + lVar21 * 8) = lVar19;
        *(int *)(lVar19 + 0x1c) = (int)lVar20;
        *(byte *)(lVar19 + 0x20) = bVar18 | *(byte *)(lVar19 + 0x20) & 0xe8 | 0x14;
        *(int *)(lVar19 + 0x58) = (int)lVar20;
      }
      plVar25 = plVar25 + 2;
    } while (plVar25 != plVar24);
  }
  uVar22 = uStack_6d0 >> 0x20;
  uStack_6d0 = uStack_6d0 & 0xffffffff00000000;
  if ((int)uVar22 != 0) {
    FUN_1400f146c(&local_6d8,0);
  }
  FUN_140779360(&local_6b8);
  FUN_140778010(&local_6b8);
  uVar17 = local_6f8;
  if (param_1[1] != 0) {
    *(bool *)((longlong)param_1 + 0x109) = *(int *)(param_3 + 0x70) == 0;
    FUN_14006bf18(param_1 + 0x20,local_6f8);
    lVar19 = *(longlong *)(param_1 + 0x24);
    lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1c) + 0x28);
    if (lVar19 != lVar20) {
      *(longlong *)(param_1 + 0x24) = lVar20;
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
        UNLOCK();
      }
      if (lVar19 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar19 + 8);
        uVar3 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(lVar19 + 8);
          LOCK();
          uVar3 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar18 = *(byte *)(lVar19 + 0xd);
            plVar23 = (longlong *)FUN_14001cc68(0x10,8);
            plVar23[1] = lVar19;
            plVar25 = DAT_14ca843c0;
            plVar24 = DAT_14ca843c8;
            if ((bVar18 & 2) == 0) {
              do {
                *plVar23 = (longlong)plVar25;
                LOCK();
                bVar36 = plVar25 != DAT_14ca843c0;
                plVar24 = plVar23;
                if (bVar36) {
                  plVar25 = DAT_14ca843c0;
                  plVar24 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar24;
                UNLOCK();
              } while (bVar36);
            }
            else {
              do {
                *plVar23 = (longlong)plVar24;
                LOCK();
                bVar36 = plVar24 != DAT_14ca843c8;
                plVar25 = plVar23;
                if (bVar36) {
                  plVar24 = DAT_14ca843c8;
                  plVar25 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar25;
                UNLOCK();
              } while (bVar36);
            }
          }
        }
      }
      lVar19 = *(longlong *)(param_1 + 0x24);
    }
    if ((lVar19 == 0) || ((*(byte *)(lVar19 + 0x28) & 0x10) == 0)) {
      local_6b8._0_3_ = 0x11c00;
    }
    else {
      local_6b8._0_3_ = 0x40000;
    }
    local_6b8 = (ulonglong)(uint3)local_6b8;
    uStack_6b0 = 0;
    local_708 = &local_6b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_6d8,uVar17,lVar19);
    plVar25 = (longlong *)(param_1 + 0x26);
    if (plVar25 != &local_6d8) {
      lVar19 = *plVar25;
      *plVar25 = (longlong)local_6d8;
      local_6d8 = (longlong *)0x0;
      if (lVar19 == 0) goto LAB_14390e27d;
      LOCK();
      puVar1 = (uint *)(lVar19 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar19 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)(lVar19 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar19;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
    plVar25 = local_6d8;
    if (local_6d8 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_6d8 + 1);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_6d8 + 1);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)((longlong)local_6d8 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = (longlong)plVar25;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
  }
LAB_14390e27d:
  if (param_1[2] == 0) goto LAB_14390e80d;
  FUN_14006bf18(param_1 + 0x28,uVar17);
  lVar19 = *(longlong *)(param_1 + 0x2c);
  lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x1e) + 0x28);
  if (lVar19 != lVar20) {
    *(longlong *)(param_1 + 0x2c) = lVar20;
    if (lVar20 != 0) {
      LOCK();
      *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
      UNLOCK();
    }
    if (lVar19 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar19 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar19 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)(lVar19 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar19;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
  }
  local_6a8 = *(longlong *)(param_1 + 0x2c);
  local_6b8._0_2_ = 0;
  if ((*(byte *)(local_6a8 + 0x28) & 0x10) == 0) {
    local_6b8._0_2_ = 0xd00;
    uVar27 = 1;
  }
  else {
    uVar27 = 4;
  }
  local_6b8._0_3_ = CONCAT12(uVar27,(undefined2)local_6b8);
  local_6b8._0_4_ = (uint)(uint3)local_6b8;
  local_6b8 = CONCAT44(param_1[0x13],(uint)local_6b8);
  uStack_6b0 = (ulonglong)(uint)(param_1[2] * 3);
  local_708 = &local_6b8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_6d8,uVar17);
  plVar25 = (longlong *)(param_1 + 0x2e);
  if (plVar25 == &local_6d8) {
LAB_14390e3ed:
    plVar25 = local_6d8;
    if (local_6d8 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_6d8 + 1);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_6d8 + 1);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)((longlong)local_6d8 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = (longlong)plVar25;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
  }
  else {
    lVar19 = *plVar25;
    *plVar25 = (longlong)local_6d8;
    local_6d8 = (longlong *)0x0;
    if (lVar19 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar19 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar19 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)(lVar19 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar19;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
      goto LAB_14390e3ed;
    }
  }
  if (param_1[0x14] != -1) {
    local_6a8 = *(longlong *)(param_1 + 0x2c);
    local_6b8._0_2_ = 0;
    if ((*(byte *)(local_6a8 + 0x28) & 0x10) == 0) {
      local_6b8._0_2_ = 0x3d00;
      uVar27 = 1;
    }
    else {
      uVar27 = 4;
    }
    local_6b8._0_3_ = CONCAT12(uVar27,(undefined2)local_6b8);
    local_6b8._0_4_ = (uint)(uint3)local_6b8;
    local_6b8 = CONCAT44(param_1[0x14],(uint)local_6b8);
    uStack_6b0 = (ulonglong)(uint)(param_1[2] * 2);
    local_708 = &local_6b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_6d8,uVar17);
    plVar25 = (longlong *)(param_1 + 0x30);
    if (plVar25 != &local_6d8) {
      lVar19 = *plVar25;
      *plVar25 = (longlong)local_6d8;
      local_6d8 = (longlong *)0x0;
      if (lVar19 == 0) goto LAB_14390e58d;
      LOCK();
      puVar1 = (uint *)(lVar19 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar19 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)(lVar19 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar19;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
    plVar25 = local_6d8;
    if (local_6d8 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_6d8 + 1);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_6d8 + 1);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)((longlong)local_6d8 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = (longlong)plVar25;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
  }
LAB_14390e58d:
  if (param_1[0x15] != -1) {
    local_6a8 = *(longlong *)(param_1 + 0x2c);
    local_6b8._0_2_ = 0;
    if ((*(byte *)(local_6a8 + 0x28) & 0x10) == 0) {
      local_6b8._0_2_ = 0x1100;
      uVar27 = 1;
    }
    else {
      uVar27 = 4;
    }
    local_6b8._0_3_ = CONCAT12(uVar27,(undefined2)local_6b8);
    local_6b8._0_4_ = (uint)(uint3)local_6b8;
    local_6b8 = CONCAT44(param_1[0x15],(uint)local_6b8);
    uStack_6b0 = (ulonglong)(uint)(param_1[3] * param_1[2]);
    local_708 = &local_6b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_6d8,uVar17);
    plVar25 = (longlong *)(param_1 + 0x32);
    if (plVar25 != &local_6d8) {
      lVar19 = *plVar25;
      *plVar25 = (longlong)local_6d8;
      local_6d8 = (longlong *)0x0;
      if (lVar19 == 0) goto LAB_14390e6cf;
      LOCK();
      puVar1 = (uint *)(lVar19 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar19 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)(lVar19 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar19;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
    plVar25 = local_6d8;
    if (local_6d8 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_6d8 + 1);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_6d8 + 1);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)((longlong)local_6d8 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = (longlong)plVar25;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
  }
LAB_14390e6cf:
  if (param_1[0x16] != -1) {
    local_6a8 = *(longlong *)(param_1 + 0x2c);
    local_6b8._0_2_ = 0;
    if ((*(byte *)(local_6a8 + 0x28) & 0x10) == 0) {
      local_6b8._0_2_ = 0x2500;
      uVar27 = 1;
    }
    else {
      uVar27 = 4;
    }
    local_6b8._0_3_ = CONCAT12(uVar27,(undefined2)local_6b8);
    local_6b8._0_4_ = (uint)(uint3)local_6b8;
    local_6b8 = CONCAT44(param_1[0x16],(uint)local_6b8);
    uStack_6b0 = (ulonglong)(uint)param_1[2];
    local_708 = &local_6b8;
    (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_6d8,uVar17);
    plVar25 = (longlong *)(param_1 + 0x34);
    if (plVar25 != &local_6d8) {
      lVar19 = *plVar25;
      *plVar25 = (longlong)local_6d8;
      local_6d8 = (longlong *)0x0;
      if (lVar19 == 0) goto LAB_14390e80d;
      LOCK();
      puVar1 = (uint *)(lVar19 + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar19 + 8);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)(lVar19 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = lVar19;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
    plVar25 = local_6d8;
    if (local_6d8 != (longlong *)0x0) {
      LOCK();
      puVar1 = (uint *)(local_6d8 + 1);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_6d8 + 1);
        LOCK();
        uVar3 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar18 = *(byte *)((longlong)local_6d8 + 0xd);
          plVar23 = (longlong *)FUN_14001cc68(0x10,8);
          plVar23[1] = (longlong)plVar25;
          plVar25 = DAT_14ca843c0;
          plVar24 = DAT_14ca843c8;
          if ((bVar18 & 2) == 0) {
            do {
              *plVar23 = (longlong)plVar25;
              LOCK();
              bVar36 = plVar25 != DAT_14ca843c0;
              plVar24 = plVar23;
              if (bVar36) {
                plVar25 = DAT_14ca843c0;
                plVar24 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar24;
              UNLOCK();
            } while (bVar36);
          }
          else {
            do {
              *plVar23 = (longlong)plVar24;
              LOCK();
              bVar36 = plVar24 != DAT_14ca843c8;
              plVar25 = plVar23;
              if (bVar36) {
                plVar24 = DAT_14ca843c8;
                plVar25 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar25;
              UNLOCK();
            } while (bVar36);
          }
        }
      }
    }
  }
LAB_14390e80d:
  if ((local_48 ^ (ulonglong)auStack_728) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14390ea20 FUN_14390ea20 body=75 status=ok
// SIG undefined FUN_14390ea20(void)

void FUN_14390ea20(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_148091618(*param_1 + 0x60,
                        (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  FUN_14390d9ee(uVar1,param_2,param_1 + 2);
  return;
}



// FUNCTION 14390ea76 FUN_14390ea76 body=29 status=ok
// SIG undefined FUN_14390ea76(void)

void FUN_14390ea76(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14390ea94 FUN_14390ea94 body=52 status=ok
// SIG undefined FUN_14390ea94(void)

undefined8 * FUN_14390ea94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad80dd0;
  FUN_148086434(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14390eac8 FUN_14390eac8 body=282 status=ok
// SIG undefined FUN_14390eac8(void)

undefined8 * FUN_14390eac8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14390a065);
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



// FUNCTION 14390ebe2 FUN_14390ebe2 body=148 status=ok
// SIG undefined FUN_14390ebe2(void)

void FUN_14390ebe2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = FUN_148091618(param_1[0x15] + 0x60,
                        (int)((ulonglong)param_1[0x16] >> 0x20) * 0x17 + (int)param_1[0x16],
                        param_1 + 0x16);
  FUN_14390d9ee(uVar2,&DAT_14ca85100,param_1 + 0x17);
  FUN_148086434(param_1 + 0x17);
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014390ec6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14390ec82 FUN_14390ec82 body=3446 status=ok
// SIG undefined FUN_14390ec82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14390ec82(void)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  char *local_60;
  int local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1400b22c2(&local_60,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar2 = FUN_140b10a34(&local_60,&DAT_14cb36dc4);
  if (cVar2 == '\0') {
    _DAT_14cb36dc4 = 0;
    uRam000000014cb36dcc = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_60 = "bone";
  local_58 = 4;
  local_54 = 0;
  FUN_14001a6c0(&local_60,1);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14ad7ae00;
  local_78 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad7ae20,1,0);
  FUN_1446f470e(&DAT_14cb36e08,L"GetMatrix",1);
  FUN_1446f470e(&DAT_14cb36e10,L"GetTransform",1);
  FUN_1446f470e(&DAT_14cb36e18,L"GetVelocity",1);
  FUN_140056680(&DAT_14cb36e20,L"Valid");
  atexit((_func_5014 *)&LAB_1438ffda6);
  FUN_140056680(&DAT_14cb36e30,L"Matrix");
  atexit((_func_5014 *)&LAB_1438ffdb7);
  FUN_140056680(&DAT_14cb36e40,L"Rotation");
  atexit((_func_5014 *)&LAB_1438ffdc8);
  FUN_140056680(&DAT_14cb36e50,L"Scale");
  atexit((_func_5014 *)&LAB_1438ffdd9);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad7b490,1,0);
  FUN_1446f470e(&DAT_14cb36e78,L"IssueAsyncRayTraceGpu",1);
  FUN_1446f470e(&DAT_14cb36e80,L"CreateAsyncRayTraceGpu",1);
  FUN_1446f470e(&DAT_14cb36e88,L"ReserveAsyncRayTraceGpu",1);
  FUN_1446f470e(&DAT_14cb36e90,L"ReadAsyncRayTraceGpu",1);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad7b9b0,1,0);
  local_60 = "GetConsoleVariableFloat";
  local_58 = 0x17;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb36eb0 = (ulonglong)uVar3;
  local_60 = "GetConsoleVariableInt";
  local_58 = 0x15;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb36eb8 = (ulonglong)uVar3;
  local_60 = "GetConsoleVariableBool";
  local_58 = 0x16;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb36ec0 = (ulonglong)uVar3;
  local_60 = (char *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,2,0x10);
  local_58 = 2;
  *(undefined ***)local_60 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_60 + 0x10) = lVar4;
  *(undefined ***)local_60 = &PTR_FUN_14ad80050;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14156bb10(&DAT_14cb36ec8,L"fx.Niagara.DataChannels.ResetLayoutInfo",
                L"Resets all data channel layout info used by data interfaces to access data channels."
                ,&local_60);
  if (local_58 != 0) {
    if (local_60 == (char *)0x0) goto LAB_14390f016;
    (*(code *)**(undefined8 **)local_60)(local_60,0);
    FUN_1446efa72(&local_60,0,0,0x10);
    local_58 = 0;
  }
  if (local_60 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_14390f016:
  atexit(FUN_1439018ec);
  FUN_1446f470e(&DAT_14cb36ed8,L"GetNDCSpawnData",1);
  FUN_1446f470e(&DAT_14cb36ee0,L"SpawnConditional",1);
  FUN_1446f470e(&DAT_14cb36ee8,L"SpawnDirect",1);
  FUN_1446f470e(&DAT_14cb36ef0,L"Write",1);
  DAT_14cb36f00 = 0xffffffff;
  _DAT_14cb36f04 = 0x105;
  DAT_14cb36f06 = 0;
  DAT_14cb36f08 = 0xd;
  _DAT_14cb36f0c = 4;
  _DAT_14cb36f10 = 0;
  DAT_14cb36f18 = 0;
  _DAT_14cb36f20 = 0;
  uRam000000014cb36f28 = 0;
  _DAT_14cb36f2c = 0;
  uRam000000014cb36f30 = 0;
  uRam000000014cb36f34 = 0;
  _DAT_14cb36ef8 = &PTR_FUN_14ad800e0;
  FUN_14646a0ee(&DAT_14cb36ef8);
  atexit(FUN_143901cb6);
  DAT_14cb36f48 = 0xffffffff;
  _DAT_14cb36f4c = 0x105;
  DAT_14cb36f4e = 0;
  DAT_14cb36f50 = 0x1d;
  _DAT_14cb36f54 = 4;
  _DAT_14cb36f58 = 0;
  DAT_14cb36f60 = 0;
  _DAT_14cb36f68 = 0;
  uRam000000014cb36f70 = 0;
  _DAT_14cb36f74 = 0;
  uRam000000014cb36f78 = 0;
  uRam000000014cb36f7c = 0;
  _DAT_14cb36f40 = &PTR_FUN_14ad800e0;
  FUN_14646a0ee(&DAT_14cb36f40);
  atexit(FUN_143901d34);
  DAT_14cb36f90 = 0xffffffff;
  _DAT_14cb36f94 = 0x105;
  DAT_14cb36f96 = 0;
  DAT_14cb36f98 = 0x15;
  _DAT_14cb36f9c = 2;
  _DAT_14cb36fa0 = 0;
  uRam000000014cb36fa8 = 0;
  _DAT_14cb36fb0 = 0;
  uRam000000014cb36fb8 = 0;
  _DAT_14cb36fbc = 0;
  uRam000000014cb36fc0 = 0;
  uRam000000014cb36fc4 = 0;
  _DAT_14cb36f88 = &PTR_FUN_14ad800e0;
  FUN_14646a0ee(&DAT_14cb36f88);
  atexit(FUN_143901db2);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb36fd0,L"fx.Niagara.DataChannels.ForceReadTickGroup",&DAT_14c7627d8,
                L"When >= 0 this will force Niagara systems with NDC read DIs to tick in the given Tick Group."
               );
  atexit(FUN_143901e30);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cb36fe0,L"fx.Niagara.DataChannels.ForceReadPrevFrame",&DAT_14cb36ff0,
                L"When true this will force Niagara systems with NDC read DIs to read from the previous frame."
               );
  atexit(FUN_143901e75);
  FUN_1446f470e(&DAT_14cb36ff8,L"VarName",1);
  FUN_1446f470e(&DAT_14cb37000,L"VarType",1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb37478,L"fx.Niagara.DataChannels.DebugDumpWriterDI",&DAT_14cb37474,
                &DAT_14ad81004);
  atexit(FUN_143904fc4);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb37488,L"fx.Niagara.DataChannels.WriteDIZeroCPUBuffersMode",&DAT_14c7627dc,
                L"Controls how CPU buffers are zeroed for the NDC Write DI\n0 = Do not Zero CPU buffers.\n1 = Zero only when calling \"Write\" function.\n2 = Zero always.\n"
               );
  atexit(FUN_143905009);
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad7e2a0,1,0);
  FUN_1446f470e(&DAT_14cb376e0,L"CompilerTagKey",1);
  FUN_1446f470e(&DAT_14cb376e8,L"DrawLine",1);
  FUN_1446f470e(&DAT_14cb376f0,L"DrawRectangle",1);
  FUN_1446f470e(&DAT_14cb376f8,L"DrawCircle",1);
  FUN_1446f470e(&DAT_14cb37700,L"DrawBox",1);
  FUN_1446f470e(&DAT_14cb37708,L"DrawSphere",1);
  FUN_1446f470e(&DAT_14cb37710,L"DrawCylinder",1);
  FUN_1446f470e(&DAT_14cb37718,L"DrawCone",1);
  FUN_1446f470e(&DAT_14cb37720,L"DrawTorus",1);
  FUN_1446f470e(&DAT_14cb37728,L"DrawCoordinateSystem",1);
  FUN_1446f470e(&DAT_14cb37730,L"DrawGrid2D",1);
  FUN_1446f470e(&DAT_14cb37738,L"DrawGrid3D",1);
  FUN_1446f470e(&DAT_14cb37740,L"DrawLinePersistent",1);
  FUN_1446f470e(&DAT_14cb37748,L"DrawRectanglePersistent",1);
  FUN_1446f470e(&DAT_14cb37750,L"DrawCirclePersistent",1);
  FUN_1446f470e(&DAT_14cb37758,L"DrawBoxPersistent",1);
  FUN_1446f470e(&DAT_14cb37760,L"DrawSpherePersistent",1);
  FUN_1446f470e(&DAT_14cb37768,L"DrawCylinderPersistent",1);
  FUN_1446f470e(&DAT_14cb37770,L"DrawConePersistent",1);
  FUN_1446f470e(&DAT_14cb37778,L"DrawTorusPersistent",1);
  FUN_1446f470e(&DAT_14cb37780,L"DrawCoordinateSystemPersistent",1);
  FUN_1446f470e(&DAT_14cb37788,L"DrawGrid2DPersistent",1);
  FUN_1446f470e(&DAT_14cb37790,L"DrawGrid3DPersistent",1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_141471170(&DAT_14cb37798,L"fx.Niagara.DebugDraw.Enabled",&DAT_14c7627e0,
                L"Enable or disable the Debug Draw Data Interface, note does not fully disable the overhead."
               );
  atexit(FUN_143908e95);
  ppuStack_70 = (undefined **)0x0;
  local_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/Niagara",&PTR_FUN_14ad7f180,1,&PTR_FUN_14ad7f130);
  local_60 = "GetMeshProperties";
  local_58 = 0x11;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb377f0 = (ulonglong)uVar3;
  local_60 = "GetSectionCount";
  local_58 = 0xf;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb377f8 = (ulonglong)uVar3;
  local_60 = "GetSectionData";
  local_58 = 0xe;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37800 = (ulonglong)uVar3;
  local_60 = "GetLocalBounds";
  local_58 = 0xe;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37808 = (ulonglong)uVar3;
  local_60 = "SetMeshProperties";
  local_58 = 0x11;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37810 = (ulonglong)uVar3;
  local_60 = "SetSectionCount";
  local_58 = 0xf;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37818 = (ulonglong)uVar3;
  local_60 = "SetSectionData";
  local_58 = 0xe;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37820 = (ulonglong)uVar3;
  local_60 = "SetLocalBounds";
  local_58 = 0xe;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37828 = (ulonglong)uVar3;
  local_60 = "ClearAllSectionTriangles";
  local_58 = 0x18;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37830 = (ulonglong)uVar3;
  local_60 = "ClearSectionTriangles";
  local_58 = 0x15;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37838 = (ulonglong)uVar3;
  local_60 = "AllocateSectionTriangles";
  local_58 = 0x18;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37840 = (ulonglong)uVar3;
  local_60 = "GetTriangleVertices";
  local_58 = 0x13;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37848 = (ulonglong)uVar3;
  local_60 = "GetVertexPosition";
  local_58 = 0x11;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37850 = (ulonglong)uVar3;
  local_60 = "GetVertexTangentBasis";
  local_58 = 0x15;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37858 = (ulonglong)uVar3;
  local_60 = "GetVertexTexCoord";
  local_58 = 0x11;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37860 = (ulonglong)uVar3;
  local_60 = "GetVertexColor";
  local_58 = 0xe;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37868 = (ulonglong)uVar3;
  local_60 = "GetVertexData";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37870 = (ulonglong)uVar3;
  local_60 = "SetTriangleVertices";
  local_58 = 0x13;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37878 = (ulonglong)uVar3;
  local_60 = "SetVertexPosition";
  local_58 = 0x11;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37880 = (ulonglong)uVar3;
  local_60 = "SetVertexTangentBasis";
  local_58 = 0x15;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37888 = (ulonglong)uVar3;
  local_60 = "SetVertexTexCoord";
  local_58 = 0x11;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37890 = (ulonglong)uVar3;
  local_60 = "SetVertexColor";
  local_58 = 0xe;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb37898 = (ulonglong)uVar3;
  local_60 = "SetVertexData";
  local_58 = 0xd;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb378a0 = (ulonglong)uVar3;
  local_60 = "AppendTriangle";
  local_58 = 0xe;
  local_54 = 0;
  uVar3 = FUN_14001a6c0(&local_60,1);
  DAT_14cb378a8 = (ulonglong)uVar3;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14390f9fc FUN_14390f9fc body=1374 status=ok
// SIG undefined FUN_14390f9fc(void)

undefined8 FUN_14390f9fc(longlong param_1,longlong *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_b8 [32];
  code **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined7 uStack_77;
  int local_6c;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar9 = FUN_143a3161c(param_1 + 0x38,param_3,param_1);
  *param_2 = lVar9;
  if (lVar9 != 0) {
    *(byte *)(param_2 + 1) = *(byte *)(lVar9 + 0xd0) & 1;
  }
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_14390fb4f;
  lVar9 = *(longlong *)(param_1 + 0x28);
  uStack_80 = *(undefined8 *)(param_3 + 0x100);
  local_78 = (undefined1)param_2[1];
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_88 = lVar9;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_14390fa99;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_14390fe92;
      goto LAB_14390faa2;
    }
  }
  else {
LAB_14390fa99:
    if (iVar6 != 0x10) {
LAB_14390faa2:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_14390fe92;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_14390fe92;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_14390fc18;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14391c555);
          }
          lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar9 + 0x310);
          *(undefined8 *)(lVar9 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_14390fc18:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x18);
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
            puVar15 = (uint *)(puVar17 + 0x18);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_14390fc98;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_14390fc98:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14ad88ac8;
        *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_88;
        *(undefined4 *)((longlong)puVar17 + 0xac) = local_88._4_4_;
        *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_80._4_4_;
        puVar17[0x17] = CONCAT71(uStack_77,local_78);
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
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
        lVar9 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar9 == 0) {
          uVar5 = 1;
          if ((char)uVar16 != '\x06') {
            uVar5 = uVar16;
          }
          uVar16 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar9 + 0x30);
        }
        puVar17[0xf] = uVar12;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar6;
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
        local_98 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ad88a80;
        local_40 = (undefined4)local_88;
        uStack_3c = local_88._4_4_;
        uStack_38 = (undefined4)uStack_80;
        uStack_34 = uStack_80._4_4_;
        local_30 = CONCAT71(uStack_77,local_78);
        local_68[0] = FUN_14391c4b4;
        FUN_14005a792(&DAT_14ca9a440,L"NDIEmitter_InitRT",&DAT_14cb38ab4);
        if (local_68[0] != (code *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_14390fb4f;
    }
  }
LAB_14390fe92:
  local_68[0] = (code *)&uStack_80;
  FUN_1480b5330(lVar9 + 0x10,&local_6c);
  *(undefined1 *)(*(longlong *)(lVar9 + 0x10) + 8 + (longlong)local_6c * 0x50) = local_78;
LAB_14390fb4f:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14390ff5c FUN_14390ff5c body=1249 status=ok
// SIG undefined FUN_14390ff5c(void)

void FUN_14390ff5c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_14391005c;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143910398;
    if (iVar7 != 1) goto LAB_14390ffb0;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143910398;
  }
  else {
LAB_14390ffb0:
    if (iVar7 == 0x10) goto LAB_143910398;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143910398:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143910398;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14391011d;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14391c555);
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
LAB_14391011d:
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
          goto LAB_14391019d;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14391019d:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad88b00;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_48 = &PTR_LAB_14ad88ae0;
    local_68[0] = &LAB_14391c750;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDIEmitter_InitRT",&DAT_14cb38ab8);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14391005c:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143910458 FUN_143910458 body=107 status=ok
// SIG undefined FUN_143910458(void)

void FUN_143910458(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x20;
  do {
    plVar1 = (longlong *)((longlong)&DAT_14cb38040 + lVar3);
    if (*(int *)((longlong)&DAT_14cb38048 + lVar3) == 0) {
LAB_1439104a0:
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar2 = (undefined8 *)*plVar1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)((longlong)&DAT_14cb38048 + lVar3) = 0;
        goto LAB_1439104a0;
      }
    }
    lVar3 = lVar3 + -0x18;
    if (lVar3 == -0x10) {
      return;
    }
  } while( true );
}



// FUNCTION 1439104c3 FUN_1439104c3 body=3557 status=ok
// SIG undefined FUN_1439104c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1439104c3(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb38a90) {
    FUN_144b3d300(&DAT_14cb38a90);
    if (DAT_14cb38a90 == -1) {
      local_40 = "LoadFloat";
      local_38 = 9;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38850 = (ulonglong)uVar3;
      local_40 = "StoreFloat";
      local_38 = 10;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38858 = (ulonglong)uVar3;
      _DAT_14cb38860 = DAT_14cb420f0;
      if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb38868 = DAT_14cb420f8;
      _DAT_14cb38870 = 1;
      DAT_14cb38878 = (undefined8 *)0x0;
      _DAT_14cb38880 = 0;
      FUN_1446efa72(&DAT_14cb38878,0,2,0x10);
      puVar1 = DAT_14cb38878;
      _DAT_14cb38880 = 2;
      *DAT_14cb38878 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480aefee;
      DAT_14cb38888 = (undefined8 *)0x0;
      _DAT_14cb38890 = 0;
      FUN_1446efa72(&DAT_14cb38888,0,2,0x10);
      puVar1 = DAT_14cb38888;
      _DAT_14cb38890 = 2;
      *DAT_14cb38888 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480af14a;
      local_40 = "LoadFloat2";
      local_38 = 10;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38898 = (ulonglong)uVar3;
      local_40 = "StoreFloat2";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb388a0 = (ulonglong)uVar3;
      _DAT_14cb388a8 = DAT_14cb42110;
      if ((DAT_14cb42110 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb388b0 = DAT_14cb42118;
      _DAT_14cb388b8 = 1;
      DAT_14cb388c0 = (undefined8 *)0x0;
      _DAT_14cb388c8 = 0;
      FUN_1446efa72(&DAT_14cb388c0,0,2,0x10);
      puVar1 = DAT_14cb388c0;
      _DAT_14cb388c8 = 2;
      *DAT_14cb388c0 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480af31a;
      DAT_14cb388d0 = (undefined8 *)0x0;
      _DAT_14cb388d8 = 0;
      FUN_1446efa72(&DAT_14cb388d0,0,2,0x10);
      puVar1 = DAT_14cb388d0;
      _DAT_14cb388d8 = 2;
      *DAT_14cb388d0 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480af4a3;
      local_40 = "LoadFloat3";
      local_38 = 10;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb388e0 = (ulonglong)uVar3;
      local_40 = "StoreFloat3";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb388e8 = (ulonglong)uVar3;
      _DAT_14cb388f0 = DAT_14cb42140;
      if ((DAT_14cb42140 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb388f8 = DAT_14cb42148;
      _DAT_14cb38900 = 1;
      DAT_14cb38908 = (undefined8 *)0x0;
      _DAT_14cb38910 = 0;
      FUN_1446efa72(&DAT_14cb38908,0,2,0x10);
      puVar1 = DAT_14cb38908;
      _DAT_14cb38910 = 2;
      *DAT_14cb38908 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480af6b7;
      DAT_14cb38918 = (undefined8 *)0x0;
      _DAT_14cb38920 = 0;
      FUN_1446efa72(&DAT_14cb38918,0,2,0x10);
      puVar1 = DAT_14cb38918;
      _DAT_14cb38920 = 2;
      *DAT_14cb38918 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480af887;
      local_40 = "LoadFloat4";
      local_38 = 10;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38928 = (ulonglong)uVar3;
      local_40 = "StoreFloat4";
      local_38 = 0xb;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38930 = (ulonglong)uVar3;
      _DAT_14cb38938 = DAT_14cb42160;
      if ((DAT_14cb42160 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb38940 = DAT_14cb42168;
      _DAT_14cb38948 = 1;
      DAT_14cb38950 = (undefined8 *)0x0;
      _DAT_14cb38958 = 0;
      FUN_1446efa72(&DAT_14cb38950,0,2,0x10);
      puVar1 = DAT_14cb38950;
      _DAT_14cb38958 = 2;
      *DAT_14cb38950 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480afab0;
      DAT_14cb38960 = (undefined8 *)0x0;
      _DAT_14cb38968 = 0;
      FUN_1446efa72(&DAT_14cb38960,0,2,0x10);
      puVar1 = DAT_14cb38960;
      _DAT_14cb38968 = 2;
      *DAT_14cb38960 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480afcaa;
      local_40 = "LoadInt";
      local_38 = 7;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38970 = (ulonglong)uVar3;
      local_40 = "StoreInt";
      local_38 = 8;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38978 = (ulonglong)uVar3;
      _DAT_14cb38980 = DAT_14cb420d0;
      if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb38988 = _DAT_14cb420d8;
      _DAT_14cb38990 = 1;
      DAT_14cb38998 = (undefined8 *)0x0;
      _DAT_14cb389a0 = 0;
      FUN_1446efa72(&DAT_14cb38998,0,2,0x10);
      puVar1 = DAT_14cb38998;
      _DAT_14cb389a0 = 2;
      *DAT_14cb38998 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480aff34;
      DAT_14cb389a8 = (undefined8 *)0x0;
      _DAT_14cb389b0 = 0;
      FUN_1446efa72(&DAT_14cb389a8,0,2,0x10);
      puVar1 = DAT_14cb389a8;
      _DAT_14cb389b0 = 2;
      *DAT_14cb389a8 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480b008c;
      local_40 = "LoadInt2";
      local_38 = 8;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb389b8 = (ulonglong)uVar3;
      local_40 = "StoreInt2";
      local_38 = 9;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb389c0 = (ulonglong)uVar3;
      _DAT_14cb389c8 = DAT_14cb420d0;
      if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb389d0 = _DAT_14cb420d8;
      _DAT_14cb389d8 = 2;
      DAT_14cb389e0 = (undefined8 *)0x0;
      _DAT_14cb389e8 = 0;
      FUN_1446efa72(&DAT_14cb389e0,0,2,0x10);
      puVar1 = DAT_14cb389e0;
      _DAT_14cb389e8 = 2;
      *DAT_14cb389e0 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480b0258;
      DAT_14cb389f0 = (undefined8 *)0x0;
      _DAT_14cb389f8 = 0;
      FUN_1446efa72(&DAT_14cb389f0,0,2,0x10);
      puVar1 = DAT_14cb389f0;
      _DAT_14cb389f8 = 2;
      *DAT_14cb389f0 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480b03e1;
      local_40 = "LoadInt3";
      local_38 = 8;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38a00 = (ulonglong)uVar3;
      local_40 = "StoreInt3";
      local_38 = 9;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38a08 = (ulonglong)uVar3;
      _DAT_14cb38a10 = DAT_14cb420d0;
      if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb38a18 = _DAT_14cb420d8;
      _DAT_14cb38a20 = 3;
      DAT_14cb38a28 = (undefined8 *)0x0;
      DAT_14cb38a30 = 0;
      FUN_1446efa72(&DAT_14cb38a28,0,2,0x10);
      puVar1 = DAT_14cb38a28;
      DAT_14cb38a30 = 2;
      *DAT_14cb38a28 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480b05ec;
      DAT_14cb38a38 = (undefined8 *)0x0;
      DAT_14cb38a40 = 0;
      FUN_1446efa72(&DAT_14cb38a38,0,2,0x10);
      puVar1 = DAT_14cb38a38;
      DAT_14cb38a40 = 2;
      *DAT_14cb38a38 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480b07b7;
      local_40 = "LoadInt4";
      local_38 = 8;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38a48 = (ulonglong)uVar3;
      local_40 = "StoreInt4";
      local_38 = 9;
      local_34 = 0;
      uVar3 = FUN_14001a6c0(&local_40,1);
      _DAT_14cb38a50 = (ulonglong)uVar3;
      _DAT_14cb38a58 = DAT_14cb420d0;
      if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      _DAT_14cb38a60 = _DAT_14cb420d8;
      _DAT_14cb38a68 = 4;
      DAT_14cb38a70 = (undefined8 *)0x0;
      DAT_14cb38a78 = 0;
      FUN_1446efa72(&DAT_14cb38a70,0,2,0x10);
      puVar1 = DAT_14cb38a70;
      DAT_14cb38a78 = 2;
      *DAT_14cb38a70 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480b0a03;
      DAT_14cb38a80 = (undefined8 *)0x0;
      DAT_14cb38a88 = 0;
      FUN_1446efa72(&DAT_14cb38a80,0,2,0x10);
      puVar1 = DAT_14cb38a80;
      DAT_14cb38a88 = 2;
      *DAT_14cb38a80 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar4 == 0) {
        LOCK();
        UNLOCK();
        lVar4 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      puVar1[2] = lVar4;
      *puVar1 = &PTR_FUN_14ad80f50;
      puVar1[3] = FUN_1480b0bf6;
      atexit(FUN_14391b944);
      _Init_thread_footer(&DAT_14cb38a90);
    }
  }
  *param_1 = &DAT_14cb38850;
  *(undefined4 *)(param_1 + 1) = 8;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439112a9 FUN_1439112a9 body=2594 status=ok
// SIG undefined FUN_1439112a9(void)

undefined8 * FUN_1439112a9(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_1d8 [40];
  undefined8 *local_1b0;
  int local_1a8;
  undefined8 *local_1a0;
  int local_198;
  undefined8 *local_190;
  int local_188;
  undefined8 *local_180;
  int local_178;
  undefined8 *local_170;
  int local_168;
  undefined8 *local_160;
  int local_158;
  undefined8 *local_150;
  int local_148;
  undefined8 *local_140;
  int local_138;
  undefined8 *local_130;
  int local_128;
  longlong *local_120;
  ulonglong *local_118;
  longlong local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (DAT_14cb38aa8 <=
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110)) goto LAB_1439112ef;
  FUN_144b3d300(&DAT_14cb38aa8);
  if (DAT_14cb38aa8 != -1) goto LAB_1439112ef;
  local_130 = (undefined8 *)0x0;
  local_128 = 0;
  FUN_1446efa72(&local_130,0,2,0x10);
  *local_130 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_130[2] = lVar2;
  *local_130 = &PTR_FUN_14ad80f50;
  local_130[3] = FUN_1480b0e84;
  local_110 = DAT_14cb38008;
  local_108 = local_130;
  local_130 = (undefined8 *)0x0;
  local_100 = 2;
  local_128 = 0;
  local_140 = (undefined8 *)0x0;
  local_138 = 0;
  FUN_1446efa72(&local_140,0,2,0x10);
  *local_140 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_140[2] = lVar2;
  *local_140 = &PTR_FUN_14ad80f50;
  local_140[3] = FUN_1480b101a;
  local_f8 = DAT_14cb38010;
  local_f0 = local_140;
  local_140 = (undefined8 *)0x0;
  local_e8 = 2;
  local_138 = 0;
  local_150 = (undefined8 *)0x0;
  local_148 = 0;
  FUN_1446efa72(&local_150,0,2,0x10);
  *local_150 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_150[2] = lVar2;
  *local_150 = &PTR_FUN_14ad80f50;
  local_150[3] = FUN_1480b11b0;
  local_e0 = DAT_14cb38018;
  local_d8 = local_150;
  local_150 = (undefined8 *)0x0;
  local_d0 = 2;
  local_148 = 0;
  local_160 = (undefined8 *)0x0;
  local_158 = 0;
  FUN_1446efa72(&local_160,0,2,0x10);
  *local_160 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_160[2] = lVar2;
  *local_160 = &PTR_FUN_14ad80f50;
  local_160[3] = FUN_1480b1379;
  local_c8 = DAT_14cb38020;
  local_c0 = local_160;
  local_160 = (undefined8 *)0x0;
  local_b8 = 2;
  local_158 = 0;
  local_170 = (undefined8 *)0x0;
  local_168 = 0;
  FUN_1446efa72(&local_170,0,2,0x10);
  *local_170 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_170[2] = lVar2;
  *local_170 = &PTR_FUN_14ad80f50;
  local_170[3] = FUN_1480b1520;
  local_b0 = DAT_14cb38028;
  local_a8 = local_170;
  local_170 = (undefined8 *)0x0;
  local_a0 = 2;
  local_168 = 0;
  local_180 = (undefined8 *)0x0;
  local_178 = 0;
  FUN_1446efa72(&local_180,0,2,0x10);
  *local_180 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_180[2] = lVar2;
  *local_180 = &PTR_FUN_14ad80f50;
  local_180[3] = FUN_1480b16c7;
  local_98 = DAT_14cb38030;
  local_90 = local_180;
  local_180 = (undefined8 *)0x0;
  local_88 = 2;
  local_178 = 0;
  local_190 = (undefined8 *)0x0;
  local_188 = 0;
  FUN_1446efa72(&local_190,0,2,0x10);
  *local_190 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_190[2] = lVar2;
  *local_190 = &PTR_FUN_14ad80f50;
  local_190[3] = FUN_1480b185d;
  local_80 = DAT_14cb38038;
  local_78 = local_190;
  local_190 = (undefined8 *)0x0;
  local_70 = 2;
  local_188 = 0;
  local_1a0 = (undefined8 *)0x0;
  local_198 = 0;
  FUN_1446efa72(&local_1a0,0,2,0x10);
  *local_1a0 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_1a0[2] = lVar2;
  *local_1a0 = &PTR_FUN_14ad80f50;
  local_1a0[3] = FUN_1480b19f3;
  local_68 = DAT_14cb37ff8;
  local_60 = local_1a0;
  local_1a0 = (undefined8 *)0x0;
  local_58 = 2;
  local_198 = 0;
  local_1b0 = (undefined8 *)0x0;
  local_1a8 = 0;
  FUN_1446efa72(&local_1b0,0,2,0x10);
  *local_1b0 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_1b0[2] = lVar2;
  *local_1b0 = &PTR_FUN_14ad80f50;
  local_1b0[3] = FUN_1480b1c14;
  local_120 = &local_110;
  local_50 = DAT_14cb38000;
  local_48 = local_1b0;
  local_1b0 = (undefined8 *)0x0;
  local_40 = 2;
  local_1a8 = 0;
  local_118 = &local_38;
  FUN_1480b1e36();
  lVar3 = 200;
  do {
    plVar4 = (longlong *)((longlong)&local_110 + lVar3);
    if (*(int *)((longlong)&local_108 + lVar3) == 0) {
LAB_1439118de:
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined8 *)*plVar4;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,0);
        FUN_1446efa72(plVar4,0,0,0x10);
        *(undefined4 *)((longlong)&local_108 + lVar3) = 0;
        goto LAB_1439118de;
      }
    }
    lVar3 = lVar3 + -0x18;
  } while (lVar3 != -0x10);
  if (local_1a8 == 0) {
LAB_143911930:
    if (local_1b0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1b0 != (undefined8 *)0x0) {
    (**(code **)*local_1b0)(local_1b0,0);
    FUN_1446efa72(&local_1b0,0,0,0x10);
    local_1a8 = 0;
    goto LAB_143911930;
  }
  if (local_198 == 0) {
LAB_143911975:
    if (local_1a0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_1a0 != (undefined8 *)0x0) {
    (**(code **)*local_1a0)(local_1a0,0);
    FUN_1446efa72(&local_1a0,0,0,0x10);
    local_198 = 0;
    goto LAB_143911975;
  }
  if (local_188 == 0) {
LAB_1439119ba:
    if (local_190 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_190 != (undefined8 *)0x0) {
    (**(code **)*local_190)(local_190,0);
    FUN_1446efa72(&local_190,0,0,0x10);
    local_188 = 0;
    goto LAB_1439119ba;
  }
  if (local_178 == 0) {
LAB_1439119ff:
    if (local_180 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_180 != (undefined8 *)0x0) {
    (**(code **)*local_180)(local_180,0);
    FUN_1446efa72(&local_180,0,0,0x10);
    local_178 = 0;
    goto LAB_1439119ff;
  }
  if (local_168 == 0) {
LAB_143911a44:
    if (local_170 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_170 != (undefined8 *)0x0) {
    (**(code **)*local_170)(local_170,0);
    FUN_1446efa72(&local_170,0,0,0x10);
    local_168 = 0;
    goto LAB_143911a44;
  }
  if (local_158 == 0) {
LAB_143911a8c:
    if (local_160 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_160 != (undefined8 *)0x0) {
    (**(code **)*local_160)(local_160,0);
    FUN_1446efa72(&local_160,0,0,0x10);
    local_158 = 0;
    goto LAB_143911a8c;
  }
  if (local_148 == 0) {
LAB_143911ada:
    if (local_150 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_150 != (undefined8 *)0x0) {
    (**(code **)*local_150)(local_150,0);
    FUN_1446efa72(&local_150,0,0,0x10);
    local_148 = 0;
    goto LAB_143911ada;
  }
  if (local_138 == 0) {
LAB_143911b2b:
    if (local_140 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_140 != (undefined8 *)0x0) {
    (**(code **)*local_140)(local_140,0);
    FUN_1446efa72(&local_140,0,0,0x10);
    local_138 = 0;
    goto LAB_143911b2b;
  }
  if (local_128 == 0) {
LAB_143911b7c:
    if (local_130 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_130 != (undefined8 *)0x0) {
    (**(code **)*local_130)(local_130,0);
    FUN_1446efa72(&local_130,0,0,0x10);
    local_128 = 0;
    goto LAB_143911b7c;
  }
  atexit(FUN_14391b9ed);
  _Init_thread_footer(&DAT_14cb38aa8);
LAB_1439112ef:
  *param_1 = DAT_14cb38a98;
  *(undefined4 *)(param_1 + 1) = DAT_14cb38aa0;
  if ((local_38 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143911ccc FUN_143911ccc body=1299 status=ok
// SIG undefined FUN_143911ccc(void)

void FUN_143911ccc(longlong param_1,longlong param_2,longlong param_3)

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
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_2 + 2) != '\x01') goto LAB_143911cf2;
  lVar4 = *(longlong *)(param_1 + 0x28);
  FUN_1480b6262(lVar4 + 0x68,*(undefined8 *)(param_3 + 0x100));
  uVar12 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_143911d75;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14391213b;
      goto LAB_143911d7e;
    }
  }
  else {
LAB_143911d75:
    if (iVar7 != 0x10) {
LAB_143911d7e:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
        goto LAB_14391213b;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_14391213b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_143911ec6;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_14391c555);
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
LAB_143911ec6:
          puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x17);
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
            puVar15 = (uint *)(puVar17 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_143911f46;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_143911f46:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14ad88dc0;
        puVar17[0x15] = lVar4;
        puVar17[0x16] = uVar12;
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
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar16 != '\x06') {
            uVar6 = uVar16;
          }
          uVar16 = uVar6;
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
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad88d60;
        local_78[0] = &LAB_14391d062;
        local_50 = lVar4;
        local_48 = uVar12;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIMemoryBuffer_RemoveProxy",&DAT_14cb38bcc);
        if (local_78[0] != (undefined1 *)0x0) {
          pppuVar14 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar14 = &local_58;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_143911cf2;
    }
  }
LAB_14391213b:
  FUN_1480b6320(lVar4 + 0x18,uVar12);
LAB_143911cf2:
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    *(undefined1 *)(param_2 + 0x2c) = 0;
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439121e0 FUN_1439121e0 body=1542 status=ok
// SIG undefined FUN_1439121e0(void)

undefined8 FUN_1439121e0(longlong param_1,char *param_2,longlong param_3)

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
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  char local_8c;
  longlong local_88;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_2[2] != '\x01') || (*param_2 != '\x01')) goto LAB_14391220d;
  local_a8 = *(longlong *)(param_1 + 0x28);
  uStack_a0 = *(undefined8 *)(param_3 + 0x100);
  FUN_1480941f2(&local_98,param_2);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143912285;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_143912719;
      goto LAB_14391228e;
    }
LAB_143912719:
    uVar11 = FUN_1480b6528(local_a8 + 0x18,
                           (int)((ulonglong)uStack_a0 >> 0x20) * 0x17 + (int)uStack_a0,&uStack_a0);
    FUN_1480b6484(uVar11,&local_98);
  }
  else {
LAB_143912285:
    if (iVar6 == 0x10) goto LAB_143912719;
LAB_14391228e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_143912719;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143912719;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_143912450;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_14391c555);
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
LAB_143912450:
        puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x1b);
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
          puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x1b);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_1439124d0;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_1439124d0:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      FUN_1447247dc(puVar15,0);
      *puVar15 = &PTR_FUN_14ad88e28;
      *(undefined4 *)(puVar15 + 0x15) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar15 + 0xac) = local_a8._4_4_;
      *(undefined4 *)(puVar15 + 0x16) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar15 + 0xb4) = uStack_a0._4_4_;
      *(undefined1 *)((longlong)puVar15 + 0xbc) = local_94;
      *(undefined4 *)(puVar15 + 0x17) = local_98;
      *(char *)((longlong)puVar15 + 0xc4) = local_8c;
      if (local_8c == '\x01') {
        *(undefined4 *)(puVar15 + 0x18) = local_90;
      }
      puVar15[0x19] = local_88;
      iVar6 = 0;
      local_88 = 0;
      *(undefined4 *)(puVar15 + 0x1a) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar15 + 0xd4) = local_80._4_4_;
      local_80 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
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
      if (*(code **)(puVar15[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar15[0xe] + 0x18))(puVar15 + 0xe,puVar15 + 9);
      }
      puVar15[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar15[9] = puVar15;
      puVar15[10] = puVar15;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
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
      puVar15[0xf] = uVar11;
      puVar15[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar15 + 0x1c) = iVar6;
      if (puVar15 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
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
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x38,8);
      *local_68 = (longlong)&PTR_LAB_14ad88dd0;
      *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
      *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a0._4_4_;
      *(undefined1 *)((longlong)local_68 + 0x1c) = local_94;
      *(undefined4 *)(local_68 + 3) = local_98;
      *(char *)((longlong)local_68 + 0x24) = local_8c;
      if (local_8c == '\x01') {
        *(undefined4 *)(local_68 + 4) = local_90;
      }
      local_68[5] = local_88;
      local_88 = 0;
      *(undefined4 *)(local_68 + 6) = (undefined4)local_80;
      *(undefined4 *)((longlong)local_68 + 0x34) = local_80._4_4_;
      local_80 = 0;
      if (local_68 != (longlong *)&DAT_fffffffffffffff8) {
        local_78[0] = FUN_14391d23a;
      }
      local_b8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"FNDIMemoryBuffer_UpdateData",&DAT_14cb38bd0);
      if (local_78[0] != (code *)0x0) {
        plVar13 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar13 = local_58;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  *param_2 = '\0';
LAB_14391220d:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439127e8 FUN_1439127e8 body=1527 status=ok
// SIG undefined FUN_1439127e8(void)

undefined8
FUN_1439127e8(longlong param_1,longlong param_2,int param_3,longlong param_4,longlong param_5)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_d8 [32];
  undefined1 **local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  int iStack_98;
  undefined4 uStack_94;
  longlong local_90;
  undefined8 local_88;
  int local_80;
  undefined1 *local_78 [2];
  longlong *local_68;
  longlong local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(int *)(param_2 + 0x30) <= param_3) {
    FUN_1480944e8(param_2 + 0x28,(param_3 - *(int *)(param_2 + 0x30)) + 1);
  }
  if (0 < *(int *)(param_5 + 0x18)) {
    local_88 = *(undefined8 *)(param_5 + 0x10);
    local_80 = *(int *)(param_5 + 0x18);
    uVar5 = FUN_148093d0c(param_2);
    *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 4 + (longlong)param_3 * 0x10) = uVar5;
    *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)param_3 * 0x10) =
         *(undefined4 *)(param_5 + 0x18);
  }
  if (*(char *)(param_5 + 2) != '\x01') goto LAB_143912a1c;
  if (((*(longlong *)(param_4 + 0x30) == 0) ||
      (plVar14 = *(longlong **)(*(longlong *)(param_4 + 0x30) + 0x218), plVar14 == (longlong *)0x0))
     || (puVar9 = (undefined8 *)(**(code **)(*plVar14 + 0x420))(), puVar9 == (undefined8 *)0x0)) {
    local_90 = 0;
  }
  else {
    local_90 = (**(code **)*puVar9)(puVar9,&DAT_14cb3e918);
  }
  local_b0 = *(undefined8 *)(param_1 + -0x10);
  uStack_a8 = *(undefined8 *)(param_4 + 0x100);
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar3 + 0xc60);
  local_a0 = param_2;
  iStack_98 = param_3;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1439128c3;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1439128c8;
      goto LAB_143912943;
    }
LAB_1439128c8:
    FUN_14391d4b0(&local_b0,&DAT_14ca85100);
  }
  else {
LAB_1439128c3:
    if (iVar6 == 0x10) goto LAB_1439128c8;
LAB_143912943:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar3 + 0xc60), iVar6 == 2))
      goto LAB_1439128c8;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1439128c8;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar9 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar9;
      if (puVar11 != (uint *)0x0) goto LAB_143912ae7;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14391c555);
        }
        lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar3 + 0x310);
        *(undefined8 *)(lVar3 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar9 = puVar10;
        FUN_140217a48(puVar9);
        puVar11 = (uint *)*puVar9;
LAB_143912ae7:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x1a);
        uVar13 = puVar11[0x12];
        if (puVar15 <= puVar11 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
          LOCK();
          uVar2 = *puVar11;
          *puVar11 = *puVar11 + uVar13 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar13) != 0xffffffff) break;
          puVar11 = (uint *)*puVar9;
          *puVar11 = 0xffffffff;
          *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar9 = puVar11;
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x1a);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143912b67;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143912b67:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ad88e80;
      *(undefined4 *)(puVar17 + 0x15) = (undefined4)local_b0;
      *(undefined4 *)((longlong)puVar17 + 0xac) = local_b0._4_4_;
      *(undefined4 *)(puVar17 + 0x16) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_a8._4_4_;
      *(undefined4 *)(puVar17 + 0x17) = (undefined4)local_a0;
      *(undefined4 *)((longlong)puVar17 + 0xbc) = local_a0._4_4_;
      *(int *)(puVar17 + 0x18) = iStack_98;
      *(undefined4 *)((longlong)puVar17 + 0xc4) = uStack_94;
      puVar17[0x19] = local_90;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
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
      lVar3 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar3 == 0) {
        uVar4 = 1;
        if ((char)uVar16 != '\x06') {
          uVar4 = uVar16;
        }
        uVar16 = uVar4;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar3 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar3 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
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
      local_78[0] = (undefined1 *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x30,8);
      *local_68 = (longlong)&PTR_LAB_14ad88e60;
      local_68[5] = local_90;
      *(undefined4 *)(local_68 + 3) = (undefined4)local_a0;
      *(undefined4 *)((longlong)local_68 + 0x1c) = local_a0._4_4_;
      *(int *)(local_68 + 4) = iStack_98;
      *(undefined4 *)((longlong)local_68 + 0x24) = uStack_94;
      *(undefined4 *)(local_68 + 1) = (undefined4)local_b0;
      *(undefined4 *)((longlong)local_68 + 0xc) = local_b0._4_4_;
      *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a8;
      *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a8._4_4_;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78[0] = &LAB_14391d6f2;
      }
      local_b8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"NDIRenderTargetVolumeUpdate",&DAT_14cb38c5c);
      if (local_78[0] != (undefined1 *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  FUN_14080c2b4();
LAB_143912a1c:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143912de0 FUN_143912de0 body=1700 status=ok
// SIG undefined FUN_143912de0(void)

ulonglong FUN_143912de0(longlong param_1,longlong param_2,uint param_3,undefined8 param_4,
                       undefined8 param_5,longlong param_6,longlong param_7)

{
  undefined8 *puVar1;
  int *piVar2;
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
  undefined8 *puVar15;
  undefined8 unaff_RSI;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [32];
  code **local_c8;
  longlong local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  char local_8c;
  longlong local_88;
  undefined8 local_80;
  code *local_78 [2];
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((int)param_3 < 0) || (*(int *)(param_2 + 0x30) <= (int)param_3)) {
    uVar16 = 0;
    goto LAB_143913022;
  }
  piVar2 = (int *)(*(longlong *)(param_2 + 0x28) + (ulonglong)param_3 * 0x10);
  iVar6 = *(int *)(*(longlong *)(param_2 + 0x28) + (ulonglong)param_3 * 0x10);
  if ((0 < iVar6) && (*(char *)(param_7 + 1) == '\x01')) {
    *(int *)(param_7 + 0x20) = iVar6;
    if (iVar6 + 4 != *(int *)(param_7 + 0x18)) {
      FUN_1402d2c96(param_7 + 0x10,iVar6 + 4,1);
    }
    memcpy(*(void **)(param_7 + 0x10),
           (void *)((longlong)piVar2[1] * 4 + *(longlong *)(param_2 + 0x38)),(longlong)*piVar2 << 2)
    ;
  }
  uVar16 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((piVar2[2] < 1) || (*(char *)(param_7 + 2) != '\x01')) goto LAB_143913022;
  local_b8 = (longlong)piVar2[3] * 4 + *(longlong *)(param_2 + 0x38);
  local_a8 = *(longlong *)(param_1 + -0x10);
  uStack_a0 = *(undefined8 *)(param_6 + 0x100);
  local_b0 = piVar2[2];
  FUN_14809452a(&local_98);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_143912ef8;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1439133b7;
      goto LAB_143912f01;
    }
LAB_1439133b7:
    uVar11 = FUN_1480b6528(local_a8 + 0x18,
                           (int)((ulonglong)uStack_a0 >> 0x20) * 0x17 + (int)uStack_a0,&uStack_a0);
    FUN_1480b6484(uVar11,&local_98);
  }
  else {
LAB_143912ef8:
    if (iVar6 == 0x10) goto LAB_1439133b7;
LAB_143912f01:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_1439133b7;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1439133b7;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar1 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar1;
      if (puVar10 != (uint *)0x0) goto LAB_1439130ee;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_14391c555);
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
        *puVar1 = puVar9;
        FUN_140217a48(puVar1);
        puVar10 = (uint *)*puVar1;
LAB_1439130ee:
        puVar15 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar15 + 0x1b);
        uVar12 = puVar10[0x12];
        if (puVar14 <= puVar10 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
          LOCK();
          uVar3 = *puVar10;
          *puVar10 = *puVar10 + uVar12 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar12) != 0xffffffff) break;
          puVar10 = (uint *)*puVar1;
          *puVar10 = 0xffffffff;
          *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar1 = puVar10;
          puVar15 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar15 + 0x1b);
          uVar12 = 0;
          if (puVar14 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_14391316e;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_14391316e:
      *(uint **)(puVar10 + 0x10) = puVar14;
      puVar10[0x12] = uVar12;
      FUN_1447247dc(puVar15,0);
      *puVar15 = &PTR_FUN_14ad88eb0;
      *(undefined4 *)(puVar15 + 0x15) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar15 + 0xac) = local_a8._4_4_;
      *(undefined4 *)(puVar15 + 0x16) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar15 + 0xb4) = uStack_a0._4_4_;
      *(undefined1 *)((longlong)puVar15 + 0xbc) = local_94;
      *(undefined4 *)(puVar15 + 0x17) = local_98;
      *(char *)((longlong)puVar15 + 0xc4) = local_8c;
      if (local_8c == '\x01') {
        *(undefined4 *)(puVar15 + 0x18) = local_90;
      }
      puVar15[0x19] = local_88;
      iVar6 = 0;
      local_88 = 0;
      *(undefined4 *)(puVar15 + 0x1a) = (undefined4)local_80;
      *(undefined4 *)((longlong)puVar15 + 0xd4) = local_80._4_4_;
      local_80 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
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
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar5 = 1;
        if ((char)uVar17 != '\x06') {
          uVar5 = uVar17;
        }
        uVar17 = uVar5;
        uVar11 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar15[0xf] = uVar11;
      puVar15[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar15 + 0x1c) = iVar6;
      if (puVar15 == (undefined8 *)0x0) {
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar15 + 1) = *(int *)(puVar15 + 1) + 1;
        UNLOCK();
        local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
        FUN_1447439e4(puVar15);
        LOCK();
        piVar2 = (int *)(puVar15 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar15)(puVar15,1);
        }
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_68 = (longlong *)FUN_14001cc68(0x38,8);
      *local_68 = (longlong)&PTR_LAB_14ad88e90;
      *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
      *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a0._4_4_;
      *(undefined1 *)((longlong)local_68 + 0x1c) = local_94;
      *(undefined4 *)(local_68 + 3) = local_98;
      *(char *)((longlong)local_68 + 0x24) = local_8c;
      if (local_8c == '\x01') {
        *(undefined4 *)(local_68 + 4) = local_90;
      }
      local_68[5] = local_88;
      local_88 = 0;
      *(undefined4 *)(local_68 + 6) = (undefined4)local_80;
      *(undefined4 *)((longlong)local_68 + 0x34) = local_80._4_4_;
      local_80 = 0;
      if (local_68 != (longlong *)&DAT_fffffffffffffff8) {
        local_78[0] = FUN_14391d8c2;
      }
      local_c8 = local_78;
      FUN_14005a792(&DAT_14ca9a440,L"FNDIMemoryBuffer_UpdateData",&DAT_14cb38c60);
      if (local_78[0] != (code *)0x0) {
        plVar13 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar13 = local_58;
        }
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
LAB_143913022:
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143913486 FUN_143913486 body=127 status=ok
// SIG undefined FUN_143913486(void)

void FUN_143913486(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)
           FUN_1480b6f48(param_1 + 0x10,(int)((ulonglong)*param_3 >> 0x20) * 0x17 + (int)*param_3);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *param_2;
    uVar1 = param_2[2];
    puVar2[1] = param_2[1];
    puVar2[2] = uVar1;
    puVar2[3] = param_2[3];
    uVar1 = param_2[5];
    puVar2[4] = param_2[4];
    puVar2[5] = uVar1;
    puVar2[6] = param_2[6];
    memcpy(puVar2 + 8,param_2 + 8,0xe8e0);
    *(undefined4 *)(puVar2 + 0x1d24) = *(undefined4 *)(param_2 + 0x1d24);
  }
  return;
}



// FUNCTION 143913506 FUN_143913506 body=70 status=ok
// SIG undefined FUN_143913506(void)

bool FUN_143913506(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 14391355c FUN_14391355c body=2428 status=ok
// SIG undefined FUN_14391355c(void)

void FUN_14391355c(longlong param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  uint *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int *piVar17;
  longlong *plVar18;
  undefined1 auStack_b8 [32];
  code **local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar2 = (longlong *)*param_2;
  if (plVar2 == (longlong *)0x0) {
    piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
  }
  else {
    piVar17 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    iVar4 = *piVar17;
    if (DAT_14c86a9fc == 0) {
      if (iVar4 != 2) {
        if (iVar4 != 1) goto LAB_1439135b3;
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_1439135b8;
        goto LAB_14391360d;
      }
LAB_1439135b8:
      (**(code **)(*plVar2 + 0x20))(plVar2);
      puVar7 = (undefined8 *)*plVar2;
      plVar18 = plVar2;
LAB_1439135c7:
      (*(code *)*puVar7)(plVar18,1);
    }
    else {
LAB_1439135b3:
      if (iVar4 == 0x10) goto LAB_1439135b8;
LAB_14391360d:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (*piVar17 == 2)) goto LAB_1439135b8;
        if (*piVar17 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 == DVar6) goto LAB_1439135b8;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar7 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar7;
        if (puVar10 != (uint *)0x0) goto LAB_14391379e;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_14391c555);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar7 = puVar9;
          FUN_140217a48(puVar7);
          puVar10 = (uint *)*puVar7;
LAB_14391379e:
          plVar18 = (longlong *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar14 = (uint *)(plVar18 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar14 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar1 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar1 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar7;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar7 = puVar10;
            plVar18 = (longlong *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar14 = (uint *)(plVar18 + 0x16);
            uVar12 = 0;
            if (puVar14 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_143913820;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_143913820:
        *(uint **)(puVar10 + 0x10) = puVar14;
        puVar10[0x12] = uVar12;
        iVar4 = 0;
        FUN_1447247dc(plVar18,0);
        *plVar18 = (longlong)&PTR_FUN_14ad88ee0;
        plVar18[0x15] = (longlong)plVar2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar4 = 0;
          }
          else {
            uVar15 = 2;
          }
        }
        else {
          iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar15 = 5;
        }
        if (*(code **)(plVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar18[0xe] + 0x18))(plVar18 + 0xe,plVar18 + 9);
        }
        plVar18[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar18[9] = (longlong)plVar18;
        plVar18[10] = (longlong)plVar18;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar3 = 1;
          if ((char)uVar15 != '\x06') {
            uVar3 = uVar15;
          }
          uVar15 = uVar3;
          lVar8 = 0;
        }
        else {
          if ((char)uVar15 == '\x06') {
            uVar15 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          lVar8 = *(longlong *)(lVar8 + 0x30);
        }
        plVar18[0xf] = lVar8;
        plVar18[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)plVar18 + 0x1c) = iVar4;
        if (plVar18 == (longlong *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
          goto LAB_14391369f;
        }
        LOCK();
        *(int *)(plVar18 + 1) = (int)plVar18[1] + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(plVar18);
        LOCK();
        plVar2 = plVar18 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 != 0) goto LAB_14391369f;
        puVar7 = (undefined8 *)*plVar18;
        goto LAB_1439135c7;
      }
      local_98 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14ad88ec0;
      local_88[0] = FUN_14391db2c;
      local_60 = plVar2;
      FUN_14005a792(&DAT_14ca9a440,L"DeleteResource",&DAT_14cb38c64);
      if (local_88[0] != (code *)0x0) {
        pppuVar13 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar13 = &local_68;
        }
        (*(code *)(*pppuVar13)[2])();
      }
    }
LAB_14391369f:
    *param_2 = 0;
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  iVar4 = *piVar17;
  if (DAT_14c86a9fc == 0) {
    if (iVar4 == 2) goto LAB_1439136cb;
    if (iVar4 != 1) goto LAB_1439136c2;
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    if (DVar5 == DVar6) goto LAB_1439136cb;
  }
  else {
LAB_1439136c2:
    if (iVar4 == 0x10) goto LAB_1439136cb;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (*piVar17 == 2)) {
LAB_1439136cb:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    if (*piVar17 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1439136cb;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar7 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar10 = (uint *)*puVar7;
    if (puVar10 != (uint *)0x0) goto LAB_143913b9a;
    while( true ) {
      uVar12 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar12 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar12 | 1;
        __tlregdtor(&LAB_14391c555);
      }
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar9 = *(undefined4 **)(lVar8 + 0x310);
      *(undefined8 *)(lVar8 + 0x310) = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar7 = puVar9;
      FUN_140217a48(puVar7);
      puVar10 = (uint *)*puVar7;
LAB_143913b9a:
      puVar16 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar14 = (uint *)(puVar16 + 0x17);
      uVar12 = puVar10[0x12];
      if (puVar14 <= puVar10 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
        LOCK();
        uVar1 = *puVar10;
        *puVar10 = *puVar10 + uVar12 + 1;
        UNLOCK();
        if ((uVar1 ^ uVar12) != 0xffffffff) break;
        puVar10 = (uint *)*puVar7;
        *puVar10 = 0xffffffff;
        *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar7 = puVar10;
        puVar16 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar16 + 0x17);
        uVar12 = 0;
        if (puVar14 <= puVar10 + 0x4000) {
          uVar12 = 1;
          goto LAB_143913c1a;
        }
      }
    }
    uVar12 = uVar12 + 1;
LAB_143913c1a:
    *(uint **)(puVar10 + 0x10) = puVar14;
    puVar10[0x12] = uVar12;
    iVar4 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad88f10;
    puVar16[0x15] = plVar2;
    puVar16[0x16] = uVar11;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar12 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
        uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
        iVar4 = 0;
      }
      else {
        uVar15 = 2;
      }
    }
    else {
      iVar4 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
    lVar8 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar8 == 0) {
      uVar3 = 1;
      if ((char)uVar15 != '\x06') {
        uVar3 = uVar15;
      }
      uVar15 = uVar3;
      uVar11 = 0;
    }
    else {
      if ((char)uVar15 == '\x06') {
        uVar15 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
      }
      uVar11 = *(undefined8 *)(lVar8 + 0x30);
    }
    puVar16[0xf] = uVar11;
    puVar16[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar4;
    if (puVar16 == (undefined8 *)0x0) {
      local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar17 = (int *)(puVar16 + 1);
      *piVar17 = *piVar17 + -1;
      UNLOCK();
      if (*piVar17 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_98 = local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14ad88ef0;
    local_88[0] = (code *)&LAB_14391dd7e;
    local_60 = plVar2;
    local_58 = uVar11;
    FUN_14005a792(&DAT_14ca9a440,L"FNiagaraDIDestroyInstanceData",&DAT_14cb38c68);
    if (local_88[0] != (code *)0x0) {
      pppuVar13 = local_78;
      if (local_78 == (undefined ***)0x0) {
        pppuVar13 = &local_68;
      }
      (*(code *)(*pppuVar13)[2])();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143913ef4 FUN_143913ef4 body=55 status=ok
// SIG undefined FUN_143913ef4(void)

void FUN_143913ef4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb38108 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb38108 = FUN_14171c317(FUN_14646a407,uVar1,L"ENDISceneCapture2DSourceMode");
  }
  return;
}



// FUNCTION 143913f2b FUN_143913f2b body=55 status=ok
// SIG undefined FUN_143913f2b(void)

void FUN_143913f2b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb38120 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb38120 = FUN_14171c317(FUN_14646a436,uVar1,L"ENDISceneCapture2DOffsetMode");
  }
  return;
}



// FUNCTION 143913f62 FUN_143913f62 body=1583 status=ok
// SIG undefined FUN_143913f62(void)

ulonglong FUN_143913f62(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  longlong lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  longlong *plVar19;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2 + 0x100) != 0) {
    FUN_1400020a8();
  }
  lVar14 = *(longlong *)(param_1 + 0x28);
  uVar11 = *(undefined8 *)(param_3 + 0x100);
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar15 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_143913fc8;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1439144ec;
      goto LAB_143913fd1;
    }
LAB_1439144ec:
    uVar8 = FUN_1480b7e22(lVar14 + 0x10,uVar11);
  }
  else {
LAB_143913fc8:
    if (iVar5 == 0x10) goto LAB_1439144ec;
LAB_143913fd1:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar15 + 0xc60), iVar5 == 2))
      goto LAB_1439144ec;
      if (iVar5 == 1) {
        DVar6 = FUN_140ad26c0();
        DVar7 = GetCurrentThreadId();
        if (DVar6 == DVar7) goto LAB_1439144ec;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar10 = (uint *)*puVar2;
      if (puVar10 != (uint *)0x0) goto LAB_1439141c0;
      while( true ) {
        uVar12 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar12 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar12 | 1;
          __tlregdtor(&LAB_14391c555);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar9 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar9 = 0xffffffff;
        *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
        puVar9[0x12] = 0;
        *puVar2 = puVar9;
        FUN_140217a48(puVar2);
        puVar10 = (uint *)*puVar2;
LAB_1439141c0:
        puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar17 + 0x17);
        uVar12 = puVar10[0x12];
        if (puVar16 <= puVar10 + 0x4000) break;
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
          puVar16 = (uint *)(puVar17 + 0x17);
          uVar12 = 0;
          if (puVar16 <= puVar10 + 0x4000) {
            uVar12 = 1;
            goto LAB_143914242;
          }
        }
      }
      uVar12 = uVar12 + 1;
LAB_143914242:
      *(uint **)(puVar10 + 0x10) = puVar16;
      puVar10[0x12] = uVar12;
      iVar5 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14ad88f70;
      puVar17[0x15] = lVar14;
      puVar17[0x16] = uVar11;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar12 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
          uVar8 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
          iVar5 = 0;
        }
        else {
          uVar8 = 2;
        }
      }
      else {
        iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar8 = 5;
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
      lVar14 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar14 == 0) {
        uVar4 = 1;
        if ((char)uVar8 != '\x06') {
          uVar4 = uVar8;
        }
        uVar8 = uVar4;
        uVar11 = 0;
      }
      else {
        if ((char)uVar8 == '\x06') {
          uVar8 = *(ulonglong *)(lVar14 + 0x38) >> 0x3b;
        }
        uVar11 = *(undefined8 *)(lVar14 + 0x30);
      }
      puVar17[0xf] = uVar11;
      puVar17[0x10] = uVar8 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar5;
      if (puVar17 == (undefined8 *)0x0) {
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        uVar8 = FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
        uVar8 = FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          uVar8 = (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_88 = local_78;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14ad88f50;
      local_78[0] = &LAB_14391df62;
      local_50 = lVar14;
      local_48 = uVar11;
      uVar8 = FUN_14005a792(&DAT_14ca9a440,L"NDITexture_RemoveInstance",&DAT_14cb38cf4);
      if (local_78[0] != (undefined1 *)0x0) {
        pppuVar13 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar13 = &local_58;
        }
        uVar8 = (*(code *)(*pppuVar13)[2])();
      }
    }
  }
  if ((*(char *)(param_1 + 0x38) == '\x03') &&
     (uVar8 = (ulonglong)*(uint *)(param_1 + 0xe0),
     *(uint *)(param_1 + 0xe0) != *(uint *)(param_1 + 0x10c))) {
    uVar8 = *(ulonglong *)(param_3 + 0x100);
    lVar14 = param_1 + 0x110;
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x118);
    }
    iVar5 = *(int *)(lVar14 + (ulonglong)
                              (*(int *)(param_1 + 0x120) - 1U &
                              (int)uVar8 + (int)(uVar8 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      plVar19 = (longlong *)(param_1 + 0xd8);
      lVar14 = *plVar19;
      do {
        lVar15 = (longlong)iVar5;
        if (*(ulonglong *)(lVar14 + lVar15 * 0x18) == uVar8) {
          plVar18 = (longlong *)(lVar14 + lVar15 * 0x18 + 8);
          if (DAT_14c950c29 == '\x01') {
            if (*plVar18 == 0) {
              uVar8 = FUN_1480b7f18(plVar19,iVar5);
              break;
            }
            FUN_1456cec3c();
          }
          lVar14 = *plVar18;
          uVar8 = FUN_1480b7f18(plVar19,iVar5);
          if ((lVar14 != 0) &&
             (uVar8 = (ulonglong)*(uint *)(lVar14 + 8), (*(uint *)(lVar14 + 8) >> 0x1e & 1) == 0)) {
            FUN_1401bf202(lVar14);
            FUN_144757f48(lVar14,0x40000000);
            uVar12 = *(uint *)(lVar14 + 0xc);
            if ((int)uVar12 < DAT_14c9647dc) {
              lVar14 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
            }
            else {
              lVar14 = 0;
            }
            goto LAB_1439144c6;
          }
          break;
        }
        iVar5 = *(int *)(lVar14 + lVar15 * 0x18 + 0x10);
      } while (iVar5 != -1);
    }
  }
LAB_1439140f4:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    LOCK();
    uVar3 = *(uint *)(lVar14 + 8);
    if (uVar12 == uVar3) {
      *(uint *)(lVar14 + 8) = uVar12 | 0x200000;
    }
    else {
      uVar8 = (ulonglong)uVar3;
    }
    UNLOCK();
    if (uVar12 == uVar3) break;
LAB_1439144c6:
    uVar12 = *(uint *)(lVar14 + 8);
    uVar8 = (ulonglong)uVar12;
    if ((uVar12 >> 0x15 & 1) != 0) break;
  }
  goto LAB_1439140f4;
}



// FUNCTION 143914592 FUN_143914592 body=2038 status=ok
// SIG undefined FUN_143914592(void)

undefined8 FUN_143914592(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  ulonglong uVar19;
  int iVar20;
  DWORD DVar21;
  DWORD DVar22;
  undefined4 *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong *plVar28;
  uint *puVar29;
  ulonglong uVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  undefined8 uVar33;
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  double dStack_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  double dStack_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(int *)(param_2 + 0x11c) == 0) {
LAB_14391465f:
    uVar33 = 0;
  }
  else {
    uVar26 = *(uint *)(param_2 + 0x118);
    uVar33 = 0;
    if ((-1 < (int)uVar26) && ((int)uVar26 < DAT_14c9647dc)) {
      plVar28 = (longlong *)
                ((ulonglong)((uVar26 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar26 >> 0x10) * 8));
      if ((plVar28 == (longlong *)0x0) ||
         ((((int)plVar28[2] != *(int *)(param_2 + 0x11c) ||
           ((*(uint *)(plVar28 + 1) & 0x10200000) != 0)) || (lVar5 = *plVar28, lVar5 == 0))))
      goto LAB_14391465f;
      uVar33 = *(undefined8 *)(lVar5 + 0x3a8);
      if (*(char *)(param_2 + 0x121) == '\x01') {
        fVar2 = *(float *)(param_3 + 0x14);
        fVar3 = *(float *)(param_3 + 0x10);
        fVar4 = *(float *)(param_3 + 0xc);
        puVar31 = (undefined8 *)(lVar5 + 0x240);
        puVar32 = (undefined8 *)local_e8;
        for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
          *puVar32 = *puVar31;
          puVar31 = puVar31 + 1;
          puVar32 = puVar32 + 1;
        }
        dStack_b8 = (double)*(float *)(param_2 + 300) + (double)fVar2 * 65536.0;
        dVar35 = (double)*(float *)(param_2 + 0x128) + (double)fVar3 * 65536.0;
        dVar16 = (double)*(float *)(param_2 + 0x124) + (double)fVar4 * 65536.0;
        local_c8._8_4_ = SUB84(dVar35,0);
        local_c8._0_8_ = dVar16;
        local_c8._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
        uStack_b0 = 0;
        dVar7 = (double)*(float *)(param_2 + 0x13c);
        dVar8 = (double)*(float *)(param_2 + 0x138);
        dVar13 = (double)*(float *)(param_2 + 0x134);
        dVar10 = (double)*(float *)(param_2 + 0x130);
        local_e8._8_4_ = SUB84(dVar13,0);
        local_e8._0_8_ = dVar10;
        local_e8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
        local_d8._8_4_ = SUB84(dVar7,0);
        local_d8._0_8_ = dVar8;
        local_d8._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
        lVar27 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x268) - dVar35));
        auVar14._8_4_ = (int)lVar27;
        auVar14._0_8_ =
             -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x260) - dVar16));
        auVar14._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        iVar20 = movmskpd((int)local_e8,auVar14);
        lVar27 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x278) - 0.0));
        auVar11._8_4_ = (int)lVar27;
        auVar11._0_8_ =
             -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x270) - dStack_b8));
        auVar11._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
        uVar26 = movmskpd(0,auVar11);
        if ((uVar26 & 0x3fffffff) == 0 && iVar20 == 0) {
          lVar27 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x248) - dVar13));
          auVar17._8_4_ = (int)lVar27;
          auVar17._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x240) - dVar10));
          auVar17._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          uVar26 = movmskpd(iVar20,auVar17);
          lVar27 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 600) - dVar7));
          auVar15._8_4_ = (int)lVar27;
          auVar15._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x250) - dVar8));
          auVar15._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          iVar20 = movmskpd(0,auVar15);
          uVar25 = iVar20 << 2 | uVar26;
          if (uVar25 != 0) {
            lVar27 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar13 + *(double *)(lVar5 + 0x248)));
            auVar12._8_4_ = (int)lVar27;
            auVar12._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(dVar10 + *(double *)(lVar5 + 0x240)));
            auVar12._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
            uVar26 = movmskpd(uVar26,auVar12);
            lVar27 = -(ulonglong)(9.999999747378752e-05 < ABS(dVar7 + *(double *)(lVar5 + 600)));
            auVar9._8_4_ = (int)lVar27;
            auVar9._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 < ABS(dVar8 + *(double *)(lVar5 + 0x250)));
            auVar9._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
            uVar25 = movmskpd(uVar25,auVar9);
            if ((uVar25 & 0x3fffffff) != 0 || uVar26 != 0) goto LAB_1439148ac;
          }
          lVar27 = -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x288) - dStack_a0))
          ;
          auVar6._8_4_ = (int)lVar27;
          auVar6._0_8_ = -(ulonglong)
                          (9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x280) - local_a8));
          auVar6._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          iVar20 = movmskpd(uVar26,auVar6);
          auVar34._8_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x298) - dStack_90));
          auVar34._0_8_ =
               -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(lVar5 + 0x290) - local_98));
          uVar26 = movmskpd(0,auVar34);
          if ((uVar26 & 0x3fffffff) != 0 || iVar20 != 0) goto LAB_1439148ac;
        }
        else {
LAB_1439148ac:
          local_108 = (undefined1 *)((ulonglong)local_108 & 0xffffffffffffff00);
          FUN_140613f88(lVar5,local_e8,0,0);
        }
        FUN_148097736(param_2,param_4,param_3,lVar5);
      }
      if (*(char *)(param_2 + 0x120) == '\x01') {
        FUN_140c70b2a(lVar5);
      }
    }
  }
  *(undefined2 *)(param_2 + 0x120) = 0;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_1439149b0;
  local_100 = *(undefined8 *)(param_1 + 0x28);
  dStack_f8 = *(double *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar20 = *(int *)(lVar5 + 0xc60);
  local_f0 = uVar33;
  if (DAT_14c86a9fc == 0) {
    if (iVar20 != 2) {
      if (iVar20 != 1) goto LAB_1439146b7;
      DVar21 = FUN_140ad26c0();
      DVar22 = GetCurrentThreadId();
      if (DVar21 == DVar22) goto LAB_1439146c0;
      goto LAB_143914901;
    }
  }
  else {
LAB_1439146b7:
    if (iVar20 != 0x10) {
LAB_143914901:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar20 = *(int *)(lVar5 + 0xc60), iVar20 == 2))
        goto LAB_1439146c0;
        if (iVar20 == 1) {
          DVar21 = FUN_140ad26c0();
          DVar22 = GetCurrentThreadId();
          if (DVar21 == DVar22) goto LAB_1439146c0;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar31 = (undefined8 *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x308);
        puVar24 = (uint *)*puVar31;
        if (puVar24 != (uint *)0x0) goto LAB_143914aa1;
        while( true ) {
          uVar26 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar26 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar26 | 1;
            __tlregdtor(&LAB_14391c555);
          }
          lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar23 = *(undefined4 **)(lVar5 + 0x310);
          *(undefined8 *)(lVar5 + 0x310) = 0;
          if (puVar23 == (undefined4 *)0x0) {
            puVar23 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar23 = 0xffffffff;
          *(undefined4 **)(puVar23 + 0x10) = puVar23 + 0x16;
          puVar23[0x12] = 0;
          *puVar31 = puVar23;
          FUN_140217a48(puVar31);
          puVar24 = (uint *)*puVar31;
LAB_143914aa1:
          puVar32 = (undefined8 *)(*(longlong *)(puVar24 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar29 = (uint *)(puVar32 + 0x18);
          uVar26 = puVar24[0x12];
          if (puVar29 <= puVar24 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar24 + 0x10) = puVar24 + 0x4000;
            LOCK();
            uVar25 = *puVar24;
            *puVar24 = *puVar24 + uVar26 + 1;
            UNLOCK();
            if ((uVar25 ^ uVar26) != 0xffffffff) break;
            puVar24 = (uint *)*puVar31;
            *puVar24 = 0xffffffff;
            *(uint **)(puVar24 + 0x10) = puVar24 + 0x16;
            puVar24[0x12] = 0;
            *puVar31 = puVar24;
            puVar32 = (undefined8 *)((longlong)puVar24 + 0x5fU & 0xfffffffffffffff8);
            puVar29 = (uint *)(puVar32 + 0x18);
            uVar26 = 0;
            if (puVar29 <= puVar24 + 0x4000) {
              uVar26 = 1;
              goto LAB_143914b21;
            }
          }
        }
        uVar26 = uVar26 + 1;
LAB_143914b21:
        *(uint **)(puVar24 + 0x10) = puVar29;
        puVar24[0x12] = uVar26;
        iVar20 = 0;
        FUN_1447247dc(puVar32,0);
        *puVar32 = &PTR_FUN_14ad88fe8;
        puVar32[0x15] = local_100;
        puVar32[0x16] = dStack_f8;
        puVar32[0x17] = local_f0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar26 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar26 < 2) {
            uVar30 = (ulonglong)(byte)(&DAT_149e38edc)[uVar26];
            iVar20 = 0;
          }
          else {
            uVar30 = 2;
          }
        }
        else {
          iVar20 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar30 = 5;
        }
        if (*(code **)(puVar32[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar32[0xe] + 0x18))(puVar32 + 0xe,puVar32 + 9);
        }
        puVar32[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar32[9] = puVar32;
        puVar32[10] = puVar32;
        lVar5 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar5 == 0) {
          uVar19 = 1;
          if ((char)uVar30 != '\x06') {
            uVar19 = uVar30;
          }
          uVar30 = uVar19;
          uVar33 = 0;
        }
        else {
          if ((char)uVar30 == '\x06') {
            uVar30 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
          }
          uVar33 = *(undefined8 *)(lVar5 + 0x30);
        }
        puVar32[0xf] = uVar33;
        puVar32[0x10] = uVar30 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar32 + 0x1c) = iVar20;
        if (puVar32 == (undefined8 *)0x0) {
          local_e8[0] = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
          UNLOCK();
          local_e8[0] = 1;
          FUN_1447439e4(puVar32);
          LOCK();
          piVar1 = (int *)(puVar32 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar32)(puVar32,1);
          }
        }
      }
      else {
        local_108 = local_e8;
        auVar18._8_8_ = 0;
        auVar18._0_8_ = local_d8._8_8_;
        local_d8 = auVar18 << 0x40;
        local_c8._8_8_ = local_100;
        local_c8._0_8_ = &PTR_LAB_14ad88f80;
        dStack_b8 = dStack_f8;
        uStack_b0 = local_f0;
        local_e8._0_8_ = &LAB_14391e374;
        FUN_14005a792(&DAT_14ca9a440,L"NDISceneCapture2D_UpdateInstance",&DAT_14cb38cf8);
        if (local_e8._0_8_ != 0) {
          plVar28 = (longlong *)local_d8._0_8_;
          if ((longlong *)local_d8._0_8_ == (longlong *)0x0) {
            plVar28 = (longlong *)local_c8;
          }
          (**(code **)(*plVar28 + 0x10))();
        }
      }
      goto LAB_1439149b0;
    }
  }
LAB_1439146c0:
  FUN_14391e13a(&local_100);
LAB_1439149b0:
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143914d8a FUN_143914d8a body=1269 status=ok
// SIG undefined FUN_143914d8a(void)

void FUN_143914d8a(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_143914e9e;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_1439151da;
    if (iVar7 != 1) goto LAB_143914df2;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1439151da;
  }
  else {
LAB_143914df2:
    if (iVar7 == 0x10) goto LAB_1439151da;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_1439151da:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1439151da;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143914f5f;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14391c555);
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
LAB_143914f5f:
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
          goto LAB_143914fdf;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143914fdf:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad890e8;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_48 = &PTR_LAB_14ad89090;
    local_68[0] = &LAB_14391e530;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"NDISimCacheReader_DestroyRT",&DAT_14cb38d84);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_143914e9e:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143915294 FUN_143915294 body=3614 status=ok
// SIG undefined FUN_143915294(void)

undefined8 FUN_143915294(longlong param_1,uint *param_2,longlong param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  uint uVar17;
  longlong *plVar18;
  undefined ***pppuVar19;
  uint *puVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_158 [32];
  code **local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  uint local_120;
  undefined **local_118;
  undefined **ppuStack_110;
  undefined **local_108;
  undefined8 uStack_100;
  undefined **local_f8;
  undefined **ppuStack_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  uint *local_d0;
  code *local_c8;
  undefined8 local_b8;
  undefined **local_a8;
  longlong *local_a0;
  uint **local_98;
  undefined ***local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar17 = *param_2;
  local_d0 = param_2;
  if ((ulonglong)uVar17 == 0xffffffff) {
    lVar21 = *(longlong *)(param_1 + 0x58);
  }
  else {
    if (((-1 < (int)uVar17) && ((int)uVar17 < *(int *)(*(longlong *)(param_2 + 2) + 0x48))) &&
       (lVar21 = *(longlong *)
                  (*(longlong *)(*(longlong *)(param_2 + 2) + 0x40) + (ulonglong)uVar17 * 8),
       lVar21 != 0)) {
      lVar13 = FUN_14110c9fe();
      if ((*(int *)(lVar13 + 0x38) <= *(int *)(*(longlong *)(lVar21 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar13 + 0x38) * 8) == lVar13 + 0x30)) goto LAB_14391531b;
    }
    lVar21 = 0;
  }
LAB_14391531b:
  if (param_2[0xf] == 0) {
LAB_1439154d1:
    lVar13 = 0;
  }
  else {
    uVar17 = param_2[0xe];
    lVar13 = 0;
    if ((-1 < (int)uVar17) && ((int)uVar17 < DAT_14c9647dc)) {
      plVar18 = (longlong *)
                ((ulonglong)((uVar17 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
      if ((plVar18 == (longlong *)0x0) ||
         ((*(uint *)(plVar18 + 2) != param_2[0xf] || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0))))
      goto LAB_1439154d1;
      lVar13 = *plVar18;
    }
  }
  local_d8 = lVar21;
  if (lVar13 == lVar21) {
    if ((lVar21 != 0) || (param_2[0x10] = 0xffffffff, (*(byte *)(param_1 + 0x30) & 4) == 0))
    goto LAB_143915e2f;
    lVar21 = *(longlong *)(param_1 + 0x28);
    uVar15 = *(undefined8 *)(param_3 + 0x100);
    lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar10 = *(int *)(lVar13 + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar10 != 2) {
        if (iVar10 != 1) goto LAB_1439153cc;
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143915e20;
        goto LAB_1439153d5;
      }
    }
    else {
LAB_1439153cc:
      if (iVar10 != 0x10) {
LAB_1439153d5:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar13 + 0xc60), iVar10 == 2))
          goto LAB_143915e20;
          if (iVar10 == 1) {
            DVar11 = FUN_140ad26c0();
            DVar12 = GetCurrentThreadId();
            if (DVar11 == DVar12) goto LAB_143915e20;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar4 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar16 = (uint *)*puVar4;
          if (puVar16 != (uint *)0x0) goto LAB_143915578;
          while( true ) {
            uVar17 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar17 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar17 | 1;
              __tlregdtor(&LAB_14391c555);
            }
            lVar13 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar14 = *(undefined4 **)(lVar13 + 0x310);
            *(undefined8 *)(lVar13 + 0x310) = 0;
            if (puVar14 == (undefined4 *)0x0) {
              puVar14 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar14 = 0xffffffff;
            *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar4 = puVar14;
            FUN_140217a48(puVar4);
            puVar16 = (uint *)*puVar4;
LAB_143915578:
            puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar20 = (uint *)(puVar23 + 0x17);
            uVar17 = puVar16[0x12];
            if (puVar20 <= puVar16 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
              LOCK();
              uVar22 = *puVar16;
              *puVar16 = *puVar16 + uVar17 + 1;
              UNLOCK();
              if ((uVar22 ^ uVar17) != 0xffffffff) break;
              puVar16 = (uint *)*puVar4;
              *puVar16 = 0xffffffff;
              *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
              puVar16[0x12] = 0;
              *puVar4 = puVar16;
              puVar23 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
              puVar20 = (uint *)(puVar23 + 0x17);
              uVar17 = 0;
              if (puVar20 <= puVar16 + 0x4000) {
                uVar17 = 1;
                goto LAB_1439155f8;
              }
            }
          }
          uVar17 = uVar17 + 1;
LAB_1439155f8:
          *(uint **)(puVar16 + 0x10) = puVar20;
          puVar16[0x12] = uVar17;
          iVar10 = 0;
          FUN_1447247dc(puVar23,0);
          *puVar23 = &PTR_FUN_14ad891b0;
          puVar23[0x15] = lVar21;
          puVar23[0x16] = uVar15;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar17 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
              uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
              iVar10 = 0;
            }
            else {
              uVar24 = 2;
            }
          }
          else {
            iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar24 = 5;
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
          lVar21 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar21 == 0) {
            uVar9 = 1;
            if ((char)uVar24 != '\x06') {
              uVar9 = uVar24;
            }
            uVar24 = uVar9;
            uVar15 = 0;
          }
          else {
            if ((char)uVar24 == '\x06') {
              uVar24 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
            }
            uVar15 = *(undefined8 *)(lVar21 + 0x30);
          }
          puVar23[0xf] = uVar15;
          puVar23[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar23 + 0x1c) = iVar10;
          if (puVar23 == (undefined8 *)0x0) {
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
            UNLOCK();
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(puVar23);
            LOCK();
            piVar2 = (int *)(puVar23 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar23)(puVar23,1);
            }
          }
        }
        else {
          local_138 = local_88;
          local_78 = (undefined ***)0x0;
          local_68 = &PTR_LAB_14ad89190;
          local_88[0] = (code *)&LAB_14391ebd6;
          local_60 = lVar21;
          local_58 = uVar15;
          FUN_14005a792(&DAT_14ca9a440,L"NDISimCacheReader_DestroyRT",&DAT_14cb38d8c);
          if (local_88[0] != (code *)0x0) {
            pppuVar19 = local_78;
            if (local_78 == (undefined ***)0x0) {
              pppuVar19 = &local_68;
            }
            (*(code *)(*pppuVar19)[2])();
          }
        }
        goto LAB_143915e2f;
      }
    }
LAB_143915e20:
    FUN_1480b8b0e(lVar21 + 0x10,uVar15);
    goto LAB_143915e2f;
  }
  uVar17 = 0xffffffff;
  if ((*(longlong *)(lVar21 + 0x40) != 0) && (0 < (longlong)*(int *)(lVar21 + 0x188))) {
    plVar18 = *(longlong **)(lVar21 + 0x180);
    lVar13 = 0;
    do {
      if (*plVar18 == *(longlong *)(param_1 + 0x60)) {
        uVar17 = (uint)lVar13;
        break;
      }
      lVar13 = lVar13 + 1;
      plVar18 = plVar18 + 0x17;
    } while (*(int *)(lVar21 + 0x188) != lVar13);
  }
  param_2[0x10] = uVar17;
  local_90 = &local_e8;
  local_e8 = (undefined **)0x0;
  uStack_e0 = 0;
  local_b8 = 0;
  local_a8 = &PTR_LAB_14ad89100;
  local_a0 = &local_d8;
  local_98 = &local_d0;
  local_c8 = FUN_14391e708;
  FUN_140bb9115(param_1,param_3);
  uVar17 = 4;
  if ((int)uStack_e0 != 0) {
    uVar17 = (int)uStack_e0 + 3U & 0xfffffffc;
  }
  iVar10 = uVar17 - (int)uStack_e0;
  if (iVar10 != 0 && (int)uStack_e0 <= (int)uVar17) {
    do {
      uVar24 = uStack_e0;
      lVar21 = (longlong)(int)uStack_e0;
      uVar17 = (int)uStack_e0 + 1;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar17);
      if (uStack_e0._4_4_ < uVar17) {
        FUN_1446f48e2(&local_e8,uVar24 & 0xffffffff);
      }
      *(undefined4 *)((longlong)local_e8 + lVar21 * 4) = 0xffffffff;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_1481f46de(&local_f8,local_d8);
  local_130 = *(longlong *)(param_1 + 0x28);
  uStack_128 = *(undefined8 *)(param_3 + 0x100);
  local_120 = local_d0[0x10];
  local_118 = local_f8;
  ppuStack_110 = ppuStack_f0;
  local_f8 = (undefined **)0x0;
  ppuStack_f0 = (undefined **)0x0;
  local_108 = local_e8;
  uStack_100 = uStack_e0;
  local_e8 = (undefined **)0x0;
  uStack_e0 = 0;
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar21 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14391578f;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143915f3d;
      goto LAB_143915798;
    }
LAB_143915f3d:
    puVar16 = (uint *)FUN_1480b8ce6(local_130 + 0x10,
                                    (int)((ulonglong)uStack_128 >> 0x20) * 0x17 + (int)uStack_128,
                                    &uStack_128);
    if (ppuStack_110 != (undefined **)0x0) {
      LOCK();
      *(int *)(ppuStack_110 + 1) = *(int *)(ppuStack_110 + 1) + 1;
      UNLOCK();
    }
    plVar18 = *(longlong **)(puVar16 + 4);
    *(undefined ***)(puVar16 + 2) = local_118;
    *(undefined ***)(puVar16 + 4) = ppuStack_110;
    if (plVar18 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar18 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar2 = (int *)((longlong)plVar18 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar18 + 0x10))(plVar18);
        }
      }
    }
    *puVar16 = local_120;
    FUN_14054c6c4(puVar16 + 6,&local_108);
  }
  else {
LAB_14391578f:
    if (iVar10 == 0x10) goto LAB_143915f3d;
LAB_143915798:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar21 + 0xc60), iVar10 == 2))
      goto LAB_143915f3d;
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        if (DVar11 == DVar12) goto LAB_143915f3d;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar4 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar16 = (uint *)*puVar4;
      if (puVar16 != (uint *)0x0) goto LAB_143915b56;
      while( true ) {
        uVar17 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar17 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar17 | 1;
          __tlregdtor(&LAB_14391c555);
        }
        lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar14 = *(undefined4 **)(lVar21 + 0x310);
        *(undefined8 *)(lVar21 + 0x310) = 0;
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar14 = 0xffffffff;
        *(undefined4 **)(puVar14 + 0x10) = puVar14 + 0x16;
        puVar14[0x12] = 0;
        *puVar4 = puVar14;
        FUN_140217a48(puVar4);
        puVar16 = (uint *)*puVar4;
LAB_143915b56:
        puVar23 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar23 + 0x1c);
        uVar17 = puVar16[0x12];
        if (puVar20 <= puVar16 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
          LOCK();
          uVar22 = *puVar16;
          *puVar16 = *puVar16 + uVar17 + 1;
          UNLOCK();
          if ((uVar22 ^ uVar17) != 0xffffffff) break;
          puVar16 = (uint *)*puVar4;
          *puVar16 = 0xffffffff;
          *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
          puVar16[0x12] = 0;
          *puVar4 = puVar16;
          puVar23 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
          puVar20 = (uint *)(puVar23 + 0x1c);
          uVar17 = 0;
          if (puVar20 <= puVar16 + 0x4000) {
            uVar17 = 1;
            goto LAB_143915bd6;
          }
        }
      }
      uVar17 = uVar17 + 1;
LAB_143915bd6:
      *(uint **)(puVar16 + 0x10) = puVar20;
      puVar16[0x12] = uVar17;
      iVar10 = 0;
      FUN_1447247dc(puVar23,0);
      *puVar23 = &PTR_FUN_14ad89178;
      puVar23[0x15] = local_130;
      puVar23[0x16] = uStack_128;
      *(uint *)(puVar23 + 0x17) = local_120;
      puVar23[0x18] = local_118;
      puVar23[0x19] = ppuStack_110;
      local_118 = (undefined **)0x0;
      ppuStack_110 = (undefined **)0x0;
      puVar23[0x1a] = local_108;
      local_108 = (undefined **)0x0;
      *(undefined4 *)(puVar23 + 0x1b) = (undefined4)uStack_100;
      *(undefined4 *)((longlong)puVar23 + 0xdc) = uStack_100._4_4_;
      uStack_100 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar17 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar17 < 2) {
          uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar17];
        }
        else {
          uVar24 = 2;
        }
      }
      else {
        iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar24 = 5;
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
      lVar21 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar21 == 0) {
        uVar9 = 1;
        if ((char)uVar24 != '\x06') {
          uVar9 = uVar24;
        }
        uVar24 = uVar9;
        uVar15 = 0;
      }
      else {
        if ((char)uVar24 == '\x06') {
          uVar24 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
        }
        uVar15 = *(undefined8 *)(lVar21 + 0x30);
      }
      puVar23[0xf] = uVar15;
      puVar23[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar23 + 0x1c) = iVar10;
      if (puVar23 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar23);
        LOCK();
        piVar2 = (int *)(puVar23 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar23)(puVar23,1);
        }
      }
    }
    else {
      local_88[0] = (code *)0x0;
      local_78 = (undefined ***)FUN_14001cc68(0x40,8);
      ppuVar6 = local_108;
      ppuVar1 = ppuStack_110;
      ppuVar5 = local_118;
      local_118 = (undefined **)0x0;
      ppuStack_110 = (undefined **)0x0;
      *local_78 = &PTR_LAB_14ad89120;
      *(uint *)(local_78 + 3) = local_120;
      local_108 = (undefined **)0x0;
      uVar7 = (undefined4)uStack_100;
      uVar8 = uStack_100._4_4_;
      uStack_100 = 0;
      *(undefined4 *)(local_78 + 1) = (undefined4)local_130;
      *(undefined4 *)((longlong)local_78 + 0xc) = local_130._4_4_;
      *(undefined4 *)(local_78 + 2) = (undefined4)uStack_128;
      *(undefined4 *)((longlong)local_78 + 0x14) = uStack_128._4_4_;
      local_78[4] = ppuVar5;
      local_78[5] = ppuVar1;
      local_78[6] = ppuVar6;
      *(undefined4 *)(local_78 + 7) = uVar7;
      *(undefined4 *)((longlong)local_78 + 0x3c) = uVar8;
      if (local_78 + 1 != (undefined ***)0x0) {
        local_88[0] = FUN_14391e88c;
      }
      local_138 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"NDISimCacheReader_InitRT",&DAT_14cb38d88);
      if (local_88[0] != (code *)0x0) {
        pppuVar19 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar19 = &local_68;
        }
        (*(code *)(*pppuVar19)[2])();
      }
    }
  }
  if (local_108 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  ppuVar5 = ppuStack_110;
  if (ppuStack_110 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = ppuStack_110 + 1;
    *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppuVar1 == 0) {
      (**(code **)*ppuStack_110)(ppuStack_110);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
      }
    }
  }
  ppuVar5 = ppuStack_f0;
  if (ppuStack_f0 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = ppuStack_f0 + 1;
    *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppuVar1 == 0) {
      (**(code **)*ppuStack_f0)(ppuStack_f0);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*ppuVar5 + 0x10))(ppuVar5);
      }
    }
  }
  if (local_e8 != (undefined **)0x0) {
    FUN_1400020a8();
  }
LAB_143915e2f:
  puVar16 = local_d0;
  if (local_d8 == 0) {
    local_d0[0xe] = 0;
    uVar17 = 0;
  }
  else {
    uVar17 = *(uint *)(local_d8 + 0xc);
    local_d0[0xe] = uVar17;
    if ((int)uVar17 < DAT_14c9647dc) {
      lVar21 = (ulonglong)((uVar17 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8);
    }
    else {
      lVar21 = 0;
    }
    uVar17 = *(uint *)(lVar21 + 0x10);
    if (*(uint *)(lVar21 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar22 = DAT_14c964868 + 1;
      bVar25 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar25) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar22);
      }
      LOCK();
      uVar17 = *(uint *)(lVar21 + 0x10);
      bVar25 = uVar17 == 0;
      if (bVar25) {
        *(uint *)(lVar21 + 0x10) = uVar22;
        uVar17 = 0;
      }
      UNLOCK();
      if (bVar25) {
        uVar17 = uVar22;
      }
    }
  }
  puVar16[0xf] = uVar17;
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439160b3 FUN_1439160b3 body=213 status=ok
// SIG undefined FUN_1439160b3(void)

int FUN_1439160b3(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  int local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14391ba1e(local_50);
  local_40 = param_3;
  local_38[0] = FUN_144830b78(local_38,local_50);
  iVar3 = -1;
  if ((-1 < (int)param_4) && ((int)param_4 < *(int *)(param_1 + 0x188))) {
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x180) + 0x18 + (ulonglong)param_4 * 0xb8);
    if (lVar5 != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 0x10 + (ulonglong)param_4 * 0xb8);
      uVar4 = 0;
      do {
        if ((*(longlong *)(lVar2 + uVar4) == local_40) &&
           (*(int *)(lVar2 + 8 + uVar4) == local_38[0])) {
          iVar3 = (int)(uVar4 >> 3) * -0x55555555;
          break;
        }
        lVar1 = lVar2 + uVar4;
        uVar4 = uVar4 + 0x18;
      } while (lVar1 + 0x18 != lVar2 + lVar5 * 0x18);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 143916189 FUN_143916189 body=1994 status=ok
// SIG undefined FUN_143916189(void)

void FUN_143916189(byte *param_1,undefined4 *param_2,undefined4 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  code *pcVar10;
  byte bVar11;
  uint uVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  int *piVar25;
  int *piVar26;
  undefined4 uVar27;
  undefined1 auStack_138 [32];
  int local_118;
  ulonglong local_110;
  longlong *local_108;
  undefined4 local_fc;
  byte *local_f8;
  ulonglong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  int *piStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined4 *local_a0;
  uint local_98;
  undefined4 local_94;
  undefined4 *local_90;
  uint local_88;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_78;
  undefined4 local_74;
  undefined4 *local_70;
  int local_68;
  undefined1 local_60 [8];
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_fc = param_3;
  FUN_14809aaa8(local_60,param_1);
  if (*param_1 == 1) {
    iVar19 = *(int *)(param_1 + 0x30);
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar19);
    uVar21 = (uint)bVar11;
    *(int *)(param_1 + 0x30) = iVar19 + 1;
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar19 * 8);
    iVar19 = *(int *)(param_1 + 0x44) * (uint)bVar11;
    bVar11 = 1;
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar24 = uVar5 & 0x7fff;
    uVar21 = (uint)(uVar5 >> 0xf);
    lVar17 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar5 < 0) {
      lVar16 = (ulonglong)(uVar24 * *(int *)(lVar17 + 0x80)) + *(longlong *)(lVar17 + 0x70);
    }
    else {
      iVar19 = **(int **)(lVar17 + 0x20);
      lVar16 = 0;
      if (iVar19 <= (int)uVar24) {
        do {
          uVar24 = uVar24 - iVar19;
          iVar19 = (*(int **)(lVar17 + 0x20))[lVar16 + 1];
          lVar16 = lVar16 + 1;
        } while (iVar19 <= (int)uVar24);
      }
      lVar16 = (longlong)(int)uVar24 + *(longlong *)(*(longlong *)(lVar17 + 0x18) + lVar16 * 8);
    }
    iVar19 = *(int *)(lVar17 + 0x4c) * uVar21;
    bVar11 = *param_1;
  }
  if ((bVar11 & 1) == 0) {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar24 = uVar5 & 0x7fff;
    lVar9 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar5 < 0) {
      lVar17 = (ulonglong)(uVar24 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70);
    }
    else {
      iVar20 = **(int **)(lVar9 + 0x20);
      lVar17 = 0;
      if (iVar20 <= (int)uVar24) {
        do {
          uVar24 = uVar24 - iVar20;
          iVar20 = (*(int **)(lVar9 + 0x20))[lVar17 + 1];
          lVar17 = lVar17 + 1;
        } while (iVar20 <= (int)uVar24);
      }
      lVar17 = (longlong)(int)uVar24 + *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar17 * 8);
    }
    uVar24 = (uint)(uVar5 >> 0xf);
    pbVar13 = (byte *)(lVar9 + 0x4c);
  }
  else {
    iVar20 = *(int *)(param_1 + 0x30);
    uVar24 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar20);
    *(int *)(param_1 + 0x30) = iVar20 + 1;
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar20 * 8);
    pbVar13 = param_1 + 0x44;
  }
  local_110 = CONCAT44(local_110._4_4_,*(int *)pbVar13 * uVar24);
  FUN_140126e42(&local_70,param_1);
  if (*param_1 == 1) {
    iVar20 = *(int *)(param_1 + 0x30);
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar20);
    local_98 = (uint)bVar11;
    *(int *)(param_1 + 0x30) = iVar20 + 1;
    local_a0 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar11 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar20 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar12 = uVar5 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_a0 = &local_94;
      local_98 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x80);
      local_98 = 1;
      local_a0 = (undefined4 *)
                 ((ulonglong)(uVar12 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar20 = *(int *)(param_1 + 0x30);
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar20);
    local_88 = (uint)bVar11;
    *(int *)(param_1 + 0x30) = iVar20 + 1;
    local_90 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar11 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar20 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar12 = uVar5 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_90 = &local_84;
      local_88 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x80);
      local_88 = 1;
      local_90 = (undefined4 *)
                 ((ulonglong)(uVar12 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  if (*param_1 == 1) {
    iVar20 = *(int *)(param_1 + 0x30);
    bVar11 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar20);
    local_78 = (uint)bVar11;
    *(int *)(param_1 + 0x30) = iVar20 + 1;
    local_80 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar11 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar20 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar12 = uVar5 & 0x7fff;
    if (uVar12 == 0x7fff) {
      local_80 = &local_74;
      local_78 = 0;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0x80);
      local_78 = 1;
      local_80 = (undefined4 *)
                 ((ulonglong)(uVar12 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70) +
                 (longlong)*(int *)(lVar9 + 0x4c) * 4);
    }
  }
  local_108 = param_4;
  if (((((*(int *)(local_58 + 0x3c) == 0) || (uVar12 = *(uint *)(local_58 + 0x38), (int)uVar12 < 0))
       || (DAT_14c9647dc <= (int)uVar12)) ||
      ((plVar18 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(local_58 + 0x3c))))) ||
     (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (local_e8 = *plVar18, local_e8 == 0)))) {
    pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar13 = param_1 + 0x3c;
    }
    if (0 < *(int *)pbVar13) {
      iVar19 = 0;
      do {
        *local_70 = 0;
        uVar4 = param_2[1];
        uVar27 = param_2[2];
        puVar1 = local_a0 + (int)local_98;
        local_70 = local_70 + local_68;
        *local_a0 = *param_2;
        puVar2 = local_90 + (int)local_88;
        *local_90 = uVar4;
        puVar3 = local_80 + (int)local_78;
        *local_80 = uVar27;
        iVar19 = iVar19 + 1;
        pbVar13 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar13 = param_1 + 0x3c;
        }
        local_a0 = puVar1;
        local_90 = puVar2;
        local_80 = puVar3;
      } while (iVar19 < *(int *)pbVar13);
    }
  }
  else {
    pbVar13 = param_1 + 0x3c;
    local_b8 = 0;
    lStack_b0 = 0;
    local_c8 = 0;
    piStack_c0 = (int *)0x0;
    pbVar15 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
    if (*param_1 != 0) {
      pbVar15 = pbVar13;
    }
    if (0 < *(int *)pbVar15) {
      piVar25 = (int *)(lVar16 + (longlong)iVar19 * 4);
      piVar26 = (int *)(lVar17 + (longlong)(int)local_110 * 4);
      local_e0 = param_4 + 4;
      uVar23 = (ulonglong)(uVar24 << 2);
      uVar22 = (ulonglong)(uVar21 << 2);
      iVar20 = 0;
      iVar19 = -1;
      local_110 = uVar22;
      local_f8 = pbVar13;
      local_f0 = uVar23;
      do {
        iVar6 = *piVar25;
        iVar7 = *piVar26;
        if (iVar19 != iVar6) {
          local_118 = iVar6;
          FUN_1480b9f4a(&local_c8,local_e8,*(undefined4 *)(local_58 + 0x40),local_fc);
          pbVar13 = local_f8;
          uVar22 = local_110;
          uVar23 = local_f0;
          iVar19 = iVar6;
        }
        if (((iVar7 < 0) || (lStack_b0 == 0)) || (*piStack_c0 <= iVar7)) {
          *local_70 = 0;
          uVar4 = param_2[1];
          uVar27 = param_2[2];
          local_70 = local_70 + local_68;
          *local_a0 = *param_2;
          *local_90 = uVar4;
          local_a0 = local_a0 + (int)local_98;
          local_90 = local_90 + (int)local_88;
        }
        else {
          *local_70 = 0xffffffff;
          pcVar10 = (code *)*local_108;
          plVar18 = (longlong *)local_108[2];
          if ((longlong *)local_108[2] == (longlong *)0x0) {
            plVar18 = local_e0;
          }
          local_70 = local_70 + local_68;
          local_4c = iVar7;
          uVar14 = (**(code **)(*plVar18 + 8))();
          (*pcVar10)(&local_d4,uVar14,&local_c8,&local_4c);
          *local_a0 = local_d4;
          *local_90 = local_d0;
          pbVar13 = local_f8;
          uVar22 = local_110;
          uVar23 = local_f0;
          uVar27 = local_cc;
          local_a0 = local_a0 + (int)local_98;
          local_90 = local_90 + (int)local_88;
        }
        puVar1 = local_80 + (int)local_78;
        *local_80 = uVar27;
        iVar20 = iVar20 + 1;
        pbVar15 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != 0) {
          pbVar15 = pbVar13;
        }
        piVar26 = (int *)((longlong)piVar26 + uVar23);
        piVar25 = (int *)((longlong)piVar25 + uVar22);
        local_80 = puVar1;
      } while (iVar20 < *(int *)pbVar15);
    }
  }
  if (*local_108 != 0) {
    plVar18 = local_108 + 4;
    if ((longlong *)local_108[2] != (longlong *)0x0) {
      plVar18 = (longlong *)local_108[2];
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143916954 FUN_143916954 body=1531 status=ok
// SIG undefined FUN_143916954(void)

undefined8 FUN_143916954(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  undefined1 auStack_d8 [32];
  code **local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  int local_7c;
  code *local_78;
  undefined8 **local_70;
  longlong *local_68;
  longlong local_58 [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *param_2 = 1;
  LOCK();
  *(undefined4 *)((longlong)param_2 + 4) = *(undefined4 *)(param_1 + 0x44);
  UNLOCK();
  local_88 = param_2;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_14391698e;
  lVar15 = *(longlong *)(param_1 + 0x28);
  local_a8 = *(undefined8 *)(param_3 + 0x100);
  local_78 = (code *)&local_a8;
  local_70 = &local_88;
  FUN_1480ba44a(lVar15 + 0x70,&local_7c,&local_78);
  uStack_a0 = *(undefined8 *)(param_3 + 0x100);
  local_98 = *(longlong *)(param_3 + 0x870);
  uStack_90 = *(undefined4 *)(param_1 + 0x44);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  local_a8 = lVar15;
  if (DAT_14c86a9fc == 0) {
    if (iVar6 == 2) goto LAB_143916e3a;
    if (iVar6 != 1) goto LAB_143916a45;
    DVar7 = FUN_140ad26c0();
    DVar8 = GetCurrentThreadId();
    if (DVar7 == DVar8) goto LAB_143916e3a;
LAB_143916a4e:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2)) {
LAB_143916ed7:
        lVar15 = local_a8;
        local_78 = (code *)&uStack_a0;
        FUN_1480ba916(local_a8 + 0x20,&local_7c);
        lVar15 = *(longlong *)(lVar15 + 0x20);
        goto LAB_143916efc;
      }
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_143916ed7;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_143916bc0;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_14391c555);
        }
        lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar15 + 0x310);
        *(undefined8 *)(lVar15 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_143916bc0:
        puVar18 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x19);
        uVar13 = puVar11[0x12];
        if (puVar16 <= puVar11 + 0x4000) break;
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
          puVar18 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar13 = 0;
          if (puVar16 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_143916c40;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_143916c40:
      *(uint **)(puVar11 + 0x10) = puVar16;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14ad89560;
      *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar18 + 0xac) = local_a8._4_4_;
      *(undefined4 *)(puVar18 + 0x16) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_a0._4_4_;
      *(undefined4 *)(puVar18 + 0x17) = (undefined4)local_98;
      *(undefined4 *)((longlong)puVar18 + 0xbc) = local_98._4_4_;
      *(undefined4 *)(puVar18 + 0x18) = uStack_90;
      *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_8c;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
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
      lVar15 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar15 == 0) {
        uVar5 = 1;
        if ((char)uVar17 != '\x06') {
          uVar5 = uVar17;
        }
        uVar17 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar15 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar15 + 0x30);
      }
      puVar18[0xf] = uVar12;
      puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar6;
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
      local_68 = (longlong *)FUN_14001cc68(0x28,8);
      *local_68 = (longlong)&PTR_LAB_14ad89500;
      *(undefined4 *)(local_68 + 3) = (undefined4)local_98;
      *(undefined4 *)((longlong)local_68 + 0x1c) = local_98._4_4_;
      *(undefined4 *)(local_68 + 4) = uStack_90;
      *(undefined4 *)((longlong)local_68 + 0x24) = uStack_8c;
      *(undefined4 *)(local_68 + 1) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_68 + 0xc) = local_a8._4_4_;
      *(undefined4 *)(local_68 + 2) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_68 + 0x14) = uStack_a0._4_4_;
      if (local_68 + 1 != (longlong *)0x0) {
        local_78 = FUN_14391ef6c;
      }
      local_b8 = &local_78;
      FUN_14005a792(&DAT_14ca9a440,L"FNDISimpleCounter_RemoveProxy",&DAT_14cb38e14);
      if (local_78 != (code *)0x0) {
        plVar14 = local_68;
        if (local_68 == (longlong *)0x0) {
          plVar14 = local_58;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
    }
  }
  else {
LAB_143916a45:
    if (iVar6 != 0x10) goto LAB_143916a4e;
LAB_143916e3a:
    lVar15 = local_a8;
    local_78 = (code *)&uStack_a0;
    FUN_1480ba916(local_a8 + 0x20,&local_7c);
    lVar15 = *(longlong *)(lVar15 + 0x20);
LAB_143916efc:
    lVar15 = lVar15 + (longlong)local_7c * 0x20;
    if (&uStack_90 != (undefined4 *)(lVar15 + 8)) {
      *(undefined4 *)(lVar15 + 8) = uStack_90;
      *(undefined1 *)(lVar15 + 0xc) = 1;
    }
    uVar9 = FUN_1481c88ee(local_98 + 0x38,&DAT_14ca85100);
    *(undefined4 *)(lVar15 + 0x10) = uVar9;
  }
LAB_14391698e:
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143916f50 FUN_143916f50 body=1527 status=ok
// SIG undefined FUN_143916f50(void)

void FUN_143916f50(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 auStack_a8 [32];
  code **local_88;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_143916f71;
  lVar4 = *(longlong *)(param_1 + 0x28);
  FUN_1480badf8(lVar4 + 0x70,*(undefined8 *)(param_3 + 0x100));
  lVar5 = *(longlong *)(param_3 + 0x100);
  lVar6 = *(longlong *)(param_3 + 0x870);
  lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar17 + 0xc60);
  iVar7 = (int)((ulonglong)lVar5 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_143916fdd;
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_143916fe6;
      goto LAB_14391706b;
    }
  }
  else {
LAB_143916fdd:
    if (iVar9 != 0x10) {
LAB_14391706b:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar17 + 0xc60), iVar9 == 2)) {
LAB_143917488:
          if (*(int *)(lVar4 + 0x28) != *(int *)(lVar4 + 0x54)) {
            lVar17 = lVar4 + 0x58;
            if (*(longlong *)(lVar4 + 0x60) != 0) {
              lVar17 = *(longlong *)(lVar4 + 0x60);
            }
            iVar9 = *(int *)(lVar17 + (ulonglong)
                                      (*(int *)(lVar4 + 0x68) - 1U & (int)lVar5 + iVar7 * 0x17) * 4)
            ;
            if (iVar9 != -1) {
              do {
                lVar17 = *(longlong *)(lVar4 + 0x20) + (longlong)iVar9 * 0x20;
                if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar9 * 0x20) == lVar5)
                goto LAB_1439174ee;
                iVar9 = *(int *)(lVar17 + 0x18);
              } while (iVar9 != -1);
            }
          }
          goto LAB_143916f71;
        }
        if (iVar9 == 1) {
          DVar10 = FUN_140ad26c0();
          DVar11 = GetCurrentThreadId();
          if (DVar10 == DVar11) goto LAB_143917488;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar13 = (uint *)*puVar2;
        if (puVar13 != (uint *)0x0) goto LAB_1439171b7;
        while( true ) {
          uVar15 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar15 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar15 | 1;
            __tlregdtor(&LAB_14391c555);
          }
          lVar17 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar12 = *(undefined4 **)(lVar17 + 0x310);
          *(undefined8 *)(lVar17 + 0x310) = 0;
          if (puVar12 == (undefined4 *)0x0) {
            puVar12 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar12 = 0xffffffff;
          *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          FUN_140217a48(puVar2);
          puVar13 = (uint *)*puVar2;
LAB_1439171b7:
          puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar20 + 0x18);
          uVar15 = puVar13[0x12];
          if (puVar18 <= puVar13 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
            LOCK();
            uVar3 = *puVar13;
            *puVar13 = *puVar13 + uVar15 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar15) != 0xffffffff) break;
            puVar13 = (uint *)*puVar2;
            *puVar13 = 0xffffffff;
            *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
            puVar13[0x12] = 0;
            *puVar2 = puVar13;
            puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar20 + 0x18);
            uVar15 = 0;
            if (puVar18 <= puVar13 + 0x4000) {
              uVar15 = 1;
              goto LAB_143917237;
            }
          }
        }
        uVar15 = uVar15 + 1;
LAB_143917237:
        *(uint **)(puVar13 + 0x10) = puVar18;
        puVar13[0x12] = uVar15;
        iVar9 = 0;
        FUN_1447247dc(puVar20,0);
        *puVar20 = &PTR_FUN_14ad89590;
        puVar20[0x15] = lVar4;
        puVar20[0x16] = lVar5;
        puVar20[0x17] = lVar6;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar15 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
            uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
            iVar9 = 0;
          }
          else {
            uVar19 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar19 = 5;
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
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar8 = 1;
          if ((char)uVar19 != '\x06') {
            uVar8 = uVar19;
          }
          uVar19 = uVar8;
          uVar14 = 0;
        }
        else {
          if ((char)uVar19 == '\x06') {
            uVar19 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar14 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar20[0xf] = uVar14;
        puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar20 + 0x1c) = iVar9;
        if (puVar20 == (undefined8 *)0x0) {
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
          UNLOCK();
          local_78[0] = (code *)CONCAT71(local_78[0]._1_7_,1);
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
        local_88 = local_78;
        local_68 = (undefined ***)0x0;
        local_58 = &PTR_LAB_14ad89570;
        local_78[0] = FUN_14391f244;
        local_50 = lVar4;
        local_48 = lVar5;
        local_40 = lVar6;
        FUN_14005a792(&DAT_14ca9a440,L"FNDISimpleCounter_RemoveProxy",&DAT_14cb38e18);
        if (local_78[0] != (code *)0x0) {
          pppuVar16 = local_68;
          if (local_68 == (undefined ***)0x0) {
            pppuVar16 = &local_58;
          }
          (*(code *)(*pppuVar16)[2])();
        }
      }
      goto LAB_143916f71;
    }
  }
LAB_143916fe6:
  if (*(int *)(lVar4 + 0x28) != *(int *)(lVar4 + 0x54)) {
    lVar17 = lVar4 + 0x58;
    if (*(longlong *)(lVar4 + 0x60) != 0) {
      lVar17 = *(longlong *)(lVar4 + 0x60);
    }
    iVar9 = *(int *)(lVar17 + (ulonglong)(*(int *)(lVar4 + 0x68) - 1U & (int)lVar5 + iVar7 * 0x17) *
                              4);
    if (iVar9 != -1) {
      do {
        lVar17 = *(longlong *)(lVar4 + 0x20) + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x20) + (longlong)iVar9 * 0x20) == lVar5)
        goto LAB_1439174ee;
        iVar9 = *(int *)(lVar17 + 0x18);
      } while (iVar9 != -1);
    }
  }
LAB_143916f71:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1439174ee:
  if ((lVar17 + 8U & 0xfffffffffffffff7) != 0) {
    if (*(int *)(lVar17 + 0x10) != -1) {
      FUN_1400ee60a(lVar6 + 0x38,(undefined4 *)(lVar17 + 0x10));
      *(undefined4 *)(lVar17 + 0x10) = 0xffffffff;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
  }
  goto LAB_143916f71;
}



// FUNCTION 143917560 FUN_143917560 body=2607 status=ok
// SIG undefined FUN_143917560(void)

void FUN_143917560(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  undefined8 *puVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined1 auStack_178 [32];
  code **local_158;
  int local_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong *local_98;
  undefined8 local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_98 = (longlong *)0x0;
  local_90 = 0x400000000;
  lVar10 = *(longlong *)(param_1 + 0x28);
  puVar12 = (uint *)(lVar10 + 0x80);
  iVar25 = *(int *)(lVar10 + 0x98);
  if (iVar25 == 0) {
    uVar28 = 1;
    uVar27 = 0;
    iVar20 = 0;
    iVar26 = 0;
  }
  else {
    puVar19 = *(uint **)(lVar10 + 0x90);
    if (*(uint **)(lVar10 + 0x90) == (uint *)0x0) {
      puVar19 = puVar12;
    }
    uVar23 = *puVar19;
    if (uVar23 == 0) {
      iVar20 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar20 = iVar25 + -1;
      }
      uVar27 = 0;
      uVar28 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar28 = uVar27;
      }
      iVar20 = 0;
      do {
        if (uVar28 == uVar27) goto LAB_143917aab;
        iVar20 = iVar20 + 0x20;
        uVar23 = puVar19[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar27 = 0;
      iVar20 = 0;
    }
    uVar28 = (ulonglong)(-uVar23 & uVar23);
    uVar4 = uVar28 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar26 = (iVar20 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar26) {
      iVar26 = iVar25;
    }
  }
  if (iVar25 <= iVar26) goto LAB_143917aab;
  uVar23 = 0xffffffff;
  local_140 = param_1;
  do {
    uVar4 = local_90;
    lVar16 = (longlong)iVar26;
    pcVar5 = *(char **)(*(longlong *)(lVar10 + 0x70) + 8 + lVar16 * 0x18);
    if (*pcVar5 == '\x01') {
      *pcVar5 = '\0';
      lVar18 = *(longlong *)(lVar10 + 0x70);
      lVar6 = *(longlong *)(lVar18 + 8 + lVar16 * 0x18);
      lVar21 = (longlong)(int)local_90;
      uVar7 = (int)local_90 + 1;
      local_90 = CONCAT44(local_90._4_4_,uVar7);
      local_144 = iVar20;
      if (local_90._4_4_ < uVar7) {
        local_138 = lVar10;
        FUN_1480bb6fa(&local_d8,uVar4 & 0xffffffff);
        lVar10 = local_138;
      }
      plVar17 = local_98;
      if (local_98 == (longlong *)0x0) {
        plVar17 = (longlong *)&local_d8;
      }
      plVar17[lVar21 * 2] = *(longlong *)(lVar18 + lVar16 * 0x18);
      *(undefined4 *)(plVar17 + lVar21 * 2 + 1) = *(undefined4 *)(lVar6 + 4);
      iVar25 = *(int *)(lVar10 + 0x98);
      iVar20 = local_144;
    }
    plVar17 = local_98;
    uVar23 = uVar23 & ~(uint)uVar28;
    puVar19 = *(uint **)(lVar10 + 0x90);
    if (*(uint **)(lVar10 + 0x90) == (uint *)0x0) {
      puVar19 = puVar12;
    }
    iVar26 = (int)uVar27;
    lVar16 = (longlong)iVar26;
    uVar7 = puVar19[lVar16] & uVar23;
    if (uVar7 == 0) {
      iVar14 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar14 = iVar25 + -1;
      }
      iVar14 = iVar14 >> 5;
      iVar15 = iVar14;
      if (iVar14 < iVar26) {
        iVar15 = iVar26;
      }
      if (iVar14 <= iVar26) break;
      lVar18 = 0;
      while( true ) {
        iVar20 = iVar20 + 0x20;
        uVar7 = puVar19[lVar16 + lVar18 + 1];
        if (uVar7 != 0) break;
        lVar18 = lVar18 + 1;
        if (iVar15 - lVar16 == lVar18) goto LAB_14391778f;
      }
      uVar27 = (ulonglong)(iVar26 + (int)lVar18 + 1);
      uVar23 = 0xffffffff;
    }
    uVar28 = (ulonglong)(-uVar7 & uVar7);
    uVar4 = uVar28 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar26 = (iVar20 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
  } while (iVar26 < iVar25);
LAB_14391778f:
  lVar10 = (longlong)(int)local_90;
  if (0 < lVar10) {
    local_130 = *(longlong *)(local_140 + 0x28);
    if (local_98 == (longlong *)0x0) {
      local_f8 = local_a8;
      lStack_f0 = lStack_a0;
      local_108 = local_b8;
      lStack_100 = lStack_b0;
      local_118 = local_c8;
      lStack_110 = lStack_c0;
      local_128 = local_d8;
      uStack_124 = uStack_d4;
      uStack_120 = uStack_d0;
      uStack_11c = uStack_cc;
    }
    local_e8 = local_98;
    local_98 = (longlong *)0x0;
    local_e0 = local_90;
    local_90 = 0x400000000;
    lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar25 = *(int *)(lVar16 + 0xc60);
    plVar22 = (longlong *)&local_128;
    if (DAT_14c86a9fc == 0) {
      if (iVar25 == 2) goto LAB_143917858;
      if (iVar25 != 1) goto LAB_14391784f;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 != DVar9) goto LAB_143917951;
      lVar10 = (longlong)(int)local_e0;
      if (local_e8 != (longlong *)0x0) {
        plVar22 = local_e8;
      }
      if (lVar10 == 0) goto LAB_143917a87;
LAB_14391785f:
      plVar17 = plVar22 + lVar10 * 2;
      do {
        if (*(int *)(local_130 + 0x28) != *(int *)(local_130 + 0x54)) {
          lVar10 = *plVar22;
          lVar16 = local_130 + 0x58;
          if (*(longlong *)(local_130 + 0x60) != 0) {
            lVar16 = *(longlong *)(local_130 + 0x60);
          }
          iVar25 = *(int *)(lVar16 + (ulonglong)
                                     (*(int *)(local_130 + 0x68) - 1U &
                                     (int)lVar10 + (int)((ulonglong)lVar10 >> 0x20) * 0x17) * 4);
          if (iVar25 != -1) {
            do {
              plVar3 = (longlong *)(*(longlong *)(local_130 + 0x20) + (longlong)iVar25 * 0x20);
              if (*(longlong *)(*(longlong *)(local_130 + 0x20) + (longlong)iVar25 * 0x20) == lVar10
                 ) {
                if (((plVar22 != plVar3) && (plVar3 != (longlong *)0x0)) &&
                   (plVar3 != (longlong *)&DAT_fffffffffffffff8)) {
                  *(int *)(plVar3 + 1) = (int)plVar22[1];
                  *(undefined1 *)((longlong)plVar3 + 0xc) = 1;
                }
                break;
              }
              iVar25 = (int)plVar3[3];
            } while (iVar25 != -1);
          }
        }
        plVar22 = plVar22 + 2;
      } while (plVar22 != plVar17);
    }
    else {
LAB_14391784f:
      if (iVar25 == 0x10) {
LAB_143917858:
        if (plVar17 != (longlong *)0x0) {
          plVar22 = plVar17;
        }
        goto LAB_14391785f;
      }
LAB_143917951:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 == '\x01') && (iVar25 = *(int *)(lVar16 + 0xc60), iVar25 != 2)) {
          if (iVar25 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            if (DVar8 == DVar9) goto LAB_143917eb4;
          }
          goto LAB_143917982;
        }
LAB_143917eb4:
        plVar17 = (longlong *)&local_128;
        if (local_e8 != (longlong *)0x0) {
          plVar17 = local_e8;
        }
        if ((longlong)(int)local_e0 != 0) {
          plVar22 = plVar17 + (longlong)(int)local_e0 * 2;
          do {
            if (*(int *)(local_130 + 0x28) != *(int *)(local_130 + 0x54)) {
              lVar10 = *plVar17;
              lVar16 = local_130 + 0x58;
              if (*(longlong *)(local_130 + 0x60) != 0) {
                lVar16 = *(longlong *)(local_130 + 0x60);
              }
              iVar25 = *(int *)(lVar16 + (ulonglong)
                                         (*(int *)(local_130 + 0x68) - 1U &
                                         (int)lVar10 + (int)((ulonglong)lVar10 >> 0x20) * 0x17) * 4)
              ;
              if (iVar25 != -1) {
                do {
                  plVar3 = (longlong *)(*(longlong *)(local_130 + 0x20) + (longlong)iVar25 * 0x20);
                  if (*(longlong *)(*(longlong *)(local_130 + 0x20) + (longlong)iVar25 * 0x20) ==
                      lVar10) {
                    if (((plVar17 != plVar3) && (plVar3 != (longlong *)0x0)) &&
                       (plVar3 != (longlong *)&DAT_fffffffffffffff8)) {
                      *(int *)(plVar3 + 1) = (int)plVar17[1];
                      *(undefined1 *)((longlong)plVar3 + 0xc) = 1;
                    }
                    break;
                  }
                  iVar25 = (int)plVar3[3];
                } while (iVar25 != -1);
              }
            }
            plVar17 = plVar17 + 2;
          } while (plVar17 != plVar22);
        }
      }
      else {
LAB_143917982:
        if (DAT_14ca9a43c == 0) {
          puVar2 = (undefined8 *)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x308);
          puVar12 = (uint *)*puVar2;
          if (puVar12 != (uint *)0x0) goto LAB_143917b79;
          while( true ) {
            uVar23 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar23 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar23 | 1;
              __tlregdtor(&LAB_14391c555);
            }
            lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar11 = *(undefined4 **)(lVar10 + 0x310);
            *(undefined8 *)(lVar10 + 0x310) = 0;
            if (puVar11 == (undefined4 *)0x0) {
              puVar11 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar11 = 0xffffffff;
            *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            FUN_140217a48(puVar2);
            puVar12 = (uint *)*puVar2;
LAB_143917b79:
            puVar24 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar24 + 0x20);
            uVar23 = puVar12[0x12];
            if (puVar19 <= puVar12 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar7 = *puVar12;
              *puVar12 = *puVar12 + uVar23 + 1;
              UNLOCK();
              if ((uVar7 ^ uVar23) != 0xffffffff) break;
              puVar12 = (uint *)*puVar2;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *puVar2 = puVar12;
              puVar24 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
              puVar19 = (uint *)(puVar24 + 0x20);
              uVar23 = 0;
              if (puVar19 <= puVar12 + 0x4000) {
                uVar23 = 1;
                goto LAB_143917bf9;
              }
            }
          }
          uVar23 = uVar23 + 1;
LAB_143917bf9:
          *(uint **)(puVar12 + 0x10) = puVar19;
          puVar12[0x12] = uVar23;
          FUN_1447247dc(puVar24,0);
          *puVar24 = &PTR_FUN_14ad89680;
          puVar24[0x15] = local_130;
          puVar24[0x1e] = 0;
          if (local_e8 == (longlong *)0x0) {
            puVar24[0x1c] = local_f8;
            puVar24[0x1d] = lStack_f0;
            puVar24[0x1a] = local_108;
            puVar24[0x1b] = lStack_100;
            puVar24[0x18] = local_118;
            puVar24[0x19] = lStack_110;
            *(undefined4 *)(puVar24 + 0x16) = local_128;
            *(undefined4 *)((longlong)puVar24 + 0xb4) = uStack_124;
            *(undefined4 *)(puVar24 + 0x17) = uStack_120;
            *(undefined4 *)((longlong)puVar24 + 0xbc) = uStack_11c;
          }
          puVar24[0x1e] = local_e8;
          local_e8 = (longlong *)0x0;
          *(int *)(puVar24 + 0x1f) = (int)local_e0;
          *(undefined4 *)((longlong)puVar24 + 0xfc) = local_e0._4_4_;
          local_e0 = 0x400000000;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar23 = DAT_14c7585c8 >> 10 & 3;
            iVar25 = 0;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
              uVar27 = (ulonglong)(byte)(&DAT_149e38edc)[uVar23];
              iVar25 = 0;
            }
            else {
              uVar27 = 2;
            }
          }
          else {
            iVar25 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar27 = 5;
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
          lVar10 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar10 == 0) {
            uVar28 = 1;
            if ((char)uVar27 != '\x06') {
              uVar28 = uVar27;
            }
            uVar27 = uVar28;
            uVar13 = 0;
          }
          else {
            if ((char)uVar27 == '\x06') {
              uVar27 = *(ulonglong *)(lVar10 + 0x38) >> 0x3b;
            }
            uVar13 = *(undefined8 *)(lVar10 + 0x30);
          }
          puVar24[0xf] = uVar13;
          puVar24[0x10] = uVar27 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar24 + 0x1c) = iVar25;
          if (puVar24 == (undefined8 *)0x0) {
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar24 + 1) = *(int *)(puVar24 + 1) + 1;
            UNLOCK();
            local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
            FUN_1447439e4(puVar24);
            LOCK();
            piVar1 = (int *)(puVar24 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar24)(puVar24,1);
            }
          }
        }
        else {
          local_88[0] = (code *)0x0;
          local_78 = (longlong *)FUN_14001cc68(0x60,8);
          *local_78 = (longlong)&PTR_LAB_14ad89620;
          local_78[1] = local_130;
          local_78[10] = 0;
          if (local_e8 == (longlong *)0x0) {
            local_78[8] = local_f8;
            local_78[9] = lStack_f0;
            local_78[6] = local_108;
            local_78[7] = lStack_100;
            local_78[4] = local_118;
            local_78[5] = lStack_110;
            *(undefined4 *)(local_78 + 2) = local_128;
            *(undefined4 *)((longlong)local_78 + 0x14) = uStack_124;
            *(undefined4 *)(local_78 + 3) = uStack_120;
            *(undefined4 *)((longlong)local_78 + 0x1c) = uStack_11c;
          }
          local_78[10] = (longlong)local_e8;
          local_e8 = (longlong *)0x0;
          *(int *)(local_78 + 0xb) = (int)local_e0;
          *(undefined4 *)((longlong)local_78 + 0x5c) = local_e0._4_4_;
          local_e0 = 0x400000000;
          if (local_78 != (longlong *)&DAT_fffffffffffffff8) {
            local_88[0] = FUN_14391f554;
          }
          local_158 = local_88;
          FUN_14005a792(&DAT_14ca9a440,L"FNDISimpleCounter_PushToRender",&DAT_14cb38ea4);
          if (local_88[0] != (code *)0x0) {
            plVar17 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar17 = local_68;
            }
            (**(code **)(*plVar17 + 0x10))();
          }
        }
      }
    }
LAB_143917a87:
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_143917aab:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143917f90 FUN_143917f90 body=1779 status=ok
// SIG undefined FUN_143917f90(void)

undefined8
FUN_143917f90(longlong param_1,undefined **param_2,int param_3,longlong param_4,longlong param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined *puVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint uVar17;
  undefined ***pppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  int iVar24;
  undefined1 auStack_b8 [32];
  code **local_98;
  code **local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined **local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar24 = param_3 * 2 + 2;
  uVar16 = param_3 * 2;
  ppuVar4 = param_2 + 5;
  iVar10 = *(int *)(param_2 + 6);
  if (iVar10 < iVar24) {
    *(int *)(param_2 + 6) = iVar24;
    if ((uint)(*(int *)((longlong)param_2 + 0x34) - iVar10) < (uint)(iVar24 - iVar10)) {
      FUN_1446f48e2(ppuVar4);
    }
    memset(*ppuVar4 + (longlong)iVar10 * 4,0,(longlong)(iVar24 - iVar10) << 2);
  }
  *(undefined4 *)(*ppuVar4 + (longlong)(int)uVar16 * 4) = *(undefined4 *)(param_5 + 4);
  *(undefined4 *)(*ppuVar4 + (longlong)(int)(uVar16 | 1) * 4) = *(undefined4 *)(param_5 + 4);
  if ((*(byte *)(param_1 + -8) & 4) == 0) goto LAB_1439181da;
  ppuVar4 = *(undefined ***)(param_1 + -0x10);
  ppuVar5 = *(undefined ***)(param_4 + 0x100);
  ppuVar6 = *(undefined ***)(param_4 + 0x870);
  lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar7 + 0xc60);
  iVar24 = (int)((ulonglong)ppuVar5 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14391806d;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143918076;
      goto LAB_143918109;
    }
  }
  else {
LAB_14391806d:
    if (iVar10 != 0x10) {
LAB_143918109:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar7 + 0xc60), iVar10 == 2)) {
LAB_14391857a:
          if (*(int *)(ppuVar4 + 5) != *(int *)((longlong)ppuVar4 + 0x54)) {
            ppuVar19 = ppuVar4 + 0xb;
            if ((undefined **)ppuVar4[0xc] != (undefined **)0x0) {
              ppuVar19 = (undefined **)ppuVar4[0xc];
            }
            iVar10 = *(int *)((longlong)ppuVar19 +
                             (ulonglong)
                             (*(int *)(ppuVar4 + 0xd) - 1U & (int)ppuVar5 + iVar24 * 0x17) * 4);
            if (iVar10 != -1) {
              do {
                puVar20 = ppuVar4[4] + (longlong)iVar10 * 0x20;
                if (*(undefined ***)(ppuVar4[4] + (longlong)iVar10 * 0x20) == ppuVar5)
                goto LAB_1439185e6;
                iVar10 = *(int *)(puVar20 + 0x18);
              } while (iVar10 != -1);
            }
          }
          goto LAB_1439181d5;
        }
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_14391857a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_1439182a4;
        while( true ) {
          uVar17 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar17 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar17 | 1;
            __tlregdtor(&LAB_14391c555);
          }
          lVar7 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar7 + 0x310);
          *(undefined8 *)(lVar7 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_1439182a4:
          puVar23 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar21 = (uint *)(puVar23 + 0x1a);
          uVar17 = puVar14[0x12];
          if (puVar21 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar3 = *puVar14;
            *puVar14 = *puVar14 + uVar17 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar17) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar23 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar21 = (uint *)(puVar23 + 0x1a);
            uVar17 = 0;
            if (puVar21 <= puVar14 + 0x4000) {
              uVar17 = 1;
              goto LAB_143918324;
            }
          }
        }
        uVar17 = uVar17 + 1;
LAB_143918324:
        *(uint **)(puVar14 + 0x10) = puVar21;
        puVar14[0x12] = uVar17;
        iVar10 = 0;
        FUN_1447247dc(puVar23,0);
        *puVar23 = &PTR_FUN_14ad89718;
        puVar23[0x15] = ppuVar4;
        puVar23[0x16] = ppuVar5;
        puVar23[0x17] = ppuVar6;
        puVar23[0x18] = param_2;
        *(uint *)(puVar23 + 0x19) = uVar16;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar10 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
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
        lVar7 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar7 == 0) {
          uVar9 = 1;
          if ((char)uVar22 != '\x06') {
            uVar9 = uVar22;
          }
          uVar22 = uVar9;
          uVar15 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar7 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar7 + 0x30);
        }
        puVar23[0xf] = uVar15;
        puVar23[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar23 + 0x1c) = iVar10;
        if (puVar23 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
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
        local_88[0] = (code *)0x0;
        local_78 = (undefined ***)FUN_14001cc68(0x30,8);
        *local_78 = &PTR_LAB_14ad896b0;
        local_78[1] = ppuVar4;
        local_78[2] = ppuVar5;
        local_78[3] = ppuVar6;
        local_78[4] = param_2;
        *(uint *)(local_78 + 5) = uVar16;
        if (local_78 + 1 != (undefined ***)0x0) {
          local_88[0] = FUN_14391f906;
        }
        local_98 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"FNDISimpleCounter_CacheWriteFrame",&DAT_14cb38ea8);
        if (local_88[0] != (code *)0x0) {
          pppuVar18 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar18 = &local_68;
          }
          (*(code *)(*pppuVar18)[2])();
        }
      }
      goto LAB_1439181d5;
    }
  }
LAB_143918076:
  if (*(int *)(ppuVar4 + 5) != *(int *)((longlong)ppuVar4 + 0x54)) {
    ppuVar19 = ppuVar4 + 0xb;
    if ((undefined **)ppuVar4[0xc] != (undefined **)0x0) {
      ppuVar19 = (undefined **)ppuVar4[0xc];
    }
    iVar10 = *(int *)((longlong)ppuVar19 +
                     (ulonglong)(*(int *)(ppuVar4 + 0xd) - 1U & (int)ppuVar5 + iVar24 * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        puVar20 = ppuVar4[4] + (longlong)iVar10 * 0x20;
        if (*(undefined ***)(ppuVar4[4] + (longlong)iVar10 * 0x20) == ppuVar5) goto LAB_1439185e6;
        iVar10 = *(int *)(puVar20 + 0x18);
      } while (iVar10 != -1);
    }
  }
LAB_1439181d5:
  FUN_14080c2b4();
LAB_1439181da:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1439185e6:
  if ((((ulonglong)(puVar20 + 8) & 0xfffffffffffffff7) != 0) && (*(int *)(puVar20 + 0x10) != -1)) {
    puVar8 = ppuVar6[5];
    local_90 = local_88;
    local_78 = (undefined ***)0x0;
    local_68 = &PTR_LAB_14ad89690;
    local_88[0] = (code *)&LAB_14391f8a6;
    local_98 = (code **)CONCAT44(local_98._4_4_,4);
    local_60 = param_2;
    local_58 = uVar16;
    FUN_1481c8c5c(puVar8,&DAT_14ca85100,ppuVar6[0xb],*(int *)(puVar20 + 0x10) << 2);
    FUN_143a96774(puVar8,&DAT_14ca85100);
  }
  goto LAB_1439181d5;
}



// FUNCTION 143918684 FUN_143918684 body=1563 status=ok
// SIG undefined FUN_143918684(void)

bool FUN_143918684(longlong param_1,longlong param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined ***pppuVar17;
  longlong lVar18;
  uint *puVar19;
  int iVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar20 = param_3 * 2 + 2;
  iVar4 = *(int *)(param_2 + 0x30);
  if (iVar4 < iVar20) goto LAB_143918862;
  LOCK();
  *(undefined4 *)(param_7 + 4) =
       *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)(param_3 * 2) * 4);
  UNLOCK();
  if ((*(byte *)(param_1 + -8) & 4) == 0) goto LAB_143918862;
  lVar6 = *(longlong *)(param_1 + -0x10);
  lVar7 = *(longlong *)(param_6 + 0x100);
  uVar5 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)(int)(param_3 * 2 | 1) * 4);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar18 + 0xc60);
  iVar8 = (int)((ulonglong)lVar7 >> 0x20);
  if (DAT_14c86a9fc == 0) {
    if (iVar10 != 2) {
      if (iVar10 != 1) goto LAB_14391871f;
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      if (DVar11 == DVar12) goto LAB_143918728;
      goto LAB_1439187bb;
    }
  }
  else {
LAB_14391871f:
    if (iVar10 != 0x10) {
LAB_1439187bb:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar10 = *(int *)(lVar18 + 0xc60), iVar10 == 2)) {
LAB_143918bfb:
          if (*(int *)(lVar6 + 0x28) != *(int *)(lVar6 + 0x54)) {
            lVar18 = lVar6 + 0x58;
            if (*(longlong *)(lVar6 + 0x60) != 0) {
              lVar18 = *(longlong *)(lVar6 + 0x60);
            }
            iVar10 = *(int *)(lVar18 + (ulonglong)
                                       (*(int *)(lVar6 + 0x68) - 1U & (int)lVar7 + iVar8 * 0x17) * 4
                             );
            if (iVar10 != -1) {
              do {
                lVar18 = *(longlong *)(lVar6 + 0x20) + (longlong)iVar10 * 0x20;
                if (*(longlong *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar10 * 0x20) == lVar7)
                goto LAB_143918c67;
                iVar10 = *(int *)(lVar18 + 0x18);
              } while (iVar10 != -1);
            }
          }
          goto LAB_143918862;
        }
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          if (DVar11 == DVar12) goto LAB_143918bfb;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar14 = (uint *)*puVar2;
        if (puVar14 != (uint *)0x0) goto LAB_143918930;
        while( true ) {
          uVar16 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar16 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar16 | 1;
            __tlregdtor(&LAB_14391c555);
          }
          lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar13 = *(undefined4 **)(lVar18 + 0x310);
          *(undefined8 *)(lVar18 + 0x310) = 0;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar13 = 0xffffffff;
          *(undefined4 **)(puVar13 + 0x10) = puVar13 + 0x16;
          puVar13[0x12] = 0;
          *puVar2 = puVar13;
          FUN_140217a48(puVar2);
          puVar14 = (uint *)*puVar2;
LAB_143918930:
          puVar21 = (undefined8 *)(*(longlong *)(puVar14 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar19 = (uint *)(puVar21 + 0x18);
          uVar16 = puVar14[0x12];
          if (puVar19 <= puVar14 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x4000;
            LOCK();
            uVar3 = *puVar14;
            *puVar14 = *puVar14 + uVar16 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar16) != 0xffffffff) break;
            puVar14 = (uint *)*puVar2;
            *puVar14 = 0xffffffff;
            *(uint **)(puVar14 + 0x10) = puVar14 + 0x16;
            puVar14[0x12] = 0;
            *puVar2 = puVar14;
            puVar21 = (undefined8 *)((longlong)puVar14 + 0x5fU & 0xfffffffffffffff8);
            puVar19 = (uint *)(puVar21 + 0x18);
            uVar16 = 0;
            if (puVar19 <= puVar14 + 0x4000) {
              uVar16 = 1;
              goto LAB_1439189b0;
            }
          }
        }
        uVar16 = uVar16 + 1;
LAB_1439189b0:
        *(uint **)(puVar14 + 0x10) = puVar19;
        puVar14[0x12] = uVar16;
        iVar10 = 0;
        FUN_1447247dc(puVar21,0);
        *puVar21 = &PTR_FUN_14ad89750;
        puVar21[0x15] = lVar6;
        puVar21[0x16] = lVar7;
        *(undefined4 *)(puVar21 + 0x17) = uVar5;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar16 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar16 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar16];
            iVar10 = 0;
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar10 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
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
        lVar6 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar6 == 0) {
          uVar9 = 1;
          if ((char)uVar22 != '\x06') {
            uVar9 = uVar22;
          }
          uVar22 = uVar9;
          uVar15 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar6 + 0x38) >> 0x3b;
          }
          uVar15 = *(undefined8 *)(lVar6 + 0x30);
        }
        puVar21[0xf] = uVar15;
        puVar21[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar21 + 0x1c) = iVar10;
        if (puVar21 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar21);
          LOCK();
          piVar1 = (int *)(puVar21 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar21)(puVar21,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14ad89730;
        local_88[0] = &LAB_14391fcf0;
        local_60 = lVar6;
        local_58 = lVar7;
        local_50 = uVar5;
        FUN_14005a792(&DAT_14ca9a440,L"FNDISimpleCounter_PushToRender",&DAT_14cb38eac);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar17 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar17 = &local_68;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      goto LAB_143918862;
    }
  }
LAB_143918728:
  if (*(int *)(lVar6 + 0x28) != *(int *)(lVar6 + 0x54)) {
    lVar18 = lVar6 + 0x58;
    if (*(longlong *)(lVar6 + 0x60) != 0) {
      lVar18 = *(longlong *)(lVar6 + 0x60);
    }
    iVar10 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar6 + 0x68) - 1U & (int)lVar7 + iVar8 * 0x17)
                               * 4);
    if (iVar10 != -1) {
      do {
        lVar18 = *(longlong *)(lVar6 + 0x20) + (longlong)iVar10 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar6 + 0x20) + (longlong)iVar10 * 0x20) == lVar7)
        goto LAB_143918c67;
        iVar10 = *(int *)(lVar18 + 0x18);
      } while (iVar10 != -1);
    }
  }
LAB_143918862:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return iVar20 <= iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143918c67:
  if ((lVar18 + 8U & 0xfffffffffffffff7) != 0) {
    *(undefined4 *)(lVar18 + 8) = uVar5;
    *(undefined1 *)(lVar18 + 0xc) = 1;
  }
  goto LAB_143918862;
}



// FUNCTION 143918ca0 FUN_143918ca0 body=55 status=ok
// SIG undefined FUN_143918ca0(void)

void FUN_143918ca0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb383e8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb383e8 = FUN_14171c317(FUN_14646a79a,uVar1,L"ENDISocketReaderSourceMode");
  }
  return;
}



// FUNCTION 143918cd7 FUN_143918cd7 body=41 status=ok
// SIG undefined FUN_143918cd7(void)

void FUN_143918cd7(void)

{
  DAT_14cb384b0 = 0;
  if (DAT_14cb384a8 != 0) {
    FUN_1400020a8();
  }
  FUN_1461504bc();
  return;
}



// FUNCTION 143918d00 FUN_143918d00 body=1253 status=ok
// SIG undefined FUN_143918d00(void)

void FUN_143918d00(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1480a2a84(param_2);
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_143919140;
    if (iVar7 != 1) goto LAB_143918d58;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_143919140;
  }
  else {
LAB_143918d58:
    if (iVar7 == 0x10) goto LAB_143919140;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_143919140:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_143919140;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_143918ec5;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14391c555);
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
LAB_143918ec5:
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
          goto LAB_143918f45;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_143918f45:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad89a40;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_48 = &PTR_LAB_14ad89a20;
    local_68[0] = &LAB_14391ffa6;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cb38f34);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1439191fa FUN_1439191fa body=55 status=ok
// SIG undefined FUN_1439191fa(void)

void FUN_1439191fa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb384c8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb384c8 = FUN_14171c317(FUN_14646a876,uVar1,L"ENDIStaticMesh_SourceMode");
  }
  return;
}



// FUNCTION 143919231 FUN_143919231 body=69 status=ok
// SIG undefined FUN_143919231(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143919231(void)

{
  _DAT_14cb38518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000143919273. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb38520,1);
  return;
}



// FUNCTION 143919276 FUN_143919276 body=69 status=ok
// SIG undefined FUN_143919276(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143919276(void)

{
  _DAT_14cb38530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001439192b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cb38538,1);
  return;
}



// FUNCTION 1439192bc FUN_1439192bc body=6733 status=ok
// SIG undefined FUN_1439192bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1439192bc(ulonglong *param_1,uint *param_2,ulonglong *param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined2 uVar9;
  int iVar10;
  undefined4 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined8 uVar15;
  char cVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  DWORD DVar21;
  DWORD DVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  ulonglong *puVar25;
  undefined8 *puVar26;
  undefined4 *puVar27;
  uint *puVar28;
  longlong lVar29;
  ulonglong *puVar30;
  ulonglong uVar31;
  undefined ***pppuVar32;
  uint *puVar33;
  short sVar34;
  undefined8 *puVar35;
  longlong lVar36;
  ulonglong uVar37;
  longlong lVar38;
  undefined4 uVar39;
  ushort uVar40;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined1 auStack_1e8 [32];
  code **local_1c8;
  uint *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  undefined1 *local_1a0;
  undefined1 *local_198;
  undefined8 *local_190;
  undefined1 *local_188;
  code *local_180;
  ulonglong *local_170;
  ulonglong *local_168;
  ulonglong *local_160;
  uint *local_158;
  uint *local_150;
  ulonglong *local_148;
  uint *local_140;
  ulonglong *local_138;
  uint *local_130;
  uint *local_128;
  uint *local_120;
  float local_114;
  float local_110;
  float local_10c;
  longlong local_108;
  uint local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_e8;
  uint uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  longlong local_d0;
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  ulonglong *local_a0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_170 = param_3;
  memset(param_2,0,0x3e0);
  *(undefined8 *)(param_2 + 10) = DAT_14c846330;
  param_2[0xc] = DAT_14c846338;
  param_2[0xd] = 0xffffffff;
  param_2[0x90] = 0;
  param_2[0x91] = 0;
  param_2[0x92] = 0;
  param_2[0x93] = 0;
  puVar35 = &DAT_14c846480;
  puVar28 = param_2 + 0x94;
  for (lVar29 = 0xc; lVar29 != 0; lVar29 = lVar29 + -1) {
    *(undefined8 *)puVar28 = *puVar35;
    puVar35 = puVar35 + 1;
    puVar28 = puVar28 + 2;
  }
  *(undefined8 *)(param_2 + 0xb0) = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8._4_4_;
  uVar19 = (uint)DAT_14c8464e8;
  uVar18 = DAT_14c8464e0._4_4_;
  param_2[0xac] = (uint)DAT_14c8464e0;
  param_2[0xad] = uVar18;
  param_2[0xae] = uVar19;
  param_2[0xaf] = uVar14;
  *(undefined8 *)(param_2 + 0xbd) = DAT_14c846330;
  param_2[0xbf] = DAT_14c846338;
  *(undefined8 *)(param_2 + 0xc0) = DAT_14c846330;
  param_2[0xc2] = DAT_14c846338;
  param_2[0xcb] = 0;
  param_2[0xcc] = 0;
  param_2[0xcd] = 0;
  param_2[0xce] = 0;
  param_2[0xd0] = 0;
  param_2[0xd1] = 0;
  param_2[0xd2] = 0;
  param_2[0xd3] = 0;
  param_2[0xd4] = 0;
  param_2[0xd5] = 0;
  param_2[0xd6] = 0;
  param_2[0xd7] = 0;
  param_2[0xd7] = 0;
  param_2[0xd8] = 0;
  param_2[0xd9] = 0;
  param_2[0xda] = 0;
  param_2[0xde] = 0xffffffff;
  param_2[0xe0] = 0;
  param_2[0xe1] = 0;
  param_2[0xe2] = 0;
  param_2[0xe3] = 0;
  uVar18 = FUN_144830b78(param_2 + 0xe4,&DAT_14cb42160);
  param_2[0xe4] = uVar18;
  param_2[0xe6] = 0;
  param_2[0xe7] = 0;
  param_2[0xe8] = 0;
  param_2[0xe9] = 0;
  param_2[0xec] = 0;
  param_2[0xed] = 0;
  param_2[0xee] = 0;
  param_2[0xef] = 0;
  param_2[0xf0] = 0;
  param_2[0xf2] = 0;
  param_2[0xf3] = 0;
  param_2[0xf4] = 0;
  param_2[0xf5] = 0;
  param_2[0xf6] = 0xffffffff;
  *(undefined2 *)(param_2 + 0xf7) = 0;
  local_168 = (ulonglong *)(param_2 + 0x10);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  puVar30 = &DAT_14c846400;
  puVar25 = local_168;
  for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
    *puVar25 = *puVar30;
    puVar30 = puVar30 + 1;
    puVar25 = puVar25 + 1;
  }
  local_148 = (ulonglong *)(param_2 + 0x30);
  puVar30 = &DAT_14c846400;
  puVar25 = local_148;
  for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
    *puVar25 = *puVar30;
    puVar30 = puVar30 + 1;
    puVar25 = puVar25 + 1;
  }
  local_138 = (ulonglong *)(param_2 + 0x50);
  puVar30 = &DAT_14c846400;
  puVar25 = local_138;
  for (lVar29 = 0x10; lVar29 != 0; lVar29 = lVar29 + -1) {
    *puVar25 = *puVar30;
    puVar30 = puVar30 + 1;
    puVar25 = puVar25 + 1;
  }
  puVar30 = &DAT_14c846400;
  puVar25 = (ulonglong *)(param_2 + 0x70);
  for (lVar29 = 0x10; uVar24 = _DAT_14c846348, lVar29 != 0; lVar29 = lVar29 + -1) {
    *puVar25 = *puVar30;
    puVar30 = puVar30 + 1;
    puVar25 = puVar25 + 1;
  }
  *(undefined8 *)(param_2 + 0xb4) = ram0x00014c846340;
  *(undefined8 *)(param_2 + 0xb6) = uVar24;
  uVar24 = _DAT_14c846348;
  *(undefined8 *)(param_2 + 0xb8) = ram0x00014c846340;
  *(undefined8 *)(param_2 + 0xba) = uVar24;
  param_2[0xbc] = 0;
  param_2[0xbf] = DAT_14c846338;
  *(undefined8 *)(param_2 + 0xbd) = DAT_14c846330;
  param_2[0xc2] = DAT_14c846338;
  *(undefined8 *)(param_2 + 0xc0) = DAT_14c846330;
  param_2[0xc] = DAT_14c846338;
  *(undefined8 *)(param_2 + 10) = DAT_14c846330;
  *(undefined8 *)(param_2 + 200) = DAT_14c8464f0;
  uVar14 = DAT_14c8464e8._4_4_;
  uVar19 = (uint)DAT_14c8464e8;
  uVar18 = DAT_14c8464e0._4_4_;
  param_2[0xc4] = (uint)DAT_14c8464e0;
  param_2[0xc5] = uVar18;
  param_2[0xc6] = uVar19;
  param_2[199] = uVar14;
  uVar18 = param_2[0xca] & 0xfffffffe | (uint)(byte)param_1[0x11];
  param_2[0xca] = uVar18;
  param_2[0xca] = (uVar18 & 0xffffff81) + (uint)*(byte *)((longlong)param_1 + 0x89) * 2;
  param_2[0xcb] = 0;
  param_2[0xcc] = 0;
  param_2[0xd2] = 0;
  if (param_2[0xd3] != 0) {
    FUN_14481578e(param_2 + 0xd0,0);
  }
  puVar28 = param_2 + 0xd4;
  param_2[0xd6] = 0;
  if (param_2[0xd7] != 0) {
    FUN_14181f500(puVar28,0);
  }
  puVar33 = param_2 + 0xec;
  param_2[0xcd] = 0;
  param_2[0xce] = 0;
  param_2[0xd8] = (uint)param_1[0x1d];
  param_2[0xd9] = 0;
  param_2[0xda] = 0;
  param_2[0xee] = 0;
  local_140 = puVar28;
  if (param_2[0xef] != 0) {
    FUN_140491bf8(puVar33,0);
  }
  param_2[0xf0] = 0;
  param_2[0xf4] = 0;
  local_128 = puVar33;
  if (param_2[0xf5] != 0) {
    FUN_1448759c8(param_2 + 0xf2,0);
  }
  FUN_1404e5848(param_2 + 0xde,local_170 + 0x3d,param_1 + 0x16);
  local_d0 = 0;
  uVar18 = param_2[0xde];
  if ((((ulonglong)uVar18 == 0xffffffff) || ((int)uVar18 < 0)) ||
     (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x48) <= (int)uVar18)) {
    uVar24 = 0;
  }
  else {
    uVar24 = *(undefined8 *)
              (*(longlong *)(*(longlong *)(param_2 + 0xe0) + 0x40) + (ulonglong)uVar18 * 8);
  }
  local_158 = param_2 + 0xd0;
  local_150 = param_2 + 0xf2;
  local_160 = (ulonglong *)FUN_14040fc70(param_1,&local_d0,local_170,uVar24);
  lVar29 = local_d0;
  if (local_d0 == 0) {
    *param_2 = 0;
    uVar18 = 0;
  }
  else {
    uVar18 = *(uint *)(local_d0 + 0xc);
    *param_2 = uVar18;
    if ((int)uVar18 < DAT_14c9647dc) {
      lVar36 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
    }
    else {
      lVar36 = 0;
    }
    uVar18 = *(uint *)(lVar36 + 0x10);
    if (*(uint *)(lVar36 + 0x10) == 0) {
      LOCK();
      iVar20 = DAT_14c964868 + 1;
      UNLOCK();
      uVar19 = DAT_14c964868 + 1;
      bVar41 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar20;
      if (bVar41) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar19);
      }
      LOCK();
      uVar18 = *(uint *)(lVar36 + 0x10);
      bVar41 = uVar18 == 0;
      if (bVar41) {
        *(uint *)(lVar36 + 0x10) = uVar19;
        uVar18 = 0;
      }
      UNLOCK();
      if (bVar41) {
        uVar18 = uVar19;
      }
    }
  }
  param_2[1] = uVar18;
  param_2[0xd] = (uint)param_1[0x1a];
  FUN_1404102d8(param_2,lVar29,local_170);
  puVar30 = local_168;
  puVar25 = local_138;
  for (lVar36 = 0x10; lVar36 != 0; lVar36 = lVar36 + -1) {
    *puVar25 = *puVar30;
    puVar30 = puVar30 + 1;
    puVar25 = puVar25 + 1;
  }
  puVar30 = local_148;
  puVar25 = (ulonglong *)(param_2 + 0x70);
  for (lVar36 = 0x10; lVar36 != 0; lVar36 = lVar36 + -1) {
    *puVar25 = *puVar30;
    puVar30 = puVar30 + 1;
    puVar25 = puVar25 + 1;
  }
  param_2[0xb8] = param_2[0xb4];
  param_2[0xb9] = param_2[0xb5];
  param_2[0xba] = param_2[0xb6];
  param_2[0xbb] = param_2[0xb7];
  if ((lVar29 != 0) && ((param_2[0xca] & 2) != 0)) {
    if (DAT_14cad3688 == 0) {
      local_190 = &local_e8;
      local_e8 = FUN_144b223ce;
      local_180 = FUN_14081d0ea;
      local_188 = &LAB_1417963e0;
      local_198 = &LAB_147a2f4c9;
      local_1a0 = &LAB_1400ea6f8;
      local_1a8 = L"Engine";
      local_1b0 = 0x200000000000;
      local_1b8 = 0x10000004;
      local_1c0 = (uint *)CONCAT44(local_1c0._4_4_,0x10);
      local_1c8 = (code **)CONCAT44(local_1c8._4_4_,0x720);
      FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
    }
    if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(lVar29 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar29 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) {
      FUN_14083167e(lVar29,&local_e8,0);
      *(undefined8 *)(param_2 + 200) = local_d8;
      param_2[0xc4] = (uint)local_e8;
      param_2[0xc5] = local_e8._4_4_;
      param_2[0xc6] = uStack_e0;
      param_2[199] = uStack_dc;
    }
  }
  puVar30 = local_160;
  if (DAT_14cb38528 == 0) {
    if (local_160 == (ulonglong *)0x0) goto LAB_143919b96;
    if ((*(byte *)((longlong)local_160 + 0x195) & 2) == 0) {
      if ((param_1[6] & 6) == 4) {
        if (((*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)DAT_14ca85550 * 0x3c + 6) & 0x10) != 0
            ) || (cVar16 = FUN_147430c75(), cVar16 != '\0')) goto LAB_143919843;
      }
      else {
        local_a0 = &local_e8;
        local_e8 = (code *)((ulonglong)local_e8 & 0xffffffffffffff00);
        local_b8 = (undefined ***)0x0;
        local_a8 = &PTR_LAB_14ad889e0;
        local_c8[0] = FUN_1415d0d8c;
        FUN_141214220(param_1,local_170);
        if ((byte)local_e8 == '\0') goto LAB_143919843;
      }
LAB_143919b96:
      puVar30 = local_170;
      param_2[2] = 0;
      param_2[3] = 0;
      *(byte *)(param_2 + 0xca) = (byte)param_2[0xca] & 0xf7;
      puVar35 = (undefined8 *)0x0;
      local_e8 = (code *)((ulonglong)local_e8 & 0xffffffffffffff00);
      local_114 = (float)((uint)local_114 & 0xffffff00);
      FUN_14499183e(local_170,DAT_14cb38738,&local_e8,&local_114);
      FUN_14499183e(puVar30,DAT_14cb38740,&local_e8,&local_114);
      bVar17 = 0;
      uVar40 = 0;
LAB_143919bf1:
      *(ushort *)(param_2 + 0xf7) = uVar40 | bVar17;
      if (param_2[0xf6] != 0xffffffff) {
        FUN_1480b4cc8(param_2,local_170);
      }
      bVar41 = true;
    }
    else {
LAB_143919843:
      plVar12 = (longlong *)puVar30[0x1c];
      if (plVar12 == (longlong *)0x0) goto LAB_143919b96;
      local_1c0 = param_2 + 0xd9;
      local_1c8 = (code **)(param_2 + 0xda);
      cVar16 = FUN_14040fa5c(param_2,param_1,local_170,puVar30);
      puVar28 = local_158;
      if ((cVar16 == '\0') ||
         (puVar35 = *(undefined8 **)(*plVar12 + (longlong)(int)param_2[0xda] * 8),
         puVar35 == (undefined8 *)0x0)) goto LAB_143919b96;
      LOCK();
      *(int *)(puVar35 + 1) = *(int *)(puVar35 + 1) + 1;
      UNLOCK();
      uVar18 = *(uint *)((longlong)puVar30 + 0xc);
      param_2[2] = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar29 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar29 = 0;
      }
      uVar18 = *(uint *)(lVar29 + 0x10);
      if (*(uint *)(lVar29 + 0x10) == 0) {
        LOCK();
        iVar20 = DAT_14c964868 + 1;
        UNLOCK();
        uVar19 = DAT_14c964868 + 1;
        bVar41 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar20;
        if (bVar41) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar19);
        }
        LOCK();
        uVar18 = *(uint *)(lVar29 + 0x10);
        bVar41 = uVar18 == 0;
        if (bVar41) {
          *(uint *)(lVar29 + 0x10) = uVar19;
          uVar18 = 0;
        }
        UNLOCK();
        if (bVar41) {
          uVar18 = uVar19;
        }
      }
      param_2[3] = uVar18;
      uVar18 = param_2[0xca];
      param_2[0xca] = uVar18 | 8;
      uVar18 = (uVar18 & 0xffffffef | 8) + (*(byte *)((longlong)local_160 + 0x195) & 2) * 8;
      param_2[0xca] = uVar18;
      uVar14 = *(uint *)((longlong)local_160 + 0x194) & 8;
      uVar18 = uVar18 & 0xffffffdf;
      uVar19 = uVar18 + uVar14 * 4;
      param_2[0xca] = uVar19;
      if (uVar14 != 0) {
        iVar10 = *(int *)(puVar35 + 0x46);
        iVar20 = *(int *)(puVar35 + 7);
        param_2[0xca] = (uint)(iVar10 == iVar20) << 5 | uVar18;
        uVar19 = 0;
        if (*(int *)(puVar35 + 0x4c) == *(int *)(puVar35 + 7)) {
          uVar19 = (uint)(iVar10 == iVar20) << 5;
        }
        uVar19 = uVar19 | uVar18;
        param_2[0xca] = uVar19;
      }
      uVar18 = 0;
      if ((uVar19 & 0x20) != 0) {
        uVar18 = (uint)(byte)((*(byte *)((longlong)local_160 + 0x195) & 4) << 4);
      }
      param_2[0xca] = uVar19 & 0xffffffbf | uVar18;
      uVar18 = *(uint *)(puVar35 + 7);
      if ((int)uVar18 < 0) goto LAB_14391ac67;
      if ((int)param_2[0xd3] < (int)uVar18) {
        FUN_14481578e(puVar28);
        uVar18 = *(uint *)(puVar35 + 7);
        if ((int)uVar18 < 0) goto LAB_14391ac67;
      }
      if ((int)param_2[0xd7] < (int)uVar18) {
        FUN_14181f500(local_140);
        uVar18 = *(uint *)(puVar35 + 7);
      }
      if (0 < (int)uVar18) {
        puVar26 = puVar35 + 2;
        lVar29 = 0;
        do {
          puVar23 = (undefined8 *)puVar35[6];
          if ((undefined8 *)puVar35[6] == (undefined8 *)0x0) {
            puVar23 = puVar26;
          }
          lVar36 = lVar29 * 0x1c;
          if (*(int *)((longlong)puVar23 + lVar36 + 8) != 0) {
            if ((longlong)(int)(uint)param_1[0x10] == 0) {
LAB_143919a69:
              uVar18 = param_2[0xcb];
              lVar38 = (longlong)(int)uVar18;
              uVar19 = param_2[0xd2];
              param_2[0xd2] = uVar19 + 1;
              if (param_2[0xd3] < uVar19 + 1) {
                FUN_1446f48e2(local_158,uVar19);
              }
              memmove((void *)(*(longlong *)(param_2 + 0xd0) + lVar38 * 4 + 4),
                      (void *)(*(longlong *)(param_2 + 0xd0) + lVar38 * 4),
                      (ulonglong)(uVar19 - uVar18) << 2);
              *(int *)(*(longlong *)(param_2 + 0xd0) + lVar38 * 4) = (int)lVar29;
              param_2[0xcb] = param_2[0xcb] + 1;
              puVar23 = (undefined8 *)puVar35[6];
              if ((undefined8 *)puVar35[6] == (undefined8 *)0x0) {
                puVar23 = puVar26;
              }
              param_2[0xcd] = param_2[0xcd] + *(int *)((longlong)puVar23 + lVar36 + 8);
            }
            else {
              lVar38 = 0;
              do {
                if (*(int *)(param_1[0xf] + lVar38) == *(int *)((longlong)puVar23 + lVar36))
                goto LAB_143919a69;
                lVar38 = lVar38 + 4;
              } while ((longlong)(int)(uint)param_1[0x10] * 4 != lVar38);
              uVar18 = param_2[0xd2];
              param_2[0xd2] = uVar18 + 1;
              if (param_2[0xd3] < uVar18 + 1) {
                FUN_1446f48e2(local_158,uVar18);
              }
              *(int *)(*(longlong *)(param_2 + 0xd0) + (longlong)(int)uVar18 * 4) = (int)lVar29;
              param_2[0xcc] = param_2[0xcc] + 1;
              puVar23 = (undefined8 *)puVar35[6];
              if ((undefined8 *)puVar35[6] == (undefined8 *)0x0) {
                puVar23 = puVar26;
              }
              param_2[0xce] = param_2[0xce] + *(int *)((longlong)puVar23 + lVar36 + 8);
            }
          }
          lVar29 = lVar29 + 1;
        } while (lVar29 < *(int *)(puVar35 + 7));
      }
      puVar28 = local_140;
      puVar26 = (undefined8 *)0x0;
      if ((param_2[0xca] & 0x20) != 0) {
        puVar26 = puVar35 + 0x4b;
      }
      local_f0 = param_2[0xcb];
      local_f8 = *(undefined8 *)(param_2 + 0xd0);
      FUN_140b84270(puVar35,&local_f8,puVar26,local_140);
      local_108 = (longlong)(int)param_2[0xcb] * 4 + *(longlong *)(param_2 + 0xd0);
      local_100 = param_2[0xcc];
      FUN_140b84270(puVar35,&local_108,puVar26,puVar28);
      puVar28 = local_128;
      uVar18 = (uint)local_160[0x37];
      if ((longlong)(int)uVar18 < 1) {
LAB_14391a636:
        puVar25 = local_160;
        puVar30 = local_170;
        dVar4 = (double)local_160[0x42];
        dVar5 = (double)local_160[0x41];
        dVar6 = (double)local_160[0x45];
        dVar7 = (double)local_160[0x44];
        dVar8 = (double)local_160[0x43];
        param_2[0xbd] = (uint)(float)(double)local_160[0x40];
        param_2[0xbe] = (uint)(float)dVar5;
        param_2[0xbf] = (uint)(float)dVar4;
        param_2[0xc0] = (uint)(float)dVar8;
        param_2[0xc1] = (uint)(float)dVar7;
        param_2[0xc2] = (uint)(float)dVar6;
        uVar40 = 0;
        local_e8 = (code *)((ulonglong)local_e8 & 0xffffffffffffff00);
        local_114 = (float)((uint)local_114 & 0xffffff00);
        FUN_14499183e(local_170,DAT_14cb38738,&local_e8,&local_114);
        FUN_14499183e(puVar30,DAT_14cb38740,&local_e8,&local_114);
        bVar17 = (puVar25[1] & 0x40000000) == 0 & (byte)local_e8;
        if (((puVar25[1] & 0x40000000) == 0) && (local_114._0_1_ != '\0')) {
          uVar40 = (ushort)(((uint)param_1[6] & 4) << 6);
        }
        goto LAB_143919bf1;
      }
      if (uVar18 < 0x10000) {
        local_168 = param_1;
        FUN_14076b618(local_128,uVar18);
        puVar30 = local_160;
        lVar29 = 0;
        lVar36 = 0;
        do {
          lVar38 = *(longlong *)(puVar30[0x36] + lVar36 * 8);
          auVar42 = insertps(ZEXT416((uint)(float)*(double *)(lVar38 + 0x30)),
                             ZEXT416((uint)(float)*(double *)(lVar38 + 0x38)),0x1c);
          auVar42 = insertps(auVar42,ZEXT416((uint)(float)*(double *)(lVar38 + 0x40)),0x28);
          *(undefined1 (*) [16])(*(longlong *)puVar28 + 0x10 + lVar29) = auVar42;
          lVar38 = *(longlong *)(puVar30[0x36] + lVar36 * 8);
          local_10c = (float)*(double *)(lVar38 + 0x58);
          local_110 = (float)*(double *)(lVar38 + 0x50);
          local_114 = (float)*(double *)(lVar38 + 0x48);
          lVar38 = *(longlong *)puVar28;
          FUN_1409545ce(&local_114,&local_e8);
          puVar33 = local_150;
          param_1 = local_168;
          *(ulonglong *)(lVar38 + lVar29) = (ulonglong)local_e8;
          ((ulonglong *)(lVar38 + lVar29))[1] = CONCAT44(uStack_dc,uStack_e0);
          lVar38 = *(longlong *)(puVar30[0x36] + lVar36 * 8);
          auVar42 = insertps(ZEXT416((uint)(float)*(double *)(lVar38 + 0x60)),
                             ZEXT416((uint)(float)*(double *)(lVar38 + 0x68)),0x1c);
          auVar42 = insertps(auVar42,ZEXT416((uint)(float)*(double *)(lVar38 + 0x70)),0x28);
          *(undefined1 (*) [16])(*(longlong *)puVar28 + 0x20 + lVar29) = auVar42;
          lVar36 = lVar36 + 1;
          lVar29 = lVar29 + 0x30;
        } while ((int)uVar18 != lVar36);
        param_2[0xf0] = 0;
        uVar19 = (uint)local_168[0x1c];
        if ((int)uVar19 < 1) goto LAB_14391a636;
        if ((int)param_2[0xf5] < (int)uVar18) {
          FUN_1448759c8(local_150,uVar18);
          uVar19 = (uint)param_1[0x1c];
          if (0 < (int)uVar19) goto LAB_14391a559;
        }
        else {
LAB_14391a559:
          lVar29 = 0;
          do {
            if ((longlong)(int)local_160[0x37] != 0) {
              uVar37 = 0;
              sVar34 = 0;
              do {
                if (*(longlong *)(*(longlong *)(local_160[0x36] + uVar37) + 0x28) ==
                    *(longlong *)(param_1[0x1b] + lVar29 * 8)) {
                  if ((~uVar37 & 0x7fffffff8) != 0) {
                    param_2[0xf0] = param_2[0xf0] + 1;
                    uVar19 = param_2[0xf4];
                    param_2[0xf4] = uVar19 + 1;
                    if (param_2[0xf5] < uVar19 + 1) {
                      FUN_14488eebe(local_150,uVar19);
                    }
                    *(short *)(*(longlong *)local_150 + (longlong)(int)uVar19 * 2) = sVar34;
                    uVar19 = (uint)param_1[0x1c];
                    puVar33 = local_150;
                  }
                  break;
                }
                sVar34 = sVar34 + 1;
                uVar37 = uVar37 + 8;
              } while ((longlong)(int)local_160[0x37] * 8 != uVar37);
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 < (int)uVar19);
        }
        uVar19 = 0;
        do {
          local_e8 = (code *)CONCAT62(local_e8._2_6_,(short)uVar19);
          FUN_144838706(puVar33,&local_e8);
          uVar19 = uVar19 + 1;
        } while (uVar18 != uVar19);
        goto LAB_14391a636;
      }
      bVar41 = false;
    }
    if (puVar35 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar35 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar35)(puVar35,1);
      }
    }
    if (bVar41) {
      uVar24 = 1;
      if ((param_1[6] & 4) == 0) goto LAB_143919f89;
      puVar25 = (ulonglong *)FUN_14001cc68(200);
      puVar30 = puVar25 + 2;
      memset(puVar30,0,0xb8);
      puVar25[7] = (ulonglong)&PTR_FUN_14ad89a50;
      puVar25[0xc] = 0;
      puVar25[0xd] = 0;
      puVar25[0xb] = (ulonglong)&PTR_FUN_14a3d46e0;
      *(undefined4 *)(puVar25 + 0x10) = 0;
      puVar25[0x12] = 0;
      puVar25[0x13] = 0;
      puVar25[0x11] = (ulonglong)&PTR_FUN_14a3cb610;
      puVar25[0x16] = 0;
      puVar25[0x17] = 0;
      puVar25[0x15] = (ulonglong)&PTR_FUN_14a3d46e0;
      *puVar25 = param_1[5];
      puVar25[1] = local_170[0x20];
      puVar26 = (undefined8 *)FUN_1405c943a(param_2,puVar25 + 3);
      puVar35 = (undefined8 *)puVar25[2];
      local_148 = puVar30;
      if (puVar35 != puVar26) {
        *puVar30 = (ulonglong)puVar26;
        if (puVar26 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
        }
        if (puVar35 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar35 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar35)(puVar35,1);
          }
        }
        puVar35 = (undefined8 *)*puVar30;
      }
      puVar30 = puVar25 + 8;
      local_168 = puVar25 + 0xc;
      local_170 = puVar30;
      if (puVar35 != (undefined8 *)0x0) {
        *(uint *)(puVar25 + 4) = param_2[0xcd];
        *(uint *)((longlong)puVar25 + 0x24) = param_2[0xce];
        bVar17 = (byte)param_2[0xca] >> 6;
        *(byte *)(puVar25 + 5) = bVar17 & 1;
        iVar20 = *(int *)(puVar35 + 7);
        *(int *)((longlong)puVar25 + 0x2c) = iVar20;
        if (0 < iVar20) {
          local_130 = param_2 + 0xcb;
          puVar26 = (undefined8 *)0x0;
          puVar35 = puVar35 + 0x44;
          if ((bVar17 & 1) == 0) {
            puVar35 = puVar26;
          }
          local_138 = puVar35 + 1;
          local_160 = puVar35 + 3;
          lVar29 = 2;
          local_120 = param_2;
          do {
            lVar36 = *(longlong *)(*local_148 + 0x30);
            lVar38 = *local_148 + 0x10;
            if (lVar36 != 0) {
              lVar38 = lVar36;
            }
            if (puVar35 == (undefined8 *)0x0) {
              uVar43 = 0x3f800000;
              uVar39 = SUB84(puVar26,0);
            }
            else {
              uVar37 = *local_138;
              uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)local_138;
              if ((uVar37 & 1) == 0) {
                uVar31 = uVar37;
              }
              uVar43 = *(undefined4 *)(uVar31 + (longlong)puVar26 * 4);
              uVar37 = *local_160;
              uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)local_160;
              if ((uVar37 & 1) == 0) {
                uVar31 = uVar37;
              }
              uVar39 = *(undefined4 *)(uVar31 + (longlong)puVar26 * 4);
            }
            uVar18 = *(uint *)(lVar38 + -4 + lVar29 * 4);
            iVar20 = (int)puVar25[9];
            *(uint *)(puVar25 + 9) = iVar20 + 1U;
            if (*(uint *)((longlong)puVar25 + 0x4c) < iVar20 + 1U) {
              FUN_14181f928(puVar30,iVar20);
              puVar30 = local_170;
              param_2 = local_120;
            }
            puVar28 = local_130;
            uVar37 = puVar25[8];
            uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)puVar30;
            if ((uVar37 & 1) == 0) {
              uVar31 = uVar37;
            }
            lVar36 = (longlong)iVar20 * 0x10;
            uVar11 = *(undefined4 *)(lVar38 + lVar29 * 4);
            *(uint *)(uVar31 + lVar36) = uVar18 / 3;
            *(undefined4 *)(uVar31 + 4 + lVar36) = uVar11;
            *(undefined4 *)(uVar31 + 8 + lVar36) = uVar43;
            *(undefined4 *)(uVar31 + 0xc + lVar36) = uVar39;
            puVar26 = (undefined8 *)((longlong)puVar26 + 1);
            lVar29 = lVar29 + 7;
          } while ((longlong)puVar26 < (longlong)*(int *)((longlong)puVar25 + 0x2c));
          uVar18 = *local_130;
          *(uint *)(puVar25 + 6) = uVar18;
          if ((longlong)(int)uVar18 == 0) {
LAB_143919fd0:
            uVar18 = 0;
          }
          else {
            lVar29 = *(longlong *)local_140;
            lVar36 = 0;
            do {
              iVar20 = (int)puVar25[9];
              *(uint *)(puVar25 + 9) = iVar20 + 1U;
              if (*(uint *)((longlong)puVar25 + 0x4c) < iVar20 + 1U) {
                FUN_14181f928(puVar30,iVar20);
                puVar30 = local_170;
              }
              uVar37 = *puVar30;
              uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)puVar30;
              if ((uVar37 & 1) == 0) {
                uVar31 = uVar37;
              }
              puVar27 = (undefined4 *)(lVar29 + lVar36);
              uVar43 = puVar27[1];
              uVar39 = puVar27[2];
              uVar11 = puVar27[3];
              puVar3 = (undefined4 *)(uVar31 + (longlong)iVar20 * 0x10);
              *puVar3 = *puVar27;
              puVar3[1] = uVar43;
              puVar3[2] = uVar39;
              puVar3[3] = uVar11;
              lVar36 = lVar36 + 0x10;
            } while ((longlong)(int)uVar18 * 0x10 != lVar36);
            uVar18 = *puVar28;
            if ((longlong)(int)uVar18 == 0) goto LAB_143919fd0;
            lVar29 = *(longlong *)local_158;
            lVar36 = 0;
            do {
              uVar9 = *(undefined2 *)(lVar29 + lVar36);
              iVar20 = (int)puVar25[0xd];
              *(uint *)(puVar25 + 0xd) = iVar20 + 1U;
              if (*(uint *)((longlong)puVar25 + 0x6c) < iVar20 + 1U) {
                FUN_141794766(local_168,iVar20);
                puVar30 = local_170;
              }
              uVar37 = *local_168;
              uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)local_168;
              if ((uVar37 & 1) == 0) {
                uVar31 = uVar37;
              }
              *(undefined2 *)(uVar31 + (longlong)iVar20 * 2) = uVar9;
              lVar36 = lVar36 + 4;
            } while ((longlong)(int)uVar18 * 4 != lVar36);
            uVar18 = *local_130;
          }
          uVar19 = param_2[0xcc];
          *(uint *)((longlong)puVar25 + 0x34) = uVar19;
          if ((longlong)(int)uVar19 != 0) {
            lVar29 = *(longlong *)(param_2 + 0xd4);
            lVar36 = 0;
            do {
              iVar20 = (int)puVar25[9];
              *(uint *)(puVar25 + 9) = iVar20 + 1U;
              if (*(uint *)((longlong)puVar25 + 0x4c) < iVar20 + 1U) {
                FUN_14181f928(puVar30,iVar20);
                puVar30 = local_170;
              }
              uVar37 = *puVar30;
              uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)puVar30;
              if ((uVar37 & 1) == 0) {
                uVar31 = uVar37;
              }
              puVar3 = (undefined4 *)((longlong)(int)uVar18 * 0x10 + lVar29 + lVar36);
              uVar43 = puVar3[1];
              uVar39 = puVar3[2];
              uVar11 = puVar3[3];
              puVar27 = (undefined4 *)(uVar31 + (longlong)iVar20 * 0x10);
              *puVar27 = *puVar3;
              puVar27[1] = uVar43;
              puVar27[2] = uVar39;
              puVar27[3] = uVar11;
              lVar36 = lVar36 + 0x10;
            } while ((longlong)(int)uVar19 * 0x10 != lVar36);
            uVar18 = param_2[0xcc];
            if ((longlong)(int)uVar18 != 0) {
              uVar19 = param_2[0xcb];
              lVar29 = *(longlong *)(param_2 + 0xd0);
              lVar36 = 0;
              do {
                uVar9 = *(undefined2 *)((longlong)(int)uVar19 * 4 + lVar29 + lVar36);
                iVar20 = (int)puVar25[0xd];
                *(uint *)(puVar25 + 0xd) = iVar20 + 1U;
                if (*(uint *)((longlong)puVar25 + 0x6c) < iVar20 + 1U) {
                  FUN_141794766(local_168,iVar20);
                }
                uVar37 = *local_168;
                uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)local_168;
                if ((uVar37 & 1) == 0) {
                  uVar31 = uVar37;
                }
                *(undefined2 *)(uVar31 + (longlong)iVar20 * 2) = uVar9;
                lVar36 = lVar36 + 4;
              } while ((longlong)(int)uVar18 * 4 != lVar36);
            }
          }
        }
      }
      puVar28 = local_150;
      puVar30 = puVar25 + 0x12;
      puVar2 = puVar25 + 0x16;
      uVar18 = param_2[0xee];
      lVar29 = (longlong)(int)uVar18;
      *(uint *)(puVar25 + 0xf) = uVar18;
      if (0 < lVar29) {
        uVar19 = param_2[0xf0];
        *(uint *)((longlong)puVar25 + 0x7c) = uVar19;
        *(uint *)(puVar25 + 0x10) = uVar18 - uVar19;
        if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar19 * 3);
        }
        if (*(int *)((longlong)puVar25 + 0x9c) < (int)(uVar19 * 3)) {
          FUN_1407edea8(puVar30);
          lVar29 = (longlong)(int)param_2[0xee];
          if (lVar29 != 0) {
            puVar35 = *(undefined8 **)(param_2 + 0xec);
            goto LAB_14391a132;
          }
        }
        else {
          puVar35 = *(undefined8 **)local_128;
LAB_14391a132:
          puVar26 = puVar35 + lVar29 * 6;
          do {
            uVar24 = *puVar35;
            uVar15 = puVar35[1];
            auVar42 = *(undefined1 (*) [16])(puVar35 + 2);
            uVar43 = *(undefined4 *)(puVar35 + 3);
            iVar20 = (int)puVar25[0x13];
            *(uint *)(puVar25 + 0x13) = iVar20 + 1U;
            if (*(uint *)((longlong)puVar25 + 0x9c) < iVar20 + 1U) {
              FUN_14070246c(puVar30,iVar20);
            }
            uVar37 = puVar25[0x12];
            uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)puVar30;
            if ((uVar37 & 1) == 0) {
              uVar31 = uVar37;
            }
            lVar29 = (longlong)iVar20 * 0x10;
            *(int *)(uVar31 + lVar29) = auVar42._0_4_;
            uVar13 = extractps(auVar42,1);
            *(undefined8 *)(uVar31 + 4 + lVar29) = uVar13;
            *(undefined4 *)(uVar31 + 8 + lVar29) = uVar43;
            *(undefined4 *)(uVar31 + 0xc + lVar29) = 0;
            iVar20 = (int)puVar25[0x13];
            *(uint *)(puVar25 + 0x13) = iVar20 + 1U;
            if (*(uint *)((longlong)puVar25 + 0x9c) < iVar20 + 1U) {
              FUN_14070246c(puVar30,iVar20);
            }
            uVar37 = puVar25[0x12];
            uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)puVar30;
            if ((uVar37 & 1) == 0) {
              uVar31 = uVar37;
            }
            puVar23 = (undefined8 *)(uVar31 + (longlong)iVar20 * 0x10);
            *puVar23 = uVar24;
            puVar23[1] = uVar15;
            auVar42 = *(undefined1 (*) [16])(puVar35 + 4);
            uVar43 = *(undefined4 *)(puVar35 + 5);
            iVar20 = (int)puVar25[0x13];
            *(uint *)(puVar25 + 0x13) = iVar20 + 1U;
            if (*(uint *)((longlong)puVar25 + 0x9c) < iVar20 + 1U) {
              FUN_14070246c(puVar30,iVar20);
            }
            uVar37 = *puVar30;
            uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)puVar30;
            if ((uVar37 & 1) == 0) {
              uVar31 = uVar37;
            }
            lVar29 = (longlong)iVar20 * 0x10;
            *(int *)(uVar31 + lVar29) = auVar42._0_4_;
            uVar24 = extractps(auVar42,1);
            *(undefined8 *)(uVar31 + 4 + lVar29) = uVar24;
            *(undefined4 *)(uVar31 + 8 + lVar29) = uVar43;
            *(undefined4 *)(uVar31 + 0xc + lVar29) = 0;
            puVar35 = puVar35 + 6;
          } while (puVar35 != puVar26);
        }
        if (0 < (int)param_2[0xf0]) {
          uVar18 = param_2[0xf4];
          if ((int)uVar18 < 0) {
LAB_14391ac67:
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar18);
          }
          if (*(int *)((longlong)puVar25 + 0xbc) < (int)uVar18) {
            FUN_1404d5fcc(puVar2);
            uVar18 = param_2[0xf4];
          }
          if (uVar18 != 0) {
            lVar29 = *(longlong *)puVar28;
            lVar36 = 0;
            do {
              uVar9 = *(undefined2 *)(lVar29 + lVar36);
              iVar20 = (int)puVar25[0x17];
              *(uint *)(puVar25 + 0x17) = iVar20 + 1U;
              if (*(uint *)((longlong)puVar25 + 0xbc) < iVar20 + 1U) {
                FUN_141794766(puVar2,iVar20);
              }
              uVar37 = *puVar2;
              uVar31 = ((longlong)uVar37 >> 0x18) + (longlong)puVar2;
              if ((uVar37 & 1) == 0) {
                uVar31 = uVar37;
              }
              *(undefined2 *)(uVar31 + (longlong)iVar20 * 2) = uVar9;
              lVar36 = lVar36 + 2;
            } while ((longlong)(int)uVar18 * 2 != lVar36);
          }
        }
      }
      lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar20 = *(int *)(lVar29 + 0xc60);
      if (DAT_14c86a9fc == 0) {
        if (iVar20 != 2) {
          if (iVar20 != 1) goto LAB_14391a315;
          DVar21 = FUN_140ad26c0();
          DVar22 = GetCurrentThreadId();
          if (DVar21 == DVar22) goto LAB_14391a31e;
          goto LAB_14391a7cc;
        }
LAB_14391a31e:
        uVar37 = *puVar25;
        local_c8[0] = (code *)(puVar25 + 1);
        FUN_140fd21b4(uVar37 + 0x10,&local_e8);
        FUN_1439201ac(*(longlong *)(uVar37 + 0x10) + (longlong)(int)(uint)local_e8 * 0x1d0 + 0x10,
                      &DAT_14ca85100,puVar25);
        if (puVar25 != (ulonglong *)0x0) {
          if (*puVar2 != 0 && (*puVar2 & 1) == 0) {
            FUN_1400020a8();
          }
          puVar2 = local_148;
          if (*puVar30 != 0 && (*puVar30 & 1) == 0) {
            FUN_1400020a8();
          }
          if (*local_168 != 0 && (*local_168 & 1) == 0) {
            FUN_1400020a8();
          }
          if (*local_170 != 0 && (*local_170 & 1) == 0) {
            FUN_1400020a8();
          }
          puVar35 = (undefined8 *)*puVar2;
          if (puVar35 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar35 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar35)(puVar35,1);
            }
          }
          FUN_1400020a8(puVar25);
        }
      }
      else {
LAB_14391a315:
        if (iVar20 == 0x10) goto LAB_14391a31e;
LAB_14391a7cc:
        if (DAT_14ca9a438 == '\0') {
          if ((DAT_14c86a9f8 != '\x01') || (iVar20 = *(int *)(lVar29 + 0xc60), iVar20 == 2))
          goto LAB_14391a31e;
          if (iVar20 == 1) {
            DVar21 = FUN_140ad26c0();
            DVar22 = GetCurrentThreadId();
            if (DVar21 == DVar22) goto LAB_14391a31e;
          }
        }
        if (DAT_14ca9a43c == 0) {
          puVar35 = (undefined8 *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x308);
          puVar28 = (uint *)*puVar35;
          if (puVar28 != (uint *)0x0) goto LAB_14391a914;
          while( true ) {
            uVar18 = *(uint *)(*(longlong *)
                                ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                              0x318);
            if ((uVar18 & 1) == 0) {
              *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
                   = uVar18 | 1;
              __tlregdtor(&LAB_14391c555);
            }
            lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            puVar27 = *(undefined4 **)(lVar29 + 0x310);
            *(undefined8 *)(lVar29 + 0x310) = 0;
            if (puVar27 == (undefined4 *)0x0) {
              puVar27 = _aligned_malloc(0x10000,0x10000);
            }
            *puVar27 = 0xffffffff;
            *(undefined4 **)(puVar27 + 0x10) = puVar27 + 0x16;
            puVar27[0x12] = 0;
            *puVar35 = puVar27;
            FUN_140217a48(puVar35);
            puVar28 = (uint *)*puVar35;
LAB_14391a914:
            puVar26 = (undefined8 *)(*(longlong *)(puVar28 + 0x10) + 7U & 0xfffffffffffffff8);
            puVar33 = (uint *)(puVar26 + 0x16);
            uVar18 = puVar28[0x12];
            if (puVar33 <= puVar28 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar28 + 0x10) = puVar28 + 0x4000;
              LOCK();
              uVar19 = *puVar28;
              *puVar28 = *puVar28 + uVar18 + 1;
              UNLOCK();
              if ((uVar19 ^ uVar18) != 0xffffffff) break;
              puVar28 = (uint *)*puVar35;
              *puVar28 = 0xffffffff;
              *(uint **)(puVar28 + 0x10) = puVar28 + 0x16;
              puVar28[0x12] = 0;
              *puVar35 = puVar28;
              puVar26 = (undefined8 *)((longlong)puVar28 + 0x5fU & 0xfffffffffffffff8);
              puVar33 = (uint *)(puVar26 + 0x16);
              uVar18 = 0;
              if (puVar33 <= puVar28 + 0x4000) {
                uVar18 = 1;
                goto LAB_14391a994;
              }
            }
          }
          uVar18 = uVar18 + 1;
LAB_14391a994:
          *(uint **)(puVar28 + 0x10) = puVar33;
          puVar28[0x12] = uVar18;
          iVar20 = 0;
          FUN_1447247dc(puVar26,0);
          *puVar26 = &PTR_FUN_14ad89bf8;
          puVar26[0x15] = puVar25;
          if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
            uVar18 = DAT_14c7585c8 >> 10 & 3;
            if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
              uVar37 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
              iVar20 = 0;
            }
            else {
              uVar37 = 2;
            }
          }
          else {
            iVar20 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                     *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
            uVar37 = 5;
          }
          if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
          }
          puVar26[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar26[9] = puVar26;
          puVar26[10] = puVar26;
          lVar29 = *(longlong *)
                    (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x2b8);
          if (lVar29 == 0) {
            uVar31 = 1;
            if ((char)uVar37 != '\x06') {
              uVar31 = uVar37;
            }
            uVar37 = uVar31;
            uVar24 = 0;
          }
          else {
            if ((char)uVar37 == '\x06') {
              uVar37 = *(ulonglong *)(lVar29 + 0x38) >> 0x3b;
            }
            uVar24 = *(undefined8 *)(lVar29 + 0x30);
          }
          puVar26[0xf] = uVar24;
          puVar26[0x10] = uVar37 << 0x3b | 0xc00000527800b400;
          *(int *)((longlong)puVar26 + 0x1c) = iVar20;
          if (puVar26 == (undefined8 *)0x0) {
            local_c8[0] = (code *)CONCAT71(local_c8[0]._1_7_,1);
            FUN_1447439e4(0);
          }
          else {
            LOCK();
            *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
            UNLOCK();
            local_c8[0] = (code *)CONCAT71(local_c8[0]._1_7_,1);
            FUN_1447439e4(puVar26);
            LOCK();
            piVar1 = (int *)(puVar26 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar26)(puVar26,1);
            }
          }
        }
        else {
          local_1c8 = local_c8;
          local_b8 = (undefined ***)0x0;
          local_a8 = &PTR_LAB_14ad89bb0;
          local_c8[0] = FUN_143920afc;
          local_a0 = puVar25;
          FUN_14005a792(&DAT_14ca9a440,L"InitInstanceData",&DAT_14cb390c0);
          if (local_c8[0] != (code *)0x0) {
            pppuVar32 = local_b8;
            if (local_b8 == (undefined ***)0x0) {
              pppuVar32 = &local_a8;
            }
            (*(code *)(*pppuVar32)[2])();
          }
        }
      }
      uVar24 = 1;
      goto LAB_143919f89;
    }
  }
  uVar24 = 0;
LAB_143919f89:
  if ((local_80 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return uVar24;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391ad0a FUN_14391ad0a body=1361 status=ok
// SIG undefined FUN_14391ad0a(void)

void FUN_14391ad0a(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
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
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_2 + 0x3c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x3b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x398) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x350) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x340) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x240) != 0) {
    FUN_1400020a8();
  }
  FUN_14392eaf2(param_2 + 0x10);
  if ((*(byte *)(param_1 + 0x30) & 4) == 0) goto LAB_14391aeb3;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_14391add8;
    if (iVar7 != 1) goto LAB_14391add3;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_14391add8;
  }
  else {
LAB_14391add3:
    if (iVar7 == 0x10) goto LAB_14391add8;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_14391add8:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_14391add8;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_14391af74;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_14391c555);
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
LAB_14391af74:
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
          goto LAB_14391aff4;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_14391aff4:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14ad89c58;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
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
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
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
    local_48 = &PTR_LAB_14ad89c10;
    local_68[0] = &LAB_143920eea;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveInstanceData",&DAT_14cb390c4);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
LAB_14391aeb3:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391b276 FUN_14391b276 body=1251 status=ok
// SIG undefined FUN_14391b276(void)

void FUN_14391b276(undefined8 param_1,float *param_2,uint *param_3)

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
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  uint uVar16;
  longlong lVar17;
  float fVar18;
  undefined8 uVar19;
  longlong *plVar20;
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
  code *local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  dVar1 = *(double *)(param_3 + 0x12);
  dVar2 = *(double *)(param_3 + 0x14);
  dVar3 = *(double *)(param_3 + 0x16);
  dVar4 = *(double *)(param_3 + 0x18);
  dVar5 = *(double *)(param_3 + 0x1a);
  dVar6 = *(double *)(param_3 + 0x1c);
  dVar7 = *(double *)(param_3 + 0x1e);
  dVar8 = *(double *)(param_3 + 0x20);
  dVar9 = *(double *)(param_3 + 0x22);
  dVar10 = *(double *)(param_3 + 0x24);
  dVar11 = *(double *)(param_3 + 0x26);
  dVar12 = *(double *)(param_3 + 0x28);
  dVar13 = *(double *)(param_3 + 0x2a);
  dVar14 = *(double *)(param_3 + 0x2c);
  dVar15 = *(double *)(param_3 + 0x2e);
  *param_2 = (float)*(double *)(param_3 + 0x10);
  param_2[1] = (float)dVar1;
  param_2[2] = (float)dVar2;
  param_2[3] = (float)dVar3;
  param_2[4] = (float)dVar4;
  param_2[5] = (float)dVar5;
  param_2[6] = (float)dVar6;
  param_2[7] = (float)dVar7;
  param_2[8] = (float)dVar8;
  param_2[9] = (float)dVar9;
  param_2[10] = (float)dVar10;
  param_2[0xb] = (float)dVar11;
  param_2[0xc] = (float)dVar12;
  param_2[0xd] = (float)dVar13;
  param_2[0xe] = (float)dVar14;
  param_2[0xf] = (float)dVar15;
  dVar1 = *(double *)(param_3 + 0x52);
  dVar2 = *(double *)(param_3 + 0x54);
  dVar3 = *(double *)(param_3 + 0x56);
  dVar4 = *(double *)(param_3 + 0x58);
  dVar5 = *(double *)(param_3 + 0x5a);
  dVar6 = *(double *)(param_3 + 0x5c);
  dVar7 = *(double *)(param_3 + 0x5e);
  dVar8 = *(double *)(param_3 + 0x60);
  dVar9 = *(double *)(param_3 + 0x62);
  dVar10 = *(double *)(param_3 + 100);
  dVar11 = *(double *)(param_3 + 0x66);
  dVar12 = *(double *)(param_3 + 0x68);
  dVar13 = *(double *)(param_3 + 0x6a);
  dVar14 = *(double *)(param_3 + 0x6c);
  dVar15 = *(double *)(param_3 + 0x6e);
  param_2[0x10] = (float)*(double *)(param_3 + 0x50);
  param_2[0x11] = (float)dVar1;
  param_2[0x12] = (float)dVar2;
  param_2[0x13] = (float)dVar3;
  param_2[0x14] = (float)dVar4;
  param_2[0x15] = (float)dVar5;
  param_2[0x16] = (float)dVar6;
  param_2[0x17] = (float)dVar7;
  param_2[0x18] = (float)dVar8;
  param_2[0x19] = (float)dVar9;
  param_2[0x1a] = (float)dVar10;
  param_2[0x1b] = (float)dVar11;
  param_2[0x1c] = (float)dVar12;
  param_2[0x1d] = (float)dVar13;
  param_2[0x1e] = (float)dVar14;
  param_2[0x1f] = (float)dVar15;
  uVar19 = *(undefined8 *)(param_3 + 0xb6);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0xb4);
  *(undefined8 *)(param_2 + 0x22) = uVar19;
  uVar19 = *(undefined8 *)(param_3 + 0xba);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 0xb8);
  *(undefined8 *)(param_2 + 0x26) = uVar19;
  param_2[0x28] = (float)param_3[0xbc];
  param_2[0x2b] = (float)param_3[0xbf];
  *(undefined8 *)(param_2 + 0x29) = *(undefined8 *)(param_3 + 0xbd);
  param_2[0x2e] = (float)param_3[0xc2];
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_3 + 0xc0);
  param_2[0x31] = (float)param_3[0xc];
  *(undefined8 *)(param_2 + 0x2f) = *(undefined8 *)(param_3 + 10);
  param_2[0x32] = 0.0;
  fVar18 = 0.0;
  if (*(longlong *)(param_3 + 6) == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = *(undefined8 *)(*(longlong *)(param_3 + 6) + 0x38);
  }
  *(undefined8 *)(param_2 + 0x34) = uVar19;
  if (*(longlong *)(param_3 + 6) != 0) {
    fVar18 = *(float *)(*(longlong *)(param_3 + 6) + 0xc);
  }
  param_2[0x36] = fVar18;
  if (((((param_3[1] != 0) && (uVar16 = *param_3, -1 < (int)uVar16)) &&
       ((int)uVar16 < DAT_14c9647dc)) &&
      ((plVar20 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
       plVar20 != (longlong *)0x0 && (*(uint *)(plVar20 + 2) == param_3[1])))) &&
     (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 && (lVar17 = *plVar20, lVar17 != 0)))) {
    if (DAT_14cac6e60 == 0) {
      local_e0 = &local_c8;
      local_c8 = FUN_144a7958c;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_142b47bc4;
      local_e8 = &LAB_1478989f1;
      local_f0 = &LAB_146391124;
      local_f8 = L"Engine";
      local_100 = 0x10000000000;
      local_108 = 0x10000005;
      local_110 = 0x10;
      local_118 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
      param_2[0x32] = *(float *)(lVar17 + 0x3d0);
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391b75a FUN_14391b75a body=169 status=ok
// SIG undefined FUN_14391b75a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14391b75a(void)

{
  DAT_14cb38818 = 0;
  if (DAT_14cb38810 != 0) {
    FUN_1400020a8();
  }
  DAT_14cb387d8 = 0;
  if (DAT_14cb387dc != 0) {
    FUN_14472eb64(&DAT_14cb387d0,0);
  }
  _DAT_14cb38800 = 0xffffffff;
  _DAT_14cb387f8 = 0;
  if (0x80 < DAT_14cb387fc) {
    DAT_14cb387fc = 0x80;
    FUN_1446efbd8(&DAT_14cb387e0,0);
  }
  if (DAT_14cb387f0 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14cb387d0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14391b804 FUN_14391b804 body=266 status=ok
// SIG undefined FUN_14391b804(void)

undefined8 FUN_14391b804(void)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb366a0 == 0) {
    local_30 = &local_18;
    local_18 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148063819;
    local_40 = &LAB_1460672b6;
    local_48 = L"Niagara";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraSettings",&DAT_14cb366a0,&DAT_148063818);
  }
  lVar1 = DAT_14cb366a0;
  lVar2 = *(longlong *)(DAT_14cb366a0 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(DAT_14cb366a0);
    lVar2 = *(longlong *)(lVar1 + 0x110);
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(lVar2 + 0xf1));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391b944 FUN_14391b944 body=169 status=ok
// SIG undefined FUN_14391b944(void)

void FUN_14391b944(void)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = &DAT_14cb38a70;
  lVar3 = -0x240;
  do {
    plVar1 = plVar4 + 2;
    if ((int)plVar4[3] == 0) {
LAB_14391b98c:
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar2 = (undefined8 *)*plVar1;
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,0);
        FUN_1446efa72(plVar1,0,0,0x10);
        *(undefined4 *)(plVar4 + 3) = 0;
        goto LAB_14391b98c;
      }
    }
    if ((int)plVar4[1] == 0) {
LAB_14391b9c3:
      if (*plVar4 != 0) {
        FUN_1400020a8();
      }
    }
    else if ((undefined8 *)*plVar4 != (undefined8 *)0x0) {
      (*(code *)**(undefined8 **)*plVar4)();
      FUN_1446efa72(plVar4,0,0,0x10);
      *(undefined4 *)(plVar4 + 1) = 0;
      goto LAB_14391b9c3;
    }
    plVar4 = plVar4 + -9;
    lVar3 = lVar3 + 0x48;
    if (lVar3 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 14391b9ed FUN_14391b9ed body=49 status=ok
// SIG undefined FUN_14391b9ed(void)

void FUN_14391b9ed(void)

{
  FUN_1480b1f51(DAT_14cb38a98,DAT_14cb38aa0);
  if (DAT_14cb38a98 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14391ba1e FUN_14391ba1e body=198 status=ok
// SIG undefined FUN_14391ba1e(void)

longlong * FUN_14391ba1e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1480980ec(&local_38);
  lVar1 = DAT_14cb420f0;
  if ((longlong)local_30 != 0) {
    lVar2 = 0;
    do {
      if (*(longlong *)(local_38 + lVar2) == param_2) {
        lVar1 = *(longlong *)(local_38 + 8 + lVar2);
        *param_1 = lVar1;
        if ((DAT_14c950c29 == 1) && (lVar1 != 0)) {
          FUN_1456cec3c();
        }
        lVar2 = *(longlong *)(local_38 + 0x10 + lVar2);
        goto LAB_14391baaf;
      }
      lVar2 = lVar2 + 0x28;
    } while ((longlong)local_30 * 0x28 != lVar2);
  }
  *param_1 = DAT_14cb420f0;
  lVar2 = DAT_14cb420f8;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
    lVar2 = DAT_14cb420f8;
  }
LAB_14391baaf:
  param_1[1] = lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14391bae6 FUN_14391bae6 body=442 status=ok
// SIG undefined FUN_14391bae6(void)

void FUN_14391bae6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined1 local_49;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined2 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_2[2] + 0x10);
    lVar10 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x60);
    }
    iVar9 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x68) - 1U &
                              (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar9 != -1) {
      do {
        lVar10 = *(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 0x20) == lVar4) {
          if (((lVar10 + 8U & 0xfffffffffffffff7) != 0) && (*(char *)(lVar10 + 0xc) == '\x01')) {
            local_38 = 0x400;
            if (*(char *)(param_2[1] + 0x228) != '\0') {
              local_38 = 0xf0;
            }
            local_48 = *(longlong *)(param_2[1] + 0x60);
            if (local_48 != 0) {
              LOCK();
              *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
              UNLOCK();
            }
            local_40 = *(undefined4 *)(lVar10 + 0x10);
            local_3c = *(undefined4 *)(lVar10 + 8);
            lVar4 = *param_2;
            local_2a = 0x10;
            FUN_140069376(lVar4);
            local_58 = &local_48;
            uVar5 = FUN_1480b3a56(lVar4 + 0x168,lVar4 + 0x70,&local_49,&local_2a);
            FUN_143204634(lVar4,uVar5);
            lVar4 = local_48;
            if (local_48 != 0) {
              LOCK();
              puVar1 = (uint *)(local_48 + 8);
              uVar2 = *puVar1;
              *puVar1 = *puVar1 - 1;
              UNLOCK();
              if ((uVar2 & 0x3fffffff) == 1) {
                puVar1 = (uint *)(local_48 + 8);
                LOCK();
                uVar2 = *puVar1;
                *puVar1 = *puVar1 | 0x40000000;
                UNLOCK();
                if ((uVar2 >> 0x1e & 1) == 0) {
                  bVar3 = *(byte *)(local_48 + 0xd);
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
            }
            if (*(char *)(lVar10 + 0xc) == '\x01') {
              *(undefined1 *)(lVar10 + 0xc) = 0;
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar10 + 0x18);
      } while (iVar9 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14391bca2 FUN_14391bca2 body=439 status=ok
// SIG undefined FUN_14391bca2(void)

void FUN_14391bca2(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 local_51;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((*(byte *)(param_1 + 0x18) & 0xfe) == 2) && ((char)param_2[3] == '\x01')) &&
     (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54))) {
    lVar4 = param_2[2];
    lVar11 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x60);
    }
    iVar10 = *(int *)(lVar11 + (ulonglong)
                               (*(int *)(param_1 + 0x68) - 1U &
                               (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar10 * 0x20) == lVar4) {
          if (lVar11 + 8 != 0 && lVar11 != 0) {
            local_40 = *(undefined8 *)(param_2[1] + 0x28);
            local_38 = *(longlong *)(param_2[1] + 0x58);
            if (local_38 != 0) {
              LOCK();
              *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
              UNLOCK();
            }
            lVar5 = *param_2;
            local_22 = 0x10;
            local_50 = lVar11 + 8;
            local_48 = lVar4;
            local_30 = param_1;
            FUN_140069376(lVar5);
            local_68 = &local_50;
            uVar6 = FUN_1480b3d7a(lVar5 + 0x168,lVar5 + 0x70,&local_51,&local_22);
            FUN_143204634(lVar5,uVar6);
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
                      bVar12 = plVar9 != DAT_14ca843c0;
                      plVar8 = plVar7;
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
                      *plVar7 = (longlong)plVar8;
                      LOCK();
                      bVar12 = plVar8 != DAT_14ca843c8;
                      plVar9 = plVar7;
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
          break;
        }
        iVar10 = *(int *)(lVar11 + 0x18);
      } while (iVar10 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14391be5a FUN_14391be5a body=450 status=ok
// SIG undefined FUN_14391be5a(void)

void FUN_14391be5a(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_d8 [32];
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
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar3 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar3 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar3 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar3;
  param_2[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14a1fb978;
  puVar3[3] = 0;
  *(int *)(puVar3 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x24) = 8;
  }
  else {
    puVar2 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar2 = local_b0;
    }
    FUN_1446fe144(puVar3 + 2,local_a8,0);
    puVar1 = (undefined8 *)puVar3[3];
    if ((undefined8 *)puVar3[3] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 2;
    }
    memcpy(puVar1,puVar2,(longlong)local_a8);
  }
  puVar3[0xd] = 0;
  *(int *)(puVar3 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x74) = 8;
  }
  else {
    puVar2 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar2 = local_a0;
    }
    FUN_1446fe1b8(puVar3 + 5,local_58,0);
    puVar1 = (undefined8 *)puVar3[0xd];
    if ((undefined8 *)puVar3[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar3 + 5;
    }
    memcpy(puVar1,puVar2,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar3 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar3 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar3 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar3 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1480b3c4e(param_1 + 0x1b8,param_2);
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391c01e FUN_14391c01e body=538 status=ok
// SIG undefined FUN_14391c01e(void)

void FUN_14391c01e(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *_Src;
  code **_Src_00;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  code **local_d0;
  code *local_c8;
  code **local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [8];
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined1 *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c8);
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
  *(int *)(puVar2 + 4) = (int)local_b8;
  if ((longlong)(int)local_b8 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    _Src_00 = local_c0;
    if (local_c0 == (code **)0x0) {
      _Src_00 = &local_c8;
    }
    FUN_1446fe144(puVar2 + 2,(int)local_b8,0);
    puVar1 = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 2;
    }
    memcpy(puVar1,_Src_00,(longlong)(int)local_b8);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_68;
  if ((longlong)local_68 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_70;
    if (local_70 == (undefined1 *)0x0) {
      _Src = local_b0;
    }
    FUN_1446fe1b8(puVar2 + 5,local_68,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_68 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_60;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_5c;
  *(undefined4 *)(puVar2 + 0x10) = uStack_58;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_54;
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8(local_70);
  }
  if (local_c0 != (code **)0x0) {
    FUN_1400020a8();
  }
  local_a0 = *(undefined8 *)(param_1 + 0x1c0);
  local_90 = *(longlong *)(param_1 + 0x1d8);
  local_98 = *(undefined8 *)(local_90 + 0x10);
  local_b8 = 0;
  local_a8 = &PTR_LAB_14ad88510;
  local_c8 = FUN_1480b3f80;
  local_d8 = 4;
  local_d0 = &local_c8;
  FUN_1481c8c5c(*(undefined8 *)(param_1 + 0x1c8),param_2,*(undefined8 *)(param_1 + 0x1d0),
                *(int *)(*(longlong *)(param_1 + 0x1b8) + 8) << 2);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391c4b4 FUN_14391c4b4 body=109 status=ok
// SIG undefined FUN_14391c4b4(void)

void FUN_14391c4b4(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_30 = param_1 + 1;
  FUN_1480b5330(lVar1 + 0x10,&local_24);
  *(char *)(*(longlong *)(lVar1 + 0x10) + 8 + (longlong)local_24 * 0x50) = (char)param_1[2];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391c52c FUN_14391c52c body=12 status=ok
// SIG undefined FUN_14391c52c(void)

void FUN_14391c52c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391c535. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391c538 FUN_14391c538 body=29 status=ok
// SIG undefined FUN_14391c538(void)

undefined8 FUN_14391c538(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391c57c FUN_14391c57c body=282 status=ok
// SIG undefined FUN_14391c57c(void)

undefined8 * FUN_14391c57c(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391c696 FUN_14391c696 body=164 status=ok
// SIG undefined FUN_14391c696(void)

void FUN_14391c696(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xb0;
  FUN_1480b5330(lVar2 + 0x10,&local_24);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x10) + 8 + (longlong)local_24 * 0x50) =
       *(undefined1 *)(param_1 + 0xb8);
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391c76e FUN_14391c76e body=12 status=ok
// SIG undefined FUN_14391c76e(void)

void FUN_14391c76e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391c777. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391c77a FUN_14391c77a body=29 status=ok
// SIG undefined FUN_14391c77a(void)

undefined8 FUN_14391c77a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391c798 FUN_14391c798 body=282 status=ok
// SIG undefined FUN_14391c798(void)

undefined8 * FUN_14391c798(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391c8b2 FUN_14391c8b2 body=117 status=ok
// SIG undefined FUN_14391c8b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14391c8b2(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480b582e(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480b582e(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391c91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391c928 FUN_14391c928 body=29 status=ok
// SIG undefined FUN_14391c928(void)

undefined8 FUN_14391c928(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391c95a FUN_14391c95a body=93 status=ok
// SIG undefined FUN_14391c95a(void)

void FUN_14391c95a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88b10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391c9b8 FUN_14391c9b8 body=93 status=ok
// SIG undefined FUN_14391c9b8(void)

void FUN_14391c9b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88b10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391ca16 FUN_14391ca16 body=126 status=ok
// SIG undefined FUN_14391ca16(void)

void FUN_14391ca16(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad88b10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014391ca85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14391ca9c FUN_14391ca9c body=19 status=ok
// SIG undefined FUN_14391ca9c(void)

undefined1 FUN_14391ca9c(undefined8 param_1,undefined8 param_2)

{
  FUN_148093588(param_2);
  return 1;
}



// FUNCTION 14391cab0 FUN_14391cab0 body=29 status=ok
// SIG undefined FUN_14391cab0(void)

undefined8 FUN_14391cab0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391cae2 FUN_14391cae2 body=93 status=ok
// SIG undefined FUN_14391cae2(void)

void FUN_14391cae2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391cb40 FUN_14391cb40 body=93 status=ok
// SIG undefined FUN_14391cb40(void)

void FUN_14391cb40(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88b80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391cb9e FUN_14391cb9e body=126 status=ok
// SIG undefined FUN_14391cb9e(void)

void FUN_14391cb9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad88b80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014391cc0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14391cc24 FUN_14391cc24 body=19 status=ok
// SIG undefined FUN_14391cc24(void)

undefined1 FUN_14391cc24(undefined8 param_1,undefined8 param_2)

{
  FUN_14809362c(param_2);
  return 1;
}



// FUNCTION 14391cc38 FUN_14391cc38 body=29 status=ok
// SIG undefined FUN_14391cc38(void)

undefined8 FUN_14391cc38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391cc6a FUN_14391cc6a body=93 status=ok
// SIG undefined FUN_14391cc6a(void)

void FUN_14391cc6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391ccc8 FUN_14391ccc8 body=93 status=ok
// SIG undefined FUN_14391ccc8(void)

void FUN_14391ccc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88bf0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391cd26 FUN_14391cd26 body=126 status=ok
// SIG undefined FUN_14391cd26(void)

void FUN_14391cd26(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad88bf0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014391cd95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14391cdac FUN_14391cdac body=19 status=ok
// SIG undefined FUN_14391cdac(void)

undefined1 FUN_14391cdac(undefined8 param_1,undefined8 param_2)

{
  FUN_148093840(param_2);
  return 1;
}



// FUNCTION 14391cdc0 FUN_14391cdc0 body=29 status=ok
// SIG undefined FUN_14391cdc0(void)

undefined8 FUN_14391cdc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391cdf2 FUN_14391cdf2 body=93 status=ok
// SIG undefined FUN_14391cdf2(void)

void FUN_14391cdf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391ce50 FUN_14391ce50 body=93 status=ok
// SIG undefined FUN_14391ce50(void)

void FUN_14391ce50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad88c60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14391ceae FUN_14391ceae body=126 status=ok
// SIG undefined FUN_14391ceae(void)

void FUN_14391ceae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad88c60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014391cf1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14391cf34 FUN_14391cf34 body=19 status=ok
// SIG undefined FUN_14391cf34(void)

undefined1 FUN_14391cf34(undefined8 param_1,undefined8 param_2)

{
  FUN_140c918c6(param_2);
  return 1;
}



// FUNCTION 14391cf60 FUN_14391cf60 body=185 status=ok
// SIG undefined FUN_14391cf60(void)

undefined8 FUN_14391cf60(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1439104c3(&local_30);
  if ((longlong)local_28 != 0) {
    plVar1 = local_30;
    do {
      if ((*param_3 == *plVar1) || (*param_3 == plVar1[1])) goto LAB_14391cff2;
      plVar1 = plVar1 + 9;
    } while (plVar1 != local_30 + (longlong)local_28 * 9);
  }
  FUN_1439112a9(&local_30);
  uVar2 = 1;
  if ((longlong)local_28 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)((longlong)local_30 + lVar3) == *param_3) goto LAB_14391cff2;
      lVar3 = lVar3 + 0x18;
    } while ((longlong)local_28 * 0x18 != lVar3);
  }
LAB_14391cffb:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
LAB_14391cff2:
  *(undefined1 *)(*param_1 + 1) = 1;
  uVar2 = 0;
  goto LAB_14391cffb;
}



// FUNCTION 14391d044 FUN_14391d044 body=29 status=ok
// SIG undefined FUN_14391d044(void)

undefined8 FUN_14391d044(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391d080 FUN_14391d080 body=12 status=ok
// SIG undefined FUN_14391d080(void)

void FUN_14391d080(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391d089. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391d08c FUN_14391d08c body=29 status=ok
// SIG undefined FUN_14391d08c(void)

undefined8 FUN_14391d08c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391d0aa FUN_14391d0aa body=282 status=ok
// SIG undefined FUN_14391d0aa(void)

undefined8 * FUN_14391d0aa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391d1c4 FUN_14391d1c4 body=117 status=ok
// SIG undefined FUN_14391d1c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14391d1c4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480b6320(_DAT_000000a8 + 0x18,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480b6320(param_1[0x15] + 0x18,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391d22f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391d23a FUN_14391d23a body=67 status=ok
// SIG undefined FUN_14391d23a(void)

void FUN_14391d23a(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1480b6528(*param_1 + 0x18,
                        (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  FUN_1480b6484(uVar1,param_1 + 2);
  return;
}



// FUNCTION 14391d288 FUN_14391d288 body=29 status=ok
// SIG undefined FUN_14391d288(void)

void FUN_14391d288(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14391d2a6 FUN_14391d2a6 body=67 status=ok
// SIG undefined FUN_14391d2a6(void)

undefined8 * FUN_14391d2a6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad88dd0;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391d2ea FUN_14391d2ea body=282 status=ok
// SIG undefined FUN_14391d2ea(void)

undefined8 * FUN_14391d2ea(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391d404 FUN_14391d404 body=160 status=ok
// SIG undefined FUN_14391d404(void)

void FUN_14391d404(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = FUN_1480b6528(param_1[0x15] + 0x18,
                        (int)((ulonglong)param_1[0x16] >> 0x20) * 0x17 + (int)param_1[0x16],
                        param_1 + 0x16);
  FUN_1480b6484(uVar2,param_1 + 0x17);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xc4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391d49a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14391d4b0 FUN_14391d4b0 body=380 status=ok
// SIG undefined FUN_14391d4b0(void)

void FUN_14391d4b0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_718 [32];
  int local_6f8;
  code **local_6f0;
  code *local_6e8 [2];
  undefined8 local_6d8;
  undefined **local_6c8;
  longlong local_6c0;
  undefined4 local_6b8;
  undefined1 local_6a8 [1648];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_718;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x20) != *(int *)(lVar2 + 0x4c)) {
    lVar3 = param_1[1];
    lVar7 = lVar2 + 0x50;
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x58);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar2 + 0x60) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *(longlong *)(lVar2 + 0x18) + (longlong)iVar6 * 0x50;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x18) + (longlong)iVar6 * 0x50) == lVar3) {
          if (((int *)(lVar1 + 8) != (int *)0x0 && lVar1 != 0) &&
             (iVar6 = *(int *)(lVar1 + 8), iVar6 != 0)) {
            uVar4 = *(undefined8 *)(param_1[4] + 0x28);
            FUN_1407779ba(local_6a8,param_2,lVar7,0);
            local_6c0 = param_1[2];
            local_6b8 = (undefined4)param_1[3];
            local_6d8 = 0;
            local_6c8 = &PTR_LAB_14ad88e40;
            local_6e8[0] = FUN_14391d62e;
            uVar5 = FUN_144735dd8(local_6a8,lVar1 + 0x10,0);
            local_6f8 = iVar6 << 2;
            local_6f0 = local_6e8;
            FUN_143a9681a(uVar4,local_6a8,uVar5,0);
            FUN_140779360(local_6a8);
            FUN_143a96774(uVar4,param_2);
            FUN_140778010(local_6a8);
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x48);
      } while (iVar6 != -1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_718) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14391d62e FUN_14391d62e body=122 status=ok
// SIG undefined FUN_14391d62e(void)

void FUN_14391d62e(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = *(uint *)((undefined8 *)*param_2 + 1) >> 2;
  local_28 = *(undefined8 *)*param_2;
  local_20 = uVar2;
  uVar1 = FUN_148093d0c(*param_1);
  *(undefined4 *)(*(longlong *)(*param_1 + 0x28) + 0xc + (longlong)(int)param_1[1] * 0x10) = uVar1;
  *(uint *)(*(longlong *)(*param_1 + 0x28) + 8 + (longlong)(int)param_1[1] * 0x10) = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391d6d4 FUN_14391d6d4 body=29 status=ok
// SIG undefined FUN_14391d6d4(void)

undefined8 FUN_14391d6d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391d702 FUN_14391d702 body=29 status=ok
// SIG undefined FUN_14391d702(void)

void FUN_14391d702(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14391d720 FUN_14391d720 body=29 status=ok
// SIG undefined FUN_14391d720(void)

undefined8 FUN_14391d720(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391d73e FUN_14391d73e body=282 status=ok
// SIG undefined FUN_14391d73e(void)

undefined8 * FUN_14391d73e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391d858 FUN_14391d858 body=105 status=ok
// SIG undefined FUN_14391d858(void)

void FUN_14391d858(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14391d4b0(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14391d4b0(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391d89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391d8c2 FUN_14391d8c2 body=67 status=ok
// SIG undefined FUN_14391d8c2(void)

void FUN_14391d8c2(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1480b6528(*param_1 + 0x18,
                        (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  FUN_1480b6484(uVar1,param_1 + 2);
  return;
}



// FUNCTION 14391d910 FUN_14391d910 body=29 status=ok
// SIG undefined FUN_14391d910(void)

void FUN_14391d910(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14391d92e FUN_14391d92e body=67 status=ok
// SIG undefined FUN_14391d92e(void)

undefined8 * FUN_14391d92e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad88e90;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391d972 FUN_14391d972 body=282 status=ok
// SIG undefined FUN_14391d972(void)

undefined8 * FUN_14391d972(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391da8c FUN_14391da8c body=160 status=ok
// SIG undefined FUN_14391da8c(void)

void FUN_14391da8c(undefined8 *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar2 = FUN_1480b6528(param_1[0x15] + 0x18,
                        (int)((ulonglong)param_1[0x16] >> 0x20) * 0x17 + (int)param_1[0x16],
                        param_1 + 0x16);
  FUN_1480b6484(uVar2,param_1 + 0x17);
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0xc4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391db22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14391db2c FUN_14391db2c body=51 status=ok
// SIG undefined FUN_14391db2c(void)

void FUN_14391db2c(longlong *param_1)

{
  undefined8 *puVar1;
  
  (**(code **)(*(longlong *)*param_1 + 0x20))();
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014391db55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 14391db6a FUN_14391db6a body=12 status=ok
// SIG undefined FUN_14391db6a(void)

void FUN_14391db6a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391db73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391db76 FUN_14391db76 body=29 status=ok
// SIG undefined FUN_14391db76(void)

undefined8 FUN_14391db76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391db94 FUN_14391db94 body=282 status=ok
// SIG undefined FUN_14391db94(void)

undefined8 * FUN_14391db94(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391dcae FUN_14391dcae body=98 status=ok
// SIG undefined FUN_14391dcae(void)

void FUN_14391dcae(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  puVar2 = (undefined8 *)param_1[0x15];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391dd06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14391dd10 FUN_14391dd10 body=110 status=ok
// SIG undefined FUN_14391dd10(void)

void FUN_14391dd10(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xe950) == param_2) {
          FUN_1480b75c8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xe950 + *param_1 + 0xe940);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14391dd9c FUN_14391dd9c body=12 status=ok
// SIG undefined FUN_14391dd9c(void)

void FUN_14391dd9c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391dda5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391dda8 FUN_14391dda8 body=29 status=ok
// SIG undefined FUN_14391dda8(void)

undefined8 FUN_14391dda8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391ddc6 FUN_14391ddc6 body=282 status=ok
// SIG undefined FUN_14391ddc6(void)

undefined8 * FUN_14391ddc6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391dee0 FUN_14391dee0 body=117 status=ok
// SIG undefined FUN_14391dee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14391dee0(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14391dd10(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14391dd10(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391df27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391df80 FUN_14391df80 body=12 status=ok
// SIG undefined FUN_14391df80(void)

void FUN_14391df80(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391df89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391df8c FUN_14391df8c body=29 status=ok
// SIG undefined FUN_14391df8c(void)

undefined8 FUN_14391df8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391dfaa FUN_14391dfaa body=282 status=ok
// SIG undefined FUN_14391dfaa(void)

undefined8 * FUN_14391dfaa(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391e0c4 FUN_14391e0c4 body=117 status=ok
// SIG undefined FUN_14391e0c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14391e0c4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480b7e22(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480b7e22(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391e12f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391e13a FUN_14391e13a body=570 status=ok
// SIG undefined FUN_14391e13a(void)

void FUN_14391e13a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  lVar5 = FUN_1480b3072(*param_1 + 0x10,
                        (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  if (param_1[2] == 0) {
    lVar8 = *(longlong *)(lVar5 + 0xd8);
    if (lVar8 != 0) {
      *(undefined8 *)(lVar5 + 0xd8) = 0;
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar8 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar8;
          plVar9 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
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
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1[2] + 0x128) + 0x10);
    lVar4 = *(longlong *)(lVar5 + 0xd8);
    if (lVar4 != lVar8) {
      *(longlong *)(lVar5 + 0xd8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
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
            plVar6 = (longlong *)FUN_14001cc68(0x10,8);
            plVar6[1] = lVar4;
            plVar9 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar6 = (longlong)plVar9;
                LOCK();
                bVar10 = plVar9 != DAT_14ca843c0;
                plVar7 = plVar6;
                if (bVar10) {
                  plVar9 = DAT_14ca843c0;
                  plVar7 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar7;
                UNLOCK();
              } while (bVar10);
            }
            else {
              do {
                *plVar6 = (longlong)plVar7;
                LOCK();
                bVar10 = plVar7 != DAT_14ca843c8;
                plVar9 = plVar6;
                if (bVar10) {
                  plVar7 = DAT_14ca843c8;
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
    lVar8 = FUN_1447b4020(param_1[2]);
    if (lVar8 != 0) {
      lVar8 = FUN_1447b4020(param_1[2]);
      lVar4 = *(longlong *)(lVar8 + 0x18);
      lVar8 = *(longlong *)(lVar5 + 0xe0);
      if (lVar8 == lVar4) {
        return;
      }
      *(longlong *)(lVar5 + 0xe0) = lVar4;
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      if (lVar8 == 0) {
        return;
      }
      goto LAB_14391e2d1;
    }
  }
  lVar8 = *(longlong *)(lVar5 + 0xe0);
  if (lVar8 == 0) {
    return;
  }
  *(undefined8 *)(lVar5 + 0xe0) = 0;
LAB_14391e2d1:
  LOCK();
  puVar1 = (uint *)(lVar8 + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar2 & 0x3fffffff) == 1) {
    LOCK();
    puVar1 = (uint *)(lVar8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 | 0x40000000;
    UNLOCK();
    if ((uVar2 >> 0x1e & 1) == 0) {
      bVar3 = *(byte *)(lVar8 + 0xd);
      plVar6 = (longlong *)FUN_14001cc68(0x10,8);
      plVar6[1] = lVar8;
      plVar9 = DAT_14ca843c0;
      plVar7 = DAT_14ca843c8;
      if ((bVar3 & 2) == 0) {
        do {
          *plVar6 = (longlong)plVar9;
          LOCK();
          bVar10 = plVar9 != DAT_14ca843c0;
          plVar7 = plVar6;
          if (bVar10) {
            plVar9 = DAT_14ca843c0;
            plVar7 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = plVar7;
          UNLOCK();
        } while (bVar10);
      }
      else {
        do {
          *plVar6 = (longlong)plVar7;
          LOCK();
          bVar10 = plVar7 != DAT_14ca843c8;
          plVar9 = plVar6;
          if (bVar10) {
            plVar7 = DAT_14ca843c8;
            plVar9 = DAT_14ca843c8;
          }
          DAT_14ca843c8 = plVar9;
          UNLOCK();
        } while (bVar10);
      }
    }
  }
  return;
}



// FUNCTION 14391e384 FUN_14391e384 body=12 status=ok
// SIG undefined FUN_14391e384(void)

void FUN_14391e384(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391e38d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391e390 FUN_14391e390 body=29 status=ok
// SIG undefined FUN_14391e390(void)

undefined8 FUN_14391e390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391e3ae FUN_14391e3ae body=282 status=ok
// SIG undefined FUN_14391e3ae(void)

undefined8 * FUN_14391e3ae(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391e4c8 FUN_14391e4c8 body=91 status=ok
// SIG undefined FUN_14391e4c8(void)

void FUN_14391e4c8(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14391e13a(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14391e13a(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391e504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391e54e FUN_14391e54e body=12 status=ok
// SIG undefined FUN_14391e54e(void)

void FUN_14391e54e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391e557. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391e55a FUN_14391e55a body=29 status=ok
// SIG undefined FUN_14391e55a(void)

undefined8 FUN_14391e55a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391e578 FUN_14391e578 body=282 status=ok
// SIG undefined FUN_14391e578(void)

undefined8 * FUN_14391e578(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391e692 FUN_14391e692 body=117 status=ok
// SIG undefined FUN_14391e692(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14391e692(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480b8b0e(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480b8b0e(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391e6fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391e708 FUN_14391e708 body=307 status=ok
// SIG undefined FUN_14391e708(void)

undefined8 FUN_14391e708(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  uVar6 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = uVar6;
  if (*(int *)(param_3 + 4) == 1) {
    uVar1 = *(undefined4 *)(*(longlong *)param_1[1] + 0x40);
    uVar3 = *(undefined8 *)(param_3[3] + 8);
    uVar4 = *(undefined8 *)*param_1;
    FUN_14391ba1e(&local_58,*param_3);
    local_48 = uVar3;
    local_50 = FUN_144830b78(local_40,&local_58);
    local_58 = local_48;
    local_40[0] = local_50;
    lVar7 = FUN_1480b8c60(uVar4,&local_58,uVar1);
    if (lVar7 == 0) {
      uVar10 = 0xffffffff;
    }
    else {
      plVar8 = (longlong *)FUN_144741050(local_40);
      lVar9 = DAT_14cb420d0;
      if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(DAT_14cb420d0);
      }
      if (((*plVar8 != lVar9) || ((short)plVar8[1] != DAT_14cb420d8)) ||
         (lVar9 = 0x14, *(char *)((longlong)plVar8 + 10) != DAT_14cb420da)) {
        lVar9 = 0xc;
      }
      uVar10 = (uint)*(ushort *)(lVar7 + lVar9);
    }
    puVar5 = (ulonglong *)param_1[2];
    iVar2 = (int)puVar5[1];
    *(uint *)(puVar5 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)puVar5 + 0xc) < iVar2 + 1U) {
      FUN_1446f48e2(puVar5,iVar2);
    }
    uVar6 = *puVar5;
    *(uint *)(uVar6 + (longlong)iVar2 * 4) = uVar10;
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return CONCAT71((int7)(uVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391e86e FUN_14391e86e body=29 status=ok
// SIG undefined FUN_14391e86e(void)

undefined8 FUN_14391e86e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391e88c FUN_14391e88c body=146 status=ok
// SIG undefined FUN_14391e88c(void)

void FUN_14391e88c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  
  puVar6 = (undefined4 *)
           FUN_1480b8ce6(*param_1 + 0x10,
                         (int)((ulonglong)param_1[1] >> 0x20) * 0x17 + (int)param_1[1],param_1 + 1);
  lVar3 = param_1[3];
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(puVar6 + 4);
  *(longlong *)(puVar6 + 2) = lVar3;
  *(longlong *)(puVar6 + 4) = lVar4;
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
  *puVar6 = (int)param_1[2];
  FUN_14054c6c4(puVar6 + 6,param_1 + 5);
  return;
}



// FUNCTION 14391e928 FUN_14391e928 body=29 status=ok
// SIG undefined FUN_14391e928(void)

void FUN_14391e928(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14391e946 FUN_14391e946 body=97 status=ok
// SIG undefined FUN_14391e946(void)

undefined8 * FUN_14391e946(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14ad89120;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[5];
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



// FUNCTION 14391e9a8 FUN_14391e9a8 body=282 status=ok
// SIG undefined FUN_14391e9a8(void)

undefined8 * FUN_14391e9a8(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391eac2 FUN_14391eac2 body=275 status=ok
// SIG undefined FUN_14391eac2(void)

void FUN_14391eac2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  puVar6 = (undefined4 *)
           FUN_1480b8ce6(param_1[0x15] + 0x10,
                         (int)((ulonglong)param_1[0x16] >> 0x20) * 0x17 + (int)param_1[0x16],
                         param_1 + 0x16);
  uVar3 = param_1[0x18];
  lVar4 = param_1[0x19];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(puVar6 + 4);
  *(undefined8 *)(puVar6 + 2) = uVar3;
  *(longlong *)(puVar6 + 4) = lVar4;
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
  *puVar6 = *(undefined4 *)(param_1 + 0x17);
  FUN_14054c6c4(puVar6 + 6,param_1 + 0x1a);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar5 = (longlong *)param_1[0x19];
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
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(param_1 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391ebc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14391ebf4 FUN_14391ebf4 body=12 status=ok
// SIG undefined FUN_14391ebf4(void)

void FUN_14391ebf4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391ebfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391ec00 FUN_14391ec00 body=29 status=ok
// SIG undefined FUN_14391ec00(void)

undefined8 FUN_14391ec00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391ec1e FUN_14391ec1e body=282 status=ok
// SIG undefined FUN_14391ec1e(void)

undefined8 * FUN_14391ec1e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391ed38 FUN_14391ed38 body=117 status=ok
// SIG undefined FUN_14391ed38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14391ed38(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480b8b0e(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480b8b0e(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391eda3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14391eeb0 FUN_14391eeb0 body=28 status=ok
// SIG undefined FUN_14391eeb0(void)

undefined8 FUN_14391eeb0(undefined8 param_1,undefined8 param_2)

{
  FUN_1480ba186(param_2,param_1);
  return param_1;
}



// FUNCTION 14391eecc FUN_14391eecc body=28 status=ok
// SIG undefined FUN_14391eecc(void)

undefined8 FUN_14391eecc(undefined8 param_1,undefined8 param_2)

{
  FUN_1480ba272(param_2,param_1);
  return param_1;
}



// FUNCTION 14391eee8 FUN_14391eee8 body=28 status=ok
// SIG undefined FUN_14391eee8(void)

undefined8 FUN_14391eee8(undefined8 param_1,undefined8 param_2)

{
  FUN_1480ba35e(param_2,param_1);
  return param_1;
}



// FUNCTION 14391ef6c FUN_14391ef6c body=149 status=ok
// SIG undefined FUN_14391ef6c(void)

void FUN_14391ef6c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_38 = param_1 + 1;
  FUN_1480ba916(lVar1 + 0x20,&local_2c);
  lVar1 = *(longlong *)(lVar1 + 0x20) + (longlong)local_2c * 0x20;
  if (param_1 + 3 != (longlong *)(lVar1 + 8)) {
    *(int *)(lVar1 + 8) = (int)param_1[3];
    *(undefined1 *)(lVar1 + 0xc) = 1;
  }
  uVar2 = FUN_1481c88ee(param_1[2] + 0x38,param_2);
  *(undefined4 *)(lVar1 + 0x10) = uVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391f00c FUN_14391f00c body=29 status=ok
// SIG undefined FUN_14391f00c(void)

void FUN_14391f00c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14391f02a FUN_14391f02a body=29 status=ok
// SIG undefined FUN_14391f02a(void)

undefined8 FUN_14391f02a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391f048 FUN_14391f048 body=282 status=ok
// SIG undefined FUN_14391f048(void)

undefined8 * FUN_14391f048(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391f162 FUN_14391f162 body=204 status=ok
// SIG undefined FUN_14391f162(void)

void FUN_14391f162(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = *(longlong *)(param_1 + 0xa8);
  local_30 = param_1 + 0xb0;
  FUN_1480ba916(lVar2 + 0x20,&local_24);
  lVar2 = *(longlong *)(lVar2 + 0x20) + (longlong)local_24 * 0x20;
  if ((undefined4 *)(param_1 + 0xc0) != (undefined4 *)(lVar2 + 8)) {
    *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(param_1 + 0xc0);
    *(undefined1 *)(lVar2 + 0xc) = 1;
  }
  uVar3 = FUN_1481c88ee(*(longlong *)(param_1 + 0xb8) + 0x38,&DAT_14ca85100);
  *(undefined4 *)(lVar2 + 0x10) = uVar3;
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14391f244 FUN_14391f244 body=187 status=ok
// SIG undefined FUN_14391f244(void)

void FUN_14391f244(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
    lVar2 = param_1[1];
    lVar4 = lVar1 + 0x58;
    if (*(longlong *)(lVar1 + 0x60) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0x68) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0x20) + (longlong)iVar3 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar3 * 0x20) == lVar2) {
          if ((lVar4 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          if (*(int *)(lVar4 + 0x10) != -1) {
            FUN_1400ee60a(param_1[2] + 0x38,(undefined4 *)(lVar4 + 0x10));
            *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
            lVar1 = *param_1;
            lVar2 = param_1[1];
          }
          FUN_1480baeb6(lVar1 + 0x20,lVar2);
          return;
        }
        iVar3 = *(int *)(lVar4 + 0x18);
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 14391f30a FUN_14391f30a body=12 status=ok
// SIG undefined FUN_14391f30a(void)

void FUN_14391f30a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391f313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391f316 FUN_14391f316 body=29 status=ok
// SIG undefined FUN_14391f316(void)

undefined8 FUN_14391f316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391f334 FUN_14391f334 body=282 status=ok
// SIG undefined FUN_14391f334(void)

undefined8 * FUN_14391f334(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391f44e FUN_14391f44e body=250 status=ok
// SIG undefined FUN_14391f44e(void)

void FUN_14391f44e(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    lVar3 = param_1[0x16];
    lVar5 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar5 = *(longlong *)(lVar2 + 0x60);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar4 * 0x20) == lVar3) {
          if ((lVar5 + 8U & 0xfffffffffffffff7) != 0) {
            if (*(int *)(lVar5 + 0x10) != -1) {
              FUN_1400ee60a(param_1[0x17] + 0x38,(undefined4 *)(lVar5 + 0x10));
              *(undefined4 *)(lVar5 + 0x10) = 0xffffffff;
              lVar2 = param_1[0x15];
              lVar3 = param_1[0x16];
            }
            FUN_1480baeb6(lVar2 + 0x20,lVar3);
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391f501. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14391f554 FUN_14391f554 body=191 status=ok
// SIG undefined FUN_14391f554(void)

void FUN_14391f554(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  plVar3 = param_1 + 1;
  if ((longlong *)param_1[9] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[9];
  }
  if ((longlong)(int)param_1[10] != 0) {
    plVar4 = plVar3 + (longlong)(int)param_1[10] * 2;
    lVar5 = *param_1;
    do {
      if (*(int *)(lVar5 + 0x28) != *(int *)(lVar5 + 0x54)) {
        lVar2 = *plVar3;
        lVar7 = lVar5 + 0x58;
        if (*(longlong *)(lVar5 + 0x60) != 0) {
          lVar7 = *(longlong *)(lVar5 + 0x60);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(lVar5 + 0x68) - 1U &
                                 (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
        if (iVar6 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar6 * 0x20);
            if (*(longlong *)(*(longlong *)(lVar5 + 0x20) + (longlong)iVar6 * 0x20) == lVar2) {
              if (((plVar3 != plVar1) && (plVar1 != (longlong *)0x0)) &&
                 (plVar1 != (longlong *)&DAT_fffffffffffffff8)) {
                *(int *)(plVar1 + 1) = (int)plVar3[1];
                *(undefined1 *)((longlong)plVar1 + 0xc) = 1;
                lVar5 = *param_1;
              }
              break;
            }
            iVar6 = (int)plVar1[3];
          } while (iVar6 != -1);
        }
      }
      plVar3 = plVar3 + 2;
    } while (plVar3 != plVar4);
  }
  return;
}



// FUNCTION 14391f61e FUN_14391f61e body=29 status=ok
// SIG undefined FUN_14391f61e(void)

void FUN_14391f61e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14391f63c FUN_14391f63c body=57 status=ok
// SIG undefined FUN_14391f63c(void)

undefined8 * FUN_14391f63c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14ad89620;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391f676 FUN_14391f676 body=282 status=ok
// SIG undefined FUN_14391f676(void)

undefined8 * FUN_14391f676(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391f790 FUN_14391f790 body=278 status=ok
// SIG undefined FUN_14391f790(void)

void FUN_14391f790(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  plVar6 = (longlong *)param_1[0x1e];
  plVar5 = param_1 + 0x16;
  if (plVar6 != (longlong *)0x0) {
    plVar5 = plVar6;
  }
  if ((longlong)*(int *)(param_1 + 0x1f) != 0) {
    plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x1f) * 2;
    do {
      lVar3 = param_1[0x15];
      if (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)) {
        lVar4 = *plVar5;
        lVar8 = lVar3 + 0x58;
        if (*(longlong *)(lVar3 + 0x60) != 0) {
          lVar8 = *(longlong *)(lVar3 + 0x60);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(lVar3 + 0x68) - 1U &
                                 (int)lVar4 + (int)((ulonglong)lVar4 >> 0x20) * 0x17) * 4);
        if (iVar7 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar7 * 0x20);
            if (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar7 * 0x20) == lVar4) {
              if (((plVar5 != plVar2) && (plVar2 != (longlong *)0x0)) &&
                 (plVar2 != (longlong *)&DAT_fffffffffffffff8)) {
                *(int *)(plVar2 + 1) = (int)plVar5[1];
                *(undefined1 *)((longlong)plVar2 + 0xc) = 1;
              }
              break;
            }
            iVar7 = (int)plVar2[3];
          } while (iVar7 != -1);
        }
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar6);
    plVar6 = (longlong *)param_1[0x1e];
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014391f89c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*param_1)(param_1,1);
      return;
    }
  }
  return;
}



// FUNCTION 14391f8e8 FUN_14391f8e8 body=29 status=ok
// SIG undefined FUN_14391f8e8(void)

undefined8 FUN_14391f8e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391f906 FUN_14391f906 body=288 status=ok
// SIG undefined FUN_14391f906(void)

void FUN_14391f906(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 **local_60;
  undefined1 *local_58 [2];
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x28) != *(int *)(lVar1 + 0x54)) {
    lVar2 = param_1[1];
    lVar5 = lVar1 + 0x58;
    if (*(longlong *)(lVar1 + 0x60) != 0) {
      lVar5 = *(longlong *)(lVar1 + 0x60);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar1 + 0x68) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (longlong)iVar4 * 0x20) == lVar2) {
          if (((lVar5 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar5 + 0x10) != -1)) {
            local_30 = param_1[3];
            uVar3 = *(undefined8 *)(param_1[2] + 0x28);
            local_28 = (undefined4)param_1[4];
            local_60 = local_58;
            local_48 = 0;
            local_38 = &PTR_LAB_14ad89690;
            local_58[0] = &LAB_14391f8a6;
            local_68 = 4;
            FUN_1481c8c5c(uVar3,param_2,*(undefined8 *)(param_1[2] + 0x58),
                          *(int *)(lVar5 + 0x10) << 2);
            FUN_143a96774(uVar3,param_2);
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x18);
      } while (iVar4 != -1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14391fa32 FUN_14391fa32 body=29 status=ok
// SIG undefined FUN_14391fa32(void)

void FUN_14391fa32(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14391fa50 FUN_14391fa50 body=29 status=ok
// SIG undefined FUN_14391fa50(void)

undefined8 FUN_14391fa50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391fa6e FUN_14391fa6e body=282 status=ok
// SIG undefined FUN_14391fa6e(void)

undefined8 * FUN_14391fa6e(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391fb88 FUN_14391fb88 body=358 status=ok
// SIG undefined FUN_14391fb88(void)

void FUN_14391fb88(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 **local_70;
  undefined1 *local_68 [2];
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  lVar2 = param_1[0x15];
  if (*(int *)(lVar2 + 0x28) != *(int *)(lVar2 + 0x54)) {
    lVar3 = param_1[0x16];
    lVar6 = lVar2 + 0x58;
    if (*(longlong *)(lVar2 + 0x60) != 0) {
      lVar6 = *(longlong *)(lVar2 + 0x60);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar2 + 0x68) - 1U &
                             (int)lVar3 + (int)((ulonglong)lVar3 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(lVar2 + 0x20) + (longlong)iVar5 * 0x20;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar5 * 0x20) == lVar3) {
          if (((lVar6 + 8U & 0xfffffffffffffff7) != 0) && (*(int *)(lVar6 + 0x10) != -1)) {
            local_40 = param_1[0x18];
            uVar4 = *(undefined8 *)(param_1[0x17] + 0x28);
            local_38 = *(undefined4 *)(param_1 + 0x19);
            local_70 = local_68;
            local_58 = 0;
            local_48 = &PTR_LAB_14ad89690;
            local_68[0] = &LAB_14391f8a6;
            local_78 = 4;
            FUN_1481c8c5c(uVar4,&DAT_14ca85100,*(undefined8 *)(param_1[0x17] + 0x58),
                          *(int *)(lVar6 + 0x10) << 2);
            FUN_143a96774(uVar4,&DAT_14ca85100);
          }
          break;
        }
        iVar5 = *(int *)(lVar6 + 0x18);
      } while (iVar5 != -1);
    }
  }
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(param_1 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*param_1)(param_1,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14391fd8c FUN_14391fd8c body=12 status=ok
// SIG undefined FUN_14391fd8c(void)

void FUN_14391fd8c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391fd95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391fd98 FUN_14391fd98 body=29 status=ok
// SIG undefined FUN_14391fd98(void)

undefined8 FUN_14391fd98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391fdb6 FUN_14391fdb6 body=282 status=ok
// SIG undefined FUN_14391fdb6(void)

undefined8 * FUN_14391fdb6(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14391ffc4 FUN_14391ffc4 body=12 status=ok
// SIG undefined FUN_14391ffc4(void)

void FUN_14391ffc4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014391ffcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14391ffd0 FUN_14391ffd0 body=29 status=ok
// SIG undefined FUN_14391ffd0(void)

undefined8 FUN_14391ffd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14391ffee FUN_14391ffee body=282 status=ok
// SIG undefined FUN_14391ffee(void)

undefined8 * FUN_14391ffee(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 143920108 FUN_143920108 body=117 status=ok
// SIG undefined FUN_143920108(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143920108(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1480bc25e(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1480bc25e(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143920173. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1439201ac FUN_1439201ac body=2382 status=ok
// SIG undefined FUN_1439201ac(void)

void FUN_1439201ac(undefined2 *param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  ulonglong *local_88;
  undefined1 local_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_60;
  ulonglong local_58 [3];
  
  local_58[2] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_3 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x72) = DAT_14c9a52a0;
    *(undefined8 *)(param_1 + 0x6e) = DAT_14c9a5298;
    *(undefined8 *)(param_1 + 0x74) = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0x90) = DAT_14c9a5298;
    *(undefined4 *)(param_1 + 0x94) = DAT_14c9a52a0;
    goto LAB_143920928;
  }
  lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x1a8);
  if (lVar5 == 0) {
LAB_143920200:
    lVar9 = *(longlong *)(param_1 + 0x78);
    if (lVar9 != 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
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
          bVar3 = *(byte *)(lVar9 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar9;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
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
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
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
  else {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
    if ((*(uint *)(lVar5 + 0x28) >> 8 & 1) == 0) goto LAB_143920200;
    if ((*(uint *)(lVar5 + 0x28) & 0x10) == 0) {
      local_88 = local_58;
      local_58[1] = 0;
      local_58[0]._0_2_ =
           (ushort)(byte)((*(byte *)(*(longlong *)(param_3 + 0x10) + 0x1d4) ^ 1) * '\x04' + 0x1c) <<
           8;
      local_58[0] = (ulonglong)CONCAT12(1,(short)local_58[0]);
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2,lVar5);
    }
    else {
      local_88 = local_58;
      local_58[1] = 0;
      local_58[0] = 0x40000;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_60,param_2,lVar5);
    }
    plVar11 = (longlong *)(param_1 + 0x78);
    if (plVar11 == &local_60) {
LAB_1439203cb:
      lVar9 = local_60;
      if (local_60 != 0) {
        LOCK();
        puVar1 = (uint *)(local_60 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          puVar1 = (uint *)(local_60 + 8);
          LOCK();
          uVar2 = *puVar1;
          *puVar1 = *puVar1 | 0x40000000;
          UNLOCK();
          if ((uVar2 >> 0x1e & 1) == 0) {
            bVar3 = *(byte *)(local_60 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar9;
            plVar11 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar11;
                LOCK();
                bVar13 = plVar11 != DAT_14ca843c0;
                plVar10 = plVar8;
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
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar13 = plVar10 != DAT_14ca843c8;
                plVar11 = plVar8;
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
    else {
      lVar9 = *plVar11;
      *plVar11 = local_60;
      local_60 = 0;
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
            bVar3 = *(byte *)(lVar9 + 0xd);
            plVar8 = (longlong *)FUN_14001cc68(0x10,8);
            plVar8[1] = lVar9;
            plVar11 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar3 & 2) == 0) {
              do {
                *plVar8 = (longlong)plVar11;
                LOCK();
                bVar13 = plVar11 != DAT_14ca843c0;
                plVar10 = plVar8;
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
                *plVar8 = (longlong)plVar10;
                LOCK();
                bVar13 = plVar10 != DAT_14ca843c8;
                plVar11 = plVar8;
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
        goto LAB_1439203cb;
      }
    }
  }
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x130);
  lVar12 = *(longlong *)(param_1 + 0x7c);
  if (lVar12 != lVar9) {
    *(longlong *)(param_1 + 0x7c) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar12 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
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
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
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
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0xd8);
  lVar12 = *(longlong *)(param_1 + 0x80);
  if (lVar12 != lVar9) {
    *(longlong *)(param_1 + 0x80) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar12 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
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
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
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
  lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0xe8);
  lVar12 = *(longlong *)(param_1 + 0x84);
  if (lVar12 != lVar9) {
    *(longlong *)(param_1 + 0x84) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar12 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
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
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
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
  if (*(longlong *)(param_3 + 0x18) == 0) {
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x178);
  }
  else {
    lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x18) + 0x20);
  }
  lVar12 = *(longlong *)(param_1 + 0x88);
  if (lVar12 != lVar9) {
    *(longlong *)(param_1 + 0x88) = lVar9;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
    }
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        LOCK();
        puVar1 = (uint *)(lVar12 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar12 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
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
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
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
  lVar9 = *(longlong *)(param_3 + 0x10);
  iVar6 = *(int *)(lVar9 + 0x1d0);
  if (iVar6 < 0) {
    iVar4 = *(int *)(lVar9 + 0x1c0);
    if (*(char *)(lVar9 + 0x1d4) == '\x01') {
      iVar6 = iVar4 + 3;
      if (-1 < iVar4) {
        iVar6 = iVar4;
      }
      iVar6 = iVar6 >> 2;
    }
    else {
      iVar6 = iVar4 / 2;
    }
  }
  *(int *)(param_1 + 0x6e) = iVar6 / 3;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_3 + 0x20);
  *(undefined4 *)(param_1 + 0x72) = *(undefined4 *)(param_3 + 0x24);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x14c);
  if (*(longlong *)(param_1 + 0x84) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x108);
  }
  *(undefined4 *)(param_1 + 0x76) = uVar7;
  if ((*(longlong *)(param_1 + 0x78) == 0) || (*(longlong *)(param_1 + 0x7c) == 0)) {
    bVar13 = false;
  }
  else {
    bVar13 = *(longlong *)(param_1 + 0x80) != 0;
  }
  *(bool *)param_1 = bVar13;
  if ((*(char *)(param_3 + 0x28) == '\x01') &&
     (lVar9 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x280), lVar9 != 0)) {
    LOCK();
    *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
    UNLOCK();
    lVar12 = *(longlong *)(param_1 + 0x8c);
    if (lVar12 != lVar9) {
      *(longlong *)(param_1 + 0x8c) = lVar9;
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      if (lVar12 != 0) goto LAB_143920767;
    }
LAB_1439207c5:
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
        bVar3 = *(byte *)(lVar9 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar9;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar8;
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
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar8;
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
  else {
    lVar12 = *(longlong *)(param_1 + 0x8c);
    if (lVar12 != 0) {
      *(undefined8 *)(param_1 + 0x8c) = 0;
      lVar9 = 0;
LAB_143920767:
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar12 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar12 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar12;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar8;
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
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar8;
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
      if (lVar9 != 0) goto LAB_1439207c5;
    }
  }
  if (*(char *)(param_3 + 0x28) == '\x01') {
    bVar13 = *(longlong *)(param_1 + 0x8c) != 0;
  }
  else {
    bVar13 = false;
  }
  *(bool *)((longlong)param_1 + 1) = bVar13;
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(param_1 + 0x92) = *(undefined4 *)(param_3 + 0x30);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_3 + 0x34);
  if (0 < *(int *)(param_3 + 0x48)) {
    local_70 = param_3 + 0x38;
    local_88 = (ulonglong *)CONCAT44(local_88._4_4_,*(int *)(param_3 + 0x48));
    local_78 = 1;
    local_80 = 0x30;
    FUN_140661c88(param_1 + 0x98,param_2,L"NDISkelMesh_SectionInfos",0x10);
  }
  if (0 < *(int *)(param_3 + 0x68)) {
    local_70 = param_3 + 0x58;
    local_88 = (ulonglong *)CONCAT44(local_88._4_4_,*(int *)(param_3 + 0x68));
    local_78 = 1;
    local_80 = 0x20;
    FUN_140661c88(param_1 + 0xa4,param_2,L"NDISkelMesh_FilteredAndUnfilteredSections",2);
  }
  if (lVar5 != 0) {
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
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar8;
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
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar8;
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
LAB_143920928:
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_3 + 0x78);
  *(undefined4 *)(param_1 + 0xb2) = *(undefined4 *)(param_3 + 0x7c);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_3 + 0x80);
  if (0 < *(int *)(param_3 + 0x98)) {
    local_70 = param_3 + 0x88;
    local_88 = (ulonglong *)CONCAT44(local_88._4_4_,*(int *)(param_3 + 0x98));
    local_78 = 1;
    local_80 = 1;
    FUN_140661c88(param_1 + 0xb8,param_2,L"NDISkelMesh_SocketTransforms",0x10);
  }
  if (0 < *(int *)(param_3 + 0xb8)) {
    local_70 = param_3 + 0xa8;
    local_88 = (ulonglong *)CONCAT44(local_88._4_4_,*(int *)(param_3 + 0xb8));
    local_78 = 1;
    local_80 = 0x20;
    FUN_140661c88(param_1 + 0xc4,param_2,L"NDISkelMesh_FilteredAndUnfilteredSockets",2);
  }
  if ((local_58[2] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143920afc FUN_143920afc body=131 status=ok
// SIG undefined FUN_143920afc(void)

void FUN_143920afc(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)*param_1;
  local_38 = (longlong *)*param_1 + 1;
  FUN_140fd21b4(lVar1 + 0x10,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_1439201ac(*(longlong *)(lVar1 + 0x10) + (longlong)local_2c * 0x1d0 + 0x10,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 143920b8a FUN_143920b8a body=12 status=ok
// SIG undefined FUN_143920b8a(void)

void FUN_143920b8a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143920b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143920b96 FUN_143920b96 body=187 status=ok
// SIG undefined FUN_143920b96(void)

undefined8 * FUN_143920b96(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_LAB_14ad89bb0;
  lVar2 = param_1[1];
  if (lVar2 != 0) {
    if (*(ulonglong *)(lVar2 + 0xb0) != 0 && (*(ulonglong *)(lVar2 + 0xb0) & 1) == 0) {
      FUN_1400020a8();
    }
    if (*(ulonglong *)(lVar2 + 0x90) != 0 && (*(ulonglong *)(lVar2 + 0x90) & 1) == 0) {
      FUN_1400020a8();
    }
    if (*(ulonglong *)(lVar2 + 0x60) != 0 && (*(ulonglong *)(lVar2 + 0x60) & 1) == 0) {
      FUN_1400020a8();
    }
    if (*(ulonglong *)(lVar2 + 0x40) != 0 && (*(ulonglong *)(lVar2 + 0x40) & 1) == 0) {
      FUN_1400020a8();
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_1400020a8(lVar2);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143920c52 FUN_143920c52 body=282 status=ok
// SIG undefined FUN_143920c52(void)

undefined8 * FUN_143920c52(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 143920d6c FUN_143920d6c body=359 status=ok
// SIG undefined FUN_143920d6c(void)

void FUN_143920d6c(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [40];
  longlong *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
    UNLOCK();
  }
  lVar2 = **(longlong **)(param_1 + 0xa8);
  local_30 = *(longlong **)(param_1 + 0xa8) + 1;
  FUN_140fd21b4(lVar2 + 0x10,&local_24);
  FUN_1439201ac(*(longlong *)(lVar2 + 0x10) + (longlong)local_24 * 0x1d0 + 0x10,&DAT_14ca85100,
                *(undefined8 *)(param_1 + 0xa8));
  lVar2 = *(longlong *)(param_1 + 0xa8);
  if (lVar2 != 0) {
    if (*(ulonglong *)(lVar2 + 0xb0) != 0 && (*(ulonglong *)(lVar2 + 0xb0) & 1) == 0) {
      FUN_1400020a8();
    }
    if (*(ulonglong *)(lVar2 + 0x90) != 0 && (*(ulonglong *)(lVar2 + 0x90) & 1) == 0) {
      FUN_1400020a8();
    }
    if (*(ulonglong *)(lVar2 + 0x60) != 0 && (*(ulonglong *)(lVar2 + 0x60) & 1) == 0) {
      FUN_1400020a8();
    }
    if (*(ulonglong *)(lVar2 + 0x40) != 0 && (*(ulonglong *)(lVar2 + 0x40) & 1) == 0) {
      FUN_1400020a8();
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    FUN_1400020a8(lVar2);
  }
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143920f08 FUN_143920f08 body=12 status=ok
// SIG undefined FUN_143920f08(void)

void FUN_143920f08(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143920f11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 143920f14 FUN_143920f14 body=29 status=ok
// SIG undefined FUN_143920f14(void)

undefined8 FUN_143920f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143920f32 FUN_143920f32 body=282 status=ok
// SIG undefined FUN_143920f32(void)

undefined8 * FUN_143920f32(undefined8 *param_1,int param_2)

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
          __tlregdtor(&LAB_14391c555);
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



// FUNCTION 14392104c FUN_14392104c body=117 status=ok
// SIG undefined FUN_14392104c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14392104c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140c98e24(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140c98e24(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143921093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1439210c2 FUN_1439210c2 body=29 status=ok
// SIG undefined FUN_1439210c2(void)

undefined8 FUN_1439210c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1439210f4 FUN_1439210f4 body=93 status=ok
// SIG undefined FUN_1439210f4(void)

void FUN_1439210f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89c70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921152 FUN_143921152 body=93 status=ok
// SIG undefined FUN_143921152(void)

void FUN_143921152(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89c70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439211b0 FUN_1439211b0 body=126 status=ok
// SIG undefined FUN_1439211b0(void)

void FUN_1439211b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89c70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014392121f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143921236 FUN_143921236 body=19 status=ok
// SIG undefined FUN_143921236(void)

undefined1 FUN_143921236(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a6400(param_2);
  return 1;
}



// FUNCTION 14392124a FUN_14392124a body=29 status=ok
// SIG undefined FUN_14392124a(void)

undefined8 FUN_14392124a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14392127c FUN_14392127c body=93 status=ok
// SIG undefined FUN_14392127c(void)

void FUN_14392127c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439212da FUN_1439212da body=93 status=ok
// SIG undefined FUN_1439212da(void)

void FUN_1439212da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921338 FUN_143921338 body=126 status=ok
// SIG undefined FUN_143921338(void)

void FUN_143921338(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89ce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439213a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439213be FUN_1439213be body=19 status=ok
// SIG undefined FUN_1439213be(void)

undefined1 FUN_1439213be(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a6570(param_2);
  return 1;
}



// FUNCTION 1439213d2 FUN_1439213d2 body=29 status=ok
// SIG undefined FUN_1439213d2(void)

undefined8 FUN_1439213d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143921404 FUN_143921404 body=93 status=ok
// SIG undefined FUN_143921404(void)

void FUN_143921404(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89d50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921462 FUN_143921462 body=93 status=ok
// SIG undefined FUN_143921462(void)

void FUN_143921462(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89d50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439214c0 FUN_1439214c0 body=126 status=ok
// SIG undefined FUN_1439214c0(void)

void FUN_1439214c0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89d50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014392152f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143921546 FUN_143921546 body=19 status=ok
// SIG undefined FUN_143921546(void)

undefined1 FUN_143921546(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a68ba(param_2);
  return 1;
}



// FUNCTION 14392155a FUN_14392155a body=29 status=ok
// SIG undefined FUN_14392155a(void)

undefined8 FUN_14392155a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14392158c FUN_14392158c body=93 status=ok
// SIG undefined FUN_14392158c(void)

void FUN_14392158c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89dc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439215ea FUN_1439215ea body=93 status=ok
// SIG undefined FUN_1439215ea(void)

void FUN_1439215ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89dc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921648 FUN_143921648 body=126 status=ok
// SIG undefined FUN_143921648(void)

void FUN_143921648(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89dc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439216b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439216ce FUN_1439216ce body=19 status=ok
// SIG undefined FUN_1439216ce(void)

undefined1 FUN_1439216ce(undefined8 param_1,undefined8 param_2)

{
  FUN_1480bc958(param_2);
  return 1;
}



// FUNCTION 1439216e2 FUN_1439216e2 body=29 status=ok
// SIG undefined FUN_1439216e2(void)

undefined8 FUN_1439216e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143921714 FUN_143921714 body=93 status=ok
// SIG undefined FUN_143921714(void)

void FUN_143921714(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89e30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921772 FUN_143921772 body=93 status=ok
// SIG undefined FUN_143921772(void)

void FUN_143921772(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89e30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439217d0 FUN_1439217d0 body=126 status=ok
// SIG undefined FUN_1439217d0(void)

void FUN_1439217d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89e30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014392183f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143921856 FUN_143921856 body=19 status=ok
// SIG undefined FUN_143921856(void)

undefined1 FUN_143921856(undefined8 param_1,undefined8 param_2)

{
  FUN_1480bd3fc(param_2);
  return 1;
}



// FUNCTION 14392186a FUN_14392186a body=29 status=ok
// SIG undefined FUN_14392186a(void)

undefined8 FUN_14392186a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14392189c FUN_14392189c body=93 status=ok
// SIG undefined FUN_14392189c(void)

void FUN_14392189c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89f10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439218fa FUN_1439218fa body=93 status=ok
// SIG undefined FUN_1439218fa(void)

void FUN_1439218fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89f10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921958 FUN_143921958 body=126 status=ok
// SIG undefined FUN_143921958(void)

void FUN_143921958(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89f10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001439219c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1439219de FUN_1439219de body=19 status=ok
// SIG undefined FUN_1439219de(void)

undefined1 FUN_1439219de(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a69e8(param_2);
  return 1;
}



// FUNCTION 1439219f2 FUN_1439219f2 body=29 status=ok
// SIG undefined FUN_1439219f2(void)

undefined8 FUN_1439219f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143921a24 FUN_143921a24 body=93 status=ok
// SIG undefined FUN_143921a24(void)

void FUN_143921a24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89f80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921a82 FUN_143921a82 body=93 status=ok
// SIG undefined FUN_143921a82(void)

void FUN_143921a82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89f80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921ae0 FUN_143921ae0 body=126 status=ok
// SIG undefined FUN_143921ae0(void)

void FUN_143921ae0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89f80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143921b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143921b66 FUN_143921b66 body=19 status=ok
// SIG undefined FUN_143921b66(void)

undefined1 FUN_143921b66(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a6d3a(param_2);
  return 1;
}



// FUNCTION 143921b7a FUN_143921b7a body=29 status=ok
// SIG undefined FUN_143921b7a(void)

undefined8 FUN_143921b7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143921bac FUN_143921bac body=93 status=ok
// SIG undefined FUN_143921bac(void)

void FUN_143921bac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89ff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921c0a FUN_143921c0a body=93 status=ok
// SIG undefined FUN_143921c0a(void)

void FUN_143921c0a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad89ff0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921c68 FUN_143921c68 body=126 status=ok
// SIG undefined FUN_143921c68(void)

void FUN_143921c68(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad89ff0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143921cd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143921cee FUN_143921cee body=19 status=ok
// SIG undefined FUN_143921cee(void)

undefined1 FUN_143921cee(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a7172(param_2);
  return 1;
}



// FUNCTION 143921d02 FUN_143921d02 body=29 status=ok
// SIG undefined FUN_143921d02(void)

undefined8 FUN_143921d02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143921d34 FUN_143921d34 body=93 status=ok
// SIG undefined FUN_143921d34(void)

void FUN_143921d34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8a060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921d92 FUN_143921d92 body=93 status=ok
// SIG undefined FUN_143921d92(void)

void FUN_143921d92(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8a060;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921df0 FUN_143921df0 body=126 status=ok
// SIG undefined FUN_143921df0(void)

void FUN_143921df0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8a060;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143921e5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143921e76 FUN_143921e76 body=19 status=ok
// SIG undefined FUN_143921e76(void)

undefined1 FUN_143921e76(undefined8 param_1,undefined8 param_2)

{
  FUN_1416b85cc(param_2);
  return 1;
}



// FUNCTION 143921e8a FUN_143921e8a body=29 status=ok
// SIG undefined FUN_143921e8a(void)

undefined8 FUN_143921e8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143921ebc FUN_143921ebc body=93 status=ok
// SIG undefined FUN_143921ebc(void)

void FUN_143921ebc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8a0d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921f1a FUN_143921f1a body=93 status=ok
// SIG undefined FUN_143921f1a(void)

void FUN_143921f1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8a0d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143921f78 FUN_143921f78 body=126 status=ok
// SIG undefined FUN_143921f78(void)

void FUN_143921f78(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8a0d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143921fe7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143921ffe FUN_143921ffe body=19 status=ok
// SIG undefined FUN_143921ffe(void)

undefined1 FUN_143921ffe(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a7306(param_2);
  return 1;
}



// FUNCTION 143922012 FUN_143922012 body=29 status=ok
// SIG undefined FUN_143922012(void)

undefined8 FUN_143922012(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143922044 FUN_143922044 body=93 status=ok
// SIG undefined FUN_143922044(void)

void FUN_143922044(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8a140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1439220a2 FUN_1439220a2 body=93 status=ok
// SIG undefined FUN_1439220a2(void)

void FUN_1439220a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ad8a140;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143922100 FUN_143922100 body=126 status=ok
// SIG undefined FUN_143922100(void)

void FUN_143922100(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ad8a140;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014392216f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143922186 FUN_143922186 body=19 status=ok
// SIG undefined FUN_143922186(void)

undefined1 FUN_143922186(undefined8 param_1,undefined8 param_2)

{
  FUN_1480a7446(param_2);
  return 1;
}



// FUNCTION 14392219a FUN_14392219a body=29 status=ok
// SIG undefined FUN_14392219a(void)

undefined8 FUN_14392219a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


