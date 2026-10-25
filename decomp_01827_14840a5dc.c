// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14840a5dc FUN_14840a5dc body=101 status=ok
// SIG undefined FUN_14840a5dc(void)

void FUN_14840a5dc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aea06d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14840a642 FUN_14840a642 body=134 status=ok
// SIG undefined FUN_14840a642(void)

void FUN_14840a642(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aea06d0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014840a6b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14840a6c8 FUN_14840a6c8 body=44 status=ok
// SIG undefined FUN_14840a6c8(void)

void FUN_14840a6c8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014840a6f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,*(code **)(param_1 + 0x20))
  ;
  return;
}



// FUNCTION 14840a6f4 FUN_14840a6f4 body=144 status=ok
// SIG undefined FUN_14840a6f4(void)

bool FUN_14840a6f4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840a786 FUN_14840a786 body=31 status=ok
// SIG undefined FUN_14840a786(void)

undefined8 FUN_14840a786(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14840a7c0 FUN_14840a7c0 body=26 status=ok
// SIG undefined FUN_14840a7c0(void)

bool FUN_14840a7c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14840a7da FUN_14840a7da body=101 status=ok
// SIG undefined FUN_14840a7da(void)

void FUN_14840a7da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aea07b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aea0740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14840a840 FUN_14840a840 body=101 status=ok
// SIG undefined FUN_14840a840(void)

void FUN_14840a840(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aea07b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aea0740;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14840a8a6 FUN_14840a8a6 body=134 status=ok
// SIG undefined FUN_14840a8a6(void)

void FUN_14840a8a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aea07b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aea0740;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014840a91d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14840a92c FUN_14840a92c body=106 status=ok
// SIG undefined FUN_14840a92c(void)

void FUN_14840a92c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  local_28 = *(undefined8 *)(param_2 + 4);
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,&local_38,param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840a99a FUN_14840a99a body=595 status=ok
// SIG undefined FUN_14840a99a(void)

undefined4 * FUN_14840a99a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  void *_Src;
  undefined2 *puVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  uint local_78;
  int iStack_74;
  uint uStack_70;
  int iStack_6c;
  undefined2 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14840abee(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  FUN_14840adfc(local_48,*param_3);
  *(undefined4 *)(local_48 + 5) = *puVar1;
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  local_80 = *local_48;
  local_78 = *(uint *)(local_48 + 1);
  iStack_74 = *(int *)((longlong)local_48 + 0xc);
  uStack_70 = *(uint *)(local_48 + 2);
  iStack_6c = *(int *)((longlong)local_48 + 0x14);
  local_68 = (undefined2 *)0x0;
  local_60 = *(int *)(local_48 + 4);
  lVar10 = (longlong)local_60;
  _Src = (void *)local_48[3];
  if (lVar10 == 0) {
    local_5c = 0;
  }
  else {
    FUN_1446dd670(&local_68,local_60,0);
    memcpy(local_68,_Src,lVar10 * 2);
  }
  uVar7 = (uint)(CONCAT44(iStack_6c,uStack_70) >> 0x10);
  uVar4 = (uint)(CONCAT44(iStack_74,local_78) >> 0x10);
  uVar4 = (local_78 << 0x10 | local_78 & 0xffff) + iStack_74 + (uVar4 << 0x13 | uVar4 & 0xffff) +
          ((local_78 & 0xffff) >> 4);
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          (uStack_70 << 0x10 | uStack_70 & 0xffff) + iStack_6c +
                          (uVar7 << 0x13 | uVar7 & 0xffff) + ((uStack_70 & 0xffff) >> 4) +
                          uVar4 * 0x40 + 0x9e3779b9 ^ uVar4);
  iVar9 = local_60 + -1;
  puVar2 = local_68;
  if (local_60 == 0) {
    iVar9 = 0;
    puVar2 = &DAT_149dfb77a;
  }
  uVar6 = FUN_144a49b4a(iVar9,puVar2);
  uVar7 = FUN_144a78877(uVar5,uVar6);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  cVar3 = FUN_14840acd0(param_1,uVar7,local_48,&local_54);
  uVar5 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar4) {
      uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_48 + 0x34) = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14840b14a(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840abee FUN_14840abee body=226 status=ok
// SIG undefined FUN_14840abee(void)

int * FUN_14840abee(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 14840acd0 FUN_14840acd0 body=298 status=ok
// SIG undefined FUN_14840acd0(void)

undefined8 FUN_14840acd0(longlong *param_1,undefined4 param_2,undefined8 *param_3,int *param_4)

{
  undefined4 *puVar1;
  void *_Src;
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
  undefined4 uVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_68 = *param_3;
    local_60 = *(undefined4 *)(param_3 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    uStack_58 = *(undefined4 *)(param_3 + 2);
    uStack_54 = *(undefined4 *)((longlong)param_3 + 0x14);
    local_50 = (void *)0x0;
    local_48 = *(int *)(param_3 + 4);
    lVar15 = (longlong)local_48;
    _Src = (void *)param_3[3];
    if (lVar15 == 0) {
      local_44 = 0;
    }
    else {
      FUN_1446dd670(&local_50,local_48,0);
      memcpy(local_50,_Src,lVar15 * 2);
    }
    iVar13 = FUN_14840af36(param_1,param_2,&local_68);
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (iVar13 != -1) {
      puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar13 * 0x38) != 0) {
        FUN_1400020a8();
      }
      uVar2 = *(undefined4 *)param_3;
      uVar3 = *(undefined4 *)((longlong)param_3 + 4);
      uVar4 = *(undefined4 *)(param_3 + 1);
      uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
      uVar6 = *(undefined4 *)(param_3 + 2);
      uVar7 = *(undefined4 *)((longlong)param_3 + 0x14);
      uVar8 = *(undefined4 *)(param_3 + 3);
      uVar9 = *(undefined4 *)((longlong)param_3 + 0x1c);
      uVar10 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar11 = *(undefined4 *)(param_3 + 5);
      uVar12 = *(undefined4 *)((longlong)param_3 + 0x2c);
      puVar1[8] = *(undefined4 *)(param_3 + 4);
      puVar1[9] = uVar10;
      puVar1[10] = uVar11;
      puVar1[0xb] = uVar12;
      puVar1[4] = uVar6;
      puVar1[5] = uVar7;
      puVar1[6] = uVar8;
      puVar1[7] = uVar9;
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      FUN_14840b0d6(param_1,*param_4);
      *param_4 = iVar13;
      uVar14 = 1;
      goto LAB_14840acfa;
    }
  }
  uVar14 = 0;
LAB_14840acfa:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840adfc FUN_14840adfc body=313 status=ok
// SIG undefined FUN_14840adfc(void)

undefined8 * FUN_14840adfc(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_2;
  plVar1 = param_1 + 3;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  FUN_1446f8bcc(plVar1,0);
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1446f8bcc(plVar1,0);
  }
  else {
    FUN_1400bbfae(&local_60,lVar3);
    *(undefined4 *)(param_1 + 1) = local_60;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_5c;
    *(undefined4 *)(param_1 + 2) = uStack_58;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_54;
    if (param_1 + 1 == (undefined8 *)&local_60) {
      if (local_50 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_50;
      local_50 = 0;
      *(undefined4 *)(param_1 + 4) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_44;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar2 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_14840af0b;
      }
    }
    FUN_14485c47a(param_1,lVar3);
  }
LAB_14840af0b:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840af36 FUN_14840af36 body=415 status=ok
// SIG undefined FUN_14840af36(void)

int FUN_14840af36(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        local_70 = *param_3;
        local_68 = *(undefined4 *)(param_3 + 1);
        uStack_64 = *(undefined4 *)((longlong)param_3 + 0xc);
        uStack_60 = *(undefined4 *)(param_3 + 2);
        uStack_5c = *(undefined4 *)((longlong)param_3 + 0x14);
        local_58 = (void *)0x0;
        local_50 = *(int *)(param_3 + 4);
        lVar6 = (longlong)local_50;
        pvVar2 = (void *)param_3[3];
        if (lVar6 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar2,lVar6 * 2);
        }
        lVar6 = *param_1;
        lVar8 = (longlong)iVar5 * 0x38;
        local_98 = *(undefined8 *)(lVar6 + lVar8);
        puVar1 = (undefined4 *)(lVar6 + 8 + lVar8);
        local_90 = *puVar1;
        uStack_8c = puVar1[1];
        uStack_88 = puVar1[2];
        uStack_84 = puVar1[3];
        local_80 = (void *)0x0;
        local_78 = *(int *)(lVar6 + 0x20 + lVar8);
        lVar7 = (longlong)local_78;
        pvVar2 = *(void **)(lVar6 + 0x18 + lVar8);
        if (lVar7 == 0) {
          local_74 = 0;
        }
        else {
          FUN_1446dd670(&local_80,local_78,0);
          memcpy(local_80,pvVar2,lVar7 * 2);
        }
        cVar3 = FUN_144a7afa6(&local_90,&local_68);
        if (local_80 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') goto LAB_14840af62;
        iVar5 = *(int *)(*param_1 + 0x30 + lVar8);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_14840af62:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 14840b0d6 FUN_14840b0d6 body=116 status=ok
// SIG undefined FUN_14840b0d6(void)

void FUN_14840b0d6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14840b14a FUN_14840b14a body=736 status=ok
// SIG undefined FUN_14840b14a(void)

void FUN_14840b14a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  longlong lStack_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    lStack_60 = 0xffffffff;
    local_58 = (undefined2 *)((ulonglong)local_58 & 0xffffffff00000000);
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_90 = local_70;
    local_88 = local_68;
    local_80 = lStack_60;
    local_78 = (undefined4)local_58;
    local_74 = local_58._4_4_;
    local_98 = param_1;
    while (iVar4 = local_80._4_4_, local_80._4_4_ < (int)local_88[3]) {
      lVar3 = *local_98;
      lVar14 = (longlong)local_80._4_4_ * 0x38;
      local_70 = *(undefined8 *)(lVar3 + lVar14);
      plVar8 = (longlong *)(lVar3 + 8 + lVar14);
      local_68 = (longlong *)*plVar8;
      lStack_60 = plVar8[1];
      local_58 = (undefined2 *)0x0;
      local_50 = *(int *)(lVar3 + 0x20 + lVar14);
      lVar15 = (longlong)local_50;
      _Src = *(void **)(lVar3 + 0x18 + lVar14);
      if (lVar15 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_50,0);
        memcpy(local_58,_Src,lVar15 * 2);
      }
      uVar2 = (uint)((ulonglong)lStack_60 >> 0x10);
      uVar13 = (uint)lStack_60 & 0xffff;
      uVar11 = (uint)((ulonglong)local_68 >> 0x10);
      uVar12 = (uint)local_68 & 0xffff;
      uVar11 = ((uint)local_68 << 0x10 | uVar12) + (int)((ulonglong)local_68 >> 0x20) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar12 >> 4);
      uVar5 = FUN_144a78877(0,(uVar11 >> 2) +
                              ((uint)lStack_60 << 0x10 | uVar13) +
                              (int)((ulonglong)lStack_60 >> 0x20) + (uVar2 << 0x13 | uVar2 & 0xffff)
                              + (uVar13 >> 4) + uVar11 * 0x40 + 0x9e3779b9 ^ uVar11);
      puVar10 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar10 = local_58;
      }
      iVar7 = local_50 + -1;
      if (local_50 == 0) {
        iVar7 = 0;
      }
      uVar6 = FUN_144a49b4a(iVar7,puVar10);
      iVar7 = FUN_144a78877(uVar5,uVar6);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar9 = (longlong)iVar7 & (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar9;
      *(int *)(lVar3 + lVar14 + 0x34) = iVar7;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar3 + lVar14 + 0x30) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
      FUN_1449c0562(&local_90);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14840b42c FUN_14840b42c body=135 status=ok
// SIG undefined FUN_14840b42c(void)

void FUN_14840b42c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x3a8);
  if (param_2 <= (int)uVar1) {
    iVar6 = 4;
    if (4 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x3ac)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xe8,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 3;
      iVar5 = SUB164(auVar2 * ZEXT816(0x8d3dcb08d3dcb09),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x3ac) = iVar6;
    FUN_14840b4b4(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14840b4b4 FUN_14840b4b4 body=147 status=ok
// SIG undefined FUN_14840b4b4(void)

void FUN_14840b4b4(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x3a0);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xe8);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x3a0,0,param_3,0xe8);
    memmove(*(void **)((longlong)param_1 + 0x3a0),param_1,(longlong)param_2 * 0xe8);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x3a0,param_2,param_3,0xe8);
  return;
}



// FUNCTION 14840b548 FUN_14840b548 body=100 status=ok
// SIG undefined FUN_14840b548(void)

undefined8 * FUN_14840b548(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_1474409b8((longlong)puVar1 + 4,param_1,L"QuadTreePosition",0);
  FUN_1474409b8((longlong)puVar1 + 10,param_1,L"bLODMorphingEnabled",0);
  return puVar1;
}



// FUNCTION 14840b5ac FUN_14840b5ac body=1312 status=ok
// SIG undefined FUN_14840b5ac(void)

void FUN_14840b5ac(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,uint *param_7)

{
  byte *pbVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  short *psVar11;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pbVar1 = *(byte **)(param_5 + 0x38);
  lVar7 = *(longlong *)(param_4 + 0x140 + (ulonglong)*pbVar1 * 8);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  FUN_1415c0876();
  uVar8 = *(ulonglong *)(param_3 + 0xa0);
  uVar9 = param_3 + 0xa0 + ((longlong)uVar8 >> 0x18);
  if ((uVar8 & 1) == 0) {
    uVar9 = uVar8;
  }
  if (0 < (longlong)*(int *)(param_3 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar6 * 4) == DAT_14cb499f8) {
        uVar8 = *(ulonglong *)(param_3 + 0xb0);
        uVar9 = param_3 + 0xb0 + ((longlong)uVar8 >> 0x18);
        if ((uVar8 & 1) == 0) {
          uVar9 = uVar8;
        }
        psVar11 = (short *)(uVar9 + lVar6);
        goto LAB_14840b674;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_3 + 0xa8) * 2 != lVar6);
  }
  psVar11 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_14840b674:
  if (*psVar11 != -1) {
    FUN_144b11088(param_6,lVar7);
  }
  if (lVar7 != 0) {
    LOCK();
    puVar10 = (uint *)(lVar7 + 8);
    uVar4 = *puVar10;
    *puVar10 = *puVar10 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar7);
    }
  }
  cVar3 = FUN_144a7ebcb();
  if (cVar3 != '\0') {
    uVar2 = *(undefined8 *)(pbVar1 + 0x10);
    FUN_145e39770();
    uVar8 = *(ulonglong *)(param_3 + 0xa0);
    uVar9 = ((longlong)uVar8 >> 0x18) + param_3 + 0xa0;
    if ((uVar8 & 1) == 0) {
      uVar9 = uVar8;
    }
    if (0 < (longlong)*(int *)(param_3 + 0xa8)) {
      lVar7 = 0;
      do {
        if (*(longlong *)(uVar9 + lVar7 * 4) == DAT_14cb49a90) {
          uVar8 = *(ulonglong *)(param_3 + 0xb0);
          uVar9 = param_3 + 0xb0 + ((longlong)uVar8 >> 0x18);
          if ((uVar8 & 1) == 0) {
            uVar9 = uVar8;
          }
          psVar11 = (short *)(uVar9 + lVar7);
          goto LAB_14840b747;
        }
        lVar7 = lVar7 + 2;
      } while ((longlong)*(int *)(param_3 + 0xa8) * 2 != lVar7);
    }
    psVar11 = &DAT_14c9c45cc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
LAB_14840b747:
    if (*psVar11 != -1) {
      FUN_144b11088(param_6,uVar2);
    }
  }
  if (*(char *)(param_2 + 0x23f2) == '\x01') {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_5 + 0x70));
    local_6c = *(undefined4 *)(param_2 + 0x3094);
    if ((*(uint *)(param_1 + 0x10) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x38),*(uint *)(param_1 + 0x10) & 0xffff);
    }
    if ((*(uint *)(param_1 + 0x14) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x40),*(uint *)(param_1 + 0x14) & 0xffff);
    }
    if ((*(uint *)(param_1 + 0x18) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x48),*(uint *)(param_1 + 0x18) & 0xffff);
    }
    if ((*(uint *)(param_1 + 0x1c) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x50),*(uint *)(param_1 + 0x1c) & 0xffff);
    }
    local_70 = *(undefined2 *)(param_1 + 0x28);
    local_74 = *(undefined4 *)(param_1 + 0x24);
    FUN_144b10d64(param_6,&local_74,&local_68);
    local_78 = *(undefined2 *)(param_1 + 0x2e);
    local_7c = *(undefined4 *)(param_1 + 0x2a);
    FUN_144b10d64(param_6,&local_7c,&local_6c);
  }
  else if (0 < (int)param_7[0x18]) {
    local_68 = *(undefined8 *)(pbVar1 + 0x18);
    local_60 = *(undefined8 *)(pbVar1 + 0x20);
    local_58 = *(undefined8 *)(pbVar1 + 0x28);
    local_50 = *(undefined8 *)(pbVar1 + 0x30);
    uVar8 = 0;
    do {
      puVar10 = *(uint **)(param_7 + 0x16);
      if (*(uint **)(param_7 + 0x16) == (uint *)0x0) {
        puVar10 = param_7;
      }
      uVar9 = uVar8 + 1;
      if ((longlong)(int)param_7[0x18] != 0) {
        lVar7 = (longlong)(int)param_7[0x18] * 0xc;
        do {
          if (uVar9 == (*puVar10 & 0xf)) goto LAB_14840b990;
          puVar10 = puVar10 + 3;
          lVar7 = lVar7 + -0xc;
        } while (lVar7 != 0);
      }
      puVar10 = (uint *)0x0;
LAB_14840b990:
      *(undefined8 *)(puVar10 + 1) = (&local_68)[uVar8];
      uVar8 = uVar9;
    } while (uVar9 != 3);
  }
  local_68 = CONCAT44((float)(*(double *)(param_2 + 0x1038) + *(double *)(param_4 + 0x150)),
                      (float)(*(double *)(param_2 + 0x1030) + *(double *)(param_4 + 0x148)));
  local_60 = CONCAT44(local_60._4_4_,
                      (float)(*(double *)(param_2 + 0x1040) + *(double *)(param_4 + 0x158)));
  local_84 = *(undefined4 *)(param_1 + 4);
  local_80 = *(undefined2 *)(param_1 + 8);
  FUN_1471da628(param_6);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb4a2d8) && (FUN_144b3d300(&DAT_14cb4a2d8), DAT_14cb4a2d8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Water.WaterMesh.LODMorphEnabled",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14cb4a2d0 = 0;
    }
    else {
      DAT_14cb4a2d0 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14cb4a2d8);
  }
  uVar4 = 0;
  if (DAT_14cb4a2d0 != 0) {
    uVar4 = (uint)(*(int *)(DAT_14cb4a2d0 + 4) != 0);
  }
  local_68 = CONCAT44(local_68._4_4_,uVar4);
  local_8c = *(undefined4 *)(param_1 + 10);
  local_88 = *(undefined2 *)(param_1 + 0xe);
  FUN_144b13bec(param_6);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14840bace FUN_14840bace body=62 status=ok
// SIG undefined FUN_14840bace(void)

undefined8 * FUN_14840bace(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  FUN_14840bb0c(puVar1,param_1);
  return puVar1;
}



// FUNCTION 14840bb0c FUN_14840bb0c body=194 status=ok
// SIG undefined FUN_14840bb0c(void)

void FUN_14840bb0c(longlong param_1,undefined8 param_2)

{
  FUN_1474409b8(param_1 + 4,param_2,L"QuadTreePosition",0);
  FUN_1474409b8(param_1 + 10,param_2,L"bLODMorphingEnabled",0);
  FUN_147440a6c(param_1 + 0x10,param_2,L"InstanceDataOffsetsBuffer",0);
  FUN_147440a6c(param_1 + 0x14,param_2,L"InstanceData0Buffer",0);
  FUN_147440a6c(param_1 + 0x18,param_2,L"InstanceData1Buffer",0);
  FUN_147440a6c(param_1 + 0x1c,param_2,L"InstanceData2Buffer",0);
  FUN_1474409b8(param_1 + 0x24,param_2,L"DrawBucketIndex",0);
  FUN_1474409b8(param_1 + 0x2a,param_2,L"StereoPassInstanceFactor",0);
  return;
}



// FUNCTION 14840bbce FUN_14840bbce body=1312 status=ok
// SIG undefined FUN_14840bbce(void)

void FUN_14840bbce(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,uint *param_7)

{
  byte *pbVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  short *psVar11;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined2 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pbVar1 = *(byte **)(param_5 + 0x38);
  lVar7 = *(longlong *)(param_4 + 0x140 + (ulonglong)*pbVar1 * 8);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  FUN_1415c0876();
  uVar8 = *(ulonglong *)(param_3 + 0xa0);
  uVar9 = param_3 + 0xa0 + ((longlong)uVar8 >> 0x18);
  if ((uVar8 & 1) == 0) {
    uVar9 = uVar8;
  }
  if (0 < (longlong)*(int *)(param_3 + 0xa8)) {
    lVar6 = 0;
    do {
      if (*(longlong *)(uVar9 + lVar6 * 4) == DAT_14cb499f8) {
        uVar8 = *(ulonglong *)(param_3 + 0xb0);
        uVar9 = param_3 + 0xb0 + ((longlong)uVar8 >> 0x18);
        if ((uVar8 & 1) == 0) {
          uVar9 = uVar8;
        }
        psVar11 = (short *)(uVar9 + lVar6);
        goto LAB_14840bc96;
      }
      lVar6 = lVar6 + 2;
    } while ((longlong)*(int *)(param_3 + 0xa8) * 2 != lVar6);
  }
  psVar11 = &DAT_14c9c45cc;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
    DAT_14c9c45cc = 0xffff;
    _Init_thread_footer(&DAT_14c9c45d0);
  }
LAB_14840bc96:
  if (*psVar11 != -1) {
    FUN_144b11088(param_6,lVar7);
  }
  if (lVar7 != 0) {
    LOCK();
    puVar10 = (uint *)(lVar7 + 8);
    uVar4 = *puVar10;
    *puVar10 = *puVar10 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812(lVar7);
    }
  }
  cVar3 = FUN_144a7ebcb();
  if (cVar3 != '\0') {
    uVar2 = *(undefined8 *)(pbVar1 + 0x10);
    FUN_145e39770();
    uVar8 = *(ulonglong *)(param_3 + 0xa0);
    uVar9 = ((longlong)uVar8 >> 0x18) + param_3 + 0xa0;
    if ((uVar8 & 1) == 0) {
      uVar9 = uVar8;
    }
    if (0 < (longlong)*(int *)(param_3 + 0xa8)) {
      lVar7 = 0;
      do {
        if (*(longlong *)(uVar9 + lVar7 * 4) == DAT_14cb49a90) {
          uVar8 = *(ulonglong *)(param_3 + 0xb0);
          uVar9 = param_3 + 0xb0 + ((longlong)uVar8 >> 0x18);
          if ((uVar8 & 1) == 0) {
            uVar9 = uVar8;
          }
          psVar11 = (short *)(uVar9 + lVar7);
          goto LAB_14840bd69;
        }
        lVar7 = lVar7 + 2;
      } while ((longlong)*(int *)(param_3 + 0xa8) * 2 != lVar7);
    }
    psVar11 = &DAT_14c9c45cc;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9c45d0) && (FUN_144b3d300(&DAT_14c9c45d0), DAT_14c9c45d0 == -1)) {
      DAT_14c9c45cc = 0xffff;
      _Init_thread_footer(&DAT_14c9c45d0);
    }
LAB_14840bd69:
    if (*psVar11 != -1) {
      FUN_144b11088(param_6,uVar2);
    }
  }
  if (*(char *)(param_2 + 0x23f2) == '\x01') {
    local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_5 + 0x70));
    local_6c = *(undefined4 *)(param_2 + 0x3094);
    if ((*(uint *)(param_1 + 0x10) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x38),*(uint *)(param_1 + 0x10) & 0xffff);
    }
    if ((*(uint *)(param_1 + 0x14) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x40),*(uint *)(param_1 + 0x14) & 0xffff);
    }
    if ((*(uint *)(param_1 + 0x18) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x48),*(uint *)(param_1 + 0x18) & 0xffff);
    }
    if ((*(uint *)(param_1 + 0x1c) & 0xff0000) != 0) {
      FUN_147511800(param_6,*(undefined8 *)(pbVar1 + 0x50),*(uint *)(param_1 + 0x1c) & 0xffff);
    }
    local_70 = *(undefined2 *)(param_1 + 0x28);
    local_74 = *(undefined4 *)(param_1 + 0x24);
    FUN_144b10d64(param_6,&local_74,&local_68);
    local_78 = *(undefined2 *)(param_1 + 0x2e);
    local_7c = *(undefined4 *)(param_1 + 0x2a);
    FUN_144b10d64(param_6,&local_7c,&local_6c);
  }
  else if (0 < (int)param_7[0x18]) {
    local_68 = *(undefined8 *)(pbVar1 + 0x18);
    local_60 = *(undefined8 *)(pbVar1 + 0x20);
    local_58 = *(undefined8 *)(pbVar1 + 0x28);
    local_50 = *(undefined8 *)(pbVar1 + 0x30);
    uVar8 = 0;
    do {
      puVar10 = *(uint **)(param_7 + 0x16);
      if (*(uint **)(param_7 + 0x16) == (uint *)0x0) {
        puVar10 = param_7;
      }
      uVar9 = uVar8 + 1;
      if ((longlong)(int)param_7[0x18] != 0) {
        lVar7 = (longlong)(int)param_7[0x18] * 0xc;
        do {
          if (uVar9 == (*puVar10 & 0xf)) goto LAB_14840bfb2;
          puVar10 = puVar10 + 3;
          lVar7 = lVar7 + -0xc;
        } while (lVar7 != 0);
      }
      puVar10 = (uint *)0x0;
LAB_14840bfb2:
      *(undefined8 *)(puVar10 + 1) = (&local_68)[uVar8];
      uVar8 = uVar9;
    } while (uVar9 != 3);
  }
  local_68 = CONCAT44((float)(*(double *)(param_2 + 0x1038) + *(double *)(param_4 + 0x150)),
                      (float)(*(double *)(param_2 + 0x1030) + *(double *)(param_4 + 0x148)));
  local_60 = CONCAT44(local_60._4_4_,
                      (float)(*(double *)(param_2 + 0x1040) + *(double *)(param_4 + 0x158)));
  local_84 = *(undefined4 *)(param_1 + 4);
  local_80 = *(undefined2 *)(param_1 + 8);
  FUN_1471da628(param_6);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb4a4c8) && (FUN_144b3d300(&DAT_14cb4a4c8), DAT_14cb4a4c8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))
                       (DAT_14c8407a8,L"r.Water.WaterMesh.LODMorphEnabled",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14cb4a4c0 = 0;
    }
    else {
      DAT_14cb4a4c0 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14cb4a4c8);
  }
  uVar4 = 0;
  if (DAT_14cb4a4c0 != 0) {
    uVar4 = (uint)(*(int *)(DAT_14cb4a4c0 + 4) != 0);
  }
  local_68 = CONCAT44(local_68._4_4_,uVar4);
  local_8c = *(undefined4 *)(param_1 + 10);
  local_88 = *(undefined2 *)(param_1 + 0xe);
  FUN_144b13bec(param_6);
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14840c0f0 FUN_14840c0f0 body=114 status=ok
// SIG undefined FUN_14840c0f0(void)

void FUN_14840c0f0(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14840c162 FUN_14840c162 body=478 status=ok
// SIG undefined FUN_14840c162(void)

void FUN_14840c162(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x50;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x4c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x48 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14840c342 FUN_14840c342 body=331 status=ok
// SIG undefined FUN_14840c342(void)

undefined4 * FUN_14840c342(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14840c48e(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(ulonglong *)*param_3;
  FUN_14840c632(local_40 + 1,uVar1);
  *(undefined4 *)(local_40 + 9) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(*local_40 >> 0x14) & 0xffff ^ (uint)(*local_40 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_14840c57c(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x4c) = uVar4;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 9) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14840c162(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840c48e FUN_14840c48e body=238 status=ok
// SIG undefined FUN_14840c48e(void)

int * FUN_14840c48e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1406fba42(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x50);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x50) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x50 + *param_1;
  return param_2;
}



// FUNCTION 14840c57c FUN_14840c57c body=181 status=ok
// SIG undefined FUN_14840c57c(void)

undefined8 FUN_14840c57c(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x50);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x50) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x30) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)((longlong)_Dst + 0x20) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x48);
          FUN_14840c6f6(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x48);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14840c632 FUN_14840c632 body=195 status=ok
// SIG undefined FUN_14840c632(void)

undefined4 * FUN_14840c632(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1483e9a7c(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 << 3);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_140306928(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 << 3);
  }
  param_1[0xe] = param_2[0xe];
  return param_1;
}



// FUNCTION 14840c6f6 FUN_14840c6f6 body=122 status=ok
// SIG undefined FUN_14840c6f6(void)

void FUN_14840c6f6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 14840c78a FUN_14840c78a body=93 status=ok
// SIG undefined FUN_14840c78a(void)

void FUN_14840c78a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aea0c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14840c7e8 FUN_14840c7e8 body=93 status=ok
// SIG undefined FUN_14840c7e8(void)

void FUN_14840c7e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca6c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14aea0c90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14840c846 FUN_14840c846 body=126 status=ok
// SIG undefined FUN_14840c846(void)

void FUN_14840c846(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca6c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14aea0c90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014840c8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14840c8c4 FUN_14840c8c4 body=48 status=ok
// SIG undefined FUN_14840c8c4(void)

void FUN_14840c8c4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014840c8f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 14840c8f4 FUN_14840c8f4 body=98 status=ok
// SIG undefined FUN_14840c8f4(void)

void FUN_14840c8f4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14840c956 FUN_14840c956 body=132 status=ok
// SIG undefined FUN_14840c956(void)

void FUN_14840c956(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14840c9dc FUN_14840c9dc body=89 status=ok
// SIG undefined FUN_14840c9dc(void)

void FUN_14840c9dc(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14840ca36 FUN_14840ca36 body=204 status=ok
// SIG undefined FUN_14840ca36(void)

void FUN_14840ca36(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_144a78d6a();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14840ca89;
    }
  }
  lVar2 = 0;
LAB_14840ca89:
  lVar1 = FUN_144a78d6a();
  local_30 = *param_2;
  if (lVar2 == lVar1) {
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
  }
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_14840cd52(param_1,&local_30,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840cb18 FUN_14840cb18 body=90 status=ok
// SIG undefined FUN_14840cb18(void)

void FUN_14840cb18(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0xcc) != 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
    if (*(void **)((longlong)param_1 + 0xc0) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0xc0),
              (longlong)*(int *)((longlong)param_1 + 200) << 3);
      FUN_1446efa72((longlong)param_1 + 0xc0,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14840cb72 FUN_14840cb72 body=141 status=ok
// SIG undefined FUN_14840cb72(void)

void FUN_14840cb72(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x19) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,8);
  return;
}



// FUNCTION 14840cd52 FUN_14840cd52 body=465 status=ok
// SIG undefined FUN_14840cd52(void)

void FUN_14840cd52(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  uint local_78;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  uStack_50 = 0;
  uStack_60 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar8 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    iVar8 = *(int *)(param_1 + 0x268);
  }
  uStack_70 = CONCAT44(uStack_4c,uStack_50);
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_88 = (undefined4)local_68;
  uStack_84 = local_68._4_4_;
  uStack_80 = (undefined4)uStack_60;
  uStack_7c = uStack_60._4_4_;
  local_90 = plVar1;
  if ((iStack_54 != iVar8) || (uStack_60 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_90 + (longlong)iStack_74 * 0x10);
      if (lVar4 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_14840ce81:
          lVar6 = FUN_144a78d6a();
          if ((lVar6 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_14840ce99;
          lVar7 = 0;
          if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30) {
            lVar7 = lVar5;
          }
        }
        else {
          if (lVar5 != 0) goto LAB_14840ce81;
LAB_14840ce99:
          lVar7 = 0;
        }
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          iVar3 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar3 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar3 + 1U) {
            FUN_14840cf24(param_3,iVar3);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (CONCAT44(uStack_7c,uStack_80) != lVar2 || iStack_74 != iVar8));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14840cf24 FUN_14840cf24 body=119 status=ok
// SIG undefined FUN_14840cf24(void)

void FUN_14840cf24(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x18;
    if (0x18 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x18 < *(uint *)(param_1 + 0xcc)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0xcc) = iVar5;
    FUN_14840cb72(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14840cf9c FUN_14840cf9c body=59 status=ok
// SIG undefined FUN_14840cf9c(void)

void FUN_14840cf9c(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = 0;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar3 * 8);
    uVar2 = *(undefined8 *)(param_2 + lVar3 * 8);
    *puVar1 = 0;
    FUN_14485c47a(puVar1,uVar2);
    lVar3 = lVar3 + 1;
  } while (param_3 != (int)lVar3);
  return;
}



// FUNCTION 14840cfe8 FUN_14840cfe8 body=170 status=ok
// SIG undefined FUN_14840cfe8(void)

void FUN_14840cfe8(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x620) + 0x10))(param_1 + 0x620,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d098 FUN_14840d098 body=170 status=ok
// SIG undefined FUN_14840d098(void)

void FUN_14840d098(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x620) + 0x18))(param_1 + 0x620,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d1f0 FUN_14840d1f0 body=170 status=ok
// SIG undefined FUN_14840d1f0(void)

ulonglong FUN_14840d1f0(longlong param_1,uint *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 & 2) == 0) {
    if ((*param_2 >> 10 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x30) = 0x400;
    }
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 2;
    pcVar2 = *(code **)(param_1 + 0x40);
    plVar4 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(local_40,uVar3,param_2);
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_28);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d29c FUN_14840d29c body=156 status=ok
// SIG undefined FUN_14840d29c(void)

ulonglong FUN_14840d29c(longlong param_1,byte *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 & 2) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 2;
    pcVar2 = *(code **)(param_1 + 0x40);
    plVar4 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(local_40,uVar3,param_2);
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_27);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d33a FUN_14840d33a body=156 status=ok
// SIG undefined FUN_14840d33a(void)

ulonglong FUN_14840d33a(longlong param_1,byte *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_26;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 & 2) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 2;
    pcVar2 = *(code **)(param_1 + 0x40);
    plVar4 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(local_40,uVar3,param_2);
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_26);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d3d8 FUN_14840d3d8 body=156 status=ok
// SIG undefined FUN_14840d3d8(void)

ulonglong FUN_14840d3d8(longlong param_1,byte *param_2)

{
  int *piVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  longlong *local_30;
  undefined1 local_25;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 & 2) == 0) {
    uVar5 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 2;
    pcVar2 = *(code **)(param_1 + 0x40);
    plVar4 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(local_40,uVar3,param_2);
    uVar5 = CONCAT71((int7)((ulonglong)param_2 >> 8),local_25);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d578 FUN_14840d578 body=275 status=ok
// SIG undefined FUN_14840d578(void)

void FUN_14840d578(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *(longlong *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(longlong **)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *(longlong *)(param_1 + 0x60);
  uStack_20 = *(undefined8 *)(param_1 + 0x68);
  local_18 = *(undefined8 *)(param_1 + 0x70);
  uStack_10 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = local_18;
  uVar4 = uStack_10;
  local_38 = local_78;
  uVar2 = uStack_30;
  local_48 = local_88;
  uVar1 = uStack_40;
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_4c,uStack_50);
  *(undefined ***)(param_1 + 0x60) = &PTR_LAB_14aeb56e0;
  *(undefined1 **)(param_1 + 0x68) = &LAB_143b4de44;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_6c,uStack_70);
  *(code **)(param_1 + 0x40) = FUN_14841bf2a;
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_18._4_4_ = (undefined4)((ulonglong)local_18 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = (undefined4)local_18;
  uStack_54 = local_18._4_4_;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  uStack_60 = uStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  local_18 = uVar3;
  uStack_10 = uVar4;
  if (local_88 != 0) {
    plVar5 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar5 = &local_68;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d68c FUN_14840d68c body=275 status=ok
// SIG undefined FUN_14840d68c(void)

void FUN_14840d68c(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  longlong *local_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *(longlong *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  local_78 = *(longlong **)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  local_28 = *(longlong *)(param_1 + 0x60);
  uStack_20 = *(undefined8 *)(param_1 + 0x68);
  local_18 = *(undefined8 *)(param_1 + 0x70);
  uStack_10 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = local_18;
  uVar4 = uStack_10;
  local_38 = local_78;
  uVar2 = uStack_30;
  local_48 = local_88;
  uVar1 = uStack_40;
  *(ulonglong *)(param_1 + 0x70) = CONCAT44(uStack_54,local_58);
  *(ulonglong *)(param_1 + 0x78) = CONCAT44(uStack_4c,uStack_50);
  *(undefined ***)(param_1 + 0x60) = &PTR_LAB_14aeb56e0;
  *(undefined1 **)(param_1 + 0x68) = &LAB_143b4de6e;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_6c,uStack_70);
  *(code **)(param_1 + 0x40) = FUN_14841bf2a;
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_7c,uStack_80);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_18._4_4_ = (undefined4)((ulonglong)local_18 >> 0x20);
  uStack_10._4_4_ = (undefined4)((ulonglong)uStack_10 >> 0x20);
  local_58 = (undefined4)local_18;
  uStack_54 = local_18._4_4_;
  uStack_50 = (undefined4)uStack_10;
  uStack_4c = uStack_10._4_4_;
  local_68 = local_28;
  uStack_60 = uStack_20;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_40 = uVar1;
  uStack_30 = uVar2;
  local_18 = uVar3;
  uStack_10 = uVar4;
  if (local_88 != 0) {
    plVar5 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar5 = &local_68;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((local_8 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d7a0 FUN_14840d7a0 body=192 status=ok
// SIG undefined FUN_14840d7a0(void)

void FUN_14840d7a0(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  uVar7 = *(undefined8 *)(param_1 + 0x70);
  uVar8 = *(undefined8 *)(param_1 + 0x78);
  lVar9 = *param_2;
  lVar10 = param_2[1];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[4];
  lVar14 = param_2[5];
  lVar15 = param_2[7];
  *(longlong *)(param_1 + 0x70) = param_2[6];
  *(longlong *)(param_1 + 0x78) = lVar15;
  *(longlong *)(param_1 + 0x60) = lVar13;
  *(longlong *)(param_1 + 0x68) = lVar14;
  *(longlong *)(param_1 + 0x50) = lVar11;
  *(longlong *)(param_1 + 0x58) = lVar12;
  *(longlong *)(param_1 + 0x40) = lVar9;
  *(longlong *)(param_1 + 0x48) = lVar10;
  local_58._0_4_ = (undefined4)uVar1;
  local_58._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_50._0_4_ = (undefined4)uVar2;
  uStack_50._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_48._0_4_ = (undefined4)uVar3;
  local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar4;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_38._0_4_ = (undefined4)uVar5;
  local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar6;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_28._0_4_ = (undefined4)uVar7;
  local_28._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar8;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  local_58 = uVar1;
  uStack_50 = uVar2;
  local_48 = uVar3;
  uStack_40 = uVar4;
  local_38 = uVar5;
  uStack_30 = uVar6;
  local_28 = uVar7;
  uStack_20 = uVar8;
  if (*param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d88a FUN_14840d88a body=293 status=ok
// SIG undefined FUN_14840d88a(void)

undefined8 * FUN_14840d88a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [72];
  char local_70 [8];
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(param_1 + 0x26) = 0;
  cVar2 = (**(code **)(*param_1 + 0x300))(param_1,param_3);
  if (cVar2 != '\0') {
    pcVar1 = (code *)param_1[0x1c];
    if (pcVar1 != (code *)0x0) {
      plVar4 = param_1 + 0x20;
      if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x1e];
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,param_3);
      if (cVar2 == '\0') goto LAB_14840d95f;
    }
    plVar4 = (longlong *)param_1[0x25];
    (**(code **)(*param_1 + 0x330))(param_1,local_b8,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4,local_70,local_b8);
    if (local_70[0] == '\x01') {
      param_2[1] = 0x6300000001;
      *param_2 = param_1;
      param_2[3] = 0;
      param_2[2] = local_68;
      goto LAB_14840d984;
    }
  }
LAB_14840d95f:
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
LAB_14840d984:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840d9b0 FUN_14840d9b0 body=107 status=ok
// SIG undefined FUN_14840d9b0(void)

undefined4 *
FUN_14840d9b0(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_14840da1c(param_1 + 0x10,param_3,param_1[0x25]);
  (**(code **)(*param_1 + 0x360))(param_1,param_3,param_4);
  *(undefined1 *)(param_1 + 0x26) = 1;
  *param_2 = 1;
  *(longlong **)(param_2 + 2) = param_1;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14840da1c FUN_14840da1c body=199 status=ok
// SIG undefined FUN_14840da1c(void)

void FUN_14840da1c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar10 = (uint *)*param_1;
    puVar1 = puVar10 + *(int *)(param_1 + 1);
    do {
      uVar2 = *puVar10;
      if (*(int *)(param_1 + 3) != *(int *)((longlong)param_1 + 0x44)) {
        puVar6 = (undefined8 *)param_1[10];
        if ((undefined8 *)param_1[10] == (undefined8 *)0x0) {
          puVar6 = param_1 + 9;
        }
        iVar7 = *(int *)((longlong)puVar6 + (ulonglong)(*(int *)(param_1 + 0xb) - 1U & uVar2) * 4);
        if (iVar7 != -1) {
          do {
            lVar8 = param_1[2] + (longlong)iVar7 * 0x60;
            if (*(uint *)(param_1[2] + (longlong)iVar7 * 0x60) == uVar2) goto LAB_14840da5a;
            iVar7 = *(int *)(lVar8 + 0x50);
          } while (iVar7 != -1);
        }
      }
      lVar8 = 0;
LAB_14840da5a:
      pcVar3 = *(code **)(lVar8 + 0x10);
      plVar9 = (longlong *)(lVar8 + 0x30);
      if (*(longlong **)(lVar8 + 0x20) != (longlong *)0x0) {
        plVar9 = *(longlong **)(lVar8 + 0x20);
      }
      uVar5 = (**(code **)(*plVar9 + 8))();
      uVar4 = (*pcVar3)(uVar5,param_2);
      (**(code **)(*param_3 + 8))(param_3,uVar2,uVar4);
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  return;
}



// FUNCTION 14840dae4 FUN_14840dae4 body=192 status=ok
// SIG undefined FUN_14840dae4(void)

undefined4 * FUN_14840dae4(longlong *param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if ((char)param_1[0x24] == '\x01') {
    FUN_14840da1c(param_1 + 0x10,param_3,param_1[0x25]);
  }
  uVar1 = *param_3;
  uVar3 = (**(code **)(*param_1 + 0x2b0))(param_1);
  uVar4 = 2;
  if ((uVar3 & uVar1) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x310))(param_1,param_3);
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x368))(param_1,param_3,param_4);
    }
    else {
      (**(code **)(*param_1 + 0x370))(param_1,param_3,param_4);
      *(undefined1 *)(param_1 + 0x26) = 0;
      uVar4 = 3;
    }
  }
  *param_2 = uVar4;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14840dba4 FUN_14840dba4 body=34 status=ok
// SIG undefined FUN_14840dba4(void)

void FUN_14840dba4(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0x128) + 0x30))();
  *(undefined1 *)(param_1 + 0x130) = 0;
  return;
}



// FUNCTION 14840dbc6 FUN_14840dbc6 body=89 status=ok
// SIG undefined FUN_14840dbc6(void)

void FUN_14840dbc6(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x25];
  (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840dc20 FUN_14840dc20 body=89 status=ok
// SIG undefined FUN_14840dc20(void)

void FUN_14840dc20(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x25];
  (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
  (**(code **)(*plVar1 + 0x20))(plVar1,local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840dc7a FUN_14840dc7a body=89 status=ok
// SIG undefined FUN_14840dc7a(void)

void FUN_14840dc7a(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x25];
  (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
  (**(code **)(*plVar1 + 0x28))(plVar1,local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840dcdc FUN_14840dcdc body=286 status=ok
// SIG undefined FUN_14840dcdc(void)

undefined8 * FUN_14840dcdc(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [72];
  char local_70 [8];
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(*param_1 + 0x318))(param_1,param_3);
  if (cVar2 != '\0') {
    pcVar1 = (code *)param_1[0x10];
    if (pcVar1 != (code *)0x0) {
      plVar4 = param_1 + 0x14;
      if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x12];
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,param_3);
      if (cVar2 == '\0') goto LAB_14840ddaa;
    }
    plVar4 = (longlong *)param_1[0x25];
    (**(code **)(*param_1 + 0x330))(param_1,local_b8,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4,local_70,local_b8);
    if (local_70[0] == '\x01') {
      param_2[1] = 0x6300000001;
      *param_2 = param_1;
      param_2[3] = 0;
      param_2[2] = local_68;
      goto LAB_14840ddcf;
    }
  }
LAB_14840ddaa:
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
LAB_14840ddcf:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840de00 FUN_14840de00 body=245 status=ok
// SIG undefined FUN_14840de00(void)

void FUN_14840de00(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_40 = *param_4;
  local_38 = param_4[1];
  plVar3 = (longlong *)param_4[2];
  if (plVar3 == (longlong *)0x0) {
    local_30 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_30 = plVar3;
  }
  local_48 = &PTR_LAB_14aeb5740;
  local_58 = (undefined ***)0x0;
  local_68[0] = &LAB_143b4de9c;
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_14840df3c(param_1 + 0x38,param_3,local_68);
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar4 = &local_48;
    if (local_58 != (undefined ***)0x0) {
      pppuVar4 = local_58;
    }
    (*(code *)(*pppuVar4)[2])(pppuVar4);
  }
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
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840def6 FUN_14840def6 body=70 status=ok
// SIG undefined FUN_14840def6(void)

void FUN_14840def6(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  
  *(undefined8 *)(param_1 + 0x30) = param_2;
  FUN_14840df3c(param_1 + 0x38,param_3,param_4);
  if (*param_4 != 0) {
    plVar1 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_4[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014840df31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 14840df3c FUN_14840df3c body=139 status=ok
// SIG undefined FUN_14840df3c(void)

void FUN_14840df3c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  local_44 = param_2;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1446f48e2(param_1,iVar1);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = param_2;
  local_40 = &local_44;
  local_38 = param_3;
  FUN_14841b33a(param_1 + 2,local_2c,&local_40,0);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840dfc8 FUN_14840dfc8 body=73 status=ok
// SIG undefined FUN_14840dfc8(void)

undefined8 * FUN_14840dfc8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  FUN_14840da1c(param_1 + 0x38,param_3,*(undefined8 *)(param_1 + 0x30));
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
  return param_2;
}



// FUNCTION 14840e050 FUN_14840e050 body=172 status=ok
// SIG undefined FUN_14840e050(void)

void FUN_14840e050(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  iVar1 = *(int *)(param_1 + 0xe8);
  lVar4 = (longlong)iVar1;
  *(uint *)(param_1 + 0xe8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar1 + 1U) {
    FUN_14011bb82((longlong *)(param_1 + 0xe0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  *(undefined8 *)(lVar2 + lVar4 * 0x18) = *param_3;
  *(undefined8 *)(lVar2 + 8 + lVar4 * 0x18) = param_3[1];
  lVar3 = param_3[2];
  *(longlong *)(lVar2 + 0x10 + lVar4 * 0x18) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_1448c4dd6((undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xe8),1);
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    memset(*(void **)(param_1 + 0xf0),0,(longlong)*(int *)(param_1 + 0xf8));
    return;
  }
  return;
}



// FUNCTION 14840e0fc FUN_14840e0fc body=130 status=ok
// SIG undefined FUN_14840e0fc(void)

void FUN_14840e0fc(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  *(undefined8 *)(param_1 + 0xd8) = param_2;
  lVar1 = param_1 + 0xe0;
  FUN_146a6959c(lVar1,param_3);
  FUN_14841c01d(*(undefined8 *)(param_1 + 0xe0),*(undefined4 *)(param_1 + 0xe8));
  uVar2 = FUN_14840e1f9(lVar1);
  FUN_14840e17e(lVar1,uVar2);
  FUN_1448c4dd6((undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xe8),1);
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    memset(*(void **)(param_1 + 0xf0),0,(longlong)*(int *)(param_1 + 0xf8));
    return;
  }
  return;
}



// FUNCTION 14840e17e FUN_14840e17e body=122 status=ok
// SIG undefined FUN_14840e17e(void)

void FUN_14840e17e(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14011bb82(param_1,iVar1);
    }
    FUN_14841c5e7((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    FUN_14841c5fe(param_1,param_2,iVar1 - param_2);
    FUN_14825af5a(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14840e1f9 FUN_14840e1f9 body=113 status=ok
// SIG undefined FUN_14840e1f9(void)

ulonglong FUN_14840e1f9(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  uVar2 = (ulonglong)(int)param_1[1];
  if (1 < (longlong)uVar2) {
    param_1 = (longlong *)*param_1;
    lVar6 = uVar2 * 0x18 + -0x18;
    plVar3 = param_1;
    plVar1 = param_1;
    do {
      plVar5 = plVar1 + 3;
      plVar4 = plVar3;
      if ((*plVar3 != *plVar5) && (plVar4 = plVar3 + 3, plVar1 != plVar3)) {
        FUN_1413a4742(plVar4,plVar5);
      }
      lVar6 = lVar6 + -0x18;
      plVar3 = plVar4;
      plVar1 = plVar5;
    } while (lVar6 != 0);
    uVar2 = (ulonglong)
            (uint)((int)((ulonglong)((longlong)plVar4 + (0x18 - (longlong)param_1)) >> 3) *
                  -0x55555555);
  }
  return uVar2;
}



// FUNCTION 14840e26a FUN_14840e26a body=231 status=ok
// SIG undefined FUN_14840e26a(void)

longlong * FUN_14840e26a(longlong param_1,longlong *param_2,int *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  FUN_1448c4dd6((undefined8 *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xe8),1);
  if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
    memset(*(void **)(param_1 + 0xf0),0,(longlong)*(int *)(param_1 + 0xf8));
  }
  if (((*param_3 == 1) && ((char)param_3[8] == '\x01')) && ((longlong)*(int *)(param_1 + 0xe8) != 0)
     ) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar6) == *(longlong *)(param_3 + 2)) {
        pcVar1 = *(code **)(param_1 + 0x30);
        uVar5 = 1;
        if (pcVar1 == (code *)0x0) goto LAB_14840e2ee;
        plVar4 = (longlong *)(param_1 + 0x50);
        if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
          plVar4 = *(longlong **)(param_1 + 0x40);
        }
        uVar3 = (**(code **)(*plVar4 + 8))();
        cVar2 = (*pcVar1)(uVar3,param_3);
        if (cVar2 != '\0') goto LAB_14840e2ee;
        break;
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)*(int *)(param_1 + 0xe8) * 0x18 != lVar6);
  }
  uVar5 = 2;
  param_1 = 0;
LAB_14840e2ee:
  *(undefined4 *)(param_2 + 1) = uVar5;
  *param_2 = param_1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 99;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
  return param_2;
}



// FUNCTION 14840e352 FUN_14840e352 body=164 status=ok
// SIG undefined FUN_14840e352(void)

undefined4 * FUN_14840e352(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  FUN_14840da1c(param_1 + 0x70,param_3,uVar2);
  FUN_14840e3f6(param_1,param_3,
                CONCAT71((int7)((ulonglong)uVar2 >> 8),*(undefined1 *)(param_1 + 0xd0)) ^ 1);
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0xf8) != 0) {
      lVar1 = 0;
      do {
        if (*(char *)(*(longlong *)(param_1 + 0xf0) + lVar1) == '\0') goto LAB_14840e3d2;
        lVar1 = lVar1 + 1;
      } while (*(int *)(param_1 + 0xf8) != lVar1);
    }
    (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))
              (*(longlong **)(param_1 + 0xd8),param_3 + 8);
    *(undefined1 *)(param_1 + 0x100) = 1;
  }
LAB_14840e3d2:
  *param_2 = 1;
  *(longlong *)(param_2 + 2) = param_1;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14840e3f6 FUN_14840e3f6 body=257 status=ok
// SIG undefined FUN_14840e3f6(void)

undefined8 FUN_14840e3f6(longlong param_1,int *param_2,char param_3)

{
  uint uVar1;
  longlong lVar2;
  
  if (*param_2 == 1) {
    if (((char)param_2[8] == '\x01') && ((longlong)*(int *)(param_1 + 0xe8) != 0)) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar2) == *(longlong *)(param_2 + 2)) {
          uVar1 = (int)(lVar2 >> 3) * -0x55555555;
          if (-1 < (int)uVar1) {
            *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(uVar1 & 0x7fffffff)) = 1;
            lVar2 = 0x10;
            goto LAB_14840e4ac;
          }
          break;
        }
        lVar2 = lVar2 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0xe8) * 0x18 != lVar2);
    }
    if ((*(char *)((longlong)param_2 + 0x22) == '\x01') && ((longlong)*(int *)(param_1 + 0xe8) != 0)
       ) {
      lVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar2) == *(longlong *)(param_2 + 2)) {
          uVar1 = (int)(lVar2 >> 3) * -0x55555555;
          if ((int)uVar1 < 0) {
            return 0;
          }
          *(undefined1 *)(*(longlong *)(param_1 + 0xf0) + (ulonglong)(uVar1 & 0x7fffffff)) = 0;
          lVar2 = 0x18;
LAB_14840e4ac:
          if (param_3 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0xd8) + lVar2))();
            return 1;
          }
          return 1;
        }
        lVar2 = lVar2 + 0x18;
      } while ((longlong)*(int *)(param_1 + 0xe8) * 0x18 != lVar2);
    }
  }
  return 0;
}



// FUNCTION 14840e4f8 FUN_14840e4f8 body=244 status=ok
// SIG undefined FUN_14840e4f8(void)

undefined4 * FUN_14840e4f8(longlong param_1,undefined4 *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + 0xd8);
  FUN_14840da1c(param_1 + 0x70,param_3,uVar7);
  cVar3 = FUN_14840e3f6(param_1,param_3,
                        CONCAT71((int7)((ulonglong)uVar7 >> 8),*(undefined1 *)(param_1 + 0xd0)) ^ 1)
  ;
  uVar6 = 2;
  if (cVar3 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    iVar1 = *(int *)(param_1 + 0xf8);
    lVar4 = (longlong)iVar1;
    if (*(char *)(param_1 + 0xd0) == '\x01') {
      if (iVar1 != 0) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar2 + lVar5) == '\0') {
            lVar5 = 0;
            goto LAB_14840e5bd;
          }
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
      }
      (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x10))
                (*(longlong **)(param_1 + 0xd8),param_3 + 8);
      *(undefined1 *)(param_1 + 0x100) = 1;
    }
    else {
      if (iVar1 != 0) {
        lVar5 = 0;
        do {
          if (*(char *)(lVar2 + lVar5) != '\0') goto LAB_14840e59c;
          lVar5 = lVar5 + 1;
        } while (lVar4 != lVar5);
      }
LAB_14840e597:
      uVar6 = 3;
    }
  }
  goto LAB_14840e59c;
  while (lVar5 = lVar5 + 1, lVar4 != lVar5) {
LAB_14840e5bd:
    if (*(char *)(lVar2 + lVar5) == '\0') {
      if (*(char *)(param_1 + 0x100) == '\x01') {
        (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x18))
                  (*(longlong **)(param_1 + 0xd8),param_3 + 8);
        goto LAB_14840e597;
      }
      break;
    }
  }
LAB_14840e59c:
  *param_2 = uVar6;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14840e608 FUN_14840e608 body=391 status=ok
// SIG undefined FUN_14840e608(void)

longlong * FUN_14840e608(longlong param_1,longlong *param_2,byte *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_68 [8];
  longlong local_60;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_1 + 0xd0);
  if (lVar5 != 0) {
    pcVar1 = *(code **)(param_1 + 0x90);
    if (pcVar1 != (code *)0x0) {
      plVar4 = (longlong *)(param_1 + 0xb0);
      if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_1 + 0xa0);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,param_3);
      if (cVar2 == '\0') goto LAB_14840e66f;
      lVar5 = *(longlong *)(param_1 + 0xd0);
    }
    FUN_14840da1c(param_1 + 0x30,param_3,lVar5);
    local_88 = (*param_3 & 2) != 0;
    if ((bool)local_88) {
      local_b8 = *(undefined8 *)(param_3 + 0xb0);
      uStack_b0 = *(undefined8 *)(param_3 + 0xb8);
      local_a8 = *(undefined8 *)(param_3 + 0xc0);
      uStack_a0 = *(undefined8 *)(param_3 + 200);
      uStack_98 = *(undefined8 *)(param_3 + 0xd0);
      local_90 = *(undefined8 *)(param_3 + 0xd8);
      local_80 = *(undefined8 *)(param_3 + 0x90);
      uStack_78 = *(undefined8 *)(param_3 + 0x98);
    }
    else {
      local_a8 = DAT_14c8464f0;
      local_b8 = DAT_14c8464e0;
      uStack_b0 = DAT_14c8464e8;
      uStack_a0 = 0;
      uStack_98 = 0;
      local_90 = 0x3ff0000000000000;
      local_80 = 0;
      uStack_78 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x10))(*(longlong **)(param_1 + 0xd0),local_68);
    if (local_68[0] == '\x01') {
      param_2[1] = 0x6300000001;
      *param_2 = param_1;
      param_2[3] = 0;
      param_2[2] = local_60;
      goto LAB_14840e694;
    }
  }
LAB_14840e66f:
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
LAB_14840e694:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840e790 FUN_14840e790 body=248 status=ok
// SIG undefined FUN_14840e790(void)

undefined4 * FUN_14840e790(longlong param_1,undefined4 *param_2,byte *param_3,undefined4 param_4)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14840da1c(param_1 + 0x30,param_3,*(undefined8 *)(param_1 + 0xd0));
  local_48 = (*param_3 & 2) != 0;
  if ((bool)local_48) {
    local_78 = *(undefined8 *)(param_3 + 0xb0);
    uStack_70 = *(undefined8 *)(param_3 + 0xb8);
    local_68 = *(undefined8 *)(param_3 + 0xc0);
    uStack_60 = *(undefined8 *)(param_3 + 200);
    uStack_58 = *(undefined8 *)(param_3 + 0xd0);
    local_50 = *(undefined8 *)(param_3 + 0xd8);
    local_40 = *(undefined8 *)(param_3 + 0x90);
    uStack_38 = *(undefined8 *)(param_3 + 0x98);
  }
  else {
    local_68 = DAT_14c8464f0;
    local_78 = DAT_14c8464e0;
    uStack_70 = DAT_14c8464e8;
    uStack_60 = 0;
    uStack_58 = 0;
    local_50 = 0x3ff0000000000000;
    local_40 = 0;
    uStack_38 = 0;
  }
  (**(code **)(**(longlong **)(param_1 + 0xd0) + 0x18))();
  *param_2 = 1;
  *(longlong *)(param_2 + 2) = param_1;
  param_2[4] = param_4;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840e88a FUN_14840e88a body=267 status=ok
// SIG undefined FUN_14840e88a(void)

uint * FUN_14840e88a(longlong *param_1,uint *param_2,uint *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14840da1c(param_1 + 6,param_3,param_1[0x1a]);
  uVar3 = *param_3;
  uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1);
  if ((uVar2 & uVar3) == 0) {
    uVar3 = 2;
  }
  else {
    local_48 = (*param_3 & 2) != 0;
    if ((bool)local_48) {
      local_78 = *(undefined8 *)(param_3 + 0x2c);
      uStack_70 = *(undefined8 *)(param_3 + 0x2e);
      local_68 = *(undefined8 *)(param_3 + 0x30);
      uStack_60 = *(undefined8 *)(param_3 + 0x32);
      uStack_58 = *(undefined8 *)(param_3 + 0x34);
      local_50 = *(undefined8 *)(param_3 + 0x36);
      local_40 = *(undefined8 *)(param_3 + 0x24);
      uStack_38 = *(undefined8 *)(param_3 + 0x26);
    }
    else {
      local_68 = DAT_14c8464f0;
      local_78 = DAT_14c8464e0;
      uStack_70 = DAT_14c8464e8;
      uStack_60 = 0;
      uStack_58 = 0;
      local_50 = 0x3ff0000000000000;
      local_40 = 0;
      uStack_38 = 0;
    }
    bVar1 = (**(code **)(*(longlong *)param_1[0x1a] + 0x20))();
    uVar3 = bVar1 ^ 3;
  }
  *param_2 = uVar3;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 99;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840e9b0 FUN_14840e9b0 body=380 status=ok
// SIG undefined FUN_14840e9b0(void)

longlong * FUN_14840e9b0(longlong param_1,longlong *param_2,byte *param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char local_68 [8];
  longlong local_60;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(float *)(param_3 + 0x88) != 0.0) || (NAN(*(float *)(param_3 + 0x88)))) {
    pcVar1 = *(code **)(param_1 + 0x80);
    if (pcVar1 != (code *)0x0) {
      plVar4 = (longlong *)(param_1 + 0xa0);
      if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
        plVar4 = *(longlong **)(param_1 + 0x90);
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,param_3);
      if (cVar2 == '\0') goto LAB_14840eade;
    }
    local_88 = (*param_3 & 2) != 0;
    if ((bool)local_88) {
      local_b8 = *(undefined8 *)(param_3 + 0xb0);
      uStack_b0 = *(undefined8 *)(param_3 + 0xb8);
      local_a8 = *(undefined8 *)(param_3 + 0xc0);
      uStack_a0 = *(undefined8 *)(param_3 + 200);
      uStack_98 = *(undefined8 *)(param_3 + 0xd0);
      local_90 = *(undefined8 *)(param_3 + 0xd8);
      local_80 = *(undefined8 *)(param_3 + 0x90);
      uStack_78 = *(undefined8 *)(param_3 + 0x98);
    }
    else {
      local_a8 = DAT_14c8464f0;
      local_b8 = DAT_14c8464e0;
      uStack_b0 = DAT_14c8464e8;
      uStack_a0 = 0;
      uStack_98 = 0;
      local_90 = 0x3ff0000000000000;
      local_80 = 0;
      uStack_78 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x10))(*(longlong **)(param_1 + 0x120),local_68)
    ;
    if (local_68[0] == '\x01') {
      param_2[1] = 0x6300000001;
      *param_2 = param_1;
      param_2[3] = 0;
      param_2[2] = local_60;
      goto LAB_14840eb03;
    }
  }
LAB_14840eade:
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
LAB_14840eb03:
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840eb2e FUN_14840eb2e body=386 status=ok
// SIG undefined FUN_14840eb2e(void)

undefined4 * FUN_14840eb2e(longlong param_1,undefined4 *param_2,byte *param_3)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14840da1c(param_1 + 0xc0,param_3,*(undefined8 *)(param_1 + 0x120));
  if (*(float *)(param_3 + 0x88) <= 0.0) {
    local_38 = (*param_3 & 2) != 0;
    if ((bool)local_38) {
      local_68 = *(undefined8 *)(param_3 + 0xb0);
      uStack_60 = *(undefined8 *)(param_3 + 0xb8);
      local_58 = *(undefined8 *)(param_3 + 0xc0);
      uStack_50 = *(undefined8 *)(param_3 + 200);
      uStack_48 = *(undefined8 *)(param_3 + 0xd0);
      uStack_40 = *(undefined8 *)(param_3 + 0xd8);
      local_30 = *(undefined8 *)(param_3 + 0x90);
      uStack_28 = *(undefined8 *)(param_3 + 0x98);
    }
    else {
      local_58 = DAT_14c8464f0;
      local_68 = DAT_14c8464e0;
      uStack_60 = DAT_14c8464e8;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0x3ff0000000000000;
      local_30 = 0;
      uStack_28 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x20))();
  }
  else {
    local_38 = (*param_3 & 2) != 0;
    if ((bool)local_38) {
      local_68 = *(undefined8 *)(param_3 + 0xb0);
      uStack_60 = *(undefined8 *)(param_3 + 0xb8);
      local_58 = *(undefined8 *)(param_3 + 0xc0);
      uStack_50 = *(undefined8 *)(param_3 + 200);
      uStack_48 = *(undefined8 *)(param_3 + 0xd0);
      uStack_40 = *(undefined8 *)(param_3 + 0xd8);
      local_30 = *(undefined8 *)(param_3 + 0x90);
      uStack_28 = *(undefined8 *)(param_3 + 0x98);
    }
    else {
      local_58 = DAT_14c8464f0;
      local_68 = DAT_14c8464e0;
      uStack_60 = DAT_14c8464e8;
      uStack_50 = 0;
      uStack_48 = 0;
      uStack_40 = 0x3ff0000000000000;
      local_30 = 0;
      uStack_28 = 0;
    }
    (**(code **)(**(longlong **)(param_1 + 0x120) + 0x18))();
  }
  *param_2 = 1;
  *(longlong *)(param_2 + 2) = param_1;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840ecdc FUN_14840ecdc body=274 status=ok
// SIG undefined FUN_14840ecdc(void)

undefined8 * FUN_14840ecdc(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78 [72];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = 2;
  if (param_1[0x2c] == 0) {
    param_1 = (longlong *)0x0;
    goto LAB_14840eda2;
  }
  cVar2 = (**(code **)(*param_1 + 0x300))(param_1,param_3);
  if (cVar2 != '\0') {
    uVar4 = 1;
    if ((int)param_1[0x2d] == 1) goto LAB_14840eda2;
    if ((int)param_1[0x2d] == 0) {
      pcVar1 = (code *)param_1[0x1c];
      if (pcVar1 != (code *)0x0) {
        plVar5 = param_1 + 0x20;
        if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
          plVar5 = (longlong *)param_1[0x1e];
        }
        uVar3 = (**(code **)(*plVar5 + 8))();
        cVar2 = (*pcVar1)(uVar3,param_3);
        if (cVar2 == '\0') goto LAB_14840ed9b;
      }
      plVar5 = (longlong *)param_1[0x2c];
      (**(code **)(*param_1 + 0x330))(param_1,local_78,param_3);
      cVar2 = (**(code **)(*plVar5 + 0x18))(plVar5,local_78);
      uVar4 = 1;
      if (cVar2 != '\0') goto LAB_14840eda2;
    }
  }
LAB_14840ed9b:
  param_1 = (longlong *)0x0;
  uVar4 = 2;
LAB_14840eda2:
  *(undefined4 *)(param_2 + 1) = uVar4;
  *param_2 = param_1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 99;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840ee0e FUN_14840ee0e body=394 status=ok
// SIG undefined FUN_14840ee0e(void)

undefined4 * FUN_14840ee0e(longlong *param_1,undefined4 *param_2,uint *param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [72];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14840da1c(param_1 + 0x10,param_3,param_1[0x2c]);
  uVar3 = (**(code **)(*param_1 + 0x2b0))(param_1);
  uVar5 = 2;
  if ((*param_3 & uVar3) == 0) goto LAB_14840ef5f;
  if ((int)param_1[0x2d] == 1) {
    cVar2 = (**(code **)(*(longlong *)param_1[0x2c] + 0x40))();
    if (cVar2 == '\0') goto LAB_14840ee9a;
    (**(code **)(*(longlong *)param_1[0x2c] + 0x38))();
    uVar4 = 0;
  }
  else {
LAB_14840ee9a:
    cVar2 = (**(code **)(*param_1 + 0x310))(param_1,param_3);
    if (cVar2 == '\0') goto LAB_14840ef5f;
    uVar5 = 3;
    if ((int)param_1[0x2d] == 1) {
      plVar1 = (longlong *)param_1[0x2c];
      (**(code **)(*param_1 + 0x330))(param_1,local_80,param_3);
      cVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,local_80);
      uVar4 = 0;
      if (cVar2 != '\0') goto LAB_14840ef5f;
    }
    else {
      if ((int)param_1[0x2d] != 0) goto LAB_14840ef5f;
      plVar1 = (longlong *)param_1[0x2c];
      (**(code **)(*param_1 + 0x330))(param_1,local_80,param_3);
      cVar2 = (**(code **)(*plVar1 + 0x18))(plVar1,local_80);
      if (cVar2 == '\0') goto LAB_14840ef5f;
      plVar1 = (longlong *)param_1[0x2c];
      (**(code **)(*param_1 + 0x330))(param_1,local_80,param_3);
      (**(code **)(*plVar1 + 0x20))(plVar1,local_80);
      uVar4 = 1;
    }
  }
  *(undefined4 *)(param_1 + 0x2d) = uVar4;
  uVar5 = 3;
LAB_14840ef5f:
  *param_2 = uVar5;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840efbe FUN_14840efbe body=142 status=ok
// SIG undefined FUN_14840efbe(void)

longlong * FUN_14840efbe(longlong param_1,longlong *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  
  if (*(longlong *)(param_1 + 0x160) != 0) {
    pcVar1 = *(code **)(param_1 + 0x120);
    uVar5 = 1;
    if (pcVar1 == (code *)0x0) goto LAB_14840f01b;
    plVar4 = (longlong *)(param_1 + 0x140);
    if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x130);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3,param_3);
    if (cVar2 != '\0') goto LAB_14840f01b;
  }
  uVar5 = 2;
  param_1 = 0;
LAB_14840f01b:
  *(undefined4 *)(param_2 + 1) = uVar5;
  *param_2 = param_1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 99;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
  return param_2;
}



// FUNCTION 14840f06a FUN_14840f06a body=344 status=ok
// SIG undefined FUN_14840f06a(void)

undefined4 * FUN_14840f06a(longlong *param_1,undefined4 *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14840da1c(param_1 + 0x10,param_3,param_1[0x2c]);
  uVar2 = (**(code **)(*param_1 + 0x2b0))(param_1);
  uVar4 = 2;
  if ((*param_3 & uVar2) != 0) {
    iVar3 = (int)param_1[0x2d];
    if (iVar3 == 1) {
      cVar1 = (**(code **)(*(longlong *)param_1[0x2c] + 0x40))();
      if (cVar1 != '\0') {
        (**(code **)(*(longlong *)param_1[0x2c] + 0x38))();
        *(undefined4 *)(param_1 + 0x2d) = 0;
        uVar4 = 3;
        goto LAB_14840f18d;
      }
      iVar3 = (int)param_1[0x2d];
    }
    if (iVar3 == 1) {
      local_78 = *(undefined8 *)(param_3 + 0x2c);
      uStack_70 = *(undefined8 *)(param_3 + 0x2e);
      local_68 = param_3[0x30];
      uStack_64 = param_3[0x31];
      uStack_60 = param_3[0x32];
      uStack_5c = param_3[0x33];
      local_58 = param_3[0x34];
      uStack_54 = param_3[0x35];
      uStack_50 = param_3[0x36];
      uStack_4c = param_3[0x37];
      local_48 = 1;
      local_40 = param_3[0x24];
      uStack_3c = param_3[0x25];
      uStack_38 = param_3[0x26];
      uStack_34 = param_3[0x27];
      (**(code **)(*(longlong *)param_1[0x2c] + 0x28))();
    }
    else if (iVar3 == 0) {
      local_78 = *(undefined8 *)(param_3 + 0x2c);
      uStack_70 = *(undefined8 *)(param_3 + 0x2e);
      local_68 = param_3[0x30];
      uStack_64 = param_3[0x31];
      uStack_60 = param_3[0x32];
      uStack_5c = param_3[0x33];
      local_58 = param_3[0x34];
      uStack_54 = param_3[0x35];
      uStack_50 = param_3[0x36];
      uStack_4c = param_3[0x37];
      local_48 = 1;
      local_40 = param_3[0x24];
      uStack_3c = param_3[0x25];
      uStack_38 = param_3[0x26];
      uStack_34 = param_3[0x27];
      (**(code **)(*(longlong *)param_1[0x2c] + 0x10))();
    }
  }
LAB_14840f18d:
  *param_2 = uVar4;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840f1de FUN_14840f1de body=286 status=ok
// SIG undefined FUN_14840f1de(void)

undefined8 * FUN_14840f1de(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [72];
  char local_70 [8];
  undefined8 local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar2 = (**(code **)(*param_1 + 0x300))(param_1,param_3);
  if (cVar2 != '\0') {
    pcVar1 = (code *)param_1[0x10];
    if (pcVar1 != (code *)0x0) {
      plVar4 = param_1 + 0x14;
      if ((longlong *)param_1[0x12] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x12];
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,param_3);
      if (cVar2 == '\0') goto LAB_14840f2ac;
    }
    plVar4 = (longlong *)param_1[0x25];
    (**(code **)(*param_1 + 0x330))(param_1,local_b8,param_3);
    (**(code **)(*plVar4 + 0x10))(plVar4,local_70,local_b8);
    if (local_70[0] == '\x01') {
      param_2[1] = 0x6300000001;
      *param_2 = param_1;
      param_2[3] = 0;
      param_2[2] = local_68;
      goto LAB_14840f2d1;
    }
  }
LAB_14840f2ac:
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
LAB_14840f2d1:
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840f2fe FUN_14840f2fe body=72 status=ok
// SIG undefined FUN_14840f2fe(void)

undefined4 * FUN_14840f2fe(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  FUN_14840da1c(param_1 + 200,param_3,*(undefined8 *)(param_1 + 0x128));
  *param_2 = 1;
  *(longlong *)(param_2 + 2) = param_1;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14840f346 FUN_14840f346 body=255 status=ok
// SIG undefined FUN_14840f346(void)

undefined4 *
FUN_14840f346(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [72];
  char local_80 [64];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14840da1c(param_1 + 0x19,param_3,param_1[0x25]);
  cVar2 = (**(code **)(*param_1 + 0x310))(param_1,param_3);
  uVar3 = 2;
  if (cVar2 != '\0') {
    if ((char)param_1[0x18] != '\0') {
      plVar1 = (longlong *)param_1[0x25];
      (**(code **)(*param_1 + 0x330))(param_1,local_c8,param_3);
      (**(code **)(*plVar1 + 0x10))(plVar1,local_80,local_c8);
      uVar3 = 3;
      if (local_80[0] == '\0') goto LAB_14840f403;
    }
    (**(code **)(*param_1 + 0x360))(param_1,param_3,param_4);
    uVar3 = 3;
  }
LAB_14840f403:
  *param_2 = uVar3;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840f448 FUN_14840f448 body=89 status=ok
// SIG undefined FUN_14840f448(void)

void FUN_14840f448(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x25];
  (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840f4d0 FUN_14840f4d0 body=481 status=ok
// SIG undefined FUN_14840f4d0(void)

undefined8 * FUN_14840f4d0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_128 [40];
  char local_100 [64];
  undefined1 local_c0 [72];
  byte local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined1 *)((longlong)param_1 + 0x17d) = 0;
  cVar2 = (**(code **)(*param_1 + 0x300))(param_1,param_3);
  if (cVar2 != '\0') {
    pcVar1 = (code *)param_1[0x1c];
    if (pcVar1 != (code *)0x0) {
      plVar4 = param_1 + 0x20;
      if ((longlong *)param_1[0x1e] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x1e];
      }
      uVar3 = (**(code **)(*plVar4 + 8))();
      cVar2 = (*pcVar1)(uVar3,param_3);
      if (cVar2 == '\0') goto LAB_14840f65f;
    }
    plVar4 = (longlong *)param_1[0x25];
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x330))(param_1,local_c0,param_3);
      (**(code **)(*plVar4 + 0x10))(plVar4,local_78,local_c0);
      if ((local_78[0] & 1) == 0) goto LAB_14840f60d;
      uVar5 = (undefined4)local_70;
      uVar6 = (undefined4)((ulonglong)local_70 >> 0x20);
LAB_14840f598:
      param_2[1] = 0x6300000001;
      *param_2 = param_1;
      param_2[3] = 0;
      param_2[2] = CONCAT44(uVar6,uVar5);
      goto LAB_14840f684;
    }
    local_78[0] = 0;
    local_70 = 0x47efffffe0000000;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0x3ff0000000000000;
    local_50 = 0;
    local_4c = 0;
    uStack_44 = 0;
    local_3c = 0;
LAB_14840f60d:
    if ((char)param_1[0x24] == '\x01') {
      plVar4 = (longlong *)param_1[0x26];
      (**(code **)(*param_1 + 0x330))(param_1,local_c0,param_3);
      (**(code **)(*plVar4 + 0x10))(plVar4,local_100,local_c0);
      if (local_100[0] == '\x01') {
        *(undefined1 *)((longlong)param_1 + 0x17d) = 1;
        uVar5 = (undefined4)local_100._8_8_;
        uVar6 = SUB84(local_100._8_8_,4);
        goto LAB_14840f598;
      }
    }
  }
LAB_14840f65f:
  param_2[1] = 0x6300000002;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
LAB_14840f684:
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840f6b2 FUN_14840f6b2 body=238 status=ok
// SIG undefined FUN_14840f6b2(void)

undefined4 *
FUN_14840f6b2(longlong *param_1,undefined4 *param_2,longlong param_3,undefined4 param_4)

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
  longlong lVar12;
  
  if (param_1[0x25] != 0) {
    FUN_14840da1c(param_1 + 0x10,param_3);
  }
  if (param_1[0x26] != 0) {
    FUN_14840da1c(param_1 + 0x10,param_3);
  }
  lVar12 = *(longlong *)(param_3 + 0x98);
  param_1[0x27] = *(longlong *)(param_3 + 0x90);
  param_1[0x28] = lVar12;
  uVar1 = *(undefined4 *)(param_3 + 0xb4);
  uVar2 = *(undefined4 *)(param_3 + 0xb8);
  uVar3 = *(undefined4 *)(param_3 + 0xbc);
  uVar4 = *(undefined4 *)(param_3 + 0xc0);
  uVar5 = *(undefined4 *)(param_3 + 0xc4);
  uVar6 = *(undefined4 *)(param_3 + 200);
  uVar7 = *(undefined4 *)(param_3 + 0xcc);
  uVar8 = *(undefined4 *)(param_3 + 0xd0);
  uVar9 = *(undefined4 *)(param_3 + 0xd4);
  uVar10 = *(undefined4 *)(param_3 + 0xd8);
  uVar11 = *(undefined4 *)(param_3 + 0xdc);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_3 + 0xb0);
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar3;
  *(undefined4 *)(param_1 + 0x2b) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar5;
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar7;
  *(undefined4 *)(param_1 + 0x2d) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar9;
  *(undefined4 *)(param_1 + 0x2e) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar11;
  *(undefined4 *)(param_1 + 0x2f) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  if (*(char *)((longlong)param_1 + 0x17d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x17c) = 1;
    (**(code **)(*param_1 + 0x370))(param_1,param_3,param_4);
  }
  *param_2 = 1;
  *(longlong **)(param_2 + 2) = param_1;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14840f7a0 FUN_14840f7a0 body=942 status=ok
// SIG undefined FUN_14840f7a0(void)

undefined4 * FUN_14840f7a0(longlong *param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined1 auStack_1d8 [40];
  char local_1b0 [72];
  char local_168 [64];
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  uint local_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  uint local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if (param_1[0x25] != 0) {
    FUN_14840da1c(param_1 + 0x10,param_3);
  }
  if (param_1[0x26] != 0) {
    FUN_14840da1c(param_1 + 0x10,param_3);
  }
  uVar3 = (**(code **)(*param_1 + 0x2b0))(param_1);
  uVar4 = 2;
  if ((*param_3 & uVar3) != 0) {
    if ((*(char *)((longlong)param_1 + 0x17c) == '\0') &&
       (fVar5 = (float)SQRT(((double)param_1[0x28] - *(double *)(param_3 + 0x26)) *
                            ((double)param_1[0x28] - *(double *)(param_3 + 0x26)) +
                            ((double)param_1[0x27] - *(double *)(param_3 + 0x24)) *
                            ((double)param_1[0x27] - *(double *)(param_3 + 0x24))),
       *(float *)((longlong)param_1 + 0x124) <= fVar5 &&
       fVar5 != *(float *)((longlong)param_1 + 0x124))) {
      local_128 = *(undefined8 *)param_3;
      local_120 = *(undefined8 *)(param_3 + 2);
      local_118 = *(undefined8 *)(param_3 + 4);
      local_110 = *(longlong *)(param_3 + 6);
      if (local_110 != 0) {
        LOCK();
        *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
        UNLOCK();
      }
      local_108 = param_3[8];
      local_100 = *(undefined8 *)(param_3 + 10);
      local_f8 = *(undefined8 *)(param_3 + 0xc);
      local_f0 = *(longlong *)(param_3 + 0xe);
      if (local_f0 != 0) {
        LOCK();
        *(int *)(local_f0 + 8) = *(int *)(local_f0 + 8) + 1;
        UNLOCK();
      }
      local_e8 = param_3[0x10];
      local_e0 = *(undefined8 *)(param_3 + 0x12);
      local_d8 = *(undefined8 *)(param_3 + 0x14);
      local_d0 = *(longlong *)(param_3 + 0x16);
      if (local_d0 != 0) {
        LOCK();
        *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + 1;
        UNLOCK();
      }
      local_c8 = param_3[0x18];
      local_c0 = *(undefined8 *)(param_3 + 0x1a);
      local_b8 = *(undefined8 *)(param_3 + 0x1c);
      local_b0 = *(longlong *)(param_3 + 0x1e);
      if (local_b0 != 0) {
        LOCK();
        *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
        UNLOCK();
      }
      local_a8 = param_3[0x20];
      local_80 = *(undefined8 *)(param_3 + 0x2a);
      local_a0 = *(undefined8 *)(param_3 + 0x22);
      uStack_88 = *(undefined8 *)(param_3 + 0x28);
      lStack_98 = param_1[0x27];
      local_90 = param_1[0x28];
      local_78 = (undefined4)param_1[0x29];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x14c);
      uStack_70 = (undefined4)param_1[0x2a];
      uStack_6c = *(undefined4 *)((longlong)param_1 + 0x154);
      local_68 = (undefined4)param_1[0x2b];
      uStack_64 = *(undefined4 *)((longlong)param_1 + 0x15c);
      uStack_60 = (undefined4)param_1[0x2c];
      uStack_5c = *(undefined4 *)((longlong)param_1 + 0x164);
      local_58 = (undefined4)param_1[0x2d];
      uStack_54 = *(undefined4 *)((longlong)param_1 + 0x16c);
      uStack_50 = (undefined4)param_1[0x2e];
      uStack_4c = *(undefined4 *)((longlong)param_1 + 0x174);
      plVar1 = (longlong *)param_1[0x26];
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*param_1 + 0x330))(param_1,local_1b0,&local_128);
        (**(code **)(*plVar1 + 0x10))(plVar1,local_168,local_1b0);
        if (local_168[0] == '\x01') {
          *(undefined1 *)((longlong)param_1 + 0x17c) = 1;
          (**(code **)(*param_1 + 0x370))(param_1,&local_128,(int)param_1[0x2f]);
        }
      }
      FUN_145c1543a(&local_128);
    }
    cVar2 = (**(code **)(*param_1 + 0x310))(param_1,param_3);
    if (cVar2 == '\0') {
      if (*(char *)((longlong)param_1 + 0x17c) != '\0') {
        (**(code **)(*param_1 + 0x378))(param_1,param_3,param_4);
      }
    }
    else {
      if (*(char *)((longlong)param_1 + 0x17c) == '\0') {
        plVar1 = (longlong *)param_1[0x25];
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*param_1 + 0x330))(param_1,&local_128,param_3);
          (**(code **)(*plVar1 + 0x10))(plVar1,local_1b0,&local_128);
          uVar4 = 3;
          if (local_1b0[0] == '\x01') {
            (**(code **)(*param_1 + 0x368))(param_1,param_3,param_4);
          }
          goto LAB_14840f895;
        }
      }
      else {
        (**(code **)(*param_1 + 0x380))(param_1,param_3,param_4);
        *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
      }
      uVar4 = 3;
    }
  }
LAB_14840f895:
  *param_2 = uVar4;
  *(undefined8 *)(param_2 + 2) = 0;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840fb50 FUN_14840fb50 body=48 status=ok
// SIG undefined FUN_14840fb50(void)

void FUN_14840fb50(longlong param_1)

{
  if (*(char *)(param_1 + 0x17c) == '\x01') {
    if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(param_1 + 0x130) + 0x30))();
    }
    *(undefined1 *)(param_1 + 0x17c) = 0;
  }
  return;
}



// FUNCTION 14840fb80 FUN_14840fb80 body=94 status=ok
// SIG undefined FUN_14840fb80(void)

void FUN_14840fb80(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x25];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840fbe0 FUN_14840fbe0 body=94 status=ok
// SIG undefined FUN_14840fbe0(void)

void FUN_14840fbe0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x26];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_60);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840fc40 FUN_14840fc40 body=94 status=ok
// SIG undefined FUN_14840fc40(void)

void FUN_14840fc40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x26];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
    (**(code **)(*plVar1 + 0x20))(plVar1,local_60);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840fca0 FUN_14840fca0 body=94 status=ok
// SIG undefined FUN_14840fca0(void)

void FUN_14840fca0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined1 local_60 [72];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)param_1[0x26];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*param_1 + 0x330))(param_1,local_60,param_2);
    (**(code **)(*plVar1 + 0x28))(plVar1,local_60);
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840fd04 FUN_14840fd04 body=233 status=ok
// SIG undefined FUN_14840fd04(void)

void FUN_14840fd04(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_88 [32];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_1 + 0x70) = param_2;
  FUN_1413a517a(param_1 + 0x78,param_4);
  local_40 = *param_4;
  local_38 = param_4[1];
  plVar3 = (longlong *)param_4[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14aeb5780;
  local_68[0] = &LAB_143b4df4e;
  local_30 = plVar3;
  FUN_14840df3c(param_1 + 0x90,param_3,local_68);
  if (local_68[0] != (undefined1 *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
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
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840fdee FUN_14840fdee body=146 status=ok
// SIG undefined FUN_14840fdee(void)

longlong * FUN_14840fdee(longlong param_1,longlong *param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  pcVar1 = *(code **)(param_1 + 0x30);
  if (pcVar1 == (code *)0x0) {
LAB_14840fe2b:
    if (((*(longlong *)(param_1 + 0x78) == DAT_14c966e68) ||
        (*(longlong *)(param_3 + 8) == *(longlong *)(param_1 + 0x78))) &&
       (uVar3 = 1, *(char *)(param_3 + 0x20) != '\0')) goto LAB_14840fe50;
  }
  else {
    plVar5 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0x40);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar2 = (*pcVar1)(uVar4,param_3);
    if (cVar2 != '\0') goto LAB_14840fe2b;
  }
  uVar3 = 2;
  param_1 = 0;
LAB_14840fe50:
  *(undefined4 *)(param_2 + 1) = uVar3;
  *param_2 = param_1;
  *(undefined4 *)((longlong)param_2 + 0xc) = 99;
  param_2[3] = 0;
  param_2[2] = 0x7fefffffffffffff;
  return param_2;
}



// FUNCTION 14840fe80 FUN_14840fe80 body=87 status=ok
// SIG undefined FUN_14840fe80(void)

undefined4 * FUN_14840fe80(longlong param_1,undefined4 *param_2,longlong param_3)

{
  FUN_1413a517a(param_1 + 0xf0,param_3 + 8);
  FUN_14840da1c(param_1 + 0x90,param_3,*(undefined8 *)(param_1 + 0x70));
  *param_2 = 1;
  *(longlong *)(param_2 + 2) = param_1;
  param_2[4] = 99;
  *(undefined8 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 14840fed8 FUN_14840fed8 body=87 status=ok
// SIG undefined FUN_14840fed8(void)

uint * FUN_14840fed8(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  
  uVar1 = 2;
  if (*(longlong *)(param_3 + 8) == *(longlong *)(param_1 + 0xf0)) {
    FUN_14840da1c(param_1 + 0x90,param_3,*(undefined8 *)(param_1 + 0x70));
    uVar1 = *(byte *)(param_3 + 0x22) | 2;
  }
  *param_2 = uVar1;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 99;
  param_2[6] = 0;
  param_2[7] = 0;
  return param_2;
}



// FUNCTION 14840ff4f FUN_14840ff4f body=148 status=ok
// SIG undefined FUN_14840ff4f(void)

undefined8 FUN_14840ff4f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b7285e();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14840ffe4 FUN_14840ffe4 body=358 status=ok
// SIG undefined FUN_14840ffe4(void)

void FUN_14840ffe4(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148434e54();
  uVar1 = FUN_1409ffe1d();
  plVar2 = (longlong *)FUN_14841014b(uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar2);
  }
  param_1[0x11] = (longlong)plVar2;
  (**(code **)(*plVar2 + 0x358))(plVar2,param_1 + 7);
  local_30._0_4_ = 0x32;
  (**(code **)(*(longlong *)param_1[0x11] + 0x2a8))((longlong *)param_1[0x11],&local_30);
  (**(code **)(*param_1 + 0x2d0))(param_1,param_1[0x11]);
  uVar1 = FUN_1409ffe1d();
  plVar2 = (longlong *)FUN_1484101e0(uVar1);
  (**(code **)(*plVar2 + 0x300))(plVar2,param_1 + 8);
  local_30 = CONCAT44(local_30._4_4_,0x32);
  (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_30);
  (**(code **)(*param_1 + 0x2d0))(param_1,plVar2);
  local_30 = FUN_148410275(param_1);
  FUN_14841030a(param_1 + 9,&local_30);
  local_30 = FUN_148410375(param_1);
  FUN_14841040a(param_1 + 0xb,&local_30);
  local_30 = FUN_148410475(param_1);
  FUN_14841050a(param_1 + 0xd,&local_30);
  local_30 = FUN_148410575(param_1);
  FUN_14841060a(param_1 + 0xf,&local_30);
  *(undefined1 *)(param_1 + 0x22) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841014b FUN_14841014b body=148 status=ok
// SIG undefined FUN_14841014b(void)

undefined8 FUN_14841014b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14585ddb0();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484101e0 FUN_1484101e0 body=148 status=ok
// SIG undefined FUN_1484101e0(void)

undefined8 FUN_1484101e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14587e036();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148410275 FUN_148410275 body=148 status=ok
// SIG undefined FUN_148410275(void)

undefined8 FUN_148410275(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b11344();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841030a FUN_14841030a body=107 status=ok
// SIG undefined FUN_14841030a(void)

longlong * FUN_14841030a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148410375 FUN_148410375 body=148 status=ok
// SIG undefined FUN_148410375(void)

undefined8 FUN_148410375(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458f22ce();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841040a FUN_14841040a body=107 status=ok
// SIG undefined FUN_14841040a(void)

longlong * FUN_14841040a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148410475 FUN_148410475 body=148 status=ok
// SIG undefined FUN_148410475(void)

undefined8 FUN_148410475(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b117b8();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841050a FUN_14841050a body=107 status=ok
// SIG undefined FUN_14841050a(void)

longlong * FUN_14841050a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148410575 FUN_148410575 body=148 status=ok
// SIG undefined FUN_148410575(void)

undefined8 FUN_148410575(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b1189c();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841060a FUN_14841060a body=107 status=ok
// SIG undefined FUN_14841060a(void)

longlong * FUN_14841060a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148410676 FUN_148410676 body=167 status=ok
// SIG undefined FUN_148410676(void)

void FUN_148410676(longlong param_1,longlong *param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*param_2 != 0) && (param_2[1] != 0)) && ((int)param_2[2] != 0)) {
    cVar1 = FUN_1484320ac(param_1,param_2,param_3,&local_20);
    if (cVar1 != '\0') {
      lVar2 = param_2[6];
      if (lVar2 == 0) {
        lVar2 = FUN_1409ffe1d();
      }
      lVar4 = local_20 + 0x28;
      if (local_20 == 0) {
        lVar4 = 0;
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x50);
      }
      local_28 = FUN_14841071e(uVar3,lVar4,lVar2);
      FUN_1484107bc(param_1 + 0x58);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841071e FUN_14841071e body=157 status=ok
// SIG undefined FUN_14841071e(void)

longlong FUN_14841071e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14841b88a(param_3);
  if (param_1 == (longlong *)0x0) {
LAB_148410758:
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)(*param_1 + 8))(param_1);
    if (local_28 == 0) goto LAB_148410758;
  }
  FUN_148417e64(lVar1 + 0xd0);
  if (param_2 != (longlong *)0x0) {
    local_28 = (**(code **)(*param_2 + 8))(param_2);
    if (local_28 != 0) goto LAB_148410783;
  }
  local_28 = 0;
LAB_148410783:
  FUN_14841b920(lVar1 + 0xe0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484107bc FUN_1484107bc body=107 status=ok
// SIG undefined FUN_1484107bc(void)

longlong * FUN_1484107bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 14841082c FUN_14841082c body=207 status=ok
// SIG undefined FUN_14841082c(void)

char * FUN_14841082c(longlong param_1,char *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = -0x20;
  param_2[0xc] = -1;
  param_2[0xd] = -1;
  param_2[0xe] = -0x11;
  param_2[0xf] = 'G';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = -0x10;
  param_2[0x27] = '?';
  param_2[0x28] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  if ((((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x38), plVar6 != (longlong *)0x0)) &&
      (*(longlong *)(param_1 + 0x10) != 0)) &&
     (((*(longlong *)(param_1 + 0x18) != 0 && (*(longlong *)(param_1 + 0x20) != 0)) &&
      (*(longlong *)(param_1 + 0x28) != 0)))) {
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
    if (*param_2 == '\x01') {
      dVar1 = *(double *)(param_2 + 8);
      dVar2 = param_3[5];
      dVar3 = param_3[4];
      dVar4 = param_3[2];
      dVar5 = param_3[1];
      *(double *)(param_1 + 0x178) = dVar1 * param_3[3] + *param_3;
      *(double *)(param_1 + 0x180) = dVar3 * dVar1 + dVar5;
      *(double *)(param_1 + 0x188) = dVar2 * dVar1 + dVar4;
    }
  }
  return param_2;
}



// FUNCTION 1484108fc FUN_1484108fc body=642 status=ok
// SIG undefined FUN_1484108fc(void)

void FUN_1484108fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 *local_70;
  undefined1 local_68 [24];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x18);
  }
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  lVar1 = param_1 + 0xf8;
  *(undefined8 *)(param_1 + 0x108) = local_40;
  *(undefined4 *)(param_1 + 0xf8) = local_50;
  *(undefined4 *)(param_1 + 0xfc) = uStack_4c;
  *(undefined4 *)(param_1 + 0x100) = uStack_48;
  *(undefined4 *)(param_1 + 0x104) = uStack_44;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x18);
  }
  (**(code **)(*plVar3 + 0x10))(local_50,local_68);
  FUN_14843132f(&local_50,param_1 + 0x178,local_68,lVar1);
  *(undefined8 *)(param_1 + 0xf0) = local_40;
  *(undefined4 *)(param_1 + 0xe0) = local_50;
  *(undefined4 *)(param_1 + 0xe4) = uStack_4c;
  *(undefined4 *)(param_1 + 0xe8) = uStack_48;
  *(undefined4 *)(param_1 + 0xec) = uStack_44;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x18);
  }
  cVar2 = (**(code **)(*plVar3 + 0x20))();
  if (cVar2 == '\0') {
    FUN_1484308ef(lVar1,param_1 + 0x110,param_1 + 0x128);
  }
  else {
    if (*(longlong *)(param_1 + 0x10) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x18);
    }
    (**(code **)(*plVar3 + 0x28))(plVar3,param_1 + 0x110,param_1 + 0x128);
  }
  local_78 = local_68;
  local_70 = &local_50;
  FUN_14842069a(param_1 + 0xe0,lVar1,param_2,param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x150) = local_40;
  *(ulonglong *)(param_1 + 0x140) = CONCAT44(uStack_4c,local_50);
  *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_44,uStack_48);
  *(undefined4 *)(param_1 + 0x158) = local_50;
  *(undefined4 *)(param_1 + 0x15c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x160) = uStack_48;
  *(undefined4 *)(param_1 + 0x164) = uStack_44;
  *(undefined8 *)(param_1 + 0x168) = local_40;
  local_78 = (undefined1 *)(param_1 + 0x128);
  fVar4 = (float)FUN_1484316e2(param_1 + 0x158,param_1 + 0xe0,lVar1,param_1 + 0x110);
  *(float *)(param_1 + 0x170) = fVar4;
  *(float *)(param_1 + 0x174) = fVar4;
  uVar5 = 0;
  if (0.7853982 < ABS(fVar4)) {
    if (2.3561945 <= ABS(fVar4)) {
      uVar5 = 0x40490fdb;
    }
    else {
      uVar5 = *(undefined4 *)(&DAT_14aea0ed0 + (ulonglong)(0.0 < fVar4) * 4);
    }
  }
  *(undefined4 *)(param_1 + 0x194) = uVar5;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x28);
  }
  uVar5 = (**(code **)(*plVar3 + 0x10))();
  *(undefined4 *)(param_1 + 400) = uVar5;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar3 + 0x18))();
  *(undefined1 *)(param_1 + 0xd8) = 1;
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar3 = *(longlong **)(param_1 + 0x38), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x20))(plVar3,*(undefined1 *)(param_1 + 0xd8));
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148410b80 FUN_148410b80 body=425 status=ok
// SIG undefined FUN_148410b80(void)

void FUN_148410b80(longlong param_1,longlong param_2)

{
  code *pcVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  char *local_88;
  undefined4 *local_80;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  char local_51;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar1 = *(code **)(param_1 + 0x58);
  plVar4 = (longlong *)(param_1 + 0x78);
  if (*(longlong **)(param_1 + 0x68) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x68);
  }
  local_50 = param_2;
  uVar3 = (**(code **)(*plVar4 + 8))();
  cVar2 = (*pcVar1)(uVar3);
  if (cVar2 == '\0') {
LAB_148410c5d:
    local_80 = &local_70;
    local_88 = &local_51;
    FUN_14842069a(param_1 + 0xe0,param_1 + 0xf8,param_2,param_2 + 0x18);
    if (local_51 == '\0') goto LAB_148410d00;
    *(undefined8 *)(param_1 + 0x168) = local_60;
    *(undefined4 *)(param_1 + 0x158) = local_70;
    *(undefined4 *)(param_1 + 0x15c) = uStack_6c;
    *(undefined4 *)(param_1 + 0x160) = uStack_68;
    *(undefined4 *)(param_1 + 0x164) = uStack_64;
    local_88 = (char *)(param_1 + 0x128);
    fVar5 = (float)FUN_1484316e2(param_1 + 0x158,param_1 + 0xe0,param_1 + 0xf8,param_1 + 0x110);
    *(float *)(param_1 + 0x174) = fVar5;
    fVar5 = fVar5 - *(float *)(param_1 + 0x170);
  }
  else {
    pcVar1 = *(code **)(param_1 + 0x98);
    plVar4 = (longlong *)(param_1 + 0xb8);
    if (*(longlong **)(param_1 + 0xa8) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0xa8);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    cVar2 = (*pcVar1)(uVar3,&local_50,&local_48);
    if (cVar2 == '\0') goto LAB_148410c5d;
    *(undefined8 *)(param_1 + 0x168) = local_38;
    *(undefined4 *)(param_1 + 0x158) = local_48;
    *(undefined4 *)(param_1 + 0x15c) = uStack_44;
    *(undefined4 *)(param_1 + 0x160) = uStack_40;
    *(undefined4 *)(param_1 + 0x164) = uStack_3c;
    local_88 = (char *)(param_1 + 0x128);
    fVar5 = (float)FUN_1484316e2(param_1 + 0x158,param_1 + 0xe0,param_1 + 0xf8,param_1 + 0x110);
    *(float *)(param_1 + 0x174) = fVar5;
    fVar5 = fVar5 - *(float *)(param_1 + 0x194);
  }
  fVar5 = fVar5 + *(float *)(param_1 + 400);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar4 + 0x20))(fVar5,fVar5);
LAB_148410d00:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148410d2a FUN_148410d2a body=98 status=ok
// SIG undefined FUN_148410d2a(void)

void FUN_148410d2a(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x28))();
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148410d7e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 148410d8c FUN_148410d8c body=98 status=ok
// SIG undefined FUN_148410d8c(void)

void FUN_148410d8c(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x28))();
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148410de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 148410dee FUN_148410dee body=95 status=ok
// SIG undefined FUN_148410dee(void)

undefined1 * FUN_148410dee(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x30), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 148410e6a FUN_148410e6a body=34 status=ok
// SIG undefined FUN_148410e6a(void)

undefined8 FUN_148410e6a(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x28) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x30);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,1);
  return 1;
}



// FUNCTION 148410ec9 FUN_148410ec9 body=148 status=ok
// SIG undefined FUN_148410ec9(void)

undefined8 FUN_148410ec9(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b72a32();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148410f5e FUN_148410f5e body=361 status=ok
// SIG undefined FUN_148410f5e(void)

void FUN_148410f5e(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148434e54();
  uVar1 = FUN_1409ffe1d();
  plVar2 = (longlong *)FUN_14841014b(uVar1);
  if ((plVar2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar2);
  }
  param_1[0x12] = (longlong)plVar2;
  (**(code **)(*plVar2 + 0x358))(plVar2,param_1 + 7);
  local_30._0_4_ = 0x32;
  (**(code **)(*(longlong *)param_1[0x12] + 0x2a8))((longlong *)param_1[0x12],&local_30);
  (**(code **)(*param_1 + 0x2d0))(param_1,param_1[0x12]);
  uVar1 = FUN_1409ffe1d();
  plVar2 = (longlong *)FUN_1484101e0(uVar1);
  (**(code **)(*plVar2 + 0x300))(plVar2,param_1 + 8);
  local_30 = CONCAT44(local_30._4_4_,0x32);
  (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_30);
  (**(code **)(*param_1 + 0x2d0))(param_1,plVar2);
  local_30 = FUN_148410275(param_1);
  FUN_14841030a(param_1 + 9,&local_30);
  local_30 = FUN_148410375(param_1);
  FUN_14841040a(param_1 + 0xb,&local_30);
  local_30 = FUN_148410475(param_1);
  FUN_14841050a(param_1 + 0xe,&local_30);
  local_30 = FUN_148410575(param_1);
  FUN_14841060a(param_1 + 0x10,&local_30);
  *(undefined1 *)((longlong)param_1 + 0x121) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484110c8 FUN_1484110c8 body=175 status=ok
// SIG undefined FUN_1484110c8(void)

undefined4 FUN_1484110c8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = 0;
  if (((*param_2 != 0) && (param_2[1] != 0)) && ((int)param_2[2] != 0)) {
    uVar1 = FUN_14843178a(param_1,param_2,param_3,&local_28);
    if ((char)uVar1 != '\0') {
      lVar2 = param_2[6];
      if (lVar2 == 0) {
        lVar2 = FUN_1409ffe1d();
      }
      lVar4 = local_28 + 0x28;
      if (local_28 == 0) {
        lVar4 = 0;
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0x50);
      }
      local_30 = FUN_148411178(uVar3,lVar4,lVar2);
      FUN_148411216(param_1 + 0x58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148411178 FUN_148411178 body=157 status=ok
// SIG undefined FUN_148411178(void)

longlong FUN_148411178(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14841b987(param_3);
  if (param_1 == (longlong *)0x0) {
LAB_1484111b2:
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)(*param_1 + 8))(param_1);
    if (local_28 == 0) goto LAB_1484111b2;
  }
  FUN_148417e64(lVar1 + 0xd0);
  if (param_2 != (longlong *)0x0) {
    local_28 = (**(code **)(*param_2 + 8))(param_2);
    if (local_28 != 0) goto LAB_1484111dd;
  }
  local_28 = 0;
LAB_1484111dd:
  FUN_14841b920(lVar1 + 0xe0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148411216 FUN_148411216 body=107 status=ok
// SIG undefined FUN_148411216(void)

longlong * FUN_148411216(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148411282 FUN_148411282 body=340 status=ok
// SIG undefined FUN_148411282(void)

void FUN_148411282(longlong param_1,longlong *param_2,undefined1 param_3,longlong param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (int)param_2[2];
  if (iVar1 != 0 && (param_2[1] != 0 && *param_2 != 0)) {
    uVar7 = 1;
    if (iVar1 != 2) {
      uVar7 = (uint)(iVar1 == 3) * 2;
    }
    cVar2 = FUN_14843178a(param_1,param_2,param_4,&local_48);
    if (cVar2 != '\0') {
      lVar3 = param_2[6];
      if (lVar3 == 0) {
        lVar3 = FUN_1409ffe1d();
      }
      *(undefined1 *)(param_1 + 0x98) = 1;
      if ((param_4 == 0) ||
         (lVar4 = *(longlong *)(param_4 + 0x30 + (ulonglong)uVar7 * 8), lVar4 == 0)) {
        lVar6 = *(longlong *)(*(longlong *)(*param_2 + 0xa8) + 0x1c8);
        lVar4 = FUN_14841ba1c(lVar3);
        if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_14689c22e(lVar6);
        }
        *(longlong *)(lVar4 + 0x30) = lVar6;
        *(uint *)(lVar4 + 0x38) = uVar7;
        *(undefined1 *)(lVar4 + 0x3c) = 0;
        if (param_4 != 0) {
          *(longlong *)(param_4 + 0x30 + (ulonglong)uVar7 * 8) = lVar4;
        }
      }
      lVar6 = local_48 + 0x28;
      if (local_48 == 0) {
        lVar6 = 0;
      }
      lVar5 = lVar4 + 0x28;
      if (lVar4 == 0) {
        lVar5 = 0;
      }
      lVar3 = FUN_1484113d8(lVar5,lVar6,lVar3);
      local_50 = lVar3;
      FUN_148411476(param_1 + 0x58);
      *(undefined1 *)(lVar3 + 0xf4) = param_3;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484113d8 FUN_1484113d8 body=157 status=ok
// SIG undefined FUN_1484113d8(void)

longlong FUN_1484113d8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14841bab1(param_3);
  if (param_1 == (longlong *)0x0) {
LAB_148411412:
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)(*param_1 + 8))(param_1);
    if (local_28 == 0) goto LAB_148411412;
  }
  FUN_148417e64(lVar1 + 0xd0);
  if (param_2 != (longlong *)0x0) {
    local_28 = (**(code **)(*param_2 + 8))(param_2);
    if (local_28 != 0) goto LAB_14841143d;
  }
  local_28 = 0;
LAB_14841143d:
  FUN_14841b920(lVar1 + 0xe0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148411476 FUN_148411476 body=107 status=ok
// SIG undefined FUN_148411476(void)

longlong * FUN_148411476(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 1484114e2 FUN_1484114e2 body=207 status=ok
// SIG undefined FUN_1484114e2(void)

char * FUN_1484114e2(longlong param_1,char *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = -0x20;
  param_2[0xc] = -1;
  param_2[0xd] = -1;
  param_2[0xe] = -0x11;
  param_2[0xf] = 'G';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  param_2[0x1c] = '\0';
  param_2[0x1d] = '\0';
  param_2[0x1e] = '\0';
  param_2[0x1f] = '\0';
  param_2[0x20] = '\0';
  param_2[0x21] = '\0';
  param_2[0x22] = '\0';
  param_2[0x23] = '\0';
  param_2[0x24] = '\0';
  param_2[0x25] = '\0';
  param_2[0x26] = -0x10;
  param_2[0x27] = '?';
  param_2[0x28] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  if ((((*(longlong *)(param_1 + 0x38) != 0) &&
       (plVar6 = *(longlong **)(param_1 + 0x40), plVar6 != (longlong *)0x0)) &&
      (*(longlong *)(param_1 + 0x10) != 0)) &&
     (((*(longlong *)(param_1 + 0x18) != 0 && (*(longlong *)(param_1 + 0x20) != 0)) &&
      (*(longlong *)(param_1 + 0x28) != 0)))) {
    (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
    if (*param_2 == '\x01') {
      dVar1 = *(double *)(param_2 + 8);
      dVar2 = param_3[5];
      dVar3 = param_3[4];
      dVar4 = param_3[2];
      dVar5 = param_3[1];
      *(double *)(param_1 + 0x160) = dVar1 * param_3[3] + *param_3;
      *(double *)(param_1 + 0x168) = dVar3 * dVar1 + dVar5;
      *(double *)(param_1 + 0x170) = dVar2 * dVar1 + dVar4;
    }
  }
  return param_2;
}



// FUNCTION 1484115b2 FUN_1484115b2 body=618 status=ok
// SIG undefined FUN_1484115b2(void)

void FUN_1484115b2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  float *local_98;
  longlong local_90;
  undefined4 *local_88;
  undefined1 *local_80;
  float local_74;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_54 [4];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x170);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x16c);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  (**(code **)(*plVar1 + 0x18))(*(undefined4 *)(param_1 + 0x160),&local_50);
  *(undefined8 *)(param_1 + 0x118) = local_40;
  *(undefined4 *)(param_1 + 0x108) = local_50;
  *(undefined4 *)(param_1 + 0x10c) = uStack_4c;
  *(undefined4 *)(param_1 + 0x110) = uStack_48;
  *(undefined4 *)(param_1 + 0x114) = uStack_44;
  local_90 = param_1 + 0x150;
  local_80 = local_54;
  local_98 = (float *)(param_1 + 0x120);
  local_88 = &local_50;
  FUN_148431461(param_1 + 0xf0,param_1 + 0x108,param_2,param_2 + 0x18);
  if (*(longlong *)(param_1 + 0x10) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  (**(code **)(*plVar1 + 0x10))(plVar1,&local_70);
  if (*(char *)(param_1 + 0x60) == '\0') {
    uVar3 = 0x3f800000;
  }
  else {
    uVar3 = 0xbf800000;
  }
  if (0.0 <= (*(double *)(param_1 + 0x130) - local_60) * *(double *)(param_1 + 0x118) +
             (*(double *)(param_1 + 0x120) - local_70) * *(double *)(param_1 + 0x108) +
             (*(double *)(param_1 + 0x128) - local_68) * *(double *)(param_1 + 0x110)) {
    uVar3 = 0x3f800000;
  }
  *(undefined4 *)(param_1 + 0x158) = uVar3;
  local_98 = &local_74;
  FUN_1484313c3(param_1 + 0xf0,param_1 + 0x108,&local_70,&local_50);
  *(float *)(param_1 + 0x17c) = *(float *)(param_1 + 0x150) - local_74;
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_1 + 300);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x130);
  fVar2 = *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0x150) = fVar2;
  *(float *)(param_1 + 0x154) = fVar2;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  uVar3 = (**(code **)(*plVar1 + 0x10))();
  *(undefined4 *)(param_1 + 0x178) = uVar3;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x18))();
  *(undefined1 *)(param_1 + 0xe9) = 1;
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x10))();
  }
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined1 *)(param_1 + 0xe9));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841181e FUN_14841181e body=371 status=ok
// SIG undefined FUN_14841181e(void)

void FUN_14841181e(longlong param_1,longlong param_2)

{
  float *pfVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  float *local_88;
  float *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 local_60 [24];
  float local_48;
  undefined1 local_44 [4];
  longlong local_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pcVar2 = *(code **)(param_1 + 0x68);
  plVar5 = (longlong *)(param_1 + 0x88);
  if (*(longlong **)(param_1 + 0x78) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x78);
  }
  local_40 = param_2;
  uVar4 = (**(code **)(*plVar5 + 8))();
  cVar3 = (*pcVar2)(uVar4);
  if (cVar3 != '\0') {
    pcVar2 = *(code **)(param_1 + 0xa8);
    plVar5 = (longlong *)(param_1 + 200);
    if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xb8);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,&local_40,local_38);
    if (cVar3 != '\0') {
      pfVar1 = (float *)(param_1 + 0x154);
      local_88 = pfVar1;
      FUN_1484313c3(param_1 + 0xf0,param_1 + 0x108,local_38,param_1 + 0x138);
      local_48 = 0.0;
      if (*(char *)(param_1 + 0xe8) == '\x01') {
        local_48 = *(float *)(param_1 + 0x17c);
      }
      local_48 = local_48 + *pfVar1;
      *pfVar1 = local_48;
      goto LAB_148411940;
    }
  }
  local_88 = (float *)(param_1 + 0x138);
  local_70 = local_44;
  local_78 = local_60;
  local_80 = &local_48;
  FUN_148431461(param_1 + 0xf0,param_1 + 0x108,param_2,param_2 + 0x18);
  local_48 = *(float *)(param_1 + 0x158) * local_48;
  *(float *)(param_1 + 0x154) = local_48;
LAB_148411940:
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x28);
  }
  local_48 = local_48 - *(float *)(param_1 + 0x150);
  (**(code **)(*plVar5 + 0x20))(local_48,*(float *)(param_1 + 0x178) + local_48);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148411992 FUN_148411992 body=98 status=ok
// SIG undefined FUN_148411992(void)

void FUN_148411992(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x28))();
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0xe9) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001484119e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 1484119f4 FUN_1484119f4 body=98 status=ok
// SIG undefined FUN_1484119f4(void)

void FUN_1484119f4(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x28))();
  if ((*(longlong *)(param_1 + 0x48) != 0) && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))();
  }
  *(undefined1 *)(param_1 + 0xe9) = 0;
  if ((*(longlong *)(param_1 + 0x38) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x40), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000148411a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 148411a56 FUN_148411a56 body=95 status=ok
// SIG undefined FUN_148411a56(void)

undefined1 * FUN_148411a56(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 8) = 0x47efffffe0000000;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0x3ff0000000000000;
  param_2[0x28] = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x3c) = 0;
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 148411ad2 FUN_148411ad2 body=34 status=ok
// SIG undefined FUN_148411ad2(void)

undefined8 FUN_148411ad2(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    plVar1 = (longlong *)0x0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x38);
  }
  (**(code **)(*plVar1 + 0x18))(plVar1,1);
  return 1;
}



// FUNCTION 148411b46 FUN_148411b46 body=467 status=ok
// SIG undefined FUN_148411b46(void)

double * FUN_148411b46(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_1 + 8);
  local_88 = 0.0;
  uStack_80 = 0.0;
  local_78 = 0.0;
  uVar9 = 2;
  if ((int)*(uint *)(param_1 + 0x10) < 2) {
    uVar9 = *(uint *)(param_1 + 0x10);
  }
  uVar8 = 0;
  if (0 < (int)uVar9) {
    uVar8 = uVar9;
  }
  (&local_88)[uVar8] = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x14) == '\x01') {
    dVar1 = *(double *)(lVar5 + 0x250);
    dVar2 = *(double *)(lVar5 + 0x240);
    dVar3 = *(double *)(lVar5 + 0x248);
    dVar6 = dVar3 * local_78 - uStack_80 * dVar1;
    dVar6 = dVar6 + dVar6;
    dVar4 = *(double *)(lVar5 + 600);
    dVar7 = dVar2 * uStack_80 - local_88 * dVar3;
    dVar7 = dVar7 + dVar7;
    dVar10 = dVar1 * local_88 - local_78 * dVar2;
    dVar10 = dVar10 + dVar10;
    *param_2 = (dVar3 * dVar7 - dVar10 * dVar1) + dVar4 * dVar6 + local_88;
    param_2[1] = (dVar1 * dVar6 - dVar7 * dVar2) + dVar4 * dVar10 + uStack_80;
    param_2[2] = (dVar2 * dVar10 - dVar6 * dVar3) + dVar4 * dVar7 + local_78;
  }
  else {
    param_2[2] = local_78;
    *(undefined4 *)param_2 = (undefined4)local_88;
    *(undefined4 *)((longlong)param_2 + 4) = local_88._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148411d1a FUN_148411d1a body=676 status=ok
// SIG undefined FUN_148411d1a(void)

void FUN_148411d1a(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  double dVar12;
  
  lVar8 = *(longlong *)(param_1 + 8);
  *param_2 = 0.0;
  param_2[1] = 1.0;
  param_2[2] = 0.0;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 1.0;
  iVar11 = 2;
  if (*(int *)(param_1 + 0x10) < 2) {
    iVar11 = *(int *)(param_1 + 0x10);
  }
  if (iVar11 < 1) {
    iVar11 = 0;
  }
  if (iVar11 == 2) {
    *param_2 = 1.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    *param_3 = 0.0;
    param_3[1] = 1.0;
    param_3[2] = 0.0;
  }
  else if (iVar11 == 1) {
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 1.0;
    *param_3 = 1.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
  }
  if (*(char *)(param_1 + 0x14) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar4 = *(double *)(lVar8 + 0x250);
    dVar5 = *(double *)(lVar8 + 0x240);
    dVar6 = *(double *)(lVar8 + 0x248);
    dVar9 = dVar6 * dVar3 - dVar2 * dVar4;
    dVar9 = dVar9 + dVar9;
    dVar7 = *(double *)(lVar8 + 600);
    dVar10 = dVar5 * dVar2 - dVar1 * dVar6;
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
    dVar12 = dVar12 + dVar12;
    *param_2 = (dVar6 * dVar10 - dVar12 * dVar4) + dVar7 * dVar9 + dVar1;
    param_2[1] = (dVar4 * dVar9 - dVar10 * dVar5) + dVar7 * dVar12 + dVar2;
    param_2[2] = (dVar5 * dVar12 - dVar9 * dVar6) + dVar7 * dVar10 + dVar3;
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar3 = param_3[2];
    dVar4 = *(double *)(lVar8 + 0x250);
    dVar5 = *(double *)(lVar8 + 0x240);
    dVar6 = *(double *)(lVar8 + 0x248);
    dVar9 = dVar6 * dVar3 - dVar2 * dVar4;
    dVar9 = dVar9 + dVar9;
    dVar7 = *(double *)(lVar8 + 600);
    dVar10 = dVar5 * dVar2 - dVar1 * dVar6;
    dVar10 = dVar10 + dVar10;
    dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
    dVar12 = dVar12 + dVar12;
    *param_3 = (dVar6 * dVar10 - dVar12 * dVar4) + dVar7 * dVar9 + dVar1;
    param_3[1] = (dVar4 * dVar9 - dVar10 * dVar5) + dVar7 * dVar12 + dVar2;
    param_3[2] = (dVar5 * dVar12 - dVar9 * dVar6) + dVar7 * dVar10 + dVar3;
  }
  return;
}



// FUNCTION 148411ff7 FUN_148411ff7 body=148 status=ok
// SIG undefined FUN_148411ff7(void)

undefined8 FUN_148411ff7(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1458f20fa();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148412090 FUN_148412090 body=569 status=ok
// SIG undefined FUN_148412090(void)

void FUN_148412090(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  longlong local_1a0;
  undefined4 local_198;
  undefined1 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  double local_168;
  double dStack_160;
  double local_158;
  longlong local_148 [37];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(char *)(param_1 + 0x38) != '\0') && (*(char *)(param_1 + 0x78) == '\x01')) {
    FUN_141300fc0(local_148);
    FUN_14845339e(local_148,param_2);
    if (*(char *)(param_1 + 0x95) == '\x01') {
      if ((*(char *)(param_1 + 0x79) != '\x01') || (1e-08 < ABS(*(float *)(param_1 + 0x40) + -1.0)))
      {
        local_190 = *(undefined1 *)(param_1 + 0x94);
        local_198 = *(undefined4 *)(param_1 + 0x98);
        local_1a0 = param_1 + 0x9c;
        local_1a8 = *(undefined4 *)(param_1 + 0x7c);
        local_158 = *(double *)(param_1 + 0x70);
        local_168 = *(double *)(param_1 + 0x60);
        dStack_160 = *(double *)(param_1 + 0x68);
        local_178 = *(undefined8 *)(param_1 + 0x58);
        local_188 = *(undefined4 *)(param_1 + 0x48);
        uStack_184 = *(undefined4 *)(param_1 + 0x4c);
        uStack_180 = *(undefined4 *)(param_1 + 0x50);
        uStack_17c = *(undefined4 *)(param_1 + 0x54);
        (**(code **)(local_148[0] + 0x18))
                  (local_148,&local_188,&local_168,
                   *(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x3c));
      }
      if (*(char *)(param_1 + 0x7a) == '\x01') {
        dVar1 = (double)*(float *)(param_1 + 0x44);
      }
      else {
        dVar1 = 1.0;
      }
      local_1a8 = *(undefined4 *)(param_1 + 0x98);
      dVar2 = (double)*(float *)(param_1 + 0x3c);
      local_158 = *(double *)(param_1 + 0x70) * dVar2 * dVar1 + *(double *)(param_1 + 0x58);
      dStack_160 = *(double *)(param_1 + 0x68) * dVar2 * dVar1 + *(double *)(param_1 + 0x50);
      local_168 = dVar2 * *(double *)(param_1 + 0x60) * dVar1 + *(double *)(param_1 + 0x48);
      local_1a0 = CONCAT71(local_1a0._1_7_,*(undefined1 *)(param_1 + 0x94));
      FUN_1484122ca(local_148,param_1 + 0x48,&local_168,param_1 + 0x9c);
    }
    if (*(char *)(param_1 + 0x79) == '\x01') {
      local_190 = *(undefined1 *)(param_1 + 0x94);
      local_198 = *(undefined4 *)(param_1 + 0x90);
      local_1a0 = param_1 + 0x80;
      local_1a8 = *(undefined4 *)(param_1 + 0x7c);
      local_158 = *(double *)(param_1 + 0x70);
      local_168 = *(double *)(param_1 + 0x60);
      dStack_160 = *(double *)(param_1 + 0x68);
      local_178 = *(undefined8 *)(param_1 + 0x58);
      local_188 = *(undefined4 *)(param_1 + 0x48);
      uStack_184 = *(undefined4 *)(param_1 + 0x4c);
      uStack_180 = *(undefined4 *)(param_1 + 0x50);
      uStack_17c = *(undefined4 *)(param_1 + 0x54);
      (**(code **)(local_148[0] + 0x18))
                (local_148,&local_188,&local_168,*(undefined4 *)(param_1 + 0x3c));
    }
    FUN_14845342a(local_148);
    FUN_14008cd94(local_148);
  }
  if ((local_20 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484122ca FUN_1484122ca body=733 status=ok
// SIG undefined FUN_1484122ca(void)

void FUN_1484122ca(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar4 = *param_3 * (double)param_1[0x20];
  dVar5 = param_3[1] * (double)param_1[0x21];
  dVar3 = param_3[2] * (double)param_1[0x22];
  dVar1 = (double)param_1[0x1b];
  dVar2 = (double)param_1[0x1b];
  dVar9 = (double)param_1[0x18];
  dVar10 = (double)param_1[0x19];
  dVar11 = (double)param_1[0x1a];
  dVar6 = dVar5 * dVar9 - dVar4 * dVar10;
  dVar7 = dVar3 * dVar10 - dVar5 * dVar11;
  dVar8 = dVar4 * dVar11 - dVar3 * dVar9;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  dVar5 = (dVar11 * dVar7 - dVar9 * dVar6) + dVar2 * dVar8 + dVar5 + (double)param_1[0x1d];
  local_b8._8_4_ = SUB84(dVar5,0);
  local_b8._0_8_ = (dVar6 * dVar10 - dVar8 * dVar11) + dVar1 * dVar7 + dVar4 + (double)param_1[0x1c]
  ;
  local_b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_a8 = dVar6 * dVar1 + dVar3 + (dVar8 * dVar9 - dVar7 * dVar10) + (double)param_1[0x1e];
  dVar7 = *param_2 * (double)param_1[0x20];
  dVar8 = param_2[1] * (double)param_1[0x21];
  dVar5 = param_2[2] * (double)param_1[0x22];
  dVar3 = dVar8 * dVar9 - dVar10 * dVar7;
  dVar6 = dVar5 * dVar10 - dVar11 * dVar8;
  dVar4 = dVar7 * dVar11 - dVar9 * dVar5;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar3 + dVar3;
  dVar2 = (dVar11 * dVar6 - dVar9 * dVar3) + dVar2 * dVar4 + dVar8 + (double)param_1[0x1d];
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ = (dVar3 * dVar10 - dVar4 * dVar11) + dVar1 * dVar6 + dVar7 + (double)param_1[0x1c]
  ;
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_c8 = dVar3 * dVar1 + dVar5 + (dVar4 * dVar9 - dVar6 * dVar10) + (double)param_1[0x1e];
  local_e0 = param_6;
  local_e8 = param_5;
  (**(code **)(*param_1 + 8))();
  if ((local_a0 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484125aa FUN_1484125aa body=844 status=ok
// SIG undefined FUN_1484125aa(void)

void FUN_1484125aa(longlong param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  double local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(float *)(param_1 + 0x3c) = param_2;
  uVar2 = param_3[1];
  *(undefined8 *)(param_1 + 0x48) = *param_3;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = param_3[2];
  uVar2 = param_4[1];
  *(undefined8 *)(param_1 + 0x60) = *param_4;
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  *(undefined8 *)(param_1 + 0x70) = param_4[2];
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_6;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x240);
    puVar5 = (undefined8 *)local_e8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    if (lVar1 != *(longlong *)(param_1 + 0xb8)) {
      dVar6 = 1.0 / local_98;
      *(double *)(param_1 + 0xc0) = (double)local_a8._0_8_ * dVar6;
      *(double *)(param_1 + 200) = dVar6 * (double)local_a8._8_8_;
      *(double *)(param_1 + 0xd0) = local_98 * dVar6;
      *(longlong *)(param_1 + 0xb8) = lVar1;
    }
    local_c8 = *(undefined8 *)(param_1 + 0x48);
    uStack_c0 = *(undefined8 *)(param_1 + 0x50);
    local_b8 = *(undefined8 *)(param_1 + 0x58);
    uStack_b0 = 0;
    dVar8 = (double)local_e8._0_8_ * 0.0 + (double)local_e8._8_8_ * -0.0;
    dVar9 = (double)local_e8._8_8_ - local_d8 * 0.0;
    dVar6 = local_d8 * 0.0 - (double)local_e8._0_8_;
    dVar8 = dVar8 + dVar8;
    dVar6 = dVar6 + dVar6;
    dVar9 = dVar9 + dVar9;
    local_110 = ((double)local_e8._0_8_ * dVar6 - dVar9 * (double)local_e8._8_8_) +
                dStack_d0 * dVar8 + 1.0;
    local_118 = (local_d8 * dVar9 - dVar8 * (double)local_e8._0_8_) + dStack_d0 * dVar6 + 0.0;
    local_120 = ((double)local_e8._8_8_ * dVar8 - dVar6 * local_d8) + dStack_d0 * dVar9 + 0.0;
    FUN_14022d702(&local_108,&local_120,param_1 + 0x60);
    dVar10 = dStack_d0 * local_108;
    dVar9 = local_d8 * local_100;
    dVar6 = (double)local_e8._8_8_ * local_f8;
    dVar7 = local_d8 * local_f8;
    dVar8 = (double)local_e8._0_8_ * local_f8 * 1.0 +
            dStack_d0 * local_100 + local_d8 * local_108 * -1.0 + (double)local_e8._8_8_ * local_f0;
    local_d8 = dStack_d0 * local_f8 * 1.0 +
               ((local_108 * (double)local_e8._8_8_ * 1.0 + local_f0 * local_d8) -
               (double)local_e8._0_8_ * local_100);
    dStack_d0 = dVar7 * -1.0 +
                ((local_108 * (double)local_e8._0_8_ * -1.0 + local_f0 * dStack_d0) -
                (double)local_e8._8_8_ * local_100);
    local_e8._8_4_ = SUB84(dVar8,0);
    local_e8._0_8_ = dVar6 * -1.0 + dVar9 + dVar10 * 1.0 + (double)local_e8._0_8_ * local_f0;
    local_e8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    dVar6 = (double)param_2;
    local_98 = *(double *)(param_1 + 0xd0) * dVar6;
    dVar8 = *(double *)(param_1 + 200) * dVar6;
    local_a8._8_4_ = SUB84(dVar8,0);
    local_a8._0_8_ = dVar6 * *(double *)(param_1 + 0xc0);
    local_a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    uStack_90 = 0;
    local_128 = 0;
    FUN_140613f88(*(undefined8 *)(param_1 + 0xb0),local_e8,0,0);
  }
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484128f8 FUN_1484128f8 body=633 status=ok
// SIG undefined FUN_1484128f8(void)

void FUN_1484128f8(longlong param_1,float param_2,double *param_3,undefined4 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  undefined1 local_98 [16];
  double local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(float *)(param_1 + 0x3c) = param_2;
  dVar2 = param_3[5];
  dVar1 = param_3[6];
  *(double *)(param_1 + 0x48) = param_3[4];
  *(double *)(param_1 + 0x50) = dVar2;
  *(double *)(param_1 + 0x58) = dVar1;
  dVar1 = param_3[2];
  dVar2 = *param_3;
  dVar7 = param_3[1];
  dVar5 = dVar2 * 0.0 + dVar7 * -0.0;
  dVar6 = dVar7 - dVar1 * 0.0;
  dVar8 = dVar1 * 0.0 - dVar2;
  dVar5 = dVar5 + dVar5;
  dVar8 = dVar8 + dVar8;
  dVar6 = dVar6 + dVar6;
  dVar3 = param_3[3];
  *(double *)(param_1 + 0x60) = (dVar7 * dVar5 - dVar8 * dVar1) + dVar3 * dVar6 + 0.0;
  *(double *)(param_1 + 0x68) = (dVar1 * dVar6 - dVar5 * dVar2) + dVar3 * dVar8 + 0.0;
  *(double *)(param_1 + 0x70) = (dVar2 * dVar8 - dVar6 * dVar7) + dVar3 * dVar5 + 1.0;
  *(undefined4 *)(param_1 + 0x40) = param_4;
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 != 0) {
    local_d8 = *param_3;
    dStack_d0 = param_3[1];
    local_c8 = param_3[2];
    dStack_c0 = param_3[3];
    local_b8 = param_3[4];
    dStack_b0 = param_3[5];
    local_a8 = param_3[6];
    dStack_a0 = param_3[7];
    if (lVar4 == *(longlong *)(param_1 + 0xb8)) {
      local_88 = *(double *)(param_1 + 0xd0);
      dVar1 = *(double *)(param_1 + 0xc0);
      dVar2 = *(double *)(param_1 + 200);
    }
    else {
      dVar2 = 1.0 / *(double *)(lVar4 + 0x290);
      dVar1 = *(double *)(lVar4 + 0x280) * dVar2;
      local_88 = *(double *)(lVar4 + 0x290) * dVar2;
      dVar2 = dVar2 * *(double *)(lVar4 + 0x288);
      *(double *)(param_1 + 0xc0) = dVar1;
      *(double *)(param_1 + 200) = dVar2;
      *(double *)(param_1 + 0xd0) = local_88;
      *(longlong *)(param_1 + 0xb8) = lVar4;
    }
    dVar7 = (double)param_2;
    local_88 = local_88 * dVar7;
    local_98._8_4_ = SUB84(dVar2 * dVar7,0);
    local_98._0_8_ = dVar1 * dVar7;
    local_98._12_4_ = (int)((ulonglong)(dVar2 * dVar7) >> 0x20);
    uStack_80 = 0;
    local_e8 = 0;
    FUN_140613f88(lVar4,&local_d8,0,0);
  }
  if ((local_70 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148412bb0 FUN_148412bb0 body=3049 status=ok
// SIG undefined FUN_148412bb0(void)

longlong FUN_148412bb0(undefined8 param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_198 [32];
  undefined8 **local_178;
  undefined8 **local_170;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  longlong *plStack_140;
  longlong *plStack_138;
  undefined4 *local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 *local_108;
  longlong *plStack_100;
  longlong *plStack_f8;
  undefined4 *local_f0;
  undefined4 local_e4;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 *local_c8 [8];
  longlong local_88;
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_d8 = param_1;
  local_d0 = param_2;
  FUN_1411371f6(local_c8);
  uVar4 = FUN_145b72c06();
  local_178 = local_c8;
  local_e0 = FUN_141137228(param_1,uVar4,&DAT_14c8464e0,&DAT_14c8464f8);
  local_e4 = 0x40400000;
  if ((param_3 & 2) != 0) {
    local_178 = &local_108;
    local_108 = (undefined8 *)0x3ff0000000000000;
    plStack_100 = (longlong *)0x0;
    plStack_f8 = (longlong *)0x0;
    local_170 = (undefined8 **)CONCAT44(local_170._4_4_,0x42700000);
    plVar5 = (longlong *)FUN_14841d35e(param_1,local_e0,param_2,&DAT_149e1dd34);
    *(undefined4 *)(plVar5 + 0xce) = 0x41a00000;
    *(undefined4 *)(plVar5 + 0xcf) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))();
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    *(longlong **)(lVar1 + 0x398) = plVar5;
  }
  if ((param_3 & 4) != 0) {
    local_178 = &local_108;
    local_108 = (undefined8 *)0x0;
    plStack_100 = (longlong *)0x3ff0000000000000;
    plStack_f8 = (longlong *)0x0;
    local_170 = (undefined8 **)CONCAT44(local_170._4_4_,0x42700000);
    plVar5 = (longlong *)FUN_14841d35e(local_d8,local_e0,local_d0,&DAT_149e1dd14);
    *(undefined4 *)(plVar5 + 0xce) = 0x41a00000;
    *(undefined4 *)(plVar5 + 0xcf) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))();
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    *(longlong **)(lVar1 + 0x3a0) = plVar5;
  }
  if ((param_3 & 8) != 0) {
    local_178 = &local_108;
    local_108 = (undefined8 *)0x0;
    plStack_100 = (longlong *)0x0;
    plStack_f8 = (longlong *)0x3ff0000000000000;
    local_170 = (undefined8 **)CONCAT44(local_170._4_4_,0x42700000);
    plVar5 = (longlong *)FUN_14841d35e(local_d8,local_e0,local_d0,&DAT_149e1dd04);
    *(undefined4 *)(plVar5 + 0xce) = 0x41a00000;
    *(undefined4 *)(plVar5 + 0xcf) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))();
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e();
    }
    *(longlong **)(lVar1 + 0x3a8) = plVar5;
  }
  if ((param_3 & 0x40) != 0) {
    local_170 = &local_108;
    local_108 = (undefined8 *)0x0;
    plStack_100 = (longlong *)0x0;
    plStack_f8 = (longlong *)0x3ff0000000000000;
    local_178 = &local_148;
    local_148 = (undefined8 *)0x0;
    plStack_140 = (longlong *)0x3ff0000000000000;
    plStack_138 = (longlong *)0x0;
    plVar5 = (longlong *)FUN_14841d4d6(local_d8,local_e0,local_d0,&DAT_149e1dd34);
    *(undefined8 *)((longlong)plVar5 + 0x694) = 0x41f0000041f00000;
    *(undefined1 *)(plVar5 + 0xd4) = 6;
    *(undefined4 *)((longlong)plVar5 + 0x69c) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))(plVar5);
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar5);
    }
    *(longlong **)(lVar1 + 0x3b0) = plVar5;
  }
  if ((param_3 & 0x20) != 0) {
    local_170 = &local_108;
    local_108 = (undefined8 *)0x0;
    plStack_100 = (longlong *)0x0;
    plStack_f8 = (longlong *)0x3ff0000000000000;
    local_178 = &local_148;
    local_148 = (undefined8 *)0x3ff0000000000000;
    plStack_140 = (longlong *)0x0;
    plStack_138 = (longlong *)0x0;
    plVar5 = (longlong *)FUN_14841d4d6(local_d8,local_e0,local_d0,&DAT_149e1dd14);
    *(undefined8 *)((longlong)plVar5 + 0x694) = 0x41f0000041f00000;
    *(undefined1 *)(plVar5 + 0xd4) = 6;
    *(undefined4 *)((longlong)plVar5 + 0x69c) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))(plVar5);
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar5);
    }
    *(longlong **)(lVar1 + 0x3b8) = plVar5;
  }
  if ((param_3 & 0x10) != 0) {
    local_170 = &local_108;
    local_108 = (undefined8 *)0x0;
    plStack_100 = (longlong *)0x3ff0000000000000;
    plStack_f8 = (longlong *)0x0;
    local_178 = &local_148;
    local_148 = (undefined8 *)0x3ff0000000000000;
    plStack_140 = (longlong *)0x0;
    plStack_138 = (longlong *)0x0;
    plVar5 = (longlong *)FUN_14841d4d6(local_d8,local_e0,local_d0,&DAT_149e1dd04);
    *(undefined8 *)((longlong)plVar5 + 0x694) = 0x41f0000041f00000;
    *(undefined1 *)(plVar5 + 0xd4) = 6;
    *(undefined4 *)((longlong)plVar5 + 0x69c) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))(plVar5);
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar5);
    }
    *(longlong **)(lVar1 + 0x3c0) = plVar5;
  }
  if ((char)param_3 < '\0') {
    local_178 = &local_108;
    local_108 = (undefined8 *)0x3ff0000000000000;
    plStack_100 = (longlong *)0x0;
    plStack_f8 = (longlong *)0x0;
    local_170 = (undefined8 **)CONCAT44(local_170._4_4_,0x42f00000);
    plVar5 = (longlong *)FUN_14841d670(local_d8,local_e0,local_d0,&DAT_149e1dd34);
    *(undefined4 *)((longlong)plVar5 + 0x674) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))(plVar5);
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar5);
    }
    *(longlong **)(lVar1 + 0x3c8) = plVar5;
  }
  if ((param_3 >> 8 & 1) == 0) {
    if ((param_3 >> 9 & 1) != 0) {
LAB_14841363e:
      local_178 = &local_108;
      local_108 = (undefined8 *)0x0;
      plStack_100 = (longlong *)0x0;
      plStack_f8 = (longlong *)0x3ff0000000000000;
      local_170 = (undefined8 **)CONCAT44(local_170._4_4_,0x42f00000);
      plVar5 = (longlong *)FUN_14841d670(local_d8,local_e0,local_d0,&DAT_149e1dd04);
      *(undefined4 *)((longlong)plVar5 + 0x674) = local_e4;
      FUN_1448215fa(plVar5);
      (**(code **)(*plVar5 + 0x540))(plVar5);
      lVar1 = local_e0;
      if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar5);
      }
      *(longlong **)(lVar1 + 0x3d8) = plVar5;
      goto LAB_1484136ce;
    }
    if ((char)param_3 < '\0') goto LAB_1484136ce;
  }
  else {
    local_178 = &local_108;
    local_108 = (undefined8 *)0x0;
    plStack_100 = (longlong *)0x3ff0000000000000;
    plStack_f8 = (longlong *)0x0;
    local_170 = (undefined8 **)CONCAT44(local_170._4_4_,0x42f00000);
    plVar5 = (longlong *)FUN_14841d670(local_d8,local_e0,local_d0,&DAT_149e1dd14);
    *(undefined4 *)((longlong)plVar5 + 0x674) = local_e4;
    FUN_1448215fa(plVar5);
    (**(code **)(*plVar5 + 0x540))(plVar5);
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar5);
    }
    *(longlong **)(lVar1 + 0x3d0) = plVar5;
    if ((param_3 >> 9 & 1) != 0) goto LAB_14841363e;
LAB_1484136ce:
    plVar5 = (longlong *)FUN_14841379a(local_e0);
    FUN_141200de6(local_e0,plVar5);
    (**(code **)(*plVar5 + 0x490))(plVar5,*(undefined8 *)(local_e0 + 0x1c8),&DAT_14cadad98,0);
    lVar1 = local_d0;
    if ((local_d0 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(local_d0);
    }
    plVar5[0xc9] = lVar1;
    *(bool *)(plVar5 + 0xca) = lVar1 != 0;
    *(undefined4 *)(plVar5 + 0xc5) = 0x3f000000;
    *(undefined4 *)((longlong)plVar5 + 0x62c) = 0x3f000000;
    *(undefined4 *)(plVar5 + 0xc6) = 0x3f000000;
    *(undefined4 *)((longlong)plVar5 + 0x634) = 0x3f800000;
    plVar5[0xce] = 0x3f80000042f00000;
    *(undefined1 *)((longlong)plVar5 + 0x67c) = 1;
    FUN_140b506a4(plVar5);
    lVar1 = local_e0;
    if ((plVar5 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar5);
    }
    *(longlong **)(lVar1 + 0x3e0) = plVar5;
  }
  if ((param_3 >> 0x10 & 1) != 0) {
    local_170 = &local_108;
    local_108 = (undefined8 *)0x402c000000000000;
    plStack_100 = (longlong *)0x402c000000000000;
    plStack_f8 = (longlong *)0x402c000000000000;
    local_178 = &local_148;
    local_148 = (undefined8 *)0x401c000000000000;
    plStack_140 = (longlong *)0x401c000000000000;
    plStack_138 = (longlong *)0x401c000000000000;
    lVar6 = FUN_14841d738(local_d8,local_e0,local_d0,&DAT_149e1e308);
    lVar1 = local_e0;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar1 + 1000) = lVar6;
  }
  local_108 = &local_d8;
  plStack_100 = &local_e0;
  plStack_f8 = &local_d0;
  local_f0 = &local_e4;
  if ((param_3 >> 10 & 1) == 0) {
    if ((param_3 >> 0xb & 1) != 0) {
      iVar3 = 1;
      goto LAB_1484130cf;
    }
LAB_148413080:
    if ((param_3 & 0x1000) == 0) goto LAB_1484131e4;
    local_148 = (undefined8 *)0x3ff0000000000000;
    plStack_140 = (longlong *)0x0;
    iVar3 = 1;
  }
  else {
    plStack_140 = (longlong *)0x3ff0000000000000;
    plStack_138 = (longlong *)0x0;
    bVar7 = (param_3 >> 0xb & 1) != 0;
    cVar2 = bVar7 + '\x01';
    if ((param_3 & 0x1000) != 0) {
      cVar2 = bVar7 + '\x02';
      plStack_140 = (longlong *)0x0;
      plStack_138 = (longlong *)0x3ff0000000000000;
    }
    local_148 = (undefined8 *)0x0;
    local_128 = 0x3ff0000000000000;
    uStack_120 = 0;
    local_118 = 0;
    local_178 = (undefined8 **)CONCAT71(local_178._1_7_,cVar2 == '\x02');
    lVar6 = FUN_143b4db5e(&local_108,&DAT_149e1dd34,&local_128,&local_148);
    lVar1 = local_e0;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar1 + 0x3f0) = lVar6;
    if ((param_3 >> 0xb & 1) == 0) goto LAB_148413080;
    iVar3 = 2;
LAB_1484130cf:
    local_148 = (undefined8 *)0x3ff0000000000000;
    plStack_140 = (longlong *)0x0;
    plStack_138 = (longlong *)0x0;
    if ((param_3 & 0x1000) != 0) {
      iVar3 = iVar3 + 1;
      local_148 = (undefined8 *)0x0;
      plStack_138 = (longlong *)0x3ff0000000000000;
    }
    local_128 = 0;
    uStack_120 = 0x3ff0000000000000;
    local_118 = 0;
    local_178 = (undefined8 **)CONCAT71(local_178._1_7_,iVar3 == 2);
    lVar6 = FUN_143b4db5e(&local_108,&DAT_149e1dd14,&local_128,&local_148);
    lVar1 = local_e0;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar1 + 0x3f8) = lVar6;
    if ((param_3 & 0x1000) == 0) goto LAB_1484131e4;
    local_148 = (undefined8 *)0x0;
    plStack_140 = (longlong *)0x3ff0000000000000;
    iVar3 = 2;
  }
  if ((param_3 >> 10 & 1) != 0) {
    iVar3 = iVar3 + 1;
    local_148 = (undefined8 *)0x3ff0000000000000;
    plStack_140 = (longlong *)0x0;
  }
  plStack_138 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0x3ff0000000000000;
  local_178 = (undefined8 **)CONCAT71(local_178._1_7_,iVar3 == 2);
  lVar6 = FUN_143b4db5e(&local_108,&DAT_149e1dd04,&local_128,&local_148);
  lVar1 = local_e0;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  *(longlong *)(lVar1 + 0x400) = lVar6;
LAB_1484131e4:
  local_148 = &local_d8;
  plStack_140 = &local_e0;
  plStack_138 = &local_d0;
  local_130 = &local_e4;
  if ((param_3 >> 0xd & 1) != 0) {
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    local_160 = 0;
    local_158 = 0x3ff0000000000000;
    uStack_150 = 0;
    lVar6 = FUN_143b4dc32(&local_148,&DAT_149e1dd34);
    lVar1 = local_e0;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar1 + 0x408) = lVar6;
  }
  if ((param_3 >> 0xe & 1) != 0) {
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0x3ff0000000000000;
    local_160 = 0x3ff0000000000000;
    local_158 = 0;
    uStack_150 = 0;
    lVar6 = FUN_143b4dc32(&local_148,&DAT_149e1dd14);
    lVar1 = local_e0;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar1 + 0x410) = lVar6;
  }
  if ((short)param_3 < 0) {
    local_128 = 0;
    uStack_120 = 0x3ff0000000000000;
    local_118 = 0;
    local_160 = 0x3ff0000000000000;
    local_158 = 0;
    uStack_150 = 0;
    lVar6 = FUN_143b4dc32(&local_148,&DAT_149e1dd04);
    lVar1 = local_e0;
    if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(lVar6);
    }
    *(longlong *)(lVar1 + 0x418) = lVar6;
  }
  lVar1 = local_e0;
  if (local_88 != 0) {
    if (local_78 == (longlong *)0x0) {
      local_78 = local_68;
    }
    (**(code **)(*local_78 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14841379a FUN_14841379a body=148 status=ok
// SIG undefined FUN_14841379a(void)

undefined8 FUN_14841379a(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145b72ec4();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148413844 FUN_148413844 body=753 status=ok
// SIG undefined FUN_148413844(void)

longlong * FUN_148413844(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  void *pvVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_118 [32];
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8 [2];
  undefined8 local_a8;
  longlong local_78 [2];
  undefined8 local_68;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar4 = (longlong *)FUN_148413b36(param_2[3]);
  (**(code **)(*plVar4 + 0x2d8))(plVar4,*param_2);
  uVar5 = FUN_148451390(param_2[1]);
  lVar6 = FUN_148413bcc(uVar5);
  plVar2 = *(longlong **)(param_1 + 0x58);
  if (plVar2 == (longlong *)0x0) {
    local_c0 = (longlong *)FUN_14001cc68(0x28,0x10);
    local_c0[1] = (longlong)&DAT_100000001;
    *local_c0 = (longlong)&PTR_FUN_14aeb6ab0;
    local_c0[2] = (longlong)&PTR_LAB_14aeb6ac8;
    *(undefined4 *)(local_c0 + 3) = 0x1fffe;
    local_c0[4] = lVar6;
    param_2 = local_c0;
    local_c8 = local_c0 + 2;
    if (local_c0 == (longlong *)0x0) {
      param_2 = (longlong *)0x0;
      goto LAB_1484138c2;
    }
  }
  else {
    local_c0 = *(longlong **)(param_1 + 0x60);
    local_c8 = plVar2;
    if (local_c0 == (longlong *)0x0) goto LAB_1484138c2;
  }
  LOCK();
  *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
  UNLOCK();
LAB_1484138c2:
  (**(code **)(*plVar4 + 0x2e0))(plVar4,&local_c8);
  if (param_2 != (longlong *)0x0 && plVar2 == (longlong *)0x0) {
    LOCK();
    plVar2 = param_2 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*param_2)(param_2);
      LOCK();
      piVar1 = (int *)((longlong)param_2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(param_1 + 0x50);
  lVar6 = (longlong)local_d0;
  pvVar3 = *(void **)(param_1 + 0x48);
  if (lVar6 == 0) {
    local_cc = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar3,lVar6 * 2);
  }
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_1 + 0x40);
  lVar6 = (longlong)local_e0;
  pvVar3 = *(void **)(param_1 + 0x38);
  if (lVar6 == 0) {
    local_dc = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,pvVar3,lVar6 * 2);
  }
  local_f8 = (void *)0x0;
  local_f0 = *(int *)(param_1 + 0x30);
  lVar6 = (longlong)local_f0;
  pvVar3 = *(void **)(param_1 + 0x28);
  if (lVar6 == 0) {
    local_ec = 0;
  }
  else {
    FUN_1446dd670(&local_f8,local_f0,0);
    memcpy(local_f8,pvVar3,lVar6 * 2);
  }
  (**(code **)(*plVar4 + 0x2e8))(plVar4,&local_f8,&local_e8,&local_d8);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    local_68 = 0;
    puVar7 = (undefined8 *)(param_1 + 0x90);
    if (*(undefined8 **)(param_1 + 0x80) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0x80);
    }
    local_78[0] = *(longlong *)(param_1 + 0x70);
    (**(code **)*puVar7)();
    (**(code **)(*plVar4 + 0x2f0))(plVar4,local_78);
  }
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    local_a8 = 0;
    puVar7 = (undefined8 *)(param_1 + 0xd0);
    if (*(undefined8 **)(param_1 + 0xc0) != (undefined8 *)0x0) {
      puVar7 = *(undefined8 **)(param_1 + 0xc0);
    }
    local_b8[0] = *(longlong *)(param_1 + 0xb0);
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*plVar4 + 0x2f8))(plVar4,local_b8);
  }
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 148413b36 FUN_148413b36 body=148 status=ok
// SIG undefined FUN_148413b36(void)

undefined8 FUN_148413b36(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_14107a2f2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148413bcc FUN_148413bcc body=142 status=ok
// SIG undefined FUN_148413bcc(void)

longlong FUN_148413bcc(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar5);
        if (lVar2 != 0) {
          lVar3 = FUN_145885bea();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            return lVar2;
          }
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    param_1 = *(longlong *)(param_1 + 0x20);
    if (param_1 == 0) {
      return 0;
    }
    lVar4 = FUN_1459d7446();
    if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) break;
    if (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
         ) != lVar4 + 0x30) {
      return 0;
    }
  }
  return 0;
}



// FUNCTION 148413c62 FUN_148413c62 body=133 status=ok
// SIG undefined FUN_148413c62(void)

void FUN_148413c62(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  uVar3 = *param_2;
  lVar4 = param_2[1];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xe8) = uVar3;
  *(longlong *)(param_1 + 0xf0) = lVar4;
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
  plVar5 = (longlong *)param_2[1];
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
                    /* WARNING: Could not recover jumptable at 0x000148413cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 148413ce8 FUN_148413ce8 body=169 status=ok
// SIG undefined FUN_148413ce8(void)

void FUN_148413ce8(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  
  iVar1 = (int)param_2[1] + -1;
  if ((int)param_2[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0xf8,*param_2,iVar1);
  iVar1 = (int)param_3[1] + -1;
  if ((int)param_3[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x108,*param_3,iVar1);
  iVar1 = (int)param_4[1] + -1;
  if ((int)param_4[1] == 0) {
    iVar1 = 0;
  }
  FUN_1402980a2(param_1 + 0x118,*param_4,iVar1);
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 148413d92 FUN_148413d92 body=63 status=ok
// SIG undefined FUN_148413d92(void)

void FUN_148413d92(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_148413dd2(param_1 + 0x130);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148413dc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148413dd2 FUN_148413dd2 body=290 status=ok
// SIG undefined FUN_148413dd2(void)

longlong * FUN_148413dd2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148413ef6 FUN_148413ef6 body=63 status=ok
// SIG undefined FUN_148413ef6(void)

void FUN_148413ef6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  FUN_148413f36(param_1 + 0x170);
  if (*param_2 != 0) {
    plVar1 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_2[2];
    }
                    /* WARNING: Could not recover jumptable at 0x000148413f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1);
    return;
  }
  return;
}



// FUNCTION 148413f36 FUN_148413f36 body=290 status=ok
// SIG undefined FUN_148413f36(void)

longlong * FUN_148413f36(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841405a FUN_14841405a body=2477 status=ok
// SIG undefined FUN_14841405a(void)

void FUN_14841405a(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar4 = *(undefined8 *)(param_1 + 0x260);
  uVar5 = *(undefined8 *)(param_1 + 0x268);
  uVar6 = *(undefined8 *)(param_1 + 0x270);
  uVar7 = *(undefined8 *)(param_1 + 0x278);
  uVar8 = *(undefined8 *)(param_1 + 0x280);
  uVar9 = *(undefined8 *)(param_1 + 0x288);
  uVar10 = *(undefined8 *)(param_1 + 0x290);
  uVar11 = *(undefined8 *)(param_1 + 0x298);
  uVar12 = *param_2;
  uVar13 = param_2[1];
  uVar14 = param_2[2];
  uVar15 = param_2[3];
  uVar16 = param_2[4];
  uVar17 = param_2[5];
  uVar18 = param_2[7];
  *(undefined8 *)(param_1 + 0x290) = param_2[6];
  *(undefined8 *)(param_1 + 0x298) = uVar18;
  *(undefined8 *)(param_1 + 0x280) = uVar16;
  *(undefined8 *)(param_1 + 0x288) = uVar17;
  *(undefined8 *)(param_1 + 0x270) = uVar14;
  *(undefined8 *)(param_1 + 0x278) = uVar15;
  *(undefined8 *)(param_1 + 0x260) = uVar12;
  *(undefined8 *)(param_1 + 0x268) = uVar13;
  param_2[6] = uVar10;
  param_2[7] = uVar11;
  param_2[4] = uVar8;
  param_2[5] = uVar9;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  lVar2 = *(longlong *)(param_1 + 0x2a0);
  uVar4 = *(undefined8 *)(param_1 + 0x2a8);
  local_78 = *(longlong **)(param_1 + 0x2b0);
  uStack_70 = *(undefined8 *)(param_1 + 0x2b8);
  local_68 = *(longlong *)(param_1 + 0x2c0);
  uStack_60 = *(undefined8 *)(param_1 + 0x2c8);
  local_58 = *(undefined8 *)(param_1 + 0x2d0);
  uStack_50 = *(undefined8 *)(param_1 + 0x2d8);
  uVar5 = *param_3;
  uVar6 = param_3[1];
  uVar7 = param_3[2];
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[7];
  *(undefined8 *)(param_1 + 0x2d0) = param_3[6];
  *(undefined8 *)(param_1 + 0x2d8) = uVar11;
  *(undefined8 *)(param_1 + 0x2c0) = uVar9;
  *(undefined8 *)(param_1 + 0x2c8) = uVar10;
  *(undefined8 *)(param_1 + 0x2b0) = uVar7;
  *(undefined8 *)(param_1 + 0x2b8) = uVar8;
  *(undefined8 *)(param_1 + 0x2a0) = uVar5;
  *(undefined8 *)(param_1 + 0x2a8) = uVar6;
  local_88._0_4_ = (undefined4)lVar2;
  local_88._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  uStack_80._0_4_ = (undefined4)uVar4;
  uStack_80._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  param_3[6] = local_58;
  param_3[7] = uStack_50;
  param_3[4] = local_68;
  param_3[5] = uStack_60;
  param_3[2] = local_78;
  param_3[3] = uStack_70;
  *(undefined4 *)param_3 = (undefined4)local_88;
  *(undefined4 *)((longlong)param_3 + 4) = local_88._4_4_;
  *(undefined4 *)(param_3 + 1) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)param_3 + 0xc) = uStack_80._4_4_;
  iVar1 = *(int *)(param_1 + 0x1c8);
  local_88 = lVar2;
  uStack_80 = uVar4;
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c0);
    lVar23 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar23);
      if (lVar3 != 0) {
        lVar19 = FUN_145b72a32();
        if (((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) &&
           (lVar19 = *(longlong *)(lVar3 + 0x70), lVar19 != 0)) {
          lVar20 = FUN_145b117b8();
          if ((*(int *)(lVar20 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar20 + 0x38) * 8) == lVar20 + 0x30)) {
            lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x398);
            if ((lVar20 != 0 & DAT_14c950c29) == 1) {
              FUN_14689c22e(lVar20);
            }
            lVar21 = *(longlong *)(lVar19 + 0x30);
            if (lVar21 != lVar20) {
              lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x3a0);
              if ((lVar20 != 0 & DAT_14c950c29) == 1) {
                FUN_14689c22e(lVar20);
                lVar21 = *(longlong *)(lVar19 + 0x30);
              }
              if (lVar21 != lVar20) {
                lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x3a8);
                if ((lVar20 != 0 & DAT_14c950c29) == 1) {
                  FUN_14689c22e(lVar20);
                  lVar21 = *(longlong *)(lVar19 + 0x30);
                }
                if (lVar21 != lVar20) goto LAB_148414219;
              }
            }
            local_c8 = *(longlong *)(lVar3 + 0xa0);
            uStack_80 = *(undefined8 *)(lVar3 + 0xa8);
            local_b8 = *(longlong **)(lVar3 + 0xb0);
            uStack_70 = *(undefined8 *)(lVar3 + 0xb8);
            local_68 = *(longlong *)(lVar3 + 0xc0);
            uStack_60 = *(undefined8 *)(lVar3 + 200);
            local_58 = *(undefined8 *)(lVar3 + 0xd0);
            uStack_50 = *(undefined8 *)(lVar3 + 0xd8);
            uVar6 = local_58;
            uVar7 = uStack_50;
            local_78 = local_b8;
            uVar5 = uStack_70;
            local_88 = local_c8;
            uVar4 = uStack_80;
            *(ulonglong *)(lVar3 + 0xd0) = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(lVar3 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
            *(undefined ***)(lVar3 + 0xc0) = &PTR_LAB_14aeb5800;
            *(longlong *)(lVar3 + 200) = param_1;
            *(undefined8 *)(lVar3 + 0xb0) = 0;
            *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
            *(code **)(lVar3 + 0xa0) = FUN_143b4e000;
            *(ulonglong *)(lVar3 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            local_98 = (undefined4)local_58;
            uStack_94 = local_58._4_4_;
            uStack_90 = (undefined4)uStack_50;
            uStack_8c = uStack_50._4_4_;
            local_a8 = local_68;
            uStack_a0 = uStack_60;
            uStack_b0 = (undefined4)uStack_70;
            uStack_ac = uStack_70._4_4_;
            uStack_c0 = (undefined4)uStack_80;
            uStack_bc = uStack_80._4_4_;
            if (local_c8 != 0) {
              plVar22 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar22 = &local_a8;
              }
              uStack_80 = uVar4;
              uStack_70 = uVar5;
              local_58 = uVar6;
              uStack_50 = uVar7;
              (**(code **)(*plVar22 + 0x10))();
            }
            local_c8 = *(longlong *)(lVar3 + 0xe0);
            uStack_80 = *(undefined8 *)(lVar3 + 0xe8);
            local_b8 = *(longlong **)(lVar3 + 0xf0);
            uStack_70 = *(undefined8 *)(lVar3 + 0xf8);
            local_68 = *(longlong *)(lVar3 + 0x100);
            uStack_60 = *(undefined8 *)(lVar3 + 0x108);
            local_58 = *(undefined8 *)(lVar3 + 0x110);
            uStack_50 = *(undefined8 *)(lVar3 + 0x118);
            uVar6 = local_58;
            uVar7 = uStack_50;
            local_78 = local_b8;
            uVar5 = uStack_70;
            local_88 = local_c8;
            uVar4 = uStack_80;
            *(ulonglong *)(lVar3 + 0x110) = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(lVar3 + 0x118) = CONCAT44(uStack_8c,uStack_90);
            *(undefined ***)(lVar3 + 0x100) = &PTR_LAB_14aeb5820;
            *(longlong *)(lVar3 + 0x108) = param_1;
            *(undefined8 *)(lVar3 + 0xf0) = 0;
            *(ulonglong *)(lVar3 + 0xf8) = CONCAT44(uStack_ac,uStack_b0);
            *(code **)(lVar3 + 0xe0) = FUN_143b4e06c;
            *(ulonglong *)(lVar3 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
            uStack_c0 = (undefined4)uStack_80;
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            uStack_bc = uStack_80._4_4_;
            uStack_b0 = (undefined4)uStack_70;
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            uStack_ac = uStack_70._4_4_;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            local_98 = (undefined4)local_58;
            uStack_94 = local_58._4_4_;
            uStack_90 = (undefined4)uStack_50;
            uStack_8c = uStack_50._4_4_;
            local_a8 = local_68;
            uStack_a0 = uStack_60;
            uStack_80 = uVar4;
            uStack_70 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            if (local_c8 != 0) {
              plVar22 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar22 = &local_a8;
              }
              (**(code **)(*plVar22 + 0x10))();
            }
          }
        }
LAB_148414219:
        lVar19 = FUN_145b73d64();
        if (((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) &&
           (lVar19 = *(longlong *)(lVar3 + 0x68), lVar19 != 0)) {
          lVar20 = FUN_145b117b8();
          if ((*(int *)(lVar20 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar20 + 0x38) * 8) == lVar20 + 0x30)) {
            lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x3c0);
            if ((lVar20 != 0 & DAT_14c950c29) == 1) {
              FUN_14689c22e(lVar20);
            }
            lVar21 = *(longlong *)(lVar19 + 0x30);
            if (lVar21 != lVar20) {
              lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x3b8);
              if ((lVar20 != 0 & DAT_14c950c29) == 1) {
                FUN_14689c22e(lVar20);
                lVar21 = *(longlong *)(lVar19 + 0x30);
              }
              if (lVar21 != lVar20) {
                lVar20 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x3b0);
                if ((lVar20 != 0 & DAT_14c950c29) == 1) {
                  FUN_14689c22e(lVar20);
                  lVar21 = *(longlong *)(lVar19 + 0x30);
                }
                if (lVar21 != lVar20) goto LAB_148414258;
              }
            }
            local_c8 = *(longlong *)(lVar3 + 0xa0);
            uStack_80 = *(undefined8 *)(lVar3 + 0xa8);
            local_b8 = *(longlong **)(lVar3 + 0xb0);
            uStack_70 = *(undefined8 *)(lVar3 + 0xb8);
            local_68 = *(longlong *)(lVar3 + 0xc0);
            uStack_60 = *(undefined8 *)(lVar3 + 200);
            local_58 = *(undefined8 *)(lVar3 + 0xd0);
            uStack_50 = *(undefined8 *)(lVar3 + 0xd8);
            uVar6 = local_58;
            uVar7 = uStack_50;
            local_78 = local_b8;
            uVar5 = uStack_70;
            local_88 = local_c8;
            uVar4 = uStack_80;
            *(ulonglong *)(lVar3 + 0xd0) = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(lVar3 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
            *(undefined ***)(lVar3 + 0xc0) = &PTR_LAB_14aeb5840;
            *(longlong *)(lVar3 + 200) = param_1;
            *(undefined8 *)(lVar3 + 0xb0) = 0;
            *(ulonglong *)(lVar3 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
            *(code **)(lVar3 + 0xa0) = FUN_143b4e0e8;
            *(ulonglong *)(lVar3 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            local_98 = (undefined4)local_58;
            uStack_94 = local_58._4_4_;
            uStack_90 = (undefined4)uStack_50;
            uStack_8c = uStack_50._4_4_;
            local_a8 = local_68;
            uStack_a0 = uStack_60;
            uStack_b0 = (undefined4)uStack_70;
            uStack_ac = uStack_70._4_4_;
            uStack_c0 = (undefined4)uStack_80;
            uStack_bc = uStack_80._4_4_;
            if (local_c8 != 0) {
              plVar22 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar22 = &local_a8;
              }
              uStack_80 = uVar4;
              uStack_70 = uVar5;
              local_58 = uVar6;
              uStack_50 = uVar7;
              (**(code **)(*plVar22 + 0x10))();
            }
            local_c8 = *(longlong *)(lVar3 + 0xe0);
            uStack_80 = *(undefined8 *)(lVar3 + 0xe8);
            local_b8 = *(longlong **)(lVar3 + 0xf0);
            uStack_70 = *(undefined8 *)(lVar3 + 0xf8);
            local_68 = *(longlong *)(lVar3 + 0x100);
            uStack_60 = *(undefined8 *)(lVar3 + 0x108);
            local_58 = *(undefined8 *)(lVar3 + 0x110);
            uStack_50 = *(undefined8 *)(lVar3 + 0x118);
            uVar6 = local_58;
            uVar7 = uStack_50;
            local_78 = local_b8;
            uVar5 = uStack_70;
            local_88 = local_c8;
            uVar4 = uStack_80;
            *(ulonglong *)(lVar3 + 0x110) = CONCAT44(uStack_94,local_98);
            *(ulonglong *)(lVar3 + 0x118) = CONCAT44(uStack_8c,uStack_90);
            *(undefined ***)(lVar3 + 0x100) = &PTR_LAB_14aeb5860;
            *(longlong *)(lVar3 + 0x108) = param_1;
            *(undefined8 *)(lVar3 + 0xf0) = 0;
            *(ulonglong *)(lVar3 + 0xf8) = CONCAT44(uStack_ac,uStack_b0);
            *(code **)(lVar3 + 0xe0) = FUN_143b4e154;
            *(ulonglong *)(lVar3 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
            uStack_c0 = (undefined4)uStack_80;
            uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
            uStack_bc = uStack_80._4_4_;
            uStack_b0 = (undefined4)uStack_70;
            uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            uStack_ac = uStack_70._4_4_;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            local_98 = (undefined4)local_58;
            uStack_94 = local_58._4_4_;
            uStack_90 = (undefined4)uStack_50;
            uStack_8c = uStack_50._4_4_;
            local_a8 = local_68;
            uStack_a0 = uStack_60;
            uStack_80 = uVar4;
            uStack_70 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            if (local_c8 != 0) {
              plVar22 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar22 = &local_a8;
              }
              (**(code **)(*plVar22 + 0x10))();
            }
          }
        }
LAB_148414258:
        lVar19 = FUN_145b7285e();
        if ((*(int *)(lVar19 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar19 + 0x38) * 8) == lVar19 + 0x30)) {
          local_c8 = *(longlong *)(lVar3 + 0x90);
          uStack_80 = *(undefined8 *)(lVar3 + 0x98);
          local_b8 = *(longlong **)(lVar3 + 0xa0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xa8);
          local_68 = *(longlong *)(lVar3 + 0xb0);
          uStack_60 = *(undefined8 *)(lVar3 + 0xb8);
          local_58 = *(undefined8 *)(lVar3 + 0xc0);
          uStack_50 = *(undefined8 *)(lVar3 + 200);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0xc0) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 200) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0xb0) = &PTR_LAB_14aeb5880;
          *(longlong *)(lVar3 + 0xb8) = param_1;
          *(undefined8 *)(lVar3 + 0xa0) = 0;
          *(ulonglong *)(lVar3 + 0xa8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0x90) = FUN_143b4e1d0;
          *(ulonglong *)(lVar3 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          if (local_c8 != 0) {
            plVar22 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar22 = &local_a8;
            }
            uStack_80 = uVar4;
            uStack_70 = uVar5;
            local_58 = uVar6;
            uStack_50 = uVar7;
            (**(code **)(*plVar22 + 0x10))();
          }
          local_c8 = *(longlong *)(lVar3 + 0xd0);
          uStack_80 = *(undefined8 *)(lVar3 + 0xd8);
          local_b8 = *(longlong **)(lVar3 + 0xe0);
          uStack_70 = *(undefined8 *)(lVar3 + 0xe8);
          local_68 = *(longlong *)(lVar3 + 0xf0);
          uStack_60 = *(undefined8 *)(lVar3 + 0xf8);
          local_58 = *(undefined8 *)(lVar3 + 0x100);
          uStack_50 = *(undefined8 *)(lVar3 + 0x108);
          uVar6 = local_58;
          uVar7 = uStack_50;
          local_78 = local_b8;
          uVar5 = uStack_70;
          local_88 = local_c8;
          uVar4 = uStack_80;
          *(ulonglong *)(lVar3 + 0x100) = CONCAT44(uStack_94,local_98);
          *(ulonglong *)(lVar3 + 0x108) = CONCAT44(uStack_8c,uStack_90);
          *(undefined ***)(lVar3 + 0xf0) = &PTR_LAB_14aeb58a0;
          *(longlong *)(lVar3 + 0xf8) = param_1;
          *(undefined8 *)(lVar3 + 0xe0) = 0;
          *(ulonglong *)(lVar3 + 0xe8) = CONCAT44(uStack_ac,uStack_b0);
          *(code **)(lVar3 + 0xd0) = FUN_143b4e23c;
          *(ulonglong *)(lVar3 + 0xd8) = CONCAT44(uStack_bc,uStack_c0);
          uStack_c0 = (undefined4)uStack_80;
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          uStack_bc = uStack_80._4_4_;
          uStack_b0 = (undefined4)uStack_70;
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          uStack_ac = uStack_70._4_4_;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_98 = (undefined4)local_58;
          uStack_94 = local_58._4_4_;
          uStack_90 = (undefined4)uStack_50;
          uStack_8c = uStack_50._4_4_;
          local_a8 = local_68;
          uStack_a0 = uStack_60;
          uStack_80 = uVar4;
          uStack_70 = uVar5;
          local_58 = uVar6;
          uStack_50 = uVar7;
          if (local_c8 != 0) {
            plVar22 = local_b8;
            if (local_b8 == (longlong *)0x0) {
              plVar22 = &local_a8;
            }
            (**(code **)(*plVar22 + 0x10))();
          }
        }
      }
      lVar23 = lVar23 + 8;
    } while ((longlong)iVar1 * 8 != lVar23);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148414a08 FUN_148414a08 body=258 status=ok
// SIG undefined FUN_148414a08(void)

void FUN_148414a08(longlong param_1,char param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 800) != param_2) {
    *(char *)(param_1 + 800) = param_2;
    iVar1 = *(int *)(param_1 + 0x1c8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1c0);
      lVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + lVar6);
        if (lVar3 != 0) {
          lVar4 = FUN_145b72a32();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             (lVar4 = *(longlong *)(lVar3 + 0x58), lVar4 != 0)) {
            lVar5 = FUN_145b719be();
            if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
              *(char *)(lVar4 + 0xf4) = param_2;
            }
          }
          lVar4 = FUN_145b73d64();
          if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) &&
             (lVar3 = *(longlong *)(lVar3 + 0x58), lVar3 != 0)) {
            lVar4 = FUN_145b71aa8();
            if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
              *(char *)(lVar3 + 0x175) = param_2;
            }
          }
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
  }
  return;
}



// FUNCTION 148414b0a FUN_148414b0a body=172 status=ok
// SIG undefined FUN_148414b0a(void)

void FUN_148414b0a(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x2e0);
  uVar2 = *(undefined8 *)(param_1 + 0x2e8);
  uVar3 = *(undefined8 *)(param_1 + 0x2f0);
  uVar4 = *(undefined8 *)(param_1 + 0x2f8);
  uVar5 = *(undefined8 *)(param_1 + 0x300);
  uVar6 = *(undefined8 *)(param_1 + 0x308);
  uVar7 = *(undefined8 *)(param_1 + 0x310);
  uVar8 = *(undefined8 *)(param_1 + 0x318);
  uVar9 = *param_2;
  uVar10 = param_2[1];
  uVar11 = param_2[2];
  uVar12 = param_2[3];
  uVar13 = param_2[4];
  uVar14 = param_2[5];
  uVar15 = param_2[7];
  *(undefined8 *)(param_1 + 0x310) = param_2[6];
  *(undefined8 *)(param_1 + 0x318) = uVar15;
  *(undefined8 *)(param_1 + 0x300) = uVar13;
  *(undefined8 *)(param_1 + 0x308) = uVar14;
  *(undefined8 *)(param_1 + 0x2f0) = uVar11;
  *(undefined8 *)(param_1 + 0x2f8) = uVar12;
  *(undefined8 *)(param_1 + 0x2e0) = uVar9;
  *(undefined8 *)(param_1 + 0x2e8) = uVar10;
  local_48._0_4_ = (undefined4)uVar1;
  local_48._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)uVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_38._0_4_ = (undefined4)uVar3;
  local_38._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_28._0_4_ = (undefined4)uVar5;
  local_28._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar6;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  local_18._0_4_ = (undefined4)uVar7;
  local_18._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar8;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  *(undefined4 *)(param_2 + 6) = (undefined4)local_18;
  *(undefined4 *)((longlong)param_2 + 0x34) = local_18._4_4_;
  *(undefined4 *)(param_2 + 7) = (undefined4)uStack_10;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_10._4_4_;
  *(undefined4 *)(param_2 + 4) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
  local_48 = uVar1;
  uStack_40 = uVar2;
  local_38 = uVar3;
  uStack_30 = uVar4;
  local_28 = uVar5;
  uStack_20 = uVar6;
  local_18 = uVar7;
  uStack_10 = uVar8;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148414bb8 FUN_148414bb8 body=580 status=ok
// SIG undefined FUN_148414bb8(void)

void FUN_148414bb8(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148434e54();
  if (*(longlong *)(param_1 + 0x130) == 0) {
    local_98 = *(longlong *)(param_1 + 0x130);
    uStack_50 = *(undefined8 *)(param_1 + 0x138);
    local_88 = *(longlong **)(param_1 + 0x140);
    uStack_40 = *(undefined8 *)(param_1 + 0x148);
    local_38 = *(longlong *)(param_1 + 0x150);
    uStack_30 = *(undefined8 *)(param_1 + 0x158);
    local_28 = *(undefined8 *)(param_1 + 0x160);
    uStack_20 = *(undefined8 *)(param_1 + 0x168);
    uVar2 = local_28;
    uVar3 = uStack_20;
    local_48 = local_88;
    uVar1 = uStack_40;
    local_58 = local_98;
    uVar4 = uStack_50;
    *(ulonglong *)(param_1 + 0x160) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(param_1 + 0x168) = CONCAT44(uStack_5c,uStack_60);
    *(undefined ***)(param_1 + 0x150) = &PTR_LAB_14aeb6a70;
    *(code **)(param_1 + 0x158) = FUN_143b4e2b8;
    *(undefined8 *)(param_1 + 0x140) = 0;
    *(ulonglong *)(param_1 + 0x148) = CONCAT44(uStack_7c,uStack_80);
    *(longlong *)(param_1 + 0x130) = (longlong)&LAB_14841c8b4;
    *(ulonglong *)(param_1 + 0x138) = CONCAT44(uStack_8c,uStack_90);
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uStack_7c = uStack_40._4_4_;
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = local_38;
    uStack_70 = uStack_30;
    uStack_50 = uVar4;
    uStack_40 = uVar1;
    local_28 = uVar2;
    uStack_20 = uVar3;
    if (local_98 != 0) {
      plVar5 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar5 = &local_78;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  if (*(longlong *)(param_1 + 0x170) == 0) {
    local_98 = *(longlong *)(param_1 + 0x170);
    uStack_50 = *(undefined8 *)(param_1 + 0x178);
    local_88 = *(longlong **)(param_1 + 0x180);
    uStack_40 = *(undefined8 *)(param_1 + 0x188);
    local_38 = *(longlong *)(param_1 + 400);
    uStack_30 = *(undefined8 *)(param_1 + 0x198);
    local_28 = *(undefined8 *)(param_1 + 0x1a0);
    uStack_20 = *(undefined8 *)(param_1 + 0x1a8);
    uVar2 = local_28;
    uVar3 = uStack_20;
    local_48 = local_88;
    uVar1 = uStack_40;
    local_58 = local_98;
    uVar4 = uStack_50;
    *(ulonglong *)(param_1 + 0x1a0) = CONCAT44(uStack_64,local_68);
    *(ulonglong *)(param_1 + 0x1a8) = CONCAT44(uStack_5c,uStack_60);
    *(undefined ***)(param_1 + 400) = &PTR_LAB_14aeb6a90;
    *(code **)(param_1 + 0x198) = FUN_143b4e2fa;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(ulonglong *)(param_1 + 0x188) = CONCAT44(uStack_7c,uStack_80);
    *(longlong *)(param_1 + 0x170) = (longlong)&LAB_14841c90a;
    *(ulonglong *)(param_1 + 0x178) = CONCAT44(uStack_8c,uStack_90);
    uStack_90 = (undefined4)uStack_50;
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    uStack_8c = uStack_50._4_4_;
    uStack_80 = (undefined4)uStack_40;
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    uStack_7c = uStack_40._4_4_;
    local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
    uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
    local_68 = (undefined4)local_28;
    uStack_64 = local_28._4_4_;
    uStack_60 = (undefined4)uStack_20;
    uStack_5c = uStack_20._4_4_;
    local_78 = local_38;
    uStack_70 = uStack_30;
    uStack_50 = uVar4;
    uStack_40 = uVar1;
    local_28 = uVar2;
    uStack_20 = uVar3;
    if (local_98 != 0) {
      plVar5 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar5 = &local_78;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  uVar4 = (**(code **)**(undefined8 **)(param_1 + 0xe8))
                    (*(undefined8 **)(param_1 + 0xe8),*(undefined8 *)(param_1 + 0x210));
  *(undefined8 *)(param_1 + 0x218) = uVar4;
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148414dfe FUN_148414dfe body=56 status=ok
// SIG undefined FUN_148414dfe(void)

void FUN_148414dfe(longlong *param_1)

{
  (**(code **)(*param_1 + 0x328))();
  if (param_1[0x43] != 0) {
    FUN_140aeefbc(param_1[0x43],0,1);
    param_1[0x43] = 0;
  }
  return;
}



// FUNCTION 148414e36 FUN_148414e36 body=992 status=ok
// SIG undefined FUN_148414e36(void)

void FUN_148414e36(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_128 [32];
  undefined1 local_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  plVar8 = (longlong *)(**(code **)(*plVar8 + 0x318))(plVar8);
  (**(code **)(*plVar8 + 0x18))(plVar8,local_108);
  lVar2 = param_1[0x44];
  if ((lVar2 != 0) && (param_1[0x43] != 0)) {
    lVar3 = *(longlong *)(param_1[0x43] + 0x1c8);
    puVar9 = &DAT_14c846480;
    if (lVar3 != 0) {
      puVar9 = (undefined8 *)(lVar3 + 0x240);
    }
    uVar7 = puVar9[5];
    uVar1 = puVar9[6];
    *(undefined8 *)(lVar2 + 0x30) = puVar9[4];
    *(undefined8 *)(lVar2 + 0x38) = uVar7;
    *(undefined8 *)(lVar2 + 0x40) = uVar1;
    dVar11 = local_e8 + local_e0 * -0.0;
    dVar10 = local_e0 * -0.0 + local_e8 * 0.0;
    dVar4 = local_e8 * 0.0 - local_e0;
    dVar5 = local_d8 + local_e8 * -0.0;
    dVar6 = local_e0 * 0.0 + local_d8 * -0.0;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    dVar6 = dVar6 + dVar6;
    lVar2 = param_1[0x44];
    *(double *)(lVar2 + 0x48) = -((local_e0 * dVar4 - dVar5 * local_d8) + dVar6 * local_d0 + 1.0);
    *(double *)(lVar2 + 0x50) = -((local_d8 * dVar6 - dVar4 * local_e8) + local_d0 * dVar5 + 0.0);
    *(double *)(lVar2 + 0x58) = -((local_e8 * dVar5 - dVar6 * local_e0) + local_d0 * dVar4 + 0.0);
    dVar4 = local_e8 * -0.0 + local_d8 * 0.0;
    dVar5 = local_e0 * 0.0 - local_d8;
    dVar11 = dVar11 + dVar11;
    dVar4 = dVar4 + dVar4;
    dVar5 = dVar5 + dVar5;
    lVar2 = param_1[0x44];
    *(double *)(lVar2 + 0x60) = (local_e0 * dVar11 - dVar4 * local_d8) + dVar5 * local_d0 + 0.0;
    *(double *)(lVar2 + 0x68) = (local_d8 * dVar5 - dVar11 * local_e8) + local_d0 * dVar4 + 1.0;
    *(double *)(lVar2 + 0x70) = (local_e8 * dVar4 - dVar5 * local_e0) + local_d0 * dVar11 + 0.0;
    dVar4 = local_d8 * 0.0 - local_e8;
    dVar11 = local_d8 * -0.0 + local_e0;
    dVar10 = dVar10 + dVar10;
    dVar4 = dVar4 + dVar4;
    dVar11 = dVar11 + dVar11;
    lVar2 = param_1[0x44];
    *(double *)(lVar2 + 0x78) = (local_e0 * dVar10 - dVar4 * local_d8) + dVar11 * local_d0 + 0.0;
    *(double *)(lVar2 + 0x80) = (local_d8 * dVar11 - dVar10 * local_e8) + local_d0 * dVar4 + 0.0;
    *(double *)(lVar2 + 0x88) = (local_e8 * dVar4 - dVar11 * local_e0) + local_d0 * dVar10 + 1.0;
  }
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148415218 FUN_148415218 body=587 status=ok
// SIG undefined FUN_148415218(void)

void FUN_148415218(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  code *unaff_RBP;
  longlong lVar8;
  longlong unaff_R14;
  bool bVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8 [9];
  byte local_60;
  undefined8 local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0x82) == '\x01') {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x318))(plVar6);
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6);
    *(undefined1 *)((longlong)param_1 + 0x83) = uVar3;
  }
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x318))(plVar6);
  (**(code **)(*plVar6 + 0x30))(plVar6,local_a8);
  *(byte *)((longlong)param_1 + 0x42) = local_60 ^ 1;
  bVar9 = *(char *)((longlong)param_1 + 0x83) == '\x01';
  if (((param_1[0x45] != 0) && (param_1[0x46] != 0)) && (param_1[0x47] != 0)) {
    *(bool *)(param_1[0x45] + 0x3c) = bVar9;
    *(bool *)(param_1[0x46] + 0x3c) = bVar9;
    *(bool *)(param_1[0x47] + 0x3c) = bVar9;
  }
  if ((param_1[0x2e] != 0) && (unaff_R14 = 0, (longlong)(int)param_1[0x37] != 0)) {
    lVar1 = param_1[0x36];
    unaff_R14 = (longlong)(int)param_1[0x37] * 8;
    lVar8 = 0;
    do {
      local_58 = *(undefined8 *)(lVar1 + lVar8);
      local_49 = *(undefined1 *)((longlong)param_1 + 0x83);
      unaff_RBP = (code *)param_1[0x2e];
      plVar6 = (longlong *)param_1[0x30];
      if ((longlong *)param_1[0x30] == (longlong *)0x0) {
        plVar6 = param_1 + 0x32;
      }
      uVar7 = (**(code **)(*plVar6 + 8))();
      (*unaff_RBP)(uVar7,&local_58,&local_49);
      lVar8 = lVar8 + 8;
    } while (unaff_R14 != lVar8);
  }
  if (*(char *)((longlong)param_1 + 0x84) == '\0') {
    cVar4 = *(char *)((longlong)param_1 + 0x85);
  }
  else {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x318))(plVar6);
    cVar4 = (**(code **)(*plVar6 + 0x28))(plVar6);
    *(char *)((longlong)param_1 + 0x85) = cVar4;
  }
  if ((cVar4 == '\b') || (cVar4 == '\x03')) {
    pcVar2 = (code *)param_1[0x5c];
    plVar6 = param_1 + 0x60;
    if ((longlong *)param_1[0x5e] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[0x5e];
    }
    uVar7 = (**(code **)(*plVar6 + 8))();
    uVar5 = (*pcVar2)(uVar7);
  }
  else {
    uVar5 = 0;
  }
  bVar9 = cVar4 == '\b';
  FUN_143b4dd0c(param_1 + 0x3a,cVar4 == '\x01' || bVar9);
  FUN_143b4dd0c(param_1 + 0x3c,
                CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar4 == '\x02' || bVar9) & 0xffffffff);
  FUN_143b4dd0c(param_1 + 0x3e,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar4 == '\x03' || bVar9) & 0xffffffff);
  FUN_143b4dd0c(param_1 + 0x40,uVar5);
  FUN_148414e36(param_1);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148415464 FUN_148415464 body=1729 status=ok
// SIG undefined FUN_148415464(void)

void FUN_148415464(longlong *param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte bVar6;
  longlong lVar7;
  undefined1 auStack_218 [32];
  undefined1 local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong local_e8 [4];
  longlong local_c8 [4];
  longlong local_a8 [4];
  longlong local_88;
  longlong lStack_80;
  undefined4 local_78;
  undefined1 local_74;
  longlong *local_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if (param_1[7] != 0) {
    (**(code **)(*param_1 + 0x328))(param_1);
  }
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_14689c22e(param_2);
  }
  param_1[7] = (longlong)param_2;
  param_1[0x75] = param_3;
  uVar3 = *(undefined8 *)(param_1[0x43] + 0x1c8);
  (**(code **)(*param_2 + 0x2b0))(param_2,&local_188);
  local_1b8 = local_158;
  uStack_1b4 = uStack_154;
  uStack_1b0 = uStack_150;
  uStack_1ac = uStack_14c;
  local_1c8 = local_168;
  uStack_1c4 = uStack_164;
  uStack_1c0 = uStack_160;
  uStack_1bc = uStack_15c;
  local_1d8 = local_178;
  uStack_1d4 = uStack_174;
  uStack_1d0 = uStack_170;
  uStack_1cc = uStack_16c;
  local_1e8 = local_188;
  uStack_1e0 = uStack_180;
  local_1a8 = 0x3ff0000000000000;
  uStack_1a0 = 0x3ff0000000000000;
  local_198 = 0x3ff0000000000000;
  uStack_190 = 0;
  local_1f8 = 0;
  FUN_140613f88(uVar3,&local_1e8,0,0);
  local_78 = 0;
  local_88 = 0;
  local_74 = 1;
  local_70 = (longlong *)0x0;
  local_68 = 0;
  local_58 = 0;
  lStack_80 = param_1[7];
  local_50 = 1;
  local_60 = param_3;
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  lVar7 = param_1[0x74];
  param_1[0x74] = (longlong)puVar4;
  if (lVar7 != 0) {
    FUN_1400020a8();
  }
  lVar7 = param_1[0x43];
  local_a8[0] = *(longlong *)(lVar7 + 0x398);
  local_a8[1] = *(undefined8 *)(lVar7 + 0x3a0);
  local_a8[2] = *(undefined8 *)(lVar7 + 0x3a8);
  lVar7 = 0;
  do {
    lVar5 = *(longlong *)((longlong)local_a8 + lVar7 * 2);
    if (lVar5 != 0) {
      local_78 = *(undefined4 *)((longlong)&DAT_14aeb4cc8 + lVar7);
      local_88 = lVar5;
      (**(code **)(*param_1 + 0x368))(param_1,&local_88,param_1[0x74]);
    }
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0xc);
  lVar7 = param_1[0x43];
  local_c8[0] = *(longlong *)(lVar7 + 0x3b0);
  local_c8[1] = *(undefined8 *)(lVar7 + 0x3b8);
  local_c8[2] = *(undefined8 *)(lVar7 + 0x3c0);
  lVar7 = 0;
  do {
    lVar5 = *(longlong *)((longlong)local_c8 + lVar7 * 2);
    if (lVar5 != 0) {
      local_78 = *(undefined4 *)((longlong)&DAT_14aeb4cc8 + lVar7);
      local_88 = lVar5;
      (**(code **)(*param_1 + 0x378))(param_1,&local_88,param_1[0x74]);
    }
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0xc);
  lVar7 = param_1[0x43];
  local_e8[0] = *(longlong *)(lVar7 + 0x3c8);
  local_e8[1] = *(undefined8 *)(lVar7 + 0x3d0);
  local_e8[2] = *(undefined8 *)(lVar7 + 0x3d8);
  lVar7 = 0;
  do {
    lVar5 = *(longlong *)((longlong)local_e8 + lVar7 * 2);
    if (lVar5 != 0) {
      local_78 = *(undefined4 *)((longlong)&DAT_14aeb4cc8 + lVar7);
      local_88 = lVar5;
      (**(code **)(*param_1 + 0x388))(param_1,&local_88,param_1[0x74]);
    }
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0xc);
  lVar7 = param_1[0x43];
  if (*(longlong *)(lVar7 + 0x3e0) != 0) {
    iVar2 = (int)param_1[0x37];
    *(uint *)(param_1 + 0x37) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1bc) < iVar2 + 1U) {
      FUN_140e402be(param_1 + 0x36,iVar2);
    }
    lVar7 = *(longlong *)(lVar7 + 0x3e0);
    *(longlong *)(param_1[0x36] + (longlong)iVar2 * 8) = lVar7;
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e();
    }
    lVar7 = *(longlong *)(param_1[0x43] + 0x3e0);
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar7);
    }
    local_108 = 0;
    FUN_14485c47a(&local_108,lVar7);
    uStack_100 = 0;
    iVar2 = (int)param_1[0x3d];
    *(uint *)(param_1 + 0x3d) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1ec) < iVar2 + 1U) {
      FUN_14841c82e(param_1 + 0x3c,iVar2);
    }
    puVar1 = (undefined4 *)(param_1[0x3c] + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_108;
    puVar1[1] = local_108._4_4_;
    puVar1[2] = (undefined4)uStack_100;
    puVar1[3] = uStack_100._4_4_;
    lVar7 = param_1[0x43];
  }
  if (*(longlong *)(lVar7 + 1000) != 0) {
    local_78 = 0;
    local_88 = *(longlong *)(lVar7 + 1000);
    (**(code **)(*param_1 + 0x3b8))(param_1,&local_88,param_1[0x74]);
    lVar7 = param_1[0x43];
  }
  local_108 = *(undefined8 *)(lVar7 + 0x3f0);
  uStack_100 = *(undefined8 *)(lVar7 + 0x3f8);
  local_f8 = *(undefined8 *)(lVar7 + 0x400);
  lVar7 = 0;
  do {
    lVar5 = *(longlong *)((longlong)&local_108 + lVar7 * 2);
    if (lVar5 != 0) {
      local_78 = *(undefined4 *)((longlong)&DAT_14aeb4cc8 + lVar7);
      local_88 = lVar5;
      (**(code **)(*param_1 + 0x398))(param_1,&local_88,param_1[0x74]);
    }
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0xc);
  lVar7 = param_1[0x43];
  local_128[0] = *(longlong *)(lVar7 + 0x408);
  local_128[1] = *(undefined8 *)(lVar7 + 0x410);
  local_128[2] = *(undefined8 *)(lVar7 + 0x418);
  lVar7 = 0;
  do {
    lVar5 = *(longlong *)((longlong)local_128 + lVar7 * 2);
    if (lVar5 != 0) {
      local_78 = *(undefined4 *)((longlong)&DAT_14aeb4cc8 + lVar7);
      local_88 = lVar5;
      (**(code **)(*param_1 + 0x3a8))(param_1,&local_88,param_1[0x74]);
    }
    lVar7 = lVar7 + 4;
  } while (lVar7 != 0xc);
  lVar5 = param_1[0x74];
  lVar7 = *(longlong *)(lVar5 + 8);
  if (lVar7 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar7);
    lVar5 = param_1[0x74];
  }
  bVar6 = DAT_14c950c29;
  param_1[0x4b] = lVar7;
  lVar7 = *(longlong *)(lVar5 + 0x18);
  if (lVar7 != 0 && (~bVar6 & 1) == 0) {
    FUN_14689c22e(lVar7);
    lVar5 = param_1[0x74];
    bVar6 = DAT_14c950c29;
  }
  param_1[0x45] = lVar7;
  lVar7 = *(longlong *)(lVar5 + 0x20);
  if (lVar7 != 0 && (~bVar6 & 1) == 0) {
    FUN_14689c22e(lVar7);
    lVar5 = param_1[0x74];
    bVar6 = DAT_14c950c29;
  }
  param_1[0x46] = lVar7;
  lVar7 = *(longlong *)(lVar5 + 0x28);
  if ((lVar7 != 0) && ((bVar6 & 1) != 0)) {
    FUN_14689c22e(lVar7);
    lVar5 = param_1[0x74];
    bVar6 = DAT_14c950c29;
  }
  param_1[0x47] = lVar7;
  lVar7 = *(longlong *)(lVar5 + 0x10);
  if ((lVar7 != 0) && ((bVar6 & 1) != 0)) {
    FUN_14689c22e(lVar7);
    lVar5 = param_1[0x74];
    bVar6 = DAT_14c950c29;
  }
  param_1[0x44] = lVar7;
  lVar7 = *(longlong *)(lVar5 + 0x30);
  if ((lVar7 != 0) && ((bVar6 & 1) != 0)) {
    FUN_14689c22e(lVar7);
    lVar5 = param_1[0x74];
    bVar6 = DAT_14c950c29;
  }
  param_1[0x48] = lVar7;
  lVar7 = *(longlong *)(lVar5 + 0x38);
  if ((lVar7 != 0) && ((bVar6 & 1) != 0)) {
    FUN_14689c22e(lVar7);
    lVar5 = param_1[0x74];
    bVar6 = DAT_14c950c29;
  }
  param_1[0x49] = lVar7;
  lVar7 = *(longlong *)(lVar5 + 0x40);
  if ((lVar7 != 0) && ((bVar6 & 1) != 0)) {
    FUN_14689c22e(lVar7);
  }
  param_1[0x4a] = lVar7;
  FUN_14841c960(param_1 + 0x14,param_1,param_1[7]);
  if (local_70 != (longlong *)0x0) {
    (**(code **)(*local_70 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148415b26 FUN_148415b26 body=38 status=ok
// SIG undefined FUN_148415b26(void)

undefined8 * FUN_148415b26(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x218) + 0x1c8) + 0x240);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 148415b4c FUN_148415b4c body=361 status=ok
// SIG undefined FUN_148415b4c(void)

void FUN_148415b4c(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined8 local_c8 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x1c8);
  plVar1 = (longlong *)(lVar3 + 0x200);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 2;
  if (plVar1 != &local_68) {
    FUN_14841bb46(&local_68,plVar1);
  }
  FUN_1448a8284(plVar1);
  puVar5 = param_2;
  puVar6 = local_c8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (param_3 != '\0') {
    local_88 = 0x3ff0000000000000;
    uStack_80 = 0x3ff0000000000000;
    local_78 = 0x3ff0000000000000;
    uStack_70 = 0;
  }
  local_d8 = 0;
  FUN_140613f88(lVar3,local_c8,0,0);
  if (plVar1 != &local_68) {
    FUN_14841bb46(plVar1,&local_68);
  }
  uVar2 = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xd1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xd1) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2b8))(*(longlong **)(param_1 + 0x38),param_2);
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xd1) = uVar2;
  FUN_144760e21(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148415cb6 FUN_148415cb6 body=59 status=ok
// SIG undefined FUN_148415cb6(void)

void FUN_148415cb6(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x338))();
  FUN_148415cf2(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000148415cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x340))(param_1);
  return;
}



// FUNCTION 148415cf2 FUN_148415cf2 body=177 status=ok
// SIG undefined FUN_148415cf2(void)

void FUN_148415cf2(longlong param_1,undefined8 *param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_88 [8];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x1c8);
  puVar3 = param_2;
  puVar4 = local_88;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_3 != '\0') {
    local_48 = 0x3ff0000000000000;
    uStack_40 = 0x3ff0000000000000;
    local_38 = 0x3ff0000000000000;
    uStack_30 = 0;
  }
  local_98 = 0;
  FUN_140613f88(uVar1,local_88,0,0);
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2b8))(*(longlong **)(param_1 + 0x38),param_2);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148415dd8 FUN_148415dd8 body=152 status=ok
// SIG undefined FUN_148415dd8(void)

void FUN_148415dd8(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2b0))(*(longlong **)(param_1 + 0x38),local_88);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  uStack_30 = 0;
  uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xd1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xd1) = 1;
  (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2b8))(*(longlong **)(param_1 + 0x38),local_88);
  *(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0xd1) = uVar1;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148415e72 FUN_148415e72 body=77 status=ok
// SIG undefined FUN_148415e72(void)

void FUN_148415e72(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x218);
  lVar2 = plVar1[0xc];
  (**(code **)(*plVar1 + 0x330))(plVar1,param_2 ^ 1);
  if ((char)lVar2 < '\0' != (bool)(char)param_2) {
    return;
  }
  FUN_14841ca10(param_1 + 0xd0,param_1,param_2 & 0xffffffff);
  return;
}



// FUNCTION 148415ec0 FUN_148415ec0 body=562 status=ok
// SIG undefined FUN_148415ec0(void)

void FUN_148415ec0(longlong param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  longlong lVar17;
  undefined1 auStack_e8 [32];
  double local_c8 [12];
  byte local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bVar9 = *(byte *)(param_1 + 0x390);
  bVar16 = *(byte *)(param_2 + 0xc);
  if (bVar9 == bVar16) {
    if (bVar9 == 0) goto LAB_148416045;
    auVar5._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[5] - *(double *)(param_1 + 0x358)));
    auVar5._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[4] - *(double *)(param_1 + 0x350)));
    iVar11 = movmskpd((int)param_1,auVar5);
    auVar3._8_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[7] - *(double *)(param_1 + 0x368)));
    auVar3._0_8_ = -(ulonglong)
                    (9.999999747378752e-05 < ABS(param_2[6] - *(double *)(param_1 + 0x360)));
    uVar14 = movmskpd(param_3,auVar3);
    if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
      lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[1] - *(double *)(param_1 + 0x338)));
      auVar8._8_4_ = (int)lVar17;
      auVar8._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*param_2 - *(double *)(param_1 + 0x330)));
      auVar8._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      uVar14 = movmskpd(iVar11,auVar8);
      lVar17 = -(ulonglong)(9.999999747378752e-05 < ABS(param_2[3] - *(double *)(param_1 + 0x348)));
      auVar7._8_4_ = (int)lVar17;
      auVar7._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[2] - *(double *)(param_1 + 0x340)));
      auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      iVar11 = movmskpd(0,auVar7);
      uVar15 = iVar11 << 2 | uVar14;
      if (uVar15 != 0) {
        auVar6._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(param_2[1] + *(double *)(param_1 + 0x338)));
        auVar6._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(*param_2 + *(double *)(param_1 + 0x330)));
        uVar14 = movmskpd(uVar14,auVar6);
        auVar4._8_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(param_2[3] + *(double *)(param_1 + 0x348)));
        auVar4._0_8_ = -(ulonglong)
                        (9.999999747378752e-05 < ABS(param_2[2] + *(double *)(param_1 + 0x340)));
        uVar15 = movmskpd(uVar15,auVar4);
        if ((uVar15 & 0x3fffffff) != 0 || uVar14 != 0) goto LAB_14841608b;
      }
      auVar2._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[9] - *(double *)(param_1 + 0x378)));
      auVar2._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[8] - *(double *)(param_1 + 0x370)));
      iVar11 = movmskpd(uVar14,auVar2);
      auVar1._8_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[0xb] - *(double *)(param_1 + 0x388)));
      auVar1._0_8_ = -(ulonglong)
                      (9.999999747378752e-05 < ABS(param_2[10] - *(double *)(param_1 + 0x380)));
      uVar14 = movmskpd(0,auVar1);
      if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) goto LAB_148416045;
    }
  }
LAB_14841608b:
  if ((double *)(param_1 + 0x330) != param_2) {
    if (bVar16 == 0) {
      if (bVar9 == 0) goto LAB_148416097;
      uVar10 = 0;
    }
    else {
      pdVar12 = param_2;
      pdVar13 = (double *)(param_1 + 0x330);
      for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      uVar10 = 1;
    }
    *(undefined1 *)(param_1 + 0x390) = uVar10;
    bVar16 = *(byte *)(param_2 + 0xc);
  }
LAB_148416097:
  if ((bVar16 & 1) != 0) {
    pdVar12 = param_2;
    pdVar13 = local_c8;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pdVar13 = *pdVar12;
      pdVar12 = pdVar12 + 1;
      pdVar13 = pdVar13 + 1;
    }
  }
  local_68 = bVar16;
  FUN_14841cac0(param_1 + 0x88);
  bVar9 = *(byte *)(param_2 + 0xc);
LAB_148416045:
  if ((bVar9 & 1) != 0) {
    *(undefined1 *)(param_2 + 0xc) = 0;
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484160f4 FUN_1484160f4 body=1071 status=ok
// SIG undefined FUN_1484160f4(void)

longlong FUN_1484160f4(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_78 = 0;
  uStack_70 = 0;
  lVar7 = (**(code **)(*plVar6 + 0x2c0))(plVar6,param_1 + 0x1f,&local_78,0);
  if (lVar7 != 0) {
    lVar8 = FUN_145b72a32();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        == lVar8 + 0x30)) goto LAB_148416151;
  }
  lVar7 = 0;
LAB_148416151:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (lVar7 != 0) {
    FUN_1484110c8(lVar7,param_2,param_3);
    lVar8 = *(longlong *)(lVar7 + 0x58);
    if (lVar8 != 0) {
      lVar9 = FUN_145b71616();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
           ) == lVar9 + 0x30)) {
        iVar10 = 1;
        if ((int)param_2[2] != 2) {
          iVar10 = (uint)((int)param_2[2] == 3) * 2;
        }
        local_b8 = *(longlong *)(lVar8 + 0x90);
        uStack_70 = *(undefined8 *)(lVar8 + 0x98);
        local_a8 = *(longlong **)(lVar8 + 0xa0);
        uStack_60 = *(undefined8 *)(lVar8 + 0xa8);
        local_58 = *(longlong *)(lVar8 + 0xb0);
        uStack_50 = *(undefined8 *)(lVar8 + 0xb8);
        local_48 = *(undefined8 *)(lVar8 + 0xc0);
        uStack_40 = *(undefined8 *)(lVar8 + 200);
        uVar4 = local_48;
        uVar5 = uStack_40;
        local_68 = local_a8;
        uVar3 = uStack_60;
        local_78 = local_b8;
        uVar2 = uStack_70;
        *(ulonglong *)(lVar8 + 0xc0) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(lVar8 + 200) = CONCAT44(uStack_7c,uStack_80);
        *(undefined ***)(lVar8 + 0xb0) = &PTR_LAB_14aeb58c0;
        *(longlong **)(lVar8 + 0xb8) = param_1;
        *(undefined8 *)(lVar8 + 0xa0) = 0;
        *(ulonglong *)(lVar8 + 0xa8) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar8 + 0x90) = &LAB_143b4e33e;
        *(ulonglong *)(lVar8 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        if (local_b8 != 0) {
          plVar6 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar6 = &local_98;
          }
          uStack_70 = uVar2;
          uStack_60 = uVar3;
          local_48 = uVar4;
          uStack_40 = uVar5;
          (**(code **)(*plVar6 + 0x10))();
        }
        local_b8 = *(longlong *)(lVar8 + 0x50);
        uStack_70 = *(undefined8 *)(lVar8 + 0x58);
        local_a8 = *(longlong **)(lVar8 + 0x60);
        uStack_60 = *(undefined8 *)(lVar8 + 0x68);
        local_58 = *(longlong *)(lVar8 + 0x70);
        uStack_50 = *(undefined8 *)(lVar8 + 0x78);
        local_48 = *(undefined8 *)(lVar8 + 0x80);
        uStack_40 = *(undefined8 *)(lVar8 + 0x88);
        uVar4 = local_48;
        uVar5 = uStack_40;
        local_68 = local_a8;
        uVar3 = uStack_60;
        local_78 = local_b8;
        uVar2 = uStack_70;
        *(int *)(lVar8 + 0x80) = iVar10;
        *(ulonglong *)(lVar8 + 0x84) = CONCAT44(uStack_80,uStack_84);
        *(undefined4 *)(lVar8 + 0x8c) = uStack_7c;
        *(undefined ***)(lVar8 + 0x70) = &PTR_LAB_14aeb58e0;
        *(longlong **)(lVar8 + 0x78) = param_1;
        *(undefined8 *)(lVar8 + 0x60) = 0;
        *(ulonglong *)(lVar8 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar8 + 0x50) = &LAB_143b4e37a;
        *(ulonglong *)(lVar8 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
        uStack_b0 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_ac = uStack_70._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_9c = uStack_60._4_4_;
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_70 = uVar2;
        uStack_60 = uVar3;
        local_48 = uVar4;
        uStack_40 = uVar5;
        if (local_b8 != 0) {
          plVar6 = &local_98;
          if (local_a8 != (longlong *)0x0) {
            plVar6 = local_a8;
          }
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    local_78 = 0;
    FUN_14485c47a(&local_78,*param_2);
    uStack_70 = 0;
    FUN_14485c47a(&uStack_70,lVar7);
    iVar10 = (int)param_1[0x3b];
    *(uint *)(param_1 + 0x3b) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1dc) < iVar10 + 1U) {
      FUN_14841c82e(param_1 + 0x3a,iVar10);
    }
    puVar1 = (undefined4 *)(param_1[0x3a] + (longlong)iVar10 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    lVar8 = *param_2;
    if ((lVar8 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(lVar8);
    }
    iVar10 = (int)param_1[0x37];
    *(uint *)(param_1 + 0x37) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1bc) < iVar10 + 1U) {
      FUN_140e402be(param_1 + 0x36,iVar10);
    }
    *(longlong *)(param_1[0x36] + (longlong)iVar10 * 8) = lVar8;
    if (DAT_14c950c29 == 1 && lVar8 != 0) {
      FUN_14689c22e(lVar8);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(lVar7);
    }
    iVar10 = (int)param_1[0x39];
    *(uint *)(param_1 + 0x39) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1cc) < iVar10 + 1U) {
      FUN_14841cbdc(param_1 + 0x38,iVar10);
    }
    *(longlong *)(param_1[0x38] + (longlong)iVar10 * 8) = lVar7;
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar7);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar7;
}



// FUNCTION 148416524 FUN_148416524 body=1335 status=ok
// SIG undefined FUN_148416524(void)

longlong FUN_148416524(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_78 = 0;
  uStack_70 = 0;
  lVar8 = (**(code **)(*plVar7 + 0x2c0))(plVar7,param_1 + 0x21,&local_78,0);
  if (lVar8 != 0) {
    lVar9 = FUN_145b73d64();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_1484165a5;
  }
  lVar8 = 0;
LAB_1484165a5:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 != 0) {
    FUN_1484382c2(lVar8,param_2,param_3);
    lVar9 = *(longlong *)(lVar8 + 0x58);
    if (lVar9 != 0) {
      lVar10 = FUN_145b71700();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        uVar11 = 1;
        if ((int)param_2[2] != 2) {
          uVar11 = (ulonglong)((uint)((int)param_2[2] == 3) * 2);
        }
        local_b8 = *(longlong *)(lVar9 + 0xd0);
        uStack_70 = *(undefined8 *)(lVar9 + 0xd8);
        local_a8 = *(longlong **)(lVar9 + 0xe0);
        uStack_60 = *(undefined8 *)(lVar9 + 0xe8);
        local_58 = *(longlong *)(lVar9 + 0xf0);
        uStack_50 = *(undefined8 *)(lVar9 + 0xf8);
        local_48 = *(undefined8 *)(lVar9 + 0x100);
        uStack_40 = *(undefined8 *)(lVar9 + 0x108);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(ulonglong *)(lVar9 + 0x100) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(lVar9 + 0x108) = CONCAT44(uStack_7c,uStack_80);
        *(undefined ***)(lVar9 + 0xf0) = &PTR_LAB_14aeb5900;
        *(longlong **)(lVar9 + 0xf8) = param_1;
        *(undefined8 *)(lVar9 + 0xe0) = 0;
        *(ulonglong *)(lVar9 + 0xe8) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0xd0) = &LAB_143b4e3c2;
        *(ulonglong *)(lVar9 + 0xd8) = CONCAT44(uStack_ac,uStack_b0);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        if (local_b8 != 0) {
          plVar7 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar7 = &local_98;
          }
          uStack_70 = uVar3;
          uStack_60 = uVar4;
          local_48 = uVar5;
          uStack_40 = uVar6;
          (**(code **)(*plVar7 + 0x10))();
        }
        local_b8 = *(longlong *)(lVar9 + 0x50);
        uStack_70 = *(undefined8 *)(lVar9 + 0x58);
        local_a8 = *(longlong **)(lVar9 + 0x60);
        uStack_60 = *(undefined8 *)(lVar9 + 0x68);
        local_58 = *(longlong *)(lVar9 + 0x70);
        uStack_50 = *(undefined8 *)(lVar9 + 0x78);
        local_48 = *(undefined8 *)(lVar9 + 0x80);
        uStack_40 = *(undefined8 *)(lVar9 + 0x88);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(undefined4 *)(lVar9 + 0x80) = *(undefined4 *)(&DAT_14aeb4cd4 + uVar11 * 4);
        *(ulonglong *)(lVar9 + 0x84) = CONCAT44(uStack_80,uStack_84);
        *(undefined4 *)(lVar9 + 0x8c) = uStack_7c;
        *(undefined ***)(lVar9 + 0x70) = &PTR_LAB_14aeb5920;
        *(longlong **)(lVar9 + 0x78) = param_1;
        *(undefined8 *)(lVar9 + 0x60) = 0;
        *(ulonglong *)(lVar9 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0x50) = &LAB_143b4e3fe;
        *(ulonglong *)(lVar9 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        if (local_b8 != 0) {
          plVar7 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar7 = &local_98;
          }
          uStack_70 = uVar3;
          uStack_60 = uVar4;
          local_48 = uVar5;
          uStack_40 = uVar6;
          (**(code **)(*plVar7 + 0x10))();
        }
        local_b8 = *(longlong *)(lVar9 + 0x90);
        uStack_70 = *(undefined8 *)(lVar9 + 0x98);
        local_a8 = *(longlong **)(lVar9 + 0xa0);
        uStack_60 = *(undefined8 *)(lVar9 + 0xa8);
        local_58 = *(longlong *)(lVar9 + 0xb0);
        uStack_50 = *(undefined8 *)(lVar9 + 0xb8);
        local_48 = *(undefined8 *)(lVar9 + 0xc0);
        uStack_40 = *(undefined8 *)(lVar9 + 200);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(undefined4 *)(lVar9 + 0xc0) = *(undefined4 *)(&DAT_14aeb4ce0 + uVar11 * 4);
        *(ulonglong *)(lVar9 + 0xc4) = CONCAT44(uStack_80,uStack_84);
        *(undefined4 *)(lVar9 + 0xcc) = uStack_7c;
        *(undefined ***)(lVar9 + 0xb0) = &PTR_LAB_14aeb5940;
        *(longlong **)(lVar9 + 0xb8) = param_1;
        *(undefined8 *)(lVar9 + 0xa0) = 0;
        *(ulonglong *)(lVar9 + 0xa8) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0x90) = &LAB_143b4e446;
        *(ulonglong *)(lVar9 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
        uStack_b0 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_ac = uStack_70._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_9c = uStack_60._4_4_;
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_70 = uVar3;
        uStack_60 = uVar4;
        local_48 = uVar5;
        uStack_40 = uVar6;
        if (local_b8 != 0) {
          plVar7 = &local_98;
          if (local_a8 != (longlong *)0x0) {
            plVar7 = local_a8;
          }
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    local_78 = 0;
    FUN_14485c47a(&local_78,*param_2);
    uStack_70 = 0;
    FUN_14485c47a(&uStack_70,lVar8);
    iVar2 = (int)param_1[0x3b];
    *(uint *)(param_1 + 0x3b) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1dc) < iVar2 + 1U) {
      FUN_14841c82e(param_1 + 0x3a,iVar2);
    }
    puVar1 = (undefined4 *)(param_1[0x3a] + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    lVar9 = *param_2;
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(lVar9);
    }
    iVar2 = (int)param_1[0x37];
    *(uint *)(param_1 + 0x37) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1bc) < iVar2 + 1U) {
      FUN_140e402be(param_1 + 0x36,iVar2);
    }
    *(longlong *)(param_1[0x36] + (longlong)iVar2 * 8) = lVar9;
    if (DAT_14c950c29 == 1 && lVar9 != 0) {
      FUN_14689c22e(lVar9);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(lVar8);
    }
    iVar2 = (int)param_1[0x39];
    *(uint *)(param_1 + 0x39) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1cc) < iVar2 + 1U) {
      FUN_14841cbdc(param_1 + 0x38,iVar2);
    }
    *(longlong *)(param_1[0x38] + (longlong)iVar2 * 8) = lVar8;
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar8);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148416a5c FUN_148416a5c body=802 status=ok
// SIG undefined FUN_148416a5c(void)

longlong FUN_148416a5c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_78 = 0;
  uStack_70 = 0;
  lVar8 = (**(code **)(*plVar7 + 0x2c0))(plVar7,param_1 + 0x23,&local_78,0);
  if (lVar8 != 0) {
    lVar9 = FUN_145b7285e();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_148416ab8;
  }
  lVar8 = 0;
LAB_148416ab8:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 != 0) {
    FUN_148410676(lVar8,param_2,param_3);
    lVar9 = *(longlong *)(lVar8 + 0x58);
    if (lVar9 != 0) {
      lVar10 = FUN_145b717ea();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        local_b8 = *(longlong *)(lVar9 + 0x50);
        uStack_70 = *(undefined8 *)(lVar9 + 0x58);
        local_a8 = *(longlong **)(lVar9 + 0x60);
        uStack_60 = *(undefined8 *)(lVar9 + 0x68);
        local_58 = *(longlong *)(lVar9 + 0x70);
        uStack_50 = *(undefined8 *)(lVar9 + 0x78);
        local_48 = *(undefined8 *)(lVar9 + 0x80);
        uStack_40 = *(undefined8 *)(lVar9 + 0x88);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(ulonglong *)(lVar9 + 0x80) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(lVar9 + 0x88) = CONCAT44(uStack_7c,uStack_80);
        *(undefined ***)(lVar9 + 0x70) = &PTR_LAB_14aeb5960;
        *(longlong **)(lVar9 + 0x78) = param_1;
        *(undefined8 *)(lVar9 + 0x60) = 0;
        *(ulonglong *)(lVar9 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0x50) = &LAB_143b4e48e;
        *(ulonglong *)(lVar9 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
        uStack_b0 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_ac = uStack_70._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_9c = uStack_60._4_4_;
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_70 = uVar3;
        uStack_60 = uVar4;
        local_48 = uVar5;
        uStack_40 = uVar6;
        if (local_b8 != 0) {
          plVar7 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar7 = &local_98;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    local_78 = 0;
    FUN_14485c47a(&local_78,*param_2);
    uStack_70 = 0;
    FUN_14485c47a(&uStack_70,lVar8);
    iVar2 = (int)param_1[0x3d];
    *(uint *)(param_1 + 0x3d) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1ec) < iVar2 + 1U) {
      FUN_14841c82e(param_1 + 0x3c,iVar2);
    }
    puVar1 = (undefined4 *)(param_1[0x3c] + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    lVar9 = *param_2;
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(lVar9);
    }
    iVar2 = (int)param_1[0x37];
    *(uint *)(param_1 + 0x37) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1bc) < iVar2 + 1U) {
      FUN_140e402be(param_1 + 0x36,iVar2);
    }
    *(longlong *)(param_1[0x36] + (longlong)iVar2 * 8) = lVar9;
    if (DAT_14c950c29 == 1 && lVar9 != 0) {
      FUN_14689c22e(lVar9);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(lVar8);
    }
    iVar2 = (int)param_1[0x39];
    *(uint *)(param_1 + 0x39) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1cc) < iVar2 + 1U) {
      FUN_14841cbdc(param_1 + 0x38,iVar2);
    }
    *(longlong *)(param_1[0x38] + (longlong)iVar2 * 8) = lVar8;
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 148416d80 FUN_148416d80 body=809 status=ok
// SIG undefined FUN_148416d80(void)

longlong FUN_148416d80(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_78 = 0;
  uStack_70 = 0;
  lVar8 = (**(code **)(*plVar7 + 0x2c0))(plVar7,param_1 + 0x1f,&local_78,0);
  if (lVar8 != 0) {
    lVar9 = FUN_145b72a32();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_148416ddc;
  }
  lVar8 = 0;
LAB_148416ddc:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 != 0) {
    FUN_148411282(lVar8,param_2,(char)param_1[100],param_3);
    lVar9 = *(longlong *)(lVar8 + 0x58);
    if (lVar9 != 0) {
      lVar10 = FUN_145b719be();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        local_b8 = *(longlong *)(lVar9 + 0x50);
        uStack_70 = *(undefined8 *)(lVar9 + 0x58);
        local_a8 = *(longlong **)(lVar9 + 0x60);
        uStack_60 = *(undefined8 *)(lVar9 + 0x68);
        local_58 = *(longlong *)(lVar9 + 0x70);
        uStack_50 = *(undefined8 *)(lVar9 + 0x78);
        local_48 = *(undefined8 *)(lVar9 + 0x80);
        uStack_40 = *(undefined8 *)(lVar9 + 0x88);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(ulonglong *)(lVar9 + 0x80) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(lVar9 + 0x88) = CONCAT44(uStack_7c,uStack_80);
        *(undefined ***)(lVar9 + 0x70) = &PTR_LAB_14aeb5980;
        *(longlong **)(lVar9 + 0x78) = param_1;
        *(undefined8 *)(lVar9 + 0x60) = 0;
        *(ulonglong *)(lVar9 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0x50) = &LAB_143b4e4ce;
        *(ulonglong *)(lVar9 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
        uStack_b0 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_ac = uStack_70._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_9c = uStack_60._4_4_;
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_70 = uVar3;
        uStack_60 = uVar4;
        local_48 = uVar5;
        uStack_40 = uVar6;
        if (local_b8 != 0) {
          plVar7 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar7 = &local_98;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    local_78 = 0;
    FUN_14485c47a(&local_78,*param_2);
    uStack_70 = 0;
    FUN_14485c47a(&uStack_70,lVar8);
    iVar2 = (int)param_1[0x41];
    *(uint *)(param_1 + 0x41) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x20c) < iVar2 + 1U) {
      FUN_14841c82e(param_1 + 0x40,iVar2);
    }
    puVar1 = (undefined4 *)(param_1[0x40] + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    lVar9 = *param_2;
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(lVar9);
    }
    iVar2 = (int)param_1[0x37];
    *(uint *)(param_1 + 0x37) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1bc) < iVar2 + 1U) {
      FUN_140e402be(param_1 + 0x36,iVar2);
    }
    *(longlong *)(param_1[0x36] + (longlong)iVar2 * 8) = lVar9;
    if (DAT_14c950c29 == 1 && lVar9 != 0) {
      FUN_14689c22e(lVar9);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(lVar8);
    }
    iVar2 = (int)param_1[0x39];
    *(uint *)(param_1 + 0x39) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1cc) < iVar2 + 1U) {
      FUN_14841cbdc(param_1 + 0x38,iVar2);
    }
    *(longlong *)(param_1[0x38] + (longlong)iVar2 * 8) = lVar8;
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1484170aa FUN_1484170aa body=1060 status=ok
// SIG undefined FUN_1484170aa(void)

longlong FUN_1484170aa(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_78 = 0;
  uStack_70 = 0;
  lVar8 = (**(code **)(*plVar7 + 0x2c0))(plVar7,param_1 + 0x21,&local_78,0);
  if (lVar8 != 0) {
    lVar9 = FUN_145b73d64();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_148417129;
  }
  lVar8 = 0;
LAB_148417129:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 != 0) {
    FUN_1484383e0(lVar8,param_2,(char)param_1[100],param_3);
    lVar9 = *(longlong *)(lVar8 + 0x58);
    if (lVar9 != 0) {
      lVar10 = FUN_145b71aa8();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        local_b8 = *(longlong *)(lVar9 + 0x90);
        uStack_70 = *(undefined8 *)(lVar9 + 0x98);
        local_a8 = *(longlong **)(lVar9 + 0xa0);
        uStack_60 = *(undefined8 *)(lVar9 + 0xa8);
        local_58 = *(longlong *)(lVar9 + 0xb0);
        uStack_50 = *(undefined8 *)(lVar9 + 0xb8);
        local_48 = *(undefined8 *)(lVar9 + 0xc0);
        uStack_40 = *(undefined8 *)(lVar9 + 200);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(ulonglong *)(lVar9 + 0xc0) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(lVar9 + 200) = CONCAT44(uStack_7c,uStack_80);
        *(undefined ***)(lVar9 + 0xb0) = &PTR_LAB_14aeb59a0;
        *(longlong **)(lVar9 + 0xb8) = param_1;
        *(undefined8 *)(lVar9 + 0xa0) = 0;
        *(ulonglong *)(lVar9 + 0xa8) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0x90) = &LAB_143b4e50e;
        *(ulonglong *)(lVar9 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_a0 = (undefined4)uStack_60;
        uStack_9c = uStack_60._4_4_;
        uStack_b0 = (undefined4)uStack_70;
        uStack_ac = uStack_70._4_4_;
        if (local_b8 != 0) {
          plVar7 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar7 = &local_98;
          }
          uStack_70 = uVar3;
          uStack_60 = uVar4;
          local_48 = uVar5;
          uStack_40 = uVar6;
          (**(code **)(*plVar7 + 0x10))();
        }
        local_b8 = *(longlong *)(lVar9 + 0xd0);
        uStack_70 = *(undefined8 *)(lVar9 + 0xd8);
        local_a8 = *(longlong **)(lVar9 + 0xe0);
        uStack_60 = *(undefined8 *)(lVar9 + 0xe8);
        local_58 = *(longlong *)(lVar9 + 0xf0);
        uStack_50 = *(undefined8 *)(lVar9 + 0xf8);
        local_48 = *(undefined8 *)(lVar9 + 0x100);
        uStack_40 = *(undefined8 *)(lVar9 + 0x108);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(ulonglong *)(lVar9 + 0x100) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(lVar9 + 0x108) = CONCAT44(uStack_7c,uStack_80);
        *(undefined ***)(lVar9 + 0xf0) = &PTR_LAB_14aeb59c0;
        *(longlong **)(lVar9 + 0xf8) = param_1;
        *(undefined8 *)(lVar9 + 0xe0) = 0;
        *(ulonglong *)(lVar9 + 0xe8) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0xd0) = &LAB_143b4e54e;
        *(ulonglong *)(lVar9 + 0xd8) = CONCAT44(uStack_ac,uStack_b0);
        uStack_b0 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_ac = uStack_70._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_9c = uStack_60._4_4_;
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_70 = uVar3;
        uStack_60 = uVar4;
        local_48 = uVar5;
        uStack_40 = uVar6;
        if (local_b8 != 0) {
          plVar7 = &local_98;
          if (local_a8 != (longlong *)0x0) {
            plVar7 = local_a8;
          }
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    local_78 = 0;
    FUN_14485c47a(&local_78,*param_2);
    uStack_70 = 0;
    FUN_14485c47a(&uStack_70,lVar8);
    iVar2 = (int)param_1[0x41];
    *(uint *)(param_1 + 0x41) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x20c) < iVar2 + 1U) {
      FUN_14841c82e(param_1 + 0x40,iVar2);
    }
    puVar1 = (undefined4 *)(param_1[0x40] + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    lVar9 = *param_2;
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(lVar9);
    }
    iVar2 = (int)param_1[0x37];
    *(uint *)(param_1 + 0x37) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1bc) < iVar2 + 1U) {
      FUN_140e402be(param_1 + 0x36,iVar2);
    }
    *(longlong *)(param_1[0x36] + (longlong)iVar2 * 8) = lVar9;
    if (DAT_14c950c29 == 1 && lVar9 != 0) {
      FUN_14689c22e(lVar9);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(lVar8);
    }
    iVar2 = (int)param_1[0x39];
    *(uint *)(param_1 + 0x39) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1cc) < iVar2 + 1U) {
      FUN_14841cbdc(param_1 + 0x38,iVar2);
    }
    *(longlong *)(param_1[0x38] + (longlong)iVar2 * 8) = lVar8;
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484174d0 FUN_1484174d0 body=802 status=ok
// SIG undefined FUN_1484174d0(void)

longlong FUN_1484174d0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_78 = 0;
  uStack_70 = 0;
  lVar8 = (**(code **)(*plVar7 + 0x2c0))(plVar7,param_1 + 0x21,&local_78,0);
  if (lVar8 != 0) {
    lVar9 = FUN_145b73d64();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        == lVar9 + 0x30)) goto LAB_14841754f;
  }
  lVar8 = 0;
LAB_14841754f:
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 != 0) {
    FUN_148438546(lVar8,param_2,(char)param_1[100],param_3);
    lVar9 = *(longlong *)(lVar8 + 0x58);
    if (lVar9 != 0) {
      lVar10 = FUN_145b718d4();
      if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
        local_b8 = *(longlong *)(lVar9 + 0x50);
        uStack_70 = *(undefined8 *)(lVar9 + 0x58);
        local_a8 = *(longlong **)(lVar9 + 0x60);
        uStack_60 = *(undefined8 *)(lVar9 + 0x68);
        local_58 = *(longlong *)(lVar9 + 0x70);
        uStack_50 = *(undefined8 *)(lVar9 + 0x78);
        local_48 = *(undefined8 *)(lVar9 + 0x80);
        uStack_40 = *(undefined8 *)(lVar9 + 0x88);
        uVar5 = local_48;
        uVar6 = uStack_40;
        local_68 = local_a8;
        uVar4 = uStack_60;
        local_78 = local_b8;
        uVar3 = uStack_70;
        *(ulonglong *)(lVar9 + 0x80) = CONCAT44(uStack_84,local_88);
        *(ulonglong *)(lVar9 + 0x88) = CONCAT44(uStack_7c,uStack_80);
        *(undefined ***)(lVar9 + 0x70) = &PTR_LAB_14aeb59e0;
        *(longlong **)(lVar9 + 0x78) = param_1;
        *(undefined8 *)(lVar9 + 0x60) = 0;
        *(ulonglong *)(lVar9 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
        *(undefined1 **)(lVar9 + 0x50) = &LAB_143b4e58e;
        *(ulonglong *)(lVar9 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
        uStack_b0 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
        uStack_ac = uStack_70._4_4_;
        uStack_a0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
        uStack_9c = uStack_60._4_4_;
        local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
        uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
        local_88 = (undefined4)local_48;
        uStack_84 = local_48._4_4_;
        uStack_80 = (undefined4)uStack_40;
        uStack_7c = uStack_40._4_4_;
        local_98 = local_58;
        uStack_90 = uStack_50;
        uStack_70 = uVar3;
        uStack_60 = uVar4;
        local_48 = uVar5;
        uStack_40 = uVar6;
        if (local_b8 != 0) {
          plVar7 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar7 = &local_98;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
    local_78 = 0;
    FUN_14485c47a(&local_78,*param_2);
    uStack_70 = 0;
    FUN_14485c47a(&uStack_70,lVar8);
    iVar2 = (int)param_1[0x3f];
    *(uint *)(param_1 + 0x3f) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1fc) < iVar2 + 1U) {
      FUN_14841c82e(param_1 + 0x3e,iVar2);
    }
    puVar1 = (undefined4 *)(param_1[0x3e] + (longlong)iVar2 * 0x10);
    *puVar1 = (undefined4)local_78;
    puVar1[1] = local_78._4_4_;
    puVar1[2] = (undefined4)uStack_70;
    puVar1[3] = uStack_70._4_4_;
    lVar9 = *param_2;
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_14689c22e(lVar9);
    }
    iVar2 = (int)param_1[0x37];
    *(uint *)(param_1 + 0x37) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1bc) < iVar2 + 1U) {
      FUN_140e402be(param_1 + 0x36,iVar2);
    }
    *(longlong *)(param_1[0x36] + (longlong)iVar2 * 8) = lVar9;
    if (DAT_14c950c29 == 1 && lVar9 != 0) {
      FUN_14689c22e(lVar9);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_14689c22e(lVar8);
    }
    iVar2 = (int)param_1[0x39];
    *(uint *)(param_1 + 0x39) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1cc) < iVar2 + 1U) {
      FUN_14841cbdc(param_1 + 0x38,iVar2);
    }
    *(longlong *)(param_1[0x38] + (longlong)iVar2 * 8) = lVar8;
    if (DAT_14c950c29 == 1) {
      FUN_14689c22e(lVar8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484177f4 FUN_1484177f4 body=1646 status=ok
// SIG undefined FUN_1484177f4(void)

longlong FUN_1484177f4(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5,longlong *param_6,undefined4 param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_88 = 0;
  uStack_80 = 0;
  lVar7 = (**(code **)(*plVar6 + 0x2c0))(plVar6,param_1 + 0x1f,&local_88,0);
  if (lVar7 == 0) {
LAB_148417874:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_145b72a32();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_148417874;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (param_4 == (longlong *)0x0) {
LAB_1484178a0:
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*param_4 + 8))(param_4);
    if (local_88 == 0) goto LAB_1484178a0;
  }
  FUN_148417e64(lVar7 + 0x48,&local_88);
  lVar8 = FUN_148411178(param_4,param_5,param_1);
  local_c8 = *(longlong *)(lVar8 + 0x90);
  uStack_80 = *(undefined8 *)(lVar8 + 0x98);
  local_b8 = *(longlong **)(lVar8 + 0xa0);
  uStack_70 = *(undefined8 *)(lVar8 + 0xa8);
  local_68 = *(longlong *)(lVar8 + 0xb0);
  uStack_60 = *(undefined8 *)(lVar8 + 0xb8);
  local_58 = *(undefined8 *)(lVar8 + 0xc0);
  uStack_50 = *(undefined8 *)(lVar8 + 200);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(lVar8 + 0xc0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar8 + 200) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar8 + 0xb0) = &PTR_LAB_14aeb5a00;
  *(longlong **)(lVar8 + 0xb8) = param_1;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(ulonglong *)(lVar8 + 0xa8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar8 + 0x90) = &LAB_143b4e5ce;
  *(ulonglong *)(lVar8 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d0 = lVar8;
  if (local_c8 != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_c8 = *(longlong *)(lVar8 + 0x50);
  uStack_80 = *(undefined8 *)(lVar8 + 0x58);
  local_b8 = *(longlong **)(lVar8 + 0x60);
  uStack_70 = *(undefined8 *)(lVar8 + 0x68);
  local_68 = *(longlong *)(lVar8 + 0x70);
  uStack_60 = *(undefined8 *)(lVar8 + 0x78);
  local_58 = *(undefined8 *)(lVar8 + 0x80);
  uStack_50 = *(undefined8 *)(lVar8 + 0x88);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(undefined4 *)(lVar8 + 0x80) = param_7;
  *(ulonglong *)(lVar8 + 0x84) = CONCAT44(uStack_90,uStack_94);
  *(undefined4 *)(lVar8 + 0x8c) = uStack_8c;
  *(undefined ***)(lVar8 + 0x70) = &PTR_LAB_14aeb5a20;
  *(longlong **)(lVar8 + 0x78) = param_1;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(ulonglong *)(lVar8 + 0x68) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar8 + 0x50) = &LAB_143b4e60a;
  *(ulonglong *)(lVar8 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar2;
  uStack_70 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_148417ecc(lVar7 + 0x58,&local_d0);
  local_d8 = FUN_148431f66(param_2,param_1);
  if (param_1[0x26] != 0) {
    local_c8 = *(longlong *)(local_d8 + 0x80);
    uStack_80 = *(undefined8 *)(local_d8 + 0x88);
    local_b8 = *(longlong **)(local_d8 + 0x90);
    uStack_70 = *(undefined8 *)(local_d8 + 0x98);
    local_68 = *(longlong *)(local_d8 + 0xa0);
    uStack_60 = *(undefined8 *)(local_d8 + 0xa8);
    local_58 = *(undefined8 *)(local_d8 + 0xb0);
    uStack_50 = *(undefined8 *)(local_d8 + 0xb8);
    uVar4 = local_58;
    uVar5 = uStack_50;
    local_78 = local_b8;
    uVar3 = uStack_70;
    local_88 = local_c8;
    uVar2 = uStack_80;
    *(longlong **)(local_d8 + 0xb0) = param_1;
    *(ulonglong *)(local_d8 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined ***)(local_d8 + 0xa0) = &PTR_LAB_14aeb5a40;
    *(undefined8 *)(local_d8 + 0xa8) = param_2;
    *(undefined8 *)(local_d8 + 0x90) = 0;
    *(ulonglong *)(local_d8 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
    *(code **)(local_d8 + 0x80) = FUN_143b4e652;
    *(ulonglong *)(local_d8 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    if (local_c8 != 0) {
      plVar6 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar6 = &local_a8;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_148417f38(lVar7 + 0x70,&local_d8);
  if (param_6 != (longlong *)0x0) {
    local_88 = (**(code **)(*param_6 + 8))(param_6);
    if (local_88 != 0) goto LAB_148417bea;
  }
  local_88 = 0;
LAB_148417bea:
  FUN_148417fa4(lVar7 + 0x80,&local_88);
  local_c8 = *(longlong *)(lVar7 + 0xa0);
  uStack_80 = *(undefined8 *)(lVar7 + 0xa8);
  local_b8 = *(longlong **)(lVar7 + 0xb0);
  uStack_70 = *(undefined8 *)(lVar7 + 0xb8);
  local_68 = *(longlong *)(lVar7 + 0xc0);
  uStack_60 = *(undefined8 *)(lVar7 + 200);
  local_58 = *(undefined8 *)(lVar7 + 0xd0);
  uStack_50 = *(undefined8 *)(lVar7 + 0xd8);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(lVar7 + 0xd0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar7 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar7 + 0xc0) = &PTR_LAB_14aeb5a60;
  *(longlong **)(lVar7 + 200) = param_1;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(ulonglong *)(lVar7 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(lVar7 + 0xa0) = FUN_143b4e714;
  *(ulonglong *)(lVar7 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  if (local_c8 != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_c8 = *(longlong *)(lVar7 + 0xe0);
  uStack_80 = *(undefined8 *)(lVar7 + 0xe8);
  local_b8 = *(longlong **)(lVar7 + 0xf0);
  uStack_70 = *(undefined8 *)(lVar7 + 0xf8);
  local_68 = *(longlong *)(lVar7 + 0x100);
  uStack_60 = *(undefined8 *)(lVar7 + 0x108);
  local_58 = *(undefined8 *)(lVar7 + 0x110);
  uStack_50 = *(undefined8 *)(lVar7 + 0x118);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(lVar7 + 0x110) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar7 + 0x118) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar7 + 0x100) = &PTR_LAB_14aeb5a80;
  *(longlong **)(lVar7 + 0x108) = param_1;
  *(undefined8 *)(lVar7 + 0xf0) = 0;
  *(ulonglong *)(lVar7 + 0xf8) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(lVar7 + 0xe0) = FUN_143b4e780;
  *(ulonglong *)(lVar7 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar2;
  uStack_70 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != 0) {
    plVar6 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar6 = local_b8;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  iVar1 = (int)param_1[0x39];
  *(uint *)(param_1 + 0x39) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1cc) < iVar1 + 1U) {
    FUN_14841cbdc(param_1 + 0x38,iVar1);
  }
  *(longlong *)(param_1[0x38] + (longlong)iVar1 * 8) = lVar7;
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148417e64 FUN_148417e64 body=103 status=ok
// SIG undefined FUN_148417e64(void)

longlong * FUN_148417e64(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_148417eb0;
    }
  }
  else {
    FUN_14689c22e(lVar1);
  }
  uVar2 = FUN_141247b06();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
LAB_148417eb0:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 148417ecc FUN_148417ecc body=107 status=ok
// SIG undefined FUN_148417ecc(void)

longlong * FUN_148417ecc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148417f38 FUN_148417f38 body=107 status=ok
// SIG undefined FUN_148417f38(void)

longlong * FUN_148417f38(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148417fa4 FUN_148417fa4 body=103 status=ok
// SIG undefined FUN_148417fa4(void)

longlong * FUN_148417fa4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar1 == 0) {
      lVar3 = 0;
      goto LAB_148417ff0;
    }
  }
  else {
    FUN_14689c22e(lVar1);
  }
  uVar2 = FUN_1458bcd62();
  lVar3 = FUN_144718840(lVar1,uVar2);
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar1);
  }
LAB_148417ff0:
  *param_1 = lVar1;
  param_1[1] = lVar3;
  return param_1;
}



// FUNCTION 14841800c FUN_14841800c body=1903 status=ok
// SIG undefined FUN_14841800c(void)

longlong FUN_14841800c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5,longlong *param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_88 = 0;
  uStack_80 = 0;
  lVar7 = (**(code **)(*plVar6 + 0x2c0))(plVar6,param_1 + 0x21,&local_88,0);
  if (lVar7 == 0) {
LAB_14841808c:
    lVar7 = 0;
  }
  else {
    lVar8 = FUN_145b73d64();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
        != lVar8 + 0x30)) goto LAB_14841808c;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (param_4 == (longlong *)0x0) {
LAB_1484180b8:
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*param_4 + 8))(param_4);
    if (local_88 == 0) goto LAB_1484180b8;
  }
  FUN_148417e64(lVar7 + 0x48,&local_88);
  lVar8 = FUN_14841877c(param_4,param_5,param_1);
  local_c8 = *(longlong *)(lVar8 + 0xd0);
  uStack_80 = *(undefined8 *)(lVar8 + 0xd8);
  local_b8 = *(longlong **)(lVar8 + 0xe0);
  uStack_70 = *(undefined8 *)(lVar8 + 0xe8);
  local_68 = *(longlong *)(lVar8 + 0xf0);
  uStack_60 = *(undefined8 *)(lVar8 + 0xf8);
  local_58 = *(undefined8 *)(lVar8 + 0x100);
  uStack_50 = *(undefined8 *)(lVar8 + 0x108);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(lVar8 + 0x100) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar8 + 0x108) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar8 + 0xf0) = &PTR_LAB_14aeb5aa0;
  *(longlong **)(lVar8 + 0xf8) = param_1;
  *(undefined8 *)(lVar8 + 0xe0) = 0;
  *(ulonglong *)(lVar8 + 0xe8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar8 + 0xd0) = &LAB_143b4e7fc;
  *(ulonglong *)(lVar8 + 0xd8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d0 = lVar8;
  if (local_c8 != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_c8 = *(longlong *)(lVar8 + 0x50);
  uStack_80 = *(undefined8 *)(lVar8 + 0x58);
  local_b8 = *(longlong **)(lVar8 + 0x60);
  uStack_70 = *(undefined8 *)(lVar8 + 0x68);
  local_68 = *(longlong *)(lVar8 + 0x70);
  uStack_60 = *(undefined8 *)(lVar8 + 0x78);
  local_58 = *(undefined8 *)(lVar8 + 0x80);
  uStack_50 = *(undefined8 *)(lVar8 + 0x88);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(undefined4 *)(lVar8 + 0x80) = param_7;
  *(ulonglong *)(lVar8 + 0x84) = CONCAT44(uStack_90,uStack_94);
  *(undefined4 *)(lVar8 + 0x8c) = uStack_8c;
  *(undefined ***)(lVar8 + 0x70) = &PTR_LAB_14aeb5ac0;
  *(longlong **)(lVar8 + 0x78) = param_1;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(ulonglong *)(lVar8 + 0x68) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar8 + 0x50) = &LAB_143b4e838;
  *(ulonglong *)(lVar8 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  if (local_c8 != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_c8 = *(longlong *)(lVar8 + 0x90);
  uStack_80 = *(undefined8 *)(lVar8 + 0x98);
  local_b8 = *(longlong **)(lVar8 + 0xa0);
  uStack_70 = *(undefined8 *)(lVar8 + 0xa8);
  local_68 = *(longlong *)(lVar8 + 0xb0);
  uStack_60 = *(undefined8 *)(lVar8 + 0xb8);
  local_58 = *(undefined8 *)(lVar8 + 0xc0);
  uStack_50 = *(undefined8 *)(lVar8 + 200);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(undefined4 *)(lVar8 + 0xc0) = param_8;
  *(ulonglong *)(lVar8 + 0xc4) = CONCAT44(uStack_90,uStack_94);
  *(undefined4 *)(lVar8 + 0xcc) = uStack_8c;
  *(undefined ***)(lVar8 + 0xb0) = &PTR_LAB_14aeb5ae0;
  *(longlong **)(lVar8 + 0xb8) = param_1;
  *(undefined8 *)(lVar8 + 0xa0) = 0;
  *(ulonglong *)(lVar8 + 0xa8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar8 + 0x90) = &LAB_143b4e880;
  *(ulonglong *)(lVar8 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar2;
  uStack_70 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  FUN_14841881a(lVar7 + 0x58,&local_d0);
  local_d8 = FUN_148431f66(param_2,param_1);
  if (param_1[0x26] != 0) {
    local_c8 = *(longlong *)(local_d8 + 0x80);
    uStack_80 = *(undefined8 *)(local_d8 + 0x88);
    local_b8 = *(longlong **)(local_d8 + 0x90);
    uStack_70 = *(undefined8 *)(local_d8 + 0x98);
    local_68 = *(longlong *)(local_d8 + 0xa0);
    uStack_60 = *(undefined8 *)(local_d8 + 0xa8);
    local_58 = *(undefined8 *)(local_d8 + 0xb0);
    uStack_50 = *(undefined8 *)(local_d8 + 0xb8);
    uVar4 = local_58;
    uVar5 = uStack_50;
    local_78 = local_b8;
    uVar3 = uStack_70;
    local_88 = local_c8;
    uVar2 = uStack_80;
    *(longlong **)(local_d8 + 0xb0) = param_1;
    *(ulonglong *)(local_d8 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined ***)(local_d8 + 0xa0) = &PTR_LAB_14aeb5b00;
    *(undefined8 *)(local_d8 + 0xa8) = param_2;
    *(undefined8 *)(local_d8 + 0x90) = 0;
    *(ulonglong *)(local_d8 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
    *(code **)(local_d8 + 0x80) = FUN_143b4e8c8;
    *(ulonglong *)(local_d8 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_98 = (undefined4)local_58;
    uStack_94 = local_58._4_4_;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    if (local_c8 != 0) {
      plVar6 = local_b8;
      if (local_b8 == (longlong *)0x0) {
        plVar6 = &local_a8;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  FUN_148417f38(lVar7 + 0x68,&local_d8);
  if (param_6 != (longlong *)0x0) {
    local_88 = (**(code **)(*param_6 + 8))(param_6);
    if (local_88 != 0) goto LAB_148418506;
  }
  local_88 = 0;
LAB_148418506:
  FUN_148417fa4(lVar7 + 0x78,&local_88);
  local_c8 = *(longlong *)(lVar7 + 0xa0);
  uStack_80 = *(undefined8 *)(lVar7 + 0xa8);
  local_b8 = *(longlong **)(lVar7 + 0xb0);
  uStack_70 = *(undefined8 *)(lVar7 + 0xb8);
  local_68 = *(longlong *)(lVar7 + 0xc0);
  uStack_60 = *(undefined8 *)(lVar7 + 200);
  local_58 = *(undefined8 *)(lVar7 + 0xd0);
  uStack_50 = *(undefined8 *)(lVar7 + 0xd8);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(lVar7 + 0xd0) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar7 + 0xd8) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar7 + 0xc0) = &PTR_LAB_14aeb5b20;
  *(longlong **)(lVar7 + 200) = param_1;
  *(undefined8 *)(lVar7 + 0xb0) = 0;
  *(ulonglong *)(lVar7 + 0xb8) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(lVar7 + 0xa0) = FUN_143b4e98a;
  *(ulonglong *)(lVar7 + 0xa8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  if (local_c8 != 0) {
    plVar6 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar6 = &local_a8;
    }
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    local_58 = uVar4;
    uStack_50 = uVar5;
    (**(code **)(*plVar6 + 0x10))();
  }
  local_c8 = *(longlong *)(lVar7 + 0xe0);
  uStack_80 = *(undefined8 *)(lVar7 + 0xe8);
  local_b8 = *(longlong **)(lVar7 + 0xf0);
  uStack_70 = *(undefined8 *)(lVar7 + 0xf8);
  local_68 = *(longlong *)(lVar7 + 0x100);
  uStack_60 = *(undefined8 *)(lVar7 + 0x108);
  local_58 = *(undefined8 *)(lVar7 + 0x110);
  uStack_50 = *(undefined8 *)(lVar7 + 0x118);
  uVar4 = local_58;
  uVar5 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(ulonglong *)(lVar7 + 0x110) = CONCAT44(uStack_94,local_98);
  *(ulonglong *)(lVar7 + 0x118) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar7 + 0x100) = &PTR_LAB_14aeb5b40;
  *(longlong **)(lVar7 + 0x108) = param_1;
  *(undefined8 *)(lVar7 + 0xf0) = 0;
  *(ulonglong *)(lVar7 + 0xf8) = CONCAT44(uStack_ac,uStack_b0);
  *(code **)(lVar7 + 0xe0) = FUN_143b4e9f6;
  *(ulonglong *)(lVar7 + 0xe8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = (undefined4)local_58;
  uStack_94 = local_58._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar2;
  uStack_70 = uVar3;
  local_58 = uVar4;
  uStack_50 = uVar5;
  if (local_c8 != 0) {
    plVar6 = &local_a8;
    if (local_b8 != (longlong *)0x0) {
      plVar6 = local_b8;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  iVar1 = (int)param_1[0x39];
  *(uint *)(param_1 + 0x39) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1cc) < iVar1 + 1U) {
    FUN_14841cbdc(param_1 + 0x38,iVar1);
  }
  *(longlong *)(param_1[0x38] + (longlong)iVar1 * 8) = lVar7;
  if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841877c FUN_14841877c body=157 status=ok
// SIG undefined FUN_14841877c(void)

longlong FUN_14841877c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14841bc77(param_3);
  if (param_1 == (longlong *)0x0) {
LAB_1484187b6:
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)(*param_1 + 8))(param_1);
    if (local_28 == 0) goto LAB_1484187b6;
  }
  FUN_148417e64(lVar1 + 0x110);
  if (param_2 != (longlong *)0x0) {
    local_28 = (**(code **)(*param_2 + 8))(param_2);
    if (local_28 != 0) goto LAB_1484187e1;
  }
  local_28 = 0;
LAB_1484187e1:
  FUN_14841b920(lVar1 + 0x120);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841881a FUN_14841881a body=107 status=ok
// SIG undefined FUN_14841881a(void)

longlong * FUN_14841881a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148418886 FUN_148418886 body=1359 status=ok
// SIG undefined FUN_148418886(void)

longlong FUN_148418886(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5,longlong *param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_78 = 0;
  uStack_70 = 0;
  lVar6 = (**(code **)(*plVar5 + 0x2c0))(plVar5,param_1 + 0x23,&local_78,0);
  if (lVar6 == 0) {
LAB_148418905:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_145b7285e();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_148418905;
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (param_4 == (longlong *)0x0) {
LAB_148418931:
    local_78 = 0;
  }
  else {
    local_78 = (**(code **)(*param_4 + 8))(param_4);
    if (local_78 == 0) goto LAB_148418931;
  }
  FUN_148417e64(lVar6 + 0x48,&local_78);
  local_c0 = FUN_14841071e(param_4,param_5,param_1);
  local_b8 = *(longlong *)(local_c0 + 0x50);
  uStack_70 = *(undefined8 *)(local_c0 + 0x58);
  local_a8 = *(longlong **)(local_c0 + 0x60);
  uStack_60 = *(undefined8 *)(local_c0 + 0x68);
  local_58 = *(longlong *)(local_c0 + 0x70);
  uStack_50 = *(undefined8 *)(local_c0 + 0x78);
  local_48 = *(undefined8 *)(local_c0 + 0x80);
  uStack_40 = *(undefined8 *)(local_c0 + 0x88);
  uVar4 = uStack_40;
  local_68 = local_a8;
  uVar3 = uStack_60;
  local_78 = local_b8;
  uVar2 = uStack_70;
  *(undefined8 *)(local_c0 + 0x80) = local_88;
  *(ulonglong *)(local_c0 + 0x88) = CONCAT44(uStack_7c,uStack_80);
  *(undefined ***)(local_c0 + 0x70) = &PTR_LAB_14aeb5b60;
  *(longlong **)(local_c0 + 0x78) = param_1;
  *(undefined8 *)(local_c0 + 0x60) = 0;
  *(ulonglong *)(local_c0 + 0x68) = CONCAT44(uStack_9c,uStack_a0);
  *(undefined1 **)(local_c0 + 0x50) = &LAB_143b4ea72;
  *(ulonglong *)(local_c0 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = local_48;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar2;
  uStack_60 = uVar3;
  uStack_40 = uVar4;
  if (local_b8 != 0) {
    plVar5 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar5 = &local_98;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_1484107bc(lVar6 + 0x58,&local_c0);
  local_c8 = FUN_148431f66(param_2,param_1);
  if (param_1[0x26] != 0) {
    local_b8 = *(longlong *)(local_c8 + 0x80);
    uStack_70 = *(undefined8 *)(local_c8 + 0x88);
    local_a8 = *(longlong **)(local_c8 + 0x90);
    uStack_60 = *(undefined8 *)(local_c8 + 0x98);
    local_58 = *(longlong *)(local_c8 + 0xa0);
    uStack_50 = *(undefined8 *)(local_c8 + 0xa8);
    local_48 = *(undefined8 *)(local_c8 + 0xb0);
    uStack_40 = *(undefined8 *)(local_c8 + 0xb8);
    uVar4 = uStack_40;
    local_68 = local_a8;
    uVar3 = uStack_60;
    local_78 = local_b8;
    uVar2 = uStack_70;
    *(longlong **)(local_c8 + 0xb0) = param_1;
    *(ulonglong *)(local_c8 + 0xb8) = CONCAT44(uStack_7c,uStack_80);
    *(undefined ***)(local_c8 + 0xa0) = &PTR_LAB_14aeb5b80;
    *(undefined8 *)(local_c8 + 0xa8) = param_2;
    *(undefined8 *)(local_c8 + 0x90) = 0;
    *(ulonglong *)(local_c8 + 0x98) = CONCAT44(uStack_9c,uStack_a0);
    *(code **)(local_c8 + 0x80) = FUN_143b4eab2;
    *(ulonglong *)(local_c8 + 0x88) = CONCAT44(uStack_ac,uStack_b0);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
    uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
    local_88 = local_48;
    uStack_80 = (undefined4)uStack_40;
    uStack_7c = uStack_40._4_4_;
    local_98 = local_58;
    uStack_90 = uStack_50;
    uStack_a0 = (undefined4)uStack_60;
    uStack_9c = uStack_60._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_70 = uVar2;
    uStack_60 = uVar3;
    uStack_40 = uVar4;
    if (local_b8 != 0) {
      plVar5 = local_a8;
      if (local_a8 == (longlong *)0x0) {
        plVar5 = &local_98;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  FUN_148417f38(lVar6 + 0x68,&local_c8);
  if (param_6 != (longlong *)0x0) {
    local_78 = (**(code **)(*param_6 + 8))(param_6);
    if (local_78 != 0) goto LAB_148418b61;
  }
  local_78 = 0;
LAB_148418b61:
  FUN_148417fa4(lVar6 + 0x78,&local_78);
  local_b8 = *(longlong *)(lVar6 + 0x90);
  uStack_70 = *(undefined8 *)(lVar6 + 0x98);
  local_a8 = *(longlong **)(lVar6 + 0xa0);
  uStack_60 = *(undefined8 *)(lVar6 + 0xa8);
  local_58 = *(longlong *)(lVar6 + 0xb0);
  uStack_50 = *(undefined8 *)(lVar6 + 0xb8);
  local_48 = *(undefined8 *)(lVar6 + 0xc0);
  uStack_40 = *(undefined8 *)(lVar6 + 200);
  uVar4 = uStack_40;
  local_68 = local_a8;
  uVar3 = uStack_60;
  local_78 = local_b8;
  uVar2 = uStack_70;
  *(undefined8 *)(lVar6 + 0xc0) = local_88;
  *(ulonglong *)(lVar6 + 200) = CONCAT44(uStack_7c,uStack_80);
  *(undefined ***)(lVar6 + 0xb0) = &PTR_LAB_14aeb5ba0;
  *(longlong **)(lVar6 + 0xb8) = param_1;
  *(undefined8 *)(lVar6 + 0xa0) = 0;
  *(ulonglong *)(lVar6 + 0xa8) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar6 + 0x90) = FUN_143b4eb74;
  *(ulonglong *)(lVar6 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = local_48;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  if (local_b8 != 0) {
    plVar5 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar5 = &local_98;
    }
    uStack_70 = uVar2;
    uStack_60 = uVar3;
    uStack_40 = uVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_b8 = *(longlong *)(lVar6 + 0xd0);
  uStack_70 = *(undefined8 *)(lVar6 + 0xd8);
  local_a8 = *(longlong **)(lVar6 + 0xe0);
  uStack_60 = *(undefined8 *)(lVar6 + 0xe8);
  local_58 = *(longlong *)(lVar6 + 0xf0);
  uStack_50 = *(undefined8 *)(lVar6 + 0xf8);
  local_48 = *(undefined8 *)(lVar6 + 0x100);
  uStack_40 = *(undefined8 *)(lVar6 + 0x108);
  uVar4 = uStack_40;
  local_68 = local_a8;
  uVar3 = uStack_60;
  local_78 = local_b8;
  uVar2 = uStack_70;
  *(undefined8 *)(lVar6 + 0x100) = local_88;
  *(ulonglong *)(lVar6 + 0x108) = CONCAT44(uStack_7c,uStack_80);
  *(undefined ***)(lVar6 + 0xf0) = &PTR_LAB_14aeb5bc0;
  *(longlong **)(lVar6 + 0xf8) = param_1;
  *(undefined8 *)(lVar6 + 0xe0) = 0;
  *(ulonglong *)(lVar6 + 0xe8) = CONCAT44(uStack_9c,uStack_a0);
  *(code **)(lVar6 + 0xd0) = FUN_143b4ebe0;
  *(ulonglong *)(lVar6 + 0xd8) = CONCAT44(uStack_ac,uStack_b0);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_88 = local_48;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  local_98 = local_58;
  uStack_90 = uStack_50;
  uStack_a0 = (undefined4)uStack_60;
  uStack_9c = uStack_60._4_4_;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_70 = uVar2;
  uStack_60 = uVar3;
  uStack_40 = uVar4;
  if (local_b8 != 0) {
    plVar5 = &local_98;
    if (local_a8 != (longlong *)0x0) {
      plVar5 = local_a8;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  iVar1 = (int)param_1[0x39];
  *(uint *)(param_1 + 0x39) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1cc) < iVar1 + 1U) {
    FUN_14841cbdc(param_1 + 0x38,iVar1);
  }
  *(longlong *)(param_1[0x38] + (longlong)iVar1 * 8) = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148418dd6 FUN_148418dd6 body=953 status=ok
// SIG undefined FUN_148418dd6(void)

longlong FUN_148418dd6(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_88 = 0;
  uStack_80 = 0;
  lVar6 = (**(code **)(*plVar5 + 0x2c0))(plVar5,param_1 + 0x1f,&local_88,0);
  if (lVar6 == 0) {
LAB_148418e57:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_145b72a32();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_148418e57;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(lVar6 + 0x98) = 1;
  if (param_4 == (longlong *)0x0) {
LAB_148418e92:
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*param_4 + 8))(param_4);
    if (local_88 == 0) goto LAB_148418e92;
  }
  FUN_148417e64(lVar6 + 0x48,&local_88);
  lVar7 = FUN_1484113d8(param_5,param_6,param_1);
  local_c8 = *(longlong *)(lVar7 + 0x50);
  uStack_80 = *(undefined8 *)(lVar7 + 0x58);
  local_b8 = *(longlong **)(lVar7 + 0x60);
  uStack_70 = *(undefined8 *)(lVar7 + 0x68);
  local_68 = *(longlong *)(lVar7 + 0x70);
  uStack_60 = *(undefined8 *)(lVar7 + 0x78);
  local_58 = *(undefined8 *)(lVar7 + 0x80);
  uStack_50 = *(undefined8 *)(lVar7 + 0x88);
  uVar4 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(undefined8 *)(lVar7 + 0x80) = local_98;
  *(ulonglong *)(lVar7 + 0x88) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar7 + 0x70) = &PTR_LAB_14aeb5be0;
  *(longlong **)(lVar7 + 0x78) = param_1;
  *(undefined8 *)(lVar7 + 0x60) = 0;
  *(ulonglong *)(lVar7 + 0x68) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar7 + 0x50) = &LAB_143b4ec5c;
  *(ulonglong *)(lVar7 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d0 = lVar7;
  uStack_80 = uVar2;
  uStack_70 = uVar3;
  uStack_50 = uVar4;
  if (local_c8 != 0) {
    plVar5 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar5 = &local_a8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  *(char *)(lVar7 + 0xf4) = (char)param_1[100];
  FUN_148411476(lVar6 + 0x58,&local_d0);
  local_d8 = FUN_148431f66(param_2,param_1);
  if (param_1[0x26] != 0) {
    local_c8 = *(longlong *)(local_d8 + 0x80);
    uStack_80 = *(undefined8 *)(local_d8 + 0x88);
    local_b8 = *(longlong **)(local_d8 + 0x90);
    uStack_70 = *(undefined8 *)(local_d8 + 0x98);
    local_68 = *(longlong *)(local_d8 + 0xa0);
    uStack_60 = *(undefined8 *)(local_d8 + 0xa8);
    local_58 = *(undefined8 *)(local_d8 + 0xb0);
    uStack_50 = *(undefined8 *)(local_d8 + 0xb8);
    uVar4 = uStack_50;
    local_78 = local_b8;
    uVar3 = uStack_70;
    local_88 = local_c8;
    uVar2 = uStack_80;
    *(longlong **)(local_d8 + 0xb0) = param_1;
    *(ulonglong *)(local_d8 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined ***)(local_d8 + 0xa0) = &PTR_LAB_14aeb5c00;
    *(undefined8 *)(local_d8 + 0xa8) = param_2;
    *(undefined8 *)(local_d8 + 0x90) = 0;
    *(ulonglong *)(local_d8 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
    *(code **)(local_d8 + 0x80) = FUN_143b4ec9c;
    *(ulonglong *)(local_d8 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_98 = local_58;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    uStack_50 = uVar4;
    if (local_c8 != 0) {
      plVar5 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar5 = local_b8;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  FUN_148417f38(lVar6 + 0x70,&local_d8);
  if (param_7 != (longlong *)0x0) {
    local_88 = (**(code **)(*param_7 + 8))(param_7);
    if (local_88 != 0) goto LAB_1484190ec;
  }
  local_88 = 0;
LAB_1484190ec:
  FUN_148417fa4(lVar6 + 0x80);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  iVar1 = (int)param_1[0x39];
  *(uint *)(param_1 + 0x39) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1cc) < iVar1 + 1U) {
    FUN_14841cbdc(param_1 + 0x38,iVar1);
  }
  *(longlong *)(param_1[0x38] + (longlong)iVar1 * 8) = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148419190 FUN_148419190 body=1229 status=ok
// SIG undefined FUN_148419190(void)

longlong FUN_148419190(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_88 = 0;
  uStack_80 = 0;
  lVar6 = (**(code **)(*plVar5 + 0x2c0))(plVar5,param_1 + 0x21,&local_88,0);
  if (lVar6 == 0) {
LAB_148419211:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_145b73d64();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_148419211;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(lVar6 + 0x90) = 1;
  if (param_4 == (longlong *)0x0) {
LAB_14841924c:
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*param_4 + 8))(param_4);
    if (local_88 == 0) goto LAB_14841924c;
  }
  FUN_148417e64(lVar6 + 0x48,&local_88);
  lVar7 = FUN_14841965e(param_5,param_6,param_1);
  local_c8 = *(longlong *)(lVar7 + 0x90);
  uStack_80 = *(undefined8 *)(lVar7 + 0x98);
  local_b8 = *(longlong **)(lVar7 + 0xa0);
  uStack_70 = *(undefined8 *)(lVar7 + 0xa8);
  local_68 = *(longlong *)(lVar7 + 0xb0);
  uStack_60 = *(undefined8 *)(lVar7 + 0xb8);
  local_58 = *(undefined8 *)(lVar7 + 0xc0);
  uStack_50 = *(undefined8 *)(lVar7 + 200);
  uVar4 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(undefined8 *)(lVar7 + 0xc0) = local_98;
  *(ulonglong *)(lVar7 + 200) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar7 + 0xb0) = &PTR_LAB_14aeb5c20;
  *(longlong **)(lVar7 + 0xb8) = param_1;
  *(undefined8 *)(lVar7 + 0xa0) = 0;
  *(ulonglong *)(lVar7 + 0xa8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar7 + 0x90) = &LAB_143b4ed5e;
  *(ulonglong *)(lVar7 + 0x98) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  local_d0 = lVar7;
  if (local_c8 != 0) {
    plVar5 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar5 = &local_a8;
    }
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    uStack_50 = uVar4;
    (**(code **)(*plVar5 + 0x10))();
  }
  local_c8 = *(longlong *)(lVar7 + 0xd0);
  uStack_80 = *(undefined8 *)(lVar7 + 0xd8);
  local_b8 = *(longlong **)(lVar7 + 0xe0);
  uStack_70 = *(undefined8 *)(lVar7 + 0xe8);
  local_68 = *(longlong *)(lVar7 + 0xf0);
  uStack_60 = *(undefined8 *)(lVar7 + 0xf8);
  local_58 = *(undefined8 *)(lVar7 + 0x100);
  uStack_50 = *(undefined8 *)(lVar7 + 0x108);
  uVar4 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(undefined8 *)(lVar7 + 0x100) = local_98;
  *(ulonglong *)(lVar7 + 0x108) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(lVar7 + 0xf0) = &PTR_LAB_14aeb5c40;
  *(longlong **)(lVar7 + 0xf8) = param_1;
  *(undefined8 *)(lVar7 + 0xe0) = 0;
  *(ulonglong *)(lVar7 + 0xe8) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(lVar7 + 0xd0) = &LAB_143b4ed9e;
  *(ulonglong *)(lVar7 + 0xd8) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar2;
  uStack_70 = uVar3;
  uStack_50 = uVar4;
  if (local_c8 != 0) {
    plVar5 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar5 = &local_a8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  *(char *)(lVar7 + 0x175) = (char)param_1[100];
  *(undefined1 *)(lVar7 + 0x174) = 1;
  FUN_1484196fc(lVar6 + 0x58,&local_d0);
  local_d8 = FUN_148431f66(param_2,param_1);
  if (param_1[0x26] != 0) {
    local_c8 = *(longlong *)(local_d8 + 0x80);
    uStack_80 = *(undefined8 *)(local_d8 + 0x88);
    local_b8 = *(longlong **)(local_d8 + 0x90);
    uStack_70 = *(undefined8 *)(local_d8 + 0x98);
    local_68 = *(longlong *)(local_d8 + 0xa0);
    uStack_60 = *(undefined8 *)(local_d8 + 0xa8);
    local_58 = *(undefined8 *)(local_d8 + 0xb0);
    uStack_50 = *(undefined8 *)(local_d8 + 0xb8);
    uVar4 = uStack_50;
    local_78 = local_b8;
    uVar3 = uStack_70;
    local_88 = local_c8;
    uVar2 = uStack_80;
    *(longlong **)(local_d8 + 0xb0) = param_1;
    *(ulonglong *)(local_d8 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined ***)(local_d8 + 0xa0) = &PTR_LAB_14aeb5c60;
    *(undefined8 *)(local_d8 + 0xa8) = param_2;
    *(undefined8 *)(local_d8 + 0x90) = 0;
    *(ulonglong *)(local_d8 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
    *(code **)(local_d8 + 0x80) = FUN_143b4edde;
    *(ulonglong *)(local_d8 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_98 = local_58;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    uStack_50 = uVar4;
    if (local_c8 != 0) {
      plVar5 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar5 = local_b8;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  FUN_148417f38(lVar6 + 0x68,&local_d8);
  if (param_7 != (longlong *)0x0) {
    local_88 = (**(code **)(*param_7 + 8))(param_7);
    if (local_88 != 0) goto LAB_1484195bd;
  }
  local_88 = 0;
LAB_1484195bd:
  FUN_148417fa4(lVar6 + 0x78);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  iVar1 = (int)param_1[0x39];
  *(uint *)(param_1 + 0x39) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1cc) < iVar1 + 1U) {
    FUN_14841cbdc(param_1 + 0x38,iVar1);
  }
  *(longlong *)(param_1[0x38] + (longlong)iVar1 * 8) = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841965e FUN_14841965e body=157 status=ok
// SIG undefined FUN_14841965e(void)

longlong FUN_14841965e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14841bd0c(param_3);
  if (param_1 == (longlong *)0x0) {
LAB_148419698:
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)(*param_1 + 8))(param_1);
    if (local_28 == 0) goto LAB_148419698;
  }
  FUN_148417e64(lVar1 + 0x150);
  if (param_2 != (longlong *)0x0) {
    local_28 = (**(code **)(*param_2 + 8))(param_2);
    if (local_28 != 0) goto LAB_1484196c3;
  }
  local_28 = 0;
LAB_1484196c3:
  FUN_14841b920(lVar1 + 0x160);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1484196fc FUN_1484196fc body=107 status=ok
// SIG undefined FUN_1484196fc(void)

longlong * FUN_1484196fc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148419768 FUN_148419768 body=910 status=ok
// SIG undefined FUN_148419768(void)

longlong FUN_148419768(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                      undefined8 param_5,undefined8 param_6,longlong *param_7)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
  local_88 = 0;
  uStack_80 = 0;
  lVar6 = (**(code **)(*plVar5 + 0x2c0))(plVar5,param_1 + 0x21,&local_88,0);
  if (lVar6 == 0) {
LAB_1484197e9:
    lVar6 = 0;
  }
  else {
    lVar7 = FUN_145b73d64();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
        != lVar7 + 0x30)) goto LAB_1484197e9;
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (param_4 == (longlong *)0x0) {
LAB_14841981d:
    local_88 = 0;
  }
  else {
    local_88 = (**(code **)(*param_4 + 8))(param_4);
    if (local_88 == 0) goto LAB_14841981d;
  }
  FUN_148417e64(lVar6 + 0x48,&local_88);
  local_d0 = FUN_148419af8(param_5,param_6,param_1);
  local_c8 = *(longlong *)(local_d0 + 0x50);
  uStack_80 = *(undefined8 *)(local_d0 + 0x58);
  local_b8 = *(longlong **)(local_d0 + 0x60);
  uStack_70 = *(undefined8 *)(local_d0 + 0x68);
  local_68 = *(longlong *)(local_d0 + 0x70);
  uStack_60 = *(undefined8 *)(local_d0 + 0x78);
  local_58 = *(undefined8 *)(local_d0 + 0x80);
  uStack_50 = *(undefined8 *)(local_d0 + 0x88);
  uVar4 = uStack_50;
  local_78 = local_b8;
  uVar3 = uStack_70;
  local_88 = local_c8;
  uVar2 = uStack_80;
  *(undefined8 *)(local_d0 + 0x80) = local_98;
  *(ulonglong *)(local_d0 + 0x88) = CONCAT44(uStack_8c,uStack_90);
  *(undefined ***)(local_d0 + 0x70) = &PTR_LAB_14aeb5c80;
  *(longlong **)(local_d0 + 0x78) = param_1;
  *(undefined8 *)(local_d0 + 0x60) = 0;
  *(ulonglong *)(local_d0 + 0x68) = CONCAT44(uStack_ac,uStack_b0);
  *(undefined1 **)(local_d0 + 0x50) = &LAB_143b4eea0;
  *(ulonglong *)(local_d0 + 0x58) = CONCAT44(uStack_bc,uStack_c0);
  uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  local_98 = local_58;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_a8 = local_68;
  uStack_a0 = uStack_60;
  uStack_b0 = (undefined4)uStack_70;
  uStack_ac = uStack_70._4_4_;
  uStack_c0 = (undefined4)uStack_80;
  uStack_bc = uStack_80._4_4_;
  uStack_80 = uVar2;
  uStack_70 = uVar3;
  uStack_50 = uVar4;
  if (local_c8 != 0) {
    plVar5 = local_b8;
    if (local_b8 == (longlong *)0x0) {
      plVar5 = &local_a8;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  FUN_148419b96(lVar6 + 0x58,&local_d0);
  local_d8 = FUN_148431f66(param_2,param_1);
  if (param_1[0x26] != 0) {
    local_c8 = *(longlong *)(local_d8 + 0x80);
    uStack_80 = *(undefined8 *)(local_d8 + 0x88);
    local_b8 = *(longlong **)(local_d8 + 0x90);
    uStack_70 = *(undefined8 *)(local_d8 + 0x98);
    local_68 = *(longlong *)(local_d8 + 0xa0);
    uStack_60 = *(undefined8 *)(local_d8 + 0xa8);
    local_58 = *(undefined8 *)(local_d8 + 0xb0);
    uStack_50 = *(undefined8 *)(local_d8 + 0xb8);
    uVar4 = uStack_50;
    local_78 = local_b8;
    uVar3 = uStack_70;
    local_88 = local_c8;
    uVar2 = uStack_80;
    *(longlong **)(local_d8 + 0xb0) = param_1;
    *(ulonglong *)(local_d8 + 0xb8) = CONCAT44(uStack_8c,uStack_90);
    *(undefined ***)(local_d8 + 0xa0) = &PTR_LAB_14aeb5ca0;
    *(undefined8 *)(local_d8 + 0xa8) = param_2;
    *(undefined8 *)(local_d8 + 0x90) = 0;
    *(ulonglong *)(local_d8 + 0x98) = CONCAT44(uStack_ac,uStack_b0);
    *(code **)(local_d8 + 0x80) = FUN_143b4eee0;
    *(ulonglong *)(local_d8 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
    local_98 = local_58;
    uStack_90 = (undefined4)uStack_50;
    uStack_8c = uStack_50._4_4_;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar2;
    uStack_70 = uVar3;
    uStack_50 = uVar4;
    if (local_c8 != 0) {
      plVar5 = &local_a8;
      if (local_b8 != (longlong *)0x0) {
        plVar5 = local_b8;
      }
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
  FUN_148417f38(lVar6 + 0x68,&local_d8);
  if (param_7 != (longlong *)0x0) {
    local_88 = (**(code **)(*param_7 + 8))(param_7);
    if (local_88 != 0) goto LAB_148419a56;
  }
  local_88 = 0;
LAB_148419a56:
  FUN_148417fa4(lVar6 + 0x78);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  iVar1 = (int)param_1[0x39];
  *(uint *)(param_1 + 0x39) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1cc) < iVar1 + 1U) {
    FUN_14841cbdc(param_1 + 0x38,iVar1);
  }
  *(longlong *)(param_1[0x38] + (longlong)iVar1 * 8) = lVar6;
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar6);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148419af8 FUN_148419af8 body=157 status=ok
// SIG undefined FUN_148419af8(void)

longlong FUN_148419af8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_14841bda1(param_3);
  if (param_1 == (longlong *)0x0) {
LAB_148419b32:
    local_28 = 0;
  }
  else {
    local_28 = (**(code **)(*param_1 + 8))(param_1);
    if (local_28 == 0) goto LAB_148419b32;
  }
  FUN_148417e64(lVar1 + 0xd0);
  if (param_2 != (longlong *)0x0) {
    local_28 = (**(code **)(*param_2 + 8))(param_2);
    if (local_28 != 0) goto LAB_148419b5d;
  }
  local_28 = 0;
LAB_148419b5d:
  FUN_14841b920(lVar1 + 0xe0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148419b96 FUN_148419b96 body=107 status=ok
// SIG undefined FUN_148419b96(void)

longlong * FUN_148419b96(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  lVar3 = lVar1;
  if (lVar1 != 0 && DAT_14c950c29 == 1) {
    FUN_14689c22e(lVar1);
    lVar3 = *param_2;
  }
  if ((lVar1 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_14689c22e(lVar1);
  }
  lVar2 = lVar3 + 0x28;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 148419c02 FUN_148419c02 body=245 status=ok
// SIG undefined FUN_148419c02(void)

void FUN_148419c02(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  FUN_14841c960(param_1 + 0x17,param_1,param_1[7]);
  lVar3 = param_1[0x39];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x38];
    lVar5 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar1 + lVar5);
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
      (**(code **)(*plVar4 + 0x2c8))(plVar4,uVar2);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  FUN_148419cf8(param_1 + 0x38,0,1);
  FUN_148419d76(param_1 + 0x36,0,1);
  FUN_148419df2(param_1 + 0x3a);
  FUN_148419df2(param_1 + 0x3c);
  FUN_148419df2(param_1 + 0x3e);
  FUN_148419df2(param_1 + 0x40);
  param_1[7] = 0;
  param_1[0x75] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  return;
}



// FUNCTION 148419cf8 FUN_148419cf8 body=124 status=ok
// SIG undefined FUN_148419cf8(void)

void FUN_148419cf8(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14841cbdc(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14841cc62(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148419d76 FUN_148419d76 body=122 status=ok
// SIG undefined FUN_148419d76(void)

void FUN_148419d76(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140e402be(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1479fc388(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148419df2 FUN_148419df2 body=107 status=ok
// SIG undefined FUN_148419df2(void)

void FUN_148419df2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)-iVar1) {
      FUN_14841c82e(param_1,iVar1);
    }
    FUN_14841cd03((longlong)iVar1 * 0x10 + *param_1,-iVar1);
    return;
  }
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14841c792(param_1);
  return;
}



// FUNCTION 148419e5e FUN_148419e5e body=398 status=ok
// SIG undefined FUN_148419e5e(void)

undefined8 FUN_148419e5e(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_108 [32];
  longlong local_e8 [2];
  undefined2 local_d8 [4];
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_3 + 4) = param_2[2];
  uVar1 = *(undefined4 *)((longlong)param_2 + 4);
  uVar2 = *(undefined4 *)(param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  *param_3 = *(undefined4 *)param_2;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  if (((char)param_1[8] != '\0') &&
     (*(char *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x43) + 0x41) == '\0'))
  {
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x318))(plVar5);
    cVar4 = (**(code **)(*plVar5 + 0x20))(plVar5);
    if (cVar4 == '\0') {
      uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
      plVar5 = (longlong *)FUN_148452236(uVar6);
      if (plVar5 != (longlong *)0x0) {
        local_b8 = 0;
        local_98 = 0;
        local_80 = DAT_14c8464f0;
        local_90 = DAT_14c8464e0;
        uStack_88 = DAT_14c8464e8;
        local_78 = 0x41700000;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_d8[0] = 0x401;
        if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
          if (param_1 + 9 != &local_d0) {
            local_c0 = param_1[0xb];
            local_d0 = param_1[9];
            lStack_c8 = param_1[10];
            local_b8 = 1;
          }
        }
        local_e8[0] = 0;
        local_e8[1] = 0;
        FUN_14841cd12(local_e8);
        local_80 = param_2[2];
        local_90 = *param_2;
        uStack_88 = param_2[1];
        cVar4 = (**(code **)(*plVar5 + 0x2a8))(plVar5,local_d8,local_e8);
        if (cVar4 != '\0') {
          *(undefined8 *)(param_3 + 4) = *(undefined8 *)(local_e8[0] + 0x28);
          uVar1 = *(undefined4 *)(local_e8[0] + 0x1c);
          uVar2 = *(undefined4 *)(local_e8[0] + 0x20);
          uVar3 = *(undefined4 *)(local_e8[0] + 0x24);
          *param_3 = *(undefined4 *)(local_e8[0] + 0x18);
          param_3[1] = uVar1;
          param_3[2] = uVar2;
          param_3[3] = uVar3;
          if (local_e8[0] != 0) {
            FUN_1400020a8();
          }
          uVar6 = 1;
          goto LAB_148419ee7;
        }
        if (local_e8[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar6 = 0;
LAB_148419ee7:
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148419fee FUN_148419fee body=410 status=ok
// SIG undefined FUN_148419fee(void)

undefined8 FUN_148419fee(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  undefined2 local_e8 [4];
  longlong local_e0;
  longlong lStack_d8;
  longlong local_d0;
  undefined1 local_c8;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((char)param_1[8] == '\x01') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x318))(plVar2);
    cVar1 = (**(code **)(*plVar2 + 0x20))(plVar2);
    if ((cVar1 != '\0') ||
       (*(char *)((longlong)param_1 + (ulonglong)*(byte *)((longlong)param_1 + 0x43) + 0x41) != '\0'
       )) {
      uVar3 = (**(code **)(*param_1 + 0x2c8))(param_1);
      plVar2 = (longlong *)FUN_148452236(uVar3);
      if (plVar2 != (longlong *)0x0) {
        local_c8 = 0;
        local_a8 = 0;
        local_90 = DAT_14c8464f0;
        local_a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_98 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_88 = 0x41700000;
        local_78 = 0;
        uStack_70 = 0;
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_50 = 0;
        local_e8[0] = 0x401;
        if (*(char *)((longlong)param_1 + 0x44) == '\x01') {
          if (param_1 + 9 != &local_e0) {
            local_d0 = param_1[0xb];
            local_e0 = param_1[9];
            lStack_d8 = param_1[10];
            local_c8 = 1;
          }
        }
        local_f8[0] = 0;
        local_f8[1] = 0;
        FUN_14841cd12(local_f8);
        local_90 = DAT_14c8464f0;
        local_a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_98 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        (&local_a0)[param_4] = param_2;
        cVar1 = (**(code **)(*plVar2 + 0x2a8))(plVar2,local_e8,local_f8);
        if (cVar1 != '\0') {
          *param_3 = *(undefined8 *)(local_f8[0] + 0x18 + (longlong)param_4 * 8);
          if (local_f8[0] != 0) {
            FUN_1400020a8();
          }
          uVar3 = 1;
          goto LAB_14841a070;
        }
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  uVar3 = 0;
LAB_14841a070:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841a18a FUN_14841a18a body=200 status=ok
// SIG undefined FUN_14841a18a(void)

ulonglong FUN_14841a18a(longlong *param_1,double param_2,double *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [32];
  char local_60;
  longlong local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((char)param_1[0x10] == '\x01') {
    plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x318))(plVar1);
    (**(code **)(*plVar1 + 0x30))(plVar1,local_80);
    uVar2 = CONCAT71((int7)((ulonglong)local_80 >> 8),local_60);
    if (local_60 == '\x01') {
      if ((char)param_1[0xc] == '\x01') {
        local_50 = param_1[0xe];
      }
      dVar3 = (double)FUN_14841a253(param_2 * 57.29577951308232,local_50,0);
      *param_3 = dVar3 * 0.017453292519943295;
    }
  }
  else {
    uVar2 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 14841a253 FUN_14841a253 body=231 status=ok
// SIG undefined FUN_14841a253(void)

double FUN_14841a253(double param_1,double param_2,double param_3)

{
  double dVar1;
  int iVar2;
  
  iVar2 = _finite(param_1);
  if (iVar2 == 0) {
    param_3 = 0.0;
  }
  else {
    param_1 = param_1 - param_3;
    dVar1 = fmod(ABS(param_1),param_2);
    param_3 = (double)(longlong)
                      ((ulonglong)(param_2 * 0.5 < dVar1) + (longlong)(ABS(param_1) / param_2)) *
              (double)((-(ulonglong)(0.0 < param_1) >> 0x20 & 0x3ff00000 |
                       (ulonglong)
                       (~(uint)(-(ulonglong)(0.0 < param_1) >> 0x20) &
                       (uint)(-(ulonglong)(param_1 < 0.0) >> 0x20) & 0xbff00000)) << 0x20) * param_2
              + param_3;
  }
  return param_3;
}



// FUNCTION 14841a33a FUN_14841a33a body=166 status=ok
// SIG undefined FUN_14841a33a(void)

ulonglong FUN_14841a33a(longlong *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [64];
  char local_40;
  float local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0x81) == '\x01') {
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x2c8))();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x318))(plVar2);
    (**(code **)(*plVar2 + 0x30))(plVar2,local_80);
    uVar3 = CONCAT71((int7)((ulonglong)local_80 >> 8),local_40);
    if (local_40 == '\x01') {
      uVar1 = FUN_14841a253(param_2,(double)local_3c,0);
      *param_3 = uVar1;
    }
  }
  else {
    uVar3 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841a3e2 FUN_14841a3e2 body=45 status=ok
// SIG undefined FUN_14841a3e2(void)

longlong FUN_14841a3e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a416 FUN_14841a416 body=48 status=ok
// SIG undefined FUN_14841a416(void)

longlong FUN_14841a416(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a44e FUN_14841a44e body=48 status=ok
// SIG undefined FUN_14841a44e(void)

longlong FUN_14841a44e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a486 FUN_14841a486 body=48 status=ok
// SIG undefined FUN_14841a486(void)

longlong FUN_14841a486(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a4d4 FUN_14841a4d4 body=69 status=ok
// SIG undefined FUN_14841a4d4(void)

undefined8 FUN_14841a4d4(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x30);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    plVar2 = (longlong *)(param_1 + 0x50);
    if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x40);
    }
    uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841a50d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14841a530 FUN_14841a530 body=25 status=ok
// SIG undefined FUN_14841a530(void)

undefined8 FUN_14841a530(undefined8 param_1,undefined8 param_2)

{
  FUN_144a5dc74(param_2);
  return param_2;
}



// FUNCTION 14841a554 FUN_14841a554 body=45 status=ok
// SIG undefined FUN_14841a554(void)

longlong FUN_14841a554(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585f5fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a59c FUN_14841a59c body=45 status=ok
// SIG undefined FUN_14841a59c(void)

longlong FUN_14841a59c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585f5fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a5e4 FUN_14841a5e4 body=97 status=ok
// SIG undefined FUN_14841a5e4(void)

void FUN_14841a5e4(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = *param_2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = param_2[1];
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  local_28 = *(undefined4 *)(param_1 + 0x30);
  uStack_24 = *(undefined4 *)(param_1 + 0x34);
  uStack_20 = *(undefined4 *)(param_1 + 0x38);
  uStack_1c = *(undefined4 *)(param_1 + 0x3c);
  local_18 = *(undefined4 *)(param_1 + 0x40);
  uStack_14 = *(undefined4 *)(param_1 + 0x44);
  uStack_10 = *(undefined4 *)(param_1 + 0x48);
  uStack_c = *(undefined4 *)(param_1 + 0x4c);
  FUN_14841cdb4(param_1 + 8,param_1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841a648 FUN_14841a648 body=45 status=ok
// SIG undefined FUN_14841a648(void)

longlong FUN_14841a648(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14589e662(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a686 FUN_14841a686 body=45 status=ok
// SIG undefined FUN_14841a686(void)

longlong FUN_14841a686(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14585f53e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a6c2 FUN_14841a6c2 body=45 status=ok
// SIG undefined FUN_14841a6c2(void)

longlong FUN_14841a6c2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac5760(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a6fa FUN_14841a6fa body=45 status=ok
// SIG undefined FUN_14841a6fa(void)

longlong FUN_14841a6fa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14598a008(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a736 FUN_14841a736 body=45 status=ok
// SIG undefined FUN_14841a736(void)

longlong FUN_14841a736(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ac5820(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a76e FUN_14841a76e body=45 status=ok
// SIG undefined FUN_14841a76e(void)

longlong FUN_14841a76e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145c0809e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a7aa FUN_14841a7aa body=45 status=ok
// SIG undefined FUN_14841a7aa(void)

longlong FUN_14841a7aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145ce095e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a7de FUN_14841a7de body=45 status=ok
// SIG undefined FUN_14841a7de(void)

longlong FUN_14841a7de(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145ce095e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a80e FUN_14841a80e body=45 status=ok
// SIG undefined FUN_14841a80e(void)

longlong FUN_14841a80e(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145ce095e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a860 FUN_14841a860 body=45 status=ok
// SIG undefined FUN_14841a860(void)

longlong FUN_14841a860(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145e3588e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a894 FUN_14841a894 body=48 status=ok
// SIG undefined FUN_14841a894(void)

longlong FUN_14841a894(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145e3588e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a8cc FUN_14841a8cc body=48 status=ok
// SIG undefined FUN_14841a8cc(void)

longlong FUN_14841a8cc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145e3588e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a904 FUN_14841a904 body=48 status=ok
// SIG undefined FUN_14841a904(void)

longlong FUN_14841a904(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145e3588e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a950 FUN_14841a950 body=48 status=ok
// SIG undefined FUN_14841a950(void)

longlong FUN_14841a950(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x138;
  FUN_1458b640e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841a980 FUN_14841a980 body=60 status=ok
// SIG undefined FUN_14841a980(void)

undefined8 FUN_14841a980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 8);
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x18);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_2,uVar2,param_3);
  return param_2;
}



// FUNCTION 14841a9bc FUN_14841a9bc body=52 status=ok
// SIG undefined FUN_14841a9bc(void)

void FUN_14841a9bc(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  plVar2 = (longlong *)(param_1 + 0x68);
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x58);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841a9ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14841a9f0 FUN_14841a9f0 body=61 status=ok
// SIG undefined FUN_14841a9f0(void)

void FUN_14841a9f0(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x88);
  plVar2 = (longlong *)(param_1 + 0xa8);
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x98);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841aa2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14841aa2e FUN_14841aa2e body=61 status=ok
// SIG undefined FUN_14841aa2e(void)

void FUN_14841aa2e(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 200);
  plVar2 = (longlong *)(param_1 + 0xe8);
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0xd8);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14841aa6c FUN_14841aa6c body=53 status=ok
// SIG undefined FUN_14841aa6c(void)

void FUN_14841aa6c(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x108);
  plVar2 = (longlong *)(param_1 + 0x128);
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x118);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841aa9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14841aab6 FUN_14841aab6 body=48 status=ok
// SIG undefined FUN_14841aab6(void)

longlong FUN_14841aab6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x130;
  FUN_14582b626(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841aae6 FUN_14841aae6 body=112 status=ok
// SIG undefined FUN_14841aae6(void)

void FUN_14841aae6(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x90);
  plVar3 = (longlong *)(param_1 + 0xb0);
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0xa0);
  }
  local_28 = param_2;
  local_21 = param_3;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_28,&local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841ab58 FUN_14841ab58 body=60 status=ok
// SIG undefined FUN_14841ab58(void)

undefined8 FUN_14841ab58(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_2,uVar2,param_3);
  return param_2;
}



// FUNCTION 14841ab94 FUN_14841ab94 body=52 status=ok
// SIG undefined FUN_14841ab94(void)

void FUN_14841ab94(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x50);
  plVar2 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x60);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841abc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14841abe8 FUN_14841abe8 body=48 status=ok
// SIG undefined FUN_14841abe8(void)

longlong FUN_14841abe8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd8;
  FUN_145bc9b06(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841ac18 FUN_14841ac18 body=112 status=ok
// SIG undefined FUN_14841ac18(void)

void FUN_14841ac18(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x108);
  plVar3 = (longlong *)(param_1 + 0x128);
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x118);
  }
  local_28 = param_2;
  local_21 = param_3;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_28,&local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841ac8a FUN_14841ac8a body=60 status=ok
// SIG undefined FUN_14841ac8a(void)

undefined8 FUN_14841ac8a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 8);
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(longlong **)(param_1 + 0x18) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x18);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_2,uVar2,param_3);
  return param_2;
}



// FUNCTION 14841acc6 FUN_14841acc6 body=52 status=ok
// SIG undefined FUN_14841acc6(void)

void FUN_14841acc6(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x48);
  plVar2 = (longlong *)(param_1 + 0x68);
  if (*(longlong **)(param_1 + 0x58) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x58);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841acf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14841acfa FUN_14841acfa body=61 status=ok
// SIG undefined FUN_14841acfa(void)

void FUN_14841acfa(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x88);
  plVar2 = (longlong *)(param_1 + 0xa8);
  if (*(longlong **)(param_1 + 0x98) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x98);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841ad34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14841ad38 FUN_14841ad38 body=53 status=ok
// SIG undefined FUN_14841ad38(void)

void FUN_14841ad38(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 200);
  plVar2 = (longlong *)(param_1 + 0xe8);
  if (*(longlong **)(param_1 + 0xd8) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0xd8);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841ad6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}



// FUNCTION 14841ad82 FUN_14841ad82 body=48 status=ok
// SIG undefined FUN_14841ad82(void)

longlong FUN_14841ad82(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x130;
  FUN_145e3e910(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841adb2 FUN_14841adb2 body=112 status=ok
// SIG undefined FUN_14841adb2(void)

void FUN_14841adb2(longlong param_1,undefined4 param_2,undefined1 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x90);
  plVar3 = (longlong *)(param_1 + 0xb0);
  if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0xa0);
  }
  local_28 = param_2;
  local_21 = param_3;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_28,&local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14841ae24 FUN_14841ae24 body=60 status=ok
// SIG undefined FUN_14841ae24(void)

undefined8 FUN_14841ae24(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar3 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(param_2,uVar2,param_3);
  return param_2;
}



// FUNCTION 14841ae60 FUN_14841ae60 body=52 status=ok
// SIG undefined FUN_14841ae60(void)

void FUN_14841ae60(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x50);
  plVar2 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_1 + 0x60);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00014841ae91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_2);
  return;
}



// FUNCTION 14841ae9a FUN_14841ae9a body=45 status=ok
// SIG undefined FUN_14841ae9a(void)

longlong FUN_14841ae9a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b021fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841aec8 FUN_14841aec8 body=45 status=ok
// SIG undefined FUN_14841aec8(void)

longlong FUN_14841aec8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145b021fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841aef6 FUN_14841aef6 body=45 status=ok
// SIG undefined FUN_14841aef6(void)

longlong FUN_14841aef6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145b021fc(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841af24 FUN_14841af24 body=45 status=ok
// SIG undefined FUN_14841af24(void)

longlong FUN_14841af24(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145b022da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841af52 FUN_14841af52 body=45 status=ok
// SIG undefined FUN_14841af52(void)

longlong FUN_14841af52(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_145b022da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841af80 FUN_14841af80 body=45 status=ok
// SIG undefined FUN_14841af80(void)

longlong FUN_14841af80(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_145b022da(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841afae FUN_14841afae body=45 status=ok
// SIG undefined FUN_14841afae(void)

longlong FUN_14841afae(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14841b010 FUN_14841b010 body=45 status=ok
// SIG undefined FUN_14841b010(void)

longlong FUN_14841b010(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


