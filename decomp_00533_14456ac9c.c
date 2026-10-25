// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14456ac9c FUN_14456ac9c body=29 status=ok
// SIG undefined FUN_14456ac9c(void)

undefined8 FUN_14456ac9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456acce FUN_14456acce body=93 status=ok
// SIG undefined FUN_14456acce(void)

void FUN_14456acce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabd40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456ad2c FUN_14456ad2c body=93 status=ok
// SIG undefined FUN_14456ad2c(void)

void FUN_14456ad2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedba20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabd40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456ad8a FUN_14456ad8a body=126 status=ok
// SIG undefined FUN_14456ad8a(void)

void FUN_14456ad8a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdabd40;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456adf9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456ae12 FUN_14456ae12 body=20 status=ok
// SIG undefined FUN_14456ae12(void)

undefined1 FUN_14456ae12(longlong param_1)

{
  FUN_14964ca82(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14456ae26 FUN_14456ae26 body=99 status=ok
// SIG undefined FUN_14456ae26(void)

void FUN_14456ae26(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 1;
  local_a = 1;
  local_e = 0x10000;
  local_18 = 0;
  FUN_148506f34(*(undefined8 *)(*param_1 + 0xa0),param_2,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456aec8 FUN_14456aec8 body=29 status=ok
// SIG undefined FUN_14456aec8(void)

undefined8 FUN_14456aec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456aee6 FUN_14456aee6 body=34 status=ok
// SIG undefined FUN_14456aee6(void)

bool FUN_14456aee6(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))((longlong *)*param_1,*param_2);
  return iVar1 == *(int *)param_1[1];
}



// FUNCTION 14456af32 FUN_14456af32 body=29 status=ok
// SIG undefined FUN_14456af32(void)

undefined8 FUN_14456af32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456af50 FUN_14456af50 body=82 status=ok
// SIG undefined FUN_14456af50(void)

longlong FUN_14456af50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x4c0) == '\x01') {
    FUN_146bee918(lVar1 + 0x3f0,0);
    *(ulonglong *)(lVar1 + 0x400) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar1 + 0x3f8) + 0x214) +
               *(int *)(*(longlong *)(lVar1 + 0x3f8) + 0x218));
    *(undefined1 *)(lVar1 + 0x4c0) = 0;
  }
  return lVar1 + 0x3f0;
}



// FUNCTION 14456afcc FUN_14456afcc body=29 status=ok
// SIG undefined FUN_14456afcc(void)

undefined8 FUN_14456afcc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456afea FUN_14456afea body=19 status=ok
// SIG undefined FUN_14456afea(void)

byte FUN_14456afea(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_148453316(param_2);
  return bVar1 ^ 1;
}



// FUNCTION 14456b046 FUN_14456b046 body=29 status=ok
// SIG undefined FUN_14456b046(void)

undefined8 FUN_14456b046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b098 FUN_14456b098 body=29 status=ok
// SIG undefined FUN_14456b098(void)

undefined8 FUN_14456b098(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b0be FUN_14456b0be body=29 status=ok
// SIG undefined FUN_14456b0be(void)

undefined8 FUN_14456b0be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b0f0 FUN_14456b0f0 body=93 status=ok
// SIG undefined FUN_14456b0f0(void)

void FUN_14456b0f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabf20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456b14e FUN_14456b14e body=93 status=ok
// SIG undefined FUN_14456b14e(void)

void FUN_14456b14e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ba263d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdabf20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456b1ac FUN_14456b1ac body=126 status=ok
// SIG undefined FUN_14456b1ac(void)

void FUN_14456b1ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdabf20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456b21b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456b22a FUN_14456b22a body=66 status=ok
// SIG undefined FUN_14456b22a(void)

void FUN_14456b22a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14456b2b4(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456b26e FUN_14456b26e body=68 status=ok
// SIG undefined FUN_14456b26e(void)

undefined8 FUN_14456b26e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_14456b2b4(param_1 + 0x18,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456b2b4 FUN_14456b2b4 body=819 status=ok
// SIG undefined FUN_14456b2b4(void)

void FUN_14456b2b4(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined1 auStack_128 [40];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  wchar_t **local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  ulonglong uStack_90;
  longlong *local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar4 = *param_2;
  param_1 = (longlong *)*param_1;
  local_a8 = *(longlong *)(lVar4 + 0xf0);
  local_a0 = *(undefined4 *)(lVar4 + 0xf8);
  local_78 = 0;
  local_70 = 0;
  local_98 = (wchar_t *)0x0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_146bc855c(&local_98);
  FUN_145be27ca(param_1 + 0x3a,&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar5 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar5 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(&local_88,0);
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (0 < *(int *)(lVar4 + 0x100)) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    iVar3 = *(int *)(lVar4 + 0x100);
    local_98 = L"FillFailNotification";
    uStack_90._0_4_ = 0x14;
    FUN_1446e940c(local_fc,&local_98);
    local_98 = L"UHoleFillTool";
    uStack_90._0_4_ = 0xd;
    FUN_1446e940c(local_100,&local_98);
    local_98 = L"Failed to fill {0} holes.";
    uStack_90 = CONCAT44(uStack_90._4_4_,0x19);
    FUN_140208c1e(local_f8,local_100,local_fc,&local_98);
    FUN_14023409e(&local_e8,local_f8,1);
    local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffff00000000);
    local_88 = (longlong *)0x0;
    local_80 = 0;
    local_b0 = &local_78;
    local_b8 = &local_98;
    uStack_90 = (longlong)iVar3;
    FUN_14010d304(&local_a8);
    local_c8 = local_e8;
    local_c0 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d8,&local_c8,&local_a8);
    FUN_14007f2db(local_a8,local_a0);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != (longlong *)0x0) {
      (**(code **)(*local_88 + 0x10))();
    }
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))(local_e0);
        }
      }
    }
    (**(code **)(*plVar6 + 0x340))(plVar6,local_d8,3);
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_f8[0] != (longlong *)0x0) {
      (**(code **)(*local_f8[0] + 0x10))();
    }
  }
  FUN_14964ef84(param_1[0x19],param_1,lVar4);
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456b668 FUN_14456b668 body=29 status=ok
// SIG undefined FUN_14456b668(void)

undefined8 FUN_14456b668(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b686 FUN_14456b686 body=72 status=ok
// SIG undefined FUN_14456b686(void)

void FUN_14456b686(undefined8 *param_1,undefined4 *param_2)

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



// FUNCTION 14456b706 FUN_14456b706 body=29 status=ok
// SIG undefined FUN_14456b706(void)

undefined8 FUN_14456b706(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b75a FUN_14456b75a body=29 status=ok
// SIG undefined FUN_14456b75a(void)

undefined8 FUN_14456b75a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b7ae FUN_14456b7ae body=29 status=ok
// SIG undefined FUN_14456b7ae(void)

undefined8 FUN_14456b7ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b802 FUN_14456b802 body=29 status=ok
// SIG undefined FUN_14456b802(void)

undefined8 FUN_14456b802(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b85a FUN_14456b85a body=29 status=ok
// SIG undefined FUN_14456b85a(void)

undefined8 FUN_14456b85a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b8b2 FUN_14456b8b2 body=29 status=ok
// SIG undefined FUN_14456b8b2(void)

undefined8 FUN_14456b8b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b924 FUN_14456b924 body=29 status=ok
// SIG undefined FUN_14456b924(void)

undefined8 FUN_14456b924(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b992 FUN_14456b992 body=29 status=ok
// SIG undefined FUN_14456b992(void)

undefined8 FUN_14456b992(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456b9f2 FUN_14456b9f2 body=29 status=ok
// SIG undefined FUN_14456b9f2(void)

undefined8 FUN_14456b9f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456ba10 FUN_14456ba10 body=29 status=ok
// SIG undefined FUN_14456ba10(void)

undefined8 FUN_14456ba10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456ba42 FUN_14456ba42 body=93 status=ok
// SIG undefined FUN_14456ba42(void)

void FUN_14456ba42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdac210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456baa0 FUN_14456baa0 body=93 status=ok
// SIG undefined FUN_14456baa0(void)

void FUN_14456baa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdac210;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456bafe FUN_14456bafe body=126 status=ok
// SIG undefined FUN_14456bafe(void)

void FUN_14456bafe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdac210;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456bb6d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456bb86 FUN_14456bb86 body=20 status=ok
// SIG undefined FUN_14456bb86(void)

undefined1 FUN_14456bb86(longlong param_1)

{
  FUN_14456bb9a(param_1 + 0x18);
  return 1;
}



// FUNCTION 14456bb9a FUN_14456bb9a body=94 status=ok
// SIG undefined FUN_14456bb9a(void)

void FUN_14456bb9a(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(*(longlong *)(lVar1 + 0x188) + 0xc5) == '\x01') {
    FUN_149652ea8(lVar1);
  }
  FUN_1484fb072(*(undefined8 *)(lVar1 + 0x180),lVar1 + 0x1b0);
  FUN_1485051e4(*(undefined8 *)(lVar1 + 400));
  *(byte *)(*(longlong *)(lVar1 + 0x188) + 0xc2) =
       *(byte *)(*(longlong *)(lVar1 + 0x180) + 0x70) ^ 1;
  return;
}



// FUNCTION 14456bbf8 FUN_14456bbf8 body=29 status=ok
// SIG undefined FUN_14456bbf8(void)

undefined8 FUN_14456bbf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456bc2a FUN_14456bc2a body=93 status=ok
// SIG undefined FUN_14456bc2a(void)

void FUN_14456bc2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdac280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456bc88 FUN_14456bc88 body=93 status=ok
// SIG undefined FUN_14456bc88(void)

void FUN_14456bc88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdac280;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456bce6 FUN_14456bce6 body=126 status=ok
// SIG undefined FUN_14456bce6(void)

void FUN_14456bce6(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdac280;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456bd55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456bd7e FUN_14456bd7e body=38 status=ok
// SIG undefined FUN_14456bd7e(void)

undefined8 FUN_14456bd7e(longlong param_1)

{
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x188) + 0xc5) == '\x01') {
    FUN_149652888();
  }
  return 1;
}



// FUNCTION 14456bda4 FUN_14456bda4 body=29 status=ok
// SIG undefined FUN_14456bda4(void)

undefined8 FUN_14456bda4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456bdd6 FUN_14456bdd6 body=93 status=ok
// SIG undefined FUN_14456bdd6(void)

void FUN_14456bdd6(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14bdac2f0;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456be34 FUN_14456be34 body=93 status=ok
// SIG undefined FUN_14456be34(void)

void FUN_14456be34(longlong param_1,undefined8 *param_2)

{
  if (*(int *)(param_2 + 1) != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  param_2 = (undefined8 *)*param_2;
  *param_2 = &DAT_149efe500;
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = &PTR_FUN_14bdac2f0;
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456be92 FUN_14456be92 body=126 status=ok
// SIG undefined FUN_14456be92(void)

void FUN_14456be92(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined **)p_Var1 = &DAT_149efe500;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdac2f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456bf01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456bf10 FUN_14456bf10 body=522 status=ok
// SIG undefined FUN_14456bf10(void)

undefined4 FUN_14456bf10(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = *(longlong *)(lVar3 + 0x180);
  iVar2 = *(int *)(lVar4 + 0x380);
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
  }
  else {
    puVar6 = *(uint **)(lVar4 + 0x378);
    if (*(uint **)(lVar4 + 0x378) == (uint *)0x0) {
      puVar6 = (uint *)(lVar4 + 0x368);
    }
    uVar16 = *puVar6;
    if (uVar16 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar10 = 0;
      uVar15 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar15 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar10) goto LAB_14456bfc5;
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar6[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar1 = uVar15 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar12 = (iVar11 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 == iVar2) {
LAB_14456bfc5:
    uVar5 = 1;
  }
  else {
    iVar8 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar8 = iVar2 + -1;
    }
    if (*(int *)(lVar3 + 0x1b8) == *(int *)(lVar3 + 0x1e4)) {
LAB_14456bfe4:
      uVar5 = 0;
    }
    else {
      iVar8 = iVar8 >> 5;
      lVar9 = lVar3 + 0x1e8;
      if (*(longlong *)(lVar3 + 0x1f0) != 0) {
        lVar9 = *(longlong *)(lVar3 + 0x1f0);
      }
      uVar16 = 0xffffffff;
      do {
        uVar13 = *(uint *)(*(longlong *)(lVar4 + 0x358) + (longlong)iVar12 * 0xc);
        iVar12 = *(int *)(lVar9 + (ulonglong)(uVar13 & *(int *)(lVar3 + 0x1f8) - 1U) * 4);
        if (iVar12 == -1) goto LAB_14456bfe4;
        while (*(uint *)(*(longlong *)(lVar3 + 0x1b0) + (longlong)iVar12 * 0x28) != uVar13) {
          iVar12 = *(int *)(*(longlong *)(lVar3 + 0x1b0) + (longlong)iVar12 * 0x28 + 0x20);
          if (iVar12 == -1) goto LAB_14456bfe4;
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar6 = *(uint **)(lVar4 + 0x378);
        if (*(uint **)(lVar4 + 0x378) == (uint *)0x0) {
          puVar6 = (uint *)(lVar4 + 0x368);
        }
        iVar12 = (int)uVar10;
        lVar7 = (longlong)iVar12;
        uVar13 = puVar6[lVar7] & uVar16;
        uVar5 = 1;
        if (uVar13 == 0) {
          iVar14 = iVar8;
          if (iVar8 < iVar12) {
            iVar14 = iVar12;
          }
          if (iVar8 <= iVar12) {
            return 1;
          }
          lVar17 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar13 = puVar6[lVar7 + lVar17 + 1];
            if (uVar13 != 0) break;
            lVar17 = lVar17 + 1;
            if (iVar14 - lVar7 == lVar17) goto LAB_14456bfc5;
          }
          uVar10 = (ulonglong)(iVar12 + (int)lVar17 + 1);
          uVar16 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar15 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar12 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar2);
    }
  }
  return uVar5;
}



// FUNCTION 14456c11e FUN_14456c11e body=19 status=ok
// SIG undefined FUN_14456c11e(void)

byte FUN_14456c11e(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_148453316(param_2);
  return bVar1 ^ 1;
}



// FUNCTION 14456c132 FUN_14456c132 body=126 status=ok
// SIG undefined FUN_14456c132(void)

void FUN_14456c132(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14582ed12(param_2);
  FUN_146c18122(*(undefined8 *)(param_2 + 0x208));
  FUN_146c17f82(*(undefined8 *)(param_2 + 0x208));
  local_18 = &local_21;
  local_20 = &LAB_14456c1b2;
  FUN_146c3345c(*(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0x40),&local_20,0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456c30e FUN_14456c30e body=51 status=ok
// SIG undefined FUN_14456c30e(void)

void FUN_14456c30e(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_149653c78(*(undefined8 *)(lVar1 + 0x2f8));
  lVar1 = *(longlong *)(lVar1 + 0x2f8);
  FUN_140e1307c(lVar1 + 0xb8,lVar1 + 0xa8);
  return;
}



// FUNCTION 14456c36c FUN_14456c36c body=29 status=ok
// SIG undefined FUN_14456c36c(void)

undefined8 FUN_14456c36c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456c3c0 FUN_14456c3c0 body=29 status=ok
// SIG undefined FUN_14456c3c0(void)

undefined8 FUN_14456c3c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456c44c FUN_14456c44c body=434 status=ok
// SIG undefined FUN_14456c44c(void)

void FUN_14456c44c(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1[1];
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40);
  local_58 = 0;
  uStack_50 = 0;
  FUN_146c3d53c();
  lVar3 = local_58;
  uVar7 = *(int *)(lVar2 + 8) * 0x200 + *(int *)(lVar2 + 0xc);
  uVar10 = 0;
  if ((uVar7 != 0) &&
     (uVar10 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar2 + 0x10) - 1U))) {
    uVar9 = 1;
    uVar4 = 1;
    if (1 < (int)uVar7) {
      uVar9 = uVar7;
    }
    do {
      uVar10 = uVar9;
      if (uVar9 == uVar4) break;
      uVar5 = uVar4 >> 9;
      uVar8 = uVar4 & 0x1ff;
      uVar10 = uVar4;
      uVar4 = uVar4 + 1;
    } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar2 + 0x10))[uVar5] +
                                         (ulonglong)uVar8 * 2) - 1U));
  }
  if (uVar10 != uVar7) {
    do {
      uVar9 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x60) + (ulonglong)(uVar10 >> 9) * 8) +
                       (ulonglong)(uVar10 & 0x1ff) * 4);
      if (lVar3 != 0) {
        uVar9 = *(uint *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar9 >> 9) * 8) +
                         (ulonglong)(uVar9 & 0x1ff) * 4);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x7c8) + 8))
                (*(longlong **)(lVar1 + 0x7c8),&local_78,
                 *(undefined4 *)(*(longlong *)(*param_1 + 0x10) + (longlong)(int)uVar9 * 4));
      local_68 = local_78;
      uStack_60 = uStack_70;
      lVar6 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x48) + (ulonglong)(uVar10 >> 7 & 0x7fffff) * 8) +
          (ulonglong)((uVar10 & 0x7f) << 4) + lVar6 * 4) =
             *(undefined4 *)((longlong)&local_68 + lVar6 * 4);
        lVar6 = lVar6 + 1;
      } while (lVar6 != 4);
      uVar9 = uVar10 + 1;
      if ((int)(uVar10 + 1) < (int)uVar7) {
        uVar9 = uVar7;
      }
      do {
        uVar4 = uVar9;
        if (uVar9 - 1 == uVar10) break;
        uVar10 = uVar10 + 1;
        uVar4 = uVar10;
      } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                             (*(longlong *)(lVar2 + 0x10) +
                                             (ulonglong)(uVar10 >> 9) * 8) +
                                           (ulonglong)(uVar10 & 0x1ff) * 2) - 1U));
      uVar10 = uVar4;
    } while (uVar10 != uVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14456c600 FUN_14456c600 body=399 status=ok
// SIG undefined FUN_14456c600(void)

void FUN_14456c600(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78 [4];
  longlong local_68;
  undefined8 uStack_60;
  uint *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = param_1[2];
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40);
  local_68 = 0;
  uStack_60 = 0;
  FUN_146c3d53c();
  lVar5 = local_68;
  iVar1 = *(int *)(*param_1 + 8);
  if (0 < (longlong)iVar1) {
    lVar8 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)*param_1 + lVar8 * 4);
      uVar7 = uVar2;
      if (lVar5 != 0) {
        uVar7 = *(uint *)(*(longlong *)(*(longlong *)(lVar5 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
                         (ulonglong)(uVar2 & 0x1ff) * 4);
      }
      *(undefined4 *)(*(longlong *)(param_1[1] + 0x10) + (longlong)(int)uVar7 * 4) =
           *(undefined4 *)(((longlong *)*param_1)[4] + lVar8 * 4);
      (**(code **)(**(longlong **)(lVar3 + 0x7c8) + 8))
                (*(longlong **)(lVar3 + 0x7c8),&local_88,
                 *(undefined4 *)(*(longlong *)(*param_1 + 0x20) + lVar8 * 4));
      local_78[0] = local_88;
      local_78[1] = uStack_84;
      local_78[2] = uStack_80;
      local_78[3] = uStack_7c;
      FUN_146c349b4(lVar4,uVar2,&local_58);
      if ((longlong)(int)uStack_50 != 0) {
        puVar6 = local_58;
        do {
          uVar2 = *puVar6;
          lVar9 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (ulonglong)(uVar2 >> 7 & 0x7fffff) * 8) +
              (ulonglong)((uVar2 & 0x7f) << 4) + lVar9 * 4) = local_78[lVar9];
            lVar9 = lVar9 + 1;
          } while (lVar9 != 4);
          puVar6 = puVar6 + 1;
        } while (puVar6 != local_58 + (int)uStack_50);
      }
      bVar10 = (longlong)uStack_50 < 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (bVar10) {
        FUN_14481578e(&local_58,0);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 != iVar1);
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456c790 FUN_14456c790 body=72 status=ok
// SIG undefined FUN_14456c790(void)

void FUN_14456c790(undefined8 *param_1,undefined4 *param_2)

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



// FUNCTION 14456c7ea FUN_14456c7ea body=334 status=ok
// SIG undefined FUN_14456c7ea(void)

void FUN_14456c7ea(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint *puVar5;
  longlong lVar6;
  int *piVar7;
  int *piVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68 [4];
  uint *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = param_1[1];
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  lVar6 = (longlong)*(int *)((undefined8 *)*param_1 + 1);
  if (lVar6 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40);
    piVar8 = *(int **)*param_1;
    piVar7 = piVar8 + lVar6;
    do {
      iVar1 = *piVar8;
      (**(code **)(**(longlong **)(lVar3 + 0x7c8) + 8))
                (*(longlong **)(lVar3 + 0x7c8),&local_78,
                 *(undefined4 *)(*(longlong *)(param_1[2] + 0x10) + (longlong)iVar1 * 4));
      local_68[0] = local_78;
      local_68[1] = uStack_74;
      local_68[2] = uStack_70;
      local_68[3] = uStack_6c;
      FUN_146c349b4(lVar4,iVar1,&local_58);
      if ((longlong)(int)uStack_50 != 0) {
        puVar5 = local_58;
        do {
          uVar2 = *puVar5;
          lVar6 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x48) + (ulonglong)(uVar2 >> 7 & 0x7fffff) * 8) +
              (ulonglong)((uVar2 & 0x7f) << 4) + lVar6 * 4) = local_68[lVar6];
            lVar6 = lVar6 + 1;
          } while (lVar6 != 4);
          puVar5 = puVar5 + 1;
        } while (puVar5 != local_58 + (int)uStack_50);
      }
      bVar9 = (longlong)uStack_50 < 0;
      uStack_50 = uStack_50 & 0xffffffff00000000;
      if (bVar9) {
        FUN_14481578e(&local_58,0);
      }
      piVar8 = piVar8 + 1;
    } while (piVar8 != piVar7);
    if (local_58 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456c96e FUN_14456c96e body=29 status=ok
// SIG undefined FUN_14456c96e(void)

undefined8 FUN_14456c96e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456c98c FUN_14456c98c body=19 status=ok
// SIG undefined FUN_14456c98c(void)

byte FUN_14456c98c(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_148453316(param_2);
  return bVar1 ^ 1;
}



// FUNCTION 14456c9a0 FUN_14456c9a0 body=8 status=ok
// SIG undefined FUN_14456c9a0(void)

void FUN_14456c9a0(undefined8 *param_1)

{
  FUN_14965e0ba(*param_1);
  return;
}



// FUNCTION 14456c9ac FUN_14456c9ac body=5 status=ok
// SIG undefined FUN_14456c9ac(void)

longlong FUN_14456c9ac(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14456c9b2 FUN_14456c9b2 body=12 status=ok
// SIG undefined FUN_14456c9b2(void)

void FUN_14456c9b2(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456c9bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456c9be FUN_14456c9be body=29 status=ok
// SIG undefined FUN_14456c9be(void)

undefined8 FUN_14456c9be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456c9dc FUN_14456c9dc body=212 status=ok
// SIG undefined FUN_14456c9dc(void)

void FUN_14456c9dc(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = param_1[1];
  iVar1 = *(int *)(*(longlong *)*param_1 + 0x170);
  pdVar3 = (double *)param_1[2];
  dVar5 = (double)(-(ulonglong)(0.0 <= pdVar3[5] - pdVar3[2]) & (ulonglong)(pdVar3[5] - pdVar3[2]));
  dVar6 = (double)(-(ulonglong)(0.0 <= pdVar3[4] - pdVar3[1]) & (ulonglong)(pdVar3[4] - pdVar3[1]));
  uVar4 = -(ulonglong)(dVar5 <= dVar6);
  dVar5 = (double)(~uVar4 & (ulonglong)dVar5 | uVar4 & (ulonglong)dVar6);
  dVar6 = (double)(-(ulonglong)(0.0 <= pdVar3[3] - *pdVar3) & (ulonglong)(pdVar3[3] - *pdVar3));
  uVar4 = -(ulonglong)(dVar5 <= dVar6);
  dVar5 = (double)(uVar4 & (ulonglong)dVar6 | ~uVar4 & (ulonglong)dVar5);
  if (100000 < iVar1) {
    dVar5 = dVar5 / 10.0;
  }
  *(double *)(lVar2 + 0xd40) = dVar5;
  *(uint *)(lVar2 + 0xd50) = (uint)(iVar1 < 0x186a1) * 4 + 4;
  FUN_1460286e0(lVar2 + 0xd40,*(undefined8 *)*param_1);
  return;
}



// FUNCTION 14456cab4 FUN_14456cab4 body=5 status=ok
// SIG undefined FUN_14456cab4(void)

longlong FUN_14456cab4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14456caba FUN_14456caba body=12 status=ok
// SIG undefined FUN_14456caba(void)

void FUN_14456caba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456cac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456cac6 FUN_14456cac6 body=29 status=ok
// SIG undefined FUN_14456cac6(void)

undefined8 FUN_14456cac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cb16 FUN_14456cb16 body=29 status=ok
// SIG undefined FUN_14456cb16(void)

undefined8 FUN_14456cb16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cb34 FUN_14456cb34 body=67 status=ok
// SIG undefined FUN_14456cb34(void)

void FUN_14456cb34(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x20],0);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x175],1);
  FUN_1496b51e2(param_1,0);
  return;
}



// FUNCTION 14456cba2 FUN_14456cba2 body=29 status=ok
// SIG undefined FUN_14456cba2(void)

undefined8 FUN_14456cba2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cc0a FUN_14456cc0a body=29 status=ok
// SIG undefined FUN_14456cc0a(void)

undefined8 FUN_14456cc0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cc66 FUN_14456cc66 body=29 status=ok
// SIG undefined FUN_14456cc66(void)

undefined8 FUN_14456cc66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cc84 FUN_14456cc84 body=102 status=ok
// SIG undefined FUN_14456cc84(void)

undefined8 * FUN_14456cc84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdac960;
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 14456cd00 FUN_14456cd00 body=29 status=ok
// SIG undefined FUN_14456cd00(void)

undefined8 FUN_14456cd00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cd48 FUN_14456cd48 body=29 status=ok
// SIG undefined FUN_14456cd48(void)

undefined8 FUN_14456cd48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cd9a FUN_14456cd9a body=29 status=ok
// SIG undefined FUN_14456cd9a(void)

undefined8 FUN_14456cd9a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cdb8 FUN_14456cdb8 body=43 status=ok
// SIG undefined FUN_14456cdb8(void)

void FUN_14456cdb8(undefined8 *param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_2;
  uVar1 = param_2[1];
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x420))();
                    /* WARNING: Could not recover jumptable at 0x00014456cde0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar2);
  return;
}



// FUNCTION 14456cdee FUN_14456cdee body=12 status=ok
// SIG undefined FUN_14456cdee(void)

void FUN_14456cdee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456cdf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456cdfa FUN_14456cdfa body=29 status=ok
// SIG undefined FUN_14456cdfa(void)

undefined8 FUN_14456cdfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456ce18 FUN_14456ce18 body=91 status=ok
// SIG undefined FUN_14456ce18(void)

undefined8 FUN_14456ce18(undefined8 param_1,longlong *param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  lVar1 = *param_2;
  puVar2 = *(undefined8 **)(lVar1 + 0xbf8);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    uVar4 = FUN_146bc96d4(*puVar2);
  }
  else {
    uVar4 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(*param_4 >> 9) * 8) +
             (ulonglong)(*param_4 & 0x1ff) * 4);
  }
  FUN_14965c380(lVar1,param_1,uVar4);
  return param_1;
}



// FUNCTION 14456ce8a FUN_14456ce8a body=29 status=ok
// SIG undefined FUN_14456ce8a(void)

undefined8 FUN_14456ce8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cea8 FUN_14456cea8 body=91 status=ok
// SIG undefined FUN_14456cea8(void)

void FUN_14456cea8(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0x1000000010101;
  local_18 = 0;
  FUN_148506f34(*(undefined8 *)(*param_1 + 0xa0),param_2,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456cf3a FUN_14456cf3a body=29 status=ok
// SIG undefined FUN_14456cf3a(void)

undefined8 FUN_14456cf3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456cf8e FUN_14456cf8e body=29 status=ok
// SIG undefined FUN_14456cf8e(void)

undefined8 FUN_14456cf8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456d004 FUN_14456d004 body=29 status=ok
// SIG undefined FUN_14456d004(void)

undefined8 FUN_14456d004(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456d022 FUN_14456d022 body=183 status=ok
// SIG undefined FUN_14456d022(void)

void FUN_14456d022(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  double *pdVar2;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = *param_2;
  lVar1 = param_1[3];
  FUN_146c149e0(*(undefined8 *)*param_1,&local_40);
  pdVar2 = (double *)param_1[1];
  if ((local_30 - pdVar2[2]) * (local_30 - pdVar2[2]) +
      (local_40 - *pdVar2) * (local_40 - *pdVar2) + (local_38 - pdVar2[1]) * (local_38 - pdVar2[1])
      < (double)*(float *)param_1[2]) {
    FUN_1447cbafe(lVar1 + 0xce8,&local_40,&local_24,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456d0da FUN_14456d0da body=311 status=ok
// SIG undefined FUN_14456d0da(void)

undefined8 FUN_14456d0da(undefined8 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar6 = *param_3;
  uVar1 = *param_2;
  FUN_146c149e0(*(undefined8 *)*param_1,&local_40,iVar6);
  pdVar2 = (double *)param_1[1];
  if ((local_30 - pdVar2[2]) * (local_30 - pdVar2[2]) +
      (local_40 - *pdVar2) * (local_40 - *pdVar2) + (local_38 - pdVar2[1]) * (local_38 - pdVar2[1])
      < (double)*(float *)param_1[2]) {
    puVar3 = (undefined8 *)param_1[3];
    lVar4 = puVar3[2];
    if (*(char *)*puVar3 != '\0') {
      lVar7 = (longlong)iVar6;
      lVar5 = *(longlong *)(lVar4 + 0xf88);
      pdVar2 = (double *)puVar3[1];
      dVar9 = pdVar2[2] * *(double *)(lVar5 + 0x10 + lVar7 * 0x18) +
              *pdVar2 * *(double *)(lVar5 + lVar7 * 0x18) +
              pdVar2[1] * *(double *)(lVar5 + 8 + lVar7 * 0x18);
      if (dVar9 < *(double *)puVar3[3] || dVar9 == *(double *)puVar3[3]) goto LAB_14456d1ac;
    }
    iVar6 = FUN_146c08e54(*(undefined8 *)puVar3[4],uVar1,iVar6);
    if (((*(char *)puVar3[5] == '\0') ||
        (*(int *)(*(longlong *)(lVar4 + 0xf98) + (longlong)iVar6 * 4) == 0)) &&
       ((*(char *)puVar3[6] == '\0' ||
        (*(int *)(*(longlong *)(lVar4 + 0xfa8) + (longlong)iVar6 * 4) == 0)))) {
      uVar8 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),1);
      goto LAB_14456d1ae;
    }
  }
LAB_14456d1ac:
  uVar8 = 0;
LAB_14456d1ae:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456d212 FUN_14456d212 body=165 status=ok
// SIG undefined FUN_14456d212(void)

undefined8 FUN_14456d212(undefined8 *param_1,undefined4 *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  
  lVar5 = (longlong)*param_3;
  param_1 = (undefined8 *)*param_1;
  lVar1 = param_1[2];
  if (*(char *)*param_1 != '\0') {
    lVar2 = *(longlong *)(lVar1 + 0xf88);
    pdVar3 = (double *)param_1[1];
    dVar6 = pdVar3[2] * *(double *)(lVar2 + 0x10 + lVar5 * 0x18) +
            *pdVar3 * *(double *)(lVar2 + lVar5 * 0x18) +
            pdVar3[1] * *(double *)(lVar2 + 8 + lVar5 * 0x18);
    if (dVar6 < *(double *)param_1[3] || dVar6 == *(double *)param_1[3]) {
      return 0;
    }
  }
  iVar4 = FUN_146c08e54(*(undefined8 *)param_1[4],*param_2);
  if (((*(char *)param_1[5] == '\0') ||
      (*(int *)(*(longlong *)(lVar1 + 0xf98) + (longlong)iVar4 * 4) == 0)) &&
     ((*(char *)param_1[6] == '\0' ||
      (*(int *)(*(longlong *)(lVar1 + 0xfa8) + (longlong)iVar4 * 4) == 0)))) {
    return CONCAT71((int7)(int3)((uint)iVar4 >> 8),1);
  }
  return 0;
}



// FUNCTION 14456d2b8 FUN_14456d2b8 body=148 status=ok
// SIG undefined FUN_14456d2b8(void)

ulonglong FUN_14456d2b8(longlong *param_1,undefined8 param_2,uint *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = (*(undefined8 **)(param_1[1] + 0xbf8))[1];
  if (lVar2 == 0) {
    uVar3 = FUN_146bc96d4(**(undefined8 **)(param_1[1] + 0xbf8));
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(*param_3 >> 9) * 8) +
                     (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar1[9] - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(uint *)(*plVar1 + (longlong)iVar6 * 0xc) == uVar3;
        uVar5 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) break;
        iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
      goto LAB_14456d33a;
    }
  }
  uVar5 = 0;
LAB_14456d33a:
  return uVar5 & 0xffffffff;
}



// FUNCTION 14456d34c FUN_14456d34c body=593 status=ok
// SIG undefined FUN_14456d34c(void)

void FUN_14456d34c(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *param_2;
  lVar2 = param_1[1];
  if (-1 < (longlong)(int)uVar1) {
    lVar6 = *(longlong *)*param_1;
    if ((int)uVar1 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24)) {
      uVar8 = (ulonglong)(uVar1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                             uVar8 * 2) - 1U) < 0xfffe) {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
        local_80 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18) * *(double *)(lVar2 + 0x208);
        local_88 = *(double *)(lVar6 + 8 + uVar8 * 0x18) * *(double *)(lVar2 + 0x200);
        local_90 = *(double *)(lVar6 + uVar8 * 0x18) * *(double *)(lVar2 + 0x1f8);
        FUN_146bed047(&local_78,lVar2 + 0x1c0);
        local_68 = local_68 + *(double *)(lVar2 + 0x1f0);
        local_70 = local_70 + *(double *)(lVar2 + 0x1e8);
        local_78 = local_78 + *(double *)(lVar2 + 0x1e0);
        FUN_1484fdfd2(param_1[2],&local_90,&local_78);
        dVar3 = 0.0;
        if (1 < *(int *)param_1[4]) {
          lVar6 = 1;
          lVar7 = 0x18;
          dVar9 = **(double **)param_1[3] - local_90;
          dVar10 = (*(double **)param_1[3])[1] - local_88;
          dVar3 = 0.0;
          do {
            dVar5 = *(double *)(*(longlong *)param_1[3] + lVar7) - local_88;
            dVar4 = *(double *)(*(longlong *)param_1[3] + -8 + lVar7) - local_90;
            dVar9 = atan2(dVar9 * dVar5 - dVar10 * dVar4,dVar9 * dVar4 + dVar10 * dVar5);
            dVar3 = dVar3 + dVar9;
            lVar6 = lVar6 + 1;
            lVar7 = lVar7 + 0x10;
            dVar9 = dVar4;
            dVar10 = dVar5;
          } while (lVar6 < *(int *)param_1[4]);
        }
        dVar3 = dVar3 / 6.283185307179586;
        uVar8 = -(ulonglong)(-dVar3 <= dVar3);
        *(uint *)(*(longlong *)(lVar2 + 0xc68) + (ulonglong)uVar1 * 4) =
             (uint)(0.3 < (double)(~uVar8 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar8));
        goto LAB_14456d3d9;
      }
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0xc68) + (longlong)(int)uVar1 * 4) = 0xffffffff;
LAB_14456d3d9:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456d59e FUN_14456d59e body=661 status=ok
// SIG undefined FUN_14456d59e(void)

void FUN_14456d59e(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  double *pdVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong local_90;
  code *local_88;
  longlong *local_80;
  longlong local_78;
  code *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = (longlong)*param_2;
  lVar2 = *param_1;
  *(undefined1 *)(*(longlong *)(lVar2 + 0xc88) + lVar7) = 1;
  uVar3 = *(undefined8 *)param_1[1];
  uVar1 = *(undefined4 *)(*(longlong *)param_1[2] + lVar7 * 4);
  FUN_146c149e0(uVar3,&local_a8,uVar1);
  FUN_146c13dec(uVar3,&local_c0,uVar1);
  pdVar4 = (double *)param_1[3];
  if (0.0 < (local_98 - pdVar4[2]) * local_b0 +
            (local_a8 - *pdVar4) * local_c0 + (local_a0 - pdVar4[1]) * local_b8) {
    *(undefined1 *)(*(longlong *)(lVar2 + 0xc88) + lVar7) = 0;
  }
  if (*(char *)(*(longlong *)(lVar2 + 0xba8) + 0xca) == '\x02') {
    pdVar4 = (double *)param_1[3];
    local_98 = local_98 - pdVar4[2];
    local_a0 = local_a0 - pdVar4[1];
    local_a8 = local_a8 - *pdVar4;
    dVar5 = SQRT(local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0);
    local_d8 = 0.0;
    dVar8 = 1.0 / dVar5;
    local_e0 = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(local_a8 * dVar8));
    if (0.0 < dVar5) {
      local_d0 = local_98 * dVar8;
      local_d8 = local_a0 * dVar8;
    }
    else {
      local_d0 = 0.0;
    }
    local_90 = lVar2 + 0xd40;
    local_e8 = pdVar4[2];
    local_f8 = *pdVar4;
    dStack_f0 = pdVar4[1];
    dVar8 = local_d0 * local_d0 + local_e0 * local_e0 + local_d8 * local_d8;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      local_e0 = local_e0 * dVar8;
      local_d8 = local_d8 * dVar8;
      local_d0 = local_d0 * dVar8;
    }
    local_68 = &local_78;
    local_70 = FUN_14963f300;
    local_80 = &local_90;
    local_88 = FUN_14963f376;
    local_108 = 0x7fefffffffffffff;
    local_78 = local_90;
    iVar6 = FUN_146c87396(local_90,&local_f8);
    if (iVar6 != *(int *)(*(longlong *)param_1[2] + lVar7 * 4)) {
      *(undefined1 *)(*(longlong *)(lVar2 + 0xc88) + lVar7) = 0;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456d834 FUN_14456d834 body=154 status=ok
// SIG undefined FUN_14456d834(void)

undefined8 FUN_14456d834(longlong param_1,undefined4 *param_2)

{
  double *pdVar1;
  undefined1 auStack_88 [32];
  double *local_68;
  undefined1 local_58 [8];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &local_50;
  FUN_146c1477c(*(undefined8 *)(param_1 + 8),*param_2,&local_38,local_58);
  pdVar1 = *(double **)(param_1 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)pdVar1 >> 8),
                    (local_40 - pdVar1[2]) * local_28 +
                    (local_50 - *pdVar1) * local_38 + (local_48 - pdVar1[1]) * local_30 < 0.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456d8d0 FUN_14456d8d0 body=22 status=ok
// SIG undefined FUN_14456d8d0(void)

void FUN_14456d8d0(longlong *param_1)

{
  FUN_1468b3f6e(*param_1 + 0xc00,*param_1 + 0xce8);
  return;
}



// FUNCTION 14456d8ea FUN_14456d8ea body=5 status=ok
// SIG undefined FUN_14456d8ea(void)

longlong FUN_14456d8ea(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14456d8f0 FUN_14456d8f0 body=12 status=ok
// SIG undefined FUN_14456d8f0(void)

void FUN_14456d8f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456d8f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456d8fc FUN_14456d8fc body=29 status=ok
// SIG undefined FUN_14456d8fc(void)

undefined8 FUN_14456d8fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456d91a FUN_14456d91a body=42 status=ok
// SIG undefined FUN_14456d91a(void)

void FUN_14456d91a(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_14054c6c4(lVar1 + 0xf78,param_4);
  FUN_1484b2d8e(*(undefined8 *)(lVar1 + 0xbe0),2);
  return;
}



// FUNCTION 14456d95a FUN_14456d95a body=29 status=ok
// SIG undefined FUN_14456d95a(void)

undefined8 FUN_14456d95a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456d978 FUN_14456d978 body=76 status=ok
// SIG undefined FUN_14456d978(void)

bool FUN_14456d978(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (*(undefined8 **)(*param_1 + 0xbf8))[1];
  if (lVar1 == 0) {
    iVar2 = FUN_146bc96d4(**(undefined8 **)(*param_1 + 0xbf8));
  }
  else {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  return iVar2 == *(int *)param_1[1];
}



// FUNCTION 14456d9c4 FUN_14456d9c4 body=121 status=ok
// SIG undefined FUN_14456d9c4(void)

ulonglong FUN_14456d9c4(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = *param_1;
  lVar2 = (*(undefined8 **)(lVar1 + 0xbf8))[1];
  if (lVar2 == 0) {
    iVar3 = FUN_146bc96d4(**(undefined8 **)(lVar1 + 0xbf8));
  }
  else {
    iVar3 = *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  uVar4 = (ulonglong)*(int *)(lVar1 + 0xf80);
  if (uVar4 == 0) {
    uVar4 = CONCAT71((int7)(int3)((uint)*(int *)(lVar1 + 0xf80) >> 8),1);
  }
  else {
    lVar2 = uVar4 * 4;
    lVar5 = 0;
    do {
      bVar6 = *(int *)(*(longlong *)(lVar1 + 0xf78) + lVar5) == iVar3;
      uVar4 = CONCAT71((int7)(uVar4 >> 8),!bVar6);
      if (bVar6) break;
      bVar6 = lVar2 + -4 != lVar5;
      lVar5 = lVar5 + 4;
    } while (bVar6);
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 14456da48 FUN_14456da48 body=12 status=ok
// SIG undefined FUN_14456da48(void)

void FUN_14456da48(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456da51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456da54 FUN_14456da54 body=29 status=ok
// SIG undefined FUN_14456da54(void)

undefined8 FUN_14456da54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456da72 FUN_14456da72 body=76 status=ok
// SIG undefined FUN_14456da72(void)

bool FUN_14456da72(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = (*(undefined8 **)(*param_1 + 0xbf8))[1];
  if (lVar1 == 0) {
    iVar2 = FUN_146bc96d4(**(undefined8 **)(*param_1 + 0xbf8));
  }
  else {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  return iVar2 == *(int *)param_1[1];
}



// FUNCTION 14456dae8 FUN_14456dae8 body=29 status=ok
// SIG undefined FUN_14456dae8(void)

undefined8 FUN_14456dae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456db06 FUN_14456db06 body=176 status=ok
// SIG undefined FUN_14456db06(void)

void FUN_14456db06(undefined8 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  if (-1 < (int)uVar2) {
    lVar3 = *(longlong *)*param_1;
    if (((int)uVar2 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar4 = param_1[1];
      FUN_146c13dec(lVar3,&local_38,uVar2);
      lVar3 = *(longlong *)(lVar4 + 0xf88);
      *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar2 * 0x18) = local_28;
      puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2 * 0x18);
      *puVar1 = local_38;
      puVar1[1] = uStack_34;
      puVar1[2] = uStack_30;
      puVar1[3] = uStack_2c;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456dbb8 FUN_14456dbb8 body=153 status=ok
// SIG undefined FUN_14456dbb8(void)

void FUN_14456dbb8(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  uVar4 = (ulonglong)uVar1;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8)
                         + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar2 = param_1[1];
    bVar3 = FUN_146c1a770(*(undefined8 *)param_1[2],uVar4,0);
    *(uint *)(*(longlong *)(lVar2 + 0xf98) + uVar4 * 4) = (uint)bVar3;
    bVar3 = FUN_146c1aaf4(*(undefined8 *)param_1[3],uVar1,0);
    *(uint *)(*(longlong *)(lVar2 + 0xfa8) + uVar4 * 4) = (uint)bVar3;
  }
  return;
}



// FUNCTION 14456dc52 FUN_14456dc52 body=90 status=ok
// SIG undefined FUN_14456dc52(void)

void FUN_14456dc52(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  FUN_14851dbee(*(undefined8 *)(lVar1 + 0xba0),*param_4);
  lVar3 = (longlong)*(int *)(*(longlong *)(lVar1 + 0xba0) + 0x30);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xba0) + 0x28);
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x10))();
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  FUN_149659142(lVar1);
  return;
}



// FUNCTION 14456dcc2 FUN_14456dcc2 body=29 status=ok
// SIG undefined FUN_14456dcc2(void)

undefined8 FUN_14456dcc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456dd12 FUN_14456dd12 body=29 status=ok
// SIG undefined FUN_14456dd12(void)

undefined8 FUN_14456dd12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456ddb0 FUN_14456ddb0 body=84 status=ok
// SIG undefined FUN_14456ddb0(void)

undefined8 FUN_14456ddb0(undefined8 param_1,longlong *param_2,undefined8 param_3,uint *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = (*(undefined8 **)(*param_2 + 0x228))[1];
  if (lVar1 == 0) {
    uVar2 = FUN_146bc96d4(**(undefined8 **)(*param_2 + 0x228));
  }
  else {
    uVar2 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x20) + (ulonglong)(*param_4 >> 9) * 8) +
             (ulonglong)(*param_4 & 0x1ff) * 4);
  }
  FUN_146c89f40(param_1,uVar2);
  return param_1;
}



// FUNCTION 14456de2e FUN_14456de2e body=29 status=ok
// SIG undefined FUN_14456de2e(void)

undefined8 FUN_14456de2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456de84 FUN_14456de84 body=29 status=ok
// SIG undefined FUN_14456de84(void)

undefined8 FUN_14456de84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456deda FUN_14456deda body=29 status=ok
// SIG undefined FUN_14456deda(void)

undefined8 FUN_14456deda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456df08 FUN_14456df08 body=31 status=ok
// SIG undefined FUN_14456df08(void)

void FUN_14456df08(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_149663736(lVar1);
  *(undefined2 *)(lVar1 + 0x700) = 0x101;
  return;
}



// FUNCTION 14456df52 FUN_14456df52 body=29 status=ok
// SIG undefined FUN_14456df52(void)

undefined8 FUN_14456df52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456df70 FUN_14456df70 body=56 status=ok
// SIG undefined FUN_14456df70(void)

void FUN_14456df70(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined8 *)(*param_1 + 0x318);
  plVar2 = *(longlong **)(param_2 + 0x208);
  uVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0xa0))(plVar2,0);
  }
  FUN_148f720fa(uVar1,uVar3,0);
  return;
}



// FUNCTION 14456dfa8 FUN_14456dfa8 body=31 status=ok
// SIG undefined FUN_14456dfa8(void)

void FUN_14456dfa8(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1496638ce(lVar1);
  *(undefined2 *)(lVar1 + 0x700) = 0x101;
  return;
}



// FUNCTION 14456dff2 FUN_14456dff2 body=29 status=ok
// SIG undefined FUN_14456dff2(void)

undefined8 FUN_14456dff2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e05a FUN_14456e05a body=29 status=ok
// SIG undefined FUN_14456e05a(void)

undefined8 FUN_14456e05a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e078 FUN_14456e078 body=29 status=ok
// SIG undefined FUN_14456e078(void)

undefined8 FUN_14456e078(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e0aa FUN_14456e0aa body=93 status=ok
// SIG undefined FUN_14456e0aa(void)

void FUN_14456e0aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdacf70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdacf00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456e108 FUN_14456e108 body=93 status=ok
// SIG undefined FUN_14456e108(void)

void FUN_14456e108(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bdacf70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdacf00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456e166 FUN_14456e166 body=126 status=ok
// SIG undefined FUN_14456e166(void)

void FUN_14456e166(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bdacf70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdacf00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456e1d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456e1ee FUN_14456e1ee body=20 status=ok
// SIG undefined FUN_14456e1ee(void)

undefined1 FUN_14456e1ee(longlong param_1)

{
  FUN_149663c04(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14456e202 FUN_14456e202 body=29 status=ok
// SIG undefined FUN_14456e202(void)

undefined8 FUN_14456e202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e234 FUN_14456e234 body=93 status=ok
// SIG undefined FUN_14456e234(void)

void FUN_14456e234(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdacfe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456e292 FUN_14456e292 body=93 status=ok
// SIG undefined FUN_14456e292(void)

void FUN_14456e292(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdacfe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456e2f0 FUN_14456e2f0 body=126 status=ok
// SIG undefined FUN_14456e2f0(void)

void FUN_14456e2f0(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14bdacfe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456e35f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456e36e FUN_14456e36e body=46 status=ok
// SIG undefined FUN_14456e36e(void)

void FUN_14456e36e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 0x3a8) = 0;
  *(undefined2 *)(lVar1 + 0x700) = 0x101;
  FUN_1496638ce(lVar1);
  FUN_149663736(lVar1);
  return;
}



// FUNCTION 14456e39c FUN_14456e39c body=49 status=ok
// SIG undefined FUN_14456e39c(void)

undefined1 FUN_14456e39c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 0x3a8) = 0;
  *(undefined2 *)(lVar1 + 0x700) = 0x101;
  FUN_1496638ce(lVar1);
  FUN_149663736(lVar1);
  return 1;
}



// FUNCTION 14456e40a FUN_14456e40a body=29 status=ok
// SIG undefined FUN_14456e40a(void)

undefined8 FUN_14456e40a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e428 FUN_14456e428 body=76 status=ok
// SIG undefined FUN_14456e428(void)

void FUN_14456e428(longlong *param_1,undefined4 *param_2)

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
  (**(code **)(**(longlong **)(*param_1 + 0x2a0) + 0x2a0))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456e480 FUN_14456e480 body=12 status=ok
// SIG undefined FUN_14456e480(void)

void FUN_14456e480(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456e489. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456e48c FUN_14456e48c body=29 status=ok
// SIG undefined FUN_14456e48c(void)

undefined8 FUN_14456e48c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e4aa FUN_14456e4aa body=51 status=ok
// SIG undefined FUN_14456e4aa(void)

void FUN_14456e4aa(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 14456e516 FUN_14456e516 body=29 status=ok
// SIG undefined FUN_14456e516(void)

undefined8 FUN_14456e516(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e56c FUN_14456e56c body=29 status=ok
// SIG undefined FUN_14456e56c(void)

undefined8 FUN_14456e56c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e5bc FUN_14456e5bc body=29 status=ok
// SIG undefined FUN_14456e5bc(void)

undefined8 FUN_14456e5bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e60e FUN_14456e60e body=29 status=ok
// SIG undefined FUN_14456e60e(void)

undefined8 FUN_14456e60e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e660 FUN_14456e660 body=29 status=ok
// SIG undefined FUN_14456e660(void)

undefined8 FUN_14456e660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e6b0 FUN_14456e6b0 body=29 status=ok
// SIG undefined FUN_14456e6b0(void)

undefined8 FUN_14456e6b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e700 FUN_14456e700 body=29 status=ok
// SIG undefined FUN_14456e700(void)

undefined8 FUN_14456e700(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456e71e FUN_14456e71e body=136 status=ok
// SIG undefined FUN_14456e71e(void)

bool FUN_14456e71e(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146c149e0(*param_1,&local_30,*param_3);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return (local_20 - (double)param_1[4]) * (local_20 - (double)param_1[4]) +
           (local_30 - (double)param_1[2]) * (local_30 - (double)param_1[2]) +
           (local_28 - (double)param_1[3]) * (local_28 - (double)param_1[3]) <
           (double)*(float *)(param_1 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456e7a8 FUN_14456e7a8 body=128 status=ok
// SIG undefined FUN_14456e7a8(void)

bool FUN_14456e7a8(longlong *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  uVar1 = *param_3;
  lVar6 = *param_1;
  puVar2 = *(undefined8 **)(lVar6 + 0x728);
  lVar3 = puVar2[1];
  if (lVar3 == 0) {
    iVar4 = FUN_146bc96d4(*puVar2);
    puVar2 = *(undefined8 **)(lVar6 + 0x728);
    lVar6 = puVar2[1];
    if (lVar6 == 0) {
      iVar5 = FUN_146bc96d4(*puVar2,uVar1);
      goto LAB_14456e7ef;
    }
    lVar6 = *(longlong *)(lVar6 + 0x20);
  }
  else {
    lVar6 = *(longlong *)(lVar3 + 0x20);
    iVar4 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(*param_2 >> 9) * 8) +
                    (ulonglong)(*param_2 & 0x1ff) * 4);
  }
  iVar5 = *(int *)(*(longlong *)(lVar6 + (ulonglong)(uVar1 >> 9) * 8) +
                  (ulonglong)(uVar1 & 0x1ff) * 4);
LAB_14456e7ef:
  return iVar4 == iVar5;
}



// FUNCTION 14456e87c FUN_14456e87c body=178 status=ok
// SIG undefined FUN_14456e87c(void)

bool FUN_14456e87c(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146c13dec(*param_1,&local_30,*param_3);
  dVar1 = local_20 * (double)param_1[4] +
          local_30 * (double)param_1[2] + local_28 * (double)param_1[3];
  dVar2 = 1.0;
  if (dVar1 <= 1.0) {
    dVar2 = dVar1;
  }
  dVar2 = acos((double)(-(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar2));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return dVar2 * 57.29577951308232 < (double)*(int *)(param_1 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456e930 FUN_14456e930 body=256 status=ok
// SIG undefined FUN_14456e930(void)

bool FUN_14456e930(undefined8 *param_1,undefined8 param_2,uint *param_3)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)param_1[5];
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar1[9] - 1U & *param_3) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*plVar1 + (longlong)iVar3 * 0xc) == *param_3) {
          FUN_146c13dec(*param_1,&local_30);
          dVar5 = local_20 * (double)param_1[4] +
                  local_30 * (double)param_1[2] + local_28 * (double)param_1[3];
          dVar6 = 1.0;
          if (dVar5 <= 1.0) {
            dVar6 = dVar5;
          }
          dVar6 = acos((double)(-(ulonglong)(dVar5 < -1.0) & 0xbff0000000000000 |
                               ~-(ulonglong)(dVar5 < -1.0) & (ulonglong)dVar6));
          bVar2 = dVar6 * 57.29577951308232 < (double)*(int *)(param_1 + 1);
          goto LAB_14456e994;
        }
        iVar3 = *(int *)(*plVar1 + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  bVar2 = false;
LAB_14456e994:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456ea42 FUN_14456ea42 body=34 status=ok
// SIG undefined FUN_14456ea42(void)

undefined8
FUN_14456ea42(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  FUN_149667566(*param_2,param_1,*param_3,*param_4);
  return param_1;
}



// FUNCTION 14456ea8e FUN_14456ea8e body=29 status=ok
// SIG undefined FUN_14456ea8e(void)

undefined8 FUN_14456ea8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456eae6 FUN_14456eae6 body=29 status=ok
// SIG undefined FUN_14456eae6(void)

undefined8 FUN_14456eae6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456eb04 FUN_14456eb04 body=95 status=ok
// SIG undefined FUN_14456eb04(void)

void FUN_14456eb04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 *local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = &local_28;
  local_20 = &LAB_14456eb64;
  local_28 = param_3;
  local_10 = param_2;
  FUN_146bc6232(&local_10,*param_1,1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456eb72 FUN_14456eb72 body=267 status=ok
// SIG undefined FUN_14456eb72(void)

void FUN_14456eb72(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_188 [32];
  undefined8 *local_168;
  undefined8 local_160;
  void *local_158;
  int local_150;
  undefined4 local_14c;
  undefined1 local_148 [8];
  longlong local_140;
  int local_138;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = param_1;
  FUN_146c6a7a4(local_148,param_2,*param_1,1);
  if ((longlong)local_138 != 0) {
    lVar1 = 0;
    do {
      local_158 = (void *)0x0;
      local_150 = *(int *)(local_140 + 0x10 + lVar1);
      lVar2 = (longlong)local_150;
      _Src = *(void **)(local_140 + 8 + lVar1);
      if (lVar2 == 0) {
        local_14c = 0;
      }
      else {
        FUN_144a06ca8(&local_158,local_150,0);
        memcpy(local_158,_Src,lVar2 << 2);
      }
      FUN_148f6e68c(param_3,&local_158);
      lVar1 = lVar1 + 0x40;
    } while ((longlong)local_138 * 0x40 != lVar1);
  }
  local_160 = param_2;
  FUN_146bc7c58(&local_160,*local_168,1);
  FUN_146bc7b3e(local_148);
  if ((local_48 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456ec7e FUN_14456ec7e body=138 status=ok
// SIG undefined FUN_14456ec7e(void)

void FUN_14456ec7e(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)*param_1;
  lVar2 = plVar3[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *plVar3;
    lVar4 = 0;
    do {
      FUN_146c2c9fe(param_3,*(undefined4 *)(lVar1 + lVar4),1);
      lVar4 = lVar4 + 4;
    } while ((longlong)(int)lVar2 * 4 != lVar4);
    plVar3 = (longlong *)*param_1;
  }
  local_40 = param_2;
  FUN_146bcb306(&local_40,plVar3,1);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456ed0a FUN_14456ed0a body=271 status=ok
// SIG undefined FUN_14456ed0a(void)

void FUN_14456ed0a(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_d8 [40];
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = param_1[1];
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_a8 = param_3;
  local_a0 = param_2;
  FUN_142984384(&local_a0,*param_1);
  if ((longlong)(int)uStack_90 != 0) {
    local_b0 = local_98 + (int)uStack_90;
    plVar8 = local_98;
    do {
      plVar4 = (longlong *)*plVar8;
      iVar1 = *(int *)(param_2 + 0x1b0);
      *(int *)(param_2 + 0x1b0) = iVar1 + 1;
      lVar6 = (longlong)(int)plVar4[1];
      if (lVar6 != 0) {
        lVar5 = *plVar4;
        lVar7 = 0;
        do {
          uVar2 = *(undefined4 *)(lVar5 + lVar7);
          FUN_146c2c9fe(local_a8,uVar2,1);
          FUN_14837b7e4(*(undefined8 *)(lVar3 + 0x728),uVar2,iVar1,param_2);
          lVar7 = lVar7 + 4;
        } while (lVar6 * 4 != lVar7);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != local_b0);
  }
  FUN_146be9400(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456ee1a FUN_14456ee1a body=1214 status=ok
// SIG undefined FUN_14456ee1a(void)

void FUN_14456ee1a(longlong *param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  code *pcVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  ulonglong uVar22;
  undefined1 auStack_188 [40];
  code *local_160;
  longlong local_158;
  undefined4 local_150;
  undefined1 local_14c [4];
  code *local_148;
  undefined1 **local_140;
  undefined1 *local_138;
  code **ppcStack_130;
  double local_128;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8 [2];
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_158 = param_1[1];
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_e8[0] = 0;
  local_e8[1] = 0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = 0;
  local_a0 = 0;
  lVar19 = (longlong)*(int *)(*param_1 + 0x10);
  if (lVar19 != 0) {
    plVar21 = *(longlong **)(*param_1 + 8);
    plVar20 = plVar21 + lVar19 * 8;
    local_160 = param_3;
    do {
      lVar19 = plVar21[2];
      if (0 < (longlong)(int)lVar19) {
        uVar22 = 0;
        do {
          iVar5 = (int)uVar22;
          if (uVar22 == 0) {
            iVar5 = (int)plVar21[2];
          }
          lVar18 = plVar21[1];
          uVar11 = *(uint *)(lVar18 + -4 + (longlong)iVar5 * 4);
          lVar1 = *(longlong *)(*plVar21 + 0x10);
          lVar2 = *(longlong *)(lVar1 + (ulonglong)(uVar11 >> 9) * 8);
          uVar7 = (ulonglong)uVar11 & 0x1ff;
          uVar12 = uVar22 + 1;
          uVar11 = *(uint *)(lVar18 + ((longlong)
                                       ((ulonglong)(uint)((int)uVar12 >> 0x1f) << 0x20 |
                                       uVar12 & 0xffffffff) % (longlong)(int)plVar21[2] &
                                      0xffffffffU) * 4);
          lVar3 = *(longlong *)(lVar1 + (ulonglong)(uVar11 >> 9) * 8);
          uVar8 = (ulonglong)uVar11 & 0x1ff;
          uVar11 = *(uint *)(lVar18 + uVar22 * 4);
          lVar1 = *(longlong *)(lVar1 + (ulonglong)(uVar11 >> 9) * 8);
          uVar9 = (ulonglong)uVar11 & 0x1ff;
          local_128 = (*(double *)(lVar2 + 0x10 + uVar7 * 0x18) +
                      *(double *)(lVar3 + 0x10 + uVar8 * 0x18)) * 0.5 * 0.75 +
                      *(double *)(lVar1 + 0x10 + uVar9 * 0x18) * 0.25;
          ppcStack_130 = (code **)((*(double *)(lVar2 + 8 + uVar7 * 0x18) +
                                   *(double *)(lVar3 + 8 + uVar8 * 0x18)) * 0.5 * 0.75 +
                                  *(double *)(lVar1 + 8 + uVar9 * 0x18) * 0.25);
          local_138 = (undefined1 *)
                      ((*(double *)(lVar2 + uVar7 * 0x18) + *(double *)(lVar3 + uVar8 * 0x18)) * 0.5
                       * 0.75 + *(double *)(lVar1 + uVar9 * 0x18) * 0.25);
          local_150 = *(undefined4 *)(lVar18 + uVar22 * 4);
          local_148 = (code *)&local_150;
          local_140 = &local_138;
          FUN_1484a6baa(local_e8,local_14c,&local_148,0);
          uVar22 = uVar12;
        } while ((longlong)(int)lVar19 != uVar12);
      }
      iVar5 = local_c0;
      plVar21 = plVar21 + 8;
    } while (plVar21 != plVar20);
    if (local_c0 != 0) {
      puVar10 = local_c8;
      if (local_c8 == (uint *)0x0) {
        puVar10 = local_d8;
      }
      uVar11 = *puVar10;
      if (uVar11 == 0) {
        iVar15 = local_c0 + 0x1e;
        if (-1 < local_c0 + -1) {
          iVar15 = local_c0 + -1;
        }
        uVar22 = 0;
        uVar12 = (ulonglong)(uint)(iVar15 >> 5);
        if (iVar15 >> 5 < 1) {
          uVar12 = uVar22;
        }
        iVar15 = 0;
        do {
          if (uVar12 == uVar22) goto LAB_14456f1da;
          iVar15 = iVar15 + 0x20;
          uVar11 = puVar10[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar11 == 0);
      }
      else {
        uVar22 = 0;
        iVar15 = 0;
      }
      uVar7 = (ulonglong)(-uVar11 & uVar11);
      uVar12 = uVar7 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar6 < local_c0) {
        uVar11 = 0xffffffff;
        pcVar16 = local_160;
        do {
          local_140 = (undefined1 **)CONCAT71(local_140._1_7_,1);
          ppcStack_130 = &local_148;
          local_138 = &LAB_1482fe864;
          local_148 = pcVar16;
          FUN_146c03fd0(*(undefined8 *)pcVar16,*(undefined4 *)(local_e8[0] + (longlong)iVar6 * 0x28)
                        ,&local_138);
          uVar11 = ~(uint)uVar7 & uVar11;
          puVar10 = local_c8;
          if (local_c8 == (uint *)0x0) {
            puVar10 = local_d8;
          }
          iVar6 = (int)uVar22;
          lVar19 = (longlong)iVar6;
          uVar17 = puVar10[lVar19] & uVar11;
          if (uVar17 == 0) {
            iVar13 = local_c0 + 0x1e;
            if (-1 < local_c0 + -1) {
              iVar13 = local_c0 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar15 = iVar15 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar6) {
              iVar14 = iVar6;
            }
            if (iVar6 < iVar13) {
              lVar18 = 0;
              do {
                uVar17 = puVar10[lVar19 + lVar18 + 1];
                if (uVar17 != 0) {
                  uVar22 = (ulonglong)(iVar6 + (int)lVar18 + 1);
                  uVar11 = 0xffffffff;
                  goto LAB_14456f18f;
                }
                iVar15 = iVar15 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar14 - lVar19 != lVar18);
              uVar11 = 0xffffffff;
              iVar6 = iVar14;
            }
            uVar22 = (ulonglong)(iVar6 + 1);
            pcVar16 = local_160;
            iVar6 = local_c0;
          }
          else {
LAB_14456f18f:
            uVar7 = (ulonglong)(-uVar17 & uVar17);
            uVar12 = uVar7 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar6 = (iVar15 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (local_c0 <= iVar6) {
              iVar6 = local_c0;
            }
          }
        } while (iVar6 != iVar5);
      }
    }
  }
LAB_14456f1da:
  uVar4 = *(undefined8 *)(local_158 + 0x2a0);
  local_118 = 0;
  local_110 = 0;
  local_138 = (undefined1 *)0x0;
  ppcStack_130 = (code **)0x0;
  local_10c = 0xffffffff00000080;
  local_104 = 0;
  local_f8 = 0;
  local_f0 = 0;
  FUN_14850c1d2(&local_138,local_e8);
  local_148 = FUN_14456f2da;
  local_140 = &local_138;
  FUN_14851c368(uVar4);
  local_f0 = 0;
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(&local_138);
  local_a0 = 0;
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140aee53c(local_e8);
  if ((local_90 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14456f2da FUN_14456f2da body=482 status=ok
// SIG undefined FUN_14456f2da(void)

void FUN_14456f2da(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar16 = 0;
      uVar17 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar17 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar17 == uVar16) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar8[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar13 & uVar13);
    uVar18 = uVar17 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  if (iVar7 != iVar2) {
    uVar13 = 0xffffffff;
    do {
      puVar8 = (uint *)(*param_1 + (longlong)iVar7 * 0x28);
      uVar11 = *puVar8;
      cVar6 = FUN_146bfed03(puVar8 + 2);
      if (cVar6 != '\0') {
        lVar14 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(uVar11 >> 9) * 8);
        uVar18 = (ulonglong)(uVar11 & 0x1ff);
        *(undefined8 *)(lVar14 + 0x10 + uVar18 * 0x18) = *(undefined8 *)(puVar8 + 6);
        uVar11 = puVar8[3];
        uVar4 = puVar8[4];
        uVar5 = puVar8[5];
        puVar1 = (uint *)(lVar14 + uVar18 * 0x18);
        *puVar1 = puVar8[2];
        puVar1[1] = uVar11;
        puVar1[2] = uVar4;
        puVar1[3] = uVar5;
        if (*(char *)(param_2 + 0x210) == '\x01') {
          LOCK();
          *(int *)(param_2 + 0x214) = *(int *)(param_2 + 0x214) + 1;
          UNLOCK();
        }
      }
      uVar13 = uVar13 & ~(uint)uVar17;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar7 = (int)uVar16;
      lVar14 = (longlong)iVar7;
      uVar11 = puVar8[lVar14] & uVar13;
      if (uVar11 == 0) {
        iVar9 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar9 = iVar3 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar7 < iVar9) {
          lVar15 = 0;
          do {
            uVar11 = puVar8[lVar14 + lVar15 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar7 + (int)lVar15 + 1);
              uVar13 = 0xffffffff;
              goto LAB_14456f473;
            }
            iVar12 = iVar12 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar14 != lVar15);
          uVar13 = 0xffffffff;
          iVar7 = iVar10;
        }
        uVar16 = (ulonglong)(iVar7 + 1);
        iVar7 = iVar3;
      }
      else {
LAB_14456f473:
        uVar17 = (ulonglong)(-uVar11 & uVar11);
        uVar18 = uVar17 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar2);
  }
  return;
}



// FUNCTION 14456f504 FUN_14456f504 body=29 status=ok
// SIG undefined FUN_14456f504(void)

undefined8 FUN_14456f504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456f522 FUN_14456f522 body=29 status=ok
// SIG undefined FUN_14456f522(void)

undefined8 FUN_14456f522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456f554 FUN_14456f554 body=93 status=ok
// SIG undefined FUN_14456f554(void)

void FUN_14456f554(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456f5b2 FUN_14456f5b2 body=93 status=ok
// SIG undefined FUN_14456f5b2(void)

void FUN_14456f5b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456f610 FUN_14456f610 body=126 status=ok
// SIG undefined FUN_14456f610(void)

void FUN_14456f610(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedb1c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdad2a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456f67f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456f6aa FUN_14456f6aa body=38 status=ok
// SIG undefined FUN_14456f6aa(void)

undefined8 FUN_14456f6aa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb8) + 0xac) =
       (int)((ulonglong)param_3 >> 0x20);
  FUN_14966d45e();
  return 1;
}



// FUNCTION 14456f6d0 FUN_14456f6d0 body=29 status=ok
// SIG undefined FUN_14456f6d0(void)

undefined8 FUN_14456f6d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456f702 FUN_14456f702 body=93 status=ok
// SIG undefined FUN_14456f702(void)

void FUN_14456f702(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456f760 FUN_14456f760 body=93 status=ok
// SIG undefined FUN_14456f760(void)

void FUN_14456f760(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456f7be FUN_14456f7be body=126 status=ok
// SIG undefined FUN_14456f7be(void)

void FUN_14456f7be(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedb1c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdad310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456f82d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456f858 FUN_14456f858 body=38 status=ok
// SIG undefined FUN_14456f858(void)

undefined8 FUN_14456f858(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xb8) + 0xb0) =
       (int)((ulonglong)param_3 >> 0x20);
  FUN_14966d45e();
  return 1;
}



// FUNCTION 14456f87e FUN_14456f87e body=29 status=ok
// SIG undefined FUN_14456f87e(void)

undefined8 FUN_14456f87e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456f8b0 FUN_14456f8b0 body=93 status=ok
// SIG undefined FUN_14456f8b0(void)

void FUN_14456f8b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456f90e FUN_14456f90e body=93 status=ok
// SIG undefined FUN_14456f90e(void)

void FUN_14456f90e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aedb1c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bdad380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14456f96c FUN_14456f96c body=126 status=ok
// SIG undefined FUN_14456f96c(void)

void FUN_14456f96c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14aedb1c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bdad380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014456f9db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14456f9ea FUN_14456f9ea body=43 status=ok
// SIG undefined FUN_14456f9ea(void)

void FUN_14456f9ea(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14966dea2(uVar1,(double)(float)((ulonglong)param_3 >> 0x20));
  FUN_14966d45e(uVar1);
  return;
}



// FUNCTION 14456fa16 FUN_14456fa16 body=46 status=ok
// SIG undefined FUN_14456fa16(void)

undefined1 FUN_14456fa16(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_14966dea2(uVar1,(double)(float)((ulonglong)param_3 >> 0x20));
  FUN_14966d45e(uVar1);
  return 1;
}



// FUNCTION 14456fa44 FUN_14456fa44 body=57 status=ok
// SIG undefined FUN_14456fa44(void)

undefined8 FUN_14456fa44(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = FUN_14081cebe();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar1 + 0x30) >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 14456faba FUN_14456faba body=8 status=ok
// SIG undefined FUN_14456faba(void)

void FUN_14456faba(undefined8 *param_1)

{
  FUN_149676268(*param_1);
  return;
}



// FUNCTION 14456fac6 FUN_14456fac6 body=5 status=ok
// SIG undefined FUN_14456fac6(void)

longlong FUN_14456fac6(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14456facc FUN_14456facc body=12 status=ok
// SIG undefined FUN_14456facc(void)

void FUN_14456facc(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456fad5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456fad8 FUN_14456fad8 body=29 status=ok
// SIG undefined FUN_14456fad8(void)

undefined8 FUN_14456fad8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456faf6 FUN_14456faf6 body=212 status=ok
// SIG undefined FUN_14456faf6(void)

void FUN_14456faf6(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = param_1[1];
  iVar1 = *(int *)(*(longlong *)*param_1 + 0x170);
  pdVar3 = (double *)param_1[2];
  dVar5 = (double)(-(ulonglong)(0.0 <= pdVar3[5] - pdVar3[2]) & (ulonglong)(pdVar3[5] - pdVar3[2]));
  dVar6 = (double)(-(ulonglong)(0.0 <= pdVar3[4] - pdVar3[1]) & (ulonglong)(pdVar3[4] - pdVar3[1]));
  uVar4 = -(ulonglong)(dVar5 <= dVar6);
  dVar5 = (double)(~uVar4 & (ulonglong)dVar5 | uVar4 & (ulonglong)dVar6);
  dVar6 = (double)(-(ulonglong)(0.0 <= pdVar3[3] - *pdVar3) & (ulonglong)(pdVar3[3] - *pdVar3));
  uVar4 = -(ulonglong)(dVar5 <= dVar6);
  dVar5 = (double)(uVar4 & (ulonglong)dVar6 | ~uVar4 & (ulonglong)dVar5);
  if (100000 < iVar1) {
    dVar5 = dVar5 / 10.0;
  }
  *(double *)(lVar2 + 0xda0) = dVar5;
  *(uint *)(lVar2 + 0xdb0) = (uint)(iVar1 < 0x186a1) * 4 + 4;
  FUN_1460286e0(lVar2 + 0xda0,*(undefined8 *)*param_1);
  return;
}



// FUNCTION 14456fbce FUN_14456fbce body=5 status=ok
// SIG undefined FUN_14456fbce(void)

longlong FUN_14456fbce(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14456fbd4 FUN_14456fbd4 body=12 status=ok
// SIG undefined FUN_14456fbd4(void)

void FUN_14456fbd4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456fbdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456fbe0 FUN_14456fbe0 body=29 status=ok
// SIG undefined FUN_14456fbe0(void)

undefined8 FUN_14456fbe0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456fbfe FUN_14456fbfe body=79 status=ok
// SIG undefined FUN_14456fbfe(void)

void FUN_14456fbfe(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0xfb8) = *(undefined8 *)param_1[1];
  *(undefined8 *)(lVar1 + 0xfc0) = 0;
  FUN_146bee918(lVar1 + 0xfb0,0);
  *(ulonglong *)(lVar1 + 0xfc0) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar1 + 0xfb8) + 0x214) +
             *(int *)(*(longlong *)(lVar1 + 0xfb8) + 0x218));
  return;
}



// FUNCTION 14456fc52 FUN_14456fc52 body=5 status=ok
// SIG undefined FUN_14456fc52(void)

longlong FUN_14456fc52(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14456fc58 FUN_14456fc58 body=12 status=ok
// SIG undefined FUN_14456fc58(void)

void FUN_14456fc58(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456fc61. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14456fc64 FUN_14456fc64 body=29 status=ok
// SIG undefined FUN_14456fc64(void)

undefined8 FUN_14456fc64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456fcb4 FUN_14456fcb4 body=29 status=ok
// SIG undefined FUN_14456fcb4(void)

undefined8 FUN_14456fcb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456fcd2 FUN_14456fcd2 body=76 status=ok
// SIG undefined FUN_14456fcd2(void)

void FUN_14456fcd2(longlong *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  *(undefined1 *)(param_1[0x177] + 0xba) = *(undefined1 *)(param_1[0x176] + 0xa9);
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x20],cVar1 != '\x04');
  FUN_1496b51e2(param_1,0);
  return;
}



// FUNCTION 14456fd48 FUN_14456fd48 body=29 status=ok
// SIG undefined FUN_14456fd48(void)

undefined8 FUN_14456fd48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456fd98 FUN_14456fd98 body=29 status=ok
// SIG undefined FUN_14456fd98(void)

undefined8 FUN_14456fd98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456fdf4 FUN_14456fdf4 body=29 status=ok
// SIG undefined FUN_14456fdf4(void)

undefined8 FUN_14456fdf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456fe44 FUN_14456fe44 body=29 status=ok
// SIG undefined FUN_14456fe44(void)

undefined8 FUN_14456fe44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456fe62 FUN_14456fe62 body=116 status=ok
// SIG undefined FUN_14456fe62(void)

undefined8 * FUN_14456fe62(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdad770;
  puVar2[0xb] = 0x4018000000000000;
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 14456feec FUN_14456feec body=29 status=ok
// SIG undefined FUN_14456feec(void)

undefined8 FUN_14456feec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456ff0a FUN_14456ff0a body=116 status=ok
// SIG undefined FUN_14456ff0a(void)

undefined8 * FUN_14456ff0a(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  uVar1 = DAT_14c8464e8;
  puVar2[4] = DAT_14c8464e0;
  puVar2[5] = uVar1;
  puVar2[6] = DAT_14c8464f0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0x3ff0000000000000;
  *puVar2 = &PTR_FUN_14bdad770;
  puVar2[0xb] = 0x4018000000000000;
  *param_1 = puVar2;
  return param_1;
}



// FUNCTION 14456ff94 FUN_14456ff94 body=29 status=ok
// SIG undefined FUN_14456ff94(void)

undefined8 FUN_14456ff94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456ffe6 FUN_14456ffe6 body=29 status=ok
// SIG undefined FUN_14456ffe6(void)

undefined8 FUN_14456ffe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570004 FUN_144570004 body=43 status=ok
// SIG undefined FUN_144570004(void)

void FUN_144570004(undefined8 *param_1,undefined8 *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  
  UNRECOVERED_JUMPTABLE = (code *)*param_2;
  uVar1 = param_2[1];
  uVar2 = (**(code **)(*(longlong *)*param_1 + 0x420))();
                    /* WARNING: Could not recover jumptable at 0x00014457002c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,uVar2);
  return;
}



// FUNCTION 14457003a FUN_14457003a body=12 status=ok
// SIG undefined FUN_14457003a(void)

void FUN_14457003a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144570043. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144570046 FUN_144570046 body=29 status=ok
// SIG undefined FUN_144570046(void)

undefined8 FUN_144570046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570064 FUN_144570064 body=91 status=ok
// SIG undefined FUN_144570064(void)

void FUN_144570064(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0x1000000010101;
  local_18 = 0;
  FUN_148506f34(*(undefined8 *)(*param_1 + 0xa0),param_2,1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445700f6 FUN_1445700f6 body=29 status=ok
// SIG undefined FUN_1445700f6(void)

undefined8 FUN_1445700f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14457014a FUN_14457014a body=29 status=ok
// SIG undefined FUN_14457014a(void)

undefined8 FUN_14457014a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570168 FUN_144570168 body=183 status=ok
// SIG undefined FUN_144570168(void)

void FUN_144570168(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  double *pdVar2;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = *param_2;
  lVar1 = param_1[3];
  FUN_146c149e0(*(undefined8 *)*param_1,&local_40);
  pdVar2 = (double *)param_1[1];
  if ((local_30 - pdVar2[2]) * (local_30 - pdVar2[2]) +
      (local_40 - *pdVar2) * (local_40 - *pdVar2) + (local_38 - pdVar2[1]) * (local_38 - pdVar2[1])
      < (double)*(float *)param_1[2]) {
    FUN_1447cbafe(lVar1 + 0xd28,&local_40,&local_24,0);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144570220 FUN_144570220 body=311 status=ok
// SIG undefined FUN_144570220(void)

undefined8 FUN_144570220(undefined8 *param_1,undefined4 *param_2,int *param_3)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined1 auStack_68 [40];
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar6 = *param_3;
  uVar1 = *param_2;
  FUN_146c149e0(*(undefined8 *)*param_1,&local_40,iVar6);
  pdVar2 = (double *)param_1[1];
  if ((local_30 - pdVar2[2]) * (local_30 - pdVar2[2]) +
      (local_40 - *pdVar2) * (local_40 - *pdVar2) + (local_38 - pdVar2[1]) * (local_38 - pdVar2[1])
      < (double)*(float *)param_1[2]) {
    puVar3 = (undefined8 *)param_1[3];
    lVar4 = puVar3[2];
    if (*(char *)*puVar3 != '\0') {
      lVar7 = (longlong)iVar6;
      lVar5 = *(longlong *)(lVar4 + 0x1110);
      pdVar2 = (double *)puVar3[1];
      dVar9 = pdVar2[2] * *(double *)(lVar5 + 0x10 + lVar7 * 0x18) +
              *pdVar2 * *(double *)(lVar5 + lVar7 * 0x18) +
              pdVar2[1] * *(double *)(lVar5 + 8 + lVar7 * 0x18);
      if (dVar9 < *(double *)puVar3[3] || dVar9 == *(double *)puVar3[3]) goto LAB_1445702f2;
    }
    iVar6 = FUN_146c08e54(*(undefined8 *)puVar3[4],uVar1,iVar6);
    if (((*(char *)puVar3[5] == '\0') ||
        (*(int *)(*(longlong *)(lVar4 + 0x1120) + (longlong)iVar6 * 4) == 0)) &&
       ((*(char *)puVar3[6] == '\0' ||
        (*(int *)(*(longlong *)(lVar4 + 0x1130) + (longlong)iVar6 * 4) == 0)))) {
      uVar8 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),1);
      goto LAB_1445702f4;
    }
  }
LAB_1445702f2:
  uVar8 = 0;
LAB_1445702f4:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144570358 FUN_144570358 body=165 status=ok
// SIG undefined FUN_144570358(void)

undefined8 FUN_144570358(undefined8 *param_1,undefined4 *param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  double *pdVar3;
  int iVar4;
  longlong lVar5;
  double dVar6;
  
  lVar5 = (longlong)*param_3;
  param_1 = (undefined8 *)*param_1;
  lVar1 = param_1[2];
  if (*(char *)*param_1 != '\0') {
    lVar2 = *(longlong *)(lVar1 + 0x1110);
    pdVar3 = (double *)param_1[1];
    dVar6 = pdVar3[2] * *(double *)(lVar2 + 0x10 + lVar5 * 0x18) +
            *pdVar3 * *(double *)(lVar2 + lVar5 * 0x18) +
            pdVar3[1] * *(double *)(lVar2 + 8 + lVar5 * 0x18);
    if (dVar6 < *(double *)param_1[3] || dVar6 == *(double *)param_1[3]) {
      return 0;
    }
  }
  iVar4 = FUN_146c08e54(*(undefined8 *)param_1[4],*param_2);
  if (((*(char *)param_1[5] == '\0') ||
      (*(int *)(*(longlong *)(lVar1 + 0x1120) + (longlong)iVar4 * 4) == 0)) &&
     ((*(char *)param_1[6] == '\0' ||
      (*(int *)(*(longlong *)(lVar1 + 0x1130) + (longlong)iVar4 * 4) == 0)))) {
    return CONCAT71((int7)(int3)((uint)iVar4 >> 8),1);
  }
  return 0;
}



// FUNCTION 1445703fe FUN_1445703fe body=148 status=ok
// SIG undefined FUN_1445703fe(void)

ulonglong FUN_1445703fe(longlong *param_1,undefined8 param_2,uint *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  bool bVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = (*(undefined8 **)(param_1[1] + 0xc38))[1];
  if (lVar2 == 0) {
    uVar3 = FUN_146bc96d4(**(undefined8 **)(param_1[1] + 0xc38));
  }
  else {
    uVar3 = *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)(*param_3 >> 9) * 8) +
                     (ulonglong)(*param_3 & 0x1ff) * 4);
  }
  if ((int)plVar1[1] != *(int *)((longlong)plVar1 + 0x34)) {
    plVar4 = plVar1 + 7;
    if ((longlong *)plVar1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)plVar1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)plVar1[9] - 1U & uVar3) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(uint *)(*plVar1 + (longlong)iVar6 * 0xc) == uVar3;
        uVar5 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) break;
        iVar6 = *(int *)(*plVar1 + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
      goto LAB_144570480;
    }
  }
  uVar5 = 0;
LAB_144570480:
  return uVar5 & 0xffffffff;
}



// FUNCTION 144570492 FUN_144570492 body=593 status=ok
// SIG undefined FUN_144570492(void)

void FUN_144570492(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *param_2;
  lVar2 = param_1[1];
  if (-1 < (longlong)(int)uVar1) {
    lVar6 = *(longlong *)*param_1;
    if ((int)uVar1 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24)) {
      uVar8 = (ulonglong)(uVar1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar1 >> 9) * 8) +
                             uVar8 * 2) - 1U) < 0xfffe) {
        lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar1 >> 9) * 8);
        local_80 = *(double *)(lVar6 + 0x10 + uVar8 * 0x18) * *(double *)(lVar2 + 0x208);
        local_88 = *(double *)(lVar6 + 8 + uVar8 * 0x18) * *(double *)(lVar2 + 0x200);
        local_90 = *(double *)(lVar6 + uVar8 * 0x18) * *(double *)(lVar2 + 0x1f8);
        FUN_146bed047(&local_78,lVar2 + 0x1c0);
        local_68 = local_68 + *(double *)(lVar2 + 0x1f0);
        local_70 = local_70 + *(double *)(lVar2 + 0x1e8);
        local_78 = local_78 + *(double *)(lVar2 + 0x1e0);
        FUN_1484fdfd2(param_1[2],&local_90,&local_78);
        dVar3 = 0.0;
        if (1 < *(int *)param_1[4]) {
          lVar6 = 1;
          lVar7 = 0x18;
          dVar9 = **(double **)param_1[3] - local_90;
          dVar10 = (*(double **)param_1[3])[1] - local_88;
          dVar3 = 0.0;
          do {
            dVar5 = *(double *)(*(longlong *)param_1[3] + lVar7) - local_88;
            dVar4 = *(double *)(*(longlong *)param_1[3] + -8 + lVar7) - local_90;
            dVar9 = atan2(dVar9 * dVar5 - dVar10 * dVar4,dVar9 * dVar4 + dVar10 * dVar5);
            dVar3 = dVar3 + dVar9;
            lVar6 = lVar6 + 1;
            lVar7 = lVar7 + 0x10;
            dVar9 = dVar4;
            dVar10 = dVar5;
          } while (lVar6 < *(int *)param_1[4]);
        }
        dVar3 = dVar3 / 6.283185307179586;
        uVar8 = -(ulonglong)(-dVar3 <= dVar3);
        *(uint *)(*(longlong *)(lVar2 + 0xca8) + (ulonglong)uVar1 * 4) =
             (uint)(0.3 < (double)(~uVar8 & (ulonglong)-dVar3 | (ulonglong)dVar3 & uVar8));
        goto LAB_14457051f;
      }
    }
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0xca8) + (longlong)(int)uVar1 * 4) = 0xffffffff;
LAB_14457051f:
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445706e4 FUN_1445706e4 body=661 status=ok
// SIG undefined FUN_1445706e4(void)

void FUN_1445706e4(longlong *param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  double *pdVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  double dVar8;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  longlong local_90;
  code *local_88;
  longlong *local_80;
  longlong local_78;
  code *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = (longlong)*param_2;
  lVar2 = *param_1;
  *(undefined1 *)(*(longlong *)(lVar2 + 0xcc8) + lVar7) = 1;
  uVar3 = *(undefined8 *)param_1[1];
  uVar1 = *(undefined4 *)(*(longlong *)param_1[2] + lVar7 * 4);
  FUN_146c149e0(uVar3,&local_a8,uVar1);
  FUN_146c13dec(uVar3,&local_c0,uVar1);
  pdVar4 = (double *)param_1[3];
  if (0.0 < (local_98 - pdVar4[2]) * local_b0 +
            (local_a8 - *pdVar4) * local_c0 + (local_a0 - pdVar4[1]) * local_b8) {
    *(undefined1 *)(*(longlong *)(lVar2 + 0xcc8) + lVar7) = 0;
  }
  if (*(char *)(*(longlong *)(lVar2 + 3000) + 0xb2) == '\x02') {
    pdVar4 = (double *)param_1[3];
    local_98 = local_98 - pdVar4[2];
    local_a0 = local_a0 - pdVar4[1];
    local_a8 = local_a8 - *pdVar4;
    dVar5 = SQRT(local_98 * local_98 + local_a8 * local_a8 + local_a0 * local_a0);
    local_d8 = 0.0;
    dVar8 = 1.0 / dVar5;
    local_e0 = (double)(-(ulonglong)(0.0 < dVar5) & (ulonglong)(local_a8 * dVar8));
    if (0.0 < dVar5) {
      local_d0 = local_98 * dVar8;
      local_d8 = local_a0 * dVar8;
    }
    else {
      local_d0 = 0.0;
    }
    local_90 = lVar2 + 0xda0;
    local_e8 = pdVar4[2];
    local_f8 = *pdVar4;
    dStack_f0 = pdVar4[1];
    dVar8 = local_d0 * local_d0 + local_e0 * local_e0 + local_d8 * local_d8;
    if (9.99999993922529e-09 < dVar8) {
      dVar8 = 1.0 / SQRT(dVar8);
      local_e0 = local_e0 * dVar8;
      local_d8 = local_d8 * dVar8;
      local_d0 = local_d0 * dVar8;
    }
    local_68 = &local_78;
    local_70 = FUN_14963f300;
    local_80 = &local_90;
    local_88 = FUN_14963f376;
    local_108 = 0x7fefffffffffffff;
    local_78 = local_90;
    iVar6 = FUN_146c87396(local_90,&local_f8);
    if (iVar6 != *(int *)(*(longlong *)param_1[2] + lVar7 * 4)) {
      *(undefined1 *)(*(longlong *)(lVar2 + 0xcc8) + lVar7) = 0;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457097a FUN_14457097a body=154 status=ok
// SIG undefined FUN_14457097a(void)

undefined8 FUN_14457097a(longlong param_1,undefined4 *param_2)

{
  double *pdVar1;
  undefined1 auStack_88 [32];
  double *local_68;
  undefined1 local_58 [8];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &local_50;
  FUN_146c1477c(*(undefined8 *)(param_1 + 8),*param_2,&local_38,local_58);
  pdVar1 = *(double **)(param_1 + 0x10);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)pdVar1 >> 8),
                    (local_40 - pdVar1[2]) * local_28 +
                    (local_50 - *pdVar1) * local_38 + (local_48 - pdVar1[1]) * local_30 < 0.0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144570a16 FUN_144570a16 body=22 status=ok
// SIG undefined FUN_144570a16(void)

void FUN_144570a16(longlong *param_1)

{
  FUN_1468b3f6e(*param_1 + 0xc40,*param_1 + 0xd28);
  return;
}



// FUNCTION 144570a30 FUN_144570a30 body=5 status=ok
// SIG undefined FUN_144570a30(void)

longlong FUN_144570a30(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144570a36 FUN_144570a36 body=12 status=ok
// SIG undefined FUN_144570a36(void)

void FUN_144570a36(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144570a3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144570a42 FUN_144570a42 body=29 status=ok
// SIG undefined FUN_144570a42(void)

undefined8 FUN_144570a42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570ab0 FUN_144570ab0 body=29 status=ok
// SIG undefined FUN_144570ab0(void)

undefined8 FUN_144570ab0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570af8 FUN_144570af8 body=29 status=ok
// SIG undefined FUN_144570af8(void)

undefined8 FUN_144570af8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570b16 FUN_144570b16 body=128 status=ok
// SIG undefined FUN_144570b16(void)

void FUN_144570b16(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_30;
  local_20 = FUN_144570c62;
  local_30 = param_3;
  local_28 = param_4;
  (**(code **)(*(longlong *)param_1[0x17f] + 0xbd0))((longlong *)param_1[0x17f],&local_20,1);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar1 + 0x348))(plVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144570b98 FUN_144570b98 body=128 status=ok
// SIG undefined FUN_144570b98(void)

void FUN_144570b98(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  code *local_20;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = &local_30;
  local_20 = FUN_144570c62;
  local_30 = param_3;
  local_28 = param_4;
  (**(code **)(*(longlong *)param_1[0x17f] + 0xbd0))((longlong *)param_1[0x17f],&local_20,1);
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar1 + 0x348))(plVar1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144570c44 FUN_144570c44 body=29 status=ok
// SIG undefined FUN_144570c44(void)

undefined8 FUN_144570c44(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570c62 FUN_144570c62 body=122 status=ok
// SIG undefined FUN_144570c62(void)

void FUN_144570c62(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(*param_1 + 8);
  if (0 < (longlong)iVar1) {
    lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x40);
    lVar6 = 0;
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)*param_1 + lVar7 * 4);
      lVar4 = *(longlong *)param_1[1];
      lVar5 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar2 >> 7 & 0x7fffff) * 8) +
          (ulonglong)((uVar2 & 0x7f) << 4) + lVar5 * 4) = *(undefined4 *)(lVar4 + lVar6 + lVar5 * 4)
        ;
        lVar5 = lVar5 + 1;
      } while (lVar5 != 4);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 != iVar1);
  }
  return;
}



// FUNCTION 144570cdc FUN_144570cdc body=176 status=ok
// SIG undefined FUN_144570cdc(void)

void FUN_144570cdc(undefined8 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_2;
  if (-1 < (int)uVar2) {
    lVar3 = *(longlong *)*param_1;
    if (((int)uVar2 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144)) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                           (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      lVar4 = param_1[1];
      FUN_146c13dec(lVar3,&local_38,uVar2);
      lVar3 = *(longlong *)(lVar4 + 0x1110);
      *(undefined8 *)(lVar3 + 0x10 + (ulonglong)uVar2 * 0x18) = local_28;
      puVar1 = (undefined4 *)(lVar3 + (ulonglong)uVar2 * 0x18);
      *puVar1 = local_38;
      puVar1[1] = uStack_34;
      puVar1[2] = uStack_30;
      puVar1[3] = uStack_2c;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144570d8e FUN_144570d8e body=153 status=ok
// SIG undefined FUN_144570d8e(void)

void FUN_144570d8e(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar1 = *param_2;
  uVar4 = (ulonglong)uVar1;
  if (((-1 < (int)uVar1) &&
      (lVar2 = *(longlong *)*param_1,
      (int)uVar1 < *(int *)(lVar2 + 0x1d0) * 0x200 + *(int *)(lVar2 + 0x1d4))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar2 + 0x1d8) + (ulonglong)(uVar1 >> 9) * 8)
                         + (ulonglong)(uVar1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar2 = param_1[1];
    bVar3 = FUN_146c1a770(*(undefined8 *)param_1[2],uVar4,0);
    *(uint *)(*(longlong *)(lVar2 + 0x1120) + uVar4 * 4) = (uint)bVar3;
    bVar3 = FUN_146c1aaf4(*(undefined8 *)param_1[3],uVar1,0);
    *(uint *)(*(longlong *)(lVar2 + 0x1130) + uVar4 * 4) = (uint)bVar3;
  }
  return;
}



// FUNCTION 144570e28 FUN_144570e28 body=90 status=ok
// SIG undefined FUN_144570e28(void)

void FUN_144570e28(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  FUN_14851dbee(*(undefined8 *)(lVar1 + 0xba8),*param_4);
  lVar3 = (longlong)*(int *)(*(longlong *)(lVar1 + 0xba8) + 0x30);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0xba8) + 0x28);
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x10))();
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  FUN_149670ae8(lVar1);
  return;
}



// FUNCTION 144570e98 FUN_144570e98 body=29 status=ok
// SIG undefined FUN_144570e98(void)

undefined8 FUN_144570e98(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570eb6 FUN_144570eb6 body=206 status=ok
// SIG undefined FUN_144570eb6(void)

void FUN_144570eb6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  iVar1 = *(int *)(*param_1 + 0x170);
  lVar2 = param_1[7];
  dVar4 = (double)(-(ulonglong)(0.0 <= (double)param_1[6] - (double)param_1[3]) &
                  (ulonglong)((double)param_1[6] - (double)param_1[3]));
  dVar5 = (double)(-(ulonglong)(0.0 <= (double)param_1[5] - (double)param_1[2]) &
                  (ulonglong)((double)param_1[5] - (double)param_1[2]));
  uVar3 = -(ulonglong)(dVar4 <= dVar5);
  dVar4 = (double)(~uVar3 & (ulonglong)dVar4 | uVar3 & (ulonglong)dVar5);
  dVar5 = (double)(-(ulonglong)(0.0 <= (double)param_1[4] - (double)param_1[1]) &
                  (ulonglong)((double)param_1[4] - (double)param_1[1]));
  uVar3 = -(ulonglong)(dVar4 <= dVar5);
  dVar4 = (double)(uVar3 & (ulonglong)dVar5 | ~uVar3 & (ulonglong)dVar4);
  if (iVar1 < 0x186a1) {
    dVar4 = dVar4 * 0.5;
  }
  else {
    dVar4 = dVar4 / 10.0;
  }
  *(double *)(lVar2 + 0x1240) = dVar4;
  *(uint *)(lVar2 + 0x1250) = (uint)(iVar1 < 0x186a1) * 4 + 4;
  FUN_1460286e0(lVar2 + 0x1240,*param_1);
  return;
}



// FUNCTION 144570f88 FUN_144570f88 body=5 status=ok
// SIG undefined FUN_144570f88(void)

longlong FUN_144570f88(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144570f8e FUN_144570f8e body=29 status=ok
// SIG undefined FUN_144570f8e(void)

void FUN_144570f8e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144570fac FUN_144570fac body=29 status=ok
// SIG undefined FUN_144570fac(void)

undefined8 FUN_144570fac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144570fca FUN_144570fca body=343 status=ok
// SIG undefined FUN_144570fca(void)

void FUN_144570fca(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = param_1[1];
  plVar1 = (longlong *)(lVar6 + 0xc00);
  iVar5 = *(int *)(*param_1 + 0x140) * 0x200 + *(int *)(*param_1 + 0x144);
  iVar4 = *(int *)(lVar6 + 0xc08);
  if (iVar4 < iVar5) {
    *(int *)(lVar6 + 0xc08) = iVar5;
    if ((uint)(*(int *)(lVar6 + 0xc0c) - iVar4) < (uint)(iVar5 - iVar4)) {
      FUN_1446f48e2(plVar1);
    }
    memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(iVar5 - iVar4) << 2);
  }
  else {
    if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar5);
    }
    if (iVar5 < iVar4) {
      *(int *)(lVar6 + 0xc08) = iVar5;
      FUN_14479f406(plVar1);
    }
  }
  local_80 = *param_1;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  local_58 = 0;
  FUN_142984024(&local_80);
  if ((longlong)(int)uStack_70 != 0) {
    iVar4 = 1;
    plVar3 = local_78;
    do {
      lVar6 = (longlong)(int)((longlong *)*plVar3)[1];
      if (lVar6 != 0) {
        lVar2 = *(longlong *)*plVar3;
        lVar7 = 0;
        do {
          *(int *)(*plVar1 + (longlong)*(int *)(lVar2 + lVar7) * 4) = iVar4;
          lVar7 = lVar7 + 4;
        } while (lVar6 * 4 != lVar7);
      }
      iVar4 = iVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (plVar3 != local_78 + (int)uStack_70);
  }
  FUN_146be9400(&local_78);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144571128 FUN_144571128 body=5 status=ok
// SIG undefined FUN_144571128(void)

longlong FUN_144571128(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14457112e FUN_14457112e body=12 status=ok
// SIG undefined FUN_14457112e(void)

void FUN_14457112e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14457113a FUN_14457113a body=29 status=ok
// SIG undefined FUN_14457113a(void)

undefined8 FUN_14457113a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571158 FUN_144571158 body=9 status=ok
// SIG undefined FUN_144571158(void)

void FUN_144571158(longlong param_1)

{
  FUN_14967c664(*(undefined8 *)(param_1 + 8));
  return;
}



// FUNCTION 144571166 FUN_144571166 body=5 status=ok
// SIG undefined FUN_144571166(void)

longlong FUN_144571166(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14457116c FUN_14457116c body=12 status=ok
// SIG undefined FUN_14457116c(void)

void FUN_14457116c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571175. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144571178 FUN_144571178 body=29 status=ok
// SIG undefined FUN_144571178(void)

undefined8 FUN_144571178(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571196 FUN_144571196 body=103 status=ok
// SIG undefined FUN_144571196(void)

void FUN_144571196(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = param_1[1];
  puVar4 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  uVar2 = *param_1;
  puVar4[1] = 0;
  *puVar4 = uVar2;
  puVar4[2] = 0xffffffff;
  FUN_148376a28(puVar4);
  lVar3 = *(longlong *)(lVar1 + 0xbf8);
  *(undefined8 **)(lVar1 + 0xbf8) = puVar4;
  if (lVar3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 144571202 FUN_144571202 body=5 status=ok
// SIG undefined FUN_144571202(void)

longlong FUN_144571202(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144571208 FUN_144571208 body=12 status=ok
// SIG undefined FUN_144571208(void)

void FUN_144571208(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144571214 FUN_144571214 body=29 status=ok
// SIG undefined FUN_144571214(void)

undefined8 FUN_144571214(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571232 FUN_144571232 body=31 status=ok
// SIG undefined FUN_144571232(void)

void FUN_144571232(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144569cac(lVar1,0);
  *(undefined1 *)(lVar1 + 0xdb0) = 0;
  return;
}



// FUNCTION 144571256 FUN_144571256 body=5 status=ok
// SIG undefined FUN_144571256(void)

longlong FUN_144571256(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14457125c FUN_14457125c body=12 status=ok
// SIG undefined FUN_14457125c(void)

void FUN_14457125c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571265. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144571268 FUN_144571268 body=29 status=ok
// SIG undefined FUN_144571268(void)

undefined8 FUN_144571268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571286 FUN_144571286 body=143 status=ok
// SIG undefined FUN_144571286(void)

void FUN_144571286(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[2];
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  FUN_1484b78ec(*param_1,param_1[1],puVar2,0x4000);
  FUN_1484b74d4(puVar2,*param_1);
  local_28 = puVar2;
  (**(code **)(**(longlong **)(lVar1 + 0xbe8) + 0xc28))();
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14457131a FUN_14457131a body=5 status=ok
// SIG undefined FUN_14457131a(void)

longlong FUN_14457131a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144571320 FUN_144571320 body=12 status=ok
// SIG undefined FUN_144571320(void)

void FUN_144571320(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144571329. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14457132c FUN_14457132c body=29 status=ok
// SIG undefined FUN_14457132c(void)

undefined8 FUN_14457132c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445713f6 FUN_1445713f6 body=29 status=ok
// SIG undefined FUN_1445713f6(void)

undefined8 FUN_1445713f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144571414 FUN_144571414 body=155 status=ok
// SIG undefined FUN_144571414(void)

undefined8 * FUN_144571414(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_2;
  uVar2 = FUN_14001cc68(0xa0,0x10);
  local_68[0] = *(longlong *)(lVar1 + 0x1200);
  local_58[0] = 0;
  if (local_68[0] != 0) {
    puVar3 = (undefined8 *)(lVar1 + 0x1220);
    if (*(undefined8 **)(lVar1 + 0x1210) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(lVar1 + 0x1210);
    }
    (**(code **)*puVar3)(puVar3,local_58);
  }
  FUN_149688a32(uVar2,local_68);
  *param_1 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445714c6 FUN_1445714c6 body=29 status=ok
// SIG undefined FUN_1445714c6(void)

undefined8 FUN_1445714c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


