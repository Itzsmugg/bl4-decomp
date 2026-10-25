// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14457d632 FUN_14457d632 body=72 status=ok
// SIG undefined FUN_14457d632(void)

void FUN_14457d632(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457d67c FUN_14457d67c body=539 status=ok
// SIG undefined FUN_14457d67c(void)

void FUN_14457d67c(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  undefined8 local_250;
  undefined1 local_248 [520];
  undefined8 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_318;
  lVar6 = (longlong)*param_2;
  lVar3 = *param_1;
  FUN_146bff712(local_248,lVar6 * 0x220 + *(longlong *)(lVar3 + 0x110));
  if (*(char *)(*(longlong *)(lVar3 + 200) + 0xad) == '\x01') {
    FUN_1485063a5(&local_2f8,*(undefined8 *)(*(longlong *)(lVar3 + 0xa0) + lVar6 * 8));
    local_298 = local_2f8;
    uStack_290 = uStack_2f0;
    local_288 = local_2e8;
    uStack_280 = uStack_2e0;
    local_278 = local_2d8;
    uStack_274 = uStack_2d4;
    uStack_270 = uStack_2d0;
    uStack_26c = uStack_2cc;
    local_268 = local_2c8;
    local_260 = local_2b8;
    uStack_25c = uStack_2b4;
    uStack_258 = uStack_2b0;
    uStack_254 = uStack_2ac;
    local_250 = local_2a8;
    FUN_146c3cd49(local_248,&local_298,1);
    FUN_146c3cfa5(local_248,param_1[1],1);
  }
  puVar4 = local_40;
  if (((char)param_1[2] == '\x01') && (local_40 = (undefined8 *)0x0, puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)(puVar4,1);
  }
  plVar5 = (longlong *)FUN_14001cc68(0x230,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149fab260;
  FUN_146bffece(plVar5 + 2,local_248);
  if (plVar5 == (longlong *)0x0) {
    lVar3 = *(longlong *)(lVar3 + 0x128);
    lVar6 = lVar6 * 0x10;
    *(undefined8 *)(lVar3 + lVar6) = 0x10;
    plVar7 = *(longlong **)(lVar3 + 8 + lVar6);
    if (plVar7 == (longlong *)0x0) goto LAB_14457d7eb;
    *(undefined8 *)(lVar3 + lVar6 + 8) = 0;
LAB_14457d78d:
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
    if (plVar5 == (longlong *)0x0) goto LAB_14457d7eb;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    lVar3 = *(longlong *)(lVar3 + 0x128);
    lVar6 = lVar6 * 0x10;
    *(longlong **)(lVar3 + lVar6) = plVar5 + 2;
    plVar7 = *(longlong **)(lVar3 + 8 + lVar6);
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      *(longlong **)(lVar3 + lVar6 + 8) = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_14457d78d;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_14457d7eb:
  FUN_141082778(local_248);
  if ((local_28 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14457d89c FUN_14457d89c body=123 status=ok
// SIG undefined FUN_14457d89c(void)

bool FUN_14457d89c(longlong param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_4;
  lVar4 = (*(undefined8 **)(param_1 + 8))[1];
  if (lVar4 == 0) {
    iVar2 = FUN_146bc96d4(**(undefined8 **)(param_1 + 8));
    lVar4 = (*(undefined8 **)(param_1 + 8))[1];
    if (lVar4 == 0) {
      iVar3 = FUN_146bc96d4(**(undefined8 **)(param_1 + 8),uVar1);
      goto LAB_14457d8e1;
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 0x20);
    iVar2 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(*param_3 >> 9) * 8) +
                    (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  iVar3 = *(int *)(*(longlong *)(lVar4 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_14457d8e1:
  return iVar2 == iVar3;
}



// FUNCTION 14457d918 FUN_14457d918 body=259 status=ok
// SIG undefined FUN_14457d918(void)

bool FUN_14457d918(longlong *param_1,ulonglong *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  uint uVar8;
  longlong *plVar9;
  
  uVar1 = *param_4;
  param_1 = (longlong *)*param_1;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = *param_2;
    uVar8 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar9 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar3 != -1) {
      do {
        puVar6 = (ulonglong *)(*param_1 + (longlong)iVar3 * 0x28);
        if (*puVar6 == uVar2) goto LAB_14457d9ad;
        iVar3 = (int)puVar6[4];
      } while (iVar3 != -1);
    }
  }
  puVar6 = (ulonglong *)0x0;
LAB_14457d9ad:
  puVar7 = puVar6 + 1;
  if (puVar6 == (ulonglong *)0x0) {
    puVar7 = (ulonglong *)0x0;
  }
  if (puVar7[1] == 0) {
    iVar3 = FUN_146bc96d4(*puVar7);
    if (puVar7[1] == 0) {
      iVar4 = FUN_146bc96d4(*puVar7,uVar1);
      goto LAB_14457d9e9;
    }
    lVar5 = *(longlong *)(puVar7[1] + 0x20);
  }
  else {
    lVar5 = *(longlong *)(puVar7[1] + 0x20);
    iVar3 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(*param_3 >> 9) * 8) +
                    (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  iVar4 = *(int *)(*(longlong *)(lVar5 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_14457d9e9:
  return iVar3 == iVar4;
}



// FUNCTION 14457da1c FUN_14457da1c body=298 status=ok
// SIG undefined FUN_14457da1c(void)

void FUN_14457da1c(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) {
      uVar2 = FUN_1485075e2(lVar1,1);
      goto LAB_14457da6b;
    }
  }
  uVar2 = 0;
LAB_14457da6b:
  *(undefined1 *)*param_1 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457db48 FUN_14457db48 body=29 status=ok
// SIG undefined FUN_14457db48(void)

undefined8 FUN_14457db48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457db7a FUN_14457db7a body=93 status=ok
// SIG undefined FUN_14457db7a(void)

void FUN_14457db7a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdccb10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14457dbd8 FUN_14457dbd8 body=93 status=ok
// SIG undefined FUN_14457dbd8(void)

void FUN_14457dbd8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bdccb10;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14457dc36 FUN_14457dc36 body=126 status=ok
// SIG undefined FUN_14457dc36(void)

void FUN_14457dc36(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdccb10;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457dca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457dccc FUN_14457dccc body=35 status=ok
// SIG undefined FUN_14457dccc(void)

undefined8 FUN_14457dccc(longlong param_1)

{
  FUN_1485051e4(*(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0) +
                 (longlong)*(int *)(param_1 + 0x20) * 8));
  return 1;
}



// FUNCTION 14457dcf0 FUN_14457dcf0 body=29 status=ok
// SIG undefined FUN_14457dcf0(void)

undefined8 FUN_14457dcf0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457dd22 FUN_14457dd22 body=93 status=ok
// SIG undefined FUN_14457dd22(void)

void FUN_14457dd22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdccb80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457dd80 FUN_14457dd80 body=93 status=ok
// SIG undefined FUN_14457dd80(void)

void FUN_14457dd80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdccb80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457ddde FUN_14457ddde body=126 status=ok
// SIG undefined FUN_14457ddde(void)

void FUN_14457ddde(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdccb80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457de4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457de5c FUN_14457de5c body=122 status=ok
// SIG undefined FUN_14457de5c(void)

void FUN_14457de5c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(lVar11 + 0xc0);
  lVar3 = *(longlong *)(lVar11 + 0xe0);
  uVar4 = *(undefined4 *)(lVar3 + 0x7c);
  uVar5 = *(undefined4 *)(lVar3 + 0x80);
  uVar6 = *(undefined4 *)(lVar3 + 0x84);
  uVar7 = *(undefined8 *)(lVar3 + 0x88);
  uVar8 = *(undefined8 *)(lVar3 + 0x90);
  uVar9 = *(undefined8 *)(lVar3 + 0x98);
  uVar10 = *(undefined8 *)(lVar3 + 0xa0);
  *(undefined4 *)(lVar11 + 0xe8) = *(undefined4 *)(lVar3 + 0x78);
  *(undefined4 *)(lVar11 + 0xec) = uVar4;
  *(undefined4 *)(lVar11 + 0xf0) = uVar5;
  *(undefined4 *)(lVar11 + 0xf4) = uVar6;
  *(undefined8 *)(lVar11 + 0xf8) = uVar7;
  *(undefined8 *)(lVar11 + 0x100) = uVar8;
  *(undefined8 *)(lVar11 + 0x108) = uVar9;
  *(undefined8 *)(lVar11 + 0x110) = uVar10;
  *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar3 + 0xa8);
  iVar1 = *(int *)(lVar11 + 200);
  if ((longlong)iVar1 != 0) {
    lVar11 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar2 + lVar11));
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar1 * 8 != lVar11);
  }
  return;
}



// FUNCTION 14457ded6 FUN_14457ded6 body=124 status=ok
// SIG undefined FUN_14457ded6(void)

undefined8 FUN_14457ded6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(lVar11 + 0xc0);
  lVar3 = *(longlong *)(lVar11 + 0xe0);
  uVar4 = *(undefined4 *)(lVar3 + 0x7c);
  uVar5 = *(undefined4 *)(lVar3 + 0x80);
  uVar6 = *(undefined4 *)(lVar3 + 0x84);
  uVar7 = *(undefined8 *)(lVar3 + 0x88);
  uVar8 = *(undefined8 *)(lVar3 + 0x90);
  uVar9 = *(undefined8 *)(lVar3 + 0x98);
  uVar10 = *(undefined8 *)(lVar3 + 0xa0);
  *(undefined4 *)(lVar11 + 0xe8) = *(undefined4 *)(lVar3 + 0x78);
  *(undefined4 *)(lVar11 + 0xec) = uVar4;
  *(undefined4 *)(lVar11 + 0xf0) = uVar5;
  *(undefined4 *)(lVar11 + 0xf4) = uVar6;
  *(undefined8 *)(lVar11 + 0xf8) = uVar7;
  *(undefined8 *)(lVar11 + 0x100) = uVar8;
  *(undefined8 *)(lVar11 + 0x108) = uVar9;
  *(undefined8 *)(lVar11 + 0x110) = uVar10;
  *(undefined8 *)(lVar11 + 0x118) = *(undefined8 *)(lVar3 + 0xa8);
  iVar1 = *(int *)(lVar11 + 200);
  if ((longlong)iVar1 != 0) {
    lVar11 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar2 + lVar11));
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar1 * 8 != lVar11);
  }
  return 1;
}



// FUNCTION 14457df8a FUN_14457df8a body=29 status=ok
// SIG undefined FUN_14457df8a(void)

undefined8 FUN_14457df8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457dfe0 FUN_14457dfe0 body=29 status=ok
// SIG undefined FUN_14457dfe0(void)

undefined8 FUN_14457dfe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e01a FUN_14457e01a body=47 status=ok
// SIG undefined FUN_14457e01a(void)

void FUN_14457e01a(longlong *param_1,char *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *param_1;
  plVar2 = *(longlong **)(lVar1 + 0x858);
  (**(code **)(*plVar2 + 0x350))(plVar2,*param_2 == '\0');
  FUN_1485051e4(*(undefined8 *)(lVar1 + 0x850));
  return;
}



// FUNCTION 14457e074 FUN_14457e074 body=29 status=ok
// SIG undefined FUN_14457e074(void)

undefined8 FUN_14457e074(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e0cc FUN_14457e0cc body=29 status=ok
// SIG undefined FUN_14457e0cc(void)

undefined8 FUN_14457e0cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e124 FUN_14457e124 body=29 status=ok
// SIG undefined FUN_14457e124(void)

undefined8 FUN_14457e124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e17c FUN_14457e17c body=29 status=ok
// SIG undefined FUN_14457e17c(void)

undefined8 FUN_14457e17c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e1d4 FUN_14457e1d4 body=29 status=ok
// SIG undefined FUN_14457e1d4(void)

undefined8 FUN_14457e1d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e22c FUN_14457e22c body=29 status=ok
// SIG undefined FUN_14457e22c(void)

undefined8 FUN_14457e22c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e284 FUN_14457e284 body=29 status=ok
// SIG undefined FUN_14457e284(void)

undefined8 FUN_14457e284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e2dc FUN_14457e2dc body=29 status=ok
// SIG undefined FUN_14457e2dc(void)

undefined8 FUN_14457e2dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e334 FUN_14457e334 body=29 status=ok
// SIG undefined FUN_14457e334(void)

undefined8 FUN_14457e334(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e38c FUN_14457e38c body=29 status=ok
// SIG undefined FUN_14457e38c(void)

undefined8 FUN_14457e38c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e3e4 FUN_14457e3e4 body=29 status=ok
// SIG undefined FUN_14457e3e4(void)

undefined8 FUN_14457e3e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e43c FUN_14457e43c body=29 status=ok
// SIG undefined FUN_14457e43c(void)

undefined8 FUN_14457e43c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e494 FUN_14457e494 body=29 status=ok
// SIG undefined FUN_14457e494(void)

undefined8 FUN_14457e494(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e4ec FUN_14457e4ec body=29 status=ok
// SIG undefined FUN_14457e4ec(void)

undefined8 FUN_14457e4ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e53c FUN_14457e53c body=29 status=ok
// SIG undefined FUN_14457e53c(void)

undefined8 FUN_14457e53c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e5b8 FUN_14457e5b8 body=29 status=ok
// SIG undefined FUN_14457e5b8(void)

undefined8 FUN_14457e5b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e656 FUN_14457e656 body=29 status=ok
// SIG undefined FUN_14457e656(void)

undefined8 FUN_14457e656(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e674 FUN_14457e674 body=567 status=ok
// SIG undefined FUN_14457e674(void)

undefined4 FUN_14457e674(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  wchar_t *local_118;
  void *local_110;
  int local_108;
  undefined4 local_104;
  wchar_t *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar1 = *param_3;
  plVar2 = (longlong *)*param_1;
  FUN_146c2c368(local_f0);
  FUN_146c2c4e8(local_f0);
  local_110 = (void *)0x0;
  local_108 = (int)plVar2[0xa1];
  lVar7 = (longlong)local_108;
  pvVar3 = (void *)plVar2[0xa0];
  if (lVar7 == 0) {
    local_104 = 0;
  }
  else {
    FUN_144a06ca8(&local_110,local_108,0);
    memcpy(local_110,pvVar3,lVar7 << 2);
    pvVar3 = local_110;
    lVar7 = (longlong)local_108;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar3 + lVar6),1);
        lVar6 = lVar6 + 4;
      } while (lVar7 * 4 != lVar6);
    }
    if (local_110 != (void *)0x0) {
      FUN_1400020a8(local_110);
    }
  }
  uVar4 = FUN_144574d78(param_1[1],param_2);
  if ((char)uVar4 != '\0') {
    FUN_146c2caf6(local_f0,&local_118);
    lVar7 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    plVar2 = *(longlong **)(lVar7 + 0xe8);
    local_100 = L"ExtrudeSelection";
    local_f8 = 0x10;
    FUN_1446e940c(local_12c,&local_100);
    local_100 = L"UExtrudeMeshSelectionTool";
    local_f8 = 0x19;
    FUN_1446e940c(local_130,&local_100);
    local_100 = L"Extrude Selection";
    local_f8 = 0x11;
    FUN_140208c1e(local_128,local_130,local_12c,&local_100);
    pwVar5 = (wchar_t *)FUN_14001cc68(0x50,0x10);
    local_100 = local_118;
    local_118 = (wchar_t *)0x0;
    FUN_1484acd58(pwVar5,&local_100);
    local_100 = pwVar5;
    (**(code **)(*plVar2 + 0x28))(plVar2,uVar1,&local_100,local_128);
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    pwVar5 = local_118;
    if (local_118 != (wchar_t *)0x0) {
      FUN_146c2a142(local_118);
      FUN_1400020a8(pwVar5);
    }
  }
  FUN_146c2c40e(local_f0);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14457e8e6 FUN_14457e8e6 body=29 status=ok
// SIG undefined FUN_14457e8e6(void)

undefined8 FUN_14457e8e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e93e FUN_14457e93e body=29 status=ok
// SIG undefined FUN_14457e93e(void)

undefined8 FUN_14457e93e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e996 FUN_14457e996 body=29 status=ok
// SIG undefined FUN_14457e996(void)

undefined8 FUN_14457e996(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457e9ee FUN_14457e9ee body=29 status=ok
// SIG undefined FUN_14457e9ee(void)

undefined8 FUN_14457e9ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ea46 FUN_14457ea46 body=29 status=ok
// SIG undefined FUN_14457ea46(void)

undefined8 FUN_14457ea46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ea9e FUN_14457ea9e body=29 status=ok
// SIG undefined FUN_14457ea9e(void)

undefined8 FUN_14457ea9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457eaf6 FUN_14457eaf6 body=29 status=ok
// SIG undefined FUN_14457eaf6(void)

undefined8 FUN_14457eaf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457eb4e FUN_14457eb4e body=29 status=ok
// SIG undefined FUN_14457eb4e(void)

undefined8 FUN_14457eb4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457eba6 FUN_14457eba6 body=29 status=ok
// SIG undefined FUN_14457eba6(void)

undefined8 FUN_14457eba6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ebfe FUN_14457ebfe body=29 status=ok
// SIG undefined FUN_14457ebfe(void)

undefined8 FUN_14457ebfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ec56 FUN_14457ec56 body=29 status=ok
// SIG undefined FUN_14457ec56(void)

undefined8 FUN_14457ec56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ecae FUN_14457ecae body=29 status=ok
// SIG undefined FUN_14457ecae(void)

undefined8 FUN_14457ecae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ecfe FUN_14457ecfe body=29 status=ok
// SIG undefined FUN_14457ecfe(void)

undefined8 FUN_14457ecfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ed7a FUN_14457ed7a body=29 status=ok
// SIG undefined FUN_14457ed7a(void)

undefined8 FUN_14457ed7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ee18 FUN_14457ee18 body=29 status=ok
// SIG undefined FUN_14457ee18(void)

undefined8 FUN_14457ee18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457ee36 FUN_14457ee36 body=567 status=ok
// SIG undefined FUN_14457ee36(void)

undefined4 FUN_14457ee36(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined4 uVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [40];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong *local_128 [2];
  wchar_t *local_118;
  void *local_110;
  int local_108;
  undefined4 local_104;
  wchar_t *local_100;
  undefined4 local_f8;
  undefined1 local_f0 [168];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar1 = *param_3;
  plVar2 = (longlong *)*param_1;
  FUN_146c2c368(local_f0);
  FUN_146c2c4e8(local_f0);
  local_110 = (void *)0x0;
  local_108 = (int)plVar2[0xa1];
  lVar7 = (longlong)local_108;
  pvVar3 = (void *)plVar2[0xa0];
  if (lVar7 == 0) {
    local_104 = 0;
  }
  else {
    FUN_144a06ca8(&local_110,local_108,0);
    memcpy(local_110,pvVar3,lVar7 << 2);
    pvVar3 = local_110;
    lVar7 = (longlong)local_108;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        FUN_146c2c9fe(local_f0,*(undefined4 *)((longlong)pvVar3 + lVar6),1);
        lVar6 = lVar6 + 4;
      } while (lVar7 * 4 != lVar6);
    }
    if (local_110 != (void *)0x0) {
      FUN_1400020a8(local_110);
    }
  }
  uVar4 = FUN_144574f5e(param_1[1],param_2);
  if ((char)uVar4 != '\0') {
    FUN_146c2caf6(local_f0,&local_118);
    lVar7 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
    plVar2 = *(longlong **)(lVar7 + 0xe8);
    local_100 = L"OffsetSelection";
    local_f8 = 0xf;
    FUN_1446e940c(local_12c,&local_100);
    local_100 = L"UOffsetMeshSelectionTool";
    local_f8 = 0x18;
    FUN_1446e940c(local_130,&local_100);
    local_100 = L"Offset Selection";
    local_f8 = 0x10;
    FUN_140208c1e(local_128,local_130,local_12c,&local_100);
    pwVar5 = (wchar_t *)FUN_14001cc68(0x50,0x10);
    local_100 = local_118;
    local_118 = (wchar_t *)0x0;
    FUN_1484acd58(pwVar5,&local_100);
    local_100 = pwVar5;
    (**(code **)(*plVar2 + 0x28))(plVar2,uVar1,&local_100,local_128);
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    pwVar5 = local_118;
    if (local_118 != (wchar_t *)0x0) {
      FUN_146c2a142(local_118);
      FUN_1400020a8(pwVar5);
    }
  }
  FUN_146c2c40e(local_f0);
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14457f0a0 FUN_14457f0a0 body=29 status=ok
// SIG undefined FUN_14457f0a0(void)

undefined8 FUN_14457f0a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f0be FUN_14457f0be body=80 status=ok
// SIG undefined FUN_14457f0be(void)

void FUN_14457f0be(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(**(longlong **)(*(longlong *)(*param_1 + 0xd0) + 0x58) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457f11a FUN_14457f11a body=12 status=ok
// SIG undefined FUN_14457f11a(void)

void FUN_14457f11a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014457f123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14457f126 FUN_14457f126 body=29 status=ok
// SIG undefined FUN_14457f126(void)

undefined8 FUN_14457f126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f144 FUN_14457f144 body=29 status=ok
// SIG undefined FUN_14457f144(void)

undefined8 FUN_14457f144(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f176 FUN_14457f176 body=93 status=ok
// SIG undefined FUN_14457f176(void)

void FUN_14457f176(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457f1d4 FUN_14457f1d4 body=93 status=ok
// SIG undefined FUN_14457f1d4(void)

void FUN_14457f1d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd240;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457f232 FUN_14457f232 body=126 status=ok
// SIG undefined FUN_14457f232(void)

void FUN_14457f232(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcd240;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457f2a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457f2b0 FUN_14457f2b0 body=90 status=ok
// SIG undefined FUN_14457f2b0(void)

void FUN_14457f2b0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  local_10 = &local_20;
  local_18 = FUN_14457f36a;
  (**(code **)(**(longlong **)(param_2 + 0x58) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457f30c FUN_14457f30c body=92 status=ok
// SIG undefined FUN_14457f30c(void)

undefined8 FUN_14457f30c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_1 + 0x18);
  local_10 = &local_20;
  local_18 = FUN_14457f36a;
  (**(code **)(**(longlong **)(param_2 + 0x58) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457f36a FUN_14457f36a body=37 status=ok
// SIG undefined FUN_14457f36a(void)

void FUN_14457f36a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1496ac3fc(*(undefined8 *)(lVar1 + 200));
  FUN_1484dea34(*(undefined8 *)(lVar1 + 0xd8));
  return;
}



// FUNCTION 14457f390 FUN_14457f390 body=38 status=ok
// SIG undefined FUN_14457f390(void)

undefined8
FUN_14457f390(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_146bc96d4(*param_3,*param_4);
  FUN_146c89f40(param_1,uVar1);
  return param_1;
}



// FUNCTION 14457f3e0 FUN_14457f3e0 body=29 status=ok
// SIG undefined FUN_14457f3e0(void)

undefined8 FUN_14457f3e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f446 FUN_14457f446 body=29 status=ok
// SIG undefined FUN_14457f446(void)

undefined8 FUN_14457f446(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f464 FUN_14457f464 body=29 status=ok
// SIG undefined FUN_14457f464(void)

undefined8 FUN_14457f464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f496 FUN_14457f496 body=93 status=ok
// SIG undefined FUN_14457f496(void)

void FUN_14457f496(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14457f4f4 FUN_14457f4f4 body=93 status=ok
// SIG undefined FUN_14457f4f4(void)

void FUN_14457f4f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14457f552 FUN_14457f552 body=126 status=ok
// SIG undefined FUN_14457f552(void)

void FUN_14457f552(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba263d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcd350;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457f5c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457f632 FUN_14457f632 body=111 status=ok
// SIG undefined FUN_14457f632(void)

bool FUN_14457f632(longlong *param_1,longlong *param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  iVar1 = *(int *)(*(longlong *)(*param_1 + 0x160) + (longlong)(int)param_1[1] * 4);
  if (iVar1 < 0) {
    bVar4 = false;
  }
  else {
    lVar3 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x170) + (longlong)(int)param_1[1] * 4);
    if (lVar3 < 0) {
      iVar2 = FUN_146bc96d4();
    }
    else {
      iVar2 = *(int *)(*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(*param_2 + 0x208) + 0x60) + lVar3 * 8) +
                          0x20) + (ulonglong)(*param_3 >> 9) * 8) +
                      (ulonglong)(*param_3 & 0x1ff) * 4);
    }
    bVar4 = iVar2 == iVar1;
  }
  return bVar4;
}



// FUNCTION 14457f6b8 FUN_14457f6b8 body=29 status=ok
// SIG undefined FUN_14457f6b8(void)

undefined8 FUN_14457f6b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f6d6 FUN_14457f6d6 body=29 status=ok
// SIG undefined FUN_14457f6d6(void)

undefined8 FUN_14457f6d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f708 FUN_14457f708 body=93 status=ok
// SIG undefined FUN_14457f708(void)

void FUN_14457f708(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14457f766 FUN_14457f766 body=93 status=ok
// SIG undefined FUN_14457f766(void)

void FUN_14457f766(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd3e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14457f7c4 FUN_14457f7c4 body=126 status=ok
// SIG undefined FUN_14457f7c4(void)

void FUN_14457f7c4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcd3e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457f833. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457f842 FUN_14457f842 body=75 status=ok
// SIG undefined FUN_14457f842(void)

void FUN_14457f842(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xe0) +
           (longlong)*(int *)(param_1 + 0x20) * 8);
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x58) + 0x50);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0xa88))();
  }
  FUN_14851bbe8(uVar1,uVar3,1,0xf);
  return;
}



// FUNCTION 14457f88e FUN_14457f88e body=78 status=ok
// SIG undefined FUN_14457f88e(void)

undefined8 FUN_14457f88e(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xe0) +
           (longlong)*(int *)(param_1 + 0x20) * 8);
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x58) + 0x50);
  if (plVar2 == (longlong *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0xa88))();
  }
  FUN_14851bbe8(uVar1,uVar3,1,0xf);
  return 1;
}



// FUNCTION 14457f8dc FUN_14457f8dc body=19 status=ok
// SIG undefined FUN_14457f8dc(void)

byte FUN_14457f8dc(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_148453316(param_2);
  return bVar1 ^ 1;
}



// FUNCTION 14457f8f8 FUN_14457f8f8 body=163 status=ok
// SIG undefined FUN_14457f8f8(void)

void FUN_14457f8f8(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0x1b8) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457f9c6 FUN_14457f9c6 body=29 status=ok
// SIG undefined FUN_14457f9c6(void)

undefined8 FUN_14457f9c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457f9e4 FUN_14457f9e4 body=29 status=ok
// SIG undefined FUN_14457f9e4(void)

undefined8 FUN_14457f9e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457fa16 FUN_14457fa16 body=93 status=ok
// SIG undefined FUN_14457fa16(void)

void FUN_14457fa16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457fa74 FUN_14457fa74 body=93 status=ok
// SIG undefined FUN_14457fa74(void)

void FUN_14457fa74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd490;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457fad2 FUN_14457fad2 body=126 status=ok
// SIG undefined FUN_14457fad2(void)

void FUN_14457fad2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcd490;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457fb41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457fb5a FUN_14457fb5a body=20 status=ok
// SIG undefined FUN_14457fb5a(void)

undefined1 FUN_14457fb5a(longlong param_1)

{
  FUN_14457fb6e(param_1 + 0x18);
  return 1;
}



// FUNCTION 14457fb6e FUN_14457fb6e body=233 status=ok
// SIG undefined FUN_14457fb6e(void)

void FUN_14457fb6e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[0x38];
  lVar2 = param_1[0x3a];
  uVar3 = *(undefined8 *)(lVar2 + 0x78);
  uVar4 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar1 + 0x130) = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(lVar1 + 0x120) = uVar3;
  *(undefined8 *)(lVar1 + 0x128) = uVar4;
  lVar1 = param_1[0x3a];
  local_58 = *(undefined8 *)(lVar1 + 0x90);
  local_50 = *(undefined8 *)(lVar1 + 0x98);
  local_48 = *(undefined8 *)(lVar1 + 0xa0);
  local_40 = *(undefined8 *)(lVar1 + 0xa8);
  FUN_1448052ee(&local_58,&local_30);
  *(undefined8 *)(param_1[0x38] + 0x138) = local_30;
  *(undefined8 *)(param_1[0x38] + 0x140) = local_28;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x38]);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1496affcc(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457fc58 FUN_14457fc58 body=29 status=ok
// SIG undefined FUN_14457fc58(void)

undefined8 FUN_14457fc58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457fc8a FUN_14457fc8a body=93 status=ok
// SIG undefined FUN_14457fc8a(void)

void FUN_14457fc8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457fce8 FUN_14457fce8 body=93 status=ok
// SIG undefined FUN_14457fce8(void)

void FUN_14457fce8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd500;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457fd46 FUN_14457fd46 body=126 status=ok
// SIG undefined FUN_14457fd46(void)

void FUN_14457fd46(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcd500;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457fdb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457fdc4 FUN_14457fdc4 body=41 status=ok
// SIG undefined FUN_14457fdc4(void)

void FUN_14457fdc4(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
                    /* WARNING: Could not recover jumptable at 0x00014457fdea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return;
}



// FUNCTION 14457fdee FUN_14457fdee body=40 status=ok
// SIG undefined FUN_14457fdee(void)

undefined8 FUN_14457fdee(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return 1;
}



// FUNCTION 14457fe16 FUN_14457fe16 body=29 status=ok
// SIG undefined FUN_14457fe16(void)

undefined8 FUN_14457fe16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457fe48 FUN_14457fe48 body=93 status=ok
// SIG undefined FUN_14457fe48(void)

void FUN_14457fe48(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457fea6 FUN_14457fea6 body=93 status=ok
// SIG undefined FUN_14457fea6(void)

void FUN_14457fea6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcd570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14457ff04 FUN_14457ff04 body=126 status=ok
// SIG undefined FUN_14457ff04(void)

void FUN_14457ff04(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcd570;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014457ff73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14457ff8c FUN_14457ff8c body=20 status=ok
// SIG undefined FUN_14457ff8c(void)

undefined1 FUN_14457ff8c(longlong param_1)

{
  FUN_14457ffa0(param_1 + 0x18);
  return 1;
}



// FUNCTION 14457ffa0 FUN_14457ffa0 body=233 status=ok
// SIG undefined FUN_14457ffa0(void)

void FUN_14457ffa0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[0x20];
  lVar2 = param_1[0x22];
  uVar3 = *(undefined8 *)(lVar2 + 0x78);
  uVar4 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar1 + 0x148) = *(undefined8 *)(lVar2 + 0x88);
  *(undefined8 *)(lVar1 + 0x138) = uVar3;
  *(undefined8 *)(lVar1 + 0x140) = uVar4;
  lVar1 = param_1[0x22];
  local_58 = *(undefined8 *)(lVar1 + 0x90);
  local_50 = *(undefined8 *)(lVar1 + 0x98);
  local_48 = *(undefined8 *)(lVar1 + 0xa0);
  local_40 = *(undefined8 *)(lVar1 + 0xa8);
  FUN_1448052ee(&local_58,&local_30);
  *(undefined8 *)(param_1[0x20] + 0x150) = local_30;
  *(undefined8 *)(param_1[0x20] + 0x158) = local_28;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_1496b1ab4(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445800d8 FUN_1445800d8 body=29 status=ok
// SIG undefined FUN_1445800d8(void)

undefined8 FUN_1445800d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458012e FUN_14458012e body=29 status=ok
// SIG undefined FUN_14458012e(void)

undefined8 FUN_14458012e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458019a FUN_14458019a body=29 status=ok
// SIG undefined FUN_14458019a(void)

undefined8 FUN_14458019a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445801f0 FUN_1445801f0 body=29 status=ok
// SIG undefined FUN_1445801f0(void)

undefined8 FUN_1445801f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458024a FUN_14458024a body=29 status=ok
// SIG undefined FUN_14458024a(void)

undefined8 FUN_14458024a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445802a4 FUN_1445802a4 body=29 status=ok
// SIG undefined FUN_1445802a4(void)

undefined8 FUN_1445802a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580300 FUN_144580300 body=29 status=ok
// SIG undefined FUN_144580300(void)

undefined8 FUN_144580300(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458035a FUN_14458035a body=29 status=ok
// SIG undefined FUN_14458035a(void)

undefined8 FUN_14458035a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580378 FUN_144580378 body=69 status=ok
// SIG undefined FUN_144580378(void)

void FUN_144580378(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(*(longlong *)*param_1 + 0x5b0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445803e8 FUN_1445803e8 body=29 status=ok
// SIG undefined FUN_1445803e8(void)

undefined8 FUN_1445803e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580406 FUN_144580406 body=69 status=ok
// SIG undefined FUN_144580406(void)

void FUN_144580406(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(*(longlong *)*param_1 + 0x5b8))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144580476 FUN_144580476 body=29 status=ok
// SIG undefined FUN_144580476(void)

undefined8 FUN_144580476(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445804d2 FUN_1445804d2 body=29 status=ok
// SIG undefined FUN_1445804d2(void)

undefined8 FUN_1445804d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458052c FUN_14458052c body=29 status=ok
// SIG undefined FUN_14458052c(void)

undefined8 FUN_14458052c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580588 FUN_144580588 body=29 status=ok
// SIG undefined FUN_144580588(void)

undefined8 FUN_144580588(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445805a6 FUN_1445805a6 body=95 status=ok
// SIG undefined FUN_1445805a6(void)

void FUN_1445805a6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0x1000000010101;
  local_18 = 0;
  FUN_148506f34(*(undefined8 *)(*param_1 + 0xa0),param_2,
                CONCAT71(0x10000000101,*(undefined1 *)param_1[1]));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14458063e FUN_14458063e body=29 status=ok
// SIG undefined FUN_14458063e(void)

undefined8 FUN_14458063e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580694 FUN_144580694 body=29 status=ok
// SIG undefined FUN_144580694(void)

undefined8 FUN_144580694(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445806ea FUN_1445806ea body=29 status=ok
// SIG undefined FUN_1445806ea(void)

undefined8 FUN_1445806ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580740 FUN_144580740 body=29 status=ok
// SIG undefined FUN_144580740(void)

undefined8 FUN_144580740(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580796 FUN_144580796 body=29 status=ok
// SIG undefined FUN_144580796(void)

undefined8 FUN_144580796(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445807ec FUN_1445807ec body=29 status=ok
// SIG undefined FUN_1445807ec(void)

undefined8 FUN_1445807ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580842 FUN_144580842 body=29 status=ok
// SIG undefined FUN_144580842(void)

undefined8 FUN_144580842(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580898 FUN_144580898 body=29 status=ok
// SIG undefined FUN_144580898(void)

undefined8 FUN_144580898(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445808ee FUN_1445808ee body=29 status=ok
// SIG undefined FUN_1445808ee(void)

undefined8 FUN_1445808ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580944 FUN_144580944 body=29 status=ok
// SIG undefined FUN_144580944(void)

undefined8 FUN_144580944(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458099a FUN_14458099a body=29 status=ok
// SIG undefined FUN_14458099a(void)

undefined8 FUN_14458099a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445809f0 FUN_1445809f0 body=29 status=ok
// SIG undefined FUN_1445809f0(void)

undefined8 FUN_1445809f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580a4a FUN_144580a4a body=29 status=ok
// SIG undefined FUN_144580a4a(void)

undefined8 FUN_144580a4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580aa0 FUN_144580aa0 body=29 status=ok
// SIG undefined FUN_144580aa0(void)

undefined8 FUN_144580aa0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580af6 FUN_144580af6 body=29 status=ok
// SIG undefined FUN_144580af6(void)

undefined8 FUN_144580af6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580b4c FUN_144580b4c body=29 status=ok
// SIG undefined FUN_144580b4c(void)

undefined8 FUN_144580b4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580b6a FUN_144580b6a body=198 status=ok
// SIG undefined FUN_144580b6a(void)

void FUN_144580b6a(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  float local_44 [3];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(*(longlong *)*param_1 + (longlong)*param_2 * 4);
  local_50 = 1;
  local_58 = 1;
  FUN_146c39670(&local_38,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],iVar1);
  lVar2 = *(longlong *)param_1[2];
  local_44[0] = (float)local_38;
  local_44[1] = (float)local_30;
  local_44[2] = (float)local_28;
  lVar3 = 0;
  do {
    uVar4 = iVar1 * 3 + (int)lVar3;
    *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
              (ulonglong)(uVar4 & 0x1ff) * 4) = local_44[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144580c32 FUN_144580c32 body=164 status=ok
// SIG undefined FUN_144580c32(void)

void FUN_144580c32(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(*(longlong *)*param_1 + (longlong)*param_2 * 4);
  local_38 = 1;
  FUN_146c393d4(&local_30,*(undefined8 *)param_1[1],uVar1,1);
  if (*(char *)(*(longlong *)param_1[1] + 0x70) == '\x01') {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[1] + 0x60) + (ulonglong)(uVar1 >> 9) * 8);
    uVar3 = (ulonglong)(uVar1 & 0x1ff);
    *(float *)(lVar2 + uVar3 * 0xc) = (float)local_30;
    *(float *)(lVar2 + 4 + uVar3 * 0xc) = (float)local_28;
    *(float *)(lVar2 + 8 + uVar3 * 0xc) = (float)local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144580d78 FUN_144580d78 body=217 status=ok
// SIG undefined FUN_144580d78(void)

void FUN_144580d78(undefined8 *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  float local_44 [3];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *param_2;
  if ((*(byte *)(*(longlong *)*param_1 + (longlong)iVar1) & 1) != 0) {
    local_50 = 1;
    local_58 = 1;
    FUN_146c39670(&local_38,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],iVar1);
    lVar2 = *(longlong *)param_1[2];
    local_44[0] = (float)local_38;
    local_44[1] = (float)local_30;
    local_44[2] = (float)local_28;
    lVar3 = 0;
    do {
      uVar4 = iVar1 * 3 + (int)lVar3;
      *(float *)(*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar4 >> 9) * 8) +
                (ulonglong)(uVar4 & 0x1ff) * 4) = local_44[lVar3];
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    LOCK();
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)iVar1) = 0;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144580e52 FUN_144580e52 body=187 status=ok
// SIG undefined FUN_144580e52(void)

void FUN_144580e52(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  if ((*(byte *)(*(longlong *)*param_1 + (longlong)(int)uVar1) & 1) != 0) {
    local_48 = 1;
    FUN_146c393d4(&local_38,*(undefined8 *)param_1[1],uVar1,1);
    if (*(char *)(*(longlong *)param_1[1] + 0x70) == '\x01') {
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)param_1[1] + 0x60) + (ulonglong)(uVar1 >> 9) * 8);
      uVar3 = (ulonglong)(uVar1 & 0x1ff);
      *(float *)(lVar2 + uVar3 * 0xc) = (float)local_38;
      *(float *)(lVar2 + 4 + uVar3 * 0xc) = (float)local_30;
      *(float *)(lVar2 + 8 + uVar3 * 0xc) = (float)local_28;
    }
    LOCK();
    *(undefined1 *)(*(longlong *)*param_1 + (longlong)(int)uVar1) = 0;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144580f58 FUN_144580f58 body=29 status=ok
// SIG undefined FUN_144580f58(void)

undefined8 FUN_144580f58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580f76 FUN_144580f76 body=29 status=ok
// SIG undefined FUN_144580f76(void)

undefined8 FUN_144580f76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144580fa8 FUN_144580fa8 body=93 status=ok
// SIG undefined FUN_144580fa8(void)

void FUN_144580fa8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcda90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144581006 FUN_144581006 body=93 status=ok
// SIG undefined FUN_144581006(void)

void FUN_144581006(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcda90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144581064 FUN_144581064 body=126 status=ok
// SIG undefined FUN_144581064(void)

void FUN_144581064(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcda90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001445810d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1445810fc FUN_1445810fc body=495 status=ok
// SIG undefined FUN_1445810fc(void)

void FUN_1445810fc(longlong *param_1,uint *param_2,uint *param_3,undefined8 param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar1 = *param_5;
  lVar4 = *param_1;
  lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(*param_3 >> 9) * 8);
  uVar6 = (ulonglong)*param_3 & 0x1ff;
  dVar7 = *(double *)(lVar5 + uVar6 * 0x18);
  dVar8 = *(double *)(lVar5 + 8 + uVar6 * 0x18);
  dVar9 = *(double *)(lVar5 + 0x10 + uVar6 * 0x18);
  lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(*param_2 >> 9) * 8);
  uVar6 = (ulonglong)*param_2 & 0x1ff;
  dVar10 = *(double *)(lVar5 + uVar6 * 0x18);
  dVar2 = *(double *)(lVar5 + 8 + uVar6 * 0x18);
  dVar3 = *(double *)(lVar5 + 0x10 + uVar6 * 0x18);
  local_88 = (dVar9 + dVar3) * 0.5;
  local_90 = (dVar8 + dVar2) * 0.5;
  local_98 = (dVar7 + dVar10) * 0.5;
  dVar9 = dVar9 - dVar3;
  dVar8 = dVar8 - dVar2;
  dVar7 = dVar7 - dVar10;
  dVar10 = SQRT(dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8);
  local_80 = 0.0;
  local_78 = 0.0;
  local_70 = 0.0;
  local_68 = 0.0;
  if (0.0 < dVar10) {
    local_70 = 1.0 / dVar10;
    local_80 = dVar7 * local_70;
    local_78 = dVar8 * local_70;
    local_70 = dVar9 * local_70;
    local_68 = dVar10 * 0.5;
  }
  dVar8 = (double)FUN_14834ec27(param_1 + 2);
  dVar7 = *(double *)(lVar4 + 0x3e0);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((dVar8 / (dVar7 * dVar7)) * *(double *)(*(longlong *)(lVar4 + 0x2f0) + 0xb0) + dVar1
               );
}



// FUNCTION 1445812f6 FUN_1445812f6 body=29 status=ok
// SIG undefined FUN_1445812f6(void)

void FUN_1445812f6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144581314 FUN_144581314 body=29 status=ok
// SIG undefined FUN_144581314(void)

undefined8 FUN_144581314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581332 FUN_144581332 body=529 status=ok
// SIG undefined FUN_144581332(void)

void FUN_144581332(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  void *_Src;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [4];
  int local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88;
  ulonglong uStack_80;
  undefined1 local_78 [16];
  longlong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  local_98 = (void *)0x0;
  local_90 = *(int *)(lVar1 + 0x3c8);
  lVar5 = (longlong)local_90;
  _Src = *(void **)(lVar1 + 0x3c0);
  if (lVar5 == 0) {
    local_8c = 0;
  }
  else {
    FUN_144a06ca8(&local_98,local_90,0);
    memcpy(local_98,_Src,lVar5 << 2);
  }
  FUN_148f6e68c(param_3,&local_98,1);
  local_68 = 0;
  local_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_5c = 0x80;
  uStack_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  if (1 < *(int *)(lVar1 + 0x3c8)) {
    lVar5 = 0;
    do {
      local_9c = FUN_146c061e0(param_2,*(undefined4 *)(*(longlong *)(lVar1 + 0x3c0) + lVar5 * 4),
                               *(undefined4 *)(*(longlong *)(lVar1 + 0x3c0) + 4 + lVar5 * 4));
      if (local_9c != -1) {
        FUN_1447cbafe(&local_88,local_a0,&local_9c,0);
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < (longlong)*(int *)(lVar1 + 0x3c8) + -1);
  }
  if (*(longlong **)(param_2 + 0x208) != (longlong *)0x0) {
    iVar3 = (**(code **)(**(longlong **)(param_2 + 0x208) + 0xa0))();
    if ((0 < iVar3) && (0 < *(int *)(*(longlong *)(param_2 + 0x208) + 0x28))) {
      uVar4 = **(undefined8 **)(*(longlong *)(param_2 + 0x208) + 0x20);
      goto LAB_144581486;
    }
  }
  uVar4 = 0;
LAB_144581486:
  FUN_146bcfc22(&local_88,uVar4,0);
  local_40 = 0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  uVar2 = uStack_80 >> 0x20;
  uStack_80 = uStack_80 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    FUN_1447a08a2(&local_88,0);
  }
  uStack_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    FUN_1446efbd8(local_78,0);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144581544 FUN_144581544 body=133 status=ok
// SIG undefined FUN_144581544(void)

double * FUN_144581544(double *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *(longlong *)(param_2 + 0x50);
  FUN_146bcb256(param_2,&local_38,param_4);
  dVar1 = *(double *)(lVar3 + 0x148);
  dVar2 = *(double *)(lVar3 + 0x140);
  *param_1 = local_38 - *(double *)(lVar3 + 0x138);
  param_1[1] = local_30 - dVar2;
  param_1[2] = local_28 - dVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445815ca FUN_1445815ca body=71 status=ok
// SIG undefined FUN_1445815ca(void)

void FUN_1445815ca(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bdcdb20;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 144581618 FUN_144581618 body=29 status=ok
// SIG undefined FUN_144581618(void)

void FUN_144581618(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144581636 FUN_144581636 body=29 status=ok
// SIG undefined FUN_144581636(void)

undefined8 FUN_144581636(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581654 FUN_144581654 body=31 status=ok
// SIG undefined FUN_144581654(void)

undefined8
FUN_144581654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_146c5cfa8(param_2,param_1,param_4);
  return param_1;
}



// FUNCTION 144581674 FUN_144581674 body=71 status=ok
// SIG undefined FUN_144581674(void)

void FUN_144581674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14bdcdb40;
  lVar2 = 10;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 1445816c2 FUN_1445816c2 body=29 status=ok
// SIG undefined FUN_1445816c2(void)

void FUN_1445816c2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1445816e0 FUN_1445816e0 body=29 status=ok
// SIG undefined FUN_1445816e0(void)

undefined8 FUN_1445816e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445816fe FUN_1445816fe body=29 status=ok
// SIG undefined FUN_1445816fe(void)

undefined8 FUN_1445816fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581730 FUN_144581730 body=93 status=ok
// SIG undefined FUN_144581730(void)

void FUN_144581730(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcdb60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14458178e FUN_14458178e body=93 status=ok
// SIG undefined FUN_14458178e(void)

void FUN_14458178e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcdb60;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1445817ec FUN_1445817ec body=126 status=ok
// SIG undefined FUN_1445817ec(void)

void FUN_1445817ec(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ba263d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcdb60;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014458185b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14458186a FUN_14458186a body=66 status=ok
// SIG undefined FUN_14458186a(void)

void FUN_14458186a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1445818f4(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445818ae FUN_1445818ae body=68 status=ok
// SIG undefined FUN_1445818ae(void)

undefined8 FUN_1445818ae(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1445818f4(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445818f4 FUN_1445818f4 body=225 status=ok
// SIG undefined FUN_1445818f4(void)

void FUN_1445818f4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_1;
  local_38 = (void *)0x0;
  local_30 = *(int *)(*param_2 + 0xb8);
  lVar2 = (longlong)local_30;
  _Src = *(void **)(*param_2 + 0xb0);
  if (lVar2 == 0) {
    local_2c = 0;
  }
  else {
    FUN_144a06ca8(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar2 << 2);
  }
  if ((void **)(lVar1 + 0x128) == &local_38) {
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x128) != 0) {
      FUN_1400020a8();
    }
    *(void **)(lVar1 + 0x128) = local_38;
    *(int *)(lVar1 + 0x130) = local_30;
    *(undefined4 *)(lVar1 + 0x134) = local_2c;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445819d6 FUN_1445819d6 body=29 status=ok
// SIG undefined FUN_1445819d6(void)

undefined8 FUN_1445819d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581a08 FUN_144581a08 body=93 status=ok
// SIG undefined FUN_144581a08(void)

void FUN_144581a08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcdbd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144581a66 FUN_144581a66 body=93 status=ok
// SIG undefined FUN_144581a66(void)

void FUN_144581a66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcdbd0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144581ac4 FUN_144581ac4 body=126 status=ok
// SIG undefined FUN_144581ac4(void)

void FUN_144581ac4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcdbd0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144581b33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144581b42 FUN_144581b42 body=46 status=ok
// SIG undefined FUN_144581b42(void)

void FUN_144581b42(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*plVar2 + 0x348))(plVar2);
  FUN_1496bf118(plVar1);
  return;
}



// FUNCTION 144581b70 FUN_144581b70 body=49 status=ok
// SIG undefined FUN_144581b70(void)

undefined8 FUN_144581b70(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  plVar2 = (longlong *)(**(code **)(*plVar1 + 0x2c8))(plVar1);
  (**(code **)(*plVar2 + 0x348))(plVar2);
  FUN_1496bf118(plVar1);
  return 1;
}



// FUNCTION 144581ba2 FUN_144581ba2 body=38 status=ok
// SIG undefined FUN_144581ba2(void)

void FUN_144581ba2(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  (**(code **)(*plVar1 + 0x3f0))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000144581bc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x408))(plVar1);
  return;
}



// FUNCTION 144581bf2 FUN_144581bf2 body=29 status=ok
// SIG undefined FUN_144581bf2(void)

undefined8 FUN_144581bf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581c3c FUN_144581c3c body=29 status=ok
// SIG undefined FUN_144581c3c(void)

undefined8 FUN_144581c3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581c86 FUN_144581c86 body=29 status=ok
// SIG undefined FUN_144581c86(void)

undefined8 FUN_144581c86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581cd0 FUN_144581cd0 body=29 status=ok
// SIG undefined FUN_144581cd0(void)

undefined8 FUN_144581cd0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581d1a FUN_144581d1a body=29 status=ok
// SIG undefined FUN_144581d1a(void)

undefined8 FUN_144581d1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581d70 FUN_144581d70 body=29 status=ok
// SIG undefined FUN_144581d70(void)

undefined8 FUN_144581d70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581d8e FUN_144581d8e body=72 status=ok
// SIG undefined FUN_144581d8e(void)

void FUN_144581d8e(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144581dd8 FUN_144581dd8 body=163 status=ok
// SIG undefined FUN_144581dd8(void)

void FUN_144581dd8(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0xa8) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144581ea6 FUN_144581ea6 body=29 status=ok
// SIG undefined FUN_144581ea6(void)

undefined8 FUN_144581ea6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581ec4 FUN_144581ec4 body=29 status=ok
// SIG undefined FUN_144581ec4(void)

undefined8 FUN_144581ec4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144581ef6 FUN_144581ef6 body=93 status=ok
// SIG undefined FUN_144581ef6(void)

void FUN_144581ef6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcdda0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144581f54 FUN_144581f54 body=93 status=ok
// SIG undefined FUN_144581f54(void)

void FUN_144581f54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdcdda0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144581fb2 FUN_144581fb2 body=126 status=ok
// SIG undefined FUN_144581fb2(void)

void FUN_144581fb2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdcdda0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144582021. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144582030 FUN_144582030 body=41 status=ok
// SIG undefined FUN_144582030(void)

void FUN_144582030(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
                    /* WARNING: Could not recover jumptable at 0x000144582056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return;
}



// FUNCTION 14458205a FUN_14458205a body=40 status=ok
// SIG undefined FUN_14458205a(void)

undefined8 FUN_14458205a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  uVar2 = FUN_1484d6172(param_2);
  (**(code **)(*plVar1 + 0x338))(plVar1,uVar2);
  return 1;
}



// FUNCTION 144582082 FUN_144582082 body=740 status=ok
// SIG undefined FUN_144582082(void)

void FUN_144582082(longlong *param_1,longlong param_2,undefined4 param_3)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  longlong lVar24;
  double *pdVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  
  param_1 = (longlong *)*param_1;
  lVar3 = *param_1;
  iVar2 = *(int *)(param_2 + 0x680);
  dVar12 = *(double *)(param_2 + 0x240);
  dVar13 = *(double *)(param_2 + 0x248);
  dVar14 = *(double *)(param_2 + 0x250);
  dVar15 = *(double *)(param_2 + 600);
  dVar16 = *(double *)(param_2 + 0x260);
  dVar17 = *(double *)(param_2 + 0x268);
  dVar18 = *(double *)(param_2 + 0x270);
  dVar19 = *(double *)(param_2 + 0x278);
  dVar20 = *(double *)(param_2 + 0x280);
  dVar21 = *(double *)(param_2 + 0x288);
  dVar22 = *(double *)(param_2 + 0x290);
  dVar23 = *(double *)(param_2 + 0x298);
  iVar27 = *(int *)param_1[2];
  if (*(int *)(lVar3 + 0xe0) <= iVar27) {
    *(undefined1 *)param_1[1] = 1;
    iVar27 = *(int *)(lVar3 + 0xe0);
    *(uint *)(lVar3 + 0xe0) = iVar27 + 1U;
    if (*(uint *)(lVar3 + 0xe4) < iVar27 + 1U) {
      FUN_1447808da((longlong *)(lVar3 + 0xd8),iVar27);
    }
    *(int *)(*(longlong *)(lVar3 + 0xd8) + (longlong)iVar27 * 4) = iVar2;
    iVar27 = *(int *)(lVar3 + 0xf0);
    *(uint *)(lVar3 + 0xf0) = iVar27 + 1U;
    if (*(uint *)(lVar3 + 0xf4) < iVar27 + 1U) {
      FUN_144a2c682((longlong *)(lVar3 + 0xe8),iVar27);
    }
    lVar24 = *(longlong *)(lVar3 + 0xe8);
    lVar26 = (longlong)iVar27 * 0x60;
    *(double *)(lVar24 + lVar26) = dVar12;
    ((double *)(lVar24 + lVar26))[1] = dVar13;
    pdVar25 = (double *)(lVar24 + 0x10 + lVar26);
    *pdVar25 = dVar14;
    pdVar25[1] = dVar15;
    pdVar25 = (double *)(lVar24 + 0x20 + lVar26);
    *pdVar25 = dVar16;
    pdVar25[1] = dVar17;
    pdVar25 = (double *)(lVar24 + 0x30 + lVar26);
    *pdVar25 = dVar18;
    pdVar25[1] = dVar19;
    pdVar25 = (double *)(lVar24 + 0x40 + lVar26);
    *pdVar25 = dVar20;
    pdVar25[1] = dVar21;
    pdVar25 = (double *)(lVar24 + 0x50 + lVar26);
    *pdVar25 = dVar22;
    pdVar25[1] = dVar23;
    goto LAB_14458221a;
  }
  if (*(int *)(*(longlong *)(lVar3 + 0xd8) + (longlong)iVar27 * 4) == iVar2) {
    lVar24 = *(longlong *)(lVar3 + 0xe8);
    lVar26 = (longlong)iVar27 * 0x60;
    pdVar25 = (double *)(lVar24 + 0x20 + lVar26);
    pdVar1 = (double *)(lVar24 + 0x30 + lVar26);
    auVar8._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[1] - dVar17));
    auVar8._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar25 - dVar16));
    iVar27 = movmskpd(iVar27,auVar8);
    auVar6._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar1[1] - dVar19));
    auVar6._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar1 - dVar18));
    uVar29 = movmskpd(param_3,auVar6);
    if ((uVar29 & 0x3fffffff) == 0 && iVar27 == 0) {
      pdVar25 = (double *)(lVar24 + lVar26);
      lVar24 = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[1] - dVar13));
      auVar11._8_4_ = (int)lVar24;
      auVar11._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar25 - dVar12));
      auVar11._12_4_ = (int)((ulonglong)lVar24 >> 0x20);
      uVar29 = movmskpd((int)lVar26,auVar11);
      auVar9._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[3] - dVar15));
      auVar9._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[2] - dVar14));
      iVar27 = movmskpd(iVar27,auVar9);
      uVar28 = iVar27 << 2 | uVar29;
      if (uVar28 != 0) {
        auVar10._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[1] + dVar13));
        auVar10._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(*pdVar25 + dVar12));
        uVar29 = movmskpd(uVar29,auVar10);
        auVar7._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[3] + dVar15));
        auVar7._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[2] + dVar14));
        uVar28 = movmskpd(uVar28,auVar7);
        if ((uVar28 & 0x3fffffff) != 0 || uVar29 != 0) goto LAB_14458217f;
      }
      auVar5._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[9] - dVar21));
      auVar5._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[8] - dVar20));
      iVar27 = movmskpd((int)pdVar25,auVar5);
      auVar4._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[0xb] - dVar23));
      auVar4._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(pdVar25[10] - dVar22));
      uVar29 = movmskpd(uVar29,auVar4);
      if ((uVar29 & 0x3fffffff) == 0 && iVar27 == 0) goto LAB_14458221a;
    }
  }
LAB_14458217f:
  *(undefined1 *)param_1[1] = 1;
LAB_14458221a:
  *(int *)(*(longlong *)(lVar3 + 0xd8) + (longlong)*(int *)param_1[2] * 4) = iVar2;
  lVar3 = *(longlong *)(lVar3 + 0xe8);
  lVar24 = (longlong)*(int *)param_1[2] * 0x60;
  *(double *)(lVar3 + lVar24) = dVar12;
  ((double *)(lVar3 + lVar24))[1] = dVar13;
  pdVar25 = (double *)(lVar3 + 0x10 + lVar24);
  *pdVar25 = dVar14;
  pdVar25[1] = dVar15;
  pdVar25 = (double *)(lVar3 + 0x20 + lVar24);
  *pdVar25 = dVar16;
  pdVar25[1] = dVar17;
  pdVar25 = (double *)(lVar3 + 0x30 + lVar24);
  *pdVar25 = dVar18;
  pdVar25[1] = dVar19;
  pdVar25 = (double *)(lVar3 + 0x40 + lVar24);
  *pdVar25 = dVar20;
  pdVar25[1] = dVar21;
  pdVar25 = (double *)(lVar3 + 0x50 + lVar24);
  *pdVar25 = dVar22;
  pdVar25[1] = dVar23;
  *(int *)param_1[2] = *(int *)param_1[2] + 1;
  return;
}



// FUNCTION 144582366 FUN_144582366 body=51 status=ok
// SIG undefined FUN_144582366(void)

undefined8 FUN_144582366(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  lVar2 = FUN_14092ee58();
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30);
  }
  return uVar3;
}



// FUNCTION 1445823b0 FUN_1445823b0 body=12 status=ok
// SIG undefined FUN_1445823b0(void)

void FUN_1445823b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001445823b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1445823bc FUN_1445823bc body=29 status=ok
// SIG undefined FUN_1445823bc(void)

undefined8 FUN_1445823bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445823da FUN_1445823da body=51 status=ok
// SIG undefined FUN_1445823da(void)

undefined8 FUN_1445823da(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_2;
  lVar2 = FUN_14092ee58();
  if (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),
                     *(longlong *)
                      (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                      (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30);
  }
  return uVar3;
}



// FUNCTION 144582424 FUN_144582424 body=12 status=ok
// SIG undefined FUN_144582424(void)

void FUN_144582424(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014458242d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144582430 FUN_144582430 body=29 status=ok
// SIG undefined FUN_144582430(void)

undefined8 FUN_144582430(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458244e FUN_14458244e body=163 status=ok
// SIG undefined FUN_14458244e(void)

void FUN_14458244e(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0xf0) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14458251c FUN_14458251c body=29 status=ok
// SIG undefined FUN_14458251c(void)

undefined8 FUN_14458251c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458256c FUN_14458256c body=29 status=ok
// SIG undefined FUN_14458256c(void)

undefined8 FUN_14458256c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445825bc FUN_1445825bc body=29 status=ok
// SIG undefined FUN_1445825bc(void)

undefined8 FUN_1445825bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458260e FUN_14458260e body=29 status=ok
// SIG undefined FUN_14458260e(void)

undefined8 FUN_14458260e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445826b6 FUN_1445826b6 body=72 status=ok
// SIG undefined FUN_1445826b6(void)

void FUN_1445826b6(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe(*param_1,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144582700 FUN_144582700 body=1021 status=ok
// SIG undefined FUN_144582700(void)

void FUN_144582700(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_178 [40];
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar7 = (longlong)*(int *)(*param_1 + 0x10);
  local_150 = param_1;
  if (lVar7 != 0) {
    lVar8 = *(longlong *)(*param_1 + 8);
    local_148 = lVar7 * 0x220 + lVar8;
    local_140 = param_1[2];
    do {
      *(int *)local_150[1] = *(int *)local_150[1] + 1;
      FUN_146c89f40(&local_64,*(undefined4 *)local_150[1]);
      uVar12 = 0;
      uVar9 = *(int *)(lVar8 + 0x140) * 0x200 + *(int *)(lVar8 + 0x144);
      if ((uVar9 != 0) && (0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar8 + 0x148) - 1U))) {
        uVar12 = 1;
        uVar11 = 1;
        if (1 < (int)uVar9) {
          uVar12 = (ulonglong)uVar9;
        }
        do {
          uVar6 = uVar11;
          if ((uint)uVar12 == uVar6) goto LAB_1445827ee;
          uVar11 = uVar6 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar8 + 0x148))[uVar6 >> 9] +
                                             (ulonglong)(uVar6 & 0x1ff) * 2) - 1U));
        uVar12 = (ulonglong)uVar6;
      }
LAB_1445827ee:
      uVar11 = (uint)uVar12;
      if (uVar11 != uVar9) {
        FUN_146c13dec(lVar8,&local_80,uVar12);
        uVar5 = local_64;
        lVar7 = *(longlong *)(lVar8 + 0x10);
        lVar13 = *(longlong *)(*(longlong *)(lVar8 + 0x130) + (uVar12 >> 9) * 8);
        uVar10 = (ulonglong)(uVar11 & 0x1ff);
        uVar6 = *(uint *)(lVar13 + uVar10 * 0xc);
        uVar2 = *(uint *)(lVar13 + 4 + uVar10 * 0xc);
        uVar3 = *(uint *)(lVar13 + 8 + uVar10 * 0xc);
        lVar13 = *(longlong *)(lVar7 + (ulonglong)(uVar6 >> 9) * 8);
        uVar10 = (ulonglong)uVar6 & 0x1ff;
        local_88 = *(undefined8 *)(lVar13 + 0x10 + uVar10 * 0x18);
        puVar1 = (undefined8 *)(lVar13 + uVar10 * 0x18);
        local_98 = *puVar1;
        uStack_90 = puVar1[1];
        local_a8 = local_70;
        local_b8 = CONCAT44(uStack_7c,local_80);
        uStack_b0 = CONCAT44(uStack_74,uStack_78);
        lVar13 = *(longlong *)(lVar7 + (ulonglong)(uVar2 >> 9) * 8);
        uVar10 = (ulonglong)uVar2 & 0x1ff;
        puVar1 = (undefined8 *)(lVar13 + uVar10 * 0x18);
        local_d8 = *puVar1;
        uStack_d0 = puVar1[1];
        local_c8 = *(undefined8 *)(lVar13 + 0x10 + uVar10 * 0x18);
        local_e8 = local_70;
        local_f8 = CONCAT44(uStack_7c,local_80);
        uStack_f0 = CONCAT44(uStack_74,uStack_78);
        lVar7 = *(longlong *)(lVar7 + (ulonglong)(uVar3 >> 9) * 8);
        uVar10 = (ulonglong)uVar3 & 0x1ff;
        local_108 = *(undefined8 *)(lVar7 + 0x10 + uVar10 * 0x18);
        puVar1 = (undefined8 *)(lVar7 + uVar10 * 0x18);
        local_118 = *puVar1;
        uStack_110 = puVar1[1];
        local_138 = local_80;
        uStack_134 = uStack_7c;
        uStack_130 = uStack_78;
        uStack_12c = uStack_74;
        local_128 = local_70;
        lVar7 = *(longlong *)(local_140 + 0x130);
        if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar7);
        }
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_14854c7dc(param_3,iVar4);
        }
        lVar13 = *param_3;
        *(longlong *)(lVar13 + (longlong)iVar4 * 0xe0) = lVar7;
        if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar7);
        }
        lVar13 = lVar13 + (longlong)iVar4 * 0xe0;
        *(undefined8 *)(lVar13 + 0x18) = local_88;
        *(undefined8 *)(lVar13 + 8) = local_98;
        *(undefined8 *)(lVar13 + 0x10) = uStack_90;
        *(undefined8 *)(lVar13 + 0x20) = 0;
        *(undefined8 *)(lVar13 + 0x28) = 0;
        *(undefined8 *)(lVar13 + 0x30) = local_b8;
        *(undefined8 *)(lVar13 + 0x38) = uStack_b0;
        *(undefined8 *)(lVar13 + 0x40) = local_a8;
        *(undefined4 *)(lVar13 + 0x48) = uVar5;
        *(undefined8 *)(lVar13 + 0x50) = local_d8;
        *(undefined8 *)(lVar13 + 0x58) = uStack_d0;
        *(undefined8 *)(lVar13 + 0x60) = local_c8;
        *(undefined8 *)(lVar13 + 0x68) = 0x3ff0000000000000;
        *(undefined8 *)(lVar13 + 0x70) = 0;
        *(undefined8 *)(lVar13 + 0x78) = local_f8;
        *(undefined8 *)(lVar13 + 0x80) = uStack_f0;
        *(undefined8 *)(lVar13 + 0x88) = local_e8;
        *(undefined4 *)(lVar13 + 0x90) = uVar5;
        *(undefined8 *)(lVar13 + 0x98) = local_118;
        *(undefined8 *)(lVar13 + 0xa0) = uStack_110;
        *(undefined8 *)(lVar13 + 0xa8) = local_108;
        *(undefined8 *)(lVar13 + 0xb0) = 0x3ff0000000000000;
        *(undefined8 *)(lVar13 + 0xb8) = 0x3ff0000000000000;
        *(undefined8 *)(lVar13 + 0xd0) = local_128;
        *(undefined4 *)(lVar13 + 0xc0) = local_138;
        *(undefined4 *)(lVar13 + 0xc4) = uStack_134;
        *(undefined4 *)(lVar13 + 200) = uStack_130;
        *(undefined4 *)(lVar13 + 0xcc) = uStack_12c;
        *(undefined4 *)(lVar13 + 0xd8) = uVar5;
        uVar6 = uVar11 + 1;
        if ((int)(uVar11 + 1) < (int)uVar9) {
          uVar6 = uVar9;
        }
        do {
          if (uVar6 - 1 == (int)uVar12) {
            uVar12 = (ulonglong)uVar6;
            break;
          }
          uVar11 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar11;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar8 + 0x148) +
                                               (ulonglong)(uVar11 >> 9) * 8) +
                                             (ulonglong)(uVar11 & 0x1ff) * 2) - 1U));
        goto LAB_1445827ee;
      }
      lVar8 = lVar8 + 0x220;
    } while (lVar8 != local_148);
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144582afe FUN_144582afe body=1092 status=ok
// SIG undefined FUN_144582afe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144582afe(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cc2144c);
  if (cVar1 == '\0') {
    _DAT_14cc2144c = 0;
    uRam000000014cc21454 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_58 = 3;
  ppuStack_60 = &PTR_FUN_14bdb0710;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdb0770,5,0);
  FUN_140056680(&DAT_14cc21558,L"MirrorTool");
  atexit((_func_5014 *)&LAB_144572639);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bdb2c60;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdb2c80,6,0);
  local_50 = "SMInstance";
  local_48 = 10;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cc21610 = (ulonglong)uVar2;
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bdb4500;
  local_68 = 5;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdb45f0,2,&PTR_FUN_14bdb4520);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bdb5610;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdb5630,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdb6250,2,0);
  ppuStack_60 = &PTR_FUN_14bdb7fd0;
  local_68 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdb8050,3,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bdb9290;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdb92b0,3,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bdba820;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdba840,4,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdbc170,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdbc790,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdbcbe0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdbdd80,3,0);
  local_58 = 3;
  ppuStack_60 = &PTR_FUN_14bdbfa10;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdbfa70,5,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdc13f0,4,0);
  ppuStack_60 = &PTR_FUN_14bdc3cd0;
  local_68 = 1;
  local_58 = 2;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdc3d40,5,&PTR_FUN_14bdc3d10);
  FUN_140056680(&DAT_14cc21d48,L"VertexSculptIndicatorGizmoType");
  atexit((_func_5014 *)&LAB_144575531);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdc4fa0,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdc6030,3,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bdc81f0;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdc8210,7,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdc8e10,2,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14bdc9ee0;
  local_68 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bdc9f00,3,0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144582f55 FUN_144582f55 body=55 status=ok
// SIG undefined FUN_144582f55(void)

void FUN_144582f55(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22048 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc22048 = FUN_14171c317(FUN_14674ca2b,uVar1,L"ETransformMeshesTransformMode");
  }
  return;
}



// FUNCTION 144582f8c FUN_144582f8c body=55 status=ok
// SIG undefined FUN_144582f8c(void)

void FUN_144582f8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22060 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc22060 = FUN_14171c317(FUN_14674ca5a,uVar1,L"ETransformMeshesSnapDragSource");
  }
  return;
}



// FUNCTION 144582fc3 FUN_144582fc3 body=55 status=ok
// SIG undefined FUN_144582fc3(void)

void FUN_144582fc3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22078 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc22078 = FUN_14171c317(FUN_14674ca89,uVar1,L"ETransformMeshesSnapDragRotationMode");
  }
  return;
}



// FUNCTION 14458302d FUN_14458302d body=55 status=ok
// SIG undefined FUN_14458302d(void)

void FUN_14458302d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc221f8 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc221f8 = FUN_14171c317(FUN_14674ce4b,uVar1,L"EVoxelBlendOperation");
  }
  return;
}



// FUNCTION 144583064 FUN_144583064 body=55 status=ok
// SIG undefined FUN_144583064(void)

void FUN_144583064(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc22300 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc22300 = FUN_14171c317(FUN_14674d2a7,uVar1,L"EWeldMeshEdgesAttributeUIMode");
  }
  return;
}



// FUNCTION 1445830aa FUN_1445830aa body=45 status=ok
// SIG undefined FUN_1445830aa(void)

void FUN_1445830aa(undefined8 *param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)*param_1 + 0xb30))
            ((longlong *)*param_1,*(undefined4 *)(param_1 + 1),param_2,1,1,1);
  return;
}



// FUNCTION 1445830ee FUN_1445830ee body=29 status=ok
// SIG undefined FUN_1445830ee(void)

undefined8 FUN_1445830ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458310c FUN_14458310c body=85 status=ok
// SIG undefined FUN_14458310c(void)

undefined8 * FUN_14458310c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3ff00000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3ff00000;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0;
  FUN_1410499a6(*param_2,*(undefined4 *)(param_2 + 1),param_1,1);
  return param_1;
}



// FUNCTION 144583178 FUN_144583178 body=29 status=ok
// SIG undefined FUN_144583178(void)

undefined8 FUN_144583178(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445831ca FUN_1445831ca body=29 status=ok
// SIG undefined FUN_1445831ca(void)

undefined8 FUN_1445831ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144583228 FUN_144583228 body=29 status=ok
// SIG undefined FUN_144583228(void)

undefined8 FUN_144583228(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445832a4 FUN_1445832a4 body=29 status=ok
// SIG undefined FUN_1445832a4(void)

undefined8 FUN_1445832a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445832c2 FUN_1445832c2 body=123 status=ok
// SIG undefined FUN_1445832c2(void)

void FUN_1445832c2(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)((longlong)param_1 + 0x194) != '\0') {
    return;
  }
  *(byte *)(param_1[0x19] + 0xaa) = *(byte *)(param_1[0x19] + 0xaa) ^ 1;
  lVar2 = param_1[0x19];
  iVar1 = *(int *)(lVar2 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x28);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 8))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
    lVar2 = param_1[0x19];
  }
                    /* WARNING: Could not recover jumptable at 0x00014458333a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,lVar2);
  return;
}



// FUNCTION 144583368 FUN_144583368 body=29 status=ok
// SIG undefined FUN_144583368(void)

undefined8 FUN_144583368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144583386 FUN_144583386 body=123 status=ok
// SIG undefined FUN_144583386(void)

void FUN_144583386(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)((longlong)param_1 + 0x194) != '\0') {
    return;
  }
  *(byte *)(param_1[0x19] + 0xab) = *(byte *)(param_1[0x19] + 0xab) ^ 1;
  lVar2 = param_1[0x19];
  iVar1 = *(int *)(lVar2 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x28);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 8))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
    lVar2 = param_1[0x19];
  }
                    /* WARNING: Could not recover jumptable at 0x0001445833fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,lVar2);
  return;
}



// FUNCTION 14458342c FUN_14458342c body=29 status=ok
// SIG undefined FUN_14458342c(void)

undefined8 FUN_14458342c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458344a FUN_14458344a body=151 status=ok
// SIG undefined FUN_14458344a(void)

void FUN_14458344a(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)((longlong)param_1 + 0x194) != '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1[0x19] + 0xa8);
  *(byte *)(param_1[0x19] + 0xa8) = bVar1 + (char)((bVar1 + 1) / 3) * -3 + '\x01';
  lVar3 = param_1[0x19];
  iVar2 = *(int *)(lVar3 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 8))();
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
    lVar3 = param_1[0x19];
  }
                    /* WARNING: Could not recover jumptable at 0x0001445834de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,lVar3);
  return;
}



// FUNCTION 14458350c FUN_14458350c body=29 status=ok
// SIG undefined FUN_14458350c(void)

undefined8 FUN_14458350c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458352a FUN_14458352a body=133 status=ok
// SIG undefined FUN_14458352a(void)

void FUN_14458352a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)((longlong)param_1 + 0x194) != '\0') {
    return;
  }
  *(byte *)(param_1[0x19] + 0xac) = ~*(byte *)(param_1[0x19] + 0xac) & 1;
  lVar2 = param_1[0x19];
  iVar1 = *(int *)(lVar2 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0x28);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 8))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
    lVar2 = param_1[0x19];
  }
                    /* WARNING: Could not recover jumptable at 0x0001445835ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,lVar2);
  return;
}



// FUNCTION 1445835da FUN_1445835da body=29 status=ok
// SIG undefined FUN_1445835da(void)

undefined8 FUN_1445835da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445835f8 FUN_1445835f8 body=151 status=ok
// SIG undefined FUN_1445835f8(void)

void FUN_1445835f8(longlong *param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  param_1 = (longlong *)*param_1;
  if (*(char *)((longlong)param_1 + 0x194) != '\0') {
    return;
  }
  bVar1 = *(byte *)(param_1[0x19] + 0xad);
  *(byte *)(param_1[0x19] + 0xad) = bVar1 + (char)((bVar1 + 1) / 3) * -3 + '\x01';
  lVar3 = param_1[0x19];
  iVar2 = *(int *)(lVar3 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x28);
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar4) + 8))();
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar2 * 8 != lVar4);
    lVar3 = param_1[0x19];
  }
                    /* WARNING: Could not recover jumptable at 0x00014458368c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x330))(param_1,lVar3);
  return;
}



// FUNCTION 1445836ba FUN_1445836ba body=29 status=ok
// SIG undefined FUN_1445836ba(void)

undefined8 FUN_1445836ba(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144583710 FUN_144583710 body=29 status=ok
// SIG undefined FUN_144583710(void)

undefined8 FUN_144583710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458372e FUN_14458372e body=229 status=ok
// SIG undefined FUN_14458372e(void)

void FUN_14458372e(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(longlong *)*param_1;
  iVar3 = *(int *)(lVar5 + 0x110);
  *(uint *)(lVar5 + 0x110) = iVar3 + 1U;
  if (*(uint *)(lVar5 + 0x114) < iVar3 + 1U) {
    FUN_1496dbf66(lVar5 + 0x108,iVar3);
  }
  lVar4 = *(longlong *)(lVar5 + 0x108);
  puVar1 = (undefined8 *)(lVar4 + (longlong)iVar3 * 0x80);
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0x3ff00000;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0x3ff0000000000000;
  puVar1[0xd] = 0x3ff0000000000000;
  puVar1[0xe] = 0x3ff0000000000000;
  puVar1[0xf] = 0;
  dVar2 = *(double *)(*(longlong *)(lVar5 + 0x100) + 0xa8);
  FUN_141266fc2(param_2,1,(float)(dVar2 * dVar2),lVar4 + (longlong)iVar3 * 0x80);
  puVar6 = (undefined8 *)(param_2 + 0x240);
  puVar7 = puVar1 + 4;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 0x695);
  return;
}



// FUNCTION 144583814 FUN_144583814 body=94 status=ok
// SIG undefined FUN_144583814(void)

void FUN_144583814(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [40];
  undefined1 local_10 [4];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = *param_2;
  FUN_1447cbafe((longlong)(int)param_1[1] * 0x50 + *param_1 + 0x150,local_10,&local_c,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144583874 FUN_144583874 body=29 status=ok
// SIG undefined FUN_144583874(void)

undefined8 FUN_144583874(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144583a10 FUN_144583a10 body=93 status=ok
// SIG undefined FUN_144583a10(void)

void FUN_144583a10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144583a6e FUN_144583a6e body=93 status=ok
// SIG undefined FUN_144583a6e(void)

void FUN_144583a6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8310;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144583acc FUN_144583acc body=126 status=ok
// SIG undefined FUN_144583acc(void)

void FUN_144583acc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14ba263d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdd8310;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144583b3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144583b4a FUN_144583b4a body=66 status=ok
// SIG undefined FUN_144583b4a(void)

void FUN_144583b4a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144583ca6(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144583b8e FUN_144583b8e body=278 status=ok
// SIG undefined FUN_144583b8e(void)

undefined8 FUN_144583b8e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144583c9e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144583c9e;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144583c9e:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144583c53;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144583ca6(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144583c53;
    }
  }
  uVar6 = 0;
LAB_144583c53:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144583ca6 FUN_144583ca6 body=496 status=ok
// SIG undefined FUN_144583ca6(void)

void FUN_144583ca6(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [4];
  undefined1 local_4c [4];
  wchar_t *local_48 [2];
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = *(char *)(*param_2 + 0x168);
  plVar2 = (longlong *)(**(code **)(*(longlong *)*param_1 + 0x2c8))();
  if (cVar1 == '\0') {
    local_38 = L"TransferUnsuccessful";
    local_30 = 0x14;
    FUN_1446e940c(local_4c,&local_38);
    local_38 = L"UUVTransferTool";
    local_30 = 0xf;
    FUN_1446e940c(local_50,&local_38);
    local_38 = 
    L"Transfer was not fully successful, possibly because correspondence couldn\'t be found. The source mesh is expected to be a version of the destination mesh simplified via \"Existing Positions\" option so that any UV layout done on the simplified mesh can be mapped back to the (original) destination mesh via vertex positions."
    ;
    local_30 = 0x142;
    FUN_140208c1e(local_48,local_50,local_4c,&local_38);
    (**(code **)(*plVar2 + 0x340))(plVar2,local_48,3);
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c844850) {
      FUN_144b3d300(&DAT_14c844850);
      if (DAT_14c844850 == -1) {
        DAT_14c844840 = (wchar_t *)FUN_14001cc68(0x30,0x10);
        DAT_14c844840[4] = L'\0';
        DAT_14c844840[5] = L'\0';
        DAT_14c844840[6] = L'\0';
        DAT_14c844840[7] = L'\0';
        *(undefined ***)DAT_14c844840 = &PTR_FUN_149e19310;
        DAT_14c844840[8] = L'\xffff';
        DAT_14c844840[9] = L'\xffff';
        DAT_14c844840[10] = L'\xffff';
        DAT_14c844840[0xb] = L'\xffff';
        DAT_14c844840[0xc] = L'\0';
        DAT_14c844840[0xd] = L'\0';
        DAT_14c844840[0xe] = L'\0';
        DAT_14c844840[0xf] = L'\0';
        DAT_14c844840[0x10] = L'\0';
        DAT_14c844840[0x11] = L'\0';
        DAT_14c844840[0x12] = L'\0';
        DAT_14c844840[0x13] = L'\0';
        DAT_14c844840[0x14] = L'\0';
        DAT_14c844840[0x15] = L'\0';
        DAT_14c844840[0x16] = L'\0';
        DAT_14c844840[0x17] = L'\0';
        if (DAT_14c844840 != (wchar_t *)0x0) {
          LOCK();
          *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
          UNLOCK();
        }
        DAT_14c844848 = 0;
        atexit(FUN_142760bef);
        _Init_thread_footer(&DAT_14c844850);
      }
    }
    local_38 = DAT_14c844840;
    if (DAT_14c844840 != (wchar_t *)0x0) {
      if (*(code **)(*(longlong *)DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 4) = *(int *)(DAT_14c844840 + 4) + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*(longlong *)DAT_14c844840 + 8))();
      }
    }
    local_30 = 0;
    (**(code **)(*plVar2 + 0x340))(plVar2,&local_38,3);
    local_48[0] = local_38;
  }
  if (local_48[0] != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_48[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144583e98 FUN_144583e98 body=29 status=ok
// SIG undefined FUN_144583e98(void)

undefined8 FUN_144583e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584034 FUN_144584034 body=93 status=ok
// SIG undefined FUN_144584034(void)

void FUN_144584034(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144584092 FUN_144584092 body=93 status=ok
// SIG undefined FUN_144584092(void)

void FUN_144584092(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdd8630;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1445840f0 FUN_1445840f0 body=126 status=ok
// SIG undefined FUN_1445840f0(void)

void FUN_1445840f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aefe820;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdd8630;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014458415f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144584184 FUN_144584184 body=279 status=ok
// SIG undefined FUN_144584184(void)

undefined8 FUN_144584184(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144584295;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144584295;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144584295:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144584243;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x128) != 0) {
        FUN_1484dea34();
      }
      goto LAB_144584243;
    }
  }
  uVar6 = 0;
LAB_144584243:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14458429c FUN_14458429c body=94 status=ok
// SIG undefined FUN_14458429c(void)

void FUN_14458429c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x108);
  lVar1 = *(longlong *)(lVar2 + 0x100) + 0xb8;
  uVar4 = FUN_140e1307c(lVar1,*(longlong *)(lVar2 + 0x100) + 0xa8);
  FUN_148f71fd6(uVar3,uVar4,lVar1,1);
  if (*(longlong *)(lVar2 + 0x110) == 0) {
    return;
  }
  FUN_1485051e4();
  return;
}



// FUNCTION 144584324 FUN_144584324 body=29 status=ok
// SIG undefined FUN_144584324(void)

undefined8 FUN_144584324(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584342 FUN_144584342 body=76 status=ok
// SIG undefined FUN_144584342(void)

void FUN_144584342(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(**(longlong **)(*param_1 + 0x118) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14458439a FUN_14458439a body=12 status=ok
// SIG undefined FUN_14458439a(void)

void FUN_14458439a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001445843a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1445843a6 FUN_1445843a6 body=29 status=ok
// SIG undefined FUN_1445843a6(void)

undefined8 FUN_1445843a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445843c4 FUN_1445843c4 body=80 status=ok
// SIG undefined FUN_1445843c4(void)

void FUN_1445843c4(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(**(longlong **)(*(longlong *)(*param_1 + 0x110) + 0x58) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144584420 FUN_144584420 body=12 status=ok
// SIG undefined FUN_144584420(void)

void FUN_144584420(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144584429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14458442c FUN_14458442c body=29 status=ok
// SIG undefined FUN_14458442c(void)

undefined8 FUN_14458442c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14458444a FUN_14458444a body=44 status=ok
// SIG undefined FUN_14458444a(void)

void FUN_14458444a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1496d6f90(lVar1);
  if (*(longlong *)(lVar1 + 0x110) == 0) {
    return;
  }
  FUN_1485051e4();
  return;
}



// FUNCTION 1445844a0 FUN_1445844a0 body=29 status=ok
// SIG undefined FUN_1445844a0(void)

undefined8 FUN_1445844a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445844fc FUN_1445844fc body=29 status=ok
// SIG undefined FUN_1445844fc(void)

undefined8 FUN_1445844fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584558 FUN_144584558 body=29 status=ok
// SIG undefined FUN_144584558(void)

undefined8 FUN_144584558(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445845b4 FUN_1445845b4 body=29 status=ok
// SIG undefined FUN_1445845b4(void)

undefined8 FUN_1445845b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584610 FUN_144584610 body=29 status=ok
// SIG undefined FUN_144584610(void)

undefined8 FUN_144584610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144584660 FUN_144584660 body=29 status=ok
// SIG undefined FUN_144584660(void)

undefined8 FUN_144584660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445846b0 FUN_1445846b0 body=29 status=ok
// SIG undefined FUN_1445846b0(void)

undefined8 FUN_1445846b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


