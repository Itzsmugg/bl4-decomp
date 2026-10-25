// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14436edc8 FUN_14436edc8 body=29 status=ok
// SIG undefined FUN_14436edc8(void)

undefined8 FUN_14436edc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ede6 FUN_14436ede6 body=57 status=ok
// SIG undefined FUN_14436ede6(void)

int FUN_14436ede6(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*param_1 + 0xb8);
  if (lVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_140e1307c(lVar1 + 0xb8,lVar1 + 0xa8);
    iVar3 = 0;
    if (iVar2 != -1) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}



// FUNCTION 14436ee36 FUN_14436ee36 body=29 status=ok
// SIG undefined FUN_14436ee36(void)

undefined8 FUN_14436ee36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ee54 FUN_14436ee54 body=29 status=ok
// SIG undefined FUN_14436ee54(void)

undefined8 FUN_14436ee54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436ee86 FUN_14436ee86 body=93 status=ok
// SIG undefined FUN_14436ee86(void)

void FUN_14436ee86(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba27260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436eee4 FUN_14436eee4 body=93 status=ok
// SIG undefined FUN_14436eee4(void)

void FUN_14436eee4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba27260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14436ef42 FUN_14436ef42 body=126 status=ok
// SIG undefined FUN_14436ef42(void)

void FUN_14436ef42(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba27260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436efb1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436efca FUN_14436efca body=20 status=ok
// SIG undefined FUN_14436efca(void)

undefined1 FUN_14436efca(longlong param_1)

{
  FUN_148f73b8c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14436f036 FUN_14436f036 body=29 status=ok
// SIG undefined FUN_14436f036(void)

undefined8 FUN_14436f036(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436f096 FUN_14436f096 body=29 status=ok
// SIG undefined FUN_14436f096(void)

undefined8 FUN_14436f096(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436f0f6 FUN_14436f0f6 body=29 status=ok
// SIG undefined FUN_14436f0f6(void)

undefined8 FUN_14436f0f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436f156 FUN_14436f156 body=29 status=ok
// SIG undefined FUN_14436f156(void)

undefined8 FUN_14436f156(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436f1b6 FUN_14436f1b6 body=29 status=ok
// SIG undefined FUN_14436f1b6(void)

undefined8 FUN_14436f1b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436f1d4 FUN_14436f1d4 body=29 status=ok
// SIG undefined FUN_14436f1d4(void)

undefined8 FUN_14436f1d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14436f370 FUN_14436f370 body=93 status=ok
// SIG undefined FUN_14436f370(void)

void FUN_14436f370(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba27410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436f3ce FUN_14436f3ce body=93 status=ok
// SIG undefined FUN_14436f3ce(void)

void FUN_14436f3ce(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba27410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14436f42c FUN_14436f42c body=126 status=ok
// SIG undefined FUN_14436f42c(void)

void FUN_14436f42c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba27410;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014436f49b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14436f4aa FUN_14436f4aa body=66 status=ok
// SIG undefined FUN_14436f4aa(void)

void FUN_14436f4aa(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14436f606(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436f4ee FUN_14436f4ee body=279 status=ok
// SIG undefined FUN_14436f4ee(void)

undefined8 FUN_14436f4ee(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14436f5ff;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14436f5ff;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14436f5ff:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14436f5b3;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14436f606(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_14436f5b3;
    }
  }
  uVar6 = 0;
LAB_14436f5b3:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436f606 FUN_14436f606 body=481 status=ok
// SIG undefined FUN_14436f606(void)

void FUN_14436f606(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  longlong *local_78 [2];
  int local_68 [10];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_1 = (longlong *)*param_1;
  FUN_148f7ab54(local_68,*param_2 + 0x60);
  if (local_68[0] != 4) goto LAB_14436f7b1;
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
LAB_14436f7e1:
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    plVar3 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0x2c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_14436f7e1;
      plVar3 = (longlong *)*puVar5;
    }
  }
  plVar3 = (longlong *)(**(code **)(*plVar3 + 0x2c8))();
  local_40 = L"OnBevelFailedMessage";
  local_38 = 0x14;
  FUN_1446e940c(local_7c,&local_40);
  local_40 = L"UPolyEditBevelEdgeActivity";
  local_38 = 0x1a;
  FUN_1446e940c(local_80,&local_40);
  local_40 = L"Bevel failed for current selection";
  local_38 = 0x22;
  FUN_140208c1e(local_78,local_80,local_7c,&local_40);
  (**(code **)(*plVar3 + 0x340))(plVar3,local_78,3);
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  (**(code **)(*param_1 + 0x318))();
  if (*(int *)((longlong)param_1 + 0x2c) == 0) {
LAB_14436f791:
    plVar3 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 5);
    plVar3 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         ((((int)plVar3[2] != *(int *)((longlong)param_1 + 0x2c) ||
           ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)) || (lVar2 = *plVar3, lVar2 == 0))))
      goto LAB_14436f791;
      uVar4 = FUN_145a7ba0c();
      plVar3 = (longlong *)FUN_144718840(lVar2,uVar4);
    }
  }
  (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
LAB_14436f7b1:
  FUN_146c81a14(local_68);
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436f7e8 FUN_14436f7e8 body=1910 status=ok
// SIG undefined FUN_14436f7e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14436f7e8(void)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_7c [4];
  wchar_t *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba05e40,1,0);
  ppuStack_90 = &PTR_FUN_14ba06b30;
  local_98 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba06b70,2,0);
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbf3218);
  if (cVar1 == '\0') {
    _DAT_14cbf3218 = 0;
    uRam000000014cbf3220 = 0;
  }
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  ppuStack_90 = &PTR_FUN_14ba0e340;
  local_98 = 0;
  local_88 = 7;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba0e420,0x17,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba0fa90,3,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba101c0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba105b0,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba11ba0,6,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba12220,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba13990,4,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba14db0,3,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba163c0,4,0);
  local_78 = L"CurveInitialization";
  local_70 = 0x13;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UDrawAndRevolveTool";
  local_70 = 0x13;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = 
  L"Draw a path and revolve it around the purple axis. Left-click to place path vertices, and click on the last or first vertex to complete the path. Hold Shift to invert snapping behavior."
  ;
  local_70 = 0xb9;
  FUN_140208c1e(&DAT_14cbf3720,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_144366be4);
  local_78 = L"CurveEditing";
  local_70 = 0xc;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UDrawAndRevolveTool";
  local_70 = 0x13;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = 
  L"Click points to select them, Shift+click to modify selection. Ctrl+click a segment to add a point, or select an endpoint and Ctrl+click to add new endpoint. Backspace deletes selected points. Hold Shift to invert snapping behavior."
  ;
  local_70 = 0xe7;
  FUN_140208c1e(&DAT_14cbf3730,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_144366bf8);
  local_88 = 2;
  ppuStack_90 = &PTR_FUN_14ba181e0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba18220,4,0);
  local_88 = 3;
  ppuStack_90 = &PTR_FUN_14ba1d4c0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba1d520,0xc,0);
  local_78 = L"OnStartEditMeshPolygonsTool_TriangleMode";
  local_70 = 0x28;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UEditMeshPolygonsTool";
  local_70 = 0x15;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = 
  L"Select triangles to edit mesh. Use middle mouse on gizmo to reposition it. Hold Ctrl while translating or (in local mode) rotating to align to scene. Shift and Ctrl change marquee select behavior. Ctrl+R toggles Gizmo Orientation Lock."
  ;
  local_70 = 0xeb;
  FUN_140208c1e(&DAT_14cbf3ac8,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_144366f4d);
  local_78 = L"OnStartEditMeshPolygonsTool";
  local_70 = 0x1b;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UEditMeshPolygonsTool";
  local_70 = 0x15;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = 
  L"Select PolyGroups to edit mesh. Use middle mouse on gizmo to reposition it. Hold Ctrl while translating or (in local mode) rotating to align to scene. Shift and Ctrl change marquee select behavior. Ctrl+R toggles Gizmo Orientation Lock."
  ;
  local_70 = 0xec;
  FUN_140208c1e(&DAT_14cbf3ad8,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_144366f61);
  local_78 = L"OnWeldEdgesCompletedSeamsRemain";
  local_70 = 0x1f;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UEditMeshPolygonsTool";
  local_70 = 0x15;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = 
  L"Warning: welding incomplete because it would create invalid geometry (attached non manifold edge or duplicate triangle). Seam still exists at weld location. Modify attached triangles and retry, or undo."
  ;
  local_70 = 0xca;
  FUN_140208c1e(&DAT_14cbf3ae8,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_144366f75);
  local_78 = L"OnCollapseFailures";
  local_70 = 0x12;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UEditMeshPolygonsTool";
  local_70 = 0x15;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = 
  L"Some edges could not be collapsed, likely because adjoining edges would then have non manifold geometry (more than two faces), or the mesh would end up empty."
  ;
  local_70 = 0x9e;
  FUN_140208c1e(&DAT_14cbf3af8,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_144366f89);
  local_78 = L"PolyMeshCollapseChange";
  local_70 = 0x16;
  FUN_1446e940c(&local_64,&local_78);
  local_78 = L"UEditMeshPolygonsTool";
  local_70 = 0x15;
  FUN_1446e940c(local_7c,&local_78);
  local_78 = L"Collapse Edges";
  local_70 = 0xe;
  FUN_140208c1e(&DAT_14cbf3b08,local_7c,&local_64,&local_78);
  atexit((_func_5014 *)&LAB_144366f9d);
  local_78 = (wchar_t *)CONCAT44(local_78._4_4_,60000);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14078dbce(&DAT_14cbf3b18,L"modeling.PolyEdit.EdgeLimit",&local_78,
                L"Maximal number of edges that PolyEd and TriEd support. Meshes that would require more than this number of edges to be rendered in PolyEd or TriEd force the tools to be disabled to avoid hanging the editor."
               );
  atexit(FUN_144366fb1);
  local_98 = local_98 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cbf3b38,L"modeling.PolyEdit.AllowWeldInternalBowtie",&DAT_14cbf3b30);
  atexit(FUN_144366ff6);
  local_78 = (wchar_t *)0x800000014ba20ee2;
  local_64 = 0x11;
  local_70 = FUN_14577453c(L"MeshModelingTools",&local_64);
  local_6c = 1;
  FUN_146667d56(&local_78);
  local_88 = 2;
  ppuStack_90 = &PTR_FUN_14ba222a0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba222e0,3,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba22860,1,0);
  local_88 = 3;
  ppuStack_90 = &PTR_FUN_14ba232d0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba23330,1,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba23e40,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba24920,2,0);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14436ff60 FUN_14436ff60 body=55 status=ok
// SIG undefined FUN_14436ff60(void)

void FUN_14436ff60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3cc8 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3cc8 = FUN_14171c317(FUN_146668ca1,uVar1,L"EPolyEditCutPlaneOrientation");
  }
  return;
}



// FUNCTION 14436ff97 FUN_14436ff97 body=55 status=ok
// SIG undefined FUN_14436ff97(void)

void FUN_14436ff97(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3d10 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3d10 = FUN_14171c317(FUN_146668db8,uVar1,L"EPolyEditExtrudeDirection");
  }
  return;
}



// FUNCTION 14436ffce FUN_14436ffce body=55 status=ok
// SIG undefined FUN_14436ffce(void)

void FUN_14436ffce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3d28 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3d28 = FUN_14171c317(FUN_146668de9,uVar1,L"EPolyEditExtrudeDistanceMode");
  }
  return;
}



// FUNCTION 144370005 FUN_144370005 body=55 status=ok
// SIG undefined FUN_144370005(void)

void FUN_144370005(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3d40 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3d40 = FUN_14171c317(FUN_146668e1a,uVar1,L"EPolyEditExtrudeModeOptions");
  }
  return;
}



// FUNCTION 14437003c FUN_14437003c body=55 status=ok
// SIG undefined FUN_14437003c(void)

void FUN_14437003c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3d58 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3d58 = FUN_14171c317(FUN_146668e49,uVar1,L"EPolyEditOffsetModeOptions");
  }
  return;
}



// FUNCTION 144370073 FUN_144370073 body=55 status=ok
// SIG undefined FUN_144370073(void)

void FUN_144370073(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3d70 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3d70 = FUN_14171c317(FUN_146668e78,uVar1,L"EPolyEditPushPullModeOptions");
  }
  return;
}



// FUNCTION 1443700be FUN_1443700be body=55 status=ok
// SIG undefined FUN_1443700be(void)

void FUN_1443700be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3e00 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3e00 = FUN_14171c317(FUN_1466690ba,uVar1,L"EGroupEdgeInsertionMode");
  }
  return;
}



// FUNCTION 144370109 FUN_144370109 body=55 status=ok
// SIG undefined FUN_144370109(void)

void FUN_144370109(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3e58 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3e58 = FUN_14171c317(FUN_146669196,uVar1,L"EEdgeLoopPositioningMode");
  }
  return;
}



// FUNCTION 144370140 FUN_144370140 body=55 status=ok
// SIG undefined FUN_144370140(void)

void FUN_144370140(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3e70 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3e70 = FUN_14171c317(FUN_1466691c5,uVar1,L"EEdgeLoopInsertionMode");
  }
  return;
}



// FUNCTION 144370188 FUN_144370188 body=55 status=ok
// SIG undefined FUN_144370188(void)

void FUN_144370188(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3fa0 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3fa0 = FUN_14171c317(FUN_14666963c,uVar1,L"EUVProjectionToolActions");
  }
  return;
}



// FUNCTION 1443701bf FUN_1443701bf body=55 status=ok
// SIG undefined FUN_1443701bf(void)

void FUN_1443701bf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf3fe8 == 0) {
    uVar1 = FUN_1419049f7();
    DAT_14cbf3fe8 = FUN_14171c317(FUN_14666977f,uVar1,L"EUVProjectionToolInitializationMode");
  }
  return;
}



// FUNCTION 1443701f6 FUN_1443701f6 body=128 status=ok
// SIG undefined FUN_1443701f6(void)

undefined8 FUN_1443701f6(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = param_3[2];
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  if (*(char *)(*(longlong *)(*param_1 + 0x40) + 0xac) == '\x01') {
    uVar1 = FUN_1485565cf(*param_1 + 0x70,&local_48,&local_28,param_1[1]);
  }
  else {
    uVar1 = 0;
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437028e FUN_14437028e body=29 status=ok
// SIG undefined FUN_14437028e(void)

undefined8 FUN_14437028e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370318 FUN_144370318 body=29 status=ok
// SIG undefined FUN_144370318(void)

undefined8 FUN_144370318(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370336 FUN_144370336 body=66 status=ok
// SIG undefined FUN_144370336(void)

void FUN_144370336(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (((char)param_1[0x13] == '\x01') && (*(int *)(param_1[10] + 0xb8) == 3)) {
    (**(code **)(*param_1 + 0x318))(param_1);
    FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
    return;
  }
  return;
}



// FUNCTION 1443703a2 FUN_1443703a2 body=29 status=ok
// SIG undefined FUN_1443703a2(void)

undefined8 FUN_1443703a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443703c0 FUN_1443703c0 body=66 status=ok
// SIG undefined FUN_1443703c0(void)

void FUN_1443703c0(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (((char)param_1[0x13] == '\x01') && (*(int *)(param_1[10] + 0xb8) != 3)) {
    (**(code **)(*param_1 + 0x318))(param_1);
    FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
    return;
  }
  return;
}



// FUNCTION 14437042c FUN_14437042c body=29 status=ok
// SIG undefined FUN_14437042c(void)

undefined8 FUN_14437042c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437044a FUN_14437044a body=53 status=ok
// SIG undefined FUN_14437044a(void)

void FUN_14437044a(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
  return;
}



// FUNCTION 1443704aa FUN_1443704aa body=29 status=ok
// SIG undefined FUN_1443704aa(void)

undefined8 FUN_1443704aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443704c8 FUN_1443704c8 body=53 status=ok
// SIG undefined FUN_1443704c8(void)

void FUN_1443704c8(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
  return;
}



// FUNCTION 144370528 FUN_144370528 body=29 status=ok
// SIG undefined FUN_144370528(void)

undefined8 FUN_144370528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437058a FUN_14437058a body=29 status=ok
// SIG undefined FUN_14437058a(void)

undefined8 FUN_14437058a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443705ec FUN_1443705ec body=29 status=ok
// SIG undefined FUN_1443705ec(void)

undefined8 FUN_1443705ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437060a FUN_14437060a body=53 status=ok
// SIG undefined FUN_14437060a(void)

void FUN_14437060a(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
  return;
}



// FUNCTION 14437066a FUN_14437066a body=29 status=ok
// SIG undefined FUN_14437066a(void)

undefined8 FUN_14437066a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370688 FUN_144370688 body=53 status=ok
// SIG undefined FUN_144370688(void)

void FUN_144370688(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
  return;
}



// FUNCTION 1443706e8 FUN_1443706e8 body=29 status=ok
// SIG undefined FUN_1443706e8(void)

undefined8 FUN_1443706e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370706 FUN_144370706 body=53 status=ok
// SIG undefined FUN_144370706(void)

void FUN_144370706(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
  return;
}



// FUNCTION 144370766 FUN_144370766 body=29 status=ok
// SIG undefined FUN_144370766(void)

undefined8 FUN_144370766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443707c8 FUN_1443707c8 body=29 status=ok
// SIG undefined FUN_1443707c8(void)

undefined8 FUN_1443707c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443707e6 FUN_1443707e6 body=66 status=ok
// SIG undefined FUN_1443707e6(void)

void FUN_1443707e6(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (((char)param_1[0x13] == '\x01') && (*(int *)(param_1[0xc] + 0xb8) != 3)) {
    (**(code **)(*param_1 + 0x318))(param_1);
    FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
    return;
  }
  return;
}



// FUNCTION 144370852 FUN_144370852 body=29 status=ok
// SIG undefined FUN_144370852(void)

undefined8 FUN_144370852(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370870 FUN_144370870 body=66 status=ok
// SIG undefined FUN_144370870(void)

void FUN_144370870(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (((char)param_1[0x13] == '\x01') && (*(int *)(param_1[0xc] + 0xb8) == 3)) {
    (**(code **)(*param_1 + 0x318))(param_1);
    FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
    return;
  }
  return;
}



// FUNCTION 1443708dc FUN_1443708dc body=29 status=ok
// SIG undefined FUN_1443708dc(void)

undefined8 FUN_1443708dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443708fa FUN_1443708fa body=53 status=ok
// SIG undefined FUN_1443708fa(void)

void FUN_1443708fa(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
  return;
}



// FUNCTION 14437095a FUN_14437095a body=29 status=ok
// SIG undefined FUN_14437095a(void)

undefined8 FUN_14437095a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370978 FUN_144370978 body=53 status=ok
// SIG undefined FUN_144370978(void)

void FUN_144370978(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x13] != '\x01') {
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1);
  FUN_1485051e4(*(undefined8 *)(param_1[0xe] + 0x40));
  return;
}



// FUNCTION 1443709d8 FUN_1443709d8 body=29 status=ok
// SIG undefined FUN_1443709d8(void)

undefined8 FUN_1443709d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370a3a FUN_144370a3a body=29 status=ok
// SIG undefined FUN_144370a3a(void)

undefined8 FUN_144370a3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370a58 FUN_144370a58 body=29 status=ok
// SIG undefined FUN_144370a58(void)

undefined8 FUN_144370a58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370bf4 FUN_144370bf4 body=93 status=ok
// SIG undefined FUN_144370bf4(void)

void FUN_144370bf4(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba30c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144370c52 FUN_144370c52 body=93 status=ok
// SIG undefined FUN_144370c52(void)

void FUN_144370c52(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba30c40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144370cb0 FUN_144370cb0 body=126 status=ok
// SIG undefined FUN_144370cb0(void)

void FUN_144370cb0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba30c40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144370d1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144370d46 FUN_144370d46 body=286 status=ok
// SIG undefined FUN_144370d46(void)

undefined8 FUN_144370d46(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144370e5e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144370e5e;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144370e5e:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144370e12;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14054c6c4(*(longlong *)(param_1 + 0x20) + 0x88,param_2 + 0xe8);
      uVar6 = 1;
      goto LAB_144370e12;
    }
  }
  uVar6 = 0;
LAB_144370e12:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144370e66 FUN_144370e66 body=117 status=ok
// SIG undefined FUN_144370e66(void)

void FUN_144370e66(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  iVar1 = *(int *)(*param_1 + 0x2c);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(*param_1 + 0x28);
    uVar3 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144370ebd;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == iVar1 && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_144370ebd;
    }
  }
  uVar3 = 0;
LAB_144370ebd:
  FUN_14855784a(uVar3,param_3,param_2,0,0);
  return;
}



// FUNCTION 144370ef2 FUN_144370ef2 body=29 status=ok
// SIG undefined FUN_144370ef2(void)

undefined8 FUN_144370ef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370f86 FUN_144370f86 body=29 status=ok
// SIG undefined FUN_144370f86(void)

undefined8 FUN_144370f86(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144370fe6 FUN_144370fe6 body=70 status=ok
// SIG undefined FUN_144370fe6(void)

undefined8 * FUN_144370fe6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14ba30cf0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 144371032 FUN_144371032 body=29 status=ok
// SIG undefined FUN_144371032(void)

void FUN_144371032(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144371050 FUN_144371050 body=29 status=ok
// SIG undefined FUN_144371050(void)

undefined8 FUN_144371050(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437106e FUN_14437106e body=29 status=ok
// SIG undefined FUN_14437106e(void)

undefined8 FUN_14437106e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437120a FUN_14437120a body=93 status=ok
// SIG undefined FUN_14437120a(void)

void FUN_14437120a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba30d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144371268 FUN_144371268 body=93 status=ok
// SIG undefined FUN_144371268(void)

void FUN_144371268(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba30d70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443712c6 FUN_1443712c6 body=126 status=ok
// SIG undefined FUN_1443712c6(void)

void FUN_1443712c6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba30d70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144371335. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144371350 FUN_144371350 body=277 status=ok
// SIG undefined FUN_144371350(void)

undefined8 FUN_144371350(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14437145f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14437145f;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14437145f:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144371413;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144371466(param_1 + 0x20,param_3);
      uVar6 = 1;
      goto LAB_144371413;
    }
  }
  uVar6 = 0;
LAB_144371413:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144371466 FUN_144371466 body=198 status=ok
// SIG undefined FUN_144371466(void)

void FUN_144371466(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_1;
  if (((*(char *)(lVar1 + 0x70) == '\x01') && (*(longlong *)(lVar1 + 0x40) != 0)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x40) + 0x40) != 0)) {
    local_20 = *(double *)(param_2 + 0x30) - *(double *)(lVar1 + 0xe8);
    local_28 = *(double *)(param_2 + 0x28) - *(double *)(lVar1 + 0xe0);
    local_30 = *(double *)(param_2 + 0x20) - *(double *)(lVar1 + 0xd8);
    FUN_146bf2028(lVar1 + 0xf0,&local_48);
    *(undefined8 *)(lVar1 + 0x138) = local_38;
    *(undefined4 *)(lVar1 + 0x128) = local_48;
    *(undefined4 *)(lVar1 + 300) = uStack_44;
    *(undefined4 *)(lVar1 + 0x130) = uStack_40;
    *(undefined4 *)(lVar1 + 0x134) = uStack_3c;
    FUN_1485051e4(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x40));
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437152e FUN_14437152e body=29 status=ok
// SIG undefined FUN_14437152e(void)

undefined8 FUN_14437152e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443716ca FUN_1443716ca body=93 status=ok
// SIG undefined FUN_1443716ca(void)

void FUN_1443716ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba30de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144371728 FUN_144371728 body=93 status=ok
// SIG undefined FUN_144371728(void)

void FUN_144371728(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba30de0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144371786 FUN_144371786 body=126 status=ok
// SIG undefined FUN_144371786(void)

void FUN_144371786(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba30de0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443717f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14437186c FUN_14437186c body=366 status=ok
// SIG undefined FUN_14437186c(void)

undefined8 FUN_14437186c(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1443719d4;
    if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_1443719d4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1443719d4:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar9 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14437191b;
    lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar8 != 0) &&
       ((*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))) {
      lVar8 = *(longlong *)(param_1 + 0x20);
      uVar9 = 1;
      if ((*(char *)(lVar8 + 0x70) == '\x01') &&
         ((lVar3 = *(longlong *)(lVar8 + 0x40), lVar3 != 0 && (*(longlong *)(lVar3 + 0x40) != 0))))
      {
        dVar4 = *(double *)(param_3 + 0x28);
        dVar5 = *(double *)(param_3 + 0x30);
        *(double *)(lVar8 + 0x110) = *(double *)(param_3 + 0x20) - *(double *)(lVar8 + 0xd8);
        *(double *)(lVar8 + 0x118) = dVar4 - *(double *)(lVar8 + 0xe0);
        *(double *)(lVar8 + 0x120) = dVar5 - *(double *)(lVar8 + 0xe8);
        FUN_1485051e4(*(undefined8 *)(lVar3 + 0x40));
      }
      goto LAB_14437191b;
    }
  }
  uVar9 = 0;
LAB_14437191b:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144371a1c FUN_144371a1c body=29 status=ok
// SIG undefined FUN_144371a1c(void)

undefined8 FUN_144371a1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144371c50 FUN_144371c50 body=29 status=ok
// SIG undefined FUN_144371c50(void)

undefined8 FUN_144371c50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144371c6e FUN_144371c6e body=64 status=ok
// SIG undefined FUN_144371c6e(void)

void FUN_144371c6e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x70) != '\x01') {
    return;
  }
  if (*(int *)(*(longlong *)(lVar1 + 0x38) + 0xac) == 0) {
    FUN_148f81aa4(lVar1);
  }
  else {
    FUN_148f8105a(lVar1);
  }
  FUN_148f81234(lVar1);
  return;
}



// FUNCTION 144371cd8 FUN_144371cd8 body=29 status=ok
// SIG undefined FUN_144371cd8(void)

undefined8 FUN_144371cd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144371cf6 FUN_144371cf6 body=54 status=ok
// SIG undefined FUN_144371cf6(void)

void FUN_144371cf6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x70) != '\x01') {
    return;
  }
  FUN_148f80b46(lVar1);
  FUN_148f8105a(lVar1);
  FUN_1485051e4(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x40));
  return;
}



// FUNCTION 144371d56 FUN_144371d56 body=29 status=ok
// SIG undefined FUN_144371d56(void)

undefined8 FUN_144371d56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144371d74 FUN_144371d74 body=54 status=ok
// SIG undefined FUN_144371d74(void)

void FUN_144371d74(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x70) != '\x01') {
    return;
  }
  FUN_148f80b46(lVar1);
  FUN_148f8105a(lVar1);
  FUN_1485051e4(*(undefined8 *)(*(longlong *)(lVar1 + 0x40) + 0x40));
  return;
}



// FUNCTION 144371dd4 FUN_144371dd4 body=29 status=ok
// SIG undefined FUN_144371dd4(void)

undefined8 FUN_144371dd4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144371df2 FUN_144371df2 body=29 status=ok
// SIG undefined FUN_144371df2(void)

undefined8 FUN_144371df2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144371f8e FUN_144371f8e body=93 status=ok
// SIG undefined FUN_144371f8e(void)

void FUN_144371f8e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba30fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144371fec FUN_144371fec body=93 status=ok
// SIG undefined FUN_144371fec(void)

void FUN_144371fec(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba30fb0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14437204a FUN_14437204a body=126 status=ok
// SIG undefined FUN_14437204a(void)

void FUN_14437204a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba30fb0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443720b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1443720c8 FUN_1443720c8 body=63 status=ok
// SIG undefined FUN_1443720c8(void)

void FUN_1443720c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_14054c6c4(lVar1 + 0x268,param_2 + 0x168);
  FUN_14054c6c4(lVar1 + 600,param_2 + 0x178);
  return;
}



// FUNCTION 144372108 FUN_144372108 body=310 status=ok
// SIG undefined FUN_144372108(void)

undefined8 FUN_144372108(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_144372238;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144372238;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_144372238:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443721ec;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      FUN_14054c6c4(lVar5 + 0x268,param_2 + 0x168);
      FUN_14054c6c4(lVar5 + 600,param_2 + 0x178);
      uVar6 = 1;
      goto LAB_1443721ec;
    }
  }
  uVar6 = 0;
LAB_1443721ec:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144372240 FUN_144372240 body=29 status=ok
// SIG undefined FUN_144372240(void)

undefined8 FUN_144372240(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443723dc FUN_1443723dc body=93 status=ok
// SIG undefined FUN_1443723dc(void)

void FUN_1443723dc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14437243a FUN_14437243a body=93 status=ok
// SIG undefined FUN_14437243a(void)

void FUN_14437243a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31020;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144372498 FUN_144372498 body=126 status=ok
// SIG undefined FUN_144372498(void)

void FUN_144372498(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31020;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144372507. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144372520 FUN_144372520 body=265 status=ok
// SIG undefined FUN_144372520(void)

undefined8 FUN_144372520(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144372623;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144372623;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144372623:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443725cb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_148f81a24(*(undefined8 *)(param_1 + 0x20));
      uVar6 = 1;
      goto LAB_1443725cb;
    }
  }
  uVar6 = 0;
LAB_1443725cb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437262a FUN_14437262a body=158 status=ok
// SIG undefined FUN_14437262a(void)

void FUN_14437262a(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [2];
  longlong local_48;
  undefined8 local_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = *param_1;
  uVar2 = *(undefined8 *)(local_48 + 0x68);
  local_30 = &local_48;
  local_38 = FUN_1443726ca;
  uVar1 = *(undefined4 *)(local_48 + 0x260);
  local_40 = param_2;
  FUN_140056680(local_58,L"NewBoundaries");
  local_68 = 0xffffffff;
  FUN_1484e2e98(uVar2,local_58,uVar1,&local_38);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443726ca FUN_1443726ca body=342 status=ok
// SIG undefined FUN_1443726ca(void)

void FUN_1443726ca(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  uVar7 = DAT_14cbf4040;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *(uint *)(*(longlong *)(*param_1 + 600) + (longlong)*param_2 * 4);
  if ((-1 < (int)uVar3) &&
     (lVar5 = param_1[1], (int)uVar3 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar5 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      uVar6 = *(ulonglong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
               (ulonglong)((uVar3 & 0x1ff) << 4));
      lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (uVar6 >> 0x29) * 8);
      uVar8 = uVar6 >> 0x20 & 0x1ff;
      uStack_30 = *(undefined8 *)(lVar9 + 0x10 + uVar8 * 0x18);
      puVar1 = (undefined8 *)(lVar9 + uVar8 * 0x18);
      uStack_40 = *puVar1;
      uStack_38 = puVar1[1];
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x10) + (uVar6 >> 9 & 0x7fffff) * 8);
      local_48 = *(undefined8 *)(lVar5 + 0x10 + (uVar6 & 0x1ff) * 0x18);
      puVar2 = (undefined4 *)(lVar5 + (uVar6 & 0x1ff) * 0x18);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      uStack_50 = puVar2[2];
      uStack_4c = puVar2[3];
      iVar4 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
        FUN_1485156d2(param_3,iVar4);
      }
      lVar5 = *param_3;
      lVar9 = (longlong)iVar4 * 0x40;
      puVar2 = (undefined4 *)(lVar5 + 0x20 + lVar9);
      *puVar2 = (undefined4)uStack_38;
      puVar2[1] = uStack_38._4_4_;
      puVar2[2] = (undefined4)uStack_30;
      puVar2[3] = uStack_30._4_4_;
      puVar2 = (undefined4 *)(lVar5 + 0x10 + lVar9);
      *puVar2 = (undefined4)local_48;
      puVar2[1] = local_48._4_4_;
      puVar2[2] = (undefined4)uStack_40;
      puVar2[3] = uStack_40._4_4_;
      puVar2 = (undefined4 *)(lVar5 + lVar9);
      *puVar2 = local_58;
      puVar2[1] = uStack_54;
      puVar2[2] = uStack_50;
      puVar2[3] = uStack_4c;
      *(undefined4 *)(lVar5 + 0x30 + lVar9) = uVar7;
      *(undefined8 *)(lVar5 + 0x34 + lVar9) = 0x3f0000003f800000;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144372822 FUN_144372822 body=29 status=ok
// SIG undefined FUN_144372822(void)

undefined8 FUN_144372822(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443729be FUN_1443729be body=93 status=ok
// SIG undefined FUN_1443729be(void)

void FUN_1443729be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144372a1c FUN_144372a1c body=93 status=ok
// SIG undefined FUN_144372a1c(void)

void FUN_144372a1c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31140;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144372a7a FUN_144372a7a body=126 status=ok
// SIG undefined FUN_144372a7a(void)

void FUN_144372a7a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31140;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144372ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144372af8 FUN_144372af8 body=40 status=ok
// SIG undefined FUN_144372af8(void)

void FUN_144372af8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  FUN_148f82616(lVar1);
  *(undefined4 *)(lVar1 + 0x420) = 0;
  FUN_148f82ec0(lVar1);
  return;
}



// FUNCTION 144372b20 FUN_144372b20 body=286 status=ok
// SIG undefined FUN_144372b20(void)

undefined8 FUN_144372b20(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144372c38;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144372c38;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144372c38:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144372bcb;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      FUN_148f82616(lVar5);
      *(undefined4 *)(lVar5 + 0x420) = 0;
      FUN_148f82ec0(lVar5);
      uVar6 = 1;
      goto LAB_144372bcb;
    }
  }
  uVar6 = 0;
LAB_144372bcb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144372c40 FUN_144372c40 body=29 status=ok
// SIG undefined FUN_144372c40(void)

undefined8 FUN_144372c40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144372ddc FUN_144372ddc body=93 status=ok
// SIG undefined FUN_144372ddc(void)

void FUN_144372ddc(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba311b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144372e3a FUN_144372e3a body=93 status=ok
// SIG undefined FUN_144372e3a(void)

void FUN_144372e3a(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba311b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144372e98 FUN_144372e98 body=126 status=ok
// SIG undefined FUN_144372e98(void)

void FUN_144372e98(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba311b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144372f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144372f16 FUN_144372f16 body=66 status=ok
// SIG undefined FUN_144372f16(void)

void FUN_144372f16(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144373072(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144372f5a FUN_144372f5a body=278 status=ok
// SIG undefined FUN_144372f5a(void)

undefined8 FUN_144372f5a(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14437306a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14437306a;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14437306a:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14437301f;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144373072(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_14437301f;
    }
  }
  uVar6 = 0;
LAB_14437301f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144373072 FUN_144373072 body=416 status=ok
// SIG undefined FUN_144373072(void)

void FUN_144373072(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  lVar4 = *param_2;
  lVar5 = *param_1;
  *(undefined8 *)(lVar5 + 0x428) = 0;
  plVar6 = *(longlong **)(lVar5 + 0x430);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(lVar5 + 0x430) = 0;
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
  *(undefined8 *)(lVar5 + 0x438) = 0;
  plVar6 = *(longlong **)(lVar5 + 0x440);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(lVar5 + 0x440) = 0;
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
  *(undefined4 *)(lVar5 + 0xd8) = 0;
  if (*(int *)(lVar5 + 0xdc) < 0) {
    FUN_146c94d7e(lVar5 + 0xd0,0);
  }
  if (*(longlong *)(lVar4 + 0x88) == *(longlong *)(lVar5 + 0x450)) {
    cVar3 = *(char *)(lVar4 + 0x188);
    *(char *)(lVar5 + 0x425) = cVar3;
    if (cVar3 == '\x01') {
      FUN_148466600(lVar4,lVar5 + 0xd0);
      uVar7 = *(undefined8 *)(lVar4 + 0x178);
      lVar8 = *(longlong *)(lVar4 + 0x180);
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(lVar5 + 0x430);
      *(undefined8 *)(lVar5 + 0x428) = uVar7;
      *(longlong *)(lVar5 + 0x430) = lVar8;
      if (plVar6 != (longlong *)0x0) {
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
      uVar7 = *(undefined8 *)(lVar4 + 0x168);
      lVar4 = *(longlong *)(lVar4 + 0x170);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar6 = *(longlong **)(lVar5 + 0x440);
      *(undefined8 *)(lVar5 + 0x438) = uVar7;
      *(longlong *)(lVar5 + 0x440) = lVar4;
      if (plVar6 != (longlong *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001443731f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x10))(plVar6);
            return;
          }
        }
      }
    }
  }
  else {
    *(undefined1 *)(lVar5 + 0x425) = 0;
  }
  return;
}



// FUNCTION 144373212 FUN_144373212 body=29 status=ok
// SIG undefined FUN_144373212(void)

undefined8 FUN_144373212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443733ae FUN_1443733ae body=93 status=ok
// SIG undefined FUN_1443733ae(void)

void FUN_1443733ae(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14437340c FUN_14437340c body=93 status=ok
// SIG undefined FUN_14437340c(void)

void FUN_14437340c(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31220;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14437346a FUN_14437346a body=126 status=ok
// SIG undefined FUN_14437346a(void)

void FUN_14437346a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31220;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443734d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144373514 FUN_144373514 body=301 status=ok
// SIG undefined FUN_144373514(void)

undefined8 FUN_144373514(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14437363b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14437363b;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14437363b:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443735d0;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x425) == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50);
        FUN_14851bbe8(*(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x58),
                      *(undefined8 *)(lVar5 + 0x30),1,0xf);
      }
      goto LAB_1443735d0;
    }
  }
  uVar6 = 0;
LAB_1443735d0:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144373642 FUN_144373642 body=29 status=ok
// SIG undefined FUN_144373642(void)

undefined8 FUN_144373642(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443737de FUN_1443737de body=93 status=ok
// SIG undefined FUN_1443737de(void)

void FUN_1443737de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba313b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14437383c FUN_14437383c body=93 status=ok
// SIG undefined FUN_14437383c(void)

void FUN_14437383c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e06450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba313b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14437389a FUN_14437389a body=126 status=ok
// SIG undefined FUN_14437389a(void)

void FUN_14437389a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e06450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba313b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144373909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144373918 FUN_144373918 body=30 status=ok
// SIG undefined FUN_144373918(void)

void FUN_144373918(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_148f862dc(uVar1);
  FUN_148f86afc(uVar1);
  return;
}



// FUNCTION 144373936 FUN_144373936 body=276 status=ok
// SIG undefined FUN_144373936(void)

undefined8 FUN_144373936(longlong param_1)

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
    if (iVar1 == 2) goto LAB_144373a44;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144373a44;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144373a44:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1443739e1;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      FUN_148f862dc(uVar6);
      FUN_148f86afc(uVar6);
      uVar6 = 1;
      goto LAB_1443739e1;
    }
  }
  uVar6 = 0;
LAB_1443739e1:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144373a4c FUN_144373a4c body=29 status=ok
// SIG undefined FUN_144373a4c(void)

undefined8 FUN_144373a4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144373be8 FUN_144373be8 body=93 status=ok
// SIG undefined FUN_144373be8(void)

void FUN_144373be8(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144373c46 FUN_144373c46 body=93 status=ok
// SIG undefined FUN_144373c46(void)

void FUN_144373c46(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31420;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144373ca4 FUN_144373ca4 body=126 status=ok
// SIG undefined FUN_144373ca4(void)

void FUN_144373ca4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31420;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144373d13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144373d22 FUN_144373d22 body=66 status=ok
// SIG undefined FUN_144373d22(void)

void FUN_144373d22(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_144373e7e(param_1 + 0x20,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144373d66 FUN_144373d66 body=278 status=ok
// SIG undefined FUN_144373d66(void)

undefined8 FUN_144373d66(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_144373e76;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_144373e76;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_144373e76:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_144373e2b;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_144373e7e(param_1 + 0x20,&local_30);
      uVar6 = 1;
      goto LAB_144373e2b;
    }
  }
  uVar6 = 0;
LAB_144373e2b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144373e7e FUN_144373e7e body=1548 status=ok
// SIG undefined FUN_144373e7e(void)

void FUN_144373e7e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  int local_b0;
  uint local_ac;
  longlong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  longlong local_90;
  uint *local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar26 = *param_2;
  lVar8 = *param_1;
  *(undefined8 *)(lVar8 + 0x3d8) = 0;
  plVar21 = *(longlong **)(lVar8 + 0x3e0);
  if (plVar21 != (longlong *)0x0) {
    *(undefined8 *)(lVar8 + 0x3e0) = 0;
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
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  *(undefined4 *)(lVar8 + 0xd8) = 0;
  if (*(int *)(lVar8 + 0xdc) < 0) {
    FUN_146c94d7e(lVar8 + 0xd0,0);
  }
  *(undefined8 *)(lVar8 + 1000) = 0;
  plVar21 = *(longlong **)(lVar8 + 0x3f0);
  if (plVar21 != (longlong *)0x0) {
    *(undefined8 *)(lVar8 + 0x3f0) = 0;
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
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
  if (*(longlong *)(lVar26 + 0x88) == *(longlong *)(lVar8 + 0x3a0)) {
    cVar6 = *(char *)(lVar26 + 0x198);
    *(char *)(lVar8 + 0x3d1) = cVar6;
    if (cVar6 == '\x01') {
      FUN_148465f46(lVar26,lVar8 + 0xd0);
      uVar9 = *(undefined8 *)(lVar26 + 0x188);
      lVar18 = *(longlong *)(lVar26 + 400);
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
        UNLOCK();
      }
      plVar21 = *(longlong **)(lVar8 + 0x3e0);
      *(undefined8 *)(lVar8 + 0x3d8) = uVar9;
      *(longlong *)(lVar8 + 0x3e0) = lVar18;
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
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      uVar9 = *(undefined8 *)(lVar26 + 0x128);
      lVar18 = *(longlong *)(lVar26 + 0x130);
      if (lVar18 != 0) {
        LOCK();
        *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
        UNLOCK();
      }
      plVar21 = *(longlong **)(lVar8 + 0x3f0);
      *(undefined8 *)(lVar8 + 1000) = uVar9;
      *(longlong *)(lVar8 + 0x3f0) = lVar18;
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
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
    }
    local_b8 = (longlong *)(lVar8 + 0xe0);
    *(undefined4 *)(lVar8 + 0xe8) = 0;
    if (*(int *)(lVar8 + 0xec) < 0) {
      FUN_146c94d7e(local_b8,0);
    }
    local_a8 = lVar8 + 0xf0;
    *(undefined4 *)(lVar8 + 0xf8) = 0;
    if (*(int *)(lVar8 + 0xfc) < 0) {
      FUN_1447a8aa0(local_a8,0);
    }
    uVar7 = *(uint *)(lVar26 + 0x160);
    if (uVar7 == 0) {
      uVar15 = 1;
      uVar24 = 0;
      iVar17 = 0;
      uVar10 = 0;
    }
    else {
      puVar11 = *(uint **)(lVar26 + 0x158);
      if (*(uint **)(lVar26 + 0x158) == (uint *)0x0) {
        puVar11 = (uint *)(lVar26 + 0x148);
      }
      uVar10 = *puVar11;
      if (uVar10 == 0) {
        iVar17 = uVar7 + 0x1e;
        if (-1 < (int)(uVar7 - 1)) {
          iVar17 = uVar7 - 1;
        }
        uVar24 = 0;
        uVar15 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar15 = uVar24;
        }
        iVar17 = 0;
        do {
          if (uVar15 == uVar24) goto LAB_144374124;
          iVar17 = iVar17 + 0x20;
          uVar10 = puVar11[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar10 == 0);
      }
      else {
        uVar24 = 0;
        iVar17 = 0;
      }
      uVar15 = (ulonglong)(-uVar10 & uVar10);
      uVar5 = uVar15 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar10 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
      if ((int)uVar7 <= (int)uVar10) {
        uVar10 = uVar7;
      }
    }
    if (uVar10 != uVar7) {
      uVar20 = 0xffffffff;
      plVar21 = local_b8;
      local_a0 = (ulonglong)uVar7;
      local_90 = lVar26;
      local_88 = (uint *)(lVar26 + 0x148);
      do {
        lVar18 = *(longlong *)(lVar8 + 0x50);
        lVar19 = *(longlong *)(lVar18 + 0x48);
        lVar14 = *(longlong *)(lVar19 + 0x70);
        lVar22 = (longlong)*(int *)(*(longlong *)(lVar26 + 0x138) + (longlong)(int)uVar10 * 0xc) *
                 0x50;
        lVar25 = (longlong)*(int *)(lVar14 + 0x28 + lVar22);
        local_b0 = iVar17;
        local_ac = uVar20;
        local_98 = uVar15;
        local_80 = uVar24;
        if (lVar25 != 0) {
          lVar26 = *(longlong *)(lVar14 + 0x20 + lVar22);
          lVar18 = 0;
          do {
            uVar7 = *(uint *)(lVar26 + lVar18);
            lVar19 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x30);
            lVar14 = *(longlong *)(lVar19 + 0x10);
            uVar24 = *(ulonglong *)
                      (*(longlong *)(*(longlong *)(lVar19 + 0x1c0) + (ulonglong)(uVar7 >> 9) * 8) +
                      (ulonglong)((uVar7 & 0x1ff) << 4));
            lVar19 = *(longlong *)(lVar14 + (uVar24 >> 9 & 0x7fffff) * 8);
            local_68 = *(undefined8 *)(lVar19 + 0x10 + (uVar24 & 0x1ff) * 0x18);
            puVar3 = (undefined8 *)(lVar19 + (uVar24 & 0x1ff) * 0x18);
            local_78 = *puVar3;
            uStack_70 = puVar3[1];
            lVar19 = *(longlong *)(lVar14 + (uVar24 >> 0x29) * 8);
            uVar24 = uVar24 >> 0x20 & 0x1ff;
            uStack_50 = *(undefined8 *)(lVar19 + 0x10 + uVar24 * 0x18);
            puVar4 = (undefined4 *)(lVar19 + uVar24 * 0x18);
            uStack_60 = *puVar4;
            uStack_5c = puVar4[1];
            uStack_58 = puVar4[2];
            uStack_54 = puVar4[3];
            iVar17 = *(int *)(lVar8 + 0xe8);
            *(uint *)(lVar8 + 0xe8) = iVar17 + 1U;
            if (*(uint *)(lVar8 + 0xec) < iVar17 + 1U) {
              FUN_146c94cea(plVar21,iVar17);
              plVar21 = local_b8;
            }
            lVar19 = *plVar21;
            lVar14 = (longlong)iVar17 * 0x30;
            puVar3 = (undefined8 *)(lVar19 + 0x20 + lVar14);
            *puVar3 = CONCAT44(uStack_54,uStack_58);
            puVar3[1] = uStack_50;
            puVar3 = (undefined8 *)(lVar19 + 0x10 + lVar14);
            *puVar3 = local_68;
            puVar3[1] = CONCAT44(uStack_5c,uStack_60);
            puVar4 = (undefined4 *)(lVar19 + lVar14);
            *puVar4 = (undefined4)local_78;
            puVar4[1] = local_78._4_4_;
            puVar4[2] = (undefined4)uStack_70;
            puVar4[3] = uStack_70._4_4_;
            lVar18 = lVar18 + 4;
          } while (lVar25 * 4 != lVar18);
          lVar18 = *(longlong *)(lVar8 + 0x50);
          lVar19 = *(longlong *)(lVar18 + 0x48);
          lVar14 = *(longlong *)(lVar19 + 0x70);
          lVar26 = local_90;
        }
        uVar24 = local_80;
        lVar25 = local_a8;
        lVar16 = (longlong)*(int *)(lVar14 + 0x48 + lVar22);
        if (lVar16 != -1) {
          uVar7 = *(uint *)(*(longlong *)(lVar19 + 0x50) + lVar16 * 0x18);
          lVar18 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar18 + 0x30) + 0x10) +
                    (ulonglong)(uVar7 >> 9) * 8);
          uVar15 = (ulonglong)uVar7 & 0x1ff;
          local_68 = *(undefined8 *)(lVar18 + 0x10 + uVar15 * 0x18);
          puVar3 = (undefined8 *)(lVar18 + uVar15 * 0x18);
          local_78 = *puVar3;
          uStack_70 = puVar3[1];
          FUN_1417f9682(local_a8,&local_78);
          uVar7 = *(uint *)(*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x48) + 0x50)
                           + (longlong)*(int *)(lVar14 + lVar22 + 0x4c) * 0x18);
          lVar18 = *(longlong *)
                    (*(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x50) + 0x30) + 0x10) +
                    (ulonglong)(uVar7 >> 9) * 8);
          uVar15 = (ulonglong)uVar7 & 0x1ff;
          local_68 = *(undefined8 *)(lVar18 + 0x10 + uVar15 * 0x18);
          puVar3 = (undefined8 *)(lVar18 + uVar15 * 0x18);
          local_78 = *puVar3;
          uStack_70 = puVar3[1];
          FUN_1417f9682(lVar25,&local_78);
          plVar21 = local_b8;
        }
        uVar20 = local_ac & ~(uint)local_98;
        puVar11 = *(uint **)(lVar26 + 0x158);
        if (*(uint **)(lVar26 + 0x158) == (uint *)0x0) {
          puVar11 = local_88;
        }
        uVar7 = *(uint *)(lVar26 + 0x160);
        iVar23 = (int)uVar24;
        lVar18 = (longlong)iVar23;
        uVar10 = puVar11[lVar18] & uVar20;
        iVar17 = local_b0;
        if (uVar10 == 0) {
          iVar12 = uVar7 + 0x1e;
          if (-1 < (int)(uVar7 - 1)) {
            iVar12 = uVar7 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar17 = local_b0 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar23) {
            iVar13 = iVar23;
          }
          if (iVar23 < iVar12) {
            lVar19 = 0;
            do {
              uVar10 = puVar11[lVar18 + lVar19 + 1];
              if (uVar10 != 0) {
                uVar24 = (ulonglong)(iVar23 + (int)lVar19 + 1);
                uVar20 = 0xffffffff;
                goto LAB_144374405;
              }
              iVar17 = iVar17 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar13 - lVar18 != lVar19);
            uVar20 = 0xffffffff;
            iVar23 = iVar13;
          }
          uVar24 = (ulonglong)(iVar23 + 1);
          uVar15 = local_98;
          plVar21 = local_b8;
          uVar10 = uVar7;
        }
        else {
LAB_144374405:
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar5 = uVar15 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar10 = (iVar17 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar7 <= (int)uVar10) {
            uVar10 = uVar7;
          }
        }
      } while (uVar10 != (uint)local_a0);
    }
  }
  else {
    *(undefined1 *)(lVar8 + 0x3d1) = 0;
  }
LAB_144374124:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14437448c FUN_14437448c body=29 status=ok
// SIG undefined FUN_14437448c(void)

undefined8 FUN_14437448c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144374628 FUN_144374628 body=93 status=ok
// SIG undefined FUN_144374628(void)

void FUN_144374628(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144374686 FUN_144374686 body=93 status=ok
// SIG undefined FUN_144374686(void)

void FUN_144374686(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ba31490;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1443746e4 FUN_1443746e4 body=126 status=ok
// SIG undefined FUN_1443746e4(void)

void FUN_1443746e4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31490;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144374753. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14437478e FUN_14437478e body=301 status=ok
// SIG undefined FUN_14437478e(void)

undefined8 FUN_14437478e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1443748b5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1443748b5;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1443748b5:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14437484a;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      uVar6 = 1;
      if (*(char *)(*(longlong *)(param_1 + 0x20) + 0x3d1) == '\0') {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x50);
        FUN_14851bbe8(*(undefined8 *)(*(longlong *)(lVar5 + 0x40) + 0x58),
                      *(undefined8 *)(lVar5 + 0x30),1,0xf);
      }
      goto LAB_14437484a;
    }
  }
  uVar6 = 0;
LAB_14437484a:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144374932 FUN_144374932 body=29 status=ok
// SIG undefined FUN_144374932(void)

undefined8 FUN_144374932(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144374950 FUN_144374950 body=113 status=ok
// SIG undefined FUN_144374950(void)

void FUN_144374950(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = param_3[2];
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  FUN_1485565cf(*param_1 + 0xa0,&local_48,&local_28,param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443749d8 FUN_1443749d8 body=29 status=ok
// SIG undefined FUN_1443749d8(void)

undefined8 FUN_1443749d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443749f6 FUN_1443749f6 body=405 status=ok
// SIG undefined FUN_1443749f6(void)

void FUN_1443749f6(undefined8 *param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  uVar5 = *(int *)(param_2 + 0x140) * 0x200 + *(int *)(param_2 + 0x144);
  uVar8 = 0;
  if ((uVar5 != 0) &&
     (uVar8 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(param_2 + 0x148) - 1U))) {
    uVar2 = 1;
    uVar3 = 1;
    if (1 < (int)uVar5) {
      uVar2 = uVar5;
    }
    do {
      uVar8 = uVar2;
      if (uVar2 == uVar3) break;
      uVar4 = uVar3 >> 9;
      uVar6 = uVar3 & 0x1ff;
      uVar8 = uVar3;
      uVar3 = uVar3 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(param_2 + 0x148))[uVar4] +
                                         (ulonglong)uVar6 * 2) - 1U));
  }
  local_48 = param_2;
  if (uVar8 != uVar5) {
    do {
      uVar1 = uStack_50;
      lVar7 = (longlong)(int)uStack_50;
      uVar2 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
      if (uStack_50._4_4_ < uVar2) {
        FUN_1446f48e2(&local_58,uVar1 & 0xffffffff);
      }
      *(uint *)(local_58 + lVar7 * 4) = uVar8;
      uVar2 = uVar8 + 1;
      if ((int)(uVar8 + 1) < (int)uVar5) {
        uVar2 = uVar5;
      }
      do {
        uVar3 = uVar2;
        if (uVar2 - 1 == uVar8) break;
        uVar8 = uVar8 + 1;
        uVar3 = uVar8;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(param_2 + 0x148) +
                                             (ulonglong)(uVar8 >> 9) * 8) +
                                           (ulonglong)(uVar8 & 0x1ff) * 2) - 1U));
      uVar8 = uVar3;
    } while (uVar8 != uVar5);
  }
  local_88 = &local_60;
  local_60 = DAT_14c84635c;
  local_40 = (float)*(double *)param_1[1];
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_3c = local_40;
  FUN_146bca2ae(&local_48,&local_58,*param_1);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144374b94 FUN_144374b94 body=121 status=ok
// SIG undefined FUN_144374b94(void)

void FUN_144374b94(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  lVar5 = *param_1;
  uVar3 = *(undefined8 *)(lVar5 + 0xd0);
  lVar1 = *(longlong *)(lVar5 + 0xc0) + 0xb8;
  uVar4 = FUN_140e1307c(lVar1,*(longlong *)(lVar5 + 0xc0) + 0xa8);
  FUN_148f71fd6(uVar3,uVar4,lVar1,1);
  FUN_148f8c15e(lVar5);
  iVar2 = *(int *)(lVar5 + 0xe0);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(lVar5 + 0xd8);
    lVar5 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar1 + lVar5));
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  return;
}



// FUNCTION 144374c38 FUN_144374c38 body=29 status=ok
// SIG undefined FUN_144374c38(void)

undefined8 FUN_144374c38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144374c56 FUN_144374c56 body=57 status=ok
// SIG undefined FUN_144374c56(void)

int FUN_144374c56(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*param_1 + 0xc0);
  if (lVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar2 = FUN_140e1307c(lVar1 + 0xb8,lVar1 + 0xa8);
    iVar3 = 0;
    if (iVar2 != -1) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}



// FUNCTION 144374ca6 FUN_144374ca6 body=29 status=ok
// SIG undefined FUN_144374ca6(void)

undefined8 FUN_144374ca6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144374cc4 FUN_144374cc4 body=29 status=ok
// SIG undefined FUN_144374cc4(void)

undefined8 FUN_144374cc4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144374cf6 FUN_144374cf6 body=93 status=ok
// SIG undefined FUN_144374cf6(void)

void FUN_144374cf6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144374d54 FUN_144374d54 body=93 status=ok
// SIG undefined FUN_144374d54(void)

void FUN_144374d54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aefe820;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144374db2 FUN_144374db2 body=126 status=ok
// SIG undefined FUN_144374db2(void)

void FUN_144374db2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31580;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144374e21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144374e3a FUN_144374e3a body=20 status=ok
// SIG undefined FUN_144374e3a(void)

undefined1 FUN_144374e3a(longlong param_1)

{
  FUN_148f8c1d6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 144374e56 FUN_144374e56 body=29 status=ok
// SIG undefined FUN_144374e56(void)

undefined8 FUN_144374e56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144374e88 FUN_144374e88 body=93 status=ok
// SIG undefined FUN_144374e88(void)

void FUN_144374e88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba315f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144374ee6 FUN_144374ee6 body=93 status=ok
// SIG undefined FUN_144374ee6(void)

void FUN_144374ee6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba315f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144374f44 FUN_144374f44 body=126 status=ok
// SIG undefined FUN_144374f44(void)

void FUN_144374f44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedba20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba315f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144374fb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144374fd2 FUN_144374fd2 body=27 status=ok
// SIG undefined FUN_144374fd2(void)

undefined8 FUN_144374fd2(longlong param_1)

{
  FUN_1485051e4(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x140));
  return 1;
}



// FUNCTION 144374fee FUN_144374fee body=89 status=ok
// SIG undefined FUN_144374fee(void)

void FUN_144374fee(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  lVar2 = *param_1;
  uVar3 = *(undefined8 *)(lVar2 + 0x138);
  lVar1 = *(longlong *)(lVar2 + 0x120) + 0xb8;
  uVar4 = FUN_140e1307c(lVar1,*(longlong *)(lVar2 + 0x120) + 0xa8);
  FUN_148f71fd6(uVar3,uVar4,lVar1,1);
  FUN_1485051e4(*(undefined8 *)(lVar2 + 0x140));
  FUN_148f8e186(lVar2);
  return;
}



// FUNCTION 144375072 FUN_144375072 body=29 status=ok
// SIG undefined FUN_144375072(void)

undefined8 FUN_144375072(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144375090 FUN_144375090 body=29 status=ok
// SIG undefined FUN_144375090(void)

undefined8 FUN_144375090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443750c2 FUN_1443750c2 body=93 status=ok
// SIG undefined FUN_1443750c2(void)

void FUN_1443750c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144375120 FUN_144375120 body=93 status=ok
// SIG undefined FUN_144375120(void)

void FUN_144375120(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba31680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14437517e FUN_14437517e body=126 status=ok
// SIG undefined FUN_14437517e(void)

void FUN_14437517e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedba20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba31680;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443751ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144375206 FUN_144375206 body=20 status=ok
// SIG undefined FUN_144375206(void)

undefined1 FUN_144375206(longlong param_1)

{
  FUN_148f8e186(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14437521a FUN_14437521a body=441 status=ok
// SIG undefined FUN_14437521a(void)

void FUN_14437521a(longlong *param_1)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x128);
  if (*(char *)(lVar3 + 200) == '\x01') {
    dVar1 = *(double *)(lVar2 + 0x2a0);
    dVar11 = *(double *)(lVar3 + 0xc0) - dVar1;
    dVar12 = *(double *)(lVar3 + 0xb8) - *(double *)(lVar2 + 0x298);
    dVar10 = *(double *)(lVar3 + 0xb0) - *(double *)(lVar2 + 0x290);
    uVar8 = -(ulonglong)(-dVar11 <= dVar11);
    dVar13 = (double)(~uVar8 & (ulonglong)-dVar11 | (ulonglong)dVar11 & uVar8);
    uVar8 = -(ulonglong)(-dVar12 <= dVar12);
    dVar11 = (double)(~uVar8 & (ulonglong)-dVar12 | (ulonglong)dVar12 & uVar8);
    uVar8 = -(ulonglong)(-dVar10 <= dVar10);
    dVar10 = (double)(~uVar8 & (ulonglong)-dVar10 | (ulonglong)dVar10 & uVar8);
    iVar7 = (uint)(dVar10 < dVar13) * 2;
    if (dVar10 < dVar11) {
      iVar7 = (dVar11 < dVar13) + 1;
    }
    dVar11 = *(double *)(lVar3 + 0xb0 + (ulonglong)(uint)(iVar7 << 3));
    dVar10 = *(double *)(lVar2 + 0x290 + (ulonglong)(uint)(iVar7 << 3));
    dVar13 = ABS(dVar10);
    dVar10 = dVar11 / dVar10;
    uVar9 = -(ulonglong)(dVar13 < 9.999999747378752e-05);
    uVar8 = uVar9 & (ulonglong)dVar11;
    dVar12 = dVar11;
    if (9.999999747378752e-05 <= dVar13) {
      dVar12 = *(double *)(lVar2 + 0x298) * dVar10;
      dVar11 = *(double *)(lVar2 + 0x290) * dVar10;
    }
    *(double *)(lVar3 + 0xb0) = dVar11;
    *(double *)(lVar3 + 0xb8) = dVar12;
    *(ulonglong *)(lVar3 + 0xc0) = ~uVar9 & (ulonglong)(dVar1 * dVar10) | uVar8;
    uVar4 = *(undefined4 *)(lVar3 + 0xb4);
    uVar5 = *(undefined4 *)(lVar3 + 0xb8);
    uVar6 = *(undefined4 *)(lVar3 + 0xbc);
    *(undefined4 *)(lVar2 + 0x290) = *(undefined4 *)(lVar3 + 0xb0);
    *(undefined4 *)(lVar2 + 0x294) = uVar4;
    *(undefined4 *)(lVar2 + 0x298) = uVar5;
    *(undefined4 *)(lVar2 + 0x29c) = uVar6;
    *(undefined8 *)(lVar2 + 0x2a0) = *(undefined8 *)(lVar3 + 0xc0);
    (**(code **)(**(longlong **)
                   (*(longlong *)(*(longlong *)(lVar2 + 0x128) + 0x28) +
                   (longlong)*(int *)(lVar2 + 0x330) * 8) + 0x10))();
  }
  *(undefined1 *)(lVar2 + 0x338) = 1;
  return;
}



// FUNCTION 1443753fe FUN_1443753fe body=29 status=ok
// SIG undefined FUN_1443753fe(void)

undefined8 FUN_1443753fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437547a FUN_14437547a body=29 status=ok
// SIG undefined FUN_14437547a(void)

undefined8 FUN_14437547a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144375498 FUN_144375498 body=42 status=ok
// SIG undefined FUN_144375498(void)

void FUN_144375498(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x338) == '\0') {
    FUN_148f8e2d0(lVar1);
    *(undefined1 *)(lVar1 + 0x338) = 0;
  }
  return;
}



// FUNCTION 1443754ec FUN_1443754ec body=29 status=ok
// SIG undefined FUN_1443754ec(void)

undefined8 FUN_1443754ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437550a FUN_14437550a body=112 status=ok
// SIG undefined FUN_14437550a(void)

void FUN_14437550a(longlong *param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *(undefined8 *)(param_2 + 0x68);
  local_28 = *(undefined8 *)(param_2 + 0x58);
  uStack_20 = *(undefined8 *)(param_2 + 0x60);
  local_38 = *(undefined8 *)(param_2 + 0x38);
  local_48 = *(undefined4 *)(param_2 + 0x28);
  uStack_44 = *(undefined4 *)(param_2 + 0x2c);
  uStack_40 = *(undefined4 *)(param_2 + 0x30);
  uStack_3c = *(undefined4 *)(param_2 + 0x34);
  FUN_148f8f59c(*param_1,&local_48,&local_28,*(undefined1 *)(*(longlong *)(*param_1 + 0x4b0) + 0xc0)
               );
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443755a6 FUN_1443755a6 body=29 status=ok
// SIG undefined FUN_1443755a6(void)

undefined8 FUN_1443755a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443755c4 FUN_1443755c4 body=58 status=ok
// SIG undefined FUN_1443755c4(void)

void FUN_1443755c4(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  
  uVar1 = *param_2;
  plVar3 = *(longlong **)(*param_1 + 0x180);
  iVar2 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(plVar3,iVar2);
  }
  *(undefined4 *)(*plVar3 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 1443755fe FUN_1443755fe body=550 status=ok
// SIG undefined FUN_1443755fe(void)

void FUN_1443755fe(undefined8 *param_1,uint *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_2;
  if ((-1 < (int)uVar3) &&
     (lVar12 = *(longlong *)*param_1,
     (int)uVar3 < *(int *)(lVar12 + 0x1d0) * 0x200 + *(int *)(lVar12 + 0x1d4))) {
    uVar13 = (ulonglong)(uVar3 >> 9);
    uVar10 = uVar3 & 0x1ff;
    if (((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar12 + 0x1d8) + uVar13 * 8) +
                            (ulonglong)uVar10 * 2) - 1U) < 0xfffe) &&
       (lVar4 = param_1[1], *(int *)(lVar4 + 0x1b8) != *(int *)(lVar4 + 0x1e4))) {
      uVar5 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(lVar12 + 0x1c0) + uVar13 * 8) + 8 +
               (ulonglong)(uVar10 << 4));
      lVar12 = lVar4 + 0x1e8;
      if (*(longlong *)(lVar4 + 0x1f0) != 0) {
        lVar12 = *(longlong *)(lVar4 + 0x1f0);
      }
      uVar14 = *(int *)(lVar4 + 0x1f8) - 1;
      uVar9 = (uint)uVar5;
      iVar15 = *(int *)(lVar12 + (ulonglong)(uVar14 & uVar9) * 4);
      if (iVar15 != -1) {
        lVar4 = *(longlong *)(lVar4 + 0x1b0);
        do {
          if (*(uint *)(lVar4 + (longlong)iVar15 * 0xc) == uVar9) {
            uVar9 = (uint)((ulonglong)uVar5 >> 0x20);
            iVar15 = *(int *)(lVar12 + (ulonglong)(uVar14 & uVar9) * 4);
            goto LAB_144375722;
          }
          iVar15 = *(int *)(lVar4 + (longlong)iVar15 * 0xc + 4);
        } while (iVar15 != -1);
      }
    }
  }
LAB_1443756f5:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_144375722:
  if (iVar15 == -1) goto LAB_1443756f5;
  if (*(uint *)(lVar4 + (longlong)iVar15 * 0xc) == uVar9) {
    cVar8 = FUN_146c1a770(*(undefined8 *)param_1[2],uVar3,0);
    if (cVar8 != '\0') {
      plVar6 = (longlong *)param_1[3];
      lVar12 = *(longlong *)(*plVar6 + 0x10);
      uVar13 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(*plVar6 + 0x1c0) + uVar13 * 8) +
                (ulonglong)(uVar10 << 4));
      lVar4 = *(longlong *)(lVar12 + (uVar13 >> 9 & 0x7fffff) * 8);
      local_68 = *(undefined8 *)(lVar4 + 0x10 + (uVar13 & 0x1ff) * 0x18);
      puVar1 = (undefined8 *)(lVar4 + (uVar13 & 0x1ff) * 0x18);
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      lVar12 = *(longlong *)(lVar12 + (uVar13 >> 0x29) * 8);
      uVar13 = uVar13 >> 0x20 & 0x1ff;
      uStack_50 = *(undefined8 *)(lVar12 + 0x10 + uVar13 * 0x18);
      puVar2 = (undefined4 *)(lVar12 + uVar13 * 0x18);
      uStack_60 = *puVar2;
      uStack_5c = puVar2[1];
      uStack_58 = puVar2[2];
      uStack_54 = puVar2[3];
      lVar12 = plVar6[2];
      lVar4 = plVar6[1];
      iVar15 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar15 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar15 + 1U) {
        FUN_1485156d2(param_3,iVar15);
      }
      lVar7 = *param_3;
      lVar11 = (longlong)iVar15 * 0x40;
      puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar11);
      *puVar1 = CONCAT44(uStack_54,uStack_58);
      puVar1[1] = uStack_50;
      puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar11);
      *puVar1 = local_68;
      puVar1[1] = CONCAT44(uStack_5c,uStack_60);
      puVar2 = (undefined4 *)(lVar7 + lVar11);
      *puVar2 = (undefined4)local_78;
      puVar2[1] = local_78._4_4_;
      puVar2[2] = (undefined4)uStack_70;
      puVar2[3] = uStack_70._4_4_;
      *(int *)(lVar7 + 0x30 + lVar11) = (int)lVar4;
      *(undefined4 *)(lVar7 + 0x34 + lVar11) = 0x40000000;
      *(int *)(lVar7 + 0x38 + lVar11) = (int)lVar12;
    }
    goto LAB_1443756f5;
  }
  iVar15 = *(int *)(lVar4 + (longlong)iVar15 * 0xc + 4);
  goto LAB_144375722;
}



// FUNCTION 144375826 FUN_144375826 body=384 status=ok
// SIG undefined FUN_144375826(void)

void FUN_144375826(undefined8 *param_1,uint *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *param_2;
  if ((-1 < (int)uVar3) &&
     (lVar5 = *(longlong *)*param_1,
     (int)uVar3 < *(int *)(lVar5 + 0x1d0) * 0x200 + *(int *)(lVar5 + 0x1d4))) {
    if ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar5 + 0x1d8) + (ulonglong)(uVar3 >> 9) * 8) +
                           (ulonglong)(uVar3 & 0x1ff) * 2) - 1U) < 0xfffe) {
      cVar9 = FUN_146c1a770(*(undefined8 *)param_1[1],uVar3,0);
      if (cVar9 != '\0') {
        plVar6 = (longlong *)param_1[2];
        lVar5 = *(longlong *)(*plVar6 + 0x10);
        uVar11 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(*plVar6 + 0x1c0) + (ulonglong)(uVar3 >> 9) * 8) +
                  (ulonglong)((uVar3 & 0x1ff) << 4));
        lVar7 = *(longlong *)(lVar5 + (uVar11 >> 9 & 0x7fffff) * 8);
        local_68 = *(undefined8 *)(lVar7 + 0x10 + (uVar11 & 0x1ff) * 0x18);
        puVar1 = (undefined8 *)(lVar7 + (uVar11 & 0x1ff) * 0x18);
        local_78 = *puVar1;
        uStack_70 = puVar1[1];
        lVar5 = *(longlong *)(lVar5 + (uVar11 >> 0x29) * 8);
        uVar11 = uVar11 >> 0x20 & 0x1ff;
        uStack_50 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
        puVar2 = (undefined4 *)(lVar5 + uVar11 * 0x18);
        uStack_60 = *puVar2;
        uStack_5c = puVar2[1];
        uStack_58 = puVar2[2];
        uStack_54 = puVar2[3];
        lVar5 = plVar6[2];
        lVar7 = plVar6[1];
        iVar4 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
          FUN_1485156d2(param_3,iVar4);
        }
        lVar8 = *param_3;
        lVar10 = (longlong)iVar4 * 0x40;
        puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar10);
        *puVar1 = CONCAT44(uStack_54,uStack_58);
        puVar1[1] = uStack_50;
        puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar10);
        *puVar1 = local_68;
        puVar1[1] = CONCAT44(uStack_5c,uStack_60);
        puVar2 = (undefined4 *)(lVar8 + lVar10);
        *puVar2 = (undefined4)local_78;
        puVar2[1] = local_78._4_4_;
        puVar2[2] = (undefined4)uStack_70;
        puVar2[3] = uStack_70._4_4_;
        *(int *)(lVar8 + 0x30 + lVar10) = (int)lVar7;
        *(undefined4 *)(lVar8 + 0x34 + lVar10) = 0x40000000;
        *(int *)(lVar8 + 0x38 + lVar10) = (int)lVar5;
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443759a8 FUN_1443759a8 body=312 status=ok
// SIG undefined FUN_1443759a8(void)

undefined1 (*) [16] FUN_1443759a8(undefined1 (*param_1) [16],longlong *param_2,int *param_3)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
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
  
  lVar3 = *param_2;
  pdVar1 = (double *)(*(longlong *)param_2[1] + (longlong)*param_3 * 0x18);
  dVar10 = *pdVar1 * *(double *)(lVar3 + 0x240);
  dVar11 = pdVar1[1] * *(double *)(lVar3 + 0x248);
  dVar9 = *(double *)(*(longlong *)param_2[1] + 0x10 + (longlong)*param_3 * 0x18) *
          *(double *)(lVar3 + 0x250);
  dVar6 = *(double *)(lVar3 + 0x200);
  dVar7 = *(double *)(lVar3 + 0x208);
  dVar8 = *(double *)(lVar3 + 0x210);
  dVar2 = *(double *)(lVar3 + 0x218);
  dVar12 = dVar11 * dVar6 - dVar10 * dVar7;
  dVar13 = dVar9 * dVar7 - dVar11 * dVar8;
  dVar14 = dVar10 * dVar8 - dVar6 * dVar9;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  dVar5 = (dVar8 * dVar13 - dVar6 * dVar12) + *(double *)(lVar3 + 0x218) * dVar14 + dVar11 +
          *(double *)(lVar3 + 0x228);
  dVar11 = *(double *)(lVar3 + 0x230);
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (dVar12 * dVar7 - dVar14 * dVar8) + dVar2 * dVar13 + dVar10 +
                 *(double *)(lVar3 + 0x220);
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *param_1 = auVar4;
  *(double *)param_1[1] = dVar12 * dVar2 + dVar9 + (dVar14 * dVar6 - dVar13 * dVar7) + dVar11;
  return param_1;
}



// FUNCTION 144375ae0 FUN_144375ae0 body=780 status=ok
// SIG undefined FUN_144375ae0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144375ae0(void)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cbf3cb0);
  if (cVar1 == '\0') {
    _DAT_14cbf3cb0 = 0;
    uRam000000014cbf3cb8 = 0;
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14ba27fd0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba27ff0,2,0);
  ppuStack_90 = &PTR_FUN_14ba29dd0;
  local_98 = 0;
  local_88 = 5;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba29e70,4,0);
  DAT_14cbf4040 = 0xffff0000;
  _DAT_14cbf3df0 = 0xfff39c12;
  local_70 = L"ExtrudeEdgeTransactionLabel";
  local_68 = 0x1b;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"PolyEditExtrudeEdgeActivity";
  local_68 = 0x1b;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Extrude Edges";
  local_68 = 0xd;
  FUN_140208c1e(&DAT_14cbf3de0,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1443700aa);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14ba2aac0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba2aae0,2,0);
  local_70 = L"GroupEdgeStartTransactionName";
  local_68 = 0x1d;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UPolyEditInsertEdgeActivity";
  local_68 = 0x1b;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Group Edge Start";
  local_68 = 0x10;
  FUN_140208c1e(&DAT_14cbf3e40,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_1443700f5);
  local_88 = 2;
  ppuStack_90 = &PTR_FUN_14ba2b9a0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba2b9e0,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba2c5f0,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba2d100,2,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba2dd00,2,0);
  local_88 = 2;
  ppuStack_90 = &PTR_FUN_14ba2fba0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingTools",&PTR_FUN_14ba2fbe0,5,0);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144375df0 FUN_144375df0 body=642 status=ok
// SIG undefined FUN_144375df0(void)

void FUN_144375df0(void)

{
  ushort uVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar3 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_144375f66;
    bVar3 = DAT_14c8442b8 & 1;
  }
  if (bVar3 == 0) {
    uVar7 = FUN_1408bddb6(0);
    FUN_140056680(&local_40,L"VulkanRHI");
    FUN_140056680(&local_50,uVar7);
    if (local_38 == local_48) {
      bVar11 = true;
      if (1 < local_38) {
        lVar9 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_40 + lVar9);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(local_50 + lVar9);
          uVar10 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_144375ed3;
            }
            iVar6 = uVar5 - uVar10;
            goto LAB_144375f0d;
          }
          if (uVar1 == 0) break;
LAB_144375ed3:
          lVar9 = lVar9 + 2;
        }
        iVar6 = 0;
LAB_144375f0d:
        bVar11 = iVar6 == 0;
      }
    }
    else {
      bVar11 = local_48 + local_38 == 1;
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    if (bVar11) {
      FUN_1446f470e(&local_58,L"VulkanRHI",1);
      plVar8 = (longlong *)FUN_1447c1074(local_58);
      if ((plVar8 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar8 + 0x48))(plVar8), cVar4 != '\0')) {
        local_5c = 0;
        local_40 = 0;
        local_60 = 0;
        local_50 = 0;
        NVSDK_NGX_VULKAN_RequiredExtensions(&local_5c,&local_40,&local_60,&local_50);
        local_70 = 0;
        local_68 = 0;
        local_80 = local_40;
        local_78 = local_5c;
        FUN_1473a566a();
        local_90 = 0;
        local_88 = 0;
        local_a0 = local_50;
        local_98 = local_60;
        FUN_1473a5736();
      }
    }
  }
LAB_144375f66:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144376075 FUN_144376075 body=102 status=ok
// SIG undefined FUN_144376075(void)

void FUN_144376075(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba31988;
  local_14 = 0x13;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146669b00(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443760dc FUN_1443760dc body=57 status=ok
// SIG undefined FUN_1443760dc(void)

void FUN_1443760dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf4068 == 0) {
    uVar1 = FUN_146669c42();
    DAT_14cbf4068 = FUN_14171c317(FUN_146669c71,uVar1,L"EStreamlineDLSSGMode");
  }
  return;
}



// FUNCTION 144376116 FUN_144376116 body=366 status=ok
// SIG undefined FUN_144376116(void)

uint FUN_144376116(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_144376444();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf4100) && (FUN_144b3d300(&DAT_14cbf4100), DAT_14cbf4100 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbf40f8 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.DLSSG.Enable",1);
    _Init_thread_footer(&DAT_14cbf4100);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf4110) && (FUN_144b3d300(&DAT_14cbf4110), DAT_14cbf4110 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbf4108 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.DLSSG.FramesToGenerate",1)
    ;
    _Init_thread_footer(&DAT_14cbf4110);
  }
  if (DAT_14cbf4108 != (longlong *)0x0 && DAT_14cbf40f8 != (longlong *)0x0) {
    uVar1 = (**(code **)(*DAT_14cbf4108 + 0xb0))();
    iVar2 = (**(code **)(*DAT_14cbf40f8 + 0xb0))();
    if (iVar2 != 0) {
      if (iVar2 == 2) {
        return 0xfb;
      }
      if (uVar1 < 4) {
        return 0x1f171100 >> ((byte)(uVar1 << 3) & 0x1f);
      }
    }
  }
  return 0;
}



// FUNCTION 144376284 FUN_144376284 body=447 status=ok
// SIG undefined FUN_144376284(void)

void FUN_144376284(uint param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  
  FUN_144376444();
  cVar2 = FUN_1443764b4(param_1);
  if (cVar2 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbf40e0) {
      FUN_144b3d300(&DAT_14cbf40e0);
      if (DAT_14cbf40e0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cbf40d8 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.DLSSG.Enable",1);
        _Init_thread_footer(&DAT_14cbf40e0);
      }
    }
    plVar1 = DAT_14cbf40d8;
    bVar4 = (byte)param_1;
    if (DAT_14cbf40d8 != (longlong *)0x0) {
      if ((bVar4 < 0x20) && ((0x80820000U >> (param_1 & 0x1f) & 1) != 0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = 0;
        if ((param_1 & 0xff) == 0xfb) {
          uVar5 = 2;
        }
      }
      uVar3 = (**(code **)(*DAT_14cbf40d8 + 0x18))(DAT_14cbf40d8);
      FUN_140635eb8(plVar1,uVar5,uVar3 & 0xff000000,0);
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbf40f0) {
      FUN_144b3d300(&DAT_14cbf40f0);
      if (DAT_14cbf40f0 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cbf40e8 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Streamline.DLSSG.FramesToGenerate",1);
        _Init_thread_footer(&DAT_14cbf40f0);
      }
    }
    plVar1 = DAT_14cbf40e8;
    if (DAT_14cbf40e8 != (longlong *)0x0) {
      cVar2 = '\x03';
      if (bVar4 != 0x1f) {
        cVar2 = (bVar4 == 0x17) + '\x01';
      }
      uVar3 = (**(code **)(*DAT_14cbf40e8 + 0x18))(DAT_14cbf40e8);
      FUN_140635eb8(plVar1,cVar2,uVar3 & 0xff000000,0);
      return;
    }
  }
  return;
}



// FUNCTION 144376444 FUN_144376444 body=112 status=ok
// SIG undefined FUN_144376444(void)

void FUN_144376444(void)

{
  char cVar1;
  char cVar2;
  
  if (DAT_14cbf40d0 == '\0') {
    if ((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) {
      cVar1 = (**(code **)(*DAT_14cb527c8 + 0x38))();
      cVar2 = '\x06';
      if (cVar1 != '\0') {
        cVar2 = FUN_1401433c5();
        cVar2 = (char)(0x6030405020100 >> (cVar2 * '\b' & 0x3fU));
      }
    }
    else {
      cVar2 = (DAT_14c763048 == '\x02') * '\x05' + '\x01';
    }
    DAT_14c7647f8 = cVar2;
    DAT_14cbf40d0 = '\x01';
  }
  return;
}



// FUNCTION 1443764b4 FUN_1443764b4 body=139 status=ok
// SIG undefined FUN_1443764b4(void)

bool FUN_1443764b4(byte param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (DAT_14cbf4068 == 0) {
    uVar3 = FUN_146669c42();
    DAT_14cbf4068 = FUN_14171c317(FUN_146669c71,uVar3);
  }
  uVar2 = (ulonglong)*(int *)(DAT_14cbf4068 + 0x48);
  if ((longlong)uVar2 < 1) {
LAB_14437650f:
    bVar7 = false;
  }
  else {
    uVar5 = (ulonglong)param_1;
    if (*(ulonglong *)(*(longlong *)(DAT_14cbf4068 + 0x40) + 8) != uVar5) {
      uVar6 = 0;
      puVar4 = (ulonglong *)(*(longlong *)(DAT_14cbf4068 + 0x40) + 0x18);
      do {
        if (uVar2 - 1 == uVar6) goto LAB_14437650f;
        uVar6 = uVar6 + 1;
        uVar1 = *puVar4;
        puVar4 = puVar4 + 2;
      } while (uVar1 != uVar5);
      if (uVar2 <= uVar6) goto LAB_14437650f;
    }
    uVar2 = FUN_1404d8156();
    bVar7 = uVar2 != uVar5;
  }
  return bVar7;
}



// FUNCTION 144376540 FUN_144376540 body=101 status=ok
// SIG undefined FUN_144376540(void)

void FUN_144376540(void)

{
  char cVar1;
  longlong *plVar2;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_144376444();
  FUN_144376444();
  FUN_1459a8670(0,DAT_14c7647f8);
  return;
}



// FUNCTION 1443765a6 FUN_1443765a6 body=75 status=ok
// SIG undefined FUN_1443765a6(void)

void FUN_1443765a6(void)

{
  longlong *plVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001443765e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 1443765f1 FUN_1443765f1 body=160 status=ok
// SIG undefined FUN_1443765f1(void)

void FUN_1443765f1(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14ba32760;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/StreamlineDLSSGBlueprint",&PTR_FUN_14ba32780,1,0);
  local_28 = 0x800000014ba327a8;
  local_14 = 0x18;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_146669e92(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144376694 FUN_144376694 body=57 status=ok
// SIG undefined FUN_144376694(void)

void FUN_144376694(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbf4138 == 0) {
    uVar1 = FUN_146669ffc();
    DAT_14cbf4138 = FUN_14171c317(FUN_14666a02b,uVar1,L"EStreamlineDeepDVCMode");
  }
  return;
}



// FUNCTION 1443766ce FUN_1443766ce body=163 status=ok
// SIG undefined FUN_1443766ce(void)

bool FUN_1443766ce(void)

{
  int iVar1;
  bool bVar2;
  
  FUN_144376878();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf41d8) {
    FUN_144b3d300(&DAT_14cbf41d8);
    if (DAT_14cbf41d8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbf41d0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.DeepDVC.Enable",1);
      _Init_thread_footer(&DAT_14cbf41d8);
    }
  }
  if (DAT_14cbf41d0 == (longlong *)0x0) {
    bVar2 = false;
  }
  else {
    iVar1 = (**(code **)(*DAT_14cbf41d0 + 0xb0))();
    bVar2 = iVar1 == 1;
  }
  return bVar2;
}



// FUNCTION 144376772 FUN_144376772 body=262 status=ok
// SIG undefined FUN_144376772(void)

void FUN_144376772(undefined4 param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  
  FUN_144376878();
  if (DAT_14cbf4138 == 0) {
    uVar4 = FUN_146669ffc();
    DAT_14cbf4138 = FUN_14171c317(FUN_14666a02b,uVar4,L"EStreamlineDeepDVCMode");
  }
  cVar2 = FUN_1443768e8(param_1);
  if (cVar2 != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbf41c8) {
      FUN_144b3d300(&DAT_14cbf41c8);
      if (DAT_14cbf41c8 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cbf41c0 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.DeepDVC.Enable",1);
        _Init_thread_footer(&DAT_14cbf41c8);
      }
    }
    plVar1 = DAT_14cbf41c0;
    if (DAT_14cbf41c0 != (longlong *)0x0) {
      uVar3 = (**(code **)(*DAT_14cbf41c0 + 0x18))(DAT_14cbf41c0);
      FUN_140635eb8(plVar1,(char)param_1 == '\x01',uVar3 & 0xff000000,0);
      return;
    }
  }
  return;
}



// FUNCTION 144376878 FUN_144376878 body=112 status=ok
// SIG undefined FUN_144376878(void)

void FUN_144376878(void)

{
  char cVar1;
  char cVar2;
  
  if (DAT_14cbf41b8 == '\0') {
    if ((DAT_14cb527d0 == '\x01') && ((DAT_14cb526f4 & 1) != 0)) {
      cVar1 = (**(code **)(*DAT_14cb527c8 + 0x40))();
      cVar2 = '\x06';
      if (cVar1 != '\0') {
        cVar2 = FUN_14166e5c4();
        cVar2 = (char)(0x6030405020100 >> (cVar2 * '\b' & 0x3fU));
      }
    }
    else {
      cVar2 = (DAT_14c763048 == '\x02') * '\x05' + '\x01';
    }
    DAT_14c7647fc = cVar2;
    DAT_14cbf41b8 = '\x01';
  }
  return;
}



// FUNCTION 1443768e8 FUN_1443768e8 body=139 status=ok
// SIG undefined FUN_1443768e8(void)

bool FUN_1443768e8(byte param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if (DAT_14cbf4138 == 0) {
    uVar3 = FUN_146669ffc();
    DAT_14cbf4138 = FUN_14171c317(FUN_14666a02b,uVar3);
  }
  uVar2 = (ulonglong)*(int *)(DAT_14cbf4138 + 0x48);
  if ((longlong)uVar2 < 1) {
LAB_144376943:
    bVar7 = false;
  }
  else {
    uVar5 = (ulonglong)param_1;
    if (*(ulonglong *)(*(longlong *)(DAT_14cbf4138 + 0x40) + 8) != uVar5) {
      uVar6 = 0;
      puVar4 = (ulonglong *)(*(longlong *)(DAT_14cbf4138 + 0x40) + 0x18);
      do {
        if (uVar2 - 1 == uVar6) goto LAB_144376943;
        uVar6 = uVar6 + 1;
        uVar1 = *puVar4;
        puVar4 = puVar4 + 2;
      } while (uVar1 != uVar5);
      if (uVar2 <= uVar6) goto LAB_144376943;
    }
    uVar2 = FUN_1404d8156();
    bVar7 = uVar2 != uVar5;
  }
  return bVar7;
}



// FUNCTION 144376974 FUN_144376974 body=101 status=ok
// SIG undefined FUN_144376974(void)

void FUN_144376974(void)

{
  char cVar1;
  longlong *plVar2;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar2 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2);
    if (cVar1 == '\0') {
      return;
    }
  }
  FUN_144376878();
  FUN_144376878();
  FUN_1459a8670(3,DAT_14c7647fc);
  return;
}



// FUNCTION 1443769da FUN_1443769da body=75 status=ok
// SIG undefined FUN_1443769da(void)

void FUN_1443769da(void)

{
  longlong *plVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  plVar1 = (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Streamline.InitializePlugin",1);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144376a18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))(plVar1);
    return;
  }
  return;
}



// FUNCTION 144376a25 FUN_144376a25 body=160 status=ok
// SIG undefined FUN_144376a25(void)

void FUN_144376a25(void)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &PTR_FUN_14ba33800;
  local_38 = 1;
  local_48 = 0;
  FUN_14282b410(L"/Script/StreamlineDeepDVCBlueprint",&PTR_FUN_14ba33820,1,0);
  local_28 = 0x800000014ba33848;
  local_14 = 0x1a;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666a2d8(&local_28);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144376ac8 FUN_144376ac8 body=69 status=ok
// SIG undefined FUN_144376ac8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144376ac8(void)

{
  _DAT_14cbf4260 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144376b0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4268,1);
  return;
}



// FUNCTION 144376b0d FUN_144376b0d body=69 status=ok
// SIG undefined FUN_144376b0d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144376b0d(void)

{
  _DAT_14cbf4278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144376b4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4280,1);
  return;
}



// FUNCTION 144376b52 FUN_144376b52 body=69 status=ok
// SIG undefined FUN_144376b52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144376b52(void)

{
  _DAT_14cbf4290 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144376b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4298,1);
  return;
}



// FUNCTION 144376bc3 FUN_144376bc3 body=59 status=ok
// SIG undefined FUN_144376bc3(void)

void FUN_144376bc3(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = DAT_14cbf42c0;
  if (DAT_14cbf42c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = DAT_14cbf42c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144376bf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144376c02 FUN_144376c02 body=1314 status=ok
// SIG undefined FUN_144376c02(void)

ulonglong FUN_144376c02(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong *local_c0;
  longlong local_b8;
  undefined4 *local_b0;
  ulonglong *local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  int local_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_60 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x20))();
  local_b0 = &local_68;
  local_68 = 5;
  local_58 = 0;
  uStack_50 = 0;
  local_a8 = &local_48;
  FUN_1407adb6e(&local_a0);
  FUN_140230a63();
  FUN_140230ad0(&DAT_14c8731a8,&local_88,L"XeSS{0}RHI",&local_a0);
  puVar11 = local_88;
  if (local_80 == 0) {
    puVar11 = (undefined8 *)&DAT_149dfb77a;
  }
  FUN_1446f470e(&local_90,puVar11,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar5 = (longlong *)FUN_1402c9134(&DAT_14c874628,local_90,&local_70,1);
  if (local_88 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1407adb3e(local_a0,local_98);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar6 = (longlong *)(**(code **)(*plVar5 + 0x40))(plVar5);
  plVar5 = DAT_14cbf42b0;
  plVar8 = DAT_14cbf42b0;
  if ((DAT_14cbf42b0 != plVar6) && (plVar8 = plVar6, DAT_14cbf42b0 != (longlong *)0x0)) {
    puVar11 = (undefined8 *)*DAT_14cbf42b0;
    DAT_14cbf42b0 = plVar6;
    (*(code *)*puVar11)(plVar5,1);
    plVar8 = DAT_14cbf42b0;
  }
  DAT_14cbf42b0 = plVar8;
  plVar5 = DAT_14cbf42b0;
  uVar7 = (**(code **)(*DAT_14ca83900 + 0x20))();
  plVar8 = (longlong *)FUN_146205748(uVar7);
  plVar5[1] = (longlong)plVar8;
  cVar2 = (**(code **)(*plVar8 + 8))(plVar8);
  if ((cVar2 != '\0') && (*(char *)(plVar5[1] + 0x38) == '\x01')) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
    FUN_1443774e2(plVar5,&local_68,0);
    lVar9 = CONCAT44(uStack_64,local_68);
    if (lVar9 != 0) {
      uVar7 = *(undefined8 *)(lVar9 + 8);
      lVar13 = 8;
      iVar12 = 100;
      local_b8 = lVar9;
      do {
        local_88 = (undefined8 *)0x400000004000;
        local_a0 = 0;
        local_70 = 0;
        local_78 = 0;
        local_c0 = &local_70;
        local_c8 = &local_a0;
        iVar3 = (**(code **)(plVar5[1] + 0x10))(uVar7,&local_88,iVar12,&local_78);
        if (iVar3 == 0) {
          fVar15 = (float)((ulonglong)local_88 & 0xffffffff);
          fVar16 = (float)(local_a0 & 0xffffffff) / fVar15;
          if (fVar16 < DAT_14c764800) {
            DAT_14c764800 = fVar16;
          }
          fVar17 = (float)(local_70 & 0xffffffff) / fVar15;
          if (DAT_14cbf4318 < fVar17) {
            DAT_14cbf4318 = fVar17;
          }
          *(float *)((longlong)&DAT_14cbf4318 + lVar13) = fVar16;
          *(float *)(lVar13 + 0x14cbf431c) = fVar17;
          *(float *)((longlong)&DAT_14cbf4320 + lVar13) = (float)(local_78 & 0xffffffff) / fVar15;
        }
        lVar13 = lVar13 + 0xc;
        iVar12 = iVar12 + 1;
      } while (lVar13 != 0x5c);
      uVar7 = (**(code **)(*(longlong *)plVar5[3] + 0xd0))();
      local_88 = (undefined8 *)0x0;
      local_80 = 0;
      FUN_1446efa72(&local_88,0,3,0x10);
      local_80 = 3;
      *local_88 = &PTR_LAB_149e170a0;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_88[2] = lVar13;
      *local_88 = &PTR_FUN_14ba34980;
      local_88[3] = plVar5;
      local_88[4] = FUN_1459c2c58;
      FUN_14110d2ba(uVar7,&local_a0,&local_88);
      lVar9 = local_b8;
      if (local_80 == 0) {
LAB_144376fa0:
        if (local_88 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_88 != (undefined8 *)0x0) {
        (**(code **)*local_88)(local_88,0);
        FUN_1446efa72(&local_88,0,0,0x10);
        local_80 = 0;
        goto LAB_144376fa0;
      }
      uVar4 = (**(code **)(*(longlong *)plVar5[3] + 0xb0))();
      uVar10 = 2;
      if (uVar4 < 7) {
        uVar10 = (ulonglong)uVar4;
      }
      fVar15 = (float)(&DAT_14cbf4328)[uVar10 * 3];
      *(float *)((longlong)plVar5 + 0x24) = fVar15;
      FUN_140635f48(DAT_14cbf42f0,fVar15 * 100.0,0xd000000,0);
    }
    plVar5 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_60 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (lVar9 != 0) {
      lVar9 = FUN_14001cc68(8,0x10);
      FUN_144377126(lVar9,DAT_14cbf42b0);
      uVar10 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
      if ((DAT_14cbf42a8 != lVar9) && (bVar14 = DAT_14cbf42a8 != 0, DAT_14cbf42a8 = lVar9, bVar14))
      {
        FUN_1400020a8();
      }
      goto LAB_14437708e;
    }
  }
  plVar5 = DAT_14cbf42b0;
  if (DAT_14cbf42b0 != (longlong *)0x0) {
    DAT_14cbf42b0 = (longlong *)0x0;
    (**(code **)*plVar5)(plVar5,1);
  }
  uVar10 = 0;
LAB_14437708e:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 144377126 FUN_144377126 body=313 status=ok
// SIG undefined FUN_144377126(void)

undefined8 * FUN_144377126(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14ba34600;
  DAT_14cbf43d0 = param_2;
  uVar2 = (**(code **)(*DAT_14cbf43b0 + 0xd0))();
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_149e170a0;
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
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14ba34a80;
  local_30[3] = param_1;
  FUN_14110d2ba(uVar2,local_38,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144377223;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144377223:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144377260 FUN_144377260 body=141 status=ok
// SIG undefined FUN_144377260(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144377260(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  plVar4 = DAT_14cbf42c0;
  _DAT_14cbf42b8 = 0;
  if (DAT_14cbf42c0 != (longlong *)0x0) {
    DAT_14cbf42c0 = (longlong *)0x0;
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
  puVar3 = DAT_14cbf42b0;
  if (DAT_14cbf42b0 != (undefined8 *)0x0) {
    DAT_14cbf42b0 = (undefined8 *)0x0;
    (**(code **)*puVar3)(puVar3,1);
  }
  if (DAT_14cbf42a8 != 0) {
    DAT_14cbf42a8 = 0;
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144377300 FUN_144377300 body=257 status=ok
// SIG undefined FUN_144377300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144377300(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = DAT_14cbf42a8;
  FUN_14666a4cc(&local_28);
  plVar1 = local_20;
  plVar4 = DAT_14cbf42c0;
  if (local_20 == (longlong *)0x0) {
    _DAT_14cbf42b8 = local_28;
    if (DAT_14cbf42c0 == (longlong *)0x0) goto LAB_1443773b6;
    DAT_14cbf42c0 = (longlong *)0x0;
LAB_144377380:
    _DAT_14cbf42b8 = local_28;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1443773b6;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    plVar4 = DAT_14cbf42c0;
    UNLOCK();
    _DAT_14cbf42b8 = local_28;
    if (local_20 != DAT_14cbf42c0) {
      DAT_14cbf42c0 = local_20;
      if (plVar4 == (longlong *)0x0) goto LAB_1443773b6;
      goto LAB_144377380;
    }
    LOCK();
    plVar4 = local_20 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1443773b6;
    (**(code **)*local_20)(local_20);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1443773b6:
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144377412 FUN_144377412 body=69 status=ok
// SIG undefined FUN_144377412(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144377412(void)

{
  _DAT_14cbf42d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144377454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf42d8,1);
  return;
}



// FUNCTION 144377457 FUN_144377457 body=69 status=ok
// SIG undefined FUN_144377457(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144377457(void)

{
  _DAT_14cbf42e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144377499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf42f0,1);
  return;
}



// FUNCTION 14437749c FUN_14437749c body=69 status=ok
// SIG undefined FUN_14437749c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437749c(void)

{
  _DAT_14cbf4300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001443774de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4308,1);
  return;
}



// FUNCTION 1443774e2 FUN_1443774e2 body=505 status=ok
// SIG undefined FUN_1443774e2(void)

longlong * FUN_1443774e2(longlong *param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  wchar_t *_Str1;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  iVar5 = (**(code **)(*param_1 + 0x28))();
  if (iVar5 != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    goto LAB_144377524;
  }
  plVar7 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14ba348f0;
  lVar3 = param_1[1];
  plVar7[2] = (longlong)&PTR_FUN_14ba34278;
  plVar7[5] = 0;
  plVar7[6] = 0;
  *(undefined4 *)(plVar7 + 7) = 0;
  plVar7[8] = 0;
  plVar7[9] = 0;
  plVar7[3] = local_48;
  plVar7[4] = lVar3;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
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
  bVar4 = (**(code **)(*DAT_14cbf4308 + 0xa8))();
  iVar5 = (**(code **)(*param_1 + 0x30))(param_1,local_48,(uint)bVar4 * 0x100 + 1);
  if (iVar5 != 0) goto LAB_1443775f8;
  uVar6 = (**(code **)(*DAT_14cbf42d8 + 0xb0))();
  if (uVar6 < 4) {
    iVar5 = (**(code **)(param_1[1] + 0x20))(local_48,uVar6,&DAT_1443776dc);
    if (iVar5 != 0) {
      if ((iVar5 == -7) && (DAT_14ca83900 != (longlong *)0x0)) {
        _Str1 = (wchar_t *)(**(code **)(*DAT_14ca83900 + 0x20))();
        iVar5 = wcscmp(_Str1,L"D3D11");
        if (iVar5 == 0) goto LAB_14437768f;
      }
LAB_1443775f8:
      *param_2 = 0;
      param_2[1] = 0;
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
      goto LAB_144377524;
    }
  }
LAB_14437768f:
  if (param_3 != '\0') {
    iVar5 = (int)param_1[6];
    *(uint *)(param_1 + 6) = iVar5 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar5 + 1U) {
      FUN_144379720(param_1 + 5,iVar5);
    }
    lVar3 = param_1[5];
    *(longlong **)(lVar3 + (longlong)iVar5 * 0x10) = plVar7 + 2;
    *(longlong **)(lVar3 + 8 + (longlong)iVar5 * 0x10) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
  }
  *param_2 = (longlong)(plVar7 + 2);
  param_2[1] = (longlong)plVar7;
LAB_144377524:
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1443776de FUN_1443776de body=1036 status=ok
// SIG undefined FUN_1443776de(void)

void FUN_1443776de(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (uint *)(param_1 + 0x48);
  iVar7 = *(int *)(param_1 + 0x60);
  local_7c = param_2;
  local_78 = param_1;
  if (iVar7 == 0) {
    uVar23 = 1;
    uVar19 = 0;
    iVar21 = 0;
    iVar10 = 0;
  }
  else {
    puVar18 = *(uint **)(param_1 + 0x58);
    if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
      puVar18 = puVar1;
    }
    uVar11 = *puVar18;
    if (uVar11 == 0) {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      uVar19 = 0;
      uVar23 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar23 = uVar19;
      }
      iVar21 = 0;
      do {
        if (uVar23 == uVar19) goto LAB_1443778f5;
        iVar21 = iVar21 + 0x20;
        uVar11 = puVar18[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar19 = 0;
      iVar21 = 0;
    }
    uVar23 = (ulonglong)(-uVar11 & uVar11);
    uVar5 = uVar23 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar10 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 < iVar7) {
    plVar2 = (longlong *)(param_1 + 0x38);
    local_70 = param_1 + 0x70;
    uVar11 = 0xffffffff;
    do {
      lVar17 = *plVar2;
      lVar22 = (longlong)iVar10 * 0x20;
      if (10 < (uint)(param_2 - *(int *)(*(longlong *)(lVar17 + 8 + lVar22) + 0x28))) {
        lVar15 = *(longlong *)(param_1 + 0x78);
        if (*(longlong *)(param_1 + 0x78) == 0) {
          lVar15 = local_70;
        }
        lVar16 = (longlong)*(int *)(lVar17 + 0x1c + lVar22);
        iVar7 = *(int *)(lVar15 + lVar16 * 4);
        if (iVar7 == iVar10) {
          puVar8 = (undefined4 *)(lVar15 + lVar16 * 4);
        }
        else {
          do {
            lVar15 = (longlong)iVar7;
            iVar7 = *(int *)(lVar17 + 0x18 + lVar15 * 0x20);
          } while (iVar7 != iVar10);
          puVar8 = (undefined4 *)(lVar17 + lVar15 * 0x20 + 0x18);
        }
        *puVar8 = *(undefined4 *)(lVar17 + lVar22 + 0x18);
        plVar6 = *(longlong **)(*plVar2 + 0x10 + lVar22);
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar6 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar4 = (int *)((longlong)plVar6 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*plVar6 + 0x10))(plVar6);
            }
          }
        }
        FUN_144379826(plVar2,iVar10);
        iVar7 = *(int *)(local_78 + 0x60);
        param_1 = local_78;
        param_2 = local_7c;
      }
      uVar11 = uVar11 & ~(uint)uVar23;
      puVar18 = *(uint **)(param_1 + 0x58);
      if (*(uint **)(param_1 + 0x58) == (uint *)0x0) {
        puVar18 = puVar1;
      }
      iVar10 = (int)uVar19;
      lVar17 = (longlong)iVar10;
      uVar14 = puVar18[lVar17] & uVar11;
      if (uVar14 == 0) {
        iVar12 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar12 = iVar7 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) break;
        lVar22 = 0;
        while( true ) {
          iVar21 = iVar21 + 0x20;
          uVar14 = puVar18[lVar17 + lVar22 + 1];
          if (uVar14 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar13 - lVar17 == lVar22) goto LAB_1443778f5;
        }
        uVar19 = (ulonglong)(iVar10 + (int)lVar22 + 1);
        uVar11 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar14 & uVar14);
      uVar5 = uVar23 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar10 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar7);
  }
LAB_1443778f5:
  lVar17 = local_78;
  local_68 = 0;
  uStack_60 = 0;
  iVar7 = *(int *)(param_1 + 0x30);
  if (0 < iVar7) {
    plVar2 = (longlong *)(param_1 + 0x28);
    lVar22 = 0;
    bVar9 = false;
    do {
      uVar19 = uStack_60;
      lVar15 = *plVar2;
      uVar11 = (uint)lVar22;
      lVar22 = (longlong)(int)uVar11;
      lVar24 = lVar22 << 4;
      lVar16 = 0;
      while ((uint)(param_2 - *(int *)(*(longlong *)(lVar15 + lVar24) + 0x28)) < 0xb) {
        lVar20 = lVar22 + lVar16;
        lVar16 = lVar16 + 1;
        lVar24 = lVar24 + 0x10;
        if ((longlong)iVar7 <= lVar20 + 1) {
          if (bVar9) goto LAB_144377a32;
          goto LAB_144377a3a;
        }
      }
      lVar20 = (longlong)(int)uStack_60;
      uVar14 = (int)uStack_60 + 1;
      uStack_60 = CONCAT44(uStack_60._4_4_,uVar14);
      if (uStack_60._4_4_ < uVar14) {
        FUN_144379720(&local_68,uVar19 & 0xffffffff);
        param_2 = local_7c;
      }
      *(undefined8 *)(local_68 + lVar20 * 0x10) = *(undefined8 *)(lVar15 + lVar24);
      lVar15 = *(longlong *)(lVar15 + 8 + lVar24);
      *(longlong *)(local_68 + 8 + lVar20 * 0x10) = lVar15;
      if (lVar15 != 0) {
        LOCK();
        *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
        UNLOCK();
      }
      lVar15 = *plVar2;
      plVar6 = *(longlong **)(lVar15 + 8 + lVar24);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar6 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar4 = (int *)((longlong)plVar6 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          param_2 = local_7c;
          if (*piVar4 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            param_2 = local_7c;
          }
        }
      }
      iVar7 = *(int *)(lVar17 + 0x30);
      iVar10 = (int)lVar16;
      if (~uVar11 + iVar7 != iVar10) {
        iVar21 = (~uVar11 + iVar7) - iVar10;
        if (0 < iVar21) {
          iVar21 = 1;
        }
        memmove((void *)(lVar24 + lVar15),(void *)((longlong)(iVar7 - iVar21) * 0x10 + lVar15),
                (longlong)iVar21 << 4);
        iVar7 = *(int *)(lVar17 + 0x30);
        param_2 = local_7c;
      }
      lVar22 = lVar22 + lVar16;
      iVar7 = iVar7 + -1;
      *(int *)(lVar17 + 0x30) = iVar7;
      bVar9 = true;
    } while ((int)(uVar11 + iVar10) < iVar7);
LAB_144377a32:
    FUN_144379d6a(plVar2);
  }
LAB_144377a3a:
  iVar7 = (int)uStack_60;
  if (0 < (int)uStack_60) {
    local_58 = 0;
    local_50 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_58,5);
    (**(code **)(*DAT_14ca83900 + 0x370))();
    FUN_144379b2b(local_68,uStack_60 & 0xffffffff);
    uVar19 = uStack_60 >> 0x20;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    iVar7 = 0;
    if ((int)uVar19 != 0) {
      FUN_144379d3a(&local_68);
      iVar7 = (int)uStack_60;
    }
  }
  FUN_144379b2b(local_68,iVar7);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144377aec FUN_144377aec body=165 status=ok
// SIG undefined FUN_144377aec(void)

void FUN_144377aec(longlong param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *param_4;
  local_14 = param_4[1];
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  iVar4 = (**(code **)(*(longlong *)(param_1 + 8) + 0x28))(param_2);
  if ((iVar4 == -10) && (DAT_14ca83900 != (longlong *)0x0)) {
    (**(code **)(*DAT_14ca83900 + 0x20))();
  }
  plVar3 = *(longlong **)(param_3 + 8);
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
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144377b92 FUN_144377b92 body=69 status=ok
// SIG undefined FUN_144377b92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144377b92(void)

{
  _DAT_14cbf4378 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144377bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4380,1);
  return;
}



// FUNCTION 144377bd7 FUN_144377bd7 body=69 status=ok
// SIG undefined FUN_144377bd7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144377bd7(void)

{
  _DAT_14cbf4390 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144377c19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf4398,1);
  return;
}



// FUNCTION 144377c1c FUN_144377c1c body=69 status=ok
// SIG undefined FUN_144377c1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144377c1c(void)

{
  _DAT_14cbf43a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000144377c5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cbf43b0,1);
  return;
}



// FUNCTION 144377c62 FUN_144377c62 body=5051 status=ok
// SIG undefined FUN_144377c62(void)

ulonglong *
FUN_144377c62(undefined8 param_1,ulonglong *param_2,longlong param_3,longlong param_4,
             longlong param_5)

{
  uint *puVar1;
  int *piVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  undefined4 uVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  DWORD DVar14;
  DWORD DVar15;
  wchar_t *pwVar16;
  longlong lVar17;
  undefined7 uVar23;
  ulonglong uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  int iVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  ulonglong uVar29;
  uint uVar30;
  undefined8 *puVar31;
  uint uVar32;
  longlong *plVar33;
  undefined1 uVar34;
  ushort uVar35;
  int iVar36;
  uint uVar37;
  ulonglong uVar38;
  ushort uVar39;
  int iVar40;
  longlong *plVar41;
  ulonglong uVar42;
  undefined8 *puVar43;
  bool bVar44;
  float fVar45;
  float fVar46;
  undefined1 auStack_188 [32];
  wchar_t *local_168;
  undefined8 *local_160;
  undefined1 local_158;
  longlong local_148;
  int local_140;
  int local_13c;
  ulonglong *local_138;
  undefined8 local_130;
  ulonglong local_128;
  int *local_120;
  ulonglong local_118;
  longlong local_110;
  int local_104;
  longlong local_100;
  ulonglong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_ac;
  undefined2 local_ab;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined8 local_8c;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_76;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar21 = *(undefined8 *)(param_5 + 0x50);
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbf43c8) && (FUN_144b3d300(&DAT_14cbf43c8), DAT_14cbf43c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cbf43c0 =
         (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TemporalAA.Upscaler",1);
    _Init_thread_footer(&DAT_14cbf43c8);
  }
  iVar11 = (**(code **)(*DAT_14cbf43c0 + 0xb0))();
  lVar17 = DAT_14cbf4388;
  if (iVar11 == 0) goto LAB_144377d44;
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar25 + 0xc60);
  if (iVar11 == 0x40000002) {
    uVar18 = 0;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        bVar44 = DVar14 == DVar15;
      }
      else {
        bVar44 = false;
      }
    }
    uVar18 = (ulonglong)(bVar44 ^ 1);
  }
  if (*(int *)(lVar17 + uVar18 * 4) == 0) goto LAB_144377d44;
  piVar5 = (int *)(lVar25 + 0xc60);
  plVar41 = *(longlong **)(param_5 + 0x70);
  local_148 = param_3;
  local_110 = uVar21;
  if (plVar41 != (longlong *)0x0) {
    (**(code **)(*plVar41 + 8))(plVar41);
  }
  lVar17 = DAT_14cbf43a0;
  uVar18 = DAT_14c967818;
  local_b8 = *(undefined8 *)(param_4 + 0x30f8);
  local_c0 = *(undefined8 *)(param_4 + 0x3100);
  fVar46 = *(float *)(*(longlong *)(param_4 + 8) + 0x110);
  fVar45 = (float)(*(int *)(param_4 + 0x4e4) - *(int *)(param_4 + 0x4dc)) * fVar46 *
           *(float *)(param_4 + 0x45c);
  uVar32 = -((int)ROUND(-0.5 - (fVar45 + fVar45)) >> 1);
  fVar46 = (float)(*(int *)(param_4 + 0x4e0) - *(int *)(param_4 + 0x4d8)) * fVar46 *
           *(float *)(param_4 + 0x45c);
  uVar30 = -((int)ROUND(-0.5 - (fVar46 + fVar46)) >> 1);
  local_100 = *(longlong *)(param_5 + 0x20);
  local_e8 = *(undefined8 *)(param_5 + 0x38);
  iVar11 = *piVar5;
  local_e0 = DAT_14c967818;
  local_138 = (ulonglong *)param_4;
  local_120 = piVar5;
  if (iVar11 == 0x40000002) {
    uVar42 = 0;
  }
  else {
    bVar44 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar11 != 2)) {
      if (iVar11 == 1) {
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        bVar44 = DVar14 == DVar15;
      }
      else {
        bVar44 = false;
      }
    }
    uVar42 = (ulonglong)(bVar44 ^ 1);
  }
  iVar11 = uVar30 - (int)local_e0;
  local_118 = (ulonglong)(uVar32 - (int)(uVar18 >> 0x20));
  local_13c = *(int *)(lVar17 + uVar42 * 4);
  plVar20 = DAT_14cbf4308;
  local_f8 = (ulonglong)uVar32;
  bVar10 = (**(code **)(*DAT_14cbf4308 + 0xa8))();
  local_140 = (uint)bVar10 * 0x100 + 1;
  local_f0 = plVar41;
  local_c8 = (ulonglong)uVar30;
  if (plVar41 == (longlong *)0x0) {
LAB_144377f04:
    uVar18 = *(ulonglong *)((longlong)local_138 + 0x10);
    if (uVar18 == 0) {
      plVar41 = (longlong *)0x0;
      local_130 = CONCAT71((int7)((ulonglong)plVar20 >> 8),1);
      uVar18 = 0;
    }
    else if (*(int *)(DAT_14cbf43d0 + 0x40) == *(int *)(DAT_14cbf43d0 + 0x6c)) {
      local_130 = CONCAT71((int7)(DAT_14cbf43d0 >> 8),1);
      plVar41 = (longlong *)0x0;
    }
    else {
      uVar30 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
      uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
      lVar17 = DAT_14cbf43d0 + 0x70;
      if (*(longlong *)(DAT_14cbf43d0 + 0x78) != 0) {
        lVar17 = *(longlong *)(DAT_14cbf43d0 + 0x78);
      }
      iVar40 = *(int *)(lVar17 + (ulonglong)
                                 (*(int *)(DAT_14cbf43d0 + 0x80) - 1U & (uVar30 >> 0x10 ^ uVar30)) *
                                 4);
      uVar42 = DAT_14cbf43d0;
      if (iVar40 == -1) {
LAB_1443780e7:
        uVar23 = (undefined7)(uVar42 >> 8);
      }
      else {
        lVar17 = *(longlong *)(DAT_14cbf43d0 + 0x38);
        do {
          lVar25 = lVar17 + (longlong)iVar40 * 0x20;
          if (*(ulonglong *)(lVar17 + (longlong)iVar40 * 0x20) == uVar18) {
            uVar42 = lVar25 + 8;
            if ((uVar42 & 0xfffffffffffffff7) == 0) goto LAB_1443780e7;
            lVar17 = *(longlong *)(lVar25 + 8);
            plVar41 = *(longlong **)(lVar25 + 0x10);
            uVar23 = (undefined7)(uVar42 >> 8);
            local_130 = CONCAT71(uVar23,1);
            if (plVar41 != (longlong *)0x0) goto LAB_144378037;
            local_130 = CONCAT71(uVar23,1);
            plVar41 = (longlong *)0x0;
            goto LAB_144378041;
          }
          iVar40 = *(int *)(lVar25 + 0x18);
        } while (iVar40 != -1);
        uVar23 = (undefined7)((ulonglong)lVar17 >> 8);
      }
      local_130 = CONCAT71(uVar23,1);
      plVar41 = (longlong *)0x0;
    }
LAB_1443780fd:
    lVar25 = local_148;
    if ((longlong)*(int *)(DAT_14cbf43d0 + 0x30) != 0) {
      lVar27 = 0;
      do {
        plVar20 = *(longlong **)(*(longlong *)(DAT_14cbf43d0 + 0x28) + 8 + lVar27);
        if (((((plVar20 != (longlong *)0x0) && ((int)plVar20[1] == 1)) &&
             (lVar17 = *(longlong *)(*(longlong *)(DAT_14cbf43d0 + 0x28) + lVar27),
             *(int *)(lVar17 + 0x18) == iVar11)) &&
            ((*(int *)(lVar17 + 0x1c) == (int)local_118 && (*(int *)(lVar17 + 0x20) == local_13c))))
           && (*(int *)(lVar17 + 0x24) == local_140)) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          goto LAB_144378157;
        }
        lVar27 = lVar27 + 0x10;
      } while ((longlong)*(int *)(DAT_14cbf43d0 + 0x30) * 0x10 != lVar27);
    }
    plVar20 = (longlong *)0x0;
    lVar17 = 0;
LAB_144378157:
    if (plVar20 == plVar41) {
      if (plVar41 == (longlong *)0x0) {
        plVar33 = (longlong *)0x0;
      }
      else {
        LOCK();
        plVar8 = plVar20 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        plVar33 = plVar41;
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar5 = (int *)((longlong)plVar20 + 0xc);
          *piVar5 = *piVar5 + -1;
          iVar40 = *piVar5;
          UNLOCK();
          plVar8 = plVar20;
joined_r0x000144378182:
          plVar33 = plVar41;
          if (iVar40 == 0) {
            (**(code **)(*plVar8 + 0x10))();
          }
        }
      }
    }
    else {
      plVar33 = plVar20;
      if (plVar41 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar41 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar41)(plVar41);
          LOCK();
          piVar5 = (int *)((longlong)plVar41 + 0xc);
          *piVar5 = *piVar5 + -1;
          iVar40 = *piVar5;
          UNLOCK();
          plVar8 = plVar41;
          plVar41 = plVar20;
          goto joined_r0x000144378182;
        }
      }
    }
    plVar41 = plVar33;
    if (lVar17 == 0) {
      FUN_1443774e2(DAT_14cbf43d0,&local_a8,1);
      lVar17 = CONCAT44(local_a8._4_4_,(int)local_a8);
      plVar20 = (longlong *)CONCAT44(uStack_9c,local_a0);
      local_a8._0_4_ = 0;
      local_a8._4_4_ = 0;
      plVar33 = plVar20;
      if (plVar20 != plVar41) {
        local_a0 = 0;
        uStack_9c = 0;
        if (plVar41 != (longlong *)0x0) {
          LOCK();
          plVar33 = plVar41 + 1;
          *(int *)plVar33 = (int)*plVar33 + -1;
          UNLOCK();
          if ((int)*plVar33 == 0) {
            (**(code **)*plVar41)(plVar41);
            LOCK();
            piVar5 = (int *)((longlong)plVar41 + 0xc);
            *piVar5 = *piVar5 + -1;
            UNLOCK();
            if (*piVar5 == 0) {
              (**(code **)(*plVar41 + 0x10))(plVar41);
            }
          }
        }
        plVar33 = (longlong *)CONCAT44(uStack_9c,local_a0);
        plVar41 = plVar20;
      }
      if (plVar33 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar33 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar33)(plVar33);
          LOCK();
          piVar5 = (int *)((longlong)plVar33 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*plVar33 + 0x10))(plVar33);
          }
        }
      }
    }
  }
  else {
    pwVar16 = (wchar_t *)(**(code **)(*plVar41 + 0x20))(plVar41);
    if (pwVar16 != L"FXeSSUpscaler") {
      lVar17 = (**(code **)(*plVar41 + 0x20))();
      plVar20 = (longlong *)0x0;
      while( true ) {
        uVar35 = *(ushort *)(lVar17 + (longlong)plVar20);
        uVar18 = (ulonglong)uVar35;
        uVar39 = *(ushort *)((longlong)plVar20 + 0x14ba34572);
        if (uVar35 != uVar39) break;
        if (uVar35 == 0) goto LAB_144377f53;
LAB_144377fee:
        plVar20 = (longlong *)((longlong)plVar20 + 2);
      }
      if ((uVar39 | uVar35) < 0x80) {
        uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
        uVar42 = (ulonglong)uVar39;
        uVar39 = (ushort)(byte)(&DAT_149e05da0)[uVar42];
        if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar42]) goto LAB_144377fee;
      }
      if (uVar35 != uVar39) goto LAB_144377f04;
    }
LAB_144377f53:
    uVar18 = *(ulonglong *)((longlong)local_138 + 0x10);
    lVar17 = plVar41[3];
    plVar41 = (longlong *)plVar41[4];
    local_130 = 0;
    if (plVar41 == (longlong *)0x0) {
      local_130 = 0;
      plVar41 = (longlong *)0x0;
    }
    else {
LAB_144378037:
      LOCK();
      *(int *)(plVar41 + 1) = (int)plVar41[1] + 1;
      UNLOCK();
    }
LAB_144378041:
    lVar25 = local_148;
    if (lVar17 == 0) goto LAB_1443780fd;
  }
  uVar42 = DAT_14cbf43d0;
  if (uVar18 != 0) {
    plVar20 = (longlong *)(DAT_14cbf43d0 + 0x38);
    piVar5 = (int *)(DAT_14cbf43d0 + 0x6c);
    if (*piVar5 == 0) {
      uVar30 = *(uint *)(DAT_14cbf43d0 + 0x40);
      puVar1 = (uint *)(DAT_14cbf43d0 + 0x44);
      *(uint *)(DAT_14cbf43d0 + 0x40) = uVar30 + 1;
      uVar22 = (ulonglong)uVar30;
      if (*puVar1 == uVar30) {
        local_128 = (ulonglong)uVar30;
        FUN_1447711aa(plVar20,uVar30);
        uVar22 = local_128;
      }
      iVar40 = *(int *)(uVar42 + 0x60);
      if (iVar40 == 0) {
        iVar12 = -1;
      }
      else {
        iVar12 = iVar40 + 0x1e;
        if (-1 < iVar40 + -1) {
          iVar12 = iVar40 + -1;
        }
        iVar12 = iVar12 >> 5;
      }
      lVar27 = uVar42 + 0x48;
      iVar24 = iVar40 + 1;
      iVar36 = iVar40 + 0x1f;
      if (-1 < iVar40) {
        iVar36 = iVar40;
      }
      iVar36 = iVar36 >> 5;
      if (iVar36 == iVar12) {
        *(int *)(uVar42 + 0x60) = iVar24;
      }
      else {
        local_104 = iVar36;
        if (*(int *)(uVar42 + 100) <= iVar40) {
          iVar12 = iVar40;
          local_128 = uVar22;
          local_d8 = lVar27;
          local_d0 = plVar20;
          if (iVar40 + 0x20U < 0xa0) {
            iVar24 = 0x80;
          }
          else {
            uVar30 = iVar40 + 0x20U >> 5;
            if (*(int *)(uVar42 + 100) + 0x1fU < 0xa0) {
              uVar32 = 4;
              if (4 < uVar30) {
                uVar32 = uVar30;
              }
            }
            else {
              uVar32 = uVar30 + (uVar30 * 3 >> 3) + 0x10;
            }
            uVar22 = (ulonglong)(uVar32 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar37 = (uint)(uVar22 + 0xf);
                if (uVar32 < 0x1ffd) {
                  uVar22 = (ulonglong)
                           (ushort)(&DAT_14c841d90)
                                   [0x32 - (byte)(&DAT_14c841e00)[uVar22 + 0xf >> 4]];
                }
                else {
                  uVar26 = (ulonglong)(uVar37 & 0xfffffff0);
                  if (uVar26 < 0x7ff1) {
                    bVar10 = (&DAT_14c841e00)[uVar37 >> 4];
                    uVar29 = 0x32;
                    if (0x32 < bVar10) {
                      uVar29 = (ulonglong)bVar10;
                    }
                    uVar38 = 0x32 - (ulonglong)bVar10;
                    do {
                      uVar22 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar38 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar38 & 0xffffffff] & 0xf) == 0) goto LAB_144378e4e;
                      lVar25 = uVar29 + 1 + uVar38;
                      uVar38 = uVar38 - 1;
                    } while (lVar25 != 0x33);
                  }
                  uVar22 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar22 = (ulonglong)DAT_14c841df8;
                  }
                  uVar22 = -uVar22 & (uVar26 + uVar22) - 1;
                }
              }
              else {
                uVar22 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar22,0);
                iVar12 = *(int *)(uVar42 + 0x60);
              }
            }
LAB_144378e4e:
            iVar36 = (int)(uVar22 >> 2);
            iVar24 = -0x20;
            if ((int)uVar30 <= iVar36) {
              iVar24 = iVar36 << 5;
            }
          }
          lVar27 = local_d8;
          *(int *)(uVar42 + 100) = iVar24;
          FUN_1446efbd8(local_d8,iVar12);
          iVar24 = *(int *)(uVar42 + 0x60) + 1;
          lVar25 = local_148;
          uVar22 = local_128;
          plVar20 = local_d0;
        }
        iVar12 = iVar24 + 0x1f;
        if (-1 < iVar24) {
          iVar12 = iVar24;
        }
        *(int *)(uVar42 + 0x60) = iVar24;
        iVar36 = local_104;
        if (iVar24 % 0x20 != 0) {
          lVar28 = *(longlong *)(uVar42 + 0x58);
          if (*(longlong *)(uVar42 + 0x58) == 0) {
            lVar28 = lVar27;
          }
          bVar10 = -(char)(iVar24 % 0x20);
          *(uint *)(lVar28 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)(lVar28 + (longlong)(iVar12 >> 5) * 4) << (bVar10 & 0x1f)) >>
               (bVar10 & 0x1f);
        }
      }
      lVar28 = (longlong)(int)uVar22;
      if (*(longlong *)(uVar42 + 0x58) != 0) {
        lVar27 = *(longlong *)(uVar42 + 0x58);
      }
      bVar10 = (byte)iVar40 & 0x1f;
      puVar1 = (uint *)(lVar27 + (longlong)iVar36 * 4);
      *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
    }
    else {
      lVar27 = *(longlong *)(DAT_14cbf43d0 + 0x38);
      uVar22 = (ulonglong)*(uint *)(DAT_14cbf43d0 + 0x68);
      lVar28 = (longlong)(int)*(uint *)(DAT_14cbf43d0 + 0x68);
      iVar40 = *(int *)(lVar27 + 4 + lVar28 * 0x20);
      *(int *)(DAT_14cbf43d0 + 0x68) = iVar40;
      iVar12 = *piVar5 + -1;
      *(int *)(uVar42 + 0x6c) = iVar12;
      if (iVar12 != 0) {
        *(undefined4 *)(lVar27 + (longlong)iVar40 * 0x20) = 0xffffffff;
      }
    }
    iVar40 = (int)uVar22;
    lVar27 = uVar42 + 0x48;
    if (*(longlong *)(uVar42 + 0x58) != 0) {
      lVar27 = *(longlong *)(uVar42 + 0x58);
    }
    iVar12 = iVar40 + 0x1f;
    if (-1 < iVar40) {
      iVar12 = iVar40;
    }
    puVar1 = (uint *)(lVar27 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar22 & 0x1f);
    iVar12 = 1;
    lVar27 = *(longlong *)(uVar42 + 0x38);
    lVar28 = lVar28 * 0x20;
    puVar3 = (ulonglong *)(lVar27 + lVar28);
    *(ulonglong *)(lVar27 + lVar28) = uVar18;
    *(longlong *)(lVar27 + 8 + lVar28) = lVar17;
    *(longlong **)(lVar27 + 0x10 + lVar28) = plVar41;
    if (plVar41 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar41 + 1) = (int)plVar41[1] + 1;
      UNLOCK();
      uVar18 = *puVar3;
    }
    *(undefined4 *)(puVar3 + 3) = 0xffffffff;
    uVar30 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
    uVar30 = (uVar30 >> 0xd ^ uVar30) * -0x3d4d51cb;
    uVar30 = uVar30 >> 0x10 ^ uVar30;
    uVar32 = *(int *)(uVar42 + 0x40) - *(int *)(uVar42 + 0x6c);
    if (uVar32 != 1) {
      if (*(int *)(uVar42 + 0x40) != *(int *)(uVar42 + 0x6c)) {
        lVar25 = uVar42 + 0x70;
        if (*(longlong *)(uVar42 + 0x78) != 0) {
          lVar25 = *(longlong *)(uVar42 + 0x78);
        }
        iVar24 = *(int *)(lVar25 + (ulonglong)(*(int *)(uVar42 + 0x80) - 1U & uVar30) * 4);
        if (iVar24 != -1) {
          do {
            puVar4 = (undefined4 *)(*plVar20 + (longlong)iVar24 * 0x20);
            if (*(ulonglong *)(*plVar20 + (longlong)iVar24 * 0x20) == uVar18) {
              plVar33 = *(longlong **)(puVar4 + 4);
              if (plVar33 != (longlong *)0x0) {
                LOCK();
                plVar8 = plVar33 + 1;
                *(int *)plVar8 = (int)*plVar8 + -1;
                UNLOCK();
                if ((int)*plVar8 == 0) {
                  local_128 = uVar22;
                  (**(code **)*plVar33)(plVar33);
                  LOCK();
                  piVar5 = (int *)((longlong)plVar33 + 0xc);
                  *piVar5 = *piVar5 + -1;
                  UNLOCK();
                  uVar22 = local_128;
                  if (*piVar5 == 0) {
                    (**(code **)(*plVar33 + 0x10))(plVar33);
                    uVar22 = local_128;
                  }
                }
              }
              uVar18 = *puVar3;
              uVar13 = *(undefined4 *)((longlong)puVar3 + 4);
              uVar42 = puVar3[1];
              uVar9 = *(undefined4 *)((longlong)puVar3 + 0xc);
              *(ulonglong *)(puVar4 + 4) = puVar3[2];
              *puVar4 = (int)uVar18;
              puVar4[1] = uVar13;
              puVar4[2] = (int)uVar42;
              puVar4[3] = uVar9;
              FUN_144379826(plVar20,uVar22 & 0xffffffff);
              lVar25 = local_148;
              goto LAB_144378492;
            }
            iVar24 = puVar4[6];
          } while (iVar24 != -1);
        }
      }
      lVar25 = local_148;
      if (3 < uVar32) {
        uVar18 = (ulonglong)(uVar32 & 0xfffffffe) + 0xf;
        lVar27 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar27 == 0; lVar27 = lVar27 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar27 & 0x1f);
      }
    }
    if (((int)uVar32 < 1) || (iVar12 <= *(int *)(uVar42 + 0x80))) {
      uVar30 = *(int *)(uVar42 + 0x80) - 1U & uVar30;
      *(uint *)((longlong)puVar3 + 0x1c) = uVar30;
      lVar27 = *(longlong *)(uVar42 + 0x78);
      if (*(longlong *)(uVar42 + 0x78) == 0) {
        lVar27 = uVar42 + 0x70;
      }
      *(undefined4 *)(puVar3 + 3) =
           *(undefined4 *)
            (lVar27 + ((longlong)*(int *)(uVar42 + 0x80) - 1U & (longlong)(int)uVar30) * 4);
      lVar27 = *(longlong *)(uVar42 + 0x78);
      if (*(longlong *)(uVar42 + 0x78) == 0) {
        lVar27 = uVar42 + 0x70;
      }
      *(int *)(lVar27 + ((longlong)*(int *)(uVar42 + 0x80) - 1U & (longlong)(int)uVar30) * 4) =
           iVar40;
    }
    else {
      *(int *)(uVar42 + 0x80) = iVar12;
      FUN_144379898(plVar20);
    }
  }
LAB_144378492:
  *(undefined4 *)(lVar17 + 0x28) = DAT_14c7590b0;
  local_160 = &local_a8;
  local_168 = L"XeSS::FlattenedVelocity";
  local_158 = 1;
  local_110 = FUN_143c1b1c8(lVar25,local_e8,local_110,local_138);
  lVar27 = DAT_14ca97170;
  uVar30 = *(uint *)(local_100 + 0x84);
  uVar32 = *(uint *)(local_100 + 0x88);
  iVar40 = *local_120;
  local_128 = DAT_14cbf43d0;
  if (((iVar40 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar40 == 2)) {
    uVar18 = 0;
  }
  else if (iVar40 == 1) {
    uVar13 = FUN_140ad26c0();
    local_120 = (int *)CONCAT44(local_120._4_4_,uVar13);
    DVar14 = GetCurrentThreadId();
    uVar18 = (ulonglong)((DWORD)local_120 != DVar14);
  }
  else {
    uVar18 = 1;
  }
  iVar40 = *(int *)(lVar27 + uVar18 * 4);
  uVar37 = (uint)(iVar40 < 1) << 2 | 0xfffffff8;
  local_84 = iVar11 + 3 + (uint)(0 < iVar40) * 4 & uVar37;
  uVar37 = (int)local_118 + (uint)(0 < iVar40) * 4 + 3 & uVar37;
  if ((int)uVar37 <= (int)uVar32) {
    uVar37 = uVar32;
  }
  if ((int)local_84 <= (int)uVar30) {
    local_84 = uVar30;
  }
  uVar34 = 1;
  if (((char)local_130 == '\0') && (*(longlong *)((longlong)local_138 + 0x131e0) != 0)) {
    uVar34 = *(undefined1 *)((longlong)local_138 + 0x23cc);
  }
  local_130 = CONCAT71(local_130._1_7_,uVar34);
  dVar6 = *(double *)((longlong)local_138 + 0x125a8);
  dVar7 = *(double *)((longlong)local_138 + 0x125a0);
  local_76 = *(undefined4 *)(local_100 + 0x92);
  local_7c = *(undefined4 *)(local_100 + 0x8c);
  local_78 = *(undefined2 *)(local_100 + 0x90);
  local_a0 = *(undefined4 *)(local_100 + 0x68);
  uStack_9c = *(undefined4 *)(local_100 + 0x6c);
  puStack_98 = *(undefined **)(local_100 + 0x70);
  uStack_90 = *(undefined4 *)(local_100 + 0x78);
  local_8c = *(undefined8 *)(local_100 + 0x7c);
  local_a8._0_4_ = 0x20008;
  local_a8._4_4_ = 0;
  if ((int)DAT_14ca84e40 <= (int)local_84) {
    local_84 = DAT_14ca84e40;
  }
  if ((int)local_84 < 2) {
    local_84 = 1;
  }
  local_80 = DAT_14ca84e40;
  if ((int)uVar37 < (int)DAT_14ca84e40) {
    local_80 = uVar37;
  }
  if ((int)local_80 < 2) {
    local_80 = 1;
  }
  puVar3 = (ulonglong *)(lVar25 + 0x70);
  uVar42 = *(longlong *)(lVar25 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar18 = uVar42 + 0x120;
  local_138 = puVar3;
  if (*(ulonglong *)(lVar25 + 0x78) < uVar18) {
    FUN_140023dd8(puVar3,0x128);
    uVar42 = *puVar3 + 7 & 0xfffffffffffffff8;
    uVar18 = uVar42 + 0x120;
  }
  *(ulonglong *)(lVar25 + 0x70) = uVar18;
  FUN_1456bbb8c(uVar42,L"XeSS::OutputSceneColor",&local_a8,1);
  iVar40 = *(int *)(lVar25 + 0x180);
  *(uint *)(lVar25 + 0x180) = iVar40 + 1U;
  if (*(uint *)(lVar25 + 0x184) < iVar40 + 1U) {
    FUN_14472c0f6(lVar25 + 0x178,iVar40);
  }
  puVar3 = local_138;
  *(ulonglong *)(*(longlong *)(lVar25 + 0x178) + (longlong)iVar40 * 8) = uVar42;
  *(int *)(uVar42 + 0x9c) = *(int *)(lVar25 + 0x180) + -1;
  puVar43 = (undefined8 *)(*(longlong *)(lVar25 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar19 = puVar43 + 0xe;
  local_120 = (int *)uVar42;
  if (*(undefined8 **)(lVar25 + 0x78) < puVar19) {
    FUN_140023dd8(local_138,0x80);
    puVar43 = (undefined8 *)(*puVar3 + 0xf & 0xfffffffffffffff0);
    puVar19 = puVar43 + 0xe;
  }
  *(undefined8 **)(lVar25 + 0x70) = puVar19;
  *puVar43 = &PTR_FUN_14ba349e8;
  puVar43[8] = 0;
  puVar43[2] = 0;
  puVar43[3] = 0;
  *(undefined4 *)(puVar43 + 4) = 0;
  puVar43[5] = 0;
  puVar43[6] = 0;
  *(undefined4 *)(puVar43 + 7) = 0;
  *(undefined4 *)(puVar43 + 9) = 0x400;
  puVar43[10] = 0;
  puVar43[0xb] = 0;
  *(undefined4 *)(puVar43 + 0xc) = 0;
  iVar40 = *(int *)(lVar25 + 0xa0);
  *(uint *)(lVar25 + 0xa0) = iVar40 + 1U;
  if (*(uint *)(lVar25 + 0xa4) < iVar40 + 1U) {
    FUN_1448cfae8((longlong *)(lVar25 + 0x98),iVar40);
  }
  puVar3 = local_138;
  *(undefined8 **)(*(longlong *)(lVar25 + 0x98) + (longlong)iVar40 * 8) = puVar43;
  if (local_100 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_100 + 0xac);
  }
  puVar43[2] = local_100;
  puVar43[3] = uVar21;
  *(undefined4 *)(puVar43 + 4) = 0x10;
  if (local_110 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(local_110 + 0xac);
  }
  puVar43[5] = local_110;
  puVar43[6] = uVar21;
  *(undefined4 *)(puVar43 + 7) = 0x10;
  if (local_120 == (int *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)((longlong)local_120 + 0xac);
  }
  puVar43[10] = local_120;
  puVar43[0xb] = uVar21;
  *(undefined4 *)(puVar43 + 0xc) = 0x400;
  puStack_98 = (undefined *)0x0;
  uVar30 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar30 = DAT_14ca84e48;
  }
  local_a8._0_4_ = uVar30 + (uVar30 == 0);
  local_a8._4_4_ = 1;
  local_a0 = 0x10109;
  uVar42 = *(longlong *)(lVar25 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar18 = uVar42 + 0x150;
  if (*(ulonglong *)(lVar25 + 0x78) < uVar18) {
    FUN_140023dd8(local_138,0x160);
    uVar42 = *puVar3 + 0xf & 0xfffffffffffffff0;
    uVar18 = uVar42 + 0x150;
  }
  *(ulonglong *)(lVar25 + 0x70) = uVar18;
  FUN_1456bd266(uVar42,L"ForceTransitionDummyBuffer",&local_a8,0);
  iVar40 = *(int *)(lVar25 + 400);
  *(uint *)(lVar25 + 400) = iVar40 + 1U;
  if (*(uint *)(lVar25 + 0x194) < iVar40 + 1U) {
    FUN_144737178(lVar25 + 0x188,iVar40);
  }
  *(ulonglong *)(*(longlong *)(lVar25 + 0x188) + (longlong)iVar40 * 8) = uVar42;
  *(int *)(uVar42 + 0x7c) = *(int *)(lVar25 + 400) + -1;
  puVar43[8] = uVar42;
  *(undefined4 *)(puVar43 + 9) = 0x400;
  if (plVar41 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar41 + 1) = (int)plVar41[1] + 1;
    UNLOCK();
  }
  FUN_148f95c78();
  FUN_140069376(lVar25);
  puVar3 = local_138;
  uVar21 = 2;
  if (((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) &&
     ((DAT_14c760ddc == 2 && ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))))) {
    uVar21 = 4;
  }
  lVar27 = local_f8 << 0x20;
  puVar31 = (undefined8 *)(*(longlong *)(lVar25 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar19 = puVar31 + 0x46;
  if (*(undefined8 **)(lVar25 + 0x78) < puVar19) {
    FUN_140023dd8(local_138,0x238);
    puVar31 = (undefined8 *)(*puVar3 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar31 + 0x46;
  }
  local_f8 = lVar27 + local_c8;
  *local_138 = (ulonglong)puVar19;
  local_a0 = (undefined4)DAT_14cbf4428;
  uStack_9c = (undefined4)((ulonglong)DAT_14cbf4428 >> 0x20);
  if (DAT_14cbf4428 != 0) {
    LOCK();
    *(int *)(DAT_14cbf4428 + 8) = *(int *)(DAT_14cbf4428 + 8) + 1;
    UNLOCK();
  }
  puStack_98 = &DAT_14cbf43e0;
  local_168 = (wchar_t *)((ulonglong)local_168 & 0xffffffffffffff00);
  local_a8 = puVar43 + 2;
  FUN_140068f1a(puVar31,&local_ac,&local_a8,uVar21);
  uVar18 = local_e0;
  lVar25 = local_148;
  *puVar31 = &PTR_FUN_14ba349f0;
  *(char *)(puVar31 + 0x37) = (char)local_130;
  *(undefined2 *)((longlong)puVar31 + 0x1b9) = local_ab;
  *(undefined1 *)((longlong)puVar31 + 0x1bb) = local_a9;
  *(int *)((longlong)puVar31 + 0x1bc) = iVar11;
  *(int *)(puVar31 + 0x38) = (int)local_118;
  *(int *)((longlong)puVar31 + 0x1c4) = local_13c;
  *(int *)(puVar31 + 0x39) = local_140;
  *(ulonglong *)((longlong)puVar31 + 0x1cc) = CONCAT44((float)dVar6,(float)dVar7);
  puVar31[0x3b] = local_128;
  puVar31[0x3c] = local_b8;
  puVar31[0x3d] = local_c0;
  puVar31[0x3e] = local_e0;
  puVar31[0x3f] = local_f8;
  puVar31[0x40] = local_100;
  puVar31[0x41] = local_e8;
  puVar31[0x42] = local_110;
  puVar31[0x43] = puVar43 + 2;
  puVar31[0x44] = lVar17;
  puVar31[0x45] = plVar41;
  iVar11 = *(int *)(local_148 + 0x170);
  *(uint *)(local_148 + 0x170) = iVar11 + 1U;
  if (*(uint *)(local_148 + 0x174) < iVar11 + 1U) {
    FUN_14470e57a(local_148 + 0x168,iVar11);
  }
  *(undefined8 **)(*(longlong *)(lVar25 + 0x168) + (longlong)iVar11 * 8) = puVar31;
  *(int *)((longlong)puVar31 + 0x2c) = *(int *)(lVar25 + 0x170) + -1;
  FUN_140069100(lVar25,puVar31);
  plVar20 = (longlong *)FUN_14001cc68(0x28,0x10);
  piVar5 = local_120;
  if (plVar41 == (longlong *)0x0) {
    *(undefined4 *)(plVar20 + 2) = 0;
    *plVar20 = (longlong)&PTR_FUN_14ba33dd0;
    plVar20[1] = (longlong)&PTR_LAB_14ba33e00;
    plVar20[3] = lVar17;
    plVar20[4] = 0;
    plVar33 = local_f0;
  }
  else {
    LOCK();
    *(int *)(plVar41 + 1) = (int)plVar41[1] + 1;
    UNLOCK();
    *(undefined4 *)(plVar20 + 2) = 0;
    *plVar20 = (longlong)&PTR_FUN_14ba33dd0;
    plVar20[1] = (longlong)&PTR_LAB_14ba33e00;
    plVar20[3] = 0;
    plVar20[4] = 0;
    LOCK();
    *(int *)(plVar41 + 1) = (int)plVar41[1] + 1;
    UNLOCK();
    plVar33 = (longlong *)plVar20[4];
    plVar20[3] = lVar17;
    plVar20[4] = (longlong)plVar41;
    if (plVar33 != (longlong *)0x0) {
      LOCK();
      plVar8 = plVar33 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar33)(plVar33);
        LOCK();
        piVar2 = (int *)((longlong)plVar33 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar33 + 0x10))(plVar33);
        }
      }
    }
    plVar33 = local_f0;
    LOCK();
    plVar8 = plVar41 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar41)(plVar41);
      LOCK();
      piVar2 = (int *)((longlong)plVar41 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar41 + 0x10))(plVar41);
      }
    }
  }
  plVar8 = (longlong *)param_2[3];
  if (plVar8 != plVar20) {
    param_2[3] = (ulonglong)plVar20;
    if (plVar20 != (longlong *)0x0) {
      (**(code **)(*plVar20 + 8))(plVar20);
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *param_2 = (ulonglong)piVar5;
  param_2[1] = uVar18;
  param_2[2] = local_f8;
  if (plVar41 != (longlong *)0x0) {
    LOCK();
    plVar20 = plVar41 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar41)(plVar41);
      LOCK();
      piVar5 = (int *)((longlong)plVar41 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar41 + 0x10))(plVar41);
      }
    }
  }
  if (plVar33 != (longlong *)0x0) {
    (**(code **)(*plVar33 + 0x10))(plVar33);
  }
LAB_144377d44:
  if ((local_70 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437901e FUN_14437901e body=618 status=ok
// SIG undefined FUN_14437901e(void)

ulonglong FUN_14437901e(undefined8 param_1,longlong param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  undefined7 uVar5;
  longlong lVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_88 [32];
  double local_68;
  longlong local_60 [2];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf43c8) {
    FUN_144b3d300(&DAT_14cbf43c8);
    if (DAT_14cbf43c8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cbf43c0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.TemporalAA.Upscaler",1)
      ;
      _Init_thread_footer(&DAT_14cbf43c8);
    }
  }
  iVar1 = (**(code **)(*DAT_14cbf43c0 + 0xb0))();
  lVar6 = DAT_14cbf4388;
  if (iVar1 == 0) {
    bVar7 = false;
  }
  else {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar4 = 0;
    }
    else if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      uVar4 = (ulonglong)(DVar2 != DVar3);
    }
    else {
      uVar4 = 1;
    }
    bVar7 = *(int *)(lVar6 + uVar4 * 4) != 0;
  }
  if (DAT_14cb0d2b0 != 0 && *(longlong *)(param_2 + 8) != 0) {
    lVar6 = *(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x28;
    if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0) {
      lVar6 = 0;
    }
    if (bVar7 && lVar6 == *(longlong *)(*(longlong *)(param_2 + 8) + 0x30)) {
      fVar9 = DAT_14c764800 * 100.0;
      fVar10 = DAT_14cbf4318 * 100.0;
      fVar8 = (float)FUN_1415e17ee();
      fVar8 = fVar8 * 100.0;
      uVar5 = (undefined7)((ulonglong)param_2 >> 8);
      uVar4 = CONCAT71(uVar5,1);
      if (((fVar8 < fVar9) || (fVar10 < fVar8)) && (0.001 < ABS(fVar8 - fVar9))) {
        uVar4 = CONCAT71(uVar5,ABS(fVar8 - fVar10) <= 0.001);
      }
      local_68 = (double)fVar10;
      FUN_140002266(local_60,
                    L"XeSS is off due to invalid screen percentage: %.3f, valid range: %.3f - %.3f",
                    (double)fVar8,(double)fVar9);
      if (local_60[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1443791d4;
    }
  }
  uVar4 = 0;
LAB_1443791d4:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437928a FUN_14437928a body=144 status=ok
// SIG undefined FUN_14437928a(void)

void FUN_14437928a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((((*(char *)(param_2 + 0xc9) == '\x01') && ((*(byte *)(param_2 + 0x48) & 0x10) != 0)) &&
      ((*(byte *)(param_2 + 0x4f) & 2) != 0)) &&
     ((*(int *)(param_2 + 0x28) == 3 && ((longlong)*(int *)(param_2 + 0x10) != 0)))) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar3);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0x3024) == 1)) {
        if (*(longlong *)(param_2 + 0x188) != 0) {
          return;
        }
        uVar2 = FUN_14001cc68(8,0x10);
        FUN_144377126(uVar2,DAT_14cbf43d0);
        *(undefined8 *)(param_2 + 0x188) = uVar2;
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_2 + 0x10) * 8 != lVar3);
  }
  return;
}



// FUNCTION 14437931a FUN_14437931a body=73 status=ok
// SIG undefined FUN_14437931a(void)

longlong FUN_14437931a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
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



// FUNCTION 144379364 FUN_144379364 body=42 status=ok
// SIG undefined FUN_144379364(void)

int FUN_144379364(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x10);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 == 0) {
    (*(code *)**(undefined8 **)(param_1 + 8))(param_1 + 8,1);
  }
  return iVar2 + -1;
}



// FUNCTION 144379398 FUN_144379398 body=54 status=ok
// SIG undefined FUN_144379398(void)

undefined8 * FUN_144379398(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ba34278;
  (**(code **)(param_1[2] + 0x18))(param_1[1]);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443793ce FUN_1443793ce body=29 status=ok
// SIG undefined FUN_1443793ce(void)

undefined8 FUN_1443793ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1443793ec FUN_1443793ec body=475 status=ok
// SIG undefined FUN_1443793ec(void)

void FUN_1443793ec(longlong *param_1)

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
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar16 = 0;
    uVar17 = 1;
    iVar13 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar15 = *puVar11;
    if (uVar15 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar13 = 0;
      do {
        if (uVar17 == uVar16) goto LAB_14437955e;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar11[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar13 = 0;
    }
    uVar17 = (ulonglong)(-uVar15 & uVar15);
    uVar4 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar15 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
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
      uVar15 = uVar15 & ~(uint)uVar17;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar16;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar15;
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
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_14437955e;
        }
        uVar16 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar17 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_14437955e:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 1443795dc FUN_1443795dc body=267 status=ok
// SIG undefined FUN_1443795dc(void)

undefined8 FUN_1443795dc(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined7 uVar5;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined2 *puVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort uVar10;
  
  if (*(int *)(param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*param_2;
  }
  lVar2 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar6 + lVar2);
    uVar4 = (ulonglong)uVar7;
    uVar10 = *(ushort *)((longlong)&DAT_14a343172 + lVar2);
    uVar5 = (undefined7)((ulonglong)lVar2 >> 8);
    if (uVar7 != uVar10) break;
    if (uVar7 == 0) {
      return CONCAT71(uVar5,1);
    }
LAB_144379618:
    lVar2 = lVar2 + 2;
  }
  if ((uVar10 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar9 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_144379618;
  }
  uVar3 = CONCAT71(uVar5,1);
  if (uVar7 == uVar10) {
    return uVar3;
  }
  lVar2 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar6 + lVar2);
    uVar4 = (ulonglong)uVar7;
    uVar10 = *(ushort *)((longlong)&DAT_14a3502a2 + lVar2);
    if (uVar7 != uVar10) break;
    if (uVar7 == 0) {
      return uVar3;
    }
LAB_144379669:
    lVar2 = lVar2 + 2;
  }
  if ((uVar10 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar9 = (ulonglong)uVar10;
    uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar9]) goto LAB_144379669;
  }
  if (uVar7 == uVar10) {
    return uVar3;
  }
  lVar2 = 0;
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar6 + lVar2);
    uVar1 = (uint)uVar7;
    uVar10 = *(ushort *)((longlong)&DAT_14a3588aa + lVar2);
    uVar8 = (uint)uVar10;
    if (uVar7 != uVar10) {
      if ((uVar10 | uVar7) < 0x80) {
        uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar7];
        uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar10];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar10]) goto LAB_1443796b2;
      }
      uVar4 = (ulonglong)(uVar1 - uVar8);
      goto LAB_1443796e0;
    }
    if (uVar7 == 0) break;
LAB_1443796b2:
    lVar2 = lVar2 + 2;
  }
  uVar4 = 0;
LAB_1443796e0:
  return CONCAT71((int7)(uVar4 >> 8),(int)uVar4 == 0);
}



// FUNCTION 1443796e8 FUN_1443796e8 body=26 status=ok
// SIG undefined FUN_1443796e8(void)

void FUN_1443796e8(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba34278;
                    /* WARNING: Could not recover jumptable at 0x0001443796fe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144379702 FUN_144379702 body=29 status=ok
// SIG undefined FUN_144379702(void)

undefined8 FUN_144379702(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144379720 FUN_144379720 body=262 status=ok
// SIG undefined FUN_144379720(void)

void FUN_144379720(longlong param_1,int param_2)

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



// FUNCTION 144379826 FUN_144379826 body=114 status=ok
// SIG undefined FUN_144379826(void)

void FUN_144379826(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
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



// FUNCTION 144379898 FUN_144379898 body=659 status=ok
// SIG undefined FUN_144379898(void)

void FUN_144379898(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_144379913;
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
LAB_144379913:
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



// FUNCTION 144379b2b FUN_144379b2b body=73 status=ok
// SIG undefined FUN_144379b2b(void)

void FUN_144379b2b(longlong param_1,int param_2)

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



// FUNCTION 144379b74 FUN_144379b74 body=29 status=ok
// SIG undefined FUN_144379b74(void)

undefined8 FUN_144379b74(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144379ba6 FUN_144379ba6 body=93 status=ok
// SIG undefined FUN_144379ba6(void)

void FUN_144379ba6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba34910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144379c04 FUN_144379c04 body=93 status=ok
// SIG undefined FUN_144379c04(void)

void FUN_144379c04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a5885e0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba34910;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144379c62 FUN_144379c62 body=126 status=ok
// SIG undefined FUN_144379c62(void)

void FUN_144379c62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a5885e0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14ba34910;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144379cd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144379ce0 FUN_144379ce0 body=44 status=ok
// SIG undefined FUN_144379ce0(void)

void FUN_144379ce0(longlong param_1)

{
  if (DAT_14c7590b0 != DAT_14cbf43d8) {
    FUN_1443776de(*(undefined8 *)(param_1 + 0x18));
    DAT_14cbf43d8 = DAT_14c7590b0;
  }
  return;
}



// FUNCTION 144379d0c FUN_144379d0c body=46 status=ok
// SIG undefined FUN_144379d0c(void)

undefined8 FUN_144379d0c(longlong param_1)

{
  if (DAT_14c7590b0 != DAT_14cbf43d8) {
    FUN_1443776de(*(undefined8 *)(param_1 + 0x18));
    DAT_14cbf43d8 = DAT_14c7590b0;
  }
  return 1;
}



// FUNCTION 144379d3a FUN_144379d3a body=48 status=ok
// SIG undefined FUN_144379d3a(void)

void FUN_144379d3a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 144379d6a FUN_144379d6a body=254 status=ok
// SIG undefined FUN_144379d6a(void)

void FUN_144379d6a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
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
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 144379e68 FUN_144379e68 body=94 status=ok
// SIG undefined FUN_144379e68(void)

undefined8 * FUN_144379e68(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ba349f0;
  plVar3 = (longlong *)param_1[0x45];
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
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144379ec6 FUN_144379ec6 body=1495 status=ok
// SIG undefined FUN_144379ec6(void)

void FUN_144379ec6(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *_Dst;
  uint uVar16;
  undefined8 *puVar17;
  size_t _Size;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  longlong *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  longlong local_d0;
  longlong *plStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  longlong local_98;
  longlong *local_90;
  int local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_144b1c6fa(param_1 + 0x10,&local_e8);
  puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar17 + 0x11;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x90);
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar17 + 0x11;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar17;
  param_2[6] = (ulonglong)(puVar17 + 1);
  puVar17[1] = 0;
  *puVar17 = &PTR_FUN_14a1fb978;
  puVar17[3] = 0;
  _Size = (size_t)(int)uStack_d8;
  *(int *)(puVar17 + 4) = (int)uStack_d8;
  if (_Size == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x24) = 8;
  }
  else {
    puVar14 = &local_e8;
    if (uStack_e0 != (undefined8 *)0x0) {
      puVar14 = uStack_e0;
    }
    FUN_1446fe144(puVar17 + 2,uStack_d8 & 0xffffffff,0);
    _Dst = (undefined8 *)puVar17[3];
    if ((undefined8 *)puVar17[3] == (undefined8 *)0x0) {
      _Dst = puVar17 + 2;
    }
    memcpy(_Dst,puVar14,_Size);
  }
  puVar17[0xd] = 0;
  *(int *)(puVar17 + 0xe) = local_88;
  if ((longlong)local_88 == 0) {
    *(undefined4 *)((longlong)puVar17 + 0x74) = 8;
  }
  else {
    plVar15 = local_90;
    if (local_90 == (longlong *)0x0) {
      plVar15 = &local_d0;
    }
    FUN_1446fe1b8(puVar17 + 5,local_88,0);
    puVar14 = (undefined8 *)puVar17[0xd];
    if ((undefined8 *)puVar17[0xd] == (undefined8 *)0x0) {
      puVar14 = puVar17 + 5;
    }
    memcpy(puVar14,plVar15,(longlong)local_88 << 3);
  }
  *(undefined4 *)(puVar17 + 0xf) = local_80;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = uStack_7c;
  *(undefined4 *)(puVar17 + 0x10) = uStack_78;
  *(undefined4 *)((longlong)puVar17 + 0x84) = uStack_74;
  if (local_90 != (longlong *)0x0) {
    FUN_1400020a8(local_90);
  }
  if (uStack_e0 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  plVar15 = *(longlong **)(param_1 + 0x218);
  local_100 = *(undefined8 *)(*plVar15 + 0x10);
  local_108 = *(undefined8 *)(plVar15[3] + 0x10);
  lVar3 = *(longlong *)(plVar15[8] + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x1cc);
  uVar4 = *(undefined8 *)(param_1 + 0x1e0);
  local_110 = *(undefined8 *)(param_1 + 0x1e8);
  uVar5 = *(undefined8 *)(param_1 + 0x1f0);
  uVar6 = *(undefined8 *)(param_1 + 0x1f8);
  lVar7 = *(longlong *)(param_1 + 0x220);
  if ((((*(int *)(lVar7 + 0x18) == *(int *)(param_1 + 0x1bc)) &&
       (*(int *)(lVar7 + 0x1c) == *(int *)(param_1 + 0x1c0))) &&
      (*(int *)(lVar7 + 0x20) == *(int *)(param_1 + 0x1c4))) &&
     (*(int *)(lVar7 + 0x24) == *(int *)(param_1 + 0x1c8))) {
    uVar16 = (uint)*(byte *)(param_1 + 0x1b8);
  }
  else {
    uVar9 = *(undefined4 *)(param_1 + 0x1c0);
    uVar10 = *(undefined4 *)(param_1 + 0x1c4);
    uVar11 = *(undefined4 *)(param_1 + 0x1c8);
    *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(param_1 + 0x1bc);
    *(undefined4 *)(lVar7 + 0x1c) = uVar9;
    *(undefined4 *)(lVar7 + 0x20) = uVar10;
    *(undefined4 *)(lVar7 + 0x24) = uVar11;
    local_e8 = (longlong *)0x0;
    uStack_e0 = (undefined8 *)((ulonglong)uStack_e0 & 0xffffffff00000000);
    FUN_14007658c(&DAT_14ca850c8,&local_e8,5);
    (**(code **)(*DAT_14ca83900 + 0x370))();
    local_e8 = *(longlong **)(param_1 + 0x1d8);
    uStack_e0 = *(undefined8 **)(param_1 + 0x1bc);
    uStack_d8 = *(ulonglong *)(param_1 + 0x1c4);
    local_d0 = *(longlong *)(param_1 + 0x220);
    plStack_c8 = *(longlong **)(param_1 + 0x228);
    if (plStack_c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_c8 + 1) = (int)plStack_c8[1] + 1;
      UNLOCK();
    }
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      iVar13 = (**(code **)(*local_e8 + 0x18))(local_e8,&uStack_e0,*(undefined8 *)(local_d0 + 8));
      if (iVar13 == 0) {
        local_f8 = local_d0;
        local_f0 = plStack_c8;
        if (plStack_c8 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_c8 + 1) = (int)plStack_c8[1] + 1;
          UNLOCK();
        }
        FUN_144377aec(local_e8,*(undefined8 *)(local_d0 + 8),&local_f8,&uStack_e0);
      }
      plVar15 = plStack_c8;
      if (plStack_c8 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_c8)(plStack_c8);
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
      puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar17 + 7;
      if ((undefined8 *)param_2[1] < puVar14) {
        FUN_140023dd8(param_2,0x40);
        puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar17 + 7;
      }
      *param_2 = (ulonglong)puVar14;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar17;
      param_2[6] = (ulonglong)(puVar17 + 1);
      puVar17[1] = 0;
      *puVar17 = &PTR_FUN_14ba34a08;
      *(undefined4 *)(puVar17 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar17 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_e0._4_4_;
      puVar17[4] = uStack_d8;
      puVar17[5] = local_d0;
      puVar17[6] = plStack_c8;
    }
    plVar15 = *(longlong **)(param_1 + 0x218);
    uVar16 = 1;
  }
  uVar8 = *(undefined8 *)(plVar15[6] + 0x10);
  local_118 = 1;
  FUN_1485f954d(param_2,uVar8,0,4);
  FUN_1485f95c4(param_2,uVar8);
  local_e8 = *(longlong **)(param_1 + 0x1d8);
  uStack_e0 = (undefined8 *)local_100;
  uStack_d8 = local_108;
  local_b8 = local_110;
  local_98 = *(longlong *)(param_1 + 0x220);
  local_90 = *(longlong **)(param_1 + 0x228);
  if (local_90 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_90 + 1) = (int)local_90[1] + 1;
    UNLOCK();
  }
  local_d0 = lVar3;
  plStack_c8 = (longlong *)uVar12;
  local_c0 = uVar4;
  local_b0 = uVar5;
  local_a8 = uVar6;
  local_a0 = uVar16;
  if (*(char *)((longlong)param_2 + 100) == '\0') {
    puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar17 + 0xe;
    if ((undefined8 *)param_2[1] < puVar14) {
      FUN_140023dd8(param_2,0x78);
      puVar17 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar17 + 0xe;
    }
    *param_2 = (ulonglong)puVar14;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar17;
    param_2[6] = (ulonglong)(puVar17 + 1);
    puVar17[1] = 0;
    *puVar17 = &PTR_FUN_14ba34a10;
    puVar17[2] = local_e8;
    *(undefined4 *)(puVar17 + 3) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = uStack_e0._4_4_;
    *(int *)(puVar17 + 4) = (int)uStack_d8;
    *(undefined4 *)((longlong)puVar17 + 0x24) = uStack_d8._4_4_;
    puVar17[5] = local_d0;
    puVar17[6] = plStack_c8;
    puVar17[7] = local_c0;
    puVar17[8] = local_b8;
    puVar17[9] = local_b0;
    puVar17[10] = local_a8;
    *(uint *)(puVar17 + 0xb) = local_a0;
    puVar17[0xc] = local_98;
    puVar17[0xd] = local_90;
  }
  else {
    (**(code **)(*local_e8 + 0x20))(local_e8,&uStack_e0,param_2,*(undefined8 *)(local_98 + 8));
    plVar15 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_90)(local_90);
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
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437a49e FUN_14437a49e body=179 status=ok
// SIG undefined FUN_14437a49e(void)

void FUN_14437a49e(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))
                    (*(longlong **)(param_1 + 0x10),param_1 + 0x18,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 8));
  if (iVar4 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    local_28 = *(longlong *)(param_1 + 0x28);
    local_20 = *(longlong *)(param_1 + 0x30);
    lVar5 = local_28;
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
      lVar5 = *(longlong *)(param_1 + 0x28);
    }
    FUN_144377aec(uVar2,*(undefined8 *)(lVar5 + 8),&local_28,param_1 + 0x18);
  }
  puVar3 = *(undefined8 **)(param_1 + 0x30);
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437a562 FUN_14437a562 body=84 status=ok
// SIG undefined FUN_14437a562(void)

void FUN_14437a562(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x20))
            (*(longlong **)(param_1 + 0x10),param_1 + 0x18,param_2,
             *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8));
  plVar3 = *(longlong **)(param_1 + 0x68);
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
                    /* WARNING: Could not recover jumptable at 0x00014437a5ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14437a5c2 FUN_14437a5c2 body=29 status=ok
// SIG undefined FUN_14437a5c2(void)

undefined8 FUN_14437a5c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14437a5f4 FUN_14437a5f4 body=93 status=ok
// SIG undefined FUN_14437a5f4(void)

void FUN_14437a5f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba34a80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14437a652 FUN_14437a652 body=93 status=ok
// SIG undefined FUN_14437a652(void)

void FUN_14437a652(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ba34a80;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14437a6b0 FUN_14437a6b0 body=126 status=ok
// SIG undefined FUN_14437a6b0(void)

void FUN_14437a6b0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ba34a80;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014437a71f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14437a72e FUN_14437a72e body=59 status=ok
// SIG undefined FUN_14437a72e(void)

void FUN_14437a72e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14437a7a8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437a76a FUN_14437a76a body=61 status=ok
// SIG undefined FUN_14437a76a(void)

undefined8 FUN_14437a76a(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14437a7a8();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437a7a8 FUN_14437a7a8 body=105 status=ok
// SIG undefined FUN_14437a7a8(void)

void FUN_14437a7a8(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  plVar1 = (longlong *)*param_1;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar3 = (**(code **)(*DAT_14c8407a8 + 200))
                    (DAT_14c8407a8,L"r.EyeAdaptation.PreExposureOverride",1);
  cVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1);
  uVar4 = 0;
  if (cVar2 == '\0') {
    uVar4 = 0x3f800000;
  }
  FUN_140635f48(uVar3,uVar4,0xd000000,0);
  return;
}



// FUNCTION 14437a811 FUN_14437a811 body=799 status=ok
// SIG undefined FUN_14437a811(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14437a811(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_14282b410(L"/Script/XeSSCore",&PTR_FUN_14ba33da0,1,0);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cbf4250);
  if (cVar1 == '\0') {
    _DAT_14cbf4250 = 0;
    uRam000000014cbf4258 = 0;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_58 = local_58 & 0xffffffffffffff00;
  local_78._0_4_ = 4;
  FUN_140bd5914(&DAT_14cbf4260,L"r.XeSS.ModuleDisabled",&local_58,
                L"If XeSS module(s) are disabled via command line option -XeSSDisabled.");
  atexit(FUN_144376ac8);
  local_58 = local_58 & 0xffffffffffffff00;
  local_78._0_4_ = 4;
  FUN_140bd5914(&DAT_14cbf4278,L"r.XeSS.Supported",&local_58,L"If XeSS is supported.");
  atexit(FUN_144376b0d);
  FUN_140056680(&local_58,L"Unknown");
  local_78 = CONCAT44(local_78._4_4_,4);
  FUN_140f510cc(&DAT_14cbf4290,L"r.XeSS.Version",&local_58,L"Version of XeSS SDK.");
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  atexit(FUN_144376b52);
  DAT_14cbf42a8 = 0;
  atexit((_func_5014 *)&LAB_144376b97);
  DAT_14cbf42b0 = 0;
  atexit((_func_5014 *)&LAB_144376ba8);
  _DAT_14cbf42b8 = 0;
  DAT_14cbf42c0 = 0;
  atexit(FUN_144376bc3);
  local_58 = 0x800000014ba33f6c;
  local_44 = 8;
  local_50 = FUN_14577453c();
  local_4c = 1;
  FUN_14666a628(&local_58);
  local_58._0_4_ = 1;
  local_78._0_4_ = 4;
  FUN_14078dbce(&DAT_14cbf42d0,L"r.XeSS.LogLevel",&local_58,
                L"[default: 1] Minimum log level of XeSS SDK, set it via command line -XeSSLogLevel=\n 0: Debug\n 1: Info\n 2: Warning\n 3: Error\n Other values: Logging disabled"
               );
  atexit(FUN_144377412);
  local_58._0_4_ = 0x42c80000;
  local_78._0_4_ = 4;
  FUN_140a6b41e(&DAT_14cbf42e8,L"r.XeSS.OptimalScreenPercentage",&local_58,
                L"Optimal screen percentage for current XeSS quality.");
  atexit(FUN_144377457);
  local_58._0_4_ = 1;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cbf4300,L"r.XeSS.AutoExposure",&local_58,
                L"[default: 1] Use XeSS internal auto exposure.");
  atexit(FUN_14437749c);
  local_58._0_4_ = 0;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cbf4378,L"r.XeSS.Enabled",&local_58,
                L"[default: 0] Set to 1 to use XeSS instead of TAAU or any other upscaling method.")
  ;
  atexit(FUN_144377b92);
  local_58._0_4_ = 2;
  local_78._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14cbf4390,L"r.XeSS.Quality",&local_58,
                L"[default: 2] Set XeSS quality setting\n 0: Ultra Performance\n 1: Performance\n 2: Balanced\n 3: Quality\n 4: Ultra Quality\n 5: Ultra Quality Plus\n 6: Anti-Aliasing"
               );
  atexit(FUN_144377bd7);
  local_58 = CONCAT44(local_58._4_4_,1);
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  FUN_14078dbce(&DAT_14cbf43a8,L"r.XeSS.Experimental.PreExposure",&local_58,
                L"[default: 1] Whether to enable pre-exposure. It just unifies commands across different Unreal versions."
               );
  atexit(FUN_144377c1c);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437ab34 FUN_14437ab34 body=112 status=ok
// SIG undefined FUN_14437ab34(void)

void FUN_14437ab34(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  local_14 = param_2[1];
  local_c = param_2[3];
  local_10 = 0x66;
  if ((uint)param_2[2] < 7) {
    local_10 = param_2[2] + 100;
  }
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x60))(param_3,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437aba6 FUN_14437aba6 body=327 status=ok
// SIG undefined FUN_14437aba6(void)

void FUN_14437aba6(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uVar1 = *param_2;
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  local_a8 = (**(code **)(*plVar2 + 0x550))(plVar2,uVar1);
  uVar1 = param_2[1];
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  local_a0 = (**(code **)(*plVar2 + 0x550))(plVar2,uVar1);
  uVar1 = param_2[2];
  plVar2 = (longlong *)(**(code **)(*DAT_14ca83900 + 0x30))();
  uStack_80 = (**(code **)(*plVar2 + 0x550))(plVar2,uVar1);
  local_78 = param_2[3];
  uStack_60 = param_2[4];
  local_68 = CONCAT44(*(int *)((longlong)param_2 + 0x2c) - *(int *)((longlong)param_2 + 0x24),
                      *(int *)(param_2 + 5) - *(int *)(param_2 + 4));
  local_38 = *(undefined4 *)(param_2 + 6);
  local_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_70 = CONCAT44(*(undefined4 *)(param_2 + 8),0x3f800000);
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x58))(param_4,&local_a8);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14437acf6 FUN_14437acf6 body=102 status=ok
// SIG undefined FUN_14437acf6(void)

void FUN_14437acf6(void)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0x800000014ba34b28;
  local_14 = 0xc;
  local_20 = FUN_14577453c();
  local_1c = 1;
  FUN_14666a818(&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


